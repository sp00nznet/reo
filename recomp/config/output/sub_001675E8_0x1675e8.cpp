#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001675E8
// Address: 0x1675e8 - 0x167bd8
void sub_001675E8_0x1675e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1675e8u;

    // 0x1675e8: 0xa0182d
    ctx->pc = 0x1675e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1675ec: 0x3c05ff00
    ctx->pc = 0x1675ecu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1675f0: 0x310c0
    ctx->pc = 0x1675f0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1675f4: 0x27bdfff0
    ctx->pc = 0x1675f4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1675f8: 0x431023
    ctx->pc = 0x1675f8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1675fc: 0xffbf0000
    ctx->pc = 0x1675fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x167600: 0x21080
    ctx->pc = 0x167600u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x167604: 0x24871140
    ctx->pc = 0x167604u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 4), 4416));
    // 0x167608: 0x431021
    ctx->pc = 0x167608u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16760c: 0x21080
    ctx->pc = 0x16760cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x167610: 0xacc00000
    ctx->pc = 0x167610u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x167614: 0xe23821
    ctx->pc = 0x167614u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x167618: 0x8ce30004
    ctx->pc = 0x167618u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x16761c: 0x14600004
    ctx->pc = 0x16761Cu;
    {
        const bool branch_taken_0x16761c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x167620u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1025));
        if (branch_taken_0x16761c) {
            ctx->pc = 0x167630u;
            goto label_167630;
        }
    }
    ctx->pc = 0x167624u;
    // 0x167624: 0xdfbf0000
    ctx->pc = 0x167624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167628: 0x805a704
    ctx->pc = 0x167628u;
    ctx->pc = 0x16762Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x167630u;
label_167630:
    // 0x167630: 0x8ce30014
    ctx->pc = 0x167630u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x167634: 0x102d
    ctx->pc = 0x167634u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167638: 0xdfbf0000
    ctx->pc = 0x167638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16763c: 0xacc30000
    ctx->pc = 0x16763cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x167640: 0x3e00008
    ctx->pc = 0x167640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167644u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167630u: goto label_167630;
            case 0x167674u: goto label_167674;
            case 0x1676E8u: goto label_1676e8;
            case 0x167768u: goto label_167768;
            case 0x167790u: goto label_167790;
            case 0x1677A4u: goto label_1677a4;
            case 0x1677ACu: goto label_1677ac;
            case 0x1677B8u: goto label_1677b8;
            case 0x1677D0u: goto label_1677d0;
            case 0x1677E4u: goto label_1677e4;
            case 0x1677F4u: goto label_1677f4;
            case 0x1677FCu: goto label_1677fc;
            case 0x167890u: goto label_167890;
            case 0x1678C4u: goto label_1678c4;
            case 0x1678ECu: goto label_1678ec;
            case 0x167900u: goto label_167900;
            case 0x167904u: goto label_167904;
            case 0x167988u: goto label_167988;
            case 0x167A00u: goto label_167a00;
            case 0x167A2Cu: goto label_167a2c;
            case 0x167A40u: goto label_167a40;
            case 0x167A48u: goto label_167a48;
            case 0x167A58u: goto label_167a58;
            case 0x167A74u: goto label_167a74;
            case 0x167A88u: goto label_167a88;
            case 0x167A9Cu: goto label_167a9c;
            case 0x167AA4u: goto label_167aa4;
            case 0x167B38u: goto label_167b38;
            case 0x167B6Cu: goto label_167b6c;
            case 0x167B90u: goto label_167b90;
            case 0x167BA4u: goto label_167ba4;
            case 0x167BA8u: goto label_167ba8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x167648u;
    // 0x167648: 0x510c0
    ctx->pc = 0x167648u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 3));
    // 0x16764c: 0x451023
    ctx->pc = 0x16764cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x167650: 0x21080
    ctx->pc = 0x167650u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x167654: 0x451021
    ctx->pc = 0x167654u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x167658: 0x21080
    ctx->pc = 0x167658u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x16765c: 0x822021
    ctx->pc = 0x16765cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x167660: 0x24841150
    ctx->pc = 0x167660u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4432));
    // 0x167664: 0x8c820024
    ctx->pc = 0x167664u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x167668: 0x4400002
    ctx->pc = 0x167668u;
    {
        const bool branch_taken_0x167668 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16766Cu;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        if (branch_taken_0x167668) {
            ctx->pc = 0x167674u;
            goto label_167674;
        }
    }
    ctx->pc = 0x167670u;
    // 0x167670: 0xac830024
    ctx->pc = 0x167670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
