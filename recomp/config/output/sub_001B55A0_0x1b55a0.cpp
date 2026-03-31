#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B55A0
// Address: 0x1b55a0 - 0x1b55d0
void sub_001B55A0_0x1b55a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b55a0u;

    // 0x1b55a0: 0x24030001
    ctx->pc = 0x1b55a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b55a4: 0x3c01002c
    ctx->pc = 0x1b55a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b55a8: 0xac23aaf0
    ctx->pc = 0x1b55a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945520), GPR_U32(ctx, 3));
    // 0x1b55ac: 0x3c01002c
    ctx->pc = 0x1b55acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b55b0: 0x8c24ab28
    ctx->pc = 0x1b55b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294945576)));
    // 0x1b55b4: 0x3c01002c
    ctx->pc = 0x1b55b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b55b8: 0x8c23ab8c
    ctx->pc = 0x1b55b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294945676)));
    // 0x1b55bc: 0x3c01002c
    ctx->pc = 0x1b55bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b55c0: 0xac24ab3c
    ctx->pc = 0x1b55c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945596), GPR_U32(ctx, 4));
    // 0x1b55c4: 0x3c01002c
    ctx->pc = 0x1b55c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b55c8: 0x3e00008
    ctx->pc = 0x1B55C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B55CCu;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294945600), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B55D0u;
}
