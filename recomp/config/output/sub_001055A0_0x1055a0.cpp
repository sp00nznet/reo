#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001055A0
// Address: 0x1055a0 - 0x1057b8
void sub_001055A0_0x1055a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1055a0u;

label_1055a0:
    // 0x1055a0: 0x80a30000
    ctx->pc = 0x1055a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1055a4: 0x24020072
    ctx->pc = 0x1055a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 114));
    // 0x1055a8: 0x1062000d
    ctx->pc = 0x1055A8u;
    {
        const bool branch_taken_0x1055a8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1055ACu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 115));
        if (branch_taken_0x1055a8) {
            ctx->pc = 0x1055E0u;
            goto label_1055e0;
        }
    }
    ctx->pc = 0x1055B0u;
    // 0x1055b0: 0x10400007
    ctx->pc = 0x1055B0u;
    {
        const bool branch_taken_0x1055b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1055B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 119));
        if (branch_taken_0x1055b0) {
            ctx->pc = 0x1055D0u;
            goto label_1055d0;
        }
    }
    ctx->pc = 0x1055B8u;
    // 0x1055b8: 0x24020061
    ctx->pc = 0x1055b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 97));
    // 0x1055bc: 0x10620010
    ctx->pc = 0x1055BCu;
    {
        const bool branch_taken_0x1055bc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1055C0u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 264));
        if (branch_taken_0x1055bc) {
            ctx->pc = 0x105600u;
            goto label_105600;
        }
    }
    ctx->pc = 0x1055C4u;
    // 0x1055c4: 0x10000012
    ctx->pc = 0x1055C4u;
    {
        const bool branch_taken_0x1055c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1055C8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 22));
        if (branch_taken_0x1055c4) {
            ctx->pc = 0x105610u;
            goto label_105610;
        }
    }
    ctx->pc = 0x1055CCu;
    // 0x1055cc: 0x0
    ctx->pc = 0x1055ccu;
    // NOP
label_1055d0:
    // 0x1055d0: 0x10620007
    ctx->pc = 0x1055D0u;
    {
        const bool branch_taken_0x1055d0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1055D4u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x1055d0) {
            ctx->pc = 0x1055F0u;
            goto label_1055f0;
        }
    }
    ctx->pc = 0x1055D8u;
    // 0x1055d8: 0x1000000d
    ctx->pc = 0x1055D8u;
    {
        const bool branch_taken_0x1055d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1055DCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 22));
        if (branch_taken_0x1055d8) {
            ctx->pc = 0x105610u;
            goto label_105610;
        }
    }
    ctx->pc = 0x1055E0u;
label_1055e0:
    // 0x1055e0: 0x24080004
    ctx->pc = 0x1055e0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1055e4: 0x182d
    ctx->pc = 0x1055e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1055e8: 0x1000000d
    ctx->pc = 0x1055E8u;
    {
        const bool branch_taken_0x1055e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1055ECu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1055e8) {
            ctx->pc = 0x105620u;
            goto label_105620;
        }
    }
    ctx->pc = 0x1055F0u;
label_1055f0:
    // 0x1055f0: 0x24030001
    ctx->pc = 0x1055f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1055f4: 0x1000000a
    ctx->pc = 0x1055F4u;
    {
        const bool branch_taken_0x1055f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1055F8u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1536));
        if (branch_taken_0x1055f4) {
            ctx->pc = 0x105620u;
            goto label_105620;
        }
    }
    ctx->pc = 0x1055FCu;
    // 0x1055fc: 0x0
    ctx->pc = 0x1055fcu;
    // NOP
label_105600:
    // 0x105600: 0x24030001
    ctx->pc = 0x105600u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x105604: 0x10000006
    ctx->pc = 0x105604u;
    {
        const bool branch_taken_0x105604 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x105608u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 520));
        if (branch_taken_0x105604) {
            ctx->pc = 0x105620u;
            goto label_105620;
        }
    }
    ctx->pc = 0x10560Cu;
    // 0x10560c: 0x0
    ctx->pc = 0x10560cu;
    // NOP
