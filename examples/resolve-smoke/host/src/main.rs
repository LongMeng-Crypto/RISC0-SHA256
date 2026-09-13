use std::{path::Path, time::Instant};

use anyhow::{ensure, Context, Result};
use methods::{RISC0_SHA256_RESOLVE_GUEST_ELF as ELF, RISC0_SHA256_RESOLVE_GUEST_ID as ID};
use risc0_zkvm::{
    default_executor, default_prover, recursion, serde, ExecutorEnv, InnerReceipt, ProverOpts,
    Receipt, VerifierContext, DEFAULT_MAX_PO2,
};

fn context() -> Result<VerifierContext> {
    VerifierContext::from_max_po2_with_hashfn_public("sha-256", DEFAULT_MAX_PO2)
}

fn verify(receipt: &Receipt, step: u32, state: u32) -> Result<()> {
    receipt.verify_with_context(&context()?, ID)?;
    let journal: ([u32; 8], u32, u32) = receipt.journal.decode()?;
    ensure!(
        journal == (ID, step, state),
        "unexpected chain ID, step, or state"
    );
    let inner = receipt.inner.succinct()?;
    ensure!(inner.hashfn == "sha-256", "wrong proof hash suite");
    let claim = inner.claim.as_value()?;
    let output = claim
        .output
        .as_value()?
        .as_ref()
        .context("missing output")?;
    ensure!(output.assumptions.is_empty(), "unresolved assumptions");
    Ok(())
}

fn env_for(
    step: u32,
    before: u32,
    delta: u32,
    previous: Option<&Receipt>,
    journal: Vec<u8>,
) -> Result<ExecutorEnv<'static>> {
    let mut builder = ExecutorEnv::builder();
    builder
        .segment_limit_po2(16)
        .write(&(ID, step, before, delta, journal))?;
    if let Some(previous) = previous {
        builder.add_assumption(previous.clone());
    }
    builder.build()
}

