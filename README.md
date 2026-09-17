# RISC0 SHA-256 backend for RISC Zero 3.0.4

This repository packages a reusable RISC Zero 3.0.4 proving stack with
end-to-end SHA-256 receipts. Consumers provide their own guest ELF and select
the proof hash and receipt kind at runtime.

The ordinary SHA-native recursion path supports **lift, join, identity,
resolve, and union**, including recursive composition of their outputs.
SHA-256 Composite and the existing Poseidon2 paths remain available. This
does not claim SHA-native support for every upstream PoVW or Groth16 operation.

```text
SHA-256 Composite -> lift -> join -> Succinct -> optional identity wrapper
Conditional Succinct + assumption Succinct -> resolve -> resolved Succinct
Succinct A + Succinct B -> union -> SuccinctReceipt<UnionClaim>
```

Resolve removes one corroborated assumption at a time. A receipt becomes
unconditional once all assumptions have been resolved. Union aggregates
statements; it does not establish state continuity between them.

## Use from another Cargo workspace

Fetch the Git LFS archives before building a fresh checkout:

```bash
git lfs install
git lfs pull
source scripts/shared_cache_env.sh
```

All four patched crates must come from the same backend revision. During
local development, add these patches to the consuming workspace root:

```toml
[patch.crates-io]
risc0-zkvm = { path = "../RISC0-SHA256/vendor/risc0_sha256_backend/crates/risc0-zkvm" }
risc0-zkp = { path = "../RISC0-SHA256/vendor/risc0_sha256_backend/crates/risc0-zkp" }
risc0-circuit-rv32im = { path = "../RISC0-SHA256/vendor/risc0_sha256_backend/crates/risc0-circuit-rv32im" }
risc0-circuit-recursion = { path = "../RISC0-SHA256/vendor/risc0_sha256_backend/crates/risc0-circuit-recursion" }
```

Adjust the paths for the consumer's location. For reproducible deployments,
replace the paths with one Git URL and an identical pinned `rev` for all four
crates. Cargo Git dependencies may contain only LFS pointers: source the shared
cache script from a hydrated checkout of that same revision. It exports
`RECURSION_SRC_PATH` pointing at `recursion_zkr_sha256.zip`. The build verifies
the archive checksum. The custom archive is not hosted on the upstream RISC
Zero artifact server.

Select the backend on the host:

```rust,ignore
let opts = ProverOpts::succinct().with_hashfn("sha-256".to_owned());
let ctx = VerifierContext::from_max_po2_with_hashfn_public(
    "sha-256", risc0_zkvm::DEFAULT_MAX_PO2,
)?;
receipt.verify_with_context(&ctx, image_id)?;
```

The host must enable the `risc0-zkvm/cuda` feature for CUDA acceleration.
Prover and verifier must pin the same backend revision and control parameters.

## Stateful composition with resolve

The guest calls `env::verify(previous_image_id, previous_journal)` and checks
the state and step continuity in that journal. The host supplies the previous
receipt through `ExecutorEnv::builder().add_assumption(previous_receipt)`.
Proving with SHA-256 succinct options automatically lifts/joins the current
execution and resolves its assumption against the previous receipt. The
default proving API selects the SHA-256 verifier context for these assumptions.

The SHA-native resolve program verifies both recursion proofs, checks their
control-root membership, and binds the assumed claim to the conditional
claim's assumptions list. SHA control-root IOPs use eight raw words; journal
and assumptions-tail inputs retain the required sixteen-half-word encoding.

An application must bind the predecessor program ID, session, policy, step,
and state as appropriate. The smoke example carries its chain program ID in
every journal, and the final verifier checks it against the compiled guest ID.

```bash
./scripts/smoke_resolve.sh
```

This proves three bounded integer transitions `0 -> 7 -> 18 -> 31`, with at
most three execution segments per step. It exercises explicit lift/join/resolve,
automatic assumption resolution, and identity wrapping. Each resolved receipt
passes full verification with empty assumptions. Negative checks reject
conditional receipts as unconditional, wrong assumptions, mixed hash suites,
state splicing, missing predecessors, and altered journals or seals. A fresh
process verifies only the final saved receipt.

This arithmetic smoke test precedes the separate Flow Restriction application.

## Independent aggregation with union

