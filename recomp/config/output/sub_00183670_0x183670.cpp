#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00183670
// Address: 0x183670 - 0x183fc8
void sub_00183670_0x183670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x183670u;

    // 0x183670: 0x27bdff80
    ctx->pc = 0x183670u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x183674: 0xffb70068
    ctx->pc = 0x183674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x183678: 0x80b82d
    ctx->pc = 0x183678u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18367c: 0x171040
    ctx->pc = 0x18367cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 23), 1));
    // 0x183680: 0xffb10038
    ctx->pc = 0x183680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x183684: 0x571021
    ctx->pc = 0x183684u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x183688: 0xffb00030
    ctx->pc = 0x183688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x18368c: 0x21140
    ctx->pc = 0x18368cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
    // 0x183690: 0xffb20040
    ctx->pc = 0x183690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x183694: 0x571021
    ctx->pc = 0x183694u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x183698: 0xffb30048
    ctx->pc = 0x183698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x18369c: 0x21080
    ctx->pc = 0x18369cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1836a0: 0xffb40050
    ctx->pc = 0x1836a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1836a4: 0xffb50058
    ctx->pc = 0x1836a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x1836a8: 0x3c110023
    ctx->pc = 0x1836a8u;
    SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
    // 0x1836ac: 0x2631fa18
    ctx->pc = 0x1836acu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294965784));
    // 0x1836b0: 0x2228821
    ctx->pc = 0x1836b0u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1836b4: 0xffb60060
    ctx->pc = 0x1836b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1836b8: 0xffbe0070
    ctx->pc = 0x1836b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x1836bc: 0xffbf0078
    ctx->pc = 0x1836bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x1836c0: 0xc062210
    ctx->pc = 0x1836C0u;
    SET_GPR_U32(ctx, 31, 0x1836C8u);
    ctx->pc = 0x188840u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00188840_0x188840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1836C8u; }
    }
    if (ctx->pc != 0x1836C8u) { return; }
    ctx->pc = 0x1836C8u;
    // 0x1836c8: 0x14400005
    ctx->pc = 0x1836C8u;
    {
        const bool branch_taken_0x1836c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1836CCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2200));
        if (branch_taken_0x1836c8) {
            ctx->pc = 0x1836E0u;
            goto label_1836e0;
        }
    }
    ctx->pc = 0x1836D0u;
    // 0x1836d0: 0x3c028101
    ctx->pc = 0x1836d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x1836d4: 0x10000230
    ctx->pc = 0x1836D4u;
    {
        const bool branch_taken_0x1836d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1836D8u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 19));
        if (branch_taken_0x1836d4) {
            ctx->pc = 0x183F98u;
            goto label_183f98;
        }
    }
    ctx->pc = 0x1836DCu;
    // 0x1836dc: 0x0
    ctx->pc = 0x1836dcu;
    // NOP
label_1836e0:
    // 0x1836e0: 0x3c020028
    ctx->pc = 0x1836e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)40 << 16));
    // 0x1836e4: 0x2e63018
    ctx->pc = 0x1836e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)(uint32_t)result); }
    // 0x1836e8: 0x24475b48
    ctx->pc = 0x1836e8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 23368));
    // 0x1836ec: 0x24e90004
    ctx->pc = 0x1836ecu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 7), 4));
    // 0x1836f0: 0x24ec0808
    ctx->pc = 0x1836f0u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 7), 2056));
    // 0x1836f4: 0x240bffff
    ctx->pc = 0x1836f4u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1836f8: 0x3c0d0024
    ctx->pc = 0x1836f8u;
    SET_GPR_U32(ctx, 13, ((uint32_t)36 << 16));
    // 0x1836fc: 0x2e0202d
    ctx->pc = 0x1836fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183700: 0x24c20890
    ctx->pc = 0x183700u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 2192));
    // 0x183704: 0x24c30800
    ctx->pc = 0x183704u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 2048));
    // 0x183708: 0x695021
    ctx->pc = 0x183708u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x18370c: 0x671821
    ctx->pc = 0x18370cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x183710: 0x474021
    ctx->pc = 0x183710u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x183714: 0x491021
    ctx->pc = 0x183714u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x183718: 0xcc3021
    ctx->pc = 0x183718u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x18371c: 0xac400000
    ctx->pc = 0x18371cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x183720: 0xac6b0000
    ctx->pc = 0x183720u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 11));
    // 0x183724: 0xad4b0000
    ctx->pc = 0x183724u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 11));
    // 0x183728: 0xad000000
    ctx->pc = 0x183728u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x18372c: 0x25a917c8
    ctx->pc = 0x18372cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 13), 6088));
    // 0x183730: 0x81230000
    ctx->pc = 0x183730u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x183734: 0x81270001
    ctx->pc = 0x183734u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x183738: 0xa0c30000
    ctx->pc = 0x183738u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x18373c: 0xa0c70001
    ctx->pc = 0x18373cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x183740: 0xc061af8
    ctx->pc = 0x183740u;
    SET_GPR_U32(ctx, 31, 0x183748u);
    ctx->pc = 0x183744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x186BE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00186BE0_0x186be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183748u; }
    }
    if (ctx->pc != 0x183748u) { return; }
    ctx->pc = 0x183748u;
    // 0x183748: 0x10400206
    ctx->pc = 0x183748u;
    {
        const bool branch_taken_0x183748 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x183748) {
            ctx->pc = 0x183F64u;
            goto label_183f64;
        }
    }
    ctx->pc = 0x183750u;
    // 0x183750: 0xc061b04
    ctx->pc = 0x183750u;
    SET_GPR_U32(ctx, 31, 0x183758u);
    ctx->pc = 0x183754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x186C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00186C10_0x186c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183758u; }
    }
    if (ctx->pc != 0x183758u) { return; }
    ctx->pc = 0x183758u;
    // 0x183758: 0x10400202
    ctx->pc = 0x183758u;
    {
        const bool branch_taken_0x183758 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18375Cu;
        SET_GPR_U32(ctx, 16, ((uint32_t)36 << 16));
        if (branch_taken_0x183758) {
            ctx->pc = 0x183F64u;
            goto label_183f64;
        }
    }
    ctx->pc = 0x183760u;
    // 0x183760: 0x220202d
    ctx->pc = 0x183760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183764: 0x260517d0
    ctx->pc = 0x183764u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 6096));
    // 0x183768: 0xc042d10
    ctx->pc = 0x183768u;
    SET_GPR_U32(ctx, 31, 0x183770u);
    ctx->pc = 0x18376Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 27));
    ctx->pc = 0x10B440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B440_0x10b440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183770u; }
    }
    if (ctx->pc != 0x183770u) { return; }
    ctx->pc = 0x183770u;
    // 0x183770: 0x10400010
    ctx->pc = 0x183770u;
    {
        const bool branch_taken_0x183770 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x183774u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x183770) {
            ctx->pc = 0x1837B4u;
            goto label_1837b4;
        }
    }
    ctx->pc = 0x183778u;
    // 0x183778: 0x2414001f
    ctx->pc = 0x183778u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 31));
    // 0x18377c: 0x2622014c
    ctx->pc = 0x18377cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 332));
label_183780:
    // 0x183780: 0x2694ffff
    ctx->pc = 0x183780u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x183784: 0xac430000
    ctx->pc = 0x183784u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x183788: 0x0
    ctx->pc = 0x183788u;
    // NOP
    // 0x18378c: 0x0
    ctx->pc = 0x18378cu;
    // NOP
    // 0x183790: 0x0
    ctx->pc = 0x183790u;
    // NOP
    // 0x183794: 0x681fffa
    ctx->pc = 0x183794u;
    {
        const bool branch_taken_0x183794 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x183798u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
        if (branch_taken_0x183794) {
            ctx->pc = 0x183780u;
            goto label_183780;
        }
    }
    ctx->pc = 0x18379Cu;
    // 0x18379c: 0x2e0202d
    ctx->pc = 0x18379cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1837a0: 0x3a0282d
    ctx->pc = 0x1837a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1837a4: 0xc061d5e
    ctx->pc = 0x1837A4u;
    SET_GPR_U32(ctx, 31, 0x1837ACu);
    ctx->pc = 0x1837A8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 208));
    ctx->pc = 0x187578u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00187578_0x187578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1837ACu; }
    }
    if (ctx->pc != 0x1837ACu) { return; }
    ctx->pc = 0x1837ACu;
    // 0x1837ac: 0x104001ed
    ctx->pc = 0x1837ACu;
    {
        const bool branch_taken_0x1837ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1837ac) {
            ctx->pc = 0x183F64u;
            goto label_183f64;
        }
    }
    ctx->pc = 0x1837B4u;
