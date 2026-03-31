#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_129610
// Address: 0x129610 - 0x1297a0
void entry_129610_0x1297a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x129610u;

label_129610:
    // 0x129610: 0x27bdffd0
    ctx->pc = 0x129610u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_129614:
    // 0x129614: 0xffb00000
    ctx->pc = 0x129614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_129618:
    // 0x129618: 0x80802d
    ctx->pc = 0x129618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12961c:
    // 0x12961c: 0xffb30018
    ctx->pc = 0x12961cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_129620:
    // 0x129620: 0xc0982d
    ctx->pc = 0x129620u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_129624:
    // 0x129624: 0xffb40020
    ctx->pc = 0x129624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_129628:
    // 0x129628: 0xa0a02d
    ctx->pc = 0x129628u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12962c:
    // 0x12962c: 0x24040004
    ctx->pc = 0x12962cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
label_129630:
    // 0x129630: 0x200302d
    ctx->pc = 0x129630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_129634:
    // 0x129634: 0x282d
    ctx->pc = 0x129634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_129638:
    // 0x129638: 0x280382d
    ctx->pc = 0x129638u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12963c:
    // 0x12963c: 0xffb10008
    ctx->pc = 0x12963cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_129640:
    // 0x129640: 0xffb20010
    ctx->pc = 0x129640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_129644:
    // 0x129644: 0xffbf0028
    ctx->pc = 0x129644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_129648:
    // 0x129648: 0xc04a13e
label_12964c:
    if (ctx->pc == 0x12964Cu) {
        ctx->pc = 0x12964Cu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x129650u;
        goto label_129650;
    }
    ctx->pc = 0x129648u;
    SET_GPR_U32(ctx, 31, 0x129650u);
    ctx->pc = 0x12964Cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1284F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001284F8_0x1284f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129650u; }
    }
    if (ctx->pc != 0x129650u) { return; }
    ctx->pc = 0x129650u;
label_129650:
    // 0x129650: 0x16000003
label_129654:
    if (ctx->pc == 0x129654u) {
        ctx->pc = 0x129654u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        ctx->pc = 0x129658u;
        goto label_129658;
    }
    ctx->pc = 0x129650u;
    {
        const bool branch_taken_0x129650 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x129654u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x129650) {
            ctx->pc = 0x129660u;
            goto label_129660;
        }
    }
    ctx->pc = 0x129658u;
label_129658:
    // 0x129658: 0x10000009
label_12965c:
    if (ctx->pc == 0x12965Cu) {
        ctx->pc = 0x12965Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942576));
        ctx->pc = 0x129660u;
        goto label_129660;
    }
    ctx->pc = 0x129658u;
    {
        const bool branch_taken_0x129658 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12965Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942576));
        if (branch_taken_0x129658) {
            ctx->pc = 0x129680u;
            goto label_129680;
        }
    }
    ctx->pc = 0x129660u;
label_129660:
    // 0x129660: 0x6810003
label_129664:
    if (ctx->pc == 0x129664u) {
        ctx->pc = 0x129664u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        ctx->pc = 0x129668u;
        goto label_129668;
    }
    ctx->pc = 0x129660u;
    {
        const bool branch_taken_0x129660 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x129664u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x129660) {
            ctx->pc = 0x129670u;
            goto label_129670;
        }
    }
    ctx->pc = 0x129668u;
label_129668:
    // 0x129668: 0x10000005
label_12966c:
    if (ctx->pc == 0x12966Cu) {
        ctx->pc = 0x12966Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942616));
        ctx->pc = 0x129670u;
        goto label_129670;
    }
    ctx->pc = 0x129668u;
    {
        const bool branch_taken_0x129668 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12966Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942616));
        if (branch_taken_0x129668) {
            ctx->pc = 0x129680u;
            goto label_129680;
        }
    }
    ctx->pc = 0x129670u;
label_129670:
    // 0x129670: 0x56600007
label_129674:
    if (ctx->pc == 0x129674u) {
        ctx->pc = 0x129674u;
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->pc = 0x129678u;
        goto label_129678;
    }
    ctx->pc = 0x129670u;
    {
        const bool branch_taken_0x129670 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        if (branch_taken_0x129670) {
            ctx->pc = 0x129674u;
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
            ctx->pc = 0x129690u;
            goto label_129690;
        }
    }
    ctx->pc = 0x129678u;
