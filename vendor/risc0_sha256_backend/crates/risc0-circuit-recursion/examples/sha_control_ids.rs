use risc0_circuit_recursion::prove::zkr::get_all_zkrs;
use risc0_zkp::core::hash::sha::Sha256HashSuite;

fn main() -> anyhow::Result<()> {
    let mut zkrs = get_all_zkrs()?
        .into_iter()
        .filter(|(name, _)| name.contains("sha256"))
        .collect::<Vec<_>>();
    zkrs.sort_by(|a, b| a.0.cmp(&b.0));

    for (name, encoded) in zkrs {
        let program = risc0_circuit_recursion::prove::Program::from_encoded(&encoded, 21);
        let id = program.compute_control_id(Sha256HashSuite::new_suite())?;
        println!("{name} {id:?}");
    }
    Ok(())
}
