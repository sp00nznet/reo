#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00125878
// Address: 0x125878 - 0x125c08
void sub_00125878_0x125878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x125878u;

label_125878:
    // 0x125878: 0x80602d
    ctx->pc = 0x125878u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12587c:
    // 0x12587c: 0x240f0001
    ctx->pc = 0x12587cu;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 0), 1));
label_125880:
    // 0x125880: 0x91820007
    ctx->pc = 0x125880u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 7)));
label_125884:
    // 0x125884: 0x8fa50010
    ctx->pc = 0x125884u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_125888:
    // 0x125888: 0x21100
    ctx->pc = 0x125888u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_12588c:
    // 0x12588c: 0x8fad0008
    ctx->pc = 0x12588cu;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_125890:
    // 0x125890: 0xa4c20000
    ctx->pc = 0x125890u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
label_125894:
    // 0x125894: 0x8fae0000
    ctx->pc = 0x125894u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_125898:
    // 0x125898: 0x91820009
    ctx->pc = 0x125898u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 9)));
label_12589c:
    // 0x12589c: 0x30420003
    ctx->pc = 0x12589cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3));
label_1258a0:
    // 0x1258a0: 0x24420001
    ctx->pc = 0x1258a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1258a4:
    // 0x1258a4: 0xa1420000
    ctx->pc = 0x1258a4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 2));
label_1258a8:
    // 0x1258a8: 0x9583002a
    ctx->pc = 0x1258a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 42)));
label_1258ac:
    // 0x1258ac: 0xad630000
    ctx->pc = 0x1258acu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
label_1258b0:
    // 0x1258b0: 0x91840008
    ctx->pc = 0x1258b0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 8)));
label_1258b4:
    // 0x1258b4: 0x108f0018
label_1258b8:
    if (ctx->pc == 0x1258B8u) {
        ctx->pc = 0x1258B8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 2));
        ctx->pc = 0x1258BCu;
        goto label_1258bc;
    }
    ctx->pc = 0x1258B4u;
    {
        const bool branch_taken_0x1258b4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 15));
        ctx->pc = 0x1258B8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 2));
        if (branch_taken_0x1258b4) {
            ctx->pc = 0x125918u;
            goto label_125918;
        }
    }
    ctx->pc = 0x1258BCu;
label_1258bc:
    // 0x1258bc: 0x50400006
label_1258c0:
    if (ctx->pc == 0x1258C0u) {
        ctx->pc = 0x1258C0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 4));
        ctx->pc = 0x1258C4u;
        goto label_1258c4;
    }
    ctx->pc = 0x1258BCu;
    {
        const bool branch_taken_0x1258bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1258bc) {
            ctx->pc = 0x1258C0u;
            SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 4));
            ctx->pc = 0x1258D8u;
            goto label_1258d8;
        }
    }
    ctx->pc = 0x1258C4u;
label_1258c4:
    // 0x1258c4: 0x50800008
label_1258c8:
    if (ctx->pc == 0x1258C8u) {
        ctx->pc = 0x1258C8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x1258CCu;
        goto label_1258cc;
    }
    ctx->pc = 0x1258C4u;
    {
        const bool branch_taken_0x1258c4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1258c4) {
            ctx->pc = 0x1258C8u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
            ctx->pc = 0x1258E8u;
            goto label_1258e8;
        }
    }
    ctx->pc = 0x1258CCu;
label_1258cc:
    // 0x1258cc: 0x10000024
label_1258d0:
    if (ctx->pc == 0x1258D0u) {
        ctx->pc = 0x1258D0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1258D4u;
        goto label_1258d4;
    }
    ctx->pc = 0x1258CCu;
    {
        const bool branch_taken_0x1258cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1258D0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1258cc) {
            ctx->pc = 0x125960u;
            goto label_125960;
        }
    }
    ctx->pc = 0x1258D4u;
label_1258d4:
    // 0x1258d4: 0x0
    ctx->pc = 0x1258d4u;
    // NOP
label_1258d8:
    // 0x1258d8: 0x50400021
label_1258dc:
    if (ctx->pc == 0x1258DCu) {
        ctx->pc = 0x1258DCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1258E0u;
        goto label_1258e0;
    }
    ctx->pc = 0x1258D8u;
    {
        const bool branch_taken_0x1258d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1258d8) {
            ctx->pc = 0x1258DCu;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
            ctx->pc = 0x125960u;
            goto label_125960;
        }
    }
    ctx->pc = 0x1258E0u;
label_1258e0:
    // 0x1258e0: 0x10000015
label_1258e4:
    if (ctx->pc == 0x1258E4u) {
        ctx->pc = 0x1258E4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1258E8u;
        goto label_1258e8;
    }
    ctx->pc = 0x1258E0u;
    {
        const bool branch_taken_0x1258e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1258E4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1258e0) {
            ctx->pc = 0x125938u;
            goto label_125938;
        }
    }
    ctx->pc = 0x1258E8u;
label_1258e8:
    // 0x1258e8: 0xa1030000
    ctx->pc = 0x1258e8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
label_1258ec:
    // 0x1258ec: 0x81420000
    ctx->pc = 0x1258ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_1258f0:
    // 0x1258f0: 0x21040
    ctx->pc = 0x1258f0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_1258f4:
    // 0x1258f4: 0xa1220000
    ctx->pc = 0x1258f4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
label_1258f8:
    // 0x1258f8: 0xadaf0000
    ctx->pc = 0x1258f8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 15));
label_1258fc:
    // 0x1258fc: 0xa4a00000
    ctx->pc = 0x1258fcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
label_125900:
    // 0x125900: 0x8d82000c
    ctx->pc = 0x125900u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 12)));
label_125904:
    // 0x125904: 0x21fc2
    ctx->pc = 0x125904u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
label_125908:
    // 0x125908: 0x431021
    ctx->pc = 0x125908u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_12590c:
    // 0x12590c: 0x10000012
label_125910:
    if (ctx->pc == 0x125910u) {
        ctx->pc = 0x125910u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->pc = 0x125914u;
        goto label_125914;
    }
    ctx->pc = 0x12590Cu;
    {
        const bool branch_taken_0x12590c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x125910u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        if (branch_taken_0x12590c) {
            ctx->pc = 0x125958u;
            goto label_125958;
        }
    }
    ctx->pc = 0x125914u;
label_125914:
    // 0x125914: 0x0
    ctx->pc = 0x125914u;
    // NOP
label_125918:
    // 0x125918: 0x24020008
    ctx->pc = 0x125918u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
label_12591c:
    // 0x12591c: 0xa1020000
    ctx->pc = 0x12591cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
label_125920:
    // 0x125920: 0x81430000
    ctx->pc = 0x125920u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_125924:
    // 0x125924: 0xa1230000
    ctx->pc = 0x125924u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 3));
label_125928:
    // 0x125928: 0xada40000
    ctx->pc = 0x125928u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
label_12592c:
    // 0x12592c: 0xa4a40000
    ctx->pc = 0x12592cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
label_125930:
    // 0x125930: 0x10000009
label_125934:
    if (ctx->pc == 0x125934u) {
        ctx->pc = 0x125934u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 12)));
        ctx->pc = 0x125938u;
        goto label_125938;
    }
    ctx->pc = 0x125930u;
    {
        const bool branch_taken_0x125930 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x125934u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 12)));
        if (branch_taken_0x125930) {
            ctx->pc = 0x125958u;
            goto label_125958;
        }
    }
    ctx->pc = 0x125938u;
label_125938:
    // 0x125938: 0x24040002
    ctx->pc = 0x125938u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_12593c:
    // 0x12593c: 0xa1030000
    ctx->pc = 0x12593cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
label_125940:
    // 0x125940: 0x81420000
    ctx->pc = 0x125940u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_125944:
    // 0x125944: 0xa1220000
    ctx->pc = 0x125944u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
label_125948:
    // 0x125948: 0xada40000
    ctx->pc = 0x125948u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
label_12594c:
    // 0x12594c: 0xa4a40000
    ctx->pc = 0x12594cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
label_125950:
    // 0x125950: 0x8d82000c
    ctx->pc = 0x125950u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 12)));
label_125954:
    // 0x125954: 0x21040
    ctx->pc = 0x125954u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_125958:
    // 0x125958: 0xadc20000
    ctx->pc = 0x125958u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
label_12595c:
    // 0x12595c: 0x24030002
    ctx->pc = 0x12595cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_125960:
    // 0x125960: 0x24040001
    ctx->pc = 0x125960u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_125964:
    // 0x125964: 0xa1230000
    ctx->pc = 0x125964u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 3));
label_125968:
    // 0x125968: 0x24050010
    ctx->pc = 0x125968u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
label_12596c:
    // 0x12596c: 0xada40000
    ctx->pc = 0x12596cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
label_125970:
    // 0x125970: 0x2406ffff
    ctx->pc = 0x125970u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
label_125974:
    // 0x125974: 0x102d
    ctx->pc = 0x125974u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125978:
    // 0x125978: 0x8d83000c
    ctx->pc = 0x125978u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 12), 12)));
label_12597c:
    // 0x12597c: 0x327c2
    ctx->pc = 0x12597cu;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 3), 31));
label_125980:
    // 0x125980: 0x641821
    ctx->pc = 0x125980u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_125984:
    // 0x125984: 0x31843
    ctx->pc = 0x125984u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_125988:
    // 0x125988: 0xadc30000
    ctx->pc = 0x125988u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
label_12598c:
    // 0x12598c: 0xa1050000
    ctx->pc = 0x12598cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 5));
label_125990:
    // 0x125990: 0x3e00008
