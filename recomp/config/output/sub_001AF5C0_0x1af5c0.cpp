#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AF5C0
// Address: 0x1af5c0 - 0x1af5d0
void sub_001AF5C0_0x1af5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1af5c0u;

    // 0x1af5c0: 0x3e00008
    ctx->pc = 0x1AF5C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF5C4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF5C8u;
    // 0x1af5c8: 0x0
    ctx->pc = 0x1af5c8u;
    // NOP
    // 0x1af5cc: 0x0
    ctx->pc = 0x1af5ccu;
    // NOP
}
