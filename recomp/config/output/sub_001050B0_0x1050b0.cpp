#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001050B0
// Address: 0x1050b0 - 0x105300
void sub_001050B0_0x1050b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1050b0u;

label_1050b0:
    // 0x1050b0: 0x27bdffe0
    ctx->pc = 0x1050b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1050b4:
    // 0x1050b4: 0xffb10008
    ctx->pc = 0x1050b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1050b8:
    // 0x1050b8: 0x80882d
    ctx->pc = 0x1050b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1050bc:
    // 0x1050bc: 0xffb00000
    ctx->pc = 0x1050bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1050c0:
    // 0x1050c0: 0xffb20010
    ctx->pc = 0x1050c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1050c4:
    // 0x1050c4: 0x1620000c
label_1050c8:
    if (ctx->pc == 0x1050C8u) {
        ctx->pc = 0x1050C8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->pc = 0x1050CCu;
        goto label_1050cc;
    }
    ctx->pc = 0x1050C4u;
    {
        const bool branch_taken_0x1050c4 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x1050C8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        if (branch_taken_0x1050c4) {
            ctx->pc = 0x1050F8u;
            goto label_1050f8;
        }
    }
    ctx->pc = 0x1050CCu;
label_1050cc:
    // 0x1050cc: 0x3c020021
    ctx->pc = 0x1050ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
label_1050d0:
    // 0x1050d0: 0x3c050010
    ctx->pc = 0x1050d0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)16 << 16));
label_1050d4:
    // 0x1050d4: 0x8c4497f0
    ctx->pc = 0x1050d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294940656)));
label_1050d8:
    // 0x1050d8: 0x24a550b0
    ctx->pc = 0x1050d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 20656));
label_1050dc:
    // 0x1050dc: 0xdfb00000
    ctx->pc = 0x1050dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1050e0:
    // 0x1050e0: 0xdfb10008
    ctx->pc = 0x1050e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1050e4:
    // 0x1050e4: 0xdfb20010
    ctx->pc = 0x1050e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1050e8:
    // 0x1050e8: 0xdfbf0018
    ctx->pc = 0x1050e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1050ec:
    // 0x1050ec: 0x80419ce
label_1050f0:
    if (ctx->pc == 0x1050F0u) {
        ctx->pc = 0x1050F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1050F4u;
        goto label_1050f4;
    }
    ctx->pc = 0x1050ECu;
    ctx->pc = 0x1050F0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x106738u;
    sub_00106738_0x106738(rdram, ctx, runtime); return;
    ctx->pc = 0x1050F4u;
label_1050f4:
    // 0x1050f4: 0x0
    ctx->pc = 0x1050f4u;
    // NOP
label_1050f8:
    // 0x1050f8: 0x8e230054
    ctx->pc = 0x1050f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_1050fc:
    // 0x1050fc: 0x54600006
label_105100:
    if (ctx->pc == 0x105100u) {
        ctx->pc = 0x105100u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 56)));
        ctx->pc = 0x105104u;
        goto label_105104;
    }
    ctx->pc = 0x1050FCu;
    {
        const bool branch_taken_0x1050fc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1050fc) {
            ctx->pc = 0x105100u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->pc = 0x105118u;
            goto label_105118;
        }
    }
    ctx->pc = 0x105104u;
label_105104:
    // 0x105104: 0x3c020021
    ctx->pc = 0x105104u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
label_105108:
    // 0x105108: 0x8c4397f0
    ctx->pc = 0x105108u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294940656)));
label_10510c:
    // 0x10510c: 0xae230054
    ctx->pc = 0x10510cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_105110:
    // 0x105110: 0x8c620038
    ctx->pc = 0x105110u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_105114:
    // 0x105114: 0x0
    ctx->pc = 0x105114u;
    // NOP
label_105118:
    // 0x105118: 0x54400004
label_10511c:
    if (ctx->pc == 0x10511Cu) {
        ctx->pc = 0x10511Cu;
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x105120u;
        goto label_105120;
    }
    ctx->pc = 0x105118u;
    {
        const bool branch_taken_0x105118 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x105118) {
            ctx->pc = 0x10511Cu;
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->pc = 0x10512Cu;
            goto label_10512c;
        }
    }
    ctx->pc = 0x105120u;
label_105120:
    // 0x105120: 0xc041544
label_105124:
    if (ctx->pc == 0x105124u) {
        ctx->pc = 0x105124u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x105128u;
        goto label_105128;
    }
    ctx->pc = 0x105120u;
    SET_GPR_U32(ctx, 31, 0x105128u);
    ctx->pc = 0x105124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x105510u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00105510_0x105510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105128u; }
    }
    if (ctx->pc != 0x105128u) { return; }
    ctx->pc = 0x105128u;
label_105128:
    // 0x105128: 0x8623000c
    ctx->pc = 0x105128u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_10512c:
    // 0x10512c: 0x30620008
    ctx->pc = 0x10512cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 8));
label_105130:
    // 0x105130: 0x1040001e
label_105134:
    if (ctx->pc == 0x105134u) {
        ctx->pc = 0x105134u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x105138u;
        goto label_105138;
    }
    ctx->pc = 0x105130u;
    {
        const bool branch_taken_0x105130 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x105134u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x105130) {
            ctx->pc = 0x1051ACu;
            goto label_1051ac;
        }
    }
    ctx->pc = 0x105138u;
label_105138:
    // 0x105138: 0x8e320010
    ctx->pc = 0x105138u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_10513c:
    // 0x10513c: 0x1240001b