label_1837b4:
    // 0x1837b4: 0x220202d
    ctx->pc = 0x1837b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1837b8: 0x282d
    ctx->pc = 0x1837b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1837bc: 0xc041f1a
    ctx->pc = 0x1837BCu;
    SET_GPR_U32(ctx, 31, 0x1837C4u);
    ctx->pc = 0x1837C0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 40));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1837C4u; }
    }
    if (ctx->pc != 0x1837C4u) { return; }
    ctx->pc = 0x1837C4u;
    // 0x1837c4: 0x260517d0
    ctx->pc = 0x1837c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 6096));
    // 0x1837c8: 0x68a20007
    ctx->pc = 0x1837c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1837cc: 0x6ca20000
    ctx->pc = 0x1837ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1837d0: 0x68a3000f
    ctx->pc = 0x1837d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1837d4: 0x6ca30008
    ctx->pc = 0x1837d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1837d8: 0x68a40017
    ctx->pc = 0x1837d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1837dc: 0x6ca40010
    ctx->pc = 0x1837dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1837e0: 0xb2220007
    ctx->pc = 0x1837e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1837e4: 0xb6220000
    ctx->pc = 0x1837e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1837e8: 0xb223000f
    ctx->pc = 0x1837e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1837ec: 0xb6230008
    ctx->pc = 0x1837ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1837f0: 0xb2240017
    ctx->pc = 0x1837f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1837f4: 0xb6240010
    ctx->pc = 0x1837f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1837f8: 0x8ca20018
    ctx->pc = 0x1837f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1837fc: 0xae220018
    ctx->pc = 0x1837fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x183800: 0x3c050024
    ctx->pc = 0x183800u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x183804: 0x220202d
    ctx->pc = 0x183804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183808: 0xc042aee
    ctx->pc = 0x183808u;
    SET_GPR_U32(ctx, 31, 0x183810u);
    ctx->pc = 0x18380Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 6128));
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ABB8_0x10abb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183810u; }
    }
    if (ctx->pc != 0x183810u) { return; }
    ctx->pc = 0x183810u;
    // 0x183810: 0x24040400
    ctx->pc = 0x183810u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1024));
    // 0x183814: 0x8fa20000
    ctx->pc = 0x183814u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183818: 0x2407ff00
    ctx->pc = 0x183818u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x18381c: 0x97a30000
    ctx->pc = 0x18381cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183820: 0x240a0002
    ctx->pc = 0x183820u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 2));
    // 0x183824: 0x82001a
    ctx->pc = 0x183824u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x183828: 0x2409002b
    ctx->pc = 0x183828u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 43));
    // 0x18382c: 0xa6230028
    ctx->pc = 0x18382cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x183830: 0x50400001
    ctx->pc = 0x183830u;
    {
        const bool branch_taken_0x183830 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x183830) {
            ctx->pc = 0x183834u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x183838u;
            goto label_183838;
        }
    }
    ctx->pc = 0x183838u;
label_183838:
    // 0x183838: 0x97a20004
    ctx->pc = 0x183838u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x18383c: 0x24080100
    ctx->pc = 0x18383cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 256));
    // 0x183840: 0x8fa30008
    ctx->pc = 0x183840u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x183844: 0x2406ffff
    ctx->pc = 0x183844u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x183848: 0xa622002c
    ctx->pc = 0x183848u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x18384c: 0xa627002e
    ctx->pc = 0x18384cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 46), (uint16_t)GPR_U32(ctx, 7));
    // 0x183850: 0x2812
    ctx->pc = 0x183850u;
    SET_GPR_U32(ctx, 5, ctx->lo);
    // 0x183854: 0x30a2ffff
    ctx->pc = 0x183854u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 65535));
    // 0x183858: 0xa625002a
    ctx->pc = 0x183858u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 5));
    // 0x18385c: 0x62001a
    ctx->pc = 0x18385cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x183860: 0x9625002c
    ctx->pc = 0x183860u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x183864: 0xae240154
    ctx->pc = 0x183864u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 4));
    // 0x183868: 0xa22a0150
    ctx->pc = 0x183868u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 336), (uint8_t)GPR_U32(ctx, 10));
    // 0x18386c: 0xa2290151
    ctx->pc = 0x18386cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 337), (uint8_t)GPR_U32(ctx, 9));
    // 0x183870: 0xae280158
    ctx->pc = 0x183870u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 8));
    // 0x183874: 0xae20003c
    ctx->pc = 0x183874u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    // 0x183878: 0xae200048
    ctx->pc = 0x183878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    // 0x18387c: 0xae20004c
    ctx->pc = 0x18387cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x183880: 0x3812
    ctx->pc = 0x183880u;
    SET_GPR_U32(ctx, 7, ctx->lo);
    // 0x183884: 0xa2001b
    ctx->pc = 0x183884u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 5) / divisor; ctx->hi = GPR_U32(ctx, 2) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,5); } }
    // 0x183888: 0xae270030
    ctx->pc = 0x183888u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 7));
    // 0x18388c: 0x8fa40004
    ctx->pc = 0x18388cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x183890: 0xae260180
    ctx->pc = 0x183890u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 384), GPR_U32(ctx, 6));
    // 0x183894: 0xae200164
    ctx->pc = 0x183894u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 356), GPR_U32(ctx, 0));
    // 0x183898: 0xae200168
    ctx->pc = 0x183898u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 360), GPR_U32(ctx, 0));
    // 0x18389c: 0xae20016c
    ctx->pc = 0x18389cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 364), GPR_U32(ctx, 0));
    // 0x1838a0: 0xae200170
    ctx->pc = 0x1838a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 0));
    // 0x1838a4: 0xae260174
    ctx->pc = 0x1838a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 6));
    // 0x1838a8: 0xae260178
    ctx->pc = 0x1838a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 376), GPR_U32(ctx, 6));
    // 0x1838ac: 0xae26017c
    ctx->pc = 0x1838acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 380), GPR_U32(ctx, 6));
    // 0x1838b0: 0x2812
    ctx->pc = 0x1838b0u;
    SET_GPR_U32(ctx, 5, ctx->lo);
    // 0x1838b4: 0x64001a
    ctx->pc = 0x1838b4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1838b8: 0xae25015c
    ctx->pc = 0x1838b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 348), GPR_U32(ctx, 5));
    // 0x1838bc: 0x1812
    ctx->pc = 0x1838bcu;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x1838c0: 0x2463ffff
    ctx->pc = 0x1838c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1838c4: 0x10000004
    ctx->pc = 0x1838C4u;
    {
        const bool branch_taken_0x1838c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1838C8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
        if (branch_taken_0x1838c4) {
            ctx->pc = 0x1838D8u;
            goto label_1838d8;
        }
    }
    ctx->pc = 0x1838CCu;
    // 0x1838cc: 0x0
    ctx->pc = 0x1838ccu;
    // NOP
label_1838d0:
    // 0x1838d0: 0x2442ffff
    ctx->pc = 0x1838d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1838d4: 0xae220040
    ctx->pc = 0x1838d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
label_1838d8:
    // 0x1838d8: 0x8e250040
    ctx->pc = 0x1838d8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1838dc: 0xc061d48
    ctx->pc = 0x1838DCu;
    SET_GPR_U32(ctx, 31, 0x1838E4u);
    ctx->pc = 0x1838E0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x187520u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00187520_0x187520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1838E4u; }
    }
    if (ctx->pc != 0x1838E4u) { return; }
    ctx->pc = 0x1838E4u;
    // 0x1838e4: 0x1440fffa
    ctx->pc = 0x1838E4u;
    {
        const bool branch_taken_0x1838e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1838E8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 64)));
        if (branch_taken_0x1838e4) {
            ctx->pc = 0x1838D0u;
            goto label_1838d0;
        }
    }
    ctx->pc = 0x1838ECu;
    // 0x1838ec: 0x0
    ctx->pc = 0x1838ecu;
    // NOP
