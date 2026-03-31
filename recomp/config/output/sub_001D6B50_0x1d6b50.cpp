#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D6B50
// Address: 0x1d6b50 - 0x1d6b80
void sub_001D6B50_0x1d6b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d6b50u;

    // 0x1d6b50: 0x27bdfff0
    ctx->pc = 0x1d6b50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d6b54: 0x4243c
    ctx->pc = 0x1d6b54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1d6b58: 0xffbf0000
    ctx->pc = 0x1d6b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6b5c: 0xc075f30
    ctx->pc = 0x1D6B5Cu;
    SET_GPR_U32(ctx, 31, 0x1D6B64u);
    ctx->pc = 0x1D6B60u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->pc = 0x1D7CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7CC0_0x1d7cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6B64u; }
    }
    if (ctx->pc != 0x1D6B64u) { return; }
    ctx->pc = 0x1D6B64u;
    // 0x1d6b64: 0x2243c
    ctx->pc = 0x1d6b64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d6b68: 0xc0759b4
    ctx->pc = 0x1D6B68u;
    SET_GPR_U32(ctx, 31, 0x1D6B70u);
    ctx->pc = 0x1D6B6Cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->pc = 0x1D66D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D66D0_0x1d66d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6B70u; }
    }
    if (ctx->pc != 0x1D6B70u) { return; }
    ctx->pc = 0x1D6B70u;
    // 0x1d6b70: 0xdfbf0000
    ctx->pc = 0x1d6b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6b74: 0x3e00008
    ctx->pc = 0x1D6B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6B78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D6B7Cu;
    // 0x1d6b7c: 0x0
    ctx->pc = 0x1d6b7cu;
    // NOP
}
