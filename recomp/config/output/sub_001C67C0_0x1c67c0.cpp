#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C67C0
// Address: 0x1c67c0 - 0x1c67d0
void sub_001C67C0_0x1c67c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c67c0u;

    // 0x1c67c0: 0x3c010033
    ctx->pc = 0x1c67c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c67c4: 0x3e00008
    ctx->pc = 0x1C67C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C67C8u;
        WRITE8(ADD32(GPR_U32(ctx, 1), 20896), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C67CCu;
    // 0x1c67cc: 0x0
    ctx->pc = 0x1c67ccu;
    // NOP
}
