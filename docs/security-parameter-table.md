# Security parameter table

This table is generated from the RV32IM tap set by:

```console
cargo run -q -p risc0-sha256-backend-smoke --bin security_parameters
```

The calculator uses the RISC Zero Toy Problem conjecture and sums four error terms: permutation /
lookup, constraint evaluation, FRI queries, and commitment collisions. Values below are the exact
`f64` results emitted by the calculator, not rounded security claims.

| profile | target | FRI queries | blowup | extension degree | SHA-256 lanes | at 2^20 rows | at 2^24 rows | target at 2^24 |
|---|---:|---:|---:|---:|---:|---:|---:|---|
| Legacy97 | 97 | 50 | 4 | 4 | 1 | 97.141981 | 93.341745 | no |
| Bits129 | 129 | 65 | 4 | 6 | 2 | 130.000000 | 130.000000 | yes |
| Bits192 | 192 | 97 | 4 | 8 | 2 | 194.000000 | 194.000000 | yes |
| Bits256TwoLane | 256 | 129 | 4 | 10 | 2 | 255.678072 | 255.678072 | no |
| Bits256 | 256 | 129 | 4 | 10 | 3 | 258.000000 | 257.999999 | yes |

`Legacy97` is intentionally unchanged. Its name describes the current default operating point,
not a guarantee for every trace size; the permutation / lookup error grows with the trace domain.

Two independent SHA-256 lanes produce 512 commitment bits and at most 256 bits of ideal collision
security. Because the total soundness error is a sum, a two-lane collision term of exactly `2^-256`
cannot yield at least 256 total bits when any other error term is nonzero. The strict `Bits256` row
therefore requires three SHA-256 lanes. The two-lane primitive implemented in this change is enough
for `Bits129` and `Bits192`; a three-lane commitment remains required before enabling `Bits256`.

These are parameter-selection results, not claims that all profiles are operational. This change
implements the degree-six field and two-lane commitment primitives. Wiring them through the HAL,
FRI, Merkle proofs, receipt format, and recursion circuits is a separate integration step.
