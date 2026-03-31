#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D7690
// Address: 0x1d7690 - 0x1d76c0
void sub_001D7690_0x1d7690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d7690u;

    // 0x1d7690: 0x27bdfff0
    ctx->pc = 0x1d7690u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7694: 0xffbf0000
    ctx->pc = 0x1d7694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d7698: 0xc0763f0
    ctx->pc = 0x1D7698u;
    SET_GPR_U32(ctx, 31, 0x1D76A0u);
    ctx->pc = 0x1D769Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->pc = 0x1D8FC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8FC0_0x1d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D76A0u; }
    }
    if (ctx->pc != 0x1D76A0u) { return; }
    ctx->pc = 0x1D76A0u;
    // 0x1d76a0: 0xdfbf0000
    ctx->pc = 0x1d76a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d76a4: 0x2143c
    ctx->pc = 0x1d76a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d76a8: 0x2143f
    ctx->pc = 0x1d76a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d76ac: 0x3e00008
    ctx->pc = 0x1D76ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D76B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D76B4u;
    // 0x1d76b4: 0x0
    ctx->pc = 0x1d76b4u;
    // NOP
    // 0x1d76b8: 0x0
    ctx->pc = 0x1d76b8u;
    // NOP
    // 0x1d76bc: 0x0
    ctx->pc = 0x1d76bcu;
    // NOP
}
