#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00175970
// Address: 0x175970 - 0x1759a0
void sub_00175970_0x175970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x175970u;

    // 0x175970: 0x51100
    ctx->pc = 0x175970u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
    // 0x175974: 0x451021
    ctx->pc = 0x175974u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x175978: 0x21080
    ctx->pc = 0x175978u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x17597c: 0x441021
    ctx->pc = 0x17597cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x175980: 0x8c421aa8
    ctx->pc = 0x175980u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6824)));
    // 0x175984: 0x54400004
    ctx->pc = 0x175984u;
    {
        const bool branch_taken_0x175984 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x175984) {
            ctx->pc = 0x175988u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->pc = 0x175998u;
            goto label_175998;
        }
    }
    ctx->pc = 0x17598Cu;
    // 0x17598c: 0x3e00008
    ctx->pc = 0x17598Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175990u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175998u: goto label_175998;
            default: break;
        }
        return;
    }
    ctx->pc = 0x175994u;
    // 0x175994: 0x0
    ctx->pc = 0x175994u;
    // NOP
label_175998:
    // 0x175998: 0x3e00008
    ctx->pc = 0x175998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17599Cu;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175998u: goto label_175998;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1759A0u;
}
