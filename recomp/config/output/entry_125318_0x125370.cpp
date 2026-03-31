#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_125318
// Address: 0x125318 - 0x125370
void entry_125318_0x125370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x125318u;

    // 0x125318: 0x27bdfff0
    ctx->pc = 0x125318u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12531c: 0x24830048
    ctx->pc = 0x12531cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 72));
    // 0x125320: 0xffbf0008
    ctx->pc = 0x125320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x125324: 0x52840
    ctx->pc = 0x125324u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
    // 0x125328: 0xffb00000
    ctx->pc = 0x125328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12532c: 0xa0302d
    ctx->pc = 0x12532cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125330: 0x8c620020
    ctx->pc = 0x125330u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x125334: 0x8c670014
    ctx->pc = 0x125334u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x125338: 0x8c68001c
    ctx->pc = 0x125338u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x12533c: 0x21040
    ctx->pc = 0x12533cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x125340: 0x8c900008
    ctx->pc = 0x125340u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x125344: 0xe23821
    ctx->pc = 0x125344u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x125348: 0x8c650000
    ctx->pc = 0x125348u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12534c: 0x84040
    ctx->pc = 0x12534cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 1));
    // 0x125350: 0x200202d
    ctx->pc = 0x125350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125354: 0xc04d3f4
    ctx->pc = 0x125354u;
    SET_GPR_U32(ctx, 31, 0x12535Cu);
    ctx->pc = 0x125358u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    ctx->pc = 0x134FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00134FD0_0x134fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12535Cu; }
    }
    if (ctx->pc != 0x12535Cu) { return; }
    ctx->pc = 0x12535Cu;
    // 0x12535c: 0x200202d
    ctx->pc = 0x12535cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125360: 0xdfbf0008
    ctx->pc = 0x125360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x125364: 0xdfb00000
    ctx->pc = 0x125364u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125368: 0x804d400
    ctx->pc = 0x125368u;
    ctx->pc = 0x12536Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x135000u;
    entry_135000_0x135020(rdram, ctx, runtime); return;
    ctx->pc = 0x125370u;
}
