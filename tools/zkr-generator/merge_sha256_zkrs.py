#!/usr/bin/env python3
"""Extend the legacy archive with SHA-native resolve and union programs.

After merging, recompute their control IDs with the sha_control_ids example
and update SHA256_CONTROL_IDS before generating receipts.
"""
import argparse
import hashlib
from pathlib import Path
import re
import shutil
import zipfile

parser = argparse.ArgumentParser(description=__doc__)
parser.add_argument("resolve_zkr", type=Path)
parser.add_argument("union_zkr", type=Path)
args = parser.parse_args()
root = Path(__file__).resolve().parents[2]
crate = root / "vendor/risc0_sha256_backend/crates/risc0-circuit-recursion"
base = crate / "src/recursion_zkr.zip"
archive = crate / "src/recursion_zkr_sha256.zip"
payloads = {
    "resolve_sha256.zkr": args.resolve_zkr.read_bytes(),
    "union_sha256.zkr": args.union_zkr.read_bytes(),
}
for name, payload in payloads.items():
    assert payload and len(payload) % 4 == 0, f"invalid encoded program: {name}"
with zipfile.ZipFile(base) as z:
    assert len(z.namelist()) == len(set(z.namelist())), "duplicate ZKR entries"
    before = {name: hashlib.sha256(z.read(name)).digest() for name in z.namelist()}
    assert not before.keys() & payloads.keys(), "extension already present in legacy archive"
shutil.copyfile(base, archive)
with zipfile.ZipFile(archive, "a", compression=zipfile.ZIP_DEFLATED) as z:
    for name, payload in payloads.items():
        entry = zipfile.ZipInfo(name, date_time=(2026, 1, 1, 0, 0, 0))
        entry.compress_type = zipfile.ZIP_DEFLATED
        z.writestr(entry, payload)
with zipfile.ZipFile(archive) as z:
    assert len(z.namelist()) == len(before) + len(payloads)
    for name, digest in before.items():
        assert hashlib.sha256(z.read(name)).digest() == digest, name
digest = hashlib.sha256(archive.read_bytes()).hexdigest()
build = crate / "build.rs"
source, count = re.subn(r'const SHA256_HASH: &str = "[0-9a-f]{64}";',
                      f'const SHA256_HASH: &str = "{digest}";', build.read_text())
assert count == 1
source, count = re.subn(r'const SRC_PATH: &str = "src/recursion_zkr[^"/]*\.zip";',
                      'const SRC_PATH: &str = "src/recursion_zkr_sha256.zip";', source)
assert count == 1
build.write_text(source)
print(f"preserved_existing_artifacts={len(before)} archive_sha256={digest}")
