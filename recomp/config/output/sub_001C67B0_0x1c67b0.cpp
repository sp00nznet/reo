#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C67B0
// Address: 0x1c67b0 - 0x1c67c0
void sub_001C67B0_0x1c67b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c67b0u;

    // 0x1c67b0: 0x3c010033
    ctx->pc = 0x1c67b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c67b4: 0x3e00008
    ctx->pc = 0x1C67B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C67B8u;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 20897)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C67BCu;
    // 0x1c67bc: 0x0
    ctx->pc = 0x1c67bcu;
    // NOP
}
