#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00133FE0
// Address: 0x133fe0 - 0x1343b8
void sub_00133FE0_0x133fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x133fe0u;

label_133fe0:
    // 0x133fe0: 0x27bdffa0
    ctx->pc = 0x133fe0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
label_133fe4:
    // 0x133fe4: 0xffb00030
    ctx->pc = 0x133fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_133fe8:
    // 0x133fe8: 0x24100800
    ctx->pc = 0x133fe8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 2048));
label_133fec:
    // 0x133fec: 0xffb10038
    ctx->pc = 0x133fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_133ff0:
    // 0x133ff0: 0x80882d
    ctx->pc = 0x133ff0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_133ff4:
    // 0x133ff4: 0xffb20040
    ctx->pc = 0x133ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_133ff8:
    // 0x133ff8: 0xffb30048
    ctx->pc = 0x133ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_133ffc:
    // 0x133ffc: 0xffb40050
    ctx->pc = 0x133ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_134000:
    // 0x134000: 0xffbf0058
    ctx->pc = 0x134000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_134004:
    // 0x134004: 0xafa00020
    ctx->pc = 0x134004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_134008:
    // 0x134008: 0x8e330004
    ctx->pc = 0x134008u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13400c:
    // 0x13400c: 0x92220002
    ctx->pc = 0x13400cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_134010:
    // 0x134010: 0x2c420002
    ctx->pc = 0x134010u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
label_134014:
    // 0x134014: 0x10400018
label_134018:
    if (ctx->pc == 0x134018u) {
        ctx->pc = 0x134018u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x13401Cu;
        goto label_13401c;
    }
    ctx->pc = 0x134014u;
    {
        const bool branch_taken_0x134014 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x134018u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        if (branch_taken_0x134014) {
            ctx->pc = 0x134078u;
            goto label_134078;
        }
    }
    ctx->pc = 0x13401Cu;
label_13401c:
    // 0x13401c: 0x822300ac
    ctx->pc = 0x13401cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 172)));
label_134020:
    // 0x134020: 0x24020001
    ctx->pc = 0x134020u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_134024:
    // 0x134024: 0x14620014
label_134028:
    if (ctx->pc == 0x134028u) {
        ctx->pc = 0x13402Cu;
        goto label_13402c;
    }
    ctx->pc = 0x134024u;
    {
        const bool branch_taken_0x134024 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x134024) {
            ctx->pc = 0x134078u;
            goto label_134078;
        }
    }
    ctx->pc = 0x13402Cu;
label_13402c:
    // 0x13402c: 0xc04c16e
label_134030:
    if (ctx->pc == 0x134030u) {
        ctx->pc = 0x134030u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x134034u;
        goto label_134034;
    }
    ctx->pc = 0x13402Cu;
    SET_GPR_U32(ctx, 31, 0x134034u);
    ctx->pc = 0x134030u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->pc = 0x1305B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001305B8_0x1305b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134034u; }
    }
    if (ctx->pc != 0x134034u) { return; }
    ctx->pc = 0x134034u;
label_134034:
    // 0x134034: 0x24030002
    ctx->pc = 0x134034u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_134038:
    // 0x134038: 0x504300d8
label_13403c:
    if (ctx->pc == 0x13403Cu) {
        ctx->pc = 0x13403Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x134040u;
        goto label_134040;
    }
    ctx->pc = 0x134038u;
    {
        const bool branch_taken_0x134038 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x134038) {
            ctx->pc = 0x13403Cu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->pc = 0x13439Cu;
            goto label_13439c;
        }
    }
    ctx->pc = 0x134040u;
label_134040:
    // 0x134040: 0x8e240010
    ctx->pc = 0x134040u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_134044:
    // 0x134044: 0x50800006
label_134048:
    if (ctx->pc == 0x134048u) {
        ctx->pc = 0x134048u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 180)));
        ctx->pc = 0x13404Cu;
        goto label_13404c;
    }
    ctx->pc = 0x134044u;
    {
        const bool branch_taken_0x134044 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x134044) {
            ctx->pc = 0x134048u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 180)));
            ctx->pc = 0x134060u;
            goto label_134060;
        }
    }
    ctx->pc = 0x13404Cu;
label_13404c:
    // 0x13404c: 0x8c830000
    ctx->pc = 0x13404cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_134050:
    // 0x134050: 0x8c620014
    ctx->pc = 0x134050u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_134054:
    // 0x134054: 0x40f809
