#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00166128
// Address: 0x166128 - 0x166350
void sub_00166128_0x166128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x166128u;

label_166128:
    // 0x166128: 0x8c832ab0
    ctx->pc = 0x166128u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 10928)));
label_16612c:
    // 0x16612c: 0x102d
    ctx->pc = 0x16612cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166130:
    // 0x166130: 0x8c841b74
    ctx->pc = 0x166130u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 7028)));
label_166134:
    // 0x166134: 0x10600006
label_166138:
    if (ctx->pc == 0x166138u) {
        ctx->pc = 0x166138u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 3324));
        ctx->pc = 0x16613Cu;
        goto label_16613c;
    }
    ctx->pc = 0x166134u;
    {
        const bool branch_taken_0x166134 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x166138u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 3324));
        if (branch_taken_0x166134) {
            ctx->pc = 0x166150u;
            goto label_166150;
        }
    }
    ctx->pc = 0x16613Cu;
label_16613c:
    // 0x16613c: 0x8c820040
    ctx->pc = 0x16613cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_166140:
    // 0x166140: 0x182d
    ctx->pc = 0x166140u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166144:
    // 0x166144: 0x62182a
    ctx->pc = 0x166144u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
label_166148:
    // 0x166148: 0x102d
    ctx->pc = 0x166148u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16614c:
    // 0x16614c: 0xa3100a
    ctx->pc = 0x16614cu;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 5));
label_166150:
    // 0x166150: 0x3e00008
label_166154:
    if (ctx->pc == 0x166154u) {
        ctx->pc = 0x166158u;
        goto label_166158;
    }
    ctx->pc = 0x166150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166128u: goto label_166128;
            case 0x16612Cu: goto label_16612c;
            case 0x166130u: goto label_166130;
            case 0x166134u: goto label_166134;
            case 0x166138u: goto label_166138;
            case 0x16613Cu: goto label_16613c;
            case 0x166140u: goto label_166140;
            case 0x166144u: goto label_166144;
            case 0x166148u: goto label_166148;
            case 0x16614Cu: goto label_16614c;
            case 0x166150u: goto label_166150;
            case 0x166154u: goto label_166154;
            case 0x166158u: goto label_166158;
            case 0x16615Cu: goto label_16615c;
            case 0x166160u: goto label_166160;
            case 0x166164u: goto label_166164;
            case 0x166168u: goto label_166168;
            case 0x16616Cu: goto label_16616c;
            case 0x166170u: goto label_166170;
            case 0x166174u: goto label_166174;
            case 0x166178u: goto label_166178;
            case 0x16617Cu: goto label_16617c;
            case 0x166180u: goto label_166180;
            case 0x166184u: goto label_166184;
            case 0x166188u: goto label_166188;
            case 0x16618Cu: goto label_16618c;
            case 0x166190u: goto label_166190;
            case 0x166194u: goto label_166194;
            case 0x166198u: goto label_166198;
            case 0x16619Cu: goto label_16619c;
            case 0x1661A0u: goto label_1661a0;
            case 0x1661A4u: goto label_1661a4;
            case 0x1661A8u: goto label_1661a8;
            case 0x1661ACu: goto label_1661ac;
            case 0x1661B0u: goto label_1661b0;
            case 0x1661B4u: goto label_1661b4;
            case 0x1661B8u: goto label_1661b8;
            case 0x1661BCu: goto label_1661bc;
            case 0x1661C0u: goto label_1661c0;
            case 0x1661C4u: goto label_1661c4;
            case 0x1661C8u: goto label_1661c8;
            case 0x1661CCu: goto label_1661cc;
            case 0x1661D0u: goto label_1661d0;
            case 0x1661D4u: goto label_1661d4;
            case 0x1661D8u: goto label_1661d8;
            case 0x1661DCu: goto label_1661dc;
            case 0x1661E0u: goto label_1661e0;
            case 0x1661E4u: goto label_1661e4;
            case 0x1661E8u: goto label_1661e8;
            case 0x1661ECu: goto label_1661ec;
            case 0x1661F0u: goto label_1661f0;
            case 0x1661F4u: goto label_1661f4;
            case 0x1661F8u: goto label_1661f8;
            case 0x1661FCu: goto label_1661fc;
            case 0x166200u: goto label_166200;
            case 0x166204u: goto label_166204;
            case 0x166208u: goto label_166208;
            case 0x16620Cu: goto label_16620c;
            case 0x166210u: goto label_166210;
            case 0x166214u: goto label_166214;
            case 0x166218u: goto label_166218;
            case 0x16621Cu: goto label_16621c;
            case 0x166220u: goto label_166220;
            case 0x166224u: goto label_166224;
            case 0x166228u: goto label_166228;
            case 0x16622Cu: goto label_16622c;
            case 0x166230u: goto label_166230;
            case 0x166234u: goto label_166234;
            case 0x166238u: goto label_166238;
            case 0x16623Cu: goto label_16623c;
            case 0x166240u: goto label_166240;
            case 0x166244u: goto label_166244;
            case 0x166248u: goto label_166248;
            case 0x16624Cu: goto label_16624c;
            case 0x166250u: goto label_166250;
            case 0x166254u: goto label_166254;
            case 0x166258u: goto label_166258;
            case 0x16625Cu: goto label_16625c;
            case 0x166260u: goto label_166260;
            case 0x166264u: goto label_166264;
            case 0x166268u: goto label_166268;
            case 0x16626Cu: goto label_16626c;
            case 0x166270u: goto label_166270;
            case 0x166274u: goto label_166274;
            case 0x166278u: goto label_166278;
            case 0x16627Cu: goto label_16627c;
            case 0x166280u: goto label_166280;
            case 0x166284u: goto label_166284;
            case 0x166288u: goto label_166288;
            case 0x16628Cu: goto label_16628c;
            case 0x166290u: goto label_166290;
            case 0x166294u: goto label_166294;
            case 0x166298u: goto label_166298;
            case 0x16629Cu: goto label_16629c;
            case 0x1662A0u: goto label_1662a0;
            case 0x1662A4u: goto label_1662a4;
            case 0x1662A8u: goto label_1662a8;
            case 0x1662ACu: goto label_1662ac;
            case 0x1662B0u: goto label_1662b0;
            case 0x1662B4u: goto label_1662b4;
            case 0x1662B8u: goto label_1662b8;
            case 0x1662BCu: goto label_1662bc;
            case 0x1662C0u: goto label_1662c0;
            case 0x1662C4u: goto label_1662c4;
            case 0x1662C8u: goto label_1662c8;
            case 0x1662CCu: goto label_1662cc;
            case 0x1662D0u: goto label_1662d0;
            case 0x1662D4u: goto label_1662d4;
            case 0x1662D8u: goto label_1662d8;
            case 0x1662DCu: goto label_1662dc;
            case 0x1662E0u: goto label_1662e0;
            case 0x1662E4u: goto label_1662e4;
            case 0x1662E8u: goto label_1662e8;
            case 0x1662ECu: goto label_1662ec;
            case 0x1662F0u: goto label_1662f0;
            case 0x1662F4u: goto label_1662f4;
            case 0x1662F8u: goto label_1662f8;
            case 0x1662FCu: goto label_1662fc;
            case 0x166300u: goto label_166300;
            case 0x166304u: goto label_166304;
            case 0x166308u: goto label_166308;
            case 0x16630Cu: goto label_16630c;
            case 0x166310u: goto label_166310;
            case 0x166314u: goto label_166314;
            case 0x166318u: goto label_166318;
            case 0x16631Cu: goto label_16631c;
            case 0x166320u: goto label_166320;
            case 0x166324u: goto label_166324;
            case 0x166328u: goto label_166328;
            case 0x16632Cu: goto label_16632c;
            case 0x166330u: goto label_166330;
            case 0x166334u: goto label_166334;
            case 0x166338u: goto label_166338;
            case 0x16633Cu: goto label_16633c;
            case 0x166340u: goto label_166340;
            case 0x166344u: goto label_166344;
            case 0x166348u: goto label_166348;
            case 0x16634Cu: goto label_16634c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x166158u;
label_166158:
    // 0x166158: 0x27bdffe0
    ctx->pc = 0x166158u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_16615c:
    // 0x16615c: 0xffb00000
    ctx->pc = 0x16615cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_166160:
    // 0x166160: 0x80802d
    ctx->pc = 0x166160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_166164:
    // 0x166164: 0xffb10008
    ctx->pc = 0x166164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_166168:
    // 0x166168: 0xa0882d
    ctx->pc = 0x166168u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16616c:
    // 0x16616c: 0xffb20010
    ctx->pc = 0x16616cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_166170:
    // 0x166170: 0xffbf0018
    ctx->pc = 0x166170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_166174:
    // 0x166174: 0xc05a78c
label_166178:
    if (ctx->pc == 0x166178u) {
        ctx->pc = 0x166178u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16617Cu;
        goto label_16617c;
    }
    ctx->pc = 0x166174u;
    SET_GPR_U32(ctx, 31, 0x16617Cu);
    ctx->pc = 0x166178u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16617Cu; }
    }
    if (ctx->pc != 0x16617Cu) { return; }
    ctx->pc = 0x16617Cu;
label_16617c:
    // 0x16617c: 0x3c05ff00
    ctx->pc = 0x16617cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
label_166180:
    // 0x166180: 0x200202d
    ctx->pc = 0x166180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_166184:
    // 0x166184: 0x10400008
label_166188:
    if (ctx->pc == 0x166188u) {
        ctx->pc = 0x166188u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 417));
        ctx->pc = 0x16618Cu;
        goto label_16618c;
    }
    ctx->pc = 0x166184u;
    {
        const bool branch_taken_0x166184 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x166188u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 417));
        if (branch_taken_0x166184) {
            ctx->pc = 0x1661A8u;
            goto label_1661a8;
        }
    }
    ctx->pc = 0x16618Cu;
