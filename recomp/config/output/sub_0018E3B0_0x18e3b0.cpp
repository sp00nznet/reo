#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018E3B0
// Address: 0x18e3b0 - 0x18e3c0
void sub_0018E3B0_0x18e3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18e3b0u;

    // 0x18e3b0: 0x3c010029
    ctx->pc = 0x18e3b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18e3b4: 0x3e00008
    ctx->pc = 0x18E3B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E3B8u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 16736), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18E3BCu;
    // 0x18e3bc: 0x0
    ctx->pc = 0x18e3bcu;
    // NOP
}
