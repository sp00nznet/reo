#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001735B0
// Address: 0x1735b0 - 0x1737a0
void sub_001735B0_0x1735b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1735b0u;

    // 0x1735b0: 0x27bdffd0
    ctx->pc = 0x1735b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1735b4: 0xffb10008
    ctx->pc = 0x1735b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1735b8: 0xffb20010
    ctx->pc = 0x1735b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1735bc: 0x80902d
    ctx->pc = 0x1735bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1735c0: 0xffb40020
    ctx->pc = 0x1735c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1735c4: 0xa0a02d
    ctx->pc = 0x1735c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1735c8: 0xffb00000
    ctx->pc = 0x1735c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1735cc: 0x282d
    ctx->pc = 0x1735ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1735d0: 0xffb30018
    ctx->pc = 0x1735d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1735d4: 0xffbf0028
    ctx->pc = 0x1735d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1735d8: 0x8e50003c
    ctx->pc = 0x1735d8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1735dc: 0x8e460040
    ctx->pc = 0x1735dcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1735e0: 0x200202d
    ctx->pc = 0x1735e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1735e4: 0x2610001f
    ctx->pc = 0x1735e4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 31));
    // 0x1735e8: 0xc0558b4
    ctx->pc = 0x1735E8u;
    SET_GPR_U32(ctx, 31, 0x1735F0u);
    ctx->pc = 0x1735ECu;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 6), 2));
    ctx->pc = 0x1562D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001562D0_0x1562d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1735F0u; }
    }
    if (ctx->pc != 0x1735F0u) { return; }
    ctx->pc = 0x1735F0u;
    // 0x1735f0: 0x8e420004
    ctx->pc = 0x1735f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1735f4: 0x2403ffe0
    ctx->pc = 0x1735f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x1735f8: 0x32440007
    ctx->pc = 0x1735f8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 18), 7));
    // 0x1735fc: 0x2442001f
    ctx->pc = 0x1735fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 31));
    // 0x173600: 0x2038824
    ctx->pc = 0x173600u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x173604: 0x431024
    ctx->pc = 0x173604u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x173608: 0x220182d
    ctx->pc = 0x173608u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17360c: 0xae420004
    ctx->pc = 0x17360cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x173610: 0x240102d
    ctx->pc = 0x173610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173614: 0xae20004c
    ctx->pc = 0x173614u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x173618: 0x10800019
    ctx->pc = 0x173618u;
    {
        const bool branch_taken_0x173618 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x17361Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
        if (branch_taken_0x173618) {
            ctx->pc = 0x173680u;
            goto label_173680;
        }
    }
    ctx->pc = 0x173620u;
    // 0x173620: 0x26440040
    ctx->pc = 0x173620u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 64));
label_173624:
    // 0x173624: 0x68450007
    ctx->pc = 0x173624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x173628: 0x6c450000
    ctx->pc = 0x173628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x17362c: 0x6846000f
    ctx->pc = 0x17362cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x173630: 0x6c460008
    ctx->pc = 0x173630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x173634: 0x68470017
    ctx->pc = 0x173634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x173638: 0x6c470010
    ctx->pc = 0x173638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x17363c: 0x6848001f
    ctx->pc = 0x17363cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x173640: 0x6c480018
    ctx->pc = 0x173640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x173644: 0xb0650007
    ctx->pc = 0x173644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x173648: 0xb4650000
    ctx->pc = 0x173648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17364c: 0xb066000f
    ctx->pc = 0x17364cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x173650: 0xb4660008
    ctx->pc = 0x173650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x173654: 0xb0670017
    ctx->pc = 0x173654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x173658: 0xb4670010
    ctx->pc = 0x173658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17365c: 0xb068001f
    ctx->pc = 0x17365cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x173660: 0xb4680018
    ctx->pc = 0x173660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x173664: 0x24420020
    ctx->pc = 0x173664u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32));
    // 0x173668: 0x0
    ctx->pc = 0x173668u;
    // NOP
    // 0x17366c: 0x0
    ctx->pc = 0x17366cu;
    // NOP
    // 0x173670: 0x1444ffec
    ctx->pc = 0x173670u;
    {
        const bool branch_taken_0x173670 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x173674u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
        if (branch_taken_0x173670) {
            ctx->pc = 0x173624u;
            goto label_173624;
        }
    }
    ctx->pc = 0x173678u;
    // 0x173678: 0x1000000f
    ctx->pc = 0x173678u;
    {
        const bool branch_taken_0x173678 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x173678) {
            ctx->pc = 0x1736B8u;
            goto label_1736b8;
        }
    }
    ctx->pc = 0x173680u;