label_16618c:
    // 0x16618c: 0xdfb00000
    ctx->pc = 0x16618cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_166190:
    // 0x166190: 0x202d
    ctx->pc = 0x166190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166194:
    // 0x166194: 0xdfb10008
    ctx->pc = 0x166194u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_166198:
    // 0x166198: 0xdfb20010
    ctx->pc = 0x166198u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16619c:
    // 0x16619c: 0xdfbf0018
    ctx->pc = 0x16619cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1661a0:
    // 0x1661a0: 0x805a704
label_1661a4:
    if (ctx->pc == 0x1661A4u) {
        ctx->pc = 0x1661A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1661A8u;
        goto label_1661a8;
    }
    ctx->pc = 0x1661A0u;
    ctx->pc = 0x1661A4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x1661A8u;
label_1661a8:
    // 0x1661a8: 0xc05d58a
label_1661ac:
    if (ctx->pc == 0x1661ACu) {
        ctx->pc = 0x1661ACu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1661B0u;
        goto label_1661b0;
    }
    ctx->pc = 0x1661A8u;
    SET_GPR_U32(ctx, 31, 0x1661B0u);
    ctx->pc = 0x1661ACu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1661B0u; }
    }
    if (ctx->pc != 0x1661B0u) { return; }
    ctx->pc = 0x1661B0u;
label_1661b0:
    // 0x1661b0: 0x200202d
    ctx->pc = 0x1661b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1661b4:
    // 0x1661b4: 0x220282d
    ctx->pc = 0x1661b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1661b8:
    // 0x1661b8: 0x10400005
label_1661bc:
    if (ctx->pc == 0x1661BCu) {
        ctx->pc = 0x1661BCu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1661C0u;
        goto label_1661c0;
    }
    ctx->pc = 0x1661B8u;
    {
        const bool branch_taken_0x1661b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1661BCu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1661b8) {
            ctx->pc = 0x1661D0u;
            goto label_1661d0;
        }
    }
    ctx->pc = 0x1661C0u;
label_1661c0:
    // 0x1661c0: 0x8e021c84
    ctx->pc = 0x1661c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 7300)));
label_1661c4:
    // 0x1661c4: 0x8c430004
    ctx->pc = 0x1661c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1661c8:
    // 0x1661c8: 0x60f809
label_1661cc:
    if (ctx->pc == 0x1661CCu) {
        ctx->pc = 0x1661D0u;
        goto label_1661d0;
    }
    ctx->pc = 0x1661C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1661D0u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166128u: goto label_166128;
            case 0x16612Cu: goto label_16612c;
            case 0x166130u: goto label_166130;
            case 0x166134u: goto label_166134;
            case 0x166138u: goto label_166138;
            case 0x16613Cu: goto label_16613c;
            case 0x166140u: goto label_166140;
            case 0x166144u: goto label_166144;
            case 0x166148u: goto label_166148;
            case 0x16614Cu: goto label_16614c;
            case 0x166150u: goto label_166150;
            case 0x166154u: goto label_166154;
            case 0x166158u: goto label_166158;
            case 0x16615Cu: goto label_16615c;
            case 0x166160u: goto label_166160;
            case 0x166164u: goto label_166164;
            case 0x166168u: goto label_166168;
            case 0x16616Cu: goto label_16616c;
            case 0x166170u: goto label_166170;
            case 0x166174u: goto label_166174;
            case 0x166178u: goto label_166178;
            case 0x16617Cu: goto label_16617c;
            case 0x166180u: goto label_166180;
            case 0x166184u: goto label_166184;
            case 0x166188u: goto label_166188;
            case 0x16618Cu: goto label_16618c;
            case 0x166190u: goto label_166190;
            case 0x166194u: goto label_166194;
            case 0x166198u: goto label_166198;
            case 0x16619Cu: goto label_16619c;
            case 0x1661A0u: goto label_1661a0;
            case 0x1661A4u: goto label_1661a4;
            case 0x1661A8u: goto label_1661a8;
            case 0x1661ACu: goto label_1661ac;
            case 0x1661B0u: goto label_1661b0;
            case 0x1661B4u: goto label_1661b4;
            case 0x1661B8u: goto label_1661b8;
            case 0x1661BCu: goto label_1661bc;
            case 0x1661C0u: goto label_1661c0;
            case 0x1661C4u: goto label_1661c4;
            case 0x1661C8u: goto label_1661c8;
            case 0x1661CCu: goto label_1661cc;
            case 0x1661D0u: goto label_1661d0;
            case 0x1661D4u: goto label_1661d4;
            case 0x1661D8u: goto label_1661d8;
            case 0x1661DCu: goto label_1661dc;
            case 0x1661E0u: goto label_1661e0;
            case 0x1661E4u: goto label_1661e4;
            case 0x1661E8u: goto label_1661e8;
            case 0x1661ECu: goto label_1661ec;
            case 0x1661F0u: goto label_1661f0;
            case 0x1661F4u: goto label_1661f4;
            case 0x1661F8u: goto label_1661f8;
            case 0x1661FCu: goto label_1661fc;
            case 0x166200u: goto label_166200;
            case 0x166204u: goto label_166204;
            case 0x166208u: goto label_166208;
            case 0x16620Cu: goto label_16620c;
            case 0x166210u: goto label_166210;
            case 0x166214u: goto label_166214;
            case 0x166218u: goto label_166218;
            case 0x16621Cu: goto label_16621c;
            case 0x166220u: goto label_166220;
            case 0x166224u: goto label_166224;
            case 0x166228u: goto label_166228;
            case 0x16622Cu: goto label_16622c;
            case 0x166230u: goto label_166230;
            case 0x166234u: goto label_166234;
            case 0x166238u: goto label_166238;
            case 0x16623Cu: goto label_16623c;
            case 0x166240u: goto label_166240;
            case 0x166244u: goto label_166244;
            case 0x166248u: goto label_166248;
            case 0x16624Cu: goto label_16624c;
            case 0x166250u: goto label_166250;
            case 0x166254u: goto label_166254;
            case 0x166258u: goto label_166258;
            case 0x16625Cu: goto label_16625c;
            case 0x166260u: goto label_166260;
            case 0x166264u: goto label_166264;
            case 0x166268u: goto label_166268;
            case 0x16626Cu: goto label_16626c;
            case 0x166270u: goto label_166270;
            case 0x166274u: goto label_166274;
            case 0x166278u: goto label_166278;
            case 0x16627Cu: goto label_16627c;
            case 0x166280u: goto label_166280;
            case 0x166284u: goto label_166284;
            case 0x166288u: goto label_166288;
            case 0x16628Cu: goto label_16628c;
            case 0x166290u: goto label_166290;
            case 0x166294u: goto label_166294;
            case 0x166298u: goto label_166298;
            case 0x16629Cu: goto label_16629c;
            case 0x1662A0u: goto label_1662a0;
            case 0x1662A4u: goto label_1662a4;
            case 0x1662A8u: goto label_1662a8;
            case 0x1662ACu: goto label_1662ac;
            case 0x1662B0u: goto label_1662b0;
            case 0x1662B4u: goto label_1662b4;
            case 0x1662B8u: goto label_1662b8;
            case 0x1662BCu: goto label_1662bc;
            case 0x1662C0u: goto label_1662c0;
            case 0x1662C4u: goto label_1662c4;
            case 0x1662C8u: goto label_1662c8;
            case 0x1662CCu: goto label_1662cc;
            case 0x1662D0u: goto label_1662d0;
            case 0x1662D4u: goto label_1662d4;
            case 0x1662D8u: goto label_1662d8;
            case 0x1662DCu: goto label_1662dc;
            case 0x1662E0u: goto label_1662e0;
            case 0x1662E4u: goto label_1662e4;
            case 0x1662E8u: goto label_1662e8;
            case 0x1662ECu: goto label_1662ec;
            case 0x1662F0u: goto label_1662f0;
            case 0x1662F4u: goto label_1662f4;
            case 0x1662F8u: goto label_1662f8;
            case 0x1662FCu: goto label_1662fc;
            case 0x166300u: goto label_166300;
            case 0x166304u: goto label_166304;
            case 0x166308u: goto label_166308;
            case 0x16630Cu: goto label_16630c;
            case 0x166310u: goto label_166310;
            case 0x166314u: goto label_166314;
            case 0x166318u: goto label_166318;
            case 0x16631Cu: goto label_16631c;
            case 0x166320u: goto label_166320;
            case 0x166324u: goto label_166324;
            case 0x166328u: goto label_166328;
            case 0x16632Cu: goto label_16632c;
            case 0x166330u: goto label_166330;
            case 0x166334u: goto label_166334;
            case 0x166338u: goto label_166338;
            case 0x16633Cu: goto label_16633c;
            case 0x166340u: goto label_166340;
            case 0x166344u: goto label_166344;
            case 0x166348u: goto label_166348;
            case 0x16634Cu: goto label_16634c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1661D0u; }
            if (ctx->pc != 0x1661D0u) { return; }
        }
    }
    ctx->pc = 0x1661D0u;
label_1661d0:
    // 0x1661d0: 0xdfb00000
    ctx->pc = 0x1661d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1661d4:
    // 0x1661d4: 0xdfb10008
    ctx->pc = 0x1661d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1661d8:
    // 0x1661d8: 0xdfb20010
    ctx->pc = 0x1661d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1661dc:
    // 0x1661dc: 0xdfbf0018
    ctx->pc = 0x1661dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1661e0:
    // 0x1661e0: 0x3e00008
