#![no_main]
#![no_std]

extern crate alloc;

use alloc::vec::Vec;
use risc0_zkvm::guest::env;

risc0_zkvm::guest::entry!(main);

fn main() {
    let values: Vec<u32> = env::read();
    let sum = values
        .iter()
        .copied()
        .fold(0u32, |acc, value| acc.wrapping_add(value));
    env::commit(&(values.len() as u32, sum));
}
