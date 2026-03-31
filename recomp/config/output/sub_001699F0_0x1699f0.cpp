#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001699F0
// Address: 0x1699f0 - 0x169a00
void sub_001699F0_0x1699f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1699f0u;

    // 0x1699f0: 0x38a22b80
    ctx->pc = 0x1699f0u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 5), 11136));
    // 0x1699f4: 0x3e00008
    ctx->pc = 0x1699F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1699F8u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1699FCu;
    // 0x1699fc: 0x0
    ctx->pc = 0x1699fcu;
    // NOP
}
