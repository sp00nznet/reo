#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00170AC0
// Address: 0x170ac0 - 0x170ae8
void sub_00170AC0_0x170ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x170ac0u;

    // 0x170ac0: 0x6303c
    ctx->pc = 0x170ac0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x170ac4: 0x5283c
    ctx->pc = 0x170ac4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x170ac8: 0x6313a
    ctx->pc = 0x170ac8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
    // 0x170acc: 0x7383c
    ctx->pc = 0x170accu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x170ad0: 0xa62825
    ctx->pc = 0x170ad0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x170ad4: 0x7383e
    ctx->pc = 0x170ad4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x170ad8: 0xa72825
    ctx->pc = 0x170ad8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x170adc: 0x3e00008
    ctx->pc = 0x170ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170AE0u;
        WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x170AE4u;
    // 0x170ae4: 0x0
    ctx->pc = 0x170ae4u;
    // NOP
}
