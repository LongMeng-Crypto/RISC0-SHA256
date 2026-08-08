
// This code is automatically generated

#include "supra/fp.h"



#include <cstdint>

namespace risc0::circuit::recursion_bits129::cuda {


extern __device__ FpExt poly_fp(uint32_t idx, uint32_t size, const Fp* ctrl, const Fp* out, const Fp* data, const Fp* mix, const Fp* accum);

constexpr size_t INV_RATE = 4;
constexpr size_t kNumPolyMixPows = 171;
extern __constant__ FpExt poly_mix[kNumPolyMixPows];




}  // namespace risc0::circuit::recursion_bits129::cuda
