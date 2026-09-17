use std::{path::Path, time::Instant};

use ::serde::Serialize;
use anyhow::{bail, ensure, Context, Result};
use methods::{ADAPTIVE_GUEST_ELF as ELF, ADAPTIVE_GUEST_ID as ID};
use risc0_zkvm::{
    default_executor, default_prover, get_prover_server, recursion, serde, sha::Digestible,
    ExecutorEnv, InnerReceipt, ProverOpts, Receipt, ReceiptClaim, SuccinctReceipt, UnionClaim,
    Unknown, VerifierContext, DEFAULT_MAX_PO2,
};

#[derive(Serialize)]
struct Step {
    step: u32,
    segment_po2: u32,
    lift_po2: u32,
    final_po2: u32,
    base_proof_ms: f64,
    lift_ms: f64,
    resolve_ms: f64,
    prover_ms: f64,
}

#[derive(Serialize)]
struct Metrics {
    profile: &'static str,
    work: u32,
    guest_image_id: [u32; 8],
    steps: Vec<Step>,
    total_prover_ms: f64,
    final_verifier_ms: f64,
    final_proof_bytes: usize,
    verified: bool,
    assumptions: usize,
    cuda: bool,
}

// Select the optional profile explicitly, keeping ordinary SHA-256 calls on the legacy path.
fn options(adaptive: bool) -> ProverOpts {
    let opts = ProverOpts::succinct().with_hashfn("sha-256".into());
    if adaptive {
        opts.with_sha256_adaptive_recursion()
    } else {
        opts
    }
}

// Pin the verifier's expected program set independently of all receipt-supplied parameters.
fn context(adaptive: bool) -> Result<VerifierContext> {
    if adaptive {
        VerifierContext::sha256_adaptive(DEFAULT_MAX_PO2)
    } else {
        VerifierContext::from_max_po2_with_hashfn_public("sha-256", DEFAULT_MAX_PO2)
    }
}

// Prepare a bounded transition and, when available, supply the preceding real receipt.
fn env_for(
    step: u32,
    before: u32,
    delta: u32,
    work: u32,
    po2: u32,
    previous: Option<&Receipt>,
) -> Result<ExecutorEnv<'static>> {
    let mut builder = ExecutorEnv::builder();
    let journal = previous
        .map(|p| p.journal.bytes.clone())
        .unwrap_or_default();
    builder
        .segment_limit_po2(po2)
        .write(&(ID, step, before, delta, work, journal))?;
    if let Some(previous) = previous {
        builder.add_assumption(previous.clone());
    }
    builder.build()
}

// Require both a valid unconditional proof and the exact expected application journal.
fn verify(receipt: &Receipt, adaptive: bool, step: u32, state: u32, work: u32) -> Result<()> {
    verify_in_context(receipt, &context(adaptive)?, step, state, work)
}

// Reuse trusted verifier parameters when measuring the final proof's verification latency.
fn verify_in_context(
    receipt: &Receipt,
    ctx: &VerifierContext,
    step: u32,
    state: u32,
    work: u32,
) -> Result<()> {
    receipt.verify_with_context(ctx, ID)?;
    let journal: ([u32; 8], u32, u32, u32) = receipt.journal.decode()?;
    ensure!(
        journal == (ID, step, state, work),
        "unexpected chain statement"
    );
    let inner = receipt.inner.succinct()?;
    ensure!(inner.hashfn == "sha-256", "unexpected hash suite");
    ensure!(
        inner
            .claim
            .as_value()?
            .output
            .as_value()?
            .as_ref()
            .context("missing output")?
            .assumptions
            .is_empty(),
        "unresolved assumptions"
    );
    Ok(())
}

// Read the authenticated recursion-domain header after proof verification.
fn po2<Claim>(receipt: &SuccinctReceipt<Claim>) -> u32 {
    receipt.seal[32]
}

