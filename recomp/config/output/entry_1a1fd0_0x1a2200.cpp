#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1a1fd0
// Address: 0x1a1fd0 - 0x1a2200
void entry_1a1fd0_0x1a2200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a1fd0u;

    // 0x1a1fd0: 0x27bdff60
    ctx->pc = 0x1a1fd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1a1fd4: 0xffbf0080
    ctx->pc = 0x1a1fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1a1fd8: 0x7fb60070
    ctx->pc = 0x1a1fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1a1fdc: 0x7fb50060
    ctx->pc = 0x1a1fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1a1fe0: 0x7fb40050
    ctx->pc = 0x1a1fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1a1fe4: 0x7fb30040
    ctx->pc = 0x1a1fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1a1fe8: 0x80a02d
    ctx->pc = 0x1a1fe8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1fec: 0x7fb20030
    ctx->pc = 0x1a1fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1a1ff0: 0xa0982d
    ctx->pc = 0x1a1ff0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1ff4: 0x7fb10020
    ctx->pc = 0x1a1ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a1ff8: 0xc0902d
    ctx->pc = 0x1a1ff8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1ffc: 0x7fb00010
    ctx->pc = 0x1a1ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a2000: 0x240202d
    ctx->pc = 0x1a2000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2004: 0xe7b50004
    ctx->pc = 0x1a2004u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1a2008: 0xc068790
    ctx->pc = 0x1A2008u;
    SET_GPR_U32(ctx, 31, 0x1A2010u);
    ctx->pc = 0x1A200Cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->pc = 0x1A1E40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1E40_0x1a1e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2010u; }
    }
    if (ctx->pc != 0x1A2010u) { return; }
    ctx->pc = 0x1A2010u;
    // 0x1a2010: 0x3c01002b
    ctx->pc = 0x1a2010u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a2014: 0x40a82d
    ctx->pc = 0x1a2014u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2018: 0x260202d
    ctx->pc = 0x1a2018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a201c: 0xc069368
    ctx->pc = 0x1A201Cu;
    SET_GPR_U32(ctx, 31, 0x1A2024u);
    ctx->pc = 0x1A2020u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294967216), GPR_U32(ctx, 19));
    ctx->pc = 0x1A4DA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4DA0_0x1a4da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2024u; }
    }
    if (ctx->pc != 0x1A2024u) { return; }
    ctx->pc = 0x1A2024u;
    // 0x1a2024: 0x3c04002b
    ctx->pc = 0x1a2024u;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1a2028: 0x260282d
    ctx->pc = 0x1a2028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a202c: 0x2484ffc0
    ctx->pc = 0x1a202cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967232));
    // 0x1a2030: 0x2a0302d
    ctx->pc = 0x1a2030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2034: 0xc06265c
    ctx->pc = 0x1A2034u;
    SET_GPR_U32(ctx, 31, 0x1A203Cu);
    ctx->pc = 0x1A2038u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x189970u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00189970_0x189970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A203Cu; }
    }
    if (ctx->pc != 0x1A203Cu) { return; }
    ctx->pc = 0x1A203Cu;
    // 0x1a203c: 0x3c04002b
    ctx->pc = 0x1a203cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1a2040: 0x24050020
    ctx->pc = 0x1a2040u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a2044: 0x2484ffc0
    ctx->pc = 0x1a2044u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967232));
    // 0x1a2048: 0xc06267c
    ctx->pc = 0x1A2048u;
    SET_GPR_U32(ctx, 31, 0x1A2050u);
    ctx->pc = 0x1A204Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1899F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001899F0_0x1899f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2050u; }
    }
    if (ctx->pc != 0x1A2050u) { return; }
    ctx->pc = 0x1A2050u;
    // 0x1a2050: 0x40802d
    ctx->pc = 0x1a2050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2054: 0xc068ab4
    ctx->pc = 0x1A2054u;
    SET_GPR_U32(ctx, 31, 0x1A205Cu);
    ctx->pc = 0x1A2058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A2AD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2AD0_0x1a2ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A205Cu; }
    }
    if (ctx->pc != 0x1A205Cu) { return; }
    ctx->pc = 0x1A205Cu;
    // 0x1a205c: 0xa6000000
    ctx->pc = 0x1a205cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a2060: 0x3c04002b
    ctx->pc = 0x1a2060u;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1a2064: 0x40b02d
    ctx->pc = 0x1a2064u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2068: 0xa6020002
    ctx->pc = 0x1a2068u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a206c: 0x22880
    ctx->pc = 0x1a206cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a2070: 0x2484ffc0
    ctx->pc = 0x1a2070u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967232));
    // 0x1a2074: 0xc06267c
    ctx->pc = 0x1A2074u;
    SET_GPR_U32(ctx, 31, 0x1A207Cu);
    ctx->pc = 0x1A2078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1899F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001899F0_0x1899f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A207Cu; }
    }
    if (ctx->pc != 0x1A207Cu) { return; }
    ctx->pc = 0x1A207Cu;
    // 0x1a207c: 0xae020010
    ctx->pc = 0x1a207cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1a2080: 0x3c010024
    ctx->pc = 0x1a2080u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x1a2084: 0xae000014
    ctx->pc = 0x1a2084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1a2088: 0x4480a000
    ctx->pc = 0x1a2088u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x1a208c: 0xae150018
    ctx->pc = 0x1a208cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 21));
    // 0x1a2090: 0x8e150010
    ctx->pc = 0x1a2090u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a2094: 0xc4351e90
    ctx->pc = 0x1a2094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a2098: 0x10000018
    ctx->pc = 0x1A2098u;
    {
        const bool branch_taken_0x1a2098 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A209Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a2098) {
            ctx->pc = 0x1A20FCu;
            goto label_1a20fc;
        }
    }
    ctx->pc = 0x1A20A0u;
