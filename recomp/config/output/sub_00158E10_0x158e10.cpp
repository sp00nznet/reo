#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00158E10
// Address: 0x158e10 - 0x158e30
void sub_00158E10_0x158e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x158e10u;

    // 0x158e10: 0x27bdfff0
    ctx->pc = 0x158e10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x158e14: 0x3c040023
    ctx->pc = 0x158e14u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x158e18: 0xffbf0000
    ctx->pc = 0x158e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x158e1c: 0x2484d8c0
    ctx->pc = 0x158e1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957248));
    // 0x158e20: 0xdfbf0000
    ctx->pc = 0x158e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158e24: 0x805638c
    ctx->pc = 0x158E24u;
    ctx->pc = 0x158E28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x158E30u;
    sub_00158E30_0x158e30(rdram, ctx, runtime); return;
    ctx->pc = 0x158E2Cu;
    // 0x158e2c: 0x0
    ctx->pc = 0x158e2cu;
    // NOP
}