label_125994:
    if (ctx->pc == 0x125994u) {
        ctx->pc = 0x125994u;
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->pc = 0x125998u;
        goto label_125998;
    }
    ctx->pc = 0x125990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125994u;
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125878u: goto label_125878;
            case 0x12587Cu: goto label_12587c;
            case 0x125880u: goto label_125880;
            case 0x125884u: goto label_125884;
            case 0x125888u: goto label_125888;
            case 0x12588Cu: goto label_12588c;
            case 0x125890u: goto label_125890;
            case 0x125894u: goto label_125894;
            case 0x125898u: goto label_125898;
            case 0x12589Cu: goto label_12589c;
            case 0x1258A0u: goto label_1258a0;
            case 0x1258A4u: goto label_1258a4;
            case 0x1258A8u: goto label_1258a8;
            case 0x1258ACu: goto label_1258ac;
            case 0x1258B0u: goto label_1258b0;
            case 0x1258B4u: goto label_1258b4;
            case 0x1258B8u: goto label_1258b8;
            case 0x1258BCu: goto label_1258bc;
            case 0x1258C0u: goto label_1258c0;
            case 0x1258C4u: goto label_1258c4;
            case 0x1258C8u: goto label_1258c8;
            case 0x1258CCu: goto label_1258cc;
            case 0x1258D0u: goto label_1258d0;
            case 0x1258D4u: goto label_1258d4;
            case 0x1258D8u: goto label_1258d8;
            case 0x1258DCu: goto label_1258dc;
            case 0x1258E0u: goto label_1258e0;
            case 0x1258E4u: goto label_1258e4;
            case 0x1258E8u: goto label_1258e8;
            case 0x1258ECu: goto label_1258ec;
            case 0x1258F0u: goto label_1258f0;
            case 0x1258F4u: goto label_1258f4;
            case 0x1258F8u: goto label_1258f8;
            case 0x1258FCu: goto label_1258fc;
            case 0x125900u: goto label_125900;
            case 0x125904u: goto label_125904;
            case 0x125908u: goto label_125908;
            case 0x12590Cu: goto label_12590c;
            case 0x125910u: goto label_125910;
            case 0x125914u: goto label_125914;
            case 0x125918u: goto label_125918;
            case 0x12591Cu: goto label_12591c;
            case 0x125920u: goto label_125920;
            case 0x125924u: goto label_125924;
            case 0x125928u: goto label_125928;
            case 0x12592Cu: goto label_12592c;
            case 0x125930u: goto label_125930;
            case 0x125934u: goto label_125934;
            case 0x125938u: goto label_125938;
            case 0x12593Cu: goto label_12593c;
            case 0x125940u: goto label_125940;
            case 0x125944u: goto label_125944;
            case 0x125948u: goto label_125948;
            case 0x12594Cu: goto label_12594c;
            case 0x125950u: goto label_125950;
            case 0x125954u: goto label_125954;
            case 0x125958u: goto label_125958;
            case 0x12595Cu: goto label_12595c;
            case 0x125960u: goto label_125960;
            case 0x125964u: goto label_125964;
            case 0x125968u: goto label_125968;
            case 0x12596Cu: goto label_12596c;
            case 0x125970u: goto label_125970;
            case 0x125974u: goto label_125974;
            case 0x125978u: goto label_125978;
            case 0x12597Cu: goto label_12597c;
            case 0x125980u: goto label_125980;
            case 0x125984u: goto label_125984;
            case 0x125988u: goto label_125988;
            case 0x12598Cu: goto label_12598c;
            case 0x125990u: goto label_125990;
            case 0x125994u: goto label_125994;
            case 0x125998u: goto label_125998;
            case 0x12599Cu: goto label_12599c;
            case 0x1259A0u: goto label_1259a0;
            case 0x1259A4u: goto label_1259a4;
            case 0x1259A8u: goto label_1259a8;
            case 0x1259ACu: goto label_1259ac;
            case 0x1259B0u: goto label_1259b0;
            case 0x1259B4u: goto label_1259b4;
            case 0x1259B8u: goto label_1259b8;
            case 0x1259BCu: goto label_1259bc;
            case 0x1259C0u: goto label_1259c0;
            case 0x1259C4u: goto label_1259c4;
            case 0x1259C8u: goto label_1259c8;
            case 0x1259CCu: goto label_1259cc;
            case 0x1259D0u: goto label_1259d0;
            case 0x1259D4u: goto label_1259d4;
            case 0x1259D8u: goto label_1259d8;
            case 0x1259DCu: goto label_1259dc;
            case 0x1259E0u: goto label_1259e0;
            case 0x1259E4u: goto label_1259e4;
            case 0x1259E8u: goto label_1259e8;
            case 0x1259ECu: goto label_1259ec;
            case 0x1259F0u: goto label_1259f0;
            case 0x1259F4u: goto label_1259f4;
            case 0x1259F8u: goto label_1259f8;
            case 0x1259FCu: goto label_1259fc;
            case 0x125A00u: goto label_125a00;
            case 0x125A04u: goto label_125a04;
            case 0x125A08u: goto label_125a08;
            case 0x125A0Cu: goto label_125a0c;
            case 0x125A10u: goto label_125a10;
            case 0x125A14u: goto label_125a14;
            case 0x125A18u: goto label_125a18;
            case 0x125A1Cu: goto label_125a1c;
            case 0x125A20u: goto label_125a20;
            case 0x125A24u: goto label_125a24;
            case 0x125A28u: goto label_125a28;
            case 0x125A2Cu: goto label_125a2c;
            case 0x125A30u: goto label_125a30;
            case 0x125A34u: goto label_125a34;
            case 0x125A38u: goto label_125a38;
            case 0x125A3Cu: goto label_125a3c;
            case 0x125A40u: goto label_125a40;
            case 0x125A44u: goto label_125a44;
            case 0x125A48u: goto label_125a48;
            case 0x125A4Cu: goto label_125a4c;
            case 0x125A50u: goto label_125a50;
            case 0x125A54u: goto label_125a54;
            case 0x125A58u: goto label_125a58;
            case 0x125A5Cu: goto label_125a5c;
            case 0x125A60u: goto label_125a60;
            case 0x125A64u: goto label_125a64;
            case 0x125A68u: goto label_125a68;
            case 0x125A6Cu: goto label_125a6c;
            case 0x125A70u: goto label_125a70;
            case 0x125A74u: goto label_125a74;
            case 0x125A78u: goto label_125a78;
            case 0x125A7Cu: goto label_125a7c;
            case 0x125A80u: goto label_125a80;
            case 0x125A84u: goto label_125a84;
            case 0x125A88u: goto label_125a88;
            case 0x125A8Cu: goto label_125a8c;
            case 0x125A90u: goto label_125a90;
            case 0x125A94u: goto label_125a94;
            case 0x125A98u: goto label_125a98;
            case 0x125A9Cu: goto label_125a9c;
            case 0x125AA0u: goto label_125aa0;
            case 0x125AA4u: goto label_125aa4;
            case 0x125AA8u: goto label_125aa8;
            case 0x125AACu: goto label_125aac;
            case 0x125AB0u: goto label_125ab0;
            case 0x125AB4u: goto label_125ab4;
            case 0x125AB8u: goto label_125ab8;
            case 0x125ABCu: goto label_125abc;
            case 0x125AC0u: goto label_125ac0;
            case 0x125AC4u: goto label_125ac4;
            case 0x125AC8u: goto label_125ac8;
            case 0x125ACCu: goto label_125acc;
            case 0x125AD0u: goto label_125ad0;
            case 0x125AD4u: goto label_125ad4;
            case 0x125AD8u: goto label_125ad8;
            case 0x125ADCu: goto label_125adc;
            case 0x125AE0u: goto label_125ae0;
            case 0x125AE4u: goto label_125ae4;
            case 0x125AE8u: goto label_125ae8;
            case 0x125AECu: goto label_125aec;
            case 0x125AF0u: goto label_125af0;
            case 0x125AF4u: goto label_125af4;
            case 0x125AF8u: goto label_125af8;
            case 0x125AFCu: goto label_125afc;
            case 0x125B00u: goto label_125b00;
            case 0x125B04u: goto label_125b04;
            case 0x125B08u: goto label_125b08;
            case 0x125B0Cu: goto label_125b0c;
            case 0x125B10u: goto label_125b10;
            case 0x125B14u: goto label_125b14;
            case 0x125B18u: goto label_125b18;
            case 0x125B1Cu: goto label_125b1c;
            case 0x125B20u: goto label_125b20;
            case 0x125B24u: goto label_125b24;
            case 0x125B28u: goto label_125b28;
            case 0x125B2Cu: goto label_125b2c;
            case 0x125B30u: goto label_125b30;
            case 0x125B34u: goto label_125b34;
            case 0x125B38u: goto label_125b38;
            case 0x125B3Cu: goto label_125b3c;
            case 0x125B40u: goto label_125b40;
            case 0x125B44u: goto label_125b44;
            case 0x125B48u: goto label_125b48;
            case 0x125B4Cu: goto label_125b4c;
            case 0x125B50u: goto label_125b50;
            case 0x125B54u: goto label_125b54;
            case 0x125B58u: goto label_125b58;
            case 0x125B5Cu: goto label_125b5c;
            case 0x125B60u: goto label_125b60;
            case 0x125B64u: goto label_125b64;
            case 0x125B68u: goto label_125b68;
            case 0x125B6Cu: goto label_125b6c;
            case 0x125B70u: goto label_125b70;
            case 0x125B74u: goto label_125b74;
            case 0x125B78u: goto label_125b78;
            case 0x125B7Cu: goto label_125b7c;
            case 0x125B80u: goto label_125b80;
            case 0x125B84u: goto label_125b84;
            case 0x125B88u: goto label_125b88;
            case 0x125B8Cu: goto label_125b8c;
            case 0x125B90u: goto label_125b90;
            case 0x125B94u: goto label_125b94;
            case 0x125B98u: goto label_125b98;
            case 0x125B9Cu: goto label_125b9c;
            case 0x125BA0u: goto label_125ba0;
            case 0x125BA4u: goto label_125ba4;
            case 0x125BA8u: goto label_125ba8;
            case 0x125BACu: goto label_125bac;
            case 0x125BB0u: goto label_125bb0;
            case 0x125BB4u: goto label_125bb4;
            case 0x125BB8u: goto label_125bb8;
            case 0x125BBCu: goto label_125bbc;
            case 0x125BC0u: goto label_125bc0;
            case 0x125BC4u: goto label_125bc4;
            case 0x125BC8u: goto label_125bc8;
            case 0x125BCCu: goto label_125bcc;
            case 0x125BD0u: goto label_125bd0;
            case 0x125BD4u: goto label_125bd4;
            case 0x125BD8u: goto label_125bd8;
            case 0x125BDCu: goto label_125bdc;
            case 0x125BE0u: goto label_125be0;
            case 0x125BE4u: goto label_125be4;
            case 0x125BE8u: goto label_125be8;
            case 0x125BECu: goto label_125bec;
            case 0x125BF0u: goto label_125bf0;
            case 0x125BF4u: goto label_125bf4;
            case 0x125BF8u: goto label_125bf8;
            case 0x125BFCu: goto label_125bfc;
            case 0x125C00u: goto label_125c00;
            case 0x125C04u: goto label_125c04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x125998u;
label_125998:
    // 0x125998: 0x27bdffa0
    ctx->pc = 0x125998u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
label_12599c:
    // 0x12599c: 0x24020001
    ctx->pc = 0x12599cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1259a0:
    // 0x1259a0: 0xffb00030
    ctx->pc = 0x1259a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_1259a4:
    // 0x1259a4: 0x80802d
    ctx->pc = 0x1259a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1259a8:
    // 0x1259a8: 0xffb10038
    ctx->pc = 0x1259a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_1259ac:
    // 0x1259ac: 0x2611000e
    ctx->pc = 0x1259acu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 14));