label_167674:
    // 0x167674: 0x3e00008
    ctx->pc = 0x167674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167630u: goto label_167630;
            case 0x167674u: goto label_167674;
            case 0x1676E8u: goto label_1676e8;
            case 0x167768u: goto label_167768;
            case 0x167790u: goto label_167790;
            case 0x1677A4u: goto label_1677a4;
            case 0x1677ACu: goto label_1677ac;
            case 0x1677B8u: goto label_1677b8;
            case 0x1677D0u: goto label_1677d0;
            case 0x1677E4u: goto label_1677e4;
            case 0x1677F4u: goto label_1677f4;
            case 0x1677FCu: goto label_1677fc;
            case 0x167890u: goto label_167890;
            case 0x1678C4u: goto label_1678c4;
            case 0x1678ECu: goto label_1678ec;
            case 0x167900u: goto label_167900;
            case 0x167904u: goto label_167904;
            case 0x167988u: goto label_167988;
            case 0x167A00u: goto label_167a00;
            case 0x167A2Cu: goto label_167a2c;
            case 0x167A40u: goto label_167a40;
            case 0x167A48u: goto label_167a48;
            case 0x167A58u: goto label_167a58;
            case 0x167A74u: goto label_167a74;
            case 0x167A88u: goto label_167a88;
            case 0x167A9Cu: goto label_167a9c;
            case 0x167AA4u: goto label_167aa4;
            case 0x167B38u: goto label_167b38;
            case 0x167B6Cu: goto label_167b6c;
            case 0x167B90u: goto label_167b90;
            case 0x167BA4u: goto label_167ba4;
            case 0x167BA8u: goto label_167ba8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16767Cu;
    // 0x16767c: 0x0
    ctx->pc = 0x16767cu;
    // NOP
    // 0x167680: 0x510c0
    ctx->pc = 0x167680u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 3));
    // 0x167684: 0x27bdff90
    ctx->pc = 0x167684u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x167688: 0x451023
    ctx->pc = 0x167688u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16768c: 0xffb50048
    ctx->pc = 0x16768cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x167690: 0x21080
    ctx->pc = 0x167690u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x167694: 0xffb00020
    ctx->pc = 0x167694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x167698: 0x451021
    ctx->pc = 0x167698u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16769c: 0xffb10028
    ctx->pc = 0x16769cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1676a0: 0xffb20030
    ctx->pc = 0x1676a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1676a4: 0x24871140
    ctx->pc = 0x1676a4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 4), 4416));
    // 0x1676a8: 0xffb30038
    ctx->pc = 0x1676a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1676ac: 0x21080
    ctx->pc = 0x1676acu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1676b0: 0xffb40040
    ctx->pc = 0x1676b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1676b4: 0xe23821
    ctx->pc = 0x1676b4u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1676b8: 0xffb60050
    ctx->pc = 0x1676b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x1676bc: 0xffb70058
    ctx->pc = 0x1676bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x1676c0: 0xffbe0060
    ctx->pc = 0x1676c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x1676c4: 0xffbf0068
    ctx->pc = 0x1676c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x1676c8: 0x8ce30004
    ctx->pc = 0x1676c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1676cc: 0x14600006
    ctx->pc = 0x1676CCu;
    {
        const bool branch_taken_0x1676cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1676D0u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1676cc) {
            ctx->pc = 0x1676E8u;
            goto label_1676e8;
        }
    }
    ctx->pc = 0x1676D4u;
    // 0x1676d4: 0x3c05ff00
    ctx->pc = 0x1676d4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1676d8: 0xc05a704
    ctx->pc = 0x1676D8u;
    SET_GPR_U32(ctx, 31, 0x1676E0u);
    ctx->pc = 0x1676DCu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1025));
    ctx->pc = 0x169C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169C10_0x169c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1676E0u; }
    }
    if (ctx->pc != 0x1676E0u) { return; }
    ctx->pc = 0x1676E0u;
    // 0x1676e0: 0x10000046
    ctx->pc = 0x1676E0u;
    {
        const bool branch_taken_0x1676e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1676E4u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1676e0) {
            ctx->pc = 0x1677FCu;
            goto label_1677fc;
        }
    }
    ctx->pc = 0x1676E8u;
label_1676e8:
    // 0x1676e8: 0x24f00010
    ctx->pc = 0x1676e8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 7), 16));
    // 0x1676ec: 0xc05a7b2
    ctx->pc = 0x1676ECu;
    SET_GPR_U32(ctx, 31, 0x1676F4u);
    ctx->pc = 0x1676F0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169EC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EC8_0x169ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1676F4u; }
    }
    if (ctx->pc != 0x1676F4u) { return; }
    ctx->pc = 0x1676F4u;
    // 0x1676f4: 0x8e020008
    ctx->pc = 0x1676f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1676f8: 0x3a0202d
    ctx->pc = 0x1676f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1676fc: 0xafa20004
    ctx->pc = 0x1676fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x167700: 0x8e050018
    ctx->pc = 0x167700u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x167704: 0x8e13002c
    ctx->pc = 0x167704u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x167708: 0x8e14001c
    ctx->pc = 0x167708u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x16770c: 0x8e110028
    ctx->pc = 0x16770cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x167710: 0x8e17000c
    ctx->pc = 0x167710u;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x167714: 0x8e120010
    ctx->pc = 0x167714u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x167718: 0x8e1e0014
    ctx->pc = 0x167718u;
    SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x16771c: 0x8e160020
    ctx->pc = 0x16771cu;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x167720: 0x7fa50010
    ctx->pc = 0x167720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
    // 0x167724: 0xc05a7b8
    ctx->pc = 0x167724u;
    SET_GPR_U32(ctx, 31, 0x16772Cu);
    ctx->pc = 0x167728u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x169EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EE0_0x169ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16772Cu; }
    }
    if (ctx->pc != 0x16772Cu) { return; }
    ctx->pc = 0x16772Cu;
    // 0x16772c: 0x8fa30004
    ctx->pc = 0x16772cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x167730: 0x2741021
    ctx->pc = 0x167730u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x167734: 0x222102a
    ctx->pc = 0x167734u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x167738: 0xaeb20008
    ctx->pc = 0x167738u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 18));
    // 0x16773c: 0xaea30000
    ctx->pc = 0x16773cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x167740: 0xaeb70004
    ctx->pc = 0x167740u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 23));
    // 0x167744: 0xaeb10024
    ctx->pc = 0x167744u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 17));
    // 0x167748: 0xaeb30028
    ctx->pc = 0x167748u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 19));
    // 0x16774c: 0x14400006
    ctx->pc = 0x16774Cu;
    {
        const bool branch_taken_0x16774c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x167750u;
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x16774c) {
            ctx->pc = 0x167768u;
            goto label_167768;
        }
    }
    ctx->pc = 0x167754u;
    // 0x167754: 0xaea00020
    ctx->pc = 0x167754u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 0));
    // 0x167758: 0xaea0000c
    ctx->pc = 0x167758u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
    // 0x16775c: 0xaea00014
    ctx->pc = 0x16775cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 0));
    // 0x167760: 0x10000012
    ctx->pc = 0x167760u;
    {
        const bool branch_taken_0x167760 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x167764u;
        WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 0));
        if (branch_taken_0x167760) {
            ctx->pc = 0x1677ACu;
            goto label_1677ac;
        }
    }
    ctx->pc = 0x167768u;
