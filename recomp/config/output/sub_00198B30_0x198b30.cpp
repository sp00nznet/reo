#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00198B30
// Address: 0x198b30 - 0x198b60
void sub_00198B30_0x198b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x198b30u;

    // 0x198b30: 0x3c023f80
    ctx->pc = 0x198b30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x198b34: 0x3c01002a
    ctx->pc = 0x198b34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x198b38: 0x44821000
    ctx->pc = 0x198b38u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x198b3c: 0xc420f9f4
    ctx->pc = 0x198b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198b40: 0x46026301
    ctx->pc = 0x198b40u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x198b44: 0x3c02bf00
    ctx->pc = 0x198b44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48896 << 16));
    // 0x198b48: 0x44820800
    ctx->pc = 0x198b48u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x198b4c: 0x0
    ctx->pc = 0x198b4cu;
    // NOP
    // 0x198b50: 0x46016302
    ctx->pc = 0x198b50u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x198b54: 0x46006302
    ctx->pc = 0x198b54u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x198b58: 0x3e00008
    ctx->pc = 0x198B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198B5Cu;
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x198B60u;
}