label_173680:
    // 0x173680: 0x26440040
    ctx->pc = 0x173680u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 64));
label_173684:
    // 0x173684: 0xdc450000
    ctx->pc = 0x173684u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x173688: 0xdc460008
    ctx->pc = 0x173688u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17368c: 0xdc470010
    ctx->pc = 0x17368cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x173690: 0xdc480018
    ctx->pc = 0x173690u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x173694: 0xfc650000
    ctx->pc = 0x173694u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x173698: 0xfc660008
    ctx->pc = 0x173698u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x17369c: 0xfc670010
    ctx->pc = 0x17369cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x1736a0: 0xfc680018
    ctx->pc = 0x1736a0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x1736a4: 0x24420020
    ctx->pc = 0x1736a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32));
    // 0x1736a8: 0x0
    ctx->pc = 0x1736a8u;
    // NOP
    // 0x1736ac: 0x0
    ctx->pc = 0x1736acu;
    // NOP
    // 0x1736b0: 0x1444fff4
    ctx->pc = 0x1736B0u;
    {
        const bool branch_taken_0x1736b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x1736B4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
        if (branch_taken_0x1736b0) {
            ctx->pc = 0x173684u;
            goto label_173684;
        }
    }
    ctx->pc = 0x1736B8u;
label_1736b8:
    // 0x1736b8: 0x8c440000
    ctx->pc = 0x1736b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1736bc: 0x24130001
    ctx->pc = 0x1736bcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1736c0: 0x3c100023
    ctx->pc = 0x1736c0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    // 0x1736c4: 0xac640000
    ctx->pc = 0x1736c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1736c8: 0x26240078
    ctx->pc = 0x1736c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 120));
    // 0x1736cc: 0xae200050
    ctx->pc = 0x1736ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x1736d0: 0x2610ef88
    ctx->pc = 0x1736d0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294963080));
    // 0x1736d4: 0xae330044
    ctx->pc = 0x1736d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 19));
    // 0x1736d8: 0xc05a3d8
    ctx->pc = 0x1736D8u;
    SET_GPR_U32(ctx, 31, 0x1736E0u);
    ctx->pc = 0x1736DCu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    ctx->pc = 0x168F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00168F60_0x168f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1736E0u; }
    }
    if (ctx->pc != 0x1736E0u) { return; }
    ctx->pc = 0x1736E0u;
    // 0x1736e0: 0xc05cde8
    ctx->pc = 0x1736E0u;
    SET_GPR_U32(ctx, 31, 0x1736E8u);
    ctx->pc = 0x1736E4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 2316));
    ctx->pc = 0x1737A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001737A0_0x1737a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1736E8u; }
    }
    if (ctx->pc != 0x1736E8u) { return; }
    ctx->pc = 0x1736E8u;
    // 0x1736e8: 0xc05ce02
    ctx->pc = 0x1736E8u;
    SET_GPR_U32(ctx, 31, 0x1736F0u);
    ctx->pc = 0x1736ECu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 2380));
    ctx->pc = 0x173808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00173808_0x173808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1736F0u; }
    }
    if (ctx->pc != 0x1736F0u) { return; }
    ctx->pc = 0x1736F0u;
    // 0x1736f0: 0xc05ce18
    ctx->pc = 0x1736F0u;
    SET_GPR_U32(ctx, 31, 0x1736F8u);
    ctx->pc = 0x1736F4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 10944));
    ctx->pc = 0x173860u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00173860_0x173860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1736F8u; }
    }
    if (ctx->pc != 0x1736F8u) { return; }
    ctx->pc = 0x1736F8u;
    // 0x1736f8: 0xc05a6fe
    ctx->pc = 0x1736F8u;
    SET_GPR_U32(ctx, 31, 0x173700u);
    ctx->pc = 0x1736FCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 2444));
    ctx->pc = 0x169BF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169BF8_0x169bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173700u; }
    }
    if (ctx->pc != 0x173700u) { return; }
    ctx->pc = 0x173700u;
    // 0x173700: 0x262409a0
    ctx->pc = 0x173700u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 2464));
    // 0x173704: 0x200282d
    ctx->pc = 0x173704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173708: 0xc055798
    ctx->pc = 0x173708u;
    SET_GPR_U32(ctx, 31, 0x173710u);
    ctx->pc = 0x17370Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 400));
    ctx->pc = 0x155E60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00155E60_0x155e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173710u; }
    }
    if (ctx->pc != 0x173710u) { return; }
    ctx->pc = 0x173710u;
    // 0x173710: 0x26240b30
    ctx->pc = 0x173710u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 2864));
    // 0x173714: 0x24060190
    ctx->pc = 0x173714u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 400));
    // 0x173718: 0xc055798
    ctx->pc = 0x173718u;
    SET_GPR_U32(ctx, 31, 0x173720u);
    ctx->pc = 0x17371Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x155E60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00155E60_0x155e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173720u; }
    }
    if (ctx->pc != 0x173720u) { return; }
    ctx->pc = 0x173720u;
    // 0x173720: 0x220202d
    ctx->pc = 0x173720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173724: 0xc05d694
    ctx->pc = 0x173724u;
    SET_GPR_U32(ctx, 31, 0x17372Cu);
    ctx->pc = 0x173728u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 3264));
    ctx->pc = 0x175A50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175A50_0x175a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17372Cu; }
    }
    if (ctx->pc != 0x17372Cu) { return; }
    ctx->pc = 0x17372Cu;
    // 0x17372c: 0x220202d
    ctx->pc = 0x17372cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173730: 0x26251140
    ctx->pc = 0x173730u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 4416));
    // 0x173734: 0xc0599c8
    ctx->pc = 0x173734u;
    SET_GPR_U32(ctx, 31, 0x17373Cu);
    ctx->pc = 0x173738u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x166720u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00166720_0x166720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17373Cu; }
    }
    if (ctx->pc != 0x17373Cu) { return; }
    ctx->pc = 0x17373Cu;
    // 0x17373c: 0x5440000f
    ctx->pc = 0x17373Cu;
    {
        const bool branch_taken_0x17373c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17373c) {
            ctx->pc = 0x173740u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x17377Cu;
            goto label_17377c;
        }
    }
    ctx->pc = 0x173744u;
    // 0x173744: 0x240302d
    ctx->pc = 0x173744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173748: 0x280382d
    ctx->pc = 0x173748u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17374c: 0x220202d
    ctx->pc = 0x17374cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173750: 0xc05dd78
    ctx->pc = 0x173750u;
    SET_GPR_U32(ctx, 31, 0x173758u);
    ctx->pc = 0x173754u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 6816));
    ctx->pc = 0x1775E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001775E0_0x1775e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173758u; }
    }
    if (ctx->pc != 0x173758u) { return; }
    ctx->pc = 0x173758u;
    // 0x173758: 0xc05d146
    ctx->pc = 0x173758u;
    SET_GPR_U32(ctx, 31, 0x173760u);
    ctx->pc = 0x17375Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 10928));
    ctx->pc = 0x174518u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00174518_0x174518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173760u; }
    }
    if (ctx->pc != 0x173760u) { return; }
    ctx->pc = 0x173760u;
    // 0x173760: 0xc05ce64
    ctx->pc = 0x173760u;
    SET_GPR_U32(ctx, 31, 0x173768u);
    ctx->pc = 0x173764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x173990u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00173990_0x173990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173768u; }
    }
    if (ctx->pc != 0x173768u) { return; }
    ctx->pc = 0x173768u;
    // 0x173768: 0x14400004
    ctx->pc = 0x173768u;
    {
        const bool branch_taken_0x173768 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17376Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x173768) {
            ctx->pc = 0x17377Cu;
            goto label_17377c;
        }
    }
    ctx->pc = 0x173770u;
    // 0x173770: 0xae330048
    ctx->pc = 0x173770u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 19));
    // 0x173774: 0x220102d
    ctx->pc = 0x173774u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173778: 0xae33004c
    ctx->pc = 0x173778u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 19));
label_17377c:
    // 0x17377c: 0xdfb00000
    ctx->pc = 0x17377cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173780: 0xdfb10008
    ctx->pc = 0x173780u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173784: 0xdfb20010
    ctx->pc = 0x173784u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173788: 0xdfb30018
    ctx->pc = 0x173788u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17378c: 0xdfb40020
    ctx->pc = 0x17378cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173790: 0xdfbf0028
    ctx->pc = 0x173790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x173794: 0x3e00008
    ctx->pc = 0x173794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173798u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173624u: goto label_173624;
            case 0x173680u: goto label_173680;
            case 0x173684u: goto label_173684;
            case 0x1736B8u: goto label_1736b8;
            case 0x17377Cu: goto label_17377c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17379Cu;
    // 0x17379c: 0x0
    ctx->pc = 0x17379cu;
    // NOP
}
