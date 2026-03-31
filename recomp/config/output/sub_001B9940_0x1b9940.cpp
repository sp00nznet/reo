#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B9940
// Address: 0x1b9940 - 0x1b9950
void sub_001B9940_0x1b9940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b9940u;

    // 0x1b9940: 0x282d
    ctx->pc = 0x1b9940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9944: 0x8041f1a
    ctx->pc = 0x1B9944u;
    ctx->pc = 0x1B9948u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 60));
    ctx->pc = 0x107C68u;
    sub_00107C68_0x107c68(rdram, ctx, runtime); return;
    ctx->pc = 0x1B994Cu;
    // 0x1b994c: 0x0
    ctx->pc = 0x1b994cu;
    // NOP
}
