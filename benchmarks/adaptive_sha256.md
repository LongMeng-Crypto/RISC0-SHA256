# Adaptive SHA-256 recursion: bounded CUDA check

2026-09-17, NVIDIA RTX 2000 Ada (16 GiB), RISC Zero 3.0.4.
Baseline: `51a51b14eeaac41d390b1ced92826273f90b333c`.

The legacy default and both original archives/control-ID tables are unchanged.
This adds an explicit adaptive program set; it does not switch the LangGraph project.

## Measurement

Three paired repetitions, alternating profile order; a fresh prover process per
profile/run. Both profiles execute the same two-step arithmetic chain and private
inputs, with each RV32IM segment padded to exactly `2^17`. These are backend
measurements, not new policy benchmarks. Shared Cargo and CUDA caches were used.

Prover time includes execution, base proving, recursion program loading, Lift,
Resolve, and the backend's internal verification. Negative checks run after the
real proving path and outside its timers. Final verifier time includes receipt
verification and expected-journal/empty-assumption checks using prepared trusted
parameters. Compilation, output serialization, and extra regressions are excluded.
Receipt size uses the existing RISC Zero word serialization for this fixture.

Median results:

| Metric | Legacy | Adaptive |
|---|---:|---:|
| Step 1 prover | 3.826 s | 2.546 s |
| Step 2 prover | 7.589 s | 6.027 s |
| Total prover | 11.415 s | 8.573 s |
| Final verifier | 0.779 ms | 0.812 ms |
| Final receipt | 273,668 bytes | 273,668 bytes |

Total prover reduction: **24.9%**
(1.33x speedup). Every final receipt verified with zero unresolved assumptions.

| Step | Phase | Legacy median | Adaptive median |
|---|---|---:|---:|
| 1 | base_proof | 0.739 s | 0.761 s |
| 1 | lift | 3.086 s | 1.777 s |
| 2 | base_proof | 0.572 s | 0.579 s |
| 2 | lift | 2.913 s | 1.643 s |
| 2 | resolve | 4.069 s | 3.789 s |

| Run | Legacy total | Adaptive total | Reduction |
|---|---:|---:|---:|
| 1 | 11.558 s | 8.573 s | 25.8% |
| 2 | 11.415 s | 8.583 s | 24.8% |
| 3 | 11.286 s | 8.284 s | 26.6% |

Lift uses `2^19` instead of `2^21` for these inputs. Resolve still uses `2^21`,
but verifies the smaller input proofs. Identity uses `2^20`. No security parameter
or zero-knowledge allowance is reduced. Do not interpret a fourfold domain-size
reduction as a fourfold wall-time improvement.

## Correctness and compatibility

- Real adaptive Lift domains 19 and 20; Resolve inputs 19/19 and 19/21;
  multi-segment Join; Identity inputs 19, 20 and 21; nested Union.
- Automatic `prove_with_opts`, explicit composition, and fresh-process final verification.
- Rejected altered journals/seals/domains/control membership, wrong verifier
  profiles, unresolved receipts, wrong assumptions, mixed suites, state splices,
  missing predecessors, and unsupported input domains.
- Three profile/options regression tests passed.
- Previously saved legacy resolve receipt verified with the new backend;
  existing legacy resolve/join/identity and union smoke tests passed.
- Both original archive checksums are unchanged; regenerated 21/21 legacy-equivalent
  predicates match their old bytecode exactly.

Regeneration produces 41 control-ID/domain entries and 30 new input-domain
verifier programs in a separate checksummed archive. The original Lift bytecode
is reused at smaller domains. Supported input pairs are all of `{19,20,21}²`;
the checks above cover the bounded application/composition paths, not an exhaustive
GPU proof for every generated pair or every RV32IM size up to 24.

## Reproduce

```bash
./scripts/bench_adaptive.sh 3
```

Per-run metrics, receipts, independent verification logs and CUDA telemetry are
under `benchmarks/results/adaptive-20260917-release/` in the development worktree.
Guest assertion messages in negative checks are expected; the script must exit
successfully and print the final summary. Use the original options/context to
retain fixed-size behavior; adaptive receipts require the explicit adaptive verifier.
