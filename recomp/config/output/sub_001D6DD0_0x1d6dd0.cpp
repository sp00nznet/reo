#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D6DD0
// Address: 0x1d6dd0 - 0x1d6e00
void sub_001D6DD0_0x1d6dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d6dd0u;

    // 0x1d6dd0: 0x27bdfff0
    ctx->pc = 0x1d6dd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d6dd4: 0xffbf0000
    ctx->pc = 0x1d6dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6dd8: 0xc0761e0
    ctx->pc = 0x1D6DD8u;
    SET_GPR_U32(ctx, 31, 0x1D6DE0u);
    ctx->pc = 0x1D8780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8780_0x1d8780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6DE0u; }
    }
    if (ctx->pc != 0x1D6DE0u) { return; }
    ctx->pc = 0x1D6DE0u;
    // 0x1d6de0: 0x24030001
    ctx->pc = 0x1d6de0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6de4: 0x3c010034
    ctx->pc = 0x1d6de4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d6de8: 0xa0234601
    ctx->pc = 0x1d6de8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17921), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d6dec: 0x2143c
    ctx->pc = 0x1d6decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d6df0: 0xdfbf0000
    ctx->pc = 0x1d6df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6df4: 0x2143f
    ctx->pc = 0x1d6df4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d6df8: 0x3e00008
    ctx->pc = 0x1D6DF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6DFCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D6E00u;
}
