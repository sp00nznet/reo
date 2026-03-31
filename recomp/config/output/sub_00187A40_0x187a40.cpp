#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00187A40
// Address: 0x187a40 - 0x187a70
void sub_00187A40_0x187a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x187a40u;

    // 0x187a40: 0x418c0
    ctx->pc = 0x187a40u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x187a44: 0x2c850002
    ctx->pc = 0x187a44u;
    SET_GPR_U32(ctx, 5, SLTU32(GPR_U32(ctx, 4), 2));
    // 0x187a48: 0x102d
    ctx->pc = 0x187a48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187a4c: 0x10a00006
    ctx->pc = 0x187A4Cu;
    {
        const bool branch_taken_0x187a4c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x187A50u;
        SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        if (branch_taken_0x187a4c) {
            ctx->pc = 0x187A68u;
            goto label_187a68;
        }
    }
    ctx->pc = 0x187A54u;
    // 0x187a54: 0x31880
    ctx->pc = 0x187a54u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x187a58: 0x3c020029
    ctx->pc = 0x187a58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x187a5c: 0x431021
    ctx->pc = 0x187a5cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187a60: 0x8c42b8c8
    ctx->pc = 0x187a60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294949064)));
    // 0x187a64: 0x2102b
    ctx->pc = 0x187a64u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_187a68:
    // 0x187a68: 0x3e00008
    ctx->pc = 0x187A68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187A68u: goto label_187a68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x187A70u;
}