label_167768:
    // 0x167768: 0x2d0102a
    ctx->pc = 0x167768u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 22), GPR_S32(ctx, 16)));
    // 0x16776c: 0x50400012
    ctx->pc = 0x16776Cu;
    {
        const bool branch_taken_0x16776c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x16776c) {
            ctx->pc = 0x167770u;
            SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
            ctx->pc = 0x1677B8u;
            goto label_1677b8;
        }
    }
    ctx->pc = 0x167774u;
    // 0x167774: 0x2161023
    ctx->pc = 0x167774u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x167778: 0x2ae30009
    ctx->pc = 0x167778u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 23), 9));
    // 0x16777c: 0xaea2000c
    ctx->pc = 0x16777cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    // 0x167780: 0x14600003
    ctx->pc = 0x167780u;
    {
        const bool branch_taken_0x167780 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x167784u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 22)));
        if (branch_taken_0x167780) {
            ctx->pc = 0x167790u;
            goto label_167790;
        }
    }
    ctx->pc = 0x167788u;
    // 0x167788: 0x161040
    ctx->pc = 0x167788u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 22), 1));
    // 0x16778c: 0x3c21021
    ctx->pc = 0x16778cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_167790:
    // 0x167790: 0xaea20014
    ctx->pc = 0x167790u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
    // 0x167794: 0x14600003
    ctx->pc = 0x167794u;
    {
        const bool branch_taken_0x167794 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x167798u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
        if (branch_taken_0x167794) {
            ctx->pc = 0x1677A4u;
            goto label_1677a4;
        }
    }
    ctx->pc = 0x16779Cu;
    // 0x16779c: 0x161040
    ctx->pc = 0x16779cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 22), 1));
    // 0x1677a0: 0xa21021
    ctx->pc = 0x1677a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1677a4:
    // 0x1677a4: 0xaea20018
    ctx->pc = 0x1677a4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
    // 0x1677a8: 0xaea00020
    ctx->pc = 0x1677a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 0));
label_1677ac:
    // 0x1677ac: 0xaea00010
    ctx->pc = 0x1677acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
    // 0x1677b0: 0x10000010
    ctx->pc = 0x1677B0u;
    {
        const bool branch_taken_0x1677b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1677B4u;
        WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 0));
        if (branch_taken_0x1677b0) {
            ctx->pc = 0x1677F4u;
            goto label_1677f4;
        }
    }
    ctx->pc = 0x1677B8u;
label_1677b8:
    // 0x1677b8: 0x2ae30009
    ctx->pc = 0x1677b8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 23), 9));
    // 0x1677bc: 0xaea2000c
    ctx->pc = 0x1677bcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    // 0x1677c0: 0x14600003
    ctx->pc = 0x1677C0u;
    {
        const bool branch_taken_0x1677c0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1677C4u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 22)));
        if (branch_taken_0x1677c0) {
            ctx->pc = 0x1677D0u;
            goto label_1677d0;
        }
    }
    ctx->pc = 0x1677C8u;
    // 0x1677c8: 0x161040
    ctx->pc = 0x1677c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 22), 1));
    // 0x1677cc: 0x3c21021
    ctx->pc = 0x1677ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_1677d0:
    // 0x1677d0: 0xaea20014
    ctx->pc = 0x1677d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
    // 0x1677d4: 0x14600003
    ctx->pc = 0x1677D4u;
    {
        const bool branch_taken_0x1677d4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1677D8u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
        if (branch_taken_0x1677d4) {
            ctx->pc = 0x1677E4u;
            goto label_1677e4;
        }
    }
    ctx->pc = 0x1677DCu;
    // 0x1677dc: 0x161040
    ctx->pc = 0x1677dcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 22), 1));
    // 0x1677e0: 0xa21021
    ctx->pc = 0x1677e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1677e4:
    // 0x1677e4: 0xaea50020
    ctx->pc = 0x1677e4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 5));
    // 0x1677e8: 0xaea20018
    ctx->pc = 0x1677e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
    // 0x1677ec: 0xaeb00010
    ctx->pc = 0x1677ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 16));
    // 0x1677f0: 0xaebe001c
    ctx->pc = 0x1677f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 30));
label_1677f4:
    // 0x1677f4: 0x102d
    ctx->pc = 0x1677f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1677f8: 0xdfb00020
    ctx->pc = 0x1677f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1677fc:
    // 0x1677fc: 0xdfb10028
    ctx->pc = 0x1677fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x167800: 0xdfb20030
    ctx->pc = 0x167800u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167804: 0xdfb30038
    ctx->pc = 0x167804u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x167808: 0xdfb40040
    ctx->pc = 0x167808u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16780c: 0xdfb50048
    ctx->pc = 0x16780cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x167810: 0xdfb60050
    ctx->pc = 0x167810u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x167814: 0xdfb70058
    ctx->pc = 0x167814u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x167818: 0xdfbe0060
    ctx->pc = 0x167818u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16781c: 0xdfbf0068
    ctx->pc = 0x16781cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x167820: 0x3e00008
    ctx->pc = 0x167820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167824u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167630u: goto label_167630;
            case 0x167674u: goto label_167674;
            case 0x1676E8u: goto label_1676e8;
            case 0x167768u: goto label_167768;
            case 0x167790u: goto label_167790;
            case 0x1677A4u: goto label_1677a4;
            case 0x1677ACu: goto label_1677ac;
            case 0x1677B8u: goto label_1677b8;
            case 0x1677D0u: goto label_1677d0;
            case 0x1677E4u: goto label_1677e4;
            case 0x1677F4u: goto label_1677f4;
            case 0x1677FCu: goto label_1677fc;
            case 0x167890u: goto label_167890;
            case 0x1678C4u: goto label_1678c4;
            case 0x1678ECu: goto label_1678ec;
            case 0x167900u: goto label_167900;
            case 0x167904u: goto label_167904;
            case 0x167988u: goto label_167988;
            case 0x167A00u: goto label_167a00;
            case 0x167A2Cu: goto label_167a2c;
            case 0x167A40u: goto label_167a40;
            case 0x167A48u: goto label_167a48;
            case 0x167A58u: goto label_167a58;
            case 0x167A74u: goto label_167a74;
            case 0x167A88u: goto label_167a88;
            case 0x167A9Cu: goto label_167a9c;
            case 0x167AA4u: goto label_167aa4;
            case 0x167B38u: goto label_167b38;
            case 0x167B6Cu: goto label_167b6c;
            case 0x167B90u: goto label_167b90;
            case 0x167BA4u: goto label_167ba4;
            case 0x167BA8u: goto label_167ba8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x167828u;
    // 0x167828: 0x518c0
    ctx->pc = 0x167828u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x16782c: 0x27bdffc0
    ctx->pc = 0x16782cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x167830: 0x651823
    ctx->pc = 0x167830u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x167834: 0xffb20020
    ctx->pc = 0x167834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x167838: 0x31880
    ctx->pc = 0x167838u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x16783c: 0x80902d
    ctx->pc = 0x16783cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167840: 0x651821
    ctx->pc = 0x167840u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x167844: 0xffb10018
    ctx->pc = 0x167844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x167848: 0x31880
    ctx->pc = 0x167848u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x16784c: 0xc0882d
    ctx->pc = 0x16784cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167850: 0x26461140
    ctx->pc = 0x167850u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 4416));
    // 0x167854: 0xffb30028
    ctx->pc = 0x167854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x167858: 0xffb00010
    ctx->pc = 0x167858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16785c: 0x102d
    ctx->pc = 0x16785cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167860: 0xffbf0030
    ctx->pc = 0x167860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x167864: 0x982d
    ctx->pc = 0x167864u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167868: 0x12200025
    ctx->pc = 0x167868u;
    {
        const bool branch_taken_0x167868 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x16786Cu;
        SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        if (branch_taken_0x167868) {
            ctx->pc = 0x167900u;
            goto label_167900;
        }
    }
    ctx->pc = 0x167870u;
    // 0x167870: 0x8cc20004
    ctx->pc = 0x167870u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x167874: 0x54400006
    ctx->pc = 0x167874u;
    {
        const bool branch_taken_0x167874 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x167874) {
            ctx->pc = 0x167878u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 6), 16));
            ctx->pc = 0x167890u;
            goto label_167890;
        }
    }
    ctx->pc = 0x16787Cu;
    // 0x16787c: 0x3c05ff00
    ctx->pc = 0x16787cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x167880: 0xc05a704
    ctx->pc = 0x167880u;
    SET_GPR_U32(ctx, 31, 0x167888u);
    ctx->pc = 0x167884u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1025));
    ctx->pc = 0x169C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169C10_0x169c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167888u; }
    }
    if (ctx->pc != 0x167888u) { return; }
    ctx->pc = 0x167888u;
    // 0x167888: 0x1000001e
    ctx->pc = 0x167888u;
    {
        const bool branch_taken_0x167888 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16788Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x167888) {
            ctx->pc = 0x167904u;
            goto label_167904;
        }
    }
    ctx->pc = 0x167890u;
