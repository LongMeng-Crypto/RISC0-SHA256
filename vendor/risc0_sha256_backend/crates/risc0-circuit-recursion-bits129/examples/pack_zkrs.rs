use std::{
    fs::File,
    io::{Read, Write},
    path::PathBuf,
};

use anyhow::{Context, Result};
use zip::{write::SimpleFileOptions, CompressionMethod, ZipWriter};

fn main() -> Result<()> {
    let mut args = std::env::args_os().skip(1);
    let input = PathBuf::from(
        args.next()
            .context("missing generated predicate directory")?,
    );
    let output = PathBuf::from(args.next().context("missing output archive")?);
    let mut names: Vec<(String, String)> = (14..=24)
        .map(|po2| {
            (
                format!("lift_rv32im_v2_sha256_{po2}.zkr"),
                format!("lift_rv32im_v2_{po2}.zkr"),
            )
        })
        .collect();
    names.extend([
        ("join_sha256.zkr".to_owned(), "join.zkr".to_owned()),
        ("identity_sha256.zkr".to_owned(), "identity.zkr".to_owned()),
    ]);

    let file = File::create(&output)?;
    let mut zip = ZipWriter::new(file);
    let options = SimpleFileOptions::default().compression_method(CompressionMethod::Deflated);
    for (source_name, archive_name) in names {
        let mut bytes = Vec::new();
        File::open(input.join(&source_name))
            .with_context(|| format!("open {source_name}"))?
            .read_to_end(&mut bytes)?;
        zip.start_file(&archive_name, options)?;
        zip.write_all(&bytes)?;
    }
    zip.finish()?;
    Ok(())
}
