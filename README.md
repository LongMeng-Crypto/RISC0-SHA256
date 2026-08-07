# RISC0 SHA-256 backend for RISC Zero 3.0.4

This repository packages a reusable RISC Zero 3.0.4 proving stack with
end-to-end SHA-256 receipts. It is application-independent: consumers provide
their own guest ELF and select the proof hash and receipt kind at runtime.

Supported paths:

```text
Poseidon2 Composite
Poseidon2 Succinct
SHA-256 Composite
SHA-256 Composite -> SHA-256 lift -> SHA-256 join -> Succinct
                                                   -> optional identity wrapper
```

The execution/Composite SHA-256 implementation is kept independent from the
SHA-256 recursion layer. Lift, join, and identity use the SHA-native recursion
artifacts vendored with this checkout.

## Use from another Cargo workspace

All patched RISC Zero crates must come from the same backend revision. During
local development, add the following to the consuming workspace root:

```toml
[patch.crates-io]
risc0-zkvm = { path = "../RISC0-SHA256/vendor/risc0_sha256_backend/crates/risc0-zkvm" }
risc0-zkp = { path = "../RISC0-SHA256/vendor/risc0_sha256_backend/crates/risc0-zkp" }
risc0-circuit-rv32im = { path = "../RISC0-SHA256/vendor/risc0_sha256_backend/crates/risc0-circuit-rv32im" }
risc0-circuit-recursion = { path = "../RISC0-SHA256/vendor/risc0_sha256_backend/crates/risc0-circuit-recursion" }
```

Adjust the relative prefix for the consumer's location. For reproducible
deployments, publish the repository and replace the local paths with one Git
URL and an identical pinned `rev` for all four crates.

The consuming host selects the backend through `ProverOpts`:

```rust,ignore
let opts = ProverOpts::succinct()
    .with_hashfn("sha-256".to_owned())
    .with_receipt_kind(ReceiptKind::Succinct);
```

The verifier must use the matching hash-specific context:

```rust,ignore
let ctx = VerifierContext::from_max_po2_with_hashfn_public(
    "sha-256",
    risc0_zkvm::DEFAULT_MAX_PO2,
)?;
receipt.verify_with_context(&ctx, image_id)?;
```

Succinct receipts bind to the recursion programs and control IDs in this
repository. Prover and verifier must therefore pin the same backend revision.

## Generic smoke example

The example proves a small application-independent guest and verifies its
journal. It supports the same environment interface used by consumer hosts:

```bash
export CARGO_TARGET_DIR="$HOME/.cache/sedaa-risc0-shared-target"

# SHA-256 Composite
RISC0_BACKEND_HASH=sha-256 RISC0_RECEIPT_KIND=composite \
  cargo run -p risc0-sha256-backend-smoke --release --features cuda

# SHA-256 Succinct with identity
RISC0_BACKEND_HASH=sha-256 RISC0_RECEIPT_KIND=succinct \
RISC0_IDENTITY_WRAP=1 \
  cargo run -p risc0-sha256-backend-smoke --release --features cuda

# Poseidon2 Composite
RISC0_BACKEND_HASH=poseidon2 RISC0_RECEIPT_KIND=composite \
  cargo run -p risc0-sha256-backend-smoke --release --features cuda
```

Run the supported matrix with:

```bash
./scripts/smoke_backend.sh
```

## SHA-256 recursion artifacts

The recursion crate contains SHA-256-native RV32IM-v2 lift and PoVW lift
programs for `po2=14..24`, plus SHA-256 join and identity programs. SHA
recursion uses a uniform `2^21` recursion domain.

The generator overlay under `tools/zkr-generator` is based on Zirgen commit
`1c9059c3ee5ed5d43ee6e9d8a4bab3d4b3d0c8f2`. Regenerate the raw artifacts with:

```bash
git clone https://github.com/risc0/zirgen.git /path/to/zirgen
git -C /path/to/zirgen checkout 1c9059c3ee5ed5d43ee6e9d8a4bab3d4b3d0c8f2
./tools/zkr-generator/build_sha256_zkrs.sh /path/to/zirgen
```

The merged archive is
`vendor/risc0_sha256_backend/crates/risc0-circuit-recursion/src/recursion_zkr.zip`.
Its SHA-256 checksum is
`91ae9850d13b5866e60c918bc21f4f7f3397ed72b80e35fa10139dc0303cf875`.