label_1259b0:
    // 0x1259b0: 0xffb20040
    ctx->pc = 0x1259b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_1259b4:
    // 0x1259b4: 0x26120010
    ctx->pc = 0x1259b4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 16));
label_1259b8:
    // 0x1259b8: 0xffb30048
    ctx->pc = 0x1259b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_1259bc:
    // 0x1259bc: 0x2613000f
    ctx->pc = 0x1259bcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 16), 15));
label_1259c0:
    // 0x1259c0: 0xffbf0050
    ctx->pc = 0x1259c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1259c4:
    // 0x1259c4: 0xa0202d
    ctx->pc = 0x1259c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1259c8:
    // 0x1259c8: 0xa6020002
    ctx->pc = 0x1259c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_1259cc:
    // 0x1259cc: 0x26020018
    ctx->pc = 0x1259ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 24));
label_1259d0:
    // 0x1259d0: 0xc0282d
    ctx->pc = 0x1259d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1259d4:
    // 0x1259d4: 0x27a60020
    ctx->pc = 0x1259d4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
label_1259d8:
    // 0x1259d8: 0x2603009a
    ctx->pc = 0x1259d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 154));
label_1259dc:
    // 0x1259dc: 0x2607000c
    ctx->pc = 0x1259dcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 12));
label_1259e0:
    // 0x1259e0: 0x2608000d
    ctx->pc = 0x1259e0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 13));
label_1259e4:
    // 0x1259e4: 0x260482d
    ctx->pc = 0x1259e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1259e8:
    // 0x1259e8: 0x220502d
    ctx->pc = 0x1259e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1259ec:
    // 0x1259ec: 0x260b0014
    ctx->pc = 0x1259ecu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 16), 20));
label_1259f0:
    // 0x1259f0: 0xafa20000
    ctx->pc = 0x1259f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1259f4:
    // 0x1259f4: 0xafa30010
    ctx->pc = 0x1259f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1259f8:
    // 0x1259f8: 0xc04961e
label_1259fc:
    if (ctx->pc == 0x1259FCu) {
        ctx->pc = 0x1259FCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
        ctx->pc = 0x125A00u;
        goto label_125a00;
    }
    ctx->pc = 0x1259F8u;
    SET_GPR_U32(ctx, 31, 0x125A00u);
    ctx->pc = 0x1259FCu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    ctx->pc = 0x125878u;
    goto label_125878;
    ctx->pc = 0x125A00u;
label_125a00:
    // 0x125a00: 0x4430003
label_125a04:
    if (ctx->pc == 0x125A04u) {
        ctx->pc = 0x125A04u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->pc = 0x125A08u;
        goto label_125a08;
    }
    ctx->pc = 0x125A00u;
    {
        const bool branch_taken_0x125a00 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x125a00) {
            ctx->pc = 0x125A04u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
            ctx->pc = 0x125A10u;
            goto label_125a10;
        }
    }
    ctx->pc = 0x125A08u;
label_125a08:
    // 0x125a08: 0x10000019
label_125a0c:
    if (ctx->pc == 0x125A0Cu) {
        ctx->pc = 0x125A0Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x125A10u;
        goto label_125a10;
    }
    ctx->pc = 0x125A08u;
    {
        const bool branch_taken_0x125a08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x125A0Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x125a08) {
            ctx->pc = 0x125A70u;
            goto label_125a70;
        }
    }
    ctx->pc = 0x125A10u;
label_125a10:
    // 0x125a10: 0xae000030
    ctx->pc = 0x125a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_125a14:
    // 0x125a14: 0xae00002c
    ctx->pc = 0x125a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_125a18:
    // 0x125a18: 0xae000028
    ctx->pc = 0x125a18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_125a1c:
    // 0x125a1c: 0xae000020
    ctx->pc = 0x125a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_125a20:
    // 0x125a20: 0xa600001c
    ctx->pc = 0x125a20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
label_125a24:
    // 0x125a24: 0xa6000026
    ctx->pc = 0x125a24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
label_125a28:
    // 0x125a28: 0xa6000024
    ctx->pc = 0x125a28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
label_125a2c:
    // 0x125a2c: 0x8e05003c
    ctx->pc = 0x125a2cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_125a30:
    // 0x125a30: 0x82230000
    ctx->pc = 0x125a30u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_125a34:
    // 0x125a34: 0x8e060040
    ctx->pc = 0x125a34u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_125a38:
    // 0x125a38: 0xae030050
    ctx->pc = 0x125a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
label_125a3c:
    // 0x125a3c: 0x24030002
    ctx->pc = 0x125a3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_125a40:
    // 0x125a40: 0x8e070044
    ctx->pc = 0x125a40u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_125a44:
    // 0x125a44: 0x82640000
    ctx->pc = 0x125a44u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_125a48:
    // 0x125a48: 0x87a20020
    ctx->pc = 0x125a48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_125a4c:
    // 0x125a4c: 0xae040054
    ctx->pc = 0x125a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
label_125a50:
    // 0x125a50: 0xa6030098
    ctx->pc = 0x125a50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 3));
label_125a54:
    // 0x125a54: 0x8e430000
    ctx->pc = 0x125a54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_125a58:
    // 0x125a58: 0xae05005c
    ctx->pc = 0x125a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
label_125a5c:
    // 0x125a5c: 0xae060060
    ctx->pc = 0x125a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 6));
label_125a60:
    // 0x125a60: 0xae030058
    ctx->pc = 0x125a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
label_125a64:
    // 0x125a64: 0xae070064
    ctx->pc = 0x125a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 7));
label_125a68:
    // 0x125a68: 0xae00008c
    ctx->pc = 0x125a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
label_125a6c:
    // 0x125a6c: 0xae000088
    ctx->pc = 0x125a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_125a70:
    // 0x125a70: 0xdfb00030
    ctx->pc = 0x125a70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_125a74:
    // 0x125a74: 0xdfb10038
    ctx->pc = 0x125a74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_125a78:
    // 0x125a78: 0xdfb20040
    ctx->pc = 0x125a78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_125a7c:
    // 0x125a7c: 0xdfb30048
    ctx->pc = 0x125a7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_125a80:
    // 0x125a80: 0xdfbf0050
    ctx->pc = 0x125a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_125a84:
    // 0x125a84: 0x3e00008
