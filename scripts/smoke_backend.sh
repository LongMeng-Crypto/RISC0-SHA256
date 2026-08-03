#!/usr/bin/env bash
set -euo pipefail

ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "${ROOT_DIR}"

export CARGO_TARGET_DIR="${CARGO_TARGET_DIR:-${HOME}/.cache/sedaa-risc0-shared-target}"
export RISC0_PROVER="${RISC0_PROVER:-local}"
export RISC0_SEGMENT_LIMIT_PO2="${RISC0_SEGMENT_LIMIT_PO2:-20}"

run_smoke() {
  local hashfn="$1"
  local receipt="$2"
  local identity="$3"
  echo
  echo "=== backend-smoke hashfn=${hashfn} receipt=${receipt} identity=${identity} ==="
  RISC0_BACKEND_HASH="${hashfn}" \
  RISC0_RECEIPT_KIND="${receipt}" \
  RISC0_IDENTITY_WRAP="${identity}" \
    cargo run -p risc0-sha256-backend-smoke --release --features cuda
}

run_smoke poseidon2 composite 0
run_smoke poseidon2 succinct 0
run_smoke sha-256 composite 0
run_smoke sha-256 succinct 0
run_smoke sha-256 succinct 1