label_1838f0:
    // 0x1838f0: 0x2442ffff
    ctx->pc = 0x1838f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1838f4: 0xae220044
    ctx->pc = 0x1838f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x1838f8: 0x8e250044
    ctx->pc = 0x1838f8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1838fc: 0xc061d48
    ctx->pc = 0x1838FCu;
    SET_GPR_U32(ctx, 31, 0x183904u);
    ctx->pc = 0x183900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x187520u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00187520_0x187520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183904u; }
    }
    if (ctx->pc != 0x183904u) { return; }
    ctx->pc = 0x183904u;
    // 0x183904: 0x40902d
    ctx->pc = 0x183904u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183908: 0x5640fff9
    ctx->pc = 0x183908u;
    {
        const bool branch_taken_0x183908 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x183908) {
            ctx->pc = 0x18390Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 68)));
            ctx->pc = 0x1838F0u;
            goto label_1838f0;
        }
    }
    ctx->pc = 0x183910u;
    // 0x183910: 0x8e230030
    ctx->pc = 0x183910u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x183914: 0x8fa60000
    ctx->pc = 0x183914u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183918: 0x31880
    ctx->pc = 0x183918u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x18391c: 0x8fa50004
    ctx->pc = 0x18391cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x183920: 0x2462ffff
    ctx->pc = 0x183920u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x183924: 0x246303fe
    ctx->pc = 0x183924u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1022));
    // 0x183928: 0x28440000
    ctx->pc = 0x183928u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 0));
    // 0x18392c: 0xa62818
    ctx->pc = 0x18392cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x183930: 0x64100b
    ctx->pc = 0x183930u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x183934: 0x21283
    ctx->pc = 0x183934u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x183938: 0x24560001
    ctx->pc = 0x183938u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 1));
    // 0x18393c: 0x162080
    ctx->pc = 0x18393cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 22), 2));
    // 0x183940: 0x24a703ff
    ctx->pc = 0x183940u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 5), 1023));
    // 0x183944: 0x2483ffff
    ctx->pc = 0x183944u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x183948: 0x248403fe
    ctx->pc = 0x183948u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1022));
    // 0x18394c: 0x28620000
    ctx->pc = 0x18394cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 0));
    // 0x183950: 0x28a60000
    ctx->pc = 0x183950u;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 5), 0));
    // 0x183954: 0x82180b
    ctx->pc = 0x183954u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
    // 0x183958: 0xe6280b
    ctx->pc = 0x183958u;
    if (GPR_U32(ctx, 6) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 7));
    // 0x18395c: 0x31a83
    ctx->pc = 0x18395cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 10));
    // 0x183960: 0x24750001
    ctx->pc = 0x183960u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 3), 1));
    // 0x183964: 0x2aa20021
    ctx->pc = 0x183964u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), 33));
    // 0x183968: 0x14400003
    ctx->pc = 0x183968u;
    {
        const bool branch_taken_0x183968 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18396Cu;
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), 10));
        if (branch_taken_0x183968) {
            ctx->pc = 0x183978u;
            goto label_183978;
        }
    }
    ctx->pc = 0x183970u;
    // 0x183970: 0x24150020
    ctx->pc = 0x183970u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 32));
    // 0x183974: 0x24162000
    ctx->pc = 0x183974u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 8192));
label_183978:
    // 0x183978: 0x26330050
    ctx->pc = 0x183978u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 17), 80));
    // 0x18397c: 0x282d
    ctx->pc = 0x18397cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183980: 0x260202d
    ctx->pc = 0x183980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183984: 0x24060080
    ctx->pc = 0x183984u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 128));
    // 0x183988: 0xc041f1a
    ctx->pc = 0x183988u;
    SET_GPR_U32(ctx, 31, 0x183990u);
    ctx->pc = 0x18398Cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183990u; }
    }
    if (ctx->pc != 0x183990u) { return; }
    ctx->pc = 0x183990u;
    // 0x183990: 0x255182a
    ctx->pc = 0x183990u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 21)));
    // 0x183994: 0x10600010
    ctx->pc = 0x183994u;
    {
        const bool branch_taken_0x183994 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x183998u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x183994) {
            ctx->pc = 0x1839D8u;
            goto label_1839d8;
        }
    }
    ctx->pc = 0x18399Cu;
    // 0x18399c: 0x0
    ctx->pc = 0x18399cu;
    // NOP
label_1839a0:
    // 0x1839a0: 0x200282d
    ctx->pc = 0x1839a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1839a4: 0xc061d2a
    ctx->pc = 0x1839A4u;
    SET_GPR_U32(ctx, 31, 0x1839ACu);
    ctx->pc = 0x1839A8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1874A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001874A8_0x1874a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1839ACu; }
    }
    if (ctx->pc != 0x1839ACu) { return; }
    ctx->pc = 0x1839ACu;
    // 0x1839ac: 0x26030001
    ctx->pc = 0x1839acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1839b0: 0x40902d
    ctx->pc = 0x1839b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1839b4: 0x3a420001
    ctx->pc = 0x1839b4u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 18), 1));
    // 0x1839b8: 0x1640fff9
    ctx->pc = 0x1839B8u;
    {
        const bool branch_taken_0x1839b8 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x1839BCu;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
        if (branch_taken_0x1839b8) {
            ctx->pc = 0x1839A0u;
            goto label_1839a0;
        }
    }
    ctx->pc = 0x1839C0u;
    // 0x1839c0: 0x26940001
    ctx->pc = 0x1839c0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    // 0x1839c4: 0xae700000
    ctx->pc = 0x1839c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x1839c8: 0x295102a
    ctx->pc = 0x1839c8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 21)));
    // 0x1839cc: 0x26100001
    ctx->pc = 0x1839ccu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1839d0: 0x1440fff3
    ctx->pc = 0x1839D0u;
    {
        const bool branch_taken_0x1839d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1839D4u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4));
        if (branch_taken_0x1839d0) {
            ctx->pc = 0x1839A0u;
            goto label_1839a0;
        }
    }
    ctx->pc = 0x1839D8u;