label_125a88:
    if (ctx->pc == 0x125A88u) {
        ctx->pc = 0x125A88u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x125A8Cu;
        goto label_125a8c;
    }
    ctx->pc = 0x125A84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125A88u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125878u: goto label_125878;
            case 0x12587Cu: goto label_12587c;
            case 0x125880u: goto label_125880;
            case 0x125884u: goto label_125884;
            case 0x125888u: goto label_125888;
            case 0x12588Cu: goto label_12588c;
            case 0x125890u: goto label_125890;
            case 0x125894u: goto label_125894;
            case 0x125898u: goto label_125898;
            case 0x12589Cu: goto label_12589c;
            case 0x1258A0u: goto label_1258a0;
            case 0x1258A4u: goto label_1258a4;
            case 0x1258A8u: goto label_1258a8;
            case 0x1258ACu: goto label_1258ac;
            case 0x1258B0u: goto label_1258b0;
            case 0x1258B4u: goto label_1258b4;
            case 0x1258B8u: goto label_1258b8;
            case 0x1258BCu: goto label_1258bc;
            case 0x1258C0u: goto label_1258c0;
            case 0x1258C4u: goto label_1258c4;
            case 0x1258C8u: goto label_1258c8;
            case 0x1258CCu: goto label_1258cc;
            case 0x1258D0u: goto label_1258d0;
            case 0x1258D4u: goto label_1258d4;
            case 0x1258D8u: goto label_1258d8;
            case 0x1258DCu: goto label_1258dc;
            case 0x1258E0u: goto label_1258e0;
            case 0x1258E4u: goto label_1258e4;
            case 0x1258E8u: goto label_1258e8;
            case 0x1258ECu: goto label_1258ec;
            case 0x1258F0u: goto label_1258f0;
            case 0x1258F4u: goto label_1258f4;
            case 0x1258F8u: goto label_1258f8;
            case 0x1258FCu: goto label_1258fc;
            case 0x125900u: goto label_125900;
            case 0x125904u: goto label_125904;
            case 0x125908u: goto label_125908;
            case 0x12590Cu: goto label_12590c;
            case 0x125910u: goto label_125910;
            case 0x125914u: goto label_125914;
            case 0x125918u: goto label_125918;
            case 0x12591Cu: goto label_12591c;
            case 0x125920u: goto label_125920;
            case 0x125924u: goto label_125924;
            case 0x125928u: goto label_125928;
            case 0x12592Cu: goto label_12592c;
            case 0x125930u: goto label_125930;
            case 0x125934u: goto label_125934;
            case 0x125938u: goto label_125938;
            case 0x12593Cu: goto label_12593c;
            case 0x125940u: goto label_125940;
            case 0x125944u: goto label_125944;
            case 0x125948u: goto label_125948;
            case 0x12594Cu: goto label_12594c;
            case 0x125950u: goto label_125950;
            case 0x125954u: goto label_125954;
            case 0x125958u: goto label_125958;
            case 0x12595Cu: goto label_12595c;
            case 0x125960u: goto label_125960;
            case 0x125964u: goto label_125964;
            case 0x125968u: goto label_125968;
            case 0x12596Cu: goto label_12596c;
            case 0x125970u: goto label_125970;
            case 0x125974u: goto label_125974;
            case 0x125978u: goto label_125978;
            case 0x12597Cu: goto label_12597c;
            case 0x125980u: goto label_125980;
            case 0x125984u: goto label_125984;
            case 0x125988u: goto label_125988;
            case 0x12598Cu: goto label_12598c;
            case 0x125990u: goto label_125990;
            case 0x125994u: goto label_125994;
            case 0x125998u: goto label_125998;
            case 0x12599Cu: goto label_12599c;
            case 0x1259A0u: goto label_1259a0;
            case 0x1259A4u: goto label_1259a4;
            case 0x1259A8u: goto label_1259a8;
            case 0x1259ACu: goto label_1259ac;
            case 0x1259B0u: goto label_1259b0;
            case 0x1259B4u: goto label_1259b4;
            case 0x1259B8u: goto label_1259b8;
            case 0x1259BCu: goto label_1259bc;
            case 0x1259C0u: goto label_1259c0;
            case 0x1259C4u: goto label_1259c4;
            case 0x1259C8u: goto label_1259c8;
            case 0x1259CCu: goto label_1259cc;
            case 0x1259D0u: goto label_1259d0;
            case 0x1259D4u: goto label_1259d4;
            case 0x1259D8u: goto label_1259d8;
            case 0x1259DCu: goto label_1259dc;
            case 0x1259E0u: goto label_1259e0;
            case 0x1259E4u: goto label_1259e4;
            case 0x1259E8u: goto label_1259e8;
            case 0x1259ECu: goto label_1259ec;
            case 0x1259F0u: goto label_1259f0;
            case 0x1259F4u: goto label_1259f4;
            case 0x1259F8u: goto label_1259f8;
            case 0x1259FCu: goto label_1259fc;
            case 0x125A00u: goto label_125a00;
            case 0x125A04u: goto label_125a04;
            case 0x125A08u: goto label_125a08;
            case 0x125A0Cu: goto label_125a0c;
            case 0x125A10u: goto label_125a10;
            case 0x125A14u: goto label_125a14;
            case 0x125A18u: goto label_125a18;
            case 0x125A1Cu: goto label_125a1c;
            case 0x125A20u: goto label_125a20;
            case 0x125A24u: goto label_125a24;
            case 0x125A28u: goto label_125a28;
            case 0x125A2Cu: goto label_125a2c;
            case 0x125A30u: goto label_125a30;
            case 0x125A34u: goto label_125a34;
            case 0x125A38u: goto label_125a38;
            case 0x125A3Cu: goto label_125a3c;
            case 0x125A40u: goto label_125a40;
            case 0x125A44u: goto label_125a44;
            case 0x125A48u: goto label_125a48;
            case 0x125A4Cu: goto label_125a4c;
            case 0x125A50u: goto label_125a50;
            case 0x125A54u: goto label_125a54;
            case 0x125A58u: goto label_125a58;
            case 0x125A5Cu: goto label_125a5c;
            case 0x125A60u: goto label_125a60;
            case 0x125A64u: goto label_125a64;
            case 0x125A68u: goto label_125a68;
            case 0x125A6Cu: goto label_125a6c;
            case 0x125A70u: goto label_125a70;
            case 0x125A74u: goto label_125a74;
            case 0x125A78u: goto label_125a78;
            case 0x125A7Cu: goto label_125a7c;
            case 0x125A80u: goto label_125a80;
            case 0x125A84u: goto label_125a84;
            case 0x125A88u: goto label_125a88;
            case 0x125A8Cu: goto label_125a8c;
            case 0x125A90u: goto label_125a90;
            case 0x125A94u: goto label_125a94;
            case 0x125A98u: goto label_125a98;
            case 0x125A9Cu: goto label_125a9c;
            case 0x125AA0u: goto label_125aa0;
            case 0x125AA4u: goto label_125aa4;
            case 0x125AA8u: goto label_125aa8;
            case 0x125AACu: goto label_125aac;
            case 0x125AB0u: goto label_125ab0;
            case 0x125AB4u: goto label_125ab4;
            case 0x125AB8u: goto label_125ab8;
            case 0x125ABCu: goto label_125abc;
            case 0x125AC0u: goto label_125ac0;
            case 0x125AC4u: goto label_125ac4;
            case 0x125AC8u: goto label_125ac8;
            case 0x125ACCu: goto label_125acc;
            case 0x125AD0u: goto label_125ad0;
            case 0x125AD4u: goto label_125ad4;
            case 0x125AD8u: goto label_125ad8;
            case 0x125ADCu: goto label_125adc;
            case 0x125AE0u: goto label_125ae0;
            case 0x125AE4u: goto label_125ae4;
            case 0x125AE8u: goto label_125ae8;
            case 0x125AECu: goto label_125aec;
            case 0x125AF0u: goto label_125af0;
            case 0x125AF4u: goto label_125af4;
            case 0x125AF8u: goto label_125af8;
            case 0x125AFCu: goto label_125afc;
            case 0x125B00u: goto label_125b00;
            case 0x125B04u: goto label_125b04;
            case 0x125B08u: goto label_125b08;
            case 0x125B0Cu: goto label_125b0c;
            case 0x125B10u: goto label_125b10;
            case 0x125B14u: goto label_125b14;
            case 0x125B18u: goto label_125b18;
            case 0x125B1Cu: goto label_125b1c;
            case 0x125B20u: goto label_125b20;
            case 0x125B24u: goto label_125b24;
            case 0x125B28u: goto label_125b28;
            case 0x125B2Cu: goto label_125b2c;
            case 0x125B30u: goto label_125b30;
            case 0x125B34u: goto label_125b34;
            case 0x125B38u: goto label_125b38;
            case 0x125B3Cu: goto label_125b3c;
            case 0x125B40u: goto label_125b40;
            case 0x125B44u: goto label_125b44;
            case 0x125B48u: goto label_125b48;
            case 0x125B4Cu: goto label_125b4c;
            case 0x125B50u: goto label_125b50;
            case 0x125B54u: goto label_125b54;
            case 0x125B58u: goto label_125b58;
            case 0x125B5Cu: goto label_125b5c;
            case 0x125B60u: goto label_125b60;
            case 0x125B64u: goto label_125b64;
            case 0x125B68u: goto label_125b68;
            case 0x125B6Cu: goto label_125b6c;
            case 0x125B70u: goto label_125b70;
            case 0x125B74u: goto label_125b74;
            case 0x125B78u: goto label_125b78;
            case 0x125B7Cu: goto label_125b7c;
            case 0x125B80u: goto label_125b80;
            case 0x125B84u: goto label_125b84;
            case 0x125B88u: goto label_125b88;
            case 0x125B8Cu: goto label_125b8c;
            case 0x125B90u: goto label_125b90;
            case 0x125B94u: goto label_125b94;
            case 0x125B98u: goto label_125b98;
            case 0x125B9Cu: goto label_125b9c;
            case 0x125BA0u: goto label_125ba0;
            case 0x125BA4u: goto label_125ba4;
            case 0x125BA8u: goto label_125ba8;
            case 0x125BACu: goto label_125bac;
            case 0x125BB0u: goto label_125bb0;
            case 0x125BB4u: goto label_125bb4;
            case 0x125BB8u: goto label_125bb8;
            case 0x125BBCu: goto label_125bbc;
            case 0x125BC0u: goto label_125bc0;
            case 0x125BC4u: goto label_125bc4;
            case 0x125BC8u: goto label_125bc8;
            case 0x125BCCu: goto label_125bcc;
            case 0x125BD0u: goto label_125bd0;
            case 0x125BD4u: goto label_125bd4;
            case 0x125BD8u: goto label_125bd8;
            case 0x125BDCu: goto label_125bdc;
            case 0x125BE0u: goto label_125be0;
            case 0x125BE4u: goto label_125be4;
            case 0x125BE8u: goto label_125be8;
            case 0x125BECu: goto label_125bec;
            case 0x125BF0u: goto label_125bf0;
            case 0x125BF4u: goto label_125bf4;
            case 0x125BF8u: goto label_125bf8;
            case 0x125BFCu: goto label_125bfc;
            case 0x125C00u: goto label_125c00;
            case 0x125C04u: goto label_125c04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x125A8Cu;
label_125a8c:
    // 0x125a8c: 0x0
    ctx->pc = 0x125a8cu;
    // NOP
label_125a90:
    // 0x125a90: 0x27bdffe0
    ctx->pc = 0x125a90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_125a94:
    // 0x125a94: 0x24020001
    ctx->pc = 0x125a94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_125a98:
    // 0x125a98: 0xffb00000
    ctx->pc = 0x125a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_125a9c:
    // 0x125a9c: 0x80802d
    ctx->pc = 0x125a9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_125aa0:
    // 0x125aa0: 0xffb10008
    ctx->pc = 0x125aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_125aa4:
    // 0x125aa4: 0x26110048
    ctx->pc = 0x125aa4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 72));
label_125aa8:
    // 0x125aa8: 0xffb20010
    ctx->pc = 0x125aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_125aac:
    // 0x125aac: 0xffbf0018
    ctx->pc = 0x125aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_125ab0:
    // 0x125ab0: 0x8e030004
    ctx->pc = 0x125ab0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_125ab4:
    // 0x125ab4: 0x14620043
label_125ab8:
    if (ctx->pc == 0x125AB8u) {
        ctx->pc = 0x125AB8u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x125ABCu;
        goto label_125abc;
    }
    ctx->pc = 0x125AB4u;
    {
        const bool branch_taken_0x125ab4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x125AB8u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        if (branch_taken_0x125ab4) {
            ctx->pc = 0x125BC4u;
            goto label_125bc4;
        }
    }
    ctx->pc = 0x125ABCu;
label_125abc:
    // 0x125abc: 0xc04d3e6
label_125ac0:
    if (ctx->pc == 0x125AC0u) {
        ctx->pc = 0x125AC0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x125AC4u;
        goto label_125ac4;
    }
    ctx->pc = 0x125ABCu;
    SET_GPR_U32(ctx, 31, 0x125AC4u);
    ctx->pc = 0x125AC0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x134F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00134F98_0x134f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125AC4u; }
    }
    if (ctx->pc != 0x125AC4u) { return; }
    ctx->pc = 0x125AC4u;
label_125ac4:
    // 0x125ac4: 0x5440003f
label_125ac8:
    if (ctx->pc == 0x125AC8u) {
        ctx->pc = 0x125AC8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x125ACCu;
        goto label_125acc;
    }
    ctx->pc = 0x125AC4u;
    {
        const bool branch_taken_0x125ac4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x125ac4) {
            ctx->pc = 0x125AC8u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x125BC4u;
            goto label_125bc4;
        }
    }
    ctx->pc = 0x125ACCu;
label_125acc:
    // 0x125acc: 0x8e04007c
    ctx->pc = 0x125accu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_125ad0:
    // 0x125ad0: 0x26050068
    ctx->pc = 0x125ad0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 104));
label_125ad4:
    // 0x125ad4: 0x8e020078
    ctx->pc = 0x125ad4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_125ad8:
    // 0x125ad8: 0x2606006c
    ctx->pc = 0x125ad8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 108));
label_125adc:
    // 0x125adc: 0x40f809