label_167890:
    // 0x167890: 0xc05a7b2
    ctx->pc = 0x167890u;
    SET_GPR_U32(ctx, 31, 0x167898u);
    ctx->pc = 0x167894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169EC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EC8_0x169ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167898u; }
    }
    if (ctx->pc != 0x167898u) { return; }
    ctx->pc = 0x167898u;
    // 0x167898: 0x240202d
    ctx->pc = 0x167898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16789c: 0x8e020020
    ctx->pc = 0x16789cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1678a0: 0x3c05ff00
    ctx->pc = 0x1678a0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1678a4: 0x8e06001c
    ctx->pc = 0x1678a4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1678a8: 0x34a50406
    ctx->pc = 0x1678a8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1030));
    // 0x1678ac: 0x511021
    ctx->pc = 0x1678acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1678b0: 0x46182a
    ctx->pc = 0x1678b0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 6)));
    // 0x1678b4: 0x463823
    ctx->pc = 0x1678b4u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1678b8: 0x14600002
    ctx->pc = 0x1678B8u;
    {
        const bool branch_taken_0x1678b8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1678BCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        if (branch_taken_0x1678b8) {
            ctx->pc = 0x1678C4u;
            goto label_1678c4;
        }
    }
    ctx->pc = 0x1678C0u;
    // 0x1678c0: 0xae070020
    ctx->pc = 0x1678c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 7));
