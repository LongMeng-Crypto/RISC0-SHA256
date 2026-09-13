# SHA-native resolve and union: bounded CUDA regression

Passed on 2026-09-13 with an NVIDIA RTX 2000 Ada GPU, CUDA enabled, shared
build/driver caches, `RISC0_PROVER=local`, and `RISC0_DEV_MODE=0`. These are real
proofs. All commands completed with exit status 0.

Both hosts were built together once:

```bash
source scripts/shared_cache_env.sh
cargo build -p risc0-sha256-backend-smoke -p risc0-sha256-resolve-smoke \
  --release --features cuda
```

The `inspect`, `prove`, and `verify` modes were then invoked directly from the
shared target directory for each binary. This is the same sequence exposed by
`scripts/smoke_union.sh` and `scripts/smoke_resolve.sh`, without rebuilding
between tests. No large execution traces or performance sweeps were run.

## Union

Three executions of the existing sum guest produced journals `(2, 8)`,
`(2, 18)`, and `(2, 30)`. Execution sizing found 4,010 user cycles and one
segment for each leaf, with `segment_limit_po2=16`.

| Operation | Proof + verification time | Seal bytes |
|---|---:|---:|
| Leaf 1 | 3.464 s | 272780 |
| Leaf 2 | 3.025 s | 272780 |
| Leaf 3 | 3.010 s | 272780 |
| Union of leaves 1 and 2 | 3.777 s | 272780 |
| Union of preceding union and leaf 3 | 3.808 s | 272780 |

Both union receipts passed integrity verification and matched their expected
`UnionClaim` digests. A fresh process verified the final receipt using only
the expected guest ID, journals, trusted control root, and aggregation tree
shape. It did not load leaf receipts. The final serialized receipt is
273,192 bytes, stored at `~/.cache/risc0-sha256-shared/union-final.receipt`.

Negative cases rejected mixed input hash suites, mismatched prover options,
an altered input seal, altered final seal/claim, and incorrect expected leaf
image IDs, journals, or control roots. Expected claims are reconstructed from
application constants, independently of receipt-supplied claims.

Union proves the aggregate statements; the state-chain semantics below are
separately checked by the guest and composed through resolve.

## Resolve and existing SHA operators

The three-step arithmetic chain remains bounded to at most three segments per
step. Execution sizing found 6,168 / 49,623 / 20,942 user cycles.

| Step | State | Segments | Proof + verification time | Seal bytes |
|---|---:|---:|---:|---:|
| 1 | 7 | 1 | 3.565 s | 272780 |
| 2 | 18 | 3 | 21.484 s | 272780 |
| 3 | 31 | 2 | 13.926 s | 272780 |

Step 2 explicitly lifted three segments, joined twice, and resolved the
previous receipt. Step 3 exercised automatic assumption resolution. Every
resolved step passed full verification with empty assumptions. The final
receipt alone verified in a new process, establishing step 3 and state 31.
Its serialized size is 273,636 bytes. SHA-native identity wrapping also passed
(2.960 s including verification).

Negative cases rejected a conditional receipt as unconditional, wrong
assumption claims, mixed hashes, state splicing, altered predecessor journals,
missing predecessors, and altered final journals or seals. The deliberate
state-splicing test printed an expected guest assertion failure; the overall
command exited successfully.

The current receipt and run log are saved under
`~/.cache/risc0-sha256-shared/resolve-final.receipt` and `resolve-smoke.log`.

## Poseidon2 compatibility

One additional single-segment sum execution used Poseidon2 succinct proving
with identity wrapping and `segment_limit_po2=16`. It passed: 1.454 s proving
and wrapping, 8.818 ms verification, 222,668 seal bytes. The run log is
`~/.cache/risc0-sha256-shared/poseidon-regression.log`.

## Artifact validation

The generated `union_sha256.zkr` control ID is
`c15a7b73bc68638b84cbd847fb6bfcfc1ee25c8353cd527c0e3ae44e597b396a`.
The previously tested `resolve_sha256.zkr` payload is byte-for-byte unchanged;
its control ID remains
`1d1570459bb1a7a3819500da3f4a20b61af18ee0756a551e152342c34ae68eb4`.
Both programs execute in the SHA-native `2^21` recursion domain.

The combined Git LFS archive `recursion_zkr_sha256.zip` is 154,725,353 bytes,
SHA-256 `07489ef3ebc8e1665ff2c9e242e41581409e4e1f26cda3abf367ef7d2fcc892d`.
It contains the original 56 payloads unchanged plus native resolve and union.
The legacy archive remains unchanged, SHA-256
`91ae9850d13b5866e60c918bc21f4f7f3397ed72b80e35fa10139dc0303cf875`.

Only the SHA-256 resolve/union entries in the control-ID table changed from
the prior committed backend. Existing lift/join/identity IDs and all Poseidon2
IDs are unchanged. The SHA-256 default control root changes, so consumers must
pin matching prover/verifier revisions and use the matching archive.

Shell/Python syntax checks, formatting checks for the new examples, and
`git diff --check` also passed.