label_1661e4:
    if (ctx->pc == 0x1661E4u) {
        ctx->pc = 0x1661E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1661E8u;
        goto label_1661e8;
    }
    ctx->pc = 0x1661E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1661E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166128u: goto label_166128;
            case 0x16612Cu: goto label_16612c;
            case 0x166130u: goto label_166130;
            case 0x166134u: goto label_166134;
            case 0x166138u: goto label_166138;
            case 0x16613Cu: goto label_16613c;
            case 0x166140u: goto label_166140;
            case 0x166144u: goto label_166144;
            case 0x166148u: goto label_166148;
            case 0x16614Cu: goto label_16614c;
            case 0x166150u: goto label_166150;
            case 0x166154u: goto label_166154;
            case 0x166158u: goto label_166158;
            case 0x16615Cu: goto label_16615c;
            case 0x166160u: goto label_166160;
            case 0x166164u: goto label_166164;
            case 0x166168u: goto label_166168;
            case 0x16616Cu: goto label_16616c;
            case 0x166170u: goto label_166170;
            case 0x166174u: goto label_166174;
            case 0x166178u: goto label_166178;
            case 0x16617Cu: goto label_16617c;
            case 0x166180u: goto label_166180;
            case 0x166184u: goto label_166184;
            case 0x166188u: goto label_166188;
            case 0x16618Cu: goto label_16618c;
            case 0x166190u: goto label_166190;
            case 0x166194u: goto label_166194;
            case 0x166198u: goto label_166198;
            case 0x16619Cu: goto label_16619c;
            case 0x1661A0u: goto label_1661a0;
            case 0x1661A4u: goto label_1661a4;
            case 0x1661A8u: goto label_1661a8;
            case 0x1661ACu: goto label_1661ac;
            case 0x1661B0u: goto label_1661b0;
            case 0x1661B4u: goto label_1661b4;
            case 0x1661B8u: goto label_1661b8;
            case 0x1661BCu: goto label_1661bc;
            case 0x1661C0u: goto label_1661c0;
            case 0x1661C4u: goto label_1661c4;
            case 0x1661C8u: goto label_1661c8;
            case 0x1661CCu: goto label_1661cc;
            case 0x1661D0u: goto label_1661d0;
            case 0x1661D4u: goto label_1661d4;
            case 0x1661D8u: goto label_1661d8;
            case 0x1661DCu: goto label_1661dc;
            case 0x1661E0u: goto label_1661e0;
            case 0x1661E4u: goto label_1661e4;
            case 0x1661E8u: goto label_1661e8;
            case 0x1661ECu: goto label_1661ec;
            case 0x1661F0u: goto label_1661f0;
            case 0x1661F4u: goto label_1661f4;
            case 0x1661F8u: goto label_1661f8;
            case 0x1661FCu: goto label_1661fc;
            case 0x166200u: goto label_166200;
            case 0x166204u: goto label_166204;
            case 0x166208u: goto label_166208;
            case 0x16620Cu: goto label_16620c;
            case 0x166210u: goto label_166210;
            case 0x166214u: goto label_166214;
            case 0x166218u: goto label_166218;
            case 0x16621Cu: goto label_16621c;
            case 0x166220u: goto label_166220;
            case 0x166224u: goto label_166224;
            case 0x166228u: goto label_166228;
            case 0x16622Cu: goto label_16622c;
            case 0x166230u: goto label_166230;
            case 0x166234u: goto label_166234;
            case 0x166238u: goto label_166238;
            case 0x16623Cu: goto label_16623c;
            case 0x166240u: goto label_166240;
            case 0x166244u: goto label_166244;
            case 0x166248u: goto label_166248;
            case 0x16624Cu: goto label_16624c;
            case 0x166250u: goto label_166250;
            case 0x166254u: goto label_166254;
            case 0x166258u: goto label_166258;
            case 0x16625Cu: goto label_16625c;
            case 0x166260u: goto label_166260;
            case 0x166264u: goto label_166264;
            case 0x166268u: goto label_166268;
            case 0x16626Cu: goto label_16626c;
            case 0x166270u: goto label_166270;
            case 0x166274u: goto label_166274;
            case 0x166278u: goto label_166278;
            case 0x16627Cu: goto label_16627c;
            case 0x166280u: goto label_166280;
            case 0x166284u: goto label_166284;
            case 0x166288u: goto label_166288;
            case 0x16628Cu: goto label_16628c;
            case 0x166290u: goto label_166290;
            case 0x166294u: goto label_166294;
            case 0x166298u: goto label_166298;
            case 0x16629Cu: goto label_16629c;
            case 0x1662A0u: goto label_1662a0;
            case 0x1662A4u: goto label_1662a4;
            case 0x1662A8u: goto label_1662a8;
            case 0x1662ACu: goto label_1662ac;
            case 0x1662B0u: goto label_1662b0;
            case 0x1662B4u: goto label_1662b4;
            case 0x1662B8u: goto label_1662b8;
            case 0x1662BCu: goto label_1662bc;
            case 0x1662C0u: goto label_1662c0;
            case 0x1662C4u: goto label_1662c4;
            case 0x1662C8u: goto label_1662c8;
            case 0x1662CCu: goto label_1662cc;
            case 0x1662D0u: goto label_1662d0;
            case 0x1662D4u: goto label_1662d4;
            case 0x1662D8u: goto label_1662d8;
            case 0x1662DCu: goto label_1662dc;
            case 0x1662E0u: goto label_1662e0;
            case 0x1662E4u: goto label_1662e4;
            case 0x1662E8u: goto label_1662e8;
            case 0x1662ECu: goto label_1662ec;
            case 0x1662F0u: goto label_1662f0;
            case 0x1662F4u: goto label_1662f4;
            case 0x1662F8u: goto label_1662f8;
            case 0x1662FCu: goto label_1662fc;
            case 0x166300u: goto label_166300;
            case 0x166304u: goto label_166304;
            case 0x166308u: goto label_166308;
            case 0x16630Cu: goto label_16630c;
            case 0x166310u: goto label_166310;
            case 0x166314u: goto label_166314;
            case 0x166318u: goto label_166318;
            case 0x16631Cu: goto label_16631c;
            case 0x166320u: goto label_166320;
            case 0x166324u: goto label_166324;
            case 0x166328u: goto label_166328;
            case 0x16632Cu: goto label_16632c;
            case 0x166330u: goto label_166330;
            case 0x166334u: goto label_166334;
            case 0x166338u: goto label_166338;
            case 0x16633Cu: goto label_16633c;
            case 0x166340u: goto label_166340;
            case 0x166344u: goto label_166344;
            case 0x166348u: goto label_166348;
            case 0x16634Cu: goto label_16634c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1661E8u;
label_1661e8:
    // 0x1661e8: 0x27bdffe0
    ctx->pc = 0x1661e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1661ec:
    // 0x1661ec: 0xffb00000
    ctx->pc = 0x1661ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1661f0:
    // 0x1661f0: 0x80802d
    ctx->pc = 0x1661f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1661f4:
    // 0x1661f4: 0xffb10008
    ctx->pc = 0x1661f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1661f8:
    // 0x1661f8: 0xffbf0010
    ctx->pc = 0x1661f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1661fc:
    // 0x1661fc: 0xc05a78c
label_166200:
    if (ctx->pc == 0x166200u) {
        ctx->pc = 0x166200u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166204u;
        goto label_166204;
    }
    ctx->pc = 0x1661FCu;
    SET_GPR_U32(ctx, 31, 0x166204u);
    ctx->pc = 0x166200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166204u; }
    }
    if (ctx->pc != 0x166204u) { return; }
    ctx->pc = 0x166204u;
label_166204:
    // 0x166204: 0x3c05ff00
    ctx->pc = 0x166204u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
label_166208:
    // 0x166208: 0x10400007
label_16620c:
    if (ctx->pc == 0x16620Cu) {
        ctx->pc = 0x16620Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166210u;
        goto label_166210;
    }
    ctx->pc = 0x166208u;
    {
        const bool branch_taken_0x166208 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16620Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x166208) {
            ctx->pc = 0x166228u;
            goto label_166228;
        }
    }
    ctx->pc = 0x166210u;
label_166210:
    // 0x166210: 0x202d
    ctx->pc = 0x166210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166214:
    // 0x166214: 0xc05a704
label_166218:
    if (ctx->pc == 0x166218u) {
        ctx->pc = 0x166218u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 418));
        ctx->pc = 0x16621Cu;
        goto label_16621c;
    }
    ctx->pc = 0x166214u;
    SET_GPR_U32(ctx, 31, 0x16621Cu);
    ctx->pc = 0x166218u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 418));
    ctx->pc = 0x169C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169C10_0x169c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16621Cu; }
    }
    if (ctx->pc != 0x16621Cu) { return; }
    ctx->pc = 0x16621Cu;
label_16621c:
    // 0x16621c: 0x1000000b
label_166220:
    if (ctx->pc == 0x166220u) {
        ctx->pc = 0x166220u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166224u;
        goto label_166224;
    }
    ctx->pc = 0x16621Cu;
    {
        const bool branch_taken_0x16621c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x166220u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16621c) {
            ctx->pc = 0x16624Cu;
            goto label_16624c;
        }
    }
    ctx->pc = 0x166224u;
label_166224:
    // 0x166224: 0x0
    ctx->pc = 0x166224u;
    // NOP
label_166228:
    // 0x166228: 0xc05d58a
label_16622c:
    if (ctx->pc == 0x16622Cu) {
        ctx->pc = 0x16622Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x166230u;
        goto label_166230;
    }
    ctx->pc = 0x166228u;
    SET_GPR_U32(ctx, 31, 0x166230u);
    ctx->pc = 0x16622Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166230u; }
    }
    if (ctx->pc != 0x166230u) { return; }
    ctx->pc = 0x166230u;
label_166230:
    // 0x166230: 0x200202d
    ctx->pc = 0x166230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_166234:
    // 0x166234: 0x10400005
label_166238:
    if (ctx->pc == 0x166238u) {
        ctx->pc = 0x166238u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16623Cu;
        goto label_16623c;
    }
    ctx->pc = 0x166234u;
    {
        const bool branch_taken_0x166234 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x166238u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x166234) {
            ctx->pc = 0x16624Cu;
            goto label_16624c;
        }
    }
    ctx->pc = 0x16623Cu;
