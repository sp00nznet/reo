#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B7C90
// Address: 0x1b7c90 - 0x1b7cb0
void sub_001B7C90_0x1b7c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b7c90u;

    // 0x1b7c90: 0x3c040031
    ctx->pc = 0x1b7c90u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x1b7c94: 0x282d
    ctx->pc = 0x1b7c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7c98: 0x24846350
    ctx->pc = 0x1b7c98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 25424));
    // 0x1b7c9c: 0x8041f1a
    ctx->pc = 0x1B7C9Cu;
    ctx->pc = 0x1B7CA0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 512));
    ctx->pc = 0x107C68u;
    sub_00107C68_0x107c68(rdram, ctx, runtime); return;
    ctx->pc = 0x1B7CA4u;
    // 0x1b7ca4: 0x0
    ctx->pc = 0x1b7ca4u;
    // NOP
    // 0x1b7ca8: 0x0
    ctx->pc = 0x1b7ca8u;
    // NOP
    // 0x1b7cac: 0x0
    ctx->pc = 0x1b7cacu;
    // NOP
}