label_134058:
    if (ctx->pc == 0x134058u) {
        ctx->pc = 0x13405Cu;
        goto label_13405c;
    }
    ctx->pc = 0x134054u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13405Cu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133FE0u: goto label_133fe0;
            case 0x133FE4u: goto label_133fe4;
            case 0x133FE8u: goto label_133fe8;
            case 0x133FECu: goto label_133fec;
            case 0x133FF0u: goto label_133ff0;
            case 0x133FF4u: goto label_133ff4;
            case 0x133FF8u: goto label_133ff8;
            case 0x133FFCu: goto label_133ffc;
            case 0x134000u: goto label_134000;
            case 0x134004u: goto label_134004;
            case 0x134008u: goto label_134008;
            case 0x13400Cu: goto label_13400c;
            case 0x134010u: goto label_134010;
            case 0x134014u: goto label_134014;
            case 0x134018u: goto label_134018;
            case 0x13401Cu: goto label_13401c;
            case 0x134020u: goto label_134020;
            case 0x134024u: goto label_134024;
            case 0x134028u: goto label_134028;
            case 0x13402Cu: goto label_13402c;
            case 0x134030u: goto label_134030;
            case 0x134034u: goto label_134034;
            case 0x134038u: goto label_134038;
            case 0x13403Cu: goto label_13403c;
            case 0x134040u: goto label_134040;
            case 0x134044u: goto label_134044;
            case 0x134048u: goto label_134048;
            case 0x13404Cu: goto label_13404c;
            case 0x134050u: goto label_134050;
            case 0x134054u: goto label_134054;
            case 0x134058u: goto label_134058;
            case 0x13405Cu: goto label_13405c;
            case 0x134060u: goto label_134060;
            case 0x134064u: goto label_134064;
            case 0x134068u: goto label_134068;
            case 0x13406Cu: goto label_13406c;
            case 0x134070u: goto label_134070;
            case 0x134074u: goto label_134074;
            case 0x134078u: goto label_134078;
            case 0x13407Cu: goto label_13407c;
            case 0x134080u: goto label_134080;
            case 0x134084u: goto label_134084;
            case 0x134088u: goto label_134088;
            case 0x13408Cu: goto label_13408c;
            case 0x134090u: goto label_134090;
            case 0x134094u: goto label_134094;
            case 0x134098u: goto label_134098;
            case 0x13409Cu: goto label_13409c;
            case 0x1340A0u: goto label_1340a0;
            case 0x1340A4u: goto label_1340a4;
            case 0x1340A8u: goto label_1340a8;
            case 0x1340ACu: goto label_1340ac;
            case 0x1340B0u: goto label_1340b0;
            case 0x1340B4u: goto label_1340b4;
            case 0x1340B8u: goto label_1340b8;
            case 0x1340BCu: goto label_1340bc;
            case 0x1340C0u: goto label_1340c0;
            case 0x1340C4u: goto label_1340c4;
            case 0x1340C8u: goto label_1340c8;
            case 0x1340CCu: goto label_1340cc;
            case 0x1340D0u: goto label_1340d0;
            case 0x1340D4u: goto label_1340d4;
            case 0x1340D8u: goto label_1340d8;
            case 0x1340DCu: goto label_1340dc;
            case 0x1340E0u: goto label_1340e0;
            case 0x1340E4u: goto label_1340e4;
            case 0x1340E8u: goto label_1340e8;
            case 0x1340ECu: goto label_1340ec;
            case 0x1340F0u: goto label_1340f0;
            case 0x1340F4u: goto label_1340f4;
            case 0x1340F8u: goto label_1340f8;
            case 0x1340FCu: goto label_1340fc;
            case 0x134100u: goto label_134100;
            case 0x134104u: goto label_134104;
            case 0x134108u: goto label_134108;
            case 0x13410Cu: goto label_13410c;
            case 0x134110u: goto label_134110;
            case 0x134114u: goto label_134114;
            case 0x134118u: goto label_134118;
            case 0x13411Cu: goto label_13411c;
            case 0x134120u: goto label_134120;
            case 0x134124u: goto label_134124;
            case 0x134128u: goto label_134128;
            case 0x13412Cu: goto label_13412c;
            case 0x134130u: goto label_134130;
            case 0x134134u: goto label_134134;
            case 0x134138u: goto label_134138;
            case 0x13413Cu: goto label_13413c;
            case 0x134140u: goto label_134140;
            case 0x134144u: goto label_134144;
            case 0x134148u: goto label_134148;
            case 0x13414Cu: goto label_13414c;
            case 0x134150u: goto label_134150;
            case 0x134154u: goto label_134154;
            case 0x134158u: goto label_134158;
            case 0x13415Cu: goto label_13415c;
            case 0x134160u: goto label_134160;
            case 0x134164u: goto label_134164;
            case 0x134168u: goto label_134168;
            case 0x13416Cu: goto label_13416c;
            case 0x134170u: goto label_134170;
            case 0x134174u: goto label_134174;
            case 0x134178u: goto label_134178;
            case 0x13417Cu: goto label_13417c;
            case 0x134180u: goto label_134180;
            case 0x134184u: goto label_134184;
            case 0x134188u: goto label_134188;
            case 0x13418Cu: goto label_13418c;
            case 0x134190u: goto label_134190;
            case 0x134194u: goto label_134194;
            case 0x134198u: goto label_134198;
            case 0x13419Cu: goto label_13419c;
            case 0x1341A0u: goto label_1341a0;
            case 0x1341A4u: goto label_1341a4;
            case 0x1341A8u: goto label_1341a8;
            case 0x1341ACu: goto label_1341ac;
            case 0x1341B0u: goto label_1341b0;
            case 0x1341B4u: goto label_1341b4;
            case 0x1341B8u: goto label_1341b8;
            case 0x1341BCu: goto label_1341bc;
            case 0x1341C0u: goto label_1341c0;
            case 0x1341C4u: goto label_1341c4;
            case 0x1341C8u: goto label_1341c8;
            case 0x1341CCu: goto label_1341cc;
            case 0x1341D0u: goto label_1341d0;
            case 0x1341D4u: goto label_1341d4;
            case 0x1341D8u: goto label_1341d8;
            case 0x1341DCu: goto label_1341dc;
            case 0x1341E0u: goto label_1341e0;
            case 0x1341E4u: goto label_1341e4;
            case 0x1341E8u: goto label_1341e8;
            case 0x1341ECu: goto label_1341ec;
            case 0x1341F0u: goto label_1341f0;
            case 0x1341F4u: goto label_1341f4;
            case 0x1341F8u: goto label_1341f8;
            case 0x1341FCu: goto label_1341fc;
            case 0x134200u: goto label_134200;
            case 0x134204u: goto label_134204;
            case 0x134208u: goto label_134208;
            case 0x13420Cu: goto label_13420c;
            case 0x134210u: goto label_134210;
            case 0x134214u: goto label_134214;
            case 0x134218u: goto label_134218;
            case 0x13421Cu: goto label_13421c;
            case 0x134220u: goto label_134220;
            case 0x134224u: goto label_134224;
            case 0x134228u: goto label_134228;
            case 0x13422Cu: goto label_13422c;
            case 0x134230u: goto label_134230;
            case 0x134234u: goto label_134234;
            case 0x134238u: goto label_134238;
            case 0x13423Cu: goto label_13423c;
            case 0x134240u: goto label_134240;
            case 0x134244u: goto label_134244;
            case 0x134248u: goto label_134248;
            case 0x13424Cu: goto label_13424c;
            case 0x134250u: goto label_134250;
            case 0x134254u: goto label_134254;
            case 0x134258u: goto label_134258;
            case 0x13425Cu: goto label_13425c;
            case 0x134260u: goto label_134260;
            case 0x134264u: goto label_134264;
            case 0x134268u: goto label_134268;
            case 0x13426Cu: goto label_13426c;
            case 0x134270u: goto label_134270;
            case 0x134274u: goto label_134274;
            case 0x134278u: goto label_134278;
            case 0x13427Cu: goto label_13427c;
            case 0x134280u: goto label_134280;
            case 0x134284u: goto label_134284;
            case 0x134288u: goto label_134288;
            case 0x13428Cu: goto label_13428c;
            case 0x134290u: goto label_134290;
            case 0x134294u: goto label_134294;
            case 0x134298u: goto label_134298;
            case 0x13429Cu: goto label_13429c;
            case 0x1342A0u: goto label_1342a0;
            case 0x1342A4u: goto label_1342a4;
            case 0x1342A8u: goto label_1342a8;
            case 0x1342ACu: goto label_1342ac;
            case 0x1342B0u: goto label_1342b0;
            case 0x1342B4u: goto label_1342b4;
            case 0x1342B8u: goto label_1342b8;
            case 0x1342BCu: goto label_1342bc;
            case 0x1342C0u: goto label_1342c0;
            case 0x1342C4u: goto label_1342c4;
            case 0x1342C8u: goto label_1342c8;
            case 0x1342CCu: goto label_1342cc;
            case 0x1342D0u: goto label_1342d0;
            case 0x1342D4u: goto label_1342d4;
            case 0x1342D8u: goto label_1342d8;
            case 0x1342DCu: goto label_1342dc;
            case 0x1342E0u: goto label_1342e0;
            case 0x1342E4u: goto label_1342e4;
            case 0x1342E8u: goto label_1342e8;
            case 0x1342ECu: goto label_1342ec;
            case 0x1342F0u: goto label_1342f0;
            case 0x1342F4u: goto label_1342f4;
            case 0x1342F8u: goto label_1342f8;
            case 0x1342FCu: goto label_1342fc;
            case 0x134300u: goto label_134300;
            case 0x134304u: goto label_134304;
            case 0x134308u: goto label_134308;
            case 0x13430Cu: goto label_13430c;
            case 0x134310u: goto label_134310;
            case 0x134314u: goto label_134314;
            case 0x134318u: goto label_134318;
            case 0x13431Cu: goto label_13431c;
            case 0x134320u: goto label_134320;
            case 0x134324u: goto label_134324;
            case 0x134328u: goto label_134328;
            case 0x13432Cu: goto label_13432c;
            case 0x134330u: goto label_134330;
            case 0x134334u: goto label_134334;
            case 0x134338u: goto label_134338;
            case 0x13433Cu: goto label_13433c;
            case 0x134340u: goto label_134340;
            case 0x134344u: goto label_134344;
            case 0x134348u: goto label_134348;
            case 0x13434Cu: goto label_13434c;
            case 0x134350u: goto label_134350;
            case 0x134354u: goto label_134354;
            case 0x134358u: goto label_134358;
            case 0x13435Cu: goto label_13435c;
            case 0x134360u: goto label_134360;
            case 0x134364u: goto label_134364;
            case 0x134368u: goto label_134368;
            case 0x13436Cu: goto label_13436c;
            case 0x134370u: goto label_134370;
            case 0x134374u: goto label_134374;
            case 0x134378u: goto label_134378;
            case 0x13437Cu: goto label_13437c;
            case 0x134380u: goto label_134380;
            case 0x134384u: goto label_134384;
            case 0x134388u: goto label_134388;
            case 0x13438Cu: goto label_13438c;
            case 0x134390u: goto label_134390;
            case 0x134394u: goto label_134394;
            case 0x134398u: goto label_134398;
            case 0x13439Cu: goto label_13439c;
            case 0x1343A0u: goto label_1343a0;
            case 0x1343A4u: goto label_1343a4;
            case 0x1343A8u: goto label_1343a8;
            case 0x1343ACu: goto label_1343ac;
            case 0x1343B0u: goto label_1343b0;
            case 0x1343B4u: goto label_1343b4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13405Cu; }
            if (ctx->pc != 0x13405Cu) { return; }
        }
    }
    ctx->pc = 0x13405Cu;
label_13405c:
    // 0x13405c: 0x8e2500b4
    ctx->pc = 0x13405cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_134060:
    // 0x134060: 0x220202d
    ctx->pc = 0x134060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_134064:
    // 0x134064: 0x8e2600b8
    ctx->pc = 0x134064u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_134068:
    // 0x134068: 0x8e2700bc
    ctx->pc = 0x134068u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_13406c:
    // 0x13406c: 0xc04c714
label_134070:
    if (ctx->pc == 0x134070u) {
        ctx->pc = 0x134070u;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->pc = 0x134074u;
        goto label_134074;
    }
    ctx->pc = 0x13406Cu;
    SET_GPR_U32(ctx, 31, 0x134074u);
    ctx->pc = 0x134070u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 192)));
    ctx->pc = 0x131C50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C50_0x131c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134074u; }
    }
    if (ctx->pc != 0x134074u) { return; }
    ctx->pc = 0x134074u;
