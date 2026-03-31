#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CD1D0
// Address: 0x1cd1d0 - 0x1cd1e0
void sub_001CD1D0_0x1cd1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1cd1d0u;

    // 0x1cd1d0: 0x3c010023
    ctx->pc = 0x1cd1d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1cd1d4: 0x3e00008
    ctx->pc = 0x1CD1D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD1D8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 26312)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CD1DCu;
    // 0x1cd1dc: 0x0
    ctx->pc = 0x1cd1dcu;
    // NOP
}
