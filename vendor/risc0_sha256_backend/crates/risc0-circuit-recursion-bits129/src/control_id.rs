// Copyright 2025 RISC Zero, Inc.
// SPDX-License-Identifier: Apache-2.0

use risc0_zkp::{core::digest::Digest, digest};

/// Smallest segment cycle exponent supported by a Bits129 lift program.
pub const MIN_LIFT_PO2: usize = 14;

/// Bits129 SHA-256 recursion programs. Lift and identity use a 2^21 recursion
/// domain; join uses 2^22 because its verifier program is larger.
pub const BITS129_CONTROL_IDS: [(&str, Digest); 13] = [
    (
        "identity.zkr",
        digest!("a9c30202ebc1896a29d439d1cc53ab95d081f5a09fa10ecb9f0b67d98d7e1e28"),
    ),
    (
        "join.zkr",
        digest!("c9d3cf9138a8cf6aafafcaf7d8dd4fa5cf6a3a2ee242a4b24b10a38938c140f4"),
    ),
    (
        "lift_rv32im_v2_14.zkr",
        digest!("b3caf8e8f59254061f74d43ce8d0ef618af0e276e76de7ff7d75fbf69a1b0f1b"),
    ),
    (
        "lift_rv32im_v2_15.zkr",
        digest!("d245334e38a46c349f4d9282031127db88a6f548cefbc33936485e760bfa6528"),
    ),
    (
        "lift_rv32im_v2_16.zkr",
        digest!("245fcc59803a2eaf509f3fcf4cc69888aef8cb294a22b7956d9d1e9effca9ced"),
    ),
    (
        "lift_rv32im_v2_17.zkr",
        digest!("ef61ff7dd90516bd4c331978c6cc9b2d2a8bd3219fc1a832a3d27295f8ca4951"),
    ),
    (
        "lift_rv32im_v2_18.zkr",
        digest!("dda14c0ee250b4341f94b9bb6430a8536659ca14b4aaa7b48a46d7dcc2c95415"),
    ),
    (
        "lift_rv32im_v2_19.zkr",
        digest!("82969582188dc6562a0633ec6f377e99e830e1309f61bb4c4a7b8c9c2e2a9788"),
    ),
    (
        "lift_rv32im_v2_20.zkr",
        digest!("9bd11462d78b03fa9fe1d8cb8e26ae759e9c2a02677a69e5b68925a55f2e87ff"),
    ),
    (
        "lift_rv32im_v2_21.zkr",
        digest!("29ffeb2e33fb0a5af917d05c87724adc002a59fd12700e83791e6108a2d2e53c"),
    ),
    (
        "lift_rv32im_v2_22.zkr",
        digest!("0f259607f2bca3049923cdc6fe06e4a1aae413342791a76ff3f9b9fd49915f3b"),
    ),
    (
        "lift_rv32im_v2_23.zkr",
        digest!("a93fc83b38f8b0219c208cce1bcd5876ac0bdbf9a681df7e6abf47a992872cba"),
    ),
    (
        "lift_rv32im_v2_24.zkr",
        digest!("a4fe2687d1b6be8ce5f117aca101dbd53cb632b2ecb3fab199342425c4d83100"),
    ),
];

pub const ALLOWED_CONTROL_IDS: &[Digest] = &[
    BITS129_CONTROL_IDS[0].1,
    BITS129_CONTROL_IDS[1].1,
    BITS129_CONTROL_IDS[2].1,
    BITS129_CONTROL_IDS[3].1,
    BITS129_CONTROL_IDS[4].1,
    BITS129_CONTROL_IDS[5].1,
    BITS129_CONTROL_IDS[6].1,
    BITS129_CONTROL_IDS[7].1,
    BITS129_CONTROL_IDS[8].1,
    BITS129_CONTROL_IDS[9].1,
    BITS129_CONTROL_IDS[10].1,
    BITS129_CONTROL_IDS[11].1,
    BITS129_CONTROL_IDS[12].1,
];

/// Depth-8 SHA-256 control tree root over `ALLOWED_CONTROL_IDS`.
pub const ALLOWED_CONTROL_ROOT: Digest =
    digest!("67582ddc30bab740c23bad3092ec55241a986ea93f710196e1a25263e9eeca21");
