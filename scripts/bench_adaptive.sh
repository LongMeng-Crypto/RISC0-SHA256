#!/usr/bin/env bash
# Compare bounded, identical-size real CUDA chains with explicit legacy/adaptive parameters.
set -euo pipefail
script_dir="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cd "${script_dir}/.."
source "${script_dir}/shared_cache_env.sh"
repeats="${1:-2}"
if [[ ! "$repeats" =~ ^[1-3]$ ]]; then
  echo "usage: $0 [repeats: 1..3] [new output directory]" >&2
  exit 2
fi
out="${2:-benchmarks/results/adaptive-$(date -u +%Y%m%dT%H%M%SZ)}"
if [[ -e "$out" ]]; then
  echo "output directory already exists: $out" >&2
  exit 2
fi
mkdir -p "$out"
out="$(realpath "$out")"
cargo build -p risc0-sha256-resolve-smoke --bin adaptive_bench --release --features cuda 2>&1 | tee "$out/build.log"
binary="${CARGO_TARGET_DIR}/release/adaptive_bench"
"$binary" inspect | tee "$out/inspect.log"
work="$(sed -n 's/^selected_work=//p' "$out/inspect.log")"
[[ "$work" =~ ^[0-9]+$ ]]
sampler=""
if command -v nvidia-smi >/dev/null; then
  TZ=UTC nvidia-smi --query-gpu=timestamp,name,utilization.gpu,memory.used,power.draw,clocks.sm,temperature.gpu --format=csv -l 1 > "$out/gpu.csv" &
  sampler=$!
fi
# Stop only this script's telemetry process on success, error, or interruption.
cleanup() {
  if [[ -n "$sampler" ]]; then kill "$sampler" 2>/dev/null || true; wait "$sampler" 2>/dev/null || true; fi
}
trap cleanup EXIT
for ((round=1; round<=repeats; round++)); do
  modes=(legacy adaptive)
  if ((round % 2 == 0)); then modes=(adaptive legacy); fi
  for mode in "${modes[@]}"; do
    dir="$out/run-$round/$mode"
    mkdir -p "$dir"
    "$binary" "$mode" "$dir" "$work" | tee "$dir/prove.log"
    "$binary" verify "$dir" "$work" "$mode" | tee "$dir/verify.log"
  done
done
"$binary" regression "$out/run-$repeats/adaptive" "$work" | tee "$out/regression.log"
python3 "${script_dir}/summarize_adaptive.py" "$out"
printf 'Results: %s\n' "$out"
