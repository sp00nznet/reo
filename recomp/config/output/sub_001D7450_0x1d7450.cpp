#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D7450
// Address: 0x1d7450 - 0x1d7480
void sub_001D7450_0x1d7450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d7450u;

    // 0x1d7450: 0x27bdfff0
    ctx->pc = 0x1d7450u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7454: 0xffbf0000
    ctx->pc = 0x1d7454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d7458: 0xc076324
    ctx->pc = 0x1D7458u;
    SET_GPR_U32(ctx, 31, 0x1D7460u);
    ctx->pc = 0x1D8C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8C90_0x1d8c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7460u; }
    }
    if (ctx->pc != 0x1D7460u) { return; }
    ctx->pc = 0x1D7460u;
    // 0x1d7460: 0x24030005
    ctx->pc = 0x1d7460u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d7464: 0x3c010034
    ctx->pc = 0x1d7464u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d7468: 0xac2345e8
    ctx->pc = 0x1d7468u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17896), GPR_U32(ctx, 3));
    // 0x1d746c: 0x2143c
    ctx->pc = 0x1d746cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d7470: 0xdfbf0000
    ctx->pc = 0x1d7470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7474: 0x2143f
    ctx->pc = 0x1d7474u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d7478: 0x3e00008
    ctx->pc = 0x1D7478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D747Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7480u;
}
