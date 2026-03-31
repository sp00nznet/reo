#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012CC50
// Address: 0x12cc50 - 0x12cc80
void sub_0012CC50_0x12cc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12cc50u;

    // 0x12cc50: 0x27bdfff0
    ctx->pc = 0x12cc50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12cc54: 0xffb00000
    ctx->pc = 0x12cc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12cc58: 0x80802d
    ctx->pc = 0x12cc58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cc5c: 0xffbf0008
    ctx->pc = 0x12cc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12cc60: 0xc048c2c
    ctx->pc = 0x12CC60u;
    SET_GPR_U32(ctx, 31, 0x12CC68u);
    ctx->pc = 0x12CC64u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x1230B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001230B0_0x1230b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CC68u; }
    }
    if (ctx->pc != 0x12CC68u) { return; }
    ctx->pc = 0x12CC68u;
    // 0x12cc68: 0x8e040004
    ctx->pc = 0x12cc68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12cc6c: 0xdfbf0008
    ctx->pc = 0x12cc6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12cc70: 0xdfb00000
    ctx->pc = 0x12cc70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12cc74: 0x8048ba4
    ctx->pc = 0x12CC74u;
    ctx->pc = 0x12CC78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x122E90u;
    entry_122e90_0x122ec0(rdram, ctx, runtime); return;
    ctx->pc = 0x12CC7Cu;
    // 0x12cc7c: 0x0
    ctx->pc = 0x12cc7cu;
    // NOP
}
