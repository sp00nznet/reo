#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018C8B0
// Address: 0x18c8b0 - 0x18c8c0
void sub_0018C8B0_0x18c8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18c8b0u;

    // 0x18c8b0: 0x3e00008
    ctx->pc = 0x18C8B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C8B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18C8B8u;
    // 0x18c8b8: 0x0
    ctx->pc = 0x18c8b8u;
    // NOP
    // 0x18c8bc: 0x0
    ctx->pc = 0x18c8bcu;
    // NOP
}