label_105140:
    if (ctx->pc == 0x105140u) {
        ctx->pc = 0x105140u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x105144u;
        goto label_105144;
    }
    ctx->pc = 0x10513Cu;
    {
        const bool branch_taken_0x10513c = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x105140u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10513c) {
            ctx->pc = 0x1051ACu;
            goto label_1051ac;
        }
    }
    ctx->pc = 0x105144u;
label_105144:
    // 0x105144: 0x8e220000
    ctx->pc = 0x105144u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_105148:
    // 0x105148: 0x30630003
    ctx->pc = 0x105148u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 3));
label_10514c:
    // 0x10514c: 0xae320000
    ctx->pc = 0x10514cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
label_105150:
    // 0x105150: 0x14600009
label_105154:
    if (ctx->pc == 0x105154u) {
        ctx->pc = 0x105154u;
        SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->pc = 0x105158u;
        goto label_105158;
    }
    ctx->pc = 0x105150u;
    {
        const bool branch_taken_0x105150 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x105154u;
        SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        if (branch_taken_0x105150) {
            ctx->pc = 0x105178u;
            goto label_105178;
        }
    }
    ctx->pc = 0x105158u;
label_105158:
    // 0x105158: 0x10000007
label_10515c:
    if (ctx->pc == 0x10515Cu) {
        ctx->pc = 0x10515Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x105160u;
        goto label_105160;
    }
    ctx->pc = 0x105158u;
    {
        const bool branch_taken_0x105158 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10515Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 20)));
        if (branch_taken_0x105158) {
            ctx->pc = 0x105178u;
            goto label_105178;
        }
    }
    ctx->pc = 0x105160u;
label_105160:
    // 0x105160: 0x9623000c
    ctx->pc = 0x105160u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_105164:
    // 0x105164: 0x2402ffff
    ctx->pc = 0x105164u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_105168:
    // 0x105168: 0x34630040
    ctx->pc = 0x105168u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 64));
label_10516c:
    // 0x10516c: 0x1000000f
label_105170:
    if (ctx->pc == 0x105170u) {
        ctx->pc = 0x105170u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x105174u;
        goto label_105174;
    }
    ctx->pc = 0x10516Cu;
    {
        const bool branch_taken_0x10516c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x105170u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x10516c) {
            ctx->pc = 0x1051ACu;
            goto label_1051ac;
        }
    }
    ctx->pc = 0x105174u;
label_105174:
    // 0x105174: 0x0
    ctx->pc = 0x105174u;
    // NOP
label_105178:
    // 0x105178: 0x1a00000b
label_10517c:
    if (ctx->pc == 0x10517Cu) {
        ctx->pc = 0x10517Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
        ctx->pc = 0x105180u;
        goto label_105180;
    }
    ctx->pc = 0x105178u;
    {
        const bool branch_taken_0x105178 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x10517Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
        if (branch_taken_0x105178) {
            ctx->pc = 0x1051A8u;
            goto label_1051a8;
        }
    }
    ctx->pc = 0x105180u;
label_105180:
    // 0x105180: 0x8e220024
    ctx->pc = 0x105180u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_105184:
    // 0x105184: 0x200302d
    ctx->pc = 0x105184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_105188:
    // 0x105188: 0x8e24001c
    ctx->pc = 0x105188u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_10518c:
    // 0x10518c: 0x40f809
