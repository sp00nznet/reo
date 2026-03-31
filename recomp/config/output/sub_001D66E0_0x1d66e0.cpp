#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D66E0
// Address: 0x1d66e0 - 0x1d6710
void sub_001D66E0_0x1d66e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d66e0u;

    // 0x1d66e0: 0x27bdfff0
    ctx->pc = 0x1d66e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d66e4: 0xffbf0000
    ctx->pc = 0x1d66e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d66e8: 0xc075df8
    ctx->pc = 0x1D66E8u;
    SET_GPR_U32(ctx, 31, 0x1D66F0u);
    ctx->pc = 0x1D77E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D77E0_0x1d77e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D66F0u; }
    }
    if (ctx->pc != 0x1D66F0u) { return; }
    ctx->pc = 0x1D66F0u;
    // 0x1d66f0: 0xdfbf0000
    ctx->pc = 0x1d66f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d66f4: 0x2143c
    ctx->pc = 0x1d66f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d66f8: 0x2143f
    ctx->pc = 0x1d66f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d66fc: 0x3e00008
    ctx->pc = 0x1D66FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6700u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D6704u;
    // 0x1d6704: 0x0
    ctx->pc = 0x1d6704u;
    // NOP
    // 0x1d6708: 0x0
    ctx->pc = 0x1d6708u;
    // NOP
    // 0x1d670c: 0x0
    ctx->pc = 0x1d670cu;
    // NOP
}