label_105610:
    // 0x105610: 0x102d
    ctx->pc = 0x105610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105614: 0x3e00008
    ctx->pc = 0x105614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105618u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1055A0u: goto label_1055a0;
            case 0x1055D0u: goto label_1055d0;
            case 0x1055E0u: goto label_1055e0;
            case 0x1055F0u: goto label_1055f0;
            case 0x105600u: goto label_105600;
            case 0x105610u: goto label_105610;
            case 0x105620u: goto label_105620;
            case 0x105644u: goto label_105644;
            case 0x105648u: goto label_105648;
            case 0x10564Cu: goto label_10564c;
            case 0x105658u: goto label_105658;
            case 0x105680u: goto label_105680;
            case 0x1056E8u: goto label_1056e8;
            case 0x105718u: goto label_105718;
            case 0x10571Cu: goto label_10571c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10561Cu;
    // 0x10561c: 0x0
    ctx->pc = 0x10561cu;
    // NOP
label_105620:
    // 0x105620: 0x80a20001
    ctx->pc = 0x105620u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x105624: 0x10400008
    ctx->pc = 0x105624u;
    {
        const bool branch_taken_0x105624 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x105628u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 43));
        if (branch_taken_0x105624) {
            ctx->pc = 0x105648u;
            goto label_105648;
        }
    }
    ctx->pc = 0x10562Cu;
    // 0x10562c: 0x50440005
    ctx->pc = 0x10562Cu;
    {
        const bool branch_taken_0x10562c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        if (branch_taken_0x10562c) {
            ctx->pc = 0x105630u;
            SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
            ctx->pc = 0x105644u;
            goto label_105644;
        }
    }
    ctx->pc = 0x105634u;
    // 0x105634: 0x80a20002
    ctx->pc = 0x105634u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x105638: 0x14440004
    ctx->pc = 0x105638u;
    {
        const bool branch_taken_0x105638 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x10563Cu;
        SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        if (branch_taken_0x105638) {
            ctx->pc = 0x10564Cu;
            goto label_10564c;
        }
    }
    ctx->pc = 0x105640u;
    // 0x105640: 0x24080010
    ctx->pc = 0x105640u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
label_105644:
    // 0x105644: 0x24030002
    ctx->pc = 0x105644u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_105648:
    // 0x105648: 0x671825
    ctx->pc = 0x105648u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_10564c:
    // 0x10564c: 0x100102d
    ctx->pc = 0x10564cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105650: 0x3e00008
    ctx->pc = 0x105650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105654u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1055A0u: goto label_1055a0;
            case 0x1055D0u: goto label_1055d0;
            case 0x1055E0u: goto label_1055e0;
            case 0x1055F0u: goto label_1055f0;
            case 0x105600u: goto label_105600;
            case 0x105610u: goto label_105610;
            case 0x105620u: goto label_105620;
            case 0x105644u: goto label_105644;
            case 0x105648u: goto label_105648;
            case 0x10564Cu: goto label_10564c;
            case 0x105658u: goto label_105658;
            case 0x105680u: goto label_105680;
            case 0x1056E8u: goto label_1056e8;
            case 0x105718u: goto label_105718;
            case 0x10571Cu: goto label_10571c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x105658u;
label_105658:
    // 0x105658: 0x27bdffd0
    ctx->pc = 0x105658u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10565c: 0xffb20020
    ctx->pc = 0x10565cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x105660: 0xa0902d
    ctx->pc = 0x105660u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105664: 0xc0282d
    ctx->pc = 0x105664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105668: 0x3a0302d
    ctx->pc = 0x105668u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10566c: 0xffb00010
    ctx->pc = 0x10566cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x105670: 0xffb10018
    ctx->pc = 0x105670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x105674: 0xffbf0028
    ctx->pc = 0x105674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x105678: 0xc041568
    ctx->pc = 0x105678u;
    SET_GPR_U32(ctx, 31, 0x105680u);
    ctx->pc = 0x10567Cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1055A0u;
    goto label_1055a0;
    ctx->pc = 0x105680u;