label_129678:
    // 0x129678: 0x3c040024
    ctx->pc = 0x129678u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_12967c:
    // 0x12967c: 0x24849fc8
    ctx->pc = 0x12967cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942664));
label_129680:
    // 0x129680: 0xc04a034
label_129684:
    if (ctx->pc == 0x129684u) {
        ctx->pc = 0x129688u;
        goto label_129688;
    }
    ctx->pc = 0x129680u;
    SET_GPR_U32(ctx, 31, 0x129688u);
    ctx->pc = 0x1280D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001280D0_0x1280d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129688u; }
    }
    if (ctx->pc != 0x129688u) { return; }
    ctx->pc = 0x129688u;
label_129688:
    // 0x129688: 0x1000003c
label_12968c:
    if (ctx->pc == 0x12968Cu) {
        ctx->pc = 0x12968Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x129690u;
        goto label_129690;
    }
    ctx->pc = 0x129688u;
    {
        const bool branch_taken_0x129688 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12968Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x129688) {
            ctx->pc = 0x12977Cu;
            goto label_12977c;
        }
    }
    ctx->pc = 0x129690u;
label_129690:
    // 0x129690: 0x24030002
    ctx->pc = 0x129690u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_129694:
    // 0x129694: 0x10830039
label_129698:
    if (ctx->pc == 0x129698u) {
        ctx->pc = 0x129698u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12969Cu;
        goto label_12969c;
    }
    ctx->pc = 0x129694u;
    {
        const bool branch_taken_0x129694 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x129698u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x129694) {
            ctx->pc = 0x12977Cu;
            goto label_12977c;
        }
    }
    ctx->pc = 0x12969Cu;
label_12969c:
    // 0x12969c: 0x8e020008
    ctx->pc = 0x12969cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1296a0:
    // 0x1296a0: 0x10400005
label_1296a4:
    if (ctx->pc == 0x1296A4u) {
        ctx->pc = 0x1296A4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        ctx->pc = 0x1296A8u;
        goto label_1296a8;
    }
    ctx->pc = 0x1296A0u;
    {
        const bool branch_taken_0x1296a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1296A4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x1296a0) {
            ctx->pc = 0x1296B8u;
            goto label_1296b8;
        }
    }
    ctx->pc = 0x1296A8u;
label_1296a8:
    // 0x1296a8: 0xc04a034
label_1296ac:
    if (ctx->pc == 0x1296ACu) {
        ctx->pc = 0x1296ACu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942704));
        ctx->pc = 0x1296B0u;
        goto label_1296b0;
    }
    ctx->pc = 0x1296A8u;
    SET_GPR_U32(ctx, 31, 0x1296B0u);
    ctx->pc = 0x1296ACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942704));
    ctx->pc = 0x1280D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001280D0_0x1280d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1296B0u; }
    }
    if (ctx->pc != 0x1296B0u) { return; }
    ctx->pc = 0x1296B0u;
label_1296b0:
    // 0x1296b0: 0x10000032
label_1296b4:
    if (ctx->pc == 0x1296B4u) {
        ctx->pc = 0x1296B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1296B8u;
        goto label_1296b8;
    }
    ctx->pc = 0x1296B0u;
    {
        const bool branch_taken_0x1296b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1296B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1296b0) {
            ctx->pc = 0x12977Cu;
            goto label_12977c;
        }
    }
    ctx->pc = 0x1296B8u;
label_1296b8:
    // 0x1296b8: 0x1492c0
    ctx->pc = 0x1296b8u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 20), 11));
label_1296bc:
    // 0x1296bc: 0x260202d
    ctx->pc = 0x1296bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1296c0:
    // 0x1296c0: 0x240282d
    ctx->pc = 0x1296c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1296c4:
    // 0x1296c4: 0xc04fe2a
label_1296c8:
    if (ctx->pc == 0x1296C8u) {
        ctx->pc = 0x1296C8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1296CCu;
        goto label_1296cc;
    }
    ctx->pc = 0x1296C4u;
    SET_GPR_U32(ctx, 31, 0x1296CCu);
    ctx->pc = 0x1296C8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13F8A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F8A8_0x13f8a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1296CCu; }
    }
    if (ctx->pc != 0x1296CCu) { return; }
    ctx->pc = 0x1296CCu;
label_1296cc:
    // 0x1296cc: 0x40882d
    ctx->pc = 0x1296ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1296d0:
    // 0x1296d0: 0x1220002a
