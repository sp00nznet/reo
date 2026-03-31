#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B4A60
// Address: 0x1b4a60 - 0x1b4a80
void sub_001B4A60_0x1b4a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b4a60u;

    // 0x1b4a60: 0x3c040031
    ctx->pc = 0x1b4a60u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x1b4a64: 0x282d
    ctx->pc = 0x1b4a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4a68: 0x248451c0
    ctx->pc = 0x1b4a68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20928));
    // 0x1b4a6c: 0x8041f1a
    ctx->pc = 0x1B4A6Cu;
    ctx->pc = 0x1B4A70u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4496));
    ctx->pc = 0x107C68u;
    sub_00107C68_0x107c68(rdram, ctx, runtime); return;
    ctx->pc = 0x1B4A74u;
    // 0x1b4a74: 0x0
    ctx->pc = 0x1b4a74u;
    // NOP
    // 0x1b4a78: 0x0
    ctx->pc = 0x1b4a78u;
    // NOP
    // 0x1b4a7c: 0x0
    ctx->pc = 0x1b4a7cu;
    // NOP
}
