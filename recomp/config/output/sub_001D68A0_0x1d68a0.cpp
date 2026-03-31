#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D68A0
// Address: 0x1d68a0 - 0x1d68b0
void sub_001D68A0_0x1d68a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d68a0u;

    // 0x1d68a0: 0x3c010034
    ctx->pc = 0x1d68a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d68a4: 0x3e00008
    ctx->pc = 0x1D68A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D68A8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 17912)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D68ACu;
    // 0x1d68ac: 0x0
    ctx->pc = 0x1d68acu;
    // NOP
}
