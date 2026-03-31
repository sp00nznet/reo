#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D78F0
// Address: 0x1d78f0 - 0x1d7900
void sub_001D78F0_0x1d78f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d78f0u;

    // 0x1d78f0: 0x3c010034
    ctx->pc = 0x1d78f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d78f4: 0x8045190
    ctx->pc = 0x1D78F4u;
    ctx->pc = 0x1D78F8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 21056)));
    ctx->pc = 0x114640u;
    sub_00114640_0x114640(rdram, ctx, runtime); return;
    ctx->pc = 0x1D78FCu;
    // 0x1d78fc: 0x0
    ctx->pc = 0x1d78fcu;
    // NOP
}
