#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D77E0
// Address: 0x1d77e0 - 0x1d7810
void sub_001D77E0_0x1d77e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d77e0u;

    // 0x1d77e0: 0x27bdfff0
    ctx->pc = 0x1d77e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d77e4: 0x3c040035
    ctx->pc = 0x1d77e4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x1d77e8: 0xffbf0000
    ctx->pc = 0x1d77e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d77ec: 0xc045ef8
    ctx->pc = 0x1D77ECu;
    SET_GPR_U32(ctx, 31, 0x1D77F4u);
    ctx->pc = 0x1D77F0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294935184));
    ctx->pc = 0x117BE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00117BE0_0x117be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D77F4u; }
    }
    if (ctx->pc != 0x1D77F4u) { return; }
    ctx->pc = 0x1D77F4u;
    // 0x1d77f4: 0xdfbf0000
    ctx->pc = 0x1d77f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d77f8: 0x2102b
    ctx->pc = 0x1d77f8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1d77fc: 0x38420001
    ctx->pc = 0x1d77fcu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x1d7800: 0x2143c
    ctx->pc = 0x1d7800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d7804: 0x2143f
    ctx->pc = 0x1d7804u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d7808: 0x3e00008
    ctx->pc = 0x1D7808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D780Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7810u;
}