The public `recursion::union` API chooses the hash suite from its inputs.
Two SHA-256 inputs select `union_sha256.zkr`. Both input receipts and the
prover options must use the same suite.

```rust,ignore
let merged = risc0_zkvm::recursion::union(
    &a.into_unknown(), &b.into_unknown(),
)?;
merged.verify_integrity_with_context(&ctx)?;
// Also compare merged.claim.digest() with the expected UnionClaim digest.
```

The result is `SuccinctReceipt<UnionClaim>`, not a guest execution receipt.
For each child, union commits to the digest of
`Assumption { claim: child_claim_digest, control_root: child_control_root }`.
It sorts these two digests into `UnionClaim { left, right }`. The verifier must
reconstruct and check the expected statement from trusted child claims and
control roots, as well as checking proof integrity. For aggregation trees,
the verifier also needs the expected tree shape. Union alone does not supply
membership openings or turn the children into a state transition chain.

```bash
./scripts/smoke_union.sh
```

This proves three tiny sum executions, merges the first two, then merges that
union receipt with the third. A fresh process verifies the final receipt
against all three expected outputs without loading any predecessor receipts.
Negative checks cover altered input/final seals, altered claims, mixed hash
suites, incorrect expected guest IDs, journals, and child control roots.
See [the union example](examples/backend-smoke/host/src/bin/union_smoke.rs) for
the complete statement-binding verifier.

## Small CUDA tests and persistent caches

Both scripts build once, size the executions before proving, and run their
verification phases as separate processes. Results for the combined backend
are recorded in [benchmarks/sha256_composition_smoke.md](benchmarks/sha256_composition_smoke.md).
The earlier resolve-only run is preserved in
[benchmarks/resolve_smoke.md](benchmarks/resolve_smoke.md).

`scripts/shared_cache_env.sh` configures:

- `~/.cache/sedaa-risc0-shared-target`: shared Cargo/CUDA build products.
- `~/.cache/risc0-sha256-shared/`: Zirgen, Bazel, CUDA driver cache, and test output.
- `RECURSION_SRC_PATH`: this checkout's hydrated SHA-256 recursion archive.
- `RISC0_PROVER=local`, `RISC0_DEV_MODE=0`: real local proofs.

Environment overrides are preserved for cache and archive paths. A custom
archive must match the checksum required by the selected backend revision.

The existing generic smoke example is also available:

```bash
source scripts/shared_cache_env.sh
RISC0_BACKEND_HASH=sha-256 RISC0_RECEIPT_KIND=succinct RISC0_IDENTITY_WRAP=1 \
  cargo run -p risc0-sha256-backend-smoke --release --features cuda
./scripts/smoke_backend.sh
```

## Recursion artifacts and compatibility

SHA-native lift programs cover RV32IM-v2 and PoVW lift for `po2=14..24`.
SHA-native join, identity, resolve, and union use a uniform `2^21` recursion
domain. The original Poseidon2 programs remain in the bundle.

The build uses `src/recursion_zkr_sha256.zip`, containing all 56 original
programs plus `resolve_sha256.zkr` and `union_sha256.zkr`. Its SHA-256 is
`07489ef3ebc8e1665ff2c9e242e41581409e4e1f26cda3abf367ef7d2fcc892d`.
The original `src/recursion_zkr.zip` remains byte-for-byte unchanged for
consumers such as SEDAA pinned to the older revision; its SHA-256 is
`91ae9850d13b5866e60c918bc21f4f7f3397ed72b80e35fa10139dc0303cf875`.

SHA-256 control IDs for resolve and union change in this revision. Existing
lift/join/identity IDs and all Poseidon2 IDs are unchanged. The default SHA-256
control root therefore changes: old receipts still require the matching old
verifier parameters. Do not mix receipts from different backend revisions in
the smoke examples or a default-parameter state chain.

The generator overlay targets Zirgen commit
`1c9059c3ee5ed5d43ee6e9d8a4bab3d4b3d0c8f2`. Regenerate using:

