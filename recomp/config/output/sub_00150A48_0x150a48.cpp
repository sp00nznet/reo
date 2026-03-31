#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00150A48
// Address: 0x150a48 - 0x150a78
void sub_00150A48_0x150a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x150a48u;

    // 0x150a48: 0x2402003f
    ctx->pc = 0x150a48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 63));
    // 0x150a4c: 0x2442ffe0
    ctx->pc = 0x150a4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967264));
label_150a50:
    // 0x150a50: 0x0
    ctx->pc = 0x150a50u;
    // NOP
    // 0x150a54: 0x0
    ctx->pc = 0x150a54u;
    // NOP
    // 0x150a58: 0x0
    ctx->pc = 0x150a58u;
    // NOP
    // 0x150a5c: 0x0
    ctx->pc = 0x150a5cu;
    // NOP
    // 0x150a60: 0x0
    ctx->pc = 0x150a60u;
    // NOP
    // 0x150a64: 0x443fffa
    ctx->pc = 0x150A64u;
    {
        const bool branch_taken_0x150a64 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x150a64) {
            ctx->pc = 0x150A68u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967264));
            ctx->pc = 0x150A50u;
            goto label_150a50;
        }
    }
    ctx->pc = 0x150A6Cu;
    // 0x150a6c: 0x3e00008
    ctx->pc = 0x150A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x150A50u: goto label_150a50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x150A74u;
    // 0x150a74: 0x0
    ctx->pc = 0x150a74u;
    // NOP
}
