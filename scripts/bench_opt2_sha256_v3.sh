#!/usr/bin/env bash
set -euo pipefail

ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "${ROOT_DIR}"

# Permanent cache: survives reboot and is shared by every v3 benchmark.
export CARGO_TARGET_DIR="${CARGO_TARGET_DIR:-${HOME}/.cache/sedaa-risc0-shared-target}"

mode="${1:-both}"
identity="${2:-no-identity}"
case "${mode}" in
  composite|succinct|both) ;;
  *) echo "usage: $0 [composite|succinct|both] [identity|no-identity]" >&2; exit 2 ;;
esac
case "${identity}" in
  identity|no-identity) ;;
  *) echo "usage: $0 [composite|succinct|both] [identity|no-identity]" >&2; exit 2 ;;
esac

variants=(
  sphincs-sha2-128s
  sphincs-sha2-128f
  sphincs-sha2-192s
  sphincs-sha2-192f
  sphincs-sha2-256s
  sphincs-sha2-256f
)

run_one() {
  local variant="$1"
  local receipt_kind="$2"
  local wrap=0
  if [[ "${receipt_kind}" == succinct && "${identity}" == identity ]]; then
    wrap=1
  fi

  echo
  echo "=== ${variant} | RISC0 v3.0.4 | SHA-256 | opt2 | ${receipt_kind} | identity=${wrap} ==="
  RISC0_PROVER=local \
  RISC0_BACKEND_HASH=sha-256 \
  RISC0_RECEIPT_KIND="${receipt_kind}" \
  RISC0_IDENTITY_WRAP="${wrap}" \
  DAA_DETERMINISTIC=1 \
  SPHINCS_OPT_LEVEL=2 \
  SPHINCS_PARAMS="${variant}" \
  SPHINCS_THASH=simple \
  cargo run -p daa_sha256_backend_host --bin daa_sha256_backend_host --release --features cuda
}

for variant in "${variants[@]}"; do
  if [[ "${mode}" == composite || "${mode}" == both ]]; then
    run_one "${variant}" composite
  fi
  if [[ "${mode}" == succinct || "${mode}" == both ]]; then
    run_one "${variant}" succinct
  fi
done