label_1296d4:
    if (ctx->pc == 0x1296D4u) {
        ctx->pc = 0x1296D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x1296D8u;
        goto label_1296d8;
    }
    ctx->pc = 0x1296D0u;
    {
        const bool branch_taken_0x1296d0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x1296D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x1296d0) {
            ctx->pc = 0x12977Cu;
            goto label_12977c;
        }
    }
    ctx->pc = 0x1296D8u;
label_1296d8:
    // 0x1296d8: 0xc049938
label_1296dc:
    if (ctx->pc == 0x1296DCu) {
        ctx->pc = 0x1296E0u;
        goto label_1296e0;
    }
    ctx->pc = 0x1296D8u;
    SET_GPR_U32(ctx, 31, 0x1296E0u);
    ctx->pc = 0x1264E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001264E0_0x1264e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1296E0u; }
    }
    if (ctx->pc != 0x1296E0u) { return; }
    ctx->pc = 0x1296E0u;
label_1296e0:
    // 0x1296e0: 0xae130024
    ctx->pc = 0x1296e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 19));
label_1296e4:
    // 0x1296e4: 0xae110008
    ctx->pc = 0x1296e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
label_1296e8:
    // 0x1296e8: 0x3c040021
    ctx->pc = 0x1296e8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)33 << 16));
label_1296ec:
    // 0x1296ec: 0xae120028
    ctx->pc = 0x1296ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 18));
label_1296f0:
    // 0x1296f0: 0x24030001
    ctx->pc = 0x1296f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1296f4:
    // 0x1296f4: 0x8c82d100
    ctx->pc = 0x1296f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294955264)));
label_1296f8:
    // 0x1296f8: 0x14430003
label_1296fc:
    if (ctx->pc == 0x1296FCu) {
        ctx->pc = 0x1296FCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x129700u;
        goto label_129700;
    }
    ctx->pc = 0x1296F8u;
    {
        const bool branch_taken_0x1296f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1296FCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1296f8) {
            ctx->pc = 0x129708u;
            goto label_129708;
        }
    }
    ctx->pc = 0x129700u;
label_129700:
    // 0x129700: 0xc04a0ca
label_129704:
    if (ctx->pc == 0x129704u) {
        ctx->pc = 0x129704u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x129708u;
        goto label_129708;
    }
    ctx->pc = 0x129700u;
    SET_GPR_U32(ctx, 31, 0x129708u);
    ctx->pc = 0x129704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x128328u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00128328_0x128328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129708u; }
    }
    if (ctx->pc != 0x129708u) { return; }
    ctx->pc = 0x129708u;
label_129708:
    // 0x129708: 0xc04993e
label_12970c:
    if (ctx->pc == 0x12970Cu) {
        ctx->pc = 0x129710u;
        goto label_129710;
    }
    ctx->pc = 0x129708u;
    SET_GPR_U32(ctx, 31, 0x129710u);
    ctx->pc = 0x1264F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001264F8_0x1264f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129710u; }
    }
    if (ctx->pc != 0x129710u) { return; }
    ctx->pc = 0x129710u;
label_129710:
    // 0x129710: 0x200202d
    ctx->pc = 0x129710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_129714:
    // 0x129714: 0x8e060008
    ctx->pc = 0x129714u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_129718:
    // 0x129718: 0xc04a51a
label_12971c:
    if (ctx->pc == 0x12971Cu) {
        ctx->pc = 0x12971Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x129720u;
        goto label_129720;
    }
    ctx->pc = 0x129718u;
    SET_GPR_U32(ctx, 31, 0x129720u);
    ctx->pc = 0x12971Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129468u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00129468_0x129468(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129720u; }
    }
    if (ctx->pc != 0x129720u) { return; }
    ctx->pc = 0x129720u;
label_129720:
    // 0x129720: 0x40882d
    ctx->pc = 0x129720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_129724:
    // 0x129724: 0x5e20000e
label_129728:
    if (ctx->pc == 0x129728u) {
        ctx->pc = 0x129728u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x12972Cu;
        goto label_12972c;
    }
    ctx->pc = 0x129724u;
    {
        const bool branch_taken_0x129724 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x129724) {
            ctx->pc = 0x129728u;
            WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x129760u;
            goto label_129760;
        }
    }
    ctx->pc = 0x12972Cu;
label_12972c:
    // 0x12972c: 0xc049938
