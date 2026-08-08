// Copyright 2025 RISC Zero, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// This code is automatically generated

use risc0_zkp::adapter::{CircuitInfo, ProtocolInfo};

use super::CircuitImpl;

impl CircuitInfo for CircuitImpl {
    #[rustfmt::skip]
    const CIRCUIT_INFO: ProtocolInfo = ProtocolInfo(*b"RECURSION:b129v1");

    #[rustfmt::skip]
    const OUTPUT_SIZE: usize = 32;

    #[rustfmt::skip]
    const MIX_SIZE: usize = 42;
}

#[allow(dead_code)]
pub const NUM_POLY_MIX_POWERS: usize = 171;

#[allow(dead_code)]
pub const POLY_MIX_POWERS: &[usize] = &[
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25,
    26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49,
    50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73,
    74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97,
    98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 110, 112, 127, 132, 137, 146, 164, 182, 183,
    204, 213, 222, 228, 231, 245, 256, 271, 292, 309, 319, 324, 328, 346, 364, 365, 386, 395, 404,
    413, 420, 427, 438, 453, 474, 491, 501, 510, 516, 528, 546, 698, 730, 826, 893, 973, 1081,
    1144, 1284, 1347, 1354, 1361, 1424, 1438, 1456, 1528, 1546, 1552, 1558, 1576, 1582, 1586, 1590,
    1629,
];
