#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00169748
// Address: 0x169748 - 0x1698e0
void sub_00169748_0x169748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x169748u;

    // 0x169748: 0x27bdffb0
    ctx->pc = 0x169748u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16974c: 0x3c020018
    ctx->pc = 0x16974cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)24 << 16));
    // 0x169750: 0xffb00010
    ctx->pc = 0x169750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x169754: 0xc0802d
    ctx->pc = 0x169754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169758: 0x24469f68
    ctx->pc = 0x169758u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294942568));
    // 0x16975c: 0xffb10018
    ctx->pc = 0x16975cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x169760: 0xffb20020
    ctx->pc = 0x169760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x169764: 0xa0902d
    ctx->pc = 0x169764u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169768: 0xffb30028
    ctx->pc = 0x169768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x16976c: 0x26130008
    ctx->pc = 0x16976cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 16), 8));
    // 0x169770: 0xffb40030
    ctx->pc = 0x169770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x169774: 0x2614000c
    ctx->pc = 0x169774u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 16), 12));
    // 0x169778: 0xffb50038
    ctx->pc = 0x169778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x16977c: 0x325500ff
    ctx->pc = 0x16977cu;
    SET_GPR_U32(ctx, 21, AND32(GPR_U32(ctx, 18), 255));
    // 0x169780: 0xffbf0040
    ctx->pc = 0x169780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x169784: 0xc05a646
    ctx->pc = 0x169784u;
    SET_GPR_U32(ctx, 31, 0x16978Cu);
    ctx->pc = 0x169788u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169918u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169918_0x169918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16978Cu; }
    }
    if (ctx->pc != 0x16978Cu) { return; }
    ctx->pc = 0x16978Cu;
    // 0x16978c: 0x3c060018
    ctx->pc = 0x16978cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)24 << 16));
    // 0x169790: 0xae020000
    ctx->pc = 0x169790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x169794: 0x24c69fd0
    ctx->pc = 0x169794u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294942672));
    // 0x169798: 0x220202d
    ctx->pc = 0x169798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16979c: 0xc05a646
    ctx->pc = 0x16979Cu;
    SET_GPR_U32(ctx, 31, 0x1697A4u);
    ctx->pc = 0x1697A0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169918u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169918_0x169918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1697A4u; }
    }
    if (ctx->pc != 0x1697A4u) { return; }
    ctx->pc = 0x1697A4u;
    // 0x1697a4: 0x220202d
    ctx->pc = 0x1697a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1697a8: 0xae020004
    ctx->pc = 0x1697a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1697ac: 0x2a0282d
    ctx->pc = 0x1697acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1697b0: 0x260302d
    ctx->pc = 0x1697b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1697b4: 0xc05e810
    ctx->pc = 0x1697B4u;
    SET_GPR_U32(ctx, 31, 0x1697BCu);
    ctx->pc = 0x1697B8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17A040u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A040_0x17a040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1697BCu; }
    }
    if (ctx->pc != 0x1697BCu) { return; }
    ctx->pc = 0x1697BCu;
    // 0x1697bc: 0x3c060018
    ctx->pc = 0x1697bcu;
    SET_GPR_U32(ctx, 6, ((uint32_t)24 << 16));
    // 0x1697c0: 0x24c6a0e8
    ctx->pc = 0x1697c0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294942952));
    // 0x1697c4: 0x220202d
    ctx->pc = 0x1697c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1697c8: 0x240282d
    ctx->pc = 0x1697c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1697cc: 0x14400003
    ctx->pc = 0x1697CCu;
    {
        const bool branch_taken_0x1697cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1697D0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1697cc) {
            ctx->pc = 0x1697DCu;
            goto label_1697dc;
        }
    }
    ctx->pc = 0x1697D4u;
    // 0x1697d4: 0xae630000
    ctx->pc = 0x1697d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1697d8: 0xae830000
    ctx->pc = 0x1697d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_1697dc:
    // 0x1697dc: 0xc05a646
    ctx->pc = 0x1697DCu;
    SET_GPR_U32(ctx, 31, 0x1697E4u);
    ctx->pc = 0x169918u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169918_0x169918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1697E4u; }
    }
    if (ctx->pc != 0x1697E4u) { return; }
    ctx->pc = 0x1697E4u;
    // 0x1697e4: 0x220202d
    ctx->pc = 0x1697e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1697e8: 0xae020010
    ctx->pc = 0x1697e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1697ec: 0x3a0302d
    ctx->pc = 0x1697ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1697f0: 0xc05e51a
    ctx->pc = 0x1697F0u;
    SET_GPR_U32(ctx, 31, 0x1697F8u);
    ctx->pc = 0x1697F4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x179468u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00179468_0x179468(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1697F8u; }
    }
    if (ctx->pc != 0x1697F8u) { return; }
    ctx->pc = 0x1697F8u;
    // 0x1697f8: 0x3c060018
    ctx->pc = 0x1697f8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)24 << 16));
    // 0x1697fc: 0x8fa30000
    ctx->pc = 0x1697fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169800: 0x24c6a158
    ctx->pc = 0x169800u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943064));
    // 0x169804: 0x220202d
    ctx->pc = 0x169804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169808: 0x240282d
    ctx->pc = 0x169808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16980c: 0x2180a
    ctx->pc = 0x16980cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 0));
    // 0x169810: 0x3102b
    ctx->pc = 0x169810u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x169814: 0xafa30000
    ctx->pc = 0x169814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x169818: 0x10600028
    ctx->pc = 0x169818u;
    {
        const bool branch_taken_0x169818 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x16981Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x169818) {
            ctx->pc = 0x1698BCu;
            goto label_1698bc;
        }
    }
    ctx->pc = 0x169820u;
    // 0x169820: 0xc05a646
    ctx->pc = 0x169820u;
    SET_GPR_U32(ctx, 31, 0x169828u);
    ctx->pc = 0x169918u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169918_0x169918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169828u; }
    }
    if (ctx->pc != 0x169828u) { return; }
    ctx->pc = 0x169828u;
    // 0x169828: 0x3c060018
    ctx->pc = 0x169828u;
    SET_GPR_U32(ctx, 6, ((uint32_t)24 << 16));
    // 0x16982c: 0xae020018
    ctx->pc = 0x16982cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x169830: 0x24c6a1c0
    ctx->pc = 0x169830u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943168));
    // 0x169834: 0x220202d
    ctx->pc = 0x169834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169838: 0xc05a646
    ctx->pc = 0x169838u;
    SET_GPR_U32(ctx, 31, 0x169840u);
    ctx->pc = 0x16983Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169918u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169918_0x169918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169840u; }
    }
    if (ctx->pc != 0x169840u) { return; }
    ctx->pc = 0x169840u;
    // 0x169840: 0x3c060018
    ctx->pc = 0x169840u;
    SET_GPR_U32(ctx, 6, ((uint32_t)24 << 16));
    // 0x169844: 0xae02001c
    ctx->pc = 0x169844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x169848: 0x24c6a228
    ctx->pc = 0x169848u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943272));
    // 0x16984c: 0x220202d
    ctx->pc = 0x16984cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169850: 0xc05a646
    ctx->pc = 0x169850u;
    SET_GPR_U32(ctx, 31, 0x169858u);
    ctx->pc = 0x169854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169918u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169918_0x169918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169858u; }
    }
    if (ctx->pc != 0x169858u) { return; }
    ctx->pc = 0x169858u;
    // 0x169858: 0x3c060018
    ctx->pc = 0x169858u;
    SET_GPR_U32(ctx, 6, ((uint32_t)24 << 16));
    // 0x16985c: 0xae020020
    ctx->pc = 0x16985cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x169860: 0x24c6a298
    ctx->pc = 0x169860u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943384));
    // 0x169864: 0x220202d
    ctx->pc = 0x169864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169868: 0xc05a646
    ctx->pc = 0x169868u;
    SET_GPR_U32(ctx, 31, 0x169870u);
    ctx->pc = 0x16986Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169918u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169918_0x169918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169870u; }
    }
    if (ctx->pc != 0x169870u) { return; }
    ctx->pc = 0x169870u;
    // 0x169870: 0x3c060018
    ctx->pc = 0x169870u;
    SET_GPR_U32(ctx, 6, ((uint32_t)24 << 16));
    // 0x169874: 0xae020024
    ctx->pc = 0x169874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x169878: 0x24c6a308
    ctx->pc = 0x169878u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943496));
    // 0x16987c: 0x220202d
    ctx->pc = 0x16987cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169880: 0xc05a646
    ctx->pc = 0x169880u;
    SET_GPR_U32(ctx, 31, 0x169888u);
    ctx->pc = 0x169884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169918u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169918_0x169918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169888u; }
    }
    if (ctx->pc != 0x169888u) { return; }
    ctx->pc = 0x169888u;
    // 0x169888: 0x3c060018
    ctx->pc = 0x169888u;
    SET_GPR_U32(ctx, 6, ((uint32_t)24 << 16));
    // 0x16988c: 0xae020028
    ctx->pc = 0x16988cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x169890: 0x24c6a370
    ctx->pc = 0x169890u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943600));
    // 0x169894: 0x220202d
    ctx->pc = 0x169894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169898: 0xc05a646
    ctx->pc = 0x169898u;
    SET_GPR_U32(ctx, 31, 0x1698A0u);
    ctx->pc = 0x16989Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169918u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169918_0x169918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1698A0u; }
    }
    if (ctx->pc != 0x1698A0u) { return; }
    ctx->pc = 0x1698A0u;
    // 0x1698a0: 0x3c060018
    ctx->pc = 0x1698a0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)24 << 16));
    // 0x1698a4: 0xae02002c
    ctx->pc = 0x1698a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1698a8: 0x220202d
    ctx->pc = 0x1698a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1698ac: 0x240282d
    ctx->pc = 0x1698acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1698b0: 0xc05a646
    ctx->pc = 0x1698B0u;
    SET_GPR_U32(ctx, 31, 0x1698B8u);
    ctx->pc = 0x1698B4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943720));
    ctx->pc = 0x169918u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169918_0x169918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1698B8u; }
    }
    if (ctx->pc != 0x1698B8u) { return; }
    ctx->pc = 0x1698B8u;
    // 0x1698b8: 0xae020030
    ctx->pc = 0x1698b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1698bc:
    // 0x1698bc: 0xdfb00010
    ctx->pc = 0x1698bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1698c0: 0xdfb10018
    ctx->pc = 0x1698c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1698c4: 0xdfb20020
    ctx->pc = 0x1698c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1698c8: 0xdfb30028
    ctx->pc = 0x1698c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1698cc: 0xdfb40030
    ctx->pc = 0x1698ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1698d0: 0xdfb50038
    ctx->pc = 0x1698d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1698d4: 0xdfbf0040
    ctx->pc = 0x1698d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1698d8: 0x3e00008
    ctx->pc = 0x1698D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1698DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1697DCu: goto label_1697dc;
            case 0x1698BCu: goto label_1698bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1698E0u;
}
