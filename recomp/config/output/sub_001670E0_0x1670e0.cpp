#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001670E0
// Address: 0x1670e0 - 0x167250
void sub_001670E0_0x1670e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1670e0u;

    // 0x1670e0: 0x27bdfff0
    ctx->pc = 0x1670e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1670e4: 0x24070001
    ctx->pc = 0x1670e4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1670e8: 0xffbf0000
    ctx->pc = 0x1670e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1670ec: 0xdfbf0000
    ctx->pc = 0x1670ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1670f0: 0x8059c3e
    ctx->pc = 0x1670F0u;
    ctx->pc = 0x1670F4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1670F8u;
    goto label_1670f8;
    ctx->pc = 0x1670F8u;
label_1670f8:
    // 0x1670f8: 0x27bdffa0
    ctx->pc = 0x1670f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1670fc: 0x102d
    ctx->pc = 0x1670fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167100: 0xffb50038
    ctx->pc = 0x167100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x167104: 0xa0a82d
    ctx->pc = 0x167104u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167108: 0x1518c0
    ctx->pc = 0x167108u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 21), 3));
    // 0x16710c: 0xffb60040
    ctx->pc = 0x16710cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x167110: 0x751823
    ctx->pc = 0x167110u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x167114: 0x80b02d
    ctx->pc = 0x167114u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167118: 0x31880
    ctx->pc = 0x167118u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x16711c: 0x26c41140
    ctx->pc = 0x16711cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 22), 4416));
    // 0x167120: 0x751821
    ctx->pc = 0x167120u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x167124: 0xffb20020
    ctx->pc = 0x167124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x167128: 0x31880
    ctx->pc = 0x167128u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x16712c: 0xffb30028
    ctx->pc = 0x16712cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x167130: 0xffb40030
    ctx->pc = 0x167130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x167134: 0xe0a02d
    ctx->pc = 0x167134u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167138: 0xffb70048
    ctx->pc = 0x167138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x16713c: 0xb82d
    ctx->pc = 0x16713cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167140: 0xffb00010
    ctx->pc = 0x167140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x167144: 0x832021
    ctx->pc = 0x167144u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x167148: 0xffb10018
    ctx->pc = 0x167148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x16714c: 0x24920010
    ctx->pc = 0x16714cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 4), 16));
    // 0x167150: 0xffbf0050
    ctx->pc = 0x167150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x167154: 0xc0982d
    ctx->pc = 0x167154u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167158: 0x12600031
    ctx->pc = 0x167158u;
    {
        const bool branch_taken_0x167158 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x16715Cu;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 4)));
        if (branch_taken_0x167158) {
            ctx->pc = 0x167220u;
            goto label_167220;
        }
    }
    ctx->pc = 0x167160u;
    // 0x167160: 0x8c820004
    ctx->pc = 0x167160u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x167164: 0x1040002e
    ctx->pc = 0x167164u;
    {
        const bool branch_taken_0x167164 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x167168u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x167164) {
            ctx->pc = 0x167220u;
            goto label_167220;
        }
    }
    ctx->pc = 0x16716Cu;
    // 0x16716c: 0x5220002d
    ctx->pc = 0x16716Cu;
    {
        const bool branch_taken_0x16716c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x16716c) {
            ctx->pc = 0x167170u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x167224u;
            goto label_167224;
        }
    }
    ctx->pc = 0x167174u;
    // 0x167174: 0xc05a7b2
    ctx->pc = 0x167174u;
    SET_GPR_U32(ctx, 31, 0x16717Cu);
    ctx->pc = 0x167178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169EC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EC8_0x169ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16717Cu; }
    }
    if (ctx->pc != 0x16717Cu) { return; }
    ctx->pc = 0x16717Cu;
    // 0x16717c: 0x220202d
    ctx->pc = 0x16717cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167180: 0x280282d
    ctx->pc = 0x167180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167184: 0xc059cf6
    ctx->pc = 0x167184u;
    SET_GPR_U32(ctx, 31, 0x16718Cu);
    ctx->pc = 0x167188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1673D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001673D8_0x1673d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16718Cu; }
    }
    if (ctx->pc != 0x16718Cu) { return; }
    ctx->pc = 0x16718Cu;
    // 0x16718c: 0x40182d
    ctx->pc = 0x16718cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167190: 0x73102a
    ctx->pc = 0x167190u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 19)));
    // 0x167194: 0x5040000f
    ctx->pc = 0x167194u;
    {
        const bool branch_taken_0x167194 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x167194) {
            ctx->pc = 0x167198u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x1671D4u;
            goto label_1671d4;
        }
    }
    ctx->pc = 0x16719Cu;
    // 0x16719c: 0x2638023
    ctx->pc = 0x16719cu;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1671a0: 0x220202d
    ctx->pc = 0x1671a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1671a4: 0x280282d
    ctx->pc = 0x1671a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1671a8: 0xc059cf6
    ctx->pc = 0x1671A8u;
    SET_GPR_U32(ctx, 31, 0x1671B0u);
    ctx->pc = 0x1671ACu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1673D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001673D8_0x1673d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1671B0u; }
    }
    if (ctx->pc != 0x1671B0u) { return; }
    ctx->pc = 0x1671B0u;
    // 0x1671b0: 0x50102a
    ctx->pc = 0x1671b0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x1671b4: 0x50400007
    ctx->pc = 0x1671B4u;
    {
        const bool branch_taken_0x1671b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1671b4) {
            ctx->pc = 0x1671B8u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x1671D4u;
            goto label_1671d4;
        }
    }
    ctx->pc = 0x1671BCu;
    // 0x1671bc: 0x3c05ff00
    ctx->pc = 0x1671bcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1671c0: 0x2c0202d
    ctx->pc = 0x1671c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1671c4: 0xc05a704
    ctx->pc = 0x1671C4u;
    SET_GPR_U32(ctx, 31, 0x1671CCu);
    ctx->pc = 0x1671C8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1035));
    ctx->pc = 0x169C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169C10_0x169c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1671CCu; }
    }
    if (ctx->pc != 0x1671CCu) { return; }
    ctx->pc = 0x1671CCu;
    // 0x1671cc: 0x40b82d
    ctx->pc = 0x1671ccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1671d0: 0x24020001
    ctx->pc = 0x1671d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1671d4:
    // 0x1671d4: 0x5682000a
    ctx->pc = 0x1671D4u;
    {
        const bool branch_taken_0x1671d4 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 2));
        if (branch_taken_0x1671d4) {
            ctx->pc = 0x1671D8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 32)));
            ctx->pc = 0x167200u;
            goto label_167200;
        }
    }
    ctx->pc = 0x1671DCu;
    // 0x1671dc: 0x56b40004
    ctx->pc = 0x1671DCu;
    {
        const bool branch_taken_0x1671dc = (GPR_U32(ctx, 21) != GPR_U32(ctx, 20));
        if (branch_taken_0x1671dc) {
            ctx->pc = 0x1671E0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 36)));
            ctx->pc = 0x1671F0u;
            goto label_1671f0;
        }
    }
    ctx->pc = 0x1671E4u;
    // 0x1671e4: 0xc059c94
    ctx->pc = 0x1671E4u;
    SET_GPR_U32(ctx, 31, 0x1671ECu);
    ctx->pc = 0x1671E8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x167250u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167250_0x167250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1671ECu; }
    }
    if (ctx->pc != 0x1671ECu) { return; }
    ctx->pc = 0x1671ECu;
    // 0x1671ec: 0x8e420024
    ctx->pc = 0x1671ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1671f0:
    // 0x1671f0: 0x4400006
    ctx->pc = 0x1671F0u;
    {
        const bool branch_taken_0x1671f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1671F4u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        if (branch_taken_0x1671f0) {
            ctx->pc = 0x16720Cu;
            goto label_16720c;
        }
    }
    ctx->pc = 0x1671F8u;
    // 0x1671f8: 0x10000004
    ctx->pc = 0x1671F8u;
    {
        const bool branch_taken_0x1671f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1671FCu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
        if (branch_taken_0x1671f8) {
            ctx->pc = 0x16720Cu;
            goto label_16720c;
        }
    }
    ctx->pc = 0x167200u;