label_105190:
    if (ctx->pc == 0x105190u) {
        ctx->pc = 0x105190u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x105194u;
        goto label_105194;
    }
    ctx->pc = 0x10518Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x105194u);
        ctx->pc = 0x105190u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1050B0u: goto label_1050b0;
            case 0x1050B4u: goto label_1050b4;
            case 0x1050B8u: goto label_1050b8;
            case 0x1050BCu: goto label_1050bc;
            case 0x1050C0u: goto label_1050c0;
            case 0x1050C4u: goto label_1050c4;
            case 0x1050C8u: goto label_1050c8;
            case 0x1050CCu: goto label_1050cc;
            case 0x1050D0u: goto label_1050d0;
            case 0x1050D4u: goto label_1050d4;
            case 0x1050D8u: goto label_1050d8;
            case 0x1050DCu: goto label_1050dc;
            case 0x1050E0u: goto label_1050e0;
            case 0x1050E4u: goto label_1050e4;
            case 0x1050E8u: goto label_1050e8;
            case 0x1050ECu: goto label_1050ec;
            case 0x1050F0u: goto label_1050f0;
            case 0x1050F4u: goto label_1050f4;
            case 0x1050F8u: goto label_1050f8;
            case 0x1050FCu: goto label_1050fc;
            case 0x105100u: goto label_105100;
            case 0x105104u: goto label_105104;
            case 0x105108u: goto label_105108;
            case 0x10510Cu: goto label_10510c;
            case 0x105110u: goto label_105110;
            case 0x105114u: goto label_105114;
            case 0x105118u: goto label_105118;
            case 0x10511Cu: goto label_10511c;
            case 0x105120u: goto label_105120;
            case 0x105124u: goto label_105124;
            case 0x105128u: goto label_105128;
            case 0x10512Cu: goto label_10512c;
            case 0x105130u: goto label_105130;
            case 0x105134u: goto label_105134;
            case 0x105138u: goto label_105138;
            case 0x10513Cu: goto label_10513c;
            case 0x105140u: goto label_105140;
            case 0x105144u: goto label_105144;
            case 0x105148u: goto label_105148;
            case 0x10514Cu: goto label_10514c;
            case 0x105150u: goto label_105150;
            case 0x105154u: goto label_105154;
            case 0x105158u: goto label_105158;
            case 0x10515Cu: goto label_10515c;
            case 0x105160u: goto label_105160;
            case 0x105164u: goto label_105164;
            case 0x105168u: goto label_105168;
            case 0x10516Cu: goto label_10516c;
            case 0x105170u: goto label_105170;
            case 0x105174u: goto label_105174;
            case 0x105178u: goto label_105178;
            case 0x10517Cu: goto label_10517c;
            case 0x105180u: goto label_105180;
            case 0x105184u: goto label_105184;
            case 0x105188u: goto label_105188;
            case 0x10518Cu: goto label_10518c;
            case 0x105190u: goto label_105190;
            case 0x105194u: goto label_105194;
            case 0x105198u: goto label_105198;
            case 0x10519Cu: goto label_10519c;
            case 0x1051A0u: goto label_1051a0;
            case 0x1051A4u: goto label_1051a4;
            case 0x1051A8u: goto label_1051a8;
            case 0x1051ACu: goto label_1051ac;
            case 0x1051B0u: goto label_1051b0;
            case 0x1051B4u: goto label_1051b4;
            case 0x1051B8u: goto label_1051b8;
            case 0x1051BCu: goto label_1051bc;
            case 0x1051C0u: goto label_1051c0;
            case 0x1051C4u: goto label_1051c4;
            case 0x1051C8u: goto label_1051c8;
            case 0x1051CCu: goto label_1051cc;
            case 0x1051D0u: goto label_1051d0;
            case 0x1051D4u: goto label_1051d4;
            case 0x1051D8u: goto label_1051d8;
            case 0x1051DCu: goto label_1051dc;
            case 0x1051E0u: goto label_1051e0;
            case 0x1051E4u: goto label_1051e4;
            case 0x1051E8u: goto label_1051e8;
            case 0x1051ECu: goto label_1051ec;
            case 0x1051F0u: goto label_1051f0;
            case 0x1051F4u: goto label_1051f4;
            case 0x1051F8u: goto label_1051f8;
            case 0x1051FCu: goto label_1051fc;
            case 0x105200u: goto label_105200;
            case 0x105204u: goto label_105204;
            case 0x105208u: goto label_105208;
            case 0x10520Cu: goto label_10520c;
            case 0x105210u: goto label_105210;
            case 0x105214u: goto label_105214;
            case 0x105218u: goto label_105218;
            case 0x10521Cu: goto label_10521c;
            case 0x105220u: goto label_105220;
            case 0x105224u: goto label_105224;
            case 0x105228u: goto label_105228;
            case 0x10522Cu: goto label_10522c;
            case 0x105230u: goto label_105230;
            case 0x105234u: goto label_105234;
            case 0x105238u: goto label_105238;
            case 0x10523Cu: goto label_10523c;
            case 0x105240u: goto label_105240;
            case 0x105244u: goto label_105244;
            case 0x105248u: goto label_105248;
            case 0x10524Cu: goto label_10524c;
            case 0x105250u: goto label_105250;
            case 0x105254u: goto label_105254;
            case 0x105258u: goto label_105258;
            case 0x10525Cu: goto label_10525c;
            case 0x105260u: goto label_105260;
            case 0x105264u: goto label_105264;
            case 0x105268u: goto label_105268;
            case 0x10526Cu: goto label_10526c;
            case 0x105270u: goto label_105270;
            case 0x105274u: goto label_105274;
            case 0x105278u: goto label_105278;
            case 0x10527Cu: goto label_10527c;
            case 0x105280u: goto label_105280;
            case 0x105284u: goto label_105284;
            case 0x105288u: goto label_105288;
            case 0x10528Cu: goto label_10528c;
            case 0x105290u: goto label_105290;
            case 0x105294u: goto label_105294;
            case 0x105298u: goto label_105298;
            case 0x10529Cu: goto label_10529c;
            case 0x1052A0u: goto label_1052a0;
            case 0x1052A4u: goto label_1052a4;
            case 0x1052A8u: goto label_1052a8;
            case 0x1052ACu: goto label_1052ac;
            case 0x1052B0u: goto label_1052b0;
            case 0x1052B4u: goto label_1052b4;
            case 0x1052B8u: goto label_1052b8;
            case 0x1052BCu: goto label_1052bc;
            case 0x1052C0u: goto label_1052c0;
            case 0x1052C4u: goto label_1052c4;
            case 0x1052C8u: goto label_1052c8;
            case 0x1052CCu: goto label_1052cc;
            case 0x1052D0u: goto label_1052d0;
            case 0x1052D4u: goto label_1052d4;
            case 0x1052D8u: goto label_1052d8;
            case 0x1052DCu: goto label_1052dc;
            case 0x1052E0u: goto label_1052e0;
            case 0x1052E4u: goto label_1052e4;
            case 0x1052E8u: goto label_1052e8;
            case 0x1052ECu: goto label_1052ec;
            case 0x1052F0u: goto label_1052f0;
            case 0x1052F4u: goto label_1052f4;
            case 0x1052F8u: goto label_1052f8;
            case 0x1052FCu: goto label_1052fc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x105194u; }
            if (ctx->pc != 0x105194u) { return; }
        }
    }
    ctx->pc = 0x105194u;
label_105194:
    // 0x105194: 0x40182d
    ctx->pc = 0x105194u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105198:
    // 0x105198: 0x1860fff1
