use std::{env, time::Instant};

use methods::{
    RISC0_SHA256_BACKEND_SMOKE_GUEST_ELF as GUEST_ELF,
    RISC0_SHA256_BACKEND_SMOKE_GUEST_ID as GUEST_ID,
};
use risc0_zkvm::{
    default_prover, recursion::identity as recursion_identity, ExecutorEnv, InnerReceipt,
    ProverOpts, Receipt, ReceiptKind, VerifierContext, DEFAULT_MAX_PO2,
};

fn env_flag(name: &str) -> bool {
    matches!(env::var(name).as_deref(), Ok("1") | Ok("true"))
}

fn main() {
    let hashfn = env::var("RISC0_BACKEND_HASH").unwrap_or_else(|_| "sha-256".into());
    let receipt_kind = match env::var("RISC0_RECEIPT_KIND")
        .unwrap_or_else(|_| "composite".into())
        .as_str()
    {
        "composite" => ReceiptKind::Composite,
        "succinct" => ReceiptKind::Succinct,
        value => panic!("unsupported RISC0_RECEIPT_KIND={value}"),
    };
    let identity = env_flag("RISC0_IDENTITY_WRAP");
    assert!(
        !identity || receipt_kind == ReceiptKind::Succinct,
        "identity wrapping requires a succinct receipt"
    );
    let segment_po2 = env::var("RISC0_SEGMENT_LIMIT_PO2")
        .ok()
        .and_then(|value| value.parse().ok())
        .unwrap_or(20);

    let values = vec![3u32, 5, 8, 13, 21, 34];
    let expected = values.iter().copied().fold(0u32, u32::wrapping_add);
    let exec_env = ExecutorEnv::builder()
        .segment_limit_po2(segment_po2)
        .write(&values)
        .unwrap()
        .build()
        .unwrap();
    let opts = match receipt_kind {
        ReceiptKind::Composite => ProverOpts::composite(),
        ReceiptKind::Succinct => ProverOpts::succinct(),
        _ => unreachable!(),
    }
    .with_hashfn(hashfn.clone())
    .with_receipt_kind(receipt_kind);

    println!(
        "backend-smoke: hashfn={hashfn} receipt={receipt_kind:?} identity={identity} segment_po2={segment_po2}"
    );
    let started = Instant::now();
    let prove_info = default_prover()
        .prove_with_opts(exec_env, GUEST_ELF, &opts)
        .expect("backend smoke proof failed");
    let mut receipt = prove_info.receipt;
    if identity {
        receipt = match receipt.inner {
            InnerReceipt::Succinct(inner) => Receipt::new(
                InnerReceipt::Succinct(
                    recursion_identity(&inner).expect("identity recursion wrapper failed"),
                ),
                receipt.journal.bytes,
            ),
            other => panic!("expected succinct receipt, got {other:?}"),
        };
    }
    let prover_ms = started.elapsed().as_secs_f64() * 1000.0;

    // ProverOpts::succinct() commits to the backend's complete default control
    // set, not merely to this execution's segment limit.
    let verifier = VerifierContext::from_max_po2_with_hashfn_public(&hashfn, DEFAULT_MAX_PO2)
        .expect("unsupported backend hash function");
    let verify_started = Instant::now();
    receipt
        .verify_with_context(&verifier, GUEST_ID)
        .expect("backend smoke receipt verification failed");
    let verifier_ms = verify_started.elapsed().as_secs_f64() * 1000.0;
    let output: (u32, u32) = receipt.journal.decode().expect("invalid smoke journal");
    assert_eq!(output, (values.len() as u32, expected));

    println!("accepted=1");
    println!("prover_ms={prover_ms:.3}");
    println!("verifier_ms={verifier_ms:.3}");
    println!("proof_bytes={}", receipt.seal_size());
    println!("segments={}", prove_info.stats.segments);
}
