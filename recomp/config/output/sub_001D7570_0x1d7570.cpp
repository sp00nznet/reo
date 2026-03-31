#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D7570
// Address: 0x1d7570 - 0x1d75a0
void sub_001D7570_0x1d7570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d7570u;

    // 0x1d7570: 0x27bdfff0
    ctx->pc = 0x1d7570u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7574: 0xffbf0000
    ctx->pc = 0x1d7574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d7578: 0xc07634c
    ctx->pc = 0x1D7578u;
    SET_GPR_U32(ctx, 31, 0x1D7580u);
    ctx->pc = 0x1D8D30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8D30_0x1d8d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7580u; }
    }
    if (ctx->pc != 0x1D7580u) { return; }
    ctx->pc = 0x1D7580u;
    // 0x1d7580: 0x3c010034
    ctx->pc = 0x1d7580u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d7584: 0x102d
    ctx->pc = 0x1d7584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7588: 0xa0204606
    ctx->pc = 0x1d7588u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17926), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d758c: 0xdfbf0000
    ctx->pc = 0x1d758cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7590: 0x3e00008
    ctx->pc = 0x1D7590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7594u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7598u;
    // 0x1d7598: 0x0
    ctx->pc = 0x1d7598u;
    // NOP
    // 0x1d759c: 0x0
    ctx->pc = 0x1d759cu;
    // NOP
}
