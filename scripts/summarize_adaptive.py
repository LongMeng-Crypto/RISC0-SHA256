#!/usr/bin/env python3
"""Summarize paired, bounded SHA-256 recursion experiments; compilation is excluded."""
import json
from pathlib import Path
import statistics
import sys


def main():
    """Validate all run metadata and report per-stage medians and the total speedup."""
    directory = Path(sys.argv[1])
    result = {"profiles": {}}
    for mode in ("legacy", "adaptive"):
        data = [json.loads(p.read_text()) for p in sorted(directory.glob(f"run-*/{mode}/metrics.json"))]
        assert data and all(d["verified"] and d["assumptions"] == 0 and d["cuda"] for d in data)
        assert all(len(d["steps"]) == 2 and all(s["segment_po2"] == 17 for s in d["steps"]) for d in data)
        result["profiles"][mode] = {
            "runs": len(data),
            "work": data[0]["work"],
            "total_prover_ms": statistics.median(d["total_prover_ms"] for d in data),
            "final_verifier_ms": statistics.median(d["final_verifier_ms"] for d in data),
            "final_proof_bytes": data[0]["final_proof_bytes"],
            "steps": [
                {key: statistics.median(d["steps"][i][key] for d in data)
                 for key in ("base_proof_ms", "lift_ms", "resolve_ms", "prover_ms", "lift_po2", "final_po2")}
                for i in range(2)
            ],
        }
    old, new = (result["profiles"][mode] for mode in ("legacy", "adaptive"))
    assert old["runs"] == new["runs"] and old["work"] == new["work"]
    result["speedup"] = old["total_prover_ms"] / new["total_prover_ms"]
    result["reduction_percent"] = 100 * (1 - new["total_prover_ms"] / old["total_prover_ms"])
    (directory / "summary.json").write_text(json.dumps(result, indent=2) + "\n")
    print(json.dumps(result, indent=2))


if __name__ == "__main__":
    main()
