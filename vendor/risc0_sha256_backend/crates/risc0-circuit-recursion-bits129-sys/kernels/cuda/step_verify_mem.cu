
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

#include "extern.cuh"

__device__ void step_verify_mem(
    void* ctx, uint32_t steps, uint32_t cycle, Fp* arg0, Fp* arg1, Fp* arg2, Fp* arg3, Fp* arg4) {
  uint32_t mask = steps - 1;
  Fp extern_args[96];
  Fp extern_outs[32];
  // loc(unknown)
  Fp x0(1);
  // loc(unknown)
  Fp x1(0);
  // loc("top(recursion::Top)/code(recursion::Code)/select(OneHot)/micro_ops(Reg)"("./zirgen/components/mux.h":59:0))
  auto x2 = arg0[1 * steps + ((cycle - 0) & mask)];
  assert(x2 != Fp::invalid());
  // loc("top(recursion::Top)/code(recursion::Code)/select(OneHot)/macro_ops(Reg)"("./zirgen/components/mux.h":59:0))
  auto x3 = arg0[2 * steps + ((cycle - 0) & mask)];
  assert(x3 != Fp::invalid());
  // loc("top(recursion::Top)/code(recursion::Code)/select(OneHot)/poseidon2_load(Reg)"("./zirgen/components/mux.h":59:0))
  auto x4 = arg0[3 * steps + ((cycle - 0) & mask)];
  assert(x4 != Fp::invalid());
  // loc("top(recursion::Top)/code(recursion::Code)/select(OneHot)/poseidon2_full(Reg)"("./zirgen/components/mux.h":59:0))
  auto x5 = arg0[4 * steps + ((cycle - 0) & mask)];
  assert(x5 != Fp::invalid());
  // loc("top(recursion::Top)/code(recursion::Code)/select(OneHot)/poseidon2_partial(Reg)"("./zirgen/components/mux.h":59:0))
  auto x6 = arg0[5 * steps + ((cycle - 0) & mask)];
  assert(x6 != Fp::invalid());
  // loc("top(recursion::Top)/code(recursion::Code)/select(OneHot)/poseidon2_store(Reg)"("./zirgen/components/mux.h":59:0))
  auto x7 = arg0[6 * steps + ((cycle - 0) & mask)];
  assert(x7 != Fp::invalid());
  // loc("top(recursion::Top)/code(recursion::Code)/select(OneHot)/checked_bytes(Reg)"("./zirgen/components/mux.h":59:0))
  auto x8 = arg0[7 * steps + ((cycle - 0) & mask)];
  assert(x8 != Fp::invalid());
  if (x2 != 0) {
    {
      extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
      auto x9 = extern_outs[0];
      auto x10 = extern_outs[1];
      auto x11 = extern_outs[2];
      auto x12 = extern_outs[3];
      auto x13 = extern_outs[4];
      auto x14 = extern_outs[5];
      auto x15 = extern_outs[6];
      // loc("zirgen/circuit/recursion/wom.cpp":41:0)
      {
        auto& reg = arg2[70 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x9);
        reg = x9;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[71 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x10);
        reg = x10;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[72 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x11);
        reg = x11;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[73 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x12);
        reg = x12;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[74 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x13);
        reg = x13;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[75 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x14);
        reg = x14;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[76 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x15);
        reg = x15;
      }
      extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
      auto x16 = extern_outs[0];
      auto x17 = extern_outs[1];
      auto x18 = extern_outs[2];
      auto x19 = extern_outs[3];
      auto x20 = extern_outs[4];
      auto x21 = extern_outs[5];
      auto x22 = extern_outs[6];
      // loc("zirgen/circuit/recursion/wom.cpp":41:0)
      {
        auto& reg = arg2[77 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x16);
        reg = x16;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[78 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x17);
        reg = x17;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[79 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x18);
        reg = x18;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[80 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x19);
        reg = x19;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[81 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x20);
        reg = x20;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[82 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x21);
        reg = x21;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[83 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x22);
        reg = x22;
      }
      extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
      auto x23 = extern_outs[0];
      auto x24 = extern_outs[1];
      auto x25 = extern_outs[2];
      auto x26 = extern_outs[3];
      auto x27 = extern_outs[4];
      auto x28 = extern_outs[5];
      auto x29 = extern_outs[6];
      // loc("zirgen/circuit/recursion/wom.cpp":41:0)
      {
        auto& reg = arg2[84 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x23);
        reg = x23;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[85 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x24);
        reg = x24;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[86 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x25);
        reg = x25;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[87 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x26);
        reg = x26;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[88 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x27);
        reg = x27;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[89 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x28);
        reg = x28;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[90 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x29);
        reg = x29;
      }
      extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
      auto x30 = extern_outs[0];
      auto x31 = extern_outs[1];
      auto x32 = extern_outs[2];
      auto x33 = extern_outs[3];
      auto x34 = extern_outs[4];
      auto x35 = extern_outs[5];
      auto x36 = extern_outs[6];
      // loc("zirgen/circuit/recursion/wom.cpp":41:0)
      {
        auto& reg = arg2[91 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x30);
        reg = x30;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[92 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x31);
        reg = x31;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[93 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x32);
        reg = x32;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[94 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x33);
        reg = x33;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[95 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x34);
        reg = x34;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[96 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x35);
        reg = x35;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[97 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x36);
        reg = x36;
      }
      extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
      auto x37 = extern_outs[0];
      auto x38 = extern_outs[1];
      auto x39 = extern_outs[2];
      auto x40 = extern_outs[3];
      auto x41 = extern_outs[4];
      auto x42 = extern_outs[5];
      auto x43 = extern_outs[6];
      // loc("zirgen/circuit/recursion/wom.cpp":41:0)
      {
        auto& reg = arg2[98 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x37);
        reg = x37;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[99 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x38);
        reg = x38;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[100 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x39);
        reg = x39;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[101 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x40);
        reg = x40;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[102 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x41);
        reg = x41;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[103 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x42);
        reg = x42;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[104 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x43);
        reg = x43;
      }
      extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
      auto x44 = extern_outs[0];
      auto x45 = extern_outs[1];
      auto x46 = extern_outs[2];
      auto x47 = extern_outs[3];
      auto x48 = extern_outs[4];
      auto x49 = extern_outs[5];
      auto x50 = extern_outs[6];
      // loc("zirgen/circuit/recursion/wom.cpp":41:0)
      {
        auto& reg = arg2[105 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x44);
        reg = x44;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[106 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x45);
        reg = x45;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[107 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x46);
        reg = x46;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[108 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x47);
        reg = x47;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[109 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x48);
        reg = x48;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[110 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x49);
        reg = x49;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[111 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x50);
        reg = x50;
      }
      extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
      auto x51 = extern_outs[0];
      auto x52 = extern_outs[1];
      auto x53 = extern_outs[2];
      auto x54 = extern_outs[3];
      auto x55 = extern_outs[4];
      auto x56 = extern_outs[5];
      auto x57 = extern_outs[6];
      // loc("zirgen/circuit/recursion/wom.cpp":41:0)
      {
        auto& reg = arg2[112 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x51);
        reg = x51;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[113 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x52);
        reg = x52;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[114 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x53);
        reg = x53;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[115 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x54);
        reg = x54;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[116 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x55);
        reg = x55;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[117 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x56);
        reg = x56;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[118 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x57);
        reg = x57;
      }
      extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
      auto x58 = extern_outs[0];
      auto x59 = extern_outs[1];
      auto x60 = extern_outs[2];
      auto x61 = extern_outs[3];
      auto x62 = extern_outs[4];
      auto x63 = extern_outs[5];
      auto x64 = extern_outs[6];
      // loc("zirgen/circuit/recursion/wom.cpp":41:0)
      {
        auto& reg = arg2[119 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x58);
        reg = x58;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[120 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x59);
        reg = x59;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[121 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x60);
        reg = x60;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[122 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x61);
        reg = x61;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[123 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x62);
        reg = x62;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[124 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x63);
        reg = x63;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[125 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x64);
        reg = x64;
      }
      extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
      auto x65 = extern_outs[0];
      auto x66 = extern_outs[1];
      auto x67 = extern_outs[2];
      auto x68 = extern_outs[3];
      auto x69 = extern_outs[4];
      auto x70 = extern_outs[5];
      auto x71 = extern_outs[6];
      // loc("zirgen/circuit/recursion/wom.cpp":41:0)
      {
        auto& reg = arg2[0 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x65);
        reg = x65;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[1 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x66);
        reg = x66;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[2 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x67);
        reg = x67;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[3 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x68);
        reg = x68;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[4 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x69);
        reg = x69;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[5 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x70);
        reg = x70;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[6 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x71);
        reg = x71;
      }
    }
    // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
    auto x72 = arg2[70 * steps + ((cycle - 0) & mask)];
    assert(x72 != Fp::invalid());
    // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":71:0))
    auto x73 = arg2[0 * steps + ((cycle - 1) & mask)];
    assert(x73 != Fp::invalid());
    // loc("zirgen/circuit/recursion/wom.cpp":72:0)
    auto x74 = x72 - x73;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x75 = x0 - x74;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x76 = x74 * x75;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    assert(x76 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x75 != 0) {
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x77 = arg2[71 * steps + ((cycle - 0) & mask)];
      assert(x77 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x78 = arg2[1 * steps + ((cycle - 1) & mask)];
      assert(x78 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x79 = x78 - x77;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x79 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x80 = arg2[72 * steps + ((cycle - 0) & mask)];
      assert(x80 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x81 = arg2[2 * steps + ((cycle - 1) & mask)];
      assert(x81 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x82 = x81 - x80;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x82 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x83 = arg2[73 * steps + ((cycle - 0) & mask)];
      assert(x83 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x84 = arg2[3 * steps + ((cycle - 1) & mask)];
      assert(x84 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x85 = x84 - x83;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x85 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x86 = arg2[74 * steps + ((cycle - 0) & mask)];
      assert(x86 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x87 = arg2[4 * steps + ((cycle - 1) & mask)];
      assert(x87 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x88 = x87 - x86;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x88 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x89 = arg2[75 * steps + ((cycle - 0) & mask)];
      assert(x89 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x90 = arg2[5 * steps + ((cycle - 1) & mask)];
      assert(x90 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x91 = x90 - x89;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x91 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x92 = arg2[76 * steps + ((cycle - 0) & mask)];
      assert(x92 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x93 = arg2[6 * steps + ((cycle - 1) & mask)];
      assert(x93 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x94 = x93 - x92;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x94 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
    auto x95 = arg2[77 * steps + ((cycle - 0) & mask)];
    assert(x95 != Fp::invalid());
    // loc("zirgen/circuit/recursion/wom.cpp":72:0)
    auto x96 = x95 - x72;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x97 = x0 - x96;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x98 = x96 * x97;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    assert(x98 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x97 != 0) {
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x99 = arg2[71 * steps + ((cycle - 0) & mask)];
      assert(x99 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x100 = arg2[78 * steps + ((cycle - 0) & mask)];
      assert(x100 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x101 = x99 - x100;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x101 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x102 = arg2[72 * steps + ((cycle - 0) & mask)];
      assert(x102 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x103 = arg2[79 * steps + ((cycle - 0) & mask)];
      assert(x103 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x104 = x102 - x103;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x104 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x105 = arg2[73 * steps + ((cycle - 0) & mask)];
      assert(x105 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x106 = arg2[80 * steps + ((cycle - 0) & mask)];
      assert(x106 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x107 = x105 - x106;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x107 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x108 = arg2[74 * steps + ((cycle - 0) & mask)];
      assert(x108 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x109 = arg2[81 * steps + ((cycle - 0) & mask)];
      assert(x109 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x110 = x108 - x109;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x110 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x111 = arg2[75 * steps + ((cycle - 0) & mask)];
      assert(x111 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x112 = arg2[82 * steps + ((cycle - 0) & mask)];
      assert(x112 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x113 = x111 - x112;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x113 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x114 = arg2[76 * steps + ((cycle - 0) & mask)];
      assert(x114 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x115 = arg2[83 * steps + ((cycle - 0) & mask)];
      assert(x115 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x116 = x114 - x115;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x116 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
    auto x117 = arg2[84 * steps + ((cycle - 0) & mask)];
    assert(x117 != Fp::invalid());
    // loc("zirgen/circuit/recursion/wom.cpp":72:0)
    auto x118 = x117 - x95;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x119 = x0 - x118;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x120 = x118 * x119;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    assert(x120 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x119 != 0) {
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x121 = arg2[78 * steps + ((cycle - 0) & mask)];
      assert(x121 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x122 = arg2[85 * steps + ((cycle - 0) & mask)];
      assert(x122 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x123 = x121 - x122;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x123 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x124 = arg2[79 * steps + ((cycle - 0) & mask)];
      assert(x124 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x125 = arg2[86 * steps + ((cycle - 0) & mask)];
      assert(x125 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x126 = x124 - x125;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x126 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x127 = arg2[80 * steps + ((cycle - 0) & mask)];
      assert(x127 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x128 = arg2[87 * steps + ((cycle - 0) & mask)];
      assert(x128 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x129 = x127 - x128;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x129 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x130 = arg2[81 * steps + ((cycle - 0) & mask)];
      assert(x130 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x131 = arg2[88 * steps + ((cycle - 0) & mask)];
      assert(x131 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x132 = x130 - x131;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x132 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x133 = arg2[82 * steps + ((cycle - 0) & mask)];
      assert(x133 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x134 = arg2[89 * steps + ((cycle - 0) & mask)];
      assert(x134 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x135 = x133 - x134;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x135 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x136 = arg2[83 * steps + ((cycle - 0) & mask)];
      assert(x136 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x137 = arg2[90 * steps + ((cycle - 0) & mask)];
      assert(x137 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x138 = x136 - x137;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x138 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
    auto x139 = arg2[91 * steps + ((cycle - 0) & mask)];
    assert(x139 != Fp::invalid());
    // loc("zirgen/circuit/recursion/wom.cpp":72:0)
    auto x140 = x139 - x117;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x141 = x0 - x140;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x142 = x140 * x141;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    assert(x142 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x141 != 0) {
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x143 = arg2[85 * steps + ((cycle - 0) & mask)];
      assert(x143 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x144 = arg2[92 * steps + ((cycle - 0) & mask)];
      assert(x144 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x145 = x143 - x144;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x145 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x146 = arg2[86 * steps + ((cycle - 0) & mask)];
      assert(x146 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x147 = arg2[93 * steps + ((cycle - 0) & mask)];
      assert(x147 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x148 = x146 - x147;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x148 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x149 = arg2[87 * steps + ((cycle - 0) & mask)];
      assert(x149 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x150 = arg2[94 * steps + ((cycle - 0) & mask)];
      assert(x150 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x151 = x149 - x150;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x151 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x152 = arg2[88 * steps + ((cycle - 0) & mask)];
      assert(x152 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x153 = arg2[95 * steps + ((cycle - 0) & mask)];
      assert(x153 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x154 = x152 - x153;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x154 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x155 = arg2[89 * steps + ((cycle - 0) & mask)];
      assert(x155 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x156 = arg2[96 * steps + ((cycle - 0) & mask)];
      assert(x156 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x157 = x155 - x156;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x157 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x158 = arg2[90 * steps + ((cycle - 0) & mask)];
      assert(x158 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x159 = arg2[97 * steps + ((cycle - 0) & mask)];
      assert(x159 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x160 = x158 - x159;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x160 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
    auto x161 = arg2[98 * steps + ((cycle - 0) & mask)];
    assert(x161 != Fp::invalid());
    // loc("zirgen/circuit/recursion/wom.cpp":72:0)
    auto x162 = x161 - x139;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x163 = x0 - x162;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x164 = x162 * x163;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    assert(x164 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x163 != 0) {
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x165 = arg2[92 * steps + ((cycle - 0) & mask)];
      assert(x165 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x166 = arg2[99 * steps + ((cycle - 0) & mask)];
      assert(x166 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x167 = x165 - x166;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x167 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x168 = arg2[93 * steps + ((cycle - 0) & mask)];
      assert(x168 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x169 = arg2[100 * steps + ((cycle - 0) & mask)];
      assert(x169 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x170 = x168 - x169;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x170 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x171 = arg2[94 * steps + ((cycle - 0) & mask)];
      assert(x171 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x172 = arg2[101 * steps + ((cycle - 0) & mask)];
      assert(x172 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x173 = x171 - x172;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x173 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x174 = arg2[95 * steps + ((cycle - 0) & mask)];
      assert(x174 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x175 = arg2[102 * steps + ((cycle - 0) & mask)];
      assert(x175 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x176 = x174 - x175;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x176 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x177 = arg2[96 * steps + ((cycle - 0) & mask)];
      assert(x177 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x178 = arg2[103 * steps + ((cycle - 0) & mask)];
      assert(x178 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x179 = x177 - x178;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x179 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x180 = arg2[97 * steps + ((cycle - 0) & mask)];
      assert(x180 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x181 = arg2[104 * steps + ((cycle - 0) & mask)];
      assert(x181 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x182 = x180 - x181;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x182 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
    auto x183 = arg2[105 * steps + ((cycle - 0) & mask)];
    assert(x183 != Fp::invalid());
    // loc("zirgen/circuit/recursion/wom.cpp":72:0)
    auto x184 = x183 - x161;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x185 = x0 - x184;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x186 = x184 * x185;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    assert(x186 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x185 != 0) {
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x187 = arg2[99 * steps + ((cycle - 0) & mask)];
      assert(x187 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x188 = arg2[106 * steps + ((cycle - 0) & mask)];
      assert(x188 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x189 = x187 - x188;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x189 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x190 = arg2[100 * steps + ((cycle - 0) & mask)];
      assert(x190 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x191 = arg2[107 * steps + ((cycle - 0) & mask)];
      assert(x191 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x192 = x190 - x191;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x192 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x193 = arg2[101 * steps + ((cycle - 0) & mask)];
      assert(x193 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x194 = arg2[108 * steps + ((cycle - 0) & mask)];
      assert(x194 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x195 = x193 - x194;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x195 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x196 = arg2[102 * steps + ((cycle - 0) & mask)];
      assert(x196 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x197 = arg2[109 * steps + ((cycle - 0) & mask)];
      assert(x197 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x198 = x196 - x197;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x198 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x199 = arg2[103 * steps + ((cycle - 0) & mask)];
      assert(x199 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x200 = arg2[110 * steps + ((cycle - 0) & mask)];
      assert(x200 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x201 = x199 - x200;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x201 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x202 = arg2[104 * steps + ((cycle - 0) & mask)];
      assert(x202 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x203 = arg2[111 * steps + ((cycle - 0) & mask)];
      assert(x203 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x204 = x202 - x203;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x204 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
    auto x205 = arg2[112 * steps + ((cycle - 0) & mask)];
    assert(x205 != Fp::invalid());
    // loc("zirgen/circuit/recursion/wom.cpp":72:0)
    auto x206 = x205 - x183;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x207 = x0 - x206;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x208 = x206 * x207;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    assert(x208 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x207 != 0) {
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x209 = arg2[106 * steps + ((cycle - 0) & mask)];
      assert(x209 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x210 = arg2[113 * steps + ((cycle - 0) & mask)];
      assert(x210 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x211 = x209 - x210;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x211 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x212 = arg2[107 * steps + ((cycle - 0) & mask)];
      assert(x212 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x213 = arg2[114 * steps + ((cycle - 0) & mask)];
      assert(x213 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x214 = x212 - x213;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x214 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x215 = arg2[108 * steps + ((cycle - 0) & mask)];
      assert(x215 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x216 = arg2[115 * steps + ((cycle - 0) & mask)];
      assert(x216 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x217 = x215 - x216;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x217 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x218 = arg2[109 * steps + ((cycle - 0) & mask)];
      assert(x218 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x219 = arg2[116 * steps + ((cycle - 0) & mask)];
      assert(x219 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x220 = x218 - x219;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x220 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x221 = arg2[110 * steps + ((cycle - 0) & mask)];
      assert(x221 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x222 = arg2[117 * steps + ((cycle - 0) & mask)];
      assert(x222 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x223 = x221 - x222;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x223 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x224 = arg2[111 * steps + ((cycle - 0) & mask)];
      assert(x224 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x225 = arg2[118 * steps + ((cycle - 0) & mask)];
      assert(x225 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x226 = x224 - x225;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x226 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
    auto x227 = arg2[119 * steps + ((cycle - 0) & mask)];
    assert(x227 != Fp::invalid());
    // loc("zirgen/circuit/recursion/wom.cpp":72:0)
    auto x228 = x227 - x205;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x229 = x0 - x228;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x230 = x228 * x229;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    assert(x230 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x229 != 0) {
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x231 = arg2[113 * steps + ((cycle - 0) & mask)];
      assert(x231 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x232 = arg2[120 * steps + ((cycle - 0) & mask)];
      assert(x232 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x233 = x231 - x232;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x233 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x234 = arg2[114 * steps + ((cycle - 0) & mask)];
      assert(x234 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x235 = arg2[121 * steps + ((cycle - 0) & mask)];
      assert(x235 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x236 = x234 - x235;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x236 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x237 = arg2[115 * steps + ((cycle - 0) & mask)];
      assert(x237 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x238 = arg2[122 * steps + ((cycle - 0) & mask)];
      assert(x238 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x239 = x237 - x238;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x239 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x240 = arg2[116 * steps + ((cycle - 0) & mask)];
      assert(x240 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x241 = arg2[123 * steps + ((cycle - 0) & mask)];
      assert(x241 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x242 = x240 - x241;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x242 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x243 = arg2[117 * steps + ((cycle - 0) & mask)];
      assert(x243 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x244 = arg2[124 * steps + ((cycle - 0) & mask)];
      assert(x244 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x245 = x243 - x244;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x245 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x246 = arg2[118 * steps + ((cycle - 0) & mask)];
      assert(x246 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x247 = arg2[125 * steps + ((cycle - 0) & mask)];
      assert(x247 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x248 = x246 - x247;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x248 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
    auto x249 = arg2[0 * steps + ((cycle - 0) & mask)];
    assert(x249 != Fp::invalid());
    // loc("zirgen/circuit/recursion/wom.cpp":72:0)
    auto x250 = x249 - x227;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x251 = x0 - x250;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x252 = x250 * x251;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    assert(x252 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x251 != 0) {
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x253 = arg2[120 * steps + ((cycle - 0) & mask)];
      assert(x253 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x254 = arg2[1 * steps + ((cycle - 0) & mask)];
      assert(x254 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x255 = x253 - x254;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x255 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x256 = arg2[121 * steps + ((cycle - 0) & mask)];
      assert(x256 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x257 = arg2[2 * steps + ((cycle - 0) & mask)];
      assert(x257 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x258 = x256 - x257;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x258 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x259 = arg2[122 * steps + ((cycle - 0) & mask)];
      assert(x259 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x260 = arg2[3 * steps + ((cycle - 0) & mask)];
      assert(x260 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x261 = x259 - x260;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x261 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x262 = arg2[123 * steps + ((cycle - 0) & mask)];
      assert(x262 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x263 = arg2[4 * steps + ((cycle - 0) & mask)];
      assert(x263 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x264 = x262 - x263;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x264 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x265 = arg2[124 * steps + ((cycle - 0) & mask)];
      assert(x265 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x266 = arg2[5 * steps + ((cycle - 0) & mask)];
      assert(x266 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x267 = x265 - x266;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x267 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x268 = arg2[125 * steps + ((cycle - 0) & mask)];
      assert(x268 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x269 = arg2[6 * steps + ((cycle - 0) & mask)];
      assert(x269 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x270 = x268 - x269;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x270 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
  }
  if (x3 != 0) {
    // loc("zirgen/compiler/edsl/component.cpp":49:0)
    auto x271 = arg0[9 * steps + ((cycle - 0) & mask)];
    assert(x271 != Fp::invalid());
    if (x271 != 0) {
      // loc("zirgen/circuit/recursion/wom.cpp":22:0)
      {
        auto& reg = arg2[0 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1);
        reg = x1;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":61:0)
      {
        auto& reg = arg2[1 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1);
        reg = x1;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":61:0)
      {
        auto& reg = arg2[2 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1);
        reg = x1;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":61:0)
      {
        auto& reg = arg2[3 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1);
        reg = x1;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":61:0)
      {
        auto& reg = arg2[4 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1);
        reg = x1;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":61:0)
      {
        auto& reg = arg2[5 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1);
        reg = x1;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":61:0)
      {
        auto& reg = arg2[6 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1);
        reg = x1;
      }
    }
    // loc("zirgen/compiler/edsl/component.cpp":49:0)
    auto x272 = arg0[10 * steps + ((cycle - 0) & mask)];
    assert(x272 != Fp::invalid());
    if (x272 != 0) {
      // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/wom_fini(recursion::WomFiniWrapper)/PlonkFini/recursion::impl::WomPlonkElement/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
      auto x273 = arg2[13 * steps + ((cycle - 0) & mask)];
      assert(x273 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":71:0))
      auto x274 = arg2[0 * steps + ((cycle - 1) & mask)];
      assert(x274 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":72:0)
      auto x275 = x273 - x274;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      auto x276 = x0 - x275;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      auto x277 = x275 * x276;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      assert(x277 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
      if (x276 != 0) {
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/wom_fini(recursion::WomFiniWrapper)/PlonkFini/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x278 = arg2[14 * steps + ((cycle - 0) & mask)];
        assert(x278 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x279 = arg2[1 * steps + ((cycle - 1) & mask)];
        assert(x279 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x280 = x279 - x278;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x280 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/wom_fini(recursion::WomFiniWrapper)/PlonkFini/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x281 = arg2[15 * steps + ((cycle - 0) & mask)];
        assert(x281 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x282 = arg2[2 * steps + ((cycle - 1) & mask)];
        assert(x282 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x283 = x282 - x281;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x283 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/wom_fini(recursion::WomFiniWrapper)/PlonkFini/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x284 = arg2[16 * steps + ((cycle - 0) & mask)];
        assert(x284 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x285 = arg2[3 * steps + ((cycle - 1) & mask)];
        assert(x285 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x286 = x285 - x284;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x286 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/wom_fini(recursion::WomFiniWrapper)/PlonkFini/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x287 = arg2[17 * steps + ((cycle - 0) & mask)];
        assert(x287 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x288 = arg2[4 * steps + ((cycle - 1) & mask)];
        assert(x288 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x289 = x288 - x287;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x289 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/wom_fini(recursion::WomFiniWrapper)/PlonkFini/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x290 = arg2[18 * steps + ((cycle - 0) & mask)];
        assert(x290 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x291 = arg2[5 * steps + ((cycle - 1) & mask)];
        assert(x291 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x292 = x291 - x290;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x292 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/wom_fini(recursion::WomFiniWrapper)/PlonkFini/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x293 = arg2[19 * steps + ((cycle - 0) & mask)];
        assert(x293 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x294 = arg2[6 * steps + ((cycle - 1) & mask)];
        assert(x294 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x295 = x294 - x293;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x295 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      }
    }
    // loc("zirgen/compiler/edsl/component.cpp":49:0)
    auto x296 = arg0[11 * steps + ((cycle - 0) & mask)];
    assert(x296 != Fp::invalid());
    if (x296 != 0) {
      {
        extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
        auto x297 = extern_outs[0];
        auto x298 = extern_outs[1];
        auto x299 = extern_outs[2];
        auto x300 = extern_outs[3];
        auto x301 = extern_outs[4];
        auto x302 = extern_outs[5];
        auto x303 = extern_outs[6];
        // loc("zirgen/circuit/recursion/wom.cpp":41:0)
        {
          auto& reg = arg2[34 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x297);
          reg = x297;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[35 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x298);
          reg = x298;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[36 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x299);
          reg = x299;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[37 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x300);
          reg = x300;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[38 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x301);
          reg = x301;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[39 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x302);
          reg = x302;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[40 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x303);
          reg = x303;
        }
        extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
        auto x304 = extern_outs[0];
        auto x305 = extern_outs[1];
        auto x306 = extern_outs[2];
        auto x307 = extern_outs[3];
        auto x308 = extern_outs[4];
        auto x309 = extern_outs[5];
        auto x310 = extern_outs[6];
        // loc("zirgen/circuit/recursion/wom.cpp":41:0)
        {
          auto& reg = arg2[41 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x304);
          reg = x304;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[42 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x305);
          reg = x305;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[43 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x306);
          reg = x306;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[44 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x307);
          reg = x307;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[45 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x308);
          reg = x308;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[46 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x309);
          reg = x309;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[47 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x310);
          reg = x310;
        }
        extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
        auto x311 = extern_outs[0];
        auto x312 = extern_outs[1];
        auto x313 = extern_outs[2];
        auto x314 = extern_outs[3];
        auto x315 = extern_outs[4];
        auto x316 = extern_outs[5];
        auto x317 = extern_outs[6];
        // loc("zirgen/circuit/recursion/wom.cpp":41:0)
        {
          auto& reg = arg2[0 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x311);
          reg = x311;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[1 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x312);
          reg = x312;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[2 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x313);
          reg = x313;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[3 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x314);
          reg = x314;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[4 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x315);
          reg = x315;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[5 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x316);
          reg = x316;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[6 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x317);
          reg = x317;
        }
      }
      // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
      auto x318 = arg2[34 * steps + ((cycle - 0) & mask)];
      assert(x318 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":71:0))
      auto x319 = arg2[0 * steps + ((cycle - 1) & mask)];
      assert(x319 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":72:0)
      auto x320 = x318 - x319;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      auto x321 = x0 - x320;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      auto x322 = x320 * x321;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      assert(x322 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
      if (x321 != 0) {
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x323 = arg2[35 * steps + ((cycle - 0) & mask)];
        assert(x323 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x324 = arg2[1 * steps + ((cycle - 1) & mask)];
        assert(x324 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x325 = x324 - x323;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x325 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x326 = arg2[36 * steps + ((cycle - 0) & mask)];
        assert(x326 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x327 = arg2[2 * steps + ((cycle - 1) & mask)];
        assert(x327 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x328 = x327 - x326;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x328 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x329 = arg2[37 * steps + ((cycle - 0) & mask)];
        assert(x329 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x330 = arg2[3 * steps + ((cycle - 1) & mask)];
        assert(x330 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x331 = x330 - x329;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x331 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x332 = arg2[38 * steps + ((cycle - 0) & mask)];
        assert(x332 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x333 = arg2[4 * steps + ((cycle - 1) & mask)];
        assert(x333 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x334 = x333 - x332;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x334 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x335 = arg2[39 * steps + ((cycle - 0) & mask)];
        assert(x335 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x336 = arg2[5 * steps + ((cycle - 1) & mask)];
        assert(x336 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x337 = x336 - x335;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x337 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x338 = arg2[40 * steps + ((cycle - 0) & mask)];
        assert(x338 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x339 = arg2[6 * steps + ((cycle - 1) & mask)];
        assert(x339 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x340 = x339 - x338;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x340 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      }
      // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
      auto x341 = arg2[41 * steps + ((cycle - 0) & mask)];
      assert(x341 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":72:0)
      auto x342 = x341 - x318;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      auto x343 = x0 - x342;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      auto x344 = x342 * x343;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      assert(x344 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
      if (x343 != 0) {
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x345 = arg2[35 * steps + ((cycle - 0) & mask)];
        assert(x345 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x346 = arg2[42 * steps + ((cycle - 0) & mask)];
        assert(x346 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x347 = x345 - x346;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x347 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x348 = arg2[36 * steps + ((cycle - 0) & mask)];
        assert(x348 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x349 = arg2[43 * steps + ((cycle - 0) & mask)];
        assert(x349 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x350 = x348 - x349;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x350 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x351 = arg2[37 * steps + ((cycle - 0) & mask)];
        assert(x351 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x352 = arg2[44 * steps + ((cycle - 0) & mask)];
        assert(x352 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x353 = x351 - x352;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x353 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x354 = arg2[38 * steps + ((cycle - 0) & mask)];
        assert(x354 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x355 = arg2[45 * steps + ((cycle - 0) & mask)];
        assert(x355 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x356 = x354 - x355;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x356 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x357 = arg2[39 * steps + ((cycle - 0) & mask)];
        assert(x357 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x358 = arg2[46 * steps + ((cycle - 0) & mask)];
        assert(x358 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x359 = x357 - x358;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x359 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x360 = arg2[40 * steps + ((cycle - 0) & mask)];
        assert(x360 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x361 = arg2[47 * steps + ((cycle - 0) & mask)];
        assert(x361 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x362 = x360 - x361;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x362 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      }
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
      auto x363 = arg2[0 * steps + ((cycle - 0) & mask)];
      assert(x363 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":72:0)
      auto x364 = x363 - x341;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      auto x365 = x0 - x364;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      auto x366 = x364 * x365;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      assert(x366 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
      if (x365 != 0) {
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x367 = arg2[42 * steps + ((cycle - 0) & mask)];
        assert(x367 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x368 = arg2[1 * steps + ((cycle - 0) & mask)];
        assert(x368 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x369 = x367 - x368;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x369 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x370 = arg2[43 * steps + ((cycle - 0) & mask)];
        assert(x370 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x371 = arg2[2 * steps + ((cycle - 0) & mask)];
        assert(x371 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x372 = x370 - x371;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x372 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x373 = arg2[44 * steps + ((cycle - 0) & mask)];
        assert(x373 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x374 = arg2[3 * steps + ((cycle - 0) & mask)];
        assert(x374 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x375 = x373 - x374;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x375 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x376 = arg2[45 * steps + ((cycle - 0) & mask)];
        assert(x376 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x377 = arg2[4 * steps + ((cycle - 0) & mask)];
        assert(x377 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x378 = x376 - x377;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x378 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x379 = arg2[46 * steps + ((cycle - 0) & mask)];
        assert(x379 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x380 = arg2[5 * steps + ((cycle - 0) & mask)];
        assert(x380 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x381 = x379 - x380;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x381 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x382 = arg2[47 * steps + ((cycle - 0) & mask)];
        assert(x382 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x383 = arg2[6 * steps + ((cycle - 0) & mask)];
        assert(x383 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x384 = x382 - x383;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x384 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      }
    }
    // loc("zirgen/compiler/edsl/component.cpp":49:0)
    auto x385 = arg0[12 * steps + ((cycle - 0) & mask)];
    assert(x385 != Fp::invalid());
    if (x385 != 0) {
      {
        extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
        auto x386 = extern_outs[0];
        auto x387 = extern_outs[1];
        auto x388 = extern_outs[2];
        auto x389 = extern_outs[3];
        auto x390 = extern_outs[4];
        auto x391 = extern_outs[5];
        auto x392 = extern_outs[6];
        // loc("zirgen/circuit/recursion/wom.cpp":41:0)
        {
          auto& reg = arg2[34 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x386);
          reg = x386;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[35 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x387);
          reg = x387;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[36 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x388);
          reg = x388;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[37 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x389);
          reg = x389;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[38 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x390);
          reg = x390;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[39 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x391);
          reg = x391;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[40 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x392);
          reg = x392;
        }
        extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
        auto x393 = extern_outs[0];
        auto x394 = extern_outs[1];
        auto x395 = extern_outs[2];
        auto x396 = extern_outs[3];
        auto x397 = extern_outs[4];
        auto x398 = extern_outs[5];
        auto x399 = extern_outs[6];
        // loc("zirgen/circuit/recursion/wom.cpp":41:0)
        {
          auto& reg = arg2[41 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x393);
          reg = x393;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[42 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x394);
          reg = x394;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[43 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x395);
          reg = x395;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[44 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x396);
          reg = x396;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[45 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x397);
          reg = x397;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[46 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x398);
          reg = x398;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[47 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x399);
          reg = x399;
        }
        extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
        auto x400 = extern_outs[0];
        auto x401 = extern_outs[1];
        auto x402 = extern_outs[2];
        auto x403 = extern_outs[3];
        auto x404 = extern_outs[4];
        auto x405 = extern_outs[5];
        auto x406 = extern_outs[6];
        // loc("zirgen/circuit/recursion/wom.cpp":41:0)
        {
          auto& reg = arg2[0 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x400);
          reg = x400;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[1 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x401);
          reg = x401;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[2 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x402);
          reg = x402;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[3 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x403);
          reg = x403;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[4 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x404);
          reg = x404;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[5 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x405);
          reg = x405;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[6 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x406);
          reg = x406;
        }
      }
      // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
      auto x407 = arg2[34 * steps + ((cycle - 0) & mask)];
      assert(x407 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":71:0))
      auto x408 = arg2[0 * steps + ((cycle - 1) & mask)];
      assert(x408 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":72:0)
      auto x409 = x407 - x408;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      auto x410 = x0 - x409;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      auto x411 = x409 * x410;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      assert(x411 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
      if (x410 != 0) {
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x412 = arg2[35 * steps + ((cycle - 0) & mask)];
        assert(x412 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x413 = arg2[1 * steps + ((cycle - 1) & mask)];
        assert(x413 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x414 = x413 - x412;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x414 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x415 = arg2[36 * steps + ((cycle - 0) & mask)];
        assert(x415 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x416 = arg2[2 * steps + ((cycle - 1) & mask)];
        assert(x416 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x417 = x416 - x415;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x417 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x418 = arg2[37 * steps + ((cycle - 0) & mask)];
        assert(x418 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x419 = arg2[3 * steps + ((cycle - 1) & mask)];
        assert(x419 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x420 = x419 - x418;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x420 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x421 = arg2[38 * steps + ((cycle - 0) & mask)];
        assert(x421 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x422 = arg2[4 * steps + ((cycle - 1) & mask)];
        assert(x422 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x423 = x422 - x421;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x423 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x424 = arg2[39 * steps + ((cycle - 0) & mask)];
        assert(x424 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x425 = arg2[5 * steps + ((cycle - 1) & mask)];
        assert(x425 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x426 = x425 - x424;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x426 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x427 = arg2[40 * steps + ((cycle - 0) & mask)];
        assert(x427 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x428 = arg2[6 * steps + ((cycle - 1) & mask)];
        assert(x428 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x429 = x428 - x427;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x429 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      }
      // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
      auto x430 = arg2[41 * steps + ((cycle - 0) & mask)];
      assert(x430 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":72:0)
      auto x431 = x430 - x407;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      auto x432 = x0 - x431;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      auto x433 = x431 * x432;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      assert(x433 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
      if (x432 != 0) {
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x434 = arg2[35 * steps + ((cycle - 0) & mask)];
        assert(x434 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x435 = arg2[42 * steps + ((cycle - 0) & mask)];
        assert(x435 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x436 = x434 - x435;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x436 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x437 = arg2[36 * steps + ((cycle - 0) & mask)];
        assert(x437 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x438 = arg2[43 * steps + ((cycle - 0) & mask)];
        assert(x438 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x439 = x437 - x438;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x439 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x440 = arg2[37 * steps + ((cycle - 0) & mask)];
        assert(x440 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x441 = arg2[44 * steps + ((cycle - 0) & mask)];
        assert(x441 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x442 = x440 - x441;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x442 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x443 = arg2[38 * steps + ((cycle - 0) & mask)];
        assert(x443 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x444 = arg2[45 * steps + ((cycle - 0) & mask)];
        assert(x444 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x445 = x443 - x444;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x445 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x446 = arg2[39 * steps + ((cycle - 0) & mask)];
        assert(x446 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x447 = arg2[46 * steps + ((cycle - 0) & mask)];
        assert(x447 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x448 = x446 - x447;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x448 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x449 = arg2[40 * steps + ((cycle - 0) & mask)];
        assert(x449 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x450 = arg2[47 * steps + ((cycle - 0) & mask)];
        assert(x450 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x451 = x449 - x450;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x451 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      }
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
      auto x452 = arg2[0 * steps + ((cycle - 0) & mask)];
      assert(x452 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":72:0)
      auto x453 = x452 - x430;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      auto x454 = x0 - x453;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      auto x455 = x453 * x454;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      assert(x455 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
      if (x454 != 0) {
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x456 = arg2[42 * steps + ((cycle - 0) & mask)];
        assert(x456 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x457 = arg2[1 * steps + ((cycle - 0) & mask)];
        assert(x457 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x458 = x456 - x457;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x458 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x459 = arg2[43 * steps + ((cycle - 0) & mask)];
        assert(x459 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x460 = arg2[2 * steps + ((cycle - 0) & mask)];
        assert(x460 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x461 = x459 - x460;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x461 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x462 = arg2[44 * steps + ((cycle - 0) & mask)];
        assert(x462 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x463 = arg2[3 * steps + ((cycle - 0) & mask)];
        assert(x463 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x464 = x462 - x463;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x464 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x465 = arg2[45 * steps + ((cycle - 0) & mask)];
        assert(x465 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x466 = arg2[4 * steps + ((cycle - 0) & mask)];
        assert(x466 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x467 = x465 - x466;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x467 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x468 = arg2[46 * steps + ((cycle - 0) & mask)];
        assert(x468 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x469 = arg2[5 * steps + ((cycle - 0) & mask)];
        assert(x469 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x470 = x468 - x469;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x470 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x471 = arg2[47 * steps + ((cycle - 0) & mask)];
        assert(x471 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x472 = arg2[6 * steps + ((cycle - 0) & mask)];
        assert(x472 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x473 = x471 - x472;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x473 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      }
    }
    // loc("zirgen/compiler/edsl/component.cpp":49:0)
    auto x474 = arg0[13 * steps + ((cycle - 0) & mask)];
    assert(x474 != Fp::invalid());
    if (x474 != 0) {
      {
        extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
        auto x475 = extern_outs[0];
        auto x476 = extern_outs[1];
        auto x477 = extern_outs[2];
        auto x478 = extern_outs[3];
        auto x479 = extern_outs[4];
        auto x480 = extern_outs[5];
        auto x481 = extern_outs[6];
        // loc("zirgen/circuit/recursion/wom.cpp":41:0)
        {
          auto& reg = arg2[27 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x475);
          reg = x475;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[28 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x476);
          reg = x476;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[29 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x477);
          reg = x477;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[30 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x478);
          reg = x478;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[31 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x479);
          reg = x479;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[32 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x480);
          reg = x480;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[33 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x481);
          reg = x481;
        }
        extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
        auto x482 = extern_outs[0];
        auto x483 = extern_outs[1];
        auto x484 = extern_outs[2];
        auto x485 = extern_outs[3];
        auto x486 = extern_outs[4];
        auto x487 = extern_outs[5];
        auto x488 = extern_outs[6];
        // loc("zirgen/circuit/recursion/wom.cpp":41:0)
        {
          auto& reg = arg2[0 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x482);
          reg = x482;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[1 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x483);
          reg = x483;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[2 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x484);
          reg = x484;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[3 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x485);
          reg = x485;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[4 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x486);
          reg = x486;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[5 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x487);
          reg = x487;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[6 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x488);
          reg = x488;
        }
      }
      // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_init(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
      auto x489 = arg2[27 * steps + ((cycle - 0) & mask)];
      assert(x489 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":71:0))
      auto x490 = arg2[0 * steps + ((cycle - 1) & mask)];
      assert(x490 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":72:0)
      auto x491 = x489 - x490;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      auto x492 = x0 - x491;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      auto x493 = x491 * x492;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      assert(x493 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
      if (x492 != 0) {
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_init(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x494 = arg2[28 * steps + ((cycle - 0) & mask)];
        assert(x494 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x495 = arg2[1 * steps + ((cycle - 1) & mask)];
        assert(x495 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x496 = x495 - x494;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x496 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_init(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x497 = arg2[29 * steps + ((cycle - 0) & mask)];
        assert(x497 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x498 = arg2[2 * steps + ((cycle - 1) & mask)];
        assert(x498 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x499 = x498 - x497;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x499 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_init(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x500 = arg2[30 * steps + ((cycle - 0) & mask)];
        assert(x500 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x501 = arg2[3 * steps + ((cycle - 1) & mask)];
        assert(x501 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x502 = x501 - x500;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x502 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_init(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x503 = arg2[31 * steps + ((cycle - 0) & mask)];
        assert(x503 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x504 = arg2[4 * steps + ((cycle - 1) & mask)];
        assert(x504 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x505 = x504 - x503;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x505 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_init(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x506 = arg2[32 * steps + ((cycle - 0) & mask)];
        assert(x506 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x507 = arg2[5 * steps + ((cycle - 1) & mask)];
        assert(x507 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x508 = x507 - x506;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x508 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_init(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x509 = arg2[33 * steps + ((cycle - 0) & mask)];
        assert(x509 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x510 = arg2[6 * steps + ((cycle - 1) & mask)];
        assert(x510 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x511 = x510 - x509;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x511 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      }
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
      auto x512 = arg2[0 * steps + ((cycle - 0) & mask)];
      assert(x512 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":72:0)
      auto x513 = x512 - x489;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      auto x514 = x0 - x513;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      auto x515 = x513 * x514;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      assert(x515 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
      if (x514 != 0) {
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_init(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x516 = arg2[28 * steps + ((cycle - 0) & mask)];
        assert(x516 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x517 = arg2[1 * steps + ((cycle - 0) & mask)];
        assert(x517 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x518 = x516 - x517;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x518 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_init(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x519 = arg2[29 * steps + ((cycle - 0) & mask)];
        assert(x519 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x520 = arg2[2 * steps + ((cycle - 0) & mask)];
        assert(x520 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x521 = x519 - x520;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x521 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_init(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x522 = arg2[30 * steps + ((cycle - 0) & mask)];
        assert(x522 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x523 = arg2[3 * steps + ((cycle - 0) & mask)];
        assert(x523 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x524 = x522 - x523;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x524 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_init(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x525 = arg2[31 * steps + ((cycle - 0) & mask)];
        assert(x525 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x526 = arg2[4 * steps + ((cycle - 0) & mask)];
        assert(x526 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x527 = x525 - x526;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x527 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_init(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x528 = arg2[32 * steps + ((cycle - 0) & mask)];
        assert(x528 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x529 = arg2[5 * steps + ((cycle - 0) & mask)];
        assert(x529 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x530 = x528 - x529;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x530 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_init(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x531 = arg2[33 * steps + ((cycle - 0) & mask)];
        assert(x531 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x532 = arg2[6 * steps + ((cycle - 0) & mask)];
        assert(x532 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x533 = x531 - x532;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x533 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      }
    }
    // loc("zirgen/compiler/edsl/component.cpp":49:0)
    auto x534 = arg0[14 * steps + ((cycle - 0) & mask)];
    assert(x534 != Fp::invalid());
    if (x534 != 0) {
      {
        extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
        auto x535 = extern_outs[0];
        auto x536 = extern_outs[1];
        auto x537 = extern_outs[2];
        auto x538 = extern_outs[3];
        auto x539 = extern_outs[4];
        auto x540 = extern_outs[5];
        auto x541 = extern_outs[6];
        // loc("zirgen/circuit/recursion/wom.cpp":41:0)
        {
          auto& reg = arg2[27 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x535);
          reg = x535;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[28 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x536);
          reg = x536;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[29 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x537);
          reg = x537;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[30 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x538);
          reg = x538;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[31 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x539);
          reg = x539;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[32 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x540);
          reg = x540;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[33 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x541);
          reg = x541;
        }
        extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
        auto x542 = extern_outs[0];
        auto x543 = extern_outs[1];
        auto x544 = extern_outs[2];
        auto x545 = extern_outs[3];
        auto x546 = extern_outs[4];
        auto x547 = extern_outs[5];
        auto x548 = extern_outs[6];
        // loc("zirgen/circuit/recursion/wom.cpp":41:0)
        {
          auto& reg = arg2[0 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x542);
          reg = x542;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[1 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x543);
          reg = x543;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[2 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x544);
          reg = x544;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[3 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x545);
          reg = x545;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[4 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x546);
          reg = x546;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[5 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x547);
          reg = x547;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[6 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x548);
          reg = x548;
        }
      }
      // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_fini(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
      auto x549 = arg2[27 * steps + ((cycle - 0) & mask)];
      assert(x549 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":71:0))
      auto x550 = arg2[0 * steps + ((cycle - 1) & mask)];
      assert(x550 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":72:0)
      auto x551 = x549 - x550;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      auto x552 = x0 - x551;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      auto x553 = x551 * x552;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      assert(x553 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
      if (x552 != 0) {
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_fini(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x554 = arg2[28 * steps + ((cycle - 0) & mask)];
        assert(x554 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x555 = arg2[1 * steps + ((cycle - 1) & mask)];
        assert(x555 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x556 = x555 - x554;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x556 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_fini(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x557 = arg2[29 * steps + ((cycle - 0) & mask)];
        assert(x557 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x558 = arg2[2 * steps + ((cycle - 1) & mask)];
        assert(x558 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x559 = x558 - x557;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x559 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_fini(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x560 = arg2[30 * steps + ((cycle - 0) & mask)];
        assert(x560 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x561 = arg2[3 * steps + ((cycle - 1) & mask)];
        assert(x561 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x562 = x561 - x560;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x562 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_fini(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x563 = arg2[31 * steps + ((cycle - 0) & mask)];
        assert(x563 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x564 = arg2[4 * steps + ((cycle - 1) & mask)];
        assert(x564 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x565 = x564 - x563;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x565 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_fini(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x566 = arg2[32 * steps + ((cycle - 0) & mask)];
        assert(x566 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x567 = arg2[5 * steps + ((cycle - 1) & mask)];
        assert(x567 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x568 = x567 - x566;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x568 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_fini(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x569 = arg2[33 * steps + ((cycle - 0) & mask)];
        assert(x569 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x570 = arg2[6 * steps + ((cycle - 1) & mask)];
        assert(x570 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x571 = x570 - x569;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x571 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      }
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
      auto x572 = arg2[0 * steps + ((cycle - 0) & mask)];
      assert(x572 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":72:0)
      auto x573 = x572 - x549;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      auto x574 = x0 - x573;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      auto x575 = x573 * x574;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      assert(x575 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
      if (x574 != 0) {
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_fini(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x576 = arg2[28 * steps + ((cycle - 0) & mask)];
        assert(x576 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x577 = arg2[1 * steps + ((cycle - 0) & mask)];
        assert(x577 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x578 = x576 - x577;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x578 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_fini(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x579 = arg2[29 * steps + ((cycle - 0) & mask)];
        assert(x579 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x580 = arg2[2 * steps + ((cycle - 0) & mask)];
        assert(x580 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x581 = x579 - x580;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x581 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_fini(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x582 = arg2[30 * steps + ((cycle - 0) & mask)];
        assert(x582 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x583 = arg2[3 * steps + ((cycle - 0) & mask)];
        assert(x583 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x584 = x582 - x583;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x584 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_fini(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x585 = arg2[31 * steps + ((cycle - 0) & mask)];
        assert(x585 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x586 = arg2[4 * steps + ((cycle - 0) & mask)];
        assert(x586 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x587 = x585 - x586;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x587 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_fini(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x588 = arg2[32 * steps + ((cycle - 0) & mask)];
        assert(x588 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x589 = arg2[5 * steps + ((cycle - 0) & mask)];
        assert(x589 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x590 = x588 - x589;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x590 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_fini(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x591 = arg2[33 * steps + ((cycle - 0) & mask)];
        assert(x591 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x592 = arg2[6 * steps + ((cycle - 0) & mask)];
        assert(x592 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x593 = x591 - x592;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x593 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      }
    }
    // loc("zirgen/compiler/edsl/component.cpp":49:0)
    auto x594 = arg0[15 * steps + ((cycle - 0) & mask)];
    assert(x594 != Fp::invalid());
    if (x594 != 0) {
      {
        extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
        auto x595 = extern_outs[0];
        auto x596 = extern_outs[1];
        auto x597 = extern_outs[2];
        auto x598 = extern_outs[3];
        auto x599 = extern_outs[4];
        auto x600 = extern_outs[5];
        auto x601 = extern_outs[6];
        // loc("zirgen/circuit/recursion/wom.cpp":41:0)
        {
          auto& reg = arg2[27 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x595);
          reg = x595;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[28 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x596);
          reg = x596;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[29 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x597);
          reg = x597;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[30 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x598);
          reg = x598;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[31 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x599);
          reg = x599;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[32 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x600);
          reg = x600;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[33 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x601);
          reg = x601;
        }
        extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
        auto x602 = extern_outs[0];
        auto x603 = extern_outs[1];
        auto x604 = extern_outs[2];
        auto x605 = extern_outs[3];
        auto x606 = extern_outs[4];
        auto x607 = extern_outs[5];
        auto x608 = extern_outs[6];
        // loc("zirgen/circuit/recursion/wom.cpp":41:0)
        {
          auto& reg = arg2[0 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x602);
          reg = x602;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[1 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x603);
          reg = x603;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[2 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x604);
          reg = x604;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[3 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x605);
          reg = x605;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[4 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x606);
          reg = x606;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[5 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x607);
          reg = x607;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[6 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x608);
          reg = x608;
        }
      }
      // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_load(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
      auto x609 = arg2[27 * steps + ((cycle - 0) & mask)];
      assert(x609 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":71:0))
      auto x610 = arg2[0 * steps + ((cycle - 1) & mask)];
      assert(x610 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":72:0)
      auto x611 = x609 - x610;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      auto x612 = x0 - x611;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      auto x613 = x611 * x612;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      assert(x613 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
      if (x612 != 0) {
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_load(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x614 = arg2[28 * steps + ((cycle - 0) & mask)];
        assert(x614 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x615 = arg2[1 * steps + ((cycle - 1) & mask)];
        assert(x615 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x616 = x615 - x614;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x616 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_load(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x617 = arg2[29 * steps + ((cycle - 0) & mask)];
        assert(x617 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x618 = arg2[2 * steps + ((cycle - 1) & mask)];
        assert(x618 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x619 = x618 - x617;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x619 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_load(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x620 = arg2[30 * steps + ((cycle - 0) & mask)];
        assert(x620 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x621 = arg2[3 * steps + ((cycle - 1) & mask)];
        assert(x621 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x622 = x621 - x620;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x622 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_load(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x623 = arg2[31 * steps + ((cycle - 0) & mask)];
        assert(x623 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x624 = arg2[4 * steps + ((cycle - 1) & mask)];
        assert(x624 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x625 = x624 - x623;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x625 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_load(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x626 = arg2[32 * steps + ((cycle - 0) & mask)];
        assert(x626 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x627 = arg2[5 * steps + ((cycle - 1) & mask)];
        assert(x627 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x628 = x627 - x626;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x628 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_load(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x629 = arg2[33 * steps + ((cycle - 0) & mask)];
        assert(x629 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x630 = arg2[6 * steps + ((cycle - 1) & mask)];
        assert(x630 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x631 = x630 - x629;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x631 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      }
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
      auto x632 = arg2[0 * steps + ((cycle - 0) & mask)];
      assert(x632 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":72:0)
      auto x633 = x632 - x609;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      auto x634 = x0 - x633;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      auto x635 = x633 * x634;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      assert(x635 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
      if (x634 != 0) {
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_load(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x636 = arg2[28 * steps + ((cycle - 0) & mask)];
        assert(x636 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x637 = arg2[1 * steps + ((cycle - 0) & mask)];
        assert(x637 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x638 = x636 - x637;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x638 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_load(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x639 = arg2[29 * steps + ((cycle - 0) & mask)];
        assert(x639 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x640 = arg2[2 * steps + ((cycle - 0) & mask)];
        assert(x640 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x641 = x639 - x640;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x641 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_load(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x642 = arg2[30 * steps + ((cycle - 0) & mask)];
        assert(x642 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x643 = arg2[3 * steps + ((cycle - 0) & mask)];
        assert(x643 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x644 = x642 - x643;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x644 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_load(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x645 = arg2[31 * steps + ((cycle - 0) & mask)];
        assert(x645 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x646 = arg2[4 * steps + ((cycle - 0) & mask)];
        assert(x646 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x647 = x645 - x646;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x647 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_load(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x648 = arg2[32 * steps + ((cycle - 0) & mask)];
        assert(x648 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x649 = arg2[5 * steps + ((cycle - 0) & mask)];
        assert(x649 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x650 = x648 - x649;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x650 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_load(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x651 = arg2[33 * steps + ((cycle - 0) & mask)];
        assert(x651 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x652 = arg2[6 * steps + ((cycle - 0) & mask)];
        assert(x652 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x653 = x651 - x652;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x653 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      }
    }
    // loc("zirgen/compiler/edsl/component.cpp":49:0)
    auto x654 = arg0[16 * steps + ((cycle - 0) & mask)];
    assert(x654 != Fp::invalid());
    if (x654 != 0) {
      {
        extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
        auto x655 = extern_outs[0];
        auto x656 = extern_outs[1];
        auto x657 = extern_outs[2];
        auto x658 = extern_outs[3];
        auto x659 = extern_outs[4];
        auto x660 = extern_outs[5];
        auto x661 = extern_outs[6];
        // loc("zirgen/circuit/recursion/wom.cpp":41:0)
        {
          auto& reg = arg2[27 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x655);
          reg = x655;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[28 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x656);
          reg = x656;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[29 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x657);
          reg = x657;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[30 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x658);
          reg = x658;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[31 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x659);
          reg = x659;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[32 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x660);
          reg = x660;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[33 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x661);
          reg = x661;
        }
        extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
        auto x662 = extern_outs[0];
        auto x663 = extern_outs[1];
        auto x664 = extern_outs[2];
        auto x665 = extern_outs[3];
        auto x666 = extern_outs[4];
        auto x667 = extern_outs[5];
        auto x668 = extern_outs[6];
        // loc("zirgen/circuit/recursion/wom.cpp":41:0)
        {
          auto& reg = arg2[0 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x662);
          reg = x662;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[1 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x663);
          reg = x663;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[2 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x664);
          reg = x664;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[3 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x665);
          reg = x665;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[4 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x666);
          reg = x666;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[5 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x667);
          reg = x667;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[6 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x668);
          reg = x668;
        }
      }
      // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_mix(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
      auto x669 = arg2[27 * steps + ((cycle - 0) & mask)];
      assert(x669 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":71:0))
      auto x670 = arg2[0 * steps + ((cycle - 1) & mask)];
      assert(x670 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":72:0)
      auto x671 = x669 - x670;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      auto x672 = x0 - x671;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      auto x673 = x671 * x672;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      assert(x673 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
      if (x672 != 0) {
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_mix(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x674 = arg2[28 * steps + ((cycle - 0) & mask)];
        assert(x674 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x675 = arg2[1 * steps + ((cycle - 1) & mask)];
        assert(x675 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x676 = x675 - x674;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x676 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_mix(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x677 = arg2[29 * steps + ((cycle - 0) & mask)];
        assert(x677 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x678 = arg2[2 * steps + ((cycle - 1) & mask)];
        assert(x678 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x679 = x678 - x677;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x679 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_mix(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x680 = arg2[30 * steps + ((cycle - 0) & mask)];
        assert(x680 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x681 = arg2[3 * steps + ((cycle - 1) & mask)];
        assert(x681 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x682 = x681 - x680;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x682 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_mix(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x683 = arg2[31 * steps + ((cycle - 0) & mask)];
        assert(x683 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x684 = arg2[4 * steps + ((cycle - 1) & mask)];
        assert(x684 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x685 = x684 - x683;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x685 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_mix(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x686 = arg2[32 * steps + ((cycle - 0) & mask)];
        assert(x686 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x687 = arg2[5 * steps + ((cycle - 1) & mask)];
        assert(x687 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x688 = x687 - x686;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x688 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_mix(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x689 = arg2[33 * steps + ((cycle - 0) & mask)];
        assert(x689 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x690 = arg2[6 * steps + ((cycle - 1) & mask)];
        assert(x690 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x691 = x690 - x689;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x691 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      }
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
      auto x692 = arg2[0 * steps + ((cycle - 0) & mask)];
      assert(x692 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":72:0)
      auto x693 = x692 - x669;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      auto x694 = x0 - x693;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      auto x695 = x693 * x694;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      assert(x695 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
      if (x694 != 0) {
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_mix(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x696 = arg2[28 * steps + ((cycle - 0) & mask)];
        assert(x696 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x697 = arg2[1 * steps + ((cycle - 0) & mask)];
        assert(x697 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x698 = x696 - x697;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x698 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_mix(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x699 = arg2[29 * steps + ((cycle - 0) & mask)];
        assert(x699 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x700 = arg2[2 * steps + ((cycle - 0) & mask)];
        assert(x700 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x701 = x699 - x700;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x701 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_mix(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x702 = arg2[30 * steps + ((cycle - 0) & mask)];
        assert(x702 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x703 = arg2[3 * steps + ((cycle - 0) & mask)];
        assert(x703 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x704 = x702 - x703;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x704 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_mix(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x705 = arg2[31 * steps + ((cycle - 0) & mask)];
        assert(x705 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x706 = arg2[4 * steps + ((cycle - 0) & mask)];
        assert(x706 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x707 = x705 - x706;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x707 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_mix(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x708 = arg2[32 * steps + ((cycle - 0) & mask)];
        assert(x708 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x709 = arg2[5 * steps + ((cycle - 0) & mask)];
        assert(x709 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x710 = x708 - x709;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x710 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_mix(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x711 = arg2[33 * steps + ((cycle - 0) & mask)];
        assert(x711 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x712 = arg2[6 * steps + ((cycle - 0) & mask)];
        assert(x712 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x713 = x711 - x712;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x713 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      }
    }
    // loc("zirgen/compiler/edsl/component.cpp":49:0)
    auto x714 = arg0[17 * steps + ((cycle - 0) & mask)];
    assert(x714 != Fp::invalid());
    if (x714 != 0) {
      {
        extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
        auto x715 = extern_outs[0];
        auto x716 = extern_outs[1];
        auto x717 = extern_outs[2];
        auto x718 = extern_outs[3];
        auto x719 = extern_outs[4];
        auto x720 = extern_outs[5];
        auto x721 = extern_outs[6];
        // loc("zirgen/circuit/recursion/wom.cpp":41:0)
        {
          auto& reg = arg2[45 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x715);
          reg = x715;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[46 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x716);
          reg = x716;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[47 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x717);
          reg = x717;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[48 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x718);
          reg = x718;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[49 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x719);
          reg = x719;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[50 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x720);
          reg = x720;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[51 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x721);
          reg = x721;
        }
        extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
        auto x722 = extern_outs[0];
        auto x723 = extern_outs[1];
        auto x724 = extern_outs[2];
        auto x725 = extern_outs[3];
        auto x726 = extern_outs[4];
        auto x727 = extern_outs[5];
        auto x728 = extern_outs[6];
        // loc("zirgen/circuit/recursion/wom.cpp":41:0)
        {
          auto& reg = arg2[52 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x722);
          reg = x722;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[53 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x723);
          reg = x723;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[54 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x724);
          reg = x724;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[55 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x725);
          reg = x725;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[56 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x726);
          reg = x726;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[57 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x727);
          reg = x727;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[58 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x728);
          reg = x728;
        }
        extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
        auto x729 = extern_outs[0];
        auto x730 = extern_outs[1];
        auto x731 = extern_outs[2];
        auto x732 = extern_outs[3];
        auto x733 = extern_outs[4];
        auto x734 = extern_outs[5];
        auto x735 = extern_outs[6];
        // loc("zirgen/circuit/recursion/wom.cpp":41:0)
        {
          auto& reg = arg2[59 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x729);
          reg = x729;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[60 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x730);
          reg = x730;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[61 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x731);
          reg = x731;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[62 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x732);
          reg = x732;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[63 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x733);
          reg = x733;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[64 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x734);
          reg = x734;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[65 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x735);
          reg = x735;
        }
        extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
        auto x736 = extern_outs[0];
        auto x737 = extern_outs[1];
        auto x738 = extern_outs[2];
        auto x739 = extern_outs[3];
        auto x740 = extern_outs[4];
        auto x741 = extern_outs[5];
        auto x742 = extern_outs[6];
        // loc("zirgen/circuit/recursion/wom.cpp":41:0)
        {
          auto& reg = arg2[0 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x736);
          reg = x736;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[1 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x737);
          reg = x737;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[2 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x738);
          reg = x738;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[3 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x739);
          reg = x739;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[4 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x740);
          reg = x740;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[5 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x741);
          reg = x741;
        }
        // loc("zirgen/circuit/recursion/wom.cpp":43:0)
        {
          auto& reg = arg2[6 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x742);
          reg = x742;
        }
      }
      // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
      auto x743 = arg2[45 * steps + ((cycle - 0) & mask)];
      assert(x743 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":71:0))
      auto x744 = arg2[0 * steps + ((cycle - 1) & mask)];
      assert(x744 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":72:0)
      auto x745 = x743 - x744;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      auto x746 = x0 - x745;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      auto x747 = x745 * x746;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      assert(x747 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
      if (x746 != 0) {
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x748 = arg2[46 * steps + ((cycle - 0) & mask)];
        assert(x748 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x749 = arg2[1 * steps + ((cycle - 1) & mask)];
        assert(x749 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x750 = x749 - x748;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x750 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x751 = arg2[47 * steps + ((cycle - 0) & mask)];
        assert(x751 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x752 = arg2[2 * steps + ((cycle - 1) & mask)];
        assert(x752 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x753 = x752 - x751;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x753 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x754 = arg2[48 * steps + ((cycle - 0) & mask)];
        assert(x754 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x755 = arg2[3 * steps + ((cycle - 1) & mask)];
        assert(x755 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x756 = x755 - x754;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x756 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x757 = arg2[49 * steps + ((cycle - 0) & mask)];
        assert(x757 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x758 = arg2[4 * steps + ((cycle - 1) & mask)];
        assert(x758 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x759 = x758 - x757;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x759 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x760 = arg2[50 * steps + ((cycle - 0) & mask)];
        assert(x760 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x761 = arg2[5 * steps + ((cycle - 1) & mask)];
        assert(x761 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x762 = x761 - x760;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x762 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x763 = arg2[51 * steps + ((cycle - 0) & mask)];
        assert(x763 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x764 = arg2[6 * steps + ((cycle - 1) & mask)];
        assert(x764 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x765 = x764 - x763;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x765 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      }
      // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
      auto x766 = arg2[52 * steps + ((cycle - 0) & mask)];
      assert(x766 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":72:0)
      auto x767 = x766 - x743;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      auto x768 = x0 - x767;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      auto x769 = x767 * x768;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      assert(x769 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
      if (x768 != 0) {
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x770 = arg2[46 * steps + ((cycle - 0) & mask)];
        assert(x770 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x771 = arg2[53 * steps + ((cycle - 0) & mask)];
        assert(x771 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x772 = x770 - x771;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x772 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x773 = arg2[47 * steps + ((cycle - 0) & mask)];
        assert(x773 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x774 = arg2[54 * steps + ((cycle - 0) & mask)];
        assert(x774 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x775 = x773 - x774;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x775 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x776 = arg2[48 * steps + ((cycle - 0) & mask)];
        assert(x776 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x777 = arg2[55 * steps + ((cycle - 0) & mask)];
        assert(x777 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x778 = x776 - x777;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x778 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x779 = arg2[49 * steps + ((cycle - 0) & mask)];
        assert(x779 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x780 = arg2[56 * steps + ((cycle - 0) & mask)];
        assert(x780 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x781 = x779 - x780;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x781 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x782 = arg2[50 * steps + ((cycle - 0) & mask)];
        assert(x782 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x783 = arg2[57 * steps + ((cycle - 0) & mask)];
        assert(x783 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x784 = x782 - x783;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x784 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x785 = arg2[51 * steps + ((cycle - 0) & mask)];
        assert(x785 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x786 = arg2[58 * steps + ((cycle - 0) & mask)];
        assert(x786 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x787 = x785 - x786;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x787 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      }
      // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
      auto x788 = arg2[59 * steps + ((cycle - 0) & mask)];
      assert(x788 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":72:0)
      auto x789 = x788 - x766;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      auto x790 = x0 - x789;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      auto x791 = x789 * x790;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      assert(x791 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
      if (x790 != 0) {
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x792 = arg2[53 * steps + ((cycle - 0) & mask)];
        assert(x792 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x793 = arg2[60 * steps + ((cycle - 0) & mask)];
        assert(x793 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x794 = x792 - x793;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x794 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x795 = arg2[54 * steps + ((cycle - 0) & mask)];
        assert(x795 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x796 = arg2[61 * steps + ((cycle - 0) & mask)];
        assert(x796 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x797 = x795 - x796;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x797 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x798 = arg2[55 * steps + ((cycle - 0) & mask)];
        assert(x798 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x799 = arg2[62 * steps + ((cycle - 0) & mask)];
        assert(x799 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x800 = x798 - x799;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x800 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x801 = arg2[56 * steps + ((cycle - 0) & mask)];
        assert(x801 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x802 = arg2[63 * steps + ((cycle - 0) & mask)];
        assert(x802 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x803 = x801 - x802;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x803 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x804 = arg2[57 * steps + ((cycle - 0) & mask)];
        assert(x804 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x805 = arg2[64 * steps + ((cycle - 0) & mask)];
        assert(x805 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x806 = x804 - x805;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x806 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x807 = arg2[58 * steps + ((cycle - 0) & mask)];
        assert(x807 != Fp::invalid());
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x808 = arg2[65 * steps + ((cycle - 0) & mask)];
        assert(x808 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x809 = x807 - x808;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x809 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      }
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
      auto x810 = arg2[0 * steps + ((cycle - 0) & mask)];
      assert(x810 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":72:0)
      auto x811 = x810 - x788;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      auto x812 = x0 - x811;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      auto x813 = x811 * x812;
      // loc("zirgen/circuit/recursion/wom.cpp":74:0)
      assert(x813 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
      if (x812 != 0) {
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x814 = arg2[60 * steps + ((cycle - 0) & mask)];
        assert(x814 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x815 = arg2[1 * steps + ((cycle - 0) & mask)];
        assert(x815 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x816 = x814 - x815;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x816 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x817 = arg2[61 * steps + ((cycle - 0) & mask)];
        assert(x817 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x818 = arg2[2 * steps + ((cycle - 0) & mask)];
        assert(x818 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x819 = x817 - x818;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x819 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x820 = arg2[62 * steps + ((cycle - 0) & mask)];
        assert(x820 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x821 = arg2[3 * steps + ((cycle - 0) & mask)];
        assert(x821 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x822 = x820 - x821;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x822 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x823 = arg2[63 * steps + ((cycle - 0) & mask)];
        assert(x823 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x824 = arg2[4 * steps + ((cycle - 0) & mask)];
        assert(x824 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x825 = x823 - x824;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x825 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x826 = arg2[64 * steps + ((cycle - 0) & mask)];
        assert(x826 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x827 = arg2[5 * steps + ((cycle - 0) & mask)];
        assert(x827 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x828 = x826 - x827;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x828 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // loc("top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x829 = arg2[65 * steps + ((cycle - 0) & mask)];
        assert(x829 != Fp::invalid());
        // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
        auto x830 = arg2[6 * steps + ((cycle - 0) & mask)];
        assert(x830 != Fp::invalid());
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        auto x831 = x829 - x830;
        // loc("zirgen/circuit/recursion/wom.cpp":78:0)
        assert(x831 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      }
    }
  }
  if (x4 != 0) {
    {
      extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
      auto x832 = extern_outs[0];
      auto x833 = extern_outs[1];
      auto x834 = extern_outs[2];
      auto x835 = extern_outs[3];
      auto x836 = extern_outs[4];
      auto x837 = extern_outs[5];
      auto x838 = extern_outs[6];
      // loc("zirgen/circuit/recursion/wom.cpp":41:0)
      {
        auto& reg = arg2[70 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x832);
        reg = x832;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[71 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x833);
        reg = x833;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[72 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x834);
        reg = x834;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[73 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x835);
        reg = x835;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[74 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x836);
        reg = x836;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[75 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x837);
        reg = x837;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[76 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x838);
        reg = x838;
      }
      extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
      auto x839 = extern_outs[0];
      auto x840 = extern_outs[1];
      auto x841 = extern_outs[2];
      auto x842 = extern_outs[3];
      auto x843 = extern_outs[4];
      auto x844 = extern_outs[5];
      auto x845 = extern_outs[6];
      // loc("zirgen/circuit/recursion/wom.cpp":41:0)
      {
        auto& reg = arg2[77 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x839);
        reg = x839;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[78 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x840);
        reg = x840;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[79 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x841);
        reg = x841;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[80 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x842);
        reg = x842;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[81 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x843);
        reg = x843;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[82 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x844);
        reg = x844;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[83 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x845);
        reg = x845;
      }
      extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
      auto x846 = extern_outs[0];
      auto x847 = extern_outs[1];
      auto x848 = extern_outs[2];
      auto x849 = extern_outs[3];
      auto x850 = extern_outs[4];
      auto x851 = extern_outs[5];
      auto x852 = extern_outs[6];
      // loc("zirgen/circuit/recursion/wom.cpp":41:0)
      {
        auto& reg = arg2[84 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x846);
        reg = x846;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[85 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x847);
        reg = x847;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[86 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x848);
        reg = x848;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[87 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x849);
        reg = x849;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[88 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x850);
        reg = x850;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[89 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x851);
        reg = x851;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[90 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x852);
        reg = x852;
      }
      extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
      auto x853 = extern_outs[0];
      auto x854 = extern_outs[1];
      auto x855 = extern_outs[2];
      auto x856 = extern_outs[3];
      auto x857 = extern_outs[4];
      auto x858 = extern_outs[5];
      auto x859 = extern_outs[6];
      // loc("zirgen/circuit/recursion/wom.cpp":41:0)
      {
        auto& reg = arg2[91 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x853);
        reg = x853;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[92 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x854);
        reg = x854;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[93 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x855);
        reg = x855;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[94 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x856);
        reg = x856;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[95 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x857);
        reg = x857;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[96 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x858);
        reg = x858;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[97 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x859);
        reg = x859;
      }
      extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
      auto x860 = extern_outs[0];
      auto x861 = extern_outs[1];
      auto x862 = extern_outs[2];
      auto x863 = extern_outs[3];
      auto x864 = extern_outs[4];
      auto x865 = extern_outs[5];
      auto x866 = extern_outs[6];
      // loc("zirgen/circuit/recursion/wom.cpp":41:0)
      {
        auto& reg = arg2[98 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x860);
        reg = x860;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[99 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x861);
        reg = x861;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[100 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x862);
        reg = x862;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[101 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x863);
        reg = x863;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[102 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x864);
        reg = x864;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[103 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x865);
        reg = x865;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[104 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x866);
        reg = x866;
      }
      extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
      auto x867 = extern_outs[0];
      auto x868 = extern_outs[1];
      auto x869 = extern_outs[2];
      auto x870 = extern_outs[3];
      auto x871 = extern_outs[4];
      auto x872 = extern_outs[5];
      auto x873 = extern_outs[6];
      // loc("zirgen/circuit/recursion/wom.cpp":41:0)
      {
        auto& reg = arg2[105 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x867);
        reg = x867;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[106 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x868);
        reg = x868;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[107 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x869);
        reg = x869;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[108 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x870);
        reg = x870;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[109 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x871);
        reg = x871;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[110 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x872);
        reg = x872;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[111 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x873);
        reg = x873;
      }
      extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
      auto x874 = extern_outs[0];
      auto x875 = extern_outs[1];
      auto x876 = extern_outs[2];
      auto x877 = extern_outs[3];
      auto x878 = extern_outs[4];
      auto x879 = extern_outs[5];
      auto x880 = extern_outs[6];
      // loc("zirgen/circuit/recursion/wom.cpp":41:0)
      {
        auto& reg = arg2[112 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x874);
        reg = x874;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[113 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x875);
        reg = x875;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[114 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x876);
        reg = x876;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[115 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x877);
        reg = x877;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[116 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x878);
        reg = x878;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[117 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x879);
        reg = x879;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[118 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x880);
        reg = x880;
      }
      extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
      auto x881 = extern_outs[0];
      auto x882 = extern_outs[1];
      auto x883 = extern_outs[2];
      auto x884 = extern_outs[3];
      auto x885 = extern_outs[4];
      auto x886 = extern_outs[5];
      auto x887 = extern_outs[6];
      // loc("zirgen/circuit/recursion/wom.cpp":41:0)
      {
        auto& reg = arg2[119 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x881);
        reg = x881;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[120 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x882);
        reg = x882;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[121 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x883);
        reg = x883;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[122 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x884);
        reg = x884;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[123 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x885);
        reg = x885;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[124 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x886);
        reg = x886;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[125 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x887);
        reg = x887;
      }
      extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
      auto x888 = extern_outs[0];
      auto x889 = extern_outs[1];
      auto x890 = extern_outs[2];
      auto x891 = extern_outs[3];
      auto x892 = extern_outs[4];
      auto x893 = extern_outs[5];
      auto x894 = extern_outs[6];
      // loc("zirgen/circuit/recursion/wom.cpp":41:0)
      {
        auto& reg = arg2[0 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x888);
        reg = x888;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[1 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x889);
        reg = x889;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[2 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x890);
        reg = x890;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[3 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x891);
        reg = x891;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[4 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x892);
        reg = x892;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[5 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x893);
        reg = x893;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[6 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x894);
        reg = x894;
      }
    }
    // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
    auto x895 = arg2[70 * steps + ((cycle - 0) & mask)];
    assert(x895 != Fp::invalid());
    // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":71:0))
    auto x896 = arg2[0 * steps + ((cycle - 1) & mask)];
    assert(x896 != Fp::invalid());
    // loc("zirgen/circuit/recursion/wom.cpp":72:0)
    auto x897 = x895 - x896;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x898 = x0 - x897;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x899 = x897 * x898;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    assert(x899 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x898 != 0) {
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x900 = arg2[71 * steps + ((cycle - 0) & mask)];
      assert(x900 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x901 = arg2[1 * steps + ((cycle - 1) & mask)];
      assert(x901 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x902 = x901 - x900;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x902 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x903 = arg2[72 * steps + ((cycle - 0) & mask)];
      assert(x903 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x904 = arg2[2 * steps + ((cycle - 1) & mask)];
      assert(x904 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x905 = x904 - x903;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x905 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x906 = arg2[73 * steps + ((cycle - 0) & mask)];
      assert(x906 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x907 = arg2[3 * steps + ((cycle - 1) & mask)];
      assert(x907 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x908 = x907 - x906;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x908 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x909 = arg2[74 * steps + ((cycle - 0) & mask)];
      assert(x909 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x910 = arg2[4 * steps + ((cycle - 1) & mask)];
      assert(x910 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x911 = x910 - x909;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x911 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x912 = arg2[75 * steps + ((cycle - 0) & mask)];
      assert(x912 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x913 = arg2[5 * steps + ((cycle - 1) & mask)];
      assert(x913 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x914 = x913 - x912;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x914 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x915 = arg2[76 * steps + ((cycle - 0) & mask)];
      assert(x915 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x916 = arg2[6 * steps + ((cycle - 1) & mask)];
      assert(x916 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x917 = x916 - x915;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x917 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
    auto x918 = arg2[77 * steps + ((cycle - 0) & mask)];
    assert(x918 != Fp::invalid());
    // loc("zirgen/circuit/recursion/wom.cpp":72:0)
    auto x919 = x918 - x895;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x920 = x0 - x919;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x921 = x919 * x920;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    assert(x921 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x920 != 0) {
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x922 = arg2[71 * steps + ((cycle - 0) & mask)];
      assert(x922 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x923 = arg2[78 * steps + ((cycle - 0) & mask)];
      assert(x923 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x924 = x922 - x923;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x924 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x925 = arg2[72 * steps + ((cycle - 0) & mask)];
      assert(x925 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x926 = arg2[79 * steps + ((cycle - 0) & mask)];
      assert(x926 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x927 = x925 - x926;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x927 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x928 = arg2[73 * steps + ((cycle - 0) & mask)];
      assert(x928 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x929 = arg2[80 * steps + ((cycle - 0) & mask)];
      assert(x929 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x930 = x928 - x929;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x930 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x931 = arg2[74 * steps + ((cycle - 0) & mask)];
      assert(x931 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x932 = arg2[81 * steps + ((cycle - 0) & mask)];
      assert(x932 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x933 = x931 - x932;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x933 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x934 = arg2[75 * steps + ((cycle - 0) & mask)];
      assert(x934 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x935 = arg2[82 * steps + ((cycle - 0) & mask)];
      assert(x935 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x936 = x934 - x935;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x936 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x937 = arg2[76 * steps + ((cycle - 0) & mask)];
      assert(x937 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x938 = arg2[83 * steps + ((cycle - 0) & mask)];
      assert(x938 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x939 = x937 - x938;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x939 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
    auto x940 = arg2[84 * steps + ((cycle - 0) & mask)];
    assert(x940 != Fp::invalid());
    // loc("zirgen/circuit/recursion/wom.cpp":72:0)
    auto x941 = x940 - x918;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x942 = x0 - x941;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x943 = x941 * x942;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    assert(x943 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x942 != 0) {
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x944 = arg2[78 * steps + ((cycle - 0) & mask)];
      assert(x944 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x945 = arg2[85 * steps + ((cycle - 0) & mask)];
      assert(x945 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x946 = x944 - x945;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x946 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x947 = arg2[79 * steps + ((cycle - 0) & mask)];
      assert(x947 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x948 = arg2[86 * steps + ((cycle - 0) & mask)];
      assert(x948 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x949 = x947 - x948;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x949 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x950 = arg2[80 * steps + ((cycle - 0) & mask)];
      assert(x950 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x951 = arg2[87 * steps + ((cycle - 0) & mask)];
      assert(x951 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x952 = x950 - x951;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x952 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x953 = arg2[81 * steps + ((cycle - 0) & mask)];
      assert(x953 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x954 = arg2[88 * steps + ((cycle - 0) & mask)];
      assert(x954 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x955 = x953 - x954;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x955 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x956 = arg2[82 * steps + ((cycle - 0) & mask)];
      assert(x956 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x957 = arg2[89 * steps + ((cycle - 0) & mask)];
      assert(x957 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x958 = x956 - x957;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x958 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x959 = arg2[83 * steps + ((cycle - 0) & mask)];
      assert(x959 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x960 = arg2[90 * steps + ((cycle - 0) & mask)];
      assert(x960 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x961 = x959 - x960;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x961 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
    auto x962 = arg2[91 * steps + ((cycle - 0) & mask)];
    assert(x962 != Fp::invalid());
    // loc("zirgen/circuit/recursion/wom.cpp":72:0)
    auto x963 = x962 - x940;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x964 = x0 - x963;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x965 = x963 * x964;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    assert(x965 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x964 != 0) {
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x966 = arg2[85 * steps + ((cycle - 0) & mask)];
      assert(x966 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x967 = arg2[92 * steps + ((cycle - 0) & mask)];
      assert(x967 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x968 = x966 - x967;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x968 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x969 = arg2[86 * steps + ((cycle - 0) & mask)];
      assert(x969 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x970 = arg2[93 * steps + ((cycle - 0) & mask)];
      assert(x970 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x971 = x969 - x970;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x971 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x972 = arg2[87 * steps + ((cycle - 0) & mask)];
      assert(x972 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x973 = arg2[94 * steps + ((cycle - 0) & mask)];
      assert(x973 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x974 = x972 - x973;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x974 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x975 = arg2[88 * steps + ((cycle - 0) & mask)];
      assert(x975 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x976 = arg2[95 * steps + ((cycle - 0) & mask)];
      assert(x976 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x977 = x975 - x976;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x977 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x978 = arg2[89 * steps + ((cycle - 0) & mask)];
      assert(x978 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x979 = arg2[96 * steps + ((cycle - 0) & mask)];
      assert(x979 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x980 = x978 - x979;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x980 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x981 = arg2[90 * steps + ((cycle - 0) & mask)];
      assert(x981 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x982 = arg2[97 * steps + ((cycle - 0) & mask)];
      assert(x982 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x983 = x981 - x982;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x983 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
    auto x984 = arg2[98 * steps + ((cycle - 0) & mask)];
    assert(x984 != Fp::invalid());
    // loc("zirgen/circuit/recursion/wom.cpp":72:0)
    auto x985 = x984 - x962;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x986 = x0 - x985;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x987 = x985 * x986;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    assert(x987 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x986 != 0) {
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x988 = arg2[92 * steps + ((cycle - 0) & mask)];
      assert(x988 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x989 = arg2[99 * steps + ((cycle - 0) & mask)];
      assert(x989 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x990 = x988 - x989;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x990 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x991 = arg2[93 * steps + ((cycle - 0) & mask)];
      assert(x991 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x992 = arg2[100 * steps + ((cycle - 0) & mask)];
      assert(x992 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x993 = x991 - x992;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x993 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x994 = arg2[94 * steps + ((cycle - 0) & mask)];
      assert(x994 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x995 = arg2[101 * steps + ((cycle - 0) & mask)];
      assert(x995 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x996 = x994 - x995;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x996 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x997 = arg2[95 * steps + ((cycle - 0) & mask)];
      assert(x997 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x998 = arg2[102 * steps + ((cycle - 0) & mask)];
      assert(x998 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x999 = x997 - x998;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x999 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1000 = arg2[96 * steps + ((cycle - 0) & mask)];
      assert(x1000 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1001 = arg2[103 * steps + ((cycle - 0) & mask)];
      assert(x1001 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1002 = x1000 - x1001;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1002 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1003 = arg2[97 * steps + ((cycle - 0) & mask)];
      assert(x1003 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1004 = arg2[104 * steps + ((cycle - 0) & mask)];
      assert(x1004 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1005 = x1003 - x1004;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1005 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
    auto x1006 = arg2[105 * steps + ((cycle - 0) & mask)];
    assert(x1006 != Fp::invalid());
    // loc("zirgen/circuit/recursion/wom.cpp":72:0)
    auto x1007 = x1006 - x984;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x1008 = x0 - x1007;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x1009 = x1007 * x1008;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    assert(x1009 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x1008 != 0) {
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1010 = arg2[99 * steps + ((cycle - 0) & mask)];
      assert(x1010 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1011 = arg2[106 * steps + ((cycle - 0) & mask)];
      assert(x1011 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1012 = x1010 - x1011;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1012 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1013 = arg2[100 * steps + ((cycle - 0) & mask)];
      assert(x1013 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1014 = arg2[107 * steps + ((cycle - 0) & mask)];
      assert(x1014 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1015 = x1013 - x1014;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1015 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1016 = arg2[101 * steps + ((cycle - 0) & mask)];
      assert(x1016 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1017 = arg2[108 * steps + ((cycle - 0) & mask)];
      assert(x1017 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1018 = x1016 - x1017;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1018 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1019 = arg2[102 * steps + ((cycle - 0) & mask)];
      assert(x1019 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1020 = arg2[109 * steps + ((cycle - 0) & mask)];
      assert(x1020 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1021 = x1019 - x1020;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1021 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1022 = arg2[103 * steps + ((cycle - 0) & mask)];
      assert(x1022 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1023 = arg2[110 * steps + ((cycle - 0) & mask)];
      assert(x1023 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1024 = x1022 - x1023;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1024 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1025 = arg2[104 * steps + ((cycle - 0) & mask)];
      assert(x1025 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1026 = arg2[111 * steps + ((cycle - 0) & mask)];
      assert(x1026 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1027 = x1025 - x1026;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1027 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
    auto x1028 = arg2[112 * steps + ((cycle - 0) & mask)];
    assert(x1028 != Fp::invalid());
    // loc("zirgen/circuit/recursion/wom.cpp":72:0)
    auto x1029 = x1028 - x1006;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x1030 = x0 - x1029;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x1031 = x1029 * x1030;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    assert(x1031 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x1030 != 0) {
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1032 = arg2[106 * steps + ((cycle - 0) & mask)];
      assert(x1032 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1033 = arg2[113 * steps + ((cycle - 0) & mask)];
      assert(x1033 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1034 = x1032 - x1033;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1034 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1035 = arg2[107 * steps + ((cycle - 0) & mask)];
      assert(x1035 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1036 = arg2[114 * steps + ((cycle - 0) & mask)];
      assert(x1036 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1037 = x1035 - x1036;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1037 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1038 = arg2[108 * steps + ((cycle - 0) & mask)];
      assert(x1038 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1039 = arg2[115 * steps + ((cycle - 0) & mask)];
      assert(x1039 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1040 = x1038 - x1039;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1040 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1041 = arg2[109 * steps + ((cycle - 0) & mask)];
      assert(x1041 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1042 = arg2[116 * steps + ((cycle - 0) & mask)];
      assert(x1042 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1043 = x1041 - x1042;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1043 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1044 = arg2[110 * steps + ((cycle - 0) & mask)];
      assert(x1044 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1045 = arg2[117 * steps + ((cycle - 0) & mask)];
      assert(x1045 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1046 = x1044 - x1045;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1046 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1047 = arg2[111 * steps + ((cycle - 0) & mask)];
      assert(x1047 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1048 = arg2[118 * steps + ((cycle - 0) & mask)];
      assert(x1048 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1049 = x1047 - x1048;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1049 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
    auto x1050 = arg2[119 * steps + ((cycle - 0) & mask)];
    assert(x1050 != Fp::invalid());
    // loc("zirgen/circuit/recursion/wom.cpp":72:0)
    auto x1051 = x1050 - x1028;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x1052 = x0 - x1051;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x1053 = x1051 * x1052;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    assert(x1053 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x1052 != 0) {
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1054 = arg2[113 * steps + ((cycle - 0) & mask)];
      assert(x1054 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1055 = arg2[120 * steps + ((cycle - 0) & mask)];
      assert(x1055 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1056 = x1054 - x1055;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1056 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1057 = arg2[114 * steps + ((cycle - 0) & mask)];
      assert(x1057 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1058 = arg2[121 * steps + ((cycle - 0) & mask)];
      assert(x1058 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1059 = x1057 - x1058;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1059 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1060 = arg2[115 * steps + ((cycle - 0) & mask)];
      assert(x1060 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1061 = arg2[122 * steps + ((cycle - 0) & mask)];
      assert(x1061 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1062 = x1060 - x1061;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1062 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1063 = arg2[116 * steps + ((cycle - 0) & mask)];
      assert(x1063 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1064 = arg2[123 * steps + ((cycle - 0) & mask)];
      assert(x1064 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1065 = x1063 - x1064;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1065 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1066 = arg2[117 * steps + ((cycle - 0) & mask)];
      assert(x1066 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1067 = arg2[124 * steps + ((cycle - 0) & mask)];
      assert(x1067 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1068 = x1066 - x1067;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1068 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1069 = arg2[118 * steps + ((cycle - 0) & mask)];
      assert(x1069 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1070 = arg2[125 * steps + ((cycle - 0) & mask)];
      assert(x1070 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1071 = x1069 - x1070;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1071 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
    auto x1072 = arg2[0 * steps + ((cycle - 0) & mask)];
    assert(x1072 != Fp::invalid());
    // loc("zirgen/circuit/recursion/wom.cpp":72:0)
    auto x1073 = x1072 - x1050;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x1074 = x0 - x1073;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x1075 = x1073 * x1074;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    assert(x1075 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x1074 != 0) {
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1076 = arg2[120 * steps + ((cycle - 0) & mask)];
      assert(x1076 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1077 = arg2[1 * steps + ((cycle - 0) & mask)];
      assert(x1077 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1078 = x1076 - x1077;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1078 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1079 = arg2[121 * steps + ((cycle - 0) & mask)];
      assert(x1079 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1080 = arg2[2 * steps + ((cycle - 0) & mask)];
      assert(x1080 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1081 = x1079 - x1080;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1081 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1082 = arg2[122 * steps + ((cycle - 0) & mask)];
      assert(x1082 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1083 = arg2[3 * steps + ((cycle - 0) & mask)];
      assert(x1083 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1084 = x1082 - x1083;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1084 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1085 = arg2[123 * steps + ((cycle - 0) & mask)];
      assert(x1085 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1086 = arg2[4 * steps + ((cycle - 0) & mask)];
      assert(x1086 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1087 = x1085 - x1086;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1087 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1088 = arg2[124 * steps + ((cycle - 0) & mask)];
      assert(x1088 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1089 = arg2[5 * steps + ((cycle - 0) & mask)];
      assert(x1089 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1090 = x1088 - x1089;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1090 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1091 = arg2[125 * steps + ((cycle - 0) & mask)];
      assert(x1091 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1092 = arg2[6 * steps + ((cycle - 0) & mask)];
      assert(x1092 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1093 = x1091 - x1092;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1093 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
  }
  if (x5 != 0) {
    // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":32:0))
    auto x1094 = arg2[0 * steps + ((cycle - 1) & mask)];
    assert(x1094 != Fp::invalid());
    // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":54:0))
    auto x1095 = arg2[1 * steps + ((cycle - 1) & mask)];
    assert(x1095 != Fp::invalid());
    // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":54:0))
    auto x1096 = arg2[2 * steps + ((cycle - 1) & mask)];
    assert(x1096 != Fp::invalid());
    // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":54:0))
    auto x1097 = arg2[3 * steps + ((cycle - 1) & mask)];
    assert(x1097 != Fp::invalid());
    // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":54:0))
    auto x1098 = arg2[4 * steps + ((cycle - 1) & mask)];
    assert(x1098 != Fp::invalid());
    // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":54:0))
    auto x1099 = arg2[5 * steps + ((cycle - 1) & mask)];
    assert(x1099 != Fp::invalid());
    // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":54:0))
    auto x1100 = arg2[6 * steps + ((cycle - 1) & mask)];
    assert(x1100 != Fp::invalid());
    // loc("zirgen/circuit/recursion/wom.cpp":41:0)
    {
      auto& reg = arg2[0 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x1094);
      reg = x1094;
    }
    // loc("zirgen/circuit/recursion/wom.cpp":43:0)
    {
      auto& reg = arg2[1 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x1095);
      reg = x1095;
    }
    // loc("zirgen/circuit/recursion/wom.cpp":43:0)
    {
      auto& reg = arg2[2 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x1096);
      reg = x1096;
    }
    // loc("zirgen/circuit/recursion/wom.cpp":43:0)
    {
      auto& reg = arg2[3 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x1097);
      reg = x1097;
    }
    // loc("zirgen/circuit/recursion/wom.cpp":43:0)
    {
      auto& reg = arg2[4 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x1098);
      reg = x1098;
    }
    // loc("zirgen/circuit/recursion/wom.cpp":43:0)
    {
      auto& reg = arg2[5 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x1099);
      reg = x1099;
    }
    // loc("zirgen/circuit/recursion/wom.cpp":43:0)
    {
      auto& reg = arg2[6 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x1100);
      reg = x1100;
    }
  }
  if (x6 != 0) {
    // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":32:0))
    auto x1101 = arg2[0 * steps + ((cycle - 1) & mask)];
    assert(x1101 != Fp::invalid());
    // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":54:0))
    auto x1102 = arg2[1 * steps + ((cycle - 1) & mask)];
    assert(x1102 != Fp::invalid());
    // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":54:0))
    auto x1103 = arg2[2 * steps + ((cycle - 1) & mask)];
    assert(x1103 != Fp::invalid());
    // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":54:0))
    auto x1104 = arg2[3 * steps + ((cycle - 1) & mask)];
    assert(x1104 != Fp::invalid());
    // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":54:0))
    auto x1105 = arg2[4 * steps + ((cycle - 1) & mask)];
    assert(x1105 != Fp::invalid());
    // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":54:0))
    auto x1106 = arg2[5 * steps + ((cycle - 1) & mask)];
    assert(x1106 != Fp::invalid());
    // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":54:0))
    auto x1107 = arg2[6 * steps + ((cycle - 1) & mask)];
    assert(x1107 != Fp::invalid());
    // loc("zirgen/circuit/recursion/wom.cpp":41:0)
    {
      auto& reg = arg2[0 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x1101);
      reg = x1101;
    }
    // loc("zirgen/circuit/recursion/wom.cpp":43:0)
    {
      auto& reg = arg2[1 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x1102);
      reg = x1102;
    }
    // loc("zirgen/circuit/recursion/wom.cpp":43:0)
    {
      auto& reg = arg2[2 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x1103);
      reg = x1103;
    }
    // loc("zirgen/circuit/recursion/wom.cpp":43:0)
    {
      auto& reg = arg2[3 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x1104);
      reg = x1104;
    }
    // loc("zirgen/circuit/recursion/wom.cpp":43:0)
    {
      auto& reg = arg2[4 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x1105);
      reg = x1105;
    }
    // loc("zirgen/circuit/recursion/wom.cpp":43:0)
    {
      auto& reg = arg2[5 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x1106);
      reg = x1106;
    }
    // loc("zirgen/circuit/recursion/wom.cpp":43:0)
    {
      auto& reg = arg2[6 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x1107);
      reg = x1107;
    }
  }
  if (x7 != 0) {
    {
      extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
      auto x1108 = extern_outs[0];
      auto x1109 = extern_outs[1];
      auto x1110 = extern_outs[2];
      auto x1111 = extern_outs[3];
      auto x1112 = extern_outs[4];
      auto x1113 = extern_outs[5];
      auto x1114 = extern_outs[6];
      // loc("zirgen/circuit/recursion/wom.cpp":41:0)
      {
        auto& reg = arg2[70 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1108);
        reg = x1108;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[71 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1109);
        reg = x1109;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[72 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1110);
        reg = x1110;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[73 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1111);
        reg = x1111;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[74 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1112);
        reg = x1112;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[75 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1113);
        reg = x1113;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[76 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1114);
        reg = x1114;
      }
      extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
      auto x1115 = extern_outs[0];
      auto x1116 = extern_outs[1];
      auto x1117 = extern_outs[2];
      auto x1118 = extern_outs[3];
      auto x1119 = extern_outs[4];
      auto x1120 = extern_outs[5];
      auto x1121 = extern_outs[6];
      // loc("zirgen/circuit/recursion/wom.cpp":41:0)
      {
        auto& reg = arg2[77 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1115);
        reg = x1115;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[78 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1116);
        reg = x1116;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[79 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1117);
        reg = x1117;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[80 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1118);
        reg = x1118;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[81 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1119);
        reg = x1119;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[82 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1120);
        reg = x1120;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[83 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1121);
        reg = x1121;
      }
      extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
      auto x1122 = extern_outs[0];
      auto x1123 = extern_outs[1];
      auto x1124 = extern_outs[2];
      auto x1125 = extern_outs[3];
      auto x1126 = extern_outs[4];
      auto x1127 = extern_outs[5];
      auto x1128 = extern_outs[6];
      // loc("zirgen/circuit/recursion/wom.cpp":41:0)
      {
        auto& reg = arg2[84 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1122);
        reg = x1122;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[85 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1123);
        reg = x1123;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[86 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1124);
        reg = x1124;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[87 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1125);
        reg = x1125;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[88 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1126);
        reg = x1126;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[89 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1127);
        reg = x1127;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[90 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1128);
        reg = x1128;
      }
      extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
      auto x1129 = extern_outs[0];
      auto x1130 = extern_outs[1];
      auto x1131 = extern_outs[2];
      auto x1132 = extern_outs[3];
      auto x1133 = extern_outs[4];
      auto x1134 = extern_outs[5];
      auto x1135 = extern_outs[6];
      // loc("zirgen/circuit/recursion/wom.cpp":41:0)
      {
        auto& reg = arg2[91 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1129);
        reg = x1129;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[92 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1130);
        reg = x1130;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[93 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1131);
        reg = x1131;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[94 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1132);
        reg = x1132;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[95 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1133);
        reg = x1133;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[96 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1134);
        reg = x1134;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[97 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1135);
        reg = x1135;
      }
      extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
      auto x1136 = extern_outs[0];
      auto x1137 = extern_outs[1];
      auto x1138 = extern_outs[2];
      auto x1139 = extern_outs[3];
      auto x1140 = extern_outs[4];
      auto x1141 = extern_outs[5];
      auto x1142 = extern_outs[6];
      // loc("zirgen/circuit/recursion/wom.cpp":41:0)
      {
        auto& reg = arg2[98 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1136);
        reg = x1136;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[99 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1137);
        reg = x1137;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[100 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1138);
        reg = x1138;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[101 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1139);
        reg = x1139;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[102 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1140);
        reg = x1140;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[103 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1141);
        reg = x1141;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[104 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1142);
        reg = x1142;
      }
      extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
      auto x1143 = extern_outs[0];
      auto x1144 = extern_outs[1];
      auto x1145 = extern_outs[2];
      auto x1146 = extern_outs[3];
      auto x1147 = extern_outs[4];
      auto x1148 = extern_outs[5];
      auto x1149 = extern_outs[6];
      // loc("zirgen/circuit/recursion/wom.cpp":41:0)
      {
        auto& reg = arg2[105 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1143);
        reg = x1143;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[106 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1144);
        reg = x1144;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[107 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1145);
        reg = x1145;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[108 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1146);
        reg = x1146;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[109 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1147);
        reg = x1147;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[110 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1148);
        reg = x1148;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[111 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1149);
        reg = x1149;
      }
      extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
      auto x1150 = extern_outs[0];
      auto x1151 = extern_outs[1];
      auto x1152 = extern_outs[2];
      auto x1153 = extern_outs[3];
      auto x1154 = extern_outs[4];
      auto x1155 = extern_outs[5];
      auto x1156 = extern_outs[6];
      // loc("zirgen/circuit/recursion/wom.cpp":41:0)
      {
        auto& reg = arg2[112 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1150);
        reg = x1150;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[113 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1151);
        reg = x1151;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[114 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1152);
        reg = x1152;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[115 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1153);
        reg = x1153;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[116 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1154);
        reg = x1154;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[117 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1155);
        reg = x1155;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[118 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1156);
        reg = x1156;
      }
      extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
      auto x1157 = extern_outs[0];
      auto x1158 = extern_outs[1];
      auto x1159 = extern_outs[2];
      auto x1160 = extern_outs[3];
      auto x1161 = extern_outs[4];
      auto x1162 = extern_outs[5];
      auto x1163 = extern_outs[6];
      // loc("zirgen/circuit/recursion/wom.cpp":41:0)
      {
        auto& reg = arg2[119 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1157);
        reg = x1157;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[120 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1158);
        reg = x1158;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[121 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1159);
        reg = x1159;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[122 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1160);
        reg = x1160;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[123 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1161);
        reg = x1161;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[124 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1162);
        reg = x1162;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[125 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1163);
        reg = x1163;
      }
      extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
      auto x1164 = extern_outs[0];
      auto x1165 = extern_outs[1];
      auto x1166 = extern_outs[2];
      auto x1167 = extern_outs[3];
      auto x1168 = extern_outs[4];
      auto x1169 = extern_outs[5];
      auto x1170 = extern_outs[6];
      // loc("zirgen/circuit/recursion/wom.cpp":41:0)
      {
        auto& reg = arg2[0 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1164);
        reg = x1164;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[1 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1165);
        reg = x1165;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[2 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1166);
        reg = x1166;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[3 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1167);
        reg = x1167;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[4 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1168);
        reg = x1168;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[5 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1169);
        reg = x1169;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[6 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1170);
        reg = x1170;
      }
    }
    // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
    auto x1171 = arg2[70 * steps + ((cycle - 0) & mask)];
    assert(x1171 != Fp::invalid());
    // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":71:0))
    auto x1172 = arg2[0 * steps + ((cycle - 1) & mask)];
    assert(x1172 != Fp::invalid());
    // loc("zirgen/circuit/recursion/wom.cpp":72:0)
    auto x1173 = x1171 - x1172;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x1174 = x0 - x1173;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x1175 = x1173 * x1174;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    assert(x1175 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x1174 != 0) {
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1176 = arg2[71 * steps + ((cycle - 0) & mask)];
      assert(x1176 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1177 = arg2[1 * steps + ((cycle - 1) & mask)];
      assert(x1177 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1178 = x1177 - x1176;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1178 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1179 = arg2[72 * steps + ((cycle - 0) & mask)];
      assert(x1179 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1180 = arg2[2 * steps + ((cycle - 1) & mask)];
      assert(x1180 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1181 = x1180 - x1179;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1181 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1182 = arg2[73 * steps + ((cycle - 0) & mask)];
      assert(x1182 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1183 = arg2[3 * steps + ((cycle - 1) & mask)];
      assert(x1183 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1184 = x1183 - x1182;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1184 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1185 = arg2[74 * steps + ((cycle - 0) & mask)];
      assert(x1185 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1186 = arg2[4 * steps + ((cycle - 1) & mask)];
      assert(x1186 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1187 = x1186 - x1185;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1187 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1188 = arg2[75 * steps + ((cycle - 0) & mask)];
      assert(x1188 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1189 = arg2[5 * steps + ((cycle - 1) & mask)];
      assert(x1189 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1190 = x1189 - x1188;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1190 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1191 = arg2[76 * steps + ((cycle - 0) & mask)];
      assert(x1191 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1192 = arg2[6 * steps + ((cycle - 1) & mask)];
      assert(x1192 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1193 = x1192 - x1191;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1193 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
    auto x1194 = arg2[77 * steps + ((cycle - 0) & mask)];
    assert(x1194 != Fp::invalid());
    // loc("zirgen/circuit/recursion/wom.cpp":72:0)
    auto x1195 = x1194 - x1171;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x1196 = x0 - x1195;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x1197 = x1195 * x1196;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    assert(x1197 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x1196 != 0) {
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1198 = arg2[71 * steps + ((cycle - 0) & mask)];
      assert(x1198 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1199 = arg2[78 * steps + ((cycle - 0) & mask)];
      assert(x1199 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1200 = x1198 - x1199;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1200 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1201 = arg2[72 * steps + ((cycle - 0) & mask)];
      assert(x1201 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1202 = arg2[79 * steps + ((cycle - 0) & mask)];
      assert(x1202 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1203 = x1201 - x1202;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1203 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1204 = arg2[73 * steps + ((cycle - 0) & mask)];
      assert(x1204 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1205 = arg2[80 * steps + ((cycle - 0) & mask)];
      assert(x1205 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1206 = x1204 - x1205;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1206 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1207 = arg2[74 * steps + ((cycle - 0) & mask)];
      assert(x1207 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1208 = arg2[81 * steps + ((cycle - 0) & mask)];
      assert(x1208 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1209 = x1207 - x1208;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1209 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1210 = arg2[75 * steps + ((cycle - 0) & mask)];
      assert(x1210 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1211 = arg2[82 * steps + ((cycle - 0) & mask)];
      assert(x1211 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1212 = x1210 - x1211;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1212 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1213 = arg2[76 * steps + ((cycle - 0) & mask)];
      assert(x1213 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1214 = arg2[83 * steps + ((cycle - 0) & mask)];
      assert(x1214 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1215 = x1213 - x1214;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1215 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
    auto x1216 = arg2[84 * steps + ((cycle - 0) & mask)];
    assert(x1216 != Fp::invalid());
    // loc("zirgen/circuit/recursion/wom.cpp":72:0)
    auto x1217 = x1216 - x1194;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x1218 = x0 - x1217;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x1219 = x1217 * x1218;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    assert(x1219 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x1218 != 0) {
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1220 = arg2[78 * steps + ((cycle - 0) & mask)];
      assert(x1220 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1221 = arg2[85 * steps + ((cycle - 0) & mask)];
      assert(x1221 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1222 = x1220 - x1221;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1222 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1223 = arg2[79 * steps + ((cycle - 0) & mask)];
      assert(x1223 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1224 = arg2[86 * steps + ((cycle - 0) & mask)];
      assert(x1224 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1225 = x1223 - x1224;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1225 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1226 = arg2[80 * steps + ((cycle - 0) & mask)];
      assert(x1226 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1227 = arg2[87 * steps + ((cycle - 0) & mask)];
      assert(x1227 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1228 = x1226 - x1227;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1228 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1229 = arg2[81 * steps + ((cycle - 0) & mask)];
      assert(x1229 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1230 = arg2[88 * steps + ((cycle - 0) & mask)];
      assert(x1230 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1231 = x1229 - x1230;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1231 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1232 = arg2[82 * steps + ((cycle - 0) & mask)];
      assert(x1232 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1233 = arg2[89 * steps + ((cycle - 0) & mask)];
      assert(x1233 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1234 = x1232 - x1233;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1234 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1235 = arg2[83 * steps + ((cycle - 0) & mask)];
      assert(x1235 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1236 = arg2[90 * steps + ((cycle - 0) & mask)];
      assert(x1236 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1237 = x1235 - x1236;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1237 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
    auto x1238 = arg2[91 * steps + ((cycle - 0) & mask)];
    assert(x1238 != Fp::invalid());
    // loc("zirgen/circuit/recursion/wom.cpp":72:0)
    auto x1239 = x1238 - x1216;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x1240 = x0 - x1239;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x1241 = x1239 * x1240;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    assert(x1241 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x1240 != 0) {
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1242 = arg2[85 * steps + ((cycle - 0) & mask)];
      assert(x1242 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1243 = arg2[92 * steps + ((cycle - 0) & mask)];
      assert(x1243 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1244 = x1242 - x1243;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1244 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1245 = arg2[86 * steps + ((cycle - 0) & mask)];
      assert(x1245 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1246 = arg2[93 * steps + ((cycle - 0) & mask)];
      assert(x1246 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1247 = x1245 - x1246;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1247 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1248 = arg2[87 * steps + ((cycle - 0) & mask)];
      assert(x1248 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1249 = arg2[94 * steps + ((cycle - 0) & mask)];
      assert(x1249 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1250 = x1248 - x1249;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1250 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1251 = arg2[88 * steps + ((cycle - 0) & mask)];
      assert(x1251 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1252 = arg2[95 * steps + ((cycle - 0) & mask)];
      assert(x1252 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1253 = x1251 - x1252;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1253 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1254 = arg2[89 * steps + ((cycle - 0) & mask)];
      assert(x1254 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1255 = arg2[96 * steps + ((cycle - 0) & mask)];
      assert(x1255 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1256 = x1254 - x1255;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1256 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1257 = arg2[90 * steps + ((cycle - 0) & mask)];
      assert(x1257 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1258 = arg2[97 * steps + ((cycle - 0) & mask)];
      assert(x1258 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1259 = x1257 - x1258;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1259 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
    auto x1260 = arg2[98 * steps + ((cycle - 0) & mask)];
    assert(x1260 != Fp::invalid());
    // loc("zirgen/circuit/recursion/wom.cpp":72:0)
    auto x1261 = x1260 - x1238;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x1262 = x0 - x1261;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x1263 = x1261 * x1262;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    assert(x1263 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x1262 != 0) {
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1264 = arg2[92 * steps + ((cycle - 0) & mask)];
      assert(x1264 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1265 = arg2[99 * steps + ((cycle - 0) & mask)];
      assert(x1265 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1266 = x1264 - x1265;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1266 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1267 = arg2[93 * steps + ((cycle - 0) & mask)];
      assert(x1267 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1268 = arg2[100 * steps + ((cycle - 0) & mask)];
      assert(x1268 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1269 = x1267 - x1268;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1269 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1270 = arg2[94 * steps + ((cycle - 0) & mask)];
      assert(x1270 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1271 = arg2[101 * steps + ((cycle - 0) & mask)];
      assert(x1271 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1272 = x1270 - x1271;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1272 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1273 = arg2[95 * steps + ((cycle - 0) & mask)];
      assert(x1273 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1274 = arg2[102 * steps + ((cycle - 0) & mask)];
      assert(x1274 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1275 = x1273 - x1274;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1275 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1276 = arg2[96 * steps + ((cycle - 0) & mask)];
      assert(x1276 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1277 = arg2[103 * steps + ((cycle - 0) & mask)];
      assert(x1277 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1278 = x1276 - x1277;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1278 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1279 = arg2[97 * steps + ((cycle - 0) & mask)];
      assert(x1279 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1280 = arg2[104 * steps + ((cycle - 0) & mask)];
      assert(x1280 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1281 = x1279 - x1280;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1281 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
    auto x1282 = arg2[105 * steps + ((cycle - 0) & mask)];
    assert(x1282 != Fp::invalid());
    // loc("zirgen/circuit/recursion/wom.cpp":72:0)
    auto x1283 = x1282 - x1260;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x1284 = x0 - x1283;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x1285 = x1283 * x1284;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    assert(x1285 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x1284 != 0) {
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1286 = arg2[99 * steps + ((cycle - 0) & mask)];
      assert(x1286 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1287 = arg2[106 * steps + ((cycle - 0) & mask)];
      assert(x1287 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1288 = x1286 - x1287;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1288 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1289 = arg2[100 * steps + ((cycle - 0) & mask)];
      assert(x1289 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1290 = arg2[107 * steps + ((cycle - 0) & mask)];
      assert(x1290 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1291 = x1289 - x1290;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1291 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1292 = arg2[101 * steps + ((cycle - 0) & mask)];
      assert(x1292 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1293 = arg2[108 * steps + ((cycle - 0) & mask)];
      assert(x1293 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1294 = x1292 - x1293;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1294 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1295 = arg2[102 * steps + ((cycle - 0) & mask)];
      assert(x1295 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1296 = arg2[109 * steps + ((cycle - 0) & mask)];
      assert(x1296 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1297 = x1295 - x1296;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1297 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1298 = arg2[103 * steps + ((cycle - 0) & mask)];
      assert(x1298 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1299 = arg2[110 * steps + ((cycle - 0) & mask)];
      assert(x1299 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1300 = x1298 - x1299;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1300 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1301 = arg2[104 * steps + ((cycle - 0) & mask)];
      assert(x1301 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1302 = arg2[111 * steps + ((cycle - 0) & mask)];
      assert(x1302 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1303 = x1301 - x1302;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1303 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
    auto x1304 = arg2[112 * steps + ((cycle - 0) & mask)];
    assert(x1304 != Fp::invalid());
    // loc("zirgen/circuit/recursion/wom.cpp":72:0)
    auto x1305 = x1304 - x1282;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x1306 = x0 - x1305;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x1307 = x1305 * x1306;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    assert(x1307 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x1306 != 0) {
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1308 = arg2[106 * steps + ((cycle - 0) & mask)];
      assert(x1308 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1309 = arg2[113 * steps + ((cycle - 0) & mask)];
      assert(x1309 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1310 = x1308 - x1309;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1310 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1311 = arg2[107 * steps + ((cycle - 0) & mask)];
      assert(x1311 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1312 = arg2[114 * steps + ((cycle - 0) & mask)];
      assert(x1312 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1313 = x1311 - x1312;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1313 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1314 = arg2[108 * steps + ((cycle - 0) & mask)];
      assert(x1314 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1315 = arg2[115 * steps + ((cycle - 0) & mask)];
      assert(x1315 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1316 = x1314 - x1315;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1316 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1317 = arg2[109 * steps + ((cycle - 0) & mask)];
      assert(x1317 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1318 = arg2[116 * steps + ((cycle - 0) & mask)];
      assert(x1318 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1319 = x1317 - x1318;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1319 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1320 = arg2[110 * steps + ((cycle - 0) & mask)];
      assert(x1320 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1321 = arg2[117 * steps + ((cycle - 0) & mask)];
      assert(x1321 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1322 = x1320 - x1321;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1322 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1323 = arg2[111 * steps + ((cycle - 0) & mask)];
      assert(x1323 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1324 = arg2[118 * steps + ((cycle - 0) & mask)];
      assert(x1324 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1325 = x1323 - x1324;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1325 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
    auto x1326 = arg2[119 * steps + ((cycle - 0) & mask)];
    assert(x1326 != Fp::invalid());
    // loc("zirgen/circuit/recursion/wom.cpp":72:0)
    auto x1327 = x1326 - x1304;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x1328 = x0 - x1327;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x1329 = x1327 * x1328;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    assert(x1329 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x1328 != 0) {
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1330 = arg2[113 * steps + ((cycle - 0) & mask)];
      assert(x1330 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1331 = arg2[120 * steps + ((cycle - 0) & mask)];
      assert(x1331 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1332 = x1330 - x1331;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1332 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1333 = arg2[114 * steps + ((cycle - 0) & mask)];
      assert(x1333 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1334 = arg2[121 * steps + ((cycle - 0) & mask)];
      assert(x1334 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1335 = x1333 - x1334;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1335 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1336 = arg2[115 * steps + ((cycle - 0) & mask)];
      assert(x1336 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1337 = arg2[122 * steps + ((cycle - 0) & mask)];
      assert(x1337 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1338 = x1336 - x1337;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1338 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1339 = arg2[116 * steps + ((cycle - 0) & mask)];
      assert(x1339 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1340 = arg2[123 * steps + ((cycle - 0) & mask)];
      assert(x1340 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1341 = x1339 - x1340;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1341 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1342 = arg2[117 * steps + ((cycle - 0) & mask)];
      assert(x1342 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1343 = arg2[124 * steps + ((cycle - 0) & mask)];
      assert(x1343 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1344 = x1342 - x1343;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1344 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1345 = arg2[118 * steps + ((cycle - 0) & mask)];
      assert(x1345 != Fp::invalid());
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1346 = arg2[125 * steps + ((cycle - 0) & mask)];
      assert(x1346 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1347 = x1345 - x1346;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1347 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
    auto x1348 = arg2[0 * steps + ((cycle - 0) & mask)];
    assert(x1348 != Fp::invalid());
    // loc("zirgen/circuit/recursion/wom.cpp":72:0)
    auto x1349 = x1348 - x1326;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x1350 = x0 - x1349;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x1351 = x1349 * x1350;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    assert(x1351 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x1350 != 0) {
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1352 = arg2[120 * steps + ((cycle - 0) & mask)];
      assert(x1352 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1353 = arg2[1 * steps + ((cycle - 0) & mask)];
      assert(x1353 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1354 = x1352 - x1353;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1354 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1355 = arg2[121 * steps + ((cycle - 0) & mask)];
      assert(x1355 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1356 = arg2[2 * steps + ((cycle - 0) & mask)];
      assert(x1356 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1357 = x1355 - x1356;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1357 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1358 = arg2[122 * steps + ((cycle - 0) & mask)];
      assert(x1358 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1359 = arg2[3 * steps + ((cycle - 0) & mask)];
      assert(x1359 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1360 = x1358 - x1359;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1360 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1361 = arg2[123 * steps + ((cycle - 0) & mask)];
      assert(x1361 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1362 = arg2[4 * steps + ((cycle - 0) & mask)];
      assert(x1362 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1363 = x1361 - x1362;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1363 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1364 = arg2[124 * steps + ((cycle - 0) & mask)];
      assert(x1364 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1365 = arg2[5 * steps + ((cycle - 0) & mask)];
      assert(x1365 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1366 = x1364 - x1365;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1366 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1367 = arg2[125 * steps + ((cycle - 0) & mask)];
      assert(x1367 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1368 = arg2[6 * steps + ((cycle - 0) & mask)];
      assert(x1368 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1369 = x1367 - x1368;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1369 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
  }
  if (x8 != 0) {
    {
      extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
      auto x1370 = extern_outs[0];
      auto x1371 = extern_outs[1];
      auto x1372 = extern_outs[2];
      auto x1373 = extern_outs[3];
      auto x1374 = extern_outs[4];
      auto x1375 = extern_outs[5];
      auto x1376 = extern_outs[6];
      // loc("zirgen/circuit/recursion/wom.cpp":41:0)
      {
        auto& reg = arg2[21 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1370);
        reg = x1370;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[22 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1371);
        reg = x1371;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[23 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1372);
        reg = x1372;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[24 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1373);
        reg = x1373;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[25 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1374);
        reg = x1374;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[26 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1375);
        reg = x1375;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[27 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1376);
        reg = x1376;
      }
      extern_plonkRead_wom(ctx, cycle, "wom", extern_args, extern_outs);
      auto x1377 = extern_outs[0];
      auto x1378 = extern_outs[1];
      auto x1379 = extern_outs[2];
      auto x1380 = extern_outs[3];
      auto x1381 = extern_outs[4];
      auto x1382 = extern_outs[5];
      auto x1383 = extern_outs[6];
      // loc("zirgen/circuit/recursion/wom.cpp":41:0)
      {
        auto& reg = arg2[0 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1377);
        reg = x1377;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[1 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1378);
        reg = x1378;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[2 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1379);
        reg = x1379;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[3 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1380);
        reg = x1380;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[4 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1381);
        reg = x1381;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[5 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1382);
        reg = x1382;
      }
      // loc("zirgen/circuit/recursion/wom.cpp":43:0)
      {
        auto& reg = arg2[6 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1383);
        reg = x1383;
      }
    }
    // loc("top(recursion::Top)/mux(Mux)/checked_bytes(recursion::CheckedBytes)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
    auto x1384 = arg2[21 * steps + ((cycle - 0) & mask)];
    assert(x1384 != Fp::invalid());
    // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)"("zirgen/circuit/recursion/wom.cpp":71:0))
    auto x1385 = arg2[0 * steps + ((cycle - 1) & mask)];
    assert(x1385 != Fp::invalid());
    // loc("zirgen/circuit/recursion/wom.cpp":72:0)
    auto x1386 = x1384 - x1385;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x1387 = x0 - x1386;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x1388 = x1386 * x1387;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    assert(x1388 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x1387 != 0) {
      // loc("top(recursion::Top)/mux(Mux)/checked_bytes(recursion::CheckedBytes)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1389 = arg2[22 * steps + ((cycle - 0) & mask)];
      assert(x1389 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1390 = arg2[1 * steps + ((cycle - 1) & mask)];
      assert(x1390 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1391 = x1390 - x1389;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1391 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/checked_bytes(recursion::CheckedBytes)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1392 = arg2[23 * steps + ((cycle - 0) & mask)];
      assert(x1392 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1393 = arg2[2 * steps + ((cycle - 1) & mask)];
      assert(x1393 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1394 = x1393 - x1392;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1394 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/checked_bytes(recursion::CheckedBytes)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1395 = arg2[24 * steps + ((cycle - 0) & mask)];
      assert(x1395 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1396 = arg2[3 * steps + ((cycle - 1) & mask)];
      assert(x1396 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1397 = x1396 - x1395;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1397 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/checked_bytes(recursion::CheckedBytes)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1398 = arg2[25 * steps + ((cycle - 0) & mask)];
      assert(x1398 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1399 = arg2[4 * steps + ((cycle - 1) & mask)];
      assert(x1399 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1400 = x1399 - x1398;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1400 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/checked_bytes(recursion::CheckedBytes)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1401 = arg2[26 * steps + ((cycle - 0) & mask)];
      assert(x1401 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1402 = arg2[5 * steps + ((cycle - 1) & mask)];
      assert(x1402 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1403 = x1402 - x1401;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1403 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/checked_bytes(recursion::CheckedBytes)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1404 = arg2[27 * steps + ((cycle - 0) & mask)];
      assert(x1404 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1405 = arg2[6 * steps + ((cycle - 1) & mask)];
      assert(x1405 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1406 = x1405 - x1404;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1406 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)"("./zirgen/compiler/edsl/edsl.h":129:0))
    auto x1407 = arg2[0 * steps + ((cycle - 0) & mask)];
    assert(x1407 != Fp::invalid());
    // loc("zirgen/circuit/recursion/wom.cpp":72:0)
    auto x1408 = x1407 - x1384;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x1409 = x0 - x1408;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    auto x1410 = x1408 * x1409;
    // loc("zirgen/circuit/recursion/wom.cpp":74:0)
    assert(x1410 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x1409 != 0) {
      // loc("top(recursion::Top)/mux(Mux)/checked_bytes(recursion::CheckedBytes)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1411 = arg2[22 * steps + ((cycle - 0) & mask)];
      assert(x1411 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1412 = arg2[1 * steps + ((cycle - 0) & mask)];
      assert(x1412 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1413 = x1411 - x1412;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1413 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/checked_bytes(recursion::CheckedBytes)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1414 = arg2[23 * steps + ((cycle - 0) & mask)];
      assert(x1414 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1415 = arg2[2 * steps + ((cycle - 0) & mask)];
      assert(x1415 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1416 = x1414 - x1415;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1416 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/checked_bytes(recursion::CheckedBytes)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1417 = arg2[24 * steps + ((cycle - 0) & mask)];
      assert(x1417 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1418 = arg2[3 * steps + ((cycle - 0) & mask)];
      assert(x1418 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1419 = x1417 - x1418;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1419 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/checked_bytes(recursion::CheckedBytes)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1420 = arg2[25 * steps + ((cycle - 0) & mask)];
      assert(x1420 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1421 = arg2[4 * steps + ((cycle - 0) & mask)];
      assert(x1421 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1422 = x1420 - x1421;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1422 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/checked_bytes(recursion::CheckedBytes)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1423 = arg2[26 * steps + ((cycle - 0) & mask)];
      assert(x1423 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1424 = arg2[5 * steps + ((cycle - 0) & mask)];
      assert(x1424 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1425 = x1423 - x1424;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1425 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // loc("top(recursion::Top)/mux(Mux)/checked_bytes(recursion::CheckedBytes)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1426 = arg2[27 * steps + ((cycle - 0) & mask)];
      assert(x1426 != Fp::invalid());
      // loc("top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)"("zirgen/circuit/recursion/wom.cpp":78:0))
      auto x1427 = arg2[6 * steps + ((cycle - 0) & mask)];
      assert(x1427 != Fp::invalid());
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      auto x1428 = x1426 - x1427;
      // loc("zirgen/circuit/recursion/wom.cpp":78:0)
      assert(x1428 == 0 && "eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
  }
}
