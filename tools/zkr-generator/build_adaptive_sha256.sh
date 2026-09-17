#!/usr/bin/env bash
# Regenerate optional adaptive artifacts with the existing pinned Zirgen and shared caches.
set -euo pipefail
script_dir="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cd "${script_dir}/../.."
source scripts/shared_cache_env.sh
zirgen="${1:-${RISC0_SHARED_CACHE}/zirgen}"
"${script_dir}/build_sha256_zkrs.sh" "$zirgen"
python3 "${script_dir}/pack_adaptive_zkrs.py" "$zirgen/bazel-bin/zirgen/circuit/predicates"
cargo build -p risc0-circuit-recursion --example sha_control_ids --release --features cuda
ids="vendor/risc0_sha256_backend/crates/risc0-circuit-recursion/src/adaptive_control_ids.rs"
temporary="$(mktemp)"
trap 'rm -f "$temporary"' EXIT
"${CARGO_TARGET_DIR}/release/examples/sha_control_ids" --adaptive > "$temporary"
[[ "$(rg -c 'Digest::new' "$temporary")" == 41 ]]
mv "$temporary" "$ids"
rustfmt --edition 2021 "$ids"
echo "Adaptive artifacts and control IDs regenerated; run scripts/bench_adaptive.sh before release."