label_134074:
    // 0x134074: 0xa22000ac
    ctx->pc = 0x134074u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 172), (uint8_t)GPR_U32(ctx, 0));
label_134078:
    // 0x134078: 0xc04b2ee
label_13407c:
    if (ctx->pc == 0x13407Cu) {
        ctx->pc = 0x13407Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x134080u;
        goto label_134080;
    }
    ctx->pc = 0x134078u;
    SET_GPR_U32(ctx, 31, 0x134080u);
    ctx->pc = 0x13407Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12CBB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012CBB8_0x12cbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134080u; }
    }
    if (ctx->pc != 0x134080u) { return; }
    ctx->pc = 0x134080u;
label_134080:
    // 0x134080: 0x24030002
    ctx->pc = 0x134080u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_134084:
    // 0x134084: 0x544300c5
label_134088:
    if (ctx->pc == 0x134088u) {
        ctx->pc = 0x134088u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x13408Cu;
        goto label_13408c;
    }
    ctx->pc = 0x134084u;
    {
        const bool branch_taken_0x134084 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x134084) {
            ctx->pc = 0x134088u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->pc = 0x13439Cu;
            goto label_13439c;
        }
    }
    ctx->pc = 0x13408Cu;
label_13408c:
    // 0x13408c: 0xc04b5ea
label_134090:
    if (ctx->pc == 0x134090u) {
        ctx->pc = 0x134090u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x134094u;
        goto label_134094;
    }
    ctx->pc = 0x13408Cu;
    SET_GPR_U32(ctx, 31, 0x134094u);
    ctx->pc = 0x134090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D7A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D7A8_0x12d7a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134094u; }
    }
    if (ctx->pc != 0x134094u) { return; }
    ctx->pc = 0x134094u;
label_134094:
    // 0x134094: 0x82250003
    ctx->pc = 0x134094u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_134098:
    // 0x134098: 0x40902d
    ctx->pc = 0x134098u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13409c:
    // 0x13409c: 0xb2102a
    ctx->pc = 0x13409cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 18)));
label_1340a0:
    // 0x1340a0: 0x1040000d
label_1340a4:
    if (ctx->pc == 0x1340A4u) {
        ctx->pc = 0x1340A4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1340A8u;
        goto label_1340a8;
    }
    ctx->pc = 0x1340A0u;
    {
        const bool branch_taken_0x1340a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1340A4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1340a0) {
            ctx->pc = 0x1340D8u;
            goto label_1340d8;
        }
    }
    ctx->pc = 0x1340A8u;
label_1340a8:
    // 0x1340a8: 0x240202d
    ctx->pc = 0x1340a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1340ac:
    // 0x1340ac: 0xc04a0a8
label_1340b0:
    if (ctx->pc == 0x1340B0u) {
        ctx->pc = 0x1340B0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x1340B4u;
        goto label_1340b4;
    }
    ctx->pc = 0x1340ACu;
    SET_GPR_U32(ctx, 31, 0x1340B4u);
    ctx->pc = 0x1340B0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x1282A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001282A0_0x1282a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1340B4u; }
    }
    if (ctx->pc != 0x1340B4u) { return; }
    ctx->pc = 0x1340B4u;
label_1340b4:
    // 0x1340b4: 0x3c040024
    ctx->pc = 0x1340b4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_1340b8:
    // 0x1340b8: 0x2484b6f0
    ctx->pc = 0x1340b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948592));
label_1340bc:
    // 0x1340bc: 0xc04a04a
label_1340c0:
    if (ctx->pc == 0x1340C0u) {
        ctx->pc = 0x1340C0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1340C4u;
        goto label_1340c4;
    }
    ctx->pc = 0x1340BCu;
    SET_GPR_U32(ctx, 31, 0x1340C4u);
    ctx->pc = 0x1340C0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x128128u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00128128_0x128128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1340C4u; }
    }
    if (ctx->pc != 0x1340C4u) { return; }
    ctx->pc = 0x1340C4u;
label_1340c4:
    // 0x1340c4: 0xc04c78e
label_1340c8:
    if (ctx->pc == 0x1340C8u) {
        ctx->pc = 0x1340C8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1340CCu;
        goto label_1340cc;
    }
    ctx->pc = 0x1340C4u;
    SET_GPR_U32(ctx, 31, 0x1340CCu);
    ctx->pc = 0x1340C8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x131E38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00131E38_0x131e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1340CCu; }
    }
    if (ctx->pc != 0x1340CCu) { return; }
    ctx->pc = 0x1340CCu;
label_1340cc:
    // 0x1340cc: 0x100000b3
label_1340d0:
    if (ctx->pc == 0x1340D0u) {
        ctx->pc = 0x1340D0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x1340D4u;
        goto label_1340d4;
    }
    ctx->pc = 0x1340CCu;
    {
        const bool branch_taken_0x1340cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1340D0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x1340cc) {
            ctx->pc = 0x13439Cu;
            goto label_13439c;
        }
    }
    ctx->pc = 0x1340D4u;
label_1340d4:
    // 0x1340d4: 0x0
    ctx->pc = 0x1340d4u;
    // NOP
label_1340d8:
    // 0x1340d8: 0xc04b5e4
label_1340dc:
    if (ctx->pc == 0x1340DCu) {
        ctx->pc = 0x1340DCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1340E0u;
        goto label_1340e0;
    }
    ctx->pc = 0x1340D8u;
    SET_GPR_U32(ctx, 31, 0x1340E0u);
    ctx->pc = 0x1340DCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D790u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D790_0x12d790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1340E0u; }
    }
    if (ctx->pc != 0x1340E0u) { return; }
    ctx->pc = 0x1340E0u;
label_1340e0:
    // 0x1340e0: 0x260202d
    ctx->pc = 0x1340e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1340e4:
    // 0x1340e4: 0xc04b60e
label_1340e8:
    if (ctx->pc == 0x1340E8u) {
        ctx->pc = 0x1340E8u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1340ECu;
        goto label_1340ec;
    }
    ctx->pc = 0x1340E4u;
    SET_GPR_U32(ctx, 31, 0x1340ECu);
    ctx->pc = 0x1340E8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D838u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D838_0x12d838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1340ECu; }
    }
    if (ctx->pc != 0x1340ECu) { return; }
    ctx->pc = 0x1340ECu;
label_1340ec:
    // 0x1340ec: 0x40902d
    ctx->pc = 0x1340ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1340f0:
    // 0x1340f0: 0x5a40000b
label_1340f4:
    if (ctx->pc == 0x1340F4u) {
        ctx->pc = 0x1340F4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->pc = 0x1340F8u;
        goto label_1340f8;
    }
    ctx->pc = 0x1340F0u;
    {
        const bool branch_taken_0x1340f0 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x1340f0) {
            ctx->pc = 0x1340F4u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->pc = 0x134120u;
            goto label_134120;
        }
    }
    ctx->pc = 0x1340F8u;
label_1340f8:
    // 0x1340f8: 0x8e220038
    ctx->pc = 0x1340f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_1340fc:
    // 0x1340fc: 0x282001a
    ctx->pc = 0x1340fcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 20);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_134100:
    // 0x134100: 0x50400001
label_134104:
    if (ctx->pc == 0x134104u) {
        ctx->pc = 0x134104u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x134108u;
        goto label_134108;
    }
    ctx->pc = 0x134100u;
    {
        const bool branch_taken_0x134100 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x134100) {
            ctx->pc = 0x134104u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x134108u;
            goto label_134108;
        }
    }
    ctx->pc = 0x134108u;
label_134108:
    // 0x134108: 0x2012
    ctx->pc = 0x134108u;
    SET_GPR_U32(ctx, 4, ctx->lo);
label_13410c:
    // 0x13410c: 0x41840
    ctx->pc = 0x13410cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
label_134110:
    // 0x134110: 0x641821
    ctx->pc = 0x134110u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_134114:
    // 0x134114: 0x1000000c
label_134118:
    if (ctx->pc == 0x134118u) {
        ctx->pc = 0x134118u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
        ctx->pc = 0x13411Cu;
        goto label_13411c;
    }
    ctx->pc = 0x134114u;
    {
        const bool branch_taken_0x134114 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x134118u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
        if (branch_taken_0x134114) {
            ctx->pc = 0x134148u;
            goto label_134148;
        }
    }
    ctx->pc = 0x13411Cu;
label_13411c:
    // 0x13411c: 0x0
    ctx->pc = 0x13411cu;
    // NOP
label_134120:
    // 0x134120: 0x283001a
    ctx->pc = 0x134120u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 20);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_134124:
    // 0x134124: 0x50600001
