#!/usr/bin/env bash
set -euo pipefail
script_dir="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cd "${script_dir}/.."
source "${script_dir}/shared_cache_env.sh"
receipt="${RISC0_SHARED_CACHE}/resolve-final.receipt"
# Build once: repeated Cargo invocations may rerun guest embedding and relink the host.
cargo build -p risc0-sha256-resolve-smoke --release --features cuda
binary="${CARGO_TARGET_DIR}/release/risc0-sha256-resolve-smoke"
"${binary}" inspect
"${binary}" prove "${receipt}"
"${binary}" verify "${receipt}"
