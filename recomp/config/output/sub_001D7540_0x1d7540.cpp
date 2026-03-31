#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D7540
// Address: 0x1d7540 - 0x1d7570
void sub_001D7540_0x1d7540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d7540u;

    // 0x1d7540: 0x27bdfff0
    ctx->pc = 0x1d7540u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7544: 0xffbf0000
    ctx->pc = 0x1d7544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d7548: 0xc076338
    ctx->pc = 0x1D7548u;
    SET_GPR_U32(ctx, 31, 0x1D7550u);
    ctx->pc = 0x1D8CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8CE0_0x1d8ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7550u; }
    }
    if (ctx->pc != 0x1D7550u) { return; }
    ctx->pc = 0x1D7550u;
    // 0x1d7550: 0x24030001
    ctx->pc = 0x1d7550u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7554: 0x3c010034
    ctx->pc = 0x1d7554u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d7558: 0xa0234606
    ctx->pc = 0x1d7558u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17926), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d755c: 0x2143c
    ctx->pc = 0x1d755cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d7560: 0xdfbf0000
    ctx->pc = 0x1d7560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7564: 0x2143f
    ctx->pc = 0x1d7564u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d7568: 0x3e00008
    ctx->pc = 0x1D7568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D756Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7570u;
}
