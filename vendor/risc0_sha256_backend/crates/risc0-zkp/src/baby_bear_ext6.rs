// Copyright 2026 RISC Zero, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0

//! A degree-six extension of the BabyBear field.
//!
//! This module is additive: the legacy [`risc0_core::field::baby_bear::BabyBear`] field family
//! continues to use its original degree-four extension. [`BabyBear6`] is a separate field family
//! intended for security profiles that need a larger algebraic challenge space.
//!
//! Elements are represented in `F_p[X] / (X^6 + X + 6)`, where
//! `p = 2013265921`. The modulus was checked irreducible with Rabin's test: `X^(p^6) = X` modulo
//! the polynomial, and the gcd checks for the prime divisors 2 and 3 of degree 6 are both one.

use alloc::{fmt, vec::Vec};
use core::ops;

use bytemuck::{CheckedBitPattern, NoUninit, Zeroable};
use risc0_core::field::{
    self,
    baby_bear::{BabyBearElem, P},
    Elem as _,
};

/// Degree of the extension over BabyBear.
pub const EXT6_SIZE: usize = 6;

const MODULUS_X_COEFF: BabyBearElem = BabyBearElem::ONE;
const MODULUS_CONST_COEFF: BabyBearElem = BabyBearElem::new(6);

/// BabyBear with [`BabyBearExt6`] as its associated extension field.
#[derive(Clone, Copy, Debug)]
pub struct BabyBear6;

impl field::Field for BabyBear6 {
    type Elem = BabyBearElem;
    type ExtElem = BabyBearExt6;
}

/// An element of `F_p[X] / (X^6 + X + 6)`.
#[derive(Eq, Clone, Copy, Zeroable)]
#[repr(transparent)]
pub struct BabyBearExt6([BabyBearElem; EXT6_SIZE]);

// BabyBearExt6 is a transparent array of six 32-bit BabyBear elements with no padding.
unsafe impl NoUninit for BabyBearExt6 {}

unsafe impl CheckedBitPattern for BabyBearExt6 {
    type Bits = [u32; EXT6_SIZE];

    fn is_valid_bit_pattern(bits: &Self::Bits) -> bool {
        bits.iter().all(|word| *word < P)
    }
}

impl BabyBearExt6 {
    /// Construct an extension element from its six polynomial coefficients.
    pub const fn new(coeffs: [BabyBearElem; EXT6_SIZE]) -> Self {
        Self(coeffs)
    }

    /// Embed a canonical integer in the constant coefficient.
    pub fn from_u32(value: u32) -> Self {
        Self::from(BabyBearElem::from_u64(value as u64))
    }

    /// Return the polynomial coefficients, from constant through degree five.
    pub fn elems(&self) -> &[BabyBearElem; EXT6_SIZE] {
        &self.0
    }

    fn pow_large(self, exponent_le: &[u64]) -> Self {
        let mut result = Self::ONE;
        let mut base = self;
        for word in exponent_le {
            let mut bits = *word;
            for _ in 0..64 {
                if bits & 1 == 1 {
                    result *= base;
                }
                bits >>= 1;
                base *= base;
            }
        }
        result
    }
}

impl Default for BabyBearExt6 {
    fn default() -> Self {
        Self::ZERO
    }
}

impl fmt::Debug for BabyBearExt6 {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        f.debug_tuple("BabyBearExt6").field(&self.0).finish()
    }
}

impl field::Elem for BabyBearExt6 {
    const INVALID: Self = Self([BabyBearElem::INVALID; EXT6_SIZE]);
    const ZERO: Self = Self([BabyBearElem::ZERO; EXT6_SIZE]);
    const ONE: Self = Self([
        BabyBearElem::ONE,
        BabyBearElem::ZERO,
        BabyBearElem::ZERO,
        BabyBearElem::ZERO,
        BabyBearElem::ZERO,
        BabyBearElem::ZERO,
    ]);
    const WORDS: usize = EXT6_SIZE;

    fn inv(self) -> Self {
        // p^6 - 2, little-endian 64-bit limbs. Exponentiation is used here for a compact,
        // auditable reference implementation. Optimized addition chains can be added later.
        const P6_MINUS_2: [u64; 3] = [
            0x4bc0_0002_cfff_ffff,
            0xb964_f002_0f58_0003,
            0x02b7_3a84_22c2_ed00,
        ];
        self.pow_large(&P6_MINUS_2)
    }

    fn random(rng: &mut impl rand_core::RngCore) -> Self {
        Self(core::array::from_fn(|_| BabyBearElem::random(rng)))
    }

    fn from_u64(val: u64) -> Self {
        Self::from(BabyBearElem::from_u64(val))
    }