label_16623c:
    // 0x16623c: 0x8e031c84
    ctx->pc = 0x16623cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 7300)));
label_166240:
    // 0x166240: 0x8c620008
    ctx->pc = 0x166240u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_166244:
    // 0x166244: 0x40f809
label_166248:
    if (ctx->pc == 0x166248u) {
        ctx->pc = 0x16624Cu;
        goto label_16624c;
    }
    ctx->pc = 0x166244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16624Cu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166128u: goto label_166128;
            case 0x16612Cu: goto label_16612c;
            case 0x166130u: goto label_166130;
            case 0x166134u: goto label_166134;
            case 0x166138u: goto label_166138;
            case 0x16613Cu: goto label_16613c;
            case 0x166140u: goto label_166140;
            case 0x166144u: goto label_166144;
            case 0x166148u: goto label_166148;
            case 0x16614Cu: goto label_16614c;
            case 0x166150u: goto label_166150;
            case 0x166154u: goto label_166154;
            case 0x166158u: goto label_166158;
            case 0x16615Cu: goto label_16615c;
            case 0x166160u: goto label_166160;
            case 0x166164u: goto label_166164;
            case 0x166168u: goto label_166168;
            case 0x16616Cu: goto label_16616c;
            case 0x166170u: goto label_166170;
            case 0x166174u: goto label_166174;
            case 0x166178u: goto label_166178;
            case 0x16617Cu: goto label_16617c;
            case 0x166180u: goto label_166180;
            case 0x166184u: goto label_166184;
            case 0x166188u: goto label_166188;
            case 0x16618Cu: goto label_16618c;
            case 0x166190u: goto label_166190;
            case 0x166194u: goto label_166194;
            case 0x166198u: goto label_166198;
            case 0x16619Cu: goto label_16619c;
            case 0x1661A0u: goto label_1661a0;
            case 0x1661A4u: goto label_1661a4;
            case 0x1661A8u: goto label_1661a8;
            case 0x1661ACu: goto label_1661ac;
            case 0x1661B0u: goto label_1661b0;
            case 0x1661B4u: goto label_1661b4;
            case 0x1661B8u: goto label_1661b8;
            case 0x1661BCu: goto label_1661bc;
            case 0x1661C0u: goto label_1661c0;
            case 0x1661C4u: goto label_1661c4;
            case 0x1661C8u: goto label_1661c8;
            case 0x1661CCu: goto label_1661cc;
            case 0x1661D0u: goto label_1661d0;
            case 0x1661D4u: goto label_1661d4;
            case 0x1661D8u: goto label_1661d8;
            case 0x1661DCu: goto label_1661dc;
            case 0x1661E0u: goto label_1661e0;
            case 0x1661E4u: goto label_1661e4;
            case 0x1661E8u: goto label_1661e8;
            case 0x1661ECu: goto label_1661ec;
            case 0x1661F0u: goto label_1661f0;
            case 0x1661F4u: goto label_1661f4;
            case 0x1661F8u: goto label_1661f8;
            case 0x1661FCu: goto label_1661fc;
            case 0x166200u: goto label_166200;
            case 0x166204u: goto label_166204;
            case 0x166208u: goto label_166208;
            case 0x16620Cu: goto label_16620c;
            case 0x166210u: goto label_166210;
            case 0x166214u: goto label_166214;
            case 0x166218u: goto label_166218;
            case 0x16621Cu: goto label_16621c;
            case 0x166220u: goto label_166220;
            case 0x166224u: goto label_166224;
            case 0x166228u: goto label_166228;
            case 0x16622Cu: goto label_16622c;
            case 0x166230u: goto label_166230;
            case 0x166234u: goto label_166234;
            case 0x166238u: goto label_166238;
            case 0x16623Cu: goto label_16623c;
            case 0x166240u: goto label_166240;
            case 0x166244u: goto label_166244;
            case 0x166248u: goto label_166248;
            case 0x16624Cu: goto label_16624c;
            case 0x166250u: goto label_166250;
            case 0x166254u: goto label_166254;
            case 0x166258u: goto label_166258;
            case 0x16625Cu: goto label_16625c;
            case 0x166260u: goto label_166260;
            case 0x166264u: goto label_166264;
            case 0x166268u: goto label_166268;
            case 0x16626Cu: goto label_16626c;
            case 0x166270u: goto label_166270;
            case 0x166274u: goto label_166274;
            case 0x166278u: goto label_166278;
            case 0x16627Cu: goto label_16627c;
            case 0x166280u: goto label_166280;
            case 0x166284u: goto label_166284;
            case 0x166288u: goto label_166288;
            case 0x16628Cu: goto label_16628c;
            case 0x166290u: goto label_166290;
            case 0x166294u: goto label_166294;
            case 0x166298u: goto label_166298;
            case 0x16629Cu: goto label_16629c;
            case 0x1662A0u: goto label_1662a0;
            case 0x1662A4u: goto label_1662a4;
            case 0x1662A8u: goto label_1662a8;
            case 0x1662ACu: goto label_1662ac;
            case 0x1662B0u: goto label_1662b0;
            case 0x1662B4u: goto label_1662b4;
            case 0x1662B8u: goto label_1662b8;
            case 0x1662BCu: goto label_1662bc;
            case 0x1662C0u: goto label_1662c0;
            case 0x1662C4u: goto label_1662c4;
            case 0x1662C8u: goto label_1662c8;
            case 0x1662CCu: goto label_1662cc;
            case 0x1662D0u: goto label_1662d0;
            case 0x1662D4u: goto label_1662d4;
            case 0x1662D8u: goto label_1662d8;
            case 0x1662DCu: goto label_1662dc;
            case 0x1662E0u: goto label_1662e0;
            case 0x1662E4u: goto label_1662e4;
            case 0x1662E8u: goto label_1662e8;
            case 0x1662ECu: goto label_1662ec;
            case 0x1662F0u: goto label_1662f0;
            case 0x1662F4u: goto label_1662f4;
            case 0x1662F8u: goto label_1662f8;
            case 0x1662FCu: goto label_1662fc;
            case 0x166300u: goto label_166300;
            case 0x166304u: goto label_166304;
            case 0x166308u: goto label_166308;
            case 0x16630Cu: goto label_16630c;
            case 0x166310u: goto label_166310;
            case 0x166314u: goto label_166314;
            case 0x166318u: goto label_166318;
            case 0x16631Cu: goto label_16631c;
            case 0x166320u: goto label_166320;
            case 0x166324u: goto label_166324;
            case 0x166328u: goto label_166328;
            case 0x16632Cu: goto label_16632c;
            case 0x166330u: goto label_166330;
            case 0x166334u: goto label_166334;
            case 0x166338u: goto label_166338;
            case 0x16633Cu: goto label_16633c;
            case 0x166340u: goto label_166340;
            case 0x166344u: goto label_166344;
            case 0x166348u: goto label_166348;
            case 0x16634Cu: goto label_16634c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16624Cu; }
            if (ctx->pc != 0x16624Cu) { return; }
        }
    }
    ctx->pc = 0x16624Cu;
label_16624c:
    // 0x16624c: 0xdfb00000
    ctx->pc = 0x16624cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_166250:
    // 0x166250: 0xdfb10008
    ctx->pc = 0x166250u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_166254:
    // 0x166254: 0xdfbf0010
    ctx->pc = 0x166254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_166258:
    // 0x166258: 0x3e00008