label_1839d8:
    // 0x1839d8: 0x24020898
    ctx->pc = 0x1839d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2200));
    // 0x1839dc: 0x902d
    ctx->pc = 0x1839dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1839e0: 0x2e21018
    ctx->pc = 0x1839e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x1839e4: 0x2403ffff
    ctx->pc = 0x1839e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1839e8: 0x241400ff
    ctx->pc = 0x1839e8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 255));
    // 0x1839ec: 0x3c010028
    ctx->pc = 0x1839ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)40 << 16));
    // 0x1839f0: 0x24215f44
    ctx->pc = 0x1839f0u;
    SET_GPR_S32(ctx, 1, ADD32(GPR_U32(ctx, 1), 24388));
    // 0x1839f4: 0x221021
    ctx->pc = 0x1839f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_1839f8:
    // 0x1839f8: 0x2694ffff
    ctx->pc = 0x1839f8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x1839fc: 0xac430000
    ctx->pc = 0x1839fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x183a00: 0x0
    ctx->pc = 0x183a00u;
    // NOP
    // 0x183a04: 0x0
    ctx->pc = 0x183a04u;
    // NOP
    // 0x183a08: 0x0
    ctx->pc = 0x183a08u;
    // NOP
    // 0x183a0c: 0x681fffa
    ctx->pc = 0x183A0Cu;
    {
        const bool branch_taken_0x183a0c = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x183A10u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
        if (branch_taken_0x183a0c) {
            ctx->pc = 0x1839F8u;
            goto label_1839f8;
        }
    }
    ctx->pc = 0x183A14u;
    // 0x183a14: 0x24020898
    ctx->pc = 0x183a14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2200));
    // 0x183a18: 0x2403ffff
    ctx->pc = 0x183a18u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x183a1c: 0x2e21018
    ctx->pc = 0x183a1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x183a20: 0x241400ff
    ctx->pc = 0x183a20u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 255));
    // 0x183a24: 0x3c010028
    ctx->pc = 0x183a24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)40 << 16));
    // 0x183a28: 0x24216344
    ctx->pc = 0x183a28u;
    SET_GPR_S32(ctx, 1, ADD32(GPR_U32(ctx, 1), 25412));
    // 0x183a2c: 0x221021
    ctx->pc = 0x183a2cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_183a30:
    // 0x183a30: 0x2694ffff
    ctx->pc = 0x183a30u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x183a34: 0xac430000
    ctx->pc = 0x183a34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x183a38: 0x0
    ctx->pc = 0x183a38u;
    // NOP
    // 0x183a3c: 0x0
    ctx->pc = 0x183a3cu;
    // NOP
    // 0x183a40: 0x0
    ctx->pc = 0x183a40u;
    // NOP
    // 0x183a44: 0x681fffa
    ctx->pc = 0x183A44u;
    {
        const bool branch_taken_0x183a44 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x183A48u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
        if (branch_taken_0x183a44) {
            ctx->pc = 0x183A30u;
            goto label_183a30;
        }
    }
    ctx->pc = 0x183A4Cu;
    // 0x183a4c: 0x26d4ffff
    ctx->pc = 0x183a4cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x183a50: 0x680003e
    ctx->pc = 0x183A50u;
    {
        const bool branch_taken_0x183a50 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x183A54u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 550));
        if (branch_taken_0x183a50) {
            ctx->pc = 0x183B4Cu;
            goto label_183b4c;
        }
    }
    ctx->pc = 0x183A58u;
    // 0x183a58: 0x241e0898
    ctx->pc = 0x183a58u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 2200));
    // 0x183a5c: 0x72e31018
    ctx->pc = 0x183a5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x183a60: 0x2fe2018
    ctx->pc = 0x183a60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x183a64: 0xafa20024
    ctx->pc = 0x183a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x183a68: 0x102d
    ctx->pc = 0x183a68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a6c: 0x21080
    ctx->pc = 0x183a6cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x183a70: 0x3c010028
    ctx->pc = 0x183a70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)40 << 16));
    // 0x183a74: 0x24215b48
    ctx->pc = 0x183a74u;
    SET_GPR_S32(ctx, 1, ADD32(GPR_U32(ctx, 1), 23368));
    // 0x183a78: 0x242021
    ctx->pc = 0x183a78u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x183a7c: 0x511021
    ctx->pc = 0x183a7cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x183a80: 0xafa40028
    ctx->pc = 0x183a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x183a84: 0x2456004c
    ctx->pc = 0x183a84u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 76));
label_183a88:
    // 0x183a88: 0x200282d
    ctx->pc = 0x183a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a8c: 0xc061d2a
    ctx->pc = 0x183A8Cu;
    SET_GPR_U32(ctx, 31, 0x183A94u);
    ctx->pc = 0x183A90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1874A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001874A8_0x1874a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183A94u; }
    }
    if (ctx->pc != 0x183A94u) { return; }
    ctx->pc = 0x183A94u;
    // 0x183a94: 0x5440fffc
    ctx->pc = 0x183A94u;
    {
        const bool branch_taken_0x183a94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x183a94) {
            ctx->pc = 0x183A98u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x183A88u;
            goto label_183a88;
        }
    }
    ctx->pc = 0x183A9Cu;
    // 0x183a9c: 0x2fe9818
    ctx->pc = 0x183a9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)(uint32_t)result); }
    // 0x183aa0: 0x3c030028
    ctx->pc = 0x183aa0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)40 << 16));
    // 0x183aa4: 0x24755f48
    ctx->pc = 0x183aa4u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 3), 24392));
    // 0x183aa8: 0x2e0202d
    ctx->pc = 0x183aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183aac: 0x200302d
    ctx->pc = 0x183aacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183ab0: 0x24070001
    ctx->pc = 0x183ab0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x183ab4: 0xc061baa
    ctx->pc = 0x183AB4u;
    SET_GPR_U32(ctx, 31, 0x183ABCu);
    ctx->pc = 0x183AB8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    ctx->pc = 0x186EA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00186EA8_0x186ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183ABCu; }
    }
    if (ctx->pc != 0x183ABCu) { return; }
    ctx->pc = 0x183ABCu;
    // 0x183abc: 0x10400129
    ctx->pc = 0x183ABCu;
    {
        const bool branch_taken_0x183abc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x183abc) {
            ctx->pc = 0x183F64u;
            goto label_183f64;
        }
    }
    ctx->pc = 0x183AC4u;
    // 0x183ac4: 0x8fa40024
    ctx->pc = 0x183ac4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x183ac8: 0x921021
    ctx->pc = 0x183ac8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x183acc: 0x26520001
    ctx->pc = 0x183accu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x183ad0: 0x26a4fc00
    ctx->pc = 0x183ad0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 4294966272));
    // 0x183ad4: 0x21080
    ctx->pc = 0x183ad4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x183ad8: 0x441021
    ctx->pc = 0x183ad8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x183adc: 0x2a430100
    ctx->pc = 0x183adcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 18), 256));
    // 0x183ae0: 0x10600003
    ctx->pc = 0x183AE0u;
    {
        const bool branch_taken_0x183ae0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x183AE4u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        if (branch_taken_0x183ae0) {
            ctx->pc = 0x183AF0u;
            goto label_183af0;
        }
    }
    ctx->pc = 0x183AE8u;
    // 0x183ae8: 0x56800016
    ctx->pc = 0x183AE8u;
    {
        const bool branch_taken_0x183ae8 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 0));
        if (branch_taken_0x183ae8) {
            ctx->pc = 0x183AECu;
            SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294967295));
            ctx->pc = 0x183B44u;
            goto label_183b44;
        }
    }
    ctx->pc = 0x183AF0u;
label_183af0:
    // 0x183af0: 0x26d60004
    ctx->pc = 0x183af0u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 4));
    // 0x183af4: 0x2642821
    ctx->pc = 0x183af4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x183af8: 0x8ec60000
    ctx->pc = 0x183af8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x183afc: 0x24070001
    ctx->pc = 0x183afcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x183b00: 0xc061baa
    ctx->pc = 0x183B00u;
    SET_GPR_U32(ctx, 31, 0x183B08u);
    ctx->pc = 0x183B04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x186EA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00186EA8_0x186ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183B08u; }
    }
    if (ctx->pc != 0x183B08u) { return; }
    ctx->pc = 0x183B08u;
    // 0x183b08: 0x10400116
    ctx->pc = 0x183B08u;
    {
        const bool branch_taken_0x183b08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x183B0Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 40)));
        if (branch_taken_0x183b08) {
            ctx->pc = 0x183F64u;
            goto label_183f64;
        }
    }
    ctx->pc = 0x183B10u;
    // 0x183b10: 0x2403ffff
    ctx->pc = 0x183b10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x183b14: 0x241200ff
    ctx->pc = 0x183b14u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 255));
    // 0x183b18: 0x24a203fc
    ctx->pc = 0x183b18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 1020));
    // 0x183b1c: 0x0
    ctx->pc = 0x183b1cu;
    // NOP
label_183b20:
    // 0x183b20: 0x2652ffff
    ctx->pc = 0x183b20u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x183b24: 0xac430000
    ctx->pc = 0x183b24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x183b28: 0x0
    ctx->pc = 0x183b28u;
    // NOP
    // 0x183b2c: 0x0
    ctx->pc = 0x183b2cu;
    // NOP
    // 0x183b30: 0x0
    ctx->pc = 0x183b30u;
    // NOP
    // 0x183b34: 0x641fffa
    ctx->pc = 0x183B34u;
    {
        const bool branch_taken_0x183b34 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x183B38u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
        if (branch_taken_0x183b34) {
            ctx->pc = 0x183B20u;
            goto label_183b20;
        }
    }
    ctx->pc = 0x183B3Cu;
    // 0x183b3c: 0x902d
    ctx->pc = 0x183b3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183b40: 0x2694ffff
    ctx->pc = 0x183b40u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294967295));
