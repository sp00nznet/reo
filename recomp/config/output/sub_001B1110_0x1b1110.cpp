#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B1110
// Address: 0x1b1110 - 0x1b1150
void sub_001B1110_0x1b1110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b1110u;

    // 0x1b1110: 0x3c070057
    ctx->pc = 0x1b1110u;
    SET_GPR_U32(ctx, 7, ((uint32_t)87 << 16));
    // 0x1b1114: 0x302d
    ctx->pc = 0x1b1114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1118: 0x24e797d0
    ctx->pc = 0x1b1118u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294940624));
    // 0x1b111c: 0x2405ffff
    ctx->pc = 0x1b111cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b1120:
    // 0x1b1120: 0x8ce30000
    ctx->pc = 0x1b1120u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1b1124: 0x14640002
    ctx->pc = 0x1B1124u;
    {
        const bool branch_taken_0x1b1124 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x1b1124) {
            ctx->pc = 0x1B1130u;
            goto label_1b1130;
        }
    }
    ctx->pc = 0x1B112Cu;
    // 0x1b112c: 0xace50000
    ctx->pc = 0x1b112cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
label_1b1130:
    // 0x1b1130: 0x24c60001
    ctx->pc = 0x1b1130u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1b1134: 0x28c30040
    ctx->pc = 0x1b1134u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), 64));
    // 0x1b1138: 0x1460fff9
    ctx->pc = 0x1B1138u;
    {
        const bool branch_taken_0x1b1138 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B113Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
        if (branch_taken_0x1b1138) {
            ctx->pc = 0x1B1120u;
            goto label_1b1120;
        }
    }
    ctx->pc = 0x1B1140u;
    // 0x1b1140: 0x3e00008
    ctx->pc = 0x1B1140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1120u: goto label_1b1120;
            case 0x1B1130u: goto label_1b1130;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B1148u;
    // 0x1b1148: 0x0
    ctx->pc = 0x1b1148u;
    // NOP
    // 0x1b114c: 0x0
    ctx->pc = 0x1b114cu;
    // NOP
}
