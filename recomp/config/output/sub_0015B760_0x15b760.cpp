#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015B760
// Address: 0x15b760 - 0x15b7b0
void sub_0015B760_0x15b760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15b760u;

    // 0x15b760: 0x3c020026
    ctx->pc = 0x15b760u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x15b764: 0x24424c70
    ctx->pc = 0x15b764u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19568));
    // 0x15b768: 0x8c460054
    ctx->pc = 0x15b768u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x15b76c: 0x18c0000d
    ctx->pc = 0x15B76Cu;
    {
        const bool branch_taken_0x15b76c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x15B770u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 88)));
        if (branch_taken_0x15b76c) {
            ctx->pc = 0x15B7A4u;
            goto label_15b7a4;
        }
    }
    ctx->pc = 0x15B774u;
    // 0x15b774: 0x41080
    ctx->pc = 0x15b774u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x15b778: 0x24070002
    ctx->pc = 0x15b778u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    // 0x15b77c: 0x24440190
    ctx->pc = 0x15b77cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 400));
label_15b780:
    // 0x15b780: 0x8c620188
    ctx->pc = 0x15b780u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 392)));
    // 0x15b784: 0x14470003
    ctx->pc = 0x15B784u;
    {
        const bool branch_taken_0x15b784 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 7));
        ctx->pc = 0x15B788u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
        if (branch_taken_0x15b784) {
            ctx->pc = 0x15B794u;
            goto label_15b794;
        }
    }
    ctx->pc = 0x15B78Cu;
    // 0x15b78c: 0x641021
    ctx->pc = 0x15b78cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15b790: 0xac450000
    ctx->pc = 0x15b790u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_15b794:
    // 0x15b794: 0x0
    ctx->pc = 0x15b794u;
    // NOP
    // 0x15b798: 0x0
    ctx->pc = 0x15b798u;
    // NOP
    // 0x15b79c: 0x14c0fff8
    ctx->pc = 0x15B79Cu;
    {
        const bool branch_taken_0x15b79c = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x15B7A0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 992));
        if (branch_taken_0x15b79c) {
            ctx->pc = 0x15B780u;
            goto label_15b780;
        }
    }
    ctx->pc = 0x15B7A4u;
label_15b7a4:
    // 0x15b7a4: 0x3e00008
    ctx->pc = 0x15B7A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15B780u: goto label_15b780;
            case 0x15B794u: goto label_15b794;
            case 0x15B7A4u: goto label_15b7a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15B7ACu;
    // 0x15b7ac: 0x0
    ctx->pc = 0x15b7acu;
    // NOP
}