label_16625c:
    if (ctx->pc == 0x16625Cu) {
        ctx->pc = 0x16625Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x166260u;
        goto label_166260;
    }
    ctx->pc = 0x166258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16625Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166128u: goto label_166128;
            case 0x16612Cu: goto label_16612c;
            case 0x166130u: goto label_166130;
            case 0x166134u: goto label_166134;
            case 0x166138u: goto label_166138;
            case 0x16613Cu: goto label_16613c;
            case 0x166140u: goto label_166140;
            case 0x166144u: goto label_166144;
            case 0x166148u: goto label_166148;
            case 0x16614Cu: goto label_16614c;
            case 0x166150u: goto label_166150;
            case 0x166154u: goto label_166154;
            case 0x166158u: goto label_166158;
            case 0x16615Cu: goto label_16615c;
            case 0x166160u: goto label_166160;
            case 0x166164u: goto label_166164;
            case 0x166168u: goto label_166168;
            case 0x16616Cu: goto label_16616c;
            case 0x166170u: goto label_166170;
            case 0x166174u: goto label_166174;
            case 0x166178u: goto label_166178;
            case 0x16617Cu: goto label_16617c;
            case 0x166180u: goto label_166180;
            case 0x166184u: goto label_166184;
            case 0x166188u: goto label_166188;
            case 0x16618Cu: goto label_16618c;
            case 0x166190u: goto label_166190;
            case 0x166194u: goto label_166194;
            case 0x166198u: goto label_166198;
            case 0x16619Cu: goto label_16619c;
            case 0x1661A0u: goto label_1661a0;
            case 0x1661A4u: goto label_1661a4;
            case 0x1661A8u: goto label_1661a8;
            case 0x1661ACu: goto label_1661ac;
            case 0x1661B0u: goto label_1661b0;
            case 0x1661B4u: goto label_1661b4;
            case 0x1661B8u: goto label_1661b8;
            case 0x1661BCu: goto label_1661bc;
            case 0x1661C0u: goto label_1661c0;
            case 0x1661C4u: goto label_1661c4;
            case 0x1661C8u: goto label_1661c8;
            case 0x1661CCu: goto label_1661cc;
            case 0x1661D0u: goto label_1661d0;
            case 0x1661D4u: goto label_1661d4;
            case 0x1661D8u: goto label_1661d8;
            case 0x1661DCu: goto label_1661dc;
            case 0x1661E0u: goto label_1661e0;
            case 0x1661E4u: goto label_1661e4;
            case 0x1661E8u: goto label_1661e8;
            case 0x1661ECu: goto label_1661ec;
            case 0x1661F0u: goto label_1661f0;
            case 0x1661F4u: goto label_1661f4;
            case 0x1661F8u: goto label_1661f8;
            case 0x1661FCu: goto label_1661fc;
            case 0x166200u: goto label_166200;
            case 0x166204u: goto label_166204;
            case 0x166208u: goto label_166208;
            case 0x16620Cu: goto label_16620c;
            case 0x166210u: goto label_166210;
            case 0x166214u: goto label_166214;
            case 0x166218u: goto label_166218;
            case 0x16621Cu: goto label_16621c;
            case 0x166220u: goto label_166220;
            case 0x166224u: goto label_166224;
            case 0x166228u: goto label_166228;
            case 0x16622Cu: goto label_16622c;
            case 0x166230u: goto label_166230;
            case 0x166234u: goto label_166234;
            case 0x166238u: goto label_166238;
            case 0x16623Cu: goto label_16623c;
            case 0x166240u: goto label_166240;
            case 0x166244u: goto label_166244;
            case 0x166248u: goto label_166248;
            case 0x16624Cu: goto label_16624c;
            case 0x166250u: goto label_166250;
            case 0x166254u: goto label_166254;
            case 0x166258u: goto label_166258;
            case 0x16625Cu: goto label_16625c;
            case 0x166260u: goto label_166260;
            case 0x166264u: goto label_166264;
            case 0x166268u: goto label_166268;
            case 0x16626Cu: goto label_16626c;
            case 0x166270u: goto label_166270;
            case 0x166274u: goto label_166274;
            case 0x166278u: goto label_166278;
            case 0x16627Cu: goto label_16627c;
            case 0x166280u: goto label_166280;
            case 0x166284u: goto label_166284;
            case 0x166288u: goto label_166288;
            case 0x16628Cu: goto label_16628c;
            case 0x166290u: goto label_166290;
            case 0x166294u: goto label_166294;
            case 0x166298u: goto label_166298;
            case 0x16629Cu: goto label_16629c;
            case 0x1662A0u: goto label_1662a0;
            case 0x1662A4u: goto label_1662a4;
            case 0x1662A8u: goto label_1662a8;
            case 0x1662ACu: goto label_1662ac;
            case 0x1662B0u: goto label_1662b0;
            case 0x1662B4u: goto label_1662b4;
            case 0x1662B8u: goto label_1662b8;
            case 0x1662BCu: goto label_1662bc;
            case 0x1662C0u: goto label_1662c0;
            case 0x1662C4u: goto label_1662c4;
            case 0x1662C8u: goto label_1662c8;
            case 0x1662CCu: goto label_1662cc;
            case 0x1662D0u: goto label_1662d0;
            case 0x1662D4u: goto label_1662d4;
            case 0x1662D8u: goto label_1662d8;
            case 0x1662DCu: goto label_1662dc;
            case 0x1662E0u: goto label_1662e0;
            case 0x1662E4u: goto label_1662e4;
            case 0x1662E8u: goto label_1662e8;
            case 0x1662ECu: goto label_1662ec;
            case 0x1662F0u: goto label_1662f0;
            case 0x1662F4u: goto label_1662f4;
            case 0x1662F8u: goto label_1662f8;
            case 0x1662FCu: goto label_1662fc;
            case 0x166300u: goto label_166300;
            case 0x166304u: goto label_166304;
            case 0x166308u: goto label_166308;
            case 0x16630Cu: goto label_16630c;
            case 0x166310u: goto label_166310;
            case 0x166314u: goto label_166314;
            case 0x166318u: goto label_166318;
            case 0x16631Cu: goto label_16631c;
            case 0x166320u: goto label_166320;
            case 0x166324u: goto label_166324;
            case 0x166328u: goto label_166328;
            case 0x16632Cu: goto label_16632c;
            case 0x166330u: goto label_166330;
            case 0x166334u: goto label_166334;
            case 0x166338u: goto label_166338;
            case 0x16633Cu: goto label_16633c;
            case 0x166340u: goto label_166340;
            case 0x166344u: goto label_166344;
            case 0x166348u: goto label_166348;
            case 0x16634Cu: goto label_16634c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x166260u;
label_166260:
    // 0x166260: 0x27bdffe0
    ctx->pc = 0x166260u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_166264:
    // 0x166264: 0xffb00000
    ctx->pc = 0x166264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_166268:
    // 0x166268: 0x80802d
    ctx->pc = 0x166268u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16626c:
    // 0x16626c: 0xffb10008
    ctx->pc = 0x16626cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_166270:
    // 0x166270: 0xffbf0010
    ctx->pc = 0x166270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_166274:
    // 0x166274: 0xc05a78c
label_166278:
    if (ctx->pc == 0x166278u) {
        ctx->pc = 0x166278u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16627Cu;
        goto label_16627c;
    }
    ctx->pc = 0x166274u;
    SET_GPR_U32(ctx, 31, 0x16627Cu);
    ctx->pc = 0x166278u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16627Cu; }
    }
    if (ctx->pc != 0x16627Cu) { return; }
    ctx->pc = 0x16627Cu;
label_16627c:
    // 0x16627c: 0x3c05ff00
    ctx->pc = 0x16627cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
label_166280:
    // 0x166280: 0x10400007
label_166284:
    if (ctx->pc == 0x166284u) {
        ctx->pc = 0x166284u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166288u;
        goto label_166288;
    }
    ctx->pc = 0x166280u;
    {
        const bool branch_taken_0x166280 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x166284u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x166280) {
            ctx->pc = 0x1662A0u;
            goto label_1662a0;
        }
    }
    ctx->pc = 0x166288u;
label_166288:
    // 0x166288: 0xdfb00000
    ctx->pc = 0x166288u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16628c:
    // 0x16628c: 0x34a501a3
    ctx->pc = 0x16628cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 419));
label_166290:
    // 0x166290: 0xdfb10008
    ctx->pc = 0x166290u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_166294:
    // 0x166294: 0xdfbf0010
    ctx->pc = 0x166294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_166298:
    // 0x166298: 0x805a704
label_16629c:
    if (ctx->pc == 0x16629Cu) {
        ctx->pc = 0x16629Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1662A0u;
        goto label_1662a0;
    }
    ctx->pc = 0x166298u;
    ctx->pc = 0x16629Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x1662A0u;
label_1662a0:
    // 0x1662a0: 0x200202d
    ctx->pc = 0x1662a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1662a4:
    // 0x1662a4: 0xc05d58a
label_1662a8:
    if (ctx->pc == 0x1662A8u) {
        ctx->pc = 0x1662A8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1662ACu;
        goto label_1662ac;
    }
    ctx->pc = 0x1662A4u;
    SET_GPR_U32(ctx, 31, 0x1662ACu);
    ctx->pc = 0x1662A8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1662ACu; }
    }
    if (ctx->pc != 0x1662ACu) { return; }
    ctx->pc = 0x1662ACu;
label_1662ac:
    // 0x1662ac: 0x200202d
    ctx->pc = 0x1662acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1662b0:
    // 0x1662b0: 0x10400005
label_1662b4:
    if (ctx->pc == 0x1662B4u) {
        ctx->pc = 0x1662B4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1662B8u;
        goto label_1662b8;
    }
    ctx->pc = 0x1662B0u;
    {
        const bool branch_taken_0x1662b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1662B4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1662b0) {
            ctx->pc = 0x1662C8u;
            goto label_1662c8;
        }
    }
    ctx->pc = 0x1662B8u;
label_1662b8:
    // 0x1662b8: 0x8e021c84
    ctx->pc = 0x1662b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 7300)));
label_1662bc:
    // 0x1662bc: 0x8c43000c
    ctx->pc = 0x1662bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1662c0:
    // 0x1662c0: 0x60f809
