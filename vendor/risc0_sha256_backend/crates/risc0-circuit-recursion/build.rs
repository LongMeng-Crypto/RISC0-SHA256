// Copyright 2025 RISC Zero, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

fn main() {
    #[cfg(feature = "prove")]
    download_zkr();
}

#[cfg(feature = "prove")]
fn download_zkr() {
    use std::{
        env, fs,
        path::{Path, PathBuf},
    };

    use sha2::{Digest, Sha256};

    const FILENAME: &str = "recursion_zkr.zip";
    const SRC_PATH: &str = "src/recursion_zkr_sha256.zip";
    // NOTE: This can be calculated with:
    // sha256sum src/recursion_zkr_sha256.zip
    const SHA256_HASH: &str = "07489ef3ebc8e1665ff2c9e242e41581409e4e1f26cda3abf367ef7d2fcc892d";

    fn check_sha2(path: &Path) -> bool {
        let data = fs::read(path).unwrap();
        hex::encode(Sha256::digest(data)) == SHA256_HASH
    }

    println!("cargo:rerun-if-env-changed=RECURSION_SRC_PATH");

    let src_path = env::var("RECURSION_SRC_PATH").unwrap_or(SRC_PATH.to_string());
    let src_path = PathBuf::from(src_path);
    println!("cargo:rerun-if-changed={}", src_path.display());
    let out_dir = env::var("OUT_DIR").unwrap();
    let out_dir = Path::new(&out_dir);
    let out_path = out_dir.join(FILENAME);

    if env::var("DOCS_RS").is_ok() && !out_path.exists() {
        fs::write(&out_path, b"").unwrap();
        return;
    }

    if out_path.exists() {
        if check_sha2(&out_path) {
            return;
        }
        fs::remove_file(&out_path).unwrap();
    }

    if src_path.exists() && check_sha2(&src_path) {
        fs::copy(&src_path, &out_path).unwrap();
        return;
    }

    panic!(
        "SHA-256 recursion archive missing or checksum mismatch at {}. \
         Run `git lfs pull` in the matching RISC0-SHA256 checkout and, for Cargo Git \
         dependencies, set RECURSION_SRC_PATH to its src/recursion_zkr_sha256.zip. \
         Expected SHA-256: {SHA256_HASH}. This custom archive is not hosted upstream.",
        src_path.display()
    );
}
