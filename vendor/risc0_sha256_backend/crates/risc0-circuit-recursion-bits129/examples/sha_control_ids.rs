use risc0_circuit_recursion_bits129::prove::zkr::get_all_zkrs;
use risc0_zkp::{baby_bear_ext6::BabyBear6, core::hash::sha::Sha256HashSuite};

fn main() -> anyhow::Result<()> {
    let mut zkrs = get_all_zkrs()?.into_iter().collect::<Vec<_>>();
    zkrs.sort_by(|a, b| a.0.cmp(&b.0));

    let mut ids = Vec::new();
    for (name, encoded) in zkrs {
        let po2 = if name == "join.zkr" { 22 } else { 21 };
        let program = risc0_circuit_recursion_bits129::prove::Program::from_encoded(&encoded, po2);
        let id = program.compute_control_id(Sha256HashSuite::<BabyBear6>::new_suite())?;
        println!("{name} {id:?}");
        ids.push(id);
    }

    let suite = Sha256HashSuite::<BabyBear6>::new_suite();
    ids.resize(1 << 8, risc0_zkp::core::digest::Digest::ZERO);
    while ids.len() > 1 {
        ids = ids
            .chunks_exact(2)
            .map(|pair| *suite.hashfn.hash_pair(&pair[0], &pair[1]))
            .collect();
    }
    println!("control_root {:?}", ids[0]);
    Ok(())
}
