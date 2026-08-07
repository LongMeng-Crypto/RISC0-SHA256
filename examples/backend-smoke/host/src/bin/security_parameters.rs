use risc0_circuit_rv32im::CircuitImpl;
use risc0_zkp::{
    adapter::TapsProvider,
    prove::soundness::{toy_model_report, ToyModelConfig},
};

struct Candidate {
    name: &'static str,
    target: usize,
    config: ToyModelConfig,
    sha_lanes: usize,
}

fn main() {
    let taps = CircuitImpl.get_taps();
    let candidates = [
        Candidate {
            name: "Legacy97",
            target: 97,
            config: ToyModelConfig::LEGACY97,
            sha_lanes: 1,
        },
        Candidate {
            name: "Bits129",
            target: 129,
            config: ToyModelConfig {
                queries: 65,
                inv_rate: 4,
                extension_degree: 6,
                hash_collision_bits: 256.0,
            },
            sha_lanes: 2,
        },
        Candidate {
            name: "Bits192",
            target: 192,
            config: ToyModelConfig {
                queries: 97,
                inv_rate: 4,
                extension_degree: 8,
                hash_collision_bits: 256.0,
            },
            sha_lanes: 2,
        },
        Candidate {
            name: "Bits256TwoLane",
            target: 256,
            config: ToyModelConfig {
                queries: 129,
                inv_rate: 4,
                extension_degree: 10,
                hash_collision_bits: 256.0,
            },
            sha_lanes: 2,
        },
        Candidate {
            name: "Bits256",
            target: 256,
            config: ToyModelConfig {
                queries: 129,
                inv_rate: 4,
                extension_degree: 10,
                hash_collision_bits: 384.0,
            },
            sha_lanes: 3,
        },
    ];

    println!("| profile | target | queries | blowup | extension | SHA-256 lanes | po2=20 | po2=24 | status |");
    println!("|---|---:|---:|---:|---:|---:|---:|---:|---|");
    for candidate in candidates {
        let at_20 = toy_model_report(taps, 1 << 20, candidate.config);
        let at_24 = toy_model_report(taps, 1 << 24, candidate.config);
        let passes = at_24.security_bits >= candidate.target as f64;
        println!(
            "| {} | {} | {} | {} | {} | {} | {:.6} | {:.6} | {} |",
            candidate.name,
            candidate.target,
            candidate.config.queries,
            candidate.config.inv_rate,
            candidate.config.extension_degree,
            candidate.sha_lanes,
            at_20.security_bits,
            at_24.security_bits,
            if passes { "PASS" } else { "FAIL" },
        );
    }
}

#[cfg(test)]
mod tests {
    use risc0_zkp::field::Elem;
    use risc0_zkp::{
        baby_bear_ext6::BabyBearExt6,
        core::hash::sha::{
            cpu,
            wide::{Sha256Wide2, WideDigest2, WIDE_SHA256_BYTES},
        },
    };
    use risc0_zkvm::sha::Digest;

    #[test]
    fn ext6_inverse_and_distributivity() {
        for seed in 1..=32 {
            let a = BabyBearExt6::new(core::array::from_fn(|i| (seed * 17 + i as u32 * 13).into()));
            let b = BabyBearExt6::new(core::array::from_fn(|i| (seed * 29 + i as u32 * 7).into()));
            assert_eq!(a * a.inv(), BabyBearExt6::ONE);
            assert_eq!(a * (b + BabyBearExt6::ONE), a * b + a);
        }
    }

    #[test]
    fn wide_sha_has_independent_lanes_and_domains() {
        type WideSha = Sha256Wide2<cpu::Impl>;
        let leaf = WideSha::hash_bytes(b"security profile");
        assert_eq!(leaf.as_bytes().len(), WIDE_SHA256_BYTES);
        assert_ne!(leaf.lanes()[0], leaf.lanes()[1]);
        assert_ne!(leaf, WideSha::hash_pair(&leaf, &WideDigest2::ZERO));
        assert_ne!(leaf.lanes()[0], Digest::ZERO);
    }
}
