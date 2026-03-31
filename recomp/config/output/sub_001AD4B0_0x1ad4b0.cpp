#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AD4B0
// Address: 0x1ad4b0 - 0x1ad4e0
void sub_001AD4B0_0x1ad4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ad4b0u;

    // 0x1ad4b0: 0x3c01002b
    ctx->pc = 0x1ad4b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1ad4b4: 0xac24382c
    ctx->pc = 0x1ad4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14380), GPR_U32(ctx, 4));
    // 0x1ad4b8: 0x3c01002b
    ctx->pc = 0x1ad4b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1ad4bc: 0xac253830
    ctx->pc = 0x1ad4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14384), GPR_U32(ctx, 5));
    // 0x1ad4c0: 0x3c01002b
    ctx->pc = 0x1ad4c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1ad4c4: 0xac203810
    ctx->pc = 0x1ad4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14352), GPR_U32(ctx, 0));
    // 0x1ad4c8: 0x3c01002b
    ctx->pc = 0x1ad4c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1ad4cc: 0xac203824
    ctx->pc = 0x1ad4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14372), GPR_U32(ctx, 0));
    // 0x1ad4d0: 0x3c01002b
    ctx->pc = 0x1ad4d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1ad4d4: 0x3e00008
    ctx->pc = 0x1AD4D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD4D8u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 14376), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AD4DCu;
    // 0x1ad4dc: 0x0
    ctx->pc = 0x1ad4dcu;
    // NOP
}
