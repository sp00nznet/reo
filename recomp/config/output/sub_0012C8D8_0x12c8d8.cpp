#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012C8D8
// Address: 0x12c8d8 - 0x12c8f8
void sub_0012C8D8_0x12c8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12c8d8u;

    // 0x12c8d8: 0x3e00008
    ctx->pc = 0x12C8D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12C8E0u;
    // 0x12c8e0: 0x3e00008
    ctx->pc = 0x12C8E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12C8E8u;
    // 0x12c8e8: 0x3e00008
    ctx->pc = 0x12C8E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12C8F0u;
    // 0x12c8f0: 0x3e00008
    ctx->pc = 0x12C8F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C8F4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12C8F8u;
}
