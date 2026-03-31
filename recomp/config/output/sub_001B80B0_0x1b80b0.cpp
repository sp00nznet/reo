#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B80B0
// Address: 0x1b80b0 - 0x1b80d0
void sub_001B80B0_0x1b80b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b80b0u;

    // 0x1b80b0: 0x41c3c
    ctx->pc = 0x1b80b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1b80b4: 0x31c3f
    ctx->pc = 0x1b80b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1b80b8: 0x32140
    ctx->pc = 0x1b80b8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 5));
    // 0x1b80bc: 0x3c030031
    ctx->pc = 0x1b80bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x1b80c0: 0x24636350
    ctx->pc = 0x1b80c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 25424));
    // 0x1b80c4: 0x641821
    ctx->pc = 0x1b80c4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b80c8: 0x3e00008
    ctx->pc = 0x1B80C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B80CCu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B80D0u;
}
