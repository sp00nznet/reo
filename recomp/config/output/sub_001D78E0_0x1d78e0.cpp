#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D78E0
// Address: 0x1d78e0 - 0x1d78f0
void sub_001D78E0_0x1d78e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d78e0u;

    // 0x1d78e0: 0x3c010034
    ctx->pc = 0x1d78e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d78e4: 0x8045198
    ctx->pc = 0x1D78E4u;
    ctx->pc = 0x1D78E8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 21056)));
    ctx->pc = 0x114660u;
    sub_00114660_0x114660(rdram, ctx, runtime); return;
    ctx->pc = 0x1D78ECu;
    // 0x1d78ec: 0x0
    ctx->pc = 0x1d78ecu;
    // NOP
}
