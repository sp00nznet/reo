#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0010A2B0
// Address: 0x10a2b0 - 0x10a2f0
void sub_0010A2B0_0x10a2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10a2b0u;

    // 0x10a2b0: 0x27bdfff0
    ctx->pc = 0x10a2b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10a2b4: 0x46006006
    ctx->pc = 0x10a2b4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x10a2b8: 0xe7a00000
    ctx->pc = 0x10a2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x10a2bc: 0xe7ad0004
    ctx->pc = 0x10a2bcu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x10a2c0: 0x3c027fff
    ctx->pc = 0x10a2c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x10a2c4: 0x3c038000
    ctx->pc = 0x10a2c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x10a2c8: 0x8fa40004
    ctx->pc = 0x10a2c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x10a2cc: 0x3442ffff
    ctx->pc = 0x10a2ccu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x10a2d0: 0x831824
    ctx->pc = 0x10a2d0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x10a2d4: 0x8fa40000
    ctx->pc = 0x10a2d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a2d8: 0x821024
    ctx->pc = 0x10a2d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10a2dc: 0x431025
    ctx->pc = 0x10a2dcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10a2e0: 0x44820000
    ctx->pc = 0x10a2e0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x10a2e4: 0x3e00008
    ctx->pc = 0x10A2E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A2E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10A2ECu;
    // 0x10a2ec: 0x0
    ctx->pc = 0x10a2ecu;
    // NOP
}
