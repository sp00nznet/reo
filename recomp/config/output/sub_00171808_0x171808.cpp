#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00171808
// Address: 0x171808 - 0x171880
void sub_00171808_0x171808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x171808u;

    // 0x171808: 0x8c831b30
    ctx->pc = 0x171808u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 6960)));
    // 0x17180c: 0x3e00008
    ctx->pc = 0x17180Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171810u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 2732)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x171814u;
    // 0x171814: 0x0
    ctx->pc = 0x171814u;
    // NOP
    // 0x171818: 0x3c030027
    ctx->pc = 0x171818u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x17181c: 0x27bdfff0
    ctx->pc = 0x17181cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171820: 0x24020001
    ctx->pc = 0x171820u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x171824: 0xffbf0000
    ctx->pc = 0x171824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171828: 0xac626120
    ctx->pc = 0x171828u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24864), GPR_U32(ctx, 2));
    // 0x17182c: 0x3c020027
    ctx->pc = 0x17182cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x171830: 0xa0382d
    ctx->pc = 0x171830u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171834: 0x24486128
    ctx->pc = 0x171834u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 24872));
    // 0x171838: 0x68e30007
    ctx->pc = 0x171838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x17183c: 0x6ce30000
    ctx->pc = 0x17183cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x171840: 0xb1030007
    ctx->pc = 0x171840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x171844: 0xb5030000
    ctx->pc = 0x171844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x171848: 0x3c05ff00
    ctx->pc = 0x171848u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x17184c: 0xc0202d
    ctx->pc = 0x17184cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171850: 0x8cc21b30
    ctx->pc = 0x171850u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 6960)));
    // 0x171854: 0x68e90007
    ctx->pc = 0x171854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x171858: 0x6ce90000
    ctx->pc = 0x171858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x17185c: 0xb0490aaf
    ctx->pc = 0x17185cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 2735); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 9) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x171860: 0xb4490aa8
    ctx->pc = 0x171860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 2728); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 9) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x171864: 0xc05a704
    ctx->pc = 0x171864u;
    SET_GPR_U32(ctx, 31, 0x17186Cu);
    ctx->pc = 0x171868u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3904));
    ctx->pc = 0x169C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169C10_0x169c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17186Cu; }
    }
    if (ctx->pc != 0x17186Cu) { return; }
    ctx->pc = 0x17186Cu;
    // 0x17186c: 0x24020001
    ctx->pc = 0x17186cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x171870: 0xdfbf0000
    ctx->pc = 0x171870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171874: 0x3e00008
    ctx->pc = 0x171874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171878u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17187Cu;
    // 0x17187c: 0x0
    ctx->pc = 0x17187cu;
    // NOP
}
