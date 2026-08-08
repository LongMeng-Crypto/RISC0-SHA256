struct RecursionCheckedBytesInstLayout {
  Reg evalPoint;
  Reg keepCoeffs;
  Reg keepUpperState;
  Reg prepFull;
};
struct OneHotLayout {
  Reg bitAndElem;
  Reg bitOpShorts;
  Reg nop;
  Reg setGlobal;
  Reg shaFini;
  Reg shaInit;
  Reg shaLoad;
  Reg shaMix;
  Reg womFini;
  Reg womInit;
};
using Reg3LayoutArray = std::array<Reg, 3>;
struct RecursionMacroInstLayout {
  OneHotLayout opcode;
  Reg3LayoutArray operand;
};
struct RecursionMicroInstLayout {
  Reg opcode;
  Reg3LayoutArray operand;
};
using RecursionMicroInstLayout3LayoutArray = std::array<RecursionMicroInstLayout, 3>;
struct OneHot0Layout {
  Reg c0;
  Reg c1;
  Reg c2;
  Reg c3;
};
struct OneHot1Layout {
  Reg g0;
  Reg g1;
  Reg g2;
};
using Reg8LayoutArray = std::array<Reg, 8>;
struct RecursionPoseidon2MemInstLayout {
  Reg doMont;
  Reg keepState;
  Reg keepUpperState;
  Reg prepFull;
  OneHot1Layout group;
  Reg8LayoutArray inputs;
};
struct MuxLayout {
  RecursionCheckedBytesInstLayout checkedBytes;
  RecursionMacroInstLayout macroOps;
  RecursionMicroInstLayout3LayoutArray microOps;
  OneHot0Layout poseidon2Full;
  RecursionPoseidon2MemInstLayout poseidon2Load;
  RecursionPoseidon2MemInstLayout poseidon2Store;
};
struct OneHot2Layout {
  Reg checkedBytes;
  Reg macroOps;
  Reg microOps;
  Reg poseidon2Full;
  Reg poseidon2Load;
  Reg poseidon2Partial;
  Reg poseidon2Store;
};
struct RecursionCodeLayout {
  Reg writeAddr;
  MuxLayout inst;
  OneHot2Layout select;
};
struct RecursionTopLayout {
  RecursionCodeLayout code;
  RecursionMicroInstLayout3LayoutArray mux;
};
constexpr RecursionTopLayout kCodeLayout = RecursionTopLayout{
  .code = RecursionCodeLayout{
  .writeAddr = /*offset=*/0,   .inst = MuxLayout{
  .checkedBytes = RecursionCheckedBytesInstLayout{
  .evalPoint = /*offset=*/8,   .keepCoeffs = /*offset=*/9,   .keepUpperState = /*offset=*/10,   .prepFull = /*offset=*/11},   .macroOps = RecursionMacroInstLayout{
  .opcode = OneHotLayout{
  .bitAndElem = /*offset=*/11,   .bitOpShorts = /*offset=*/12,   .nop = /*offset=*/8,   .setGlobal = /*offset=*/17,   .shaFini = /*offset=*/14,   .shaInit = /*offset=*/13,   .shaLoad = /*offset=*/15,   .shaMix = /*offset=*/16,   .womFini = /*offset=*/10,   .womInit = /*offset=*/9},   .operand = Reg3LayoutArray{/*offset=*/18, /*offset=*/19, /*offset=*/20}},   .microOps = RecursionMicroInstLayout3LayoutArray{RecursionMicroInstLayout{
  .opcode = /*offset=*/8,   .operand = Reg3LayoutArray{/*offset=*/9, /*offset=*/10, /*offset=*/11}}, RecursionMicroInstLayout{
  .opcode = /*offset=*/12,   .operand = Reg3LayoutArray{/*offset=*/13, /*offset=*/14, /*offset=*/15}}, RecursionMicroInstLayout{
  .opcode = /*offset=*/16,   .operand = Reg3LayoutArray{/*offset=*/17, /*offset=*/18, /*offset=*/19}}},   .poseidon2Full = OneHot0Layout{
  .c0 = /*offset=*/8,   .c1 = /*offset=*/9,   .c2 = /*offset=*/10,   .c3 = /*offset=*/11},   .poseidon2Load = RecursionPoseidon2MemInstLayout{
  .doMont = /*offset=*/8,   .keepState = /*offset=*/9,   .keepUpperState = /*offset=*/10,   .prepFull = /*offset=*/11,   .group = OneHot1Layout{
  .g0 = /*offset=*/12,   .g1 = /*offset=*/13,   .g2 = /*offset=*/14},   .inputs = Reg8LayoutArray{/*offset=*/15, /*offset=*/16, /*offset=*/17, /*offset=*/18, /*offset=*/19, /*offset=*/20, /*offset=*/21, /*offset=*/22}},   .poseidon2Store = RecursionPoseidon2MemInstLayout{
  .doMont = /*offset=*/8,   .keepState = /*offset=*/9,   .keepUpperState = /*offset=*/10,   .prepFull = /*offset=*/11,   .group = OneHot1Layout{
  .g0 = /*offset=*/12,   .g1 = /*offset=*/13,   .g2 = /*offset=*/14},   .inputs = Reg8LayoutArray{/*offset=*/15, /*offset=*/16, /*offset=*/17, /*offset=*/18, /*offset=*/19, /*offset=*/20, /*offset=*/21, /*offset=*/22}}},   .select = OneHot2Layout{
  .checkedBytes = /*offset=*/7,   .macroOps = /*offset=*/2,   .microOps = /*offset=*/1,   .poseidon2Full = /*offset=*/4,   .poseidon2Load = /*offset=*/3,   .poseidon2Partial = /*offset=*/5,   .poseidon2Store = /*offset=*/6}},   .mux = RecursionMicroInstLayout3LayoutArray{RecursionMicroInstLayout{
  .opcode = /*offset=*/8,   .operand = Reg3LayoutArray{/*offset=*/9, /*offset=*/10, /*offset=*/11}}, RecursionMicroInstLayout{
  .opcode = /*offset=*/12,   .operand = Reg3LayoutArray{/*offset=*/13, /*offset=*/14, /*offset=*/15}}, RecursionMicroInstLayout{
  .opcode = /*offset=*/16,   .operand = Reg3LayoutArray{/*offset=*/17, /*offset=*/18, /*offset=*/19}}}};