label_1a20a0:
    // 0x1a20a0: 0x24050008
    ctx->pc = 0x1a20a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a20a4: 0x2484ffc0
    ctx->pc = 0x1a20a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967232));
    // 0x1a20a8: 0xc06267c
    ctx->pc = 0x1A20A8u;
    SET_GPR_U32(ctx, 31, 0x1A20B0u);
    ctx->pc = 0x1A20ACu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1899F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001899F0_0x1899f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A20B0u; }
    }
    if (ctx->pc != 0x1A20B0u) { return; }
    ctx->pc = 0x1A20B0u;
    // 0x1a20b0: 0xaea20000
    ctx->pc = 0x1a20b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x1a20b4: 0x240282d
    ctx->pc = 0x1a20b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a20b8: 0x8ea40000
    ctx->pc = 0x1a20b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1a20bc: 0xc068880
    ctx->pc = 0x1A20BCu;
    SET_GPR_U32(ctx, 31, 0x1A20C4u);
    ctx->pc = 0x1A20C0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A2200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2200_0x1a2200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A20C4u; }
    }
    if (ctx->pc != 0x1A20C4u) { return; }
    ctx->pc = 0x1A20C4u;
    // 0x1a20c4: 0xc068a74
    ctx->pc = 0x1A20C4u;
    SET_GPR_U32(ctx, 31, 0x1A20CCu);
    ctx->pc = 0x1A20C8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->pc = 0x1A29D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A29D0_0x1a29d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A20CCu; }
    }
    if (ctx->pc != 0x1A20CCu) { return; }
    ctx->pc = 0x1A20CCu;
    // 0x1a20cc: 0x46140036
    ctx->pc = 0x1a20ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a20d0: 0x45010002
    ctx->pc = 0x1A20D0u;
    {
        const bool branch_taken_0x1a20d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a20d0) {
            ctx->pc = 0x1A20DCu;
            goto label_1a20dc;
        }
    }
    ctx->pc = 0x1A20D8u;
    // 0x1a20d8: 0x46000506
    ctx->pc = 0x1a20d8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1a20dc:
    // 0x1a20dc: 0xc068a94
    ctx->pc = 0x1A20DCu;
    SET_GPR_U32(ctx, 31, 0x1A20E4u);
    ctx->pc = 0x1A20E0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->pc = 0x1A2A50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2A50_0x1a2a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A20E4u; }
    }
    if (ctx->pc != 0x1A20E4u) { return; }
    ctx->pc = 0x1A20E4u;
    // 0x1a20e4: 0x46150034
    ctx->pc = 0x1a20e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a20e8: 0x45000002
    ctx->pc = 0x1A20E8u;
    {
        const bool branch_taken_0x1a20e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a20e8) {
            ctx->pc = 0x1A20F4u;
            goto label_1a20f4;
        }
    }
    ctx->pc = 0x1A20F0u;
    // 0x1a20f0: 0x46000546
    ctx->pc = 0x1a20f0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_1a20f4:
    // 0x1a20f4: 0x26b50004
    ctx->pc = 0x1a20f4u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4));
    // 0x1a20f8: 0x26310001
    ctx->pc = 0x1a20f8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1a20fc:
    // 0x1a20fc: 0x236102a
    ctx->pc = 0x1a20fcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 22)));
    // 0x1a2100: 0x1440ffe7
    ctx->pc = 0x1A2100u;
    {
        const bool branch_taken_0x1a2100 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A2104u;
        SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
        if (branch_taken_0x1a2100) {
            ctx->pc = 0x1A20A0u;
            goto label_1a20a0;
        }
    }
    ctx->pc = 0x1A2108u;
    // 0x1a2108: 0xe6150004
    ctx->pc = 0x1a2108u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1a210c: 0x240202d
    ctx->pc = 0x1a210cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2110: 0x27a5009c
    ctx->pc = 0x1a2110u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 156));
    // 0x1a2114: 0xc068780
    ctx->pc = 0x1A2114u;
    SET_GPR_U32(ctx, 31, 0x1A211Cu);
    ctx->pc = 0x1A2118u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    ctx->pc = 0x1A1E00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1E00_0x1a1e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A211Cu; }
    }
    if (ctx->pc != 0x1A211Cu) { return; }
    ctx->pc = 0x1A211Cu;
    // 0x1a211c: 0x10400007
    ctx->pc = 0x1A211Cu;
    {
        const bool branch_taken_0x1a211c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a211c) {
            ctx->pc = 0x1A213Cu;
            goto label_1a213c;
        }
    }
    ctx->pc = 0x1A2124u;
    // 0x1a2124: 0x96020000
    ctx->pc = 0x1a2124u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a2128: 0x34428000
    ctx->pc = 0x1a2128u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32768));
    // 0x1a212c: 0xa6020000
    ctx->pc = 0x1a212cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a2130: 0xc7a0009c
    ctx->pc = 0x1a2130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2134: 0x10000005
    ctx->pc = 0x1A2134u;
    {
        const bool branch_taken_0x1a2134 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A2138u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        if (branch_taken_0x1a2134) {
            ctx->pc = 0x1A214Cu;
            goto label_1a214c;
        }
    }
    ctx->pc = 0x1A213Cu;