// Report wall time in milliseconds without including artifact serialization.
fn elapsed(start: Instant) -> f64 {
    start.elapsed().as_secs_f64() * 1000.0
}

// Encode receipts in the existing RISC Zero word format for independent verification.
fn save(receipt: &Receipt, path: &Path) -> Result<usize> {
    let bytes: Vec<u8> = serde::to_vec(receipt)?
        .iter()
        .flat_map(|word| word.to_le_bytes())
        .collect();
    std::fs::write(path, &bytes)?;
    Ok(bytes.len())
}

// Size execution without proving; unresolved claims are used only during this sizing pass.
fn inspect(work: u32) -> Result<bool> {
    let mut prior: Option<risc0_zkvm::SessionInfo> = None;
    let mut before = 0;
    let mut fits = true;
    for (index, delta) in [7u32, 11].into_iter().enumerate() {
        let mut builder = ExecutorEnv::builder();
        let journal = prior
            .as_ref()
            .map(|p| p.journal.bytes.clone())
            .unwrap_or_default();
        builder.segment_limit_po2(18).write(&(
            ID,
            index as u32 + 1,
            before,
            delta,
            work,
            journal,
        ))?;
        if let Some(previous) = &prior {
            builder.add_assumption(ReceiptClaim::ok(ID, previous.journal.bytes.clone()));
        }
        let session = default_executor().execute(builder.build()?, ELF)?;
        fits &= session.segments.len() == 1 && session.segments[0].po2 == 17;
        println!(
            "inspect work={work} step={} cycles={} segment_po2={:?}",
            index + 1,
            session.cycles(),
            session.segments.iter().map(|s| s.po2).collect::<Vec<_>>()
        );
        prior = Some(session);
        before += delta;
    }
    Ok(fits)
}

// Check all cheap tamper cases against real proofs without launching extra expensive proofs.
fn negative_checks(receipt: &Receipt, adaptive: bool, work: u32) -> Result<()> {
    let check = |r: &Receipt| verify(r, adaptive, 2, 18, work);
    let mut bad = receipt.clone();
    bad.journal.bytes[0] ^= 1;
    ensure!(check(&bad).is_err(), "changed journal accepted");
    let mut bad = receipt.clone();
    if let InnerReceipt::Succinct(s) = &mut bad.inner {
        *s.seal.last_mut().unwrap() ^= 1;
    }
    ensure!(check(&bad).is_err(), "changed seal accepted");
    let mut bad = receipt.clone();
    if let InnerReceipt::Succinct(s) = &mut bad.inner {
        s.seal[32] = 19;
    }
    ensure!(check(&bad).is_err(), "changed domain accepted");
    let mut bad = receipt.clone();
    if let InnerReceipt::Succinct(s) = &mut bad.inner {
        s.control_inclusion_proof.index ^= 1;
    }
    ensure!(check(&bad).is_err(), "changed control membership accepted");
    ensure!(
        verify(receipt, !adaptive, 2, 18, work).is_err(),
        "wrong verifier profile accepted"
    );
    ensure!(
        default_executor()
            .execute(env_for(3, 19, 13, work, 18, Some(receipt))?, ELF)
            .is_err(),
        "state splice accepted"
    );
    ensure!(
        default_executor()
            .execute(env_for(2, 7, 11, work, 18, None)?, ELF)
            .is_err(),
        "missing predecessor accepted"
    );
    println!(
        "negative_checks=passed profile={}",
        if adaptive { "adaptive" } else { "legacy" }
    );
    Ok(())
}