label_105680:
    // 0x105680: 0x40882d
    ctx->pc = 0x105680u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105684: 0x12200025
    ctx->pc = 0x105684u;
    {
        const bool branch_taken_0x105684 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x105688u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x105684) {
            ctx->pc = 0x10571Cu;
            goto label_10571c;
        }
    }
    ctx->pc = 0x10568Cu;
    // 0x10568c: 0xc0414f6
    ctx->pc = 0x10568Cu;
    SET_GPR_U32(ctx, 31, 0x105694u);
    ctx->pc = 0x1053D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001053D8_0x1053d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105694u; }
    }
    if (ctx->pc != 0x105694u) { return; }
    ctx->pc = 0x105694u;
    // 0x105694: 0x240282d
    ctx->pc = 0x105694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105698: 0x40802d
    ctx->pc = 0x105698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10569c: 0x1200001f
    ctx->pc = 0x10569Cu;
    {
        const bool branch_taken_0x10569c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1056A0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 438));
        if (branch_taken_0x10569c) {
            ctx->pc = 0x10571Cu;
            goto label_10571c;
        }
    }
    ctx->pc = 0x1056A4u;
    // 0x1056a4: 0x8e040054
    ctx->pc = 0x1056a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1056a8: 0xc042384
    ctx->pc = 0x1056A8u;
    SET_GPR_U32(ctx, 31, 0x1056B0u);
    ctx->pc = 0x1056ACu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x108E10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108E10_0x108e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1056B0u; }
    }
    if (ctx->pc != 0x1056B0u) { return; }
    ctx->pc = 0x1056B0u;
    // 0x1056b0: 0x3c030011
    ctx->pc = 0x1056b0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17 << 16));
    // 0x1056b4: 0x40382d
    ctx->pc = 0x1056b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1056b8: 0x102d
    ctx->pc = 0x1056b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1056bc: 0x3c040011
    ctx->pc = 0x1056bcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)17 << 16));
    // 0x1056c0: 0x3c050011
    ctx->pc = 0x1056c0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)17 << 16));
    // 0x1056c4: 0x3c060011
    ctx->pc = 0x1056c4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)17 << 16));
    // 0x1056c8: 0x2463a970
    ctx->pc = 0x1056c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294945136));
    // 0x1056cc: 0x2484a9d8
    ctx->pc = 0x1056ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945240));
    // 0x1056d0: 0x24a5aa58
    ctx->pc = 0x1056d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294945368));
    // 0x1056d4: 0x24c6aac0
    ctx->pc = 0x1056d4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294945472));
    // 0x1056d8: 0x4e10003
    ctx->pc = 0x1056D8u;
    {
        const bool branch_taken_0x1056d8 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1056DCu;
        SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 17), 256));
        if (branch_taken_0x1056d8) {
            ctx->pc = 0x1056E8u;
            goto label_1056e8;
        }
    }
    ctx->pc = 0x1056E0u;
    // 0x1056e0: 0x1000000e
    ctx->pc = 0x1056E0u;
    {
        const bool branch_taken_0x1056e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1056E4u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1056e0) {
            ctx->pc = 0x10571Cu;
            goto label_10571c;
        }
    }
    ctx->pc = 0x1056E8u;
label_1056e8:
    // 0x1056e8: 0xa607000e
    ctx->pc = 0x1056e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 7));
    // 0x1056ec: 0xae030020
    ctx->pc = 0x1056ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x1056f0: 0xae040024
    ctx->pc = 0x1056f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 4));
    // 0x1056f4: 0xae050028
    ctx->pc = 0x1056f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 5));
    // 0x1056f8: 0xae06002c
    ctx->pc = 0x1056f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 6));
    // 0x1056fc: 0xa611000c
    ctx->pc = 0x1056fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 17));
    // 0x105700: 0x11000005
    ctx->pc = 0x105700u;
    {
        const bool branch_taken_0x105700 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        ctx->pc = 0x105704u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 16));
        if (branch_taken_0x105700) {
            ctx->pc = 0x105718u;
            goto label_105718;
        }
    }
    ctx->pc = 0x105708u;
    // 0x105708: 0x200202d
    ctx->pc = 0x105708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10570c: 0x282d
    ctx->pc = 0x10570cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105710: 0xc041750
    ctx->pc = 0x105710u;
    SET_GPR_U32(ctx, 31, 0x105718u);
    ctx->pc = 0x105714u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x105D40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00105D40_0x105d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105718u; }
    }
    if (ctx->pc != 0x105718u) { return; }
    ctx->pc = 0x105718u;
