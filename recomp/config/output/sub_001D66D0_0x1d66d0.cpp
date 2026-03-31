#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D66D0
// Address: 0x1d66d0 - 0x1d66e0
void sub_001D66D0_0x1d66d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d66d0u;

    // 0x1d66d0: 0x3e00008
    ctx->pc = 0x1D66D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D66D4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D66D8u;
    // 0x1d66d8: 0x0
    ctx->pc = 0x1d66d8u;
    // NOP
    // 0x1d66dc: 0x0
    ctx->pc = 0x1d66dcu;
    // NOP
}