label_183b44:
    // 0x183b44: 0x681ffd0
    ctx->pc = 0x183B44u;
    {
        const bool branch_taken_0x183b44 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x183B48u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x183b44) {
            ctx->pc = 0x183A88u;
            goto label_183a88;
        }
    }
    ctx->pc = 0x183B4Cu;
label_183b4c:
    // 0x183b4c: 0x9626002a
    ctx->pc = 0x183b4cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x183b50: 0x240503e8
    ctx->pc = 0x183b50u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1000));
    // 0x183b54: 0xae300034
    ctx->pc = 0x183b54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
    // 0x183b58: 0x902d
    ctx->pc = 0x183b58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183b5c: 0x50c00001
    ctx->pc = 0x183B5Cu;
    {
        const bool branch_taken_0x183b5c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x183b5c) {
            ctx->pc = 0x183B60u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x183B64u;
            goto label_183b64;
        }
    }
    ctx->pc = 0x183B64u;
label_183b64:
    // 0x183b64: 0x8e240030
    ctx->pc = 0x183b64u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x183b68: 0x9628002c
    ctx->pc = 0x183b68u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x183b6c: 0xa02d
    ctx->pc = 0x183b6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183b70: 0x85001a
    ctx->pc = 0x183b70u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x183b74: 0x8e270044
    ctx->pc = 0x183b74u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x183b78: 0x2012
    ctx->pc = 0x183b78u;
    SET_GPR_U32(ctx, 4, ctx->lo);
    // 0x183b7c: 0xe81818
    ctx->pc = 0x183b7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x183b80: 0x41140
    ctx->pc = 0x183b80u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 5));
    // 0x183b84: 0x441023
    ctx->pc = 0x183b84u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x183b88: 0x21080
    ctx->pc = 0x183b88u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x183b8c: 0x66001a
    ctx->pc = 0x183b8cu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x183b90: 0x441021
    ctx->pc = 0x183b90u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x183b94: 0x210c0
    ctx->pc = 0x183b94u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x183b98: 0x24530001
    ctx->pc = 0x183b98u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 1));
    // 0x183b9c: 0x1812
    ctx->pc = 0x183b9cu;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x183ba0: 0x701823
    ctx->pc = 0x183ba0u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x183ba4: 0xae230038
    ctx->pc = 0x183ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
    // 0x183ba8: 0x1860002a
    ctx->pc = 0x183BA8u;
    {
        const bool branch_taken_0x183ba8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x183BACu;
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
        if (branch_taken_0x183ba8) {
            ctx->pc = 0x183C54u;
            goto label_183c54;
        }
    }
    ctx->pc = 0x183BB0u;
    // 0x183bb0: 0x24150001
    ctx->pc = 0x183bb0u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
    // 0x183bb4: 0x0
    ctx->pc = 0x183bb4u;
    // NOP
label_183bb8:
    // 0x183bb8: 0x16530004
    ctx->pc = 0x183BB8u;
    {
        const bool branch_taken_0x183bb8 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 19));
        ctx->pc = 0x183BBCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x183bb8) {
            ctx->pc = 0x183BCCu;
            goto label_183bcc;
        }
    }
    ctx->pc = 0x183BC0u;
    // 0x183bc0: 0x8e220034
    ctx->pc = 0x183bc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x183bc4: 0x2021023
    ctx->pc = 0x183bc4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x183bc8: 0xae220170
    ctx->pc = 0x183bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 2));
label_183bcc:
    // 0x183bcc: 0xc061d2a
    ctx->pc = 0x183BCCu;
    SET_GPR_U32(ctx, 31, 0x183BD4u);
    ctx->pc = 0x183BD0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1874A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001874A8_0x1874a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183BD4u; }
    }
    if (ctx->pc != 0x183BD4u) { return; }
    ctx->pc = 0x183BD4u;
    // 0x183bd4: 0x2e0202d
    ctx->pc = 0x183bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183bd8: 0x3c067fff
    ctx->pc = 0x183bd8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)32767 << 16));
    // 0x183bdc: 0x280282d
    ctx->pc = 0x183bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183be0: 0x27a70020
    ctx->pc = 0x183be0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 32));
    // 0x183be4: 0x14550008
    ctx->pc = 0x183BE4u;
    {
        const bool branch_taken_0x183be4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 21));
        ctx->pc = 0x183BE8u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
        if (branch_taken_0x183be4) {
            ctx->pc = 0x183C08u;
            goto label_183c08;
        }
    }
    ctx->pc = 0x183BECu;
    // 0x183bec: 0xc060b28
    ctx->pc = 0x183BECu;
    SET_GPR_U32(ctx, 31, 0x183BF4u);
    ctx->pc = 0x183BF0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->pc = 0x182CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182CA0_0x182ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183BF4u; }
    }
    if (ctx->pc != 0x183BF4u) { return; }
    ctx->pc = 0x183BF4u;
    // 0x183bf4: 0x8fa20020
    ctx->pc = 0x183bf4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183bf8: 0x5040000e
    ctx->pc = 0x183BF8u;
    {
        const bool branch_taken_0x183bf8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x183bf8) {
            ctx->pc = 0x183BFCu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->pc = 0x183C34u;
            goto label_183c34;
        }
    }
    ctx->pc = 0x183C00u;
    // 0x183c00: 0x100000e6
    ctx->pc = 0x183C00u;
    {
        const bool branch_taken_0x183c00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x183C04u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x183c00) {
            ctx->pc = 0x183F9Cu;
            goto label_183f9c;
        }
    }
    ctx->pc = 0x183C08u;
label_183c08:
    // 0x183c08: 0x52400001
    ctx->pc = 0x183C08u;
    {
        const bool branch_taken_0x183c08 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x183c08) {
            ctx->pc = 0x183C0Cu;
            WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
            ctx->pc = 0x183C10u;
            goto label_183c10;
        }
    }
    ctx->pc = 0x183C10u;
label_183c10:
    // 0x183c10: 0x280282d
    ctx->pc = 0x183c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c14: 0x2e0202d
    ctx->pc = 0x183c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c18: 0xc060b28
    ctx->pc = 0x183C18u;
    SET_GPR_U32(ctx, 31, 0x183C20u);
    ctx->pc = 0x183C1Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x182CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182CA0_0x182ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183C20u; }
    }
    if (ctx->pc != 0x183C20u) { return; }
    ctx->pc = 0x183C20u;
    // 0x183c20: 0x8fa30020
    ctx->pc = 0x183c20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183c24: 0x146000dc
    ctx->pc = 0x183C24u;
    {
        const bool branch_taken_0x183c24 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x183C28u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x183c24) {
            ctx->pc = 0x183F98u;
            goto label_183f98;
        }
    }
    ctx->pc = 0x183C2Cu;
    // 0x183c2c: 0x26520001
    ctx->pc = 0x183c2cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x183c30: 0x8e220038
    ctx->pc = 0x183c30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_183c34:
    // 0x183c34: 0x26940001
    ctx->pc = 0x183c34u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    // 0x183c38: 0x282102a
    ctx->pc = 0x183c38u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 2)));
    // 0x183c3c: 0x1440ffde
    ctx->pc = 0x183C3Cu;
    {
        const bool branch_taken_0x183c3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x183C40u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x183c3c) {
            ctx->pc = 0x183BB8u;
            goto label_183bb8;
        }
    }
    ctx->pc = 0x183C44u;
    // 0x183c44: 0x9626002a
    ctx->pc = 0x183c44u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x183c48: 0x9628002c
    ctx->pc = 0x183c48u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x183c4c: 0x8e270044
    ctx->pc = 0x183c4cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x183c50: 0xe81018
    ctx->pc = 0x183c50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_183c54:
    // 0x183c54: 0x50c00001
    ctx->pc = 0x183C54u;
    {
        const bool branch_taken_0x183c54 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x183c54) {
            ctx->pc = 0x183C58u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x183C5Cu;
            goto label_183c5c;
        }
    }
    ctx->pc = 0x183C5Cu;
