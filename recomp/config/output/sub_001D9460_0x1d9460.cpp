#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D9460
// Address: 0x1d9460 - 0x1d9470
void sub_001D9460_0x1d9460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d9460u;

    // 0x1d9460: 0x3c010035
    ctx->pc = 0x1d9460u;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1d9464: 0x8045190
    ctx->pc = 0x1D9464u;
    ctx->pc = 0x1D9468u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294935232)));
    ctx->pc = 0x114640u;
    sub_00114640_0x114640(rdram, ctx, runtime); return;
    ctx->pc = 0x1D946Cu;
    // 0x1d946c: 0x0
    ctx->pc = 0x1d946cu;
    // NOP
}
