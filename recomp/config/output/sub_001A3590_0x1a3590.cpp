#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A3590
// Address: 0x1a3590 - 0x1a35a0
void sub_001A3590_0x1a3590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a3590u;

    // 0x1a3590: 0x3e00008
    ctx->pc = 0x1A3590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3594u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A3598u;
    // 0x1a3598: 0x0
    ctx->pc = 0x1a3598u;
    // NOP
    // 0x1a359c: 0x0
    ctx->pc = 0x1a359cu;
    // NOP
}
