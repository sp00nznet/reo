#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D6E00
// Address: 0x1d6e00 - 0x1d6e30
void sub_001D6E00_0x1d6e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d6e00u;

    // 0x1d6e00: 0x27bdfff0
    ctx->pc = 0x1d6e00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d6e04: 0x80302d
    ctx->pc = 0x1d6e04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6e08: 0xffbf0000
    ctx->pc = 0x1d6e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6e0c: 0x24040001
    ctx->pc = 0x1d6e0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6e10: 0xc0762ac
    ctx->pc = 0x1D6E10u;
    SET_GPR_U32(ctx, 31, 0x1D6E18u);
    ctx->pc = 0x1D6E14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1D8AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8AB0_0x1d8ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6E18u; }
    }
    if (ctx->pc != 0x1D6E18u) { return; }
    ctx->pc = 0x1D6E18u;
    // 0x1d6e18: 0xdfbf0000
    ctx->pc = 0x1d6e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6e1c: 0x2143c
    ctx->pc = 0x1d6e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d6e20: 0x2143f
    ctx->pc = 0x1d6e20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d6e24: 0x3e00008
    ctx->pc = 0x1D6E24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6E28u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D6E2Cu;
    // 0x1d6e2c: 0x0
    ctx->pc = 0x1d6e2cu;
    // NOP
}
