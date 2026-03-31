#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016D3D0
// Address: 0x16d3d0 - 0x16d460
void sub_0016D3D0_0x16d3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16d3d0u;

    // 0x16d3d0: 0x27bdffc0
    ctx->pc = 0x16d3d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16d3d4: 0x80282d
    ctx->pc = 0x16d3d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d3d8: 0xffb00030
    ctx->pc = 0x16d3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x16d3dc: 0x24b00cdc
    ctx->pc = 0x16d3dcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 5), 3292));
    // 0x16d3e0: 0xffbf0038
    ctx->pc = 0x16d3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x16d3e4: 0x3a0202d
    ctx->pc = 0x16d3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d3e8: 0x8ca30d04
    ctx->pc = 0x16d3e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 3332)));
    // 0x16d3ec: 0x10600018
    ctx->pc = 0x16D3ECu;
    {
        const bool branch_taken_0x16d3ec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x16D3F0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16d3ec) {
            ctx->pc = 0x16D450u;
            goto label_16d450;
        }
    }
    ctx->pc = 0x16D3F4u;
    // 0x16d3f4: 0x68a20d0f
    ctx->pc = 0x16d3f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 3343); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16d3f8: 0x6ca20d08
    ctx->pc = 0x16d3f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 3336); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16d3fc: 0x68a30d17
    ctx->pc = 0x16d3fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 3351); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16d400: 0x6ca30d10
    ctx->pc = 0x16d400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 3344); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16d404: 0x68a60d1f
    ctx->pc = 0x16d404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 3359); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16d408: 0x6ca60d18
    ctx->pc = 0x16d408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 3352); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16d40c: 0x8ca70d20
    ctx->pc = 0x16d40cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 5), 3360)));
    // 0x16d410: 0xb3a20007
    ctx->pc = 0x16d410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16d414: 0xb7a20000
    ctx->pc = 0x16d414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16d418: 0xb3a3000f
    ctx->pc = 0x16d418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16d41c: 0xb7a30008
    ctx->pc = 0x16d41cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16d420: 0xb3a60017
    ctx->pc = 0x16d420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16d424: 0xb7a60010
    ctx->pc = 0x16d424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16d428: 0xafa70018
    ctx->pc = 0x16d428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x16d42c: 0x27a50020
    ctx->pc = 0x16d42cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x16d430: 0x27a60024
    ctx->pc = 0x16d430u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 36));
    // 0x16d434: 0x8fa20018
    ctx->pc = 0x16d434u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16d438: 0x24420001
    ctx->pc = 0x16d438u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x16d43c: 0xc05da70
    ctx->pc = 0x16D43Cu;
    SET_GPR_U32(ctx, 31, 0x16D444u);
    ctx->pc = 0x16D440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->pc = 0x1769C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001769C0_0x1769c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D444u; }
    }
    if (ctx->pc != 0x16D444u) { return; }
    ctx->pc = 0x16D444u;
    // 0x16d444: 0x8fa20020
    ctx->pc = 0x16d444u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d448: 0x8e030020
    ctx->pc = 0x16d448u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x16d44c: 0x431023
    ctx->pc = 0x16d44cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16d450:
    // 0x16d450: 0xdfb00030
    ctx->pc = 0x16d450u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16d454: 0xdfbf0038
    ctx->pc = 0x16d454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16d458: 0x3e00008
    ctx->pc = 0x16D458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D45Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D450u: goto label_16d450;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16D460u;
}
