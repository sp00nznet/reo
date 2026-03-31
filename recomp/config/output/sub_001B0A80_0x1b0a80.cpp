#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B0A80
// Address: 0x1b0a80 - 0x1b0aa0
void sub_001B0A80_0x1b0a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b0a80u;

    // 0x1b0a80: 0x3c04002c
    ctx->pc = 0x1b0a80u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x1b0a84: 0x240500ff
    ctx->pc = 0x1b0a84u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    // 0x1b0a88: 0x24848e90
    ctx->pc = 0x1b0a88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294938256));
    // 0x1b0a8c: 0x8041f1a
    ctx->pc = 0x1B0A8Cu;
    ctx->pc = 0x1B0A90u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x107C68u;
    sub_00107C68_0x107c68(rdram, ctx, runtime); return;
    ctx->pc = 0x1B0A94u;
    // 0x1b0a94: 0x0
    ctx->pc = 0x1b0a94u;
    // NOP
    // 0x1b0a98: 0x0
    ctx->pc = 0x1b0a98u;
    // NOP
    // 0x1b0a9c: 0x0
    ctx->pc = 0x1b0a9cu;
    // NOP
}