label_10519c:
    if (ctx->pc == 0x10519Cu) {
        ctx->pc = 0x10519Cu;
        SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->pc = 0x1051A0u;
        goto label_1051a0;
    }
    ctx->pc = 0x105198u;
    {
        const bool branch_taken_0x105198 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x10519Cu;
        SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        if (branch_taken_0x105198) {
            ctx->pc = 0x105160u;
            goto label_105160;
        }
    }
    ctx->pc = 0x1051A0u;
label_1051a0:
    // 0x1051a0: 0x1e00fff7
label_1051a4:
    if (ctx->pc == 0x1051A4u) {
        ctx->pc = 0x1051A4u;
        SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->pc = 0x1051A8u;
        goto label_1051a8;
    }
    ctx->pc = 0x1051A0u;
    {
        const bool branch_taken_0x1051a0 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x1051A4u;
        SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        if (branch_taken_0x1051a0) {
            ctx->pc = 0x105180u;
            goto label_105180;
        }
    }
    ctx->pc = 0x1051A8u;
label_1051a8:
    // 0x1051a8: 0x102d
    ctx->pc = 0x1051a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1051ac:
    // 0x1051ac: 0xdfb00000
    ctx->pc = 0x1051acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1051b0:
    // 0x1051b0: 0xdfb10008
    ctx->pc = 0x1051b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1051b4:
    // 0x1051b4: 0xdfb20010
    ctx->pc = 0x1051b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1051b8:
    // 0x1051b8: 0xdfbf0018
    ctx->pc = 0x1051b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1051bc:
    // 0x1051bc: 0x3e00008
label_1051c0:
    if (ctx->pc == 0x1051C0u) {
        ctx->pc = 0x1051C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1051C4u;
        goto label_1051c4;
    }
    ctx->pc = 0x1051BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1051C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1050B0u: goto label_1050b0;
            case 0x1050B4u: goto label_1050b4;
            case 0x1050B8u: goto label_1050b8;
            case 0x1050BCu: goto label_1050bc;
            case 0x1050C0u: goto label_1050c0;
            case 0x1050C4u: goto label_1050c4;
            case 0x1050C8u: goto label_1050c8;
            case 0x1050CCu: goto label_1050cc;
            case 0x1050D0u: goto label_1050d0;
            case 0x1050D4u: goto label_1050d4;
            case 0x1050D8u: goto label_1050d8;
            case 0x1050DCu: goto label_1050dc;
            case 0x1050E0u: goto label_1050e0;
            case 0x1050E4u: goto label_1050e4;
            case 0x1050E8u: goto label_1050e8;
            case 0x1050ECu: goto label_1050ec;
            case 0x1050F0u: goto label_1050f0;
            case 0x1050F4u: goto label_1050f4;
            case 0x1050F8u: goto label_1050f8;
            case 0x1050FCu: goto label_1050fc;
            case 0x105100u: goto label_105100;
            case 0x105104u: goto label_105104;
            case 0x105108u: goto label_105108;
            case 0x10510Cu: goto label_10510c;
            case 0x105110u: goto label_105110;
            case 0x105114u: goto label_105114;
            case 0x105118u: goto label_105118;
            case 0x10511Cu: goto label_10511c;
            case 0x105120u: goto label_105120;
            case 0x105124u: goto label_105124;
            case 0x105128u: goto label_105128;
            case 0x10512Cu: goto label_10512c;
            case 0x105130u: goto label_105130;
            case 0x105134u: goto label_105134;
            case 0x105138u: goto label_105138;
            case 0x10513Cu: goto label_10513c;
            case 0x105140u: goto label_105140;
            case 0x105144u: goto label_105144;
            case 0x105148u: goto label_105148;
            case 0x10514Cu: goto label_10514c;
            case 0x105150u: goto label_105150;
            case 0x105154u: goto label_105154;
            case 0x105158u: goto label_105158;
            case 0x10515Cu: goto label_10515c;
            case 0x105160u: goto label_105160;
            case 0x105164u: goto label_105164;
            case 0x105168u: goto label_105168;
            case 0x10516Cu: goto label_10516c;
            case 0x105170u: goto label_105170;
            case 0x105174u: goto label_105174;
            case 0x105178u: goto label_105178;
            case 0x10517Cu: goto label_10517c;
            case 0x105180u: goto label_105180;
            case 0x105184u: goto label_105184;
            case 0x105188u: goto label_105188;
            case 0x10518Cu: goto label_10518c;
            case 0x105190u: goto label_105190;
            case 0x105194u: goto label_105194;
            case 0x105198u: goto label_105198;
            case 0x10519Cu: goto label_10519c;
            case 0x1051A0u: goto label_1051a0;
            case 0x1051A4u: goto label_1051a4;
            case 0x1051A8u: goto label_1051a8;
            case 0x1051ACu: goto label_1051ac;
            case 0x1051B0u: goto label_1051b0;
            case 0x1051B4u: goto label_1051b4;
            case 0x1051B8u: goto label_1051b8;
            case 0x1051BCu: goto label_1051bc;
            case 0x1051C0u: goto label_1051c0;
            case 0x1051C4u: goto label_1051c4;
            case 0x1051C8u: goto label_1051c8;
            case 0x1051CCu: goto label_1051cc;
            case 0x1051D0u: goto label_1051d0;
            case 0x1051D4u: goto label_1051d4;
            case 0x1051D8u: goto label_1051d8;
            case 0x1051DCu: goto label_1051dc;
            case 0x1051E0u: goto label_1051e0;
            case 0x1051E4u: goto label_1051e4;
            case 0x1051E8u: goto label_1051e8;
            case 0x1051ECu: goto label_1051ec;
            case 0x1051F0u: goto label_1051f0;
            case 0x1051F4u: goto label_1051f4;
            case 0x1051F8u: goto label_1051f8;
            case 0x1051FCu: goto label_1051fc;
            case 0x105200u: goto label_105200;
            case 0x105204u: goto label_105204;
            case 0x105208u: goto label_105208;
            case 0x10520Cu: goto label_10520c;
            case 0x105210u: goto label_105210;
            case 0x105214u: goto label_105214;
            case 0x105218u: goto label_105218;
            case 0x10521Cu: goto label_10521c;
            case 0x105220u: goto label_105220;
            case 0x105224u: goto label_105224;
            case 0x105228u: goto label_105228;
            case 0x10522Cu: goto label_10522c;
            case 0x105230u: goto label_105230;
            case 0x105234u: goto label_105234;
            case 0x105238u: goto label_105238;
            case 0x10523Cu: goto label_10523c;
            case 0x105240u: goto label_105240;
            case 0x105244u: goto label_105244;
            case 0x105248u: goto label_105248;
            case 0x10524Cu: goto label_10524c;
            case 0x105250u: goto label_105250;
            case 0x105254u: goto label_105254;
            case 0x105258u: goto label_105258;
            case 0x10525Cu: goto label_10525c;
            case 0x105260u: goto label_105260;
            case 0x105264u: goto label_105264;
            case 0x105268u: goto label_105268;
            case 0x10526Cu: goto label_10526c;
            case 0x105270u: goto label_105270;
            case 0x105274u: goto label_105274;
            case 0x105278u: goto label_105278;
            case 0x10527Cu: goto label_10527c;
            case 0x105280u: goto label_105280;
            case 0x105284u: goto label_105284;
            case 0x105288u: goto label_105288;
            case 0x10528Cu: goto label_10528c;
            case 0x105290u: goto label_105290;
            case 0x105294u: goto label_105294;
            case 0x105298u: goto label_105298;
            case 0x10529Cu: goto label_10529c;
            case 0x1052A0u: goto label_1052a0;
            case 0x1052A4u: goto label_1052a4;
            case 0x1052A8u: goto label_1052a8;
            case 0x1052ACu: goto label_1052ac;
            case 0x1052B0u: goto label_1052b0;
            case 0x1052B4u: goto label_1052b4;
            case 0x1052B8u: goto label_1052b8;
            case 0x1052BCu: goto label_1052bc;
            case 0x1052C0u: goto label_1052c0;
            case 0x1052C4u: goto label_1052c4;
            case 0x1052C8u: goto label_1052c8;
            case 0x1052CCu: goto label_1052cc;
            case 0x1052D0u: goto label_1052d0;
            case 0x1052D4u: goto label_1052d4;
            case 0x1052D8u: goto label_1052d8;
            case 0x1052DCu: goto label_1052dc;
            case 0x1052E0u: goto label_1052e0;
            case 0x1052E4u: goto label_1052e4;
            case 0x1052E8u: goto label_1052e8;
            case 0x1052ECu: goto label_1052ec;
            case 0x1052F0u: goto label_1052f0;
            case 0x1052F4u: goto label_1052f4;
            case 0x1052F8u: goto label_1052f8;
            case 0x1052FCu: goto label_1052fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1051C4u;
