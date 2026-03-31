#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0019EB10
// Address: 0x19eb10 - 0x19eb70
void sub_0019EB10_0x19eb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x19eb10u;

    // 0x19eb10: 0x3c04002a
    ctx->pc = 0x19eb10u;
    SET_GPR_U32(ctx, 4, ((uint32_t)42 << 16));
    // 0x19eb14: 0x282d
    ctx->pc = 0x19eb14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eb18: 0x1000000d
    ctx->pc = 0x19EB18u;
    {
        const bool branch_taken_0x19eb18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19EB1Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950624));
        if (branch_taken_0x19eb18) {
            ctx->pc = 0x19EB50u;
            goto label_19eb50;
        }
    }
    ctx->pc = 0x19EB20u;
label_19eb20:
    // 0x19eb20: 0x451023
    ctx->pc = 0x19eb20u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x19eb24: 0x21080
    ctx->pc = 0x19eb24u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x19eb28: 0x821021
    ctx->pc = 0x19eb28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19eb2c: 0x84430014
    ctx->pc = 0x19eb2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x19eb30: 0x14600006
    ctx->pc = 0x19EB30u;
    {
        const bool branch_taken_0x19eb30 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x19EB34u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        if (branch_taken_0x19eb30) {
            ctx->pc = 0x19EB4Cu;
            goto label_19eb4c;
        }
    }
    ctx->pc = 0x19EB38u;
    // 0x19eb38: 0x8c23bec8
    ctx->pc = 0x19eb38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294950600)));
    // 0x19eb3c: 0x24630001
    ctx->pc = 0x19eb3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x19eb40: 0x3c01002a
    ctx->pc = 0x19eb40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19eb44: 0x10000006
    ctx->pc = 0x19EB44u;
    {
        const bool branch_taken_0x19eb44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19EB48u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294950600), GPR_U32(ctx, 3));
        if (branch_taken_0x19eb44) {
            ctx->pc = 0x19EB60u;
            goto label_19eb60;
        }
    }
    ctx->pc = 0x19EB4Cu;
label_19eb4c:
    // 0x19eb4c: 0x24a50001
    ctx->pc = 0x19eb4cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_19eb50:
    // 0x19eb50: 0x28a20200
    ctx->pc = 0x19eb50u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 512));
    // 0x19eb54: 0x1440fff2
    ctx->pc = 0x19EB54u;
    {
        const bool branch_taken_0x19eb54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19EB58u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 3));
        if (branch_taken_0x19eb54) {
            ctx->pc = 0x19EB20u;
            goto label_19eb20;
        }
    }
    ctx->pc = 0x19EB5Cu;
    // 0x19eb5c: 0x102d
    ctx->pc = 0x19eb5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19eb60:
    // 0x19eb60: 0x3e00008
    ctx->pc = 0x19EB60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19EB20u: goto label_19eb20;
            case 0x19EB4Cu: goto label_19eb4c;
            case 0x19EB50u: goto label_19eb50;
            case 0x19EB60u: goto label_19eb60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19EB68u;
    // 0x19eb68: 0x0
    ctx->pc = 0x19eb68u;
    // NOP
    // 0x19eb6c: 0x0
    ctx->pc = 0x19eb6cu;
    // NOP
}
