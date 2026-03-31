#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013CF10
// Address: 0x13cf10 - 0x13cf78
void sub_0013CF10_0x13cf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13cf10u;

    // 0x13cf10: 0x27bdfff0
    ctx->pc = 0x13cf10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13cf14: 0xffb00000
    ctx->pc = 0x13cf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13cf18: 0x80802d
    ctx->pc = 0x13cf18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cf1c: 0x16000008
    ctx->pc = 0x13CF1Cu;
    {
        const bool branch_taken_0x13cf1c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x13CF20u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        if (branch_taken_0x13cf1c) {
            ctx->pc = 0x13CF40u;
            goto label_13cf40;
        }
    }
    ctx->pc = 0x13CF24u;
    // 0x13cf24: 0x3c040024
    ctx->pc = 0x13cf24u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13cf28: 0xdfb00000
    ctx->pc = 0x13cf28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13cf2c: 0xdfbf0008
    ctx->pc = 0x13cf2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13cf30: 0x2484d368
    ctx->pc = 0x13cf30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955880));
    // 0x13cf34: 0x804f53e
    ctx->pc = 0x13CF34u;
    ctx->pc = 0x13CF38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13D4F8u;
    sub_0013D4F8_0x13d4f8(rdram, ctx, runtime); return;
    ctx->pc = 0x13CF3Cu;
    // 0x13cf3c: 0x0
    ctx->pc = 0x13cf3cu;
    // NOP
label_13cf40:
    // 0x13cf40: 0x82020001
    ctx->pc = 0x13cf40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x13cf44: 0x50400004
    ctx->pc = 0x13CF44u;
    {
        const bool branch_taken_0x13cf44 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x13cf44) {
            ctx->pc = 0x13CF48u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->pc = 0x13CF58u;
            goto label_13cf58;
        }
    }
    ctx->pc = 0x13CF4Cu;
    // 0x13cf4c: 0xc04f3de
    ctx->pc = 0x13CF4Cu;
    SET_GPR_U32(ctx, 31, 0x13CF54u);
    ctx->pc = 0x13CF78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CF78_0x13cf78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CF54u; }
    }
    if (ctx->pc != 0x13CF54u) { return; }
    ctx->pc = 0x13CF54u;
    // 0x13cf54: 0x8e020024
    ctx->pc = 0x13cf54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_13cf58:
    // 0x13cf58: 0x58400002
    ctx->pc = 0x13CF58u;
    {
        const bool branch_taken_0x13cf58 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x13cf58) {
            ctx->pc = 0x13CF5Cu;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x13CF64u;
            goto label_13cf64;
        }
    }
    ctx->pc = 0x13CF60u;
    // 0x13cf60: 0x24020002
    ctx->pc = 0x13cf60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_13cf64:
    // 0x13cf64: 0xa2020001
    ctx->pc = 0x13cf64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x13cf68: 0xdfb00000
    ctx->pc = 0x13cf68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13cf6c: 0xdfbf0008
    ctx->pc = 0x13cf6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13cf70: 0x3e00008
    ctx->pc = 0x13CF70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CF74u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13CF40u: goto label_13cf40;
            case 0x13CF58u: goto label_13cf58;
            case 0x13CF64u: goto label_13cf64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13CF78u;
}