label_1678c4:
    // 0x1678c4: 0x8e020028
    ctx->pc = 0x1678c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1678c8: 0x8e03002c
    ctx->pc = 0x1678c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1678cc: 0x511021
    ctx->pc = 0x1678ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1678d0: 0x661821
    ctx->pc = 0x1678d0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1678d4: 0x62182a
    ctx->pc = 0x1678d4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x1678d8: 0x10600004
    ctx->pc = 0x1678D8u;
    {
        const bool branch_taken_0x1678d8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1678DCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        if (branch_taken_0x1678d8) {
            ctx->pc = 0x1678ECu;
            goto label_1678ec;
        }
    }
    ctx->pc = 0x1678E0u;
    // 0x1678e0: 0xc05a704
    ctx->pc = 0x1678E0u;
    SET_GPR_U32(ctx, 31, 0x1678E8u);
    ctx->pc = 0x169C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169C10_0x169c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1678E8u; }
    }
    if (ctx->pc != 0x1678E8u) { return; }
    ctx->pc = 0x1678E8u;
    // 0x1678e8: 0x40982d
    ctx->pc = 0x1678e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1678ec:
    // 0x1678ec: 0x24020001
    ctx->pc = 0x1678ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1678f0: 0x3a0202d
    ctx->pc = 0x1678f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1678f4: 0xc05a7b8
    ctx->pc = 0x1678F4u;
    SET_GPR_U32(ctx, 31, 0x1678FCu);
    ctx->pc = 0x1678F8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
    ctx->pc = 0x169EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EE0_0x169ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1678FCu; }
    }
    if (ctx->pc != 0x1678FCu) { return; }
    ctx->pc = 0x1678FCu;
    // 0x1678fc: 0x260102d
    ctx->pc = 0x1678fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_167900:
    // 0x167900: 0xdfb00010
    ctx->pc = 0x167900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_167904:
    // 0x167904: 0xdfb10018
    ctx->pc = 0x167904u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x167908: 0xdfb20020
    ctx->pc = 0x167908u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16790c: 0xdfb30028
    ctx->pc = 0x16790cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x167910: 0xdfbf0030
    ctx->pc = 0x167910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167914: 0x3e00008
    ctx->pc = 0x167914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167918u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167630u: goto label_167630;
            case 0x167674u: goto label_167674;
            case 0x1676E8u: goto label_1676e8;
            case 0x167768u: goto label_167768;
            case 0x167790u: goto label_167790;
            case 0x1677A4u: goto label_1677a4;
            case 0x1677ACu: goto label_1677ac;
            case 0x1677B8u: goto label_1677b8;
            case 0x1677D0u: goto label_1677d0;
            case 0x1677E4u: goto label_1677e4;
            case 0x1677F4u: goto label_1677f4;
            case 0x1677FCu: goto label_1677fc;
            case 0x167890u: goto label_167890;
            case 0x1678C4u: goto label_1678c4;
            case 0x1678ECu: goto label_1678ec;
            case 0x167900u: goto label_167900;
            case 0x167904u: goto label_167904;
            case 0x167988u: goto label_167988;
            case 0x167A00u: goto label_167a00;
            case 0x167A2Cu: goto label_167a2c;
            case 0x167A40u: goto label_167a40;
            case 0x167A48u: goto label_167a48;
            case 0x167A58u: goto label_167a58;
            case 0x167A74u: goto label_167a74;
            case 0x167A88u: goto label_167a88;
            case 0x167A9Cu: goto label_167a9c;
            case 0x167AA4u: goto label_167aa4;
            case 0x167B38u: goto label_167b38;
            case 0x167B6Cu: goto label_167b6c;
            case 0x167B90u: goto label_167b90;
            case 0x167BA4u: goto label_167ba4;
            case 0x167BA8u: goto label_167ba8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16791Cu;
    // 0x16791c: 0x0
    ctx->pc = 0x16791cu;
    // NOP
    // 0x167920: 0x510c0
    ctx->pc = 0x167920u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 3));
    // 0x167924: 0x27bdffa0
    ctx->pc = 0x167924u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x167928: 0x451023
    ctx->pc = 0x167928u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16792c: 0xffb50038
    ctx->pc = 0x16792cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x167930: 0x21080
    ctx->pc = 0x167930u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x167934: 0xffb00010
    ctx->pc = 0x167934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x167938: 0x451021
    ctx->pc = 0x167938u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16793c: 0xffb10018
    ctx->pc = 0x16793cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x167940: 0xffb20020
    ctx->pc = 0x167940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x167944: 0x24871140
    ctx->pc = 0x167944u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 4), 4416));
    // 0x167948: 0xffb30028
    ctx->pc = 0x167948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x16794c: 0x21080
    ctx->pc = 0x16794cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x167950: 0xffb40030
    ctx->pc = 0x167950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x167954: 0xe23821
    ctx->pc = 0x167954u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x167958: 0xffb60040
    ctx->pc = 0x167958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x16795c: 0xffb70048
    ctx->pc = 0x16795cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x167960: 0xffbe0050
    ctx->pc = 0x167960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x167964: 0xffbf0058
    ctx->pc = 0x167964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x167968: 0x8ce30004
    ctx->pc = 0x167968u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x16796c: 0x14600006
    ctx->pc = 0x16796Cu;
    {
        const bool branch_taken_0x16796c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x167970u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16796c) {
            ctx->pc = 0x167988u;
            goto label_167988;
        }
    }
    ctx->pc = 0x167974u;
    // 0x167974: 0x3c05ff00
    ctx->pc = 0x167974u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x167978: 0xc05a704
    ctx->pc = 0x167978u;
    SET_GPR_U32(ctx, 31, 0x167980u);
    ctx->pc = 0x16797Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1025));
    ctx->pc = 0x169C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169C10_0x169c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167980u; }
    }
    if (ctx->pc != 0x167980u) { return; }
    ctx->pc = 0x167980u;
    // 0x167980: 0x10000048
    ctx->pc = 0x167980u;
    {
        const bool branch_taken_0x167980 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x167984u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x167980) {
            ctx->pc = 0x167AA4u;
            goto label_167aa4;
        }
    }
    ctx->pc = 0x167988u;
label_167988:
    // 0x167988: 0x24f00010
    ctx->pc = 0x167988u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 7), 16));
    // 0x16798c: 0xc05a7b2
    ctx->pc = 0x16798Cu;
    SET_GPR_U32(ctx, 31, 0x167994u);
    ctx->pc = 0x167990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169EC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EC8_0x169ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167994u; }
    }
    if (ctx->pc != 0x167994u) { return; }
    ctx->pc = 0x167994u;
    // 0x167994: 0x8e140008
    ctx->pc = 0x167994u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x167998: 0x8e02001c
    ctx->pc = 0x167998u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x16799c: 0x3a0202d
    ctx->pc = 0x16799cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1679a0: 0x8e13002c
    ctx->pc = 0x1679a0u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1679a4: 0x8e110028
    ctx->pc = 0x1679a4u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1679a8: 0x8e16000c
    ctx->pc = 0x1679a8u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1679ac: 0x8e120010
    ctx->pc = 0x1679acu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1679b0: 0x8e170014
    ctx->pc = 0x1679b0u;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1679b4: 0x8e1e0018
    ctx->pc = 0x1679b4u;
    SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1679b8: 0xafa20004
    ctx->pc = 0x1679b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1679bc: 0x8e030020
    ctx->pc = 0x1679bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1679c0: 0xafa30008
    ctx->pc = 0x1679c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1679c4: 0xc05a7b8
    ctx->pc = 0x1679C4u;
    SET_GPR_U32(ctx, 31, 0x1679CCu);
    ctx->pc = 0x1679C8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x169EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EE0_0x169ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1679CCu; }
    }
    if (ctx->pc != 0x1679CCu) { return; }
    ctx->pc = 0x1679CCu;
    // 0x1679cc: 0x271102a
    ctx->pc = 0x1679ccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 17)));
    // 0x1679d0: 0xaeb40000
    ctx->pc = 0x1679d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
    // 0x1679d4: 0xaeb20008
    ctx->pc = 0x1679d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 18));
    // 0x1679d8: 0xaeb60004
    ctx->pc = 0x1679d8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 22));
    // 0x1679dc: 0xaeb10024
    ctx->pc = 0x1679dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 17));
    // 0x1679e0: 0x14400007
    ctx->pc = 0x1679E0u;
    {
        const bool branch_taken_0x1679e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1679E4u;
        WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 19));
        if (branch_taken_0x1679e0) {
            ctx->pc = 0x167A00u;
            goto label_167a00;
        }
    }
    ctx->pc = 0x1679E8u;
    // 0x1679e8: 0xaea00020
    ctx->pc = 0x1679e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 0));
    // 0x1679ec: 0xaea0000c
    ctx->pc = 0x1679ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
    // 0x1679f0: 0xaea00014
    ctx->pc = 0x1679f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 0));
    // 0x1679f4: 0x10000014
    ctx->pc = 0x1679F4u;
    {
        const bool branch_taken_0x1679f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1679F8u;
        WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 0));
        if (branch_taken_0x1679f4) {
            ctx->pc = 0x167A48u;
            goto label_167a48;
        }
    }
    ctx->pc = 0x1679FCu;
    // 0x1679fc: 0x0
    ctx->pc = 0x1679fcu;
    // NOP