label_129730:
    if (ctx->pc == 0x129730u) {
        ctx->pc = 0x129734u;
        goto label_129734;
    }
    ctx->pc = 0x12972Cu;
    SET_GPR_U32(ctx, 31, 0x129734u);
    ctx->pc = 0x1264E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001264E0_0x1264e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129734u; }
    }
    if (ctx->pc != 0x129734u) { return; }
    ctx->pc = 0x129734u;
label_129734:
    // 0x129734: 0x8e040008
    ctx->pc = 0x129734u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_129738:
    // 0x129738: 0x10800006
label_12973c:
    if (ctx->pc == 0x12973Cu) {
        ctx->pc = 0x129740u;
        goto label_129740;
    }
    ctx->pc = 0x129738u;
    {
        const bool branch_taken_0x129738 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x129738) {
            ctx->pc = 0x129754u;
            goto label_129754;
        }
    }
    ctx->pc = 0x129740u;
label_129740:
    // 0x129740: 0x8c830000
    ctx->pc = 0x129740u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_129744:
    // 0x129744: 0x8c62000c
    ctx->pc = 0x129744u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_129748:
    // 0x129748: 0x40f809
label_12974c:
    if (ctx->pc == 0x12974Cu) {
        ctx->pc = 0x129750u;
        goto label_129750;
    }
    ctx->pc = 0x129748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x129750u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x129610u: goto label_129610;
            case 0x129614u: goto label_129614;
            case 0x129618u: goto label_129618;
            case 0x12961Cu: goto label_12961c;
            case 0x129620u: goto label_129620;
            case 0x129624u: goto label_129624;
            case 0x129628u: goto label_129628;
            case 0x12962Cu: goto label_12962c;
            case 0x129630u: goto label_129630;
            case 0x129634u: goto label_129634;
            case 0x129638u: goto label_129638;
            case 0x12963Cu: goto label_12963c;
            case 0x129640u: goto label_129640;
            case 0x129644u: goto label_129644;
            case 0x129648u: goto label_129648;
            case 0x12964Cu: goto label_12964c;
            case 0x129650u: goto label_129650;
            case 0x129654u: goto label_129654;
            case 0x129658u: goto label_129658;
            case 0x12965Cu: goto label_12965c;
            case 0x129660u: goto label_129660;
            case 0x129664u: goto label_129664;
            case 0x129668u: goto label_129668;
            case 0x12966Cu: goto label_12966c;
            case 0x129670u: goto label_129670;
            case 0x129674u: goto label_129674;
            case 0x129678u: goto label_129678;
            case 0x12967Cu: goto label_12967c;
            case 0x129680u: goto label_129680;
            case 0x129684u: goto label_129684;
            case 0x129688u: goto label_129688;
            case 0x12968Cu: goto label_12968c;
            case 0x129690u: goto label_129690;
            case 0x129694u: goto label_129694;
            case 0x129698u: goto label_129698;
            case 0x12969Cu: goto label_12969c;
            case 0x1296A0u: goto label_1296a0;
            case 0x1296A4u: goto label_1296a4;
            case 0x1296A8u: goto label_1296a8;
            case 0x1296ACu: goto label_1296ac;
            case 0x1296B0u: goto label_1296b0;
            case 0x1296B4u: goto label_1296b4;
            case 0x1296B8u: goto label_1296b8;
            case 0x1296BCu: goto label_1296bc;
            case 0x1296C0u: goto label_1296c0;
            case 0x1296C4u: goto label_1296c4;
            case 0x1296C8u: goto label_1296c8;
            case 0x1296CCu: goto label_1296cc;
            case 0x1296D0u: goto label_1296d0;
            case 0x1296D4u: goto label_1296d4;
            case 0x1296D8u: goto label_1296d8;
            case 0x1296DCu: goto label_1296dc;
            case 0x1296E0u: goto label_1296e0;
            case 0x1296E4u: goto label_1296e4;
            case 0x1296E8u: goto label_1296e8;
            case 0x1296ECu: goto label_1296ec;
            case 0x1296F0u: goto label_1296f0;
            case 0x1296F4u: goto label_1296f4;
            case 0x1296F8u: goto label_1296f8;
            case 0x1296FCu: goto label_1296fc;
            case 0x129700u: goto label_129700;
            case 0x129704u: goto label_129704;
            case 0x129708u: goto label_129708;
            case 0x12970Cu: goto label_12970c;
            case 0x129710u: goto label_129710;
            case 0x129714u: goto label_129714;
            case 0x129718u: goto label_129718;
            case 0x12971Cu: goto label_12971c;
            case 0x129720u: goto label_129720;
            case 0x129724u: goto label_129724;
            case 0x129728u: goto label_129728;
            case 0x12972Cu: goto label_12972c;
            case 0x129730u: goto label_129730;
            case 0x129734u: goto label_129734;
            case 0x129738u: goto label_129738;
            case 0x12973Cu: goto label_12973c;
            case 0x129740u: goto label_129740;
            case 0x129744u: goto label_129744;
            case 0x129748u: goto label_129748;
            case 0x12974Cu: goto label_12974c;
            case 0x129750u: goto label_129750;
            case 0x129754u: goto label_129754;
            case 0x129758u: goto label_129758;
            case 0x12975Cu: goto label_12975c;
            case 0x129760u: goto label_129760;
            case 0x129764u: goto label_129764;
            case 0x129768u: goto label_129768;
            case 0x12976Cu: goto label_12976c;
            case 0x129770u: goto label_129770;
            case 0x129774u: goto label_129774;
            case 0x129778u: goto label_129778;
            case 0x12977Cu: goto label_12977c;
            case 0x129780u: goto label_129780;
            case 0x129784u: goto label_129784;
            case 0x129788u: goto label_129788;
            case 0x12978Cu: goto label_12978c;
            case 0x129790u: goto label_129790;
            case 0x129794u: goto label_129794;
            case 0x129798u: goto label_129798;
            case 0x12979Cu: goto label_12979c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x129750u; }
            if (ctx->pc != 0x129750u) { return; }
        }
    }
    ctx->pc = 0x129750u;
