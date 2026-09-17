#![no_main]

use risc0_zkvm::{guest::env, serde};
risc0_zkvm::guest::entry!(main);

// Exercise a bounded state chain at a controlled execution size without changing the legacy guest.
fn main() {
    let (id, step, before, delta, work, previous): ([u32; 8], u32, u32, u32, u32, Vec<u8>) =
        env::read();
    assert!((1..=3).contains(&step));
    assert!((1..=20).contains(&delta));
    assert!((1..=16384).contains(&work));
    if step == 1 {
        assert_eq!(before, 0);
        assert!(previous.is_empty());
    } else {
        env::verify(id, &previous).unwrap();
        let (prior_id, prior_step, prior_state, prior_work): ([u32; 8], u32, u32, u32) =
            serde::from_slice(&previous).unwrap();
        assert_eq!(
            (prior_id, prior_step + 1, prior_state, prior_work),
            (id, step, before, work)
        );
    }
    let mut value = 1u32;
    for i in 0..work {
        value = std::hint::black_box(value.wrapping_mul(1664525).wrapping_add(i));
    }
    std::hint::black_box(value);
    let after = before.checked_add(delta).unwrap();
    assert!(after <= 100);
    env::commit(&(id, step, after, work));
}
