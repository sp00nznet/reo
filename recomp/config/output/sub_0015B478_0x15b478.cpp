#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015B478
// Address: 0x15b478 - 0x15b4a0
void sub_0015B478_0x15b478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15b478u;

    // 0x15b478: 0x27bdfff0
    ctx->pc = 0x15b478u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15b47c: 0xffbf0000
    ctx->pc = 0x15b47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15b480: 0xc056e02
    ctx->pc = 0x15B480u;
    SET_GPR_U32(ctx, 31, 0x15B488u);
    ctx->pc = 0x15B808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B808_0x15b808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B488u; }
    }
    if (ctx->pc != 0x15B488u) { return; }
    ctx->pc = 0x15B488u;
    // 0x15b488: 0x3c020026
    ctx->pc = 0x15b488u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x15b48c: 0xdfbf0000
    ctx->pc = 0x15b48cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b490: 0x8c444cc0
    ctx->pc = 0x15b490u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 19648)));
    // 0x15b494: 0x24050ae0
    ctx->pc = 0x15b494u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2784));
    // 0x15b498: 0x8056da6
    ctx->pc = 0x15B498u;
    ctx->pc = 0x15B49Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x15B698u;
    sub_0015B698_0x15b698(rdram, ctx, runtime); return;
    ctx->pc = 0x15B4A0u;
}