label_105718:
    // 0x105718: 0x200102d
    ctx->pc = 0x105718u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10571c:
    // 0x10571c: 0xdfb00010
    ctx->pc = 0x10571cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105720: 0xdfb10018
    ctx->pc = 0x105720u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x105724: 0xdfb20020
    ctx->pc = 0x105724u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x105728: 0xdfbf0028
    ctx->pc = 0x105728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10572c: 0x3e00008
    ctx->pc = 0x10572Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105730u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1055A0u: goto label_1055a0;
            case 0x1055D0u: goto label_1055d0;
            case 0x1055E0u: goto label_1055e0;
            case 0x1055F0u: goto label_1055f0;
            case 0x105600u: goto label_105600;
            case 0x105610u: goto label_105610;
            case 0x105620u: goto label_105620;
            case 0x105644u: goto label_105644;
            case 0x105648u: goto label_105648;
            case 0x10564Cu: goto label_10564c;
            case 0x105658u: goto label_105658;
            case 0x105680u: goto label_105680;
            case 0x1056E8u: goto label_1056e8;
            case 0x105718u: goto label_105718;
            case 0x10571Cu: goto label_10571c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x105734u;
    // 0x105734: 0x0
    ctx->pc = 0x105734u;
    // NOP
    // 0x105738: 0x27bdfff0
    ctx->pc = 0x105738u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10573c: 0x3c020021
    ctx->pc = 0x10573cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x105740: 0xffbf0000
    ctx->pc = 0x105740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x105744: 0xa0302d
    ctx->pc = 0x105744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105748: 0x80282d
    ctx->pc = 0x105748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10574c: 0x8c4497f0
    ctx->pc = 0x10574cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294940656)));
    // 0x105750: 0xdfbf0000
    ctx->pc = 0x105750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105754: 0x8041596
    ctx->pc = 0x105754u;
    ctx->pc = 0x105758u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x105658u;
    goto label_105658;
    ctx->pc = 0x10575Cu;
    // 0x10575c: 0x0
    ctx->pc = 0x10575cu;
    // NOP
    // 0x105760: 0x27bdffa0
    ctx->pc = 0x105760u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x105764: 0xffa60030
    ctx->pc = 0x105764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 6));
    // 0x105768: 0x27a60030
    ctx->pc = 0x105768u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 48));
    // 0x10576c: 0xffbf0000
    ctx->pc = 0x10576cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x105770: 0xffa70038
    ctx->pc = 0x105770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 7));
    // 0x105774: 0xffa80040
    ctx->pc = 0x105774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 8));
    // 0x105778: 0xffa90048
    ctx->pc = 0x105778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 9));
    // 0x10577c: 0xffaa0050
    ctx->pc = 0x10577cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 10));
    // 0x105780: 0xffab0058
    ctx->pc = 0x105780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 11));
    // 0x105784: 0xe7ac0010
    ctx->pc = 0x105784u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x105788: 0xe7ad0014
    ctx->pc = 0x105788u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x10578c: 0xe7ae0018
    ctx->pc = 0x10578cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x105790: 0xe7af001c
    ctx->pc = 0x105790u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x105794: 0xe7b00020
    ctx->pc = 0x105794u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x105798: 0xe7b10024
    ctx->pc = 0x105798u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x10579c: 0xe7b20028
    ctx->pc = 0x10579cu;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1057a0: 0xc04345a
    ctx->pc = 0x1057A0u;
    SET_GPR_U32(ctx, 31, 0x1057A8u);
    ctx->pc = 0x1057A4u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->pc = 0x10D168u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D168_0x10d168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1057A8u; }
    }
    if (ctx->pc != 0x1057A8u) { return; }
    ctx->pc = 0x1057A8u;
    // 0x1057a8: 0xdfbf0000
    ctx->pc = 0x1057a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1057ac: 0x3e00008
    ctx->pc = 0x1057ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1057B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1055A0u: goto label_1055a0;
            case 0x1055D0u: goto label_1055d0;
            case 0x1055E0u: goto label_1055e0;
            case 0x1055F0u: goto label_1055f0;
            case 0x105600u: goto label_105600;
            case 0x105610u: goto label_105610;
            case 0x105620u: goto label_105620;
            case 0x105644u: goto label_105644;
            case 0x105648u: goto label_105648;
            case 0x10564Cu: goto label_10564c;
            case 0x105658u: goto label_105658;
            case 0x105680u: goto label_105680;
            case 0x1056E8u: goto label_1056e8;
            case 0x105718u: goto label_105718;
            case 0x10571Cu: goto label_10571c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1057B4u;
    // 0x1057b4: 0x0
    ctx->pc = 0x1057b4u;
    // NOP
}