    fn to_u32_words(&self) -> Vec<u32> {
        self.0.iter().map(BabyBearElem::as_u32_montgomery).collect()
    }

    fn from_u32_words(val: &[u32]) -> Self {
        assert_eq!(val.len(), EXT6_SIZE);
        Self(core::array::from_fn(|i| BabyBearElem::new_raw(val[i])))
    }

    fn is_valid(&self) -> bool {
        self.0.iter().all(field::Elem::is_valid)
    }

    fn is_reduced(&self) -> bool {
        self.0.iter().all(field::Elem::is_reduced)
    }
}

impl field::ExtElem for BabyBearExt6 {
    type SubElem = BabyBearElem;
    const EXT_SIZE: usize = EXT6_SIZE;

    fn from_subfield(elem: &Self::SubElem) -> Self {
        Self::from(*elem)
    }

    fn from_subelems(elems: impl IntoIterator<Item = Self::SubElem>) -> Self {
        let coeffs: Vec<_> = elems.into_iter().collect();
        assert_eq!(coeffs.len(), EXT6_SIZE);
        Self(coeffs.try_into().unwrap())
    }

    fn subelems(&self) -> &[Self::SubElem] {
        &self.0
    }
}

impl PartialEq for BabyBearExt6 {
    fn eq(&self, rhs: &Self) -> bool {
        self.0 == rhs.0
    }
}

impl From<BabyBearElem> for BabyBearExt6 {
    fn from(value: BabyBearElem) -> Self {
        let mut coeffs = [BabyBearElem::ZERO; EXT6_SIZE];
        coeffs[0] = value;
        Self(coeffs)
    }
}

impl From<u32> for BabyBearExt6 {
    fn from(value: u32) -> Self {
        Self::from(BabyBearElem::from(value))
    }
}

impl ops::Add for BabyBearExt6 {
    type Output = Self;
    fn add(mut self, rhs: Self) -> Self {
        self += rhs;
        self
    }
}

impl ops::AddAssign for BabyBearExt6 {
    fn add_assign(&mut self, rhs: Self) {
        for (lhs, rhs) in self.0.iter_mut().zip(rhs.0) {
            *lhs += rhs;
        }
    }
}

impl ops::Sub for BabyBearExt6 {
    type Output = Self;
    fn sub(mut self, rhs: Self) -> Self {
        self -= rhs;
        self
    }
}

impl ops::SubAssign for BabyBearExt6 {
    fn sub_assign(&mut self, rhs: Self) {
        for (lhs, rhs) in self.0.iter_mut().zip(rhs.0) {
            *lhs -= rhs;
        }
    }
}

impl ops::Mul for BabyBearExt6 {
    type Output = Self;
    fn mul(mut self, rhs: Self) -> Self {
        self *= rhs;
        self
    }
}

impl ops::MulAssign for BabyBearExt6 {
    fn mul_assign(&mut self, rhs: Self) {
        let lhs = self.0;
        let mut product = [BabyBearElem::ZERO; 2 * EXT6_SIZE - 1];
        for (i, a) in lhs.iter().enumerate() {
            for (j, b) in rhs.0.iter().enumerate() {
                product[i + j] += *a * *b;
            }
        }

        // X^6 = -X - 6. Reduce high terms in descending order so every replacement has lower
        // degree and is itself reduced before it is consumed.
        for degree in (EXT6_SIZE..product.len()).rev() {
            let coeff = product[degree];
            product[degree - EXT6_SIZE + 1] -= coeff * MODULUS_X_COEFF;
            product[degree - EXT6_SIZE] -= coeff * MODULUS_CONST_COEFF;
        }
        self.0.copy_from_slice(&product[..EXT6_SIZE]);
    }
}

impl ops::Neg for BabyBearExt6 {
    type Output = Self;
    fn neg(self) -> Self {
        Self::ZERO - self
    }
}

impl ops::Add<BabyBearElem> for BabyBearExt6 {
    type Output = Self;
    fn add(mut self, rhs: BabyBearElem) -> Self {
        self += rhs;
        self
    }
}

impl ops::AddAssign<BabyBearElem> for BabyBearExt6 {
    fn add_assign(&mut self, rhs: BabyBearElem) {
        self.0[0] += rhs;
    }
}

impl ops::Sub<BabyBearElem> for BabyBearExt6 {
    type Output = Self;
    fn sub(mut self, rhs: BabyBearElem) -> Self {
        self -= rhs;
        self
    }
}

impl ops::SubAssign<BabyBearElem> for BabyBearExt6 {
    fn sub_assign(&mut self, rhs: BabyBearElem) {
        self.0[0] -= rhs;
    }
}

