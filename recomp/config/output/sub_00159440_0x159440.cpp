#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00159440
// Address: 0x159440 - 0x1594b8
void sub_00159440_0x159440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x159440u;

    // 0x159440: 0x27bdffe0
    ctx->pc = 0x159440u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x159444: 0xffb00000
    ctx->pc = 0x159444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x159448: 0x80802d
    ctx->pc = 0x159448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15944c: 0xffb10008
    ctx->pc = 0x15944cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x159450: 0xa0882d
    ctx->pc = 0x159450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159454: 0xffb20010
    ctx->pc = 0x159454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x159458: 0xffbf0018
    ctx->pc = 0x159458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x15945c: 0xc056dec
    ctx->pc = 0x15945Cu;
    SET_GPR_U32(ctx, 31, 0x159464u);
    ctx->pc = 0x159460u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15B7B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B7B0_0x15b7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159464u; }
    }
    if (ctx->pc != 0x159464u) { return; }
    ctx->pc = 0x159464u;
    // 0x159464: 0x3c05ff03
    ctx->pc = 0x159464u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65283 << 16));
    // 0x159468: 0x202d
    ctx->pc = 0x159468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15946c: 0x10400008
    ctx->pc = 0x15946Cu;
    {
        const bool branch_taken_0x15946c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x159470u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 526));
        if (branch_taken_0x15946c) {
            ctx->pc = 0x159490u;
            goto label_159490;
        }
    }
    ctx->pc = 0x159474u;
    // 0x159474: 0xdfb00000
    ctx->pc = 0x159474u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159478: 0xdfb10008
    ctx->pc = 0x159478u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15947c: 0xdfb20010
    ctx->pc = 0x15947cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159480: 0xdfbf0018
    ctx->pc = 0x159480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x159484: 0x80563ce
    ctx->pc = 0x159484u;
    ctx->pc = 0x159488u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x158F38u;
    sub_00158F38_0x158f38(rdram, ctx, runtime); return;
    ctx->pc = 0x15948Cu;
    // 0x15948c: 0x0
    ctx->pc = 0x15948cu;
    // NOP
label_159490:
    // 0x159490: 0x8e030288
    ctx->pc = 0x159490u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x159494: 0xdfbf0018
    ctx->pc = 0x159494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x159498: 0xae230000
    ctx->pc = 0x159498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x15949c: 0xdfb10008
    ctx->pc = 0x15949cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1594a0: 0x8e04028c
    ctx->pc = 0x1594a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 652)));
    // 0x1594a4: 0xdfb00000
    ctx->pc = 0x1594a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1594a8: 0xae440000
    ctx->pc = 0x1594a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x1594ac: 0xdfb20010
    ctx->pc = 0x1594acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1594b0: 0x3e00008
    ctx->pc = 0x1594B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1594B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x159490u: goto label_159490;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1594B8u;
}