label_1051c4:
    // 0x1051c4: 0x0
    ctx->pc = 0x1051c4u;
    // NOP
label_1051c8:
    // 0x1051c8: 0x27bdffc0
    ctx->pc = 0x1051c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_1051cc:
    // 0x1051cc: 0xffb30018
    ctx->pc = 0x1051ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1051d0:
    // 0x1051d0: 0xa0982d
    ctx->pc = 0x1051d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1051d4:
    // 0x1051d4: 0xffb50028
    ctx->pc = 0x1051d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_1051d8:
    // 0x1051d8: 0x80a82d
    ctx->pc = 0x1051d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1051dc:
    // 0x1051dc: 0x2a620002
    ctx->pc = 0x1051dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 2));
label_1051e0:
    // 0x1051e0: 0x2673ffff
    ctx->pc = 0x1051e0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
label_1051e4:
    // 0x1051e4: 0xffb10008
    ctx->pc = 0x1051e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1051e8:
    // 0x1051e8: 0xc0882d
    ctx->pc = 0x1051e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1051ec:
    // 0x1051ec: 0xffb40020
    ctx->pc = 0x1051ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1051f0:
    // 0x1051f0: 0x2a0a02d
    ctx->pc = 0x1051f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1051f4:
    // 0x1051f4: 0xffb00000
    ctx->pc = 0x1051f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1051f8:
    // 0x1051f8: 0xffb20010
    ctx->pc = 0x1051f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1051fc:
    // 0x1051fc: 0x10400012
label_105200:
    if (ctx->pc == 0x105200u) {
        ctx->pc = 0x105200u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->pc = 0x105204u;
        goto label_105204;
    }
    ctx->pc = 0x1051FCu;
    {
        const bool branch_taken_0x1051fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x105200u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        if (branch_taken_0x1051fc) {
            ctx->pc = 0x105248u;
            goto label_105248;
        }
    }
    ctx->pc = 0x105204u;
label_105204:
    // 0x105204: 0x10000035
label_105208:
    if (ctx->pc == 0x105208u) {
        ctx->pc = 0x105208u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10520Cu;
        goto label_10520c;
    }
    ctx->pc = 0x105204u;
    {
        const bool branch_taken_0x105204 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x105208u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x105204) {
            ctx->pc = 0x1052DCu;
            goto label_1052dc;
        }
    }
    ctx->pc = 0x10520Cu;
