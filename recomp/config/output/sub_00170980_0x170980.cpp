#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00170980
// Address: 0x170980 - 0x1709a0
void sub_00170980_0x170980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x170980u;

    // 0x170980: 0x10800004
    ctx->pc = 0x170980u;
    {
        const bool branch_taken_0x170980 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x170984u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x170980) {
            ctx->pc = 0x170994u;
            goto label_170994;
        }
    }
    ctx->pc = 0x170988u;
    // 0x170988: 0x8c83000c
    ctx->pc = 0x170988u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x17098c: 0x8ca2000c
    ctx->pc = 0x17098cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x170990: 0x43102a
    ctx->pc = 0x170990u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_170994:
    // 0x170994: 0x3e00008
    ctx->pc = 0x170994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170994u: goto label_170994;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17099Cu;
    // 0x17099c: 0x0
    ctx->pc = 0x17099cu;
    // NOP
}