label_134128:
    if (ctx->pc == 0x134128u) {
        ctx->pc = 0x134128u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x13412Cu;
        goto label_13412c;
    }
    ctx->pc = 0x134124u;
    {
        const bool branch_taken_0x134124 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x134124) {
            ctx->pc = 0x134128u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x13412Cu;
            goto label_13412c;
        }
    }
    ctx->pc = 0x13412Cu;
label_13412c:
    // 0x13412c: 0x2012
    ctx->pc = 0x13412cu;
    SET_GPR_U32(ctx, 4, ctx->lo);
label_134130:
    // 0x134130: 0x41040
    ctx->pc = 0x134130u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
label_134134:
    // 0x134134: 0x441021
    ctx->pc = 0x134134u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_134138:
    // 0x134138: 0x21fc2
    ctx->pc = 0x134138u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
label_13413c:
    // 0x13413c: 0x431021
    ctx->pc = 0x13413cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_134140:
    // 0x134140: 0x21043
    ctx->pc = 0x134140u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_134144:
    // 0x134144: 0xae220048
    ctx->pc = 0x134144u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
label_134148:
    // 0x134148: 0xc04b5f6
label_13414c:
    if (ctx->pc == 0x13414Cu) {
        ctx->pc = 0x13414Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x134150u;
        goto label_134150;
    }
    ctx->pc = 0x134148u;
    SET_GPR_U32(ctx, 31, 0x134150u);
    ctx->pc = 0x13414Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D7D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D7D8_0x12d7d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134150u; }
    }
    if (ctx->pc != 0x134150u) { return; }
    ctx->pc = 0x134150u;
label_134150:
    // 0x134150: 0x8e250048
    ctx->pc = 0x134150u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_134154:
    // 0x134154: 0x21040
    ctx->pc = 0x134154u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_134158:
    // 0x134158: 0x260202d
    ctx->pc = 0x134158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13415c:
    // 0x13415c: 0xa22821
    ctx->pc = 0x13415cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_134160:
    // 0x134160: 0x50400001
label_134164:
    if (ctx->pc == 0x134164u) {
        ctx->pc = 0x134164u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x134168u;
        goto label_134168;
    }
    ctx->pc = 0x134160u;
    {
        const bool branch_taken_0x134160 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x134160) {
            ctx->pc = 0x134164u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x134168u;
            goto label_134168;
        }
    }
    ctx->pc = 0x134168u;
label_134168:
    // 0x134168: 0xa2001a
    ctx->pc = 0x134168u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_13416c:
    // 0x13416c: 0x2812
    ctx->pc = 0x13416cu;
    SET_GPR_U32(ctx, 5, ctx->lo);
label_134170:
    // 0x134170: 0xa22818
    ctx->pc = 0x134170u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
label_134174:
    // 0x134174: 0xc04b304
label_134178:
    if (ctx->pc == 0x134178u) {
        ctx->pc = 0x134178u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 5));
        ctx->pc = 0x13417Cu;
        goto label_13417c;
    }
    ctx->pc = 0x134174u;
    SET_GPR_U32(ctx, 31, 0x13417Cu);
    ctx->pc = 0x134178u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 5));
    ctx->pc = 0x12CC10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012CC10_0x12cc10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13417Cu; }
    }
    if (ctx->pc != 0x13417Cu) { return; }
    ctx->pc = 0x13417Cu;
label_13417c:
    // 0x13417c: 0x5a400034
label_134180:
    if (ctx->pc == 0x134180u) {
        ctx->pc = 0x134180u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x134184u;
        goto label_134184;
    }
    ctx->pc = 0x13417Cu;
    {
        const bool branch_taken_0x13417c = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x13417c) {
            ctx->pc = 0x134180u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->pc = 0x134250u;
            goto label_134250;
        }
    }
    ctx->pc = 0x134184u;
label_134184:
    // 0x134184: 0x82230002
    ctx->pc = 0x134184u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_134188:
    // 0x134188: 0x24020002
    ctx->pc = 0x134188u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_13418c:
    // 0x13418c: 0x14620004
label_134190:
    if (ctx->pc == 0x134190u) {
        ctx->pc = 0x134194u;
        goto label_134194;
    }
    ctx->pc = 0x13418Cu;
    {
        const bool branch_taken_0x13418c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x13418c) {
            ctx->pc = 0x1341A0u;
            goto label_1341a0;
        }
    }
    ctx->pc = 0x134194u;
label_134194:
    // 0x134194: 0x10000019
label_134198:
    if (ctx->pc == 0x134198u) {
        ctx->pc = 0x134198u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x13419Cu;
        goto label_13419c;
    }
    ctx->pc = 0x134194u;
    {
        const bool branch_taken_0x134194 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x134198u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        if (branch_taken_0x134194) {
            ctx->pc = 0x1341FCu;
            goto label_1341fc;
        }
    }
    ctx->pc = 0x13419Cu;
label_13419c:
    // 0x13419c: 0x0
    ctx->pc = 0x13419cu;
    // NOP
label_1341a0:
    // 0x1341a0: 0xc04b632
label_1341a4:
    if (ctx->pc == 0x1341A4u) {
        ctx->pc = 0x1341A4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1341A8u;
        goto label_1341a8;
    }
    ctx->pc = 0x1341A0u;
    SET_GPR_U32(ctx, 31, 0x1341A8u);
    ctx->pc = 0x1341A4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D8C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D8C8_0x12d8c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1341A8u; }
    }
    if (ctx->pc != 0x1341A8u) { return; }
    ctx->pc = 0x1341A8u;
label_1341a8:
    // 0x1341a8: 0x52000001
label_1341ac:
    if (ctx->pc == 0x1341ACu) {
        ctx->pc = 0x1341ACu;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x1341B0u;
        goto label_1341b0;
    }
    ctx->pc = 0x1341A8u;
    {
        const bool branch_taken_0x1341a8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x1341a8) {
            ctx->pc = 0x1341ACu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1341B0u;
            goto label_1341b0;
        }
    }
    ctx->pc = 0x1341B0u;
label_1341b0:
    // 0x1341b0: 0x50001a
    ctx->pc = 0x1341b0u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_1341b4:
    // 0x1341b4: 0x244207ff
    ctx->pc = 0x1341b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2047));
label_1341b8:
    // 0x1341b8: 0x1810
    ctx->pc = 0x1341b8u;
    SET_GPR_U32(ctx, 3, ctx->hi);
label_1341bc:
    // 0x1341bc: 0x50001a
    ctx->pc = 0x1341bcu;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_1341c0:
    // 0x1341c0: 0x2031823
    ctx->pc = 0x1341c0u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1341c4:
    // 0x1341c4: 0xae230050
    ctx->pc = 0x1341c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
label_1341c8:
    // 0x1341c8: 0x1012
    ctx->pc = 0x1341c8u;
    SET_GPR_U32(ctx, 2, ctx->lo);
label_1341cc:
    // 0x1341cc: 0x70001a
    ctx->pc = 0x1341ccu;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_1341d0:
    // 0x1341d0: 0x40282d
    ctx->pc = 0x1341d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1341d4:
    // 0x1341d4: 0x2010
    ctx->pc = 0x1341d4u;
    SET_GPR_U32(ctx, 4, ctx->hi);
label_1341d8:
    // 0x1341d8: 0xae240050
    ctx->pc = 0x1341d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 4));
label_1341dc:
    // 0x1341dc: 0x8e240008
    ctx->pc = 0x1341dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1341e0:
    // 0x1341e0: 0xc04c1ea
label_1341e4:
    if (ctx->pc == 0x1341E4u) {
        ctx->pc = 0x1341E4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
        ctx->pc = 0x1341E8u;
        goto label_1341e8;
    }
    ctx->pc = 0x1341E0u;
    SET_GPR_U32(ctx, 31, 0x1341E8u);
    ctx->pc = 0x1341E4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
    ctx->pc = 0x1307A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001307A8_0x1307a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1341E8u; }
    }
    if (ctx->pc != 0x1341E8u) { return; }
    ctx->pc = 0x1341E8u;
label_1341e8:
    // 0x1341e8: 0x3c050013
    ctx->pc = 0x1341e8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)19 << 16));
label_1341ec:
    // 0x1341ec: 0x8e240008
    ctx->pc = 0x1341ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1341f0:
    // 0x1341f0: 0x24a53ab8
    ctx->pc = 0x1341f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 15032));
label_1341f4:
    // 0x1341f4: 0xc04c1e6
