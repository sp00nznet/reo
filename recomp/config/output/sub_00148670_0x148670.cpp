#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00148670
// Address: 0x148670 - 0x148680
void sub_00148670_0x148670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x148670u;

    // 0x148670: 0xac800860
    ctx->pc = 0x148670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2144), GPR_U32(ctx, 0));
    // 0x148674: 0x8050fe2
    ctx->pc = 0x148674u;
    ctx->pc = 0x148678u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x143F88u;
    sub_00143F88_0x143f88(rdram, ctx, runtime); return;
    ctx->pc = 0x14867Cu;
    // 0x14867c: 0x0
    ctx->pc = 0x14867cu;
    // NOP
}