label_1a213c:
    // 0x1a213c: 0x96020000
    ctx->pc = 0x1a213cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a2140: 0x30427fff
    ctx->pc = 0x1a2140u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32767));
    // 0x1a2144: 0xa6020000
    ctx->pc = 0x1a2144u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a2148: 0xae00000c
    ctx->pc = 0x1a2148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1a214c:
    // 0x1a214c: 0x1000000a
    ctx->pc = 0x1A214Cu;
    {
        const bool branch_taken_0x1a214c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A2150u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a214c) {
            ctx->pc = 0x1A2178u;
            goto label_1a2178;
        }
    }
    ctx->pc = 0x1A2154u;
label_1a2154:
    // 0x1a2154: 0x8e030010
    ctx->pc = 0x1a2154u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a2158: 0x52080
    ctx->pc = 0x1a2158u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a215c: 0x3c01002b
    ctx->pc = 0x1a215cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a2160: 0x24a50001
    ctx->pc = 0x1a2160u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a2164: 0x8c22ffb0
    ctx->pc = 0x1a2164u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294967216)));
    // 0x1a2168: 0x642021
    ctx->pc = 0x1a2168u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a216c: 0x8c830000
    ctx->pc = 0x1a216cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a2170: 0x621023
    ctx->pc = 0x1a2170u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a2174: 0xac820000
    ctx->pc = 0x1a2174u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1a2178:
    // 0x1a2178: 0xb6102a
    ctx->pc = 0x1a2178u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 22)));
    // 0x1a217c: 0x1440fff5
    ctx->pc = 0x1A217Cu;
    {
        const bool branch_taken_0x1a217c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A2180u;
        SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
        if (branch_taken_0x1a217c) {
            ctx->pc = 0x1A2154u;
            goto label_1a2154;
        }
    }
    ctx->pc = 0x1A2184u;
    // 0x1a2184: 0x8e030010
    ctx->pc = 0x1a2184u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a2188: 0x8c22ffb0
    ctx->pc = 0x1a2188u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294967216)));
    // 0x1a218c: 0x24040004
    ctx->pc = 0x1a218cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a2190: 0x280282d
    ctx->pc = 0x1a2190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2194: 0x621023
    ctx->pc = 0x1a2194u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a2198: 0xae020010
    ctx->pc = 0x1a2198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_1a219c:
    // 0x1a219c: 0x8e030000
    ctx->pc = 0x1a219cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a21a0: 0x2484ffff
    ctx->pc = 0x1a21a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1a21a4: 0x8e020004
    ctx->pc = 0x1a21a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a21a8: 0xaca30000
    ctx->pc = 0x1a21a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1a21ac: 0x26100008
    ctx->pc = 0x1a21acu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8));
    // 0x1a21b0: 0xaca20004
    ctx->pc = 0x1a21b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1a21b4: 0x1c80fff9
    ctx->pc = 0x1A21B4u;
    {
        const bool branch_taken_0x1a21b4 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1A21B8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
        if (branch_taken_0x1a21b4) {
            ctx->pc = 0x1A219Cu;
            goto label_1a219c;
        }
    }
    ctx->pc = 0x1A21BCu;
    // 0x1a21bc: 0xae930014
    ctx->pc = 0x1a21bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 19));
    // 0x1a21c0: 0x24020001
    ctx->pc = 0x1a21c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a21c4: 0xdfbf0080
    ctx->pc = 0x1a21c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a21c8: 0xc7b50004
    ctx->pc = 0x1a21c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a21cc: 0x7bb60070
    ctx->pc = 0x1a21ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a21d0: 0xc7b40000
    ctx->pc = 0x1a21d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a21d4: 0x7bb50060
    ctx->pc = 0x1a21d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a21d8: 0x7bb40050
    ctx->pc = 0x1a21d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a21dc: 0x7bb30040
    ctx->pc = 0x1a21dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a21e0: 0x7bb20030
    ctx->pc = 0x1a21e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a21e4: 0x7bb10020
    ctx->pc = 0x1a21e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a21e8: 0x7bb00010
    ctx->pc = 0x1a21e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a21ec: 0x3e00008
    ctx->pc = 0x1A21ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A21F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A20A0u: goto label_1a20a0;
            case 0x1A20DCu: goto label_1a20dc;
            case 0x1A20F4u: goto label_1a20f4;
            case 0x1A20FCu: goto label_1a20fc;
            case 0x1A213Cu: goto label_1a213c;
            case 0x1A214Cu: goto label_1a214c;
            case 0x1A2154u: goto label_1a2154;
            case 0x1A2178u: goto label_1a2178;
            case 0x1A219Cu: goto label_1a219c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A21F4u;
    // 0x1a21f4: 0x0
    ctx->pc = 0x1a21f4u;
    // NOP
    // 0x1a21f8: 0x0
    ctx->pc = 0x1a21f8u;
    // NOP
    // 0x1a21fc: 0x0
    ctx->pc = 0x1a21fcu;
    // NOP
}
