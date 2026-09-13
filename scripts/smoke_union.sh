#!/usr/bin/env bash
set -euo pipefail
script_dir="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cd "${script_dir}/.."
source "${script_dir}/shared_cache_env.sh"
receipt="${RISC0_SHARED_CACHE}/union-final.receipt"
# Build once; each verification phase starts a fresh process.
cargo build -p risc0-sha256-backend-smoke --bin union_smoke --release --features cuda
binary="${CARGO_TARGET_DIR}/release/union_smoke"
"${binary}" inspect
"${binary}" prove "${receipt}"
"${binary}" verify "${receipt}"
