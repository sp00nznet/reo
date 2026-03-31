#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B1040
// Address: 0x1b1040 - 0x1b10c0
void sub_001B1040_0x1b1040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b1040u;

    // 0x1b1040: 0x3c070057
    ctx->pc = 0x1b1040u;
    SET_GPR_U32(ctx, 7, ((uint32_t)87 << 16));
    // 0x1b1044: 0x302d
    ctx->pc = 0x1b1044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1048: 0x24e798d0
    ctx->pc = 0x1b1048u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294940880));
    // 0x1b104c: 0x2405ffff
    ctx->pc = 0x1b104cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b1050:
    // 0x1b1050: 0x8ce30000
    ctx->pc = 0x1b1050u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1b1054: 0x14640002
    ctx->pc = 0x1B1054u;
    {
        const bool branch_taken_0x1b1054 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x1b1054) {
            ctx->pc = 0x1B1060u;
            goto label_1b1060;
        }
    }
    ctx->pc = 0x1B105Cu;
    // 0x1b105c: 0xace50000
    ctx->pc = 0x1b105cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
label_1b1060:
    // 0x1b1060: 0x24c60001
    ctx->pc = 0x1b1060u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1b1064: 0x28c302bc
    ctx->pc = 0x1b1064u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), 700));
    // 0x1b1068: 0x1460fff9
    ctx->pc = 0x1B1068u;
    {
        const bool branch_taken_0x1b1068 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B106Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
        if (branch_taken_0x1b1068) {
            ctx->pc = 0x1B1050u;
            goto label_1b1050;
        }
    }
    ctx->pc = 0x1B1070u;
    // 0x1b1070: 0x3e00008
    ctx->pc = 0x1B1070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1050u: goto label_1b1050;
            case 0x1B1060u: goto label_1b1060;
            case 0x1B1090u: goto label_1b1090;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B1078u;
    // 0x1b1078: 0x0
    ctx->pc = 0x1b1078u;
    // NOP
    // 0x1b107c: 0x0
    ctx->pc = 0x1b107cu;
    // NOP
    // 0x1b1080: 0x3c060057
    ctx->pc = 0x1b1080u;
    SET_GPR_U32(ctx, 6, ((uint32_t)87 << 16));
    // 0x1b1084: 0x282d
    ctx->pc = 0x1b1084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1088: 0x24c697d0
    ctx->pc = 0x1b1088u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294940624));
    // 0x1b108c: 0x2404ffff
    ctx->pc = 0x1b108cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b1090:
    // 0x1b1090: 0x24a50001
    ctx->pc = 0x1b1090u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b1094: 0xacc40000
    ctx->pc = 0x1b1094u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1b1098: 0x28a30040
    ctx->pc = 0x1b1098u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 64));
    // 0x1b109c: 0x24c60004
    ctx->pc = 0x1b109cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
    // 0x1b10a0: 0x0
    ctx->pc = 0x1b10a0u;
    // NOP
    // 0x1b10a4: 0x1460fffa
    ctx->pc = 0x1B10A4u;
    {
        const bool branch_taken_0x1b10a4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b10a4) {
            ctx->pc = 0x1B1090u;
            goto label_1b1090;
        }
    }
    ctx->pc = 0x1B10ACu;
    // 0x1b10ac: 0x3e00008
    ctx->pc = 0x1B10ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1050u: goto label_1b1050;
            case 0x1B1060u: goto label_1b1060;
            case 0x1B1090u: goto label_1b1090;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B10B4u;
    // 0x1b10b4: 0x0
    ctx->pc = 0x1b10b4u;
    // NOP
    // 0x1b10b8: 0x0
    ctx->pc = 0x1b10b8u;
    // NOP
    // 0x1b10bc: 0x0
    ctx->pc = 0x1b10bcu;
    // NOP
}