label_10520c:
    // 0x10520c: 0x0
    ctx->pc = 0x10520cu;
    // NOP
label_105210:
    // 0x105210: 0x24630001
    ctx->pc = 0x105210u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_105214:
    // 0x105214: 0x8e220004
    ctx->pc = 0x105214u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_105218:
    // 0x105218: 0x728023
    ctx->pc = 0x105218u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_10521c:
    // 0x10521c: 0xae230000
    ctx->pc = 0x10521cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_105220:
    // 0x105220: 0x501023
    ctx->pc = 0x105220u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_105224:
    // 0x105224: 0x240282d
    ctx->pc = 0x105224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_105228:
    // 0x105228: 0xae220004
    ctx->pc = 0x105228u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_10522c:
    // 0x10522c: 0x280202d
    ctx->pc = 0x10522cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_105230:
    // 0x105230: 0xc041eac
label_105234:
    if (ctx->pc == 0x105234u) {
        ctx->pc = 0x105234u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x105238u;
        goto label_105238;
    }
    ctx->pc = 0x105230u;
    SET_GPR_U32(ctx, 31, 0x105238u);
    ctx->pc = 0x105234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105238u; }
    }
    if (ctx->pc != 0x105238u) { return; }
    ctx->pc = 0x105238u;
label_105238:
    // 0x105238: 0x2901821
    ctx->pc = 0x105238u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_10523c:
    // 0x10523c: 0x10000026
label_105240:
    if (ctx->pc == 0x105240u) {
        ctx->pc = 0x105240u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x105244u;
        goto label_105244;
    }
    ctx->pc = 0x10523Cu;
    {
        const bool branch_taken_0x10523c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x105240u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x10523c) {
            ctx->pc = 0x1052D8u;
            goto label_1052d8;
        }
    }
    ctx->pc = 0x105244u;
label_105244:
    // 0x105244: 0x0
    ctx->pc = 0x105244u;
    // NOP
label_105248:
    // 0x105248: 0x8e300004
    ctx->pc = 0x105248u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_10524c:
    // 0x10524c: 0x5600000b
label_105250:
    if (ctx->pc == 0x105250u) {
        ctx->pc = 0x105250u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x105254u;
        goto label_105254;
    }
    ctx->pc = 0x10524Cu;
    {
        const bool branch_taken_0x10524c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x10524c) {
            ctx->pc = 0x105250u;
            SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x10527Cu;
            goto label_10527c;
        }
    }
    ctx->pc = 0x105254u;
label_105254:
    // 0x105254: 0xc042814
label_105258:
    if (ctx->pc == 0x105258u) {
        ctx->pc = 0x105258u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10525Cu;
        goto label_10525c;
    }
    ctx->pc = 0x105254u;
    SET_GPR_U32(ctx, 31, 0x10525Cu);
    ctx->pc = 0x105258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A050u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A050_0x10a050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10525Cu; }
    }
    if (ctx->pc != 0x10525Cu) { return; }
    ctx->pc = 0x10525Cu;
label_10525c:
    // 0x10525c: 0x50400006
label_105260:
    if (ctx->pc == 0x105260u) {
        ctx->pc = 0x105260u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x105264u;
        goto label_105264;
    }
    ctx->pc = 0x10525Cu;
    {
        const bool branch_taken_0x10525c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x10525c) {
            ctx->pc = 0x105260u;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->pc = 0x105278u;
            goto label_105278;
        }
    }
    ctx->pc = 0x105264u;
label_105264:
    // 0x105264: 0x5695001c
label_105268:
    if (ctx->pc == 0x105268u) {
        ctx->pc = 0x105268u;
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x10526Cu;
        goto label_10526c;
    }
    ctx->pc = 0x105264u;
    {
        const bool branch_taken_0x105264 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 21));
        if (branch_taken_0x105264) {
            ctx->pc = 0x105268u;
            WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x1052D8u;
            goto label_1052d8;
        }
    }
    ctx->pc = 0x10526Cu;
label_10526c:
    // 0x10526c: 0x1000001b
label_105270:
    if (ctx->pc == 0x105270u) {
        ctx->pc = 0x105270u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x105274u;
        goto label_105274;
    }
    ctx->pc = 0x10526Cu;
    {
        const bool branch_taken_0x10526c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x105270u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10526c) {
            ctx->pc = 0x1052DCu;
            goto label_1052dc;
        }
    }
    ctx->pc = 0x105274u;
label_105274:
    // 0x105274: 0x0
    ctx->pc = 0x105274u;
    // NOP
label_105278:
    // 0x105278: 0x8e320000
    ctx->pc = 0x105278u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_10527c:
    // 0x10527c: 0x270102b
    ctx->pc = 0x10527cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_105280:
    // 0x105280: 0x262800b
    ctx->pc = 0x105280u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 19));
label_105284:
    // 0x105284: 0x2405000a
    ctx->pc = 0x105284u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
label_105288:
    // 0x105288: 0x240202d
    ctx->pc = 0x105288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10528c:
    // 0x10528c: 0xc041e4e
label_105290:
    if (ctx->pc == 0x105290u) {
        ctx->pc = 0x105290u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x105294u;
        goto label_105294;
    }
    ctx->pc = 0x10528Cu;
    SET_GPR_U32(ctx, 31, 0x105294u);
    ctx->pc = 0x105290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107938u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107938_0x107938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105294u; }
    }
    if (ctx->pc != 0x105294u) { return; }
    ctx->pc = 0x105294u;
