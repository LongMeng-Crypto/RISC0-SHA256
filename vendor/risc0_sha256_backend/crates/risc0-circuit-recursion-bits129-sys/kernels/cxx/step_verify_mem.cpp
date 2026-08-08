
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

#include "extern.h"
#include "ffi.h"
#include "fp.h"

#include <array>
#include <cassert>
#include <stdexcept>

// clang-format off
namespace risc0::circuit::recursion_bits129 {

#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-variable"
#elif defined(__GNUC__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-variable"
#endif

Fp step_verify_mem(void* ctx, size_t steps, size_t cycle, Fp** args) {
  size_t mask = steps - 1;
  // loc(unknown)
  constexpr Fp x0(1);
  // loc(unknown)
  constexpr Fp x1(0);
  // top(recursion::Top)/code(recursion::Code)/select(OneHot)/micro_ops(Reg)(components/mux.h:59)
  auto x2 = args[0][1 * steps + ((cycle - 0) & mask)];
  assert(x2 != Fp::invalid());
  // top(recursion::Top)/code(recursion::Code)/select(OneHot)/macro_ops(Reg)(components/mux.h:59)
  auto x3 = args[0][2 * steps + ((cycle - 0) & mask)];
  assert(x3 != Fp::invalid());
  // top(recursion::Top)/code(recursion::Code)/select(OneHot)/poseidon2_load(Reg)(components/mux.h:59)
  auto x4 = args[0][3 * steps + ((cycle - 0) & mask)];
  assert(x4 != Fp::invalid());
  // top(recursion::Top)/code(recursion::Code)/select(OneHot)/poseidon2_full(Reg)(components/mux.h:59)
  auto x5 = args[0][4 * steps + ((cycle - 0) & mask)];
  assert(x5 != Fp::invalid());
  // top(recursion::Top)/code(recursion::Code)/select(OneHot)/poseidon2_partial(Reg)(components/mux.h:59)
  auto x6 = args[0][5 * steps + ((cycle - 0) & mask)];
  assert(x6 != Fp::invalid());
  // top(recursion::Top)/code(recursion::Code)/select(OneHot)/poseidon2_store(Reg)(components/mux.h:59)
  auto x7 = args[0][6 * steps + ((cycle - 0) & mask)];
  assert(x7 != Fp::invalid());
  // top(recursion::Top)/code(recursion::Code)/select(OneHot)/checked_bytes(Reg)(components/mux.h:59)
  auto x8 = args[0][7 * steps + ((cycle - 0) & mask)];
  assert(x8 != Fp::invalid());
  if (x2 != 0) {
    {
      auto [x9, x10, x11, x12, x13, x14, x15] = extern_plonkRead_wom(ctx, cycle, "wom", {});
      // zirgen/circuit/recursion/wom.cpp:41
      {
        auto& reg = args[2][70 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x9);
        reg = x9;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][71 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x10);
        reg = x10;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][72 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x11);
        reg = x11;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][73 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x12);
        reg = x12;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][74 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x13);
        reg = x13;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][75 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x14);
        reg = x14;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][76 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x15);
        reg = x15;
      }
      auto [x16, x17, x18, x19, x20, x21, x22] = extern_plonkRead_wom(ctx, cycle, "wom", {});
      // zirgen/circuit/recursion/wom.cpp:41
      {
        auto& reg = args[2][77 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x16);
        reg = x16;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][78 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x17);
        reg = x17;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][79 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x18);
        reg = x18;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][80 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x19);
        reg = x19;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][81 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x20);
        reg = x20;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][82 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x21);
        reg = x21;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][83 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x22);
        reg = x22;
      }
      auto [x23, x24, x25, x26, x27, x28, x29] = extern_plonkRead_wom(ctx, cycle, "wom", {});
      // zirgen/circuit/recursion/wom.cpp:41
      {
        auto& reg = args[2][84 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x23);
        reg = x23;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][85 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x24);
        reg = x24;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][86 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x25);
        reg = x25;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][87 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x26);
        reg = x26;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][88 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x27);
        reg = x27;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][89 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x28);
        reg = x28;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][90 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x29);
        reg = x29;
      }
      auto [x30, x31, x32, x33, x34, x35, x36] = extern_plonkRead_wom(ctx, cycle, "wom", {});
      // zirgen/circuit/recursion/wom.cpp:41
      {
        auto& reg = args[2][91 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x30);
        reg = x30;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][92 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x31);
        reg = x31;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][93 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x32);
        reg = x32;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][94 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x33);
        reg = x33;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][95 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x34);
        reg = x34;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][96 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x35);
        reg = x35;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][97 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x36);
        reg = x36;
      }
      auto [x37, x38, x39, x40, x41, x42, x43] = extern_plonkRead_wom(ctx, cycle, "wom", {});
      // zirgen/circuit/recursion/wom.cpp:41
      {
        auto& reg = args[2][98 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x37);
        reg = x37;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][99 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x38);
        reg = x38;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][100 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x39);
        reg = x39;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][101 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x40);
        reg = x40;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][102 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x41);
        reg = x41;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][103 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x42);
        reg = x42;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][104 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x43);
        reg = x43;
      }
      auto [x44, x45, x46, x47, x48, x49, x50] = extern_plonkRead_wom(ctx, cycle, "wom", {});
      // zirgen/circuit/recursion/wom.cpp:41
      {
        auto& reg = args[2][105 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x44);
        reg = x44;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][106 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x45);
        reg = x45;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][107 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x46);
        reg = x46;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][108 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x47);
        reg = x47;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][109 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x48);
        reg = x48;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][110 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x49);
        reg = x49;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][111 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x50);
        reg = x50;
      }
      auto [x51, x52, x53, x54, x55, x56, x57] = extern_plonkRead_wom(ctx, cycle, "wom", {});
      // zirgen/circuit/recursion/wom.cpp:41
      {
        auto& reg = args[2][112 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x51);
        reg = x51;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][113 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x52);
        reg = x52;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][114 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x53);
        reg = x53;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][115 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x54);
        reg = x54;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][116 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x55);
        reg = x55;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][117 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x56);
        reg = x56;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][118 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x57);
        reg = x57;
      }
      auto [x58, x59, x60, x61, x62, x63, x64] = extern_plonkRead_wom(ctx, cycle, "wom", {});
      // zirgen/circuit/recursion/wom.cpp:41
      {
        auto& reg = args[2][119 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x58);
        reg = x58;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][120 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x59);
        reg = x59;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][121 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x60);
        reg = x60;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][122 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x61);
        reg = x61;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][123 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x62);
        reg = x62;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][124 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x63);
        reg = x63;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][125 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x64);
        reg = x64;
      }
      auto [x65, x66, x67, x68, x69, x70, x71] = extern_plonkRead_wom(ctx, cycle, "wom", {});
      // zirgen/circuit/recursion/wom.cpp:41
      {
        auto& reg = args[2][0 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x65);
        reg = x65;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][1 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x66);
        reg = x66;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][2 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x67);
        reg = x67;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][3 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x68);
        reg = x68;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][4 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x69);
        reg = x69;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][5 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x70);
        reg = x70;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][6 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x71);
        reg = x71;
      }
    }
    // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)(compiler/edsl/edsl.h:129)
    auto x72 = args[2][70 * steps + ((cycle - 0) & mask)];
    assert(x72 != Fp::invalid());
    // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)(zirgen/circuit/recursion/wom.cpp:71)
    auto x73 = args[2][0 * steps + ((cycle - 1) & mask)];
    assert(x73 != Fp::invalid());
    // zirgen/circuit/recursion/wom.cpp:72
    auto x74 = x72 - x73;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x75 = x0 - x74;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x76 = x74 * x75;
    // zirgen/circuit/recursion/wom.cpp:74
    if (x76 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x75 != 0) {
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x77 = args[2][71 * steps + ((cycle - 0) & mask)];
      assert(x77 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x78 = args[2][1 * steps + ((cycle - 1) & mask)];
      assert(x78 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x79 = x78 - x77;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x79 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x80 = args[2][72 * steps + ((cycle - 0) & mask)];
      assert(x80 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x81 = args[2][2 * steps + ((cycle - 1) & mask)];
      assert(x81 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x82 = x81 - x80;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x82 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x83 = args[2][73 * steps + ((cycle - 0) & mask)];
      assert(x83 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x84 = args[2][3 * steps + ((cycle - 1) & mask)];
      assert(x84 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x85 = x84 - x83;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x85 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x86 = args[2][74 * steps + ((cycle - 0) & mask)];
      assert(x86 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x87 = args[2][4 * steps + ((cycle - 1) & mask)];
      assert(x87 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x88 = x87 - x86;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x88 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x89 = args[2][75 * steps + ((cycle - 0) & mask)];
      assert(x89 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x90 = args[2][5 * steps + ((cycle - 1) & mask)];
      assert(x90 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x91 = x90 - x89;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x91 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x92 = args[2][76 * steps + ((cycle - 0) & mask)];
      assert(x92 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x93 = args[2][6 * steps + ((cycle - 1) & mask)];
      assert(x93 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x94 = x93 - x92;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x94 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)(compiler/edsl/edsl.h:129)
    auto x95 = args[2][77 * steps + ((cycle - 0) & mask)];
    assert(x95 != Fp::invalid());
    // zirgen/circuit/recursion/wom.cpp:72
    auto x96 = x95 - x72;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x97 = x0 - x96;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x98 = x96 * x97;
    // zirgen/circuit/recursion/wom.cpp:74
    if (x98 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x97 != 0) {
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x99 = args[2][71 * steps + ((cycle - 0) & mask)];
      assert(x99 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x100 = args[2][78 * steps + ((cycle - 0) & mask)];
      assert(x100 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x101 = x99 - x100;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x101 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x102 = args[2][72 * steps + ((cycle - 0) & mask)];
      assert(x102 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x103 = args[2][79 * steps + ((cycle - 0) & mask)];
      assert(x103 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x104 = x102 - x103;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x104 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x105 = args[2][73 * steps + ((cycle - 0) & mask)];
      assert(x105 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x106 = args[2][80 * steps + ((cycle - 0) & mask)];
      assert(x106 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x107 = x105 - x106;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x107 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x108 = args[2][74 * steps + ((cycle - 0) & mask)];
      assert(x108 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x109 = args[2][81 * steps + ((cycle - 0) & mask)];
      assert(x109 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x110 = x108 - x109;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x110 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x111 = args[2][75 * steps + ((cycle - 0) & mask)];
      assert(x111 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x112 = args[2][82 * steps + ((cycle - 0) & mask)];
      assert(x112 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x113 = x111 - x112;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x113 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x114 = args[2][76 * steps + ((cycle - 0) & mask)];
      assert(x114 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x115 = args[2][83 * steps + ((cycle - 0) & mask)];
      assert(x115 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x116 = x114 - x115;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x116 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)(compiler/edsl/edsl.h:129)
    auto x117 = args[2][84 * steps + ((cycle - 0) & mask)];
    assert(x117 != Fp::invalid());
    // zirgen/circuit/recursion/wom.cpp:72
    auto x118 = x117 - x95;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x119 = x0 - x118;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x120 = x118 * x119;
    // zirgen/circuit/recursion/wom.cpp:74
    if (x120 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x119 != 0) {
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x121 = args[2][78 * steps + ((cycle - 0) & mask)];
      assert(x121 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x122 = args[2][85 * steps + ((cycle - 0) & mask)];
      assert(x122 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x123 = x121 - x122;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x123 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x124 = args[2][79 * steps + ((cycle - 0) & mask)];
      assert(x124 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x125 = args[2][86 * steps + ((cycle - 0) & mask)];
      assert(x125 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x126 = x124 - x125;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x126 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x127 = args[2][80 * steps + ((cycle - 0) & mask)];
      assert(x127 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x128 = args[2][87 * steps + ((cycle - 0) & mask)];
      assert(x128 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x129 = x127 - x128;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x129 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x130 = args[2][81 * steps + ((cycle - 0) & mask)];
      assert(x130 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x131 = args[2][88 * steps + ((cycle - 0) & mask)];
      assert(x131 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x132 = x130 - x131;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x132 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x133 = args[2][82 * steps + ((cycle - 0) & mask)];
      assert(x133 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x134 = args[2][89 * steps + ((cycle - 0) & mask)];
      assert(x134 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x135 = x133 - x134;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x135 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x136 = args[2][83 * steps + ((cycle - 0) & mask)];
      assert(x136 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x137 = args[2][90 * steps + ((cycle - 0) & mask)];
      assert(x137 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x138 = x136 - x137;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x138 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)(compiler/edsl/edsl.h:129)
    auto x139 = args[2][91 * steps + ((cycle - 0) & mask)];
    assert(x139 != Fp::invalid());
    // zirgen/circuit/recursion/wom.cpp:72
    auto x140 = x139 - x117;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x141 = x0 - x140;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x142 = x140 * x141;
    // zirgen/circuit/recursion/wom.cpp:74
    if (x142 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x141 != 0) {
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x143 = args[2][85 * steps + ((cycle - 0) & mask)];
      assert(x143 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x144 = args[2][92 * steps + ((cycle - 0) & mask)];
      assert(x144 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x145 = x143 - x144;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x145 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x146 = args[2][86 * steps + ((cycle - 0) & mask)];
      assert(x146 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x147 = args[2][93 * steps + ((cycle - 0) & mask)];
      assert(x147 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x148 = x146 - x147;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x148 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x149 = args[2][87 * steps + ((cycle - 0) & mask)];
      assert(x149 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x150 = args[2][94 * steps + ((cycle - 0) & mask)];
      assert(x150 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x151 = x149 - x150;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x151 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x152 = args[2][88 * steps + ((cycle - 0) & mask)];
      assert(x152 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x153 = args[2][95 * steps + ((cycle - 0) & mask)];
      assert(x153 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x154 = x152 - x153;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x154 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x155 = args[2][89 * steps + ((cycle - 0) & mask)];
      assert(x155 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x156 = args[2][96 * steps + ((cycle - 0) & mask)];
      assert(x156 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x157 = x155 - x156;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x157 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x158 = args[2][90 * steps + ((cycle - 0) & mask)];
      assert(x158 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x159 = args[2][97 * steps + ((cycle - 0) & mask)];
      assert(x159 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x160 = x158 - x159;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x160 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)(compiler/edsl/edsl.h:129)
    auto x161 = args[2][98 * steps + ((cycle - 0) & mask)];
    assert(x161 != Fp::invalid());
    // zirgen/circuit/recursion/wom.cpp:72
    auto x162 = x161 - x139;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x163 = x0 - x162;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x164 = x162 * x163;
    // zirgen/circuit/recursion/wom.cpp:74
    if (x164 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x163 != 0) {
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x165 = args[2][92 * steps + ((cycle - 0) & mask)];
      assert(x165 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x166 = args[2][99 * steps + ((cycle - 0) & mask)];
      assert(x166 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x167 = x165 - x166;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x167 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x168 = args[2][93 * steps + ((cycle - 0) & mask)];
      assert(x168 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x169 = args[2][100 * steps + ((cycle - 0) & mask)];
      assert(x169 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x170 = x168 - x169;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x170 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x171 = args[2][94 * steps + ((cycle - 0) & mask)];
      assert(x171 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x172 = args[2][101 * steps + ((cycle - 0) & mask)];
      assert(x172 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x173 = x171 - x172;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x173 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x174 = args[2][95 * steps + ((cycle - 0) & mask)];
      assert(x174 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x175 = args[2][102 * steps + ((cycle - 0) & mask)];
      assert(x175 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x176 = x174 - x175;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x176 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x177 = args[2][96 * steps + ((cycle - 0) & mask)];
      assert(x177 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x178 = args[2][103 * steps + ((cycle - 0) & mask)];
      assert(x178 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x179 = x177 - x178;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x179 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x180 = args[2][97 * steps + ((cycle - 0) & mask)];
      assert(x180 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x181 = args[2][104 * steps + ((cycle - 0) & mask)];
      assert(x181 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x182 = x180 - x181;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x182 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)(compiler/edsl/edsl.h:129)
    auto x183 = args[2][105 * steps + ((cycle - 0) & mask)];
    assert(x183 != Fp::invalid());
    // zirgen/circuit/recursion/wom.cpp:72
    auto x184 = x183 - x161;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x185 = x0 - x184;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x186 = x184 * x185;
    // zirgen/circuit/recursion/wom.cpp:74
    if (x186 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x185 != 0) {
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x187 = args[2][99 * steps + ((cycle - 0) & mask)];
      assert(x187 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x188 = args[2][106 * steps + ((cycle - 0) & mask)];
      assert(x188 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x189 = x187 - x188;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x189 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x190 = args[2][100 * steps + ((cycle - 0) & mask)];
      assert(x190 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x191 = args[2][107 * steps + ((cycle - 0) & mask)];
      assert(x191 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x192 = x190 - x191;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x192 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x193 = args[2][101 * steps + ((cycle - 0) & mask)];
      assert(x193 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x194 = args[2][108 * steps + ((cycle - 0) & mask)];
      assert(x194 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x195 = x193 - x194;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x195 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x196 = args[2][102 * steps + ((cycle - 0) & mask)];
      assert(x196 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x197 = args[2][109 * steps + ((cycle - 0) & mask)];
      assert(x197 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x198 = x196 - x197;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x198 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x199 = args[2][103 * steps + ((cycle - 0) & mask)];
      assert(x199 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x200 = args[2][110 * steps + ((cycle - 0) & mask)];
      assert(x200 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x201 = x199 - x200;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x201 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x202 = args[2][104 * steps + ((cycle - 0) & mask)];
      assert(x202 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x203 = args[2][111 * steps + ((cycle - 0) & mask)];
      assert(x203 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x204 = x202 - x203;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x204 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)(compiler/edsl/edsl.h:129)
    auto x205 = args[2][112 * steps + ((cycle - 0) & mask)];
    assert(x205 != Fp::invalid());
    // zirgen/circuit/recursion/wom.cpp:72
    auto x206 = x205 - x183;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x207 = x0 - x206;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x208 = x206 * x207;
    // zirgen/circuit/recursion/wom.cpp:74
    if (x208 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x207 != 0) {
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x209 = args[2][106 * steps + ((cycle - 0) & mask)];
      assert(x209 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x210 = args[2][113 * steps + ((cycle - 0) & mask)];
      assert(x210 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x211 = x209 - x210;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x211 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x212 = args[2][107 * steps + ((cycle - 0) & mask)];
      assert(x212 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x213 = args[2][114 * steps + ((cycle - 0) & mask)];
      assert(x213 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x214 = x212 - x213;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x214 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x215 = args[2][108 * steps + ((cycle - 0) & mask)];
      assert(x215 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x216 = args[2][115 * steps + ((cycle - 0) & mask)];
      assert(x216 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x217 = x215 - x216;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x217 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x218 = args[2][109 * steps + ((cycle - 0) & mask)];
      assert(x218 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x219 = args[2][116 * steps + ((cycle - 0) & mask)];
      assert(x219 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x220 = x218 - x219;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x220 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x221 = args[2][110 * steps + ((cycle - 0) & mask)];
      assert(x221 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x222 = args[2][117 * steps + ((cycle - 0) & mask)];
      assert(x222 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x223 = x221 - x222;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x223 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x224 = args[2][111 * steps + ((cycle - 0) & mask)];
      assert(x224 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x225 = args[2][118 * steps + ((cycle - 0) & mask)];
      assert(x225 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x226 = x224 - x225;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x226 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)(compiler/edsl/edsl.h:129)
    auto x227 = args[2][119 * steps + ((cycle - 0) & mask)];
    assert(x227 != Fp::invalid());
    // zirgen/circuit/recursion/wom.cpp:72
    auto x228 = x227 - x205;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x229 = x0 - x228;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x230 = x228 * x229;
    // zirgen/circuit/recursion/wom.cpp:74
    if (x230 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x229 != 0) {
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x231 = args[2][113 * steps + ((cycle - 0) & mask)];
      assert(x231 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x232 = args[2][120 * steps + ((cycle - 0) & mask)];
      assert(x232 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x233 = x231 - x232;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x233 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x234 = args[2][114 * steps + ((cycle - 0) & mask)];
      assert(x234 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x235 = args[2][121 * steps + ((cycle - 0) & mask)];
      assert(x235 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x236 = x234 - x235;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x236 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x237 = args[2][115 * steps + ((cycle - 0) & mask)];
      assert(x237 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x238 = args[2][122 * steps + ((cycle - 0) & mask)];
      assert(x238 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x239 = x237 - x238;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x239 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x240 = args[2][116 * steps + ((cycle - 0) & mask)];
      assert(x240 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x241 = args[2][123 * steps + ((cycle - 0) & mask)];
      assert(x241 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x242 = x240 - x241;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x242 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x243 = args[2][117 * steps + ((cycle - 0) & mask)];
      assert(x243 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x244 = args[2][124 * steps + ((cycle - 0) & mask)];
      assert(x244 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x245 = x243 - x244;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x245 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x246 = args[2][118 * steps + ((cycle - 0) & mask)];
      assert(x246 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x247 = args[2][125 * steps + ((cycle - 0) & mask)];
      assert(x247 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x248 = x246 - x247;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x248 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)(compiler/edsl/edsl.h:129)
    auto x249 = args[2][0 * steps + ((cycle - 0) & mask)];
    assert(x249 != Fp::invalid());
    // zirgen/circuit/recursion/wom.cpp:72
    auto x250 = x249 - x227;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x251 = x0 - x250;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x252 = x250 * x251;
    // zirgen/circuit/recursion/wom.cpp:74
    if (x252 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x251 != 0) {
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x253 = args[2][120 * steps + ((cycle - 0) & mask)];
      assert(x253 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x254 = args[2][1 * steps + ((cycle - 0) & mask)];
      assert(x254 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x255 = x253 - x254;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x255 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x256 = args[2][121 * steps + ((cycle - 0) & mask)];
      assert(x256 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x257 = args[2][2 * steps + ((cycle - 0) & mask)];
      assert(x257 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x258 = x256 - x257;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x258 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x259 = args[2][122 * steps + ((cycle - 0) & mask)];
      assert(x259 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x260 = args[2][3 * steps + ((cycle - 0) & mask)];
      assert(x260 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x261 = x259 - x260;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x261 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x262 = args[2][123 * steps + ((cycle - 0) & mask)];
      assert(x262 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x263 = args[2][4 * steps + ((cycle - 0) & mask)];
      assert(x263 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x264 = x262 - x263;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x264 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x265 = args[2][124 * steps + ((cycle - 0) & mask)];
      assert(x265 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x266 = args[2][5 * steps + ((cycle - 0) & mask)];
      assert(x266 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x267 = x265 - x266;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x267 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/micro_ops(recursion::MicroOps)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x268 = args[2][125 * steps + ((cycle - 0) & mask)];
      assert(x268 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x269 = args[2][6 * steps + ((cycle - 0) & mask)];
      assert(x269 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x270 = x268 - x269;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x270 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
  }
  if (x3 != 0) {
    // zirgen/compiler/edsl/component.cpp:49
    auto x271 = args[0][9 * steps + ((cycle - 0) & mask)];
    assert(x271 != Fp::invalid());
    if (x271 != 0) {
      // zirgen/circuit/recursion/wom.cpp:22
      {
        auto& reg = args[2][0 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1);
        reg = x1;
      }
      // zirgen/circuit/recursion/wom.cpp:61
      {
        auto& reg = args[2][1 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1);
        reg = x1;
      }
      // zirgen/circuit/recursion/wom.cpp:61
      {
        auto& reg = args[2][2 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1);
        reg = x1;
      }
      // zirgen/circuit/recursion/wom.cpp:61
      {
        auto& reg = args[2][3 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1);
        reg = x1;
      }
      // zirgen/circuit/recursion/wom.cpp:61
      {
        auto& reg = args[2][4 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1);
        reg = x1;
      }
      // zirgen/circuit/recursion/wom.cpp:61
      {
        auto& reg = args[2][5 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1);
        reg = x1;
      }
      // zirgen/circuit/recursion/wom.cpp:61
      {
        auto& reg = args[2][6 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1);
        reg = x1;
      }
    }
    // zirgen/compiler/edsl/component.cpp:49
    auto x272 = args[0][10 * steps + ((cycle - 0) & mask)];
    assert(x272 != Fp::invalid());
    if (x272 != 0) {
      // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/wom_fini(recursion::WomFiniWrapper)/PlonkFini/recursion::impl::WomPlonkElement/addr(Reg)(compiler/edsl/edsl.h:129)
      auto x273 = args[2][13 * steps + ((cycle - 0) & mask)];
      assert(x273 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)(zirgen/circuit/recursion/wom.cpp:71)
      auto x274 = args[2][0 * steps + ((cycle - 1) & mask)];
      assert(x274 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:72
      auto x275 = x273 - x274;
      // zirgen/circuit/recursion/wom.cpp:74
      auto x276 = x0 - x275;
      // zirgen/circuit/recursion/wom.cpp:74
      auto x277 = x275 * x276;
      // zirgen/circuit/recursion/wom.cpp:74
      if (x277 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
      if (x276 != 0) {
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/wom_fini(recursion::WomFiniWrapper)/PlonkFini/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x278 = args[2][14 * steps + ((cycle - 0) & mask)];
        assert(x278 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x279 = args[2][1 * steps + ((cycle - 1) & mask)];
        assert(x279 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x280 = x279 - x278;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x280 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/wom_fini(recursion::WomFiniWrapper)/PlonkFini/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x281 = args[2][15 * steps + ((cycle - 0) & mask)];
        assert(x281 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x282 = args[2][2 * steps + ((cycle - 1) & mask)];
        assert(x282 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x283 = x282 - x281;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x283 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/wom_fini(recursion::WomFiniWrapper)/PlonkFini/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x284 = args[2][16 * steps + ((cycle - 0) & mask)];
        assert(x284 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x285 = args[2][3 * steps + ((cycle - 1) & mask)];
        assert(x285 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x286 = x285 - x284;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x286 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/wom_fini(recursion::WomFiniWrapper)/PlonkFini/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x287 = args[2][17 * steps + ((cycle - 0) & mask)];
        assert(x287 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x288 = args[2][4 * steps + ((cycle - 1) & mask)];
        assert(x288 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x289 = x288 - x287;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x289 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/wom_fini(recursion::WomFiniWrapper)/PlonkFini/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x290 = args[2][18 * steps + ((cycle - 0) & mask)];
        assert(x290 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x291 = args[2][5 * steps + ((cycle - 1) & mask)];
        assert(x291 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x292 = x291 - x290;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x292 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/wom_fini(recursion::WomFiniWrapper)/PlonkFini/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x293 = args[2][19 * steps + ((cycle - 0) & mask)];
        assert(x293 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x294 = args[2][6 * steps + ((cycle - 1) & mask)];
        assert(x294 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x295 = x294 - x293;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x295 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      }
    }
    // zirgen/compiler/edsl/component.cpp:49
    auto x296 = args[0][11 * steps + ((cycle - 0) & mask)];
    assert(x296 != Fp::invalid());
    if (x296 != 0) {
      {
        auto [x297, x298, x299, x300, x301, x302, x303] = extern_plonkRead_wom(ctx, cycle, "wom", {});
        // zirgen/circuit/recursion/wom.cpp:41
        {
          auto& reg = args[2][34 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x297);
          reg = x297;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][35 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x298);
          reg = x298;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][36 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x299);
          reg = x299;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][37 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x300);
          reg = x300;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][38 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x301);
          reg = x301;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][39 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x302);
          reg = x302;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][40 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x303);
          reg = x303;
        }
        auto [x304, x305, x306, x307, x308, x309, x310] = extern_plonkRead_wom(ctx, cycle, "wom", {});
        // zirgen/circuit/recursion/wom.cpp:41
        {
          auto& reg = args[2][41 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x304);
          reg = x304;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][42 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x305);
          reg = x305;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][43 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x306);
          reg = x306;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][44 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x307);
          reg = x307;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][45 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x308);
          reg = x308;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][46 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x309);
          reg = x309;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][47 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x310);
          reg = x310;
        }
        auto [x311, x312, x313, x314, x315, x316, x317] = extern_plonkRead_wom(ctx, cycle, "wom", {});
        // zirgen/circuit/recursion/wom.cpp:41
        {
          auto& reg = args[2][0 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x311);
          reg = x311;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][1 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x312);
          reg = x312;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][2 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x313);
          reg = x313;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][3 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x314);
          reg = x314;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][4 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x315);
          reg = x315;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][5 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x316);
          reg = x316;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][6 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x317);
          reg = x317;
        }
      }
      // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)(compiler/edsl/edsl.h:129)
      auto x318 = args[2][34 * steps + ((cycle - 0) & mask)];
      assert(x318 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)(zirgen/circuit/recursion/wom.cpp:71)
      auto x319 = args[2][0 * steps + ((cycle - 1) & mask)];
      assert(x319 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:72
      auto x320 = x318 - x319;
      // zirgen/circuit/recursion/wom.cpp:74
      auto x321 = x0 - x320;
      // zirgen/circuit/recursion/wom.cpp:74
      auto x322 = x320 * x321;
      // zirgen/circuit/recursion/wom.cpp:74
      if (x322 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
      if (x321 != 0) {
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x323 = args[2][35 * steps + ((cycle - 0) & mask)];
        assert(x323 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x324 = args[2][1 * steps + ((cycle - 1) & mask)];
        assert(x324 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x325 = x324 - x323;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x325 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x326 = args[2][36 * steps + ((cycle - 0) & mask)];
        assert(x326 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x327 = args[2][2 * steps + ((cycle - 1) & mask)];
        assert(x327 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x328 = x327 - x326;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x328 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x329 = args[2][37 * steps + ((cycle - 0) & mask)];
        assert(x329 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x330 = args[2][3 * steps + ((cycle - 1) & mask)];
        assert(x330 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x331 = x330 - x329;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x331 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x332 = args[2][38 * steps + ((cycle - 0) & mask)];
        assert(x332 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x333 = args[2][4 * steps + ((cycle - 1) & mask)];
        assert(x333 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x334 = x333 - x332;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x334 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x335 = args[2][39 * steps + ((cycle - 0) & mask)];
        assert(x335 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x336 = args[2][5 * steps + ((cycle - 1) & mask)];
        assert(x336 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x337 = x336 - x335;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x337 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x338 = args[2][40 * steps + ((cycle - 0) & mask)];
        assert(x338 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x339 = args[2][6 * steps + ((cycle - 1) & mask)];
        assert(x339 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x340 = x339 - x338;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x340 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      }
      // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)(compiler/edsl/edsl.h:129)
      auto x341 = args[2][41 * steps + ((cycle - 0) & mask)];
      assert(x341 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:72
      auto x342 = x341 - x318;
      // zirgen/circuit/recursion/wom.cpp:74
      auto x343 = x0 - x342;
      // zirgen/circuit/recursion/wom.cpp:74
      auto x344 = x342 * x343;
      // zirgen/circuit/recursion/wom.cpp:74
      if (x344 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
      if (x343 != 0) {
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x345 = args[2][35 * steps + ((cycle - 0) & mask)];
        assert(x345 != Fp::invalid());
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x346 = args[2][42 * steps + ((cycle - 0) & mask)];
        assert(x346 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x347 = x345 - x346;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x347 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x348 = args[2][36 * steps + ((cycle - 0) & mask)];
        assert(x348 != Fp::invalid());
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x349 = args[2][43 * steps + ((cycle - 0) & mask)];
        assert(x349 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x350 = x348 - x349;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x350 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x351 = args[2][37 * steps + ((cycle - 0) & mask)];
        assert(x351 != Fp::invalid());
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x352 = args[2][44 * steps + ((cycle - 0) & mask)];
        assert(x352 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x353 = x351 - x352;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x353 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x354 = args[2][38 * steps + ((cycle - 0) & mask)];
        assert(x354 != Fp::invalid());
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x355 = args[2][45 * steps + ((cycle - 0) & mask)];
        assert(x355 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x356 = x354 - x355;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x356 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x357 = args[2][39 * steps + ((cycle - 0) & mask)];
        assert(x357 != Fp::invalid());
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x358 = args[2][46 * steps + ((cycle - 0) & mask)];
        assert(x358 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x359 = x357 - x358;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x359 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x360 = args[2][40 * steps + ((cycle - 0) & mask)];
        assert(x360 != Fp::invalid());
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x361 = args[2][47 * steps + ((cycle - 0) & mask)];
        assert(x361 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x362 = x360 - x361;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x362 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      }
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)(compiler/edsl/edsl.h:129)
      auto x363 = args[2][0 * steps + ((cycle - 0) & mask)];
      assert(x363 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:72
      auto x364 = x363 - x341;
      // zirgen/circuit/recursion/wom.cpp:74
      auto x365 = x0 - x364;
      // zirgen/circuit/recursion/wom.cpp:74
      auto x366 = x364 * x365;
      // zirgen/circuit/recursion/wom.cpp:74
      if (x366 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
      if (x365 != 0) {
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x367 = args[2][42 * steps + ((cycle - 0) & mask)];
        assert(x367 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x368 = args[2][1 * steps + ((cycle - 0) & mask)];
        assert(x368 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x369 = x367 - x368;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x369 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x370 = args[2][43 * steps + ((cycle - 0) & mask)];
        assert(x370 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x371 = args[2][2 * steps + ((cycle - 0) & mask)];
        assert(x371 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x372 = x370 - x371;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x372 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x373 = args[2][44 * steps + ((cycle - 0) & mask)];
        assert(x373 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x374 = args[2][3 * steps + ((cycle - 0) & mask)];
        assert(x374 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x375 = x373 - x374;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x375 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x376 = args[2][45 * steps + ((cycle - 0) & mask)];
        assert(x376 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x377 = args[2][4 * steps + ((cycle - 0) & mask)];
        assert(x377 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x378 = x376 - x377;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x378 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x379 = args[2][46 * steps + ((cycle - 0) & mask)];
        assert(x379 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x380 = args[2][5 * steps + ((cycle - 0) & mask)];
        assert(x380 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x381 = x379 - x380;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x381 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_and_elem(recursion::BitAndElem)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x382 = args[2][47 * steps + ((cycle - 0) & mask)];
        assert(x382 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x383 = args[2][6 * steps + ((cycle - 0) & mask)];
        assert(x383 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x384 = x382 - x383;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x384 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      }
    }
    // zirgen/compiler/edsl/component.cpp:49
    auto x385 = args[0][12 * steps + ((cycle - 0) & mask)];
    assert(x385 != Fp::invalid());
    if (x385 != 0) {
      {
        auto [x386, x387, x388, x389, x390, x391, x392] = extern_plonkRead_wom(ctx, cycle, "wom", {});
        // zirgen/circuit/recursion/wom.cpp:41
        {
          auto& reg = args[2][34 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x386);
          reg = x386;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][35 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x387);
          reg = x387;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][36 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x388);
          reg = x388;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][37 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x389);
          reg = x389;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][38 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x390);
          reg = x390;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][39 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x391);
          reg = x391;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][40 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x392);
          reg = x392;
        }
        auto [x393, x394, x395, x396, x397, x398, x399] = extern_plonkRead_wom(ctx, cycle, "wom", {});
        // zirgen/circuit/recursion/wom.cpp:41
        {
          auto& reg = args[2][41 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x393);
          reg = x393;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][42 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x394);
          reg = x394;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][43 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x395);
          reg = x395;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][44 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x396);
          reg = x396;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][45 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x397);
          reg = x397;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][46 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x398);
          reg = x398;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][47 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x399);
          reg = x399;
        }
        auto [x400, x401, x402, x403, x404, x405, x406] = extern_plonkRead_wom(ctx, cycle, "wom", {});
        // zirgen/circuit/recursion/wom.cpp:41
        {
          auto& reg = args[2][0 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x400);
          reg = x400;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][1 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x401);
          reg = x401;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][2 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x402);
          reg = x402;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][3 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x403);
          reg = x403;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][4 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x404);
          reg = x404;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][5 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x405);
          reg = x405;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][6 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x406);
          reg = x406;
        }
      }
      // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)(compiler/edsl/edsl.h:129)
      auto x407 = args[2][34 * steps + ((cycle - 0) & mask)];
      assert(x407 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)(zirgen/circuit/recursion/wom.cpp:71)
      auto x408 = args[2][0 * steps + ((cycle - 1) & mask)];
      assert(x408 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:72
      auto x409 = x407 - x408;
      // zirgen/circuit/recursion/wom.cpp:74
      auto x410 = x0 - x409;
      // zirgen/circuit/recursion/wom.cpp:74
      auto x411 = x409 * x410;
      // zirgen/circuit/recursion/wom.cpp:74
      if (x411 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
      if (x410 != 0) {
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x412 = args[2][35 * steps + ((cycle - 0) & mask)];
        assert(x412 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x413 = args[2][1 * steps + ((cycle - 1) & mask)];
        assert(x413 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x414 = x413 - x412;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x414 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x415 = args[2][36 * steps + ((cycle - 0) & mask)];
        assert(x415 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x416 = args[2][2 * steps + ((cycle - 1) & mask)];
        assert(x416 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x417 = x416 - x415;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x417 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x418 = args[2][37 * steps + ((cycle - 0) & mask)];
        assert(x418 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x419 = args[2][3 * steps + ((cycle - 1) & mask)];
        assert(x419 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x420 = x419 - x418;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x420 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x421 = args[2][38 * steps + ((cycle - 0) & mask)];
        assert(x421 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x422 = args[2][4 * steps + ((cycle - 1) & mask)];
        assert(x422 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x423 = x422 - x421;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x423 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x424 = args[2][39 * steps + ((cycle - 0) & mask)];
        assert(x424 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x425 = args[2][5 * steps + ((cycle - 1) & mask)];
        assert(x425 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x426 = x425 - x424;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x426 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x427 = args[2][40 * steps + ((cycle - 0) & mask)];
        assert(x427 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x428 = args[2][6 * steps + ((cycle - 1) & mask)];
        assert(x428 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x429 = x428 - x427;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x429 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      }
      // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)(compiler/edsl/edsl.h:129)
      auto x430 = args[2][41 * steps + ((cycle - 0) & mask)];
      assert(x430 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:72
      auto x431 = x430 - x407;
      // zirgen/circuit/recursion/wom.cpp:74
      auto x432 = x0 - x431;
      // zirgen/circuit/recursion/wom.cpp:74
      auto x433 = x431 * x432;
      // zirgen/circuit/recursion/wom.cpp:74
      if (x433 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
      if (x432 != 0) {
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x434 = args[2][35 * steps + ((cycle - 0) & mask)];
        assert(x434 != Fp::invalid());
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x435 = args[2][42 * steps + ((cycle - 0) & mask)];
        assert(x435 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x436 = x434 - x435;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x436 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x437 = args[2][36 * steps + ((cycle - 0) & mask)];
        assert(x437 != Fp::invalid());
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x438 = args[2][43 * steps + ((cycle - 0) & mask)];
        assert(x438 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x439 = x437 - x438;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x439 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x440 = args[2][37 * steps + ((cycle - 0) & mask)];
        assert(x440 != Fp::invalid());
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x441 = args[2][44 * steps + ((cycle - 0) & mask)];
        assert(x441 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x442 = x440 - x441;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x442 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x443 = args[2][38 * steps + ((cycle - 0) & mask)];
        assert(x443 != Fp::invalid());
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x444 = args[2][45 * steps + ((cycle - 0) & mask)];
        assert(x444 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x445 = x443 - x444;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x445 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x446 = args[2][39 * steps + ((cycle - 0) & mask)];
        assert(x446 != Fp::invalid());
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x447 = args[2][46 * steps + ((cycle - 0) & mask)];
        assert(x447 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x448 = x446 - x447;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x448 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x449 = args[2][40 * steps + ((cycle - 0) & mask)];
        assert(x449 != Fp::invalid());
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x450 = args[2][47 * steps + ((cycle - 0) & mask)];
        assert(x450 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x451 = x449 - x450;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x451 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      }
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)(compiler/edsl/edsl.h:129)
      auto x452 = args[2][0 * steps + ((cycle - 0) & mask)];
      assert(x452 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:72
      auto x453 = x452 - x430;
      // zirgen/circuit/recursion/wom.cpp:74
      auto x454 = x0 - x453;
      // zirgen/circuit/recursion/wom.cpp:74
      auto x455 = x453 * x454;
      // zirgen/circuit/recursion/wom.cpp:74
      if (x455 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
      if (x454 != 0) {
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x456 = args[2][42 * steps + ((cycle - 0) & mask)];
        assert(x456 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x457 = args[2][1 * steps + ((cycle - 0) & mask)];
        assert(x457 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x458 = x456 - x457;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x458 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x459 = args[2][43 * steps + ((cycle - 0) & mask)];
        assert(x459 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x460 = args[2][2 * steps + ((cycle - 0) & mask)];
        assert(x460 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x461 = x459 - x460;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x461 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x462 = args[2][44 * steps + ((cycle - 0) & mask)];
        assert(x462 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x463 = args[2][3 * steps + ((cycle - 0) & mask)];
        assert(x463 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x464 = x462 - x463;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x464 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x465 = args[2][45 * steps + ((cycle - 0) & mask)];
        assert(x465 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x466 = args[2][4 * steps + ((cycle - 0) & mask)];
        assert(x466 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x467 = x465 - x466;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x467 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x468 = args[2][46 * steps + ((cycle - 0) & mask)];
        assert(x468 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x469 = args[2][5 * steps + ((cycle - 0) & mask)];
        assert(x469 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x470 = x468 - x469;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x470 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/bit_op_shorts(recursion::BitOpShorts)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x471 = args[2][47 * steps + ((cycle - 0) & mask)];
        assert(x471 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x472 = args[2][6 * steps + ((cycle - 0) & mask)];
        assert(x472 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x473 = x471 - x472;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x473 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      }
    }
    // zirgen/compiler/edsl/component.cpp:49
    auto x474 = args[0][13 * steps + ((cycle - 0) & mask)];
    assert(x474 != Fp::invalid());
    if (x474 != 0) {
      {
        auto [x475, x476, x477, x478, x479, x480, x481] = extern_plonkRead_wom(ctx, cycle, "wom", {});
        // zirgen/circuit/recursion/wom.cpp:41
        {
          auto& reg = args[2][27 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x475);
          reg = x475;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][28 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x476);
          reg = x476;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][29 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x477);
          reg = x477;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][30 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x478);
          reg = x478;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][31 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x479);
          reg = x479;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][32 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x480);
          reg = x480;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][33 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x481);
          reg = x481;
        }
        auto [x482, x483, x484, x485, x486, x487, x488] = extern_plonkRead_wom(ctx, cycle, "wom", {});
        // zirgen/circuit/recursion/wom.cpp:41
        {
          auto& reg = args[2][0 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x482);
          reg = x482;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][1 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x483);
          reg = x483;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][2 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x484);
          reg = x484;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][3 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x485);
          reg = x485;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][4 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x486);
          reg = x486;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][5 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x487);
          reg = x487;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][6 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x488);
          reg = x488;
        }
      }
      // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_init(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)(compiler/edsl/edsl.h:129)
      auto x489 = args[2][27 * steps + ((cycle - 0) & mask)];
      assert(x489 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)(zirgen/circuit/recursion/wom.cpp:71)
      auto x490 = args[2][0 * steps + ((cycle - 1) & mask)];
      assert(x490 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:72
      auto x491 = x489 - x490;
      // zirgen/circuit/recursion/wom.cpp:74
      auto x492 = x0 - x491;
      // zirgen/circuit/recursion/wom.cpp:74
      auto x493 = x491 * x492;
      // zirgen/circuit/recursion/wom.cpp:74
      if (x493 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
      if (x492 != 0) {
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_init(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x494 = args[2][28 * steps + ((cycle - 0) & mask)];
        assert(x494 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x495 = args[2][1 * steps + ((cycle - 1) & mask)];
        assert(x495 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x496 = x495 - x494;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x496 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_init(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x497 = args[2][29 * steps + ((cycle - 0) & mask)];
        assert(x497 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x498 = args[2][2 * steps + ((cycle - 1) & mask)];
        assert(x498 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x499 = x498 - x497;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x499 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_init(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x500 = args[2][30 * steps + ((cycle - 0) & mask)];
        assert(x500 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x501 = args[2][3 * steps + ((cycle - 1) & mask)];
        assert(x501 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x502 = x501 - x500;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x502 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_init(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x503 = args[2][31 * steps + ((cycle - 0) & mask)];
        assert(x503 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x504 = args[2][4 * steps + ((cycle - 1) & mask)];
        assert(x504 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x505 = x504 - x503;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x505 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_init(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x506 = args[2][32 * steps + ((cycle - 0) & mask)];
        assert(x506 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x507 = args[2][5 * steps + ((cycle - 1) & mask)];
        assert(x507 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x508 = x507 - x506;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x508 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_init(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x509 = args[2][33 * steps + ((cycle - 0) & mask)];
        assert(x509 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x510 = args[2][6 * steps + ((cycle - 1) & mask)];
        assert(x510 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x511 = x510 - x509;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x511 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      }
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)(compiler/edsl/edsl.h:129)
      auto x512 = args[2][0 * steps + ((cycle - 0) & mask)];
      assert(x512 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:72
      auto x513 = x512 - x489;
      // zirgen/circuit/recursion/wom.cpp:74
      auto x514 = x0 - x513;
      // zirgen/circuit/recursion/wom.cpp:74
      auto x515 = x513 * x514;
      // zirgen/circuit/recursion/wom.cpp:74
      if (x515 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
      if (x514 != 0) {
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_init(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x516 = args[2][28 * steps + ((cycle - 0) & mask)];
        assert(x516 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x517 = args[2][1 * steps + ((cycle - 0) & mask)];
        assert(x517 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x518 = x516 - x517;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x518 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_init(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x519 = args[2][29 * steps + ((cycle - 0) & mask)];
        assert(x519 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x520 = args[2][2 * steps + ((cycle - 0) & mask)];
        assert(x520 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x521 = x519 - x520;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x521 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_init(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x522 = args[2][30 * steps + ((cycle - 0) & mask)];
        assert(x522 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x523 = args[2][3 * steps + ((cycle - 0) & mask)];
        assert(x523 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x524 = x522 - x523;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x524 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_init(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x525 = args[2][31 * steps + ((cycle - 0) & mask)];
        assert(x525 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x526 = args[2][4 * steps + ((cycle - 0) & mask)];
        assert(x526 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x527 = x525 - x526;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x527 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_init(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x528 = args[2][32 * steps + ((cycle - 0) & mask)];
        assert(x528 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x529 = args[2][5 * steps + ((cycle - 0) & mask)];
        assert(x529 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x530 = x528 - x529;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x530 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_init(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x531 = args[2][33 * steps + ((cycle - 0) & mask)];
        assert(x531 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x532 = args[2][6 * steps + ((cycle - 0) & mask)];
        assert(x532 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x533 = x531 - x532;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x533 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      }
    }
    // zirgen/compiler/edsl/component.cpp:49
    auto x534 = args[0][14 * steps + ((cycle - 0) & mask)];
    assert(x534 != Fp::invalid());
    if (x534 != 0) {
      {
        auto [x535, x536, x537, x538, x539, x540, x541] = extern_plonkRead_wom(ctx, cycle, "wom", {});
        // zirgen/circuit/recursion/wom.cpp:41
        {
          auto& reg = args[2][27 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x535);
          reg = x535;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][28 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x536);
          reg = x536;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][29 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x537);
          reg = x537;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][30 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x538);
          reg = x538;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][31 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x539);
          reg = x539;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][32 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x540);
          reg = x540;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][33 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x541);
          reg = x541;
        }
        auto [x542, x543, x544, x545, x546, x547, x548] = extern_plonkRead_wom(ctx, cycle, "wom", {});
        // zirgen/circuit/recursion/wom.cpp:41
        {
          auto& reg = args[2][0 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x542);
          reg = x542;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][1 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x543);
          reg = x543;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][2 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x544);
          reg = x544;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][3 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x545);
          reg = x545;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][4 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x546);
          reg = x546;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][5 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x547);
          reg = x547;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][6 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x548);
          reg = x548;
        }
      }
      // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_fini(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)(compiler/edsl/edsl.h:129)
      auto x549 = args[2][27 * steps + ((cycle - 0) & mask)];
      assert(x549 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)(zirgen/circuit/recursion/wom.cpp:71)
      auto x550 = args[2][0 * steps + ((cycle - 1) & mask)];
      assert(x550 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:72
      auto x551 = x549 - x550;
      // zirgen/circuit/recursion/wom.cpp:74
      auto x552 = x0 - x551;
      // zirgen/circuit/recursion/wom.cpp:74
      auto x553 = x551 * x552;
      // zirgen/circuit/recursion/wom.cpp:74
      if (x553 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
      if (x552 != 0) {
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_fini(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x554 = args[2][28 * steps + ((cycle - 0) & mask)];
        assert(x554 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x555 = args[2][1 * steps + ((cycle - 1) & mask)];
        assert(x555 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x556 = x555 - x554;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x556 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_fini(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x557 = args[2][29 * steps + ((cycle - 0) & mask)];
        assert(x557 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x558 = args[2][2 * steps + ((cycle - 1) & mask)];
        assert(x558 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x559 = x558 - x557;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x559 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_fini(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x560 = args[2][30 * steps + ((cycle - 0) & mask)];
        assert(x560 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x561 = args[2][3 * steps + ((cycle - 1) & mask)];
        assert(x561 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x562 = x561 - x560;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x562 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_fini(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x563 = args[2][31 * steps + ((cycle - 0) & mask)];
        assert(x563 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x564 = args[2][4 * steps + ((cycle - 1) & mask)];
        assert(x564 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x565 = x564 - x563;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x565 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_fini(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x566 = args[2][32 * steps + ((cycle - 0) & mask)];
        assert(x566 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x567 = args[2][5 * steps + ((cycle - 1) & mask)];
        assert(x567 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x568 = x567 - x566;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x568 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_fini(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x569 = args[2][33 * steps + ((cycle - 0) & mask)];
        assert(x569 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x570 = args[2][6 * steps + ((cycle - 1) & mask)];
        assert(x570 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x571 = x570 - x569;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x571 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      }
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)(compiler/edsl/edsl.h:129)
      auto x572 = args[2][0 * steps + ((cycle - 0) & mask)];
      assert(x572 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:72
      auto x573 = x572 - x549;
      // zirgen/circuit/recursion/wom.cpp:74
      auto x574 = x0 - x573;
      // zirgen/circuit/recursion/wom.cpp:74
      auto x575 = x573 * x574;
      // zirgen/circuit/recursion/wom.cpp:74
      if (x575 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
      if (x574 != 0) {
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_fini(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x576 = args[2][28 * steps + ((cycle - 0) & mask)];
        assert(x576 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x577 = args[2][1 * steps + ((cycle - 0) & mask)];
        assert(x577 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x578 = x576 - x577;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x578 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_fini(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x579 = args[2][29 * steps + ((cycle - 0) & mask)];
        assert(x579 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x580 = args[2][2 * steps + ((cycle - 0) & mask)];
        assert(x580 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x581 = x579 - x580;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x581 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_fini(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x582 = args[2][30 * steps + ((cycle - 0) & mask)];
        assert(x582 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x583 = args[2][3 * steps + ((cycle - 0) & mask)];
        assert(x583 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x584 = x582 - x583;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x584 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_fini(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x585 = args[2][31 * steps + ((cycle - 0) & mask)];
        assert(x585 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x586 = args[2][4 * steps + ((cycle - 0) & mask)];
        assert(x586 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x587 = x585 - x586;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x587 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_fini(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x588 = args[2][32 * steps + ((cycle - 0) & mask)];
        assert(x588 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x589 = args[2][5 * steps + ((cycle - 0) & mask)];
        assert(x589 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x590 = x588 - x589;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x590 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_fini(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x591 = args[2][33 * steps + ((cycle - 0) & mask)];
        assert(x591 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x592 = args[2][6 * steps + ((cycle - 0) & mask)];
        assert(x592 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x593 = x591 - x592;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x593 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      }
    }
    // zirgen/compiler/edsl/component.cpp:49
    auto x594 = args[0][15 * steps + ((cycle - 0) & mask)];
    assert(x594 != Fp::invalid());
    if (x594 != 0) {
      {
        auto [x595, x596, x597, x598, x599, x600, x601] = extern_plonkRead_wom(ctx, cycle, "wom", {});
        // zirgen/circuit/recursion/wom.cpp:41
        {
          auto& reg = args[2][27 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x595);
          reg = x595;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][28 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x596);
          reg = x596;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][29 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x597);
          reg = x597;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][30 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x598);
          reg = x598;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][31 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x599);
          reg = x599;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][32 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x600);
          reg = x600;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][33 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x601);
          reg = x601;
        }
        auto [x602, x603, x604, x605, x606, x607, x608] = extern_plonkRead_wom(ctx, cycle, "wom", {});
        // zirgen/circuit/recursion/wom.cpp:41
        {
          auto& reg = args[2][0 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x602);
          reg = x602;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][1 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x603);
          reg = x603;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][2 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x604);
          reg = x604;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][3 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x605);
          reg = x605;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][4 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x606);
          reg = x606;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][5 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x607);
          reg = x607;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][6 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x608);
          reg = x608;
        }
      }
      // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_load(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)(compiler/edsl/edsl.h:129)
      auto x609 = args[2][27 * steps + ((cycle - 0) & mask)];
      assert(x609 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)(zirgen/circuit/recursion/wom.cpp:71)
      auto x610 = args[2][0 * steps + ((cycle - 1) & mask)];
      assert(x610 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:72
      auto x611 = x609 - x610;
      // zirgen/circuit/recursion/wom.cpp:74
      auto x612 = x0 - x611;
      // zirgen/circuit/recursion/wom.cpp:74
      auto x613 = x611 * x612;
      // zirgen/circuit/recursion/wom.cpp:74
      if (x613 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
      if (x612 != 0) {
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_load(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x614 = args[2][28 * steps + ((cycle - 0) & mask)];
        assert(x614 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x615 = args[2][1 * steps + ((cycle - 1) & mask)];
        assert(x615 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x616 = x615 - x614;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x616 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_load(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x617 = args[2][29 * steps + ((cycle - 0) & mask)];
        assert(x617 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x618 = args[2][2 * steps + ((cycle - 1) & mask)];
        assert(x618 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x619 = x618 - x617;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x619 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_load(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x620 = args[2][30 * steps + ((cycle - 0) & mask)];
        assert(x620 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x621 = args[2][3 * steps + ((cycle - 1) & mask)];
        assert(x621 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x622 = x621 - x620;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x622 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_load(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x623 = args[2][31 * steps + ((cycle - 0) & mask)];
        assert(x623 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x624 = args[2][4 * steps + ((cycle - 1) & mask)];
        assert(x624 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x625 = x624 - x623;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x625 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_load(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x626 = args[2][32 * steps + ((cycle - 0) & mask)];
        assert(x626 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x627 = args[2][5 * steps + ((cycle - 1) & mask)];
        assert(x627 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x628 = x627 - x626;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x628 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_load(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x629 = args[2][33 * steps + ((cycle - 0) & mask)];
        assert(x629 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x630 = args[2][6 * steps + ((cycle - 1) & mask)];
        assert(x630 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x631 = x630 - x629;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x631 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      }
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)(compiler/edsl/edsl.h:129)
      auto x632 = args[2][0 * steps + ((cycle - 0) & mask)];
      assert(x632 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:72
      auto x633 = x632 - x609;
      // zirgen/circuit/recursion/wom.cpp:74
      auto x634 = x0 - x633;
      // zirgen/circuit/recursion/wom.cpp:74
      auto x635 = x633 * x634;
      // zirgen/circuit/recursion/wom.cpp:74
      if (x635 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
      if (x634 != 0) {
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_load(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x636 = args[2][28 * steps + ((cycle - 0) & mask)];
        assert(x636 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x637 = args[2][1 * steps + ((cycle - 0) & mask)];
        assert(x637 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x638 = x636 - x637;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x638 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_load(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x639 = args[2][29 * steps + ((cycle - 0) & mask)];
        assert(x639 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x640 = args[2][2 * steps + ((cycle - 0) & mask)];
        assert(x640 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x641 = x639 - x640;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x641 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_load(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x642 = args[2][30 * steps + ((cycle - 0) & mask)];
        assert(x642 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x643 = args[2][3 * steps + ((cycle - 0) & mask)];
        assert(x643 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x644 = x642 - x643;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x644 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_load(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x645 = args[2][31 * steps + ((cycle - 0) & mask)];
        assert(x645 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x646 = args[2][4 * steps + ((cycle - 0) & mask)];
        assert(x646 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x647 = x645 - x646;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x647 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_load(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x648 = args[2][32 * steps + ((cycle - 0) & mask)];
        assert(x648 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x649 = args[2][5 * steps + ((cycle - 0) & mask)];
        assert(x649 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x650 = x648 - x649;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x650 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_load(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x651 = args[2][33 * steps + ((cycle - 0) & mask)];
        assert(x651 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x652 = args[2][6 * steps + ((cycle - 0) & mask)];
        assert(x652 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x653 = x651 - x652;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x653 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      }
    }
    // zirgen/compiler/edsl/component.cpp:49
    auto x654 = args[0][16 * steps + ((cycle - 0) & mask)];
    assert(x654 != Fp::invalid());
    if (x654 != 0) {
      {
        auto [x655, x656, x657, x658, x659, x660, x661] = extern_plonkRead_wom(ctx, cycle, "wom", {});
        // zirgen/circuit/recursion/wom.cpp:41
        {
          auto& reg = args[2][27 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x655);
          reg = x655;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][28 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x656);
          reg = x656;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][29 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x657);
          reg = x657;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][30 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x658);
          reg = x658;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][31 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x659);
          reg = x659;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][32 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x660);
          reg = x660;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][33 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x661);
          reg = x661;
        }
        auto [x662, x663, x664, x665, x666, x667, x668] = extern_plonkRead_wom(ctx, cycle, "wom", {});
        // zirgen/circuit/recursion/wom.cpp:41
        {
          auto& reg = args[2][0 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x662);
          reg = x662;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][1 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x663);
          reg = x663;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][2 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x664);
          reg = x664;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][3 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x665);
          reg = x665;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][4 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x666);
          reg = x666;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][5 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x667);
          reg = x667;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][6 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x668);
          reg = x668;
        }
      }
      // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_mix(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)(compiler/edsl/edsl.h:129)
      auto x669 = args[2][27 * steps + ((cycle - 0) & mask)];
      assert(x669 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)(zirgen/circuit/recursion/wom.cpp:71)
      auto x670 = args[2][0 * steps + ((cycle - 1) & mask)];
      assert(x670 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:72
      auto x671 = x669 - x670;
      // zirgen/circuit/recursion/wom.cpp:74
      auto x672 = x0 - x671;
      // zirgen/circuit/recursion/wom.cpp:74
      auto x673 = x671 * x672;
      // zirgen/circuit/recursion/wom.cpp:74
      if (x673 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
      if (x672 != 0) {
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_mix(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x674 = args[2][28 * steps + ((cycle - 0) & mask)];
        assert(x674 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x675 = args[2][1 * steps + ((cycle - 1) & mask)];
        assert(x675 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x676 = x675 - x674;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x676 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_mix(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x677 = args[2][29 * steps + ((cycle - 0) & mask)];
        assert(x677 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x678 = args[2][2 * steps + ((cycle - 1) & mask)];
        assert(x678 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x679 = x678 - x677;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x679 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_mix(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x680 = args[2][30 * steps + ((cycle - 0) & mask)];
        assert(x680 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x681 = args[2][3 * steps + ((cycle - 1) & mask)];
        assert(x681 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x682 = x681 - x680;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x682 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_mix(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x683 = args[2][31 * steps + ((cycle - 0) & mask)];
        assert(x683 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x684 = args[2][4 * steps + ((cycle - 1) & mask)];
        assert(x684 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x685 = x684 - x683;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x685 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_mix(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x686 = args[2][32 * steps + ((cycle - 0) & mask)];
        assert(x686 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x687 = args[2][5 * steps + ((cycle - 1) & mask)];
        assert(x687 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x688 = x687 - x686;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x688 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_mix(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x689 = args[2][33 * steps + ((cycle - 0) & mask)];
        assert(x689 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x690 = args[2][6 * steps + ((cycle - 1) & mask)];
        assert(x690 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x691 = x690 - x689;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x691 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      }
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)(compiler/edsl/edsl.h:129)
      auto x692 = args[2][0 * steps + ((cycle - 0) & mask)];
      assert(x692 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:72
      auto x693 = x692 - x669;
      // zirgen/circuit/recursion/wom.cpp:74
      auto x694 = x0 - x693;
      // zirgen/circuit/recursion/wom.cpp:74
      auto x695 = x693 * x694;
      // zirgen/circuit/recursion/wom.cpp:74
      if (x695 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
      if (x694 != 0) {
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_mix(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x696 = args[2][28 * steps + ((cycle - 0) & mask)];
        assert(x696 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x697 = args[2][1 * steps + ((cycle - 0) & mask)];
        assert(x697 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x698 = x696 - x697;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x698 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_mix(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x699 = args[2][29 * steps + ((cycle - 0) & mask)];
        assert(x699 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x700 = args[2][2 * steps + ((cycle - 0) & mask)];
        assert(x700 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x701 = x699 - x700;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x701 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_mix(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x702 = args[2][30 * steps + ((cycle - 0) & mask)];
        assert(x702 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x703 = args[2][3 * steps + ((cycle - 0) & mask)];
        assert(x703 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x704 = x702 - x703;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x704 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_mix(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x705 = args[2][31 * steps + ((cycle - 0) & mask)];
        assert(x705 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x706 = args[2][4 * steps + ((cycle - 0) & mask)];
        assert(x706 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x707 = x705 - x706;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x707 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_mix(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x708 = args[2][32 * steps + ((cycle - 0) & mask)];
        assert(x708 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x709 = args[2][5 * steps + ((cycle - 0) & mask)];
        assert(x709 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x710 = x708 - x709;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x710 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/sha_mix(recursion::ShaWrap)/sha_cycle(recursion::ShaCycle)/recursion::WomBody/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x711 = args[2][33 * steps + ((cycle - 0) & mask)];
        assert(x711 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x712 = args[2][6 * steps + ((cycle - 0) & mask)];
        assert(x712 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x713 = x711 - x712;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x713 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      }
    }
    // zirgen/compiler/edsl/component.cpp:49
    auto x714 = args[0][17 * steps + ((cycle - 0) & mask)];
    assert(x714 != Fp::invalid());
    if (x714 != 0) {
      {
        auto [x715, x716, x717, x718, x719, x720, x721] = extern_plonkRead_wom(ctx, cycle, "wom", {});
        // zirgen/circuit/recursion/wom.cpp:41
        {
          auto& reg = args[2][45 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x715);
          reg = x715;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][46 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x716);
          reg = x716;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][47 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x717);
          reg = x717;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][48 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x718);
          reg = x718;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][49 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x719);
          reg = x719;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][50 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x720);
          reg = x720;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][51 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x721);
          reg = x721;
        }
        auto [x722, x723, x724, x725, x726, x727, x728] = extern_plonkRead_wom(ctx, cycle, "wom", {});
        // zirgen/circuit/recursion/wom.cpp:41
        {
          auto& reg = args[2][52 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x722);
          reg = x722;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][53 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x723);
          reg = x723;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][54 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x724);
          reg = x724;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][55 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x725);
          reg = x725;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][56 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x726);
          reg = x726;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][57 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x727);
          reg = x727;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][58 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x728);
          reg = x728;
        }
        auto [x729, x730, x731, x732, x733, x734, x735] = extern_plonkRead_wom(ctx, cycle, "wom", {});
        // zirgen/circuit/recursion/wom.cpp:41
        {
          auto& reg = args[2][59 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x729);
          reg = x729;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][60 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x730);
          reg = x730;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][61 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x731);
          reg = x731;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][62 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x732);
          reg = x732;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][63 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x733);
          reg = x733;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][64 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x734);
          reg = x734;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][65 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x735);
          reg = x735;
        }
        auto [x736, x737, x738, x739, x740, x741, x742] = extern_plonkRead_wom(ctx, cycle, "wom", {});
        // zirgen/circuit/recursion/wom.cpp:41
        {
          auto& reg = args[2][0 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x736);
          reg = x736;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][1 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x737);
          reg = x737;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][2 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x738);
          reg = x738;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][3 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x739);
          reg = x739;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][4 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x740);
          reg = x740;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][5 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x741);
          reg = x741;
        }
        // zirgen/circuit/recursion/wom.cpp:43
        {
          auto& reg = args[2][6 * steps + cycle];
          assert(reg == Fp::invalid() || reg == x742);
          reg = x742;
        }
      }
      // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)(compiler/edsl/edsl.h:129)
      auto x743 = args[2][45 * steps + ((cycle - 0) & mask)];
      assert(x743 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)(zirgen/circuit/recursion/wom.cpp:71)
      auto x744 = args[2][0 * steps + ((cycle - 1) & mask)];
      assert(x744 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:72
      auto x745 = x743 - x744;
      // zirgen/circuit/recursion/wom.cpp:74
      auto x746 = x0 - x745;
      // zirgen/circuit/recursion/wom.cpp:74
      auto x747 = x745 * x746;
      // zirgen/circuit/recursion/wom.cpp:74
      if (x747 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
      if (x746 != 0) {
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x748 = args[2][46 * steps + ((cycle - 0) & mask)];
        assert(x748 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x749 = args[2][1 * steps + ((cycle - 1) & mask)];
        assert(x749 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x750 = x749 - x748;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x750 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x751 = args[2][47 * steps + ((cycle - 0) & mask)];
        assert(x751 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x752 = args[2][2 * steps + ((cycle - 1) & mask)];
        assert(x752 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x753 = x752 - x751;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x753 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x754 = args[2][48 * steps + ((cycle - 0) & mask)];
        assert(x754 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x755 = args[2][3 * steps + ((cycle - 1) & mask)];
        assert(x755 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x756 = x755 - x754;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x756 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x757 = args[2][49 * steps + ((cycle - 0) & mask)];
        assert(x757 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x758 = args[2][4 * steps + ((cycle - 1) & mask)];
        assert(x758 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x759 = x758 - x757;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x759 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x760 = args[2][50 * steps + ((cycle - 0) & mask)];
        assert(x760 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x761 = args[2][5 * steps + ((cycle - 1) & mask)];
        assert(x761 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x762 = x761 - x760;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x762 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x763 = args[2][51 * steps + ((cycle - 0) & mask)];
        assert(x763 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x764 = args[2][6 * steps + ((cycle - 1) & mask)];
        assert(x764 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x765 = x764 - x763;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x765 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      }
      // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)(compiler/edsl/edsl.h:129)
      auto x766 = args[2][52 * steps + ((cycle - 0) & mask)];
      assert(x766 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:72
      auto x767 = x766 - x743;
      // zirgen/circuit/recursion/wom.cpp:74
      auto x768 = x0 - x767;
      // zirgen/circuit/recursion/wom.cpp:74
      auto x769 = x767 * x768;
      // zirgen/circuit/recursion/wom.cpp:74
      if (x769 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
      if (x768 != 0) {
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x770 = args[2][46 * steps + ((cycle - 0) & mask)];
        assert(x770 != Fp::invalid());
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x771 = args[2][53 * steps + ((cycle - 0) & mask)];
        assert(x771 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x772 = x770 - x771;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x772 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x773 = args[2][47 * steps + ((cycle - 0) & mask)];
        assert(x773 != Fp::invalid());
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x774 = args[2][54 * steps + ((cycle - 0) & mask)];
        assert(x774 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x775 = x773 - x774;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x775 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x776 = args[2][48 * steps + ((cycle - 0) & mask)];
        assert(x776 != Fp::invalid());
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x777 = args[2][55 * steps + ((cycle - 0) & mask)];
        assert(x777 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x778 = x776 - x777;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x778 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x779 = args[2][49 * steps + ((cycle - 0) & mask)];
        assert(x779 != Fp::invalid());
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x780 = args[2][56 * steps + ((cycle - 0) & mask)];
        assert(x780 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x781 = x779 - x780;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x781 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x782 = args[2][50 * steps + ((cycle - 0) & mask)];
        assert(x782 != Fp::invalid());
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x783 = args[2][57 * steps + ((cycle - 0) & mask)];
        assert(x783 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x784 = x782 - x783;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x784 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x785 = args[2][51 * steps + ((cycle - 0) & mask)];
        assert(x785 != Fp::invalid());
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x786 = args[2][58 * steps + ((cycle - 0) & mask)];
        assert(x786 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x787 = x785 - x786;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x787 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      }
      // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)(compiler/edsl/edsl.h:129)
      auto x788 = args[2][59 * steps + ((cycle - 0) & mask)];
      assert(x788 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:72
      auto x789 = x788 - x766;
      // zirgen/circuit/recursion/wom.cpp:74
      auto x790 = x0 - x789;
      // zirgen/circuit/recursion/wom.cpp:74
      auto x791 = x789 * x790;
      // zirgen/circuit/recursion/wom.cpp:74
      if (x791 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
      if (x790 != 0) {
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x792 = args[2][53 * steps + ((cycle - 0) & mask)];
        assert(x792 != Fp::invalid());
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x793 = args[2][60 * steps + ((cycle - 0) & mask)];
        assert(x793 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x794 = x792 - x793;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x794 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x795 = args[2][54 * steps + ((cycle - 0) & mask)];
        assert(x795 != Fp::invalid());
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x796 = args[2][61 * steps + ((cycle - 0) & mask)];
        assert(x796 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x797 = x795 - x796;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x797 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x798 = args[2][55 * steps + ((cycle - 0) & mask)];
        assert(x798 != Fp::invalid());
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x799 = args[2][62 * steps + ((cycle - 0) & mask)];
        assert(x799 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x800 = x798 - x799;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x800 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x801 = args[2][56 * steps + ((cycle - 0) & mask)];
        assert(x801 != Fp::invalid());
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x802 = args[2][63 * steps + ((cycle - 0) & mask)];
        assert(x802 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x803 = x801 - x802;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x803 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x804 = args[2][57 * steps + ((cycle - 0) & mask)];
        assert(x804 != Fp::invalid());
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x805 = args[2][64 * steps + ((cycle - 0) & mask)];
        assert(x805 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x806 = x804 - x805;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x806 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x807 = args[2][58 * steps + ((cycle - 0) & mask)];
        assert(x807 != Fp::invalid());
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x808 = args[2][65 * steps + ((cycle - 0) & mask)];
        assert(x808 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x809 = x807 - x808;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x809 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      }
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)(compiler/edsl/edsl.h:129)
      auto x810 = args[2][0 * steps + ((cycle - 0) & mask)];
      assert(x810 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:72
      auto x811 = x810 - x788;
      // zirgen/circuit/recursion/wom.cpp:74
      auto x812 = x0 - x811;
      // zirgen/circuit/recursion/wom.cpp:74
      auto x813 = x811 * x812;
      // zirgen/circuit/recursion/wom.cpp:74
      if (x813 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
      if (x812 != 0) {
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x814 = args[2][60 * steps + ((cycle - 0) & mask)];
        assert(x814 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x815 = args[2][1 * steps + ((cycle - 0) & mask)];
        assert(x815 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x816 = x814 - x815;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x816 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x817 = args[2][61 * steps + ((cycle - 0) & mask)];
        assert(x817 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x818 = args[2][2 * steps + ((cycle - 0) & mask)];
        assert(x818 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x819 = x817 - x818;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x819 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x820 = args[2][62 * steps + ((cycle - 0) & mask)];
        assert(x820 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x821 = args[2][3 * steps + ((cycle - 0) & mask)];
        assert(x821 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x822 = x820 - x821;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x822 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x823 = args[2][63 * steps + ((cycle - 0) & mask)];
        assert(x823 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x824 = args[2][4 * steps + ((cycle - 0) & mask)];
        assert(x824 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x825 = x823 - x824;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x825 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x826 = args[2][64 * steps + ((cycle - 0) & mask)];
        assert(x826 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x827 = args[2][5 * steps + ((cycle - 0) & mask)];
        assert(x827 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x828 = x826 - x827;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x828 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
        // top(recursion::Top)/mux(Mux)/macro_ops(recursion::MacroOp)/mux(Mux)/set_global(recursion::SetGlobal)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x829 = args[2][65 * steps + ((cycle - 0) & mask)];
        assert(x829 != Fp::invalid());
        // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
        auto x830 = args[2][6 * steps + ((cycle - 0) & mask)];
        assert(x830 != Fp::invalid());
        // zirgen/circuit/recursion/wom.cpp:78
        auto x831 = x829 - x830;
        // zirgen/circuit/recursion/wom.cpp:78
        if (x831 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      }
    }
  }
  if (x4 != 0) {
    {
      auto [x832, x833, x834, x835, x836, x837, x838] = extern_plonkRead_wom(ctx, cycle, "wom", {});
      // zirgen/circuit/recursion/wom.cpp:41
      {
        auto& reg = args[2][70 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x832);
        reg = x832;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][71 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x833);
        reg = x833;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][72 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x834);
        reg = x834;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][73 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x835);
        reg = x835;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][74 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x836);
        reg = x836;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][75 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x837);
        reg = x837;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][76 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x838);
        reg = x838;
      }
      auto [x839, x840, x841, x842, x843, x844, x845] = extern_plonkRead_wom(ctx, cycle, "wom", {});
      // zirgen/circuit/recursion/wom.cpp:41
      {
        auto& reg = args[2][77 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x839);
        reg = x839;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][78 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x840);
        reg = x840;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][79 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x841);
        reg = x841;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][80 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x842);
        reg = x842;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][81 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x843);
        reg = x843;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][82 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x844);
        reg = x844;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][83 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x845);
        reg = x845;
      }
      auto [x846, x847, x848, x849, x850, x851, x852] = extern_plonkRead_wom(ctx, cycle, "wom", {});
      // zirgen/circuit/recursion/wom.cpp:41
      {
        auto& reg = args[2][84 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x846);
        reg = x846;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][85 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x847);
        reg = x847;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][86 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x848);
        reg = x848;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][87 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x849);
        reg = x849;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][88 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x850);
        reg = x850;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][89 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x851);
        reg = x851;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][90 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x852);
        reg = x852;
      }
      auto [x853, x854, x855, x856, x857, x858, x859] = extern_plonkRead_wom(ctx, cycle, "wom", {});
      // zirgen/circuit/recursion/wom.cpp:41
      {
        auto& reg = args[2][91 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x853);
        reg = x853;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][92 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x854);
        reg = x854;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][93 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x855);
        reg = x855;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][94 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x856);
        reg = x856;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][95 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x857);
        reg = x857;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][96 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x858);
        reg = x858;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][97 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x859);
        reg = x859;
      }
      auto [x860, x861, x862, x863, x864, x865, x866] = extern_plonkRead_wom(ctx, cycle, "wom", {});
      // zirgen/circuit/recursion/wom.cpp:41
      {
        auto& reg = args[2][98 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x860);
        reg = x860;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][99 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x861);
        reg = x861;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][100 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x862);
        reg = x862;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][101 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x863);
        reg = x863;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][102 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x864);
        reg = x864;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][103 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x865);
        reg = x865;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][104 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x866);
        reg = x866;
      }
      auto [x867, x868, x869, x870, x871, x872, x873] = extern_plonkRead_wom(ctx, cycle, "wom", {});
      // zirgen/circuit/recursion/wom.cpp:41
      {
        auto& reg = args[2][105 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x867);
        reg = x867;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][106 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x868);
        reg = x868;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][107 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x869);
        reg = x869;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][108 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x870);
        reg = x870;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][109 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x871);
        reg = x871;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][110 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x872);
        reg = x872;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][111 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x873);
        reg = x873;
      }
      auto [x874, x875, x876, x877, x878, x879, x880] = extern_plonkRead_wom(ctx, cycle, "wom", {});
      // zirgen/circuit/recursion/wom.cpp:41
      {
        auto& reg = args[2][112 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x874);
        reg = x874;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][113 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x875);
        reg = x875;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][114 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x876);
        reg = x876;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][115 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x877);
        reg = x877;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][116 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x878);
        reg = x878;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][117 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x879);
        reg = x879;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][118 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x880);
        reg = x880;
      }
      auto [x881, x882, x883, x884, x885, x886, x887] = extern_plonkRead_wom(ctx, cycle, "wom", {});
      // zirgen/circuit/recursion/wom.cpp:41
      {
        auto& reg = args[2][119 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x881);
        reg = x881;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][120 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x882);
        reg = x882;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][121 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x883);
        reg = x883;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][122 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x884);
        reg = x884;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][123 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x885);
        reg = x885;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][124 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x886);
        reg = x886;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][125 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x887);
        reg = x887;
      }
      auto [x888, x889, x890, x891, x892, x893, x894] = extern_plonkRead_wom(ctx, cycle, "wom", {});
      // zirgen/circuit/recursion/wom.cpp:41
      {
        auto& reg = args[2][0 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x888);
        reg = x888;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][1 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x889);
        reg = x889;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][2 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x890);
        reg = x890;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][3 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x891);
        reg = x891;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][4 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x892);
        reg = x892;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][5 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x893);
        reg = x893;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][6 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x894);
        reg = x894;
      }
    }
    // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)(compiler/edsl/edsl.h:129)
    auto x895 = args[2][70 * steps + ((cycle - 0) & mask)];
    assert(x895 != Fp::invalid());
    // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)(zirgen/circuit/recursion/wom.cpp:71)
    auto x896 = args[2][0 * steps + ((cycle - 1) & mask)];
    assert(x896 != Fp::invalid());
    // zirgen/circuit/recursion/wom.cpp:72
    auto x897 = x895 - x896;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x898 = x0 - x897;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x899 = x897 * x898;
    // zirgen/circuit/recursion/wom.cpp:74
    if (x899 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x898 != 0) {
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x900 = args[2][71 * steps + ((cycle - 0) & mask)];
      assert(x900 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x901 = args[2][1 * steps + ((cycle - 1) & mask)];
      assert(x901 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x902 = x901 - x900;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x902 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x903 = args[2][72 * steps + ((cycle - 0) & mask)];
      assert(x903 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x904 = args[2][2 * steps + ((cycle - 1) & mask)];
      assert(x904 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x905 = x904 - x903;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x905 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x906 = args[2][73 * steps + ((cycle - 0) & mask)];
      assert(x906 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x907 = args[2][3 * steps + ((cycle - 1) & mask)];
      assert(x907 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x908 = x907 - x906;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x908 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x909 = args[2][74 * steps + ((cycle - 0) & mask)];
      assert(x909 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x910 = args[2][4 * steps + ((cycle - 1) & mask)];
      assert(x910 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x911 = x910 - x909;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x911 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x912 = args[2][75 * steps + ((cycle - 0) & mask)];
      assert(x912 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x913 = args[2][5 * steps + ((cycle - 1) & mask)];
      assert(x913 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x914 = x913 - x912;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x914 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x915 = args[2][76 * steps + ((cycle - 0) & mask)];
      assert(x915 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x916 = args[2][6 * steps + ((cycle - 1) & mask)];
      assert(x916 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x917 = x916 - x915;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x917 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)(compiler/edsl/edsl.h:129)
    auto x918 = args[2][77 * steps + ((cycle - 0) & mask)];
    assert(x918 != Fp::invalid());
    // zirgen/circuit/recursion/wom.cpp:72
    auto x919 = x918 - x895;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x920 = x0 - x919;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x921 = x919 * x920;
    // zirgen/circuit/recursion/wom.cpp:74
    if (x921 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x920 != 0) {
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x922 = args[2][71 * steps + ((cycle - 0) & mask)];
      assert(x922 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x923 = args[2][78 * steps + ((cycle - 0) & mask)];
      assert(x923 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x924 = x922 - x923;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x924 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x925 = args[2][72 * steps + ((cycle - 0) & mask)];
      assert(x925 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x926 = args[2][79 * steps + ((cycle - 0) & mask)];
      assert(x926 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x927 = x925 - x926;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x927 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x928 = args[2][73 * steps + ((cycle - 0) & mask)];
      assert(x928 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x929 = args[2][80 * steps + ((cycle - 0) & mask)];
      assert(x929 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x930 = x928 - x929;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x930 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x931 = args[2][74 * steps + ((cycle - 0) & mask)];
      assert(x931 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x932 = args[2][81 * steps + ((cycle - 0) & mask)];
      assert(x932 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x933 = x931 - x932;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x933 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x934 = args[2][75 * steps + ((cycle - 0) & mask)];
      assert(x934 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x935 = args[2][82 * steps + ((cycle - 0) & mask)];
      assert(x935 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x936 = x934 - x935;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x936 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x937 = args[2][76 * steps + ((cycle - 0) & mask)];
      assert(x937 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x938 = args[2][83 * steps + ((cycle - 0) & mask)];
      assert(x938 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x939 = x937 - x938;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x939 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)(compiler/edsl/edsl.h:129)
    auto x940 = args[2][84 * steps + ((cycle - 0) & mask)];
    assert(x940 != Fp::invalid());
    // zirgen/circuit/recursion/wom.cpp:72
    auto x941 = x940 - x918;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x942 = x0 - x941;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x943 = x941 * x942;
    // zirgen/circuit/recursion/wom.cpp:74
    if (x943 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x942 != 0) {
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x944 = args[2][78 * steps + ((cycle - 0) & mask)];
      assert(x944 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x945 = args[2][85 * steps + ((cycle - 0) & mask)];
      assert(x945 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x946 = x944 - x945;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x946 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x947 = args[2][79 * steps + ((cycle - 0) & mask)];
      assert(x947 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x948 = args[2][86 * steps + ((cycle - 0) & mask)];
      assert(x948 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x949 = x947 - x948;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x949 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x950 = args[2][80 * steps + ((cycle - 0) & mask)];
      assert(x950 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x951 = args[2][87 * steps + ((cycle - 0) & mask)];
      assert(x951 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x952 = x950 - x951;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x952 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x953 = args[2][81 * steps + ((cycle - 0) & mask)];
      assert(x953 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x954 = args[2][88 * steps + ((cycle - 0) & mask)];
      assert(x954 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x955 = x953 - x954;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x955 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x956 = args[2][82 * steps + ((cycle - 0) & mask)];
      assert(x956 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x957 = args[2][89 * steps + ((cycle - 0) & mask)];
      assert(x957 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x958 = x956 - x957;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x958 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x959 = args[2][83 * steps + ((cycle - 0) & mask)];
      assert(x959 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x960 = args[2][90 * steps + ((cycle - 0) & mask)];
      assert(x960 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x961 = x959 - x960;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x961 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)(compiler/edsl/edsl.h:129)
    auto x962 = args[2][91 * steps + ((cycle - 0) & mask)];
    assert(x962 != Fp::invalid());
    // zirgen/circuit/recursion/wom.cpp:72
    auto x963 = x962 - x940;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x964 = x0 - x963;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x965 = x963 * x964;
    // zirgen/circuit/recursion/wom.cpp:74
    if (x965 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x964 != 0) {
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x966 = args[2][85 * steps + ((cycle - 0) & mask)];
      assert(x966 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x967 = args[2][92 * steps + ((cycle - 0) & mask)];
      assert(x967 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x968 = x966 - x967;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x968 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x969 = args[2][86 * steps + ((cycle - 0) & mask)];
      assert(x969 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x970 = args[2][93 * steps + ((cycle - 0) & mask)];
      assert(x970 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x971 = x969 - x970;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x971 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x972 = args[2][87 * steps + ((cycle - 0) & mask)];
      assert(x972 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x973 = args[2][94 * steps + ((cycle - 0) & mask)];
      assert(x973 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x974 = x972 - x973;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x974 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x975 = args[2][88 * steps + ((cycle - 0) & mask)];
      assert(x975 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x976 = args[2][95 * steps + ((cycle - 0) & mask)];
      assert(x976 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x977 = x975 - x976;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x977 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x978 = args[2][89 * steps + ((cycle - 0) & mask)];
      assert(x978 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x979 = args[2][96 * steps + ((cycle - 0) & mask)];
      assert(x979 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x980 = x978 - x979;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x980 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x981 = args[2][90 * steps + ((cycle - 0) & mask)];
      assert(x981 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x982 = args[2][97 * steps + ((cycle - 0) & mask)];
      assert(x982 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x983 = x981 - x982;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x983 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)(compiler/edsl/edsl.h:129)
    auto x984 = args[2][98 * steps + ((cycle - 0) & mask)];
    assert(x984 != Fp::invalid());
    // zirgen/circuit/recursion/wom.cpp:72
    auto x985 = x984 - x962;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x986 = x0 - x985;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x987 = x985 * x986;
    // zirgen/circuit/recursion/wom.cpp:74
    if (x987 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x986 != 0) {
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x988 = args[2][92 * steps + ((cycle - 0) & mask)];
      assert(x988 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x989 = args[2][99 * steps + ((cycle - 0) & mask)];
      assert(x989 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x990 = x988 - x989;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x990 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x991 = args[2][93 * steps + ((cycle - 0) & mask)];
      assert(x991 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x992 = args[2][100 * steps + ((cycle - 0) & mask)];
      assert(x992 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x993 = x991 - x992;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x993 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x994 = args[2][94 * steps + ((cycle - 0) & mask)];
      assert(x994 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x995 = args[2][101 * steps + ((cycle - 0) & mask)];
      assert(x995 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x996 = x994 - x995;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x996 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x997 = args[2][95 * steps + ((cycle - 0) & mask)];
      assert(x997 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x998 = args[2][102 * steps + ((cycle - 0) & mask)];
      assert(x998 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x999 = x997 - x998;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x999 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1000 = args[2][96 * steps + ((cycle - 0) & mask)];
      assert(x1000 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1001 = args[2][103 * steps + ((cycle - 0) & mask)];
      assert(x1001 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1002 = x1000 - x1001;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1002 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1003 = args[2][97 * steps + ((cycle - 0) & mask)];
      assert(x1003 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1004 = args[2][104 * steps + ((cycle - 0) & mask)];
      assert(x1004 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1005 = x1003 - x1004;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1005 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)(compiler/edsl/edsl.h:129)
    auto x1006 = args[2][105 * steps + ((cycle - 0) & mask)];
    assert(x1006 != Fp::invalid());
    // zirgen/circuit/recursion/wom.cpp:72
    auto x1007 = x1006 - x984;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x1008 = x0 - x1007;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x1009 = x1007 * x1008;
    // zirgen/circuit/recursion/wom.cpp:74
    if (x1009 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x1008 != 0) {
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1010 = args[2][99 * steps + ((cycle - 0) & mask)];
      assert(x1010 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1011 = args[2][106 * steps + ((cycle - 0) & mask)];
      assert(x1011 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1012 = x1010 - x1011;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1012 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1013 = args[2][100 * steps + ((cycle - 0) & mask)];
      assert(x1013 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1014 = args[2][107 * steps + ((cycle - 0) & mask)];
      assert(x1014 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1015 = x1013 - x1014;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1015 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1016 = args[2][101 * steps + ((cycle - 0) & mask)];
      assert(x1016 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1017 = args[2][108 * steps + ((cycle - 0) & mask)];
      assert(x1017 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1018 = x1016 - x1017;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1018 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1019 = args[2][102 * steps + ((cycle - 0) & mask)];
      assert(x1019 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1020 = args[2][109 * steps + ((cycle - 0) & mask)];
      assert(x1020 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1021 = x1019 - x1020;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1021 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1022 = args[2][103 * steps + ((cycle - 0) & mask)];
      assert(x1022 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1023 = args[2][110 * steps + ((cycle - 0) & mask)];
      assert(x1023 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1024 = x1022 - x1023;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1024 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1025 = args[2][104 * steps + ((cycle - 0) & mask)];
      assert(x1025 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1026 = args[2][111 * steps + ((cycle - 0) & mask)];
      assert(x1026 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1027 = x1025 - x1026;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1027 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)(compiler/edsl/edsl.h:129)
    auto x1028 = args[2][112 * steps + ((cycle - 0) & mask)];
    assert(x1028 != Fp::invalid());
    // zirgen/circuit/recursion/wom.cpp:72
    auto x1029 = x1028 - x1006;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x1030 = x0 - x1029;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x1031 = x1029 * x1030;
    // zirgen/circuit/recursion/wom.cpp:74
    if (x1031 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x1030 != 0) {
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1032 = args[2][106 * steps + ((cycle - 0) & mask)];
      assert(x1032 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1033 = args[2][113 * steps + ((cycle - 0) & mask)];
      assert(x1033 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1034 = x1032 - x1033;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1034 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1035 = args[2][107 * steps + ((cycle - 0) & mask)];
      assert(x1035 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1036 = args[2][114 * steps + ((cycle - 0) & mask)];
      assert(x1036 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1037 = x1035 - x1036;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1037 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1038 = args[2][108 * steps + ((cycle - 0) & mask)];
      assert(x1038 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1039 = args[2][115 * steps + ((cycle - 0) & mask)];
      assert(x1039 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1040 = x1038 - x1039;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1040 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1041 = args[2][109 * steps + ((cycle - 0) & mask)];
      assert(x1041 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1042 = args[2][116 * steps + ((cycle - 0) & mask)];
      assert(x1042 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1043 = x1041 - x1042;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1043 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1044 = args[2][110 * steps + ((cycle - 0) & mask)];
      assert(x1044 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1045 = args[2][117 * steps + ((cycle - 0) & mask)];
      assert(x1045 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1046 = x1044 - x1045;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1046 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1047 = args[2][111 * steps + ((cycle - 0) & mask)];
      assert(x1047 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1048 = args[2][118 * steps + ((cycle - 0) & mask)];
      assert(x1048 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1049 = x1047 - x1048;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1049 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)(compiler/edsl/edsl.h:129)
    auto x1050 = args[2][119 * steps + ((cycle - 0) & mask)];
    assert(x1050 != Fp::invalid());
    // zirgen/circuit/recursion/wom.cpp:72
    auto x1051 = x1050 - x1028;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x1052 = x0 - x1051;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x1053 = x1051 * x1052;
    // zirgen/circuit/recursion/wom.cpp:74
    if (x1053 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x1052 != 0) {
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1054 = args[2][113 * steps + ((cycle - 0) & mask)];
      assert(x1054 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1055 = args[2][120 * steps + ((cycle - 0) & mask)];
      assert(x1055 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1056 = x1054 - x1055;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1056 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1057 = args[2][114 * steps + ((cycle - 0) & mask)];
      assert(x1057 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1058 = args[2][121 * steps + ((cycle - 0) & mask)];
      assert(x1058 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1059 = x1057 - x1058;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1059 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1060 = args[2][115 * steps + ((cycle - 0) & mask)];
      assert(x1060 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1061 = args[2][122 * steps + ((cycle - 0) & mask)];
      assert(x1061 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1062 = x1060 - x1061;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1062 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1063 = args[2][116 * steps + ((cycle - 0) & mask)];
      assert(x1063 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1064 = args[2][123 * steps + ((cycle - 0) & mask)];
      assert(x1064 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1065 = x1063 - x1064;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1065 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1066 = args[2][117 * steps + ((cycle - 0) & mask)];
      assert(x1066 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1067 = args[2][124 * steps + ((cycle - 0) & mask)];
      assert(x1067 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1068 = x1066 - x1067;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1068 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1069 = args[2][118 * steps + ((cycle - 0) & mask)];
      assert(x1069 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1070 = args[2][125 * steps + ((cycle - 0) & mask)];
      assert(x1070 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1071 = x1069 - x1070;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1071 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)(compiler/edsl/edsl.h:129)
    auto x1072 = args[2][0 * steps + ((cycle - 0) & mask)];
    assert(x1072 != Fp::invalid());
    // zirgen/circuit/recursion/wom.cpp:72
    auto x1073 = x1072 - x1050;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x1074 = x0 - x1073;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x1075 = x1073 * x1074;
    // zirgen/circuit/recursion/wom.cpp:74
    if (x1075 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x1074 != 0) {
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1076 = args[2][120 * steps + ((cycle - 0) & mask)];
      assert(x1076 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1077 = args[2][1 * steps + ((cycle - 0) & mask)];
      assert(x1077 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1078 = x1076 - x1077;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1078 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1079 = args[2][121 * steps + ((cycle - 0) & mask)];
      assert(x1079 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1080 = args[2][2 * steps + ((cycle - 0) & mask)];
      assert(x1080 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1081 = x1079 - x1080;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1081 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1082 = args[2][122 * steps + ((cycle - 0) & mask)];
      assert(x1082 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1083 = args[2][3 * steps + ((cycle - 0) & mask)];
      assert(x1083 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1084 = x1082 - x1083;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1084 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1085 = args[2][123 * steps + ((cycle - 0) & mask)];
      assert(x1085 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1086 = args[2][4 * steps + ((cycle - 0) & mask)];
      assert(x1086 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1087 = x1085 - x1086;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1087 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1088 = args[2][124 * steps + ((cycle - 0) & mask)];
      assert(x1088 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1089 = args[2][5 * steps + ((cycle - 0) & mask)];
      assert(x1089 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1090 = x1088 - x1089;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1090 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_load(recursion::Poseidon2Load)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1091 = args[2][125 * steps + ((cycle - 0) & mask)];
      assert(x1091 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1092 = args[2][6 * steps + ((cycle - 0) & mask)];
      assert(x1092 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1093 = x1091 - x1092;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1093 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
  }
  if (x5 != 0) {
    // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)(zirgen/circuit/recursion/wom.cpp:32)
    auto x1094 = args[2][0 * steps + ((cycle - 1) & mask)];
    assert(x1094 != Fp::invalid());
    // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:54)
    auto x1095 = args[2][1 * steps + ((cycle - 1) & mask)];
    assert(x1095 != Fp::invalid());
    // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:54)
    auto x1096 = args[2][2 * steps + ((cycle - 1) & mask)];
    assert(x1096 != Fp::invalid());
    // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:54)
    auto x1097 = args[2][3 * steps + ((cycle - 1) & mask)];
    assert(x1097 != Fp::invalid());
    // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:54)
    auto x1098 = args[2][4 * steps + ((cycle - 1) & mask)];
    assert(x1098 != Fp::invalid());
    // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:54)
    auto x1099 = args[2][5 * steps + ((cycle - 1) & mask)];
    assert(x1099 != Fp::invalid());
    // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:54)
    auto x1100 = args[2][6 * steps + ((cycle - 1) & mask)];
    assert(x1100 != Fp::invalid());
    // zirgen/circuit/recursion/wom.cpp:41
    {
      auto& reg = args[2][0 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x1094);
      reg = x1094;
    }
    // zirgen/circuit/recursion/wom.cpp:43
    {
      auto& reg = args[2][1 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x1095);
      reg = x1095;
    }
    // zirgen/circuit/recursion/wom.cpp:43
    {
      auto& reg = args[2][2 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x1096);
      reg = x1096;
    }
    // zirgen/circuit/recursion/wom.cpp:43
    {
      auto& reg = args[2][3 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x1097);
      reg = x1097;
    }
    // zirgen/circuit/recursion/wom.cpp:43
    {
      auto& reg = args[2][4 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x1098);
      reg = x1098;
    }
    // zirgen/circuit/recursion/wom.cpp:43
    {
      auto& reg = args[2][5 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x1099);
      reg = x1099;
    }
    // zirgen/circuit/recursion/wom.cpp:43
    {
      auto& reg = args[2][6 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x1100);
      reg = x1100;
    }
  }
  if (x6 != 0) {
    // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)(zirgen/circuit/recursion/wom.cpp:32)
    auto x1101 = args[2][0 * steps + ((cycle - 1) & mask)];
    assert(x1101 != Fp::invalid());
    // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:54)
    auto x1102 = args[2][1 * steps + ((cycle - 1) & mask)];
    assert(x1102 != Fp::invalid());
    // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:54)
    auto x1103 = args[2][2 * steps + ((cycle - 1) & mask)];
    assert(x1103 != Fp::invalid());
    // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:54)
    auto x1104 = args[2][3 * steps + ((cycle - 1) & mask)];
    assert(x1104 != Fp::invalid());
    // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:54)
    auto x1105 = args[2][4 * steps + ((cycle - 1) & mask)];
    assert(x1105 != Fp::invalid());
    // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:54)
    auto x1106 = args[2][5 * steps + ((cycle - 1) & mask)];
    assert(x1106 != Fp::invalid());
    // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:54)
    auto x1107 = args[2][6 * steps + ((cycle - 1) & mask)];
    assert(x1107 != Fp::invalid());
    // zirgen/circuit/recursion/wom.cpp:41
    {
      auto& reg = args[2][0 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x1101);
      reg = x1101;
    }
    // zirgen/circuit/recursion/wom.cpp:43
    {
      auto& reg = args[2][1 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x1102);
      reg = x1102;
    }
    // zirgen/circuit/recursion/wom.cpp:43
    {
      auto& reg = args[2][2 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x1103);
      reg = x1103;
    }
    // zirgen/circuit/recursion/wom.cpp:43
    {
      auto& reg = args[2][3 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x1104);
      reg = x1104;
    }
    // zirgen/circuit/recursion/wom.cpp:43
    {
      auto& reg = args[2][4 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x1105);
      reg = x1105;
    }
    // zirgen/circuit/recursion/wom.cpp:43
    {
      auto& reg = args[2][5 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x1106);
      reg = x1106;
    }
    // zirgen/circuit/recursion/wom.cpp:43
    {
      auto& reg = args[2][6 * steps + cycle];
      assert(reg == Fp::invalid() || reg == x1107);
      reg = x1107;
    }
  }
  if (x7 != 0) {
    {
      auto [x1108, x1109, x1110, x1111, x1112, x1113, x1114] = extern_plonkRead_wom(ctx, cycle, "wom", {});
      // zirgen/circuit/recursion/wom.cpp:41
      {
        auto& reg = args[2][70 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1108);
        reg = x1108;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][71 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1109);
        reg = x1109;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][72 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1110);
        reg = x1110;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][73 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1111);
        reg = x1111;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][74 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1112);
        reg = x1112;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][75 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1113);
        reg = x1113;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][76 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1114);
        reg = x1114;
      }
      auto [x1115, x1116, x1117, x1118, x1119, x1120, x1121] = extern_plonkRead_wom(ctx, cycle, "wom", {});
      // zirgen/circuit/recursion/wom.cpp:41
      {
        auto& reg = args[2][77 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1115);
        reg = x1115;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][78 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1116);
        reg = x1116;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][79 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1117);
        reg = x1117;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][80 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1118);
        reg = x1118;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][81 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1119);
        reg = x1119;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][82 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1120);
        reg = x1120;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][83 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1121);
        reg = x1121;
      }
      auto [x1122, x1123, x1124, x1125, x1126, x1127, x1128] = extern_plonkRead_wom(ctx, cycle, "wom", {});
      // zirgen/circuit/recursion/wom.cpp:41
      {
        auto& reg = args[2][84 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1122);
        reg = x1122;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][85 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1123);
        reg = x1123;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][86 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1124);
        reg = x1124;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][87 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1125);
        reg = x1125;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][88 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1126);
        reg = x1126;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][89 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1127);
        reg = x1127;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][90 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1128);
        reg = x1128;
      }
      auto [x1129, x1130, x1131, x1132, x1133, x1134, x1135] = extern_plonkRead_wom(ctx, cycle, "wom", {});
      // zirgen/circuit/recursion/wom.cpp:41
      {
        auto& reg = args[2][91 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1129);
        reg = x1129;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][92 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1130);
        reg = x1130;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][93 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1131);
        reg = x1131;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][94 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1132);
        reg = x1132;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][95 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1133);
        reg = x1133;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][96 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1134);
        reg = x1134;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][97 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1135);
        reg = x1135;
      }
      auto [x1136, x1137, x1138, x1139, x1140, x1141, x1142] = extern_plonkRead_wom(ctx, cycle, "wom", {});
      // zirgen/circuit/recursion/wom.cpp:41
      {
        auto& reg = args[2][98 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1136);
        reg = x1136;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][99 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1137);
        reg = x1137;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][100 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1138);
        reg = x1138;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][101 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1139);
        reg = x1139;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][102 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1140);
        reg = x1140;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][103 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1141);
        reg = x1141;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][104 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1142);
        reg = x1142;
      }
      auto [x1143, x1144, x1145, x1146, x1147, x1148, x1149] = extern_plonkRead_wom(ctx, cycle, "wom", {});
      // zirgen/circuit/recursion/wom.cpp:41
      {
        auto& reg = args[2][105 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1143);
        reg = x1143;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][106 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1144);
        reg = x1144;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][107 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1145);
        reg = x1145;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][108 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1146);
        reg = x1146;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][109 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1147);
        reg = x1147;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][110 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1148);
        reg = x1148;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][111 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1149);
        reg = x1149;
      }
      auto [x1150, x1151, x1152, x1153, x1154, x1155, x1156] = extern_plonkRead_wom(ctx, cycle, "wom", {});
      // zirgen/circuit/recursion/wom.cpp:41
      {
        auto& reg = args[2][112 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1150);
        reg = x1150;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][113 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1151);
        reg = x1151;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][114 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1152);
        reg = x1152;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][115 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1153);
        reg = x1153;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][116 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1154);
        reg = x1154;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][117 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1155);
        reg = x1155;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][118 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1156);
        reg = x1156;
      }
      auto [x1157, x1158, x1159, x1160, x1161, x1162, x1163] = extern_plonkRead_wom(ctx, cycle, "wom", {});
      // zirgen/circuit/recursion/wom.cpp:41
      {
        auto& reg = args[2][119 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1157);
        reg = x1157;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][120 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1158);
        reg = x1158;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][121 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1159);
        reg = x1159;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][122 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1160);
        reg = x1160;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][123 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1161);
        reg = x1161;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][124 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1162);
        reg = x1162;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][125 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1163);
        reg = x1163;
      }
      auto [x1164, x1165, x1166, x1167, x1168, x1169, x1170] = extern_plonkRead_wom(ctx, cycle, "wom", {});
      // zirgen/circuit/recursion/wom.cpp:41
      {
        auto& reg = args[2][0 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1164);
        reg = x1164;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][1 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1165);
        reg = x1165;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][2 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1166);
        reg = x1166;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][3 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1167);
        reg = x1167;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][4 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1168);
        reg = x1168;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][5 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1169);
        reg = x1169;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][6 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1170);
        reg = x1170;
      }
    }
    // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)(compiler/edsl/edsl.h:129)
    auto x1171 = args[2][70 * steps + ((cycle - 0) & mask)];
    assert(x1171 != Fp::invalid());
    // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)(zirgen/circuit/recursion/wom.cpp:71)
    auto x1172 = args[2][0 * steps + ((cycle - 1) & mask)];
    assert(x1172 != Fp::invalid());
    // zirgen/circuit/recursion/wom.cpp:72
    auto x1173 = x1171 - x1172;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x1174 = x0 - x1173;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x1175 = x1173 * x1174;
    // zirgen/circuit/recursion/wom.cpp:74
    if (x1175 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x1174 != 0) {
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1176 = args[2][71 * steps + ((cycle - 0) & mask)];
      assert(x1176 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1177 = args[2][1 * steps + ((cycle - 1) & mask)];
      assert(x1177 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1178 = x1177 - x1176;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1178 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1179 = args[2][72 * steps + ((cycle - 0) & mask)];
      assert(x1179 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1180 = args[2][2 * steps + ((cycle - 1) & mask)];
      assert(x1180 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1181 = x1180 - x1179;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1181 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1182 = args[2][73 * steps + ((cycle - 0) & mask)];
      assert(x1182 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1183 = args[2][3 * steps + ((cycle - 1) & mask)];
      assert(x1183 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1184 = x1183 - x1182;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1184 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1185 = args[2][74 * steps + ((cycle - 0) & mask)];
      assert(x1185 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1186 = args[2][4 * steps + ((cycle - 1) & mask)];
      assert(x1186 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1187 = x1186 - x1185;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1187 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1188 = args[2][75 * steps + ((cycle - 0) & mask)];
      assert(x1188 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1189 = args[2][5 * steps + ((cycle - 1) & mask)];
      assert(x1189 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1190 = x1189 - x1188;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1190 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1191 = args[2][76 * steps + ((cycle - 0) & mask)];
      assert(x1191 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1192 = args[2][6 * steps + ((cycle - 1) & mask)];
      assert(x1192 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1193 = x1192 - x1191;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1193 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)(compiler/edsl/edsl.h:129)
    auto x1194 = args[2][77 * steps + ((cycle - 0) & mask)];
    assert(x1194 != Fp::invalid());
    // zirgen/circuit/recursion/wom.cpp:72
    auto x1195 = x1194 - x1171;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x1196 = x0 - x1195;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x1197 = x1195 * x1196;
    // zirgen/circuit/recursion/wom.cpp:74
    if (x1197 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x1196 != 0) {
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1198 = args[2][71 * steps + ((cycle - 0) & mask)];
      assert(x1198 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1199 = args[2][78 * steps + ((cycle - 0) & mask)];
      assert(x1199 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1200 = x1198 - x1199;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1200 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1201 = args[2][72 * steps + ((cycle - 0) & mask)];
      assert(x1201 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1202 = args[2][79 * steps + ((cycle - 0) & mask)];
      assert(x1202 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1203 = x1201 - x1202;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1203 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1204 = args[2][73 * steps + ((cycle - 0) & mask)];
      assert(x1204 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1205 = args[2][80 * steps + ((cycle - 0) & mask)];
      assert(x1205 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1206 = x1204 - x1205;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1206 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1207 = args[2][74 * steps + ((cycle - 0) & mask)];
      assert(x1207 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1208 = args[2][81 * steps + ((cycle - 0) & mask)];
      assert(x1208 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1209 = x1207 - x1208;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1209 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1210 = args[2][75 * steps + ((cycle - 0) & mask)];
      assert(x1210 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1211 = args[2][82 * steps + ((cycle - 0) & mask)];
      assert(x1211 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1212 = x1210 - x1211;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1212 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1213 = args[2][76 * steps + ((cycle - 0) & mask)];
      assert(x1213 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1214 = args[2][83 * steps + ((cycle - 0) & mask)];
      assert(x1214 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1215 = x1213 - x1214;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1215 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)(compiler/edsl/edsl.h:129)
    auto x1216 = args[2][84 * steps + ((cycle - 0) & mask)];
    assert(x1216 != Fp::invalid());
    // zirgen/circuit/recursion/wom.cpp:72
    auto x1217 = x1216 - x1194;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x1218 = x0 - x1217;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x1219 = x1217 * x1218;
    // zirgen/circuit/recursion/wom.cpp:74
    if (x1219 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x1218 != 0) {
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1220 = args[2][78 * steps + ((cycle - 0) & mask)];
      assert(x1220 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1221 = args[2][85 * steps + ((cycle - 0) & mask)];
      assert(x1221 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1222 = x1220 - x1221;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1222 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1223 = args[2][79 * steps + ((cycle - 0) & mask)];
      assert(x1223 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1224 = args[2][86 * steps + ((cycle - 0) & mask)];
      assert(x1224 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1225 = x1223 - x1224;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1225 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1226 = args[2][80 * steps + ((cycle - 0) & mask)];
      assert(x1226 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1227 = args[2][87 * steps + ((cycle - 0) & mask)];
      assert(x1227 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1228 = x1226 - x1227;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1228 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1229 = args[2][81 * steps + ((cycle - 0) & mask)];
      assert(x1229 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1230 = args[2][88 * steps + ((cycle - 0) & mask)];
      assert(x1230 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1231 = x1229 - x1230;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1231 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1232 = args[2][82 * steps + ((cycle - 0) & mask)];
      assert(x1232 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1233 = args[2][89 * steps + ((cycle - 0) & mask)];
      assert(x1233 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1234 = x1232 - x1233;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1234 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1235 = args[2][83 * steps + ((cycle - 0) & mask)];
      assert(x1235 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1236 = args[2][90 * steps + ((cycle - 0) & mask)];
      assert(x1236 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1237 = x1235 - x1236;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1237 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)(compiler/edsl/edsl.h:129)
    auto x1238 = args[2][91 * steps + ((cycle - 0) & mask)];
    assert(x1238 != Fp::invalid());
    // zirgen/circuit/recursion/wom.cpp:72
    auto x1239 = x1238 - x1216;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x1240 = x0 - x1239;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x1241 = x1239 * x1240;
    // zirgen/circuit/recursion/wom.cpp:74
    if (x1241 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x1240 != 0) {
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1242 = args[2][85 * steps + ((cycle - 0) & mask)];
      assert(x1242 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1243 = args[2][92 * steps + ((cycle - 0) & mask)];
      assert(x1243 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1244 = x1242 - x1243;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1244 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1245 = args[2][86 * steps + ((cycle - 0) & mask)];
      assert(x1245 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1246 = args[2][93 * steps + ((cycle - 0) & mask)];
      assert(x1246 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1247 = x1245 - x1246;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1247 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1248 = args[2][87 * steps + ((cycle - 0) & mask)];
      assert(x1248 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1249 = args[2][94 * steps + ((cycle - 0) & mask)];
      assert(x1249 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1250 = x1248 - x1249;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1250 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1251 = args[2][88 * steps + ((cycle - 0) & mask)];
      assert(x1251 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1252 = args[2][95 * steps + ((cycle - 0) & mask)];
      assert(x1252 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1253 = x1251 - x1252;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1253 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1254 = args[2][89 * steps + ((cycle - 0) & mask)];
      assert(x1254 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1255 = args[2][96 * steps + ((cycle - 0) & mask)];
      assert(x1255 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1256 = x1254 - x1255;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1256 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1257 = args[2][90 * steps + ((cycle - 0) & mask)];
      assert(x1257 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1258 = args[2][97 * steps + ((cycle - 0) & mask)];
      assert(x1258 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1259 = x1257 - x1258;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1259 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)(compiler/edsl/edsl.h:129)
    auto x1260 = args[2][98 * steps + ((cycle - 0) & mask)];
    assert(x1260 != Fp::invalid());
    // zirgen/circuit/recursion/wom.cpp:72
    auto x1261 = x1260 - x1238;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x1262 = x0 - x1261;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x1263 = x1261 * x1262;
    // zirgen/circuit/recursion/wom.cpp:74
    if (x1263 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x1262 != 0) {
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1264 = args[2][92 * steps + ((cycle - 0) & mask)];
      assert(x1264 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1265 = args[2][99 * steps + ((cycle - 0) & mask)];
      assert(x1265 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1266 = x1264 - x1265;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1266 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1267 = args[2][93 * steps + ((cycle - 0) & mask)];
      assert(x1267 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1268 = args[2][100 * steps + ((cycle - 0) & mask)];
      assert(x1268 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1269 = x1267 - x1268;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1269 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1270 = args[2][94 * steps + ((cycle - 0) & mask)];
      assert(x1270 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1271 = args[2][101 * steps + ((cycle - 0) & mask)];
      assert(x1271 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1272 = x1270 - x1271;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1272 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1273 = args[2][95 * steps + ((cycle - 0) & mask)];
      assert(x1273 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1274 = args[2][102 * steps + ((cycle - 0) & mask)];
      assert(x1274 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1275 = x1273 - x1274;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1275 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1276 = args[2][96 * steps + ((cycle - 0) & mask)];
      assert(x1276 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1277 = args[2][103 * steps + ((cycle - 0) & mask)];
      assert(x1277 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1278 = x1276 - x1277;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1278 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1279 = args[2][97 * steps + ((cycle - 0) & mask)];
      assert(x1279 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1280 = args[2][104 * steps + ((cycle - 0) & mask)];
      assert(x1280 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1281 = x1279 - x1280;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1281 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)(compiler/edsl/edsl.h:129)
    auto x1282 = args[2][105 * steps + ((cycle - 0) & mask)];
    assert(x1282 != Fp::invalid());
    // zirgen/circuit/recursion/wom.cpp:72
    auto x1283 = x1282 - x1260;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x1284 = x0 - x1283;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x1285 = x1283 * x1284;
    // zirgen/circuit/recursion/wom.cpp:74
    if (x1285 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x1284 != 0) {
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1286 = args[2][99 * steps + ((cycle - 0) & mask)];
      assert(x1286 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1287 = args[2][106 * steps + ((cycle - 0) & mask)];
      assert(x1287 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1288 = x1286 - x1287;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1288 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1289 = args[2][100 * steps + ((cycle - 0) & mask)];
      assert(x1289 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1290 = args[2][107 * steps + ((cycle - 0) & mask)];
      assert(x1290 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1291 = x1289 - x1290;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1291 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1292 = args[2][101 * steps + ((cycle - 0) & mask)];
      assert(x1292 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1293 = args[2][108 * steps + ((cycle - 0) & mask)];
      assert(x1293 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1294 = x1292 - x1293;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1294 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1295 = args[2][102 * steps + ((cycle - 0) & mask)];
      assert(x1295 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1296 = args[2][109 * steps + ((cycle - 0) & mask)];
      assert(x1296 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1297 = x1295 - x1296;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1297 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1298 = args[2][103 * steps + ((cycle - 0) & mask)];
      assert(x1298 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1299 = args[2][110 * steps + ((cycle - 0) & mask)];
      assert(x1299 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1300 = x1298 - x1299;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1300 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1301 = args[2][104 * steps + ((cycle - 0) & mask)];
      assert(x1301 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1302 = args[2][111 * steps + ((cycle - 0) & mask)];
      assert(x1302 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1303 = x1301 - x1302;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1303 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)(compiler/edsl/edsl.h:129)
    auto x1304 = args[2][112 * steps + ((cycle - 0) & mask)];
    assert(x1304 != Fp::invalid());
    // zirgen/circuit/recursion/wom.cpp:72
    auto x1305 = x1304 - x1282;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x1306 = x0 - x1305;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x1307 = x1305 * x1306;
    // zirgen/circuit/recursion/wom.cpp:74
    if (x1307 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x1306 != 0) {
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1308 = args[2][106 * steps + ((cycle - 0) & mask)];
      assert(x1308 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1309 = args[2][113 * steps + ((cycle - 0) & mask)];
      assert(x1309 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1310 = x1308 - x1309;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1310 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1311 = args[2][107 * steps + ((cycle - 0) & mask)];
      assert(x1311 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1312 = args[2][114 * steps + ((cycle - 0) & mask)];
      assert(x1312 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1313 = x1311 - x1312;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1313 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1314 = args[2][108 * steps + ((cycle - 0) & mask)];
      assert(x1314 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1315 = args[2][115 * steps + ((cycle - 0) & mask)];
      assert(x1315 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1316 = x1314 - x1315;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1316 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1317 = args[2][109 * steps + ((cycle - 0) & mask)];
      assert(x1317 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1318 = args[2][116 * steps + ((cycle - 0) & mask)];
      assert(x1318 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1319 = x1317 - x1318;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1319 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1320 = args[2][110 * steps + ((cycle - 0) & mask)];
      assert(x1320 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1321 = args[2][117 * steps + ((cycle - 0) & mask)];
      assert(x1321 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1322 = x1320 - x1321;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1322 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1323 = args[2][111 * steps + ((cycle - 0) & mask)];
      assert(x1323 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1324 = args[2][118 * steps + ((cycle - 0) & mask)];
      assert(x1324 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1325 = x1323 - x1324;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1325 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)(compiler/edsl/edsl.h:129)
    auto x1326 = args[2][119 * steps + ((cycle - 0) & mask)];
    assert(x1326 != Fp::invalid());
    // zirgen/circuit/recursion/wom.cpp:72
    auto x1327 = x1326 - x1304;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x1328 = x0 - x1327;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x1329 = x1327 * x1328;
    // zirgen/circuit/recursion/wom.cpp:74
    if (x1329 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x1328 != 0) {
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1330 = args[2][113 * steps + ((cycle - 0) & mask)];
      assert(x1330 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1331 = args[2][120 * steps + ((cycle - 0) & mask)];
      assert(x1331 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1332 = x1330 - x1331;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1332 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1333 = args[2][114 * steps + ((cycle - 0) & mask)];
      assert(x1333 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1334 = args[2][121 * steps + ((cycle - 0) & mask)];
      assert(x1334 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1335 = x1333 - x1334;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1335 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1336 = args[2][115 * steps + ((cycle - 0) & mask)];
      assert(x1336 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1337 = args[2][122 * steps + ((cycle - 0) & mask)];
      assert(x1337 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1338 = x1336 - x1337;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1338 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1339 = args[2][116 * steps + ((cycle - 0) & mask)];
      assert(x1339 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1340 = args[2][123 * steps + ((cycle - 0) & mask)];
      assert(x1340 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1341 = x1339 - x1340;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1341 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1342 = args[2][117 * steps + ((cycle - 0) & mask)];
      assert(x1342 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1343 = args[2][124 * steps + ((cycle - 0) & mask)];
      assert(x1343 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1344 = x1342 - x1343;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1344 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1345 = args[2][118 * steps + ((cycle - 0) & mask)];
      assert(x1345 != Fp::invalid());
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1346 = args[2][125 * steps + ((cycle - 0) & mask)];
      assert(x1346 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1347 = x1345 - x1346;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1347 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)(compiler/edsl/edsl.h:129)
    auto x1348 = args[2][0 * steps + ((cycle - 0) & mask)];
    assert(x1348 != Fp::invalid());
    // zirgen/circuit/recursion/wom.cpp:72
    auto x1349 = x1348 - x1326;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x1350 = x0 - x1349;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x1351 = x1349 * x1350;
    // zirgen/circuit/recursion/wom.cpp:74
    if (x1351 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x1350 != 0) {
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1352 = args[2][120 * steps + ((cycle - 0) & mask)];
      assert(x1352 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1353 = args[2][1 * steps + ((cycle - 0) & mask)];
      assert(x1353 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1354 = x1352 - x1353;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1354 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1355 = args[2][121 * steps + ((cycle - 0) & mask)];
      assert(x1355 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1356 = args[2][2 * steps + ((cycle - 0) & mask)];
      assert(x1356 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1357 = x1355 - x1356;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1357 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1358 = args[2][122 * steps + ((cycle - 0) & mask)];
      assert(x1358 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1359 = args[2][3 * steps + ((cycle - 0) & mask)];
      assert(x1359 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1360 = x1358 - x1359;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1360 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1361 = args[2][123 * steps + ((cycle - 0) & mask)];
      assert(x1361 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1362 = args[2][4 * steps + ((cycle - 0) & mask)];
      assert(x1362 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1363 = x1361 - x1362;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1363 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1364 = args[2][124 * steps + ((cycle - 0) & mask)];
      assert(x1364 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1365 = args[2][5 * steps + ((cycle - 0) & mask)];
      assert(x1365 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1366 = x1364 - x1365;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1366 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/poseidon2_store(recursion::Poseidon2Store)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1367 = args[2][125 * steps + ((cycle - 0) & mask)];
      assert(x1367 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1368 = args[2][6 * steps + ((cycle - 0) & mask)];
      assert(x1368 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1369 = x1367 - x1368;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1369 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
  }
  if (x8 != 0) {
    {
      auto [x1370, x1371, x1372, x1373, x1374, x1375, x1376] = extern_plonkRead_wom(ctx, cycle, "wom", {});
      // zirgen/circuit/recursion/wom.cpp:41
      {
        auto& reg = args[2][21 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1370);
        reg = x1370;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][22 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1371);
        reg = x1371;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][23 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1372);
        reg = x1372;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][24 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1373);
        reg = x1373;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][25 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1374);
        reg = x1374;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][26 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1375);
        reg = x1375;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][27 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1376);
        reg = x1376;
      }
      auto [x1377, x1378, x1379, x1380, x1381, x1382, x1383] = extern_plonkRead_wom(ctx, cycle, "wom", {});
      // zirgen/circuit/recursion/wom.cpp:41
      {
        auto& reg = args[2][0 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1377);
        reg = x1377;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][1 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1378);
        reg = x1378;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][2 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1379);
        reg = x1379;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][3 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1380);
        reg = x1380;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][4 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1381);
        reg = x1381;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][5 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1382);
        reg = x1382;
      }
      // zirgen/circuit/recursion/wom.cpp:43
      {
        auto& reg = args[2][6 * steps + cycle];
        assert(reg == Fp::invalid() || reg == x1383);
        reg = x1383;
      }
    }
    // top(recursion::Top)/mux(Mux)/checked_bytes(recursion::CheckedBytes)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/addr(Reg)(compiler/edsl/edsl.h:129)
    auto x1384 = args[2][21 * steps + ((cycle - 0) & mask)];
    assert(x1384 != Fp::invalid());
    // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)(zirgen/circuit/recursion/wom.cpp:71)
    auto x1385 = args[2][0 * steps + ((cycle - 1) & mask)];
    assert(x1385 != Fp::invalid());
    // zirgen/circuit/recursion/wom.cpp:72
    auto x1386 = x1384 - x1385;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x1387 = x0 - x1386;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x1388 = x1386 * x1387;
    // zirgen/circuit/recursion/wom.cpp:74
    if (x1388 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x1387 != 0) {
      // top(recursion::Top)/mux(Mux)/checked_bytes(recursion::CheckedBytes)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1389 = args[2][22 * steps + ((cycle - 0) & mask)];
      assert(x1389 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1390 = args[2][1 * steps + ((cycle - 1) & mask)];
      assert(x1390 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1391 = x1390 - x1389;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1391 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/checked_bytes(recursion::CheckedBytes)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1392 = args[2][23 * steps + ((cycle - 0) & mask)];
      assert(x1392 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1393 = args[2][2 * steps + ((cycle - 1) & mask)];
      assert(x1393 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1394 = x1393 - x1392;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1394 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/checked_bytes(recursion::CheckedBytes)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1395 = args[2][24 * steps + ((cycle - 0) & mask)];
      assert(x1395 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1396 = args[2][3 * steps + ((cycle - 1) & mask)];
      assert(x1396 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1397 = x1396 - x1395;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1397 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/checked_bytes(recursion::CheckedBytes)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1398 = args[2][25 * steps + ((cycle - 0) & mask)];
      assert(x1398 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1399 = args[2][4 * steps + ((cycle - 1) & mask)];
      assert(x1399 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1400 = x1399 - x1398;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1400 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/checked_bytes(recursion::CheckedBytes)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1401 = args[2][26 * steps + ((cycle - 0) & mask)];
      assert(x1401 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1402 = args[2][5 * steps + ((cycle - 1) & mask)];
      assert(x1402 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1403 = x1402 - x1401;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1403 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/checked_bytes(recursion::CheckedBytes)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1404 = args[2][27 * steps + ((cycle - 0) & mask)];
      assert(x1404 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1405 = args[2][6 * steps + ((cycle - 1) & mask)];
      assert(x1405 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1406 = x1405 - x1404;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1406 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
    // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/addr(Reg)(compiler/edsl/edsl.h:129)
    auto x1407 = args[2][0 * steps + ((cycle - 0) & mask)];
    assert(x1407 != Fp::invalid());
    // zirgen/circuit/recursion/wom.cpp:72
    auto x1408 = x1407 - x1384;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x1409 = x0 - x1408;
    // zirgen/circuit/recursion/wom.cpp:74
    auto x1410 = x1408 * x1409;
    // zirgen/circuit/recursion/wom.cpp:74
    if (x1410 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:74");
    if (x1409 != 0) {
      // top(recursion::Top)/mux(Mux)/checked_bytes(recursion::CheckedBytes)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1411 = args[2][22 * steps + ((cycle - 0) & mask)];
      assert(x1411 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[0](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1412 = args[2][1 * steps + ((cycle - 0) & mask)];
      assert(x1412 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1413 = x1411 - x1412;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1413 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/checked_bytes(recursion::CheckedBytes)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1414 = args[2][23 * steps + ((cycle - 0) & mask)];
      assert(x1414 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[1](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1415 = args[2][2 * steps + ((cycle - 0) & mask)];
      assert(x1415 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1416 = x1414 - x1415;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1416 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/checked_bytes(recursion::CheckedBytes)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1417 = args[2][24 * steps + ((cycle - 0) & mask)];
      assert(x1417 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[2](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1418 = args[2][3 * steps + ((cycle - 0) & mask)];
      assert(x1418 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1419 = x1417 - x1418;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1419 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/checked_bytes(recursion::CheckedBytes)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1420 = args[2][25 * steps + ((cycle - 0) & mask)];
      assert(x1420 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[3](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1421 = args[2][4 * steps + ((cycle - 0) & mask)];
      assert(x1421 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1422 = x1420 - x1421;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1422 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/checked_bytes(recursion::CheckedBytes)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1423 = args[2][26 * steps + ((cycle - 0) & mask)];
      assert(x1423 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[4](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1424 = args[2][5 * steps + ((cycle - 0) & mask)];
      assert(x1424 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1425 = x1423 - x1424;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1425 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
      // top(recursion::Top)/mux(Mux)/checked_bytes(recursion::CheckedBytes)/wom_body(recursion::WomBody)/plonk_body(PlonkBody)/recursion::impl::WomPlonkElement/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1426 = args[2][27 * steps + ((cycle - 0) & mask)];
      assert(x1426 != Fp::invalid());
      // top(recursion::Top)/recursion::WomHeader/element(recursion::impl::WomPlonkElement)/data[5](Reg)(zirgen/circuit/recursion/wom.cpp:78)
      auto x1427 = args[2][6 * steps + ((cycle - 0) & mask)];
      assert(x1427 != Fp::invalid());
      // zirgen/circuit/recursion/wom.cpp:78
      auto x1428 = x1426 - x1427;
      // zirgen/circuit/recursion/wom.cpp:78
      if (x1428 != 0) throw std::runtime_error("eqz failed at: zirgen/circuit/recursion/wom.cpp:78");
    }
  }
  return x1;
}

} // namespace risc0::circuit::recursion_bits129
// clang-format on
