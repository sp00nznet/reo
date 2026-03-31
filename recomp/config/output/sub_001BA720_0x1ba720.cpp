#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BA720
// Address: 0x1ba720 - 0x1ba740
void sub_001BA720_0x1ba720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ba720u;

    // 0x1ba720: 0x3c040031
    ctx->pc = 0x1ba720u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x1ba724: 0x282d
    ctx->pc = 0x1ba724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba728: 0x24846570
    ctx->pc = 0x1ba728u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 25968));
    // 0x1ba72c: 0x8041f1a
    ctx->pc = 0x1BA72Cu;
    ctx->pc = 0x1BA730u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 28));
    ctx->pc = 0x107C68u;
    sub_00107C68_0x107c68(rdram, ctx, runtime); return;
    ctx->pc = 0x1BA734u;
    // 0x1ba734: 0x0
    ctx->pc = 0x1ba734u;
    // NOP
    // 0x1ba738: 0x0
    ctx->pc = 0x1ba738u;
    // NOP
    // 0x1ba73c: 0x0
    ctx->pc = 0x1ba73cu;
    // NOP
}