label_125ae0:
    if (ctx->pc == 0x125AE0u) {
        ctx->pc = 0x125AE0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x125AE4u;
        goto label_125ae4;
    }
    ctx->pc = 0x125ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x125AE4u);
        ctx->pc = 0x125AE0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125878u: goto label_125878;
            case 0x12587Cu: goto label_12587c;
            case 0x125880u: goto label_125880;
            case 0x125884u: goto label_125884;
            case 0x125888u: goto label_125888;
            case 0x12588Cu: goto label_12588c;
            case 0x125890u: goto label_125890;
            case 0x125894u: goto label_125894;
            case 0x125898u: goto label_125898;
            case 0x12589Cu: goto label_12589c;
            case 0x1258A0u: goto label_1258a0;
            case 0x1258A4u: goto label_1258a4;
            case 0x1258A8u: goto label_1258a8;
            case 0x1258ACu: goto label_1258ac;
            case 0x1258B0u: goto label_1258b0;
            case 0x1258B4u: goto label_1258b4;
            case 0x1258B8u: goto label_1258b8;
            case 0x1258BCu: goto label_1258bc;
            case 0x1258C0u: goto label_1258c0;
            case 0x1258C4u: goto label_1258c4;
            case 0x1258C8u: goto label_1258c8;
            case 0x1258CCu: goto label_1258cc;
            case 0x1258D0u: goto label_1258d0;
            case 0x1258D4u: goto label_1258d4;
            case 0x1258D8u: goto label_1258d8;
            case 0x1258DCu: goto label_1258dc;
            case 0x1258E0u: goto label_1258e0;
            case 0x1258E4u: goto label_1258e4;
            case 0x1258E8u: goto label_1258e8;
            case 0x1258ECu: goto label_1258ec;
            case 0x1258F0u: goto label_1258f0;
            case 0x1258F4u: goto label_1258f4;
            case 0x1258F8u: goto label_1258f8;
            case 0x1258FCu: goto label_1258fc;
            case 0x125900u: goto label_125900;
            case 0x125904u: goto label_125904;
            case 0x125908u: goto label_125908;
            case 0x12590Cu: goto label_12590c;
            case 0x125910u: goto label_125910;
            case 0x125914u: goto label_125914;
            case 0x125918u: goto label_125918;
            case 0x12591Cu: goto label_12591c;
            case 0x125920u: goto label_125920;
            case 0x125924u: goto label_125924;
            case 0x125928u: goto label_125928;
            case 0x12592Cu: goto label_12592c;
            case 0x125930u: goto label_125930;
            case 0x125934u: goto label_125934;
            case 0x125938u: goto label_125938;
            case 0x12593Cu: goto label_12593c;
            case 0x125940u: goto label_125940;
            case 0x125944u: goto label_125944;
            case 0x125948u: goto label_125948;
            case 0x12594Cu: goto label_12594c;
            case 0x125950u: goto label_125950;
            case 0x125954u: goto label_125954;
            case 0x125958u: goto label_125958;
            case 0x12595Cu: goto label_12595c;
            case 0x125960u: goto label_125960;
            case 0x125964u: goto label_125964;
            case 0x125968u: goto label_125968;
            case 0x12596Cu: goto label_12596c;
            case 0x125970u: goto label_125970;
            case 0x125974u: goto label_125974;
            case 0x125978u: goto label_125978;
            case 0x12597Cu: goto label_12597c;
            case 0x125980u: goto label_125980;
            case 0x125984u: goto label_125984;
            case 0x125988u: goto label_125988;
            case 0x12598Cu: goto label_12598c;
            case 0x125990u: goto label_125990;
            case 0x125994u: goto label_125994;
            case 0x125998u: goto label_125998;
            case 0x12599Cu: goto label_12599c;
            case 0x1259A0u: goto label_1259a0;
            case 0x1259A4u: goto label_1259a4;
            case 0x1259A8u: goto label_1259a8;
            case 0x1259ACu: goto label_1259ac;
            case 0x1259B0u: goto label_1259b0;
            case 0x1259B4u: goto label_1259b4;
            case 0x1259B8u: goto label_1259b8;
            case 0x1259BCu: goto label_1259bc;
            case 0x1259C0u: goto label_1259c0;
            case 0x1259C4u: goto label_1259c4;
            case 0x1259C8u: goto label_1259c8;
            case 0x1259CCu: goto label_1259cc;
            case 0x1259D0u: goto label_1259d0;
            case 0x1259D4u: goto label_1259d4;
            case 0x1259D8u: goto label_1259d8;
            case 0x1259DCu: goto label_1259dc;
            case 0x1259E0u: goto label_1259e0;
            case 0x1259E4u: goto label_1259e4;
            case 0x1259E8u: goto label_1259e8;
            case 0x1259ECu: goto label_1259ec;
            case 0x1259F0u: goto label_1259f0;
            case 0x1259F4u: goto label_1259f4;
            case 0x1259F8u: goto label_1259f8;
            case 0x1259FCu: goto label_1259fc;
            case 0x125A00u: goto label_125a00;
            case 0x125A04u: goto label_125a04;
            case 0x125A08u: goto label_125a08;
            case 0x125A0Cu: goto label_125a0c;
            case 0x125A10u: goto label_125a10;
            case 0x125A14u: goto label_125a14;
            case 0x125A18u: goto label_125a18;
            case 0x125A1Cu: goto label_125a1c;
            case 0x125A20u: goto label_125a20;
            case 0x125A24u: goto label_125a24;
            case 0x125A28u: goto label_125a28;
            case 0x125A2Cu: goto label_125a2c;
            case 0x125A30u: goto label_125a30;
            case 0x125A34u: goto label_125a34;
            case 0x125A38u: goto label_125a38;
            case 0x125A3Cu: goto label_125a3c;
            case 0x125A40u: goto label_125a40;
            case 0x125A44u: goto label_125a44;
            case 0x125A48u: goto label_125a48;
            case 0x125A4Cu: goto label_125a4c;
            case 0x125A50u: goto label_125a50;
            case 0x125A54u: goto label_125a54;
            case 0x125A58u: goto label_125a58;
            case 0x125A5Cu: goto label_125a5c;
            case 0x125A60u: goto label_125a60;
            case 0x125A64u: goto label_125a64;
            case 0x125A68u: goto label_125a68;
            case 0x125A6Cu: goto label_125a6c;
            case 0x125A70u: goto label_125a70;
            case 0x125A74u: goto label_125a74;
            case 0x125A78u: goto label_125a78;
            case 0x125A7Cu: goto label_125a7c;
            case 0x125A80u: goto label_125a80;
            case 0x125A84u: goto label_125a84;
            case 0x125A88u: goto label_125a88;
            case 0x125A8Cu: goto label_125a8c;
            case 0x125A90u: goto label_125a90;
            case 0x125A94u: goto label_125a94;
            case 0x125A98u: goto label_125a98;
            case 0x125A9Cu: goto label_125a9c;
            case 0x125AA0u: goto label_125aa0;
            case 0x125AA4u: goto label_125aa4;
            case 0x125AA8u: goto label_125aa8;
            case 0x125AACu: goto label_125aac;
            case 0x125AB0u: goto label_125ab0;
            case 0x125AB4u: goto label_125ab4;
            case 0x125AB8u: goto label_125ab8;
            case 0x125ABCu: goto label_125abc;
            case 0x125AC0u: goto label_125ac0;
            case 0x125AC4u: goto label_125ac4;
            case 0x125AC8u: goto label_125ac8;
            case 0x125ACCu: goto label_125acc;
            case 0x125AD0u: goto label_125ad0;
            case 0x125AD4u: goto label_125ad4;
            case 0x125AD8u: goto label_125ad8;
            case 0x125ADCu: goto label_125adc;
            case 0x125AE0u: goto label_125ae0;
            case 0x125AE4u: goto label_125ae4;
            case 0x125AE8u: goto label_125ae8;
            case 0x125AECu: goto label_125aec;
            case 0x125AF0u: goto label_125af0;
            case 0x125AF4u: goto label_125af4;
            case 0x125AF8u: goto label_125af8;
            case 0x125AFCu: goto label_125afc;
            case 0x125B00u: goto label_125b00;
            case 0x125B04u: goto label_125b04;
            case 0x125B08u: goto label_125b08;
            case 0x125B0Cu: goto label_125b0c;
            case 0x125B10u: goto label_125b10;
            case 0x125B14u: goto label_125b14;
            case 0x125B18u: goto label_125b18;
            case 0x125B1Cu: goto label_125b1c;
            case 0x125B20u: goto label_125b20;
            case 0x125B24u: goto label_125b24;
            case 0x125B28u: goto label_125b28;
            case 0x125B2Cu: goto label_125b2c;
            case 0x125B30u: goto label_125b30;
            case 0x125B34u: goto label_125b34;
            case 0x125B38u: goto label_125b38;
            case 0x125B3Cu: goto label_125b3c;
            case 0x125B40u: goto label_125b40;
            case 0x125B44u: goto label_125b44;
            case 0x125B48u: goto label_125b48;
            case 0x125B4Cu: goto label_125b4c;
            case 0x125B50u: goto label_125b50;
            case 0x125B54u: goto label_125b54;
            case 0x125B58u: goto label_125b58;
            case 0x125B5Cu: goto label_125b5c;
            case 0x125B60u: goto label_125b60;
            case 0x125B64u: goto label_125b64;
            case 0x125B68u: goto label_125b68;
            case 0x125B6Cu: goto label_125b6c;
            case 0x125B70u: goto label_125b70;
            case 0x125B74u: goto label_125b74;
            case 0x125B78u: goto label_125b78;
            case 0x125B7Cu: goto label_125b7c;
            case 0x125B80u: goto label_125b80;
            case 0x125B84u: goto label_125b84;
            case 0x125B88u: goto label_125b88;
            case 0x125B8Cu: goto label_125b8c;
            case 0x125B90u: goto label_125b90;
            case 0x125B94u: goto label_125b94;
            case 0x125B98u: goto label_125b98;
            case 0x125B9Cu: goto label_125b9c;
            case 0x125BA0u: goto label_125ba0;
            case 0x125BA4u: goto label_125ba4;
            case 0x125BA8u: goto label_125ba8;
            case 0x125BACu: goto label_125bac;
            case 0x125BB0u: goto label_125bb0;
            case 0x125BB4u: goto label_125bb4;
            case 0x125BB8u: goto label_125bb8;
            case 0x125BBCu: goto label_125bbc;
            case 0x125BC0u: goto label_125bc0;
            case 0x125BC4u: goto label_125bc4;
            case 0x125BC8u: goto label_125bc8;
            case 0x125BCCu: goto label_125bcc;
            case 0x125BD0u: goto label_125bd0;
            case 0x125BD4u: goto label_125bd4;
            case 0x125BD8u: goto label_125bd8;
            case 0x125BDCu: goto label_125bdc;
            case 0x125BE0u: goto label_125be0;
            case 0x125BE4u: goto label_125be4;
            case 0x125BE8u: goto label_125be8;
            case 0x125BECu: goto label_125bec;
            case 0x125BF0u: goto label_125bf0;
            case 0x125BF4u: goto label_125bf4;
            case 0x125BF8u: goto label_125bf8;
            case 0x125BFCu: goto label_125bfc;
            case 0x125C00u: goto label_125c00;
            case 0x125C04u: goto label_125c04;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x125AE4u; }
            if (ctx->pc != 0x125AE4u) { return; }
        }
    }
    ctx->pc = 0x125AE4u;
