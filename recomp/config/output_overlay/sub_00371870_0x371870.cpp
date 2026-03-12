#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00371870
// Address: 0x371870 - 0x371880
void sub_00371870_0x371870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x371870u;

    // 0x371870: 0x46006024
    ctx->pc = 0x371870u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[12]);
    // 0x371874: 0x3e00008
    ctx->pc = 0x371874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371878u;
        ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37187Cu;
    // 0x37187c: 0x0
    ctx->pc = 0x37187cu;
    // NOP
}
