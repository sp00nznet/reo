#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C72E0
// Address: 0x1c72e0 - 0x1c72f0
void sub_001C72E0_0x1c72e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c72e0u;

    // 0x1c72e0: 0x3c040033
    ctx->pc = 0x1c72e0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
    // 0x1c72e4: 0x2405ffff
    ctx->pc = 0x1c72e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c72e8: 0x8071f60
    ctx->pc = 0x1C72E8u;
    ctx->pc = 0x1C72ECu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12176));
    ctx->pc = 0x1C7D80u;
    sub_001C7D80_0x1c7d80(rdram, ctx, runtime); return;
    ctx->pc = 0x1C72F0u;
}