label_183c5c:
    // 0x183c5c: 0x8e230034
    ctx->pc = 0x183c5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x183c60: 0x2e0202d
    ctx->pc = 0x183c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c64: 0x27a50020
    ctx->pc = 0x183c64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x183c68: 0x46001a
    ctx->pc = 0x183c68u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x183c6c: 0x1012
    ctx->pc = 0x183c6cu;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x183c70: 0x431023
    ctx->pc = 0x183c70u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x183c74: 0xc060b7a
    ctx->pc = 0x183C74u;
    SET_GPR_U32(ctx, 31, 0x183C7Cu);
    ctx->pc = 0x183C78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    ctx->pc = 0x182DE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182DE8_0x182de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183C7Cu; }
    }
    if (ctx->pc != 0x183C7Cu) { return; }
    ctx->pc = 0x183C7Cu;
    // 0x183c7c: 0x8fa30020
    ctx->pc = 0x183c7cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183c80: 0x40802d
    ctx->pc = 0x183c80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c84: 0x146000c4
    ctx->pc = 0x183C84u;
    {
        const bool branch_taken_0x183c84 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x183C88u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x183c84) {
            ctx->pc = 0x183F98u;
            goto label_183f98;
        }
    }
    ctx->pc = 0x183C8Cu;
    // 0x183c8c: 0x12000008
    ctx->pc = 0x183C8Cu;
    {
        const bool branch_taken_0x183c8c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x183C90u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x183c8c) {
            ctx->pc = 0x183CB0u;
            goto label_183cb0;
        }
    }
    ctx->pc = 0x183C94u;
    // 0x183c94: 0x3c040024
    ctx->pc = 0x183c94u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x183c98: 0xc045a12
    ctx->pc = 0x183C98u;
    SET_GPR_U32(ctx, 31, 0x183CA0u);
    ctx->pc = 0x183C9Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6144));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183CA0u; }
    }
    if (ctx->pc != 0x183CA0u) { return; }
    ctx->pc = 0x183CA0u;
    // 0x183ca0: 0x3c028101
    ctx->pc = 0x183ca0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x183ca4: 0x100000bc
    ctx->pc = 0x183CA4u;
    {
        const bool branch_taken_0x183ca4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x183CA8u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 36865));
        if (branch_taken_0x183ca4) {
            ctx->pc = 0x183F98u;
            goto label_183f98;
        }
    }
    ctx->pc = 0x183CACu;
    // 0x183cac: 0x0
    ctx->pc = 0x183cacu;
    // NOP
