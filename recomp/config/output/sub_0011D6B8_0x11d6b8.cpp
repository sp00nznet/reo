#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011D6B8
// Address: 0x11d6b8 - 0x11d6d0
void sub_0011D6B8_0x11d6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11d6b8u;

    // 0x11d6b8: 0x40026000
    ctx->pc = 0x11d6b8u;
    SET_GPR_U32(ctx, 2, ctx->cop0_status);
    // 0x11d6bc: 0x3c030001
    ctx->pc = 0x11d6bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x11d6c0: 0x431024
    ctx->pc = 0x11d6c0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11d6c4: 0x42000038
    ctx->pc = 0x11d6c4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x11d6c8: 0x3e00008
    ctx->pc = 0x11D6C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D6CCu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11D6D0u;
}