label_1662c4:
    if (ctx->pc == 0x1662C4u) {
        ctx->pc = 0x1662C8u;
        goto label_1662c8;
    }
    ctx->pc = 0x1662C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1662C8u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166128u: goto label_166128;
            case 0x16612Cu: goto label_16612c;
            case 0x166130u: goto label_166130;
            case 0x166134u: goto label_166134;
            case 0x166138u: goto label_166138;
            case 0x16613Cu: goto label_16613c;
            case 0x166140u: goto label_166140;
            case 0x166144u: goto label_166144;
            case 0x166148u: goto label_166148;
            case 0x16614Cu: goto label_16614c;
            case 0x166150u: goto label_166150;
            case 0x166154u: goto label_166154;
            case 0x166158u: goto label_166158;
            case 0x16615Cu: goto label_16615c;
            case 0x166160u: goto label_166160;
            case 0x166164u: goto label_166164;
            case 0x166168u: goto label_166168;
            case 0x16616Cu: goto label_16616c;
            case 0x166170u: goto label_166170;
            case 0x166174u: goto label_166174;
            case 0x166178u: goto label_166178;
            case 0x16617Cu: goto label_16617c;
            case 0x166180u: goto label_166180;
            case 0x166184u: goto label_166184;
            case 0x166188u: goto label_166188;
            case 0x16618Cu: goto label_16618c;
            case 0x166190u: goto label_166190;
            case 0x166194u: goto label_166194;
            case 0x166198u: goto label_166198;
            case 0x16619Cu: goto label_16619c;
            case 0x1661A0u: goto label_1661a0;
            case 0x1661A4u: goto label_1661a4;
            case 0x1661A8u: goto label_1661a8;
            case 0x1661ACu: goto label_1661ac;
            case 0x1661B0u: goto label_1661b0;
            case 0x1661B4u: goto label_1661b4;
            case 0x1661B8u: goto label_1661b8;
            case 0x1661BCu: goto label_1661bc;
            case 0x1661C0u: goto label_1661c0;
            case 0x1661C4u: goto label_1661c4;
            case 0x1661C8u: goto label_1661c8;
            case 0x1661CCu: goto label_1661cc;
            case 0x1661D0u: goto label_1661d0;
            case 0x1661D4u: goto label_1661d4;
            case 0x1661D8u: goto label_1661d8;
            case 0x1661DCu: goto label_1661dc;
            case 0x1661E0u: goto label_1661e0;
            case 0x1661E4u: goto label_1661e4;
            case 0x1661E8u: goto label_1661e8;
            case 0x1661ECu: goto label_1661ec;
            case 0x1661F0u: goto label_1661f0;
            case 0x1661F4u: goto label_1661f4;
            case 0x1661F8u: goto label_1661f8;
            case 0x1661FCu: goto label_1661fc;
            case 0x166200u: goto label_166200;
            case 0x166204u: goto label_166204;
            case 0x166208u: goto label_166208;
            case 0x16620Cu: goto label_16620c;
            case 0x166210u: goto label_166210;
            case 0x166214u: goto label_166214;
            case 0x166218u: goto label_166218;
            case 0x16621Cu: goto label_16621c;
            case 0x166220u: goto label_166220;
            case 0x166224u: goto label_166224;
            case 0x166228u: goto label_166228;
            case 0x16622Cu: goto label_16622c;
            case 0x166230u: goto label_166230;
            case 0x166234u: goto label_166234;
            case 0x166238u: goto label_166238;
            case 0x16623Cu: goto label_16623c;
            case 0x166240u: goto label_166240;
            case 0x166244u: goto label_166244;
            case 0x166248u: goto label_166248;
            case 0x16624Cu: goto label_16624c;
            case 0x166250u: goto label_166250;
            case 0x166254u: goto label_166254;
            case 0x166258u: goto label_166258;
            case 0x16625Cu: goto label_16625c;
            case 0x166260u: goto label_166260;
            case 0x166264u: goto label_166264;
            case 0x166268u: goto label_166268;
            case 0x16626Cu: goto label_16626c;
            case 0x166270u: goto label_166270;
            case 0x166274u: goto label_166274;
            case 0x166278u: goto label_166278;
            case 0x16627Cu: goto label_16627c;
            case 0x166280u: goto label_166280;
            case 0x166284u: goto label_166284;
            case 0x166288u: goto label_166288;
            case 0x16628Cu: goto label_16628c;
            case 0x166290u: goto label_166290;
            case 0x166294u: goto label_166294;
            case 0x166298u: goto label_166298;
            case 0x16629Cu: goto label_16629c;
            case 0x1662A0u: goto label_1662a0;
            case 0x1662A4u: goto label_1662a4;
            case 0x1662A8u: goto label_1662a8;
            case 0x1662ACu: goto label_1662ac;
            case 0x1662B0u: goto label_1662b0;
            case 0x1662B4u: goto label_1662b4;
            case 0x1662B8u: goto label_1662b8;
            case 0x1662BCu: goto label_1662bc;
            case 0x1662C0u: goto label_1662c0;
            case 0x1662C4u: goto label_1662c4;
            case 0x1662C8u: goto label_1662c8;
            case 0x1662CCu: goto label_1662cc;
            case 0x1662D0u: goto label_1662d0;
            case 0x1662D4u: goto label_1662d4;
            case 0x1662D8u: goto label_1662d8;
            case 0x1662DCu: goto label_1662dc;
            case 0x1662E0u: goto label_1662e0;
            case 0x1662E4u: goto label_1662e4;
            case 0x1662E8u: goto label_1662e8;
            case 0x1662ECu: goto label_1662ec;
            case 0x1662F0u: goto label_1662f0;
            case 0x1662F4u: goto label_1662f4;
            case 0x1662F8u: goto label_1662f8;
            case 0x1662FCu: goto label_1662fc;
            case 0x166300u: goto label_166300;
            case 0x166304u: goto label_166304;
            case 0x166308u: goto label_166308;
            case 0x16630Cu: goto label_16630c;
            case 0x166310u: goto label_166310;
            case 0x166314u: goto label_166314;
            case 0x166318u: goto label_166318;
            case 0x16631Cu: goto label_16631c;
            case 0x166320u: goto label_166320;
            case 0x166324u: goto label_166324;
            case 0x166328u: goto label_166328;
            case 0x16632Cu: goto label_16632c;
            case 0x166330u: goto label_166330;
            case 0x166334u: goto label_166334;
            case 0x166338u: goto label_166338;
            case 0x16633Cu: goto label_16633c;
            case 0x166340u: goto label_166340;
            case 0x166344u: goto label_166344;
            case 0x166348u: goto label_166348;
            case 0x16634Cu: goto label_16634c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1662C8u; }
            if (ctx->pc != 0x1662C8u) { return; }
        }
    }
    ctx->pc = 0x1662C8u;
label_1662c8:
    // 0x1662c8: 0xdfb00000
    ctx->pc = 0x1662c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1662cc:
    // 0x1662cc: 0xdfb10008
    ctx->pc = 0x1662ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1662d0:
    // 0x1662d0: 0xdfbf0010
    ctx->pc = 0x1662d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1662d4:
    // 0x1662d4: 0x3e00008
label_1662d8:
    if (ctx->pc == 0x1662D8u) {
        ctx->pc = 0x1662D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1662DCu;
        goto label_1662dc;
    }
    ctx->pc = 0x1662D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1662D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166128u: goto label_166128;
            case 0x16612Cu: goto label_16612c;
            case 0x166130u: goto label_166130;
            case 0x166134u: goto label_166134;
            case 0x166138u: goto label_166138;
            case 0x16613Cu: goto label_16613c;
            case 0x166140u: goto label_166140;
            case 0x166144u: goto label_166144;
            case 0x166148u: goto label_166148;
            case 0x16614Cu: goto label_16614c;
            case 0x166150u: goto label_166150;
            case 0x166154u: goto label_166154;
            case 0x166158u: goto label_166158;
            case 0x16615Cu: goto label_16615c;
            case 0x166160u: goto label_166160;
            case 0x166164u: goto label_166164;
            case 0x166168u: goto label_166168;
            case 0x16616Cu: goto label_16616c;
            case 0x166170u: goto label_166170;
            case 0x166174u: goto label_166174;
            case 0x166178u: goto label_166178;
            case 0x16617Cu: goto label_16617c;
            case 0x166180u: goto label_166180;
            case 0x166184u: goto label_166184;
            case 0x166188u: goto label_166188;
            case 0x16618Cu: goto label_16618c;
            case 0x166190u: goto label_166190;
            case 0x166194u: goto label_166194;
            case 0x166198u: goto label_166198;
            case 0x16619Cu: goto label_16619c;
            case 0x1661A0u: goto label_1661a0;
            case 0x1661A4u: goto label_1661a4;
            case 0x1661A8u: goto label_1661a8;
            case 0x1661ACu: goto label_1661ac;
            case 0x1661B0u: goto label_1661b0;
            case 0x1661B4u: goto label_1661b4;
            case 0x1661B8u: goto label_1661b8;
            case 0x1661BCu: goto label_1661bc;
            case 0x1661C0u: goto label_1661c0;
            case 0x1661C4u: goto label_1661c4;
            case 0x1661C8u: goto label_1661c8;
            case 0x1661CCu: goto label_1661cc;
            case 0x1661D0u: goto label_1661d0;
            case 0x1661D4u: goto label_1661d4;
            case 0x1661D8u: goto label_1661d8;
            case 0x1661DCu: goto label_1661dc;
            case 0x1661E0u: goto label_1661e0;
            case 0x1661E4u: goto label_1661e4;
            case 0x1661E8u: goto label_1661e8;
            case 0x1661ECu: goto label_1661ec;
            case 0x1661F0u: goto label_1661f0;
            case 0x1661F4u: goto label_1661f4;
            case 0x1661F8u: goto label_1661f8;
            case 0x1661FCu: goto label_1661fc;
            case 0x166200u: goto label_166200;
            case 0x166204u: goto label_166204;
            case 0x166208u: goto label_166208;
            case 0x16620Cu: goto label_16620c;
            case 0x166210u: goto label_166210;
            case 0x166214u: goto label_166214;
            case 0x166218u: goto label_166218;
            case 0x16621Cu: goto label_16621c;
            case 0x166220u: goto label_166220;
            case 0x166224u: goto label_166224;
            case 0x166228u: goto label_166228;
            case 0x16622Cu: goto label_16622c;
            case 0x166230u: goto label_166230;
            case 0x166234u: goto label_166234;
            case 0x166238u: goto label_166238;
            case 0x16623Cu: goto label_16623c;
            case 0x166240u: goto label_166240;
            case 0x166244u: goto label_166244;
            case 0x166248u: goto label_166248;
            case 0x16624Cu: goto label_16624c;
            case 0x166250u: goto label_166250;
            case 0x166254u: goto label_166254;
            case 0x166258u: goto label_166258;
            case 0x16625Cu: goto label_16625c;
            case 0x166260u: goto label_166260;
            case 0x166264u: goto label_166264;
            case 0x166268u: goto label_166268;
            case 0x16626Cu: goto label_16626c;
            case 0x166270u: goto label_166270;
            case 0x166274u: goto label_166274;
            case 0x166278u: goto label_166278;
            case 0x16627Cu: goto label_16627c;
            case 0x166280u: goto label_166280;
            case 0x166284u: goto label_166284;
            case 0x166288u: goto label_166288;
            case 0x16628Cu: goto label_16628c;
            case 0x166290u: goto label_166290;
            case 0x166294u: goto label_166294;
            case 0x166298u: goto label_166298;
            case 0x16629Cu: goto label_16629c;
            case 0x1662A0u: goto label_1662a0;
            case 0x1662A4u: goto label_1662a4;
            case 0x1662A8u: goto label_1662a8;
            case 0x1662ACu: goto label_1662ac;
            case 0x1662B0u: goto label_1662b0;
            case 0x1662B4u: goto label_1662b4;
            case 0x1662B8u: goto label_1662b8;
            case 0x1662BCu: goto label_1662bc;
            case 0x1662C0u: goto label_1662c0;
            case 0x1662C4u: goto label_1662c4;
            case 0x1662C8u: goto label_1662c8;
            case 0x1662CCu: goto label_1662cc;
            case 0x1662D0u: goto label_1662d0;
            case 0x1662D4u: goto label_1662d4;
            case 0x1662D8u: goto label_1662d8;
            case 0x1662DCu: goto label_1662dc;
            case 0x1662E0u: goto label_1662e0;
            case 0x1662E4u: goto label_1662e4;
            case 0x1662E8u: goto label_1662e8;
            case 0x1662ECu: goto label_1662ec;
            case 0x1662F0u: goto label_1662f0;
            case 0x1662F4u: goto label_1662f4;
            case 0x1662F8u: goto label_1662f8;
            case 0x1662FCu: goto label_1662fc;
            case 0x166300u: goto label_166300;
            case 0x166304u: goto label_166304;
            case 0x166308u: goto label_166308;
            case 0x16630Cu: goto label_16630c;
            case 0x166310u: goto label_166310;
            case 0x166314u: goto label_166314;
            case 0x166318u: goto label_166318;
            case 0x16631Cu: goto label_16631c;
            case 0x166320u: goto label_166320;
            case 0x166324u: goto label_166324;
            case 0x166328u: goto label_166328;
            case 0x16632Cu: goto label_16632c;
            case 0x166330u: goto label_166330;
            case 0x166334u: goto label_166334;
            case 0x166338u: goto label_166338;
            case 0x16633Cu: goto label_16633c;
            case 0x166340u: goto label_166340;
            case 0x166344u: goto label_166344;
            case 0x166348u: goto label_166348;
            case 0x16634Cu: goto label_16634c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1662DCu;