// Measure the same two-step workload, including base proofs, and verify every final receipt.
fn bench(adaptive: bool, work: u32, directory: &Path) -> Result<()> {
    std::fs::create_dir_all(directory)?;
    let opts = options(adaptive);
    let ctx = context(adaptive)?;
    ensure!(!opts.dev_mode() && !ctx.dev_mode(), "real proofs required");
    let base_opts = opts
        .clone()
        .with_receipt_kind(risc0_zkvm::ReceiptKind::Composite);
    let server = get_prover_server(&opts)?;
    let mut prior: Option<Receipt> = None;
    let mut state = 0;
    let mut steps = Vec::new();
    for (index, delta) in [7u32, 11].into_iter().enumerate() {
        let step = index as u32 + 1;
        let start = Instant::now();
        let base = default_prover().prove_with_opts(
            env_for(step, state, delta, work, 18, prior.as_ref())?,
            ELF,
            &base_opts,
        )?;
        let base_ms = elapsed(start);
        let composite = base.receipt.inner.composite()?;
        ensure!(
            composite.segments.len() == 1,
            "benchmark must remain one segment per step"
        );
        let segment = &composite.segments[0];
        // RV32IM v2 has a version prefix before the circuit output and domain header.
        let segment_po2 = base.stats.total_cycles.ilog2();
        ensure!(
            segment_po2 == 17,
            "benchmark requires execution domain 2^17"
        );
        let clock = Instant::now();
        let mut succinct = server.lift(segment)?;
        let lift_ms = elapsed(clock);
        let lift_po2 = po2(&succinct);
        ensure!(
            lift_po2 == if adaptive { 19 } else { 21 },
            "wrong lift dispatch"
        );
        let mut resolve_ms = 0.0;
        if let Some(previous) = &prior {
            // Time the real path before any negative constructor can warm the program cache.
            let clock = Instant::now();
            let resolved = server.resolve(
                &succinct,
                &previous.inner.succinct()?.clone().into_unknown(),
            )?;
            resolve_ms = elapsed(clock);
            let conditional = Receipt::new(
                InnerReceipt::Succinct(succinct.clone()),
                base.receipt.journal.bytes.clone(),
            );
            ensure!(
                conditional.verify_with_context(&ctx, ID).is_err(),
                "conditional accepted as unconditional"
            );
            ensure!(
                recursion::Prover::new_resolve(&succinct, &succinct, opts.clone()).is_err(),
                "wrong assumption accepted"
            );
            let mut wrong_hash = previous.inner.succinct()?.clone();
            wrong_hash.hashfn = "poseidon2".into();
            ensure!(
                recursion::Prover::new_resolve(&succinct, &wrong_hash, opts.clone()).is_err(),
                "mixed hash suites accepted"
            );
            succinct = resolved;
        }
        let final_po2 = po2(&succinct);
        let receipt = Receipt::new(InnerReceipt::Succinct(succinct), base.receipt.journal.bytes);
        state += delta;
        verify(&receipt, adaptive, step, state, work)?;
        let item = Step {
            step,
            segment_po2,
            lift_po2,
            final_po2,
            base_proof_ms: base_ms,
            lift_ms,
            resolve_ms,
            prover_ms: base_ms + lift_ms + resolve_ms,
        };
        println!("profile={} step={} base_ms={:.3} lift_ms={:.3} resolve_ms={:.3} total_ms={:.3} lift_po2={} final_po2={}", if adaptive { "adaptive" } else { "legacy" }, step, base_ms, lift_ms, resolve_ms, item.prover_ms, lift_po2, final_po2);
        save(&receipt, &directory.join(format!("step-{step}.receipt")))?;
        steps.push(item);
        prior = Some(receipt);
    }
    let receipt = prior.unwrap();
    negative_checks(&receipt, adaptive, work)?;
    let clock = Instant::now();
    verify_in_context(&receipt, &ctx, 2, 18, work)?;
    let verifier_ms = elapsed(clock);
    let proof_bytes = save(&receipt, &directory.join("final.receipt"))?;
    let metrics = Metrics {
        profile: if adaptive { "adaptive" } else { "legacy" },
        work,
        guest_image_id: ID,
        total_prover_ms: steps.iter().map(|s| s.prover_ms).sum(),
        steps,
        final_verifier_ms: verifier_ms,
        final_proof_bytes: proof_bytes,
        verified: true,
        assumptions: 0,
        cuda: cfg!(feature = "cuda"),
    };
    std::fs::write(
        directory.join("metrics.json"),
        serde_json::to_vec_pretty(&metrics)?,
    )?;
    Ok(())
}

