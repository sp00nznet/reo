#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A9D60
// Address: 0x1a9d60 - 0x1a9d70
void sub_001A9D60_0x1a9d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a9d60u;

    // 0x1a9d60: 0x8ca60020
    ctx->pc = 0x1a9d60u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1a9d64: 0x8ca50008
    ctx->pc = 0x1a9d64u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a9d68: 0x806a6b0
    ctx->pc = 0x1A9D68u;
    ctx->pc = 0x1A9D6Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A9AC0u;
    sub_001A9AC0_0x1a9ac0(rdram, ctx, runtime); return;
    ctx->pc = 0x1A9D70u;
}
