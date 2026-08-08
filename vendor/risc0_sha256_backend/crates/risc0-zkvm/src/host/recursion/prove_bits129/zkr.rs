// Copyright 2025 RISC Zero, Inc.
// SPDX-License-Identifier: Apache-2.0

use anyhow::{anyhow, bail, ensure, Result};
use risc0_circuit_recursion_bits129::{control_id::BITS129_CONTROL_IDS, prove::Program};
use risc0_zkp::{core::digest::Digest, MAX_CYCLES_PO2, MIN_CYCLES_PO2};

pub const RECURSION_PO2: usize = 21;
pub const JOIN_RECURSION_PO2: usize = 22;

fn get_zkr(name: &str, hashfn: &str) -> Result<(Program, Digest)> {
    ensure!(hashfn == "sha-256", "Bits129 recursion requires sha-256");
    let id = BITS129_CONTROL_IDS
        .iter()
        .find_map(|(entry, id)| (*entry == name).then_some(*id))
        .ok_or_else(|| anyhow!("no Bits129 control ID for {name}"))?;
    let po2 = if name == "join.zkr" {
        JOIN_RECURSION_PO2
    } else {
        RECURSION_PO2
    };
    Ok((
        risc0_circuit_recursion_bits129::prove::zkr::get_zkr(name, po2)?,
        id,
    ))
}

pub fn lift(po2: usize, hashfn: &str) -> Result<(Program, Digest)> {
    if (MIN_CYCLES_PO2..=MAX_CYCLES_PO2).contains(&po2) {
        get_zkr(&format!("lift_rv32im_v2_{po2}.zkr"), hashfn)
    } else {
        bail!("No Bits129 rv32im verifier available for po2={po2}")
    }
}

pub fn join(hashfn: &str) -> Result<(Program, Digest)> {
    get_zkr("join.zkr", hashfn)
}
pub fn identity(hashfn: &str) -> Result<(Program, Digest)> {
    get_zkr("identity.zkr", hashfn)
}

macro_rules! unsupported {
    ($($name:ident($($arg:ident : $ty:ty),*)),* $(,)?) => {$ (
        pub fn $name($($arg: $ty),*) -> Result<(Program, Digest)> {
            let _ = ($($arg),*);
            bail!(concat!(stringify!($name), " is not available in the Bits129 recursion profile"))
        }
    )*};
}

unsupported! {
    test_recursion_circuit(hashfn: &str),
    resolve(hashfn: &str),
    union(hashfn: &str),
    lift_povw(po2: usize, hashfn: &str),
    join_povw(hashfn: &str),
    join_unwrap_povw(hashfn: &str),
    resolve_povw(hashfn: &str),
    resolve_unwrap_povw(hashfn: &str),
    unwrap_povw(hashfn: &str),
}
