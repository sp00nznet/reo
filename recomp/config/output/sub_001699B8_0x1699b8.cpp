#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001699B8
// Address: 0x1699b8 - 0x1699f0
void sub_001699B8_0x1699b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1699b8u;

    // 0x1699b8: 0x8c830078
    ctx->pc = 0x1699b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x1699bc: 0x248400d4
    ctx->pc = 0x1699bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 212));
    // 0x1699c0: 0x10600004
    ctx->pc = 0x1699C0u;
    {
        const bool branch_taken_0x1699c0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1699C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1699c0) {
            ctx->pc = 0x1699D4u;
            goto label_1699d4;
        }
    }
    ctx->pc = 0x1699C8u;
    // 0x1699c8: 0x8c830014
    ctx->pc = 0x1699c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1699cc: 0x54600001
    ctx->pc = 0x1699CCu;
    {
        const bool branch_taken_0x1699cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1699cc) {
            ctx->pc = 0x1699D0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 24)));
            ctx->pc = 0x1699D4u;
            goto label_1699d4;
        }
    }
    ctx->pc = 0x1699D4u;
label_1699d4:
    // 0x1699d4: 0x3e00008
    ctx->pc = 0x1699D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1699D4u: goto label_1699d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1699DCu;
    // 0x1699dc: 0x0
    ctx->pc = 0x1699dcu;
    // NOP
    // 0x1699e0: 0x3c020024
    ctx->pc = 0x1699e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x1699e4: 0x3e00008
    ctx->pc = 0x1699E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1699E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1936));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1699D4u: goto label_1699d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1699ECu;
    // 0x1699ec: 0x0
    ctx->pc = 0x1699ecu;
    // NOP
}
