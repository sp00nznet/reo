#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D72C0
// Address: 0x1d72c0 - 0x1d72f0
void sub_001D72C0_0x1d72c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d72c0u;

    // 0x1d72c0: 0x27bdfff0
    ctx->pc = 0x1d72c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d72c4: 0xffbf0000
    ctx->pc = 0x1d72c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d72c8: 0xc0762d0
    ctx->pc = 0x1D72C8u;
    SET_GPR_U32(ctx, 31, 0x1D72D0u);
    ctx->pc = 0x1D8B40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8B40_0x1d8b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D72D0u; }
    }
    if (ctx->pc != 0x1D72D0u) { return; }
    ctx->pc = 0x1D72D0u;
    // 0x1d72d0: 0x24030001
    ctx->pc = 0x1d72d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d72d4: 0x3c010034
    ctx->pc = 0x1d72d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d72d8: 0xa0234602
    ctx->pc = 0x1d72d8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17922), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d72dc: 0x2143c
    ctx->pc = 0x1d72dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d72e0: 0xdfbf0000
    ctx->pc = 0x1d72e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d72e4: 0x2143f
    ctx->pc = 0x1d72e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d72e8: 0x3e00008
    ctx->pc = 0x1D72E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D72ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D72F0u;
}