label_1662dc:
    // 0x1662dc: 0x0
    ctx->pc = 0x1662dcu;
    // NOP
label_1662e0:
    // 0x1662e0: 0x27bdfff0
    ctx->pc = 0x1662e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1662e4:
    // 0x1662e4: 0xffb00000
    ctx->pc = 0x1662e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1662e8:
    // 0x1662e8: 0xffbf0008
    ctx->pc = 0x1662e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1662ec:
    // 0x1662ec: 0xc05a78c
label_1662f0:
    if (ctx->pc == 0x1662F0u) {
        ctx->pc = 0x1662F0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1662F4u;
        goto label_1662f4;
    }
    ctx->pc = 0x1662ECu;
    SET_GPR_U32(ctx, 31, 0x1662F4u);
    ctx->pc = 0x1662F0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1662F4u; }
    }
    if (ctx->pc != 0x1662F4u) { return; }
    ctx->pc = 0x1662F4u;
label_1662f4:
    // 0x1662f4: 0x3c05ff00
    ctx->pc = 0x1662f4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
label_1662f8:
    // 0x1662f8: 0x202d
    ctx->pc = 0x1662f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1662fc:
    // 0x1662fc: 0x10400006
label_166300:
    if (ctx->pc == 0x166300u) {
        ctx->pc = 0x166300u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 420));
        ctx->pc = 0x166304u;
        goto label_166304;
    }
    ctx->pc = 0x1662FCu;
    {
        const bool branch_taken_0x1662fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x166300u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 420));
        if (branch_taken_0x1662fc) {
            ctx->pc = 0x166318u;
            goto label_166318;
        }
    }
    ctx->pc = 0x166304u;
label_166304:
    // 0x166304: 0xc05a704
label_166308:
    if (ctx->pc == 0x166308u) {
        ctx->pc = 0x16630Cu;
        goto label_16630c;
    }
    ctx->pc = 0x166304u;
    SET_GPR_U32(ctx, 31, 0x16630Cu);
    ctx->pc = 0x169C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169C10_0x169c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16630Cu; }
    }
    if (ctx->pc != 0x16630Cu) { return; }
    ctx->pc = 0x16630Cu;
label_16630c:
    // 0x16630c: 0x1000000b
label_166310:
    if (ctx->pc == 0x166310u) {
        ctx->pc = 0x166310u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166314u;
        goto label_166314;
    }
    ctx->pc = 0x16630Cu;
    {
        const bool branch_taken_0x16630c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x166310u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16630c) {
            ctx->pc = 0x16633Cu;
            goto label_16633c;
        }
    }
    ctx->pc = 0x166314u;
label_166314:
    // 0x166314: 0x0
    ctx->pc = 0x166314u;
    // NOP
label_166318:
    // 0x166318: 0x200202d
    ctx->pc = 0x166318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16631c:
    // 0x16631c: 0xc05d58a
label_166320:
    if (ctx->pc == 0x166320u) {
        ctx->pc = 0x166320u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x166324u;
        goto label_166324;
    }
    ctx->pc = 0x16631Cu;
    SET_GPR_U32(ctx, 31, 0x166324u);
    ctx->pc = 0x166320u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166324u; }
    }
    if (ctx->pc != 0x166324u) { return; }
    ctx->pc = 0x166324u;
label_166324:
    // 0x166324: 0x10400005
label_166328:
    if (ctx->pc == 0x166328u) {
        ctx->pc = 0x166328u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16632Cu;
        goto label_16632c;
    }
    ctx->pc = 0x166324u;
    {
        const bool branch_taken_0x166324 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x166328u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x166324) {
            ctx->pc = 0x16633Cu;
            goto label_16633c;
        }
    }
    ctx->pc = 0x16632Cu;
label_16632c:
    // 0x16632c: 0x8e031c84
    ctx->pc = 0x16632cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 7300)));
label_166330:
    // 0x166330: 0x8c620010
    ctx->pc = 0x166330u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_166334:
    // 0x166334: 0x40f809
label_166338:
    if (ctx->pc == 0x166338u) {
        ctx->pc = 0x16633Cu;
        goto label_16633c;
    }
    ctx->pc = 0x166334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16633Cu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166128u: goto label_166128;
            case 0x16612Cu: goto label_16612c;
            case 0x166130u: goto label_166130;
            case 0x166134u: goto label_166134;
            case 0x166138u: goto label_166138;
            case 0x16613Cu: goto label_16613c;
            case 0x166140u: goto label_166140;
            case 0x166144u: goto label_166144;
            case 0x166148u: goto label_166148;
            case 0x16614Cu: goto label_16614c;
            case 0x166150u: goto label_166150;
            case 0x166154u: goto label_166154;
            case 0x166158u: goto label_166158;
            case 0x16615Cu: goto label_16615c;
            case 0x166160u: goto label_166160;
            case 0x166164u: goto label_166164;
            case 0x166168u: goto label_166168;
            case 0x16616Cu: goto label_16616c;
            case 0x166170u: goto label_166170;
            case 0x166174u: goto label_166174;
            case 0x166178u: goto label_166178;
            case 0x16617Cu: goto label_16617c;
            case 0x166180u: goto label_166180;
            case 0x166184u: goto label_166184;
            case 0x166188u: goto label_166188;
            case 0x16618Cu: goto label_16618c;
            case 0x166190u: goto label_166190;
            case 0x166194u: goto label_166194;
            case 0x166198u: goto label_166198;
            case 0x16619Cu: goto label_16619c;
            case 0x1661A0u: goto label_1661a0;
            case 0x1661A4u: goto label_1661a4;
            case 0x1661A8u: goto label_1661a8;
            case 0x1661ACu: goto label_1661ac;
            case 0x1661B0u: goto label_1661b0;
            case 0x1661B4u: goto label_1661b4;
            case 0x1661B8u: goto label_1661b8;
            case 0x1661BCu: goto label_1661bc;
            case 0x1661C0u: goto label_1661c0;
            case 0x1661C4u: goto label_1661c4;
            case 0x1661C8u: goto label_1661c8;
            case 0x1661CCu: goto label_1661cc;
            case 0x1661D0u: goto label_1661d0;
            case 0x1661D4u: goto label_1661d4;
            case 0x1661D8u: goto label_1661d8;
            case 0x1661DCu: goto label_1661dc;
            case 0x1661E0u: goto label_1661e0;
            case 0x1661E4u: goto label_1661e4;
            case 0x1661E8u: goto label_1661e8;
            case 0x1661ECu: goto label_1661ec;
            case 0x1661F0u: goto label_1661f0;
            case 0x1661F4u: goto label_1661f4;
            case 0x1661F8u: goto label_1661f8;
            case 0x1661FCu: goto label_1661fc;
            case 0x166200u: goto label_166200;
            case 0x166204u: goto label_166204;
            case 0x166208u: goto label_166208;
            case 0x16620Cu: goto label_16620c;
            case 0x166210u: goto label_166210;
            case 0x166214u: goto label_166214;
            case 0x166218u: goto label_166218;
            case 0x16621Cu: goto label_16621c;
            case 0x166220u: goto label_166220;
            case 0x166224u: goto label_166224;
            case 0x166228u: goto label_166228;
            case 0x16622Cu: goto label_16622c;
            case 0x166230u: goto label_166230;
            case 0x166234u: goto label_166234;
            case 0x166238u: goto label_166238;
            case 0x16623Cu: goto label_16623c;
            case 0x166240u: goto label_166240;
            case 0x166244u: goto label_166244;
            case 0x166248u: goto label_166248;
            case 0x16624Cu: goto label_16624c;
            case 0x166250u: goto label_166250;
            case 0x166254u: goto label_166254;
            case 0x166258u: goto label_166258;
            case 0x16625Cu: goto label_16625c;
            case 0x166260u: goto label_166260;
            case 0x166264u: goto label_166264;
            case 0x166268u: goto label_166268;
            case 0x16626Cu: goto label_16626c;
            case 0x166270u: goto label_166270;
            case 0x166274u: goto label_166274;
            case 0x166278u: goto label_166278;
            case 0x16627Cu: goto label_16627c;
            case 0x166280u: goto label_166280;
            case 0x166284u: goto label_166284;
            case 0x166288u: goto label_166288;
            case 0x16628Cu: goto label_16628c;
            case 0x166290u: goto label_166290;
            case 0x166294u: goto label_166294;
            case 0x166298u: goto label_166298;
            case 0x16629Cu: goto label_16629c;
            case 0x1662A0u: goto label_1662a0;
            case 0x1662A4u: goto label_1662a4;
            case 0x1662A8u: goto label_1662a8;
            case 0x1662ACu: goto label_1662ac;
            case 0x1662B0u: goto label_1662b0;
            case 0x1662B4u: goto label_1662b4;
            case 0x1662B8u: goto label_1662b8;
            case 0x1662BCu: goto label_1662bc;
            case 0x1662C0u: goto label_1662c0;
            case 0x1662C4u: goto label_1662c4;
            case 0x1662C8u: goto label_1662c8;
            case 0x1662CCu: goto label_1662cc;
            case 0x1662D0u: goto label_1662d0;
            case 0x1662D4u: goto label_1662d4;
            case 0x1662D8u: goto label_1662d8;
            case 0x1662DCu: goto label_1662dc;
            case 0x1662E0u: goto label_1662e0;
            case 0x1662E4u: goto label_1662e4;
            case 0x1662E8u: goto label_1662e8;
            case 0x1662ECu: goto label_1662ec;
            case 0x1662F0u: goto label_1662f0;
            case 0x1662F4u: goto label_1662f4;
            case 0x1662F8u: goto label_1662f8;
            case 0x1662FCu: goto label_1662fc;
            case 0x166300u: goto label_166300;
            case 0x166304u: goto label_166304;
            case 0x166308u: goto label_166308;
            case 0x16630Cu: goto label_16630c;
            case 0x166310u: goto label_166310;
            case 0x166314u: goto label_166314;
            case 0x166318u: goto label_166318;
            case 0x16631Cu: goto label_16631c;
            case 0x166320u: goto label_166320;
            case 0x166324u: goto label_166324;
            case 0x166328u: goto label_166328;
            case 0x16632Cu: goto label_16632c;
            case 0x166330u: goto label_166330;
            case 0x166334u: goto label_166334;
            case 0x166338u: goto label_166338;
            case 0x16633Cu: goto label_16633c;
            case 0x166340u: goto label_166340;
            case 0x166344u: goto label_166344;
            case 0x166348u: goto label_166348;
            case 0x16634Cu: goto label_16634c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16633Cu; }
            if (ctx->pc != 0x16633Cu) { return; }
        }
    }
    ctx->pc = 0x16633Cu;
