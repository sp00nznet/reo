#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017D2F8
// Address: 0x17d2f8 - 0x17d390
void sub_0017D2F8_0x17d2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17d2f8u;

    // 0x17d2f8: 0x27bdffc0
    ctx->pc = 0x17d2f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17d2fc: 0x80402d
    ctx->pc = 0x17d2fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d300: 0xffb10028
    ctx->pc = 0x17d300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x17d304: 0x25110014
    ctx->pc = 0x17d304u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 8), 20));
    // 0x17d308: 0xffb00020
    ctx->pc = 0x17d308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x17d30c: 0xa0102d
    ctx->pc = 0x17d30cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d310: 0xffbf0030
    ctx->pc = 0x17d310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17d314: 0xc0182d
    ctx->pc = 0x17d314u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d318: 0xae220004
    ctx->pc = 0x17d318u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x17d31c: 0x3c050024
    ctx->pc = 0x17d31cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x17d320: 0xae230008
    ctx->pc = 0x17d320u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x17d324: 0x3c060024
    ctx->pc = 0x17d324u;
    SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
    // 0x17d328: 0x3a0202d
    ctx->pc = 0x17d328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d32c: 0x24a51438
    ctx->pc = 0x17d32cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 5176));
    // 0x17d330: 0x24c61440
    ctx->pc = 0x17d330u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 5184));
    // 0x17d334: 0x8d100024
    ctx->pc = 0x17d334u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x17d338: 0x27a70010
    ctx->pc = 0x17d338u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
    // 0x17d33c: 0xafa20000
    ctx->pc = 0x17d33cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x17d340: 0xc050288
    ctx->pc = 0x17D340u;
    SET_GPR_U32(ctx, 31, 0x17D348u);
    ctx->pc = 0x17D344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->pc = 0x140A20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00140A20_0x140a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D348u; }
    }
    if (ctx->pc != 0x17D348u) { return; }
    ctx->pc = 0x17D348u;
    // 0x17d348: 0x282d
    ctx->pc = 0x17d348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d34c: 0x302d
    ctx->pc = 0x17d34cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d350: 0x14400005
    ctx->pc = 0x17D350u;
    {
        const bool branch_taken_0x17d350 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17D354u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17d350) {
            ctx->pc = 0x17D368u;
            goto label_17d368;
        }
    }
    ctx->pc = 0x17D358u;
    // 0x17d358: 0xc05f60a
    ctx->pc = 0x17D358u;
    SET_GPR_U32(ctx, 31, 0x17D360u);
    ctx->pc = 0x17D828u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D828_0x17d828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D360u; }
    }
    if (ctx->pc != 0x17D360u) { return; }
    ctx->pc = 0x17D360u;
    // 0x17d360: 0x10000005
    ctx->pc = 0x17D360u;
    {
        const bool branch_taken_0x17d360 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17D364u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x17d360) {
            ctx->pc = 0x17D378u;
            goto label_17d378;
        }
    }
    ctx->pc = 0x17D368u;
label_17d368:
    // 0x17d368: 0x8fa50010
    ctx->pc = 0x17d368u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d36c: 0xc05f60a
    ctx->pc = 0x17D36Cu;
    SET_GPR_U32(ctx, 31, 0x17D374u);
    ctx->pc = 0x17D370u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->pc = 0x17D828u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D828_0x17d828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D374u; }
    }
    if (ctx->pc != 0x17D374u) { return; }
    ctx->pc = 0x17D374u;
    // 0x17d374: 0x24020001
    ctx->pc = 0x17d374u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_17d378:
    // 0x17d378: 0xdfb00020
    ctx->pc = 0x17d378u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d37c: 0xae220000
    ctx->pc = 0x17d37cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x17d380: 0xdfbf0030
    ctx->pc = 0x17d380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17d384: 0xdfb10028
    ctx->pc = 0x17d384u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17d388: 0x3e00008
    ctx->pc = 0x17D388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D38Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17D368u: goto label_17d368;
            case 0x17D378u: goto label_17d378;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17D390u;
}