label_167a00:
    // 0x167a00: 0x8fa30008
    ctx->pc = 0x167a00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x167a04: 0x203102a
    ctx->pc = 0x167a04u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x167a08: 0x50400013
    ctx->pc = 0x167A08u;
    {
        const bool branch_taken_0x167a08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x167a08) {
            ctx->pc = 0x167A0Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->pc = 0x167A58u;
            goto label_167a58;
        }
    }
    ctx->pc = 0x167A10u;
    // 0x167a10: 0x701023
    ctx->pc = 0x167a10u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x167a14: 0x2ac30009
    ctx->pc = 0x167a14u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 22), 9));
    // 0x167a18: 0xaea2000c
    ctx->pc = 0x167a18u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    // 0x167a1c: 0x14600003
    ctx->pc = 0x167A1Cu;
    {
        const bool branch_taken_0x167a1c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x167A20u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        if (branch_taken_0x167a1c) {
            ctx->pc = 0x167A2Cu;
            goto label_167a2c;
        }
    }
    ctx->pc = 0x167A24u;
    // 0x167a24: 0x101040
    ctx->pc = 0x167a24u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 1));
    // 0x167a28: 0x2e21021
    ctx->pc = 0x167a28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_167a2c:
    // 0x167a2c: 0xaea20014
    ctx->pc = 0x167a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
    // 0x167a30: 0x14600003
    ctx->pc = 0x167A30u;
    {
        const bool branch_taken_0x167a30 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x167A34u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
        if (branch_taken_0x167a30) {
            ctx->pc = 0x167A40u;
            goto label_167a40;
        }
    }
    ctx->pc = 0x167A38u;
    // 0x167a38: 0x101040
    ctx->pc = 0x167a38u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 1));
    // 0x167a3c: 0x3c21021
    ctx->pc = 0x167a3cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_167a40:
    // 0x167a40: 0xaea20018
    ctx->pc = 0x167a40u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
    // 0x167a44: 0xaea00020
    ctx->pc = 0x167a44u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 0));
label_167a48:
    // 0x167a48: 0xaea00010
    ctx->pc = 0x167a48u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
    // 0x167a4c: 0x10000013
    ctx->pc = 0x167A4Cu;
    {
        const bool branch_taken_0x167a4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x167A50u;
        WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 0));
        if (branch_taken_0x167a4c) {
            ctx->pc = 0x167A9Cu;
            goto label_167a9c;
        }
    }
    ctx->pc = 0x167A54u;
    // 0x167a54: 0x0
    ctx->pc = 0x167a54u;
    // NOP
label_167a58:
    // 0x167a58: 0x701023
    ctx->pc = 0x167a58u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x167a5c: 0x2ac30009
    ctx->pc = 0x167a5cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 22), 9));
    // 0x167a60: 0xaea2000c
    ctx->pc = 0x167a60u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    // 0x167a64: 0x14600003
    ctx->pc = 0x167A64u;
    {
        const bool branch_taken_0x167a64 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x167A68u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        if (branch_taken_0x167a64) {
            ctx->pc = 0x167A74u;
            goto label_167a74;
        }
    }
    ctx->pc = 0x167A6Cu;
    // 0x167a6c: 0x101040
    ctx->pc = 0x167a6cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 1));
    // 0x167a70: 0x2e21021
    ctx->pc = 0x167a70u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_167a74:
    // 0x167a74: 0xaea20014
    ctx->pc = 0x167a74u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
    // 0x167a78: 0x14600003
    ctx->pc = 0x167A78u;
    {
        const bool branch_taken_0x167a78 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x167A7Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
        if (branch_taken_0x167a78) {
            ctx->pc = 0x167A88u;
            goto label_167a88;
        }
    }
    ctx->pc = 0x167A80u;
    // 0x167a80: 0x101040
    ctx->pc = 0x167a80u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 1));
    // 0x167a84: 0x3c21021
    ctx->pc = 0x167a84u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_167a88:
    // 0x167a88: 0xaebe0020
    ctx->pc = 0x167a88u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 30));
    // 0x167a8c: 0xaea20018
    ctx->pc = 0x167a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
    // 0x167a90: 0x8fa20008
    ctx->pc = 0x167a90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x167a94: 0xaeb7001c
    ctx->pc = 0x167a94u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 23));
    // 0x167a98: 0xaea20010
    ctx->pc = 0x167a98u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