label_1341f8:
    if (ctx->pc == 0x1341F8u) {
        ctx->pc = 0x1341F8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1341FCu;
        goto label_1341fc;
    }
    ctx->pc = 0x1341F4u;
    SET_GPR_U32(ctx, 31, 0x1341FCu);
    ctx->pc = 0x1341F8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130798u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130798_0x130798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1341FCu; }
    }
    if (ctx->pc != 0x1341FCu) { return; }
    ctx->pc = 0x1341FCu;
label_1341fc:
    // 0x1341fc: 0xc04b62c
label_134200:
    if (ctx->pc == 0x134200u) {
        ctx->pc = 0x134200u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x134204u;
        goto label_134204;
    }
    ctx->pc = 0x1341FCu;
    SET_GPR_U32(ctx, 31, 0x134204u);
    ctx->pc = 0x134200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D8B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D8B0_0x12d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134204u; }
    }
    if (ctx->pc != 0x134204u) { return; }
    ctx->pc = 0x134204u;
label_134204:
    // 0x134204: 0xc04b61a
label_134208:
    if (ctx->pc == 0x134208u) {
        ctx->pc = 0x134208u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13420Cu;
        goto label_13420c;
    }
    ctx->pc = 0x134204u;
    SET_GPR_U32(ctx, 31, 0x13420Cu);
    ctx->pc = 0x134208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D868u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D868_0x12d868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13420Cu; }
    }
    if (ctx->pc != 0x13420Cu) { return; }
    ctx->pc = 0x13420Cu;
label_13420c:
    // 0x13420c: 0x260202d
    ctx->pc = 0x13420cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_134210:
    // 0x134210: 0xae220090
    ctx->pc = 0x134210u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 2));
label_134214:
    // 0x134214: 0xc04b5d2
label_134218:
    if (ctx->pc == 0x134218u) {
        ctx->pc = 0x134218u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13421Cu;
        goto label_13421c;
    }
    ctx->pc = 0x134214u;
    SET_GPR_U32(ctx, 31, 0x13421Cu);
    ctx->pc = 0x134218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D748u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D748_0x12d748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13421Cu; }
    }
    if (ctx->pc != 0x13421Cu) { return; }
    ctx->pc = 0x13421Cu;
label_13421c:
    // 0x13421c: 0x260202d
    ctx->pc = 0x13421cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_134220:
    // 0x134220: 0xc04b5da
label_134224:
    if (ctx->pc == 0x134224u) {
        ctx->pc = 0x134224u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x134228u;
        goto label_134228;
    }
    ctx->pc = 0x134220u;
    SET_GPR_U32(ctx, 31, 0x134228u);
    ctx->pc = 0x134224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D768u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D768_0x12d768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134228u; }
    }
    if (ctx->pc != 0x134228u) { return; }
    ctx->pc = 0x134228u;
label_134228:
    // 0x134228: 0x260202d
    ctx->pc = 0x134228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13422c:
    // 0x13422c: 0xc04b5d6
label_134230:
    if (ctx->pc == 0x134230u) {
        ctx->pc = 0x134230u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x134234u;
        goto label_134234;
    }
    ctx->pc = 0x13422Cu;
    SET_GPR_U32(ctx, 31, 0x134234u);
    ctx->pc = 0x134230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D758u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D758_0x12d758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134234u; }
    }
    if (ctx->pc != 0x134234u) { return; }
    ctx->pc = 0x134234u;
label_134234:
    // 0x134234: 0x3c050013
    ctx->pc = 0x134234u;
    SET_GPR_U32(ctx, 5, ((uint32_t)19 << 16));
label_134238:
    // 0x134238: 0x24a53870
    ctx->pc = 0x134238u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 14448));
label_13423c:
    // 0x13423c: 0x260202d
    ctx->pc = 0x13423cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_134240:
    // 0x134240: 0xc04b5ce
label_134244:
    if (ctx->pc == 0x134244u) {
        ctx->pc = 0x134244u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x134248u;
        goto label_134248;
    }
    ctx->pc = 0x134240u;
    SET_GPR_U32(ctx, 31, 0x134248u);
    ctx->pc = 0x134244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D738u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D738_0x12d738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134248u; }
    }
    if (ctx->pc != 0x134248u) { return; }
    ctx->pc = 0x134248u;
label_134248:
    // 0x134248: 0x10000016
label_13424c:
    if (ctx->pc == 0x13424Cu) {
        ctx->pc = 0x134250u;
        goto label_134250;
    }
    ctx->pc = 0x134248u;
    {
        const bool branch_taken_0x134248 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x134248) {
            ctx->pc = 0x1342A4u;
            goto label_1342a4;
        }
    }
    ctx->pc = 0x134250u;
label_134250:
    // 0x134250: 0x10800004
label_134254:
    if (ctx->pc == 0x134254u) {
        ctx->pc = 0x134258u;
        goto label_134258;
    }
    ctx->pc = 0x134250u;
    {
        const bool branch_taken_0x134250 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x134250) {
            ctx->pc = 0x134264u;
            goto label_134264;
        }
    }
    ctx->pc = 0x134258u;
label_134258:
    // 0x134258: 0x3c057fff
    ctx->pc = 0x134258u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32767 << 16));
label_13425c:
    // 0x13425c: 0xc04c1ea
label_134260:
    if (ctx->pc == 0x134260u) {
        ctx->pc = 0x134260u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
        ctx->pc = 0x134264u;
        goto label_134264;
    }
    ctx->pc = 0x13425Cu;
    SET_GPR_U32(ctx, 31, 0x134264u);
    ctx->pc = 0x134260u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    ctx->pc = 0x1307A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001307A8_0x1307a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134264u; }
    }
    if (ctx->pc != 0x134264u) { return; }
    ctx->pc = 0x134264u;
label_134264:
    // 0x134264: 0xc04b602
label_134268:
    if (ctx->pc == 0x134268u) {
        ctx->pc = 0x134268u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13426Cu;
        goto label_13426c;
    }
    ctx->pc = 0x134264u;
    SET_GPR_U32(ctx, 31, 0x13426Cu);
    ctx->pc = 0x134268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D808_0x12d808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13426Cu; }
    }
    if (ctx->pc != 0x13426Cu) { return; }
    ctx->pc = 0x13426Cu;
label_13426c:
    // 0x13426c: 0x260202d
    ctx->pc = 0x13426cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_134270:
    // 0x134270: 0xc04b5d2
label_134274:
    if (ctx->pc == 0x134274u) {
        ctx->pc = 0x134274u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x134278u;
        goto label_134278;
    }
    ctx->pc = 0x134270u;
    SET_GPR_U32(ctx, 31, 0x134278u);
    ctx->pc = 0x134274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D748u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D748_0x12d748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134278u; }
    }
    if (ctx->pc != 0x134278u) { return; }
    ctx->pc = 0x134278u;
label_134278:
    // 0x134278: 0x260202d
    ctx->pc = 0x134278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13427c:
    // 0x13427c: 0xc04b5da
label_134280:
    if (ctx->pc == 0x134280u) {
        ctx->pc = 0x134280u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x134284u;
        goto label_134284;
    }
    ctx->pc = 0x13427Cu;
    SET_GPR_U32(ctx, 31, 0x134284u);
    ctx->pc = 0x134280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D768u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D768_0x12d768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134284u; }
    }
    if (ctx->pc != 0x134284u) { return; }
    ctx->pc = 0x134284u;
label_134284:
    // 0x134284: 0x260202d
    ctx->pc = 0x134284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_134288:
    // 0x134288: 0xc04b5d6
label_13428c:
    if (ctx->pc == 0x13428Cu) {
        ctx->pc = 0x13428Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x134290u;
        goto label_134290;
    }
    ctx->pc = 0x134288u;
    SET_GPR_U32(ctx, 31, 0x134290u);
    ctx->pc = 0x13428Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D758u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D758_0x12d758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134290u; }
    }
    if (ctx->pc != 0x134290u) { return; }
    ctx->pc = 0x134290u;
label_134290:
    // 0x134290: 0x3c050013
    ctx->pc = 0x134290u;
    SET_GPR_U32(ctx, 5, ((uint32_t)19 << 16));
label_134294:
    // 0x134294: 0x24a53d10
    ctx->pc = 0x134294u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 15632));
label_134298:
    // 0x134298: 0x260202d
    ctx->pc = 0x134298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13429c:
    // 0x13429c: 0xc04b5ce
label_1342a0:
    if (ctx->pc == 0x1342A0u) {
        ctx->pc = 0x1342A0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1342A4u;
        goto label_1342a4;
    }
    ctx->pc = 0x13429Cu;
    SET_GPR_U32(ctx, 31, 0x1342A4u);
    ctx->pc = 0x1342A0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D738u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D738_0x12d738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1342A4u; }
    }
    if (ctx->pc != 0x1342A4u) { return; }
    ctx->pc = 0x1342A4u;
