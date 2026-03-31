#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012C9A0
// Address: 0x12c9a0 - 0x12c9d8
void sub_0012C9A0_0x12c9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12c9a0u;

    // 0x12c9a0: 0x3c027fff
    ctx->pc = 0x12c9a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x12c9a4: 0x2403ffff
    ctx->pc = 0x12c9a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12c9a8: 0x3442ffff
    ctx->pc = 0x12c9a8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x12c9ac: 0xac83003c
    ctx->pc = 0x12c9acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x12c9b0: 0xac820038
    ctx->pc = 0x12c9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    // 0x12c9b4: 0xa0800003
    ctx->pc = 0x12c9b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c9b8: 0xac800098
    ctx->pc = 0x12c9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 0));
    // 0x12c9bc: 0xac80002c
    ctx->pc = 0x12c9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x12c9c0: 0xac800030
    ctx->pc = 0x12c9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x12c9c4: 0xac800034
    ctx->pc = 0x12c9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x12c9c8: 0xac800040
    ctx->pc = 0x12c9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x12c9cc: 0x3e00008
    ctx->pc = 0x12C9CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C9D0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12C9D4u;
    // 0x12c9d4: 0x0
    ctx->pc = 0x12c9d4u;
    // NOP
}
