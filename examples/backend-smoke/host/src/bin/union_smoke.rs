use std::{path::Path, time::Instant};

use anyhow::{bail, ensure, Context, Result};
use methods::{
    RISC0_SHA256_BACKEND_SMOKE_GUEST_ELF as ELF, RISC0_SHA256_BACKEND_SMOKE_GUEST_ID as ID,
};
use risc0_zkvm::{
    default_executor, default_prover, recursion, serde,
    sha::{Digest, Digestible},
    Assumption, ExecutorEnv, ProverOpts, ReceiptClaim, SuccinctReceipt, UnionClaim, Unknown,
    VerifierContext, DEFAULT_MAX_PO2,
};

const INPUTS: [[u32; 2]; 3] = [[3, 5], [7, 11], [13, 17]];
const SUMS: [u32; 3] = [8, 18, 30];

fn context() -> Result<VerifierContext> {
    VerifierContext::from_max_po2_with_hashfn_public("sha-256", DEFAULT_MAX_PO2)
}

fn bytes<T: ::serde::Serialize>(value: &T) -> Result<Vec<u8>> {
    Ok(serde::to_vec(value)?
        .iter()
        .flat_map(|word| word.to_le_bytes())
        .collect())
}

fn assumption(claim: Digest, control_root: Digest) -> Digest {
    Assumption {
        claim,
        control_root,
    }
    .digest()
}

fn pair(a: Digest, b: Digest) -> UnionClaim {
    let (left, right) = if a <= b { (a, b) } else { (b, a) };
    UnionClaim { left, right }
}

// Reconstruct the expected tree from application statements and a trusted root,
// independently of any claims supplied by the receipts being verified.
fn expected_tree(id: [u32; 8], sums: [u32; 3], root: Digest) -> Result<(UnionClaim, UnionClaim)> {
    let leaf = |sum| -> Result<Digest> {
        Ok(assumption(
            ReceiptClaim::ok(id, bytes(&(2u32, sum))?).digest(),
            root,
        ))
    };
    let first = pair(leaf(sums[0])?, leaf(sums[1])?);
    let final_claim = pair(assumption(first.digest(), root), leaf(sums[2])?);
    Ok((first, final_claim))
}

fn verify(
    receipt: &SuccinctReceipt<UnionClaim>,
    expected: &UnionClaim,
    ctx: &VerifierContext,
) -> Result<()> {
    ensure!(receipt.hashfn == "sha-256", "wrong hash suite");
    ensure!(
        receipt.claim.digest() == expected.digest(),
        "unexpected union statement"
    );
    receipt.verify_integrity_with_context(ctx)?;
    Ok(())
}

fn env_for(values: [u32; 2]) -> Result<ExecutorEnv<'static>> {
    ExecutorEnv::builder()
        .segment_limit_po2(16)
        .write(&values.to_vec())?
        .build()
}

