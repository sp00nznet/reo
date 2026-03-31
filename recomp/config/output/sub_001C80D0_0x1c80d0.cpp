#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C80D0
// Address: 0x1c80d0 - 0x1c8110
void sub_001C80D0_0x1c80d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c80d0u;

    // 0x1c80d0: 0x3e00008
    ctx->pc = 0x1C80D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C80D4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C80D8u;
    // 0x1c80d8: 0x0
    ctx->pc = 0x1c80d8u;
    // NOP
    // 0x1c80dc: 0x0
    ctx->pc = 0x1c80dcu;
    // NOP
    // 0x1c80e0: 0x3e00008
    ctx->pc = 0x1C80E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C80E4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C80E8u;
    // 0x1c80e8: 0x0
    ctx->pc = 0x1c80e8u;
    // NOP
    // 0x1c80ec: 0x0
    ctx->pc = 0x1c80ecu;
    // NOP
    // 0x1c80f0: 0x3e00008
    ctx->pc = 0x1C80F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C80F4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C80F8u;
    // 0x1c80f8: 0x0
    ctx->pc = 0x1c80f8u;
    // NOP
    // 0x1c80fc: 0x0
    ctx->pc = 0x1c80fcu;
    // NOP
    // 0x1c8100: 0x3e00008
    ctx->pc = 0x1C8100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8104u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8108u;
    // 0x1c8108: 0x0
    ctx->pc = 0x1c8108u;
    // NOP
    // 0x1c810c: 0x0
    ctx->pc = 0x1c810cu;
    // NOP
}