label_105294:
    // 0x105294: 0x280202d
    ctx->pc = 0x105294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_105298:
    // 0x105298: 0x40182d
    ctx->pc = 0x105298u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10529c:
    // 0x10529c: 0x2709823
    ctx->pc = 0x10529cu;
    SET_GPR_U32(ctx, 19, SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_1052a0:
    // 0x1052a0: 0x240282d
    ctx->pc = 0x1052a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1052a4:
    // 0x1052a4: 0x1460ffda
label_1052a8:
    if (ctx->pc == 0x1052A8u) {
        ctx->pc = 0x1052A8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1052ACu;
        goto label_1052ac;
    }
    ctx->pc = 0x1052A4u;
    {
        const bool branch_taken_0x1052a4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1052A8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1052a4) {
            ctx->pc = 0x105210u;
            goto label_105210;
        }
    }
    ctx->pc = 0x1052ACu;
label_1052ac:
    // 0x1052ac: 0x8e230004
    ctx->pc = 0x1052acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1052b0:
    // 0x1052b0: 0x290a021
    ctx->pc = 0x1052b0u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_1052b4:
    // 0x1052b4: 0x8e220000
    ctx->pc = 0x1052b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1052b8:
    // 0x1052b8: 0x701823
    ctx->pc = 0x1052b8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1052bc:
    // 0x1052bc: 0x501021
    ctx->pc = 0x1052bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1052c0:
    // 0x1052c0: 0xae230004
    ctx->pc = 0x1052c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_1052c4:
    // 0x1052c4: 0xc041eac
label_1052c8:
    if (ctx->pc == 0x1052C8u) {
        ctx->pc = 0x1052C8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1052CCu;
        goto label_1052cc;
    }
    ctx->pc = 0x1052C4u;
    SET_GPR_U32(ctx, 31, 0x1052CCu);
    ctx->pc = 0x1052C8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1052CCu; }
    }
    if (ctx->pc != 0x1052CCu) { return; }
    ctx->pc = 0x1052CCu;
label_1052cc:
    // 0x1052cc: 0x5660ffdf
label_1052d0:
    if (ctx->pc == 0x1052D0u) {
        ctx->pc = 0x1052D0u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x1052D4u;
        goto label_1052d4;
    }
    ctx->pc = 0x1052CCu;
    {
        const bool branch_taken_0x1052cc = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        if (branch_taken_0x1052cc) {
            ctx->pc = 0x1052D0u;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->pc = 0x10524Cu;
            goto label_10524c;
        }
    }
    ctx->pc = 0x1052D4u;
label_1052d4:
    // 0x1052d4: 0xa2800000
    ctx->pc = 0x1052d4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
label_1052d8:
    // 0x1052d8: 0x2a0102d
    ctx->pc = 0x1052d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1052dc:
    // 0x1052dc: 0xdfb00000
    ctx->pc = 0x1052dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1052e0:
    // 0x1052e0: 0xdfb10008
    ctx->pc = 0x1052e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1052e4:
    // 0x1052e4: 0xdfb20010
    ctx->pc = 0x1052e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1052e8:
    // 0x1052e8: 0xdfb30018
    ctx->pc = 0x1052e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1052ec:
    // 0x1052ec: 0xdfb40020
    ctx->pc = 0x1052ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1052f0:
    // 0x1052f0: 0xdfb50028
    ctx->pc = 0x1052f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1052f4:
    // 0x1052f4: 0xdfbf0030
    ctx->pc = 0x1052f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1052f8:
    // 0x1052f8: 0x3e00008