label_129750:
    // 0x129750: 0xae000008
    ctx->pc = 0x129750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_129754:
    // 0x129754: 0xc04993e
label_129758:
    if (ctx->pc == 0x129758u) {
        ctx->pc = 0x12975Cu;
        goto label_12975c;
    }
    ctx->pc = 0x129754u;
    SET_GPR_U32(ctx, 31, 0x12975Cu);
    ctx->pc = 0x1264F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001264F8_0x1264f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12975Cu; }
    }
    if (ctx->pc != 0x12975Cu) { return; }
    ctx->pc = 0x12975Cu;
label_12975c:
    // 0x12975c: 0xa2000002
    ctx->pc = 0x12975cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_129760:
    // 0x129760: 0x200302d
    ctx->pc = 0x129760u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_129764:
    // 0x129764: 0x280382d
    ctx->pc = 0x129764u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_129768:
    // 0x129768: 0x260402d
    ctx->pc = 0x129768u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12976c:
    // 0x12976c: 0x24040004
    ctx->pc = 0x12976cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
label_129770:
    // 0x129770: 0xc04a13e
label_129774:
    if (ctx->pc == 0x129774u) {
        ctx->pc = 0x129774u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x129778u;
        goto label_129778;
    }
    ctx->pc = 0x129770u;
    SET_GPR_U32(ctx, 31, 0x129778u);
    ctx->pc = 0x129774u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1284F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001284F8_0x1284f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129778u; }
    }
    if (ctx->pc != 0x129778u) { return; }
    ctx->pc = 0x129778u;
label_129778:
    // 0x129778: 0x220102d
    ctx->pc = 0x129778u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12977c:
    // 0x12977c: 0xdfb00000
    ctx->pc = 0x12977cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_129780:
    // 0x129780: 0xdfb10008
    ctx->pc = 0x129780u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_129784:
    // 0x129784: 0xdfb20010
    ctx->pc = 0x129784u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_129788:
    // 0x129788: 0xdfb30018
    ctx->pc = 0x129788u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_12978c:
    // 0x12978c: 0xdfb40020
    ctx->pc = 0x12978cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_129790:
    // 0x129790: 0xdfbf0028
    ctx->pc = 0x129790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_129794:
    // 0x129794: 0x3e00008
