#!/usr/bin/env bash
set -euo pipefail

if [[ $# -ne 1 ]]; then
  echo "usage: $0 /path/to/zirgen" >&2
  exit 2
fi

zirgen_dir="$(realpath "$1")"
script_dir="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
expected_commit="1c9059c3ee5ed5d43ee6e9d8a4bab3d4b3d0c8f2"

actual_commit="$(git -C "${zirgen_dir}" rev-parse HEAD)"
if [[ "${actual_commit}" != "${expected_commit}" ]]; then
  echo "expected Zirgen ${expected_commit}, found ${actual_commit}" >&2
  exit 1
fi

cp -a "${script_dir}/overlay/." "${zirgen_dir}/"
cd "${zirgen_dir}"
bazel --batch \
  --output_base="${RISC0_ZIRGEN_BAZEL_OUTPUT_BASE:-/tmp/risc0-sha256-v3-bazel}" \
  build --spawn_strategy=local --jobs=1 --local_ram_resources=10000 \
  //zirgen/circuit/predicates:gen_predicates \
  --noshow_progress

out="${zirgen_dir}/bazel-bin/zirgen/circuit/predicates"
for po2 in $(seq 14 24); do
  test -s "${out}/lift_rv32im_v2_sha256_${po2}.zkr"
  test -s "${out}/lift_rv32im_v2_povw_sha256_${po2}.zkr"
done
test -s "${out}/join_sha256.zkr"
test -s "${out}/identity_sha256.zkr"

echo "SHA-256 ZKRs generated under ${out}"
