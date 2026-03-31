#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F351C
// Address: 0x1f351c - 0x1f357c
void sub_001F351C_0x1f351c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f351cu;

    // 0x1f351c: 0x27bdffd0
    ctx->pc = 0x1f351cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f3520: 0xffb00010
    ctx->pc = 0x1f3520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f3524: 0xffbe0018
    ctx->pc = 0x1f3524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 30));
    // 0x1f3528: 0xffbf0020
    ctx->pc = 0x1f3528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f352c: 0x3a0f02d
    ctx->pc = 0x1f352cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3530: 0xafc40000
    ctx->pc = 0x1f3530u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1f3534: 0x8fc40000
    ctx->pc = 0x1f3534u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f3538: 0xc07c6cd
    ctx->pc = 0x1F3538u;
    SET_GPR_U32(ctx, 31, 0x1F3540u);
    ctx->pc = 0x1F1B34u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1B34_0x1f1b34(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3540u; }
    }
    if (ctx->pc != 0x1F3540u) { return; }
    ctx->pc = 0x1F3540u;
    // 0x1f3540: 0x40802d
    ctx->pc = 0x1f3540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3544: 0x8fc40000
    ctx->pc = 0x1f3544u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f3548: 0xc07c6b6
    ctx->pc = 0x1F3548u;
    SET_GPR_U32(ctx, 31, 0x1F3550u);
    ctx->pc = 0x1F1AD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1AD8_0x1f1ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3550u; }
    }
    if (ctx->pc != 0x1F3550u) { return; }
    ctx->pc = 0x1F3550u;
    // 0x1f3550: 0x40182d
    ctx->pc = 0x1f3550u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3554: 0x200102d
    ctx->pc = 0x1f3554u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3558: 0x431023
    ctx->pc = 0x1f3558u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f355c: 0x2442ffd4
    ctx->pc = 0x1f355cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967252));
    // 0x1f3560: 0x3c0e82d
    ctx->pc = 0x1f3560u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3564: 0xdfb00010
    ctx->pc = 0x1f3564u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3568: 0xdfbe0018
    ctx->pc = 0x1f3568u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f356c: 0xdfbf0020
    ctx->pc = 0x1f356cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f3570: 0x27bd0030
    ctx->pc = 0x1f3570u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f3574: 0x3e00008
    ctx->pc = 0x1F3574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F357Cu;
}