label_125ae4:
    // 0x125ae4: 0x8e240018
    ctx->pc = 0x125ae4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_125ae8:
    // 0x125ae8: 0x8e270020
    ctx->pc = 0x125ae8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_125aec:
    // 0x125aec: 0x24060002
    ctx->pc = 0x125aecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
label_125af0:
    // 0x125af0: 0x8e230024
    ctx->pc = 0x125af0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_125af4:
    // 0x125af4: 0x874823
    ctx->pc = 0x125af4u;
    SET_GPR_U32(ctx, 9, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_125af8:
    // 0x125af8: 0x8204000e
    ctx->pc = 0x125af8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_125afc:
    // 0x125afc: 0x69102a
    ctx->pc = 0x125afcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 9)));
label_125b00:
    // 0x125b00: 0x8e250004
    ctx->pc = 0x125b00u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_125b04:
    // 0x125b04: 0x62480b
    ctx->pc = 0x125b04u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 9, GPR_U32(ctx, 3));
label_125b08:
    // 0x125b08: 0x71840
    ctx->pc = 0x125b08u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 1));
label_125b0c:
    // 0x125b0c: 0x8e2b0014
    ctx->pc = 0x125b0cu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_125b10:
    // 0x125b10: 0xa9102a
    ctx->pc = 0x125b10u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 9)));
label_125b14:
    // 0x125b14: 0xa2480b
    ctx->pc = 0x125b14u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 9, GPR_U32(ctx, 5));
label_125b18:
    // 0x125b18: 0x1635021
    ctx->pc = 0x125b18u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_125b1c:
    // 0x125b1c: 0x14860016
label_125b20:
    if (ctx->pc == 0x125B20u) {
        ctx->pc = 0x125B20u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x125B24u;
        goto label_125b24;
    }
    ctx->pc = 0x125B1Cu;
    {
        const bool branch_taken_0x125b1c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 6));
        ctx->pc = 0x125B20u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        if (branch_taken_0x125b1c) {
            ctx->pc = 0x125B78u;
            goto label_125b78;
        }
    }
    ctx->pc = 0x125B24u;
label_125b24:
    // 0x125b24: 0x8e22001c
    ctx->pc = 0x125b24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_125b28:
    // 0x125b28: 0x402d
    ctx->pc = 0x125b28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125b2c:
    // 0x125b2c: 0x471021
    ctx->pc = 0x125b2cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_125b30:
    // 0x125b30: 0x21040
    ctx->pc = 0x125b30u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_125b34:
    // 0x125b34: 0x1920001b
label_125b38:
    if (ctx->pc == 0x125B38u) {
        ctx->pc = 0x125B38u;
        SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->pc = 0x125B3Cu;
        goto label_125b3c;
    }
    ctx->pc = 0x125B34u;
    {
        const bool branch_taken_0x125b34 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x125B38u;
        SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        if (branch_taken_0x125b34) {
            ctx->pc = 0x125BA4u;
            goto label_125ba4;
        }
    }
    ctx->pc = 0x125B3Cu;
label_125b3c:
    // 0x125b3c: 0x240382d
    ctx->pc = 0x125b3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_125b40:
    // 0x125b40: 0x81840
    ctx->pc = 0x125b40u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 1));
label_125b44:
    // 0x125b44: 0x25080001
    ctx->pc = 0x125b44u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_125b48:
    // 0x125b48: 0x94e50000
    ctx->pc = 0x125b48u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_125b4c:
    // 0x125b4c: 0x6a2021
    ctx->pc = 0x125b4cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_125b50:
    // 0x125b50: 0x109302a
    ctx->pc = 0x125b50u;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 9)));
label_125b54:
    // 0x125b54: 0x6b1821
    ctx->pc = 0x125b54u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_125b58:
    // 0x125b58: 0xa4850000
    ctx->pc = 0x125b58u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
label_125b5c:
    // 0x125b5c: 0x94e20002
    ctx->pc = 0x125b5cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_125b60:
    // 0x125b60: 0x24e70004
    ctx->pc = 0x125b60u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
label_125b64:
    // 0x125b64: 0x14c0fff6
label_125b68:
    if (ctx->pc == 0x125B68u) {
        ctx->pc = 0x125B68u;
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x125B6Cu;
        goto label_125b6c;
    }
    ctx->pc = 0x125B64u;
    {
        const bool branch_taken_0x125b64 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x125B68u;
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x125b64) {
            ctx->pc = 0x125B40u;
            goto label_125b40;
        }
    }
    ctx->pc = 0x125B6Cu;
label_125b6c:
    // 0x125b6c: 0x1000000d
label_125b70:
    if (ctx->pc == 0x125B70u) {
        ctx->pc = 0x125B70u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x125B74u;
        goto label_125b74;
    }
    ctx->pc = 0x125B6Cu;
    {
        const bool branch_taken_0x125b6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x125B70u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        if (branch_taken_0x125b6c) {
            ctx->pc = 0x125BA4u;
            goto label_125ba4;
        }
    }
    ctx->pc = 0x125B74u;
label_125b74:
    // 0x125b74: 0x0
    ctx->pc = 0x125b74u;
    // NOP
label_125b78:
    // 0x125b78: 0x1920000a
label_125b7c:
    if (ctx->pc == 0x125B7Cu) {
        ctx->pc = 0x125B7Cu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x125B80u;
        goto label_125b80;
    }
    ctx->pc = 0x125B78u;
    {
        const bool branch_taken_0x125b78 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x125B7Cu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x125b78) {
            ctx->pc = 0x125BA4u;
            goto label_125ba4;
        }
    }
    ctx->pc = 0x125B80u;
label_125b80:
    // 0x125b80: 0x81040
    ctx->pc = 0x125b80u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 8), 1));
label_125b84:
    // 0x125b84: 0x25080001
    ctx->pc = 0x125b84u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_125b88:
    // 0x125b88: 0x521821
    ctx->pc = 0x125b88u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_125b8c:
    // 0x125b8c: 0x4a1021
    ctx->pc = 0x125b8cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_125b90:
    // 0x125b90: 0x94640000
    ctx->pc = 0x125b90u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_125b94:
    // 0x125b94: 0x109282a
    ctx->pc = 0x125b94u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 9)));
label_125b98:
    // 0x125b98: 0x14a0fff9
label_125b9c:
    if (ctx->pc == 0x125B9Cu) {
        ctx->pc = 0x125B9Cu;
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->pc = 0x125BA0u;
        goto label_125ba0;
    }
    ctx->pc = 0x125B98u;
    {
        const bool branch_taken_0x125b98 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x125B9Cu;
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        if (branch_taken_0x125b98) {
            ctx->pc = 0x125B80u;
            goto label_125b80;
        }
    }
    ctx->pc = 0x125BA0u;
label_125ba0:
    // 0x125ba0: 0x9203000e
    ctx->pc = 0x125ba0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_125ba4:
    // 0x125ba4: 0x31600
    ctx->pc = 0x125ba4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 24));
label_125ba8:
    // 0x125ba8: 0x24030002
    ctx->pc = 0x125ba8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_125bac:
    // 0x125bac: 0x21603
    ctx->pc = 0x125bacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_125bb0:
    // 0x125bb0: 0xae030004
    ctx->pc = 0x125bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_125bb4:
    // 0x125bb4: 0x1221018
    ctx->pc = 0x125bb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_125bb8:
    // 0x125bb8: 0xae090090
    ctx->pc = 0x125bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 9));
label_125bbc:
    // 0x125bbc: 0x21040
    ctx->pc = 0x125bbcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_125bc0:
    // 0x125bc0: 0xae020094
    ctx->pc = 0x125bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_125bc4:
    // 0x125bc4: 0x24020002
    ctx->pc = 0x125bc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_125bc8:
    // 0x125bc8: 0x54620009
label_125bcc:
    if (ctx->pc == 0x125BCCu) {
        ctx->pc = 0x125BCCu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x125BD0u;
        goto label_125bd0;
    }
    ctx->pc = 0x125BC8u;
    {
        const bool branch_taken_0x125bc8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x125bc8) {
            ctx->pc = 0x125BCCu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x125BF0u;
            goto label_125bf0;
        }
    }
    ctx->pc = 0x125BD0u;
label_125bd0:
    // 0x125bd0: 0x8e030080
    ctx->pc = 0x125bd0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_125bd4:
    // 0x125bd4: 0x8e040084
    ctx->pc = 0x125bd4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_125bd8:
    // 0x125bd8: 0x8e050094
    ctx->pc = 0x125bd8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_125bdc:
    // 0x125bdc: 0x60f809