// Reconstruct the union's expected child claims and roots instead of trusting its supplied claim.
fn expected_union(
    a: &SuccinctReceipt<Unknown>,
    b: &SuccinctReceipt<Unknown>,
) -> Result<UnionClaim> {
    let root = context(true)?
        .succinct_verifier_parameters
        .context("missing parameters")?
        .control_root;
    let a = risc0_zkvm::Assumption {
        claim: a.claim.digest(),
        control_root: root,
    }
    .digest();
    let b = risc0_zkvm::Assumption {
        claim: b.claim.digest(),
        control_root: root,
    }
    .digest();
    Ok(if a <= b {
        UnionClaim { left: a, right: b }
    } else {
        UnionClaim { left: b, right: a }
    })
}

// Cover composition beyond two steps, automatic proving, mixed domains, identity and union.
fn regression(directory: &Path, work: u32) -> Result<()> {
    let opts = options(true);
    let ctx = context(true)?;
    let prior: Receipt = serde::from_slice(&std::fs::read(directory.join("final.receipt"))?)?;
    verify(&prior, true, 2, 18, work)?;
    let first: Receipt = serde::from_slice(&std::fs::read(directory.join("step-1.receipt"))?)?;
    verify(&first, true, 1, 7, work)?;
    // Step 3 verifies a preceding Resolve result (domain 21), rather than only a Lift result (19).
    let third = default_prover()
        .prove_with_opts(env_for(3, 18, 13, work, 18, Some(&prior))?, ELF, &opts)?
        .receipt;
    verify(&third, true, 3, 31, work)?;
    save(&third, &directory.join("third.receipt"))?;
    let mut unsupported = first.inner.succinct()?.clone();
    unsupported.seal[32] = 18;
    ensure!(
        recursion::Prover::new_identity(&unsupported, opts.clone()).is_err(),
        "unsupported input domain accepted"
    );
    // A larger but still bounded execution forces adaptive Lift(20), then a separate run forces Join.
    let large = default_prover().prove_with_opts(env_for(1, 0, 7, 16384, 18, None)?, ELF, &opts)?;
    ensure!(
        large.stats.segments == 1 && po2(large.receipt.inner.succinct()?) == 20,
        "Lift(20) case not exercised"
    );
    verify(&large.receipt, true, 1, 7, 16384)?;
    let joined =
        default_prover().prove_with_opts(env_for(1, 0, 7, 16384, 17, None)?, ELF, &opts)?;
    ensure!(
        (2..=4).contains(&joined.stats.segments),
        "join smoke must be bounded and multi-segment"
    );
    verify(&joined.receipt, true, 1, 7, 16384)?;
    let mut identities = Vec::new();
    for source in [&first, &large.receipt, &third] {
        let identity = recursion::identity_with_opts(source.inner.succinct()?, opts.clone())?;
        identity.verify_integrity_with_context(&ctx)?;
        ensure!(
            identity.claim.digest() == source.inner.succinct()?.claim.digest(),
            "identity changed claim"
        );
        identities.push(identity.into_unknown());
    }
    let a = first.inner.succinct()?.clone().into_unknown();
    let b = identities[0].clone();
    let merged = recursion::union_with_opts(&a, &b, opts.clone())?;
    merged.verify_integrity_with_context(&ctx)?;
    ensure!(
        merged.claim.digest() == expected_union(&a, &b)?.digest(),
        "incorrect union statement"
    );
    let a = merged.into_unknown();
    let b = third.inner.succinct()?.clone().into_unknown();
    let merged = recursion::union_with_opts(&a, &b, opts)?;
    merged.verify_integrity_with_context(&ctx)?;
    ensure!(
        merged.claim.digest() == expected_union(&a, &b)?.digest(),
        "incorrect nested union statement"
    );
    println!("adaptive_regression=passed automatic_resolve=19_21 lift=19,20 join_segments={} identity_inputs=19,20,21 nested_union=passed", joined.stats.segments);
    Ok(())
}