label_167200:
    // 0x167200: 0x4400002
    ctx->pc = 0x167200u;
    {
        const bool branch_taken_0x167200 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x167204u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        if (branch_taken_0x167200) {
            ctx->pc = 0x16720Cu;
            goto label_16720c;
        }
    }
    ctx->pc = 0x167208u;
    // 0x167208: 0xae420020
    ctx->pc = 0x167208u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_16720c:
    // 0x16720c: 0x24020001
    ctx->pc = 0x16720cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x167210: 0x3a0202d
    ctx->pc = 0x167210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167214: 0xc05a7b8
    ctx->pc = 0x167214u;
    SET_GPR_U32(ctx, 31, 0x16721Cu);
    ctx->pc = 0x167218u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 68), GPR_U32(ctx, 2));
    ctx->pc = 0x169EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EE0_0x169ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16721Cu; }
    }
    if (ctx->pc != 0x16721Cu) { return; }
    ctx->pc = 0x16721Cu;
    // 0x16721c: 0x2e0102d
    ctx->pc = 0x16721cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_167220:
    // 0x167220: 0xdfb00010
    ctx->pc = 0x167220u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_167224:
    // 0x167224: 0xdfb10018
    ctx->pc = 0x167224u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x167228: 0xdfb20020
    ctx->pc = 0x167228u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16722c: 0xdfb30028
    ctx->pc = 0x16722cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x167230: 0xdfb40030
    ctx->pc = 0x167230u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167234: 0xdfb50038
    ctx->pc = 0x167234u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x167238: 0xdfb60040
    ctx->pc = 0x167238u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16723c: 0xdfb70048
    ctx->pc = 0x16723cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x167240: 0xdfbf0050
    ctx->pc = 0x167240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x167244: 0x3e00008
    ctx->pc = 0x167244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167248u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1670F8u: goto label_1670f8;
            case 0x1671D4u: goto label_1671d4;
            case 0x1671F0u: goto label_1671f0;
            case 0x167200u: goto label_167200;
            case 0x16720Cu: goto label_16720c;
            case 0x167220u: goto label_167220;
            case 0x167224u: goto label_167224;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16724Cu;
    // 0x16724c: 0x0
    ctx->pc = 0x16724cu;
    // NOP
}
