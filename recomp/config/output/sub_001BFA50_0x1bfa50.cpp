#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BFA50
// Address: 0x1bfa50 - 0x1bfb40
void sub_001BFA50_0x1bfa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1bfa50u;

    // 0x1bfa50: 0x27bdffe0
    ctx->pc = 0x1bfa50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bfa54: 0x24020001
    ctx->pc = 0x1bfa54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bfa58: 0xffbf0010
    ctx->pc = 0x1bfa58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bfa5c: 0x7fb00000
    ctx->pc = 0x1bfa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bfa60: 0x8c830004
    ctx->pc = 0x1bfa60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bfa64: 0x1062001b
    ctx->pc = 0x1BFA64u;
    {
        const bool branch_taken_0x1bfa64 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1BFA68u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1bfa64) {
            ctx->pc = 0x1BFAD4u;
            goto label_1bfad4;
        }
    }
    ctx->pc = 0x1BFA6Cu;
    // 0x1bfa6c: 0x10600003
    ctx->pc = 0x1BFA6Cu;
    {
        const bool branch_taken_0x1bfa6c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bfa6c) {
            ctx->pc = 0x1BFA7Cu;
            goto label_1bfa7c;
        }
    }
    ctx->pc = 0x1BFA74u;
    // 0x1bfa74: 0x1000002e
    ctx->pc = 0x1BFA74u;
    {
        const bool branch_taken_0x1bfa74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BFA78u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1bfa74) {
            ctx->pc = 0x1BFB30u;
            goto label_1bfb30;
        }
    }
    ctx->pc = 0x1BFA7Cu;
label_1bfa7c:
    // 0x1bfa7c: 0xc06fe04
    ctx->pc = 0x1BFA7Cu;
    SET_GPR_U32(ctx, 31, 0x1BFA84u);
    ctx->pc = 0x1BF810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BF810_0x1bf810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFA84u; }
    }
    if (ctx->pc != 0x1BFA84u) { return; }
    ctx->pc = 0x1BFA84u;
    // 0x1bfa84: 0x4400029
    ctx->pc = 0x1BFA84u;
    {
        const bool branch_taken_0x1bfa84 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1bfa84) {
            ctx->pc = 0x1BFB2Cu;
            goto label_1bfb2c;
        }
    }
    ctx->pc = 0x1BFA8Cu;
    // 0x1bfa8c: 0x8e030014
    ctx->pc = 0x1bfa8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1bfa90: 0x3c020032
    ctx->pc = 0x1bfa90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x1bfa94: 0x3c060032
    ctx->pc = 0x1bfa94u;
    SET_GPR_U32(ctx, 6, ((uint32_t)50 << 16));
    // 0x1bfa98: 0x24426c40
    ctx->pc = 0x1bfa98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 27712));
    // 0x1bfa9c: 0x26050044
    ctx->pc = 0x1bfa9cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 68));
    // 0x1bfaa0: 0x31880
    ctx->pc = 0x1bfaa0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bfaa4: 0x431021
    ctx->pc = 0x1bfaa4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bfaa8: 0x8c440000
    ctx->pc = 0x1bfaa8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bfaac: 0xc06043c
    ctx->pc = 0x1BFAACu;
    SET_GPR_U32(ctx, 31, 0x1BFAB4u);
    ctx->pc = 0x1BFAB0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 27312));
    ctx->pc = 0x1810F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001810F0_0x1810f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFAB4u; }
    }
    if (ctx->pc != 0x1BFAB4u) { return; }
    ctx->pc = 0x1BFAB4u;
    // 0x1bfab4: 0x4410003
    ctx->pc = 0x1BFAB4u;
    {
        const bool branch_taken_0x1bfab4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1bfab4) {
            ctx->pc = 0x1BFAC4u;
            goto label_1bfac4;
        }
    }
    ctx->pc = 0x1BFABCu;
    // 0x1bfabc: 0x1000001c
    ctx->pc = 0x1BFABCu;
    {
        const bool branch_taken_0x1bfabc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BFAC0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1bfabc) {
            ctx->pc = 0x1BFB30u;
            goto label_1bfb30;
        }
    }
    ctx->pc = 0x1BFAC4u;
label_1bfac4:
    // 0x1bfac4: 0x8e020004
    ctx->pc = 0x1bfac4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bfac8: 0x24420001
    ctx->pc = 0x1bfac8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bfacc: 0x10000017
    ctx->pc = 0x1BFACCu;
    {
        const bool branch_taken_0x1bfacc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BFAD0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x1bfacc) {
            ctx->pc = 0x1BFB2Cu;
            goto label_1bfb2c;
        }
    }
    ctx->pc = 0x1BFAD4u;
