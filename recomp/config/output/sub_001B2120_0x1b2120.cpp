#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B2120
// Address: 0x1b2120 - 0x1b2130
void sub_001B2120_0x1b2120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b2120u;

    // 0x1b2120: 0x282d
    ctx->pc = 0x1b2120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2124: 0x8041f1a
    ctx->pc = 0x1B2124u;
    ctx->pc = 0x1B2128u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3204));
    ctx->pc = 0x107C68u;
    sub_00107C68_0x107c68(rdram, ctx, runtime); return;
    ctx->pc = 0x1B212Cu;
    // 0x1b212c: 0x0
    ctx->pc = 0x1b212cu;
    // NOP
}