label_167a9c:
    // 0x167a9c: 0x102d
    ctx->pc = 0x167a9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167aa0: 0xdfb00010
    ctx->pc = 0x167aa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_167aa4:
    // 0x167aa4: 0xdfb10018
    ctx->pc = 0x167aa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x167aa8: 0xdfb20020
    ctx->pc = 0x167aa8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167aac: 0xdfb30028
    ctx->pc = 0x167aacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x167ab0: 0xdfb40030
    ctx->pc = 0x167ab0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167ab4: 0xdfb50038
    ctx->pc = 0x167ab4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x167ab8: 0xdfb60040
    ctx->pc = 0x167ab8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x167abc: 0xdfb70048
    ctx->pc = 0x167abcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x167ac0: 0xdfbe0050
    ctx->pc = 0x167ac0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x167ac4: 0xdfbf0058
    ctx->pc = 0x167ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x167ac8: 0x3e00008
    ctx->pc = 0x167AC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167ACCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167630u: goto label_167630;
            case 0x167674u: goto label_167674;
            case 0x1676E8u: goto label_1676e8;
            case 0x167768u: goto label_167768;
            case 0x167790u: goto label_167790;
            case 0x1677A4u: goto label_1677a4;
            case 0x1677ACu: goto label_1677ac;
            case 0x1677B8u: goto label_1677b8;
            case 0x1677D0u: goto label_1677d0;
            case 0x1677E4u: goto label_1677e4;
            case 0x1677F4u: goto label_1677f4;
            case 0x1677FCu: goto label_1677fc;
            case 0x167890u: goto label_167890;
            case 0x1678C4u: goto label_1678c4;
            case 0x1678ECu: goto label_1678ec;
            case 0x167900u: goto label_167900;
            case 0x167904u: goto label_167904;
            case 0x167988u: goto label_167988;
            case 0x167A00u: goto label_167a00;
            case 0x167A2Cu: goto label_167a2c;
            case 0x167A40u: goto label_167a40;
            case 0x167A48u: goto label_167a48;
            case 0x167A58u: goto label_167a58;
            case 0x167A74u: goto label_167a74;
            case 0x167A88u: goto label_167a88;
            case 0x167A9Cu: goto label_167a9c;
            case 0x167AA4u: goto label_167aa4;
            case 0x167B38u: goto label_167b38;
            case 0x167B6Cu: goto label_167b6c;
            case 0x167B90u: goto label_167b90;
            case 0x167BA4u: goto label_167ba4;
            case 0x167BA8u: goto label_167ba8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x167AD0u;
    // 0x167ad0: 0x518c0
    ctx->pc = 0x167ad0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x167ad4: 0x27bdffc0
    ctx->pc = 0x167ad4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x167ad8: 0x651823
    ctx->pc = 0x167ad8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x167adc: 0xffb20020
    ctx->pc = 0x167adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x167ae0: 0x31880
    ctx->pc = 0x167ae0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x167ae4: 0x80902d
    ctx->pc = 0x167ae4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167ae8: 0x651821
    ctx->pc = 0x167ae8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x167aec: 0xffb10018
    ctx->pc = 0x167aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x167af0: 0x31880
    ctx->pc = 0x167af0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x167af4: 0xc0882d
    ctx->pc = 0x167af4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167af8: 0x26461140
    ctx->pc = 0x167af8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 4416));
    // 0x167afc: 0xffb30028
    ctx->pc = 0x167afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x167b00: 0xffb00010
    ctx->pc = 0x167b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x167b04: 0x102d
    ctx->pc = 0x167b04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167b08: 0xffbf0030
    ctx->pc = 0x167b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x167b0c: 0x982d
    ctx->pc = 0x167b0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167b10: 0x12200024
    ctx->pc = 0x167B10u;
    {
        const bool branch_taken_0x167b10 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x167B14u;
        SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        if (branch_taken_0x167b10) {
            ctx->pc = 0x167BA4u;
            goto label_167ba4;
        }
    }
    ctx->pc = 0x167B18u;
    // 0x167b18: 0x8cc20004
    ctx->pc = 0x167b18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x167b1c: 0x54400006
    ctx->pc = 0x167B1Cu;
    {
        const bool branch_taken_0x167b1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x167b1c) {
            ctx->pc = 0x167B20u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 6), 16));
            ctx->pc = 0x167B38u;
            goto label_167b38;
        }
    }
    ctx->pc = 0x167B24u;
    // 0x167b24: 0x3c05ff00
    ctx->pc = 0x167b24u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x167b28: 0xc05a704
    ctx->pc = 0x167B28u;
    SET_GPR_U32(ctx, 31, 0x167B30u);
    ctx->pc = 0x167B2Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1025));
    ctx->pc = 0x169C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169C10_0x169c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167B30u; }
    }
    if (ctx->pc != 0x167B30u) { return; }
    ctx->pc = 0x167B30u;
    // 0x167b30: 0x1000001d
    ctx->pc = 0x167B30u;
    {
        const bool branch_taken_0x167b30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x167B34u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x167b30) {
            ctx->pc = 0x167BA8u;
            goto label_167ba8;
        }
    }
    ctx->pc = 0x167B38u;
label_167b38:
    // 0x167b38: 0xc05a7b2
    ctx->pc = 0x167B38u;
    SET_GPR_U32(ctx, 31, 0x167B40u);
    ctx->pc = 0x167B3Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169EC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EC8_0x169ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167B40u; }
    }
    if (ctx->pc != 0x167B40u) { return; }
    ctx->pc = 0x167B40u;
    // 0x167b40: 0x240202d
    ctx->pc = 0x167b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167b44: 0x8e020024
    ctx->pc = 0x167b44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x167b48: 0x3c05ff00
    ctx->pc = 0x167b48u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x167b4c: 0x8e03001c
    ctx->pc = 0x167b4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x167b50: 0x34a50407
    ctx->pc = 0x167b50u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1031));
    // 0x167b54: 0x511021
    ctx->pc = 0x167b54u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x167b58: 0x433023
    ctx->pc = 0x167b58u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x167b5c: 0x43182a
    ctx->pc = 0x167b5cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x167b60: 0x14600002
    ctx->pc = 0x167B60u;
    {
        const bool branch_taken_0x167b60 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x167B64u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        if (branch_taken_0x167b60) {
            ctx->pc = 0x167B6Cu;
            goto label_167b6c;
        }
    }
    ctx->pc = 0x167B68u;
    // 0x167b68: 0xae060024
    ctx->pc = 0x167b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 6));
