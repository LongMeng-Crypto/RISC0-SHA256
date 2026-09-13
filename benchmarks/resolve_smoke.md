# SHA-256 resolve CUDA smoke test

Historical result before adding union. The combined backend uses a newer control
root and archive; see [the combined regression](sha256_composition_smoke.md) for
the current run. The timings and hashes below describe that earlier build.

Passed on 2026-09-13 using the local NVIDIA RTX 2000 Ada GPU, with real proofs
(`RISC0_DEV_MODE=0`, `RISC0_PROVER=local`, `--features cuda`).

Command: `./scripts/smoke_resolve.sh`

The script builds once using the persistent shared cache, then runs an
execution-only size check, the three-step proof chain, and a separate verifier
process. The chain is a bounded arithmetic state machine, not the later Flow
Restriction application.

| Step | State | Execution segments | Proof + verification wall time | Seal bytes |
|---|---:|---:|---:|---:|
| 1 | 7 | 1 | 3.687 s | 272780 |
| 2 | 18 | 3 | 21.983 s | 272780 |
| 3 | 31 | 2 | 14.099 s | 272780 |

The first proof establishes state 7 from initial state 0. Step 2 exposes a
conditional receipt, joins its three execution segments, and explicitly
resolves the predecessor assumption. Step 3 uses automatic composition through
`add_assumption` and `prove_with_opts` to reach state 31.

All three final step receipts passed full verification with empty assumptions.
The last receipt alone passed verification in a new process. Its serialized
size is 273,636 bytes; its seal is 272,780 bytes. No predecessor receipt files
are needed by the final verifier.

Additional checks passed:

- The conditional receipt passed integrity verification and failed full verification.
- Incorrect assumption claims and mismatched hash suites were rejected.
- State splicing, an altered predecessor journal, and a missing receipt were rejected.
- Tampering with the final journal or seal was rejected.
- Existing SHA-256 lift and join worked; step 2 performed two joins.
- Existing SHA-256 identity wrapping passed (2.970 s, including verification).

The deliberate invalid-state case prints a guest assertion failure; this is an
expected negative test. The complete script exited successfully.

## Artifact compatibility

The original archive SHA-256 remains
`91ae9850d13b5866e60c918bc21f4f7f3397ed72b80e35fa10139dc0303cf875`.
All 56 original program payloads were preserved in the extended archive.
Only `resolve_sha256.zkr` was added. The extended archive SHA-256 is
`ccbf90612d76b64f2c410d3b831aaddaba30a2a6c97180ceabbaa6a088ff0853`.

The new resolve control ID is
`1d1570459bb1a7a3819500da3f4a20b61af18ee0756a551e152342c34ae68eb4`.
All other SHA-256 control IDs and the Poseidon2 control IDs were unchanged.
The default SHA-256 control root changes with the new resolve ID, so old
receipts continue to require their matching old verifier parameters. Existing
SEDAA consumers pinned to the old revision retain their original archive.

The implementation also selects the SHA-256 verifier context when accepting
SHA-256 assumptions and uses raw SHA words for the resolve control-root IOP.
Journal and assumptions-tail inputs retain their 16-half-word encoding.

That run stored its final receipt in
`~/.cache/risc0-sha256-shared/resolve-final.receipt`. The successful run log is
saved alongside it as `resolve-smoke.log`. Current regression runs replace these cache outputs.