label_1342a4:
    // 0x1342a4: 0xc04b5e4
label_1342a8:
    if (ctx->pc == 0x1342A8u) {
        ctx->pc = 0x1342A8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1342ACu;
        goto label_1342ac;
    }
    ctx->pc = 0x1342A4u;
    SET_GPR_U32(ctx, 31, 0x1342ACu);
    ctx->pc = 0x1342A8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D790u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D790_0x12d790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1342ACu; }
    }
    if (ctx->pc != 0x1342ACu) { return; }
    ctx->pc = 0x1342ACu;
label_1342ac:
    // 0x1342ac: 0x260202d
    ctx->pc = 0x1342acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1342b0:
    // 0x1342b0: 0xc04b5ea
label_1342b4:
    if (ctx->pc == 0x1342B4u) {
        ctx->pc = 0x1342B4u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1342B8u;
        goto label_1342b8;
    }
    ctx->pc = 0x1342B0u;
    SET_GPR_U32(ctx, 31, 0x1342B8u);
    ctx->pc = 0x1342B4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D7A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D7A8_0x12d7a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1342B8u; }
    }
    if (ctx->pc != 0x1342B8u) { return; }
    ctx->pc = 0x1342B8u;
label_1342b8:
    // 0x1342b8: 0x260202d
    ctx->pc = 0x1342b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1342bc:
    // 0x1342bc: 0xc04b602
label_1342c0:
    if (ctx->pc == 0x1342C0u) {
        ctx->pc = 0x1342C0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1342C4u;
        goto label_1342c4;
    }
    ctx->pc = 0x1342BCu;
    SET_GPR_U32(ctx, 31, 0x1342C4u);
    ctx->pc = 0x1342C0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D808_0x12d808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1342C4u; }
    }
    if (ctx->pc != 0x1342C4u) { return; }
    ctx->pc = 0x1342C4u;
label_1342c4:
    // 0x1342c4: 0x260202d
    ctx->pc = 0x1342c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1342c8:
    // 0x1342c8: 0xc04b5f0
label_1342cc:
    if (ctx->pc == 0x1342CCu) {
        ctx->pc = 0x1342CCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1342D0u;
        goto label_1342d0;
    }
    ctx->pc = 0x1342C8u;
    SET_GPR_U32(ctx, 31, 0x1342D0u);
    ctx->pc = 0x1342CCu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D7C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D7C0_0x12d7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1342D0u; }
    }
    if (ctx->pc != 0x1342D0u) { return; }
    ctx->pc = 0x1342D0u;
label_1342d0:
    // 0x1342d0: 0x8e24000c
    ctx->pc = 0x1342d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1342d4:
    // 0x1342d4: 0xc04b20c
label_1342d8:
    if (ctx->pc == 0x1342D8u) {
        ctx->pc = 0x1342D8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1342DCu;
        goto label_1342dc;
    }
    ctx->pc = 0x1342D4u;
    SET_GPR_U32(ctx, 31, 0x1342DCu);
    ctx->pc = 0x1342D8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12C830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C830_0x12c830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1342DCu; }
    }
    if (ctx->pc != 0x1342DCu) { return; }
    ctx->pc = 0x1342DCu;
label_1342dc:
    // 0x1342dc: 0x8e24000c
    ctx->pc = 0x1342dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1342e0:
    // 0x1342e0: 0xc04b1f8
label_1342e4:
    if (ctx->pc == 0x1342E4u) {
        ctx->pc = 0x1342E4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1342E8u;
        goto label_1342e8;
    }
    ctx->pc = 0x1342E0u;
    SET_GPR_U32(ctx, 31, 0x1342E8u);
    ctx->pc = 0x1342E4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12C7E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C7E0_0x12c7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1342E8u; }
    }
    if (ctx->pc != 0x1342E8u) { return; }
    ctx->pc = 0x1342E8u;
label_1342e8:
    // 0x1342e8: 0x8e24000c
    ctx->pc = 0x1342e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1342ec:
    // 0x1342ec: 0xc04b1f2
label_1342f0:
    if (ctx->pc == 0x1342F0u) {
        ctx->pc = 0x1342F0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1342F4u;
        goto label_1342f4;
    }
    ctx->pc = 0x1342ECu;
    SET_GPR_U32(ctx, 31, 0x1342F4u);
    ctx->pc = 0x1342F0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12C7C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C7C8_0x12c7c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1342F4u; }
    }
    if (ctx->pc != 0x1342F4u) { return; }
    ctx->pc = 0x1342F4u;
label_1342f4:
    // 0x1342f4: 0x8e24000c
    ctx->pc = 0x1342f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1342f8:
    // 0x1342f8: 0xc04b236
label_1342fc:
    if (ctx->pc == 0x1342FCu) {
        ctx->pc = 0x1342FCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x134300u;
        goto label_134300;
    }
    ctx->pc = 0x1342F8u;
    SET_GPR_U32(ctx, 31, 0x134300u);
    ctx->pc = 0x1342FCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12C8D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C8D8_0x12c8d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134300u; }
    }
    if (ctx->pc != 0x134300u) { return; }
    ctx->pc = 0x134300u;
label_134300:
    // 0x134300: 0xc04b63e
label_134304:
    if (ctx->pc == 0x134304u) {
        ctx->pc = 0x134304u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x134308u;
        goto label_134308;
    }
    ctx->pc = 0x134300u;
    SET_GPR_U32(ctx, 31, 0x134308u);
    ctx->pc = 0x134304u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x12D8F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D8F8_0x12d8f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134308u; }
    }
    if (ctx->pc != 0x134308u) { return; }
    ctx->pc = 0x134308u;
label_134308:
    // 0x134308: 0x86250040
    ctx->pc = 0x134308u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 64)));
label_13430c:
    // 0x13430c: 0x8e24000c
    ctx->pc = 0x13430cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_134310:
    // 0x134310: 0xc04b1fe
label_134314:
    if (ctx->pc == 0x134314u) {
        ctx->pc = 0x134314u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x134318u;
        goto label_134318;
    }
    ctx->pc = 0x134310u;
    SET_GPR_U32(ctx, 31, 0x134318u);
    ctx->pc = 0x134314u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->pc = 0x12C7F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C7F8_0x12c7f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134318u; }
    }
    if (ctx->pc != 0x134318u) { return; }
    ctx->pc = 0x134318u;
label_134318:
    // 0x134318: 0x220202d
    ctx->pc = 0x134318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13431c:
    // 0x13431c: 0x27a50020
    ctx->pc = 0x13431cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
label_134320:
    // 0x134320: 0xc04cbfa
label_134324:
    if (ctx->pc == 0x134324u) {
        ctx->pc = 0x134324u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 36));
        ctx->pc = 0x134328u;
        goto label_134328;
    }
    ctx->pc = 0x134320u;
    SET_GPR_U32(ctx, 31, 0x134328u);
    ctx->pc = 0x134324u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 36));
    ctx->pc = 0x132FE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FE8_0x132fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134328u; }
    }
    if (ctx->pc != 0x134328u) { return; }
    ctx->pc = 0x134328u;
label_134328:
    // 0x134328: 0x8fa50020
    ctx->pc = 0x134328u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_13432c:
    // 0x13432c: 0x14a00003
label_134330:
    if (ctx->pc == 0x134330u) {
        ctx->pc = 0x134330u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->pc = 0x134334u;
        goto label_134334;
    }
    ctx->pc = 0x13432Cu;
    {
        const bool branch_taken_0x13432c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x134330u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        if (branch_taken_0x13432c) {
            ctx->pc = 0x13433Cu;
            goto label_13433c;
        }
    }
    ctx->pc = 0x134334u;
label_134334:
    // 0x134334: 0x10c00003
label_134338:
    if (ctx->pc == 0x134338u) {
        ctx->pc = 0x13433Cu;
        goto label_13433c;
    }
    ctx->pc = 0x134334u;
    {
        const bool branch_taken_0x134334 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x134334) {
            ctx->pc = 0x134344u;
            goto label_134344;
        }
    }
    ctx->pc = 0x13433Cu;
label_13433c:
    // 0x13433c: 0xc04cbf8
label_134340:
    if (ctx->pc == 0x134340u) {
        ctx->pc = 0x134340u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x134344u;
        goto label_134344;
    }
    ctx->pc = 0x13433Cu;
    SET_GPR_U32(ctx, 31, 0x134344u);
    ctx->pc = 0x134340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x132FE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FE0_0x132fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134344u; }
    }
    if (ctx->pc != 0x134344u) { return; }
    ctx->pc = 0x134344u;