label_125be0:
    if (ctx->pc == 0x125BE0u) {
        ctx->pc = 0x125BE0u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = 0x125BE4u;
        goto label_125be4;
    }
    ctx->pc = 0x125BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x125BE4u);
        ctx->pc = 0x125BE0u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125878u: goto label_125878;
            case 0x12587Cu: goto label_12587c;
            case 0x125880u: goto label_125880;
            case 0x125884u: goto label_125884;
            case 0x125888u: goto label_125888;
            case 0x12588Cu: goto label_12588c;
            case 0x125890u: goto label_125890;
            case 0x125894u: goto label_125894;
            case 0x125898u: goto label_125898;
            case 0x12589Cu: goto label_12589c;
            case 0x1258A0u: goto label_1258a0;
            case 0x1258A4u: goto label_1258a4;
            case 0x1258A8u: goto label_1258a8;
            case 0x1258ACu: goto label_1258ac;
            case 0x1258B0u: goto label_1258b0;
            case 0x1258B4u: goto label_1258b4;
            case 0x1258B8u: goto label_1258b8;
            case 0x1258BCu: goto label_1258bc;
            case 0x1258C0u: goto label_1258c0;
            case 0x1258C4u: goto label_1258c4;
            case 0x1258C8u: goto label_1258c8;
            case 0x1258CCu: goto label_1258cc;
            case 0x1258D0u: goto label_1258d0;
            case 0x1258D4u: goto label_1258d4;
            case 0x1258D8u: goto label_1258d8;
            case 0x1258DCu: goto label_1258dc;
            case 0x1258E0u: goto label_1258e0;
            case 0x1258E4u: goto label_1258e4;
            case 0x1258E8u: goto label_1258e8;
            case 0x1258ECu: goto label_1258ec;
            case 0x1258F0u: goto label_1258f0;
            case 0x1258F4u: goto label_1258f4;
            case 0x1258F8u: goto label_1258f8;
            case 0x1258FCu: goto label_1258fc;
            case 0x125900u: goto label_125900;
            case 0x125904u: goto label_125904;
            case 0x125908u: goto label_125908;
            case 0x12590Cu: goto label_12590c;
            case 0x125910u: goto label_125910;
            case 0x125914u: goto label_125914;
            case 0x125918u: goto label_125918;
            case 0x12591Cu: goto label_12591c;
            case 0x125920u: goto label_125920;
            case 0x125924u: goto label_125924;
            case 0x125928u: goto label_125928;
            case 0x12592Cu: goto label_12592c;
            case 0x125930u: goto label_125930;
            case 0x125934u: goto label_125934;
            case 0x125938u: goto label_125938;
            case 0x12593Cu: goto label_12593c;
            case 0x125940u: goto label_125940;
            case 0x125944u: goto label_125944;
            case 0x125948u: goto label_125948;
            case 0x12594Cu: goto label_12594c;
            case 0x125950u: goto label_125950;
            case 0x125954u: goto label_125954;
            case 0x125958u: goto label_125958;
            case 0x12595Cu: goto label_12595c;
            case 0x125960u: goto label_125960;
            case 0x125964u: goto label_125964;
            case 0x125968u: goto label_125968;
            case 0x12596Cu: goto label_12596c;
            case 0x125970u: goto label_125970;
            case 0x125974u: goto label_125974;
            case 0x125978u: goto label_125978;
            case 0x12597Cu: goto label_12597c;
            case 0x125980u: goto label_125980;
            case 0x125984u: goto label_125984;
            case 0x125988u: goto label_125988;
            case 0x12598Cu: goto label_12598c;
            case 0x125990u: goto label_125990;
            case 0x125994u: goto label_125994;
            case 0x125998u: goto label_125998;
            case 0x12599Cu: goto label_12599c;
            case 0x1259A0u: goto label_1259a0;
            case 0x1259A4u: goto label_1259a4;
            case 0x1259A8u: goto label_1259a8;
            case 0x1259ACu: goto label_1259ac;
            case 0x1259B0u: goto label_1259b0;
            case 0x1259B4u: goto label_1259b4;
            case 0x1259B8u: goto label_1259b8;
            case 0x1259BCu: goto label_1259bc;
            case 0x1259C0u: goto label_1259c0;
            case 0x1259C4u: goto label_1259c4;
            case 0x1259C8u: goto label_1259c8;
            case 0x1259CCu: goto label_1259cc;
            case 0x1259D0u: goto label_1259d0;
            case 0x1259D4u: goto label_1259d4;
            case 0x1259D8u: goto label_1259d8;
            case 0x1259DCu: goto label_1259dc;
            case 0x1259E0u: goto label_1259e0;
            case 0x1259E4u: goto label_1259e4;
            case 0x1259E8u: goto label_1259e8;
            case 0x1259ECu: goto label_1259ec;
            case 0x1259F0u: goto label_1259f0;
            case 0x1259F4u: goto label_1259f4;
            case 0x1259F8u: goto label_1259f8;
            case 0x1259FCu: goto label_1259fc;
            case 0x125A00u: goto label_125a00;
            case 0x125A04u: goto label_125a04;
            case 0x125A08u: goto label_125a08;
            case 0x125A0Cu: goto label_125a0c;
            case 0x125A10u: goto label_125a10;
            case 0x125A14u: goto label_125a14;
            case 0x125A18u: goto label_125a18;
            case 0x125A1Cu: goto label_125a1c;
            case 0x125A20u: goto label_125a20;
            case 0x125A24u: goto label_125a24;
            case 0x125A28u: goto label_125a28;
            case 0x125A2Cu: goto label_125a2c;
            case 0x125A30u: goto label_125a30;
            case 0x125A34u: goto label_125a34;
            case 0x125A38u: goto label_125a38;
            case 0x125A3Cu: goto label_125a3c;
            case 0x125A40u: goto label_125a40;
            case 0x125A44u: goto label_125a44;
            case 0x125A48u: goto label_125a48;
            case 0x125A4Cu: goto label_125a4c;
            case 0x125A50u: goto label_125a50;
            case 0x125A54u: goto label_125a54;
            case 0x125A58u: goto label_125a58;
            case 0x125A5Cu: goto label_125a5c;
            case 0x125A60u: goto label_125a60;
            case 0x125A64u: goto label_125a64;
            case 0x125A68u: goto label_125a68;
            case 0x125A6Cu: goto label_125a6c;
            case 0x125A70u: goto label_125a70;
            case 0x125A74u: goto label_125a74;
            case 0x125A78u: goto label_125a78;
            case 0x125A7Cu: goto label_125a7c;
            case 0x125A80u: goto label_125a80;
            case 0x125A84u: goto label_125a84;
            case 0x125A88u: goto label_125a88;
            case 0x125A8Cu: goto label_125a8c;
            case 0x125A90u: goto label_125a90;
            case 0x125A94u: goto label_125a94;
            case 0x125A98u: goto label_125a98;
            case 0x125A9Cu: goto label_125a9c;
            case 0x125AA0u: goto label_125aa0;
            case 0x125AA4u: goto label_125aa4;
            case 0x125AA8u: goto label_125aa8;
            case 0x125AACu: goto label_125aac;
            case 0x125AB0u: goto label_125ab0;
            case 0x125AB4u: goto label_125ab4;
            case 0x125AB8u: goto label_125ab8;
            case 0x125ABCu: goto label_125abc;
            case 0x125AC0u: goto label_125ac0;
            case 0x125AC4u: goto label_125ac4;
            case 0x125AC8u: goto label_125ac8;
            case 0x125ACCu: goto label_125acc;
            case 0x125AD0u: goto label_125ad0;
            case 0x125AD4u: goto label_125ad4;
            case 0x125AD8u: goto label_125ad8;
            case 0x125ADCu: goto label_125adc;
            case 0x125AE0u: goto label_125ae0;
            case 0x125AE4u: goto label_125ae4;
            case 0x125AE8u: goto label_125ae8;
            case 0x125AECu: goto label_125aec;
            case 0x125AF0u: goto label_125af0;
            case 0x125AF4u: goto label_125af4;
            case 0x125AF8u: goto label_125af8;
            case 0x125AFCu: goto label_125afc;
            case 0x125B00u: goto label_125b00;
            case 0x125B04u: goto label_125b04;
            case 0x125B08u: goto label_125b08;
            case 0x125B0Cu: goto label_125b0c;
            case 0x125B10u: goto label_125b10;
            case 0x125B14u: goto label_125b14;
            case 0x125B18u: goto label_125b18;
            case 0x125B1Cu: goto label_125b1c;
            case 0x125B20u: goto label_125b20;
            case 0x125B24u: goto label_125b24;
            case 0x125B28u: goto label_125b28;
            case 0x125B2Cu: goto label_125b2c;
            case 0x125B30u: goto label_125b30;
            case 0x125B34u: goto label_125b34;
            case 0x125B38u: goto label_125b38;
            case 0x125B3Cu: goto label_125b3c;
            case 0x125B40u: goto label_125b40;
            case 0x125B44u: goto label_125b44;
            case 0x125B48u: goto label_125b48;
            case 0x125B4Cu: goto label_125b4c;
            case 0x125B50u: goto label_125b50;
            case 0x125B54u: goto label_125b54;
            case 0x125B58u: goto label_125b58;
            case 0x125B5Cu: goto label_125b5c;
            case 0x125B60u: goto label_125b60;
            case 0x125B64u: goto label_125b64;
            case 0x125B68u: goto label_125b68;
            case 0x125B6Cu: goto label_125b6c;
            case 0x125B70u: goto label_125b70;
            case 0x125B74u: goto label_125b74;
            case 0x125B78u: goto label_125b78;
            case 0x125B7Cu: goto label_125b7c;
            case 0x125B80u: goto label_125b80;
            case 0x125B84u: goto label_125b84;
            case 0x125B88u: goto label_125b88;
            case 0x125B8Cu: goto label_125b8c;
            case 0x125B90u: goto label_125b90;
            case 0x125B94u: goto label_125b94;
            case 0x125B98u: goto label_125b98;
            case 0x125B9Cu: goto label_125b9c;
            case 0x125BA0u: goto label_125ba0;
            case 0x125BA4u: goto label_125ba4;
            case 0x125BA8u: goto label_125ba8;
            case 0x125BACu: goto label_125bac;
            case 0x125BB0u: goto label_125bb0;
            case 0x125BB4u: goto label_125bb4;
            case 0x125BB8u: goto label_125bb8;
            case 0x125BBCu: goto label_125bbc;
            case 0x125BC0u: goto label_125bc0;
            case 0x125BC4u: goto label_125bc4;
            case 0x125BC8u: goto label_125bc8;
            case 0x125BCCu: goto label_125bcc;
            case 0x125BD0u: goto label_125bd0;
            case 0x125BD4u: goto label_125bd4;
            case 0x125BD8u: goto label_125bd8;
            case 0x125BDCu: goto label_125bdc;
            case 0x125BE0u: goto label_125be0;
            case 0x125BE4u: goto label_125be4;
            case 0x125BE8u: goto label_125be8;
            case 0x125BECu: goto label_125bec;
            case 0x125BF0u: goto label_125bf0;
            case 0x125BF4u: goto label_125bf4;
            case 0x125BF8u: goto label_125bf8;
            case 0x125BFCu: goto label_125bfc;
            case 0x125C00u: goto label_125c00;
            case 0x125C04u: goto label_125c04;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x125BE4u; }
            if (ctx->pc != 0x125BE4u) { return; }
        }
    }
    ctx->pc = 0x125BE4u;
label_125be4:
    // 0x125be4: 0x24020003
    ctx->pc = 0x125be4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_125be8:
    // 0x125be8: 0xae020004
    ctx->pc = 0x125be8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_125bec:
    // 0x125bec: 0xdfb00000
    ctx->pc = 0x125becu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_125bf0:
    // 0x125bf0: 0xdfb10008
    ctx->pc = 0x125bf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_125bf4:
    // 0x125bf4: 0xdfb20010
    ctx->pc = 0x125bf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_125bf8:
    // 0x125bf8: 0xdfbf0018
    ctx->pc = 0x125bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_125bfc:
    // 0x125bfc: 0x3e00008
