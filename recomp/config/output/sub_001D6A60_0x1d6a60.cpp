#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D6A60
// Address: 0x1d6a60 - 0x1d6a90
void sub_001D6A60_0x1d6a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d6a60u;

    // 0x1d6a60: 0x27bdfff0
    ctx->pc = 0x1d6a60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d6a64: 0x4243c
    ctx->pc = 0x1d6a64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1d6a68: 0xffbf0000
    ctx->pc = 0x1d6a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6a6c: 0xc075fd8
    ctx->pc = 0x1D6A6Cu;
    SET_GPR_U32(ctx, 31, 0x1D6A74u);
    ctx->pc = 0x1D6A70u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->pc = 0x1D7F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7F60_0x1d7f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6A74u; }
    }
    if (ctx->pc != 0x1D6A74u) { return; }
    ctx->pc = 0x1D6A74u;
    // 0x1d6a74: 0x2243c
    ctx->pc = 0x1d6a74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d6a78: 0xc0759b4
    ctx->pc = 0x1D6A78u;
    SET_GPR_U32(ctx, 31, 0x1D6A80u);
    ctx->pc = 0x1D6A7Cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->pc = 0x1D66D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D66D0_0x1d66d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6A80u; }
    }
    if (ctx->pc != 0x1D6A80u) { return; }
    ctx->pc = 0x1D6A80u;
    // 0x1d6a80: 0xdfbf0000
    ctx->pc = 0x1d6a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6a84: 0x3e00008
    ctx->pc = 0x1D6A84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6A88u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D6A8Cu;
    // 0x1d6a8c: 0x0
    ctx->pc = 0x1d6a8cu;
    // NOP
}
