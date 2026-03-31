#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00155DE0
// Address: 0x155de0 - 0x155e38
void sub_00155DE0_0x155de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x155de0u;

    // 0x155de0: 0x3c020026
    ctx->pc = 0x155de0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x155de4: 0x24424c10
    ctx->pc = 0x155de4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19472));
    // 0x155de8: 0x8c460040
    ctx->pc = 0x155de8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x155dec: 0x18c0000f
    ctx->pc = 0x155DECu;
    {
        const bool branch_taken_0x155dec = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x155DF0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 68)));
        if (branch_taken_0x155dec) {
            ctx->pc = 0x155E2Cu;
            goto label_155e2c;
        }
    }
    ctx->pc = 0x155DF4u;
    // 0x155df4: 0x41080
    ctx->pc = 0x155df4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x155df8: 0x24070002
    ctx->pc = 0x155df8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    // 0x155dfc: 0x621021
    ctx->pc = 0x155dfcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x155e00: 0x24440018
    ctx->pc = 0x155e00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 24));
    // 0x155e04: 0x0
    ctx->pc = 0x155e04u;
    // NOP
label_155e08:
    // 0x155e08: 0x8c620000
    ctx->pc = 0x155e08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x155e0c: 0x14470002
    ctx->pc = 0x155E0Cu;
    {
        const bool branch_taken_0x155e0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 7));
        ctx->pc = 0x155E10u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1696));
        if (branch_taken_0x155e0c) {
            ctx->pc = 0x155E18u;
            goto label_155e18;
        }
    }
    ctx->pc = 0x155E14u;
    // 0x155e14: 0xac850000
    ctx->pc = 0x155e14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_155e18:
    // 0x155e18: 0x24c6ffff
    ctx->pc = 0x155e18u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x155e1c: 0x0
    ctx->pc = 0x155e1cu;
    // NOP
    // 0x155e20: 0x0
    ctx->pc = 0x155e20u;
    // NOP
    // 0x155e24: 0x14c0fff8
    ctx->pc = 0x155E24u;
    {
        const bool branch_taken_0x155e24 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x155E28u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1696));
        if (branch_taken_0x155e24) {
            ctx->pc = 0x155E08u;
            goto label_155e08;
        }
    }
    ctx->pc = 0x155E2Cu;
label_155e2c:
    // 0x155e2c: 0x3e00008
    ctx->pc = 0x155E2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155E08u: goto label_155e08;
            case 0x155E18u: goto label_155e18;
            case 0x155E2Cu: goto label_155e2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x155E34u;
    // 0x155e34: 0x0
    ctx->pc = 0x155e34u;
    // NOP
}
