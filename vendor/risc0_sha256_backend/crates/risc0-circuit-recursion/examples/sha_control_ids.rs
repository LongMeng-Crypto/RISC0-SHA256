use risc0_circuit_recursion::prove::zkr::get_all_zkrs;
use risc0_zkp::core::hash::sha::Sha256HashSuite;

// Compute domain-specific control IDs; bootstrap mode keeps only one decoded program in memory.
fn main() -> anyhow::Result<()> {
    if std::env::args().nth(1).as_deref() == Some("--adaptive") {
        println!("// Generated control IDs for the explicit adaptive SHA-256 profile.");
        println!("pub const SHA256_ADAPTIVE_PROGRAMS: &[(&str, usize, risc0_zkp::core::digest::Digest)] = &[");
        for &(name, po2) in risc0_circuit_recursion::adaptive::SHA256_ADAPTIVE_SPECS {
            let program = risc0_circuit_recursion::prove::zkr::load_zkr(name, po2)?;
            let id = program.compute_control_id(Sha256HashSuite::new_suite())?;
            eprintln!("{name} rows={} po2={po2} id={id}", program.code_rows());
            println!(
                "    (\"{name}\", {po2}, risc0_zkp::core::digest::Digest::new({:?})),",
                id.as_words()
            );
        }
        println!("];");
        return Ok(());
    }
    let filter = std::env::args().nth(1);
    let mut zkrs = get_all_zkrs()?
        .into_iter()
        .filter(|(name, _)| name.contains("sha256") && filter.as_ref().map_or(true, |f| name == f))
        .collect::<Vec<_>>();
    zkrs.sort_by(|a, b| a.0.cmp(&b.0));

    for (name, encoded) in zkrs {
        let program = risc0_circuit_recursion::prove::Program::from_encoded(&encoded, 21);
        let id = program.compute_control_id(Sha256HashSuite::new_suite())?;
        println!("{name} {id:?}");
    }
    Ok(())
}
