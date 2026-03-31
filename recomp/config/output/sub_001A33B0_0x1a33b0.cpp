#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A33B0
// Address: 0x1a33b0 - 0x1a33e0
void sub_001A33B0_0x1a33b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a33b0u;

    // 0x1a33b0: 0x27bdfff0
    ctx->pc = 0x1a33b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a33b4: 0xffbf0000
    ctx->pc = 0x1a33b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a33b8: 0xc068cc4
    ctx->pc = 0x1A33B8u;
    SET_GPR_U32(ctx, 31, 0x1A33C0u);
    ctx->pc = 0x1A3310u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3310_0x1a3310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A33C0u; }
    }
    if (ctx->pc != 0x1A33C0u) { return; }
    ctx->pc = 0x1A33C0u;
    // 0x1a33c0: 0x14400003
    ctx->pc = 0x1A33C0u;
    {
        const bool branch_taken_0x1a33c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a33c0) {
            ctx->pc = 0x1A33D0u;
            goto label_1a33d0;
        }
    }
    ctx->pc = 0x1A33C8u;
    // 0x1a33c8: 0x10000002
    ctx->pc = 0x1A33C8u;
    {
        const bool branch_taken_0x1a33c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A33CCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a33c8) {
            ctx->pc = 0x1A33D4u;
            goto label_1a33d4;
        }
    }
    ctx->pc = 0x1A33D0u;
label_1a33d0:
    // 0x1a33d0: 0x2442000c
    ctx->pc = 0x1a33d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12));
label_1a33d4:
    // 0x1a33d4: 0xdfbf0000
    ctx->pc = 0x1a33d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a33d8: 0x3e00008
    ctx->pc = 0x1A33D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A33DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A33D0u: goto label_1a33d0;
            case 0x1A33D4u: goto label_1a33d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A33E0u;
}
