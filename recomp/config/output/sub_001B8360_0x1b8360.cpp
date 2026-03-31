#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B8360
// Address: 0x1b8360 - 0x1b8380
void sub_001B8360_0x1b8360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b8360u;

    // 0x1b8360: 0x3c040031
    ctx->pc = 0x1b8360u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x1b8364: 0x282d
    ctx->pc = 0x1b8364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8368: 0x24846558
    ctx->pc = 0x1b8368u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 25944));
    // 0x1b836c: 0x8041f1a
    ctx->pc = 0x1B836Cu;
    ctx->pc = 0x1B8370u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x107C68u;
    sub_00107C68_0x107c68(rdram, ctx, runtime); return;
    ctx->pc = 0x1B8374u;
    // 0x1b8374: 0x0
    ctx->pc = 0x1b8374u;
    // NOP
    // 0x1b8378: 0x0
    ctx->pc = 0x1b8378u;
    // NOP
    // 0x1b837c: 0x0
    ctx->pc = 0x1b837cu;
    // NOP
}