```bash
source scripts/shared_cache_env.sh
# One-time setup, if the shared checkout does not exist:
git clone https://github.com/risc0/zirgen.git "$RISC0_SHARED_CACHE/zirgen"
git -C "$RISC0_SHARED_CACHE/zirgen" checkout 1c9059c3ee5ed5d43ee6e9d8a4bab3d4b3d0c8f2
./tools/zkr-generator/build_sha256_zkrs.sh "$RISC0_SHARED_CACHE/zirgen"
python3 tools/zkr-generator/merge_sha256_zkrs.py \
  "$RISC0_SHARED_CACHE/zirgen/bazel-bin/zirgen/circuit/predicates/resolve_sha256.zkr" \
  "$RISC0_SHARED_CACHE/zirgen/bazel-bin/zirgen/circuit/predicates/union_sha256.zkr"
cargo run -p risc0-circuit-recursion --release --features cuda \
  --example sha_control_ids -- resolve_sha256.zkr
cargo run -p risc0-circuit-recursion --release --features cuda \
  --example sha_control_ids -- union_sha256.zkr
```

The merge helper checks every original program payload and updates the new
archive checksum in `build.rs`. Update the corresponding `resolve.zkr` and
`union.zkr` entries in `SHA256_CONTROL_IDS` with the computed IDs, update the
documented checksum, and rerun both bounded CUDA tests. Both archives are Git
LFS objects and must be included when publishing this repository.

## Optional adaptive SHA-256 recursion

The default path and both original archives/control-ID tables are unchanged.
An explicit adaptive profile chooses the smallest supported power-of-two domain
that fits each program, including the existing 1024 zero-knowledge rows:

```rust,ignore
let opts = ProverOpts::succinct().with_sha256_adaptive_recursion();
let ctx = VerifierContext::sha256_adaptive(DEFAULT_MAX_PO2)?;
let info = default_prover().prove_with_opts(env, elf, &opts)?;
info.receipt.verify_with_context(&ctx, expected_image_id)?;
```

Configure a non-default maximum segment size **before** selecting the profile,
and pass the same maximum to the verifier context. Profile selection uses the
existing serialized `control_ids` field, so no prover-options wire format changes.
The verifier independently pins the adaptive control root; it never trusts a
receipt to choose its own accepted program set.

For ordinary SHA-256 receipts, adaptive Lift supports RV32IM sizes `po2=14..24`:
inputs 14–17 produce recursion domain 19, and inputs 18–24 produce domain 20.
Join, Resolve and Union have separate verifiers for all input-domain pairs in
`{19,20,21}²`; their outputs currently require domain 21. Identity accepts each
of those domains and produces domain 20. Each circuit rechecks the input domain
cryptographically; the host reads the header only to select the matching program.
No hash suite, FRI security parameter, zero-knowledge padding allowance, claim
check, or assumption check is weakened. PoVW and Groth16 are outside this profile.

Manual composition uses `recursion::{lift,join,resolve,identity,union}_with_opts`
with the explicit options. The existing functions without `_with_opts` retain
legacy behavior. Use one pinned profile throughout an execution chain; legacy
and adaptive receipts require their respective verifier contexts.

Run a bounded CUDA comparison, alternating profile order across two repetitions:

```bash
./scripts/bench_adaptive.sh
# Optional: 1..3 repetitions and a new output directory
./scripts/bench_adaptive.sh 2 benchmarks/results/my-adaptive-run
```

The script uses the existing shared Cargo/CUDA caches and a separate bounded
arithmetic guest. Both steps are execution-sized to exactly `2^17`; each profile
proves the same inputs. Metrics separate base proving (including execution),
Lift, Resolve, total prover time, final verification, and final receipt size.
Compilation, negative checks, extra composition regressions and file writes are
outside the reported prover timings. This is a backend benchmark, not a new
LangGraph or policy benchmark. CUDA telemetry and per-run JSON remain in the
chosen output directory. Every final receipt is also checked by a fresh process. Expected guest assertions
may appear during negative checks; the script must finish successfully.
See [the bounded CUDA results](benchmarks/adaptive_sha256.md).

The separate `recursion_zkr_sha256_adaptive.zip` is a Git LFS artifact. Source
`scripts/shared_cache_env.sh` to set its hydrated path for Cargo Git consumers.
Regenerate against the pinned Zirgen checkout using:

```bash
./tools/zkr-generator/build_adaptive_sha256.sh
```

The generator records program row counts in
`tools/zkr-generator/adaptive_programs.json`, rebuilds the separately checksummed
bundle, and recomputes its control IDs. Rerun the bounded tests before publishing
regenerated artifacts. The fixed path remains available simply by omitting
`with_sha256_adaptive_recursion()` and using the original SHA-256 verifier context.
