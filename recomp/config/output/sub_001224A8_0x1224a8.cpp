#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001224A8
// Address: 0x1224a8 - 0x1224d0
void sub_001224A8_0x1224a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1224a8u;

    // 0x1224a8: 0x27bdfff0
    ctx->pc = 0x1224a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1224ac: 0x46006006
    ctx->pc = 0x1224acu;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x1224b0: 0xe7a00000
    ctx->pc = 0x1224b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1224b4: 0x3c027fff
    ctx->pc = 0x1224b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x1224b8: 0x8fa30000
    ctx->pc = 0x1224b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1224bc: 0x3442ffff
    ctx->pc = 0x1224bcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1224c0: 0x621824
    ctx->pc = 0x1224c0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1224c4: 0x44830000
    ctx->pc = 0x1224c4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1224c8: 0x3e00008
    ctx->pc = 0x1224C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1224CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1224D0u;
}
