#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00163690
// Address: 0x163690 - 0x1636b0
void sub_00163690_0x163690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x163690u;

    // 0x163690: 0x27bdfff0
    ctx->pc = 0x163690u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x163694: 0xffbf0000
    ctx->pc = 0x163694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x163698: 0xc0505c6
    ctx->pc = 0x163698u;
    SET_GPR_U32(ctx, 31, 0x1636A0u);
    ctx->pc = 0x141718u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00141718_0x141718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1636A0u; }
    }
    if (ctx->pc != 0x1636A0u) { return; }
    ctx->pc = 0x1636A0u;
    // 0x1636a0: 0xdfbf0000
    ctx->pc = 0x1636a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1636a4: 0x24020001
    ctx->pc = 0x1636a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1636a8: 0x3e00008
    ctx->pc = 0x1636A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1636ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1636B0u;
}