using Reg6LayoutArray = std::array<Reg, 6>;
struct RecursionImplWomPlonkElementLayout {
  Reg addr;
  Reg6LayoutArray data;
};
using Reg31LayoutArray = std::array<Reg, 31>;
struct RecursionBitAndElemLayout {
  RecursionImplWomPlonkElementLayout inA;
  RecursionImplWomPlonkElementLayout inB;
  RecursionImplWomPlonkElementLayout out;
  Reg31LayoutArray bitsA;
  Reg31LayoutArray bitsB;
};
using Reg32LayoutArray = std::array<Reg, 32>;
struct RecursionBitOpShortsLayout {
  RecursionImplWomPlonkElementLayout inA;
  RecursionImplWomPlonkElementLayout inB;
  RecursionImplWomPlonkElementLayout out;
  Reg32LayoutArray bitsA;
  Reg32LayoutArray bitsB;
};
using Reg4LayoutArray = std::array<Reg, 4>;
using RecursionImplWomPlonkElementLayout4LayoutArray = std::array<RecursionImplWomPlonkElementLayout, 4>;
struct RecursionSetGlobalLayout {
  Reg4LayoutArray select;
  RecursionImplWomPlonkElementLayout4LayoutArray regs;
};
using Reg2LayoutArray = std::array<Reg, 2>;
struct RecursionShaCycleLayout {
  Reg aCarryHi;
  Reg aCarryLow;
  Reg eCarryHigh;
  Reg eCarryLow;
  Reg wCarryHigh;
  Reg wCarryLow;
  RecursionImplWomPlonkElementLayout io0;
  RecursionImplWomPlonkElementLayout io1;
  Reg32LayoutArray a;
  Reg2LayoutArray aRaw;
  Reg32LayoutArray e;
  Reg2LayoutArray eRaw;
  Reg32LayoutArray w;
  Reg2LayoutArray wRaw;
};
struct Mux3Layout {
  RecursionBitAndElemLayout bitAndElem;
  RecursionBitOpShortsLayout bitOpShorts;
  RecursionSetGlobalLayout setGlobal;
  RecursionShaCycleLayout shaFini;
  RecursionShaCycleLayout shaInit;
  RecursionShaCycleLayout shaLoad;
  RecursionShaCycleLayout shaMix;
};
struct OneHot4Layout {
  Reg add;
  Reg constop;
  Reg eq;
  Reg extractHigh2;
  Reg extractLow4;
  Reg inv;
  Reg mixRng;
  Reg mul;
  Reg readIopBody;
  Reg readIopHeader;
  Reg select;
  Reg sub;
};
struct RecursionMicroOpLayout {
  Reg extra;
  OneHot4Layout decode;
  RecursionImplWomPlonkElementLayout in0;
  RecursionImplWomPlonkElementLayout in1;
  RecursionImplWomPlonkElementLayout out;
  Reg3LayoutArray extractMux;
};
using RecursionMicroOpLayout3LayoutArray = std::array<RecursionMicroOpLayout, 3>;
struct Mux5Layout {
  RecursionImplWomPlonkElementLayout checkedBytes;
  Mux3Layout macroOps;
  RecursionMicroOpLayout3LayoutArray microOps;
};
constexpr Mux5Layout kDataLayout = Mux5Layout{
  .checkedBytes = RecursionImplWomPlonkElementLayout{
  .addr = /*offset=*/7,   .data = Reg6LayoutArray{/*offset=*/8, /*offset=*/9, /*offset=*/10, /*offset=*/11, /*offset=*/12, /*offset=*/13}},   .macroOps = Mux3Layout{
  .bitAndElem = RecursionBitAndElemLayout{
  .inA = RecursionImplWomPlonkElementLayout{
  .addr = /*offset=*/13,   .data = Reg6LayoutArray{/*offset=*/14, /*offset=*/15, /*offset=*/16, /*offset=*/17, /*offset=*/18, /*offset=*/19}},   .inB = RecursionImplWomPlonkElementLayout{
  .addr = /*offset=*/20,   .data = Reg6LayoutArray{/*offset=*/21, /*offset=*/22, /*offset=*/23, /*offset=*/24, /*offset=*/25, /*offset=*/26}},   .out = RecursionImplWomPlonkElementLayout{
  .addr = /*offset=*/27,   .data = Reg6LayoutArray{/*offset=*/28, /*offset=*/29, /*offset=*/30, /*offset=*/31, /*offset=*/32, /*offset=*/33}},   .bitsA = Reg31LayoutArray{/*offset=*/48, /*offset=*/50, /*offset=*/52, /*offset=*/54, /*offset=*/56, /*offset=*/58, /*offset=*/60, /*offset=*/62, /*offset=*/64, /*offset=*/66, /*offset=*/68, /*offset=*/70, /*offset=*/72, /*offset=*/74, /*offset=*/76, /*offset=*/78, /*offset=*/80, /*offset=*/82, /*offset=*/84, /*offset=*/86, /*offset=*/88, /*offset=*/90, /*offset=*/92, /*offset=*/94, /*offset=*/96, /*offset=*/98, /*offset=*/100, /*offset=*/102, /*offset=*/104, /*offset=*/106, /*offset=*/108},   .bitsB = Reg31LayoutArray{/*offset=*/49, /*offset=*/51, /*offset=*/53, /*offset=*/55, /*offset=*/57, /*offset=*/59, /*offset=*/61, /*offset=*/63, /*offset=*/65, /*offset=*/67, /*offset=*/69, /*offset=*/71, /*offset=*/73, /*offset=*/75, /*offset=*/77, /*offset=*/79, /*offset=*/81, /*offset=*/83, /*offset=*/85, /*offset=*/87, /*offset=*/89, /*offset=*/91, /*offset=*/93, /*offset=*/95, /*offset=*/97, /*offset=*/99, /*offset=*/101, /*offset=*/103, /*offset=*/105, /*offset=*/107, /*offset=*/109}},   .bitOpShorts = RecursionBitOpShortsLayout{
  .inA = RecursionImplWomPlonkElementLayout{
  .addr = /*offset=*/13,   .data = Reg6LayoutArray{/*offset=*/14, /*offset=*/15, /*offset=*/16, /*offset=*/17, /*offset=*/18, /*offset=*/19}},   .inB = RecursionImplWomPlonkElementLayout{
  .addr = /*offset=*/20,   .data = Reg6LayoutArray{/*offset=*/21, /*offset=*/22, /*offset=*/23, /*offset=*/24, /*offset=*/25, /*offset=*/26}},   .out = RecursionImplWomPlonkElementLayout{
  .addr = /*offset=*/27,   .data = Reg6LayoutArray{/*offset=*/28, /*offset=*/29, /*offset=*/30, /*offset=*/31, /*offset=*/32, /*offset=*/33}},   .bitsA = Reg32LayoutArray{/*offset=*/48, /*offset=*/49, /*offset=*/50, /*offset=*/51, /*offset=*/52, /*offset=*/53, /*offset=*/54, /*offset=*/55, /*offset=*/56, /*offset=*/57, /*offset=*/58, /*offset=*/59, /*offset=*/60, /*offset=*/61, /*offset=*/62, /*offset=*/63, /*offset=*/64, /*offset=*/65, /*offset=*/66, /*offset=*/67, /*offset=*/68, /*offset=*/69, /*offset=*/70, /*offset=*/71, /*offset=*/72, /*offset=*/73, /*offset=*/74, /*offset=*/75, /*offset=*/76, /*offset=*/77, /*offset=*/78, /*offset=*/79},   .bitsB = Reg32LayoutArray{/*offset=*/80, /*offset=*/81, /*offset=*/82, /*offset=*/83, /*offset=*/84, /*offset=*/85, /*offset=*/86, /*offset=*/87, /*offset=*/88, /*offset=*/89, /*offset=*/90, /*offset=*/91, /*offset=*/92, /*offset=*/93, /*offset=*/94, /*offset=*/95, /*offset=*/96, /*offset=*/97, /*offset=*/98, /*offset=*/99, /*offset=*/100, /*offset=*/101, /*offset=*/102, /*offset=*/103, /*offset=*/104, /*offset=*/105, /*offset=*/106, /*offset=*/107, /*offset=*/108, /*offset=*/109, /*offset=*/110, /*offset=*/111}},   .setGlobal = RecursionSetGlobalLayout{
  .select = Reg4LayoutArray{/*offset=*/13, /*offset=*/14, /*offset=*/15, /*offset=*/16},   .regs = RecursionImplWomPlonkElementLayout4LayoutArray{RecursionImplWomPlonkElementLayout{
  .addr = /*offset=*/17,   .data = Reg6LayoutArray{/*offset=*/18, /*offset=*/19, /*offset=*/20, /*offset=*/21, /*offset=*/22, /*offset=*/23}}, RecursionImplWomPlonkElementLayout{
  .addr = /*offset=*/24,   .data = Reg6LayoutArray{/*offset=*/25, /*offset=*/26, /*offset=*/27, /*offset=*/28, /*offset=*/29, /*offset=*/30}}, RecursionImplWomPlonkElementLayout{
  .addr = /*offset=*/31,   .data = Reg6LayoutArray{/*offset=*/32, /*offset=*/33, /*offset=*/34, /*offset=*/35, /*offset=*/36, /*offset=*/37}}, RecursionImplWomPlonkElementLayout{
  .addr = /*offset=*/38,   .data = Reg6LayoutArray{/*offset=*/39, /*offset=*/40, /*offset=*/41, /*offset=*/42, /*offset=*/43, /*offset=*/44}}}},   .shaFini = RecursionShaCycleLayout{
  .aCarryHi = /*offset=*/8,   .aCarryLow = /*offset=*/7,   .eCarryHigh = /*offset=*/10,   .eCarryLow = /*offset=*/9,   .wCarryHigh = /*offset=*/12,   .wCarryLow = /*offset=*/11,   .io0 = RecursionImplWomPlonkElementLayout{
  .addr = /*offset=*/13,   .data = Reg6LayoutArray{/*offset=*/14, /*offset=*/15, /*offset=*/16, /*offset=*/17, /*offset=*/18, /*offset=*/19}},   .io1 = RecursionImplWomPlonkElementLayout{
  .addr = /*offset=*/20,   .data = Reg6LayoutArray{/*offset=*/21, /*offset=*/22, /*offset=*/23, /*offset=*/24, /*offset=*/25, /*offset=*/26}},   .a = Reg32LayoutArray{/*offset=*/34, /*offset=*/35, /*offset=*/36, /*offset=*/37, /*offset=*/38, /*offset=*/39, /*offset=*/40, /*offset=*/41, /*offset=*/42, /*offset=*/43, /*offset=*/44, /*offset=*/45, /*offset=*/46, /*offset=*/47, /*offset=*/48, /*offset=*/49, /*offset=*/50, /*offset=*/51, /*offset=*/52, /*offset=*/53, /*offset=*/54, /*offset=*/55, /*offset=*/56, /*offset=*/57, /*offset=*/58, /*offset=*/59, /*offset=*/60, /*offset=*/61, /*offset=*/62, /*offset=*/63, /*offset=*/64, /*offset=*/65},   .aRaw = Reg2LayoutArray{/*offset=*/66, /*offset=*/67},   .e = Reg32LayoutArray{/*offset=*/68, /*offset=*/69, /*offset=*/70, /*offset=*/71, /*offset=*/72, /*offset=*/73, /*offset=*/74, /*offset=*/75, /*offset=*/76, /*offset=*/77, /*offset=*/78, /*offset=*/79, /*offset=*/80, /*offset=*/81, /*offset=*/82, /*offset=*/83, /*offset=*/84, /*offset=*/85, /*offset=*/86, /*offset=*/87, /*offset=*/88, /*offset=*/89, /*offset=*/90, /*offset=*/91, /*offset=*/92, /*offset=*/93, /*offset=*/94, /*offset=*/95, /*offset=*/96, /*offset=*/97, /*offset=*/98, /*offset=*/99},   .eRaw = Reg2LayoutArray{/*offset=*/100, /*offset=*/101},   .w = Reg32LayoutArray{/*offset=*/102, /*offset=*/103, /*offset=*/104, /*offset=*/105, /*offset=*/106, /*offset=*/107, /*offset=*/108, /*offset=*/109, /*offset=*/110, /*offset=*/111, /*offset=*/112, /*offset=*/113, /*offset=*/114, /*offset=*/115, /*offset=*/116, /*offset=*/117, /*offset=*/118, /*offset=*/119, /*offset=*/120, /*offset=*/121, /*offset=*/122, /*offset=*/123, /*offset=*/124, /*offset=*/125, /*offset=*/126, /*offset=*/127, /*offset=*/128, /*offset=*/129, /*offset=*/130, /*offset=*/131, /*offset=*/132, /*offset=*/133},   .wRaw = Reg2LayoutArray{/*offset=*/134, /*offset=*/135}},   .shaInit = RecursionShaCycleLayout{
  .aCarryHi = /*offset=*/8,   .aCarryLow = /*offset=*/7,   .eCarryHigh = /*offset=*/10,   .eCarryLow = /*offset=*/9,   .wCarryHigh = /*offset=*/12,   .wCarryLow = /*offset=*/11,   .io0 = RecursionImplWomPlonkElementLayout{
  .addr = /*offset=*/13,   .data = Reg6LayoutArray{/*offset=*/14, /*offset=*/15, /*offset=*/16, /*offset=*/17, /*offset=*/18, /*offset=*/19}},   .io1 = RecursionImplWomPlonkElementLayout{
  .addr = /*offset=*/20,   .data = Reg6LayoutArray{/*offset=*/21, /*offset=*/22, /*offset=*/23, /*offset=*/24, /*offset=*/25, /*offset=*/26}},   .a = Reg32LayoutArray{/*offset=*/34, /*offset=*/35, /*offset=*/36, /*offset=*/37, /*offset=*/38, /*offset=*/39, /*offset=*/40, /*offset=*/41, /*offset=*/42, /*offset=*/43, /*offset=*/44, /*offset=*/45, /*offset=*/46, /*offset=*/47, /*offset=*/48, /*offset=*/49, /*offset=*/50, /*offset=*/51, /*offset=*/52, /*offset=*/53, /*offset=*/54, /*offset=*/55, /*offset=*/56, /*offset=*/57, /*offset=*/58, /*offset=*/59, /*offset=*/60, /*offset=*/61, /*offset=*/62, /*offset=*/63, /*offset=*/64, /*offset=*/65},   .aRaw = Reg2LayoutArray{/*offset=*/66, /*offset=*/67},   .e = Reg32LayoutArray{/*offset=*/68, /*offset=*/69, /*offset=*/70, /*offset=*/71, /*offset=*/72, /*offset=*/73, /*offset=*/74, /*offset=*/75, /*offset=*/76, /*offset=*/77, /*offset=*/78, /*offset=*/79, /*offset=*/80, /*offset=*/81, /*offset=*/82, /*offset=*/83, /*offset=*/84, /*offset=*/85, /*offset=*/86, /*offset=*/87, /*offset=*/88, /*offset=*/89, /*offset=*/90, /*offset=*/91, /*offset=*/92, /*offset=*/93, /*offset=*/94, /*offset=*/95, /*offset=*/96, /*offset=*/97, /*offset=*/98, /*offset=*/99},   .eRaw = Reg2LayoutArray{/*offset=*/100, /*offset=*/101},   .w = Reg32LayoutArray{/*offset=*/102, /*offset=*/103, /*offset=*/104, /*offset=*/105, /*offset=*/106, /*offset=*/107, /*offset=*/108, /*offset=*/109, /*offset=*/110, /*offset=*/111, /*offset=*/112, /*offset=*/113, /*offset=*/114, /*offset=*/115, /*offset=*/116, /*offset=*/117, /*offset=*/118, /*offset=*/119, /*offset=*/120, /*offset=*/121, /*offset=*/122, /*offset=*/123, /*offset=*/124, /*offset=*/125, /*offset=*/126, /*offset=*/127, /*offset=*/128, /*offset=*/129, /*offset=*/130, /*offset=*/131, /*offset=*/132, /*offset=*/133},   .wRaw = Reg2LayoutArray{/*offset=*/134, /*offset=*/135}},   .shaLoad = RecursionShaCycleLayout{
  .aCarryHi = /*offset=*/8,   .aCarryLow = /*offset=*/7,   .eCarryHigh = /*offset=*/10,   .eCarryLow = /*offset=*/9,   .wCarryHigh = /*offset=*/12,   .wCarryLow = /*offset=*/11,   .io0 = RecursionImplWomPlonkElementLayout{
  .addr = /*offset=*/13,   .data = Reg6LayoutArray{/*offset=*/14, /*offset=*/15, /*offset=*/16, /*offset=*/17, /*offset=*/18, /*offset=*/19}},   .io1 = RecursionImplWomPlonkElementLayout{
  .addr = /*offset=*/20,   .data = Reg6LayoutArray{/*offset=*/21, /*offset=*/22, /*offset=*/23, /*offset=*/24, /*offset=*/25, /*offset=*/26}},   .a = Reg32LayoutArray{/*offset=*/34, /*offset=*/35, /*offset=*/36, /*offset=*/37, /*offset=*/38, /*offset=*/39, /*offset=*/40, /*offset=*/41, /*offset=*/42, /*offset=*/43, /*offset=*/44, /*offset=*/45, /*offset=*/46, /*offset=*/47, /*offset=*/48, /*offset=*/49, /*offset=*/50, /*offset=*/51, /*offset=*/52, /*offset=*/53, /*offset=*/54, /*offset=*/55, /*offset=*/56, /*offset=*/57, /*offset=*/58, /*offset=*/59, /*offset=*/60, /*offset=*/61, /*offset=*/62, /*offset=*/63, /*offset=*/64, /*offset=*/65},   .aRaw = Reg2LayoutArray{/*offset=*/66, /*offset=*/67},   .e = Reg32LayoutArray{/*offset=*/68, /*offset=*/69, /*offset=*/70, /*offset=*/71, /*offset=*/72, /*offset=*/73, /*offset=*/74, /*offset=*/75, /*offset=*/76, /*offset=*/77, /*offset=*/78, /*offset=*/79, /*offset=*/80, /*offset=*/81, /*offset=*/82, /*offset=*/83, /*offset=*/84, /*offset=*/85, /*offset=*/86, /*offset=*/87, /*offset=*/88, /*offset=*/89, /*offset=*/90, /*offset=*/91, /*offset=*/92, /*offset=*/93, /*offset=*/94, /*offset=*/95, /*offset=*/96, /*offset=*/97, /*offset=*/98, /*offset=*/99},   .eRaw = Reg2LayoutArray{/*offset=*/100, /*offset=*/101},   .w = Reg32LayoutArray{/*offset=*/102, /*offset=*/103, /*offset=*/104, /*offset=*/105, /*offset=*/106, /*offset=*/107, /*offset=*/108, /*offset=*/109, /*offset=*/110, /*offset=*/111, /*offset=*/112, /*offset=*/113, /*offset=*/114, /*offset=*/115, /*offset=*/116, /*offset=*/117, /*offset=*/118, /*offset=*/119, /*offset=*/120, /*offset=*/121, /*offset=*/122, /*offset=*/123, /*offset=*/124, /*offset=*/125, /*offset=*/126, /*offset=*/127, /*offset=*/128, /*offset=*/129, /*offset=*/130, /*offset=*/131, /*offset=*/132, /*offset=*/133},   .wRaw = Reg2LayoutArray{/*offset=*/134, /*offset=*/135}},   .shaMix = RecursionShaCycleLayout{
  .aCarryHi = /*offset=*/8,   .aCarryLow = /*offset=*/7,   .eCarryHigh = /*offset=*/10,   .eCarryLow = /*offset=*/9,   .wCarryHigh = /*offset=*/12,   .wCarryLow = /*offset=*/11,   .io0 = RecursionImplWomPlonkElementLayout{
  .addr = /*offset=*/13,   .data = Reg6LayoutArray{/*offset=*/14, /*offset=*/15, /*offset=*/16, /*offset=*/17, /*offset=*/18, /*offset=*/19}},   .io1 = RecursionImplWomPlonkElementLayout{
  .addr = /*offset=*/20,   .data = Reg6LayoutArray{/*offset=*/21, /*offset=*/22, /*offset=*/23, /*offset=*/24, /*offset=*/25, /*offset=*/26}},   .a = Reg32LayoutArray{/*offset=*/34, /*offset=*/35, /*offset=*/36, /*offset=*/37, /*offset=*/38, /*offset=*/39, /*offset=*/40, /*offset=*/41, /*offset=*/42, /*offset=*/43, /*offset=*/44, /*offset=*/45, /*offset=*/46, /*offset=*/47, /*offset=*/48, /*offset=*/49, /*offset=*/50, /*offset=*/51, /*offset=*/52, /*offset=*/53, /*offset=*/54, /*offset=*/55, /*offset=*/56, /*offset=*/57, /*offset=*/58, /*offset=*/59, /*offset=*/60, /*offset=*/61, /*offset=*/62, /*offset=*/63, /*offset=*/64, /*offset=*/65},   .aRaw = Reg2LayoutArray{/*offset=*/66, /*offset=*/67},   .e = Reg32LayoutArray{/*offset=*/68, /*offset=*/69, /*offset=*/70, /*offset=*/71, /*offset=*/72, /*offset=*/73, /*offset=*/74, /*offset=*/75, /*offset=*/76, /*offset=*/77, /*offset=*/78, /*offset=*/79, /*offset=*/80, /*offset=*/81, /*offset=*/82, /*offset=*/83, /*offset=*/84, /*offset=*/85, /*offset=*/86, /*offset=*/87, /*offset=*/88, /*offset=*/89, /*offset=*/90, /*offset=*/91, /*offset=*/92, /*offset=*/93, /*offset=*/94, /*offset=*/95, /*offset=*/96, /*offset=*/97, /*offset=*/98, /*offset=*/99},   .eRaw = Reg2LayoutArray{/*offset=*/100, /*offset=*/101},   .w = Reg32LayoutArray{/*offset=*/102, /*offset=*/103, /*offset=*/104, /*offset=*/105, /*offset=*/106, /*offset=*/107, /*offset=*/108, /*offset=*/109, /*offset=*/110, /*offset=*/111, /*offset=*/112, /*offset=*/113, /*offset=*/114, /*offset=*/115, /*offset=*/116, /*offset=*/117, /*offset=*/118, /*offset=*/119, /*offset=*/120, /*offset=*/121, /*offset=*/122, /*offset=*/123, /*offset=*/124, /*offset=*/125, /*offset=*/126, /*offset=*/127, /*offset=*/128, /*offset=*/129, /*offset=*/130, /*offset=*/131, /*offset=*/132, /*offset=*/133},   .wRaw = Reg2LayoutArray{/*offset=*/134, /*offset=*/135}}},   .microOps = RecursionMicroOpLayout3LayoutArray{RecursionMicroOpLayout{
  .extra = /*offset=*/138,   .decode = OneHot4Layout{
  .add = /*offset=*/127,   .constop = /*offset=*/126,   .eq = /*offset=*/131,   .extractHigh2 = /*offset=*/137,   .extractLow4 = /*offset=*/136,   .inv = /*offset=*/130,   .mixRng = /*offset=*/134,   .mul = /*offset=*/129,   .readIopBody = /*offset=*/133,   .readIopHeader = /*offset=*/132,   .select = /*offset=*/135,   .sub = /*offset=*/128},   .in0 = RecursionImplWomPlonkElementLayout{
  .addr = /*offset=*/7,   .data = Reg6LayoutArray{/*offset=*/8, /*offset=*/9, /*offset=*/10, /*offset=*/11, /*offset=*/12, /*offset=*/13}},   .in1 = RecursionImplWomPlonkElementLayout{
  .addr = /*offset=*/14,   .data = Reg6LayoutArray{/*offset=*/15, /*offset=*/16, /*offset=*/17, /*offset=*/18, /*offset=*/19, /*offset=*/20}},   .out = RecursionImplWomPlonkElementLayout{
  .addr = /*offset=*/21,   .data = Reg6LayoutArray{/*offset=*/22, /*offset=*/23, /*offset=*/24, /*offset=*/25, /*offset=*/26, /*offset=*/27}},   .extractMux = Reg3LayoutArray{/*offset=*/139, /*offset=*/140, /*offset=*/141}}, RecursionMicroOpLayout{
  .extra = /*offset=*/154,   .decode = OneHot4Layout{
  .add = /*offset=*/143,   .constop = /*offset=*/142,   .eq = /*offset=*/147,   .extractHigh2 = /*offset=*/153,   .extractLow4 = /*offset=*/152,   .inv = /*offset=*/146,   .mixRng = /*offset=*/150,   .mul = /*offset=*/145,   .readIopBody = /*offset=*/149,   .readIopHeader = /*offset=*/148,   .select = /*offset=*/151,   .sub = /*offset=*/144},   .in0 = RecursionImplWomPlonkElementLayout{
  .addr = /*offset=*/28,   .data = Reg6LayoutArray{/*offset=*/29, /*offset=*/30, /*offset=*/31, /*offset=*/32, /*offset=*/33, /*offset=*/34}},   .in1 = RecursionImplWomPlonkElementLayout{
  .addr = /*offset=*/35,   .data = Reg6LayoutArray{/*offset=*/36, /*offset=*/37, /*offset=*/38, /*offset=*/39, /*offset=*/40, /*offset=*/41}},   .out = RecursionImplWomPlonkElementLayout{
  .addr = /*offset=*/42,   .data = Reg6LayoutArray{/*offset=*/43, /*offset=*/44, /*offset=*/45, /*offset=*/46, /*offset=*/47, /*offset=*/48}},   .extractMux = Reg3LayoutArray{/*offset=*/155, /*offset=*/156, /*offset=*/157}}, RecursionMicroOpLayout{
  .extra = /*offset=*/170,   .decode = OneHot4Layout{
  .add = /*offset=*/159,   .constop = /*offset=*/158,   .eq = /*offset=*/163,   .extractHigh2 = /*offset=*/169,   .extractLow4 = /*offset=*/168,   .inv = /*offset=*/162,   .mixRng = /*offset=*/166,   .mul = /*offset=*/161,   .readIopBody = /*offset=*/165,   .readIopHeader = /*offset=*/164,   .select = /*offset=*/167,   .sub = /*offset=*/160},   .in0 = RecursionImplWomPlonkElementLayout{
  .addr = /*offset=*/49,   .data = Reg6LayoutArray{/*offset=*/50, /*offset=*/51, /*offset=*/52, /*offset=*/53, /*offset=*/54, /*offset=*/55}},   .in1 = RecursionImplWomPlonkElementLayout{
  .addr = /*offset=*/56,   .data = Reg6LayoutArray{/*offset=*/57, /*offset=*/58, /*offset=*/59, /*offset=*/60, /*offset=*/61, /*offset=*/62}},   .out = RecursionImplWomPlonkElementLayout{
  .addr = /*offset=*/63,   .data = Reg6LayoutArray{/*offset=*/64, /*offset=*/65, /*offset=*/66, /*offset=*/67, /*offset=*/68, /*offset=*/69}},   .extractMux = Reg3LayoutArray{/*offset=*/171, /*offset=*/172, /*offset=*/173}}}};
constexpr Reg32LayoutArray kOutLayout = Reg32LayoutArray{/*offset=*/0, /*offset=*/1, /*offset=*/2, /*offset=*/3, /*offset=*/4, /*offset=*/5, /*offset=*/6, /*offset=*/7, /*offset=*/8, /*offset=*/9, /*offset=*/10, /*offset=*/11, /*offset=*/12, /*offset=*/13, /*offset=*/14, /*offset=*/15, /*offset=*/16, /*offset=*/17, /*offset=*/18, /*offset=*/19, /*offset=*/20, /*offset=*/21, /*offset=*/22, /*offset=*/23, /*offset=*/24, /*offset=*/25, /*offset=*/26, /*offset=*/27, /*offset=*/28, /*offset=*/29, /*offset=*/30, /*offset=*/31};
