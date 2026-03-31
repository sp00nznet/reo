#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_174848
// Address: 0x174848 - 0x174878
void entry_174848_0x174878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x174848u;

    // 0x174848: 0x8c832ab0
    ctx->pc = 0x174848u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 10928)));
    // 0x17484c: 0x10600007
    ctx->pc = 0x17484Cu;
    {
        const bool branch_taken_0x17484c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x17484c) {
            ctx->pc = 0x17486Cu;
            goto label_17486c;
        }
    }
    ctx->pc = 0x174854u;
    // 0x174854: 0x8c620da4
    ctx->pc = 0x174854u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 3492)));
    // 0x174858: 0x4420001
    ctx->pc = 0x174858u;
    {
        const bool branch_taken_0x174858 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x174858) {
            ctx->pc = 0x17485Cu;
            WRITE32(ADD32(GPR_U32(ctx, 3), 3492), GPR_U32(ctx, 5));
            ctx->pc = 0x174860u;
            goto label_174860;
        }
    }
    ctx->pc = 0x174860u;
label_174860:
    // 0x174860: 0x8c620da8
    ctx->pc = 0x174860u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 3496)));
    // 0x174864: 0x4420001
    ctx->pc = 0x174864u;
    {
        const bool branch_taken_0x174864 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x174864) {
            ctx->pc = 0x174868u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 3496), GPR_U32(ctx, 6));
            ctx->pc = 0x17486Cu;
            goto label_17486c;
        }
    }
    ctx->pc = 0x17486Cu;
label_17486c:
    // 0x17486c: 0x3e00008
    ctx->pc = 0x17486Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174860u: goto label_174860;
            case 0x17486Cu: goto label_17486c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174874u;
    // 0x174874: 0x0
    ctx->pc = 0x174874u;
    // NOP
}
