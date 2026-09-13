#!/usr/bin/env bash
# Source this file for every local experiment; shared artifacts survive terminal sessions.
export RISC0_SHARED_CACHE="${RISC0_SHARED_CACHE:-${HOME}/.cache/risc0-sha256-shared}"
export CARGO_TARGET_DIR="${CARGO_TARGET_DIR:-${HOME}/.cache/sedaa-risc0-shared-target}"
export CUDA_CACHE_PATH="${CUDA_CACHE_PATH:-${RISC0_SHARED_CACHE}/cuda}"
export RISC0_BAZEL_CACHE="${RISC0_BAZEL_CACHE:-${RISC0_SHARED_CACHE}/bazel}"
# Cargo Git dependencies may contain only LFS pointers. Use this checkout's
# hydrated archive, which must match the revision of the patched crates.
risc0_backend_root="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
export RECURSION_SRC_PATH="${RECURSION_SRC_PATH:-${risc0_backend_root}/vendor/risc0_sha256_backend/crates/risc0-circuit-recursion/src/recursion_zkr_sha256.zip}"
unset risc0_backend_root
export RISC0_PROVER=local
export RISC0_DEV_MODE=0
mkdir -p "${RISC0_SHARED_CACHE}" "${CARGO_TARGET_DIR}" "${CUDA_CACHE_PATH}"
