#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015D048
// Address: 0x15d048 - 0x15d0a0
void sub_0015D048_0x15d048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15d048u;

    // 0x15d048: 0x8ca30018
    ctx->pc = 0x15d048u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x15d04c: 0x24820158
    ctx->pc = 0x15d04cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 344));
    // 0x15d050: 0x8ca6001c
    ctx->pc = 0x15d050u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x15d054: 0x248701e8
    ctx->pc = 0x15d054u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 4), 488));
    // 0x15d058: 0xac430000
    ctx->pc = 0x15d058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x15d05c: 0x2408001f
    ctx->pc = 0x15d05cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 31));
    // 0x15d060: 0xac460004
    ctx->pc = 0x15d060u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x15d064: 0x8ca30018
    ctx->pc = 0x15d064u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x15d068: 0xac40000c
    ctx->pc = 0x15d068u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x15d06c: 0xac430008
    ctx->pc = 0x15d06cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x15d070: 0xac800168
    ctx->pc = 0x15d070u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 360), GPR_U32(ctx, 0));
    // 0x15d074: 0x0
    ctx->pc = 0x15d074u;
    // NOP
label_15d078:
    // 0x15d078: 0x2508ffff
    ctx->pc = 0x15d078u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x15d07c: 0xace00000
    ctx->pc = 0x15d07cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x15d080: 0x0
    ctx->pc = 0x15d080u;
    // NOP
    // 0x15d084: 0x0
    ctx->pc = 0x15d084u;
    // NOP
    // 0x15d088: 0x0
    ctx->pc = 0x15d088u;
    // NOP
    // 0x15d08c: 0x501fffa
    ctx->pc = 0x15D08Cu;
    {
        const bool branch_taken_0x15d08c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x15D090u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967292));
        if (branch_taken_0x15d08c) {
            ctx->pc = 0x15D078u;
            goto label_15d078;
        }
    }
    ctx->pc = 0x15D094u;
    // 0x15d094: 0x3e00008
    ctx->pc = 0x15D094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D078u: goto label_15d078;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D09Cu;
    // 0x15d09c: 0x0
    ctx->pc = 0x15d09cu;
    // NOP
}