label_1bfad4:
    // 0x1bfad4: 0xc06fe04
    ctx->pc = 0x1BFAD4u;
    SET_GPR_U32(ctx, 31, 0x1BFADCu);
    ctx->pc = 0x1BF810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BF810_0x1bf810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFADCu; }
    }
    if (ctx->pc != 0x1BFADCu) { return; }
    ctx->pc = 0x1BFADCu;
    // 0x1bfadc: 0x4400013
    ctx->pc = 0x1BFADCu;
    {
        const bool branch_taken_0x1bfadc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1bfadc) {
            ctx->pc = 0x1BFB2Cu;
            goto label_1bfb2c;
        }
    }
    ctx->pc = 0x1BFAE4u;
    // 0x1bfae4: 0xae000004
    ctx->pc = 0x1bfae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1bfae8: 0x34029002
    ctx->pc = 0x1bfae8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 36866));
    // 0x1bfaec: 0x9603001c
    ctx->pc = 0x1bfaecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1bfaf0: 0x1062000c
    ctx->pc = 0x1BFAF0u;
    {
        const bool branch_taken_0x1bfaf0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1BFAF4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1bfaf0) {
            ctx->pc = 0x1BFB24u;
            goto label_1bfb24;
        }
    }
    ctx->pc = 0x1BFAF8u;
    // 0x1bfaf8: 0x24020002
    ctx->pc = 0x1bfaf8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bfafc: 0x10620007
    ctx->pc = 0x1BFAFCu;
    {
        const bool branch_taken_0x1bfafc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1bfafc) {
            ctx->pc = 0x1BFB1Cu;
            goto label_1bfb1c;
        }
    }
    ctx->pc = 0x1BFB04u;
    // 0x1bfb04: 0x10600003
    ctx->pc = 0x1BFB04u;
    {
        const bool branch_taken_0x1bfb04 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bfb04) {
            ctx->pc = 0x1BFB14u;
            goto label_1bfb14;
        }
    }
    ctx->pc = 0x1BFB0Cu;
    // 0x1bfb0c: 0x10000005
    ctx->pc = 0x1BFB0Cu;
    {
        const bool branch_taken_0x1bfb0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bfb0c) {
            ctx->pc = 0x1BFB24u;
            goto label_1bfb24;
        }
    }
    ctx->pc = 0x1BFB14u;
label_1bfb14:
    // 0x1bfb14: 0x10000003
    ctx->pc = 0x1BFB14u;
    {
        const bool branch_taken_0x1bfb14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BFB18u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1bfb14) {
            ctx->pc = 0x1BFB24u;
            goto label_1bfb24;
        }
    }
    ctx->pc = 0x1BFB1Cu;
label_1bfb1c:
    // 0x1bfb1c: 0x10000001
    ctx->pc = 0x1BFB1Cu;
    {
        const bool branch_taken_0x1bfb1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BFB20u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1bfb1c) {
            ctx->pc = 0x1BFB24u;
            goto label_1bfb24;
        }
    }
    ctx->pc = 0x1BFB24u;
label_1bfb24:
    // 0x1bfb24: 0x10000003
    ctx->pc = 0x1BFB24u;
    {
        const bool branch_taken_0x1bfb24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BFB28u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1bfb24) {
            ctx->pc = 0x1BFB34u;
            goto label_1bfb34;
        }
    }
    ctx->pc = 0x1BFB2Cu;
label_1bfb2c:
    // 0x1bfb2c: 0x2402ffff
    ctx->pc = 0x1bfb2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1bfb30:
    // 0x1bfb30: 0xdfbf0010
    ctx->pc = 0x1bfb30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bfb34:
    // 0x1bfb34: 0x7bb00000
    ctx->pc = 0x1bfb34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bfb38: 0x3e00008
    ctx->pc = 0x1BFB38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFB3Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BFA7Cu: goto label_1bfa7c;
            case 0x1BFAC4u: goto label_1bfac4;
            case 0x1BFAD4u: goto label_1bfad4;
            case 0x1BFB14u: goto label_1bfb14;
            case 0x1BFB1Cu: goto label_1bfb1c;
            case 0x1BFB24u: goto label_1bfb24;
            case 0x1BFB2Cu: goto label_1bfb2c;
            case 0x1BFB30u: goto label_1bfb30;
            case 0x1BFB34u: goto label_1bfb34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BFB40u;
}
