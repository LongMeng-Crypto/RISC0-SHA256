# RISC0 SHA-256 3.0.4

This repository isolates the fast RISC Zero 3.0.4 / RV32IM-v2 SHA-256
proof stack originally embedded in `DAA_FULL`.

The execution and Composite SHA-256 implementation under
`vendor/risc0_sha256_backend` is kept unchanged. SHA-256 recursion is layered
on top of a Composite receipt:

```text
Composite -> SHA-256 lift -> SHA-256 join -> Succinct
                                      -> optional SHA-256 identity wrapper
```

`integrations/opt2` contains the imported Variable-WOTS (opt2) DAA host and
guest. It supports all six SHA2 SPHINCS+ parameter sets.

## SHA-256 recursion artifacts

The vendored recursion crate contains SHA-256-native RV32IM-v2 lift and PoVW
lift programs for `po2=14..24`, plus SHA-256 join and identity programs. SHA
recursion uses a uniform `2^21` recursion domain, matching the v5 backend
design; the v3 Composite path and its `2^18` recursion defaults are unchanged.

The generator overlay is preserved under `tools/zkr-generator`. It is based on
Zirgen commit `1c9059c3ee5ed5d43ee6e9d8a4bab3d4b3d0c8f2` and includes the required
SHA RNG micro-alignment fix. To regenerate the raw artifacts:

```bash
git clone https://github.com/risc0/zirgen.git /path/to/zirgen
git -C /path/to/zirgen checkout 1c9059c3ee5ed5d43ee6e9d8a4bab3d4b3d0c8f2
./tools/zkr-generator/build_sha256_zkrs.sh /path/to/zirgen
```

The merged vendored archive is
`vendor/risc0_sha256_backend/crates/risc0-circuit-recursion/src/recursion_zkr.zip`.
Its SHA-256 checksum is
`91ae9850d13b5866e60c918bc21f4f7f3397ed72b80e35fa10139dc0303cf875`.

## Benchmark

Use the permanent Cargo target directory selected by the script. It survives
reboots and avoids rebuilding the RISC Zero CUDA dependencies for every demo.

```bash
# Six Composite and six Succinct runs
./scripts/bench_opt2_sha256_v3.sh both

# Succinct only, followed by the recursion identity wrapper
./scripts/bench_opt2_sha256_v3.sh succinct identity

# Composite regression baseline only
./scripts/bench_opt2_sha256_v3.sh composite
```

For a single parameter set, run the host directly, for example:

```bash
CARGO_TARGET_DIR="$HOME/.cache/sedaa-risc0-shared-target" \
RISC0_PROVER=local RISC0_BACKEND_HASH=sha-256 \
RISC0_RECEIPT_KIND=succinct RISC0_IDENTITY_WRAP=0 \
DAA_DETERMINISTIC=1 SPHINCS_OPT_LEVEL=2 \
SPHINCS_PARAMS=sphincs-sha2-128s SPHINCS_THASH=simple \
cargo run -p daa_sha256_backend_host --release --features cuda
```

Validated on the local GPU with opt2:

| Path | Parameter | Segments | Prover | Proof | Verifier |
|---|---:|---:|---:|---:|---:|
| Composite regression | 128s | 1 | 3.723 s | 281,824 B | 0.001 s |
| SHA lift | 128s | 1 | 6.768 s | 273,732 B | <0.001 s |
| SHA lift + join | 192s | 4 | 105.805 s | 273,988 B | <0.001 s |
| SHA lift + identity | 128s | 1 | 9.759 s | 273,732 B | <0.001 s |
