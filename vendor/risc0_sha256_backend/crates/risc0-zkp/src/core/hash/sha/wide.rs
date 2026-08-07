// Copyright 2026 RISC Zero, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0

//! A domain-separated, two-lane SHA-256 commitment.
//!
//! Two independently domain-separated SHA-256 outputs give a 512-bit commitment with an ideal
//! 256-bit collision-security bound. This module is additive: legacy Merkle trees continue to use
//! the 256-bit [`Digest`] and the existing [`super::Sha256::hash_pair`] operation.

use alloc::vec::Vec;
use core::{marker::PhantomData, ops::Deref};

use bytemuck::{Pod, Zeroable};

use super::Sha256;
use crate::core::digest::{Digest, DIGEST_BYTES, DIGEST_WORDS};

/// Number of SHA-256 lanes in a wide commitment.
pub const WIDE_SHA256_LANES: usize = 2;
/// Size of a wide commitment in bytes.
pub const WIDE_SHA256_BYTES: usize = DIGEST_BYTES * WIDE_SHA256_LANES;
/// Size of a wide commitment in 32-bit words.
pub const WIDE_SHA256_WORDS: usize = DIGEST_WORDS * WIDE_SHA256_LANES;

const LEAF_DOMAIN: &[u8] = b"RISC0-SHA256-WIDE2-V1-LEAF\0";
const NODE_DOMAIN: &[u8] = b"RISC0-SHA256-WIDE2-V1-NODE\0";

/// Two independently domain-separated SHA-256 digests.
#[derive(Clone, Copy, Debug, Eq, Hash, PartialEq, Pod, Zeroable)]
#[repr(transparent)]
pub struct WideDigest2([Digest; WIDE_SHA256_LANES]);

impl WideDigest2 {
    /// The all-zero wide digest.
    pub const ZERO: Self = Self([Digest::ZERO; WIDE_SHA256_LANES]);

    /// Construct a wide digest from its two lanes.
    pub const fn new(lanes: [Digest; WIDE_SHA256_LANES]) -> Self {
        Self(lanes)
    }

    /// Return the two SHA-256 lanes.
    pub fn lanes(&self) -> &[Digest; WIDE_SHA256_LANES] {
        &self.0
    }

    /// View the digest as sixteen 32-bit words.
    pub fn as_words(&self) -> &[u32] {
        bytemuck::cast_slice(&self.0)
    }

    /// View the digest as 64 bytes.
    pub fn as_bytes(&self) -> &[u8] {
        bytemuck::cast_slice(&self.0)
    }
}

/// Two-lane commitment built from any existing RISC Zero SHA-256 implementation.
pub struct Sha256Wide2<S>(PhantomData<S>);

impl<S: Sha256> Sha256Wide2<S> {
    /// Commit to an arbitrary byte string as a leaf.
    pub fn hash_bytes(bytes: &[u8]) -> WideDigest2 {
        Self::hash_domain(LEAF_DOMAIN, bytes)
    }

    /// Commit to an ordered pair of wide child commitments as an internal Merkle node.
    pub fn hash_pair(left: &WideDigest2, right: &WideDigest2) -> WideDigest2 {
        let mut message = Vec::with_capacity(WIDE_SHA256_BYTES * 2);
        message.extend_from_slice(left.as_bytes());
        message.extend_from_slice(right.as_bytes());
        Self::hash_domain(NODE_DOMAIN, &message)
    }

    fn hash_domain(domain: &[u8], message: &[u8]) -> WideDigest2 {
        WideDigest2::new(core::array::from_fn(|lane| {
            let mut preimage = Vec::with_capacity(domain.len() + 1 + 8 + message.len());
            preimage.extend_from_slice(domain);
            preimage.push(lane as u8);
            preimage.extend_from_slice(&(message.len() as u64).to_be_bytes());
            preimage.extend_from_slice(message);
            *S::hash_bytes(&preimage).deref()
        }))
    }
}

#[cfg(test)]
mod tests {
    use super::{Sha256Wide2, WideDigest2, WIDE_SHA256_BYTES, WIDE_SHA256_WORDS};
    use crate::core::{digest::DIGEST_WORDS, hash::sha};

    type WideSha = Sha256Wide2<sha::cpu::Impl>;

    #[test]
    fn layout_and_domain_separation() {
        let leaf = WideSha::hash_bytes(b"same payload");
        assert_eq!(leaf.as_bytes().len(), WIDE_SHA256_BYTES);
        assert_eq!(leaf.as_words().len(), WIDE_SHA256_WORDS);
        assert_eq!(leaf.lanes()[0].as_words().len(), DIGEST_WORDS);
        assert_ne!(leaf.lanes()[0], leaf.lanes()[1]);
        assert_eq!(leaf, WideSha::hash_bytes(b"same payload"));
        assert_ne!(leaf, WideSha::hash_bytes(b"different payload"));

        let node = WideSha::hash_pair(&leaf, &WideDigest2::ZERO);
        assert_ne!(node, leaf);
        assert_ne!(node, WideSha::hash_pair(&WideDigest2::ZERO, &leaf));
    }
}
