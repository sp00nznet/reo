#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00175EC0
// Address: 0x175ec0 - 0x175ef8
void sub_00175EC0_0x175ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x175ec0u;

    // 0x175ec0: 0x80282d
    ctx->pc = 0x175ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175ec4: 0x24040004
    ctx->pc = 0x175ec4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x175ec8: 0x8ca30048
    ctx->pc = 0x175ec8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x175ecc: 0x102d
    ctx->pc = 0x175eccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175ed0: 0x14640006
    ctx->pc = 0x175ED0u;
    {
        const bool branch_taken_0x175ed0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x175ED4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 5), 2380));
        if (branch_taken_0x175ed0) {
            ctx->pc = 0x175EECu;
            goto label_175eec;
        }
    }
    ctx->pc = 0x175ED8u;
    // 0x175ed8: 0x8ca30050
    ctx->pc = 0x175ed8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x175edc: 0x14600003
    ctx->pc = 0x175EDCu;
    {
        const bool branch_taken_0x175edc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x175edc) {
            ctx->pc = 0x175EECu;
            goto label_175eec;
        }
    }
    ctx->pc = 0x175EE4u;
    // 0x175ee4: 0x8cc20018
    ctx->pc = 0x175ee4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x175ee8: 0x2c420001
    ctx->pc = 0x175ee8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_175eec:
    // 0x175eec: 0x3e00008
    ctx->pc = 0x175EECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175EECu: goto label_175eec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x175EF4u;
    // 0x175ef4: 0x0
    ctx->pc = 0x175ef4u;
    // NOP
}