impl ops::Mul<BabyBearElem> for BabyBearExt6 {
    type Output = Self;
    fn mul(mut self, rhs: BabyBearElem) -> Self {
        self *= rhs;
        self
    }
}

impl ops::MulAssign<BabyBearElem> for BabyBearExt6 {
    fn mul_assign(&mut self, rhs: BabyBearElem) {
        for coeff in &mut self.0 {
            *coeff *= rhs;
        }
    }
}

impl ops::Add<BabyBearExt6> for BabyBearElem {
    type Output = BabyBearExt6;
    fn add(self, rhs: BabyBearExt6) -> BabyBearExt6 {
        rhs + self
    }
}

impl ops::Sub<BabyBearExt6> for BabyBearElem {
    type Output = BabyBearExt6;
    fn sub(self, rhs: BabyBearExt6) -> BabyBearExt6 {
        BabyBearExt6::from(self) - rhs
    }
}

impl ops::Mul<BabyBearExt6> for BabyBearElem {
    type Output = BabyBearExt6;
    fn mul(self, rhs: BabyBearExt6) -> BabyBearExt6 {
        rhs * self
    }
}

#[cfg(test)]
mod tests {
    use rand::{rngs::SmallRng, SeedableRng};
    use risc0_core::field::{Elem, ExtElem};

    use super::{BabyBear6, BabyBearExt6, EXT6_SIZE};

    #[test]
    fn check_polynomial_split_layout_uses_inv_rate_residues() {
        use crate::core::ntt::interpolate_ntt;
        use risc0_core::field::{baby_bear::BabyBearElem, RootsOfUnity};

        const DOMAIN: usize = 32;
        const INV_RATE: usize = 4;
        let coefficients = (0..DOMAIN)
            .map(|i| BabyBearElem::from_u64((17 * i + 5) as u64))
            .collect::<Vec<_>>();
        let root = BabyBearElem::ROU_FWD[5];
        let mut values = (0..DOMAIN)
            .map(|row| {
                let x = root.pow(row);
                coefficients
                    .iter()
                    .rev()
                    .fold(BabyBearElem::ZERO, |total, coefficient| {
                        total * x + *coefficient
                    })
            })
            .collect::<Vec<_>>();
        interpolate_ntt::<BabyBearElem, BabyBearElem>(&mut values);

        let z = BabyBearExt6::from_subelems([
            BabyBearElem::from_u64(1),
            BabyBearElem::from_u64(2),
            BabyBearElem::from_u64(3),
            BabyBearElem::from_u64(4),
            BabyBearElem::from_u64(5),
            BabyBearElem::from_u64(6),
        ]);
        let direct = coefficients
            .iter()
            .rev()
            .fold(BabyBearExt6::ZERO, |total, coefficient| {
                total * z + *coefficient
            });
        let remap = [0usize, 2, 1, 3];
        let z4 = z.pow(INV_RATE);
        let mut reconstructed = BabyBearExt6::ZERO;
        for (residue, chunk) in remap.into_iter().enumerate() {
            let start = chunk * (DOMAIN / INV_RATE);
            let evaluated = values[start..start + DOMAIN / INV_RATE]
                .iter()
                .rev()
                .fold(BabyBearExt6::ZERO, |total, coefficient| {
                    total * z4 + *coefficient
                });
            reconstructed += evaluated * z.pow(residue);
        }
        assert_eq!(reconstructed, direct);
    }

    #[test]
    fn field_marker_uses_degree_six() {
        fn assert_field<F: risc0_core::field::Field>() {}
        assert_field::<BabyBear6>();
        assert_eq!(BabyBearExt6::EXT_SIZE, EXT6_SIZE);
    }

    #[test]
    fn field_axioms_and_inverses() {
        let mut rng = SmallRng::seed_from_u64(0x1291_9212_56);
        for _ in 0..32 {
            let a = BabyBearExt6::random(&mut rng);
            let b = BabyBearExt6::random(&mut rng);
            let c = BabyBearExt6::random(&mut rng);
            assert_eq!((a + b) + c, a + (b + c));
            assert_eq!((a * b) * c, a * (b * c));
            assert_eq!(a * (b + c), a * b + a * c);
            if a != BabyBearExt6::ZERO {
                assert_eq!(a * a.inv(), BabyBearExt6::ONE);
            }
        }
    }

    #[test]
    fn serialization_round_trip() {
        let mut rng = SmallRng::seed_from_u64(6);
        let value = BabyBearExt6::random(&mut rng);
        assert_eq!(BabyBearExt6::from_u32_words(&value.to_u32_words()), value);
        assert_eq!(
            BabyBearExt6::from_subelems(value.subelems().iter().copied()),
            value
        );
    }
}
