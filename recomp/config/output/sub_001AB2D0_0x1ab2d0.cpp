#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AB2D0
// Address: 0x1ab2d0 - 0x1ab2f0
void sub_001AB2D0_0x1ab2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ab2d0u;

    // 0x1ab2d0: 0x3c040025
    ctx->pc = 0x1ab2d0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)37 << 16));
    // 0x1ab2d4: 0x3c05002b
    ctx->pc = 0x1ab2d4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)43 << 16));
    // 0x1ab2d8: 0x2484fcc8
    ctx->pc = 0x1ab2d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966472));
    // 0x1ab2dc: 0x24a52b10
    ctx->pc = 0x1ab2dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 11024));
    // 0x1ab2e0: 0x24060003
    ctx->pc = 0x1ab2e0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ab2e4: 0x806a6b0
    ctx->pc = 0x1AB2E4u;
    ctx->pc = 0x1AB2E8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1A9AC0u;
    sub_001A9AC0_0x1a9ac0(rdram, ctx, runtime); return;
    ctx->pc = 0x1AB2ECu;
    // 0x1ab2ec: 0x0
    ctx->pc = 0x1ab2ecu;
    // NOP
}