label_125c00:
    if (ctx->pc == 0x125C00u) {
        ctx->pc = 0x125C00u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x125C04u;
        goto label_125c04;
    }
    ctx->pc = 0x125BFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125C00u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125878u: goto label_125878;
            case 0x12587Cu: goto label_12587c;
            case 0x125880u: goto label_125880;
            case 0x125884u: goto label_125884;
            case 0x125888u: goto label_125888;
            case 0x12588Cu: goto label_12588c;
            case 0x125890u: goto label_125890;
            case 0x125894u: goto label_125894;
            case 0x125898u: goto label_125898;
            case 0x12589Cu: goto label_12589c;
            case 0x1258A0u: goto label_1258a0;
            case 0x1258A4u: goto label_1258a4;
            case 0x1258A8u: goto label_1258a8;
            case 0x1258ACu: goto label_1258ac;
            case 0x1258B0u: goto label_1258b0;
            case 0x1258B4u: goto label_1258b4;
            case 0x1258B8u: goto label_1258b8;
            case 0x1258BCu: goto label_1258bc;
            case 0x1258C0u: goto label_1258c0;
            case 0x1258C4u: goto label_1258c4;
            case 0x1258C8u: goto label_1258c8;
            case 0x1258CCu: goto label_1258cc;
            case 0x1258D0u: goto label_1258d0;
            case 0x1258D4u: goto label_1258d4;
            case 0x1258D8u: goto label_1258d8;
            case 0x1258DCu: goto label_1258dc;
            case 0x1258E0u: goto label_1258e0;
            case 0x1258E4u: goto label_1258e4;
            case 0x1258E8u: goto label_1258e8;
            case 0x1258ECu: goto label_1258ec;
            case 0x1258F0u: goto label_1258f0;
            case 0x1258F4u: goto label_1258f4;
            case 0x1258F8u: goto label_1258f8;
            case 0x1258FCu: goto label_1258fc;
            case 0x125900u: goto label_125900;
            case 0x125904u: goto label_125904;
            case 0x125908u: goto label_125908;
            case 0x12590Cu: goto label_12590c;
            case 0x125910u: goto label_125910;
            case 0x125914u: goto label_125914;
            case 0x125918u: goto label_125918;
            case 0x12591Cu: goto label_12591c;
            case 0x125920u: goto label_125920;
            case 0x125924u: goto label_125924;
            case 0x125928u: goto label_125928;
            case 0x12592Cu: goto label_12592c;
            case 0x125930u: goto label_125930;
            case 0x125934u: goto label_125934;
            case 0x125938u: goto label_125938;
            case 0x12593Cu: goto label_12593c;
            case 0x125940u: goto label_125940;
            case 0x125944u: goto label_125944;
            case 0x125948u: goto label_125948;
            case 0x12594Cu: goto label_12594c;
            case 0x125950u: goto label_125950;
            case 0x125954u: goto label_125954;
            case 0x125958u: goto label_125958;
            case 0x12595Cu: goto label_12595c;
            case 0x125960u: goto label_125960;
            case 0x125964u: goto label_125964;
            case 0x125968u: goto label_125968;
            case 0x12596Cu: goto label_12596c;
            case 0x125970u: goto label_125970;
            case 0x125974u: goto label_125974;
            case 0x125978u: goto label_125978;
            case 0x12597Cu: goto label_12597c;
            case 0x125980u: goto label_125980;
            case 0x125984u: goto label_125984;
            case 0x125988u: goto label_125988;
            case 0x12598Cu: goto label_12598c;
            case 0x125990u: goto label_125990;
            case 0x125994u: goto label_125994;
            case 0x125998u: goto label_125998;
            case 0x12599Cu: goto label_12599c;
            case 0x1259A0u: goto label_1259a0;
            case 0x1259A4u: goto label_1259a4;
            case 0x1259A8u: goto label_1259a8;
            case 0x1259ACu: goto label_1259ac;
            case 0x1259B0u: goto label_1259b0;
            case 0x1259B4u: goto label_1259b4;
            case 0x1259B8u: goto label_1259b8;
            case 0x1259BCu: goto label_1259bc;
            case 0x1259C0u: goto label_1259c0;
            case 0x1259C4u: goto label_1259c4;
            case 0x1259C8u: goto label_1259c8;
            case 0x1259CCu: goto label_1259cc;
            case 0x1259D0u: goto label_1259d0;
            case 0x1259D4u: goto label_1259d4;
            case 0x1259D8u: goto label_1259d8;
            case 0x1259DCu: goto label_1259dc;
            case 0x1259E0u: goto label_1259e0;
            case 0x1259E4u: goto label_1259e4;
            case 0x1259E8u: goto label_1259e8;
            case 0x1259ECu: goto label_1259ec;
            case 0x1259F0u: goto label_1259f0;
            case 0x1259F4u: goto label_1259f4;
            case 0x1259F8u: goto label_1259f8;
            case 0x1259FCu: goto label_1259fc;
            case 0x125A00u: goto label_125a00;
            case 0x125A04u: goto label_125a04;
            case 0x125A08u: goto label_125a08;
            case 0x125A0Cu: goto label_125a0c;
            case 0x125A10u: goto label_125a10;
            case 0x125A14u: goto label_125a14;
            case 0x125A18u: goto label_125a18;
            case 0x125A1Cu: goto label_125a1c;
            case 0x125A20u: goto label_125a20;
            case 0x125A24u: goto label_125a24;
            case 0x125A28u: goto label_125a28;
            case 0x125A2Cu: goto label_125a2c;
            case 0x125A30u: goto label_125a30;
            case 0x125A34u: goto label_125a34;
            case 0x125A38u: goto label_125a38;
            case 0x125A3Cu: goto label_125a3c;
            case 0x125A40u: goto label_125a40;
            case 0x125A44u: goto label_125a44;
            case 0x125A48u: goto label_125a48;
            case 0x125A4Cu: goto label_125a4c;
            case 0x125A50u: goto label_125a50;
            case 0x125A54u: goto label_125a54;
            case 0x125A58u: goto label_125a58;
            case 0x125A5Cu: goto label_125a5c;
            case 0x125A60u: goto label_125a60;
            case 0x125A64u: goto label_125a64;
            case 0x125A68u: goto label_125a68;
            case 0x125A6Cu: goto label_125a6c;
            case 0x125A70u: goto label_125a70;
            case 0x125A74u: goto label_125a74;
            case 0x125A78u: goto label_125a78;
            case 0x125A7Cu: goto label_125a7c;
            case 0x125A80u: goto label_125a80;
            case 0x125A84u: goto label_125a84;
            case 0x125A88u: goto label_125a88;
            case 0x125A8Cu: goto label_125a8c;
            case 0x125A90u: goto label_125a90;
            case 0x125A94u: goto label_125a94;
            case 0x125A98u: goto label_125a98;
            case 0x125A9Cu: goto label_125a9c;
            case 0x125AA0u: goto label_125aa0;
            case 0x125AA4u: goto label_125aa4;
            case 0x125AA8u: goto label_125aa8;
            case 0x125AACu: goto label_125aac;
            case 0x125AB0u: goto label_125ab0;
            case 0x125AB4u: goto label_125ab4;
            case 0x125AB8u: goto label_125ab8;
            case 0x125ABCu: goto label_125abc;
            case 0x125AC0u: goto label_125ac0;
            case 0x125AC4u: goto label_125ac4;
            case 0x125AC8u: goto label_125ac8;
            case 0x125ACCu: goto label_125acc;
            case 0x125AD0u: goto label_125ad0;
            case 0x125AD4u: goto label_125ad4;
            case 0x125AD8u: goto label_125ad8;
            case 0x125ADCu: goto label_125adc;
            case 0x125AE0u: goto label_125ae0;
            case 0x125AE4u: goto label_125ae4;
            case 0x125AE8u: goto label_125ae8;
            case 0x125AECu: goto label_125aec;
            case 0x125AF0u: goto label_125af0;
            case 0x125AF4u: goto label_125af4;
            case 0x125AF8u: goto label_125af8;
            case 0x125AFCu: goto label_125afc;
            case 0x125B00u: goto label_125b00;
            case 0x125B04u: goto label_125b04;
            case 0x125B08u: goto label_125b08;
            case 0x125B0Cu: goto label_125b0c;
            case 0x125B10u: goto label_125b10;
            case 0x125B14u: goto label_125b14;
            case 0x125B18u: goto label_125b18;
            case 0x125B1Cu: goto label_125b1c;
            case 0x125B20u: goto label_125b20;
            case 0x125B24u: goto label_125b24;
            case 0x125B28u: goto label_125b28;
            case 0x125B2Cu: goto label_125b2c;
            case 0x125B30u: goto label_125b30;
            case 0x125B34u: goto label_125b34;
            case 0x125B38u: goto label_125b38;
            case 0x125B3Cu: goto label_125b3c;
            case 0x125B40u: goto label_125b40;
            case 0x125B44u: goto label_125b44;
            case 0x125B48u: goto label_125b48;
            case 0x125B4Cu: goto label_125b4c;
            case 0x125B50u: goto label_125b50;
            case 0x125B54u: goto label_125b54;
            case 0x125B58u: goto label_125b58;
            case 0x125B5Cu: goto label_125b5c;
            case 0x125B60u: goto label_125b60;
            case 0x125B64u: goto label_125b64;
            case 0x125B68u: goto label_125b68;
            case 0x125B6Cu: goto label_125b6c;
            case 0x125B70u: goto label_125b70;
            case 0x125B74u: goto label_125b74;
            case 0x125B78u: goto label_125b78;
            case 0x125B7Cu: goto label_125b7c;
            case 0x125B80u: goto label_125b80;
            case 0x125B84u: goto label_125b84;
            case 0x125B88u: goto label_125b88;
            case 0x125B8Cu: goto label_125b8c;
            case 0x125B90u: goto label_125b90;
            case 0x125B94u: goto label_125b94;
            case 0x125B98u: goto label_125b98;
            case 0x125B9Cu: goto label_125b9c;
            case 0x125BA0u: goto label_125ba0;
            case 0x125BA4u: goto label_125ba4;
            case 0x125BA8u: goto label_125ba8;
            case 0x125BACu: goto label_125bac;
            case 0x125BB0u: goto label_125bb0;
            case 0x125BB4u: goto label_125bb4;
            case 0x125BB8u: goto label_125bb8;
            case 0x125BBCu: goto label_125bbc;
            case 0x125BC0u: goto label_125bc0;
            case 0x125BC4u: goto label_125bc4;
            case 0x125BC8u: goto label_125bc8;
            case 0x125BCCu: goto label_125bcc;
            case 0x125BD0u: goto label_125bd0;
            case 0x125BD4u: goto label_125bd4;
            case 0x125BD8u: goto label_125bd8;
            case 0x125BDCu: goto label_125bdc;
            case 0x125BE0u: goto label_125be0;
            case 0x125BE4u: goto label_125be4;
            case 0x125BE8u: goto label_125be8;
            case 0x125BECu: goto label_125bec;
            case 0x125BF0u: goto label_125bf0;
            case 0x125BF4u: goto label_125bf4;
            case 0x125BF8u: goto label_125bf8;
            case 0x125BFCu: goto label_125bfc;
            case 0x125C00u: goto label_125c00;
            case 0x125C04u: goto label_125c04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x125C04u;
label_125c04:
    // 0x125c04: 0x0
    ctx->pc = 0x125c04u;
    // NOP
}
