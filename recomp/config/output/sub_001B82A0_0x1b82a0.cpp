#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B82A0
// Address: 0x1b82a0 - 0x1b82b0
void sub_001B82A0_0x1b82a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b82a0u;

    // 0x1b82a0: 0x3e00008
    ctx->pc = 0x1B82A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B82A4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B82A8u;
    // 0x1b82a8: 0x0
    ctx->pc = 0x1b82a8u;
    // NOP
    // 0x1b82ac: 0x0
    ctx->pc = 0x1b82acu;
    // NOP
}