// Run only explicitly requested bounded inspection, proving, regression, or fresh-process verification.
fn main() -> Result<()> {
    let args: Vec<String> = std::env::args().collect();
    let command = args.get(1).map(String::as_str).unwrap_or("inspect");
    if command == "inspect" {
        for work in [1024, 3072, 4096, 6144, 8192] {
            if inspect(work)? {
                let large = default_executor().execute(env_for(1, 0, 7, 16384, 18, None)?, ELF)?;
                ensure!(
                    large.segments.len() == 1 && large.segments[0].po2 == 18,
                    "large regression must fit one 2^18 segment"
                );
                let split = default_executor().execute(env_for(1, 0, 7, 16384, 17, None)?, ELF)?;
                ensure!(
                    (2..=4).contains(&split.segments.len()),
                    "join regression sizing out of bounds"
                );
                println!(
                    "inspect_regression large_po2=18 join_segments={}",
                    split.segments.len()
                );
                println!("selected_work={work}");
                return Ok(());
            }
        }
        bail!("no bounded workload fits 2^17");
    }
    let directory = Path::new(args.get(2).context("missing output directory")?);
    let work: u32 = args.get(3).context("missing work count")?.parse()?;
    ensure!((1..=16384).contains(&work), "work out of range");
    match command {
        "legacy" => bench(false, work, directory),
        "adaptive" => bench(true, work, directory),
        "regression" => regression(directory, work),
        "verify" => {
            let adaptive = args.get(4).map(String::as_str) == Some("adaptive");
            let receipt: Receipt =
                serde::from_slice(&std::fs::read(directory.join("final.receipt"))?)?;
            verify(&receipt, adaptive, 2, 18, work)?;
            println!("independent_verify=passed assumptions=0");
            Ok(())
        }
        _ => bail!("unknown command: {command}"),
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    // Legacy selection must remain the default; opt-in must survive the existing options encoding.
    #[test]
    fn profiles_are_explicit_and_roundtrip() -> Result<()> {
        let fixed = options(false);
        let adaptive = options(true);
        assert!(!fixed.uses_sha256_adaptive_recursion());
        assert!(adaptive.uses_sha256_adaptive_recursion());
        let encoded = serde_json::to_vec(&adaptive)?;
        let decoded: ProverOpts = serde_json::from_slice(&encoded)?;
        assert!(decoded.uses_sha256_adaptive_recursion());
        assert_eq!(fixed.security_profile, adaptive.security_profile);
        assert_ne!(
            context(false)?
                .succinct_verifier_parameters
                .unwrap()
                .control_root,
            context(true)?
                .succinct_verifier_parameters
                .unwrap()
                .control_root
        );
        assert!(adaptive.control_ids.len() > 30);
        assert!(adaptive
            .control_ids
            .iter()
            .all(|id| *id != risc0_zkvm::sha::Digest::ZERO));
        Ok(())
    }

    // Unsupported wrapping must fail before starting an expensive prover job.
    #[test]
    fn adaptive_groth16_is_rejected_early() {
        assert!(get_prover_server(
            &options(true).with_receipt_kind(risc0_zkvm::ReceiptKind::Groth16)
        )
        .is_err());
    }

    // Changing a trusted program set must not silently retain adaptive dispatch or its verifier root.
    #[test]
    fn changed_program_set_is_not_the_adaptive_profile() {
        let mut opts = options(true);
        opts.control_ids.pop();
        assert!(!opts.uses_sha256_adaptive_recursion());
        assert!(!options(true)
            .with_hashfn("poseidon2".into())
            .uses_sha256_adaptive_recursion());
    }
}
