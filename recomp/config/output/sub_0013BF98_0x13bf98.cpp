#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013BF98
// Address: 0x13bf98 - 0x13bfb0
void sub_0013BF98_0x13bf98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13bf98u;

    // 0x13bf98: 0x42600
    ctx->pc = 0x13bf98u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 24));
    // 0x13bf9c: 0x2402002f
    ctx->pc = 0x13bf9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 47));
    // 0x13bfa0: 0x42603
    ctx->pc = 0x13bfa0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    // 0x13bfa4: 0x3883005c
    ctx->pc = 0x13bfa4u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 4), 92));
    // 0x13bfa8: 0x3e00008
    ctx->pc = 0x13BFA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BFACu;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13BFB0u;
}