label_167b6c:
    // 0x167b6c: 0x8e02002c
    ctx->pc = 0x167b6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x167b70: 0x8e030028
    ctx->pc = 0x167b70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x167b74: 0x511021
    ctx->pc = 0x167b74u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x167b78: 0x62182a
    ctx->pc = 0x167b78u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x167b7c: 0x10600004
    ctx->pc = 0x167B7Cu;
    {
        const bool branch_taken_0x167b7c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x167B80u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        if (branch_taken_0x167b7c) {
            ctx->pc = 0x167B90u;
            goto label_167b90;
        }
    }
    ctx->pc = 0x167B84u;
    // 0x167b84: 0xc05a704
    ctx->pc = 0x167B84u;
    SET_GPR_U32(ctx, 31, 0x167B8Cu);
    ctx->pc = 0x169C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169C10_0x169c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167B8Cu; }
    }
    if (ctx->pc != 0x167B8Cu) { return; }
    ctx->pc = 0x167B8Cu;
    // 0x167b8c: 0x40982d
    ctx->pc = 0x167b8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_167b90:
    // 0x167b90: 0x24020001
    ctx->pc = 0x167b90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x167b94: 0x3a0202d
    ctx->pc = 0x167b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167b98: 0xc05a7b8
    ctx->pc = 0x167B98u;
    SET_GPR_U32(ctx, 31, 0x167BA0u);
    ctx->pc = 0x167B9Cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
    ctx->pc = 0x169EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EE0_0x169ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167BA0u; }
    }
    if (ctx->pc != 0x167BA0u) { return; }
    ctx->pc = 0x167BA0u;
    // 0x167ba0: 0x260102d
    ctx->pc = 0x167ba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_167ba4:
    // 0x167ba4: 0xdfb00010
    ctx->pc = 0x167ba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_167ba8:
    // 0x167ba8: 0xdfb10018
    ctx->pc = 0x167ba8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x167bac: 0xdfb20020
    ctx->pc = 0x167bacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167bb0: 0xdfb30028
    ctx->pc = 0x167bb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x167bb4: 0xdfbf0030
    ctx->pc = 0x167bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167bb8: 0x3e00008
    ctx->pc = 0x167BB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167BBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167630u: goto label_167630;
            case 0x167674u: goto label_167674;
            case 0x1676E8u: goto label_1676e8;
            case 0x167768u: goto label_167768;
            case 0x167790u: goto label_167790;
            case 0x1677A4u: goto label_1677a4;
            case 0x1677ACu: goto label_1677ac;
            case 0x1677B8u: goto label_1677b8;
            case 0x1677D0u: goto label_1677d0;
            case 0x1677E4u: goto label_1677e4;
            case 0x1677F4u: goto label_1677f4;
            case 0x1677FCu: goto label_1677fc;
            case 0x167890u: goto label_167890;
            case 0x1678C4u: goto label_1678c4;
            case 0x1678ECu: goto label_1678ec;
            case 0x167900u: goto label_167900;
            case 0x167904u: goto label_167904;
            case 0x167988u: goto label_167988;
            case 0x167A00u: goto label_167a00;
            case 0x167A2Cu: goto label_167a2c;
            case 0x167A40u: goto label_167a40;
            case 0x167A48u: goto label_167a48;
            case 0x167A58u: goto label_167a58;
            case 0x167A74u: goto label_167a74;
            case 0x167A88u: goto label_167a88;
            case 0x167A9Cu: goto label_167a9c;
            case 0x167AA4u: goto label_167aa4;
            case 0x167B38u: goto label_167b38;
            case 0x167B6Cu: goto label_167b6c;
            case 0x167B90u: goto label_167b90;
            case 0x167BA4u: goto label_167ba4;
            case 0x167BA8u: goto label_167ba8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x167BC0u;
    // 0x167bc0: 0x3e00008
    ctx->pc = 0x167BC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167BC4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167630u: goto label_167630;
            case 0x167674u: goto label_167674;
            case 0x1676E8u: goto label_1676e8;
            case 0x167768u: goto label_167768;
            case 0x167790u: goto label_167790;
            case 0x1677A4u: goto label_1677a4;
            case 0x1677ACu: goto label_1677ac;
            case 0x1677B8u: goto label_1677b8;
            case 0x1677D0u: goto label_1677d0;
            case 0x1677E4u: goto label_1677e4;
            case 0x1677F4u: goto label_1677f4;
            case 0x1677FCu: goto label_1677fc;
            case 0x167890u: goto label_167890;
            case 0x1678C4u: goto label_1678c4;
            case 0x1678ECu: goto label_1678ec;
            case 0x167900u: goto label_167900;
            case 0x167904u: goto label_167904;
            case 0x167988u: goto label_167988;
            case 0x167A00u: goto label_167a00;
            case 0x167A2Cu: goto label_167a2c;
            case 0x167A40u: goto label_167a40;
            case 0x167A48u: goto label_167a48;
            case 0x167A58u: goto label_167a58;
            case 0x167A74u: goto label_167a74;
            case 0x167A88u: goto label_167a88;
            case 0x167A9Cu: goto label_167a9c;
            case 0x167AA4u: goto label_167aa4;
            case 0x167B38u: goto label_167b38;
            case 0x167B6Cu: goto label_167b6c;
            case 0x167B90u: goto label_167b90;
            case 0x167BA4u: goto label_167ba4;
            case 0x167BA8u: goto label_167ba8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x167BC8u;
    // 0x167bc8: 0x24020001
    ctx->pc = 0x167bc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x167bcc: 0xac820044
    ctx->pc = 0x167bccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
    // 0x167bd0: 0x3e00008
    ctx->pc = 0x167BD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167BD4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167630u: goto label_167630;
            case 0x167674u: goto label_167674;
            case 0x1676E8u: goto label_1676e8;
            case 0x167768u: goto label_167768;
            case 0x167790u: goto label_167790;
            case 0x1677A4u: goto label_1677a4;
            case 0x1677ACu: goto label_1677ac;
            case 0x1677B8u: goto label_1677b8;
            case 0x1677D0u: goto label_1677d0;
            case 0x1677E4u: goto label_1677e4;
            case 0x1677F4u: goto label_1677f4;
            case 0x1677FCu: goto label_1677fc;
            case 0x167890u: goto label_167890;
            case 0x1678C4u: goto label_1678c4;
            case 0x1678ECu: goto label_1678ec;
            case 0x167900u: goto label_167900;
            case 0x167904u: goto label_167904;
            case 0x167988u: goto label_167988;
            case 0x167A00u: goto label_167a00;
            case 0x167A2Cu: goto label_167a2c;
            case 0x167A40u: goto label_167a40;
            case 0x167A48u: goto label_167a48;
            case 0x167A58u: goto label_167a58;
            case 0x167A74u: goto label_167a74;
            case 0x167A88u: goto label_167a88;
            case 0x167A9Cu: goto label_167a9c;
            case 0x167AA4u: goto label_167aa4;
            case 0x167B38u: goto label_167b38;
            case 0x167B6Cu: goto label_167b6c;
            case 0x167B90u: goto label_167b90;
            case 0x167BA4u: goto label_167ba4;
            case 0x167BA8u: goto label_167ba8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x167BD8u;
}