label_134344:
    // 0x134344: 0xc04ced2
label_134348:
    if (ctx->pc == 0x134348u) {
        ctx->pc = 0x134348u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13434Cu;
        goto label_13434c;
    }
    ctx->pc = 0x134344u;
    SET_GPR_U32(ctx, 31, 0x13434Cu);
    ctx->pc = 0x134348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x133B48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00133B48_0x133b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13434Cu; }
    }
    if (ctx->pc != 0x13434Cu) { return; }
    ctx->pc = 0x13434Cu;
label_13434c:
    // 0x13434c: 0x8e240074
    ctx->pc = 0x13434cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_134350:
    // 0x134350: 0x50800004
label_134354:
    if (ctx->pc == 0x134354u) {
        ctx->pc = 0x134354u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x134358u;
        goto label_134358;
    }
    ctx->pc = 0x134350u;
    {
        const bool branch_taken_0x134350 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x134350) {
            ctx->pc = 0x134354u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x134364u;
            goto label_134364;
        }
    }
    ctx->pc = 0x134358u;
label_134358:
    // 0x134358: 0xc048b84
label_13435c:
    if (ctx->pc == 0x13435Cu) {
        ctx->pc = 0x13435Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x134360u;
        goto label_134360;
    }
    ctx->pc = 0x134358u;
    SET_GPR_U32(ctx, 31, 0x134360u);
    ctx->pc = 0x13435Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x122E10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00122E10_0x122e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134360u; }
    }
    if (ctx->pc != 0x134360u) { return; }
    ctx->pc = 0x134360u;
label_134360:
    // 0x134360: 0x260202d
    ctx->pc = 0x134360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_134364:
    // 0x134364: 0xc04b5de
label_134368:
    if (ctx->pc == 0x134368u) {
        ctx->pc = 0x134368u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x13436Cu;
        goto label_13436c;
    }
    ctx->pc = 0x134364u;
    SET_GPR_U32(ctx, 31, 0x13436Cu);
    ctx->pc = 0x134368u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x12D778u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D778_0x12d778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13436Cu; }
    }
    if (ctx->pc != 0x13436Cu) { return; }
    ctx->pc = 0x13436Cu;
label_13436c:
    // 0x13436c: 0x54500007
label_134370:
    if (ctx->pc == 0x134370u) {
        ctx->pc = 0x134370u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x134374u;
        goto label_134374;
    }
    ctx->pc = 0x13436Cu;
    {
        const bool branch_taken_0x13436c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        if (branch_taken_0x13436c) {
            ctx->pc = 0x134370u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->pc = 0x13438Cu;
            goto label_13438c;
        }
    }
    ctx->pc = 0x134374u;
label_134374:
    // 0x134374: 0xc04b68c
label_134378:
    if (ctx->pc == 0x134378u) {
        ctx->pc = 0x134378u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13437Cu;
        goto label_13437c;
    }
    ctx->pc = 0x134374u;
    SET_GPR_U32(ctx, 31, 0x13437Cu);
    ctx->pc = 0x134378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12DA30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DA30_0x12da30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13437Cu; }
    }
    if (ctx->pc != 0x13437Cu) { return; }
    ctx->pc = 0x13437Cu;
label_13437c:
    // 0x13437c: 0x8e24000c
    ctx->pc = 0x13437cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_134380:
    // 0x134380: 0xc04b23e
label_134384:
    if (ctx->pc == 0x134384u) {
        ctx->pc = 0x134384u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x134388u;
        goto label_134388;
    }
    ctx->pc = 0x134380u;
    SET_GPR_U32(ctx, 31, 0x134388u);
    ctx->pc = 0x134384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12C8F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C8F8_0x12c8f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134388u; }
    }
    if (ctx->pc != 0x134388u) { return; }
    ctx->pc = 0x134388u;
label_134388:
    // 0x134388: 0x8e24000c
    ctx->pc = 0x134388u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_13438c:
    // 0x13438c: 0xc04b1ba
label_134390:
    if (ctx->pc == 0x134390u) {
        ctx->pc = 0x134390u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x134394u;
        goto label_134394;
    }
    ctx->pc = 0x13438Cu;
    SET_GPR_U32(ctx, 31, 0x134394u);
    ctx->pc = 0x134390u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x12C6E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C6E8_0x12c6e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134394u; }
    }
    if (ctx->pc != 0x134394u) { return; }
    ctx->pc = 0x134394u;
label_134394:
    // 0x134394: 0xa2300001
    ctx->pc = 0x134394u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 16));
label_134398:
    // 0x134398: 0xdfb00030
    ctx->pc = 0x134398u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_13439c:
    // 0x13439c: 0xdfb10038
    ctx->pc = 0x13439cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1343a0:
    // 0x1343a0: 0xdfb20040
    ctx->pc = 0x1343a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1343a4:
    // 0x1343a4: 0xdfb30048
    ctx->pc = 0x1343a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1343a8:
    // 0x1343a8: 0xdfb40050
    ctx->pc = 0x1343a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1343ac:
    // 0x1343ac: 0xdfbf0058
    ctx->pc = 0x1343acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1343b0:
    // 0x1343b0: 0x3e00008
