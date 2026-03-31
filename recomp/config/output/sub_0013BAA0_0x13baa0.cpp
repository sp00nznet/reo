#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013BAA0
// Address: 0x13baa0 - 0x13bba8
void sub_0013BAA0_0x13baa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13baa0u;

    // 0x13baa0: 0x27bdffc0
    ctx->pc = 0x13baa0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13baa4: 0xffb00000
    ctx->pc = 0x13baa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13baa8: 0x80802d
    ctx->pc = 0x13baa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13baac: 0xffb20010
    ctx->pc = 0x13baacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13bab0: 0x902d
    ctx->pc = 0x13bab0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bab4: 0xffb10008
    ctx->pc = 0x13bab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13bab8: 0xffb30018
    ctx->pc = 0x13bab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13babc: 0xffb40020
    ctx->pc = 0x13babcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13bac0: 0xffb50028
    ctx->pc = 0x13bac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x13bac4: 0x1600000c
    ctx->pc = 0x13BAC4u;
    {
        const bool branch_taken_0x13bac4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x13BAC8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        if (branch_taken_0x13bac4) {
            ctx->pc = 0x13BAF8u;
            goto label_13baf8;
        }
    }
    ctx->pc = 0x13BACCu;
    // 0x13bacc: 0x3c050024
    ctx->pc = 0x13baccu;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x13bad0: 0xdfb00000
    ctx->pc = 0x13bad0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13bad4: 0xdfb10008
    ctx->pc = 0x13bad4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13bad8: 0x24a5d110
    ctx->pc = 0x13bad8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294955280));
    // 0x13badc: 0xdfb20010
    ctx->pc = 0x13badcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13bae0: 0xdfb30018
    ctx->pc = 0x13bae0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13bae4: 0xdfb40020
    ctx->pc = 0x13bae4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13bae8: 0xdfb50028
    ctx->pc = 0x13bae8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13baec: 0xdfbf0030
    ctx->pc = 0x13baecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13baf0: 0x804ebf2
    ctx->pc = 0x13BAF0u;
    ctx->pc = 0x13BAF4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x13AFC8u;
    sub_0013AFC8_0x13afc8(rdram, ctx, runtime); return;
    ctx->pc = 0x13BAF8u;
label_13baf8:
    // 0x13baf8: 0x92020002
    ctx->pc = 0x13baf8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x13bafc: 0x2c420002
    ctx->pc = 0x13bafcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x13bb00: 0x54400021
    ctx->pc = 0x13BB00u;
    {
        const bool branch_taken_0x13bb00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x13bb00) {
            ctx->pc = 0x13BB04u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x13BB88u;
            goto label_13bb88;
        }
    }
    ctx->pc = 0x13BB08u;
    // 0x13bb08: 0x8e04002c
    ctx->pc = 0x13bb08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x13bb0c: 0x10800003
    ctx->pc = 0x13BB0Cu;
    {
        const bool branch_taken_0x13bb0c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x13BB10u;
        SET_GPR_U32(ctx, 17, ((uint32_t)99 << 16));
        if (branch_taken_0x13bb0c) {
            ctx->pc = 0x13BB1Cu;
            goto label_13bb1c;
        }
    }
    ctx->pc = 0x13BB14u;
    // 0x13bb14: 0xc04de1a
    ctx->pc = 0x13BB14u;
    SET_GPR_U32(ctx, 31, 0x13BB1Cu);
    ctx->pc = 0x137868u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00137868_0x137868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BB1Cu; }
    }
    if (ctx->pc != 0x13BB1Cu) { return; }
    ctx->pc = 0x13BB1Cu;
label_13bb1c:
    // 0x13bb1c: 0x24130002
    ctx->pc = 0x13bb1cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 2));
    // 0x13bb20: 0x3631fff6
    ctx->pc = 0x13bb20u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), 65526));
    // 0x13bb24: 0x3c140022
    ctx->pc = 0x13bb24u;
    SET_GPR_U32(ctx, 20, ((uint32_t)34 << 16));
    // 0x13bb28: 0x10000003
    ctx->pc = 0x13BB28u;
    {
        const bool branch_taken_0x13bb28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13BB2Cu;
        SET_GPR_U32(ctx, 21, ((uint32_t)36 << 16));
        if (branch_taken_0x13bb28) {
            ctx->pc = 0x13BB38u;
            goto label_13bb38;
        }
    }
    ctx->pc = 0x13BB30u;
