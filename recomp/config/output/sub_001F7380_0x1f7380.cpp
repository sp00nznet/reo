#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F7380
// Address: 0x1f7380 - 0x1f73b0
void sub_001F7380_0x1f7380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f7380u;

    // 0x1f7380: 0x3c010037
    ctx->pc = 0x1f7380u;
    SET_GPR_U32(ctx, 1, ((uint32_t)55 << 16));
    // 0x1f7384: 0xa020f0d8
    ctx->pc = 0x1f7384u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294963416), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f7388: 0x3c010037
    ctx->pc = 0x1f7388u;
    SET_GPR_U32(ctx, 1, ((uint32_t)55 << 16));
    // 0x1f738c: 0xa020f0d0
    ctx->pc = 0x1f738cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294963408), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f7390: 0x3c010037
    ctx->pc = 0x1f7390u;
    SET_GPR_U32(ctx, 1, ((uint32_t)55 << 16));
    // 0x1f7394: 0xa020f0c8
    ctx->pc = 0x1f7394u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294963400), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f7398: 0x3c010037
    ctx->pc = 0x1f7398u;
    SET_GPR_U32(ctx, 1, ((uint32_t)55 << 16));
    // 0x1f739c: 0x3e00008
    ctx->pc = 0x1F739Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F73A0u;
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294963392), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F73A4u;
    // 0x1f73a4: 0x0
    ctx->pc = 0x1f73a4u;
    // NOP
    // 0x1f73a8: 0x0
    ctx->pc = 0x1f73a8u;
    // NOP
    // 0x1f73ac: 0x0
    ctx->pc = 0x1f73acu;
    // NOP
}
