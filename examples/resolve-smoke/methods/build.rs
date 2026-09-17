use std::{fs, path::Path};

// Track guest inputs recursively so Cargo rebuilds methods when their sources change.
fn track(path: &Path) {
    println!("cargo:rerun-if-changed={}", path.display());
    if path.is_dir() {
        for entry in fs::read_dir(path).unwrap() {
            let path = entry.unwrap().path();
            if path.is_dir()
                || path
                    .extension()
                    .is_some_and(|s| s == "rs" || s == "toml" || s == "lock")
            {
                track(&path);
            }
        }
    }
}

// Build the guests and preserve unchanged generated metadata to avoid host relinking.
fn main() {
    for path in [
        "guest/src",
        "guest/Cargo.toml",
        "guest/Cargo.lock",
        "../../../Cargo.toml",
        "../../../Cargo.lock",
    ] {
        track(Path::new(path));
    }
    let output = Path::new(&std::env::var("OUT_DIR").unwrap()).join("methods.rs");
    let before = fs::read(&output)
        .ok()
        .zip(fs::metadata(&output).and_then(|m| m.modified()).ok());
    risc0_build::embed_methods();
    // The upstream builder rewrites methods.rs and watches it. Preserve its
    // timestamp when content is identical to avoid unnecessary host relinking.
    if let Some((bytes, modified)) = before {
        if fs::read(&output).unwrap() == bytes {
            fs::File::options()
                .write(true)
                .open(output)
                .unwrap()
                .set_times(fs::FileTimes::new().set_modified(modified))
                .unwrap();
        }
    }
}