label_13bb30:
    // 0x13bb30: 0xc04ebe6
    ctx->pc = 0x13BB30u;
    SET_GPR_U32(ctx, 31, 0x13BB38u);
    ctx->pc = 0x13AF98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013AF98_0x13af98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BB38u; }
    }
    if (ctx->pc != 0x13BB38u) { return; }
    ctx->pc = 0x13BB38u;
label_13bb38:
    // 0x13bb38: 0xc04df60
    ctx->pc = 0x13BB38u;
    SET_GPR_U32(ctx, 31, 0x13BB40u);
    ctx->pc = 0x137D80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00137D80_0x137d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BB40u; }
    }
    if (ctx->pc != 0x13BB40u) { return; }
    ctx->pc = 0x13BB40u;
    // 0x13bb40: 0xc04ec76
    ctx->pc = 0x13BB40u;
    SET_GPR_U32(ctx, 31, 0x13BB48u);
    ctx->pc = 0x13B1D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013B1D8_0x13b1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BB48u; }
    }
    if (ctx->pc != 0x13BB48u) { return; }
    ctx->pc = 0x13BB48u;
    // 0x13bb48: 0xc04eeea
    ctx->pc = 0x13BB48u;
    SET_GPR_U32(ctx, 31, 0x13BB50u);
    ctx->pc = 0x13BB4Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13BBA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013BBA8_0x13bba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BB50u; }
    }
    if (ctx->pc != 0x13BB50u) { return; }
    ctx->pc = 0x13BB50u;
    // 0x13bb50: 0x82030002
    ctx->pc = 0x13bb50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x13bb54: 0x5473000a
    ctx->pc = 0x13BB54u;
    {
        const bool branch_taken_0x13bb54 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 19));
        if (branch_taken_0x13bb54) {
            ctx->pc = 0x13BB58u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
            ctx->pc = 0x13BB80u;
            goto label_13bb80;
        }
    }
    ctx->pc = 0x13BB5Cu;
    // 0x13bb5c: 0x26520001
    ctx->pc = 0x13bb5cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x13bb60: 0x232102a
    ctx->pc = 0x13bb60u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 18)));
    // 0x13bb64: 0x1040fff2
    ctx->pc = 0x13BB64u;
    {
        const bool branch_taken_0x13bb64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13BB68u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294958756)));
        if (branch_taken_0x13bb64) {
            ctx->pc = 0x13BB30u;
            goto label_13bb30;
        }
    }
    ctx->pc = 0x13BB6Cu;
    // 0x13bb6c: 0x50430004
    ctx->pc = 0x13BB6Cu;
    {
        const bool branch_taken_0x13bb6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x13bb6c) {
            ctx->pc = 0x13BB70u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
            ctx->pc = 0x13BB80u;
            goto label_13bb80;
        }
    }
    ctx->pc = 0x13BB74u;
    // 0x13bb74: 0xc045a12
    ctx->pc = 0x13BB74u;
    SET_GPR_U32(ctx, 31, 0x13BB7Cu);
    ctx->pc = 0x13BB78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 4294955304));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BB7Cu; }
    }
    if (ctx->pc != 0x13BB7Cu) { return; }
    ctx->pc = 0x13BB7Cu;
    // 0x13bb7c: 0xae000028
    ctx->pc = 0x13bb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_13bb80:
    // 0x13bb80: 0xa2000002
    ctx->pc = 0x13bb80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x13bb84: 0xdfb00000
    ctx->pc = 0x13bb84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13bb88:
    // 0x13bb88: 0xdfb10008
    ctx->pc = 0x13bb88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13bb8c: 0xdfb20010
    ctx->pc = 0x13bb8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13bb90: 0xdfb30018
    ctx->pc = 0x13bb90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13bb94: 0xdfb40020
    ctx->pc = 0x13bb94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13bb98: 0xdfb50028
    ctx->pc = 0x13bb98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13bb9c: 0xdfbf0030
    ctx->pc = 0x13bb9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13bba0: 0x3e00008
    ctx->pc = 0x13BBA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BBA4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13BAF8u: goto label_13baf8;
            case 0x13BB1Cu: goto label_13bb1c;
            case 0x13BB30u: goto label_13bb30;
            case 0x13BB38u: goto label_13bb38;
            case 0x13BB80u: goto label_13bb80;
            case 0x13BB88u: goto label_13bb88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13BBA8u;
}