label_129798:
    if (ctx->pc == 0x129798u) {
        ctx->pc = 0x129798u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x12979Cu;
        goto label_12979c;
    }
    ctx->pc = 0x129794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129798u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x129610u: goto label_129610;
            case 0x129614u: goto label_129614;
            case 0x129618u: goto label_129618;
            case 0x12961Cu: goto label_12961c;
            case 0x129620u: goto label_129620;
            case 0x129624u: goto label_129624;
            case 0x129628u: goto label_129628;
            case 0x12962Cu: goto label_12962c;
            case 0x129630u: goto label_129630;
            case 0x129634u: goto label_129634;
            case 0x129638u: goto label_129638;
            case 0x12963Cu: goto label_12963c;
            case 0x129640u: goto label_129640;
            case 0x129644u: goto label_129644;
            case 0x129648u: goto label_129648;
            case 0x12964Cu: goto label_12964c;
            case 0x129650u: goto label_129650;
            case 0x129654u: goto label_129654;
            case 0x129658u: goto label_129658;
            case 0x12965Cu: goto label_12965c;
            case 0x129660u: goto label_129660;
            case 0x129664u: goto label_129664;
            case 0x129668u: goto label_129668;
            case 0x12966Cu: goto label_12966c;
            case 0x129670u: goto label_129670;
            case 0x129674u: goto label_129674;
            case 0x129678u: goto label_129678;
            case 0x12967Cu: goto label_12967c;
            case 0x129680u: goto label_129680;
            case 0x129684u: goto label_129684;
            case 0x129688u: goto label_129688;
            case 0x12968Cu: goto label_12968c;
            case 0x129690u: goto label_129690;
            case 0x129694u: goto label_129694;
            case 0x129698u: goto label_129698;
            case 0x12969Cu: goto label_12969c;
            case 0x1296A0u: goto label_1296a0;
            case 0x1296A4u: goto label_1296a4;
            case 0x1296A8u: goto label_1296a8;
            case 0x1296ACu: goto label_1296ac;
            case 0x1296B0u: goto label_1296b0;
            case 0x1296B4u: goto label_1296b4;
            case 0x1296B8u: goto label_1296b8;
            case 0x1296BCu: goto label_1296bc;
            case 0x1296C0u: goto label_1296c0;
            case 0x1296C4u: goto label_1296c4;
            case 0x1296C8u: goto label_1296c8;
            case 0x1296CCu: goto label_1296cc;
            case 0x1296D0u: goto label_1296d0;
            case 0x1296D4u: goto label_1296d4;
            case 0x1296D8u: goto label_1296d8;
            case 0x1296DCu: goto label_1296dc;
            case 0x1296E0u: goto label_1296e0;
            case 0x1296E4u: goto label_1296e4;
            case 0x1296E8u: goto label_1296e8;
            case 0x1296ECu: goto label_1296ec;
            case 0x1296F0u: goto label_1296f0;
            case 0x1296F4u: goto label_1296f4;
            case 0x1296F8u: goto label_1296f8;
            case 0x1296FCu: goto label_1296fc;
            case 0x129700u: goto label_129700;
            case 0x129704u: goto label_129704;
            case 0x129708u: goto label_129708;
            case 0x12970Cu: goto label_12970c;
            case 0x129710u: goto label_129710;
            case 0x129714u: goto label_129714;
            case 0x129718u: goto label_129718;
            case 0x12971Cu: goto label_12971c;
            case 0x129720u: goto label_129720;
            case 0x129724u: goto label_129724;
            case 0x129728u: goto label_129728;
            case 0x12972Cu: goto label_12972c;
            case 0x129730u: goto label_129730;
            case 0x129734u: goto label_129734;
            case 0x129738u: goto label_129738;
            case 0x12973Cu: goto label_12973c;
            case 0x129740u: goto label_129740;
            case 0x129744u: goto label_129744;
            case 0x129748u: goto label_129748;
            case 0x12974Cu: goto label_12974c;
            case 0x129750u: goto label_129750;
            case 0x129754u: goto label_129754;
            case 0x129758u: goto label_129758;
            case 0x12975Cu: goto label_12975c;
            case 0x129760u: goto label_129760;
            case 0x129764u: goto label_129764;
            case 0x129768u: goto label_129768;
            case 0x12976Cu: goto label_12976c;
            case 0x129770u: goto label_129770;
            case 0x129774u: goto label_129774;
            case 0x129778u: goto label_129778;
            case 0x12977Cu: goto label_12977c;
            case 0x129780u: goto label_129780;
            case 0x129784u: goto label_129784;
            case 0x129788u: goto label_129788;
            case 0x12978Cu: goto label_12978c;
            case 0x129790u: goto label_129790;
            case 0x129794u: goto label_129794;
            case 0x129798u: goto label_129798;
            case 0x12979Cu: goto label_12979c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12979Cu;
label_12979c:
    // 0x12979c: 0x0
    ctx->pc = 0x12979cu;
    // NOP
}
