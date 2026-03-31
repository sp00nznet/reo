#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B1BB0
// Address: 0x1b1bb0 - 0x1b1bc0
void sub_001B1BB0_0x1b1bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b1bb0u;

    // 0x1b1bb0: 0x282d
    ctx->pc = 0x1b1bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1bb4: 0x806c6d0
    ctx->pc = 0x1B1BB4u;
    ctx->pc = 0x1B1BB8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1600));
    ctx->pc = 0x1B1B40u;
    sub_001B1B40_0x1b1b40(rdram, ctx, runtime); return;
    ctx->pc = 0x1B1BBCu;
    // 0x1b1bbc: 0x0
    ctx->pc = 0x1b1bbcu;
    // NOP
}
