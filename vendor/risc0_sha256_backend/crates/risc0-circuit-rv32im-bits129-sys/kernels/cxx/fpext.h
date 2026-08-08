// Copyright 2024 RISC Zero, Inc.
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

#pragma once

/// \file
/// Defines FpExt6, a finite field F_p^4, based on Fp via the irreducible polynomial x^4 - 11.

#include "fp.h"

namespace risc0 {

// Defines instead of constexpr to appease CUDAs limitations around constants.
// undef'd at the end of this file.
#define BETA Fp(11)
#define NBETA Fp(Fp::P - 11)

/// Instances of FpExt6 are element of a finite field F_p^4.  They are represented as elements of
/// F_p[X] / (X^4 - 11). Basically, this is a 'big' finite field (about 2^128 elements), which is
/// used when the security of various operations depends on the size of the field.  It has the field
/// Fp as a subfield, which means operations by the two are compatible, which is important.  The
/// irreducible polynomial was chosen to be the simplest possible one, x^4 - B, where 11 is the
/// smallest B which makes the polynomial irreducible.
struct FpExt6 {
  /// The elements of FpExt6, elems[0] + elems[1]*X + elems[2]*X^2 + elems[3]*x^4
  Fp elems[6];

  /// Default constructor makes the zero elements
  constexpr FpExt6() : elems{} {}

  /// Initialize from uint32_t
  explicit constexpr FpExt6(uint32_t x) {
    elems[0] = x;
    elems[1] = 0;
    elems[2] = 0;
    elems[3] = 0;
    elems[4] = 0;
    elems[5] = 0;
  }

  /// Convert from Fp to FpExt6.
  explicit constexpr FpExt6(Fp x) {
    elems[0] = x;
    elems[1] = 0;
    elems[2] = 0;
    elems[3] = 0;
    elems[4] = 0;
    elems[5] = 0;
  }

  /// Explicitly construct an FpExt6 from parts
  constexpr FpExt6(Fp a, Fp b, Fp c, Fp d, Fp e, Fp f) {
    elems[0] = a;
    elems[1] = b;
    elems[2] = c;
    elems[3] = d;
    elems[4] = e;
    elems[5] = f;
  }

  /// Compatibility constructor for generator constants that occupy the first four coefficients.
  constexpr FpExt6(Fp a, Fp b, Fp c, Fp d) : FpExt6(a, b, c, d, Fp(0), Fp(0)) {}

  /// Get an 'invalid' FpExt6 value
  static constexpr inline FpExt6 invalid() {
    return FpExt6(
        Fp::invalid(), Fp::invalid(), Fp::invalid(), Fp::invalid(), Fp::invalid(), Fp::invalid());
  }

  // Implement the addition/subtraction overloads
  constexpr FpExt6 operator+=(FpExt6 rhs) {
    for (uint32_t i = 0; i < 6; i++) {
      elems[i] += rhs.elems[i];
    }
    return *this;
  }

  constexpr FpExt6 operator-=(FpExt6 rhs) {
    for (uint32_t i = 0; i < 6; i++) {
      elems[i] -= rhs.elems[i];
    }
    return *this;
  }

  constexpr FpExt6 operator+(FpExt6 rhs) const {
    FpExt6 result = *this;
    result += rhs;
    return result;
  }

  constexpr FpExt6 operator-(FpExt6 rhs) const {
    FpExt6 result = *this;
    result -= rhs;
    return result;
  }

  constexpr FpExt6 operator-() const { return FpExt6() - *this; }

  // Implement the simple multiplication case by the subfield Fp
  // Fp * FpExt6 is done as a free function due to C++'s operator overloading rules.
  constexpr FpExt6 operator*=(Fp rhs) {
    for (uint32_t i = 0; i < 6; i++) {
      elems[i] *= rhs;
    }
    return *this;
  }

  constexpr FpExt6 operator*(Fp rhs) const {
    FpExt6 result = *this;
    result *= rhs;
    return result;
  }

  constexpr FpExt6 operator+=(Fp rhs) {
    elems[0] += rhs;
    return *this;
  }

  constexpr FpExt6 operator+(Fp rhs) const {
    FpExt6 result = *this;
    result += rhs;
    return result;
  }

  constexpr FpExt6 operator-=(Fp rhs) {
    elems[0] -= rhs;
    return *this;
  }

  constexpr FpExt6 operator-(Fp rhs) const {
    FpExt6 result = *this;
    result -= rhs;
    return result;
  }

  // Multiply polynomial representatives and reduce with X^6 = -X - 6.
  constexpr FpExt6 operator*(FpExt6 rhs) const {
    Fp product[11] = {};
    for (uint32_t i = 0; i < 6; i++) {
      for (uint32_t j = 0; j < 6; j++) {
        product[i + j] += elems[i] * rhs.elems[j];
      }
    }
    for (uint32_t degree = 11; degree-- > 6;) {
      product[degree - 5] -= product[degree];
      product[degree - 6] -= Fp(6) * product[degree];
    }
    return FpExt6(product[0], product[1], product[2], product[3], product[4], product[5]);
  }
  constexpr FpExt6 operator*=(FpExt6 rhs) {
    *this = *this * rhs;
    return *this;
  }

  // Equality
  constexpr bool operator==(FpExt6 rhs) const {
    for (uint32_t i = 0; i < 6; i++) {
      if (elems[i] != rhs.elems[i]) {
        return false;
      }
    }
    return true;
  }

  constexpr bool operator!=(FpExt6 rhs) const { return !(*this == rhs); }

  constexpr Fp constPart() const { return elems[0]; }
};

/// Overload for case where LHS is Fp (RHS case is handled as a method)
constexpr inline FpExt6 operator*(Fp a, FpExt6 b) {
  return b * a;
}

// Commutate the two arguments
constexpr inline FpExt6 operator+(Fp a, FpExt6 b) {
  return b + a;
}

// Promote a to FpExt6, then add.
constexpr inline FpExt6 operator-(Fp a, FpExt6 b) {
  return a + (-b);
}

/// Raise an FpExt6 to a power
constexpr inline FpExt6 pow(FpExt6 x, size_t n) {
  FpExt6 tot(1);
  while (n != 0) {
    if (n % 2 == 1) {
      tot *= x;
    }
    n = n / 2;
    x *= x;
  }
  return tot;
}

/// Compute the multiplicative inverse of an FpExt6.
constexpr inline FpExt6 inv(FpExt6 in) {
  constexpr uint64_t exponent[] = {
      0x4bc00002cfffffffULL, 0xb964f0020f580003ULL, 0x02b73a8422c2ed00ULL};
  FpExt6 result(1);
  FpExt6 base = in;
  for (uint64_t word : exponent) {
    for (uint32_t bit = 0; bit < 64; bit++) {
      if (word & 1) result *= base;
      word >>= 1;
      base *= base;
    }
  }
  return result;
}

#undef BETA
#undef NBETA

} // namespace risc0
