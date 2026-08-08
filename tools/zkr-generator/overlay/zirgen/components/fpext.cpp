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

#include "fpext.h"

using namespace risc0;

namespace zirgen {

FpExtRegImpl::FpExtRegImpl(llvm::StringRef source) {
  for (size_t i = 0; i < kExtSize; i++) {
    elems.emplace_back(Label("elem", i), source);
  }
}

FpExt FpExtRegImpl::get(SourceLoc loc) {
  OverrideLocation local(loc);
  std::array<Val, kExtSize> arr;
  for (size_t i = 0; i < kExtSize; i++) {
    arr[i] = elems[i];
  }
  return FpExt(arr, loc);
}

void FpExtRegImpl::set(CaptureFpExt rhs) {
  for (size_t i = 0; i < kExtSize; i++) {
    elems[i]->set(rhs.ext.elem(i));
  }
}

FpExt::FpExt(Val x, SourceLoc loc) {
  OverrideLocation local(loc);
  elems[0] = x;
  for (size_t i = 1; i < kExtSize; i++) {
    elems[i] = 0;
  }
}

FpExt::FpExt(std::array<Val, kExtSize> elems, risc0::SourceLoc loc) {
  OverrideLocation local(loc);
  for (size_t i = 0; i < kExtSize; i++) {
    this->elems[i] = elems[i];
  }
}

FpExt::FpExt(FpExtReg reg, risc0::SourceLoc loc) {
  OverrideLocation local(loc);
  for (size_t i = 0; i < kExtSize; i++) {
    elems[i] = reg->elem(i);
  }
}

FpExt FpExt::fromVals(llvm::ArrayRef<Val> vals, risc0::SourceLoc loc) {
  assert(vals.size() == kExtSize);
  std::array<Val, kExtSize> elems;
  std::copy(vals.begin(), vals.end(), elems.begin());
  return FpExt(elems, loc);
}

FpExt operator+(CaptureFpExt a, CaptureFpExt b) {
  OverrideLocation local(a.loc);
  std::array<Val, kExtSize> out;
  for (size_t i = 0; i < kExtSize; i++) {
    out[i] = a.ext.elem(i) + b.ext.elem(i);
  }
  return FpExt(out, a.loc);
}

FpExt operator-(CaptureFpExt a, CaptureFpExt b) {
  OverrideLocation local(a.loc);
  std::array<Val, kExtSize> out;
  for (size_t i = 0; i < kExtSize; i++) {
    out[i] = a.ext.elem(i) - b.ext.elem(i);
  }
  return FpExt(out, a.loc);
}

FpExt operator*(CaptureFpExt a, CaptureFpExt b) {
  OverrideLocation local(a.loc);
  std::array<Val, kExtSize> out;
  std::array<Val, 2 * kExtSize - 1> product;
  for (size_t i = 0; i < product.size(); i++) {
    product[i] = Val(0);
  }
  // Rename the element arrays to something small for readability
#define a(i) a.ext.elem(i)
#define b(i) b.ext.elem(i)
#if GOLDILOCKS
  Val NBETA = -Val(11);
  out[0] = a(0) * b(0) + NBETA * (a(1) * b(1));
  out[1] = a(0) * b(1) + a(1) * b(0);
#else
  for (size_t i = 0; i < kExtSize; i++) {
    for (size_t j = 0; j < kExtSize; j++) {
      product[i + j] = product[i + j] + a(i) * b(j);
    }
  }
  // X^6 + X + 6 = 0.
  for (size_t degree = product.size(); degree-- > kExtSize;) {
    product[degree - kExtSize + 1] = product[degree - kExtSize + 1] - product[degree];
    product[degree - kExtSize] = product[degree - kExtSize] - Val(6) * product[degree];
  }
  for (size_t i = 0; i < kExtSize; i++) {
    out[i] = product[i];
  }
#endif
#undef a
#undef b
  return FpExt(out, a.loc);
}

void eq(CaptureFpExt a, CaptureFpExt b) {
  OverrideLocation local(a.loc);
  for (size_t i = 0; i < kExtSize; i++) {
    eq(a.ext.elem(i), b.ext.elem(i));
  }
}

FpExt inv(CaptureFpExt a) {
  OverrideLocation local(a.loc);
  Val BETA = 11;
#define a(i) a.ext.elem(i)
#if GOLDILOCKS
  Val det = a(0) * a(0) + BETA * a(1) * a(1);
  Val idet = inv(det);
  return FpExt({a(0) * idet, -a(1) * idet});
#else
  constexpr uint64_t exponent[] = {
      0x4bc00002cfffffffULL, 0xb964f0020f580003ULL, 0x02b73a8422c2ed00ULL};
  FpExt result(Val(1));
  FpExt base = a.ext;
  for (uint64_t word : exponent) {
    for (size_t bit = 0; bit < 64; bit++) {
      if (word & 1) {
        result = result * base;
      }
      word >>= 1;
      base = base * base;
    }
  }
  return result;
#endif
#undef a
}

} // namespace zirgen
