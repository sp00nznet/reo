#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001724A0
// Address: 0x1724a0 - 0x1724c8
void sub_001724A0_0x1724a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1724a0u;

    // 0x1724a0: 0x8c830048
    ctx->pc = 0x1724a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1724a4: 0x2463ffff
    ctx->pc = 0x1724a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1724a8: 0x2c630004
    ctx->pc = 0x1724a8u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 3), 4));
    // 0x1724ac: 0x10600003
    ctx->pc = 0x1724ACu;
    {
        const bool branch_taken_0x1724ac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1724B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1724ac) {
            ctx->pc = 0x1724BCu;
            goto label_1724bc;
        }
    }
    ctx->pc = 0x1724B4u;
    // 0x1724b4: 0x8c820044
    ctx->pc = 0x1724b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1724b8: 0x2c420001
    ctx->pc = 0x1724b8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_1724bc:
    // 0x1724bc: 0x3e00008
    ctx->pc = 0x1724BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1724BCu: goto label_1724bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1724C4u;
    // 0x1724c4: 0x0
    ctx->pc = 0x1724c4u;
    // NOP
}
