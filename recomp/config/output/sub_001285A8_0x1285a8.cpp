#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001285A8
// Address: 0x1285a8 - 0x1285d8
void sub_001285A8_0x1285a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1285a8u;

    // 0x1285a8: 0x3402c350
    ctx->pc = 0x1285a8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 50000));
    // 0x1285ac: 0x2442ffff
    ctx->pc = 0x1285acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_1285b0:
    // 0x1285b0: 0x0
    ctx->pc = 0x1285b0u;
    // NOP
    // 0x1285b4: 0x0
    ctx->pc = 0x1285b4u;
    // NOP
    // 0x1285b8: 0x0
    ctx->pc = 0x1285b8u;
    // NOP
    // 0x1285bc: 0x0
    ctx->pc = 0x1285bcu;
    // NOP
    // 0x1285c0: 0x0
    ctx->pc = 0x1285c0u;
    // NOP
    // 0x1285c4: 0x5440fffa
    ctx->pc = 0x1285C4u;
    {
        const bool branch_taken_0x1285c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1285c4) {
            ctx->pc = 0x1285C8u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->pc = 0x1285B0u;
            goto label_1285b0;
        }
    }
    ctx->pc = 0x1285CCu;
    // 0x1285cc: 0x3e00008
    ctx->pc = 0x1285CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1285B0u: goto label_1285b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1285D4u;
    // 0x1285d4: 0x0
    ctx->pc = 0x1285d4u;
    // NOP
}