fn main() -> Result<()> {
    let ctx = context()?;
    ensure!(
        !ctx.dev_mode(),
        "real proofs required; disable RISC0_DEV_MODE"
    );
    let root = ctx
        .succinct_verifier_parameters
        .as_ref()
        .context("missing verifier parameters")?
        .control_root;
    let (expected_first, expected_final) = expected_tree(ID, SUMS, root)?;
    let args: Vec<String> = std::env::args().collect();
    let path = Path::new(
        args.get(2)
            .map(String::as_str)
            .unwrap_or("union-final.receipt"),
    );
    match args.get(1).map(String::as_str) {
        Some("verify") => {
            let receipt: SuccinctReceipt<UnionClaim> = serde::from_slice(&std::fs::read(path)?)?;
            verify(&receipt, &expected_final, &ctx)?;
            println!("independent_union_verify=ok leaves=3 depth=2 expected_statements=bound");
            return Ok(());
        }
        Some("inspect") => {
            for (index, values) in INPUTS.into_iter().enumerate() {
                let session = default_executor().execute(env_for(values)?, ELF)?;
                ensure!(
                    session.segments.len() == 1,
                    "union smoke leaf unexpectedly large"
                );
                println!(
                    "inspect_leaf={} user_cycles={} segments={}",
                    index + 1,
                    session.cycles(),
                    session.segments.len()
                );
            }
            return Ok(());
        }
        Some("prove") | None => {}
        _ => bail!("usage: union_smoke [inspect|prove|verify] [receipt_path]"),
    }
    let prover = default_prover();
    let opts = ProverOpts::succinct().with_hashfn("sha-256".into());
    ensure!(!opts.dev_mode(), "real prover required");
    let mut leaves: Vec<SuccinctReceipt<Unknown>> = Vec::new();
    for (index, values) in INPUTS.into_iter().enumerate() {
        let start = Instant::now();
        let info = prover.prove_with_opts(env_for(values)?, ELF, &opts)?;
        ensure!(
            info.stats.segments == 1,
            "union smoke leaf unexpectedly large"
        );
        info.receipt.verify_with_context(&ctx, ID)?;
        ensure!(
            info.receipt.journal.decode::<(u32, u32)>()? == (2, SUMS[index]),
            "unexpected leaf journal"
        );
        let inner = info.receipt.inner.succinct()?;
        ensure!(inner.hashfn == "sha-256", "wrong leaf hash suite");
        println!(
            "leaf={} sum={} segments=1 prove_ms={} seal_bytes={} verified=1",
            index + 1,
            SUMS[index],
            start.elapsed().as_millis(),
            info.receipt.seal_size()
        );
        leaves.push(inner.clone().into_unknown());
    }

    let mut mixed = leaves[1].clone();
    mixed.hashfn = "poseidon2".into();
    ensure!(
        recursion::Prover::new_union(&leaves[0], &mixed, opts.clone()).is_err(),
        "mixed hash suites accepted"
    );
    ensure!(
        recursion::Prover::new_union(&leaves[0], &leaves[1], ProverOpts::succinct()).is_err(),
        "mismatched prover hash accepted"
    );
    let mut tampered = leaves[0].clone();
    let last = tampered.seal.len() - 1;
    tampered.seal[last] ^= 1;
    ensure!(
        recursion::union(&tampered, &leaves[1]).is_err(),
        "tampered input seal accepted"
    );
    println!("negative_mixed_hash=ok negative_prover_hash=ok negative_input_seal=ok");

    let start = Instant::now();
    let first = recursion::union(&leaves[1], &leaves[0])?;
    verify(&first, &expected_first, &ctx)?;
    println!(
        "union_level=1 prove_ms={} seal_bytes={} verified=1",
        start.elapsed().as_millis(),
        first.seal.len() * 4
    );
    let start = Instant::now();
    let final_receipt = recursion::union(&first.into_unknown(), &leaves[2])?;
    verify(&final_receipt, &expected_final, &ctx)?;
    println!(
        "union_level=2 prove_ms={} seal_bytes={} verified=1",
        start.elapsed().as_millis(),
        final_receipt.seal.len() * 4
    );

    let mut tampered = final_receipt.clone();
    let last = tampered.seal.len() - 1;
    tampered.seal[last] ^= 1;
    ensure!(
        verify(&tampered, &expected_final, &ctx).is_err(),
        "tampered union seal accepted"
    );
    let mut tampered = final_receipt.clone();
    tampered.claim = pair(Digest::ZERO, expected_final.right).into();
    ensure!(
        tampered.verify_integrity_with_context(&ctx).is_err(),
        "tampered union claim accepted"
    );
    let mut wrong_id = ID;
    wrong_id[0] ^= 1;
    for (_, wrong_claim) in [
        expected_tree(wrong_id, SUMS, root)?,
        expected_tree(ID, [8, 18, 31], root)?,
        expected_tree(ID, SUMS, Digest::ZERO)?,
    ] {
        ensure!(
            verify(&final_receipt, &wrong_claim, &ctx).is_err(),
            "unexpected leaf statement or control root accepted"
        );
    }
    println!("negative_final_seal=ok negative_final_claim=ok negative_leaf_image=ok negative_leaf_journal=ok negative_control_root=ok");
    // Only the final union receipt is persisted. The verifier needs the expected
    // statements and tree shape, but no predecessor proof files.
    std::fs::write(path, bytes(&final_receipt)?)?;
    println!("final_union_receipt={}", path.display());
    Ok(())
}
