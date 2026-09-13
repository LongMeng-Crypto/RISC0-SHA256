#!/usr/bin/env bash
set -euo pipefail

ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "${ROOT_DIR}"

source "${ROOT_DIR}/scripts/shared_cache_env.sh"
export RISC0_SEGMENT_LIMIT_PO2="${RISC0_SEGMENT_LIMIT_PO2:-20}"

cargo build -p risc0-sha256-backend-smoke --bin risc0-sha256-backend-smoke --release --features cuda
binary="${CARGO_TARGET_DIR}/release/risc0-sha256-backend-smoke"

run_smoke() {
  local hashfn="$1"
  local receipt="$2"
  local identity="$3"
  echo
  echo "=== backend-smoke hashfn=${hashfn} receipt=${receipt} identity=${identity} ==="
  RISC0_BACKEND_HASH="${hashfn}" \
  RISC0_RECEIPT_KIND="${receipt}" \
  RISC0_IDENTITY_WRAP="${identity}" \
    "${binary}"
}

run_smoke poseidon2 composite 0
run_smoke poseidon2 succinct 0
run_smoke sha-256 composite 0
run_smoke sha-256 succinct 0
run_smoke sha-256 succinct 1
