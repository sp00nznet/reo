#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001742A8
// Address: 0x1742a8 - 0x174328
void sub_001742A8_0x1742a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1742a8u;

    // 0x1742a8: 0x80302d
    ctx->pc = 0x1742a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1742ac: 0xa0402d
    ctx->pc = 0x1742acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1742b0: 0x8cc40008
    ctx->pc = 0x1742b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1742b4: 0x8cc30004
    ctx->pc = 0x1742b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1742b8: 0x10830019
    ctx->pc = 0x1742B8u;
    {
        const bool branch_taken_0x1742b8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1742BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1742b8) {
            ctx->pc = 0x174320u;
            goto label_174320;
        }
    }
    ctx->pc = 0x1742C0u;
    // 0x1742c0: 0x8cc5000c
    ctx->pc = 0x1742c0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1742c4: 0x8cc30000
    ctx->pc = 0x1742c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1742c8: 0x51040
    ctx->pc = 0x1742c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1742cc: 0x24a40001
    ctx->pc = 0x1742ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1742d0: 0x451021
    ctx->pc = 0x1742d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1742d4: 0x80382d
    ctx->pc = 0x1742d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1742d8: 0x21080
    ctx->pc = 0x1742d8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1742dc: 0x431021
    ctx->pc = 0x1742dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1742e0: 0x69030007
    ctx->pc = 0x1742e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1742e4: 0x6d030000
    ctx->pc = 0x1742e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1742e8: 0x8d090008
    ctx->pc = 0x1742e8u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1742ec: 0xb0430007
    ctx->pc = 0x1742ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1742f0: 0xb4430000
    ctx->pc = 0x1742f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1742f4: 0xac490008
    ctx->pc = 0x1742f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 9));
    // 0x1742f8: 0x8cc30004
    ctx->pc = 0x1742f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1742fc: 0x83202a
    ctx->pc = 0x1742fcu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x174300: 0x14800002
    ctx->pc = 0x174300u;
    {
        const bool branch_taken_0x174300 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x174304u;
        SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        if (branch_taken_0x174300) {
            ctx->pc = 0x17430Cu;
            goto label_17430c;
        }
    }
    ctx->pc = 0x174308u;
    // 0x174308: 0x24a70001
    ctx->pc = 0x174308u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 5), 1));
label_17430c:
    // 0x17430c: 0x8cc30008
    ctx->pc = 0x17430cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x174310: 0x102d
    ctx->pc = 0x174310u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174314: 0xacc7000c
    ctx->pc = 0x174314u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 7));
    // 0x174318: 0x24630001
    ctx->pc = 0x174318u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x17431c: 0xacc30008
    ctx->pc = 0x17431cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_174320:
    // 0x174320: 0x3e00008
    ctx->pc = 0x174320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17430Cu: goto label_17430c;
            case 0x174320u: goto label_174320;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174328u;
}
