#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012C8F8
// Address: 0x12c8f8 - 0x12c918
void sub_0012C8F8_0x12c8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12c8f8u;

    // 0x12c8f8: 0x27bdfff0
    ctx->pc = 0x12c8f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c8fc: 0xffbf0000
    ctx->pc = 0x12c8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12c900: 0xc04fc68
    ctx->pc = 0x12C900u;
    SET_GPR_U32(ctx, 31, 0x12C908u);
    ctx->pc = 0x13F1A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F1A0_0x13f1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C908u; }
    }
    if (ctx->pc != 0x12C908u) { return; }
    ctx->pc = 0x12C908u;
    // 0x12c908: 0xdfbf0000
    ctx->pc = 0x12c908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c90c: 0x102d
    ctx->pc = 0x12c90cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c910: 0x3e00008
    ctx->pc = 0x12C910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C914u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12C918u;
}