label_1343b4:
    if (ctx->pc == 0x1343B4u) {
        ctx->pc = 0x1343B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1343B8u;
        goto label_fallthrough_0x1343b0;
    }
    ctx->pc = 0x1343B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1343B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133FE0u: goto label_133fe0;
            case 0x133FE4u: goto label_133fe4;
            case 0x133FE8u: goto label_133fe8;
            case 0x133FECu: goto label_133fec;
            case 0x133FF0u: goto label_133ff0;
            case 0x133FF4u: goto label_133ff4;
            case 0x133FF8u: goto label_133ff8;
            case 0x133FFCu: goto label_133ffc;
            case 0x134000u: goto label_134000;
            case 0x134004u: goto label_134004;
            case 0x134008u: goto label_134008;
            case 0x13400Cu: goto label_13400c;
            case 0x134010u: goto label_134010;
            case 0x134014u: goto label_134014;
            case 0x134018u: goto label_134018;
            case 0x13401Cu: goto label_13401c;
            case 0x134020u: goto label_134020;
            case 0x134024u: goto label_134024;
            case 0x134028u: goto label_134028;
            case 0x13402Cu: goto label_13402c;
            case 0x134030u: goto label_134030;
            case 0x134034u: goto label_134034;
            case 0x134038u: goto label_134038;
            case 0x13403Cu: goto label_13403c;
            case 0x134040u: goto label_134040;
            case 0x134044u: goto label_134044;
            case 0x134048u: goto label_134048;
            case 0x13404Cu: goto label_13404c;
            case 0x134050u: goto label_134050;
            case 0x134054u: goto label_134054;
            case 0x134058u: goto label_134058;
            case 0x13405Cu: goto label_13405c;
            case 0x134060u: goto label_134060;
            case 0x134064u: goto label_134064;
            case 0x134068u: goto label_134068;
            case 0x13406Cu: goto label_13406c;
            case 0x134070u: goto label_134070;
            case 0x134074u: goto label_134074;
            case 0x134078u: goto label_134078;
            case 0x13407Cu: goto label_13407c;
            case 0x134080u: goto label_134080;
            case 0x134084u: goto label_134084;
            case 0x134088u: goto label_134088;
            case 0x13408Cu: goto label_13408c;
            case 0x134090u: goto label_134090;
            case 0x134094u: goto label_134094;
            case 0x134098u: goto label_134098;
            case 0x13409Cu: goto label_13409c;
            case 0x1340A0u: goto label_1340a0;
            case 0x1340A4u: goto label_1340a4;
            case 0x1340A8u: goto label_1340a8;
            case 0x1340ACu: goto label_1340ac;
            case 0x1340B0u: goto label_1340b0;
            case 0x1340B4u: goto label_1340b4;
            case 0x1340B8u: goto label_1340b8;
            case 0x1340BCu: goto label_1340bc;
            case 0x1340C0u: goto label_1340c0;
            case 0x1340C4u: goto label_1340c4;
            case 0x1340C8u: goto label_1340c8;
            case 0x1340CCu: goto label_1340cc;
            case 0x1340D0u: goto label_1340d0;
            case 0x1340D4u: goto label_1340d4;
            case 0x1340D8u: goto label_1340d8;
            case 0x1340DCu: goto label_1340dc;
            case 0x1340E0u: goto label_1340e0;
            case 0x1340E4u: goto label_1340e4;
            case 0x1340E8u: goto label_1340e8;
            case 0x1340ECu: goto label_1340ec;
            case 0x1340F0u: goto label_1340f0;
            case 0x1340F4u: goto label_1340f4;
            case 0x1340F8u: goto label_1340f8;
            case 0x1340FCu: goto label_1340fc;
            case 0x134100u: goto label_134100;
            case 0x134104u: goto label_134104;
            case 0x134108u: goto label_134108;
            case 0x13410Cu: goto label_13410c;
            case 0x134110u: goto label_134110;
            case 0x134114u: goto label_134114;
            case 0x134118u: goto label_134118;
            case 0x13411Cu: goto label_13411c;
            case 0x134120u: goto label_134120;
            case 0x134124u: goto label_134124;
            case 0x134128u: goto label_134128;
            case 0x13412Cu: goto label_13412c;
            case 0x134130u: goto label_134130;
            case 0x134134u: goto label_134134;
            case 0x134138u: goto label_134138;
            case 0x13413Cu: goto label_13413c;
            case 0x134140u: goto label_134140;
            case 0x134144u: goto label_134144;
            case 0x134148u: goto label_134148;
            case 0x13414Cu: goto label_13414c;
            case 0x134150u: goto label_134150;
            case 0x134154u: goto label_134154;
            case 0x134158u: goto label_134158;
            case 0x13415Cu: goto label_13415c;
            case 0x134160u: goto label_134160;
            case 0x134164u: goto label_134164;
            case 0x134168u: goto label_134168;
            case 0x13416Cu: goto label_13416c;
            case 0x134170u: goto label_134170;
            case 0x134174u: goto label_134174;
            case 0x134178u: goto label_134178;
            case 0x13417Cu: goto label_13417c;
            case 0x134180u: goto label_134180;
            case 0x134184u: goto label_134184;
            case 0x134188u: goto label_134188;
            case 0x13418Cu: goto label_13418c;
            case 0x134190u: goto label_134190;
            case 0x134194u: goto label_134194;
            case 0x134198u: goto label_134198;
            case 0x13419Cu: goto label_13419c;
            case 0x1341A0u: goto label_1341a0;
            case 0x1341A4u: goto label_1341a4;
            case 0x1341A8u: goto label_1341a8;
            case 0x1341ACu: goto label_1341ac;
            case 0x1341B0u: goto label_1341b0;
            case 0x1341B4u: goto label_1341b4;
            case 0x1341B8u: goto label_1341b8;
            case 0x1341BCu: goto label_1341bc;
            case 0x1341C0u: goto label_1341c0;
            case 0x1341C4u: goto label_1341c4;
            case 0x1341C8u: goto label_1341c8;
            case 0x1341CCu: goto label_1341cc;
            case 0x1341D0u: goto label_1341d0;
            case 0x1341D4u: goto label_1341d4;
            case 0x1341D8u: goto label_1341d8;
            case 0x1341DCu: goto label_1341dc;
            case 0x1341E0u: goto label_1341e0;
            case 0x1341E4u: goto label_1341e4;
            case 0x1341E8u: goto label_1341e8;
            case 0x1341ECu: goto label_1341ec;
            case 0x1341F0u: goto label_1341f0;
            case 0x1341F4u: goto label_1341f4;
            case 0x1341F8u: goto label_1341f8;
            case 0x1341FCu: goto label_1341fc;
            case 0x134200u: goto label_134200;
            case 0x134204u: goto label_134204;
            case 0x134208u: goto label_134208;
            case 0x13420Cu: goto label_13420c;
            case 0x134210u: goto label_134210;
            case 0x134214u: goto label_134214;
            case 0x134218u: goto label_134218;
            case 0x13421Cu: goto label_13421c;
            case 0x134220u: goto label_134220;
            case 0x134224u: goto label_134224;
            case 0x134228u: goto label_134228;
            case 0x13422Cu: goto label_13422c;
            case 0x134230u: goto label_134230;
            case 0x134234u: goto label_134234;
            case 0x134238u: goto label_134238;
            case 0x13423Cu: goto label_13423c;
            case 0x134240u: goto label_134240;
            case 0x134244u: goto label_134244;
            case 0x134248u: goto label_134248;
            case 0x13424Cu: goto label_13424c;
            case 0x134250u: goto label_134250;
            case 0x134254u: goto label_134254;
            case 0x134258u: goto label_134258;
            case 0x13425Cu: goto label_13425c;
            case 0x134260u: goto label_134260;
            case 0x134264u: goto label_134264;
            case 0x134268u: goto label_134268;
            case 0x13426Cu: goto label_13426c;
            case 0x134270u: goto label_134270;
            case 0x134274u: goto label_134274;
            case 0x134278u: goto label_134278;
            case 0x13427Cu: goto label_13427c;
            case 0x134280u: goto label_134280;
            case 0x134284u: goto label_134284;
            case 0x134288u: goto label_134288;
            case 0x13428Cu: goto label_13428c;
            case 0x134290u: goto label_134290;
            case 0x134294u: goto label_134294;
            case 0x134298u: goto label_134298;
            case 0x13429Cu: goto label_13429c;
            case 0x1342A0u: goto label_1342a0;
            case 0x1342A4u: goto label_1342a4;
            case 0x1342A8u: goto label_1342a8;
            case 0x1342ACu: goto label_1342ac;
            case 0x1342B0u: goto label_1342b0;
            case 0x1342B4u: goto label_1342b4;
            case 0x1342B8u: goto label_1342b8;
            case 0x1342BCu: goto label_1342bc;
            case 0x1342C0u: goto label_1342c0;
            case 0x1342C4u: goto label_1342c4;
            case 0x1342C8u: goto label_1342c8;
            case 0x1342CCu: goto label_1342cc;
            case 0x1342D0u: goto label_1342d0;
            case 0x1342D4u: goto label_1342d4;
            case 0x1342D8u: goto label_1342d8;
            case 0x1342DCu: goto label_1342dc;
            case 0x1342E0u: goto label_1342e0;
            case 0x1342E4u: goto label_1342e4;
            case 0x1342E8u: goto label_1342e8;
            case 0x1342ECu: goto label_1342ec;
            case 0x1342F0u: goto label_1342f0;
            case 0x1342F4u: goto label_1342f4;
            case 0x1342F8u: goto label_1342f8;
            case 0x1342FCu: goto label_1342fc;
            case 0x134300u: goto label_134300;
            case 0x134304u: goto label_134304;
            case 0x134308u: goto label_134308;
            case 0x13430Cu: goto label_13430c;
            case 0x134310u: goto label_134310;
            case 0x134314u: goto label_134314;
            case 0x134318u: goto label_134318;
            case 0x13431Cu: goto label_13431c;
            case 0x134320u: goto label_134320;
            case 0x134324u: goto label_134324;
            case 0x134328u: goto label_134328;
            case 0x13432Cu: goto label_13432c;
            case 0x134330u: goto label_134330;
            case 0x134334u: goto label_134334;
            case 0x134338u: goto label_134338;
            case 0x13433Cu: goto label_13433c;
            case 0x134340u: goto label_134340;
            case 0x134344u: goto label_134344;
            case 0x134348u: goto label_134348;
            case 0x13434Cu: goto label_13434c;
            case 0x134350u: goto label_134350;
            case 0x134354u: goto label_134354;
            case 0x134358u: goto label_134358;
            case 0x13435Cu: goto label_13435c;
            case 0x134360u: goto label_134360;
            case 0x134364u: goto label_134364;
            case 0x134368u: goto label_134368;
            case 0x13436Cu: goto label_13436c;
            case 0x134370u: goto label_134370;
            case 0x134374u: goto label_134374;
            case 0x134378u: goto label_134378;
            case 0x13437Cu: goto label_13437c;
            case 0x134380u: goto label_134380;
            case 0x134384u: goto label_134384;
            case 0x134388u: goto label_134388;
            case 0x13438Cu: goto label_13438c;
            case 0x134390u: goto label_134390;
            case 0x134394u: goto label_134394;
            case 0x134398u: goto label_134398;
            case 0x13439Cu: goto label_13439c;
            case 0x1343A0u: goto label_1343a0;
            case 0x1343A4u: goto label_1343a4;
            case 0x1343A8u: goto label_1343a8;
            case 0x1343ACu: goto label_1343ac;
            case 0x1343B0u: goto label_1343b0;
            case 0x1343B4u: goto label_1343b4;
            default: break;
        }
        return;
    }
label_fallthrough_0x1343b0:
    ctx->pc = 0x1343B8u;
}
