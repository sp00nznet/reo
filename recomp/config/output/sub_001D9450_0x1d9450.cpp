#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D9450
// Address: 0x1d9450 - 0x1d9460
void sub_001D9450_0x1d9450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d9450u;

    // 0x1d9450: 0x3c010035
    ctx->pc = 0x1d9450u;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1d9454: 0x8045198
    ctx->pc = 0x1D9454u;
    ctx->pc = 0x1D9458u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294935232)));
    ctx->pc = 0x114660u;
    sub_00114660_0x114660(rdram, ctx, runtime); return;
    ctx->pc = 0x1D945Cu;
    // 0x1d945c: 0x0
    ctx->pc = 0x1d945cu;
    // NOP
}
