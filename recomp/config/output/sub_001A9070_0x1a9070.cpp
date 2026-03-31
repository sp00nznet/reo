#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A9070
// Address: 0x1a9070 - 0x1a90b0
void sub_001A9070_0x1a9070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a9070u;

    // 0x1a9070: 0x3c010029
    ctx->pc = 0x1a9070u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x1a9074: 0x8c234178
    ctx->pc = 0x1a9074u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 16760)));
    // 0x1a9078: 0x14600005
    ctx->pc = 0x1A9078u;
    {
        const bool branch_taken_0x1a9078 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a9078) {
            ctx->pc = 0x1A9090u;
            goto label_1a9090;
        }
    }
    ctx->pc = 0x1A9080u;
    // 0x1a9080: 0x24030001
    ctx->pc = 0x1a9080u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9084: 0x3c01002a
    ctx->pc = 0x1a9084u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1a9088: 0x10000004
    ctx->pc = 0x1A9088u;
    {
        const bool branch_taken_0x1a9088 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A908Cu;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294965776), GPR_U32(ctx, 3));
        if (branch_taken_0x1a9088) {
            ctx->pc = 0x1A909Cu;
            goto label_1a909c;
        }
    }
    ctx->pc = 0x1A9090u;
label_1a9090:
    // 0x1a9090: 0x2463ffff
    ctx->pc = 0x1a9090u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a9094: 0x3c010029
    ctx->pc = 0x1a9094u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x1a9098: 0xac234178
    ctx->pc = 0x1a9098u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16760), GPR_U32(ctx, 3));
label_1a909c:
    // 0x1a909c: 0x3e00008
    ctx->pc = 0x1A909Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A9090u: goto label_1a9090;
            case 0x1A909Cu: goto label_1a909c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A90A4u;
    // 0x1a90a4: 0x0
    ctx->pc = 0x1a90a4u;
    // NOP
    // 0x1a90a8: 0x0
    ctx->pc = 0x1a90a8u;
    // NOP
    // 0x1a90ac: 0x0
    ctx->pc = 0x1a90acu;
    // NOP
}
