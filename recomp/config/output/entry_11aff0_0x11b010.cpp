#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_11aff0
// Address: 0x11aff0 - 0x11b010
void entry_11aff0_0x11b010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11aff0u;

    // 0x11aff0: 0x27bdfff0
    ctx->pc = 0x11aff0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11aff4: 0xffbf0000
    ctx->pc = 0x11aff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11aff8: 0xc0466ca
    ctx->pc = 0x11AFF8u;
    SET_GPR_U32(ctx, 31, 0x11B000u);
    ctx->pc = 0x11AFFCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 21));
    ctx->pc = 0x119B28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00119B28_0x119b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B000u; }
    }
    if (ctx->pc != 0x11B000u) { return; }
    ctx->pc = 0x11B000u;
    // 0x11b000: 0xdfbf0000
    ctx->pc = 0x11b000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b004: 0x3e00008
    ctx->pc = 0x11B004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B008u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B00Cu;
    // 0x11b00c: 0x0
    ctx->pc = 0x11b00cu;
    // NOP
}