label_16633c:
    // 0x16633c: 0xdfb00000
    ctx->pc = 0x16633cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_166340:
    // 0x166340: 0xdfbf0008
    ctx->pc = 0x166340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_166344:
    // 0x166344: 0x3e00008
label_166348:
    if (ctx->pc == 0x166348u) {
        ctx->pc = 0x166348u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x16634Cu;
        goto label_16634c;
    }
    ctx->pc = 0x166344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166348u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166128u: goto label_166128;
            case 0x16612Cu: goto label_16612c;
            case 0x166130u: goto label_166130;
            case 0x166134u: goto label_166134;
            case 0x166138u: goto label_166138;
            case 0x16613Cu: goto label_16613c;
            case 0x166140u: goto label_166140;
            case 0x166144u: goto label_166144;
            case 0x166148u: goto label_166148;
            case 0x16614Cu: goto label_16614c;
            case 0x166150u: goto label_166150;
            case 0x166154u: goto label_166154;
            case 0x166158u: goto label_166158;
            case 0x16615Cu: goto label_16615c;
            case 0x166160u: goto label_166160;
            case 0x166164u: goto label_166164;
            case 0x166168u: goto label_166168;
            case 0x16616Cu: goto label_16616c;
            case 0x166170u: goto label_166170;
            case 0x166174u: goto label_166174;
            case 0x166178u: goto label_166178;
            case 0x16617Cu: goto label_16617c;
            case 0x166180u: goto label_166180;
            case 0x166184u: goto label_166184;
            case 0x166188u: goto label_166188;
            case 0x16618Cu: goto label_16618c;
            case 0x166190u: goto label_166190;
            case 0x166194u: goto label_166194;
            case 0x166198u: goto label_166198;
            case 0x16619Cu: goto label_16619c;
            case 0x1661A0u: goto label_1661a0;
            case 0x1661A4u: goto label_1661a4;
            case 0x1661A8u: goto label_1661a8;
            case 0x1661ACu: goto label_1661ac;
            case 0x1661B0u: goto label_1661b0;
            case 0x1661B4u: goto label_1661b4;
            case 0x1661B8u: goto label_1661b8;
            case 0x1661BCu: goto label_1661bc;
            case 0x1661C0u: goto label_1661c0;
            case 0x1661C4u: goto label_1661c4;
            case 0x1661C8u: goto label_1661c8;
            case 0x1661CCu: goto label_1661cc;
            case 0x1661D0u: goto label_1661d0;
            case 0x1661D4u: goto label_1661d4;
            case 0x1661D8u: goto label_1661d8;
            case 0x1661DCu: goto label_1661dc;
            case 0x1661E0u: goto label_1661e0;
            case 0x1661E4u: goto label_1661e4;
            case 0x1661E8u: goto label_1661e8;
            case 0x1661ECu: goto label_1661ec;
            case 0x1661F0u: goto label_1661f0;
            case 0x1661F4u: goto label_1661f4;
            case 0x1661F8u: goto label_1661f8;
            case 0x1661FCu: goto label_1661fc;
            case 0x166200u: goto label_166200;
            case 0x166204u: goto label_166204;
            case 0x166208u: goto label_166208;
            case 0x16620Cu: goto label_16620c;
            case 0x166210u: goto label_166210;
            case 0x166214u: goto label_166214;
            case 0x166218u: goto label_166218;
            case 0x16621Cu: goto label_16621c;
            case 0x166220u: goto label_166220;
            case 0x166224u: goto label_166224;
            case 0x166228u: goto label_166228;
            case 0x16622Cu: goto label_16622c;
            case 0x166230u: goto label_166230;
            case 0x166234u: goto label_166234;
            case 0x166238u: goto label_166238;
            case 0x16623Cu: goto label_16623c;
            case 0x166240u: goto label_166240;
            case 0x166244u: goto label_166244;
            case 0x166248u: goto label_166248;
            case 0x16624Cu: goto label_16624c;
            case 0x166250u: goto label_166250;
            case 0x166254u: goto label_166254;
            case 0x166258u: goto label_166258;
            case 0x16625Cu: goto label_16625c;
            case 0x166260u: goto label_166260;
            case 0x166264u: goto label_166264;
            case 0x166268u: goto label_166268;
            case 0x16626Cu: goto label_16626c;
            case 0x166270u: goto label_166270;
            case 0x166274u: goto label_166274;
            case 0x166278u: goto label_166278;
            case 0x16627Cu: goto label_16627c;
            case 0x166280u: goto label_166280;
            case 0x166284u: goto label_166284;
            case 0x166288u: goto label_166288;
            case 0x16628Cu: goto label_16628c;
            case 0x166290u: goto label_166290;
            case 0x166294u: goto label_166294;
            case 0x166298u: goto label_166298;
            case 0x16629Cu: goto label_16629c;
            case 0x1662A0u: goto label_1662a0;
            case 0x1662A4u: goto label_1662a4;
            case 0x1662A8u: goto label_1662a8;
            case 0x1662ACu: goto label_1662ac;
            case 0x1662B0u: goto label_1662b0;
            case 0x1662B4u: goto label_1662b4;
            case 0x1662B8u: goto label_1662b8;
            case 0x1662BCu: goto label_1662bc;
            case 0x1662C0u: goto label_1662c0;
            case 0x1662C4u: goto label_1662c4;
            case 0x1662C8u: goto label_1662c8;
            case 0x1662CCu: goto label_1662cc;
            case 0x1662D0u: goto label_1662d0;
            case 0x1662D4u: goto label_1662d4;
            case 0x1662D8u: goto label_1662d8;
            case 0x1662DCu: goto label_1662dc;
            case 0x1662E0u: goto label_1662e0;
            case 0x1662E4u: goto label_1662e4;
            case 0x1662E8u: goto label_1662e8;
            case 0x1662ECu: goto label_1662ec;
            case 0x1662F0u: goto label_1662f0;
            case 0x1662F4u: goto label_1662f4;
            case 0x1662F8u: goto label_1662f8;
            case 0x1662FCu: goto label_1662fc;
            case 0x166300u: goto label_166300;
            case 0x166304u: goto label_166304;
            case 0x166308u: goto label_166308;
            case 0x16630Cu: goto label_16630c;
            case 0x166310u: goto label_166310;
            case 0x166314u: goto label_166314;
            case 0x166318u: goto label_166318;
            case 0x16631Cu: goto label_16631c;
            case 0x166320u: goto label_166320;
            case 0x166324u: goto label_166324;
            case 0x166328u: goto label_166328;
            case 0x16632Cu: goto label_16632c;
            case 0x166330u: goto label_166330;
            case 0x166334u: goto label_166334;
            case 0x166338u: goto label_166338;
            case 0x16633Cu: goto label_16633c;
            case 0x166340u: goto label_166340;
            case 0x166344u: goto label_166344;
            case 0x166348u: goto label_166348;
            case 0x16634Cu: goto label_16634c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16634Cu;
label_16634c:
    // 0x16634c: 0x0
    ctx->pc = 0x16634cu;
    // NOP
}