label_183cb0:
    // 0x183cb0: 0x3c100028
    ctx->pc = 0x183cb0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)40 << 16));
    // 0x183cb4: 0x27a50010
    ctx->pc = 0x183cb4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    // 0x183cb8: 0x26106c80
    ctx->pc = 0x183cb8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 27776));
    // 0x183cbc: 0xc061ffe
    ctx->pc = 0x183CBCu;
    SET_GPR_U32(ctx, 31, 0x183CC4u);
    ctx->pc = 0x183CC0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x187FF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00187FF8_0x187ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183CC4u; }
    }
    if (ctx->pc != 0x183CC4u) { return; }
    ctx->pc = 0x183CC4u;
    // 0x183cc4: 0x282d
    ctx->pc = 0x183cc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183cc8: 0x200202d
    ctx->pc = 0x183cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183ccc: 0xc041f1a
    ctx->pc = 0x183CCCu;
    SET_GPR_U32(ctx, 31, 0x183CD4u);
    ctx->pc = 0x183CD0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 512));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183CD4u; }
    }
    if (ctx->pc != 0x183CD4u) { return; }
    ctx->pc = 0x183CD4u;
    // 0x183cd4: 0x24148427
    ctx->pc = 0x183cd4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 4294935591));
    // 0x183cd8: 0x93a50017
    ctx->pc = 0x183cd8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 23)));
    // 0x183cdc: 0x3c150024
    ctx->pc = 0x183cdcu;
    SET_GPR_U32(ctx, 21, ((uint32_t)36 << 16));
    // 0x183ce0: 0x93ae0016
    ctx->pc = 0x183ce0u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 22)));
    // 0x183ce4: 0x24160002
    ctx->pc = 0x183ce4u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 2));
    // 0x183ce8: 0x93ac0015
    ctx->pc = 0x183ce8u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 21)));
    // 0x183cec: 0x52102
    ctx->pc = 0x183cecu;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 5), 4));
    // 0x183cf0: 0x93ab0013
    ctx->pc = 0x183cf0u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 19)));
    // 0x183cf4: 0xe9902
    ctx->pc = 0x183cf4u;
    SET_GPR_U32(ctx, 19, SRL32(GPR_U32(ctx, 14), 4));
    // 0x183cf8: 0x93aa0012
    ctx->pc = 0x183cf8u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x183cfc: 0xc9102
    ctx->pc = 0x183cfcu;
    SET_GPR_U32(ctx, 18, SRL32(GPR_U32(ctx, 12), 4));
    // 0x183d00: 0x93a60011
    ctx->pc = 0x183d00u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
    // 0x183d04: 0xb7902
    ctx->pc = 0x183d04u;
    SET_GPR_U32(ctx, 15, SRL32(GPR_U32(ctx, 11), 4));
    // 0x183d08: 0xa8902
    ctx->pc = 0x183d08u;
    SET_GPR_U32(ctx, 17, SRL32(GPR_U32(ctx, 10), 4));
    // 0x183d0c: 0x314a000f
    ctx->pc = 0x183d0cu;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 10), 15));
    // 0x183d10: 0x66902
    ctx->pc = 0x183d10u;
    SET_GPR_U32(ctx, 13, SRL32(GPR_U32(ctx, 6), 4));
    // 0x183d14: 0x30c6000f
    ctx->pc = 0x183d14u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), 15));
    // 0x183d18: 0x41080
    ctx->pc = 0x183d18u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x183d1c: 0xf3880
    ctx->pc = 0x183d1cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 15), 2));
    // 0x183d20: 0xd4880
    ctx->pc = 0x183d20u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 13), 2));
    // 0x183d24: 0x441021
    ctx->pc = 0x183d24u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x183d28: 0x131880
    ctx->pc = 0x183d28u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
    // 0x183d2c: 0x114080
    ctx->pc = 0x183d2cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 17), 2));
    // 0x183d30: 0x122080
    ctx->pc = 0x183d30u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 18), 2));
    // 0x183d34: 0xef3821
    ctx->pc = 0x183d34u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 15)));
    // 0x183d38: 0x12d4821
    ctx->pc = 0x183d38u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x183d3c: 0x731821
    ctx->pc = 0x183d3cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x183d40: 0x922021
    ctx->pc = 0x183d40u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x183d44: 0x1114021
    ctx->pc = 0x183d44u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
    // 0x183d48: 0x30a5000f
    ctx->pc = 0x183d48u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 15));
    // 0x183d4c: 0x21040
    ctx->pc = 0x183d4cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x183d50: 0x31ce000f
    ctx->pc = 0x183d50u;
    SET_GPR_U32(ctx, 14, AND32(GPR_U32(ctx, 14), 15));
    // 0x183d54: 0x318c000f
    ctx->pc = 0x183d54u;
    SET_GPR_U32(ctx, 12, AND32(GPR_U32(ctx, 12), 15));
    // 0x183d58: 0x316b000f
    ctx->pc = 0x183d58u;
    SET_GPR_U32(ctx, 11, AND32(GPR_U32(ctx, 11), 15));
    // 0x183d5c: 0x451021
    ctx->pc = 0x183d5cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x183d60: 0x31840
    ctx->pc = 0x183d60u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x183d64: 0x42040
    ctx->pc = 0x183d64u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
    // 0x183d68: 0x73840
    ctx->pc = 0x183d68u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 1));
    // 0x183d6c: 0x84040
    ctx->pc = 0x183d6cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 1));
    // 0x183d70: 0x94840
    ctx->pc = 0x183d70u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 1));
    // 0x183d74: 0x6e1821
    ctx->pc = 0x183d74u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x183d78: 0x8c2021
    ctx->pc = 0x183d78u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x183d7c: 0xeb3821
    ctx->pc = 0x183d7cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x183d80: 0x10a4021
    ctx->pc = 0x183d80u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x183d84: 0x1264821
    ctx->pc = 0x183d84u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x183d88: 0x244207d0
    ctx->pc = 0x183d88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2000));
    // 0x183d8c: 0xa6140000
    ctx->pc = 0x183d8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 20));
    // 0x183d90: 0xa602000e
    ctx->pc = 0x183d90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x183d94: 0x200882d
    ctx->pc = 0x183d94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183d98: 0xa203000d
    ctx->pc = 0x183d98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x183d9c: 0x282d
    ctx->pc = 0x183d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183da0: 0xa204000c
    ctx->pc = 0x183da0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 4));
    // 0x183da4: 0x24060200
    ctx->pc = 0x183da4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 512));
    // 0x183da8: 0xa207000b
    ctx->pc = 0x183da8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 7));
    // 0x183dac: 0xa208000a
    ctx->pc = 0x183dacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 8));
    // 0x183db0: 0xa2090009
    ctx->pc = 0x183db0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 9));
    // 0x183db4: 0xa6000002
    ctx->pc = 0x183db4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x183db8: 0xa2000008
    ctx->pc = 0x183db8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x183dbc: 0x96a217b0
    ctx->pc = 0x183dbcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 6064)));
    // 0x183dc0: 0x2415a426
    ctx->pc = 0x183dc0u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 4294943782));
    // 0x183dc4: 0x6a03000f
    ctx->pc = 0x183dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x183dc8: 0x6e030008
    ctx->pc = 0x183dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x183dcc: 0xb203001f
    ctx->pc = 0x183dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x183dd0: 0xb6030018
    ctx->pc = 0x183dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x183dd4: 0xae160004
    ctx->pc = 0x183dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 22));
    // 0x183dd8: 0x3c160024
    ctx->pc = 0x183dd8u;
    SET_GPR_U32(ctx, 22, ((uint32_t)36 << 16));
    // 0x183ddc: 0xa6020040
    ctx->pc = 0x183ddcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 64), (uint16_t)GPR_U32(ctx, 2));
    // 0x183de0: 0xae000010
    ctx->pc = 0x183de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x183de4: 0xae000014
    ctx->pc = 0x183de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x183de8: 0xae000020
    ctx->pc = 0x183de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x183dec: 0x26100200
    ctx->pc = 0x183decu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 512));
    // 0x183df0: 0xc041f1a
    ctx->pc = 0x183DF0u;
    SET_GPR_U32(ctx, 31, 0x183DF8u);
    ctx->pc = 0x183DF4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183DF8u; }
    }
    if (ctx->pc != 0x183DF8u) { return; }
    ctx->pc = 0x183DF8u;
    // 0x183df8: 0x220282d
    ctx->pc = 0x183df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183dfc: 0x93a40017
    ctx->pc = 0x183dfcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 23)));
    // 0x183e00: 0x93af0016
    ctx->pc = 0x183e00u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 22)));
    // 0x183e04: 0x93ad0015
    ctx->pc = 0x183e04u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 21)));
    // 0x183e08: 0x43902
    ctx->pc = 0x183e08u;
    SET_GPR_U32(ctx, 7, SRL32(GPR_U32(ctx, 4), 4));
    // 0x183e0c: 0x93ac0013
    ctx->pc = 0x183e0cu;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 19)));
    // 0x183e10: 0xfa102
    ctx->pc = 0x183e10u;
    SET_GPR_U32(ctx, 20, SRL32(GPR_U32(ctx, 15), 4));
    // 0x183e14: 0x93ab0012
    ctx->pc = 0x183e14u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x183e18: 0xd9902
    ctx->pc = 0x183e18u;
    SET_GPR_U32(ctx, 19, SRL32(GPR_U32(ctx, 13), 4));
    // 0x183e1c: 0x93a60011
    ctx->pc = 0x183e1cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
    // 0x183e20: 0xc8902
    ctx->pc = 0x183e20u;
    SET_GPR_U32(ctx, 17, SRL32(GPR_U32(ctx, 12), 4));
    // 0x183e24: 0xb9102
    ctx->pc = 0x183e24u;
    SET_GPR_U32(ctx, 18, SRL32(GPR_U32(ctx, 11), 4));
    // 0x183e28: 0x316b000f
    ctx->pc = 0x183e28u;
    SET_GPR_U32(ctx, 11, AND32(GPR_U32(ctx, 11), 15));
    // 0x183e2c: 0x67102
    ctx->pc = 0x183e2cu;
    SET_GPR_U32(ctx, 14, SRL32(GPR_U32(ctx, 6), 4));
    // 0x183e30: 0x30c6000f
    ctx->pc = 0x183e30u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), 15));
    // 0x183e34: 0x71080
    ctx->pc = 0x183e34u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
    // 0x183e38: 0x141880
    ctx->pc = 0x183e38u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 2));
    // 0x183e3c: 0x471021
    ctx->pc = 0x183e3cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x183e40: 0x133880
    ctx->pc = 0x183e40u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 19), 2));
    // 0x183e44: 0x114080
    ctx->pc = 0x183e44u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 17), 2));
    // 0x183e48: 0x124880
    ctx->pc = 0x183e48u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 18), 2));
    // 0x183e4c: 0xe5080
    ctx->pc = 0x183e4cu;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 14), 2));
    // 0x183e50: 0x3084000f
    ctx->pc = 0x183e50u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 15));
    // 0x183e54: 0x741821
    ctx->pc = 0x183e54u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x183e58: 0xf33821
    ctx->pc = 0x183e58u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    // 0x183e5c: 0x1114021
    ctx->pc = 0x183e5cu;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
    // 0x183e60: 0x1324821
    ctx->pc = 0x183e60u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 18)));
    // 0x183e64: 0x14e5021
    ctx->pc = 0x183e64u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
    // 0x183e68: 0x21040
    ctx->pc = 0x183e68u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x183e6c: 0x441021
    ctx->pc = 0x183e6cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x183e70: 0x2e0202d
    ctx->pc = 0x183e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183e74: 0x31840
    ctx->pc = 0x183e74u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x183e78: 0x31ef000f
    ctx->pc = 0x183e78u;
    SET_GPR_U32(ctx, 15, AND32(GPR_U32(ctx, 15), 15));
    // 0x183e7c: 0x73840
    ctx->pc = 0x183e7cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 1));
    // 0x183e80: 0x31ad000f
    ctx->pc = 0x183e80u;
    SET_GPR_U32(ctx, 13, AND32(GPR_U32(ctx, 13), 15));
    // 0x183e84: 0x84040
    ctx->pc = 0x183e84u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 1));
    // 0x183e88: 0x318c000f
    ctx->pc = 0x183e88u;
    SET_GPR_U32(ctx, 12, AND32(GPR_U32(ctx, 12), 15));
    // 0x183e8c: 0x94840
    ctx->pc = 0x183e8cu;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 1));
    // 0x183e90: 0xa5040
    ctx->pc = 0x183e90u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 1));
    // 0x183e94: 0x6f1821
    ctx->pc = 0x183e94u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x183e98: 0x10c4021
    ctx->pc = 0x183e98u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x183e9c: 0x12b4821
    ctx->pc = 0x183e9cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x183ea0: 0x244207d0
    ctx->pc = 0x183ea0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2000));
    // 0x183ea4: 0xed3821
    ctx->pc = 0x183ea4u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x183ea8: 0x1465021
    ctx->pc = 0x183ea8u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x183eac: 0xa207000c
    ctx->pc = 0x183eacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 7));
    // 0x183eb0: 0x24070001
    ctx->pc = 0x183eb0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x183eb4: 0xa6150000
    ctx->pc = 0x183eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 21));
    // 0x183eb8: 0xa602000e
    ctx->pc = 0x183eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x183ebc: 0xa203000d
    ctx->pc = 0x183ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x183ec0: 0xa208000b
    ctx->pc = 0x183ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 8));
    // 0x183ec4: 0xa209000a
    ctx->pc = 0x183ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 9));
    // 0x183ec8: 0xa20a0009
    ctx->pc = 0x183ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 10));
    // 0x183ecc: 0xa6000002
    ctx->pc = 0x183eccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x183ed0: 0xa2000008
    ctx->pc = 0x183ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x183ed4: 0xae000004
    ctx->pc = 0x183ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x183ed8: 0x6a09000f
    ctx->pc = 0x183ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x183edc: 0x6e090008
    ctx->pc = 0x183edcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x183ee0: 0xb209001f
    ctx->pc = 0x183ee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 9) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x183ee4: 0xb6090018
    ctx->pc = 0x183ee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 9) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x183ee8: 0xae000010
    ctx->pc = 0x183ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x183eec: 0xae000014
    ctx->pc = 0x183eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x183ef0: 0xae000020
    ctx->pc = 0x183ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x183ef4: 0x26c817b8
    ctx->pc = 0x183ef4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 22), 6072));
    // 0x183ef8: 0x85090000
    ctx->pc = 0x183ef8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x183efc: 0x81020002
    ctx->pc = 0x183efcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x183f00: 0xa6090040
    ctx->pc = 0x183f00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 64), (uint16_t)GPR_U32(ctx, 9));
    // 0x183f04: 0xa2020042
    ctx->pc = 0x183f04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 66), (uint8_t)GPR_U32(ctx, 2));
    // 0x183f08: 0xc061d24
    ctx->pc = 0x183F08u;
    SET_GPR_U32(ctx, 31, 0x183F10u);
    ctx->pc = 0x183F0Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x187490u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00187490_0x187490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183F10u; }
    }
    if (ctx->pc != 0x183F10u) { return; }
    ctx->pc = 0x183F10u;
    // 0x183f10: 0x10400014
    ctx->pc = 0x183F10u;
    {
        const bool branch_taken_0x183f10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x183F14u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x183f10) {
            ctx->pc = 0x183F64u;
            goto label_183f64;
        }
    }
    ctx->pc = 0x183F18u;
    // 0x183f18: 0x2e0202d
    ctx->pc = 0x183f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183f1c: 0x2406ffff
    ctx->pc = 0x183f1cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x183f20: 0xc060b28
    ctx->pc = 0x183F20u;
    SET_GPR_U32(ctx, 31, 0x183F28u);
    ctx->pc = 0x183F24u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x182CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182CA0_0x182ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183F28u; }
    }
    if (ctx->pc != 0x183F28u) { return; }
    ctx->pc = 0x183F28u;
    // 0x183f28: 0x8fa30020
    ctx->pc = 0x183f28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183f2c: 0x1460001a
    ctx->pc = 0x183F2Cu;
    {
        const bool branch_taken_0x183f2c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x183F30u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x183f2c) {
            ctx->pc = 0x183F98u;
            goto label_183f98;
        }
    }
    ctx->pc = 0x183F34u;
    // 0x183f34: 0xc061bbc
    ctx->pc = 0x183F34u;
    SET_GPR_U32(ctx, 31, 0x183F3Cu);
    ctx->pc = 0x183F38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x186EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00186EF0_0x186ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183F3Cu; }
    }
    if (ctx->pc != 0x183F3Cu) { return; }
    ctx->pc = 0x183F3Cu;
    // 0x183f3c: 0x10400009
    ctx->pc = 0x183F3Cu;
    {
        const bool branch_taken_0x183f3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x183f3c) {
            ctx->pc = 0x183F64u;
            goto label_183f64;
        }
    }
    ctx->pc = 0x183F44u;
    // 0x183f44: 0xc060a84
    ctx->pc = 0x183F44u;
    SET_GPR_U32(ctx, 31, 0x183F4Cu);
    ctx->pc = 0x183F48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182A10_0x182a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183F4Cu; }
    }
    if (ctx->pc != 0x183F4Cu) { return; }
    ctx->pc = 0x183F4Cu;
    // 0x183f4c: 0x10400005
    ctx->pc = 0x183F4Cu;
    {
        const bool branch_taken_0x183f4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x183f4c) {
            ctx->pc = 0x183F64u;
            goto label_183f64;
        }
    }
    ctx->pc = 0x183F54u;
    // 0x183f54: 0xc061b4c
    ctx->pc = 0x183F54u;
    SET_GPR_U32(ctx, 31, 0x183F5Cu);
    ctx->pc = 0x183F58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x186D30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00186D30_0x186d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183F5Cu; }
    }
    if (ctx->pc != 0x183F5Cu) { return; }
    ctx->pc = 0x183F5Cu;
    // 0x183f5c: 0x14400004
    ctx->pc = 0x183F5Cu;
    {
        const bool branch_taken_0x183f5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x183F60u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2200));
        if (branch_taken_0x183f5c) {
            ctx->pc = 0x183F70u;
            goto label_183f70;
        }
    }
    ctx->pc = 0x183F64u;
