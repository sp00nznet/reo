#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00180378
// Address: 0x180378 - 0x180480
void sub_00180378_0x180378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x180378u;

    // 0x180378: 0x27bdff90
    ctx->pc = 0x180378u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18037c: 0x80302d
    ctx->pc = 0x18037cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180380: 0xffb10040
    ctx->pc = 0x180380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x180384: 0xa0882d
    ctx->pc = 0x180384u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180388: 0xffbf0060
    ctx->pc = 0x180388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x18038c: 0xffb20050
    ctx->pc = 0x18038cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x180390: 0x3222003f
    ctx->pc = 0x180390u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 63));
    // 0x180394: 0x10400006
    ctx->pc = 0x180394u;
    {
        const bool branch_taken_0x180394 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x180398u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
        if (branch_taken_0x180394) {
            ctx->pc = 0x1803B0u;
            goto label_1803b0;
        }
    }
    ctx->pc = 0x18039Cu;
    // 0x18039c: 0x3c040024
    ctx->pc = 0x18039cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1803a0: 0xc045a12
    ctx->pc = 0x1803A0u;
    SET_GPR_U32(ctx, 31, 0x1803A8u);
    ctx->pc = 0x1803A4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 5536));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1803A8u; }
    }
    if (ctx->pc != 0x1803A8u) { return; }
    ctx->pc = 0x1803A8u;
    // 0x1803a8: 0x1000002f
    ctx->pc = 0x1803A8u;
    {
        const bool branch_taken_0x1803a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1803ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1803a8) {
            ctx->pc = 0x180468u;
            goto label_180468;
        }
    }
    ctx->pc = 0x1803B0u;
label_1803b0:
    // 0x1803b0: 0x50c00013
    ctx->pc = 0x1803B0u;
    {
        const bool branch_taken_0x1803b0 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x1803b0) {
            ctx->pc = 0x1803B4u;
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x180400u;
            goto label_180400;
        }
    }
    ctx->pc = 0x1803B8u;
    // 0x1803b8: 0x8cc20000
    ctx->pc = 0x1803b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1803bc: 0x8cc30004
    ctx->pc = 0x1803bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1803c0: 0x8cc40008
    ctx->pc = 0x1803c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1803c4: 0x8cc5000c
    ctx->pc = 0x1803c4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1803c8: 0xafa20000
    ctx->pc = 0x1803c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1803cc: 0xafa30008
    ctx->pc = 0x1803ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1803d0: 0xafa4000c
    ctx->pc = 0x1803d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x1803d4: 0xafa50010
    ctx->pc = 0x1803d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1803d8: 0x68c20017
    ctx->pc = 0x1803d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1803dc: 0x6cc20010
    ctx->pc = 0x1803dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1803e0: 0x68c3001f
    ctx->pc = 0x1803e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1803e4: 0x6cc30018
    ctx->pc = 0x1803e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1803e8: 0xb3a2001b
    ctx->pc = 0x1803e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 27); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1803ec: 0xb7a20014
    ctx->pc = 0x1803ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1803f0: 0xb3a30023
    ctx->pc = 0x1803f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1803f4: 0xb7a3001c
    ctx->pc = 0x1803f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 28); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1803f8: 0x10000006
    ctx->pc = 0x1803F8u;
    {
        const bool branch_taken_0x1803f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1803FCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1803f8) {
            ctx->pc = 0x180414u;
            goto label_180414;
        }
    }
    ctx->pc = 0x180400u;
label_180400:
    // 0x180400: 0xafa00008
    ctx->pc = 0x180400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x180404: 0xafa0000c
    ctx->pc = 0x180404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x180408: 0xafa00010
    ctx->pc = 0x180408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x18040c: 0xa3a00014
    ctx->pc = 0x18040cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x180410: 0x8fa20000
    ctx->pc = 0x180410u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_180414:
    // 0x180414: 0x24120001
    ctx->pc = 0x180414u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x180418: 0xafb20004
    ctx->pc = 0x180418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
    // 0x18041c: 0x3a0202d
    ctx->pc = 0x18041cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180420: 0x34420001
    ctx->pc = 0x180420u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
    // 0x180424: 0x220282d
    ctx->pc = 0x180424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180428: 0xafa20000
    ctx->pc = 0x180428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x18042c: 0xc06230c
    ctx->pc = 0x18042Cu;
    SET_GPR_U32(ctx, 31, 0x180434u);
    ctx->pc = 0x180430u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 128));
    ctx->pc = 0x188C30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00188C30_0x188c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180434u; }
    }
    if (ctx->pc != 0x180434u) { return; }
    ctx->pc = 0x180434u;
    // 0x180434: 0x40802d
    ctx->pc = 0x180434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180438: 0x600000b
    ctx->pc = 0x180438u;
    {
        const bool branch_taken_0x180438 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x18043Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
        if (branch_taken_0x180438) {
            ctx->pc = 0x180468u;
            goto label_180468;
        }
    }
    ctx->pc = 0x180440u;
    // 0x180440: 0x24020334
    ctx->pc = 0x180440u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 820));
    // 0x180444: 0x2021018
    ctx->pc = 0x180444u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x180448: 0x24636188
    ctx->pc = 0x180448u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 24968));
    // 0x18044c: 0x200202d
    ctx->pc = 0x18044cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180450: 0x622821
    ctx->pc = 0x180450u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x180454: 0x431021
    ctx->pc = 0x180454u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x180458: 0xacb10010
    ctx->pc = 0x180458u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 17));
    // 0x18045c: 0xc060228
    ctx->pc = 0x18045Cu;
    SET_GPR_U32(ctx, 31, 0x180464u);
    ctx->pc = 0x180460u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    ctx->pc = 0x1808A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001808A0_0x1808a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180464u; }
    }
    if (ctx->pc != 0x180464u) { return; }
    ctx->pc = 0x180464u;
    // 0x180464: 0x200102d
    ctx->pc = 0x180464u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_180468:
    // 0x180468: 0xdfbf0060
    ctx->pc = 0x180468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18046c: 0xdfb20050
    ctx->pc = 0x18046cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x180470: 0xdfb10040
    ctx->pc = 0x180470u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x180474: 0xdfb00030
    ctx->pc = 0x180474u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x180478: 0x3e00008
    ctx->pc = 0x180478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18047Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1803B0u: goto label_1803b0;
            case 0x180400u: goto label_180400;
            case 0x180414u: goto label_180414;
            case 0x180468u: goto label_180468;
            default: break;
        }
        return;
    }
    ctx->pc = 0x180480u;
}