label_1052fc:
    if (ctx->pc == 0x1052FCu) {
        ctx->pc = 0x1052FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x105300u;
        goto label_fallthrough_0x1052f8;
    }
    ctx->pc = 0x1052F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1052FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1050B0u: goto label_1050b0;
            case 0x1050B4u: goto label_1050b4;
            case 0x1050B8u: goto label_1050b8;
            case 0x1050BCu: goto label_1050bc;
            case 0x1050C0u: goto label_1050c0;
            case 0x1050C4u: goto label_1050c4;
            case 0x1050C8u: goto label_1050c8;
            case 0x1050CCu: goto label_1050cc;
            case 0x1050D0u: goto label_1050d0;
            case 0x1050D4u: goto label_1050d4;
            case 0x1050D8u: goto label_1050d8;
            case 0x1050DCu: goto label_1050dc;
            case 0x1050E0u: goto label_1050e0;
            case 0x1050E4u: goto label_1050e4;
            case 0x1050E8u: goto label_1050e8;
            case 0x1050ECu: goto label_1050ec;
            case 0x1050F0u: goto label_1050f0;
            case 0x1050F4u: goto label_1050f4;
            case 0x1050F8u: goto label_1050f8;
            case 0x1050FCu: goto label_1050fc;
            case 0x105100u: goto label_105100;
            case 0x105104u: goto label_105104;
            case 0x105108u: goto label_105108;
            case 0x10510Cu: goto label_10510c;
            case 0x105110u: goto label_105110;
            case 0x105114u: goto label_105114;
            case 0x105118u: goto label_105118;
            case 0x10511Cu: goto label_10511c;
            case 0x105120u: goto label_105120;
            case 0x105124u: goto label_105124;
            case 0x105128u: goto label_105128;
            case 0x10512Cu: goto label_10512c;
            case 0x105130u: goto label_105130;
            case 0x105134u: goto label_105134;
            case 0x105138u: goto label_105138;
            case 0x10513Cu: goto label_10513c;
            case 0x105140u: goto label_105140;
            case 0x105144u: goto label_105144;
            case 0x105148u: goto label_105148;
            case 0x10514Cu: goto label_10514c;
            case 0x105150u: goto label_105150;
            case 0x105154u: goto label_105154;
            case 0x105158u: goto label_105158;
            case 0x10515Cu: goto label_10515c;
            case 0x105160u: goto label_105160;
            case 0x105164u: goto label_105164;
            case 0x105168u: goto label_105168;
            case 0x10516Cu: goto label_10516c;
            case 0x105170u: goto label_105170;
            case 0x105174u: goto label_105174;
            case 0x105178u: goto label_105178;
            case 0x10517Cu: goto label_10517c;
            case 0x105180u: goto label_105180;
            case 0x105184u: goto label_105184;
            case 0x105188u: goto label_105188;
            case 0x10518Cu: goto label_10518c;
            case 0x105190u: goto label_105190;
            case 0x105194u: goto label_105194;
            case 0x105198u: goto label_105198;
            case 0x10519Cu: goto label_10519c;
            case 0x1051A0u: goto label_1051a0;
            case 0x1051A4u: goto label_1051a4;
            case 0x1051A8u: goto label_1051a8;
            case 0x1051ACu: goto label_1051ac;
            case 0x1051B0u: goto label_1051b0;
            case 0x1051B4u: goto label_1051b4;
            case 0x1051B8u: goto label_1051b8;
            case 0x1051BCu: goto label_1051bc;
            case 0x1051C0u: goto label_1051c0;
            case 0x1051C4u: goto label_1051c4;
            case 0x1051C8u: goto label_1051c8;
            case 0x1051CCu: goto label_1051cc;
            case 0x1051D0u: goto label_1051d0;
            case 0x1051D4u: goto label_1051d4;
            case 0x1051D8u: goto label_1051d8;
            case 0x1051DCu: goto label_1051dc;
            case 0x1051E0u: goto label_1051e0;
            case 0x1051E4u: goto label_1051e4;
            case 0x1051E8u: goto label_1051e8;
            case 0x1051ECu: goto label_1051ec;
            case 0x1051F0u: goto label_1051f0;
            case 0x1051F4u: goto label_1051f4;
            case 0x1051F8u: goto label_1051f8;
            case 0x1051FCu: goto label_1051fc;
            case 0x105200u: goto label_105200;
            case 0x105204u: goto label_105204;
            case 0x105208u: goto label_105208;
            case 0x10520Cu: goto label_10520c;
            case 0x105210u: goto label_105210;
            case 0x105214u: goto label_105214;
            case 0x105218u: goto label_105218;
            case 0x10521Cu: goto label_10521c;
            case 0x105220u: goto label_105220;
            case 0x105224u: goto label_105224;
            case 0x105228u: goto label_105228;
            case 0x10522Cu: goto label_10522c;
            case 0x105230u: goto label_105230;
            case 0x105234u: goto label_105234;
            case 0x105238u: goto label_105238;
            case 0x10523Cu: goto label_10523c;
            case 0x105240u: goto label_105240;
            case 0x105244u: goto label_105244;
            case 0x105248u: goto label_105248;
            case 0x10524Cu: goto label_10524c;
            case 0x105250u: goto label_105250;
            case 0x105254u: goto label_105254;
            case 0x105258u: goto label_105258;
            case 0x10525Cu: goto label_10525c;
            case 0x105260u: goto label_105260;
            case 0x105264u: goto label_105264;
            case 0x105268u: goto label_105268;
            case 0x10526Cu: goto label_10526c;
            case 0x105270u: goto label_105270;
            case 0x105274u: goto label_105274;
            case 0x105278u: goto label_105278;
            case 0x10527Cu: goto label_10527c;
            case 0x105280u: goto label_105280;
            case 0x105284u: goto label_105284;
            case 0x105288u: goto label_105288;
            case 0x10528Cu: goto label_10528c;
            case 0x105290u: goto label_105290;
            case 0x105294u: goto label_105294;
            case 0x105298u: goto label_105298;
            case 0x10529Cu: goto label_10529c;
            case 0x1052A0u: goto label_1052a0;
            case 0x1052A4u: goto label_1052a4;
            case 0x1052A8u: goto label_1052a8;
            case 0x1052ACu: goto label_1052ac;
            case 0x1052B0u: goto label_1052b0;
            case 0x1052B4u: goto label_1052b4;
            case 0x1052B8u: goto label_1052b8;
            case 0x1052BCu: goto label_1052bc;
            case 0x1052C0u: goto label_1052c0;
            case 0x1052C4u: goto label_1052c4;
            case 0x1052C8u: goto label_1052c8;
            case 0x1052CCu: goto label_1052cc;
            case 0x1052D0u: goto label_1052d0;
            case 0x1052D4u: goto label_1052d4;
            case 0x1052D8u: goto label_1052d8;
            case 0x1052DCu: goto label_1052dc;
            case 0x1052E0u: goto label_1052e0;
            case 0x1052E4u: goto label_1052e4;
            case 0x1052E8u: goto label_1052e8;
            case 0x1052ECu: goto label_1052ec;
            case 0x1052F0u: goto label_1052f0;
            case 0x1052F4u: goto label_1052f4;
            case 0x1052F8u: goto label_1052f8;
            case 0x1052FCu: goto label_1052fc;
            default: break;
        }
        return;
    }
label_fallthrough_0x1052f8:
    ctx->pc = 0x105300u;
}