fn main() -> Result<()> {
    ensure!(
        !context()?.dev_mode(),
        "real proofs required; disable RISC0_DEV_MODE"
    );
    let args: Vec<String> = std::env::args().collect();
    let path = Path::new(
        args.get(2)
            .map(String::as_str)
            .unwrap_or("resolve-final.receipt"),
    );
    if args.get(1).map(String::as_str) == Some("verify") {
        let receipt: Receipt = serde::from_slice(&std::fs::read(path)?)?;
        verify(&receipt, 3, 31)?;
        println!("independent_verify=ok step=3 state=31 assumptions=empty");
        return Ok(());
    }
    if args.get(1).map(String::as_str) == Some("inspect") {
        // Execution-only sizing uses unresolved claims, never presented as valid proofs.
        let mut prior: Option<risc0_zkvm::SessionInfo> = None;
        let mut before = 0;
        for (index, delta) in [7u32, 11, 13].into_iter().enumerate() {
            let mut builder = ExecutorEnv::builder();
            let journal = prior
                .as_ref()
                .map(|s| s.journal.bytes.clone())
                .unwrap_or_default();
            builder
                .segment_limit_po2(16)
                .write(&(ID, index as u32 + 1, before, delta, journal))?;
            if let Some(prior) = &prior {
                // Size the next step assuming the preceding claim has been resolved.
                // This is an unresolved assumption for execution sizing, not a fake proof.
                builder.add_assumption(risc0_zkvm::ReceiptClaim::ok(
                    ID,
                    prior.journal.bytes.clone(),
                ));
            }
            let session = default_executor().execute(builder.build()?, ELF)?;
            println!(
                "inspect_step={} user_cycles={} segments={}",
                index + 1,
                session.cycles(),
                session.segments.len()
            );
            ensure!(session.segments.len() <= 3, "smoke test unexpectedly large");
            if index == 1 {
                ensure!(
                    session.segments.len() >= 2,
                    "join regression needs multiple segments"
                );
            }
            prior = Some(session);
            before += delta;
        }
        return Ok(());
    }
    let prover = default_prover();
    let opts = ProverOpts::succinct().with_hashfn("sha-256".into());
    ensure!(!opts.dev_mode(), "real prover required");
    let mut previous: Option<Receipt> = None;
    let mut state = 0;
    for (index, delta) in [7u32, 11, 13].into_iter().enumerate() {
        let step = index as u32 + 1;
        let journal = previous
            .as_ref()
            .map(|r| r.journal.bytes.clone())
            .unwrap_or_default();
        let env = env_for(step, state, delta, previous.as_ref(), journal)?;
        let start = Instant::now();
        // Step 2 exposes the conditional receipt so we can test its rejection.
        // Step 3 exercises the automatic add_assumption -> succinct resolve path.
        let step_opts = if step == 2 {
            ProverOpts::composite().with_hashfn("sha-256".into())
        } else {
            opts.clone()
        };
        let info = prover.prove_with_opts(env, ELF, &step_opts)?;
        let receipt = if step == 2 {
            let composite = info.receipt.inner.composite()?;
            ensure!(
                (2..=3).contains(&composite.segments.len()),
                "expected a bounded multi-segment join test"
            );
            let mut conditional = recursion::lift(&composite.segments[0])?;
            for segment in &composite.segments[1..] {
                conditional = recursion::join(&conditional, &recursion::lift(segment)?)?;
            }
            let conditional_receipt = Receipt::new(
                InnerReceipt::Succinct(conditional.clone()),
                info.receipt.journal.bytes.clone(),
            );
            conditional.verify_integrity_with_context(&context()?)?;
            ensure!(
                conditional_receipt
                    .verify_with_context(&context()?, ID)
                    .is_err(),
                "conditional receipt accepted as unconditional"
            );
            let predecessor = previous.as_ref().unwrap().inner.succinct()?;
            let mut wrong_hash = predecessor.clone();
            wrong_hash.hashfn = "poseidon2".into();
            ensure!(
                recursion::Prover::new_resolve(&conditional, &wrong_hash, opts.clone()).is_err(),
                "mixed hash suites accepted"
            );
            // Same hash suite but a different claim must not discharge this assumption.
            ensure!(
                recursion::Prover::new_resolve(&conditional, &conditional, opts.clone()).is_err(),
                "wrong assumption claim accepted"
            );
            let resolved = recursion::resolve(&conditional, predecessor)?;
            println!("conditional_rejected=ok wrong_assumption_rejected=ok mixed_hash_rejected=ok join_count={}",
                composite.segments.len() - 1);
            Receipt::new(InnerReceipt::Succinct(resolved), info.receipt.journal.bytes)
        } else {
            info.receipt
        };
        state += delta;
        verify(&receipt, step, state)?;
        println!("step={step} state={state} segments={} prove_ms={} seal_bytes={} assumptions=empty verified=1",
            info.stats.segments, start.elapsed().as_millis(), receipt.seal_size());
        // Negative cases only execute or verify; no additional expensive STARK proofs.
        if step == 1 {
            let wrong_state = env_for(
                2,
                state + 1,
                11,
                Some(&receipt),
                receipt.journal.bytes.clone(),
            )?;
            ensure!(
                default_executor().execute(wrong_state, ELF).is_err(),
                "state splice accepted"
            );
            let mut altered_journal = receipt.journal.bytes.clone();
            altered_journal[0] ^= 1;
            let wrong_journal = env_for(2, state, 11, Some(&receipt), altered_journal)?;
            ensure!(
                default_executor().execute(wrong_journal, ELF).is_err(),
                "forged predecessor accepted"
            );
            let missing = env_for(2, state, 11, None, receipt.journal.bytes.clone())?;
            ensure!(
                default_executor().execute(missing, ELF).is_err(),
                "missing predecessor accepted"
            );
            println!(
                "negative_state_splice=ok negative_previous_journal=ok negative_missing_receipt=ok"
            );
        }
        previous = Some(receipt);
    }
    let final_receipt = previous.unwrap();
    let mut tampered = final_receipt.clone();
    tampered.journal.bytes[0] ^= 1;
    ensure!(
        verify(&tampered, 3, 31).is_err(),
        "tampered journal accepted"
    );
    let mut tampered = final_receipt.clone();
    if let InnerReceipt::Succinct(inner) = &mut tampered.inner {
        let last = inner.seal.len() - 1;
        inner.seal[last] ^= 1;
    }
    ensure!(verify(&tampered, 3, 31).is_err(), "tampered seal accepted");
    println!("negative_final_journal=ok negative_final_seal=ok");
    let start = Instant::now();
    let wrapped = Receipt::new(
        InnerReceipt::Succinct(recursion::identity(final_receipt.inner.succinct()?)?),
        final_receipt.journal.bytes.clone(),
    );
    verify(&wrapped, 3, 31)?;
    println!(
        "identity_regression=ok identity_ms={}",
        start.elapsed().as_millis()
    );
    // Save only the last unwrapped receipt. A fresh process verifies it without predecessor files.
    let words = serde::to_vec(&final_receipt)?;
    let bytes: Vec<u8> = words.iter().flat_map(|word| word.to_le_bytes()).collect();
    std::fs::write(path, bytes)?;
    println!("final_receipt={}", path.display());
    Ok(())
}
