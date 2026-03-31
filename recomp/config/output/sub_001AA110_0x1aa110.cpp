#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AA110
// Address: 0x1aa110 - 0x1aa1e0
void sub_001AA110_0x1aa110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1aa110u;

    // 0x1aa110: 0x27bdfff0
    ctx->pc = 0x1aa110u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aa114: 0x3c01002b
    ctx->pc = 0x1aa114u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1aa118: 0xffbf0000
    ctx->pc = 0x1aa118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aa11c: 0x8c221698
    ctx->pc = 0x1aa11cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 5784)));
    // 0x1aa120: 0x14400008
    ctx->pc = 0x1AA120u;
    {
        const bool branch_taken_0x1aa120 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AA124u;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x1aa120) {
            ctx->pc = 0x1AA144u;
            goto label_1aa144;
        }
    }
    ctx->pc = 0x1AA128u;
label_1aa128:
    // 0x1aa128: 0x0
    ctx->pc = 0x1aa128u;
    // NOP
    // 0x1aa12c: 0x0
    ctx->pc = 0x1aa12cu;
    // NOP
    // 0x1aa130: 0x0
    ctx->pc = 0x1aa130u;
    // NOP
    // 0x1aa134: 0x0
    ctx->pc = 0x1aa134u;
    // NOP
    // 0x1aa138: 0x0
    ctx->pc = 0x1aa138u;
    // NOP
    // 0x1aa13c: 0x1000fffa
    ctx->pc = 0x1AA13Cu;
    {
        const bool branch_taken_0x1aa13c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aa13c) {
            ctx->pc = 0x1AA128u;
            goto label_1aa128;
        }
    }
    ctx->pc = 0x1AA144u;
label_1aa144:
    // 0x1aa144: 0x8c234448
    ctx->pc = 0x1aa144u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 17480)));
    // 0x1aa148: 0x14600008
    ctx->pc = 0x1AA148u;
    {
        const bool branch_taken_0x1aa148 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1aa148) {
            ctx->pc = 0x1AA16Cu;
            goto label_1aa16c;
        }
    }
    ctx->pc = 0x1AA150u;
label_1aa150:
    // 0x1aa150: 0x0
    ctx->pc = 0x1aa150u;
    // NOP
    // 0x1aa154: 0x0
    ctx->pc = 0x1aa154u;
    // NOP
    // 0x1aa158: 0x0
    ctx->pc = 0x1aa158u;
    // NOP
    // 0x1aa15c: 0x0
    ctx->pc = 0x1aa15cu;
    // NOP
    // 0x1aa160: 0x0
    ctx->pc = 0x1aa160u;
    // NOP
    // 0x1aa164: 0x1000fffa
    ctx->pc = 0x1AA164u;
    {
        const bool branch_taken_0x1aa164 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aa164) {
            ctx->pc = 0x1AA150u;
            goto label_1aa150;
        }
    }
    ctx->pc = 0x1AA16Cu;
label_1aa16c:
    // 0x1aa16c: 0xac430008
    ctx->pc = 0x1aa16cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1aa170: 0x3c01002b
    ctx->pc = 0x1aa170u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1aa174: 0x8c221698
    ctx->pc = 0x1aa174u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 5784)));
    // 0x1aa178: 0x3c050023
    ctx->pc = 0x1aa178u;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
    // 0x1aa17c: 0x3c040025
    ctx->pc = 0x1aa17cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)37 << 16));
    // 0x1aa180: 0x24a522c0
    ctx->pc = 0x1aa180u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8896));
    // 0x1aa184: 0x2403053e
    ctx->pc = 0x1aa184u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1342));
    // 0x1aa188: 0x2484cfa0
    ctx->pc = 0x1aa188u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954912));
    // 0x1aa18c: 0xac40001c
    ctx->pc = 0x1aa18cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1aa190: 0x3c01002b
    ctx->pc = 0x1aa190u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1aa194: 0x8c221698
    ctx->pc = 0x1aa194u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 5784)));
    // 0x1aa198: 0xac45000c
    ctx->pc = 0x1aa198u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x1aa19c: 0x3c01002b
    ctx->pc = 0x1aa19cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1aa1a0: 0x8c221698
    ctx->pc = 0x1aa1a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 5784)));
    // 0x1aa1a4: 0xac400018
    ctx->pc = 0x1aa1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1aa1a8: 0x3c01002b
    ctx->pc = 0x1aa1a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1aa1ac: 0x8c221698
    ctx->pc = 0x1aa1acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 5784)));
    // 0x1aa1b0: 0xac430014
    ctx->pc = 0x1aa1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x1aa1b4: 0x3c01002b
    ctx->pc = 0x1aa1b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1aa1b8: 0x8c251698
    ctx->pc = 0x1aa1b8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 5784)));
    // 0x1aa1bc: 0xc06a758
    ctx->pc = 0x1AA1BCu;
    SET_GPR_U32(ctx, 31, 0x1AA1C4u);
    ctx->pc = 0x1AA1C0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 24576));
    ctx->pc = 0x1A9D60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9D60_0x1a9d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA1C4u; }
    }
    if (ctx->pc != 0x1AA1C4u) { return; }
    ctx->pc = 0x1AA1C4u;
    // 0x1aa1c4: 0xc06acf0
    ctx->pc = 0x1AA1C4u;
    SET_GPR_U32(ctx, 31, 0x1AA1CCu);
    ctx->pc = 0x1AB3C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB3C0_0x1ab3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA1CCu; }
    }
    if (ctx->pc != 0x1AA1CCu) { return; }
    ctx->pc = 0x1AA1CCu;
    // 0x1aa1cc: 0xc06acb4
    ctx->pc = 0x1AA1CCu;
    SET_GPR_U32(ctx, 31, 0x1AA1D4u);
    ctx->pc = 0x1AB2D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB2D0_0x1ab2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA1D4u; }
    }
    if (ctx->pc != 0x1AA1D4u) { return; }
    ctx->pc = 0x1AA1D4u;
    // 0x1aa1d4: 0xdfbf0000
    ctx->pc = 0x1aa1d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa1d8: 0x3e00008
    ctx->pc = 0x1AA1D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA1DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA128u: goto label_1aa128;
            case 0x1AA144u: goto label_1aa144;
            case 0x1AA150u: goto label_1aa150;
            case 0x1AA16Cu: goto label_1aa16c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AA1E0u;
}
