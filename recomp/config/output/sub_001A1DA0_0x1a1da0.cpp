#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A1DA0
// Address: 0x1a1da0 - 0x1a1db0
void sub_001A1DA0_0x1a1da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a1da0u;

    // 0x1a1da0: 0x3e00008
    ctx->pc = 0x1A1DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1DA4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A1DA8u;
    // 0x1a1da8: 0x0
    ctx->pc = 0x1a1da8u;
    // NOP
    // 0x1a1dac: 0x0
    ctx->pc = 0x1a1dacu;
    // NOP
}
