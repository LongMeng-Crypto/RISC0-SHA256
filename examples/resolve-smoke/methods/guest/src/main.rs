#![no_main]

use risc0_zkvm::{guest::env, serde};

risc0_zkvm::guest::entry!(main);

// The final verifier MUST compare the journal's chain_id with this guest's image ID.
// Carrying the same ID through every journal avoids embedding a program's own ID in its ELF.
type Journal = ([u32; 8], u32, u32);

fn main() {
    let (chain_id, step, before, delta, previous): ([u32; 8], u32, u32, u32, Vec<u8>) = env::read();
    assert!(step > 0);
    if step == 1 {
        assert_eq!(before, 0);
        assert!(previous.is_empty());
    } else {
        env::verify(chain_id, previous.as_slice()).unwrap();
        let (previous_id, previous_step, previous_state): Journal =
            serde::from_slice(&previous).unwrap();
        assert_eq!(previous_id, chain_id);
        assert_eq!(previous_step.checked_add(1), Some(step));
        assert_eq!(previous_state, before);
    }
    // Bounded test-only work makes step 2 exercise join as well as resolve.
    if step == 2 {
        let mut work = 1u32;
        for i in 0..4096u32 {
            work = std::hint::black_box(work.wrapping_mul(1664525).wrapping_add(i));
        }
        std::hint::black_box(work);
    }
    // A small deterministic policy and update; the demo is intentionally bounded.
    assert!((1..=20).contains(&delta));
    let after = before.checked_add(delta).unwrap();
    assert!(after <= 100);
    env::commit(&(chain_id, step, after));
}