label_183f64:
    // 0x183f64: 0x3c028101
    ctx->pc = 0x183f64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x183f68: 0x1000000b
    ctx->pc = 0x183F68u;
    {
        const bool branch_taken_0x183f68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x183F6Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 111));
        if (branch_taken_0x183f68) {
            ctx->pc = 0x183F98u;
            goto label_183f98;
        }
    }
    ctx->pc = 0x183F70u;
label_183f70:
    // 0x183f70: 0x3c090028
    ctx->pc = 0x183f70u;
    SET_GPR_U32(ctx, 9, ((uint32_t)40 << 16));
    // 0x183f74: 0x2e31818
    ctx->pc = 0x183f74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x183f78: 0x25245b48
    ctx->pc = 0x183f78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 9), 23368));
    // 0x183f7c: 0x24060001
    ctx->pc = 0x183f7cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x183f80: 0x102d
    ctx->pc = 0x183f80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183f84: 0x24630880
    ctx->pc = 0x183f84u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2176));
    // 0x183f88: 0x832821
    ctx->pc = 0x183f88u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x183f8c: 0xa0202d
    ctx->pc = 0x183f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183f90: 0xac86000c
    ctx->pc = 0x183f90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x183f94: 0xaca00008
    ctx->pc = 0x183f94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_183f98:
    // 0x183f98: 0xdfb00030
    ctx->pc = 0x183f98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_183f9c:
    // 0x183f9c: 0xdfb10038
    ctx->pc = 0x183f9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x183fa0: 0xdfb20040
    ctx->pc = 0x183fa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x183fa4: 0xdfb30048
    ctx->pc = 0x183fa4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x183fa8: 0xdfb40050
    ctx->pc = 0x183fa8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x183fac: 0xdfb50058
    ctx->pc = 0x183facu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x183fb0: 0xdfb60060
    ctx->pc = 0x183fb0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x183fb4: 0xdfb70068
    ctx->pc = 0x183fb4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x183fb8: 0xdfbe0070
    ctx->pc = 0x183fb8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x183fbc: 0xdfbf0078
    ctx->pc = 0x183fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x183fc0: 0x3e00008
    ctx->pc = 0x183FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183FC4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1836E0u: goto label_1836e0;
            case 0x183780u: goto label_183780;
            case 0x1837B4u: goto label_1837b4;
            case 0x183838u: goto label_183838;
            case 0x1838D0u: goto label_1838d0;
            case 0x1838D8u: goto label_1838d8;
            case 0x1838F0u: goto label_1838f0;
            case 0x183978u: goto label_183978;
            case 0x1839A0u: goto label_1839a0;
            case 0x1839D8u: goto label_1839d8;
            case 0x1839F8u: goto label_1839f8;
            case 0x183A30u: goto label_183a30;
            case 0x183A88u: goto label_183a88;
            case 0x183AF0u: goto label_183af0;
            case 0x183B20u: goto label_183b20;
            case 0x183B44u: goto label_183b44;
            case 0x183B4Cu: goto label_183b4c;
            case 0x183B64u: goto label_183b64;
            case 0x183BB8u: goto label_183bb8;
            case 0x183BCCu: goto label_183bcc;
            case 0x183C08u: goto label_183c08;
            case 0x183C10u: goto label_183c10;
            case 0x183C34u: goto label_183c34;
            case 0x183C54u: goto label_183c54;
            case 0x183C5Cu: goto label_183c5c;
            case 0x183CB0u: goto label_183cb0;
            case 0x183F64u: goto label_183f64;
            case 0x183F70u: goto label_183f70;
            case 0x183F98u: goto label_183f98;
            case 0x183F9Cu: goto label_183f9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x183FC8u;
}
