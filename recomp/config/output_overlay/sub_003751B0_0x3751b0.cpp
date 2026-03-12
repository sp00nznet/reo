#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_003751B0
// Address: 0x3751b0 - 0x3751e0
void sub_003751B0_0x3751b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3751b0u;

    // 0x3751b0: 0x27bdfff0
    ctx->pc = 0x3751b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3751b4: 0x3c040057
    ctx->pc = 0x3751b4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)87 << 16));
    // 0x3751b8: 0xffbf0000
    ctx->pc = 0x3751b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3751bc: 0xc063f7c
    ctx->pc = 0x3751BCu;
    SET_GPR_U32(ctx, 31, 0x3751C4u);
    ctx->pc = 0x3751C0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946448));
    ctx->pc = 0x18FDF0u;
    {
        auto targetFn = runtime->lookupFunction(0x18FDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3751C4u; }
        if (ctx->pc != 0x3751C4u) { return; }
    }
    ctx->pc = 0x3751C4u;
    // 0x3751c4: 0x3c050057
    ctx->pc = 0x3751c4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)87 << 16));
    // 0x3751c8: 0x24040019
    ctx->pc = 0x3751c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 25));
    // 0x3751cc: 0xc06bde0
    ctx->pc = 0x3751CCu;
    SET_GPR_U32(ctx, 31, 0x3751D4u);
    ctx->pc = 0x3751D0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294946448));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3751D4u; }
        if (ctx->pc != 0x3751D4u) { return; }
    }
    ctx->pc = 0x3751D4u;
    // 0x3751d4: 0xdfbf0000
    ctx->pc = 0x3751d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3751d8: 0x3e00008
    ctx->pc = 0x3751D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3751DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3751E0u;
}
