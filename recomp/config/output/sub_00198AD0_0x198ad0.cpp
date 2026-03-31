#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00198AD0
// Address: 0x198ad0 - 0x198af0
void sub_00198AD0_0x198ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x198ad0u;

    // 0x198ad0: 0x3c01002a
    ctx->pc = 0x198ad0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x198ad4: 0xc420fd5c
    ctx->pc = 0x198ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294966620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198ad8: 0x46800020
    ctx->pc = 0x198ad8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x198adc: 0x46006301
    ctx->pc = 0x198adcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x198ae0: 0x3e00008
    ctx->pc = 0x198AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198AE4u;
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x198AE8u;
    // 0x198ae8: 0x0
    ctx->pc = 0x198ae8u;
    // NOP
    // 0x198aec: 0x0
    ctx->pc = 0x198aecu;
    // NOP
}
