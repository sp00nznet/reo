#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00116218
// Address: 0x116218 - 0x116810
void sub_00116218_0x116218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x116218u;

label_116218:
    // 0x116218: 0x27bdff60
    ctx->pc = 0x116218u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
label_11621c:
    // 0x11621c: 0xffb30050
    ctx->pc = 0x11621cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_116220:
    // 0x116220: 0xffb00020
    ctx->pc = 0x116220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_116224:
    // 0x116224: 0xa0982d
    ctx->pc = 0x116224u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_116228:
    // 0x116228: 0x80802d
    ctx->pc = 0x116228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11622c:
    // 0x11622c: 0xffb60080
    ctx->pc = 0x11622cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_116230:
    // 0x116230: 0xffbf0090
    ctx->pc = 0x116230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_116234:
    // 0x116234: 0xffb50070
    ctx->pc = 0x116234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
label_116238:
    // 0x116238: 0xffb40060
    ctx->pc = 0x116238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_11623c:
    // 0x11623c: 0xffb20040
    ctx->pc = 0x11623cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_116240:
    // 0x116240: 0xc047598
label_116244:
    if (ctx->pc == 0x116244u) {
        ctx->pc = 0x116244u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
        ctx->pc = 0x116248u;
        goto label_116248;
    }
    ctx->pc = 0x116240u;
    SET_GPR_U32(ctx, 31, 0x116248u);
    ctx->pc = 0x116244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116248u; }
    }
    if (ctx->pc != 0x116248u) { return; }
    ctx->pc = 0x116248u;
label_116248:
    // 0x116248: 0x40b02d
    ctx->pc = 0x116248u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11624c:
    // 0x11624c: 0x82020000
    ctx->pc = 0x11624cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_116250:
    // 0x116250: 0x10400160
label_116254:
    if (ctx->pc == 0x116254u) {
        ctx->pc = 0x116254u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x116258u;
        goto label_116258;
    }
    ctx->pc = 0x116250u;
    {
        const bool branch_taken_0x116250 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x116254u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x116250) {
            ctx->pc = 0x1167D4u;
            goto label_1167d4;
        }
    }
    ctx->pc = 0x116258u;
label_116258:
    // 0x116258: 0x31600
    ctx->pc = 0x116258u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 24));
label_11625c:
    // 0x11625c: 0xa02d
    ctx->pc = 0x11625cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_116260:
    // 0x116260: 0x22603
    ctx->pc = 0x116260u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
label_116264:
    // 0x116264: 0x24020025
    ctx->pc = 0x116264u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 37));
label_116268:
    // 0x116268: 0x1482014d
label_11626c:
    if (ctx->pc == 0x11626Cu) {
        ctx->pc = 0x11626Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x116270u;
        goto label_116270;
    }
    ctx->pc = 0x116268u;
    {
        const bool branch_taken_0x116268 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x11626Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x116268) {
            ctx->pc = 0x1167A0u;
            goto label_1167a0;
        }
    }
    ctx->pc = 0x116270u;
label_116270:
    // 0x116270: 0x26120001
    ctx->pc = 0x116270u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 1));
label_116274:
    // 0x116274: 0x240802d
    ctx->pc = 0x116274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_116278:
    // 0x116278: 0x92020000
    ctx->pc = 0x116278u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_11627c:
    // 0x11627c: 0x2442ffd0
    ctx->pc = 0x11627cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967248));
label_116280:
    // 0x116280: 0x21600
    ctx->pc = 0x116280u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
label_116284:
    // 0x116284: 0x22603
    ctx->pc = 0x116284u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
label_116288:
    // 0x116288: 0x2c830049
    ctx->pc = 0x116288u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 4), 73));
label_11628c:
    // 0x11628c: 0x1060014a
label_116290:
    if (ctx->pc == 0x116290u) {
        ctx->pc = 0x116290u;
        SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
        ctx->pc = 0x116294u;
        goto label_116294;
    }
    ctx->pc = 0x11628Cu;
    {
        const bool branch_taken_0x11628c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x116290u;
        SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
        if (branch_taken_0x11628c) {
            ctx->pc = 0x1167B8u;
            goto label_1167b8;
        }
    }
    ctx->pc = 0x116294u;
label_116294:
    // 0x116294: 0x41880
    ctx->pc = 0x116294u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
label_116298:
    // 0x116298: 0x244289f0
    ctx->pc = 0x116298u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937072));
label_11629c:
    // 0x11629c: 0x621821
    ctx->pc = 0x11629cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1162a0:
    // 0x1162a0: 0x8c640000
    ctx->pc = 0x1162a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1162a4:
    // 0x1162a4: 0x800008
label_1162a8:
    if (ctx->pc == 0x1162A8u) {
        ctx->pc = 0x1162ACu;
        goto label_1162ac;
    }
    ctx->pc = 0x1162A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116218u: goto label_116218;
            case 0x11621Cu: goto label_11621c;
            case 0x116220u: goto label_116220;
            case 0x116224u: goto label_116224;
            case 0x116228u: goto label_116228;
            case 0x11622Cu: goto label_11622c;
            case 0x116230u: goto label_116230;
            case 0x116234u: goto label_116234;
            case 0x116238u: goto label_116238;
            case 0x11623Cu: goto label_11623c;
            case 0x116240u: goto label_116240;
            case 0x116244u: goto label_116244;
            case 0x116248u: goto label_116248;
            case 0x11624Cu: goto label_11624c;
            case 0x116250u: goto label_116250;
            case 0x116254u: goto label_116254;
            case 0x116258u: goto label_116258;
            case 0x11625Cu: goto label_11625c;
            case 0x116260u: goto label_116260;
            case 0x116264u: goto label_116264;
            case 0x116268u: goto label_116268;
            case 0x11626Cu: goto label_11626c;
            case 0x116270u: goto label_116270;
            case 0x116274u: goto label_116274;
            case 0x116278u: goto label_116278;
            case 0x11627Cu: goto label_11627c;
            case 0x116280u: goto label_116280;
            case 0x116284u: goto label_116284;
            case 0x116288u: goto label_116288;
            case 0x11628Cu: goto label_11628c;
            case 0x116290u: goto label_116290;
            case 0x116294u: goto label_116294;
            case 0x116298u: goto label_116298;
            case 0x11629Cu: goto label_11629c;
            case 0x1162A0u: goto label_1162a0;
            case 0x1162A4u: goto label_1162a4;
            case 0x1162A8u: goto label_1162a8;
            case 0x1162ACu: goto label_1162ac;
            case 0x1162B0u: goto label_1162b0;
            case 0x1162B4u: goto label_1162b4;
            case 0x1162B8u: goto label_1162b8;
            case 0x1162BCu: goto label_1162bc;
            case 0x1162C0u: goto label_1162c0;
            case 0x1162C4u: goto label_1162c4;
            case 0x1162C8u: goto label_1162c8;
            case 0x1162CCu: goto label_1162cc;
            case 0x1162D0u: goto label_1162d0;
            case 0x1162D4u: goto label_1162d4;
            case 0x1162D8u: goto label_1162d8;
            case 0x1162DCu: goto label_1162dc;
            case 0x1162E0u: goto label_1162e0;
            case 0x1162E4u: goto label_1162e4;
            case 0x1162E8u: goto label_1162e8;
            case 0x1162ECu: goto label_1162ec;
            case 0x1162F0u: goto label_1162f0;
            case 0x1162F4u: goto label_1162f4;
            case 0x1162F8u: goto label_1162f8;
            case 0x1162FCu: goto label_1162fc;
            case 0x116300u: goto label_116300;
            case 0x116304u: goto label_116304;
            case 0x116308u: goto label_116308;
            case 0x11630Cu: goto label_11630c;
            case 0x116310u: goto label_116310;
            case 0x116314u: goto label_116314;
            case 0x116318u: goto label_116318;
            case 0x11631Cu: goto label_11631c;
            case 0x116320u: goto label_116320;
            case 0x116324u: goto label_116324;
            case 0x116328u: goto label_116328;
            case 0x11632Cu: goto label_11632c;
            case 0x116330u: goto label_116330;
            case 0x116334u: goto label_116334;
            case 0x116338u: goto label_116338;
            case 0x11633Cu: goto label_11633c;
            case 0x116340u: goto label_116340;
            case 0x116344u: goto label_116344;
            case 0x116348u: goto label_116348;
            case 0x11634Cu: goto label_11634c;
            case 0x116350u: goto label_116350;
            case 0x116354u: goto label_116354;
            case 0x116358u: goto label_116358;
            case 0x11635Cu: goto label_11635c;
            case 0x116360u: goto label_116360;
            case 0x116364u: goto label_116364;
            case 0x116368u: goto label_116368;
            case 0x11636Cu: goto label_11636c;
            case 0x116370u: goto label_116370;
            case 0x116374u: goto label_116374;
            case 0x116378u: goto label_116378;
            case 0x11637Cu: goto label_11637c;
            case 0x116380u: goto label_116380;
            case 0x116384u: goto label_116384;
            case 0x116388u: goto label_116388;
            case 0x11638Cu: goto label_11638c;
            case 0x116390u: goto label_116390;
            case 0x116394u: goto label_116394;
            case 0x116398u: goto label_116398;
            case 0x11639Cu: goto label_11639c;
            case 0x1163A0u: goto label_1163a0;
            case 0x1163A4u: goto label_1163a4;
            case 0x1163A8u: goto label_1163a8;
            case 0x1163ACu: goto label_1163ac;
            case 0x1163B0u: goto label_1163b0;
            case 0x1163B4u: goto label_1163b4;
            case 0x1163B8u: goto label_1163b8;
            case 0x1163BCu: goto label_1163bc;
            case 0x1163C0u: goto label_1163c0;
            case 0x1163C4u: goto label_1163c4;
            case 0x1163C8u: goto label_1163c8;
            case 0x1163CCu: goto label_1163cc;
            case 0x1163D0u: goto label_1163d0;
            case 0x1163D4u: goto label_1163d4;
            case 0x1163D8u: goto label_1163d8;
            case 0x1163DCu: goto label_1163dc;
            case 0x1163E0u: goto label_1163e0;
            case 0x1163E4u: goto label_1163e4;
            case 0x1163E8u: goto label_1163e8;
            case 0x1163ECu: goto label_1163ec;
            case 0x1163F0u: goto label_1163f0;
            case 0x1163F4u: goto label_1163f4;
            case 0x1163F8u: goto label_1163f8;
            case 0x1163FCu: goto label_1163fc;
            case 0x116400u: goto label_116400;
            case 0x116404u: goto label_116404;
            case 0x116408u: goto label_116408;
            case 0x11640Cu: goto label_11640c;
            case 0x116410u: goto label_116410;
            case 0x116414u: goto label_116414;
            case 0x116418u: goto label_116418;
            case 0x11641Cu: goto label_11641c;
            case 0x116420u: goto label_116420;
            case 0x116424u: goto label_116424;
            case 0x116428u: goto label_116428;
            case 0x11642Cu: goto label_11642c;
            case 0x116430u: goto label_116430;
            case 0x116434u: goto label_116434;
            case 0x116438u: goto label_116438;
            case 0x11643Cu: goto label_11643c;
            case 0x116440u: goto label_116440;
            case 0x116444u: goto label_116444;
            case 0x116448u: goto label_116448;
            case 0x11644Cu: goto label_11644c;
            case 0x116450u: goto label_116450;
            case 0x116454u: goto label_116454;
            case 0x116458u: goto label_116458;
            case 0x11645Cu: goto label_11645c;
            case 0x116460u: goto label_116460;
            case 0x116464u: goto label_116464;
            case 0x116468u: goto label_116468;
            case 0x11646Cu: goto label_11646c;
            case 0x116470u: goto label_116470;
            case 0x116474u: goto label_116474;
            case 0x116478u: goto label_116478;
            case 0x11647Cu: goto label_11647c;
            case 0x116480u: goto label_116480;
            case 0x116484u: goto label_116484;
            case 0x116488u: goto label_116488;
            case 0x11648Cu: goto label_11648c;
            case 0x116490u: goto label_116490;
            case 0x116494u: goto label_116494;
            case 0x116498u: goto label_116498;
            case 0x11649Cu: goto label_11649c;
            case 0x1164A0u: goto label_1164a0;
            case 0x1164A4u: goto label_1164a4;
            case 0x1164A8u: goto label_1164a8;
            case 0x1164ACu: goto label_1164ac;
            case 0x1164B0u: goto label_1164b0;
            case 0x1164B4u: goto label_1164b4;
            case 0x1164B8u: goto label_1164b8;
            case 0x1164BCu: goto label_1164bc;
            case 0x1164C0u: goto label_1164c0;
            case 0x1164C4u: goto label_1164c4;
            case 0x1164C8u: goto label_1164c8;
            case 0x1164CCu: goto label_1164cc;
            case 0x1164D0u: goto label_1164d0;
            case 0x1164D4u: goto label_1164d4;
            case 0x1164D8u: goto label_1164d8;
            case 0x1164DCu: goto label_1164dc;
            case 0x1164E0u: goto label_1164e0;
            case 0x1164E4u: goto label_1164e4;
            case 0x1164E8u: goto label_1164e8;
            case 0x1164ECu: goto label_1164ec;
            case 0x1164F0u: goto label_1164f0;
            case 0x1164F4u: goto label_1164f4;
            case 0x1164F8u: goto label_1164f8;
            case 0x1164FCu: goto label_1164fc;
            case 0x116500u: goto label_116500;
            case 0x116504u: goto label_116504;
            case 0x116508u: goto label_116508;
            case 0x11650Cu: goto label_11650c;
            case 0x116510u: goto label_116510;
            case 0x116514u: goto label_116514;
            case 0x116518u: goto label_116518;
            case 0x11651Cu: goto label_11651c;
            case 0x116520u: goto label_116520;
            case 0x116524u: goto label_116524;
            case 0x116528u: goto label_116528;
            case 0x11652Cu: goto label_11652c;
            case 0x116530u: goto label_116530;
            case 0x116534u: goto label_116534;
            case 0x116538u: goto label_116538;
            case 0x11653Cu: goto label_11653c;
            case 0x116540u: goto label_116540;
            case 0x116544u: goto label_116544;
            case 0x116548u: goto label_116548;
            case 0x11654Cu: goto label_11654c;
            case 0x116550u: goto label_116550;
            case 0x116554u: goto label_116554;
            case 0x116558u: goto label_116558;
            case 0x11655Cu: goto label_11655c;
            case 0x116560u: goto label_116560;
            case 0x116564u: goto label_116564;
            case 0x116568u: goto label_116568;
            case 0x11656Cu: goto label_11656c;
            case 0x116570u: goto label_116570;
            case 0x116574u: goto label_116574;
            case 0x116578u: goto label_116578;
            case 0x11657Cu: goto label_11657c;
            case 0x116580u: goto label_116580;
            case 0x116584u: goto label_116584;
            case 0x116588u: goto label_116588;
            case 0x11658Cu: goto label_11658c;
            case 0x116590u: goto label_116590;
            case 0x116594u: goto label_116594;
            case 0x116598u: goto label_116598;
            case 0x11659Cu: goto label_11659c;
            case 0x1165A0u: goto label_1165a0;
            case 0x1165A4u: goto label_1165a4;
            case 0x1165A8u: goto label_1165a8;
            case 0x1165ACu: goto label_1165ac;
            case 0x1165B0u: goto label_1165b0;
            case 0x1165B4u: goto label_1165b4;
            case 0x1165B8u: goto label_1165b8;
            case 0x1165BCu: goto label_1165bc;
            case 0x1165C0u: goto label_1165c0;
            case 0x1165C4u: goto label_1165c4;
            case 0x1165C8u: goto label_1165c8;
            case 0x1165CCu: goto label_1165cc;
            case 0x1165D0u: goto label_1165d0;
            case 0x1165D4u: goto label_1165d4;
            case 0x1165D8u: goto label_1165d8;
            case 0x1165DCu: goto label_1165dc;
            case 0x1165E0u: goto label_1165e0;
            case 0x1165E4u: goto label_1165e4;
            case 0x1165E8u: goto label_1165e8;
            case 0x1165ECu: goto label_1165ec;
            case 0x1165F0u: goto label_1165f0;
            case 0x1165F4u: goto label_1165f4;
            case 0x1165F8u: goto label_1165f8;
            case 0x1165FCu: goto label_1165fc;
            case 0x116600u: goto label_116600;
            case 0x116604u: goto label_116604;
            case 0x116608u: goto label_116608;
            case 0x11660Cu: goto label_11660c;
            case 0x116610u: goto label_116610;
            case 0x116614u: goto label_116614;
            case 0x116618u: goto label_116618;
            case 0x11661Cu: goto label_11661c;
            case 0x116620u: goto label_116620;
            case 0x116624u: goto label_116624;
            case 0x116628u: goto label_116628;
            case 0x11662Cu: goto label_11662c;
            case 0x116630u: goto label_116630;
            case 0x116634u: goto label_116634;
            case 0x116638u: goto label_116638;
            case 0x11663Cu: goto label_11663c;
            case 0x116640u: goto label_116640;
            case 0x116644u: goto label_116644;
            case 0x116648u: goto label_116648;
            case 0x11664Cu: goto label_11664c;
            case 0x116650u: goto label_116650;
            case 0x116654u: goto label_116654;
            case 0x116658u: goto label_116658;
            case 0x11665Cu: goto label_11665c;
            case 0x116660u: goto label_116660;
            case 0x116664u: goto label_116664;
            case 0x116668u: goto label_116668;
            case 0x11666Cu: goto label_11666c;
            case 0x116670u: goto label_116670;
            case 0x116674u: goto label_116674;
            case 0x116678u: goto label_116678;
            case 0x11667Cu: goto label_11667c;
            case 0x116680u: goto label_116680;
            case 0x116684u: goto label_116684;
            case 0x116688u: goto label_116688;
            case 0x11668Cu: goto label_11668c;
            case 0x116690u: goto label_116690;
            case 0x116694u: goto label_116694;
            case 0x116698u: goto label_116698;
            case 0x11669Cu: goto label_11669c;
            case 0x1166A0u: goto label_1166a0;
            case 0x1166A4u: goto label_1166a4;
            case 0x1166A8u: goto label_1166a8;
            case 0x1166ACu: goto label_1166ac;
            case 0x1166B0u: goto label_1166b0;
            case 0x1166B4u: goto label_1166b4;
            case 0x1166B8u: goto label_1166b8;
            case 0x1166BCu: goto label_1166bc;
            case 0x1166C0u: goto label_1166c0;
            case 0x1166C4u: goto label_1166c4;
            case 0x1166C8u: goto label_1166c8;
            case 0x1166CCu: goto label_1166cc;
            case 0x1166D0u: goto label_1166d0;
            case 0x1166D4u: goto label_1166d4;
            case 0x1166D8u: goto label_1166d8;
            case 0x1166DCu: goto label_1166dc;
            case 0x1166E0u: goto label_1166e0;
            case 0x1166E4u: goto label_1166e4;
            case 0x1166E8u: goto label_1166e8;
            case 0x1166ECu: goto label_1166ec;
            case 0x1166F0u: goto label_1166f0;
            case 0x1166F4u: goto label_1166f4;
            case 0x1166F8u: goto label_1166f8;
            case 0x1166FCu: goto label_1166fc;
            case 0x116700u: goto label_116700;
            case 0x116704u: goto label_116704;
            case 0x116708u: goto label_116708;
            case 0x11670Cu: goto label_11670c;
            case 0x116710u: goto label_116710;
            case 0x116714u: goto label_116714;
            case 0x116718u: goto label_116718;
            case 0x11671Cu: goto label_11671c;
            case 0x116720u: goto label_116720;
            case 0x116724u: goto label_116724;
            case 0x116728u: goto label_116728;
            case 0x11672Cu: goto label_11672c;
            case 0x116730u: goto label_116730;
            case 0x116734u: goto label_116734;
            case 0x116738u: goto label_116738;
            case 0x11673Cu: goto label_11673c;
            case 0x116740u: goto label_116740;
            case 0x116744u: goto label_116744;
            case 0x116748u: goto label_116748;
            case 0x11674Cu: goto label_11674c;
            case 0x116750u: goto label_116750;
            case 0x116754u: goto label_116754;
            case 0x116758u: goto label_116758;
            case 0x11675Cu: goto label_11675c;
            case 0x116760u: goto label_116760;
            case 0x116764u: goto label_116764;
            case 0x116768u: goto label_116768;
            case 0x11676Cu: goto label_11676c;
            case 0x116770u: goto label_116770;
            case 0x116774u: goto label_116774;
            case 0x116778u: goto label_116778;
            case 0x11677Cu: goto label_11677c;
            case 0x116780u: goto label_116780;
            case 0x116784u: goto label_116784;
            case 0x116788u: goto label_116788;
            case 0x11678Cu: goto label_11678c;
            case 0x116790u: goto label_116790;
            case 0x116794u: goto label_116794;
            case 0x116798u: goto label_116798;
            case 0x11679Cu: goto label_11679c;
            case 0x1167A0u: goto label_1167a0;
            case 0x1167A4u: goto label_1167a4;
            case 0x1167A8u: goto label_1167a8;
            case 0x1167ACu: goto label_1167ac;
            case 0x1167B0u: goto label_1167b0;
            case 0x1167B4u: goto label_1167b4;
            case 0x1167B8u: goto label_1167b8;
            case 0x1167BCu: goto label_1167bc;
            case 0x1167C0u: goto label_1167c0;
            case 0x1167C4u: goto label_1167c4;
            case 0x1167C8u: goto label_1167c8;
            case 0x1167CCu: goto label_1167cc;
            case 0x1167D0u: goto label_1167d0;
            case 0x1167D4u: goto label_1167d4;
            case 0x1167D8u: goto label_1167d8;
            case 0x1167DCu: goto label_1167dc;
            case 0x1167E0u: goto label_1167e0;
            case 0x1167E4u: goto label_1167e4;
            case 0x1167E8u: goto label_1167e8;
            case 0x1167ECu: goto label_1167ec;
            case 0x1167F0u: goto label_1167f0;
            case 0x1167F4u: goto label_1167f4;
            case 0x1167F8u: goto label_1167f8;
            case 0x1167FCu: goto label_1167fc;
            case 0x116800u: goto label_116800;
            case 0x116804u: goto label_116804;
            case 0x116808u: goto label_116808;
            case 0x11680Cu: goto label_11680c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1162ACu;
label_1162ac:
    // 0x1162ac: 0x82430001
    ctx->pc = 0x1162acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_1162b0:
    // 0x1162b0: 0x2465ffd0
    ctx->pc = 0x1162b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 4294967248));
label_1162b4:
    // 0x1162b4: 0x30a200ff
    ctx->pc = 0x1162b4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 255));
label_1162b8:
    // 0x1162b8: 0x2c42000a
    ctx->pc = 0x1162b8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 10));
label_1162bc:
    // 0x1162bc: 0x1040001d
label_1162c0:
    if (ctx->pc == 0x1162C0u) {
        ctx->pc = 0x1162C0u;
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->pc = 0x1162C4u;
        goto label_1162c4;
    }
    ctx->pc = 0x1162BCu;
    {
        const bool branch_taken_0x1162bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1162C0u;
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        if (branch_taken_0x1162bc) {
            ctx->pc = 0x116334u;
            goto label_116334;
        }
    }
    ctx->pc = 0x1162C4u;
label_1162c4:
    // 0x1162c4: 0x24c2ffd0
    ctx->pc = 0x1162c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 4294967248));
label_1162c8:
    // 0x1162c8: 0x2c42000a
    ctx->pc = 0x1162c8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 10));
label_1162cc:
    // 0x1162cc: 0x10400009
label_1162d0:
    if (ctx->pc == 0x1162D0u) {
        ctx->pc = 0x1162D0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x1162D4u;
        goto label_1162d4;
    }
    ctx->pc = 0x1162CCu;
    {
        const bool branch_taken_0x1162cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1162D0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x1162cc) {
            ctx->pc = 0x1162F4u;
            goto label_1162f4;
        }
    }
    ctx->pc = 0x1162D4u;
label_1162d4:
    // 0x1162d4: 0x2404001f
    ctx->pc = 0x1162d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 31));
label_1162d8:
    // 0x1162d8: 0xa31818
    ctx->pc = 0x1162d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
label_1162dc:
    // 0x1162dc: 0x26500002
    ctx->pc = 0x1162dcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 2));
label_1162e0:
    // 0x1162e0: 0x2463ffd0
    ctx->pc = 0x1162e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967248));
label_1162e4:
    // 0x1162e4: 0x662821
    ctx->pc = 0x1162e4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1162e8:
    // 0x1162e8: 0x28a20020
    ctx->pc = 0x1162e8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 32));
label_1162ec:
    // 0x1162ec: 0x10000002
label_1162f0:
    if (ctx->pc == 0x1162F0u) {
        ctx->pc = 0x1162F0u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 4));
        ctx->pc = 0x1162F4u;
        goto label_1162f4;
    }
    ctx->pc = 0x1162ECu;
    {
        const bool branch_taken_0x1162ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1162F0u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 4));
        if (branch_taken_0x1162ec) {
            ctx->pc = 0x1162F8u;
            goto label_1162f8;
        }
    }
    ctx->pc = 0x1162F4u;
label_1162f4:
    // 0x1162f4: 0x26500001
    ctx->pc = 0x1162f4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 1));
label_1162f8:
    // 0x1162f8: 0x27a2001f
    ctx->pc = 0x1162f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 31));
label_1162fc:
    // 0x1162fc: 0x18a0ffdc
label_116300:
    if (ctx->pc == 0x116300u) {
        ctx->pc = 0x116300u;
        SET_GPR_U32(ctx, 20, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->pc = 0x116304u;
        goto label_116304;
    }
    ctx->pc = 0x1162FCu;
    {
        const bool branch_taken_0x1162fc = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x116300u;
        SET_GPR_U32(ctx, 20, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        if (branch_taken_0x1162fc) {
            ctx->pc = 0x116270u;
            goto label_116270;
        }
    }
    ctx->pc = 0x116304u;
label_116304:
    // 0x116304: 0x26120001
    ctx->pc = 0x116304u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 1));
label_116308:
    // 0x116308: 0x2402001f
    ctx->pc = 0x116308u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 31));
label_11630c:
    // 0x11630c: 0x24040030
    ctx->pc = 0x11630cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 48));
label_116310:
    // 0x116310: 0x451023
    ctx->pc = 0x116310u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_116314:
    // 0x116314: 0x3a21821
    ctx->pc = 0x116314u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_116318:
    // 0x116318: 0x24a5ffff
    ctx->pc = 0x116318u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
label_11631c:
    // 0x11631c: 0xa0640000
    ctx->pc = 0x11631cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_116320:
    // 0x116320: 0x1ca0fff9
label_116324:
    if (ctx->pc == 0x116324u) {
        ctx->pc = 0x116328u;
        goto label_116328;
    }
    ctx->pc = 0x116320u;
    {
        const bool branch_taken_0x116320 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x116320) {
            ctx->pc = 0x116308u;
            goto label_116308;
        }
    }
    ctx->pc = 0x116328u;
label_116328:
    // 0x116328: 0x1000ffd3
label_11632c:
    if (ctx->pc == 0x11632Cu) {
        ctx->pc = 0x11632Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x116330u;
        goto label_116330;
    }
    ctx->pc = 0x116328u;
    {
        const bool branch_taken_0x116328 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11632Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x116328) {
            ctx->pc = 0x116278u;
            goto label_116278;
        }
    }
    ctx->pc = 0x116330u;
label_116330:
    // 0x116330: 0x2407006c
    ctx->pc = 0x116330u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 108));
label_116334:
    // 0x116334: 0x1000ffcf
label_116338:
    if (ctx->pc == 0x116338u) {
        ctx->pc = 0x116338u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x11633Cu;
        goto label_11633c;
    }
    ctx->pc = 0x116334u;
    {
        const bool branch_taken_0x116334 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x116338u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x116334) {
            ctx->pc = 0x116274u;
            goto label_116274;
        }
    }
    ctx->pc = 0x11633Cu;
label_11633c:
    // 0x11633c: 0x1000fffd
label_116340:
    if (ctx->pc == 0x116340u) {
        ctx->pc = 0x116340u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 104));
        ctx->pc = 0x116344u;
        goto label_116344;
    }
    ctx->pc = 0x11633Cu;
    {
        const bool branch_taken_0x11633c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x116340u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 104));
        if (branch_taken_0x11633c) {
            ctx->pc = 0x116334u;
            goto label_116334;
        }
    }
    ctx->pc = 0x116344u;
label_116344:
    // 0x116344: 0x2402006c
    ctx->pc = 0x116344u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 108));
label_116348:
    // 0x116348: 0x14e20004
label_11634c:
    if (ctx->pc == 0x11634Cu) {
        ctx->pc = 0x11634Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 104));
        ctx->pc = 0x116350u;
        goto label_116350;
    }
    ctx->pc = 0x116348u;
    {
        const bool branch_taken_0x116348 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        ctx->pc = 0x11634Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 104));
        if (branch_taken_0x116348) {
            ctx->pc = 0x11635Cu;
            goto label_11635c;
        }
    }
    ctx->pc = 0x116350u;
label_116350:
    // 0x116350: 0x26730008
    ctx->pc = 0x116350u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 8));
label_116354:
    // 0x116354: 0x10000006
label_116358:
    if (ctx->pc == 0x116358u) {
        ctx->pc = 0x116358u;
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->pc = 0x11635Cu;
        goto label_11635c;
    }
    ctx->pc = 0x116354u;
    {
        const bool branch_taken_0x116354 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x116358u;
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        if (branch_taken_0x116354) {
            ctx->pc = 0x116370u;
            goto label_116370;
        }
    }
    ctx->pc = 0x11635Cu;
label_11635c:
    // 0x11635c: 0x14e20003
label_116360:
    if (ctx->pc == 0x116360u) {
        ctx->pc = 0x116360u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 8));
        ctx->pc = 0x116364u;
        goto label_116364;
    }
    ctx->pc = 0x11635Cu;
    {
        const bool branch_taken_0x11635c = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        ctx->pc = 0x116360u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 8));
        if (branch_taken_0x11635c) {
            ctx->pc = 0x11636Cu;
            goto label_11636c;
        }
    }
    ctx->pc = 0x116364u;
label_116364:
    // 0x116364: 0x10000002
label_116368:
    if (ctx->pc == 0x116368u) {
        ctx->pc = 0x116368u;
        SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->pc = 0x11636Cu;
        goto label_11636c;
    }
    ctx->pc = 0x116364u;
    {
        const bool branch_taken_0x116364 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x116368u;
        SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        if (branch_taken_0x116364) {
            ctx->pc = 0x116370u;
            goto label_116370;
        }
    }
    ctx->pc = 0x11636Cu;
label_11636c:
    // 0x11636c: 0x9e71fff8
    ctx->pc = 0x11636cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_116370:
    // 0x116370: 0x27b0001f
    ctx->pc = 0x116370u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 31));
label_116374:
    // 0x116374: 0x16200006
label_116378:
    if (ctx->pc == 0x116378u) {
        ctx->pc = 0x116378u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x11637Cu;
        goto label_11637c;
    }
    ctx->pc = 0x116374u;
    {
        const bool branch_taken_0x116374 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x116378u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x116374) {
            ctx->pc = 0x116390u;
            goto label_116390;
        }
    }
    ctx->pc = 0x11637Cu;
label_11637c:
    // 0x11637c: 0x24020030
    ctx->pc = 0x11637cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
label_116380:
    // 0x116380: 0x27b0001e
    ctx->pc = 0x116380u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 30));
label_116384:
    // 0x116384: 0xa3a2001e
    ctx->pc = 0x116384u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 30), (uint8_t)GPR_U32(ctx, 2));
label_116388:
    // 0x116388: 0x1000000b
label_11638c:
    if (ctx->pc == 0x11638Cu) {
        ctx->pc = 0x11638Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x116390u;
        goto label_116390;
    }
    ctx->pc = 0x116388u;
    {
        const bool branch_taken_0x116388 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11638Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x116388) {
            ctx->pc = 0x1163B8u;
            goto label_1163b8;
        }
    }
    ctx->pc = 0x116390u;
label_116390:
    // 0x116390: 0x26520001
    ctx->pc = 0x116390u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_116394:
    // 0x116394: 0x0
    ctx->pc = 0x116394u;
    // NOP
label_116398:
    // 0x116398: 0x32220007
    ctx->pc = 0x116398u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 7));
label_11639c:
    // 0x11639c: 0x2610ffff
    ctx->pc = 0x11639cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
label_1163a0:
    // 0x1163a0: 0x64420030
    ctx->pc = 0x1163a0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)48);
label_1163a4:
    // 0x1163a4: 0x1188fa
    ctx->pc = 0x1163a4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> 3);
label_1163a8:
    // 0x1163a8: 0x304200ff
    ctx->pc = 0x1163a8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
label_1163ac:
    // 0x1163ac: 0xa2020000
    ctx->pc = 0x1163acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_1163b0:
    // 0x1163b0: 0x1620fff9
label_1163b4:
    if (ctx->pc == 0x1163B4u) {
        ctx->pc = 0x1163B8u;
        goto label_1163b8;
    }
    ctx->pc = 0x1163B0u;
    {
        const bool branch_taken_0x1163b0 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x1163b0) {
            ctx->pc = 0x116398u;
            goto label_116398;
        }
    }
    ctx->pc = 0x1163B8u;
label_1163b8:
    // 0x1163b8: 0x12800002
label_1163bc:
    if (ctx->pc == 0x1163BCu) {
        ctx->pc = 0x1163BCu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->pc = 0x1163C0u;
        goto label_1163c0;
    }
    ctx->pc = 0x1163B8u;
    {
        const bool branch_taken_0x1163b8 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x1163BCu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        if (branch_taken_0x1163b8) {
            ctx->pc = 0x1163C4u;
            goto label_1163c4;
        }
    }
    ctx->pc = 0x1163C0u;
label_1163c0:
    // 0x1163c0: 0x282800b
    ctx->pc = 0x1163c0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 20));
label_1163c4:
    // 0x1163c4: 0x82020000
    ctx->pc = 0x1163c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1163c8:
    // 0x1163c8: 0x104000fe
label_1163cc:
    if (ctx->pc == 0x1163CCu) {
        ctx->pc = 0x1163CCu;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1163D0u;
        goto label_1163d0;
    }
    ctx->pc = 0x1163C8u;
    {
        const bool branch_taken_0x1163c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1163CCu;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x1163c8) {
            ctx->pc = 0x1167C4u;
            goto label_1167c4;
        }
    }
    ctx->pc = 0x1163D0u;
label_1163d0:
    // 0x1163d0: 0x3c150021
    ctx->pc = 0x1163d0u;
    SET_GPR_U32(ctx, 21, ((uint32_t)33 << 16));
label_1163d4:
    // 0x1163d4: 0x0
    ctx->pc = 0x1163d4u;
    // NOP
label_1163d8:
    // 0x1163d8: 0x42600
    ctx->pc = 0x1163d8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 24));
label_1163dc:
    // 0x1163dc: 0x8ea29d44
    ctx->pc = 0x1163dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294942020)));
label_1163e0:
    // 0x1163e0: 0x42603
    ctx->pc = 0x1163e0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
label_1163e4:
    // 0x1163e4: 0x40f809
label_1163e8:
    if (ctx->pc == 0x1163E8u) {
        ctx->pc = 0x1163E8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x1163ECu;
        goto label_1163ec;
    }
    ctx->pc = 0x1163E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1163ECu);
        ctx->pc = 0x1163E8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116218u: goto label_116218;
            case 0x11621Cu: goto label_11621c;
            case 0x116220u: goto label_116220;
            case 0x116224u: goto label_116224;
            case 0x116228u: goto label_116228;
            case 0x11622Cu: goto label_11622c;
            case 0x116230u: goto label_116230;
            case 0x116234u: goto label_116234;
            case 0x116238u: goto label_116238;
            case 0x11623Cu: goto label_11623c;
            case 0x116240u: goto label_116240;
            case 0x116244u: goto label_116244;
            case 0x116248u: goto label_116248;
            case 0x11624Cu: goto label_11624c;
            case 0x116250u: goto label_116250;
            case 0x116254u: goto label_116254;
            case 0x116258u: goto label_116258;
            case 0x11625Cu: goto label_11625c;
            case 0x116260u: goto label_116260;
            case 0x116264u: goto label_116264;
            case 0x116268u: goto label_116268;
            case 0x11626Cu: goto label_11626c;
            case 0x116270u: goto label_116270;
            case 0x116274u: goto label_116274;
            case 0x116278u: goto label_116278;
            case 0x11627Cu: goto label_11627c;
            case 0x116280u: goto label_116280;
            case 0x116284u: goto label_116284;
            case 0x116288u: goto label_116288;
            case 0x11628Cu: goto label_11628c;
            case 0x116290u: goto label_116290;
            case 0x116294u: goto label_116294;
            case 0x116298u: goto label_116298;
            case 0x11629Cu: goto label_11629c;
            case 0x1162A0u: goto label_1162a0;
            case 0x1162A4u: goto label_1162a4;
            case 0x1162A8u: goto label_1162a8;
            case 0x1162ACu: goto label_1162ac;
            case 0x1162B0u: goto label_1162b0;
            case 0x1162B4u: goto label_1162b4;
            case 0x1162B8u: goto label_1162b8;
            case 0x1162BCu: goto label_1162bc;
            case 0x1162C0u: goto label_1162c0;
            case 0x1162C4u: goto label_1162c4;
            case 0x1162C8u: goto label_1162c8;
            case 0x1162CCu: goto label_1162cc;
            case 0x1162D0u: goto label_1162d0;
            case 0x1162D4u: goto label_1162d4;
            case 0x1162D8u: goto label_1162d8;
            case 0x1162DCu: goto label_1162dc;
            case 0x1162E0u: goto label_1162e0;
            case 0x1162E4u: goto label_1162e4;
            case 0x1162E8u: goto label_1162e8;
            case 0x1162ECu: goto label_1162ec;
            case 0x1162F0u: goto label_1162f0;
            case 0x1162F4u: goto label_1162f4;
            case 0x1162F8u: goto label_1162f8;
            case 0x1162FCu: goto label_1162fc;
            case 0x116300u: goto label_116300;
            case 0x116304u: goto label_116304;
            case 0x116308u: goto label_116308;
            case 0x11630Cu: goto label_11630c;
            case 0x116310u: goto label_116310;
            case 0x116314u: goto label_116314;
            case 0x116318u: goto label_116318;
            case 0x11631Cu: goto label_11631c;
            case 0x116320u: goto label_116320;
            case 0x116324u: goto label_116324;
            case 0x116328u: goto label_116328;
            case 0x11632Cu: goto label_11632c;
            case 0x116330u: goto label_116330;
            case 0x116334u: goto label_116334;
            case 0x116338u: goto label_116338;
            case 0x11633Cu: goto label_11633c;
            case 0x116340u: goto label_116340;
            case 0x116344u: goto label_116344;
            case 0x116348u: goto label_116348;
            case 0x11634Cu: goto label_11634c;
            case 0x116350u: goto label_116350;
            case 0x116354u: goto label_116354;
            case 0x116358u: goto label_116358;
            case 0x11635Cu: goto label_11635c;
            case 0x116360u: goto label_116360;
            case 0x116364u: goto label_116364;
            case 0x116368u: goto label_116368;
            case 0x11636Cu: goto label_11636c;
            case 0x116370u: goto label_116370;
            case 0x116374u: goto label_116374;
            case 0x116378u: goto label_116378;
            case 0x11637Cu: goto label_11637c;
            case 0x116380u: goto label_116380;
            case 0x116384u: goto label_116384;
            case 0x116388u: goto label_116388;
            case 0x11638Cu: goto label_11638c;
            case 0x116390u: goto label_116390;
            case 0x116394u: goto label_116394;
            case 0x116398u: goto label_116398;
            case 0x11639Cu: goto label_11639c;
            case 0x1163A0u: goto label_1163a0;
            case 0x1163A4u: goto label_1163a4;
            case 0x1163A8u: goto label_1163a8;
            case 0x1163ACu: goto label_1163ac;
            case 0x1163B0u: goto label_1163b0;
            case 0x1163B4u: goto label_1163b4;
            case 0x1163B8u: goto label_1163b8;
            case 0x1163BCu: goto label_1163bc;
            case 0x1163C0u: goto label_1163c0;
            case 0x1163C4u: goto label_1163c4;
            case 0x1163C8u: goto label_1163c8;
            case 0x1163CCu: goto label_1163cc;
            case 0x1163D0u: goto label_1163d0;
            case 0x1163D4u: goto label_1163d4;
            case 0x1163D8u: goto label_1163d8;
            case 0x1163DCu: goto label_1163dc;
            case 0x1163E0u: goto label_1163e0;
            case 0x1163E4u: goto label_1163e4;
            case 0x1163E8u: goto label_1163e8;
            case 0x1163ECu: goto label_1163ec;
            case 0x1163F0u: goto label_1163f0;
            case 0x1163F4u: goto label_1163f4;
            case 0x1163F8u: goto label_1163f8;
            case 0x1163FCu: goto label_1163fc;
            case 0x116400u: goto label_116400;
            case 0x116404u: goto label_116404;
            case 0x116408u: goto label_116408;
            case 0x11640Cu: goto label_11640c;
            case 0x116410u: goto label_116410;
            case 0x116414u: goto label_116414;
            case 0x116418u: goto label_116418;
            case 0x11641Cu: goto label_11641c;
            case 0x116420u: goto label_116420;
            case 0x116424u: goto label_116424;
            case 0x116428u: goto label_116428;
            case 0x11642Cu: goto label_11642c;
            case 0x116430u: goto label_116430;
            case 0x116434u: goto label_116434;
            case 0x116438u: goto label_116438;
            case 0x11643Cu: goto label_11643c;
            case 0x116440u: goto label_116440;
            case 0x116444u: goto label_116444;
            case 0x116448u: goto label_116448;
            case 0x11644Cu: goto label_11644c;
            case 0x116450u: goto label_116450;
            case 0x116454u: goto label_116454;
            case 0x116458u: goto label_116458;
            case 0x11645Cu: goto label_11645c;
            case 0x116460u: goto label_116460;
            case 0x116464u: goto label_116464;
            case 0x116468u: goto label_116468;
            case 0x11646Cu: goto label_11646c;
            case 0x116470u: goto label_116470;
            case 0x116474u: goto label_116474;
            case 0x116478u: goto label_116478;
            case 0x11647Cu: goto label_11647c;
            case 0x116480u: goto label_116480;
            case 0x116484u: goto label_116484;
            case 0x116488u: goto label_116488;
            case 0x11648Cu: goto label_11648c;
            case 0x116490u: goto label_116490;
            case 0x116494u: goto label_116494;
            case 0x116498u: goto label_116498;
            case 0x11649Cu: goto label_11649c;
            case 0x1164A0u: goto label_1164a0;
            case 0x1164A4u: goto label_1164a4;
            case 0x1164A8u: goto label_1164a8;
            case 0x1164ACu: goto label_1164ac;
            case 0x1164B0u: goto label_1164b0;
            case 0x1164B4u: goto label_1164b4;
            case 0x1164B8u: goto label_1164b8;
            case 0x1164BCu: goto label_1164bc;
            case 0x1164C0u: goto label_1164c0;
            case 0x1164C4u: goto label_1164c4;
            case 0x1164C8u: goto label_1164c8;
            case 0x1164CCu: goto label_1164cc;
            case 0x1164D0u: goto label_1164d0;
            case 0x1164D4u: goto label_1164d4;
            case 0x1164D8u: goto label_1164d8;
            case 0x1164DCu: goto label_1164dc;
            case 0x1164E0u: goto label_1164e0;
            case 0x1164E4u: goto label_1164e4;
            case 0x1164E8u: goto label_1164e8;
            case 0x1164ECu: goto label_1164ec;
            case 0x1164F0u: goto label_1164f0;
            case 0x1164F4u: goto label_1164f4;
            case 0x1164F8u: goto label_1164f8;
            case 0x1164FCu: goto label_1164fc;
            case 0x116500u: goto label_116500;
            case 0x116504u: goto label_116504;
            case 0x116508u: goto label_116508;
            case 0x11650Cu: goto label_11650c;
            case 0x116510u: goto label_116510;
            case 0x116514u: goto label_116514;
            case 0x116518u: goto label_116518;
            case 0x11651Cu: goto label_11651c;
            case 0x116520u: goto label_116520;
            case 0x116524u: goto label_116524;
            case 0x116528u: goto label_116528;
            case 0x11652Cu: goto label_11652c;
            case 0x116530u: goto label_116530;
            case 0x116534u: goto label_116534;
            case 0x116538u: goto label_116538;
            case 0x11653Cu: goto label_11653c;
            case 0x116540u: goto label_116540;
            case 0x116544u: goto label_116544;
            case 0x116548u: goto label_116548;
            case 0x11654Cu: goto label_11654c;
            case 0x116550u: goto label_116550;
            case 0x116554u: goto label_116554;
            case 0x116558u: goto label_116558;
            case 0x11655Cu: goto label_11655c;
            case 0x116560u: goto label_116560;
            case 0x116564u: goto label_116564;
            case 0x116568u: goto label_116568;
            case 0x11656Cu: goto label_11656c;
            case 0x116570u: goto label_116570;
            case 0x116574u: goto label_116574;
            case 0x116578u: goto label_116578;
            case 0x11657Cu: goto label_11657c;
            case 0x116580u: goto label_116580;
            case 0x116584u: goto label_116584;
            case 0x116588u: goto label_116588;
            case 0x11658Cu: goto label_11658c;
            case 0x116590u: goto label_116590;
            case 0x116594u: goto label_116594;
            case 0x116598u: goto label_116598;
            case 0x11659Cu: goto label_11659c;
            case 0x1165A0u: goto label_1165a0;
            case 0x1165A4u: goto label_1165a4;
            case 0x1165A8u: goto label_1165a8;
            case 0x1165ACu: goto label_1165ac;
            case 0x1165B0u: goto label_1165b0;
            case 0x1165B4u: goto label_1165b4;
            case 0x1165B8u: goto label_1165b8;
            case 0x1165BCu: goto label_1165bc;
            case 0x1165C0u: goto label_1165c0;
            case 0x1165C4u: goto label_1165c4;
            case 0x1165C8u: goto label_1165c8;
            case 0x1165CCu: goto label_1165cc;
            case 0x1165D0u: goto label_1165d0;
            case 0x1165D4u: goto label_1165d4;
            case 0x1165D8u: goto label_1165d8;
            case 0x1165DCu: goto label_1165dc;
            case 0x1165E0u: goto label_1165e0;
            case 0x1165E4u: goto label_1165e4;
            case 0x1165E8u: goto label_1165e8;
            case 0x1165ECu: goto label_1165ec;
            case 0x1165F0u: goto label_1165f0;
            case 0x1165F4u: goto label_1165f4;
            case 0x1165F8u: goto label_1165f8;
            case 0x1165FCu: goto label_1165fc;
            case 0x116600u: goto label_116600;
            case 0x116604u: goto label_116604;
            case 0x116608u: goto label_116608;
            case 0x11660Cu: goto label_11660c;
            case 0x116610u: goto label_116610;
            case 0x116614u: goto label_116614;
            case 0x116618u: goto label_116618;
            case 0x11661Cu: goto label_11661c;
            case 0x116620u: goto label_116620;
            case 0x116624u: goto label_116624;
            case 0x116628u: goto label_116628;
            case 0x11662Cu: goto label_11662c;
            case 0x116630u: goto label_116630;
            case 0x116634u: goto label_116634;
            case 0x116638u: goto label_116638;
            case 0x11663Cu: goto label_11663c;
            case 0x116640u: goto label_116640;
            case 0x116644u: goto label_116644;
            case 0x116648u: goto label_116648;
            case 0x11664Cu: goto label_11664c;
            case 0x116650u: goto label_116650;
            case 0x116654u: goto label_116654;
            case 0x116658u: goto label_116658;
            case 0x11665Cu: goto label_11665c;
            case 0x116660u: goto label_116660;
            case 0x116664u: goto label_116664;
            case 0x116668u: goto label_116668;
            case 0x11666Cu: goto label_11666c;
            case 0x116670u: goto label_116670;
            case 0x116674u: goto label_116674;
            case 0x116678u: goto label_116678;
            case 0x11667Cu: goto label_11667c;
            case 0x116680u: goto label_116680;
            case 0x116684u: goto label_116684;
            case 0x116688u: goto label_116688;
            case 0x11668Cu: goto label_11668c;
            case 0x116690u: goto label_116690;
            case 0x116694u: goto label_116694;
            case 0x116698u: goto label_116698;
            case 0x11669Cu: goto label_11669c;
            case 0x1166A0u: goto label_1166a0;
            case 0x1166A4u: goto label_1166a4;
            case 0x1166A8u: goto label_1166a8;
            case 0x1166ACu: goto label_1166ac;
            case 0x1166B0u: goto label_1166b0;
            case 0x1166B4u: goto label_1166b4;
            case 0x1166B8u: goto label_1166b8;
            case 0x1166BCu: goto label_1166bc;
            case 0x1166C0u: goto label_1166c0;
            case 0x1166C4u: goto label_1166c4;
            case 0x1166C8u: goto label_1166c8;
            case 0x1166CCu: goto label_1166cc;
            case 0x1166D0u: goto label_1166d0;
            case 0x1166D4u: goto label_1166d4;
            case 0x1166D8u: goto label_1166d8;
            case 0x1166DCu: goto label_1166dc;
            case 0x1166E0u: goto label_1166e0;
            case 0x1166E4u: goto label_1166e4;
            case 0x1166E8u: goto label_1166e8;
            case 0x1166ECu: goto label_1166ec;
            case 0x1166F0u: goto label_1166f0;
            case 0x1166F4u: goto label_1166f4;
            case 0x1166F8u: goto label_1166f8;
            case 0x1166FCu: goto label_1166fc;
            case 0x116700u: goto label_116700;
            case 0x116704u: goto label_116704;
            case 0x116708u: goto label_116708;
            case 0x11670Cu: goto label_11670c;
            case 0x116710u: goto label_116710;
            case 0x116714u: goto label_116714;
            case 0x116718u: goto label_116718;
            case 0x11671Cu: goto label_11671c;
            case 0x116720u: goto label_116720;
            case 0x116724u: goto label_116724;
            case 0x116728u: goto label_116728;
            case 0x11672Cu: goto label_11672c;
            case 0x116730u: goto label_116730;
            case 0x116734u: goto label_116734;
            case 0x116738u: goto label_116738;
            case 0x11673Cu: goto label_11673c;
            case 0x116740u: goto label_116740;
            case 0x116744u: goto label_116744;
            case 0x116748u: goto label_116748;
            case 0x11674Cu: goto label_11674c;
            case 0x116750u: goto label_116750;
            case 0x116754u: goto label_116754;
            case 0x116758u: goto label_116758;
            case 0x11675Cu: goto label_11675c;
            case 0x116760u: goto label_116760;
            case 0x116764u: goto label_116764;
            case 0x116768u: goto label_116768;
            case 0x11676Cu: goto label_11676c;
            case 0x116770u: goto label_116770;
            case 0x116774u: goto label_116774;
            case 0x116778u: goto label_116778;
            case 0x11677Cu: goto label_11677c;
            case 0x116780u: goto label_116780;
            case 0x116784u: goto label_116784;
            case 0x116788u: goto label_116788;
            case 0x11678Cu: goto label_11678c;
            case 0x116790u: goto label_116790;
            case 0x116794u: goto label_116794;
            case 0x116798u: goto label_116798;
            case 0x11679Cu: goto label_11679c;
            case 0x1167A0u: goto label_1167a0;
            case 0x1167A4u: goto label_1167a4;
            case 0x1167A8u: goto label_1167a8;
            case 0x1167ACu: goto label_1167ac;
            case 0x1167B0u: goto label_1167b0;
            case 0x1167B4u: goto label_1167b4;
            case 0x1167B8u: goto label_1167b8;
            case 0x1167BCu: goto label_1167bc;
            case 0x1167C0u: goto label_1167c0;
            case 0x1167C4u: goto label_1167c4;
            case 0x1167C8u: goto label_1167c8;
            case 0x1167CCu: goto label_1167cc;
            case 0x1167D0u: goto label_1167d0;
            case 0x1167D4u: goto label_1167d4;
            case 0x1167D8u: goto label_1167d8;
            case 0x1167DCu: goto label_1167dc;
            case 0x1167E0u: goto label_1167e0;
            case 0x1167E4u: goto label_1167e4;
            case 0x1167E8u: goto label_1167e8;
            case 0x1167ECu: goto label_1167ec;
            case 0x1167F0u: goto label_1167f0;
            case 0x1167F4u: goto label_1167f4;
            case 0x1167F8u: goto label_1167f8;
            case 0x1167FCu: goto label_1167fc;
            case 0x116800u: goto label_116800;
            case 0x116804u: goto label_116804;
            case 0x116808u: goto label_116808;
            case 0x11680Cu: goto label_11680c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1163ECu; }
            if (ctx->pc != 0x1163ECu) { return; }
        }
    }
    ctx->pc = 0x1163ECu;
label_1163ec:
    // 0x1163ec: 0x82020000
    ctx->pc = 0x1163ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1163f0:
    // 0x1163f0: 0x1440fff9
label_1163f4:
    if (ctx->pc == 0x1163F4u) {
        ctx->pc = 0x1163F4u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1163F8u;
        goto label_1163f8;
    }
    ctx->pc = 0x1163F0u;
    {
        const bool branch_taken_0x1163f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1163F4u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x1163f0) {
            ctx->pc = 0x1163D8u;
            goto label_1163d8;
        }
    }
    ctx->pc = 0x1163F8u;
label_1163f8:
    // 0x1163f8: 0x100000f3
label_1163fc:
    if (ctx->pc == 0x1163FCu) {
        ctx->pc = 0x1163FCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x116400u;
        goto label_116400;
    }
    ctx->pc = 0x1163F8u;
    {
        const bool branch_taken_0x1163f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1163FCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1163f8) {
            ctx->pc = 0x1167C8u;
            goto label_1167c8;
        }
    }
    ctx->pc = 0x116400u;
label_116400:
    // 0x116400: 0x2402006c
    ctx->pc = 0x116400u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 108));
label_116404:
    // 0x116404: 0x14e20004
label_116408:
    if (ctx->pc == 0x116408u) {
        ctx->pc = 0x116408u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 104));
        ctx->pc = 0x11640Cu;
        goto label_11640c;
    }
    ctx->pc = 0x116404u;
    {
        const bool branch_taken_0x116404 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        ctx->pc = 0x116408u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 104));
        if (branch_taken_0x116404) {
            ctx->pc = 0x116418u;
            goto label_116418;
        }
    }
    ctx->pc = 0x11640Cu;
label_11640c:
    // 0x11640c: 0x26730008
    ctx->pc = 0x11640cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 8));
label_116410:
    // 0x116410: 0x10000006
label_116414:
    if (ctx->pc == 0x116414u) {
        ctx->pc = 0x116414u;
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->pc = 0x116418u;
        goto label_116418;
    }
    ctx->pc = 0x116410u;
    {
        const bool branch_taken_0x116410 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x116414u;
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        if (branch_taken_0x116410) {
            ctx->pc = 0x11642Cu;
            goto label_11642c;
        }
    }
    ctx->pc = 0x116418u;
label_116418:
    // 0x116418: 0x14e20003
label_11641c:
    if (ctx->pc == 0x11641Cu) {
        ctx->pc = 0x11641Cu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 8));
        ctx->pc = 0x116420u;
        goto label_116420;
    }
    ctx->pc = 0x116418u;
    {
        const bool branch_taken_0x116418 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        ctx->pc = 0x11641Cu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 8));
        if (branch_taken_0x116418) {
            ctx->pc = 0x116428u;
            goto label_116428;
        }
    }
    ctx->pc = 0x116420u;
label_116420:
    // 0x116420: 0x10000002
label_116424:
    if (ctx->pc == 0x116424u) {
        ctx->pc = 0x116424u;
        SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->pc = 0x116428u;
        goto label_116428;
    }
    ctx->pc = 0x116420u;
    {
        const bool branch_taken_0x116420 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x116424u;
        SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        if (branch_taken_0x116420) {
            ctx->pc = 0x11642Cu;
            goto label_11642c;
        }
    }
    ctx->pc = 0x116428u;
label_116428:
    // 0x116428: 0x9e71fff8
    ctx->pc = 0x116428u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_11642c:
    // 0x11642c: 0x27b0001f
    ctx->pc = 0x11642cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 31));
label_116430:
    // 0x116430: 0x16200006
label_116434:
    if (ctx->pc == 0x116434u) {
        ctx->pc = 0x116434u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x116438u;
        goto label_116438;
    }
    ctx->pc = 0x116430u;
    {
        const bool branch_taken_0x116430 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x116434u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x116430) {
            ctx->pc = 0x11644Cu;
            goto label_11644c;
        }
    }
    ctx->pc = 0x116438u;
label_116438:
    // 0x116438: 0x24020030
    ctx->pc = 0x116438u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
label_11643c:
    // 0x11643c: 0x27b0001e
    ctx->pc = 0x11643cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 30));
label_116440:
    // 0x116440: 0xa3a2001e
    ctx->pc = 0x116440u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 30), (uint8_t)GPR_U32(ctx, 2));
label_116444:
    // 0x116444: 0x1000000c
label_116448:
    if (ctx->pc == 0x116448u) {
        ctx->pc = 0x116448u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x11644Cu;
        goto label_11644c;
    }
    ctx->pc = 0x116444u;
    {
        const bool branch_taken_0x116444 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x116448u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x116444) {
            ctx->pc = 0x116478u;
            goto label_116478;
        }
    }
    ctx->pc = 0x11644Cu;
label_11644c:
    // 0x11644c: 0x26520001
    ctx->pc = 0x11644cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_116450:
    // 0x116450: 0x3223000f
    ctx->pc = 0x116450u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 17), 15));
label_116454:
    // 0x116454: 0x2c62000a
    ctx->pc = 0x116454u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 10));
label_116458:
    // 0x116458: 0x14400002
label_11645c:
    if (ctx->pc == 0x11645Cu) {
        ctx->pc = 0x11645Cu;
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)48);
        ctx->pc = 0x116460u;
        goto label_116460;
    }
    ctx->pc = 0x116458u;
    {
        const bool branch_taken_0x116458 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x11645Cu;
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)48);
        if (branch_taken_0x116458) {
            ctx->pc = 0x116464u;
            goto label_116464;
        }
    }
    ctx->pc = 0x116460u;
label_116460:
    // 0x116460: 0x64620057
    ctx->pc = 0x116460u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)87);
label_116464:
    // 0x116464: 0x2610ffff
    ctx->pc = 0x116464u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
label_116468:
    // 0x116468: 0x304200ff
    ctx->pc = 0x116468u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
label_11646c:
    // 0x11646c: 0x11893a
    ctx->pc = 0x11646cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> 4);
label_116470:
    // 0x116470: 0x1620fff7
label_116474:
    if (ctx->pc == 0x116474u) {
        ctx->pc = 0x116474u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x116478u;
        goto label_116478;
    }
    ctx->pc = 0x116470u;
    {
        const bool branch_taken_0x116470 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x116474u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x116470) {
            ctx->pc = 0x116450u;
            goto label_116450;
        }
    }
    ctx->pc = 0x116478u;
label_116478:
    // 0x116478: 0x12800002
label_11647c:
    if (ctx->pc == 0x11647Cu) {
        ctx->pc = 0x11647Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->pc = 0x116480u;
        goto label_116480;
    }
    ctx->pc = 0x116478u;
    {
        const bool branch_taken_0x116478 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x11647Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        if (branch_taken_0x116478) {
            ctx->pc = 0x116484u;
            goto label_116484;
        }
    }
    ctx->pc = 0x116480u;
label_116480:
    // 0x116480: 0x282800b
    ctx->pc = 0x116480u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 20));
label_116484:
    // 0x116484: 0x82020000
    ctx->pc = 0x116484u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_116488:
    // 0x116488: 0x104000ce
label_11648c:
    if (ctx->pc == 0x11648Cu) {
        ctx->pc = 0x11648Cu;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x116490u;
        goto label_116490;
    }
    ctx->pc = 0x116488u;
    {
        const bool branch_taken_0x116488 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11648Cu;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x116488) {
            ctx->pc = 0x1167C4u;
            goto label_1167c4;
        }
    }
    ctx->pc = 0x116490u;
label_116490:
    // 0x116490: 0x3c150021
    ctx->pc = 0x116490u;
    SET_GPR_U32(ctx, 21, ((uint32_t)33 << 16));
label_116494:
    // 0x116494: 0x0
    ctx->pc = 0x116494u;
    // NOP
label_116498:
    // 0x116498: 0x42600
    ctx->pc = 0x116498u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 24));
label_11649c:
    // 0x11649c: 0x8ea29d44
    ctx->pc = 0x11649cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294942020)));
label_1164a0:
    // 0x1164a0: 0x42603
    ctx->pc = 0x1164a0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
label_1164a4:
    // 0x1164a4: 0x40f809
label_1164a8:
    if (ctx->pc == 0x1164A8u) {
        ctx->pc = 0x1164A8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x1164ACu;
        goto label_1164ac;
    }
    ctx->pc = 0x1164A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1164ACu);
        ctx->pc = 0x1164A8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116218u: goto label_116218;
            case 0x11621Cu: goto label_11621c;
            case 0x116220u: goto label_116220;
            case 0x116224u: goto label_116224;
            case 0x116228u: goto label_116228;
            case 0x11622Cu: goto label_11622c;
            case 0x116230u: goto label_116230;
            case 0x116234u: goto label_116234;
            case 0x116238u: goto label_116238;
            case 0x11623Cu: goto label_11623c;
            case 0x116240u: goto label_116240;
            case 0x116244u: goto label_116244;
            case 0x116248u: goto label_116248;
            case 0x11624Cu: goto label_11624c;
            case 0x116250u: goto label_116250;
            case 0x116254u: goto label_116254;
            case 0x116258u: goto label_116258;
            case 0x11625Cu: goto label_11625c;
            case 0x116260u: goto label_116260;
            case 0x116264u: goto label_116264;
            case 0x116268u: goto label_116268;
            case 0x11626Cu: goto label_11626c;
            case 0x116270u: goto label_116270;
            case 0x116274u: goto label_116274;
            case 0x116278u: goto label_116278;
            case 0x11627Cu: goto label_11627c;
            case 0x116280u: goto label_116280;
            case 0x116284u: goto label_116284;
            case 0x116288u: goto label_116288;
            case 0x11628Cu: goto label_11628c;
            case 0x116290u: goto label_116290;
            case 0x116294u: goto label_116294;
            case 0x116298u: goto label_116298;
            case 0x11629Cu: goto label_11629c;
            case 0x1162A0u: goto label_1162a0;
            case 0x1162A4u: goto label_1162a4;
            case 0x1162A8u: goto label_1162a8;
            case 0x1162ACu: goto label_1162ac;
            case 0x1162B0u: goto label_1162b0;
            case 0x1162B4u: goto label_1162b4;
            case 0x1162B8u: goto label_1162b8;
            case 0x1162BCu: goto label_1162bc;
            case 0x1162C0u: goto label_1162c0;
            case 0x1162C4u: goto label_1162c4;
            case 0x1162C8u: goto label_1162c8;
            case 0x1162CCu: goto label_1162cc;
            case 0x1162D0u: goto label_1162d0;
            case 0x1162D4u: goto label_1162d4;
            case 0x1162D8u: goto label_1162d8;
            case 0x1162DCu: goto label_1162dc;
            case 0x1162E0u: goto label_1162e0;
            case 0x1162E4u: goto label_1162e4;
            case 0x1162E8u: goto label_1162e8;
            case 0x1162ECu: goto label_1162ec;
            case 0x1162F0u: goto label_1162f0;
            case 0x1162F4u: goto label_1162f4;
            case 0x1162F8u: goto label_1162f8;
            case 0x1162FCu: goto label_1162fc;
            case 0x116300u: goto label_116300;
            case 0x116304u: goto label_116304;
            case 0x116308u: goto label_116308;
            case 0x11630Cu: goto label_11630c;
            case 0x116310u: goto label_116310;
            case 0x116314u: goto label_116314;
            case 0x116318u: goto label_116318;
            case 0x11631Cu: goto label_11631c;
            case 0x116320u: goto label_116320;
            case 0x116324u: goto label_116324;
            case 0x116328u: goto label_116328;
            case 0x11632Cu: goto label_11632c;
            case 0x116330u: goto label_116330;
            case 0x116334u: goto label_116334;
            case 0x116338u: goto label_116338;
            case 0x11633Cu: goto label_11633c;
            case 0x116340u: goto label_116340;
            case 0x116344u: goto label_116344;
            case 0x116348u: goto label_116348;
            case 0x11634Cu: goto label_11634c;
            case 0x116350u: goto label_116350;
            case 0x116354u: goto label_116354;
            case 0x116358u: goto label_116358;
            case 0x11635Cu: goto label_11635c;
            case 0x116360u: goto label_116360;
            case 0x116364u: goto label_116364;
            case 0x116368u: goto label_116368;
            case 0x11636Cu: goto label_11636c;
            case 0x116370u: goto label_116370;
            case 0x116374u: goto label_116374;
            case 0x116378u: goto label_116378;
            case 0x11637Cu: goto label_11637c;
            case 0x116380u: goto label_116380;
            case 0x116384u: goto label_116384;
            case 0x116388u: goto label_116388;
            case 0x11638Cu: goto label_11638c;
            case 0x116390u: goto label_116390;
            case 0x116394u: goto label_116394;
            case 0x116398u: goto label_116398;
            case 0x11639Cu: goto label_11639c;
            case 0x1163A0u: goto label_1163a0;
            case 0x1163A4u: goto label_1163a4;
            case 0x1163A8u: goto label_1163a8;
            case 0x1163ACu: goto label_1163ac;
            case 0x1163B0u: goto label_1163b0;
            case 0x1163B4u: goto label_1163b4;
            case 0x1163B8u: goto label_1163b8;
            case 0x1163BCu: goto label_1163bc;
            case 0x1163C0u: goto label_1163c0;
            case 0x1163C4u: goto label_1163c4;
            case 0x1163C8u: goto label_1163c8;
            case 0x1163CCu: goto label_1163cc;
            case 0x1163D0u: goto label_1163d0;
            case 0x1163D4u: goto label_1163d4;
            case 0x1163D8u: goto label_1163d8;
            case 0x1163DCu: goto label_1163dc;
            case 0x1163E0u: goto label_1163e0;
            case 0x1163E4u: goto label_1163e4;
            case 0x1163E8u: goto label_1163e8;
            case 0x1163ECu: goto label_1163ec;
            case 0x1163F0u: goto label_1163f0;
            case 0x1163F4u: goto label_1163f4;
            case 0x1163F8u: goto label_1163f8;
            case 0x1163FCu: goto label_1163fc;
            case 0x116400u: goto label_116400;
            case 0x116404u: goto label_116404;
            case 0x116408u: goto label_116408;
            case 0x11640Cu: goto label_11640c;
            case 0x116410u: goto label_116410;
            case 0x116414u: goto label_116414;
            case 0x116418u: goto label_116418;
            case 0x11641Cu: goto label_11641c;
            case 0x116420u: goto label_116420;
            case 0x116424u: goto label_116424;
            case 0x116428u: goto label_116428;
            case 0x11642Cu: goto label_11642c;
            case 0x116430u: goto label_116430;
            case 0x116434u: goto label_116434;
            case 0x116438u: goto label_116438;
            case 0x11643Cu: goto label_11643c;
            case 0x116440u: goto label_116440;
            case 0x116444u: goto label_116444;
            case 0x116448u: goto label_116448;
            case 0x11644Cu: goto label_11644c;
            case 0x116450u: goto label_116450;
            case 0x116454u: goto label_116454;
            case 0x116458u: goto label_116458;
            case 0x11645Cu: goto label_11645c;
            case 0x116460u: goto label_116460;
            case 0x116464u: goto label_116464;
            case 0x116468u: goto label_116468;
            case 0x11646Cu: goto label_11646c;
            case 0x116470u: goto label_116470;
            case 0x116474u: goto label_116474;
            case 0x116478u: goto label_116478;
            case 0x11647Cu: goto label_11647c;
            case 0x116480u: goto label_116480;
            case 0x116484u: goto label_116484;
            case 0x116488u: goto label_116488;
            case 0x11648Cu: goto label_11648c;
            case 0x116490u: goto label_116490;
            case 0x116494u: goto label_116494;
            case 0x116498u: goto label_116498;
            case 0x11649Cu: goto label_11649c;
            case 0x1164A0u: goto label_1164a0;
            case 0x1164A4u: goto label_1164a4;
            case 0x1164A8u: goto label_1164a8;
            case 0x1164ACu: goto label_1164ac;
            case 0x1164B0u: goto label_1164b0;
            case 0x1164B4u: goto label_1164b4;
            case 0x1164B8u: goto label_1164b8;
            case 0x1164BCu: goto label_1164bc;
            case 0x1164C0u: goto label_1164c0;
            case 0x1164C4u: goto label_1164c4;
            case 0x1164C8u: goto label_1164c8;
            case 0x1164CCu: goto label_1164cc;
            case 0x1164D0u: goto label_1164d0;
            case 0x1164D4u: goto label_1164d4;
            case 0x1164D8u: goto label_1164d8;
            case 0x1164DCu: goto label_1164dc;
            case 0x1164E0u: goto label_1164e0;
            case 0x1164E4u: goto label_1164e4;
            case 0x1164E8u: goto label_1164e8;
            case 0x1164ECu: goto label_1164ec;
            case 0x1164F0u: goto label_1164f0;
            case 0x1164F4u: goto label_1164f4;
            case 0x1164F8u: goto label_1164f8;
            case 0x1164FCu: goto label_1164fc;
            case 0x116500u: goto label_116500;
            case 0x116504u: goto label_116504;
            case 0x116508u: goto label_116508;
            case 0x11650Cu: goto label_11650c;
            case 0x116510u: goto label_116510;
            case 0x116514u: goto label_116514;
            case 0x116518u: goto label_116518;
            case 0x11651Cu: goto label_11651c;
            case 0x116520u: goto label_116520;
            case 0x116524u: goto label_116524;
            case 0x116528u: goto label_116528;
            case 0x11652Cu: goto label_11652c;
            case 0x116530u: goto label_116530;
            case 0x116534u: goto label_116534;
            case 0x116538u: goto label_116538;
            case 0x11653Cu: goto label_11653c;
            case 0x116540u: goto label_116540;
            case 0x116544u: goto label_116544;
            case 0x116548u: goto label_116548;
            case 0x11654Cu: goto label_11654c;
            case 0x116550u: goto label_116550;
            case 0x116554u: goto label_116554;
            case 0x116558u: goto label_116558;
            case 0x11655Cu: goto label_11655c;
            case 0x116560u: goto label_116560;
            case 0x116564u: goto label_116564;
            case 0x116568u: goto label_116568;
            case 0x11656Cu: goto label_11656c;
            case 0x116570u: goto label_116570;
            case 0x116574u: goto label_116574;
            case 0x116578u: goto label_116578;
            case 0x11657Cu: goto label_11657c;
            case 0x116580u: goto label_116580;
            case 0x116584u: goto label_116584;
            case 0x116588u: goto label_116588;
            case 0x11658Cu: goto label_11658c;
            case 0x116590u: goto label_116590;
            case 0x116594u: goto label_116594;
            case 0x116598u: goto label_116598;
            case 0x11659Cu: goto label_11659c;
            case 0x1165A0u: goto label_1165a0;
            case 0x1165A4u: goto label_1165a4;
            case 0x1165A8u: goto label_1165a8;
            case 0x1165ACu: goto label_1165ac;
            case 0x1165B0u: goto label_1165b0;
            case 0x1165B4u: goto label_1165b4;
            case 0x1165B8u: goto label_1165b8;
            case 0x1165BCu: goto label_1165bc;
            case 0x1165C0u: goto label_1165c0;
            case 0x1165C4u: goto label_1165c4;
            case 0x1165C8u: goto label_1165c8;
            case 0x1165CCu: goto label_1165cc;
            case 0x1165D0u: goto label_1165d0;
            case 0x1165D4u: goto label_1165d4;
            case 0x1165D8u: goto label_1165d8;
            case 0x1165DCu: goto label_1165dc;
            case 0x1165E0u: goto label_1165e0;
            case 0x1165E4u: goto label_1165e4;
            case 0x1165E8u: goto label_1165e8;
            case 0x1165ECu: goto label_1165ec;
            case 0x1165F0u: goto label_1165f0;
            case 0x1165F4u: goto label_1165f4;
            case 0x1165F8u: goto label_1165f8;
            case 0x1165FCu: goto label_1165fc;
            case 0x116600u: goto label_116600;
            case 0x116604u: goto label_116604;
            case 0x116608u: goto label_116608;
            case 0x11660Cu: goto label_11660c;
            case 0x116610u: goto label_116610;
            case 0x116614u: goto label_116614;
            case 0x116618u: goto label_116618;
            case 0x11661Cu: goto label_11661c;
            case 0x116620u: goto label_116620;
            case 0x116624u: goto label_116624;
            case 0x116628u: goto label_116628;
            case 0x11662Cu: goto label_11662c;
            case 0x116630u: goto label_116630;
            case 0x116634u: goto label_116634;
            case 0x116638u: goto label_116638;
            case 0x11663Cu: goto label_11663c;
            case 0x116640u: goto label_116640;
            case 0x116644u: goto label_116644;
            case 0x116648u: goto label_116648;
            case 0x11664Cu: goto label_11664c;
            case 0x116650u: goto label_116650;
            case 0x116654u: goto label_116654;
            case 0x116658u: goto label_116658;
            case 0x11665Cu: goto label_11665c;
            case 0x116660u: goto label_116660;
            case 0x116664u: goto label_116664;
            case 0x116668u: goto label_116668;
            case 0x11666Cu: goto label_11666c;
            case 0x116670u: goto label_116670;
            case 0x116674u: goto label_116674;
            case 0x116678u: goto label_116678;
            case 0x11667Cu: goto label_11667c;
            case 0x116680u: goto label_116680;
            case 0x116684u: goto label_116684;
            case 0x116688u: goto label_116688;
            case 0x11668Cu: goto label_11668c;
            case 0x116690u: goto label_116690;
            case 0x116694u: goto label_116694;
            case 0x116698u: goto label_116698;
            case 0x11669Cu: goto label_11669c;
            case 0x1166A0u: goto label_1166a0;
            case 0x1166A4u: goto label_1166a4;
            case 0x1166A8u: goto label_1166a8;
            case 0x1166ACu: goto label_1166ac;
            case 0x1166B0u: goto label_1166b0;
            case 0x1166B4u: goto label_1166b4;
            case 0x1166B8u: goto label_1166b8;
            case 0x1166BCu: goto label_1166bc;
            case 0x1166C0u: goto label_1166c0;
            case 0x1166C4u: goto label_1166c4;
            case 0x1166C8u: goto label_1166c8;
            case 0x1166CCu: goto label_1166cc;
            case 0x1166D0u: goto label_1166d0;
            case 0x1166D4u: goto label_1166d4;
            case 0x1166D8u: goto label_1166d8;
            case 0x1166DCu: goto label_1166dc;
            case 0x1166E0u: goto label_1166e0;
            case 0x1166E4u: goto label_1166e4;
            case 0x1166E8u: goto label_1166e8;
            case 0x1166ECu: goto label_1166ec;
            case 0x1166F0u: goto label_1166f0;
            case 0x1166F4u: goto label_1166f4;
            case 0x1166F8u: goto label_1166f8;
            case 0x1166FCu: goto label_1166fc;
            case 0x116700u: goto label_116700;
            case 0x116704u: goto label_116704;
            case 0x116708u: goto label_116708;
            case 0x11670Cu: goto label_11670c;
            case 0x116710u: goto label_116710;
            case 0x116714u: goto label_116714;
            case 0x116718u: goto label_116718;
            case 0x11671Cu: goto label_11671c;
            case 0x116720u: goto label_116720;
            case 0x116724u: goto label_116724;
            case 0x116728u: goto label_116728;
            case 0x11672Cu: goto label_11672c;
            case 0x116730u: goto label_116730;
            case 0x116734u: goto label_116734;
            case 0x116738u: goto label_116738;
            case 0x11673Cu: goto label_11673c;
            case 0x116740u: goto label_116740;
            case 0x116744u: goto label_116744;
            case 0x116748u: goto label_116748;
            case 0x11674Cu: goto label_11674c;
            case 0x116750u: goto label_116750;
            case 0x116754u: goto label_116754;
            case 0x116758u: goto label_116758;
            case 0x11675Cu: goto label_11675c;
            case 0x116760u: goto label_116760;
            case 0x116764u: goto label_116764;
            case 0x116768u: goto label_116768;
            case 0x11676Cu: goto label_11676c;
            case 0x116770u: goto label_116770;
            case 0x116774u: goto label_116774;
            case 0x116778u: goto label_116778;
            case 0x11677Cu: goto label_11677c;
            case 0x116780u: goto label_116780;
            case 0x116784u: goto label_116784;
            case 0x116788u: goto label_116788;
            case 0x11678Cu: goto label_11678c;
            case 0x116790u: goto label_116790;
            case 0x116794u: goto label_116794;
            case 0x116798u: goto label_116798;
            case 0x11679Cu: goto label_11679c;
            case 0x1167A0u: goto label_1167a0;
            case 0x1167A4u: goto label_1167a4;
            case 0x1167A8u: goto label_1167a8;
            case 0x1167ACu: goto label_1167ac;
            case 0x1167B0u: goto label_1167b0;
            case 0x1167B4u: goto label_1167b4;
            case 0x1167B8u: goto label_1167b8;
            case 0x1167BCu: goto label_1167bc;
            case 0x1167C0u: goto label_1167c0;
            case 0x1167C4u: goto label_1167c4;
            case 0x1167C8u: goto label_1167c8;
            case 0x1167CCu: goto label_1167cc;
            case 0x1167D0u: goto label_1167d0;
            case 0x1167D4u: goto label_1167d4;
            case 0x1167D8u: goto label_1167d8;
            case 0x1167DCu: goto label_1167dc;
            case 0x1167E0u: goto label_1167e0;
            case 0x1167E4u: goto label_1167e4;
            case 0x1167E8u: goto label_1167e8;
            case 0x1167ECu: goto label_1167ec;
            case 0x1167F0u: goto label_1167f0;
            case 0x1167F4u: goto label_1167f4;
            case 0x1167F8u: goto label_1167f8;
            case 0x1167FCu: goto label_1167fc;
            case 0x116800u: goto label_116800;
            case 0x116804u: goto label_116804;
            case 0x116808u: goto label_116808;
            case 0x11680Cu: goto label_11680c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1164ACu; }
            if (ctx->pc != 0x1164ACu) { return; }
        }
    }
    ctx->pc = 0x1164ACu;
label_1164ac:
    // 0x1164ac: 0x82020000
    ctx->pc = 0x1164acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1164b0:
    // 0x1164b0: 0x1440fff9
label_1164b4:
    if (ctx->pc == 0x1164B4u) {
        ctx->pc = 0x1164B4u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1164B8u;
        goto label_1164b8;
    }
    ctx->pc = 0x1164B0u;
    {
        const bool branch_taken_0x1164b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1164B4u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x1164b0) {
            ctx->pc = 0x116498u;
            goto label_116498;
        }
    }
    ctx->pc = 0x1164B8u;
label_1164b8:
    // 0x1164b8: 0x100000c3
label_1164bc:
    if (ctx->pc == 0x1164BCu) {
        ctx->pc = 0x1164BCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1164C0u;
        goto label_1164c0;
    }
    ctx->pc = 0x1164B8u;
    {
        const bool branch_taken_0x1164b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1164BCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1164b8) {
            ctx->pc = 0x1167C8u;
            goto label_1167c8;
        }
    }
    ctx->pc = 0x1164C0u;
label_1164c0:
    // 0x1164c0: 0x2402006c
    ctx->pc = 0x1164c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 108));
label_1164c4:
    // 0x1164c4: 0x14e20004
label_1164c8:
    if (ctx->pc == 0x1164C8u) {
        ctx->pc = 0x1164C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 104));
        ctx->pc = 0x1164CCu;
        goto label_1164cc;
    }
    ctx->pc = 0x1164C4u;
    {
        const bool branch_taken_0x1164c4 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        ctx->pc = 0x1164C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 104));
        if (branch_taken_0x1164c4) {
            ctx->pc = 0x1164D8u;
            goto label_1164d8;
        }
    }
    ctx->pc = 0x1164CCu;
label_1164cc:
    // 0x1164cc: 0x26730008
    ctx->pc = 0x1164ccu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 8));
label_1164d0:
    // 0x1164d0: 0x10000006
label_1164d4:
    if (ctx->pc == 0x1164D4u) {
        ctx->pc = 0x1164D4u;
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->pc = 0x1164D8u;
        goto label_1164d8;
    }
    ctx->pc = 0x1164D0u;
    {
        const bool branch_taken_0x1164d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1164D4u;
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        if (branch_taken_0x1164d0) {
            ctx->pc = 0x1164ECu;
            goto label_1164ec;
        }
    }
    ctx->pc = 0x1164D8u;
label_1164d8:
    // 0x1164d8: 0x14e20003
label_1164dc:
    if (ctx->pc == 0x1164DCu) {
        ctx->pc = 0x1164DCu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 8));
        ctx->pc = 0x1164E0u;
        goto label_1164e0;
    }
    ctx->pc = 0x1164D8u;
    {
        const bool branch_taken_0x1164d8 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        ctx->pc = 0x1164DCu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 8));
        if (branch_taken_0x1164d8) {
            ctx->pc = 0x1164E8u;
            goto label_1164e8;
        }
    }
    ctx->pc = 0x1164E0u;
label_1164e0:
    // 0x1164e0: 0x10000002
label_1164e4:
    if (ctx->pc == 0x1164E4u) {
        ctx->pc = 0x1164E4u;
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->pc = 0x1164E8u;
        goto label_1164e8;
    }
    ctx->pc = 0x1164E0u;
    {
        const bool branch_taken_0x1164e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1164E4u;
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        if (branch_taken_0x1164e0) {
            ctx->pc = 0x1164ECu;
            goto label_1164ec;
        }
    }
    ctx->pc = 0x1164E8u;
label_1164e8:
    // 0x1164e8: 0x8e71fff8
    ctx->pc = 0x1164e8u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_1164ec:
    // 0x1164ec: 0x27b0001f
    ctx->pc = 0x1164ecu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 31));
label_1164f0:
    // 0x1164f0: 0x16200005
label_1164f4:
    if (ctx->pc == 0x1164F4u) {
        ctx->pc = 0x1164F4u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1164F8u;
        goto label_1164f8;
    }
    ctx->pc = 0x1164F0u;
    {
        const bool branch_taken_0x1164f0 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x1164F4u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1164f0) {
            ctx->pc = 0x116508u;
            goto label_116508;
        }
    }
    ctx->pc = 0x1164F8u;
label_1164f8:
    // 0x1164f8: 0x24020030
    ctx->pc = 0x1164f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
label_1164fc:
    // 0x1164fc: 0x27b0001e
    ctx->pc = 0x1164fcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 30));
label_116500:
    // 0x116500: 0x10000019
label_116504:
    if (ctx->pc == 0x116504u) {
        ctx->pc = 0x116504u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 30), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x116508u;
        goto label_116508;
    }
    ctx->pc = 0x116500u;
    {
        const bool branch_taken_0x116500 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x116504u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 30), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x116500) {
            ctx->pc = 0x116568u;
            goto label_116568;
        }
    }
    ctx->pc = 0x116508u;
label_116508:
    // 0x116508: 0x6210005
label_11650c:
    if (ctx->pc == 0x11650Cu) {
        ctx->pc = 0x11650Cu;
        SET_GPR_U32(ctx, 21, ((uint32_t)33 << 16));
        ctx->pc = 0x116510u;
        goto label_116510;
    }
    ctx->pc = 0x116508u;
    {
        const bool branch_taken_0x116508 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x11650Cu;
        SET_GPR_U32(ctx, 21, ((uint32_t)33 << 16));
        if (branch_taken_0x116508) {
            ctx->pc = 0x116520u;
            goto label_116520;
        }
    }
    ctx->pc = 0x116510u;
label_116510:
    // 0x116510: 0x11882f
    ctx->pc = 0x116510u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) - GPR_U64(ctx, 17));
label_116514:
    // 0x116514: 0x8ea29d44
    ctx->pc = 0x116514u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294942020)));
label_116518:
    // 0x116518: 0x40f809
label_11651c:
    if (ctx->pc == 0x11651Cu) {
        ctx->pc = 0x11651Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 45));
        ctx->pc = 0x116520u;
        goto label_116520;
    }
    ctx->pc = 0x116518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x116520u);
        ctx->pc = 0x11651Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 45));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116218u: goto label_116218;
            case 0x11621Cu: goto label_11621c;
            case 0x116220u: goto label_116220;
            case 0x116224u: goto label_116224;
            case 0x116228u: goto label_116228;
            case 0x11622Cu: goto label_11622c;
            case 0x116230u: goto label_116230;
            case 0x116234u: goto label_116234;
            case 0x116238u: goto label_116238;
            case 0x11623Cu: goto label_11623c;
            case 0x116240u: goto label_116240;
            case 0x116244u: goto label_116244;
            case 0x116248u: goto label_116248;
            case 0x11624Cu: goto label_11624c;
            case 0x116250u: goto label_116250;
            case 0x116254u: goto label_116254;
            case 0x116258u: goto label_116258;
            case 0x11625Cu: goto label_11625c;
            case 0x116260u: goto label_116260;
            case 0x116264u: goto label_116264;
            case 0x116268u: goto label_116268;
            case 0x11626Cu: goto label_11626c;
            case 0x116270u: goto label_116270;
            case 0x116274u: goto label_116274;
            case 0x116278u: goto label_116278;
            case 0x11627Cu: goto label_11627c;
            case 0x116280u: goto label_116280;
            case 0x116284u: goto label_116284;
            case 0x116288u: goto label_116288;
            case 0x11628Cu: goto label_11628c;
            case 0x116290u: goto label_116290;
            case 0x116294u: goto label_116294;
            case 0x116298u: goto label_116298;
            case 0x11629Cu: goto label_11629c;
            case 0x1162A0u: goto label_1162a0;
            case 0x1162A4u: goto label_1162a4;
            case 0x1162A8u: goto label_1162a8;
            case 0x1162ACu: goto label_1162ac;
            case 0x1162B0u: goto label_1162b0;
            case 0x1162B4u: goto label_1162b4;
            case 0x1162B8u: goto label_1162b8;
            case 0x1162BCu: goto label_1162bc;
            case 0x1162C0u: goto label_1162c0;
            case 0x1162C4u: goto label_1162c4;
            case 0x1162C8u: goto label_1162c8;
            case 0x1162CCu: goto label_1162cc;
            case 0x1162D0u: goto label_1162d0;
            case 0x1162D4u: goto label_1162d4;
            case 0x1162D8u: goto label_1162d8;
            case 0x1162DCu: goto label_1162dc;
            case 0x1162E0u: goto label_1162e0;
            case 0x1162E4u: goto label_1162e4;
            case 0x1162E8u: goto label_1162e8;
            case 0x1162ECu: goto label_1162ec;
            case 0x1162F0u: goto label_1162f0;
            case 0x1162F4u: goto label_1162f4;
            case 0x1162F8u: goto label_1162f8;
            case 0x1162FCu: goto label_1162fc;
            case 0x116300u: goto label_116300;
            case 0x116304u: goto label_116304;
            case 0x116308u: goto label_116308;
            case 0x11630Cu: goto label_11630c;
            case 0x116310u: goto label_116310;
            case 0x116314u: goto label_116314;
            case 0x116318u: goto label_116318;
            case 0x11631Cu: goto label_11631c;
            case 0x116320u: goto label_116320;
            case 0x116324u: goto label_116324;
            case 0x116328u: goto label_116328;
            case 0x11632Cu: goto label_11632c;
            case 0x116330u: goto label_116330;
            case 0x116334u: goto label_116334;
            case 0x116338u: goto label_116338;
            case 0x11633Cu: goto label_11633c;
            case 0x116340u: goto label_116340;
            case 0x116344u: goto label_116344;
            case 0x116348u: goto label_116348;
            case 0x11634Cu: goto label_11634c;
            case 0x116350u: goto label_116350;
            case 0x116354u: goto label_116354;
            case 0x116358u: goto label_116358;
            case 0x11635Cu: goto label_11635c;
            case 0x116360u: goto label_116360;
            case 0x116364u: goto label_116364;
            case 0x116368u: goto label_116368;
            case 0x11636Cu: goto label_11636c;
            case 0x116370u: goto label_116370;
            case 0x116374u: goto label_116374;
            case 0x116378u: goto label_116378;
            case 0x11637Cu: goto label_11637c;
            case 0x116380u: goto label_116380;
            case 0x116384u: goto label_116384;
            case 0x116388u: goto label_116388;
            case 0x11638Cu: goto label_11638c;
            case 0x116390u: goto label_116390;
            case 0x116394u: goto label_116394;
            case 0x116398u: goto label_116398;
            case 0x11639Cu: goto label_11639c;
            case 0x1163A0u: goto label_1163a0;
            case 0x1163A4u: goto label_1163a4;
            case 0x1163A8u: goto label_1163a8;
            case 0x1163ACu: goto label_1163ac;
            case 0x1163B0u: goto label_1163b0;
            case 0x1163B4u: goto label_1163b4;
            case 0x1163B8u: goto label_1163b8;
            case 0x1163BCu: goto label_1163bc;
            case 0x1163C0u: goto label_1163c0;
            case 0x1163C4u: goto label_1163c4;
            case 0x1163C8u: goto label_1163c8;
            case 0x1163CCu: goto label_1163cc;
            case 0x1163D0u: goto label_1163d0;
            case 0x1163D4u: goto label_1163d4;
            case 0x1163D8u: goto label_1163d8;
            case 0x1163DCu: goto label_1163dc;
            case 0x1163E0u: goto label_1163e0;
            case 0x1163E4u: goto label_1163e4;
            case 0x1163E8u: goto label_1163e8;
            case 0x1163ECu: goto label_1163ec;
            case 0x1163F0u: goto label_1163f0;
            case 0x1163F4u: goto label_1163f4;
            case 0x1163F8u: goto label_1163f8;
            case 0x1163FCu: goto label_1163fc;
            case 0x116400u: goto label_116400;
            case 0x116404u: goto label_116404;
            case 0x116408u: goto label_116408;
            case 0x11640Cu: goto label_11640c;
            case 0x116410u: goto label_116410;
            case 0x116414u: goto label_116414;
            case 0x116418u: goto label_116418;
            case 0x11641Cu: goto label_11641c;
            case 0x116420u: goto label_116420;
            case 0x116424u: goto label_116424;
            case 0x116428u: goto label_116428;
            case 0x11642Cu: goto label_11642c;
            case 0x116430u: goto label_116430;
            case 0x116434u: goto label_116434;
            case 0x116438u: goto label_116438;
            case 0x11643Cu: goto label_11643c;
            case 0x116440u: goto label_116440;
            case 0x116444u: goto label_116444;
            case 0x116448u: goto label_116448;
            case 0x11644Cu: goto label_11644c;
            case 0x116450u: goto label_116450;
            case 0x116454u: goto label_116454;
            case 0x116458u: goto label_116458;
            case 0x11645Cu: goto label_11645c;
            case 0x116460u: goto label_116460;
            case 0x116464u: goto label_116464;
            case 0x116468u: goto label_116468;
            case 0x11646Cu: goto label_11646c;
            case 0x116470u: goto label_116470;
            case 0x116474u: goto label_116474;
            case 0x116478u: goto label_116478;
            case 0x11647Cu: goto label_11647c;
            case 0x116480u: goto label_116480;
            case 0x116484u: goto label_116484;
            case 0x116488u: goto label_116488;
            case 0x11648Cu: goto label_11648c;
            case 0x116490u: goto label_116490;
            case 0x116494u: goto label_116494;
            case 0x116498u: goto label_116498;
            case 0x11649Cu: goto label_11649c;
            case 0x1164A0u: goto label_1164a0;
            case 0x1164A4u: goto label_1164a4;
            case 0x1164A8u: goto label_1164a8;
            case 0x1164ACu: goto label_1164ac;
            case 0x1164B0u: goto label_1164b0;
            case 0x1164B4u: goto label_1164b4;
            case 0x1164B8u: goto label_1164b8;
            case 0x1164BCu: goto label_1164bc;
            case 0x1164C0u: goto label_1164c0;
            case 0x1164C4u: goto label_1164c4;
            case 0x1164C8u: goto label_1164c8;
            case 0x1164CCu: goto label_1164cc;
            case 0x1164D0u: goto label_1164d0;
            case 0x1164D4u: goto label_1164d4;
            case 0x1164D8u: goto label_1164d8;
            case 0x1164DCu: goto label_1164dc;
            case 0x1164E0u: goto label_1164e0;
            case 0x1164E4u: goto label_1164e4;
            case 0x1164E8u: goto label_1164e8;
            case 0x1164ECu: goto label_1164ec;
            case 0x1164F0u: goto label_1164f0;
            case 0x1164F4u: goto label_1164f4;
            case 0x1164F8u: goto label_1164f8;
            case 0x1164FCu: goto label_1164fc;
            case 0x116500u: goto label_116500;
            case 0x116504u: goto label_116504;
            case 0x116508u: goto label_116508;
            case 0x11650Cu: goto label_11650c;
            case 0x116510u: goto label_116510;
            case 0x116514u: goto label_116514;
            case 0x116518u: goto label_116518;
            case 0x11651Cu: goto label_11651c;
            case 0x116520u: goto label_116520;
            case 0x116524u: goto label_116524;
            case 0x116528u: goto label_116528;
            case 0x11652Cu: goto label_11652c;
            case 0x116530u: goto label_116530;
            case 0x116534u: goto label_116534;
            case 0x116538u: goto label_116538;
            case 0x11653Cu: goto label_11653c;
            case 0x116540u: goto label_116540;
            case 0x116544u: goto label_116544;
            case 0x116548u: goto label_116548;
            case 0x11654Cu: goto label_11654c;
            case 0x116550u: goto label_116550;
            case 0x116554u: goto label_116554;
            case 0x116558u: goto label_116558;
            case 0x11655Cu: goto label_11655c;
            case 0x116560u: goto label_116560;
            case 0x116564u: goto label_116564;
            case 0x116568u: goto label_116568;
            case 0x11656Cu: goto label_11656c;
            case 0x116570u: goto label_116570;
            case 0x116574u: goto label_116574;
            case 0x116578u: goto label_116578;
            case 0x11657Cu: goto label_11657c;
            case 0x116580u: goto label_116580;
            case 0x116584u: goto label_116584;
            case 0x116588u: goto label_116588;
            case 0x11658Cu: goto label_11658c;
            case 0x116590u: goto label_116590;
            case 0x116594u: goto label_116594;
            case 0x116598u: goto label_116598;
            case 0x11659Cu: goto label_11659c;
            case 0x1165A0u: goto label_1165a0;
            case 0x1165A4u: goto label_1165a4;
            case 0x1165A8u: goto label_1165a8;
            case 0x1165ACu: goto label_1165ac;
            case 0x1165B0u: goto label_1165b0;
            case 0x1165B4u: goto label_1165b4;
            case 0x1165B8u: goto label_1165b8;
            case 0x1165BCu: goto label_1165bc;
            case 0x1165C0u: goto label_1165c0;
            case 0x1165C4u: goto label_1165c4;
            case 0x1165C8u: goto label_1165c8;
            case 0x1165CCu: goto label_1165cc;
            case 0x1165D0u: goto label_1165d0;
            case 0x1165D4u: goto label_1165d4;
            case 0x1165D8u: goto label_1165d8;
            case 0x1165DCu: goto label_1165dc;
            case 0x1165E0u: goto label_1165e0;
            case 0x1165E4u: goto label_1165e4;
            case 0x1165E8u: goto label_1165e8;
            case 0x1165ECu: goto label_1165ec;
            case 0x1165F0u: goto label_1165f0;
            case 0x1165F4u: goto label_1165f4;
            case 0x1165F8u: goto label_1165f8;
            case 0x1165FCu: goto label_1165fc;
            case 0x116600u: goto label_116600;
            case 0x116604u: goto label_116604;
            case 0x116608u: goto label_116608;
            case 0x11660Cu: goto label_11660c;
            case 0x116610u: goto label_116610;
            case 0x116614u: goto label_116614;
            case 0x116618u: goto label_116618;
            case 0x11661Cu: goto label_11661c;
            case 0x116620u: goto label_116620;
            case 0x116624u: goto label_116624;
            case 0x116628u: goto label_116628;
            case 0x11662Cu: goto label_11662c;
            case 0x116630u: goto label_116630;
            case 0x116634u: goto label_116634;
            case 0x116638u: goto label_116638;
            case 0x11663Cu: goto label_11663c;
            case 0x116640u: goto label_116640;
            case 0x116644u: goto label_116644;
            case 0x116648u: goto label_116648;
            case 0x11664Cu: goto label_11664c;
            case 0x116650u: goto label_116650;
            case 0x116654u: goto label_116654;
            case 0x116658u: goto label_116658;
            case 0x11665Cu: goto label_11665c;
            case 0x116660u: goto label_116660;
            case 0x116664u: goto label_116664;
            case 0x116668u: goto label_116668;
            case 0x11666Cu: goto label_11666c;
            case 0x116670u: goto label_116670;
            case 0x116674u: goto label_116674;
            case 0x116678u: goto label_116678;
            case 0x11667Cu: goto label_11667c;
            case 0x116680u: goto label_116680;
            case 0x116684u: goto label_116684;
            case 0x116688u: goto label_116688;
            case 0x11668Cu: goto label_11668c;
            case 0x116690u: goto label_116690;
            case 0x116694u: goto label_116694;
            case 0x116698u: goto label_116698;
            case 0x11669Cu: goto label_11669c;
            case 0x1166A0u: goto label_1166a0;
            case 0x1166A4u: goto label_1166a4;
            case 0x1166A8u: goto label_1166a8;
            case 0x1166ACu: goto label_1166ac;
            case 0x1166B0u: goto label_1166b0;
            case 0x1166B4u: goto label_1166b4;
            case 0x1166B8u: goto label_1166b8;
            case 0x1166BCu: goto label_1166bc;
            case 0x1166C0u: goto label_1166c0;
            case 0x1166C4u: goto label_1166c4;
            case 0x1166C8u: goto label_1166c8;
            case 0x1166CCu: goto label_1166cc;
            case 0x1166D0u: goto label_1166d0;
            case 0x1166D4u: goto label_1166d4;
            case 0x1166D8u: goto label_1166d8;
            case 0x1166DCu: goto label_1166dc;
            case 0x1166E0u: goto label_1166e0;
            case 0x1166E4u: goto label_1166e4;
            case 0x1166E8u: goto label_1166e8;
            case 0x1166ECu: goto label_1166ec;
            case 0x1166F0u: goto label_1166f0;
            case 0x1166F4u: goto label_1166f4;
            case 0x1166F8u: goto label_1166f8;
            case 0x1166FCu: goto label_1166fc;
            case 0x116700u: goto label_116700;
            case 0x116704u: goto label_116704;
            case 0x116708u: goto label_116708;
            case 0x11670Cu: goto label_11670c;
            case 0x116710u: goto label_116710;
            case 0x116714u: goto label_116714;
            case 0x116718u: goto label_116718;
            case 0x11671Cu: goto label_11671c;
            case 0x116720u: goto label_116720;
            case 0x116724u: goto label_116724;
            case 0x116728u: goto label_116728;
            case 0x11672Cu: goto label_11672c;
            case 0x116730u: goto label_116730;
            case 0x116734u: goto label_116734;
            case 0x116738u: goto label_116738;
            case 0x11673Cu: goto label_11673c;
            case 0x116740u: goto label_116740;
            case 0x116744u: goto label_116744;
            case 0x116748u: goto label_116748;
            case 0x11674Cu: goto label_11674c;
            case 0x116750u: goto label_116750;
            case 0x116754u: goto label_116754;
            case 0x116758u: goto label_116758;
            case 0x11675Cu: goto label_11675c;
            case 0x116760u: goto label_116760;
            case 0x116764u: goto label_116764;
            case 0x116768u: goto label_116768;
            case 0x11676Cu: goto label_11676c;
            case 0x116770u: goto label_116770;
            case 0x116774u: goto label_116774;
            case 0x116778u: goto label_116778;
            case 0x11677Cu: goto label_11677c;
            case 0x116780u: goto label_116780;
            case 0x116784u: goto label_116784;
            case 0x116788u: goto label_116788;
            case 0x11678Cu: goto label_11678c;
            case 0x116790u: goto label_116790;
            case 0x116794u: goto label_116794;
            case 0x116798u: goto label_116798;
            case 0x11679Cu: goto label_11679c;
            case 0x1167A0u: goto label_1167a0;
            case 0x1167A4u: goto label_1167a4;
            case 0x1167A8u: goto label_1167a8;
            case 0x1167ACu: goto label_1167ac;
            case 0x1167B0u: goto label_1167b0;
            case 0x1167B4u: goto label_1167b4;
            case 0x1167B8u: goto label_1167b8;
            case 0x1167BCu: goto label_1167bc;
            case 0x1167C0u: goto label_1167c0;
            case 0x1167C4u: goto label_1167c4;
            case 0x1167C8u: goto label_1167c8;
            case 0x1167CCu: goto label_1167cc;
            case 0x1167D0u: goto label_1167d0;
            case 0x1167D4u: goto label_1167d4;
            case 0x1167D8u: goto label_1167d8;
            case 0x1167DCu: goto label_1167dc;
            case 0x1167E0u: goto label_1167e0;
            case 0x1167E4u: goto label_1167e4;
            case 0x1167E8u: goto label_1167e8;
            case 0x1167ECu: goto label_1167ec;
            case 0x1167F0u: goto label_1167f0;
            case 0x1167F4u: goto label_1167f4;
            case 0x1167F8u: goto label_1167f8;
            case 0x1167FCu: goto label_1167fc;
            case 0x116800u: goto label_116800;
            case 0x116804u: goto label_116804;
            case 0x116808u: goto label_116808;
            case 0x11680Cu: goto label_11680c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x116520u; }
            if (ctx->pc != 0x116520u) { return; }
        }
    }
    ctx->pc = 0x116520u;
label_116520:
    // 0x116520: 0x12200012
label_116524:
    if (ctx->pc == 0x116524u) {
        ctx->pc = 0x116524u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x116528u;
        goto label_116528;
    }
    ctx->pc = 0x116520u;
    {
        const bool branch_taken_0x116520 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x116524u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x116520) {
            ctx->pc = 0x11656Cu;
            goto label_11656c;
        }
    }
    ctx->pc = 0x116528u;
label_116528:
    // 0x116528: 0x220202d
    ctx->pc = 0x116528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11652c:
    // 0x11652c: 0x0
    ctx->pc = 0x11652cu;
    // NOP
label_116530:
    // 0x116530: 0xc04406c
label_116534:
    if (ctx->pc == 0x116534u) {
        ctx->pc = 0x116534u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x116538u;
        goto label_116538;
    }
    ctx->pc = 0x116530u;
    SET_GPR_U32(ctx, 31, 0x116538u);
    ctx->pc = 0x116534u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x1101B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001101B0_0x1101b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116538u; }
    }
    if (ctx->pc != 0x116538u) { return; }
    ctx->pc = 0x116538u;
label_116538:
    // 0x116538: 0x2610ffff
    ctx->pc = 0x116538u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
label_11653c:
    // 0x11653c: 0x64420030
    ctx->pc = 0x11653cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)48);
label_116540:
    // 0x116540: 0x220202d
    ctx->pc = 0x116540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_116544:
    // 0x116544: 0x304200ff
    ctx->pc = 0x116544u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
label_116548:
    // 0x116548: 0x2405000a
    ctx->pc = 0x116548u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
label_11654c:
    // 0x11654c: 0xc043ec6
label_116550:
    if (ctx->pc == 0x116550u) {
        ctx->pc = 0x116550u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x116554u;
        goto label_116554;
    }
    ctx->pc = 0x11654Cu;
    SET_GPR_U32(ctx, 31, 0x116554u);
    ctx->pc = 0x116550u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x10FB18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010FB18_0x10fb18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116554u; }
    }
    if (ctx->pc != 0x116554u) { return; }
    ctx->pc = 0x116554u;
label_116554:
    // 0x116554: 0x40882d
    ctx->pc = 0x116554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_116558:
    // 0x116558: 0x1620fff5
label_11655c:
    if (ctx->pc == 0x11655Cu) {
        ctx->pc = 0x11655Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x116560u;
        goto label_116560;
    }
    ctx->pc = 0x116558u;
    {
        const bool branch_taken_0x116558 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x11655Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x116558) {
            ctx->pc = 0x116530u;
            goto label_116530;
        }
    }
    ctx->pc = 0x116560u;
label_116560:
    // 0x116560: 0x10000002
label_116564:
    if (ctx->pc == 0x116564u) {
        ctx->pc = 0x116568u;
        goto label_116568;
    }
    ctx->pc = 0x116560u;
    {
        const bool branch_taken_0x116560 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x116560) {
            ctx->pc = 0x11656Cu;
            goto label_11656c;
        }
    }
    ctx->pc = 0x116568u;
label_116568:
    // 0x116568: 0x26520001
    ctx->pc = 0x116568u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_11656c:
    // 0x11656c: 0x12800002
label_116570:
    if (ctx->pc == 0x116570u) {
        ctx->pc = 0x116570u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->pc = 0x116574u;
        goto label_116574;
    }
    ctx->pc = 0x11656Cu;
    {
        const bool branch_taken_0x11656c = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x116570u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        if (branch_taken_0x11656c) {
            ctx->pc = 0x116578u;
            goto label_116578;
        }
    }
    ctx->pc = 0x116574u;
label_116574:
    // 0x116574: 0x282800b
    ctx->pc = 0x116574u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 20));
label_116578:
    // 0x116578: 0x82020000
    ctx->pc = 0x116578u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_11657c:
    // 0x11657c: 0x10400091
label_116580:
    if (ctx->pc == 0x116580u) {
        ctx->pc = 0x116580u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x116584u;
        goto label_116584;
    }
    ctx->pc = 0x11657Cu;
    {
        const bool branch_taken_0x11657c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x116580u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x11657c) {
            ctx->pc = 0x1167C4u;
            goto label_1167c4;
        }
    }
    ctx->pc = 0x116584u;
label_116584:
    // 0x116584: 0x3c150021
    ctx->pc = 0x116584u;
    SET_GPR_U32(ctx, 21, ((uint32_t)33 << 16));
label_116588:
    // 0x116588: 0x42600
    ctx->pc = 0x116588u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 24));
label_11658c:
    // 0x11658c: 0x8ea29d44
    ctx->pc = 0x11658cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294942020)));
label_116590:
    // 0x116590: 0x42603
    ctx->pc = 0x116590u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
label_116594:
    // 0x116594: 0x40f809
label_116598:
    if (ctx->pc == 0x116598u) {
        ctx->pc = 0x116598u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x11659Cu;
        goto label_11659c;
    }
    ctx->pc = 0x116594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11659Cu);
        ctx->pc = 0x116598u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116218u: goto label_116218;
            case 0x11621Cu: goto label_11621c;
            case 0x116220u: goto label_116220;
            case 0x116224u: goto label_116224;
            case 0x116228u: goto label_116228;
            case 0x11622Cu: goto label_11622c;
            case 0x116230u: goto label_116230;
            case 0x116234u: goto label_116234;
            case 0x116238u: goto label_116238;
            case 0x11623Cu: goto label_11623c;
            case 0x116240u: goto label_116240;
            case 0x116244u: goto label_116244;
            case 0x116248u: goto label_116248;
            case 0x11624Cu: goto label_11624c;
            case 0x116250u: goto label_116250;
            case 0x116254u: goto label_116254;
            case 0x116258u: goto label_116258;
            case 0x11625Cu: goto label_11625c;
            case 0x116260u: goto label_116260;
            case 0x116264u: goto label_116264;
            case 0x116268u: goto label_116268;
            case 0x11626Cu: goto label_11626c;
            case 0x116270u: goto label_116270;
            case 0x116274u: goto label_116274;
            case 0x116278u: goto label_116278;
            case 0x11627Cu: goto label_11627c;
            case 0x116280u: goto label_116280;
            case 0x116284u: goto label_116284;
            case 0x116288u: goto label_116288;
            case 0x11628Cu: goto label_11628c;
            case 0x116290u: goto label_116290;
            case 0x116294u: goto label_116294;
            case 0x116298u: goto label_116298;
            case 0x11629Cu: goto label_11629c;
            case 0x1162A0u: goto label_1162a0;
            case 0x1162A4u: goto label_1162a4;
            case 0x1162A8u: goto label_1162a8;
            case 0x1162ACu: goto label_1162ac;
            case 0x1162B0u: goto label_1162b0;
            case 0x1162B4u: goto label_1162b4;
            case 0x1162B8u: goto label_1162b8;
            case 0x1162BCu: goto label_1162bc;
            case 0x1162C0u: goto label_1162c0;
            case 0x1162C4u: goto label_1162c4;
            case 0x1162C8u: goto label_1162c8;
            case 0x1162CCu: goto label_1162cc;
            case 0x1162D0u: goto label_1162d0;
            case 0x1162D4u: goto label_1162d4;
            case 0x1162D8u: goto label_1162d8;
            case 0x1162DCu: goto label_1162dc;
            case 0x1162E0u: goto label_1162e0;
            case 0x1162E4u: goto label_1162e4;
            case 0x1162E8u: goto label_1162e8;
            case 0x1162ECu: goto label_1162ec;
            case 0x1162F0u: goto label_1162f0;
            case 0x1162F4u: goto label_1162f4;
            case 0x1162F8u: goto label_1162f8;
            case 0x1162FCu: goto label_1162fc;
            case 0x116300u: goto label_116300;
            case 0x116304u: goto label_116304;
            case 0x116308u: goto label_116308;
            case 0x11630Cu: goto label_11630c;
            case 0x116310u: goto label_116310;
            case 0x116314u: goto label_116314;
            case 0x116318u: goto label_116318;
            case 0x11631Cu: goto label_11631c;
            case 0x116320u: goto label_116320;
            case 0x116324u: goto label_116324;
            case 0x116328u: goto label_116328;
            case 0x11632Cu: goto label_11632c;
            case 0x116330u: goto label_116330;
            case 0x116334u: goto label_116334;
            case 0x116338u: goto label_116338;
            case 0x11633Cu: goto label_11633c;
            case 0x116340u: goto label_116340;
            case 0x116344u: goto label_116344;
            case 0x116348u: goto label_116348;
            case 0x11634Cu: goto label_11634c;
            case 0x116350u: goto label_116350;
            case 0x116354u: goto label_116354;
            case 0x116358u: goto label_116358;
            case 0x11635Cu: goto label_11635c;
            case 0x116360u: goto label_116360;
            case 0x116364u: goto label_116364;
            case 0x116368u: goto label_116368;
            case 0x11636Cu: goto label_11636c;
            case 0x116370u: goto label_116370;
            case 0x116374u: goto label_116374;
            case 0x116378u: goto label_116378;
            case 0x11637Cu: goto label_11637c;
            case 0x116380u: goto label_116380;
            case 0x116384u: goto label_116384;
            case 0x116388u: goto label_116388;
            case 0x11638Cu: goto label_11638c;
            case 0x116390u: goto label_116390;
            case 0x116394u: goto label_116394;
            case 0x116398u: goto label_116398;
            case 0x11639Cu: goto label_11639c;
            case 0x1163A0u: goto label_1163a0;
            case 0x1163A4u: goto label_1163a4;
            case 0x1163A8u: goto label_1163a8;
            case 0x1163ACu: goto label_1163ac;
            case 0x1163B0u: goto label_1163b0;
            case 0x1163B4u: goto label_1163b4;
            case 0x1163B8u: goto label_1163b8;
            case 0x1163BCu: goto label_1163bc;
            case 0x1163C0u: goto label_1163c0;
            case 0x1163C4u: goto label_1163c4;
            case 0x1163C8u: goto label_1163c8;
            case 0x1163CCu: goto label_1163cc;
            case 0x1163D0u: goto label_1163d0;
            case 0x1163D4u: goto label_1163d4;
            case 0x1163D8u: goto label_1163d8;
            case 0x1163DCu: goto label_1163dc;
            case 0x1163E0u: goto label_1163e0;
            case 0x1163E4u: goto label_1163e4;
            case 0x1163E8u: goto label_1163e8;
            case 0x1163ECu: goto label_1163ec;
            case 0x1163F0u: goto label_1163f0;
            case 0x1163F4u: goto label_1163f4;
            case 0x1163F8u: goto label_1163f8;
            case 0x1163FCu: goto label_1163fc;
            case 0x116400u: goto label_116400;
            case 0x116404u: goto label_116404;
            case 0x116408u: goto label_116408;
            case 0x11640Cu: goto label_11640c;
            case 0x116410u: goto label_116410;
            case 0x116414u: goto label_116414;
            case 0x116418u: goto label_116418;
            case 0x11641Cu: goto label_11641c;
            case 0x116420u: goto label_116420;
            case 0x116424u: goto label_116424;
            case 0x116428u: goto label_116428;
            case 0x11642Cu: goto label_11642c;
            case 0x116430u: goto label_116430;
            case 0x116434u: goto label_116434;
            case 0x116438u: goto label_116438;
            case 0x11643Cu: goto label_11643c;
            case 0x116440u: goto label_116440;
            case 0x116444u: goto label_116444;
            case 0x116448u: goto label_116448;
            case 0x11644Cu: goto label_11644c;
            case 0x116450u: goto label_116450;
            case 0x116454u: goto label_116454;
            case 0x116458u: goto label_116458;
            case 0x11645Cu: goto label_11645c;
            case 0x116460u: goto label_116460;
            case 0x116464u: goto label_116464;
            case 0x116468u: goto label_116468;
            case 0x11646Cu: goto label_11646c;
            case 0x116470u: goto label_116470;
            case 0x116474u: goto label_116474;
            case 0x116478u: goto label_116478;
            case 0x11647Cu: goto label_11647c;
            case 0x116480u: goto label_116480;
            case 0x116484u: goto label_116484;
            case 0x116488u: goto label_116488;
            case 0x11648Cu: goto label_11648c;
            case 0x116490u: goto label_116490;
            case 0x116494u: goto label_116494;
            case 0x116498u: goto label_116498;
            case 0x11649Cu: goto label_11649c;
            case 0x1164A0u: goto label_1164a0;
            case 0x1164A4u: goto label_1164a4;
            case 0x1164A8u: goto label_1164a8;
            case 0x1164ACu: goto label_1164ac;
            case 0x1164B0u: goto label_1164b0;
            case 0x1164B4u: goto label_1164b4;
            case 0x1164B8u: goto label_1164b8;
            case 0x1164BCu: goto label_1164bc;
            case 0x1164C0u: goto label_1164c0;
            case 0x1164C4u: goto label_1164c4;
            case 0x1164C8u: goto label_1164c8;
            case 0x1164CCu: goto label_1164cc;
            case 0x1164D0u: goto label_1164d0;
            case 0x1164D4u: goto label_1164d4;
            case 0x1164D8u: goto label_1164d8;
            case 0x1164DCu: goto label_1164dc;
            case 0x1164E0u: goto label_1164e0;
            case 0x1164E4u: goto label_1164e4;
            case 0x1164E8u: goto label_1164e8;
            case 0x1164ECu: goto label_1164ec;
            case 0x1164F0u: goto label_1164f0;
            case 0x1164F4u: goto label_1164f4;
            case 0x1164F8u: goto label_1164f8;
            case 0x1164FCu: goto label_1164fc;
            case 0x116500u: goto label_116500;
            case 0x116504u: goto label_116504;
            case 0x116508u: goto label_116508;
            case 0x11650Cu: goto label_11650c;
            case 0x116510u: goto label_116510;
            case 0x116514u: goto label_116514;
            case 0x116518u: goto label_116518;
            case 0x11651Cu: goto label_11651c;
            case 0x116520u: goto label_116520;
            case 0x116524u: goto label_116524;
            case 0x116528u: goto label_116528;
            case 0x11652Cu: goto label_11652c;
            case 0x116530u: goto label_116530;
            case 0x116534u: goto label_116534;
            case 0x116538u: goto label_116538;
            case 0x11653Cu: goto label_11653c;
            case 0x116540u: goto label_116540;
            case 0x116544u: goto label_116544;
            case 0x116548u: goto label_116548;
            case 0x11654Cu: goto label_11654c;
            case 0x116550u: goto label_116550;
            case 0x116554u: goto label_116554;
            case 0x116558u: goto label_116558;
            case 0x11655Cu: goto label_11655c;
            case 0x116560u: goto label_116560;
            case 0x116564u: goto label_116564;
            case 0x116568u: goto label_116568;
            case 0x11656Cu: goto label_11656c;
            case 0x116570u: goto label_116570;
            case 0x116574u: goto label_116574;
            case 0x116578u: goto label_116578;
            case 0x11657Cu: goto label_11657c;
            case 0x116580u: goto label_116580;
            case 0x116584u: goto label_116584;
            case 0x116588u: goto label_116588;
            case 0x11658Cu: goto label_11658c;
            case 0x116590u: goto label_116590;
            case 0x116594u: goto label_116594;
            case 0x116598u: goto label_116598;
            case 0x11659Cu: goto label_11659c;
            case 0x1165A0u: goto label_1165a0;
            case 0x1165A4u: goto label_1165a4;
            case 0x1165A8u: goto label_1165a8;
            case 0x1165ACu: goto label_1165ac;
            case 0x1165B0u: goto label_1165b0;
            case 0x1165B4u: goto label_1165b4;
            case 0x1165B8u: goto label_1165b8;
            case 0x1165BCu: goto label_1165bc;
            case 0x1165C0u: goto label_1165c0;
            case 0x1165C4u: goto label_1165c4;
            case 0x1165C8u: goto label_1165c8;
            case 0x1165CCu: goto label_1165cc;
            case 0x1165D0u: goto label_1165d0;
            case 0x1165D4u: goto label_1165d4;
            case 0x1165D8u: goto label_1165d8;
            case 0x1165DCu: goto label_1165dc;
            case 0x1165E0u: goto label_1165e0;
            case 0x1165E4u: goto label_1165e4;
            case 0x1165E8u: goto label_1165e8;
            case 0x1165ECu: goto label_1165ec;
            case 0x1165F0u: goto label_1165f0;
            case 0x1165F4u: goto label_1165f4;
            case 0x1165F8u: goto label_1165f8;
            case 0x1165FCu: goto label_1165fc;
            case 0x116600u: goto label_116600;
            case 0x116604u: goto label_116604;
            case 0x116608u: goto label_116608;
            case 0x11660Cu: goto label_11660c;
            case 0x116610u: goto label_116610;
            case 0x116614u: goto label_116614;
            case 0x116618u: goto label_116618;
            case 0x11661Cu: goto label_11661c;
            case 0x116620u: goto label_116620;
            case 0x116624u: goto label_116624;
            case 0x116628u: goto label_116628;
            case 0x11662Cu: goto label_11662c;
            case 0x116630u: goto label_116630;
            case 0x116634u: goto label_116634;
            case 0x116638u: goto label_116638;
            case 0x11663Cu: goto label_11663c;
            case 0x116640u: goto label_116640;
            case 0x116644u: goto label_116644;
            case 0x116648u: goto label_116648;
            case 0x11664Cu: goto label_11664c;
            case 0x116650u: goto label_116650;
            case 0x116654u: goto label_116654;
            case 0x116658u: goto label_116658;
            case 0x11665Cu: goto label_11665c;
            case 0x116660u: goto label_116660;
            case 0x116664u: goto label_116664;
            case 0x116668u: goto label_116668;
            case 0x11666Cu: goto label_11666c;
            case 0x116670u: goto label_116670;
            case 0x116674u: goto label_116674;
            case 0x116678u: goto label_116678;
            case 0x11667Cu: goto label_11667c;
            case 0x116680u: goto label_116680;
            case 0x116684u: goto label_116684;
            case 0x116688u: goto label_116688;
            case 0x11668Cu: goto label_11668c;
            case 0x116690u: goto label_116690;
            case 0x116694u: goto label_116694;
            case 0x116698u: goto label_116698;
            case 0x11669Cu: goto label_11669c;
            case 0x1166A0u: goto label_1166a0;
            case 0x1166A4u: goto label_1166a4;
            case 0x1166A8u: goto label_1166a8;
            case 0x1166ACu: goto label_1166ac;
            case 0x1166B0u: goto label_1166b0;
            case 0x1166B4u: goto label_1166b4;
            case 0x1166B8u: goto label_1166b8;
            case 0x1166BCu: goto label_1166bc;
            case 0x1166C0u: goto label_1166c0;
            case 0x1166C4u: goto label_1166c4;
            case 0x1166C8u: goto label_1166c8;
            case 0x1166CCu: goto label_1166cc;
            case 0x1166D0u: goto label_1166d0;
            case 0x1166D4u: goto label_1166d4;
            case 0x1166D8u: goto label_1166d8;
            case 0x1166DCu: goto label_1166dc;
            case 0x1166E0u: goto label_1166e0;
            case 0x1166E4u: goto label_1166e4;
            case 0x1166E8u: goto label_1166e8;
            case 0x1166ECu: goto label_1166ec;
            case 0x1166F0u: goto label_1166f0;
            case 0x1166F4u: goto label_1166f4;
            case 0x1166F8u: goto label_1166f8;
            case 0x1166FCu: goto label_1166fc;
            case 0x116700u: goto label_116700;
            case 0x116704u: goto label_116704;
            case 0x116708u: goto label_116708;
            case 0x11670Cu: goto label_11670c;
            case 0x116710u: goto label_116710;
            case 0x116714u: goto label_116714;
            case 0x116718u: goto label_116718;
            case 0x11671Cu: goto label_11671c;
            case 0x116720u: goto label_116720;
            case 0x116724u: goto label_116724;
            case 0x116728u: goto label_116728;
            case 0x11672Cu: goto label_11672c;
            case 0x116730u: goto label_116730;
            case 0x116734u: goto label_116734;
            case 0x116738u: goto label_116738;
            case 0x11673Cu: goto label_11673c;
            case 0x116740u: goto label_116740;
            case 0x116744u: goto label_116744;
            case 0x116748u: goto label_116748;
            case 0x11674Cu: goto label_11674c;
            case 0x116750u: goto label_116750;
            case 0x116754u: goto label_116754;
            case 0x116758u: goto label_116758;
            case 0x11675Cu: goto label_11675c;
            case 0x116760u: goto label_116760;
            case 0x116764u: goto label_116764;
            case 0x116768u: goto label_116768;
            case 0x11676Cu: goto label_11676c;
            case 0x116770u: goto label_116770;
            case 0x116774u: goto label_116774;
            case 0x116778u: goto label_116778;
            case 0x11677Cu: goto label_11677c;
            case 0x116780u: goto label_116780;
            case 0x116784u: goto label_116784;
            case 0x116788u: goto label_116788;
            case 0x11678Cu: goto label_11678c;
            case 0x116790u: goto label_116790;
            case 0x116794u: goto label_116794;
            case 0x116798u: goto label_116798;
            case 0x11679Cu: goto label_11679c;
            case 0x1167A0u: goto label_1167a0;
            case 0x1167A4u: goto label_1167a4;
            case 0x1167A8u: goto label_1167a8;
            case 0x1167ACu: goto label_1167ac;
            case 0x1167B0u: goto label_1167b0;
            case 0x1167B4u: goto label_1167b4;
            case 0x1167B8u: goto label_1167b8;
            case 0x1167BCu: goto label_1167bc;
            case 0x1167C0u: goto label_1167c0;
            case 0x1167C4u: goto label_1167c4;
            case 0x1167C8u: goto label_1167c8;
            case 0x1167CCu: goto label_1167cc;
            case 0x1167D0u: goto label_1167d0;
            case 0x1167D4u: goto label_1167d4;
            case 0x1167D8u: goto label_1167d8;
            case 0x1167DCu: goto label_1167dc;
            case 0x1167E0u: goto label_1167e0;
            case 0x1167E4u: goto label_1167e4;
            case 0x1167E8u: goto label_1167e8;
            case 0x1167ECu: goto label_1167ec;
            case 0x1167F0u: goto label_1167f0;
            case 0x1167F4u: goto label_1167f4;
            case 0x1167F8u: goto label_1167f8;
            case 0x1167FCu: goto label_1167fc;
            case 0x116800u: goto label_116800;
            case 0x116804u: goto label_116804;
            case 0x116808u: goto label_116808;
            case 0x11680Cu: goto label_11680c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11659Cu; }
            if (ctx->pc != 0x11659Cu) { return; }
        }
    }
    ctx->pc = 0x11659Cu;
label_11659c:
    // 0x11659c: 0x82020000
    ctx->pc = 0x11659cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1165a0:
    // 0x1165a0: 0x1440fff9
label_1165a4:
    if (ctx->pc == 0x1165A4u) {
        ctx->pc = 0x1165A4u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1165A8u;
        goto label_1165a8;
    }
    ctx->pc = 0x1165A0u;
    {
        const bool branch_taken_0x1165a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1165A4u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x1165a0) {
            ctx->pc = 0x116588u;
            goto label_116588;
        }
    }
    ctx->pc = 0x1165A8u;
label_1165a8:
    // 0x1165a8: 0x10000087
label_1165ac:
    if (ctx->pc == 0x1165ACu) {
        ctx->pc = 0x1165ACu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1165B0u;
        goto label_1165b0;
    }
    ctx->pc = 0x1165A8u;
    {
        const bool branch_taken_0x1165a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1165ACu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1165a8) {
            ctx->pc = 0x1167C8u;
            goto label_1167c8;
        }
    }
    ctx->pc = 0x1165B0u;
label_1165b0:
    // 0x1165b0: 0x2402006c
    ctx->pc = 0x1165b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 108));
label_1165b4:
    // 0x1165b4: 0x14e20004
label_1165b8:
    if (ctx->pc == 0x1165B8u) {
        ctx->pc = 0x1165B8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 104));
        ctx->pc = 0x1165BCu;
        goto label_1165bc;
    }
    ctx->pc = 0x1165B4u;
    {
        const bool branch_taken_0x1165b4 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        ctx->pc = 0x1165B8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 104));
        if (branch_taken_0x1165b4) {
            ctx->pc = 0x1165C8u;
            goto label_1165c8;
        }
    }
    ctx->pc = 0x1165BCu;
label_1165bc:
    // 0x1165bc: 0x26730008
    ctx->pc = 0x1165bcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 8));
label_1165c0:
    // 0x1165c0: 0x10000006
label_1165c4:
    if (ctx->pc == 0x1165C4u) {
        ctx->pc = 0x1165C4u;
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->pc = 0x1165C8u;
        goto label_1165c8;
    }
    ctx->pc = 0x1165C0u;
    {
        const bool branch_taken_0x1165c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1165C4u;
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        if (branch_taken_0x1165c0) {
            ctx->pc = 0x1165DCu;
            goto label_1165dc;
        }
    }
    ctx->pc = 0x1165C8u;
label_1165c8:
    // 0x1165c8: 0x14e20003
label_1165cc:
    if (ctx->pc == 0x1165CCu) {
        ctx->pc = 0x1165CCu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 8));
        ctx->pc = 0x1165D0u;
        goto label_1165d0;
    }
    ctx->pc = 0x1165C8u;
    {
        const bool branch_taken_0x1165c8 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        ctx->pc = 0x1165CCu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 8));
        if (branch_taken_0x1165c8) {
            ctx->pc = 0x1165D8u;
            goto label_1165d8;
        }
    }
    ctx->pc = 0x1165D0u;
label_1165d0:
    // 0x1165d0: 0x10000002
label_1165d4:
    if (ctx->pc == 0x1165D4u) {
        ctx->pc = 0x1165D4u;
        SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->pc = 0x1165D8u;
        goto label_1165d8;
    }
    ctx->pc = 0x1165D0u;
    {
        const bool branch_taken_0x1165d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1165D4u;
        SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        if (branch_taken_0x1165d0) {
            ctx->pc = 0x1165DCu;
            goto label_1165dc;
        }
    }
    ctx->pc = 0x1165D8u;
label_1165d8:
    // 0x1165d8: 0x9e71fff8
    ctx->pc = 0x1165d8u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_1165dc:
    // 0x1165dc: 0x27b0001f
    ctx->pc = 0x1165dcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 31));
label_1165e0:
    // 0x1165e0: 0x16200006
label_1165e4:
    if (ctx->pc == 0x1165E4u) {
        ctx->pc = 0x1165E4u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1165E8u;
        goto label_1165e8;
    }
    ctx->pc = 0x1165E0u;
    {
        const bool branch_taken_0x1165e0 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x1165E4u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1165e0) {
            ctx->pc = 0x1165FCu;
            goto label_1165fc;
        }
    }
    ctx->pc = 0x1165E8u;
label_1165e8:
    // 0x1165e8: 0x24020030
    ctx->pc = 0x1165e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
label_1165ec:
    // 0x1165ec: 0x27b0001e
    ctx->pc = 0x1165ecu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 30));
label_1165f0:
    // 0x1165f0: 0xa3a2001e
    ctx->pc = 0x1165f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 30), (uint8_t)GPR_U32(ctx, 2));
label_1165f4:
    // 0x1165f4: 0x10000010
label_1165f8:
    if (ctx->pc == 0x1165F8u) {
        ctx->pc = 0x1165F8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x1165FCu;
        goto label_1165fc;
    }
    ctx->pc = 0x1165F4u;
    {
        const bool branch_taken_0x1165f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1165F8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x1165f4) {
            ctx->pc = 0x116638u;
            goto label_116638;
        }
    }
    ctx->pc = 0x1165FCu;
label_1165fc:
    // 0x1165fc: 0x26520001
    ctx->pc = 0x1165fcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_116600:
    // 0x116600: 0x220202d
    ctx->pc = 0x116600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_116604:
    // 0x116604: 0x0
    ctx->pc = 0x116604u;
    // NOP
label_116608:
    // 0x116608: 0xc044370
label_11660c:
    if (ctx->pc == 0x11660Cu) {
        ctx->pc = 0x11660Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x116610u;
        goto label_116610;
    }
    ctx->pc = 0x116608u;
    SET_GPR_U32(ctx, 31, 0x116610u);
    ctx->pc = 0x11660Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x110DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00110DC0_0x110dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116610u; }
    }
    if (ctx->pc != 0x116610u) { return; }
    ctx->pc = 0x116610u;
label_116610:
    // 0x116610: 0x2610ffff
    ctx->pc = 0x116610u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
label_116614:
    // 0x116614: 0x64420030
    ctx->pc = 0x116614u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)48);
label_116618:
    // 0x116618: 0x220202d
    ctx->pc = 0x116618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11661c:
    // 0x11661c: 0x304200ff
    ctx->pc = 0x11661cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
label_116620:
    // 0x116620: 0x2405000a
    ctx->pc = 0x116620u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
label_116624:
    // 0x116624: 0xc044210
label_116628:
    if (ctx->pc == 0x116628u) {
        ctx->pc = 0x116628u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x11662Cu;
        goto label_11662c;
    }
    ctx->pc = 0x116624u;
    SET_GPR_U32(ctx, 31, 0x11662Cu);
    ctx->pc = 0x116628u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x110840u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00110840_0x110840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11662Cu; }
    }
    if (ctx->pc != 0x11662Cu) { return; }
    ctx->pc = 0x11662Cu;
label_11662c:
    // 0x11662c: 0x40882d
    ctx->pc = 0x11662cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_116630:
    // 0x116630: 0x1620fff5
label_116634:
    if (ctx->pc == 0x116634u) {
        ctx->pc = 0x116634u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x116638u;
        goto label_116638;
    }
    ctx->pc = 0x116630u;
    {
        const bool branch_taken_0x116630 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x116634u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x116630) {
            ctx->pc = 0x116608u;
            goto label_116608;
        }
    }
    ctx->pc = 0x116638u;
label_116638:
    // 0x116638: 0x12800002
label_11663c:
    if (ctx->pc == 0x11663Cu) {
        ctx->pc = 0x11663Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->pc = 0x116640u;
        goto label_116640;
    }
    ctx->pc = 0x116638u;
    {
        const bool branch_taken_0x116638 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x11663Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        if (branch_taken_0x116638) {
            ctx->pc = 0x116644u;
            goto label_116644;
        }
    }
    ctx->pc = 0x116640u;
label_116640:
    // 0x116640: 0x282800b
    ctx->pc = 0x116640u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 20));
label_116644:
    // 0x116644: 0x82020000
    ctx->pc = 0x116644u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_116648:
    // 0x116648: 0x1040005e
label_11664c:
    if (ctx->pc == 0x11664Cu) {
        ctx->pc = 0x11664Cu;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x116650u;
        goto label_116650;
    }
    ctx->pc = 0x116648u;
    {
        const bool branch_taken_0x116648 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11664Cu;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x116648) {
            ctx->pc = 0x1167C4u;
            goto label_1167c4;
        }
    }
    ctx->pc = 0x116650u;
label_116650:
    // 0x116650: 0x3c150021
    ctx->pc = 0x116650u;
    SET_GPR_U32(ctx, 21, ((uint32_t)33 << 16));
label_116654:
    // 0x116654: 0x0
    ctx->pc = 0x116654u;
    // NOP
label_116658:
    // 0x116658: 0x42600
    ctx->pc = 0x116658u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 24));
label_11665c:
    // 0x11665c: 0x8ea29d44
    ctx->pc = 0x11665cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294942020)));
label_116660:
    // 0x116660: 0x42603
    ctx->pc = 0x116660u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
label_116664:
    // 0x116664: 0x40f809
label_116668:
    if (ctx->pc == 0x116668u) {
        ctx->pc = 0x116668u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x11666Cu;
        goto label_11666c;
    }
    ctx->pc = 0x116664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11666Cu);
        ctx->pc = 0x116668u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116218u: goto label_116218;
            case 0x11621Cu: goto label_11621c;
            case 0x116220u: goto label_116220;
            case 0x116224u: goto label_116224;
            case 0x116228u: goto label_116228;
            case 0x11622Cu: goto label_11622c;
            case 0x116230u: goto label_116230;
            case 0x116234u: goto label_116234;
            case 0x116238u: goto label_116238;
            case 0x11623Cu: goto label_11623c;
            case 0x116240u: goto label_116240;
            case 0x116244u: goto label_116244;
            case 0x116248u: goto label_116248;
            case 0x11624Cu: goto label_11624c;
            case 0x116250u: goto label_116250;
            case 0x116254u: goto label_116254;
            case 0x116258u: goto label_116258;
            case 0x11625Cu: goto label_11625c;
            case 0x116260u: goto label_116260;
            case 0x116264u: goto label_116264;
            case 0x116268u: goto label_116268;
            case 0x11626Cu: goto label_11626c;
            case 0x116270u: goto label_116270;
            case 0x116274u: goto label_116274;
            case 0x116278u: goto label_116278;
            case 0x11627Cu: goto label_11627c;
            case 0x116280u: goto label_116280;
            case 0x116284u: goto label_116284;
            case 0x116288u: goto label_116288;
            case 0x11628Cu: goto label_11628c;
            case 0x116290u: goto label_116290;
            case 0x116294u: goto label_116294;
            case 0x116298u: goto label_116298;
            case 0x11629Cu: goto label_11629c;
            case 0x1162A0u: goto label_1162a0;
            case 0x1162A4u: goto label_1162a4;
            case 0x1162A8u: goto label_1162a8;
            case 0x1162ACu: goto label_1162ac;
            case 0x1162B0u: goto label_1162b0;
            case 0x1162B4u: goto label_1162b4;
            case 0x1162B8u: goto label_1162b8;
            case 0x1162BCu: goto label_1162bc;
            case 0x1162C0u: goto label_1162c0;
            case 0x1162C4u: goto label_1162c4;
            case 0x1162C8u: goto label_1162c8;
            case 0x1162CCu: goto label_1162cc;
            case 0x1162D0u: goto label_1162d0;
            case 0x1162D4u: goto label_1162d4;
            case 0x1162D8u: goto label_1162d8;
            case 0x1162DCu: goto label_1162dc;
            case 0x1162E0u: goto label_1162e0;
            case 0x1162E4u: goto label_1162e4;
            case 0x1162E8u: goto label_1162e8;
            case 0x1162ECu: goto label_1162ec;
            case 0x1162F0u: goto label_1162f0;
            case 0x1162F4u: goto label_1162f4;
            case 0x1162F8u: goto label_1162f8;
            case 0x1162FCu: goto label_1162fc;
            case 0x116300u: goto label_116300;
            case 0x116304u: goto label_116304;
            case 0x116308u: goto label_116308;
            case 0x11630Cu: goto label_11630c;
            case 0x116310u: goto label_116310;
            case 0x116314u: goto label_116314;
            case 0x116318u: goto label_116318;
            case 0x11631Cu: goto label_11631c;
            case 0x116320u: goto label_116320;
            case 0x116324u: goto label_116324;
            case 0x116328u: goto label_116328;
            case 0x11632Cu: goto label_11632c;
            case 0x116330u: goto label_116330;
            case 0x116334u: goto label_116334;
            case 0x116338u: goto label_116338;
            case 0x11633Cu: goto label_11633c;
            case 0x116340u: goto label_116340;
            case 0x116344u: goto label_116344;
            case 0x116348u: goto label_116348;
            case 0x11634Cu: goto label_11634c;
            case 0x116350u: goto label_116350;
            case 0x116354u: goto label_116354;
            case 0x116358u: goto label_116358;
            case 0x11635Cu: goto label_11635c;
            case 0x116360u: goto label_116360;
            case 0x116364u: goto label_116364;
            case 0x116368u: goto label_116368;
            case 0x11636Cu: goto label_11636c;
            case 0x116370u: goto label_116370;
            case 0x116374u: goto label_116374;
            case 0x116378u: goto label_116378;
            case 0x11637Cu: goto label_11637c;
            case 0x116380u: goto label_116380;
            case 0x116384u: goto label_116384;
            case 0x116388u: goto label_116388;
            case 0x11638Cu: goto label_11638c;
            case 0x116390u: goto label_116390;
            case 0x116394u: goto label_116394;
            case 0x116398u: goto label_116398;
            case 0x11639Cu: goto label_11639c;
            case 0x1163A0u: goto label_1163a0;
            case 0x1163A4u: goto label_1163a4;
            case 0x1163A8u: goto label_1163a8;
            case 0x1163ACu: goto label_1163ac;
            case 0x1163B0u: goto label_1163b0;
            case 0x1163B4u: goto label_1163b4;
            case 0x1163B8u: goto label_1163b8;
            case 0x1163BCu: goto label_1163bc;
            case 0x1163C0u: goto label_1163c0;
            case 0x1163C4u: goto label_1163c4;
            case 0x1163C8u: goto label_1163c8;
            case 0x1163CCu: goto label_1163cc;
            case 0x1163D0u: goto label_1163d0;
            case 0x1163D4u: goto label_1163d4;
            case 0x1163D8u: goto label_1163d8;
            case 0x1163DCu: goto label_1163dc;
            case 0x1163E0u: goto label_1163e0;
            case 0x1163E4u: goto label_1163e4;
            case 0x1163E8u: goto label_1163e8;
            case 0x1163ECu: goto label_1163ec;
            case 0x1163F0u: goto label_1163f0;
            case 0x1163F4u: goto label_1163f4;
            case 0x1163F8u: goto label_1163f8;
            case 0x1163FCu: goto label_1163fc;
            case 0x116400u: goto label_116400;
            case 0x116404u: goto label_116404;
            case 0x116408u: goto label_116408;
            case 0x11640Cu: goto label_11640c;
            case 0x116410u: goto label_116410;
            case 0x116414u: goto label_116414;
            case 0x116418u: goto label_116418;
            case 0x11641Cu: goto label_11641c;
            case 0x116420u: goto label_116420;
            case 0x116424u: goto label_116424;
            case 0x116428u: goto label_116428;
            case 0x11642Cu: goto label_11642c;
            case 0x116430u: goto label_116430;
            case 0x116434u: goto label_116434;
            case 0x116438u: goto label_116438;
            case 0x11643Cu: goto label_11643c;
            case 0x116440u: goto label_116440;
            case 0x116444u: goto label_116444;
            case 0x116448u: goto label_116448;
            case 0x11644Cu: goto label_11644c;
            case 0x116450u: goto label_116450;
            case 0x116454u: goto label_116454;
            case 0x116458u: goto label_116458;
            case 0x11645Cu: goto label_11645c;
            case 0x116460u: goto label_116460;
            case 0x116464u: goto label_116464;
            case 0x116468u: goto label_116468;
            case 0x11646Cu: goto label_11646c;
            case 0x116470u: goto label_116470;
            case 0x116474u: goto label_116474;
            case 0x116478u: goto label_116478;
            case 0x11647Cu: goto label_11647c;
            case 0x116480u: goto label_116480;
            case 0x116484u: goto label_116484;
            case 0x116488u: goto label_116488;
            case 0x11648Cu: goto label_11648c;
            case 0x116490u: goto label_116490;
            case 0x116494u: goto label_116494;
            case 0x116498u: goto label_116498;
            case 0x11649Cu: goto label_11649c;
            case 0x1164A0u: goto label_1164a0;
            case 0x1164A4u: goto label_1164a4;
            case 0x1164A8u: goto label_1164a8;
            case 0x1164ACu: goto label_1164ac;
            case 0x1164B0u: goto label_1164b0;
            case 0x1164B4u: goto label_1164b4;
            case 0x1164B8u: goto label_1164b8;
            case 0x1164BCu: goto label_1164bc;
            case 0x1164C0u: goto label_1164c0;
            case 0x1164C4u: goto label_1164c4;
            case 0x1164C8u: goto label_1164c8;
            case 0x1164CCu: goto label_1164cc;
            case 0x1164D0u: goto label_1164d0;
            case 0x1164D4u: goto label_1164d4;
            case 0x1164D8u: goto label_1164d8;
            case 0x1164DCu: goto label_1164dc;
            case 0x1164E0u: goto label_1164e0;
            case 0x1164E4u: goto label_1164e4;
            case 0x1164E8u: goto label_1164e8;
            case 0x1164ECu: goto label_1164ec;
            case 0x1164F0u: goto label_1164f0;
            case 0x1164F4u: goto label_1164f4;
            case 0x1164F8u: goto label_1164f8;
            case 0x1164FCu: goto label_1164fc;
            case 0x116500u: goto label_116500;
            case 0x116504u: goto label_116504;
            case 0x116508u: goto label_116508;
            case 0x11650Cu: goto label_11650c;
            case 0x116510u: goto label_116510;
            case 0x116514u: goto label_116514;
            case 0x116518u: goto label_116518;
            case 0x11651Cu: goto label_11651c;
            case 0x116520u: goto label_116520;
            case 0x116524u: goto label_116524;
            case 0x116528u: goto label_116528;
            case 0x11652Cu: goto label_11652c;
            case 0x116530u: goto label_116530;
            case 0x116534u: goto label_116534;
            case 0x116538u: goto label_116538;
            case 0x11653Cu: goto label_11653c;
            case 0x116540u: goto label_116540;
            case 0x116544u: goto label_116544;
            case 0x116548u: goto label_116548;
            case 0x11654Cu: goto label_11654c;
            case 0x116550u: goto label_116550;
            case 0x116554u: goto label_116554;
            case 0x116558u: goto label_116558;
            case 0x11655Cu: goto label_11655c;
            case 0x116560u: goto label_116560;
            case 0x116564u: goto label_116564;
            case 0x116568u: goto label_116568;
            case 0x11656Cu: goto label_11656c;
            case 0x116570u: goto label_116570;
            case 0x116574u: goto label_116574;
            case 0x116578u: goto label_116578;
            case 0x11657Cu: goto label_11657c;
            case 0x116580u: goto label_116580;
            case 0x116584u: goto label_116584;
            case 0x116588u: goto label_116588;
            case 0x11658Cu: goto label_11658c;
            case 0x116590u: goto label_116590;
            case 0x116594u: goto label_116594;
            case 0x116598u: goto label_116598;
            case 0x11659Cu: goto label_11659c;
            case 0x1165A0u: goto label_1165a0;
            case 0x1165A4u: goto label_1165a4;
            case 0x1165A8u: goto label_1165a8;
            case 0x1165ACu: goto label_1165ac;
            case 0x1165B0u: goto label_1165b0;
            case 0x1165B4u: goto label_1165b4;
            case 0x1165B8u: goto label_1165b8;
            case 0x1165BCu: goto label_1165bc;
            case 0x1165C0u: goto label_1165c0;
            case 0x1165C4u: goto label_1165c4;
            case 0x1165C8u: goto label_1165c8;
            case 0x1165CCu: goto label_1165cc;
            case 0x1165D0u: goto label_1165d0;
            case 0x1165D4u: goto label_1165d4;
            case 0x1165D8u: goto label_1165d8;
            case 0x1165DCu: goto label_1165dc;
            case 0x1165E0u: goto label_1165e0;
            case 0x1165E4u: goto label_1165e4;
            case 0x1165E8u: goto label_1165e8;
            case 0x1165ECu: goto label_1165ec;
            case 0x1165F0u: goto label_1165f0;
            case 0x1165F4u: goto label_1165f4;
            case 0x1165F8u: goto label_1165f8;
            case 0x1165FCu: goto label_1165fc;
            case 0x116600u: goto label_116600;
            case 0x116604u: goto label_116604;
            case 0x116608u: goto label_116608;
            case 0x11660Cu: goto label_11660c;
            case 0x116610u: goto label_116610;
            case 0x116614u: goto label_116614;
            case 0x116618u: goto label_116618;
            case 0x11661Cu: goto label_11661c;
            case 0x116620u: goto label_116620;
            case 0x116624u: goto label_116624;
            case 0x116628u: goto label_116628;
            case 0x11662Cu: goto label_11662c;
            case 0x116630u: goto label_116630;
            case 0x116634u: goto label_116634;
            case 0x116638u: goto label_116638;
            case 0x11663Cu: goto label_11663c;
            case 0x116640u: goto label_116640;
            case 0x116644u: goto label_116644;
            case 0x116648u: goto label_116648;
            case 0x11664Cu: goto label_11664c;
            case 0x116650u: goto label_116650;
            case 0x116654u: goto label_116654;
            case 0x116658u: goto label_116658;
            case 0x11665Cu: goto label_11665c;
            case 0x116660u: goto label_116660;
            case 0x116664u: goto label_116664;
            case 0x116668u: goto label_116668;
            case 0x11666Cu: goto label_11666c;
            case 0x116670u: goto label_116670;
            case 0x116674u: goto label_116674;
            case 0x116678u: goto label_116678;
            case 0x11667Cu: goto label_11667c;
            case 0x116680u: goto label_116680;
            case 0x116684u: goto label_116684;
            case 0x116688u: goto label_116688;
            case 0x11668Cu: goto label_11668c;
            case 0x116690u: goto label_116690;
            case 0x116694u: goto label_116694;
            case 0x116698u: goto label_116698;
            case 0x11669Cu: goto label_11669c;
            case 0x1166A0u: goto label_1166a0;
            case 0x1166A4u: goto label_1166a4;
            case 0x1166A8u: goto label_1166a8;
            case 0x1166ACu: goto label_1166ac;
            case 0x1166B0u: goto label_1166b0;
            case 0x1166B4u: goto label_1166b4;
            case 0x1166B8u: goto label_1166b8;
            case 0x1166BCu: goto label_1166bc;
            case 0x1166C0u: goto label_1166c0;
            case 0x1166C4u: goto label_1166c4;
            case 0x1166C8u: goto label_1166c8;
            case 0x1166CCu: goto label_1166cc;
            case 0x1166D0u: goto label_1166d0;
            case 0x1166D4u: goto label_1166d4;
            case 0x1166D8u: goto label_1166d8;
            case 0x1166DCu: goto label_1166dc;
            case 0x1166E0u: goto label_1166e0;
            case 0x1166E4u: goto label_1166e4;
            case 0x1166E8u: goto label_1166e8;
            case 0x1166ECu: goto label_1166ec;
            case 0x1166F0u: goto label_1166f0;
            case 0x1166F4u: goto label_1166f4;
            case 0x1166F8u: goto label_1166f8;
            case 0x1166FCu: goto label_1166fc;
            case 0x116700u: goto label_116700;
            case 0x116704u: goto label_116704;
            case 0x116708u: goto label_116708;
            case 0x11670Cu: goto label_11670c;
            case 0x116710u: goto label_116710;
            case 0x116714u: goto label_116714;
            case 0x116718u: goto label_116718;
            case 0x11671Cu: goto label_11671c;
            case 0x116720u: goto label_116720;
            case 0x116724u: goto label_116724;
            case 0x116728u: goto label_116728;
            case 0x11672Cu: goto label_11672c;
            case 0x116730u: goto label_116730;
            case 0x116734u: goto label_116734;
            case 0x116738u: goto label_116738;
            case 0x11673Cu: goto label_11673c;
            case 0x116740u: goto label_116740;
            case 0x116744u: goto label_116744;
            case 0x116748u: goto label_116748;
            case 0x11674Cu: goto label_11674c;
            case 0x116750u: goto label_116750;
            case 0x116754u: goto label_116754;
            case 0x116758u: goto label_116758;
            case 0x11675Cu: goto label_11675c;
            case 0x116760u: goto label_116760;
            case 0x116764u: goto label_116764;
            case 0x116768u: goto label_116768;
            case 0x11676Cu: goto label_11676c;
            case 0x116770u: goto label_116770;
            case 0x116774u: goto label_116774;
            case 0x116778u: goto label_116778;
            case 0x11677Cu: goto label_11677c;
            case 0x116780u: goto label_116780;
            case 0x116784u: goto label_116784;
            case 0x116788u: goto label_116788;
            case 0x11678Cu: goto label_11678c;
            case 0x116790u: goto label_116790;
            case 0x116794u: goto label_116794;
            case 0x116798u: goto label_116798;
            case 0x11679Cu: goto label_11679c;
            case 0x1167A0u: goto label_1167a0;
            case 0x1167A4u: goto label_1167a4;
            case 0x1167A8u: goto label_1167a8;
            case 0x1167ACu: goto label_1167ac;
            case 0x1167B0u: goto label_1167b0;
            case 0x1167B4u: goto label_1167b4;
            case 0x1167B8u: goto label_1167b8;
            case 0x1167BCu: goto label_1167bc;
            case 0x1167C0u: goto label_1167c0;
            case 0x1167C4u: goto label_1167c4;
            case 0x1167C8u: goto label_1167c8;
            case 0x1167CCu: goto label_1167cc;
            case 0x1167D0u: goto label_1167d0;
            case 0x1167D4u: goto label_1167d4;
            case 0x1167D8u: goto label_1167d8;
            case 0x1167DCu: goto label_1167dc;
            case 0x1167E0u: goto label_1167e0;
            case 0x1167E4u: goto label_1167e4;
            case 0x1167E8u: goto label_1167e8;
            case 0x1167ECu: goto label_1167ec;
            case 0x1167F0u: goto label_1167f0;
            case 0x1167F4u: goto label_1167f4;
            case 0x1167F8u: goto label_1167f8;
            case 0x1167FCu: goto label_1167fc;
            case 0x116800u: goto label_116800;
            case 0x116804u: goto label_116804;
            case 0x116808u: goto label_116808;
            case 0x11680Cu: goto label_11680c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11666Cu; }
            if (ctx->pc != 0x11666Cu) { return; }
        }
    }
    ctx->pc = 0x11666Cu;
label_11666c:
    // 0x11666c: 0x82020000
    ctx->pc = 0x11666cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_116670:
    // 0x116670: 0x1440fff9
label_116674:
    if (ctx->pc == 0x116674u) {
        ctx->pc = 0x116674u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x116678u;
        goto label_116678;
    }
    ctx->pc = 0x116670u;
    {
        const bool branch_taken_0x116670 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x116674u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x116670) {
            ctx->pc = 0x116658u;
            goto label_116658;
        }
    }
    ctx->pc = 0x116678u;
label_116678:
    // 0x116678: 0x10000053
label_11667c:
    if (ctx->pc == 0x11667Cu) {
        ctx->pc = 0x11667Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x116680u;
        goto label_116680;
    }
    ctx->pc = 0x116678u;
    {
        const bool branch_taken_0x116678 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11667Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x116678) {
            ctx->pc = 0x1167C8u;
            goto label_1167c8;
        }
    }
    ctx->pc = 0x116680u;
label_116680:
    // 0x116680: 0x26730008
    ctx->pc = 0x116680u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 8));
label_116684:
    // 0x116684: 0xc04491c
label_116688:
    if (ctx->pc == 0x116688u) {
        ctx->pc = 0x116688u;
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->pc = 0x11668Cu;
        goto label_11668c;
    }
    ctx->pc = 0x116684u;
    SET_GPR_U32(ctx, 31, 0x11668Cu);
    ctx->pc = 0x116688u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
    ctx->pc = 0x112470u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112470_0x112470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11668Cu; }
    }
    if (ctx->pc != 0x11668Cu) { return; }
    ctx->pc = 0x11668Cu;
label_11668c:
    // 0x11668c: 0x46000306
    ctx->pc = 0x11668cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_116690:
    // 0x116690: 0x44800000
    ctx->pc = 0x116690u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_116694:
    // 0x116694: 0x46006032
    ctx->pc = 0x116694u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_116698:
    // 0x116698: 0x0
    ctx->pc = 0x116698u;
    // NOP
label_11669c:
    // 0x11669c: 0x45000007
label_1166a0:
    if (ctx->pc == 0x1166A0u) {
        ctx->pc = 0x1166A0u;
        SET_GPR_U32(ctx, 21, ((uint32_t)33 << 16));
        ctx->pc = 0x1166A4u;
        goto label_1166a4;
    }
    ctx->pc = 0x11669Cu;
    {
        const bool branch_taken_0x11669c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1166A0u;
        SET_GPR_U32(ctx, 21, ((uint32_t)33 << 16));
        if (branch_taken_0x11669c) {
            ctx->pc = 0x1166BCu;
            goto label_1166bc;
        }
    }
    ctx->pc = 0x1166A4u;
label_1166a4:
    // 0x1166a4: 0x24040030
    ctx->pc = 0x1166a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 48));
label_1166a8:
    // 0x1166a8: 0x8ea29d44
    ctx->pc = 0x1166a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294942020)));
label_1166ac:
    // 0x1166ac: 0x40f809
label_1166b0:
    if (ctx->pc == 0x1166B0u) {
        ctx->pc = 0x1166B0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x1166B4u;
        goto label_1166b4;
    }
    ctx->pc = 0x1166ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1166B4u);
        ctx->pc = 0x1166B0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116218u: goto label_116218;
            case 0x11621Cu: goto label_11621c;
            case 0x116220u: goto label_116220;
            case 0x116224u: goto label_116224;
            case 0x116228u: goto label_116228;
            case 0x11622Cu: goto label_11622c;
            case 0x116230u: goto label_116230;
            case 0x116234u: goto label_116234;
            case 0x116238u: goto label_116238;
            case 0x11623Cu: goto label_11623c;
            case 0x116240u: goto label_116240;
            case 0x116244u: goto label_116244;
            case 0x116248u: goto label_116248;
            case 0x11624Cu: goto label_11624c;
            case 0x116250u: goto label_116250;
            case 0x116254u: goto label_116254;
            case 0x116258u: goto label_116258;
            case 0x11625Cu: goto label_11625c;
            case 0x116260u: goto label_116260;
            case 0x116264u: goto label_116264;
            case 0x116268u: goto label_116268;
            case 0x11626Cu: goto label_11626c;
            case 0x116270u: goto label_116270;
            case 0x116274u: goto label_116274;
            case 0x116278u: goto label_116278;
            case 0x11627Cu: goto label_11627c;
            case 0x116280u: goto label_116280;
            case 0x116284u: goto label_116284;
            case 0x116288u: goto label_116288;
            case 0x11628Cu: goto label_11628c;
            case 0x116290u: goto label_116290;
            case 0x116294u: goto label_116294;
            case 0x116298u: goto label_116298;
            case 0x11629Cu: goto label_11629c;
            case 0x1162A0u: goto label_1162a0;
            case 0x1162A4u: goto label_1162a4;
            case 0x1162A8u: goto label_1162a8;
            case 0x1162ACu: goto label_1162ac;
            case 0x1162B0u: goto label_1162b0;
            case 0x1162B4u: goto label_1162b4;
            case 0x1162B8u: goto label_1162b8;
            case 0x1162BCu: goto label_1162bc;
            case 0x1162C0u: goto label_1162c0;
            case 0x1162C4u: goto label_1162c4;
            case 0x1162C8u: goto label_1162c8;
            case 0x1162CCu: goto label_1162cc;
            case 0x1162D0u: goto label_1162d0;
            case 0x1162D4u: goto label_1162d4;
            case 0x1162D8u: goto label_1162d8;
            case 0x1162DCu: goto label_1162dc;
            case 0x1162E0u: goto label_1162e0;
            case 0x1162E4u: goto label_1162e4;
            case 0x1162E8u: goto label_1162e8;
            case 0x1162ECu: goto label_1162ec;
            case 0x1162F0u: goto label_1162f0;
            case 0x1162F4u: goto label_1162f4;
            case 0x1162F8u: goto label_1162f8;
            case 0x1162FCu: goto label_1162fc;
            case 0x116300u: goto label_116300;
            case 0x116304u: goto label_116304;
            case 0x116308u: goto label_116308;
            case 0x11630Cu: goto label_11630c;
            case 0x116310u: goto label_116310;
            case 0x116314u: goto label_116314;
            case 0x116318u: goto label_116318;
            case 0x11631Cu: goto label_11631c;
            case 0x116320u: goto label_116320;
            case 0x116324u: goto label_116324;
            case 0x116328u: goto label_116328;
            case 0x11632Cu: goto label_11632c;
            case 0x116330u: goto label_116330;
            case 0x116334u: goto label_116334;
            case 0x116338u: goto label_116338;
            case 0x11633Cu: goto label_11633c;
            case 0x116340u: goto label_116340;
            case 0x116344u: goto label_116344;
            case 0x116348u: goto label_116348;
            case 0x11634Cu: goto label_11634c;
            case 0x116350u: goto label_116350;
            case 0x116354u: goto label_116354;
            case 0x116358u: goto label_116358;
            case 0x11635Cu: goto label_11635c;
            case 0x116360u: goto label_116360;
            case 0x116364u: goto label_116364;
            case 0x116368u: goto label_116368;
            case 0x11636Cu: goto label_11636c;
            case 0x116370u: goto label_116370;
            case 0x116374u: goto label_116374;
            case 0x116378u: goto label_116378;
            case 0x11637Cu: goto label_11637c;
            case 0x116380u: goto label_116380;
            case 0x116384u: goto label_116384;
            case 0x116388u: goto label_116388;
            case 0x11638Cu: goto label_11638c;
            case 0x116390u: goto label_116390;
            case 0x116394u: goto label_116394;
            case 0x116398u: goto label_116398;
            case 0x11639Cu: goto label_11639c;
            case 0x1163A0u: goto label_1163a0;
            case 0x1163A4u: goto label_1163a4;
            case 0x1163A8u: goto label_1163a8;
            case 0x1163ACu: goto label_1163ac;
            case 0x1163B0u: goto label_1163b0;
            case 0x1163B4u: goto label_1163b4;
            case 0x1163B8u: goto label_1163b8;
            case 0x1163BCu: goto label_1163bc;
            case 0x1163C0u: goto label_1163c0;
            case 0x1163C4u: goto label_1163c4;
            case 0x1163C8u: goto label_1163c8;
            case 0x1163CCu: goto label_1163cc;
            case 0x1163D0u: goto label_1163d0;
            case 0x1163D4u: goto label_1163d4;
            case 0x1163D8u: goto label_1163d8;
            case 0x1163DCu: goto label_1163dc;
            case 0x1163E0u: goto label_1163e0;
            case 0x1163E4u: goto label_1163e4;
            case 0x1163E8u: goto label_1163e8;
            case 0x1163ECu: goto label_1163ec;
            case 0x1163F0u: goto label_1163f0;
            case 0x1163F4u: goto label_1163f4;
            case 0x1163F8u: goto label_1163f8;
            case 0x1163FCu: goto label_1163fc;
            case 0x116400u: goto label_116400;
            case 0x116404u: goto label_116404;
            case 0x116408u: goto label_116408;
            case 0x11640Cu: goto label_11640c;
            case 0x116410u: goto label_116410;
            case 0x116414u: goto label_116414;
            case 0x116418u: goto label_116418;
            case 0x11641Cu: goto label_11641c;
            case 0x116420u: goto label_116420;
            case 0x116424u: goto label_116424;
            case 0x116428u: goto label_116428;
            case 0x11642Cu: goto label_11642c;
            case 0x116430u: goto label_116430;
            case 0x116434u: goto label_116434;
            case 0x116438u: goto label_116438;
            case 0x11643Cu: goto label_11643c;
            case 0x116440u: goto label_116440;
            case 0x116444u: goto label_116444;
            case 0x116448u: goto label_116448;
            case 0x11644Cu: goto label_11644c;
            case 0x116450u: goto label_116450;
            case 0x116454u: goto label_116454;
            case 0x116458u: goto label_116458;
            case 0x11645Cu: goto label_11645c;
            case 0x116460u: goto label_116460;
            case 0x116464u: goto label_116464;
            case 0x116468u: goto label_116468;
            case 0x11646Cu: goto label_11646c;
            case 0x116470u: goto label_116470;
            case 0x116474u: goto label_116474;
            case 0x116478u: goto label_116478;
            case 0x11647Cu: goto label_11647c;
            case 0x116480u: goto label_116480;
            case 0x116484u: goto label_116484;
            case 0x116488u: goto label_116488;
            case 0x11648Cu: goto label_11648c;
            case 0x116490u: goto label_116490;
            case 0x116494u: goto label_116494;
            case 0x116498u: goto label_116498;
            case 0x11649Cu: goto label_11649c;
            case 0x1164A0u: goto label_1164a0;
            case 0x1164A4u: goto label_1164a4;
            case 0x1164A8u: goto label_1164a8;
            case 0x1164ACu: goto label_1164ac;
            case 0x1164B0u: goto label_1164b0;
            case 0x1164B4u: goto label_1164b4;
            case 0x1164B8u: goto label_1164b8;
            case 0x1164BCu: goto label_1164bc;
            case 0x1164C0u: goto label_1164c0;
            case 0x1164C4u: goto label_1164c4;
            case 0x1164C8u: goto label_1164c8;
            case 0x1164CCu: goto label_1164cc;
            case 0x1164D0u: goto label_1164d0;
            case 0x1164D4u: goto label_1164d4;
            case 0x1164D8u: goto label_1164d8;
            case 0x1164DCu: goto label_1164dc;
            case 0x1164E0u: goto label_1164e0;
            case 0x1164E4u: goto label_1164e4;
            case 0x1164E8u: goto label_1164e8;
            case 0x1164ECu: goto label_1164ec;
            case 0x1164F0u: goto label_1164f0;
            case 0x1164F4u: goto label_1164f4;
            case 0x1164F8u: goto label_1164f8;
            case 0x1164FCu: goto label_1164fc;
            case 0x116500u: goto label_116500;
            case 0x116504u: goto label_116504;
            case 0x116508u: goto label_116508;
            case 0x11650Cu: goto label_11650c;
            case 0x116510u: goto label_116510;
            case 0x116514u: goto label_116514;
            case 0x116518u: goto label_116518;
            case 0x11651Cu: goto label_11651c;
            case 0x116520u: goto label_116520;
            case 0x116524u: goto label_116524;
            case 0x116528u: goto label_116528;
            case 0x11652Cu: goto label_11652c;
            case 0x116530u: goto label_116530;
            case 0x116534u: goto label_116534;
            case 0x116538u: goto label_116538;
            case 0x11653Cu: goto label_11653c;
            case 0x116540u: goto label_116540;
            case 0x116544u: goto label_116544;
            case 0x116548u: goto label_116548;
            case 0x11654Cu: goto label_11654c;
            case 0x116550u: goto label_116550;
            case 0x116554u: goto label_116554;
            case 0x116558u: goto label_116558;
            case 0x11655Cu: goto label_11655c;
            case 0x116560u: goto label_116560;
            case 0x116564u: goto label_116564;
            case 0x116568u: goto label_116568;
            case 0x11656Cu: goto label_11656c;
            case 0x116570u: goto label_116570;
            case 0x116574u: goto label_116574;
            case 0x116578u: goto label_116578;
            case 0x11657Cu: goto label_11657c;
            case 0x116580u: goto label_116580;
            case 0x116584u: goto label_116584;
            case 0x116588u: goto label_116588;
            case 0x11658Cu: goto label_11658c;
            case 0x116590u: goto label_116590;
            case 0x116594u: goto label_116594;
            case 0x116598u: goto label_116598;
            case 0x11659Cu: goto label_11659c;
            case 0x1165A0u: goto label_1165a0;
            case 0x1165A4u: goto label_1165a4;
            case 0x1165A8u: goto label_1165a8;
            case 0x1165ACu: goto label_1165ac;
            case 0x1165B0u: goto label_1165b0;
            case 0x1165B4u: goto label_1165b4;
            case 0x1165B8u: goto label_1165b8;
            case 0x1165BCu: goto label_1165bc;
            case 0x1165C0u: goto label_1165c0;
            case 0x1165C4u: goto label_1165c4;
            case 0x1165C8u: goto label_1165c8;
            case 0x1165CCu: goto label_1165cc;
            case 0x1165D0u: goto label_1165d0;
            case 0x1165D4u: goto label_1165d4;
            case 0x1165D8u: goto label_1165d8;
            case 0x1165DCu: goto label_1165dc;
            case 0x1165E0u: goto label_1165e0;
            case 0x1165E4u: goto label_1165e4;
            case 0x1165E8u: goto label_1165e8;
            case 0x1165ECu: goto label_1165ec;
            case 0x1165F0u: goto label_1165f0;
            case 0x1165F4u: goto label_1165f4;
            case 0x1165F8u: goto label_1165f8;
            case 0x1165FCu: goto label_1165fc;
            case 0x116600u: goto label_116600;
            case 0x116604u: goto label_116604;
            case 0x116608u: goto label_116608;
            case 0x11660Cu: goto label_11660c;
            case 0x116610u: goto label_116610;
            case 0x116614u: goto label_116614;
            case 0x116618u: goto label_116618;
            case 0x11661Cu: goto label_11661c;
            case 0x116620u: goto label_116620;
            case 0x116624u: goto label_116624;
            case 0x116628u: goto label_116628;
            case 0x11662Cu: goto label_11662c;
            case 0x116630u: goto label_116630;
            case 0x116634u: goto label_116634;
            case 0x116638u: goto label_116638;
            case 0x11663Cu: goto label_11663c;
            case 0x116640u: goto label_116640;
            case 0x116644u: goto label_116644;
            case 0x116648u: goto label_116648;
            case 0x11664Cu: goto label_11664c;
            case 0x116650u: goto label_116650;
            case 0x116654u: goto label_116654;
            case 0x116658u: goto label_116658;
            case 0x11665Cu: goto label_11665c;
            case 0x116660u: goto label_116660;
            case 0x116664u: goto label_116664;
            case 0x116668u: goto label_116668;
            case 0x11666Cu: goto label_11666c;
            case 0x116670u: goto label_116670;
            case 0x116674u: goto label_116674;
            case 0x116678u: goto label_116678;
            case 0x11667Cu: goto label_11667c;
            case 0x116680u: goto label_116680;
            case 0x116684u: goto label_116684;
            case 0x116688u: goto label_116688;
            case 0x11668Cu: goto label_11668c;
            case 0x116690u: goto label_116690;
            case 0x116694u: goto label_116694;
            case 0x116698u: goto label_116698;
            case 0x11669Cu: goto label_11669c;
            case 0x1166A0u: goto label_1166a0;
            case 0x1166A4u: goto label_1166a4;
            case 0x1166A8u: goto label_1166a8;
            case 0x1166ACu: goto label_1166ac;
            case 0x1166B0u: goto label_1166b0;
            case 0x1166B4u: goto label_1166b4;
            case 0x1166B8u: goto label_1166b8;
            case 0x1166BCu: goto label_1166bc;
            case 0x1166C0u: goto label_1166c0;
            case 0x1166C4u: goto label_1166c4;
            case 0x1166C8u: goto label_1166c8;
            case 0x1166CCu: goto label_1166cc;
            case 0x1166D0u: goto label_1166d0;
            case 0x1166D4u: goto label_1166d4;
            case 0x1166D8u: goto label_1166d8;
            case 0x1166DCu: goto label_1166dc;
            case 0x1166E0u: goto label_1166e0;
            case 0x1166E4u: goto label_1166e4;
            case 0x1166E8u: goto label_1166e8;
            case 0x1166ECu: goto label_1166ec;
            case 0x1166F0u: goto label_1166f0;
            case 0x1166F4u: goto label_1166f4;
            case 0x1166F8u: goto label_1166f8;
            case 0x1166FCu: goto label_1166fc;
            case 0x116700u: goto label_116700;
            case 0x116704u: goto label_116704;
            case 0x116708u: goto label_116708;
            case 0x11670Cu: goto label_11670c;
            case 0x116710u: goto label_116710;
            case 0x116714u: goto label_116714;
            case 0x116718u: goto label_116718;
            case 0x11671Cu: goto label_11671c;
            case 0x116720u: goto label_116720;
            case 0x116724u: goto label_116724;
            case 0x116728u: goto label_116728;
            case 0x11672Cu: goto label_11672c;
            case 0x116730u: goto label_116730;
            case 0x116734u: goto label_116734;
            case 0x116738u: goto label_116738;
            case 0x11673Cu: goto label_11673c;
            case 0x116740u: goto label_116740;
            case 0x116744u: goto label_116744;
            case 0x116748u: goto label_116748;
            case 0x11674Cu: goto label_11674c;
            case 0x116750u: goto label_116750;
            case 0x116754u: goto label_116754;
            case 0x116758u: goto label_116758;
            case 0x11675Cu: goto label_11675c;
            case 0x116760u: goto label_116760;
            case 0x116764u: goto label_116764;
            case 0x116768u: goto label_116768;
            case 0x11676Cu: goto label_11676c;
            case 0x116770u: goto label_116770;
            case 0x116774u: goto label_116774;
            case 0x116778u: goto label_116778;
            case 0x11677Cu: goto label_11677c;
            case 0x116780u: goto label_116780;
            case 0x116784u: goto label_116784;
            case 0x116788u: goto label_116788;
            case 0x11678Cu: goto label_11678c;
            case 0x116790u: goto label_116790;
            case 0x116794u: goto label_116794;
            case 0x116798u: goto label_116798;
            case 0x11679Cu: goto label_11679c;
            case 0x1167A0u: goto label_1167a0;
            case 0x1167A4u: goto label_1167a4;
            case 0x1167A8u: goto label_1167a8;
            case 0x1167ACu: goto label_1167ac;
            case 0x1167B0u: goto label_1167b0;
            case 0x1167B4u: goto label_1167b4;
            case 0x1167B8u: goto label_1167b8;
            case 0x1167BCu: goto label_1167bc;
            case 0x1167C0u: goto label_1167c0;
            case 0x1167C4u: goto label_1167c4;
            case 0x1167C8u: goto label_1167c8;
            case 0x1167CCu: goto label_1167cc;
            case 0x1167D0u: goto label_1167d0;
            case 0x1167D4u: goto label_1167d4;
            case 0x1167D8u: goto label_1167d8;
            case 0x1167DCu: goto label_1167dc;
            case 0x1167E0u: goto label_1167e0;
            case 0x1167E4u: goto label_1167e4;
            case 0x1167E8u: goto label_1167e8;
            case 0x1167ECu: goto label_1167ec;
            case 0x1167F0u: goto label_1167f0;
            case 0x1167F4u: goto label_1167f4;
            case 0x1167F8u: goto label_1167f8;
            case 0x1167FCu: goto label_1167fc;
            case 0x116800u: goto label_116800;
            case 0x116804u: goto label_116804;
            case 0x116808u: goto label_116808;
            case 0x11680Cu: goto label_11680c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1166B4u; }
            if (ctx->pc != 0x1166B4u) { return; }
        }
    }
    ctx->pc = 0x1166B4u;
label_1166b4:
    // 0x1166b4: 0x10000044
label_1166b8:
    if (ctx->pc == 0x1166B8u) {
        ctx->pc = 0x1166B8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1166BCu;
        goto label_1166bc;
    }
    ctx->pc = 0x1166B4u;
    {
        const bool branch_taken_0x1166b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1166B8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1166b4) {
            ctx->pc = 0x1167C8u;
            goto label_1167c8;
        }
    }
    ctx->pc = 0x1166BCu;
label_1166bc:
    // 0x1166bc: 0xc04462e
label_1166c0:
    if (ctx->pc == 0x1166C0u) {
        ctx->pc = 0x1166C0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x1166C4u;
        goto label_1166c4;
    }
    ctx->pc = 0x1166BCu;
    SET_GPR_U32(ctx, 31, 0x1166C4u);
    ctx->pc = 0x1166C0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x1118B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001118B8_0x1118b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1166C4u; }
    }
    if (ctx->pc != 0x1166C4u) { return; }
    ctx->pc = 0x1166C4u;
label_1166c4:
    // 0x1166c4: 0xc04582c
label_1166c8:
    if (ctx->pc == 0x1166C8u) {
        ctx->pc = 0x1166C8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1166CCu;
        goto label_1166cc;
    }
    ctx->pc = 0x1166C4u;
    SET_GPR_U32(ctx, 31, 0x1166CCu);
    ctx->pc = 0x1166C8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1160B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001160B0_0x1160b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1166CCu; }
    }
    if (ctx->pc != 0x1166CCu) { return; }
    ctx->pc = 0x1166CCu;
label_1166cc:
    // 0x1166cc: 0x1000003e
label_1166d0:
    if (ctx->pc == 0x1166D0u) {
        ctx->pc = 0x1166D0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1166D4u;
        goto label_1166d4;
    }
    ctx->pc = 0x1166CCu;
    {
        const bool branch_taken_0x1166cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1166D0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1166cc) {
            ctx->pc = 0x1167C8u;
            goto label_1167c8;
        }
    }
    ctx->pc = 0x1166D4u;
label_1166d4:
    // 0x1166d4: 0x26730008
    ctx->pc = 0x1166d4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 8));
label_1166d8:
    // 0x1166d8: 0x8e63fff8
    ctx->pc = 0x1166d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_1166dc:
    // 0x1166dc: 0x80620000
    ctx->pc = 0x1166dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1166e0:
    // 0x1166e0: 0x14400017
label_1166e4:
    if (ctx->pc == 0x1166E4u) {
        ctx->pc = 0x1166E4u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x1166E8u;
        goto label_1166e8;
    }
    ctx->pc = 0x1166E0u;
    {
        const bool branch_taken_0x1166e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1166E4u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        if (branch_taken_0x1166e0) {
            ctx->pc = 0x116740u;
            goto label_116740;
        }
    }
    ctx->pc = 0x1166E8u;
label_1166e8:
    // 0x1166e8: 0x3c150021
    ctx->pc = 0x1166e8u;
    SET_GPR_U32(ctx, 21, ((uint32_t)33 << 16));
label_1166ec:
    // 0x1166ec: 0x24040028
    ctx->pc = 0x1166ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 40));
label_1166f0:
    // 0x1166f0: 0x8ea29d44
    ctx->pc = 0x1166f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294942020)));
label_1166f4:
    // 0x1166f4: 0x40f809
label_1166f8:
    if (ctx->pc == 0x1166F8u) {
        ctx->pc = 0x1166F8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x1166FCu;
        goto label_1166fc;
    }
    ctx->pc = 0x1166F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1166FCu);
        ctx->pc = 0x1166F8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116218u: goto label_116218;
            case 0x11621Cu: goto label_11621c;
            case 0x116220u: goto label_116220;
            case 0x116224u: goto label_116224;
            case 0x116228u: goto label_116228;
            case 0x11622Cu: goto label_11622c;
            case 0x116230u: goto label_116230;
            case 0x116234u: goto label_116234;
            case 0x116238u: goto label_116238;
            case 0x11623Cu: goto label_11623c;
            case 0x116240u: goto label_116240;
            case 0x116244u: goto label_116244;
            case 0x116248u: goto label_116248;
            case 0x11624Cu: goto label_11624c;
            case 0x116250u: goto label_116250;
            case 0x116254u: goto label_116254;
            case 0x116258u: goto label_116258;
            case 0x11625Cu: goto label_11625c;
            case 0x116260u: goto label_116260;
            case 0x116264u: goto label_116264;
            case 0x116268u: goto label_116268;
            case 0x11626Cu: goto label_11626c;
            case 0x116270u: goto label_116270;
            case 0x116274u: goto label_116274;
            case 0x116278u: goto label_116278;
            case 0x11627Cu: goto label_11627c;
            case 0x116280u: goto label_116280;
            case 0x116284u: goto label_116284;
            case 0x116288u: goto label_116288;
            case 0x11628Cu: goto label_11628c;
            case 0x116290u: goto label_116290;
            case 0x116294u: goto label_116294;
            case 0x116298u: goto label_116298;
            case 0x11629Cu: goto label_11629c;
            case 0x1162A0u: goto label_1162a0;
            case 0x1162A4u: goto label_1162a4;
            case 0x1162A8u: goto label_1162a8;
            case 0x1162ACu: goto label_1162ac;
            case 0x1162B0u: goto label_1162b0;
            case 0x1162B4u: goto label_1162b4;
            case 0x1162B8u: goto label_1162b8;
            case 0x1162BCu: goto label_1162bc;
            case 0x1162C0u: goto label_1162c0;
            case 0x1162C4u: goto label_1162c4;
            case 0x1162C8u: goto label_1162c8;
            case 0x1162CCu: goto label_1162cc;
            case 0x1162D0u: goto label_1162d0;
            case 0x1162D4u: goto label_1162d4;
            case 0x1162D8u: goto label_1162d8;
            case 0x1162DCu: goto label_1162dc;
            case 0x1162E0u: goto label_1162e0;
            case 0x1162E4u: goto label_1162e4;
            case 0x1162E8u: goto label_1162e8;
            case 0x1162ECu: goto label_1162ec;
            case 0x1162F0u: goto label_1162f0;
            case 0x1162F4u: goto label_1162f4;
            case 0x1162F8u: goto label_1162f8;
            case 0x1162FCu: goto label_1162fc;
            case 0x116300u: goto label_116300;
            case 0x116304u: goto label_116304;
            case 0x116308u: goto label_116308;
            case 0x11630Cu: goto label_11630c;
            case 0x116310u: goto label_116310;
            case 0x116314u: goto label_116314;
            case 0x116318u: goto label_116318;
            case 0x11631Cu: goto label_11631c;
            case 0x116320u: goto label_116320;
            case 0x116324u: goto label_116324;
            case 0x116328u: goto label_116328;
            case 0x11632Cu: goto label_11632c;
            case 0x116330u: goto label_116330;
            case 0x116334u: goto label_116334;
            case 0x116338u: goto label_116338;
            case 0x11633Cu: goto label_11633c;
            case 0x116340u: goto label_116340;
            case 0x116344u: goto label_116344;
            case 0x116348u: goto label_116348;
            case 0x11634Cu: goto label_11634c;
            case 0x116350u: goto label_116350;
            case 0x116354u: goto label_116354;
            case 0x116358u: goto label_116358;
            case 0x11635Cu: goto label_11635c;
            case 0x116360u: goto label_116360;
            case 0x116364u: goto label_116364;
            case 0x116368u: goto label_116368;
            case 0x11636Cu: goto label_11636c;
            case 0x116370u: goto label_116370;
            case 0x116374u: goto label_116374;
            case 0x116378u: goto label_116378;
            case 0x11637Cu: goto label_11637c;
            case 0x116380u: goto label_116380;
            case 0x116384u: goto label_116384;
            case 0x116388u: goto label_116388;
            case 0x11638Cu: goto label_11638c;
            case 0x116390u: goto label_116390;
            case 0x116394u: goto label_116394;
            case 0x116398u: goto label_116398;
            case 0x11639Cu: goto label_11639c;
            case 0x1163A0u: goto label_1163a0;
            case 0x1163A4u: goto label_1163a4;
            case 0x1163A8u: goto label_1163a8;
            case 0x1163ACu: goto label_1163ac;
            case 0x1163B0u: goto label_1163b0;
            case 0x1163B4u: goto label_1163b4;
            case 0x1163B8u: goto label_1163b8;
            case 0x1163BCu: goto label_1163bc;
            case 0x1163C0u: goto label_1163c0;
            case 0x1163C4u: goto label_1163c4;
            case 0x1163C8u: goto label_1163c8;
            case 0x1163CCu: goto label_1163cc;
            case 0x1163D0u: goto label_1163d0;
            case 0x1163D4u: goto label_1163d4;
            case 0x1163D8u: goto label_1163d8;
            case 0x1163DCu: goto label_1163dc;
            case 0x1163E0u: goto label_1163e0;
            case 0x1163E4u: goto label_1163e4;
            case 0x1163E8u: goto label_1163e8;
            case 0x1163ECu: goto label_1163ec;
            case 0x1163F0u: goto label_1163f0;
            case 0x1163F4u: goto label_1163f4;
            case 0x1163F8u: goto label_1163f8;
            case 0x1163FCu: goto label_1163fc;
            case 0x116400u: goto label_116400;
            case 0x116404u: goto label_116404;
            case 0x116408u: goto label_116408;
            case 0x11640Cu: goto label_11640c;
            case 0x116410u: goto label_116410;
            case 0x116414u: goto label_116414;
            case 0x116418u: goto label_116418;
            case 0x11641Cu: goto label_11641c;
            case 0x116420u: goto label_116420;
            case 0x116424u: goto label_116424;
            case 0x116428u: goto label_116428;
            case 0x11642Cu: goto label_11642c;
            case 0x116430u: goto label_116430;
            case 0x116434u: goto label_116434;
            case 0x116438u: goto label_116438;
            case 0x11643Cu: goto label_11643c;
            case 0x116440u: goto label_116440;
            case 0x116444u: goto label_116444;
            case 0x116448u: goto label_116448;
            case 0x11644Cu: goto label_11644c;
            case 0x116450u: goto label_116450;
            case 0x116454u: goto label_116454;
            case 0x116458u: goto label_116458;
            case 0x11645Cu: goto label_11645c;
            case 0x116460u: goto label_116460;
            case 0x116464u: goto label_116464;
            case 0x116468u: goto label_116468;
            case 0x11646Cu: goto label_11646c;
            case 0x116470u: goto label_116470;
            case 0x116474u: goto label_116474;
            case 0x116478u: goto label_116478;
            case 0x11647Cu: goto label_11647c;
            case 0x116480u: goto label_116480;
            case 0x116484u: goto label_116484;
            case 0x116488u: goto label_116488;
            case 0x11648Cu: goto label_11648c;
            case 0x116490u: goto label_116490;
            case 0x116494u: goto label_116494;
            case 0x116498u: goto label_116498;
            case 0x11649Cu: goto label_11649c;
            case 0x1164A0u: goto label_1164a0;
            case 0x1164A4u: goto label_1164a4;
            case 0x1164A8u: goto label_1164a8;
            case 0x1164ACu: goto label_1164ac;
            case 0x1164B0u: goto label_1164b0;
            case 0x1164B4u: goto label_1164b4;
            case 0x1164B8u: goto label_1164b8;
            case 0x1164BCu: goto label_1164bc;
            case 0x1164C0u: goto label_1164c0;
            case 0x1164C4u: goto label_1164c4;
            case 0x1164C8u: goto label_1164c8;
            case 0x1164CCu: goto label_1164cc;
            case 0x1164D0u: goto label_1164d0;
            case 0x1164D4u: goto label_1164d4;
            case 0x1164D8u: goto label_1164d8;
            case 0x1164DCu: goto label_1164dc;
            case 0x1164E0u: goto label_1164e0;
            case 0x1164E4u: goto label_1164e4;
            case 0x1164E8u: goto label_1164e8;
            case 0x1164ECu: goto label_1164ec;
            case 0x1164F0u: goto label_1164f0;
            case 0x1164F4u: goto label_1164f4;
            case 0x1164F8u: goto label_1164f8;
            case 0x1164FCu: goto label_1164fc;
            case 0x116500u: goto label_116500;
            case 0x116504u: goto label_116504;
            case 0x116508u: goto label_116508;
            case 0x11650Cu: goto label_11650c;
            case 0x116510u: goto label_116510;
            case 0x116514u: goto label_116514;
            case 0x116518u: goto label_116518;
            case 0x11651Cu: goto label_11651c;
            case 0x116520u: goto label_116520;
            case 0x116524u: goto label_116524;
            case 0x116528u: goto label_116528;
            case 0x11652Cu: goto label_11652c;
            case 0x116530u: goto label_116530;
            case 0x116534u: goto label_116534;
            case 0x116538u: goto label_116538;
            case 0x11653Cu: goto label_11653c;
            case 0x116540u: goto label_116540;
            case 0x116544u: goto label_116544;
            case 0x116548u: goto label_116548;
            case 0x11654Cu: goto label_11654c;
            case 0x116550u: goto label_116550;
            case 0x116554u: goto label_116554;
            case 0x116558u: goto label_116558;
            case 0x11655Cu: goto label_11655c;
            case 0x116560u: goto label_116560;
            case 0x116564u: goto label_116564;
            case 0x116568u: goto label_116568;
            case 0x11656Cu: goto label_11656c;
            case 0x116570u: goto label_116570;
            case 0x116574u: goto label_116574;
            case 0x116578u: goto label_116578;
            case 0x11657Cu: goto label_11657c;
            case 0x116580u: goto label_116580;
            case 0x116584u: goto label_116584;
            case 0x116588u: goto label_116588;
            case 0x11658Cu: goto label_11658c;
            case 0x116590u: goto label_116590;
            case 0x116594u: goto label_116594;
            case 0x116598u: goto label_116598;
            case 0x11659Cu: goto label_11659c;
            case 0x1165A0u: goto label_1165a0;
            case 0x1165A4u: goto label_1165a4;
            case 0x1165A8u: goto label_1165a8;
            case 0x1165ACu: goto label_1165ac;
            case 0x1165B0u: goto label_1165b0;
            case 0x1165B4u: goto label_1165b4;
            case 0x1165B8u: goto label_1165b8;
            case 0x1165BCu: goto label_1165bc;
            case 0x1165C0u: goto label_1165c0;
            case 0x1165C4u: goto label_1165c4;
            case 0x1165C8u: goto label_1165c8;
            case 0x1165CCu: goto label_1165cc;
            case 0x1165D0u: goto label_1165d0;
            case 0x1165D4u: goto label_1165d4;
            case 0x1165D8u: goto label_1165d8;
            case 0x1165DCu: goto label_1165dc;
            case 0x1165E0u: goto label_1165e0;
            case 0x1165E4u: goto label_1165e4;
            case 0x1165E8u: goto label_1165e8;
            case 0x1165ECu: goto label_1165ec;
            case 0x1165F0u: goto label_1165f0;
            case 0x1165F4u: goto label_1165f4;
            case 0x1165F8u: goto label_1165f8;
            case 0x1165FCu: goto label_1165fc;
            case 0x116600u: goto label_116600;
            case 0x116604u: goto label_116604;
            case 0x116608u: goto label_116608;
            case 0x11660Cu: goto label_11660c;
            case 0x116610u: goto label_116610;
            case 0x116614u: goto label_116614;
            case 0x116618u: goto label_116618;
            case 0x11661Cu: goto label_11661c;
            case 0x116620u: goto label_116620;
            case 0x116624u: goto label_116624;
            case 0x116628u: goto label_116628;
            case 0x11662Cu: goto label_11662c;
            case 0x116630u: goto label_116630;
            case 0x116634u: goto label_116634;
            case 0x116638u: goto label_116638;
            case 0x11663Cu: goto label_11663c;
            case 0x116640u: goto label_116640;
            case 0x116644u: goto label_116644;
            case 0x116648u: goto label_116648;
            case 0x11664Cu: goto label_11664c;
            case 0x116650u: goto label_116650;
            case 0x116654u: goto label_116654;
            case 0x116658u: goto label_116658;
            case 0x11665Cu: goto label_11665c;
            case 0x116660u: goto label_116660;
            case 0x116664u: goto label_116664;
            case 0x116668u: goto label_116668;
            case 0x11666Cu: goto label_11666c;
            case 0x116670u: goto label_116670;
            case 0x116674u: goto label_116674;
            case 0x116678u: goto label_116678;
            case 0x11667Cu: goto label_11667c;
            case 0x116680u: goto label_116680;
            case 0x116684u: goto label_116684;
            case 0x116688u: goto label_116688;
            case 0x11668Cu: goto label_11668c;
            case 0x116690u: goto label_116690;
            case 0x116694u: goto label_116694;
            case 0x116698u: goto label_116698;
            case 0x11669Cu: goto label_11669c;
            case 0x1166A0u: goto label_1166a0;
            case 0x1166A4u: goto label_1166a4;
            case 0x1166A8u: goto label_1166a8;
            case 0x1166ACu: goto label_1166ac;
            case 0x1166B0u: goto label_1166b0;
            case 0x1166B4u: goto label_1166b4;
            case 0x1166B8u: goto label_1166b8;
            case 0x1166BCu: goto label_1166bc;
            case 0x1166C0u: goto label_1166c0;
            case 0x1166C4u: goto label_1166c4;
            case 0x1166C8u: goto label_1166c8;
            case 0x1166CCu: goto label_1166cc;
            case 0x1166D0u: goto label_1166d0;
            case 0x1166D4u: goto label_1166d4;
            case 0x1166D8u: goto label_1166d8;
            case 0x1166DCu: goto label_1166dc;
            case 0x1166E0u: goto label_1166e0;
            case 0x1166E4u: goto label_1166e4;
            case 0x1166E8u: goto label_1166e8;
            case 0x1166ECu: goto label_1166ec;
            case 0x1166F0u: goto label_1166f0;
            case 0x1166F4u: goto label_1166f4;
            case 0x1166F8u: goto label_1166f8;
            case 0x1166FCu: goto label_1166fc;
            case 0x116700u: goto label_116700;
            case 0x116704u: goto label_116704;
            case 0x116708u: goto label_116708;
            case 0x11670Cu: goto label_11670c;
            case 0x116710u: goto label_116710;
            case 0x116714u: goto label_116714;
            case 0x116718u: goto label_116718;
            case 0x11671Cu: goto label_11671c;
            case 0x116720u: goto label_116720;
            case 0x116724u: goto label_116724;
            case 0x116728u: goto label_116728;
            case 0x11672Cu: goto label_11672c;
            case 0x116730u: goto label_116730;
            case 0x116734u: goto label_116734;
            case 0x116738u: goto label_116738;
            case 0x11673Cu: goto label_11673c;
            case 0x116740u: goto label_116740;
            case 0x116744u: goto label_116744;
            case 0x116748u: goto label_116748;
            case 0x11674Cu: goto label_11674c;
            case 0x116750u: goto label_116750;
            case 0x116754u: goto label_116754;
            case 0x116758u: goto label_116758;
            case 0x11675Cu: goto label_11675c;
            case 0x116760u: goto label_116760;
            case 0x116764u: goto label_116764;
            case 0x116768u: goto label_116768;
            case 0x11676Cu: goto label_11676c;
            case 0x116770u: goto label_116770;
            case 0x116774u: goto label_116774;
            case 0x116778u: goto label_116778;
            case 0x11677Cu: goto label_11677c;
            case 0x116780u: goto label_116780;
            case 0x116784u: goto label_116784;
            case 0x116788u: goto label_116788;
            case 0x11678Cu: goto label_11678c;
            case 0x116790u: goto label_116790;
            case 0x116794u: goto label_116794;
            case 0x116798u: goto label_116798;
            case 0x11679Cu: goto label_11679c;
            case 0x1167A0u: goto label_1167a0;
            case 0x1167A4u: goto label_1167a4;
            case 0x1167A8u: goto label_1167a8;
            case 0x1167ACu: goto label_1167ac;
            case 0x1167B0u: goto label_1167b0;
            case 0x1167B4u: goto label_1167b4;
            case 0x1167B8u: goto label_1167b8;
            case 0x1167BCu: goto label_1167bc;
            case 0x1167C0u: goto label_1167c0;
            case 0x1167C4u: goto label_1167c4;
            case 0x1167C8u: goto label_1167c8;
            case 0x1167CCu: goto label_1167cc;
            case 0x1167D0u: goto label_1167d0;
            case 0x1167D4u: goto label_1167d4;
            case 0x1167D8u: goto label_1167d8;
            case 0x1167DCu: goto label_1167dc;
            case 0x1167E0u: goto label_1167e0;
            case 0x1167E4u: goto label_1167e4;
            case 0x1167E8u: goto label_1167e8;
            case 0x1167ECu: goto label_1167ec;
            case 0x1167F0u: goto label_1167f0;
            case 0x1167F4u: goto label_1167f4;
            case 0x1167F8u: goto label_1167f8;
            case 0x1167FCu: goto label_1167fc;
            case 0x116800u: goto label_116800;
            case 0x116804u: goto label_116804;
            case 0x116808u: goto label_116808;
            case 0x11680Cu: goto label_11680c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1166FCu; }
            if (ctx->pc != 0x1166FCu) { return; }
        }
    }
    ctx->pc = 0x1166FCu;
label_1166fc:
    // 0x1166fc: 0x8ea39d44
    ctx->pc = 0x1166fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 4294942020)));
label_116700:
    // 0x116700: 0x60f809
label_116704:
    if (ctx->pc == 0x116704u) {
        ctx->pc = 0x116704u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 110));
        ctx->pc = 0x116708u;
        goto label_116708;
    }
    ctx->pc = 0x116700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x116708u);
        ctx->pc = 0x116704u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 110));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116218u: goto label_116218;
            case 0x11621Cu: goto label_11621c;
            case 0x116220u: goto label_116220;
            case 0x116224u: goto label_116224;
            case 0x116228u: goto label_116228;
            case 0x11622Cu: goto label_11622c;
            case 0x116230u: goto label_116230;
            case 0x116234u: goto label_116234;
            case 0x116238u: goto label_116238;
            case 0x11623Cu: goto label_11623c;
            case 0x116240u: goto label_116240;
            case 0x116244u: goto label_116244;
            case 0x116248u: goto label_116248;
            case 0x11624Cu: goto label_11624c;
            case 0x116250u: goto label_116250;
            case 0x116254u: goto label_116254;
            case 0x116258u: goto label_116258;
            case 0x11625Cu: goto label_11625c;
            case 0x116260u: goto label_116260;
            case 0x116264u: goto label_116264;
            case 0x116268u: goto label_116268;
            case 0x11626Cu: goto label_11626c;
            case 0x116270u: goto label_116270;
            case 0x116274u: goto label_116274;
            case 0x116278u: goto label_116278;
            case 0x11627Cu: goto label_11627c;
            case 0x116280u: goto label_116280;
            case 0x116284u: goto label_116284;
            case 0x116288u: goto label_116288;
            case 0x11628Cu: goto label_11628c;
            case 0x116290u: goto label_116290;
            case 0x116294u: goto label_116294;
            case 0x116298u: goto label_116298;
            case 0x11629Cu: goto label_11629c;
            case 0x1162A0u: goto label_1162a0;
            case 0x1162A4u: goto label_1162a4;
            case 0x1162A8u: goto label_1162a8;
            case 0x1162ACu: goto label_1162ac;
            case 0x1162B0u: goto label_1162b0;
            case 0x1162B4u: goto label_1162b4;
            case 0x1162B8u: goto label_1162b8;
            case 0x1162BCu: goto label_1162bc;
            case 0x1162C0u: goto label_1162c0;
            case 0x1162C4u: goto label_1162c4;
            case 0x1162C8u: goto label_1162c8;
            case 0x1162CCu: goto label_1162cc;
            case 0x1162D0u: goto label_1162d0;
            case 0x1162D4u: goto label_1162d4;
            case 0x1162D8u: goto label_1162d8;
            case 0x1162DCu: goto label_1162dc;
            case 0x1162E0u: goto label_1162e0;
            case 0x1162E4u: goto label_1162e4;
            case 0x1162E8u: goto label_1162e8;
            case 0x1162ECu: goto label_1162ec;
            case 0x1162F0u: goto label_1162f0;
            case 0x1162F4u: goto label_1162f4;
            case 0x1162F8u: goto label_1162f8;
            case 0x1162FCu: goto label_1162fc;
            case 0x116300u: goto label_116300;
            case 0x116304u: goto label_116304;
            case 0x116308u: goto label_116308;
            case 0x11630Cu: goto label_11630c;
            case 0x116310u: goto label_116310;
            case 0x116314u: goto label_116314;
            case 0x116318u: goto label_116318;
            case 0x11631Cu: goto label_11631c;
            case 0x116320u: goto label_116320;
            case 0x116324u: goto label_116324;
            case 0x116328u: goto label_116328;
            case 0x11632Cu: goto label_11632c;
            case 0x116330u: goto label_116330;
            case 0x116334u: goto label_116334;
            case 0x116338u: goto label_116338;
            case 0x11633Cu: goto label_11633c;
            case 0x116340u: goto label_116340;
            case 0x116344u: goto label_116344;
            case 0x116348u: goto label_116348;
            case 0x11634Cu: goto label_11634c;
            case 0x116350u: goto label_116350;
            case 0x116354u: goto label_116354;
            case 0x116358u: goto label_116358;
            case 0x11635Cu: goto label_11635c;
            case 0x116360u: goto label_116360;
            case 0x116364u: goto label_116364;
            case 0x116368u: goto label_116368;
            case 0x11636Cu: goto label_11636c;
            case 0x116370u: goto label_116370;
            case 0x116374u: goto label_116374;
            case 0x116378u: goto label_116378;
            case 0x11637Cu: goto label_11637c;
            case 0x116380u: goto label_116380;
            case 0x116384u: goto label_116384;
            case 0x116388u: goto label_116388;
            case 0x11638Cu: goto label_11638c;
            case 0x116390u: goto label_116390;
            case 0x116394u: goto label_116394;
            case 0x116398u: goto label_116398;
            case 0x11639Cu: goto label_11639c;
            case 0x1163A0u: goto label_1163a0;
            case 0x1163A4u: goto label_1163a4;
            case 0x1163A8u: goto label_1163a8;
            case 0x1163ACu: goto label_1163ac;
            case 0x1163B0u: goto label_1163b0;
            case 0x1163B4u: goto label_1163b4;
            case 0x1163B8u: goto label_1163b8;
            case 0x1163BCu: goto label_1163bc;
            case 0x1163C0u: goto label_1163c0;
            case 0x1163C4u: goto label_1163c4;
            case 0x1163C8u: goto label_1163c8;
            case 0x1163CCu: goto label_1163cc;
            case 0x1163D0u: goto label_1163d0;
            case 0x1163D4u: goto label_1163d4;
            case 0x1163D8u: goto label_1163d8;
            case 0x1163DCu: goto label_1163dc;
            case 0x1163E0u: goto label_1163e0;
            case 0x1163E4u: goto label_1163e4;
            case 0x1163E8u: goto label_1163e8;
            case 0x1163ECu: goto label_1163ec;
            case 0x1163F0u: goto label_1163f0;
            case 0x1163F4u: goto label_1163f4;
            case 0x1163F8u: goto label_1163f8;
            case 0x1163FCu: goto label_1163fc;
            case 0x116400u: goto label_116400;
            case 0x116404u: goto label_116404;
            case 0x116408u: goto label_116408;
            case 0x11640Cu: goto label_11640c;
            case 0x116410u: goto label_116410;
            case 0x116414u: goto label_116414;
            case 0x116418u: goto label_116418;
            case 0x11641Cu: goto label_11641c;
            case 0x116420u: goto label_116420;
            case 0x116424u: goto label_116424;
            case 0x116428u: goto label_116428;
            case 0x11642Cu: goto label_11642c;
            case 0x116430u: goto label_116430;
            case 0x116434u: goto label_116434;
            case 0x116438u: goto label_116438;
            case 0x11643Cu: goto label_11643c;
            case 0x116440u: goto label_116440;
            case 0x116444u: goto label_116444;
            case 0x116448u: goto label_116448;
            case 0x11644Cu: goto label_11644c;
            case 0x116450u: goto label_116450;
            case 0x116454u: goto label_116454;
            case 0x116458u: goto label_116458;
            case 0x11645Cu: goto label_11645c;
            case 0x116460u: goto label_116460;
            case 0x116464u: goto label_116464;
            case 0x116468u: goto label_116468;
            case 0x11646Cu: goto label_11646c;
            case 0x116470u: goto label_116470;
            case 0x116474u: goto label_116474;
            case 0x116478u: goto label_116478;
            case 0x11647Cu: goto label_11647c;
            case 0x116480u: goto label_116480;
            case 0x116484u: goto label_116484;
            case 0x116488u: goto label_116488;
            case 0x11648Cu: goto label_11648c;
            case 0x116490u: goto label_116490;
            case 0x116494u: goto label_116494;
            case 0x116498u: goto label_116498;
            case 0x11649Cu: goto label_11649c;
            case 0x1164A0u: goto label_1164a0;
            case 0x1164A4u: goto label_1164a4;
            case 0x1164A8u: goto label_1164a8;
            case 0x1164ACu: goto label_1164ac;
            case 0x1164B0u: goto label_1164b0;
            case 0x1164B4u: goto label_1164b4;
            case 0x1164B8u: goto label_1164b8;
            case 0x1164BCu: goto label_1164bc;
            case 0x1164C0u: goto label_1164c0;
            case 0x1164C4u: goto label_1164c4;
            case 0x1164C8u: goto label_1164c8;
            case 0x1164CCu: goto label_1164cc;
            case 0x1164D0u: goto label_1164d0;
            case 0x1164D4u: goto label_1164d4;
            case 0x1164D8u: goto label_1164d8;
            case 0x1164DCu: goto label_1164dc;
            case 0x1164E0u: goto label_1164e0;
            case 0x1164E4u: goto label_1164e4;
            case 0x1164E8u: goto label_1164e8;
            case 0x1164ECu: goto label_1164ec;
            case 0x1164F0u: goto label_1164f0;
            case 0x1164F4u: goto label_1164f4;
            case 0x1164F8u: goto label_1164f8;
            case 0x1164FCu: goto label_1164fc;
            case 0x116500u: goto label_116500;
            case 0x116504u: goto label_116504;
            case 0x116508u: goto label_116508;
            case 0x11650Cu: goto label_11650c;
            case 0x116510u: goto label_116510;
            case 0x116514u: goto label_116514;
            case 0x116518u: goto label_116518;
            case 0x11651Cu: goto label_11651c;
            case 0x116520u: goto label_116520;
            case 0x116524u: goto label_116524;
            case 0x116528u: goto label_116528;
            case 0x11652Cu: goto label_11652c;
            case 0x116530u: goto label_116530;
            case 0x116534u: goto label_116534;
            case 0x116538u: goto label_116538;
            case 0x11653Cu: goto label_11653c;
            case 0x116540u: goto label_116540;
            case 0x116544u: goto label_116544;
            case 0x116548u: goto label_116548;
            case 0x11654Cu: goto label_11654c;
            case 0x116550u: goto label_116550;
            case 0x116554u: goto label_116554;
            case 0x116558u: goto label_116558;
            case 0x11655Cu: goto label_11655c;
            case 0x116560u: goto label_116560;
            case 0x116564u: goto label_116564;
            case 0x116568u: goto label_116568;
            case 0x11656Cu: goto label_11656c;
            case 0x116570u: goto label_116570;
            case 0x116574u: goto label_116574;
            case 0x116578u: goto label_116578;
            case 0x11657Cu: goto label_11657c;
            case 0x116580u: goto label_116580;
            case 0x116584u: goto label_116584;
            case 0x116588u: goto label_116588;
            case 0x11658Cu: goto label_11658c;
            case 0x116590u: goto label_116590;
            case 0x116594u: goto label_116594;
            case 0x116598u: goto label_116598;
            case 0x11659Cu: goto label_11659c;
            case 0x1165A0u: goto label_1165a0;
            case 0x1165A4u: goto label_1165a4;
            case 0x1165A8u: goto label_1165a8;
            case 0x1165ACu: goto label_1165ac;
            case 0x1165B0u: goto label_1165b0;
            case 0x1165B4u: goto label_1165b4;
            case 0x1165B8u: goto label_1165b8;
            case 0x1165BCu: goto label_1165bc;
            case 0x1165C0u: goto label_1165c0;
            case 0x1165C4u: goto label_1165c4;
            case 0x1165C8u: goto label_1165c8;
            case 0x1165CCu: goto label_1165cc;
            case 0x1165D0u: goto label_1165d0;
            case 0x1165D4u: goto label_1165d4;
            case 0x1165D8u: goto label_1165d8;
            case 0x1165DCu: goto label_1165dc;
            case 0x1165E0u: goto label_1165e0;
            case 0x1165E4u: goto label_1165e4;
            case 0x1165E8u: goto label_1165e8;
            case 0x1165ECu: goto label_1165ec;
            case 0x1165F0u: goto label_1165f0;
            case 0x1165F4u: goto label_1165f4;
            case 0x1165F8u: goto label_1165f8;
            case 0x1165FCu: goto label_1165fc;
            case 0x116600u: goto label_116600;
            case 0x116604u: goto label_116604;
            case 0x116608u: goto label_116608;
            case 0x11660Cu: goto label_11660c;
            case 0x116610u: goto label_116610;
            case 0x116614u: goto label_116614;
            case 0x116618u: goto label_116618;
            case 0x11661Cu: goto label_11661c;
            case 0x116620u: goto label_116620;
            case 0x116624u: goto label_116624;
            case 0x116628u: goto label_116628;
            case 0x11662Cu: goto label_11662c;
            case 0x116630u: goto label_116630;
            case 0x116634u: goto label_116634;
            case 0x116638u: goto label_116638;
            case 0x11663Cu: goto label_11663c;
            case 0x116640u: goto label_116640;
            case 0x116644u: goto label_116644;
            case 0x116648u: goto label_116648;
            case 0x11664Cu: goto label_11664c;
            case 0x116650u: goto label_116650;
            case 0x116654u: goto label_116654;
            case 0x116658u: goto label_116658;
            case 0x11665Cu: goto label_11665c;
            case 0x116660u: goto label_116660;
            case 0x116664u: goto label_116664;
            case 0x116668u: goto label_116668;
            case 0x11666Cu: goto label_11666c;
            case 0x116670u: goto label_116670;
            case 0x116674u: goto label_116674;
            case 0x116678u: goto label_116678;
            case 0x11667Cu: goto label_11667c;
            case 0x116680u: goto label_116680;
            case 0x116684u: goto label_116684;
            case 0x116688u: goto label_116688;
            case 0x11668Cu: goto label_11668c;
            case 0x116690u: goto label_116690;
            case 0x116694u: goto label_116694;
            case 0x116698u: goto label_116698;
            case 0x11669Cu: goto label_11669c;
            case 0x1166A0u: goto label_1166a0;
            case 0x1166A4u: goto label_1166a4;
            case 0x1166A8u: goto label_1166a8;
            case 0x1166ACu: goto label_1166ac;
            case 0x1166B0u: goto label_1166b0;
            case 0x1166B4u: goto label_1166b4;
            case 0x1166B8u: goto label_1166b8;
            case 0x1166BCu: goto label_1166bc;
            case 0x1166C0u: goto label_1166c0;
            case 0x1166C4u: goto label_1166c4;
            case 0x1166C8u: goto label_1166c8;
            case 0x1166CCu: goto label_1166cc;
            case 0x1166D0u: goto label_1166d0;
            case 0x1166D4u: goto label_1166d4;
            case 0x1166D8u: goto label_1166d8;
            case 0x1166DCu: goto label_1166dc;
            case 0x1166E0u: goto label_1166e0;
            case 0x1166E4u: goto label_1166e4;
            case 0x1166E8u: goto label_1166e8;
            case 0x1166ECu: goto label_1166ec;
            case 0x1166F0u: goto label_1166f0;
            case 0x1166F4u: goto label_1166f4;
            case 0x1166F8u: goto label_1166f8;
            case 0x1166FCu: goto label_1166fc;
            case 0x116700u: goto label_116700;
            case 0x116704u: goto label_116704;
            case 0x116708u: goto label_116708;
            case 0x11670Cu: goto label_11670c;
            case 0x116710u: goto label_116710;
            case 0x116714u: goto label_116714;
            case 0x116718u: goto label_116718;
            case 0x11671Cu: goto label_11671c;
            case 0x116720u: goto label_116720;
            case 0x116724u: goto label_116724;
            case 0x116728u: goto label_116728;
            case 0x11672Cu: goto label_11672c;
            case 0x116730u: goto label_116730;
            case 0x116734u: goto label_116734;
            case 0x116738u: goto label_116738;
            case 0x11673Cu: goto label_11673c;
            case 0x116740u: goto label_116740;
            case 0x116744u: goto label_116744;
            case 0x116748u: goto label_116748;
            case 0x11674Cu: goto label_11674c;
            case 0x116750u: goto label_116750;
            case 0x116754u: goto label_116754;
            case 0x116758u: goto label_116758;
            case 0x11675Cu: goto label_11675c;
            case 0x116760u: goto label_116760;
            case 0x116764u: goto label_116764;
            case 0x116768u: goto label_116768;
            case 0x11676Cu: goto label_11676c;
            case 0x116770u: goto label_116770;
            case 0x116774u: goto label_116774;
            case 0x116778u: goto label_116778;
            case 0x11677Cu: goto label_11677c;
            case 0x116780u: goto label_116780;
            case 0x116784u: goto label_116784;
            case 0x116788u: goto label_116788;
            case 0x11678Cu: goto label_11678c;
            case 0x116790u: goto label_116790;
            case 0x116794u: goto label_116794;
            case 0x116798u: goto label_116798;
            case 0x11679Cu: goto label_11679c;
            case 0x1167A0u: goto label_1167a0;
            case 0x1167A4u: goto label_1167a4;
            case 0x1167A8u: goto label_1167a8;
            case 0x1167ACu: goto label_1167ac;
            case 0x1167B0u: goto label_1167b0;
            case 0x1167B4u: goto label_1167b4;
            case 0x1167B8u: goto label_1167b8;
            case 0x1167BCu: goto label_1167bc;
            case 0x1167C0u: goto label_1167c0;
            case 0x1167C4u: goto label_1167c4;
            case 0x1167C8u: goto label_1167c8;
            case 0x1167CCu: goto label_1167cc;
            case 0x1167D0u: goto label_1167d0;
            case 0x1167D4u: goto label_1167d4;
            case 0x1167D8u: goto label_1167d8;
            case 0x1167DCu: goto label_1167dc;
            case 0x1167E0u: goto label_1167e0;
            case 0x1167E4u: goto label_1167e4;
            case 0x1167E8u: goto label_1167e8;
            case 0x1167ECu: goto label_1167ec;
            case 0x1167F0u: goto label_1167f0;
            case 0x1167F4u: goto label_1167f4;
            case 0x1167F8u: goto label_1167f8;
            case 0x1167FCu: goto label_1167fc;
            case 0x116800u: goto label_116800;
            case 0x116804u: goto label_116804;
            case 0x116808u: goto label_116808;
            case 0x11680Cu: goto label_11680c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x116708u; }
            if (ctx->pc != 0x116708u) { return; }
        }
    }
    ctx->pc = 0x116708u;
label_116708:
    // 0x116708: 0x8ea29d44
    ctx->pc = 0x116708u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294942020)));
label_11670c:
    // 0x11670c: 0x40f809
label_116710:
    if (ctx->pc == 0x116710u) {
        ctx->pc = 0x116710u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 117));
        ctx->pc = 0x116714u;
        goto label_116714;
    }
    ctx->pc = 0x11670Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x116714u);
        ctx->pc = 0x116710u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 117));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116218u: goto label_116218;
            case 0x11621Cu: goto label_11621c;
            case 0x116220u: goto label_116220;
            case 0x116224u: goto label_116224;
            case 0x116228u: goto label_116228;
            case 0x11622Cu: goto label_11622c;
            case 0x116230u: goto label_116230;
            case 0x116234u: goto label_116234;
            case 0x116238u: goto label_116238;
            case 0x11623Cu: goto label_11623c;
            case 0x116240u: goto label_116240;
            case 0x116244u: goto label_116244;
            case 0x116248u: goto label_116248;
            case 0x11624Cu: goto label_11624c;
            case 0x116250u: goto label_116250;
            case 0x116254u: goto label_116254;
            case 0x116258u: goto label_116258;
            case 0x11625Cu: goto label_11625c;
            case 0x116260u: goto label_116260;
            case 0x116264u: goto label_116264;
            case 0x116268u: goto label_116268;
            case 0x11626Cu: goto label_11626c;
            case 0x116270u: goto label_116270;
            case 0x116274u: goto label_116274;
            case 0x116278u: goto label_116278;
            case 0x11627Cu: goto label_11627c;
            case 0x116280u: goto label_116280;
            case 0x116284u: goto label_116284;
            case 0x116288u: goto label_116288;
            case 0x11628Cu: goto label_11628c;
            case 0x116290u: goto label_116290;
            case 0x116294u: goto label_116294;
            case 0x116298u: goto label_116298;
            case 0x11629Cu: goto label_11629c;
            case 0x1162A0u: goto label_1162a0;
            case 0x1162A4u: goto label_1162a4;
            case 0x1162A8u: goto label_1162a8;
            case 0x1162ACu: goto label_1162ac;
            case 0x1162B0u: goto label_1162b0;
            case 0x1162B4u: goto label_1162b4;
            case 0x1162B8u: goto label_1162b8;
            case 0x1162BCu: goto label_1162bc;
            case 0x1162C0u: goto label_1162c0;
            case 0x1162C4u: goto label_1162c4;
            case 0x1162C8u: goto label_1162c8;
            case 0x1162CCu: goto label_1162cc;
            case 0x1162D0u: goto label_1162d0;
            case 0x1162D4u: goto label_1162d4;
            case 0x1162D8u: goto label_1162d8;
            case 0x1162DCu: goto label_1162dc;
            case 0x1162E0u: goto label_1162e0;
            case 0x1162E4u: goto label_1162e4;
            case 0x1162E8u: goto label_1162e8;
            case 0x1162ECu: goto label_1162ec;
            case 0x1162F0u: goto label_1162f0;
            case 0x1162F4u: goto label_1162f4;
            case 0x1162F8u: goto label_1162f8;
            case 0x1162FCu: goto label_1162fc;
            case 0x116300u: goto label_116300;
            case 0x116304u: goto label_116304;
            case 0x116308u: goto label_116308;
            case 0x11630Cu: goto label_11630c;
            case 0x116310u: goto label_116310;
            case 0x116314u: goto label_116314;
            case 0x116318u: goto label_116318;
            case 0x11631Cu: goto label_11631c;
            case 0x116320u: goto label_116320;
            case 0x116324u: goto label_116324;
            case 0x116328u: goto label_116328;
            case 0x11632Cu: goto label_11632c;
            case 0x116330u: goto label_116330;
            case 0x116334u: goto label_116334;
            case 0x116338u: goto label_116338;
            case 0x11633Cu: goto label_11633c;
            case 0x116340u: goto label_116340;
            case 0x116344u: goto label_116344;
            case 0x116348u: goto label_116348;
            case 0x11634Cu: goto label_11634c;
            case 0x116350u: goto label_116350;
            case 0x116354u: goto label_116354;
            case 0x116358u: goto label_116358;
            case 0x11635Cu: goto label_11635c;
            case 0x116360u: goto label_116360;
            case 0x116364u: goto label_116364;
            case 0x116368u: goto label_116368;
            case 0x11636Cu: goto label_11636c;
            case 0x116370u: goto label_116370;
            case 0x116374u: goto label_116374;
            case 0x116378u: goto label_116378;
            case 0x11637Cu: goto label_11637c;
            case 0x116380u: goto label_116380;
            case 0x116384u: goto label_116384;
            case 0x116388u: goto label_116388;
            case 0x11638Cu: goto label_11638c;
            case 0x116390u: goto label_116390;
            case 0x116394u: goto label_116394;
            case 0x116398u: goto label_116398;
            case 0x11639Cu: goto label_11639c;
            case 0x1163A0u: goto label_1163a0;
            case 0x1163A4u: goto label_1163a4;
            case 0x1163A8u: goto label_1163a8;
            case 0x1163ACu: goto label_1163ac;
            case 0x1163B0u: goto label_1163b0;
            case 0x1163B4u: goto label_1163b4;
            case 0x1163B8u: goto label_1163b8;
            case 0x1163BCu: goto label_1163bc;
            case 0x1163C0u: goto label_1163c0;
            case 0x1163C4u: goto label_1163c4;
            case 0x1163C8u: goto label_1163c8;
            case 0x1163CCu: goto label_1163cc;
            case 0x1163D0u: goto label_1163d0;
            case 0x1163D4u: goto label_1163d4;
            case 0x1163D8u: goto label_1163d8;
            case 0x1163DCu: goto label_1163dc;
            case 0x1163E0u: goto label_1163e0;
            case 0x1163E4u: goto label_1163e4;
            case 0x1163E8u: goto label_1163e8;
            case 0x1163ECu: goto label_1163ec;
            case 0x1163F0u: goto label_1163f0;
            case 0x1163F4u: goto label_1163f4;
            case 0x1163F8u: goto label_1163f8;
            case 0x1163FCu: goto label_1163fc;
            case 0x116400u: goto label_116400;
            case 0x116404u: goto label_116404;
            case 0x116408u: goto label_116408;
            case 0x11640Cu: goto label_11640c;
            case 0x116410u: goto label_116410;
            case 0x116414u: goto label_116414;
            case 0x116418u: goto label_116418;
            case 0x11641Cu: goto label_11641c;
            case 0x116420u: goto label_116420;
            case 0x116424u: goto label_116424;
            case 0x116428u: goto label_116428;
            case 0x11642Cu: goto label_11642c;
            case 0x116430u: goto label_116430;
            case 0x116434u: goto label_116434;
            case 0x116438u: goto label_116438;
            case 0x11643Cu: goto label_11643c;
            case 0x116440u: goto label_116440;
            case 0x116444u: goto label_116444;
            case 0x116448u: goto label_116448;
            case 0x11644Cu: goto label_11644c;
            case 0x116450u: goto label_116450;
            case 0x116454u: goto label_116454;
            case 0x116458u: goto label_116458;
            case 0x11645Cu: goto label_11645c;
            case 0x116460u: goto label_116460;
            case 0x116464u: goto label_116464;
            case 0x116468u: goto label_116468;
            case 0x11646Cu: goto label_11646c;
            case 0x116470u: goto label_116470;
            case 0x116474u: goto label_116474;
            case 0x116478u: goto label_116478;
            case 0x11647Cu: goto label_11647c;
            case 0x116480u: goto label_116480;
            case 0x116484u: goto label_116484;
            case 0x116488u: goto label_116488;
            case 0x11648Cu: goto label_11648c;
            case 0x116490u: goto label_116490;
            case 0x116494u: goto label_116494;
            case 0x116498u: goto label_116498;
            case 0x11649Cu: goto label_11649c;
            case 0x1164A0u: goto label_1164a0;
            case 0x1164A4u: goto label_1164a4;
            case 0x1164A8u: goto label_1164a8;
            case 0x1164ACu: goto label_1164ac;
            case 0x1164B0u: goto label_1164b0;
            case 0x1164B4u: goto label_1164b4;
            case 0x1164B8u: goto label_1164b8;
            case 0x1164BCu: goto label_1164bc;
            case 0x1164C0u: goto label_1164c0;
            case 0x1164C4u: goto label_1164c4;
            case 0x1164C8u: goto label_1164c8;
            case 0x1164CCu: goto label_1164cc;
            case 0x1164D0u: goto label_1164d0;
            case 0x1164D4u: goto label_1164d4;
            case 0x1164D8u: goto label_1164d8;
            case 0x1164DCu: goto label_1164dc;
            case 0x1164E0u: goto label_1164e0;
            case 0x1164E4u: goto label_1164e4;
            case 0x1164E8u: goto label_1164e8;
            case 0x1164ECu: goto label_1164ec;
            case 0x1164F0u: goto label_1164f0;
            case 0x1164F4u: goto label_1164f4;
            case 0x1164F8u: goto label_1164f8;
            case 0x1164FCu: goto label_1164fc;
            case 0x116500u: goto label_116500;
            case 0x116504u: goto label_116504;
            case 0x116508u: goto label_116508;
            case 0x11650Cu: goto label_11650c;
            case 0x116510u: goto label_116510;
            case 0x116514u: goto label_116514;
            case 0x116518u: goto label_116518;
            case 0x11651Cu: goto label_11651c;
            case 0x116520u: goto label_116520;
            case 0x116524u: goto label_116524;
            case 0x116528u: goto label_116528;
            case 0x11652Cu: goto label_11652c;
            case 0x116530u: goto label_116530;
            case 0x116534u: goto label_116534;
            case 0x116538u: goto label_116538;
            case 0x11653Cu: goto label_11653c;
            case 0x116540u: goto label_116540;
            case 0x116544u: goto label_116544;
            case 0x116548u: goto label_116548;
            case 0x11654Cu: goto label_11654c;
            case 0x116550u: goto label_116550;
            case 0x116554u: goto label_116554;
            case 0x116558u: goto label_116558;
            case 0x11655Cu: goto label_11655c;
            case 0x116560u: goto label_116560;
            case 0x116564u: goto label_116564;
            case 0x116568u: goto label_116568;
            case 0x11656Cu: goto label_11656c;
            case 0x116570u: goto label_116570;
            case 0x116574u: goto label_116574;
            case 0x116578u: goto label_116578;
            case 0x11657Cu: goto label_11657c;
            case 0x116580u: goto label_116580;
            case 0x116584u: goto label_116584;
            case 0x116588u: goto label_116588;
            case 0x11658Cu: goto label_11658c;
            case 0x116590u: goto label_116590;
            case 0x116594u: goto label_116594;
            case 0x116598u: goto label_116598;
            case 0x11659Cu: goto label_11659c;
            case 0x1165A0u: goto label_1165a0;
            case 0x1165A4u: goto label_1165a4;
            case 0x1165A8u: goto label_1165a8;
            case 0x1165ACu: goto label_1165ac;
            case 0x1165B0u: goto label_1165b0;
            case 0x1165B4u: goto label_1165b4;
            case 0x1165B8u: goto label_1165b8;
            case 0x1165BCu: goto label_1165bc;
            case 0x1165C0u: goto label_1165c0;
            case 0x1165C4u: goto label_1165c4;
            case 0x1165C8u: goto label_1165c8;
            case 0x1165CCu: goto label_1165cc;
            case 0x1165D0u: goto label_1165d0;
            case 0x1165D4u: goto label_1165d4;
            case 0x1165D8u: goto label_1165d8;
            case 0x1165DCu: goto label_1165dc;
            case 0x1165E0u: goto label_1165e0;
            case 0x1165E4u: goto label_1165e4;
            case 0x1165E8u: goto label_1165e8;
            case 0x1165ECu: goto label_1165ec;
            case 0x1165F0u: goto label_1165f0;
            case 0x1165F4u: goto label_1165f4;
            case 0x1165F8u: goto label_1165f8;
            case 0x1165FCu: goto label_1165fc;
            case 0x116600u: goto label_116600;
            case 0x116604u: goto label_116604;
            case 0x116608u: goto label_116608;
            case 0x11660Cu: goto label_11660c;
            case 0x116610u: goto label_116610;
            case 0x116614u: goto label_116614;
            case 0x116618u: goto label_116618;
            case 0x11661Cu: goto label_11661c;
            case 0x116620u: goto label_116620;
            case 0x116624u: goto label_116624;
            case 0x116628u: goto label_116628;
            case 0x11662Cu: goto label_11662c;
            case 0x116630u: goto label_116630;
            case 0x116634u: goto label_116634;
            case 0x116638u: goto label_116638;
            case 0x11663Cu: goto label_11663c;
            case 0x116640u: goto label_116640;
            case 0x116644u: goto label_116644;
            case 0x116648u: goto label_116648;
            case 0x11664Cu: goto label_11664c;
            case 0x116650u: goto label_116650;
            case 0x116654u: goto label_116654;
            case 0x116658u: goto label_116658;
            case 0x11665Cu: goto label_11665c;
            case 0x116660u: goto label_116660;
            case 0x116664u: goto label_116664;
            case 0x116668u: goto label_116668;
            case 0x11666Cu: goto label_11666c;
            case 0x116670u: goto label_116670;
            case 0x116674u: goto label_116674;
            case 0x116678u: goto label_116678;
            case 0x11667Cu: goto label_11667c;
            case 0x116680u: goto label_116680;
            case 0x116684u: goto label_116684;
            case 0x116688u: goto label_116688;
            case 0x11668Cu: goto label_11668c;
            case 0x116690u: goto label_116690;
            case 0x116694u: goto label_116694;
            case 0x116698u: goto label_116698;
            case 0x11669Cu: goto label_11669c;
            case 0x1166A0u: goto label_1166a0;
            case 0x1166A4u: goto label_1166a4;
            case 0x1166A8u: goto label_1166a8;
            case 0x1166ACu: goto label_1166ac;
            case 0x1166B0u: goto label_1166b0;
            case 0x1166B4u: goto label_1166b4;
            case 0x1166B8u: goto label_1166b8;
            case 0x1166BCu: goto label_1166bc;
            case 0x1166C0u: goto label_1166c0;
            case 0x1166C4u: goto label_1166c4;
            case 0x1166C8u: goto label_1166c8;
            case 0x1166CCu: goto label_1166cc;
            case 0x1166D0u: goto label_1166d0;
            case 0x1166D4u: goto label_1166d4;
            case 0x1166D8u: goto label_1166d8;
            case 0x1166DCu: goto label_1166dc;
            case 0x1166E0u: goto label_1166e0;
            case 0x1166E4u: goto label_1166e4;
            case 0x1166E8u: goto label_1166e8;
            case 0x1166ECu: goto label_1166ec;
            case 0x1166F0u: goto label_1166f0;
            case 0x1166F4u: goto label_1166f4;
            case 0x1166F8u: goto label_1166f8;
            case 0x1166FCu: goto label_1166fc;
            case 0x116700u: goto label_116700;
            case 0x116704u: goto label_116704;
            case 0x116708u: goto label_116708;
            case 0x11670Cu: goto label_11670c;
            case 0x116710u: goto label_116710;
            case 0x116714u: goto label_116714;
            case 0x116718u: goto label_116718;
            case 0x11671Cu: goto label_11671c;
            case 0x116720u: goto label_116720;
            case 0x116724u: goto label_116724;
            case 0x116728u: goto label_116728;
            case 0x11672Cu: goto label_11672c;
            case 0x116730u: goto label_116730;
            case 0x116734u: goto label_116734;
            case 0x116738u: goto label_116738;
            case 0x11673Cu: goto label_11673c;
            case 0x116740u: goto label_116740;
            case 0x116744u: goto label_116744;
            case 0x116748u: goto label_116748;
            case 0x11674Cu: goto label_11674c;
            case 0x116750u: goto label_116750;
            case 0x116754u: goto label_116754;
            case 0x116758u: goto label_116758;
            case 0x11675Cu: goto label_11675c;
            case 0x116760u: goto label_116760;
            case 0x116764u: goto label_116764;
            case 0x116768u: goto label_116768;
            case 0x11676Cu: goto label_11676c;
            case 0x116770u: goto label_116770;
            case 0x116774u: goto label_116774;
            case 0x116778u: goto label_116778;
            case 0x11677Cu: goto label_11677c;
            case 0x116780u: goto label_116780;
            case 0x116784u: goto label_116784;
            case 0x116788u: goto label_116788;
            case 0x11678Cu: goto label_11678c;
            case 0x116790u: goto label_116790;
            case 0x116794u: goto label_116794;
            case 0x116798u: goto label_116798;
            case 0x11679Cu: goto label_11679c;
            case 0x1167A0u: goto label_1167a0;
            case 0x1167A4u: goto label_1167a4;
            case 0x1167A8u: goto label_1167a8;
            case 0x1167ACu: goto label_1167ac;
            case 0x1167B0u: goto label_1167b0;
            case 0x1167B4u: goto label_1167b4;
            case 0x1167B8u: goto label_1167b8;
            case 0x1167BCu: goto label_1167bc;
            case 0x1167C0u: goto label_1167c0;
            case 0x1167C4u: goto label_1167c4;
            case 0x1167C8u: goto label_1167c8;
            case 0x1167CCu: goto label_1167cc;
            case 0x1167D0u: goto label_1167d0;
            case 0x1167D4u: goto label_1167d4;
            case 0x1167D8u: goto label_1167d8;
            case 0x1167DCu: goto label_1167dc;
            case 0x1167E0u: goto label_1167e0;
            case 0x1167E4u: goto label_1167e4;
            case 0x1167E8u: goto label_1167e8;
            case 0x1167ECu: goto label_1167ec;
            case 0x1167F0u: goto label_1167f0;
            case 0x1167F4u: goto label_1167f4;
            case 0x1167F8u: goto label_1167f8;
            case 0x1167FCu: goto label_1167fc;
            case 0x116800u: goto label_116800;
            case 0x116804u: goto label_116804;
            case 0x116808u: goto label_116808;
            case 0x11680Cu: goto label_11680c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x116714u; }
            if (ctx->pc != 0x116714u) { return; }
        }
    }
    ctx->pc = 0x116714u;
label_116714:
    // 0x116714: 0x8ea39d44
    ctx->pc = 0x116714u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 4294942020)));
label_116718:
    // 0x116718: 0x60f809
label_11671c:
    if (ctx->pc == 0x11671Cu) {
        ctx->pc = 0x11671Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 108));
        ctx->pc = 0x116720u;
        goto label_116720;
    }
    ctx->pc = 0x116718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x116720u);
        ctx->pc = 0x11671Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 108));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116218u: goto label_116218;
            case 0x11621Cu: goto label_11621c;
            case 0x116220u: goto label_116220;
            case 0x116224u: goto label_116224;
            case 0x116228u: goto label_116228;
            case 0x11622Cu: goto label_11622c;
            case 0x116230u: goto label_116230;
            case 0x116234u: goto label_116234;
            case 0x116238u: goto label_116238;
            case 0x11623Cu: goto label_11623c;
            case 0x116240u: goto label_116240;
            case 0x116244u: goto label_116244;
            case 0x116248u: goto label_116248;
            case 0x11624Cu: goto label_11624c;
            case 0x116250u: goto label_116250;
            case 0x116254u: goto label_116254;
            case 0x116258u: goto label_116258;
            case 0x11625Cu: goto label_11625c;
            case 0x116260u: goto label_116260;
            case 0x116264u: goto label_116264;
            case 0x116268u: goto label_116268;
            case 0x11626Cu: goto label_11626c;
            case 0x116270u: goto label_116270;
            case 0x116274u: goto label_116274;
            case 0x116278u: goto label_116278;
            case 0x11627Cu: goto label_11627c;
            case 0x116280u: goto label_116280;
            case 0x116284u: goto label_116284;
            case 0x116288u: goto label_116288;
            case 0x11628Cu: goto label_11628c;
            case 0x116290u: goto label_116290;
            case 0x116294u: goto label_116294;
            case 0x116298u: goto label_116298;
            case 0x11629Cu: goto label_11629c;
            case 0x1162A0u: goto label_1162a0;
            case 0x1162A4u: goto label_1162a4;
            case 0x1162A8u: goto label_1162a8;
            case 0x1162ACu: goto label_1162ac;
            case 0x1162B0u: goto label_1162b0;
            case 0x1162B4u: goto label_1162b4;
            case 0x1162B8u: goto label_1162b8;
            case 0x1162BCu: goto label_1162bc;
            case 0x1162C0u: goto label_1162c0;
            case 0x1162C4u: goto label_1162c4;
            case 0x1162C8u: goto label_1162c8;
            case 0x1162CCu: goto label_1162cc;
            case 0x1162D0u: goto label_1162d0;
            case 0x1162D4u: goto label_1162d4;
            case 0x1162D8u: goto label_1162d8;
            case 0x1162DCu: goto label_1162dc;
            case 0x1162E0u: goto label_1162e0;
            case 0x1162E4u: goto label_1162e4;
            case 0x1162E8u: goto label_1162e8;
            case 0x1162ECu: goto label_1162ec;
            case 0x1162F0u: goto label_1162f0;
            case 0x1162F4u: goto label_1162f4;
            case 0x1162F8u: goto label_1162f8;
            case 0x1162FCu: goto label_1162fc;
            case 0x116300u: goto label_116300;
            case 0x116304u: goto label_116304;
            case 0x116308u: goto label_116308;
            case 0x11630Cu: goto label_11630c;
            case 0x116310u: goto label_116310;
            case 0x116314u: goto label_116314;
            case 0x116318u: goto label_116318;
            case 0x11631Cu: goto label_11631c;
            case 0x116320u: goto label_116320;
            case 0x116324u: goto label_116324;
            case 0x116328u: goto label_116328;
            case 0x11632Cu: goto label_11632c;
            case 0x116330u: goto label_116330;
            case 0x116334u: goto label_116334;
            case 0x116338u: goto label_116338;
            case 0x11633Cu: goto label_11633c;
            case 0x116340u: goto label_116340;
            case 0x116344u: goto label_116344;
            case 0x116348u: goto label_116348;
            case 0x11634Cu: goto label_11634c;
            case 0x116350u: goto label_116350;
            case 0x116354u: goto label_116354;
            case 0x116358u: goto label_116358;
            case 0x11635Cu: goto label_11635c;
            case 0x116360u: goto label_116360;
            case 0x116364u: goto label_116364;
            case 0x116368u: goto label_116368;
            case 0x11636Cu: goto label_11636c;
            case 0x116370u: goto label_116370;
            case 0x116374u: goto label_116374;
            case 0x116378u: goto label_116378;
            case 0x11637Cu: goto label_11637c;
            case 0x116380u: goto label_116380;
            case 0x116384u: goto label_116384;
            case 0x116388u: goto label_116388;
            case 0x11638Cu: goto label_11638c;
            case 0x116390u: goto label_116390;
            case 0x116394u: goto label_116394;
            case 0x116398u: goto label_116398;
            case 0x11639Cu: goto label_11639c;
            case 0x1163A0u: goto label_1163a0;
            case 0x1163A4u: goto label_1163a4;
            case 0x1163A8u: goto label_1163a8;
            case 0x1163ACu: goto label_1163ac;
            case 0x1163B0u: goto label_1163b0;
            case 0x1163B4u: goto label_1163b4;
            case 0x1163B8u: goto label_1163b8;
            case 0x1163BCu: goto label_1163bc;
            case 0x1163C0u: goto label_1163c0;
            case 0x1163C4u: goto label_1163c4;
            case 0x1163C8u: goto label_1163c8;
            case 0x1163CCu: goto label_1163cc;
            case 0x1163D0u: goto label_1163d0;
            case 0x1163D4u: goto label_1163d4;
            case 0x1163D8u: goto label_1163d8;
            case 0x1163DCu: goto label_1163dc;
            case 0x1163E0u: goto label_1163e0;
            case 0x1163E4u: goto label_1163e4;
            case 0x1163E8u: goto label_1163e8;
            case 0x1163ECu: goto label_1163ec;
            case 0x1163F0u: goto label_1163f0;
            case 0x1163F4u: goto label_1163f4;
            case 0x1163F8u: goto label_1163f8;
            case 0x1163FCu: goto label_1163fc;
            case 0x116400u: goto label_116400;
            case 0x116404u: goto label_116404;
            case 0x116408u: goto label_116408;
            case 0x11640Cu: goto label_11640c;
            case 0x116410u: goto label_116410;
            case 0x116414u: goto label_116414;
            case 0x116418u: goto label_116418;
            case 0x11641Cu: goto label_11641c;
            case 0x116420u: goto label_116420;
            case 0x116424u: goto label_116424;
            case 0x116428u: goto label_116428;
            case 0x11642Cu: goto label_11642c;
            case 0x116430u: goto label_116430;
            case 0x116434u: goto label_116434;
            case 0x116438u: goto label_116438;
            case 0x11643Cu: goto label_11643c;
            case 0x116440u: goto label_116440;
            case 0x116444u: goto label_116444;
            case 0x116448u: goto label_116448;
            case 0x11644Cu: goto label_11644c;
            case 0x116450u: goto label_116450;
            case 0x116454u: goto label_116454;
            case 0x116458u: goto label_116458;
            case 0x11645Cu: goto label_11645c;
            case 0x116460u: goto label_116460;
            case 0x116464u: goto label_116464;
            case 0x116468u: goto label_116468;
            case 0x11646Cu: goto label_11646c;
            case 0x116470u: goto label_116470;
            case 0x116474u: goto label_116474;
            case 0x116478u: goto label_116478;
            case 0x11647Cu: goto label_11647c;
            case 0x116480u: goto label_116480;
            case 0x116484u: goto label_116484;
            case 0x116488u: goto label_116488;
            case 0x11648Cu: goto label_11648c;
            case 0x116490u: goto label_116490;
            case 0x116494u: goto label_116494;
            case 0x116498u: goto label_116498;
            case 0x11649Cu: goto label_11649c;
            case 0x1164A0u: goto label_1164a0;
            case 0x1164A4u: goto label_1164a4;
            case 0x1164A8u: goto label_1164a8;
            case 0x1164ACu: goto label_1164ac;
            case 0x1164B0u: goto label_1164b0;
            case 0x1164B4u: goto label_1164b4;
            case 0x1164B8u: goto label_1164b8;
            case 0x1164BCu: goto label_1164bc;
            case 0x1164C0u: goto label_1164c0;
            case 0x1164C4u: goto label_1164c4;
            case 0x1164C8u: goto label_1164c8;
            case 0x1164CCu: goto label_1164cc;
            case 0x1164D0u: goto label_1164d0;
            case 0x1164D4u: goto label_1164d4;
            case 0x1164D8u: goto label_1164d8;
            case 0x1164DCu: goto label_1164dc;
            case 0x1164E0u: goto label_1164e0;
            case 0x1164E4u: goto label_1164e4;
            case 0x1164E8u: goto label_1164e8;
            case 0x1164ECu: goto label_1164ec;
            case 0x1164F0u: goto label_1164f0;
            case 0x1164F4u: goto label_1164f4;
            case 0x1164F8u: goto label_1164f8;
            case 0x1164FCu: goto label_1164fc;
            case 0x116500u: goto label_116500;
            case 0x116504u: goto label_116504;
            case 0x116508u: goto label_116508;
            case 0x11650Cu: goto label_11650c;
            case 0x116510u: goto label_116510;
            case 0x116514u: goto label_116514;
            case 0x116518u: goto label_116518;
            case 0x11651Cu: goto label_11651c;
            case 0x116520u: goto label_116520;
            case 0x116524u: goto label_116524;
            case 0x116528u: goto label_116528;
            case 0x11652Cu: goto label_11652c;
            case 0x116530u: goto label_116530;
            case 0x116534u: goto label_116534;
            case 0x116538u: goto label_116538;
            case 0x11653Cu: goto label_11653c;
            case 0x116540u: goto label_116540;
            case 0x116544u: goto label_116544;
            case 0x116548u: goto label_116548;
            case 0x11654Cu: goto label_11654c;
            case 0x116550u: goto label_116550;
            case 0x116554u: goto label_116554;
            case 0x116558u: goto label_116558;
            case 0x11655Cu: goto label_11655c;
            case 0x116560u: goto label_116560;
            case 0x116564u: goto label_116564;
            case 0x116568u: goto label_116568;
            case 0x11656Cu: goto label_11656c;
            case 0x116570u: goto label_116570;
            case 0x116574u: goto label_116574;
            case 0x116578u: goto label_116578;
            case 0x11657Cu: goto label_11657c;
            case 0x116580u: goto label_116580;
            case 0x116584u: goto label_116584;
            case 0x116588u: goto label_116588;
            case 0x11658Cu: goto label_11658c;
            case 0x116590u: goto label_116590;
            case 0x116594u: goto label_116594;
            case 0x116598u: goto label_116598;
            case 0x11659Cu: goto label_11659c;
            case 0x1165A0u: goto label_1165a0;
            case 0x1165A4u: goto label_1165a4;
            case 0x1165A8u: goto label_1165a8;
            case 0x1165ACu: goto label_1165ac;
            case 0x1165B0u: goto label_1165b0;
            case 0x1165B4u: goto label_1165b4;
            case 0x1165B8u: goto label_1165b8;
            case 0x1165BCu: goto label_1165bc;
            case 0x1165C0u: goto label_1165c0;
            case 0x1165C4u: goto label_1165c4;
            case 0x1165C8u: goto label_1165c8;
            case 0x1165CCu: goto label_1165cc;
            case 0x1165D0u: goto label_1165d0;
            case 0x1165D4u: goto label_1165d4;
            case 0x1165D8u: goto label_1165d8;
            case 0x1165DCu: goto label_1165dc;
            case 0x1165E0u: goto label_1165e0;
            case 0x1165E4u: goto label_1165e4;
            case 0x1165E8u: goto label_1165e8;
            case 0x1165ECu: goto label_1165ec;
            case 0x1165F0u: goto label_1165f0;
            case 0x1165F4u: goto label_1165f4;
            case 0x1165F8u: goto label_1165f8;
            case 0x1165FCu: goto label_1165fc;
            case 0x116600u: goto label_116600;
            case 0x116604u: goto label_116604;
            case 0x116608u: goto label_116608;
            case 0x11660Cu: goto label_11660c;
            case 0x116610u: goto label_116610;
            case 0x116614u: goto label_116614;
            case 0x116618u: goto label_116618;
            case 0x11661Cu: goto label_11661c;
            case 0x116620u: goto label_116620;
            case 0x116624u: goto label_116624;
            case 0x116628u: goto label_116628;
            case 0x11662Cu: goto label_11662c;
            case 0x116630u: goto label_116630;
            case 0x116634u: goto label_116634;
            case 0x116638u: goto label_116638;
            case 0x11663Cu: goto label_11663c;
            case 0x116640u: goto label_116640;
            case 0x116644u: goto label_116644;
            case 0x116648u: goto label_116648;
            case 0x11664Cu: goto label_11664c;
            case 0x116650u: goto label_116650;
            case 0x116654u: goto label_116654;
            case 0x116658u: goto label_116658;
            case 0x11665Cu: goto label_11665c;
            case 0x116660u: goto label_116660;
            case 0x116664u: goto label_116664;
            case 0x116668u: goto label_116668;
            case 0x11666Cu: goto label_11666c;
            case 0x116670u: goto label_116670;
            case 0x116674u: goto label_116674;
            case 0x116678u: goto label_116678;
            case 0x11667Cu: goto label_11667c;
            case 0x116680u: goto label_116680;
            case 0x116684u: goto label_116684;
            case 0x116688u: goto label_116688;
            case 0x11668Cu: goto label_11668c;
            case 0x116690u: goto label_116690;
            case 0x116694u: goto label_116694;
            case 0x116698u: goto label_116698;
            case 0x11669Cu: goto label_11669c;
            case 0x1166A0u: goto label_1166a0;
            case 0x1166A4u: goto label_1166a4;
            case 0x1166A8u: goto label_1166a8;
            case 0x1166ACu: goto label_1166ac;
            case 0x1166B0u: goto label_1166b0;
            case 0x1166B4u: goto label_1166b4;
            case 0x1166B8u: goto label_1166b8;
            case 0x1166BCu: goto label_1166bc;
            case 0x1166C0u: goto label_1166c0;
            case 0x1166C4u: goto label_1166c4;
            case 0x1166C8u: goto label_1166c8;
            case 0x1166CCu: goto label_1166cc;
            case 0x1166D0u: goto label_1166d0;
            case 0x1166D4u: goto label_1166d4;
            case 0x1166D8u: goto label_1166d8;
            case 0x1166DCu: goto label_1166dc;
            case 0x1166E0u: goto label_1166e0;
            case 0x1166E4u: goto label_1166e4;
            case 0x1166E8u: goto label_1166e8;
            case 0x1166ECu: goto label_1166ec;
            case 0x1166F0u: goto label_1166f0;
            case 0x1166F4u: goto label_1166f4;
            case 0x1166F8u: goto label_1166f8;
            case 0x1166FCu: goto label_1166fc;
            case 0x116700u: goto label_116700;
            case 0x116704u: goto label_116704;
            case 0x116708u: goto label_116708;
            case 0x11670Cu: goto label_11670c;
            case 0x116710u: goto label_116710;
            case 0x116714u: goto label_116714;
            case 0x116718u: goto label_116718;
            case 0x11671Cu: goto label_11671c;
            case 0x116720u: goto label_116720;
            case 0x116724u: goto label_116724;
            case 0x116728u: goto label_116728;
            case 0x11672Cu: goto label_11672c;
            case 0x116730u: goto label_116730;
            case 0x116734u: goto label_116734;
            case 0x116738u: goto label_116738;
            case 0x11673Cu: goto label_11673c;
            case 0x116740u: goto label_116740;
            case 0x116744u: goto label_116744;
            case 0x116748u: goto label_116748;
            case 0x11674Cu: goto label_11674c;
            case 0x116750u: goto label_116750;
            case 0x116754u: goto label_116754;
            case 0x116758u: goto label_116758;
            case 0x11675Cu: goto label_11675c;
            case 0x116760u: goto label_116760;
            case 0x116764u: goto label_116764;
            case 0x116768u: goto label_116768;
            case 0x11676Cu: goto label_11676c;
            case 0x116770u: goto label_116770;
            case 0x116774u: goto label_116774;
            case 0x116778u: goto label_116778;
            case 0x11677Cu: goto label_11677c;
            case 0x116780u: goto label_116780;
            case 0x116784u: goto label_116784;
            case 0x116788u: goto label_116788;
            case 0x11678Cu: goto label_11678c;
            case 0x116790u: goto label_116790;
            case 0x116794u: goto label_116794;
            case 0x116798u: goto label_116798;
            case 0x11679Cu: goto label_11679c;
            case 0x1167A0u: goto label_1167a0;
            case 0x1167A4u: goto label_1167a4;
            case 0x1167A8u: goto label_1167a8;
            case 0x1167ACu: goto label_1167ac;
            case 0x1167B0u: goto label_1167b0;
            case 0x1167B4u: goto label_1167b4;
            case 0x1167B8u: goto label_1167b8;
            case 0x1167BCu: goto label_1167bc;
            case 0x1167C0u: goto label_1167c0;
            case 0x1167C4u: goto label_1167c4;
            case 0x1167C8u: goto label_1167c8;
            case 0x1167CCu: goto label_1167cc;
            case 0x1167D0u: goto label_1167d0;
            case 0x1167D4u: goto label_1167d4;
            case 0x1167D8u: goto label_1167d8;
            case 0x1167DCu: goto label_1167dc;
            case 0x1167E0u: goto label_1167e0;
            case 0x1167E4u: goto label_1167e4;
            case 0x1167E8u: goto label_1167e8;
            case 0x1167ECu: goto label_1167ec;
            case 0x1167F0u: goto label_1167f0;
            case 0x1167F4u: goto label_1167f4;
            case 0x1167F8u: goto label_1167f8;
            case 0x1167FCu: goto label_1167fc;
            case 0x116800u: goto label_116800;
            case 0x116804u: goto label_116804;
            case 0x116808u: goto label_116808;
            case 0x11680Cu: goto label_11680c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x116720u; }
            if (ctx->pc != 0x116720u) { return; }
        }
    }
    ctx->pc = 0x116720u;
label_116720:
    // 0x116720: 0x8ea29d44
    ctx->pc = 0x116720u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294942020)));
label_116724:
    // 0x116724: 0x40f809
label_116728:
    if (ctx->pc == 0x116728u) {
        ctx->pc = 0x116728u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 108));
        ctx->pc = 0x11672Cu;
        goto label_11672c;
    }
    ctx->pc = 0x116724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11672Cu);
        ctx->pc = 0x116728u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 108));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116218u: goto label_116218;
            case 0x11621Cu: goto label_11621c;
            case 0x116220u: goto label_116220;
            case 0x116224u: goto label_116224;
            case 0x116228u: goto label_116228;
            case 0x11622Cu: goto label_11622c;
            case 0x116230u: goto label_116230;
            case 0x116234u: goto label_116234;
            case 0x116238u: goto label_116238;
            case 0x11623Cu: goto label_11623c;
            case 0x116240u: goto label_116240;
            case 0x116244u: goto label_116244;
            case 0x116248u: goto label_116248;
            case 0x11624Cu: goto label_11624c;
            case 0x116250u: goto label_116250;
            case 0x116254u: goto label_116254;
            case 0x116258u: goto label_116258;
            case 0x11625Cu: goto label_11625c;
            case 0x116260u: goto label_116260;
            case 0x116264u: goto label_116264;
            case 0x116268u: goto label_116268;
            case 0x11626Cu: goto label_11626c;
            case 0x116270u: goto label_116270;
            case 0x116274u: goto label_116274;
            case 0x116278u: goto label_116278;
            case 0x11627Cu: goto label_11627c;
            case 0x116280u: goto label_116280;
            case 0x116284u: goto label_116284;
            case 0x116288u: goto label_116288;
            case 0x11628Cu: goto label_11628c;
            case 0x116290u: goto label_116290;
            case 0x116294u: goto label_116294;
            case 0x116298u: goto label_116298;
            case 0x11629Cu: goto label_11629c;
            case 0x1162A0u: goto label_1162a0;
            case 0x1162A4u: goto label_1162a4;
            case 0x1162A8u: goto label_1162a8;
            case 0x1162ACu: goto label_1162ac;
            case 0x1162B0u: goto label_1162b0;
            case 0x1162B4u: goto label_1162b4;
            case 0x1162B8u: goto label_1162b8;
            case 0x1162BCu: goto label_1162bc;
            case 0x1162C0u: goto label_1162c0;
            case 0x1162C4u: goto label_1162c4;
            case 0x1162C8u: goto label_1162c8;
            case 0x1162CCu: goto label_1162cc;
            case 0x1162D0u: goto label_1162d0;
            case 0x1162D4u: goto label_1162d4;
            case 0x1162D8u: goto label_1162d8;
            case 0x1162DCu: goto label_1162dc;
            case 0x1162E0u: goto label_1162e0;
            case 0x1162E4u: goto label_1162e4;
            case 0x1162E8u: goto label_1162e8;
            case 0x1162ECu: goto label_1162ec;
            case 0x1162F0u: goto label_1162f0;
            case 0x1162F4u: goto label_1162f4;
            case 0x1162F8u: goto label_1162f8;
            case 0x1162FCu: goto label_1162fc;
            case 0x116300u: goto label_116300;
            case 0x116304u: goto label_116304;
            case 0x116308u: goto label_116308;
            case 0x11630Cu: goto label_11630c;
            case 0x116310u: goto label_116310;
            case 0x116314u: goto label_116314;
            case 0x116318u: goto label_116318;
            case 0x11631Cu: goto label_11631c;
            case 0x116320u: goto label_116320;
            case 0x116324u: goto label_116324;
            case 0x116328u: goto label_116328;
            case 0x11632Cu: goto label_11632c;
            case 0x116330u: goto label_116330;
            case 0x116334u: goto label_116334;
            case 0x116338u: goto label_116338;
            case 0x11633Cu: goto label_11633c;
            case 0x116340u: goto label_116340;
            case 0x116344u: goto label_116344;
            case 0x116348u: goto label_116348;
            case 0x11634Cu: goto label_11634c;
            case 0x116350u: goto label_116350;
            case 0x116354u: goto label_116354;
            case 0x116358u: goto label_116358;
            case 0x11635Cu: goto label_11635c;
            case 0x116360u: goto label_116360;
            case 0x116364u: goto label_116364;
            case 0x116368u: goto label_116368;
            case 0x11636Cu: goto label_11636c;
            case 0x116370u: goto label_116370;
            case 0x116374u: goto label_116374;
            case 0x116378u: goto label_116378;
            case 0x11637Cu: goto label_11637c;
            case 0x116380u: goto label_116380;
            case 0x116384u: goto label_116384;
            case 0x116388u: goto label_116388;
            case 0x11638Cu: goto label_11638c;
            case 0x116390u: goto label_116390;
            case 0x116394u: goto label_116394;
            case 0x116398u: goto label_116398;
            case 0x11639Cu: goto label_11639c;
            case 0x1163A0u: goto label_1163a0;
            case 0x1163A4u: goto label_1163a4;
            case 0x1163A8u: goto label_1163a8;
            case 0x1163ACu: goto label_1163ac;
            case 0x1163B0u: goto label_1163b0;
            case 0x1163B4u: goto label_1163b4;
            case 0x1163B8u: goto label_1163b8;
            case 0x1163BCu: goto label_1163bc;
            case 0x1163C0u: goto label_1163c0;
            case 0x1163C4u: goto label_1163c4;
            case 0x1163C8u: goto label_1163c8;
            case 0x1163CCu: goto label_1163cc;
            case 0x1163D0u: goto label_1163d0;
            case 0x1163D4u: goto label_1163d4;
            case 0x1163D8u: goto label_1163d8;
            case 0x1163DCu: goto label_1163dc;
            case 0x1163E0u: goto label_1163e0;
            case 0x1163E4u: goto label_1163e4;
            case 0x1163E8u: goto label_1163e8;
            case 0x1163ECu: goto label_1163ec;
            case 0x1163F0u: goto label_1163f0;
            case 0x1163F4u: goto label_1163f4;
            case 0x1163F8u: goto label_1163f8;
            case 0x1163FCu: goto label_1163fc;
            case 0x116400u: goto label_116400;
            case 0x116404u: goto label_116404;
            case 0x116408u: goto label_116408;
            case 0x11640Cu: goto label_11640c;
            case 0x116410u: goto label_116410;
            case 0x116414u: goto label_116414;
            case 0x116418u: goto label_116418;
            case 0x11641Cu: goto label_11641c;
            case 0x116420u: goto label_116420;
            case 0x116424u: goto label_116424;
            case 0x116428u: goto label_116428;
            case 0x11642Cu: goto label_11642c;
            case 0x116430u: goto label_116430;
            case 0x116434u: goto label_116434;
            case 0x116438u: goto label_116438;
            case 0x11643Cu: goto label_11643c;
            case 0x116440u: goto label_116440;
            case 0x116444u: goto label_116444;
            case 0x116448u: goto label_116448;
            case 0x11644Cu: goto label_11644c;
            case 0x116450u: goto label_116450;
            case 0x116454u: goto label_116454;
            case 0x116458u: goto label_116458;
            case 0x11645Cu: goto label_11645c;
            case 0x116460u: goto label_116460;
            case 0x116464u: goto label_116464;
            case 0x116468u: goto label_116468;
            case 0x11646Cu: goto label_11646c;
            case 0x116470u: goto label_116470;
            case 0x116474u: goto label_116474;
            case 0x116478u: goto label_116478;
            case 0x11647Cu: goto label_11647c;
            case 0x116480u: goto label_116480;
            case 0x116484u: goto label_116484;
            case 0x116488u: goto label_116488;
            case 0x11648Cu: goto label_11648c;
            case 0x116490u: goto label_116490;
            case 0x116494u: goto label_116494;
            case 0x116498u: goto label_116498;
            case 0x11649Cu: goto label_11649c;
            case 0x1164A0u: goto label_1164a0;
            case 0x1164A4u: goto label_1164a4;
            case 0x1164A8u: goto label_1164a8;
            case 0x1164ACu: goto label_1164ac;
            case 0x1164B0u: goto label_1164b0;
            case 0x1164B4u: goto label_1164b4;
            case 0x1164B8u: goto label_1164b8;
            case 0x1164BCu: goto label_1164bc;
            case 0x1164C0u: goto label_1164c0;
            case 0x1164C4u: goto label_1164c4;
            case 0x1164C8u: goto label_1164c8;
            case 0x1164CCu: goto label_1164cc;
            case 0x1164D0u: goto label_1164d0;
            case 0x1164D4u: goto label_1164d4;
            case 0x1164D8u: goto label_1164d8;
            case 0x1164DCu: goto label_1164dc;
            case 0x1164E0u: goto label_1164e0;
            case 0x1164E4u: goto label_1164e4;
            case 0x1164E8u: goto label_1164e8;
            case 0x1164ECu: goto label_1164ec;
            case 0x1164F0u: goto label_1164f0;
            case 0x1164F4u: goto label_1164f4;
            case 0x1164F8u: goto label_1164f8;
            case 0x1164FCu: goto label_1164fc;
            case 0x116500u: goto label_116500;
            case 0x116504u: goto label_116504;
            case 0x116508u: goto label_116508;
            case 0x11650Cu: goto label_11650c;
            case 0x116510u: goto label_116510;
            case 0x116514u: goto label_116514;
            case 0x116518u: goto label_116518;
            case 0x11651Cu: goto label_11651c;
            case 0x116520u: goto label_116520;
            case 0x116524u: goto label_116524;
            case 0x116528u: goto label_116528;
            case 0x11652Cu: goto label_11652c;
            case 0x116530u: goto label_116530;
            case 0x116534u: goto label_116534;
            case 0x116538u: goto label_116538;
            case 0x11653Cu: goto label_11653c;
            case 0x116540u: goto label_116540;
            case 0x116544u: goto label_116544;
            case 0x116548u: goto label_116548;
            case 0x11654Cu: goto label_11654c;
            case 0x116550u: goto label_116550;
            case 0x116554u: goto label_116554;
            case 0x116558u: goto label_116558;
            case 0x11655Cu: goto label_11655c;
            case 0x116560u: goto label_116560;
            case 0x116564u: goto label_116564;
            case 0x116568u: goto label_116568;
            case 0x11656Cu: goto label_11656c;
            case 0x116570u: goto label_116570;
            case 0x116574u: goto label_116574;
            case 0x116578u: goto label_116578;
            case 0x11657Cu: goto label_11657c;
            case 0x116580u: goto label_116580;
            case 0x116584u: goto label_116584;
            case 0x116588u: goto label_116588;
            case 0x11658Cu: goto label_11658c;
            case 0x116590u: goto label_116590;
            case 0x116594u: goto label_116594;
            case 0x116598u: goto label_116598;
            case 0x11659Cu: goto label_11659c;
            case 0x1165A0u: goto label_1165a0;
            case 0x1165A4u: goto label_1165a4;
            case 0x1165A8u: goto label_1165a8;
            case 0x1165ACu: goto label_1165ac;
            case 0x1165B0u: goto label_1165b0;
            case 0x1165B4u: goto label_1165b4;
            case 0x1165B8u: goto label_1165b8;
            case 0x1165BCu: goto label_1165bc;
            case 0x1165C0u: goto label_1165c0;
            case 0x1165C4u: goto label_1165c4;
            case 0x1165C8u: goto label_1165c8;
            case 0x1165CCu: goto label_1165cc;
            case 0x1165D0u: goto label_1165d0;
            case 0x1165D4u: goto label_1165d4;
            case 0x1165D8u: goto label_1165d8;
            case 0x1165DCu: goto label_1165dc;
            case 0x1165E0u: goto label_1165e0;
            case 0x1165E4u: goto label_1165e4;
            case 0x1165E8u: goto label_1165e8;
            case 0x1165ECu: goto label_1165ec;
            case 0x1165F0u: goto label_1165f0;
            case 0x1165F4u: goto label_1165f4;
            case 0x1165F8u: goto label_1165f8;
            case 0x1165FCu: goto label_1165fc;
            case 0x116600u: goto label_116600;
            case 0x116604u: goto label_116604;
            case 0x116608u: goto label_116608;
            case 0x11660Cu: goto label_11660c;
            case 0x116610u: goto label_116610;
            case 0x116614u: goto label_116614;
            case 0x116618u: goto label_116618;
            case 0x11661Cu: goto label_11661c;
            case 0x116620u: goto label_116620;
            case 0x116624u: goto label_116624;
            case 0x116628u: goto label_116628;
            case 0x11662Cu: goto label_11662c;
            case 0x116630u: goto label_116630;
            case 0x116634u: goto label_116634;
            case 0x116638u: goto label_116638;
            case 0x11663Cu: goto label_11663c;
            case 0x116640u: goto label_116640;
            case 0x116644u: goto label_116644;
            case 0x116648u: goto label_116648;
            case 0x11664Cu: goto label_11664c;
            case 0x116650u: goto label_116650;
            case 0x116654u: goto label_116654;
            case 0x116658u: goto label_116658;
            case 0x11665Cu: goto label_11665c;
            case 0x116660u: goto label_116660;
            case 0x116664u: goto label_116664;
            case 0x116668u: goto label_116668;
            case 0x11666Cu: goto label_11666c;
            case 0x116670u: goto label_116670;
            case 0x116674u: goto label_116674;
            case 0x116678u: goto label_116678;
            case 0x11667Cu: goto label_11667c;
            case 0x116680u: goto label_116680;
            case 0x116684u: goto label_116684;
            case 0x116688u: goto label_116688;
            case 0x11668Cu: goto label_11668c;
            case 0x116690u: goto label_116690;
            case 0x116694u: goto label_116694;
            case 0x116698u: goto label_116698;
            case 0x11669Cu: goto label_11669c;
            case 0x1166A0u: goto label_1166a0;
            case 0x1166A4u: goto label_1166a4;
            case 0x1166A8u: goto label_1166a8;
            case 0x1166ACu: goto label_1166ac;
            case 0x1166B0u: goto label_1166b0;
            case 0x1166B4u: goto label_1166b4;
            case 0x1166B8u: goto label_1166b8;
            case 0x1166BCu: goto label_1166bc;
            case 0x1166C0u: goto label_1166c0;
            case 0x1166C4u: goto label_1166c4;
            case 0x1166C8u: goto label_1166c8;
            case 0x1166CCu: goto label_1166cc;
            case 0x1166D0u: goto label_1166d0;
            case 0x1166D4u: goto label_1166d4;
            case 0x1166D8u: goto label_1166d8;
            case 0x1166DCu: goto label_1166dc;
            case 0x1166E0u: goto label_1166e0;
            case 0x1166E4u: goto label_1166e4;
            case 0x1166E8u: goto label_1166e8;
            case 0x1166ECu: goto label_1166ec;
            case 0x1166F0u: goto label_1166f0;
            case 0x1166F4u: goto label_1166f4;
            case 0x1166F8u: goto label_1166f8;
            case 0x1166FCu: goto label_1166fc;
            case 0x116700u: goto label_116700;
            case 0x116704u: goto label_116704;
            case 0x116708u: goto label_116708;
            case 0x11670Cu: goto label_11670c;
            case 0x116710u: goto label_116710;
            case 0x116714u: goto label_116714;
            case 0x116718u: goto label_116718;
            case 0x11671Cu: goto label_11671c;
            case 0x116720u: goto label_116720;
            case 0x116724u: goto label_116724;
            case 0x116728u: goto label_116728;
            case 0x11672Cu: goto label_11672c;
            case 0x116730u: goto label_116730;
            case 0x116734u: goto label_116734;
            case 0x116738u: goto label_116738;
            case 0x11673Cu: goto label_11673c;
            case 0x116740u: goto label_116740;
            case 0x116744u: goto label_116744;
            case 0x116748u: goto label_116748;
            case 0x11674Cu: goto label_11674c;
            case 0x116750u: goto label_116750;
            case 0x116754u: goto label_116754;
            case 0x116758u: goto label_116758;
            case 0x11675Cu: goto label_11675c;
            case 0x116760u: goto label_116760;
            case 0x116764u: goto label_116764;
            case 0x116768u: goto label_116768;
            case 0x11676Cu: goto label_11676c;
            case 0x116770u: goto label_116770;
            case 0x116774u: goto label_116774;
            case 0x116778u: goto label_116778;
            case 0x11677Cu: goto label_11677c;
            case 0x116780u: goto label_116780;
            case 0x116784u: goto label_116784;
            case 0x116788u: goto label_116788;
            case 0x11678Cu: goto label_11678c;
            case 0x116790u: goto label_116790;
            case 0x116794u: goto label_116794;
            case 0x116798u: goto label_116798;
            case 0x11679Cu: goto label_11679c;
            case 0x1167A0u: goto label_1167a0;
            case 0x1167A4u: goto label_1167a4;
            case 0x1167A8u: goto label_1167a8;
            case 0x1167ACu: goto label_1167ac;
            case 0x1167B0u: goto label_1167b0;
            case 0x1167B4u: goto label_1167b4;
            case 0x1167B8u: goto label_1167b8;
            case 0x1167BCu: goto label_1167bc;
            case 0x1167C0u: goto label_1167c0;
            case 0x1167C4u: goto label_1167c4;
            case 0x1167C8u: goto label_1167c8;
            case 0x1167CCu: goto label_1167cc;
            case 0x1167D0u: goto label_1167d0;
            case 0x1167D4u: goto label_1167d4;
            case 0x1167D8u: goto label_1167d8;
            case 0x1167DCu: goto label_1167dc;
            case 0x1167E0u: goto label_1167e0;
            case 0x1167E4u: goto label_1167e4;
            case 0x1167E8u: goto label_1167e8;
            case 0x1167ECu: goto label_1167ec;
            case 0x1167F0u: goto label_1167f0;
            case 0x1167F4u: goto label_1167f4;
            case 0x1167F8u: goto label_1167f8;
            case 0x1167FCu: goto label_1167fc;
            case 0x116800u: goto label_116800;
            case 0x116804u: goto label_116804;
            case 0x116808u: goto label_116808;
            case 0x11680Cu: goto label_11680c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11672Cu; }
            if (ctx->pc != 0x11672Cu) { return; }
        }
    }
    ctx->pc = 0x11672Cu;
label_11672c:
    // 0x11672c: 0x8ea39d44
    ctx->pc = 0x11672cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 4294942020)));
label_116730:
    // 0x116730: 0x60f809
label_116734:
    if (ctx->pc == 0x116734u) {
        ctx->pc = 0x116734u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 41));
        ctx->pc = 0x116738u;
        goto label_116738;
    }
    ctx->pc = 0x116730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x116738u);
        ctx->pc = 0x116734u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 41));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116218u: goto label_116218;
            case 0x11621Cu: goto label_11621c;
            case 0x116220u: goto label_116220;
            case 0x116224u: goto label_116224;
            case 0x116228u: goto label_116228;
            case 0x11622Cu: goto label_11622c;
            case 0x116230u: goto label_116230;
            case 0x116234u: goto label_116234;
            case 0x116238u: goto label_116238;
            case 0x11623Cu: goto label_11623c;
            case 0x116240u: goto label_116240;
            case 0x116244u: goto label_116244;
            case 0x116248u: goto label_116248;
            case 0x11624Cu: goto label_11624c;
            case 0x116250u: goto label_116250;
            case 0x116254u: goto label_116254;
            case 0x116258u: goto label_116258;
            case 0x11625Cu: goto label_11625c;
            case 0x116260u: goto label_116260;
            case 0x116264u: goto label_116264;
            case 0x116268u: goto label_116268;
            case 0x11626Cu: goto label_11626c;
            case 0x116270u: goto label_116270;
            case 0x116274u: goto label_116274;
            case 0x116278u: goto label_116278;
            case 0x11627Cu: goto label_11627c;
            case 0x116280u: goto label_116280;
            case 0x116284u: goto label_116284;
            case 0x116288u: goto label_116288;
            case 0x11628Cu: goto label_11628c;
            case 0x116290u: goto label_116290;
            case 0x116294u: goto label_116294;
            case 0x116298u: goto label_116298;
            case 0x11629Cu: goto label_11629c;
            case 0x1162A0u: goto label_1162a0;
            case 0x1162A4u: goto label_1162a4;
            case 0x1162A8u: goto label_1162a8;
            case 0x1162ACu: goto label_1162ac;
            case 0x1162B0u: goto label_1162b0;
            case 0x1162B4u: goto label_1162b4;
            case 0x1162B8u: goto label_1162b8;
            case 0x1162BCu: goto label_1162bc;
            case 0x1162C0u: goto label_1162c0;
            case 0x1162C4u: goto label_1162c4;
            case 0x1162C8u: goto label_1162c8;
            case 0x1162CCu: goto label_1162cc;
            case 0x1162D0u: goto label_1162d0;
            case 0x1162D4u: goto label_1162d4;
            case 0x1162D8u: goto label_1162d8;
            case 0x1162DCu: goto label_1162dc;
            case 0x1162E0u: goto label_1162e0;
            case 0x1162E4u: goto label_1162e4;
            case 0x1162E8u: goto label_1162e8;
            case 0x1162ECu: goto label_1162ec;
            case 0x1162F0u: goto label_1162f0;
            case 0x1162F4u: goto label_1162f4;
            case 0x1162F8u: goto label_1162f8;
            case 0x1162FCu: goto label_1162fc;
            case 0x116300u: goto label_116300;
            case 0x116304u: goto label_116304;
            case 0x116308u: goto label_116308;
            case 0x11630Cu: goto label_11630c;
            case 0x116310u: goto label_116310;
            case 0x116314u: goto label_116314;
            case 0x116318u: goto label_116318;
            case 0x11631Cu: goto label_11631c;
            case 0x116320u: goto label_116320;
            case 0x116324u: goto label_116324;
            case 0x116328u: goto label_116328;
            case 0x11632Cu: goto label_11632c;
            case 0x116330u: goto label_116330;
            case 0x116334u: goto label_116334;
            case 0x116338u: goto label_116338;
            case 0x11633Cu: goto label_11633c;
            case 0x116340u: goto label_116340;
            case 0x116344u: goto label_116344;
            case 0x116348u: goto label_116348;
            case 0x11634Cu: goto label_11634c;
            case 0x116350u: goto label_116350;
            case 0x116354u: goto label_116354;
            case 0x116358u: goto label_116358;
            case 0x11635Cu: goto label_11635c;
            case 0x116360u: goto label_116360;
            case 0x116364u: goto label_116364;
            case 0x116368u: goto label_116368;
            case 0x11636Cu: goto label_11636c;
            case 0x116370u: goto label_116370;
            case 0x116374u: goto label_116374;
            case 0x116378u: goto label_116378;
            case 0x11637Cu: goto label_11637c;
            case 0x116380u: goto label_116380;
            case 0x116384u: goto label_116384;
            case 0x116388u: goto label_116388;
            case 0x11638Cu: goto label_11638c;
            case 0x116390u: goto label_116390;
            case 0x116394u: goto label_116394;
            case 0x116398u: goto label_116398;
            case 0x11639Cu: goto label_11639c;
            case 0x1163A0u: goto label_1163a0;
            case 0x1163A4u: goto label_1163a4;
            case 0x1163A8u: goto label_1163a8;
            case 0x1163ACu: goto label_1163ac;
            case 0x1163B0u: goto label_1163b0;
            case 0x1163B4u: goto label_1163b4;
            case 0x1163B8u: goto label_1163b8;
            case 0x1163BCu: goto label_1163bc;
            case 0x1163C0u: goto label_1163c0;
            case 0x1163C4u: goto label_1163c4;
            case 0x1163C8u: goto label_1163c8;
            case 0x1163CCu: goto label_1163cc;
            case 0x1163D0u: goto label_1163d0;
            case 0x1163D4u: goto label_1163d4;
            case 0x1163D8u: goto label_1163d8;
            case 0x1163DCu: goto label_1163dc;
            case 0x1163E0u: goto label_1163e0;
            case 0x1163E4u: goto label_1163e4;
            case 0x1163E8u: goto label_1163e8;
            case 0x1163ECu: goto label_1163ec;
            case 0x1163F0u: goto label_1163f0;
            case 0x1163F4u: goto label_1163f4;
            case 0x1163F8u: goto label_1163f8;
            case 0x1163FCu: goto label_1163fc;
            case 0x116400u: goto label_116400;
            case 0x116404u: goto label_116404;
            case 0x116408u: goto label_116408;
            case 0x11640Cu: goto label_11640c;
            case 0x116410u: goto label_116410;
            case 0x116414u: goto label_116414;
            case 0x116418u: goto label_116418;
            case 0x11641Cu: goto label_11641c;
            case 0x116420u: goto label_116420;
            case 0x116424u: goto label_116424;
            case 0x116428u: goto label_116428;
            case 0x11642Cu: goto label_11642c;
            case 0x116430u: goto label_116430;
            case 0x116434u: goto label_116434;
            case 0x116438u: goto label_116438;
            case 0x11643Cu: goto label_11643c;
            case 0x116440u: goto label_116440;
            case 0x116444u: goto label_116444;
            case 0x116448u: goto label_116448;
            case 0x11644Cu: goto label_11644c;
            case 0x116450u: goto label_116450;
            case 0x116454u: goto label_116454;
            case 0x116458u: goto label_116458;
            case 0x11645Cu: goto label_11645c;
            case 0x116460u: goto label_116460;
            case 0x116464u: goto label_116464;
            case 0x116468u: goto label_116468;
            case 0x11646Cu: goto label_11646c;
            case 0x116470u: goto label_116470;
            case 0x116474u: goto label_116474;
            case 0x116478u: goto label_116478;
            case 0x11647Cu: goto label_11647c;
            case 0x116480u: goto label_116480;
            case 0x116484u: goto label_116484;
            case 0x116488u: goto label_116488;
            case 0x11648Cu: goto label_11648c;
            case 0x116490u: goto label_116490;
            case 0x116494u: goto label_116494;
            case 0x116498u: goto label_116498;
            case 0x11649Cu: goto label_11649c;
            case 0x1164A0u: goto label_1164a0;
            case 0x1164A4u: goto label_1164a4;
            case 0x1164A8u: goto label_1164a8;
            case 0x1164ACu: goto label_1164ac;
            case 0x1164B0u: goto label_1164b0;
            case 0x1164B4u: goto label_1164b4;
            case 0x1164B8u: goto label_1164b8;
            case 0x1164BCu: goto label_1164bc;
            case 0x1164C0u: goto label_1164c0;
            case 0x1164C4u: goto label_1164c4;
            case 0x1164C8u: goto label_1164c8;
            case 0x1164CCu: goto label_1164cc;
            case 0x1164D0u: goto label_1164d0;
            case 0x1164D4u: goto label_1164d4;
            case 0x1164D8u: goto label_1164d8;
            case 0x1164DCu: goto label_1164dc;
            case 0x1164E0u: goto label_1164e0;
            case 0x1164E4u: goto label_1164e4;
            case 0x1164E8u: goto label_1164e8;
            case 0x1164ECu: goto label_1164ec;
            case 0x1164F0u: goto label_1164f0;
            case 0x1164F4u: goto label_1164f4;
            case 0x1164F8u: goto label_1164f8;
            case 0x1164FCu: goto label_1164fc;
            case 0x116500u: goto label_116500;
            case 0x116504u: goto label_116504;
            case 0x116508u: goto label_116508;
            case 0x11650Cu: goto label_11650c;
            case 0x116510u: goto label_116510;
            case 0x116514u: goto label_116514;
            case 0x116518u: goto label_116518;
            case 0x11651Cu: goto label_11651c;
            case 0x116520u: goto label_116520;
            case 0x116524u: goto label_116524;
            case 0x116528u: goto label_116528;
            case 0x11652Cu: goto label_11652c;
            case 0x116530u: goto label_116530;
            case 0x116534u: goto label_116534;
            case 0x116538u: goto label_116538;
            case 0x11653Cu: goto label_11653c;
            case 0x116540u: goto label_116540;
            case 0x116544u: goto label_116544;
            case 0x116548u: goto label_116548;
            case 0x11654Cu: goto label_11654c;
            case 0x116550u: goto label_116550;
            case 0x116554u: goto label_116554;
            case 0x116558u: goto label_116558;
            case 0x11655Cu: goto label_11655c;
            case 0x116560u: goto label_116560;
            case 0x116564u: goto label_116564;
            case 0x116568u: goto label_116568;
            case 0x11656Cu: goto label_11656c;
            case 0x116570u: goto label_116570;
            case 0x116574u: goto label_116574;
            case 0x116578u: goto label_116578;
            case 0x11657Cu: goto label_11657c;
            case 0x116580u: goto label_116580;
            case 0x116584u: goto label_116584;
            case 0x116588u: goto label_116588;
            case 0x11658Cu: goto label_11658c;
            case 0x116590u: goto label_116590;
            case 0x116594u: goto label_116594;
            case 0x116598u: goto label_116598;
            case 0x11659Cu: goto label_11659c;
            case 0x1165A0u: goto label_1165a0;
            case 0x1165A4u: goto label_1165a4;
            case 0x1165A8u: goto label_1165a8;
            case 0x1165ACu: goto label_1165ac;
            case 0x1165B0u: goto label_1165b0;
            case 0x1165B4u: goto label_1165b4;
            case 0x1165B8u: goto label_1165b8;
            case 0x1165BCu: goto label_1165bc;
            case 0x1165C0u: goto label_1165c0;
            case 0x1165C4u: goto label_1165c4;
            case 0x1165C8u: goto label_1165c8;
            case 0x1165CCu: goto label_1165cc;
            case 0x1165D0u: goto label_1165d0;
            case 0x1165D4u: goto label_1165d4;
            case 0x1165D8u: goto label_1165d8;
            case 0x1165DCu: goto label_1165dc;
            case 0x1165E0u: goto label_1165e0;
            case 0x1165E4u: goto label_1165e4;
            case 0x1165E8u: goto label_1165e8;
            case 0x1165ECu: goto label_1165ec;
            case 0x1165F0u: goto label_1165f0;
            case 0x1165F4u: goto label_1165f4;
            case 0x1165F8u: goto label_1165f8;
            case 0x1165FCu: goto label_1165fc;
            case 0x116600u: goto label_116600;
            case 0x116604u: goto label_116604;
            case 0x116608u: goto label_116608;
            case 0x11660Cu: goto label_11660c;
            case 0x116610u: goto label_116610;
            case 0x116614u: goto label_116614;
            case 0x116618u: goto label_116618;
            case 0x11661Cu: goto label_11661c;
            case 0x116620u: goto label_116620;
            case 0x116624u: goto label_116624;
            case 0x116628u: goto label_116628;
            case 0x11662Cu: goto label_11662c;
            case 0x116630u: goto label_116630;
            case 0x116634u: goto label_116634;
            case 0x116638u: goto label_116638;
            case 0x11663Cu: goto label_11663c;
            case 0x116640u: goto label_116640;
            case 0x116644u: goto label_116644;
            case 0x116648u: goto label_116648;
            case 0x11664Cu: goto label_11664c;
            case 0x116650u: goto label_116650;
            case 0x116654u: goto label_116654;
            case 0x116658u: goto label_116658;
            case 0x11665Cu: goto label_11665c;
            case 0x116660u: goto label_116660;
            case 0x116664u: goto label_116664;
            case 0x116668u: goto label_116668;
            case 0x11666Cu: goto label_11666c;
            case 0x116670u: goto label_116670;
            case 0x116674u: goto label_116674;
            case 0x116678u: goto label_116678;
            case 0x11667Cu: goto label_11667c;
            case 0x116680u: goto label_116680;
            case 0x116684u: goto label_116684;
            case 0x116688u: goto label_116688;
            case 0x11668Cu: goto label_11668c;
            case 0x116690u: goto label_116690;
            case 0x116694u: goto label_116694;
            case 0x116698u: goto label_116698;
            case 0x11669Cu: goto label_11669c;
            case 0x1166A0u: goto label_1166a0;
            case 0x1166A4u: goto label_1166a4;
            case 0x1166A8u: goto label_1166a8;
            case 0x1166ACu: goto label_1166ac;
            case 0x1166B0u: goto label_1166b0;
            case 0x1166B4u: goto label_1166b4;
            case 0x1166B8u: goto label_1166b8;
            case 0x1166BCu: goto label_1166bc;
            case 0x1166C0u: goto label_1166c0;
            case 0x1166C4u: goto label_1166c4;
            case 0x1166C8u: goto label_1166c8;
            case 0x1166CCu: goto label_1166cc;
            case 0x1166D0u: goto label_1166d0;
            case 0x1166D4u: goto label_1166d4;
            case 0x1166D8u: goto label_1166d8;
            case 0x1166DCu: goto label_1166dc;
            case 0x1166E0u: goto label_1166e0;
            case 0x1166E4u: goto label_1166e4;
            case 0x1166E8u: goto label_1166e8;
            case 0x1166ECu: goto label_1166ec;
            case 0x1166F0u: goto label_1166f0;
            case 0x1166F4u: goto label_1166f4;
            case 0x1166F8u: goto label_1166f8;
            case 0x1166FCu: goto label_1166fc;
            case 0x116700u: goto label_116700;
            case 0x116704u: goto label_116704;
            case 0x116708u: goto label_116708;
            case 0x11670Cu: goto label_11670c;
            case 0x116710u: goto label_116710;
            case 0x116714u: goto label_116714;
            case 0x116718u: goto label_116718;
            case 0x11671Cu: goto label_11671c;
            case 0x116720u: goto label_116720;
            case 0x116724u: goto label_116724;
            case 0x116728u: goto label_116728;
            case 0x11672Cu: goto label_11672c;
            case 0x116730u: goto label_116730;
            case 0x116734u: goto label_116734;
            case 0x116738u: goto label_116738;
            case 0x11673Cu: goto label_11673c;
            case 0x116740u: goto label_116740;
            case 0x116744u: goto label_116744;
            case 0x116748u: goto label_116748;
            case 0x11674Cu: goto label_11674c;
            case 0x116750u: goto label_116750;
            case 0x116754u: goto label_116754;
            case 0x116758u: goto label_116758;
            case 0x11675Cu: goto label_11675c;
            case 0x116760u: goto label_116760;
            case 0x116764u: goto label_116764;
            case 0x116768u: goto label_116768;
            case 0x11676Cu: goto label_11676c;
            case 0x116770u: goto label_116770;
            case 0x116774u: goto label_116774;
            case 0x116778u: goto label_116778;
            case 0x11677Cu: goto label_11677c;
            case 0x116780u: goto label_116780;
            case 0x116784u: goto label_116784;
            case 0x116788u: goto label_116788;
            case 0x11678Cu: goto label_11678c;
            case 0x116790u: goto label_116790;
            case 0x116794u: goto label_116794;
            case 0x116798u: goto label_116798;
            case 0x11679Cu: goto label_11679c;
            case 0x1167A0u: goto label_1167a0;
            case 0x1167A4u: goto label_1167a4;
            case 0x1167A8u: goto label_1167a8;
            case 0x1167ACu: goto label_1167ac;
            case 0x1167B0u: goto label_1167b0;
            case 0x1167B4u: goto label_1167b4;
            case 0x1167B8u: goto label_1167b8;
            case 0x1167BCu: goto label_1167bc;
            case 0x1167C0u: goto label_1167c0;
            case 0x1167C4u: goto label_1167c4;
            case 0x1167C8u: goto label_1167c8;
            case 0x1167CCu: goto label_1167cc;
            case 0x1167D0u: goto label_1167d0;
            case 0x1167D4u: goto label_1167d4;
            case 0x1167D8u: goto label_1167d8;
            case 0x1167DCu: goto label_1167dc;
            case 0x1167E0u: goto label_1167e0;
            case 0x1167E4u: goto label_1167e4;
            case 0x1167E8u: goto label_1167e8;
            case 0x1167ECu: goto label_1167ec;
            case 0x1167F0u: goto label_1167f0;
            case 0x1167F4u: goto label_1167f4;
            case 0x1167F8u: goto label_1167f8;
            case 0x1167FCu: goto label_1167fc;
            case 0x116800u: goto label_116800;
            case 0x116804u: goto label_116804;
            case 0x116808u: goto label_116808;
            case 0x11680Cu: goto label_11680c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x116738u; }
            if (ctx->pc != 0x116738u) { return; }
        }
    }
    ctx->pc = 0x116738u;
label_116738:
    // 0x116738: 0x10000023
label_11673c:
    if (ctx->pc == 0x11673Cu) {
        ctx->pc = 0x11673Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x116740u;
        goto label_116740;
    }
    ctx->pc = 0x116738u;
    {
        const bool branch_taken_0x116738 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11673Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x116738) {
            ctx->pc = 0x1167C8u;
            goto label_1167c8;
        }
    }
    ctx->pc = 0x116740u;
label_116740:
    // 0x116740: 0x60802d
    ctx->pc = 0x116740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_116744:
    // 0x116744: 0x26520001
    ctx->pc = 0x116744u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_116748:
    // 0x116748: 0x3c150021
    ctx->pc = 0x116748u;
    SET_GPR_U32(ctx, 21, ((uint32_t)33 << 16));
label_11674c:
    // 0x11674c: 0x0
    ctx->pc = 0x11674cu;
    // NOP
label_116750:
    // 0x116750: 0x42600
    ctx->pc = 0x116750u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 24));
label_116754:
    // 0x116754: 0x8ea39d44
    ctx->pc = 0x116754u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 4294942020)));
label_116758:
    // 0x116758: 0x42603
    ctx->pc = 0x116758u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
label_11675c:
    // 0x11675c: 0x60f809
label_116760:
    if (ctx->pc == 0x116760u) {
        ctx->pc = 0x116760u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x116764u;
        goto label_116764;
    }
    ctx->pc = 0x11675Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x116764u);
        ctx->pc = 0x116760u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116218u: goto label_116218;
            case 0x11621Cu: goto label_11621c;
            case 0x116220u: goto label_116220;
            case 0x116224u: goto label_116224;
            case 0x116228u: goto label_116228;
            case 0x11622Cu: goto label_11622c;
            case 0x116230u: goto label_116230;
            case 0x116234u: goto label_116234;
            case 0x116238u: goto label_116238;
            case 0x11623Cu: goto label_11623c;
            case 0x116240u: goto label_116240;
            case 0x116244u: goto label_116244;
            case 0x116248u: goto label_116248;
            case 0x11624Cu: goto label_11624c;
            case 0x116250u: goto label_116250;
            case 0x116254u: goto label_116254;
            case 0x116258u: goto label_116258;
            case 0x11625Cu: goto label_11625c;
            case 0x116260u: goto label_116260;
            case 0x116264u: goto label_116264;
            case 0x116268u: goto label_116268;
            case 0x11626Cu: goto label_11626c;
            case 0x116270u: goto label_116270;
            case 0x116274u: goto label_116274;
            case 0x116278u: goto label_116278;
            case 0x11627Cu: goto label_11627c;
            case 0x116280u: goto label_116280;
            case 0x116284u: goto label_116284;
            case 0x116288u: goto label_116288;
            case 0x11628Cu: goto label_11628c;
            case 0x116290u: goto label_116290;
            case 0x116294u: goto label_116294;
            case 0x116298u: goto label_116298;
            case 0x11629Cu: goto label_11629c;
            case 0x1162A0u: goto label_1162a0;
            case 0x1162A4u: goto label_1162a4;
            case 0x1162A8u: goto label_1162a8;
            case 0x1162ACu: goto label_1162ac;
            case 0x1162B0u: goto label_1162b0;
            case 0x1162B4u: goto label_1162b4;
            case 0x1162B8u: goto label_1162b8;
            case 0x1162BCu: goto label_1162bc;
            case 0x1162C0u: goto label_1162c0;
            case 0x1162C4u: goto label_1162c4;
            case 0x1162C8u: goto label_1162c8;
            case 0x1162CCu: goto label_1162cc;
            case 0x1162D0u: goto label_1162d0;
            case 0x1162D4u: goto label_1162d4;
            case 0x1162D8u: goto label_1162d8;
            case 0x1162DCu: goto label_1162dc;
            case 0x1162E0u: goto label_1162e0;
            case 0x1162E4u: goto label_1162e4;
            case 0x1162E8u: goto label_1162e8;
            case 0x1162ECu: goto label_1162ec;
            case 0x1162F0u: goto label_1162f0;
            case 0x1162F4u: goto label_1162f4;
            case 0x1162F8u: goto label_1162f8;
            case 0x1162FCu: goto label_1162fc;
            case 0x116300u: goto label_116300;
            case 0x116304u: goto label_116304;
            case 0x116308u: goto label_116308;
            case 0x11630Cu: goto label_11630c;
            case 0x116310u: goto label_116310;
            case 0x116314u: goto label_116314;
            case 0x116318u: goto label_116318;
            case 0x11631Cu: goto label_11631c;
            case 0x116320u: goto label_116320;
            case 0x116324u: goto label_116324;
            case 0x116328u: goto label_116328;
            case 0x11632Cu: goto label_11632c;
            case 0x116330u: goto label_116330;
            case 0x116334u: goto label_116334;
            case 0x116338u: goto label_116338;
            case 0x11633Cu: goto label_11633c;
            case 0x116340u: goto label_116340;
            case 0x116344u: goto label_116344;
            case 0x116348u: goto label_116348;
            case 0x11634Cu: goto label_11634c;
            case 0x116350u: goto label_116350;
            case 0x116354u: goto label_116354;
            case 0x116358u: goto label_116358;
            case 0x11635Cu: goto label_11635c;
            case 0x116360u: goto label_116360;
            case 0x116364u: goto label_116364;
            case 0x116368u: goto label_116368;
            case 0x11636Cu: goto label_11636c;
            case 0x116370u: goto label_116370;
            case 0x116374u: goto label_116374;
            case 0x116378u: goto label_116378;
            case 0x11637Cu: goto label_11637c;
            case 0x116380u: goto label_116380;
            case 0x116384u: goto label_116384;
            case 0x116388u: goto label_116388;
            case 0x11638Cu: goto label_11638c;
            case 0x116390u: goto label_116390;
            case 0x116394u: goto label_116394;
            case 0x116398u: goto label_116398;
            case 0x11639Cu: goto label_11639c;
            case 0x1163A0u: goto label_1163a0;
            case 0x1163A4u: goto label_1163a4;
            case 0x1163A8u: goto label_1163a8;
            case 0x1163ACu: goto label_1163ac;
            case 0x1163B0u: goto label_1163b0;
            case 0x1163B4u: goto label_1163b4;
            case 0x1163B8u: goto label_1163b8;
            case 0x1163BCu: goto label_1163bc;
            case 0x1163C0u: goto label_1163c0;
            case 0x1163C4u: goto label_1163c4;
            case 0x1163C8u: goto label_1163c8;
            case 0x1163CCu: goto label_1163cc;
            case 0x1163D0u: goto label_1163d0;
            case 0x1163D4u: goto label_1163d4;
            case 0x1163D8u: goto label_1163d8;
            case 0x1163DCu: goto label_1163dc;
            case 0x1163E0u: goto label_1163e0;
            case 0x1163E4u: goto label_1163e4;
            case 0x1163E8u: goto label_1163e8;
            case 0x1163ECu: goto label_1163ec;
            case 0x1163F0u: goto label_1163f0;
            case 0x1163F4u: goto label_1163f4;
            case 0x1163F8u: goto label_1163f8;
            case 0x1163FCu: goto label_1163fc;
            case 0x116400u: goto label_116400;
            case 0x116404u: goto label_116404;
            case 0x116408u: goto label_116408;
            case 0x11640Cu: goto label_11640c;
            case 0x116410u: goto label_116410;
            case 0x116414u: goto label_116414;
            case 0x116418u: goto label_116418;
            case 0x11641Cu: goto label_11641c;
            case 0x116420u: goto label_116420;
            case 0x116424u: goto label_116424;
            case 0x116428u: goto label_116428;
            case 0x11642Cu: goto label_11642c;
            case 0x116430u: goto label_116430;
            case 0x116434u: goto label_116434;
            case 0x116438u: goto label_116438;
            case 0x11643Cu: goto label_11643c;
            case 0x116440u: goto label_116440;
            case 0x116444u: goto label_116444;
            case 0x116448u: goto label_116448;
            case 0x11644Cu: goto label_11644c;
            case 0x116450u: goto label_116450;
            case 0x116454u: goto label_116454;
            case 0x116458u: goto label_116458;
            case 0x11645Cu: goto label_11645c;
            case 0x116460u: goto label_116460;
            case 0x116464u: goto label_116464;
            case 0x116468u: goto label_116468;
            case 0x11646Cu: goto label_11646c;
            case 0x116470u: goto label_116470;
            case 0x116474u: goto label_116474;
            case 0x116478u: goto label_116478;
            case 0x11647Cu: goto label_11647c;
            case 0x116480u: goto label_116480;
            case 0x116484u: goto label_116484;
            case 0x116488u: goto label_116488;
            case 0x11648Cu: goto label_11648c;
            case 0x116490u: goto label_116490;
            case 0x116494u: goto label_116494;
            case 0x116498u: goto label_116498;
            case 0x11649Cu: goto label_11649c;
            case 0x1164A0u: goto label_1164a0;
            case 0x1164A4u: goto label_1164a4;
            case 0x1164A8u: goto label_1164a8;
            case 0x1164ACu: goto label_1164ac;
            case 0x1164B0u: goto label_1164b0;
            case 0x1164B4u: goto label_1164b4;
            case 0x1164B8u: goto label_1164b8;
            case 0x1164BCu: goto label_1164bc;
            case 0x1164C0u: goto label_1164c0;
            case 0x1164C4u: goto label_1164c4;
            case 0x1164C8u: goto label_1164c8;
            case 0x1164CCu: goto label_1164cc;
            case 0x1164D0u: goto label_1164d0;
            case 0x1164D4u: goto label_1164d4;
            case 0x1164D8u: goto label_1164d8;
            case 0x1164DCu: goto label_1164dc;
            case 0x1164E0u: goto label_1164e0;
            case 0x1164E4u: goto label_1164e4;
            case 0x1164E8u: goto label_1164e8;
            case 0x1164ECu: goto label_1164ec;
            case 0x1164F0u: goto label_1164f0;
            case 0x1164F4u: goto label_1164f4;
            case 0x1164F8u: goto label_1164f8;
            case 0x1164FCu: goto label_1164fc;
            case 0x116500u: goto label_116500;
            case 0x116504u: goto label_116504;
            case 0x116508u: goto label_116508;
            case 0x11650Cu: goto label_11650c;
            case 0x116510u: goto label_116510;
            case 0x116514u: goto label_116514;
            case 0x116518u: goto label_116518;
            case 0x11651Cu: goto label_11651c;
            case 0x116520u: goto label_116520;
            case 0x116524u: goto label_116524;
            case 0x116528u: goto label_116528;
            case 0x11652Cu: goto label_11652c;
            case 0x116530u: goto label_116530;
            case 0x116534u: goto label_116534;
            case 0x116538u: goto label_116538;
            case 0x11653Cu: goto label_11653c;
            case 0x116540u: goto label_116540;
            case 0x116544u: goto label_116544;
            case 0x116548u: goto label_116548;
            case 0x11654Cu: goto label_11654c;
            case 0x116550u: goto label_116550;
            case 0x116554u: goto label_116554;
            case 0x116558u: goto label_116558;
            case 0x11655Cu: goto label_11655c;
            case 0x116560u: goto label_116560;
            case 0x116564u: goto label_116564;
            case 0x116568u: goto label_116568;
            case 0x11656Cu: goto label_11656c;
            case 0x116570u: goto label_116570;
            case 0x116574u: goto label_116574;
            case 0x116578u: goto label_116578;
            case 0x11657Cu: goto label_11657c;
            case 0x116580u: goto label_116580;
            case 0x116584u: goto label_116584;
            case 0x116588u: goto label_116588;
            case 0x11658Cu: goto label_11658c;
            case 0x116590u: goto label_116590;
            case 0x116594u: goto label_116594;
            case 0x116598u: goto label_116598;
            case 0x11659Cu: goto label_11659c;
            case 0x1165A0u: goto label_1165a0;
            case 0x1165A4u: goto label_1165a4;
            case 0x1165A8u: goto label_1165a8;
            case 0x1165ACu: goto label_1165ac;
            case 0x1165B0u: goto label_1165b0;
            case 0x1165B4u: goto label_1165b4;
            case 0x1165B8u: goto label_1165b8;
            case 0x1165BCu: goto label_1165bc;
            case 0x1165C0u: goto label_1165c0;
            case 0x1165C4u: goto label_1165c4;
            case 0x1165C8u: goto label_1165c8;
            case 0x1165CCu: goto label_1165cc;
            case 0x1165D0u: goto label_1165d0;
            case 0x1165D4u: goto label_1165d4;
            case 0x1165D8u: goto label_1165d8;
            case 0x1165DCu: goto label_1165dc;
            case 0x1165E0u: goto label_1165e0;
            case 0x1165E4u: goto label_1165e4;
            case 0x1165E8u: goto label_1165e8;
            case 0x1165ECu: goto label_1165ec;
            case 0x1165F0u: goto label_1165f0;
            case 0x1165F4u: goto label_1165f4;
            case 0x1165F8u: goto label_1165f8;
            case 0x1165FCu: goto label_1165fc;
            case 0x116600u: goto label_116600;
            case 0x116604u: goto label_116604;
            case 0x116608u: goto label_116608;
            case 0x11660Cu: goto label_11660c;
            case 0x116610u: goto label_116610;
            case 0x116614u: goto label_116614;
            case 0x116618u: goto label_116618;
            case 0x11661Cu: goto label_11661c;
            case 0x116620u: goto label_116620;
            case 0x116624u: goto label_116624;
            case 0x116628u: goto label_116628;
            case 0x11662Cu: goto label_11662c;
            case 0x116630u: goto label_116630;
            case 0x116634u: goto label_116634;
            case 0x116638u: goto label_116638;
            case 0x11663Cu: goto label_11663c;
            case 0x116640u: goto label_116640;
            case 0x116644u: goto label_116644;
            case 0x116648u: goto label_116648;
            case 0x11664Cu: goto label_11664c;
            case 0x116650u: goto label_116650;
            case 0x116654u: goto label_116654;
            case 0x116658u: goto label_116658;
            case 0x11665Cu: goto label_11665c;
            case 0x116660u: goto label_116660;
            case 0x116664u: goto label_116664;
            case 0x116668u: goto label_116668;
            case 0x11666Cu: goto label_11666c;
            case 0x116670u: goto label_116670;
            case 0x116674u: goto label_116674;
            case 0x116678u: goto label_116678;
            case 0x11667Cu: goto label_11667c;
            case 0x116680u: goto label_116680;
            case 0x116684u: goto label_116684;
            case 0x116688u: goto label_116688;
            case 0x11668Cu: goto label_11668c;
            case 0x116690u: goto label_116690;
            case 0x116694u: goto label_116694;
            case 0x116698u: goto label_116698;
            case 0x11669Cu: goto label_11669c;
            case 0x1166A0u: goto label_1166a0;
            case 0x1166A4u: goto label_1166a4;
            case 0x1166A8u: goto label_1166a8;
            case 0x1166ACu: goto label_1166ac;
            case 0x1166B0u: goto label_1166b0;
            case 0x1166B4u: goto label_1166b4;
            case 0x1166B8u: goto label_1166b8;
            case 0x1166BCu: goto label_1166bc;
            case 0x1166C0u: goto label_1166c0;
            case 0x1166C4u: goto label_1166c4;
            case 0x1166C8u: goto label_1166c8;
            case 0x1166CCu: goto label_1166cc;
            case 0x1166D0u: goto label_1166d0;
            case 0x1166D4u: goto label_1166d4;
            case 0x1166D8u: goto label_1166d8;
            case 0x1166DCu: goto label_1166dc;
            case 0x1166E0u: goto label_1166e0;
            case 0x1166E4u: goto label_1166e4;
            case 0x1166E8u: goto label_1166e8;
            case 0x1166ECu: goto label_1166ec;
            case 0x1166F0u: goto label_1166f0;
            case 0x1166F4u: goto label_1166f4;
            case 0x1166F8u: goto label_1166f8;
            case 0x1166FCu: goto label_1166fc;
            case 0x116700u: goto label_116700;
            case 0x116704u: goto label_116704;
            case 0x116708u: goto label_116708;
            case 0x11670Cu: goto label_11670c;
            case 0x116710u: goto label_116710;
            case 0x116714u: goto label_116714;
            case 0x116718u: goto label_116718;
            case 0x11671Cu: goto label_11671c;
            case 0x116720u: goto label_116720;
            case 0x116724u: goto label_116724;
            case 0x116728u: goto label_116728;
            case 0x11672Cu: goto label_11672c;
            case 0x116730u: goto label_116730;
            case 0x116734u: goto label_116734;
            case 0x116738u: goto label_116738;
            case 0x11673Cu: goto label_11673c;
            case 0x116740u: goto label_116740;
            case 0x116744u: goto label_116744;
            case 0x116748u: goto label_116748;
            case 0x11674Cu: goto label_11674c;
            case 0x116750u: goto label_116750;
            case 0x116754u: goto label_116754;
            case 0x116758u: goto label_116758;
            case 0x11675Cu: goto label_11675c;
            case 0x116760u: goto label_116760;
            case 0x116764u: goto label_116764;
            case 0x116768u: goto label_116768;
            case 0x11676Cu: goto label_11676c;
            case 0x116770u: goto label_116770;
            case 0x116774u: goto label_116774;
            case 0x116778u: goto label_116778;
            case 0x11677Cu: goto label_11677c;
            case 0x116780u: goto label_116780;
            case 0x116784u: goto label_116784;
            case 0x116788u: goto label_116788;
            case 0x11678Cu: goto label_11678c;
            case 0x116790u: goto label_116790;
            case 0x116794u: goto label_116794;
            case 0x116798u: goto label_116798;
            case 0x11679Cu: goto label_11679c;
            case 0x1167A0u: goto label_1167a0;
            case 0x1167A4u: goto label_1167a4;
            case 0x1167A8u: goto label_1167a8;
            case 0x1167ACu: goto label_1167ac;
            case 0x1167B0u: goto label_1167b0;
            case 0x1167B4u: goto label_1167b4;
            case 0x1167B8u: goto label_1167b8;
            case 0x1167BCu: goto label_1167bc;
            case 0x1167C0u: goto label_1167c0;
            case 0x1167C4u: goto label_1167c4;
            case 0x1167C8u: goto label_1167c8;
            case 0x1167CCu: goto label_1167cc;
            case 0x1167D0u: goto label_1167d0;
            case 0x1167D4u: goto label_1167d4;
            case 0x1167D8u: goto label_1167d8;
            case 0x1167DCu: goto label_1167dc;
            case 0x1167E0u: goto label_1167e0;
            case 0x1167E4u: goto label_1167e4;
            case 0x1167E8u: goto label_1167e8;
            case 0x1167ECu: goto label_1167ec;
            case 0x1167F0u: goto label_1167f0;
            case 0x1167F4u: goto label_1167f4;
            case 0x1167F8u: goto label_1167f8;
            case 0x1167FCu: goto label_1167fc;
            case 0x116800u: goto label_116800;
            case 0x116804u: goto label_116804;
            case 0x116808u: goto label_116808;
            case 0x11680Cu: goto label_11680c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x116764u; }
            if (ctx->pc != 0x116764u) { return; }
        }
    }
    ctx->pc = 0x116764u;
label_116764:
    // 0x116764: 0x92020000
    ctx->pc = 0x116764u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_116768:
    // 0x116768: 0x1440fff9
label_11676c:
    if (ctx->pc == 0x11676Cu) {
        ctx->pc = 0x11676Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x116770u;
        goto label_116770;
    }
    ctx->pc = 0x116768u;
    {
        const bool branch_taken_0x116768 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x11676Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x116768) {
            ctx->pc = 0x116750u;
            goto label_116750;
        }
    }
    ctx->pc = 0x116770u;
label_116770:
    // 0x116770: 0x10000015
label_116774:
    if (ctx->pc == 0x116774u) {
        ctx->pc = 0x116774u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x116778u;
        goto label_116778;
    }
    ctx->pc = 0x116770u;
    {
        const bool branch_taken_0x116770 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x116774u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x116770) {
            ctx->pc = 0x1167C8u;
            goto label_1167c8;
        }
    }
    ctx->pc = 0x116778u;
label_116778:
    // 0x116778: 0x26730008
    ctx->pc = 0x116778u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 8));
label_11677c:
    // 0x11677c: 0x3c150021
    ctx->pc = 0x11677cu;
    SET_GPR_U32(ctx, 21, ((uint32_t)33 << 16));
label_116780:
    // 0x116780: 0x8271fff8
    ctx->pc = 0x116780u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_116784:
    // 0x116784: 0x8ea29d44
    ctx->pc = 0x116784u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294942020)));
label_116788:
    // 0x116788: 0x11203c
    ctx->pc = 0x116788u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
label_11678c:
    // 0x11678c: 0x4203f
    ctx->pc = 0x11678cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_116790:
    // 0x116790: 0x40f809
label_116794:
    if (ctx->pc == 0x116794u) {
        ctx->pc = 0x116794u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x116798u;
        goto label_116798;
    }
    ctx->pc = 0x116790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x116798u);
        ctx->pc = 0x116794u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116218u: goto label_116218;
            case 0x11621Cu: goto label_11621c;
            case 0x116220u: goto label_116220;
            case 0x116224u: goto label_116224;
            case 0x116228u: goto label_116228;
            case 0x11622Cu: goto label_11622c;
            case 0x116230u: goto label_116230;
            case 0x116234u: goto label_116234;
            case 0x116238u: goto label_116238;
            case 0x11623Cu: goto label_11623c;
            case 0x116240u: goto label_116240;
            case 0x116244u: goto label_116244;
            case 0x116248u: goto label_116248;
            case 0x11624Cu: goto label_11624c;
            case 0x116250u: goto label_116250;
            case 0x116254u: goto label_116254;
            case 0x116258u: goto label_116258;
            case 0x11625Cu: goto label_11625c;
            case 0x116260u: goto label_116260;
            case 0x116264u: goto label_116264;
            case 0x116268u: goto label_116268;
            case 0x11626Cu: goto label_11626c;
            case 0x116270u: goto label_116270;
            case 0x116274u: goto label_116274;
            case 0x116278u: goto label_116278;
            case 0x11627Cu: goto label_11627c;
            case 0x116280u: goto label_116280;
            case 0x116284u: goto label_116284;
            case 0x116288u: goto label_116288;
            case 0x11628Cu: goto label_11628c;
            case 0x116290u: goto label_116290;
            case 0x116294u: goto label_116294;
            case 0x116298u: goto label_116298;
            case 0x11629Cu: goto label_11629c;
            case 0x1162A0u: goto label_1162a0;
            case 0x1162A4u: goto label_1162a4;
            case 0x1162A8u: goto label_1162a8;
            case 0x1162ACu: goto label_1162ac;
            case 0x1162B0u: goto label_1162b0;
            case 0x1162B4u: goto label_1162b4;
            case 0x1162B8u: goto label_1162b8;
            case 0x1162BCu: goto label_1162bc;
            case 0x1162C0u: goto label_1162c0;
            case 0x1162C4u: goto label_1162c4;
            case 0x1162C8u: goto label_1162c8;
            case 0x1162CCu: goto label_1162cc;
            case 0x1162D0u: goto label_1162d0;
            case 0x1162D4u: goto label_1162d4;
            case 0x1162D8u: goto label_1162d8;
            case 0x1162DCu: goto label_1162dc;
            case 0x1162E0u: goto label_1162e0;
            case 0x1162E4u: goto label_1162e4;
            case 0x1162E8u: goto label_1162e8;
            case 0x1162ECu: goto label_1162ec;
            case 0x1162F0u: goto label_1162f0;
            case 0x1162F4u: goto label_1162f4;
            case 0x1162F8u: goto label_1162f8;
            case 0x1162FCu: goto label_1162fc;
            case 0x116300u: goto label_116300;
            case 0x116304u: goto label_116304;
            case 0x116308u: goto label_116308;
            case 0x11630Cu: goto label_11630c;
            case 0x116310u: goto label_116310;
            case 0x116314u: goto label_116314;
            case 0x116318u: goto label_116318;
            case 0x11631Cu: goto label_11631c;
            case 0x116320u: goto label_116320;
            case 0x116324u: goto label_116324;
            case 0x116328u: goto label_116328;
            case 0x11632Cu: goto label_11632c;
            case 0x116330u: goto label_116330;
            case 0x116334u: goto label_116334;
            case 0x116338u: goto label_116338;
            case 0x11633Cu: goto label_11633c;
            case 0x116340u: goto label_116340;
            case 0x116344u: goto label_116344;
            case 0x116348u: goto label_116348;
            case 0x11634Cu: goto label_11634c;
            case 0x116350u: goto label_116350;
            case 0x116354u: goto label_116354;
            case 0x116358u: goto label_116358;
            case 0x11635Cu: goto label_11635c;
            case 0x116360u: goto label_116360;
            case 0x116364u: goto label_116364;
            case 0x116368u: goto label_116368;
            case 0x11636Cu: goto label_11636c;
            case 0x116370u: goto label_116370;
            case 0x116374u: goto label_116374;
            case 0x116378u: goto label_116378;
            case 0x11637Cu: goto label_11637c;
            case 0x116380u: goto label_116380;
            case 0x116384u: goto label_116384;
            case 0x116388u: goto label_116388;
            case 0x11638Cu: goto label_11638c;
            case 0x116390u: goto label_116390;
            case 0x116394u: goto label_116394;
            case 0x116398u: goto label_116398;
            case 0x11639Cu: goto label_11639c;
            case 0x1163A0u: goto label_1163a0;
            case 0x1163A4u: goto label_1163a4;
            case 0x1163A8u: goto label_1163a8;
            case 0x1163ACu: goto label_1163ac;
            case 0x1163B0u: goto label_1163b0;
            case 0x1163B4u: goto label_1163b4;
            case 0x1163B8u: goto label_1163b8;
            case 0x1163BCu: goto label_1163bc;
            case 0x1163C0u: goto label_1163c0;
            case 0x1163C4u: goto label_1163c4;
            case 0x1163C8u: goto label_1163c8;
            case 0x1163CCu: goto label_1163cc;
            case 0x1163D0u: goto label_1163d0;
            case 0x1163D4u: goto label_1163d4;
            case 0x1163D8u: goto label_1163d8;
            case 0x1163DCu: goto label_1163dc;
            case 0x1163E0u: goto label_1163e0;
            case 0x1163E4u: goto label_1163e4;
            case 0x1163E8u: goto label_1163e8;
            case 0x1163ECu: goto label_1163ec;
            case 0x1163F0u: goto label_1163f0;
            case 0x1163F4u: goto label_1163f4;
            case 0x1163F8u: goto label_1163f8;
            case 0x1163FCu: goto label_1163fc;
            case 0x116400u: goto label_116400;
            case 0x116404u: goto label_116404;
            case 0x116408u: goto label_116408;
            case 0x11640Cu: goto label_11640c;
            case 0x116410u: goto label_116410;
            case 0x116414u: goto label_116414;
            case 0x116418u: goto label_116418;
            case 0x11641Cu: goto label_11641c;
            case 0x116420u: goto label_116420;
            case 0x116424u: goto label_116424;
            case 0x116428u: goto label_116428;
            case 0x11642Cu: goto label_11642c;
            case 0x116430u: goto label_116430;
            case 0x116434u: goto label_116434;
            case 0x116438u: goto label_116438;
            case 0x11643Cu: goto label_11643c;
            case 0x116440u: goto label_116440;
            case 0x116444u: goto label_116444;
            case 0x116448u: goto label_116448;
            case 0x11644Cu: goto label_11644c;
            case 0x116450u: goto label_116450;
            case 0x116454u: goto label_116454;
            case 0x116458u: goto label_116458;
            case 0x11645Cu: goto label_11645c;
            case 0x116460u: goto label_116460;
            case 0x116464u: goto label_116464;
            case 0x116468u: goto label_116468;
            case 0x11646Cu: goto label_11646c;
            case 0x116470u: goto label_116470;
            case 0x116474u: goto label_116474;
            case 0x116478u: goto label_116478;
            case 0x11647Cu: goto label_11647c;
            case 0x116480u: goto label_116480;
            case 0x116484u: goto label_116484;
            case 0x116488u: goto label_116488;
            case 0x11648Cu: goto label_11648c;
            case 0x116490u: goto label_116490;
            case 0x116494u: goto label_116494;
            case 0x116498u: goto label_116498;
            case 0x11649Cu: goto label_11649c;
            case 0x1164A0u: goto label_1164a0;
            case 0x1164A4u: goto label_1164a4;
            case 0x1164A8u: goto label_1164a8;
            case 0x1164ACu: goto label_1164ac;
            case 0x1164B0u: goto label_1164b0;
            case 0x1164B4u: goto label_1164b4;
            case 0x1164B8u: goto label_1164b8;
            case 0x1164BCu: goto label_1164bc;
            case 0x1164C0u: goto label_1164c0;
            case 0x1164C4u: goto label_1164c4;
            case 0x1164C8u: goto label_1164c8;
            case 0x1164CCu: goto label_1164cc;
            case 0x1164D0u: goto label_1164d0;
            case 0x1164D4u: goto label_1164d4;
            case 0x1164D8u: goto label_1164d8;
            case 0x1164DCu: goto label_1164dc;
            case 0x1164E0u: goto label_1164e0;
            case 0x1164E4u: goto label_1164e4;
            case 0x1164E8u: goto label_1164e8;
            case 0x1164ECu: goto label_1164ec;
            case 0x1164F0u: goto label_1164f0;
            case 0x1164F4u: goto label_1164f4;
            case 0x1164F8u: goto label_1164f8;
            case 0x1164FCu: goto label_1164fc;
            case 0x116500u: goto label_116500;
            case 0x116504u: goto label_116504;
            case 0x116508u: goto label_116508;
            case 0x11650Cu: goto label_11650c;
            case 0x116510u: goto label_116510;
            case 0x116514u: goto label_116514;
            case 0x116518u: goto label_116518;
            case 0x11651Cu: goto label_11651c;
            case 0x116520u: goto label_116520;
            case 0x116524u: goto label_116524;
            case 0x116528u: goto label_116528;
            case 0x11652Cu: goto label_11652c;
            case 0x116530u: goto label_116530;
            case 0x116534u: goto label_116534;
            case 0x116538u: goto label_116538;
            case 0x11653Cu: goto label_11653c;
            case 0x116540u: goto label_116540;
            case 0x116544u: goto label_116544;
            case 0x116548u: goto label_116548;
            case 0x11654Cu: goto label_11654c;
            case 0x116550u: goto label_116550;
            case 0x116554u: goto label_116554;
            case 0x116558u: goto label_116558;
            case 0x11655Cu: goto label_11655c;
            case 0x116560u: goto label_116560;
            case 0x116564u: goto label_116564;
            case 0x116568u: goto label_116568;
            case 0x11656Cu: goto label_11656c;
            case 0x116570u: goto label_116570;
            case 0x116574u: goto label_116574;
            case 0x116578u: goto label_116578;
            case 0x11657Cu: goto label_11657c;
            case 0x116580u: goto label_116580;
            case 0x116584u: goto label_116584;
            case 0x116588u: goto label_116588;
            case 0x11658Cu: goto label_11658c;
            case 0x116590u: goto label_116590;
            case 0x116594u: goto label_116594;
            case 0x116598u: goto label_116598;
            case 0x11659Cu: goto label_11659c;
            case 0x1165A0u: goto label_1165a0;
            case 0x1165A4u: goto label_1165a4;
            case 0x1165A8u: goto label_1165a8;
            case 0x1165ACu: goto label_1165ac;
            case 0x1165B0u: goto label_1165b0;
            case 0x1165B4u: goto label_1165b4;
            case 0x1165B8u: goto label_1165b8;
            case 0x1165BCu: goto label_1165bc;
            case 0x1165C0u: goto label_1165c0;
            case 0x1165C4u: goto label_1165c4;
            case 0x1165C8u: goto label_1165c8;
            case 0x1165CCu: goto label_1165cc;
            case 0x1165D0u: goto label_1165d0;
            case 0x1165D4u: goto label_1165d4;
            case 0x1165D8u: goto label_1165d8;
            case 0x1165DCu: goto label_1165dc;
            case 0x1165E0u: goto label_1165e0;
            case 0x1165E4u: goto label_1165e4;
            case 0x1165E8u: goto label_1165e8;
            case 0x1165ECu: goto label_1165ec;
            case 0x1165F0u: goto label_1165f0;
            case 0x1165F4u: goto label_1165f4;
            case 0x1165F8u: goto label_1165f8;
            case 0x1165FCu: goto label_1165fc;
            case 0x116600u: goto label_116600;
            case 0x116604u: goto label_116604;
            case 0x116608u: goto label_116608;
            case 0x11660Cu: goto label_11660c;
            case 0x116610u: goto label_116610;
            case 0x116614u: goto label_116614;
            case 0x116618u: goto label_116618;
            case 0x11661Cu: goto label_11661c;
            case 0x116620u: goto label_116620;
            case 0x116624u: goto label_116624;
            case 0x116628u: goto label_116628;
            case 0x11662Cu: goto label_11662c;
            case 0x116630u: goto label_116630;
            case 0x116634u: goto label_116634;
            case 0x116638u: goto label_116638;
            case 0x11663Cu: goto label_11663c;
            case 0x116640u: goto label_116640;
            case 0x116644u: goto label_116644;
            case 0x116648u: goto label_116648;
            case 0x11664Cu: goto label_11664c;
            case 0x116650u: goto label_116650;
            case 0x116654u: goto label_116654;
            case 0x116658u: goto label_116658;
            case 0x11665Cu: goto label_11665c;
            case 0x116660u: goto label_116660;
            case 0x116664u: goto label_116664;
            case 0x116668u: goto label_116668;
            case 0x11666Cu: goto label_11666c;
            case 0x116670u: goto label_116670;
            case 0x116674u: goto label_116674;
            case 0x116678u: goto label_116678;
            case 0x11667Cu: goto label_11667c;
            case 0x116680u: goto label_116680;
            case 0x116684u: goto label_116684;
            case 0x116688u: goto label_116688;
            case 0x11668Cu: goto label_11668c;
            case 0x116690u: goto label_116690;
            case 0x116694u: goto label_116694;
            case 0x116698u: goto label_116698;
            case 0x11669Cu: goto label_11669c;
            case 0x1166A0u: goto label_1166a0;
            case 0x1166A4u: goto label_1166a4;
            case 0x1166A8u: goto label_1166a8;
            case 0x1166ACu: goto label_1166ac;
            case 0x1166B0u: goto label_1166b0;
            case 0x1166B4u: goto label_1166b4;
            case 0x1166B8u: goto label_1166b8;
            case 0x1166BCu: goto label_1166bc;
            case 0x1166C0u: goto label_1166c0;
            case 0x1166C4u: goto label_1166c4;
            case 0x1166C8u: goto label_1166c8;
            case 0x1166CCu: goto label_1166cc;
            case 0x1166D0u: goto label_1166d0;
            case 0x1166D4u: goto label_1166d4;
            case 0x1166D8u: goto label_1166d8;
            case 0x1166DCu: goto label_1166dc;
            case 0x1166E0u: goto label_1166e0;
            case 0x1166E4u: goto label_1166e4;
            case 0x1166E8u: goto label_1166e8;
            case 0x1166ECu: goto label_1166ec;
            case 0x1166F0u: goto label_1166f0;
            case 0x1166F4u: goto label_1166f4;
            case 0x1166F8u: goto label_1166f8;
            case 0x1166FCu: goto label_1166fc;
            case 0x116700u: goto label_116700;
            case 0x116704u: goto label_116704;
            case 0x116708u: goto label_116708;
            case 0x11670Cu: goto label_11670c;
            case 0x116710u: goto label_116710;
            case 0x116714u: goto label_116714;
            case 0x116718u: goto label_116718;
            case 0x11671Cu: goto label_11671c;
            case 0x116720u: goto label_116720;
            case 0x116724u: goto label_116724;
            case 0x116728u: goto label_116728;
            case 0x11672Cu: goto label_11672c;
            case 0x116730u: goto label_116730;
            case 0x116734u: goto label_116734;
            case 0x116738u: goto label_116738;
            case 0x11673Cu: goto label_11673c;
            case 0x116740u: goto label_116740;
            case 0x116744u: goto label_116744;
            case 0x116748u: goto label_116748;
            case 0x11674Cu: goto label_11674c;
            case 0x116750u: goto label_116750;
            case 0x116754u: goto label_116754;
            case 0x116758u: goto label_116758;
            case 0x11675Cu: goto label_11675c;
            case 0x116760u: goto label_116760;
            case 0x116764u: goto label_116764;
            case 0x116768u: goto label_116768;
            case 0x11676Cu: goto label_11676c;
            case 0x116770u: goto label_116770;
            case 0x116774u: goto label_116774;
            case 0x116778u: goto label_116778;
            case 0x11677Cu: goto label_11677c;
            case 0x116780u: goto label_116780;
            case 0x116784u: goto label_116784;
            case 0x116788u: goto label_116788;
            case 0x11678Cu: goto label_11678c;
            case 0x116790u: goto label_116790;
            case 0x116794u: goto label_116794;
            case 0x116798u: goto label_116798;
            case 0x11679Cu: goto label_11679c;
            case 0x1167A0u: goto label_1167a0;
            case 0x1167A4u: goto label_1167a4;
            case 0x1167A8u: goto label_1167a8;
            case 0x1167ACu: goto label_1167ac;
            case 0x1167B0u: goto label_1167b0;
            case 0x1167B4u: goto label_1167b4;
            case 0x1167B8u: goto label_1167b8;
            case 0x1167BCu: goto label_1167bc;
            case 0x1167C0u: goto label_1167c0;
            case 0x1167C4u: goto label_1167c4;
            case 0x1167C8u: goto label_1167c8;
            case 0x1167CCu: goto label_1167cc;
            case 0x1167D0u: goto label_1167d0;
            case 0x1167D4u: goto label_1167d4;
            case 0x1167D8u: goto label_1167d8;
            case 0x1167DCu: goto label_1167dc;
            case 0x1167E0u: goto label_1167e0;
            case 0x1167E4u: goto label_1167e4;
            case 0x1167E8u: goto label_1167e8;
            case 0x1167ECu: goto label_1167ec;
            case 0x1167F0u: goto label_1167f0;
            case 0x1167F4u: goto label_1167f4;
            case 0x1167F8u: goto label_1167f8;
            case 0x1167FCu: goto label_1167fc;
            case 0x116800u: goto label_116800;
            case 0x116804u: goto label_116804;
            case 0x116808u: goto label_116808;
            case 0x11680Cu: goto label_11680c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x116798u; }
            if (ctx->pc != 0x116798u) { return; }
        }
    }
    ctx->pc = 0x116798u;
label_116798:
    // 0x116798: 0x1000000b
label_11679c:
    if (ctx->pc == 0x11679Cu) {
        ctx->pc = 0x11679Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1167A0u;
        goto label_1167a0;
    }
    ctx->pc = 0x116798u;
    {
        const bool branch_taken_0x116798 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11679Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x116798) {
            ctx->pc = 0x1167C8u;
            goto label_1167c8;
        }
    }
    ctx->pc = 0x1167A0u;
label_1167a0:
    // 0x1167a0: 0x3c020021
    ctx->pc = 0x1167a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
label_1167a4:
    // 0x1167a4: 0x8c439d44
    ctx->pc = 0x1167a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294942020)));
label_1167a8:
    // 0x1167a8: 0x60f809
label_1167ac:
    if (ctx->pc == 0x1167ACu) {
        ctx->pc = 0x1167ACu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x1167B0u;
        goto label_1167b0;
    }
    ctx->pc = 0x1167A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1167B0u);
        ctx->pc = 0x1167ACu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116218u: goto label_116218;
            case 0x11621Cu: goto label_11621c;
            case 0x116220u: goto label_116220;
            case 0x116224u: goto label_116224;
            case 0x116228u: goto label_116228;
            case 0x11622Cu: goto label_11622c;
            case 0x116230u: goto label_116230;
            case 0x116234u: goto label_116234;
            case 0x116238u: goto label_116238;
            case 0x11623Cu: goto label_11623c;
            case 0x116240u: goto label_116240;
            case 0x116244u: goto label_116244;
            case 0x116248u: goto label_116248;
            case 0x11624Cu: goto label_11624c;
            case 0x116250u: goto label_116250;
            case 0x116254u: goto label_116254;
            case 0x116258u: goto label_116258;
            case 0x11625Cu: goto label_11625c;
            case 0x116260u: goto label_116260;
            case 0x116264u: goto label_116264;
            case 0x116268u: goto label_116268;
            case 0x11626Cu: goto label_11626c;
            case 0x116270u: goto label_116270;
            case 0x116274u: goto label_116274;
            case 0x116278u: goto label_116278;
            case 0x11627Cu: goto label_11627c;
            case 0x116280u: goto label_116280;
            case 0x116284u: goto label_116284;
            case 0x116288u: goto label_116288;
            case 0x11628Cu: goto label_11628c;
            case 0x116290u: goto label_116290;
            case 0x116294u: goto label_116294;
            case 0x116298u: goto label_116298;
            case 0x11629Cu: goto label_11629c;
            case 0x1162A0u: goto label_1162a0;
            case 0x1162A4u: goto label_1162a4;
            case 0x1162A8u: goto label_1162a8;
            case 0x1162ACu: goto label_1162ac;
            case 0x1162B0u: goto label_1162b0;
            case 0x1162B4u: goto label_1162b4;
            case 0x1162B8u: goto label_1162b8;
            case 0x1162BCu: goto label_1162bc;
            case 0x1162C0u: goto label_1162c0;
            case 0x1162C4u: goto label_1162c4;
            case 0x1162C8u: goto label_1162c8;
            case 0x1162CCu: goto label_1162cc;
            case 0x1162D0u: goto label_1162d0;
            case 0x1162D4u: goto label_1162d4;
            case 0x1162D8u: goto label_1162d8;
            case 0x1162DCu: goto label_1162dc;
            case 0x1162E0u: goto label_1162e0;
            case 0x1162E4u: goto label_1162e4;
            case 0x1162E8u: goto label_1162e8;
            case 0x1162ECu: goto label_1162ec;
            case 0x1162F0u: goto label_1162f0;
            case 0x1162F4u: goto label_1162f4;
            case 0x1162F8u: goto label_1162f8;
            case 0x1162FCu: goto label_1162fc;
            case 0x116300u: goto label_116300;
            case 0x116304u: goto label_116304;
            case 0x116308u: goto label_116308;
            case 0x11630Cu: goto label_11630c;
            case 0x116310u: goto label_116310;
            case 0x116314u: goto label_116314;
            case 0x116318u: goto label_116318;
            case 0x11631Cu: goto label_11631c;
            case 0x116320u: goto label_116320;
            case 0x116324u: goto label_116324;
            case 0x116328u: goto label_116328;
            case 0x11632Cu: goto label_11632c;
            case 0x116330u: goto label_116330;
            case 0x116334u: goto label_116334;
            case 0x116338u: goto label_116338;
            case 0x11633Cu: goto label_11633c;
            case 0x116340u: goto label_116340;
            case 0x116344u: goto label_116344;
            case 0x116348u: goto label_116348;
            case 0x11634Cu: goto label_11634c;
            case 0x116350u: goto label_116350;
            case 0x116354u: goto label_116354;
            case 0x116358u: goto label_116358;
            case 0x11635Cu: goto label_11635c;
            case 0x116360u: goto label_116360;
            case 0x116364u: goto label_116364;
            case 0x116368u: goto label_116368;
            case 0x11636Cu: goto label_11636c;
            case 0x116370u: goto label_116370;
            case 0x116374u: goto label_116374;
            case 0x116378u: goto label_116378;
            case 0x11637Cu: goto label_11637c;
            case 0x116380u: goto label_116380;
            case 0x116384u: goto label_116384;
            case 0x116388u: goto label_116388;
            case 0x11638Cu: goto label_11638c;
            case 0x116390u: goto label_116390;
            case 0x116394u: goto label_116394;
            case 0x116398u: goto label_116398;
            case 0x11639Cu: goto label_11639c;
            case 0x1163A0u: goto label_1163a0;
            case 0x1163A4u: goto label_1163a4;
            case 0x1163A8u: goto label_1163a8;
            case 0x1163ACu: goto label_1163ac;
            case 0x1163B0u: goto label_1163b0;
            case 0x1163B4u: goto label_1163b4;
            case 0x1163B8u: goto label_1163b8;
            case 0x1163BCu: goto label_1163bc;
            case 0x1163C0u: goto label_1163c0;
            case 0x1163C4u: goto label_1163c4;
            case 0x1163C8u: goto label_1163c8;
            case 0x1163CCu: goto label_1163cc;
            case 0x1163D0u: goto label_1163d0;
            case 0x1163D4u: goto label_1163d4;
            case 0x1163D8u: goto label_1163d8;
            case 0x1163DCu: goto label_1163dc;
            case 0x1163E0u: goto label_1163e0;
            case 0x1163E4u: goto label_1163e4;
            case 0x1163E8u: goto label_1163e8;
            case 0x1163ECu: goto label_1163ec;
            case 0x1163F0u: goto label_1163f0;
            case 0x1163F4u: goto label_1163f4;
            case 0x1163F8u: goto label_1163f8;
            case 0x1163FCu: goto label_1163fc;
            case 0x116400u: goto label_116400;
            case 0x116404u: goto label_116404;
            case 0x116408u: goto label_116408;
            case 0x11640Cu: goto label_11640c;
            case 0x116410u: goto label_116410;
            case 0x116414u: goto label_116414;
            case 0x116418u: goto label_116418;
            case 0x11641Cu: goto label_11641c;
            case 0x116420u: goto label_116420;
            case 0x116424u: goto label_116424;
            case 0x116428u: goto label_116428;
            case 0x11642Cu: goto label_11642c;
            case 0x116430u: goto label_116430;
            case 0x116434u: goto label_116434;
            case 0x116438u: goto label_116438;
            case 0x11643Cu: goto label_11643c;
            case 0x116440u: goto label_116440;
            case 0x116444u: goto label_116444;
            case 0x116448u: goto label_116448;
            case 0x11644Cu: goto label_11644c;
            case 0x116450u: goto label_116450;
            case 0x116454u: goto label_116454;
            case 0x116458u: goto label_116458;
            case 0x11645Cu: goto label_11645c;
            case 0x116460u: goto label_116460;
            case 0x116464u: goto label_116464;
            case 0x116468u: goto label_116468;
            case 0x11646Cu: goto label_11646c;
            case 0x116470u: goto label_116470;
            case 0x116474u: goto label_116474;
            case 0x116478u: goto label_116478;
            case 0x11647Cu: goto label_11647c;
            case 0x116480u: goto label_116480;
            case 0x116484u: goto label_116484;
            case 0x116488u: goto label_116488;
            case 0x11648Cu: goto label_11648c;
            case 0x116490u: goto label_116490;
            case 0x116494u: goto label_116494;
            case 0x116498u: goto label_116498;
            case 0x11649Cu: goto label_11649c;
            case 0x1164A0u: goto label_1164a0;
            case 0x1164A4u: goto label_1164a4;
            case 0x1164A8u: goto label_1164a8;
            case 0x1164ACu: goto label_1164ac;
            case 0x1164B0u: goto label_1164b0;
            case 0x1164B4u: goto label_1164b4;
            case 0x1164B8u: goto label_1164b8;
            case 0x1164BCu: goto label_1164bc;
            case 0x1164C0u: goto label_1164c0;
            case 0x1164C4u: goto label_1164c4;
            case 0x1164C8u: goto label_1164c8;
            case 0x1164CCu: goto label_1164cc;
            case 0x1164D0u: goto label_1164d0;
            case 0x1164D4u: goto label_1164d4;
            case 0x1164D8u: goto label_1164d8;
            case 0x1164DCu: goto label_1164dc;
            case 0x1164E0u: goto label_1164e0;
            case 0x1164E4u: goto label_1164e4;
            case 0x1164E8u: goto label_1164e8;
            case 0x1164ECu: goto label_1164ec;
            case 0x1164F0u: goto label_1164f0;
            case 0x1164F4u: goto label_1164f4;
            case 0x1164F8u: goto label_1164f8;
            case 0x1164FCu: goto label_1164fc;
            case 0x116500u: goto label_116500;
            case 0x116504u: goto label_116504;
            case 0x116508u: goto label_116508;
            case 0x11650Cu: goto label_11650c;
            case 0x116510u: goto label_116510;
            case 0x116514u: goto label_116514;
            case 0x116518u: goto label_116518;
            case 0x11651Cu: goto label_11651c;
            case 0x116520u: goto label_116520;
            case 0x116524u: goto label_116524;
            case 0x116528u: goto label_116528;
            case 0x11652Cu: goto label_11652c;
            case 0x116530u: goto label_116530;
            case 0x116534u: goto label_116534;
            case 0x116538u: goto label_116538;
            case 0x11653Cu: goto label_11653c;
            case 0x116540u: goto label_116540;
            case 0x116544u: goto label_116544;
            case 0x116548u: goto label_116548;
            case 0x11654Cu: goto label_11654c;
            case 0x116550u: goto label_116550;
            case 0x116554u: goto label_116554;
            case 0x116558u: goto label_116558;
            case 0x11655Cu: goto label_11655c;
            case 0x116560u: goto label_116560;
            case 0x116564u: goto label_116564;
            case 0x116568u: goto label_116568;
            case 0x11656Cu: goto label_11656c;
            case 0x116570u: goto label_116570;
            case 0x116574u: goto label_116574;
            case 0x116578u: goto label_116578;
            case 0x11657Cu: goto label_11657c;
            case 0x116580u: goto label_116580;
            case 0x116584u: goto label_116584;
            case 0x116588u: goto label_116588;
            case 0x11658Cu: goto label_11658c;
            case 0x116590u: goto label_116590;
            case 0x116594u: goto label_116594;
            case 0x116598u: goto label_116598;
            case 0x11659Cu: goto label_11659c;
            case 0x1165A0u: goto label_1165a0;
            case 0x1165A4u: goto label_1165a4;
            case 0x1165A8u: goto label_1165a8;
            case 0x1165ACu: goto label_1165ac;
            case 0x1165B0u: goto label_1165b0;
            case 0x1165B4u: goto label_1165b4;
            case 0x1165B8u: goto label_1165b8;
            case 0x1165BCu: goto label_1165bc;
            case 0x1165C0u: goto label_1165c0;
            case 0x1165C4u: goto label_1165c4;
            case 0x1165C8u: goto label_1165c8;
            case 0x1165CCu: goto label_1165cc;
            case 0x1165D0u: goto label_1165d0;
            case 0x1165D4u: goto label_1165d4;
            case 0x1165D8u: goto label_1165d8;
            case 0x1165DCu: goto label_1165dc;
            case 0x1165E0u: goto label_1165e0;
            case 0x1165E4u: goto label_1165e4;
            case 0x1165E8u: goto label_1165e8;
            case 0x1165ECu: goto label_1165ec;
            case 0x1165F0u: goto label_1165f0;
            case 0x1165F4u: goto label_1165f4;
            case 0x1165F8u: goto label_1165f8;
            case 0x1165FCu: goto label_1165fc;
            case 0x116600u: goto label_116600;
            case 0x116604u: goto label_116604;
            case 0x116608u: goto label_116608;
            case 0x11660Cu: goto label_11660c;
            case 0x116610u: goto label_116610;
            case 0x116614u: goto label_116614;
            case 0x116618u: goto label_116618;
            case 0x11661Cu: goto label_11661c;
            case 0x116620u: goto label_116620;
            case 0x116624u: goto label_116624;
            case 0x116628u: goto label_116628;
            case 0x11662Cu: goto label_11662c;
            case 0x116630u: goto label_116630;
            case 0x116634u: goto label_116634;
            case 0x116638u: goto label_116638;
            case 0x11663Cu: goto label_11663c;
            case 0x116640u: goto label_116640;
            case 0x116644u: goto label_116644;
            case 0x116648u: goto label_116648;
            case 0x11664Cu: goto label_11664c;
            case 0x116650u: goto label_116650;
            case 0x116654u: goto label_116654;
            case 0x116658u: goto label_116658;
            case 0x11665Cu: goto label_11665c;
            case 0x116660u: goto label_116660;
            case 0x116664u: goto label_116664;
            case 0x116668u: goto label_116668;
            case 0x11666Cu: goto label_11666c;
            case 0x116670u: goto label_116670;
            case 0x116674u: goto label_116674;
            case 0x116678u: goto label_116678;
            case 0x11667Cu: goto label_11667c;
            case 0x116680u: goto label_116680;
            case 0x116684u: goto label_116684;
            case 0x116688u: goto label_116688;
            case 0x11668Cu: goto label_11668c;
            case 0x116690u: goto label_116690;
            case 0x116694u: goto label_116694;
            case 0x116698u: goto label_116698;
            case 0x11669Cu: goto label_11669c;
            case 0x1166A0u: goto label_1166a0;
            case 0x1166A4u: goto label_1166a4;
            case 0x1166A8u: goto label_1166a8;
            case 0x1166ACu: goto label_1166ac;
            case 0x1166B0u: goto label_1166b0;
            case 0x1166B4u: goto label_1166b4;
            case 0x1166B8u: goto label_1166b8;
            case 0x1166BCu: goto label_1166bc;
            case 0x1166C0u: goto label_1166c0;
            case 0x1166C4u: goto label_1166c4;
            case 0x1166C8u: goto label_1166c8;
            case 0x1166CCu: goto label_1166cc;
            case 0x1166D0u: goto label_1166d0;
            case 0x1166D4u: goto label_1166d4;
            case 0x1166D8u: goto label_1166d8;
            case 0x1166DCu: goto label_1166dc;
            case 0x1166E0u: goto label_1166e0;
            case 0x1166E4u: goto label_1166e4;
            case 0x1166E8u: goto label_1166e8;
            case 0x1166ECu: goto label_1166ec;
            case 0x1166F0u: goto label_1166f0;
            case 0x1166F4u: goto label_1166f4;
            case 0x1166F8u: goto label_1166f8;
            case 0x1166FCu: goto label_1166fc;
            case 0x116700u: goto label_116700;
            case 0x116704u: goto label_116704;
            case 0x116708u: goto label_116708;
            case 0x11670Cu: goto label_11670c;
            case 0x116710u: goto label_116710;
            case 0x116714u: goto label_116714;
            case 0x116718u: goto label_116718;
            case 0x11671Cu: goto label_11671c;
            case 0x116720u: goto label_116720;
            case 0x116724u: goto label_116724;
            case 0x116728u: goto label_116728;
            case 0x11672Cu: goto label_11672c;
            case 0x116730u: goto label_116730;
            case 0x116734u: goto label_116734;
            case 0x116738u: goto label_116738;
            case 0x11673Cu: goto label_11673c;
            case 0x116740u: goto label_116740;
            case 0x116744u: goto label_116744;
            case 0x116748u: goto label_116748;
            case 0x11674Cu: goto label_11674c;
            case 0x116750u: goto label_116750;
            case 0x116754u: goto label_116754;
            case 0x116758u: goto label_116758;
            case 0x11675Cu: goto label_11675c;
            case 0x116760u: goto label_116760;
            case 0x116764u: goto label_116764;
            case 0x116768u: goto label_116768;
            case 0x11676Cu: goto label_11676c;
            case 0x116770u: goto label_116770;
            case 0x116774u: goto label_116774;
            case 0x116778u: goto label_116778;
            case 0x11677Cu: goto label_11677c;
            case 0x116780u: goto label_116780;
            case 0x116784u: goto label_116784;
            case 0x116788u: goto label_116788;
            case 0x11678Cu: goto label_11678c;
            case 0x116790u: goto label_116790;
            case 0x116794u: goto label_116794;
            case 0x116798u: goto label_116798;
            case 0x11679Cu: goto label_11679c;
            case 0x1167A0u: goto label_1167a0;
            case 0x1167A4u: goto label_1167a4;
            case 0x1167A8u: goto label_1167a8;
            case 0x1167ACu: goto label_1167ac;
            case 0x1167B0u: goto label_1167b0;
            case 0x1167B4u: goto label_1167b4;
            case 0x1167B8u: goto label_1167b8;
            case 0x1167BCu: goto label_1167bc;
            case 0x1167C0u: goto label_1167c0;
            case 0x1167C4u: goto label_1167c4;
            case 0x1167C8u: goto label_1167c8;
            case 0x1167CCu: goto label_1167cc;
            case 0x1167D0u: goto label_1167d0;
            case 0x1167D4u: goto label_1167d4;
            case 0x1167D8u: goto label_1167d8;
            case 0x1167DCu: goto label_1167dc;
            case 0x1167E0u: goto label_1167e0;
            case 0x1167E4u: goto label_1167e4;
            case 0x1167E8u: goto label_1167e8;
            case 0x1167ECu: goto label_1167ec;
            case 0x1167F0u: goto label_1167f0;
            case 0x1167F4u: goto label_1167f4;
            case 0x1167F8u: goto label_1167f8;
            case 0x1167FCu: goto label_1167fc;
            case 0x116800u: goto label_116800;
            case 0x116804u: goto label_116804;
            case 0x116808u: goto label_116808;
            case 0x11680Cu: goto label_11680c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1167B0u; }
            if (ctx->pc != 0x1167B0u) { return; }
        }
    }
    ctx->pc = 0x1167B0u;
label_1167b0:
    // 0x1167b0: 0x10000005
label_1167b4:
    if (ctx->pc == 0x1167B4u) {
        ctx->pc = 0x1167B4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1167B8u;
        goto label_1167b8;
    }
    ctx->pc = 0x1167B0u;
    {
        const bool branch_taken_0x1167b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1167B4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1167b0) {
            ctx->pc = 0x1167C8u;
            goto label_1167c8;
        }
    }
    ctx->pc = 0x1167B8u;
label_1167b8:
    // 0x1167b8: 0x10000002
label_1167bc:
    if (ctx->pc == 0x1167BCu) {
        ctx->pc = 0x1167BCu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x1167C0u;
        goto label_1167c0;
    }
    ctx->pc = 0x1167B8u;
    {
        const bool branch_taken_0x1167b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1167BCu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x1167b8) {
            ctx->pc = 0x1167C4u;
            goto label_1167c4;
        }
    }
    ctx->pc = 0x1167C0u;
label_1167c0:
    // 0x1167c0: 0x26520001
    ctx->pc = 0x1167c0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_1167c4:
    // 0x1167c4: 0x240802d
    ctx->pc = 0x1167c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1167c8:
    // 0x1167c8: 0x82020000
    ctx->pc = 0x1167c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1167cc:
    // 0x1167cc: 0x1440fea2
label_1167d0:
    if (ctx->pc == 0x1167D0u) {
        ctx->pc = 0x1167D0u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1167D4u;
        goto label_1167d4;
    }
    ctx->pc = 0x1167CCu;
    {
        const bool branch_taken_0x1167cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1167D0u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x1167cc) {
            ctx->pc = 0x116258u;
            goto label_116258;
        }
    }
    ctx->pc = 0x1167D4u;
label_1167d4:
    // 0x1167d4: 0x12c00004
label_1167d8:
    if (ctx->pc == 0x1167D8u) {
        ctx->pc = 0x1167D8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x1167DCu;
        goto label_1167dc;
    }
    ctx->pc = 0x1167D4u;
    {
        const bool branch_taken_0x1167d4 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        ctx->pc = 0x1167D8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x1167d4) {
            ctx->pc = 0x1167E8u;
            goto label_1167e8;
        }
    }
    ctx->pc = 0x1167DCu;
label_1167dc:
    // 0x1167dc: 0xc0475ae
label_1167e0:
    if (ctx->pc == 0x1167E0u) {
        ctx->pc = 0x1167E4u;
        goto label_1167e4;
    }
    ctx->pc = 0x1167DCu;
    SET_GPR_U32(ctx, 31, 0x1167E4u);
    ctx->pc = 0x11D6B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D6B8_0x11d6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1167E4u; }
    }
    if (ctx->pc != 0x1167E4u) { return; }
    ctx->pc = 0x1167E4u;
label_1167e4:
    // 0x1167e4: 0xdfbf0090
    ctx->pc = 0x1167e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1167e8:
    // 0x1167e8: 0xdfb60080
    ctx->pc = 0x1167e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1167ec:
    // 0x1167ec: 0xdfb50070
    ctx->pc = 0x1167ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1167f0:
    // 0x1167f0: 0xdfb40060
    ctx->pc = 0x1167f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1167f4:
    // 0x1167f4: 0xdfb30050
    ctx->pc = 0x1167f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1167f8:
    // 0x1167f8: 0xdfb20040
    ctx->pc = 0x1167f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1167fc:
    // 0x1167fc: 0xdfb10030
    ctx->pc = 0x1167fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_116800:
    // 0x116800: 0xdfb00020
    ctx->pc = 0x116800u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_116804:
    // 0x116804: 0x3e00008
label_116808:
    if (ctx->pc == 0x116808u) {
        ctx->pc = 0x116808u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x11680Cu;
        goto label_11680c;
    }
    ctx->pc = 0x116804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116808u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116218u: goto label_116218;
            case 0x11621Cu: goto label_11621c;
            case 0x116220u: goto label_116220;
            case 0x116224u: goto label_116224;
            case 0x116228u: goto label_116228;
            case 0x11622Cu: goto label_11622c;
            case 0x116230u: goto label_116230;
            case 0x116234u: goto label_116234;
            case 0x116238u: goto label_116238;
            case 0x11623Cu: goto label_11623c;
            case 0x116240u: goto label_116240;
            case 0x116244u: goto label_116244;
            case 0x116248u: goto label_116248;
            case 0x11624Cu: goto label_11624c;
            case 0x116250u: goto label_116250;
            case 0x116254u: goto label_116254;
            case 0x116258u: goto label_116258;
            case 0x11625Cu: goto label_11625c;
            case 0x116260u: goto label_116260;
            case 0x116264u: goto label_116264;
            case 0x116268u: goto label_116268;
            case 0x11626Cu: goto label_11626c;
            case 0x116270u: goto label_116270;
            case 0x116274u: goto label_116274;
            case 0x116278u: goto label_116278;
            case 0x11627Cu: goto label_11627c;
            case 0x116280u: goto label_116280;
            case 0x116284u: goto label_116284;
            case 0x116288u: goto label_116288;
            case 0x11628Cu: goto label_11628c;
            case 0x116290u: goto label_116290;
            case 0x116294u: goto label_116294;
            case 0x116298u: goto label_116298;
            case 0x11629Cu: goto label_11629c;
            case 0x1162A0u: goto label_1162a0;
            case 0x1162A4u: goto label_1162a4;
            case 0x1162A8u: goto label_1162a8;
            case 0x1162ACu: goto label_1162ac;
            case 0x1162B0u: goto label_1162b0;
            case 0x1162B4u: goto label_1162b4;
            case 0x1162B8u: goto label_1162b8;
            case 0x1162BCu: goto label_1162bc;
            case 0x1162C0u: goto label_1162c0;
            case 0x1162C4u: goto label_1162c4;
            case 0x1162C8u: goto label_1162c8;
            case 0x1162CCu: goto label_1162cc;
            case 0x1162D0u: goto label_1162d0;
            case 0x1162D4u: goto label_1162d4;
            case 0x1162D8u: goto label_1162d8;
            case 0x1162DCu: goto label_1162dc;
            case 0x1162E0u: goto label_1162e0;
            case 0x1162E4u: goto label_1162e4;
            case 0x1162E8u: goto label_1162e8;
            case 0x1162ECu: goto label_1162ec;
            case 0x1162F0u: goto label_1162f0;
            case 0x1162F4u: goto label_1162f4;
            case 0x1162F8u: goto label_1162f8;
            case 0x1162FCu: goto label_1162fc;
            case 0x116300u: goto label_116300;
            case 0x116304u: goto label_116304;
            case 0x116308u: goto label_116308;
            case 0x11630Cu: goto label_11630c;
            case 0x116310u: goto label_116310;
            case 0x116314u: goto label_116314;
            case 0x116318u: goto label_116318;
            case 0x11631Cu: goto label_11631c;
            case 0x116320u: goto label_116320;
            case 0x116324u: goto label_116324;
            case 0x116328u: goto label_116328;
            case 0x11632Cu: goto label_11632c;
            case 0x116330u: goto label_116330;
            case 0x116334u: goto label_116334;
            case 0x116338u: goto label_116338;
            case 0x11633Cu: goto label_11633c;
            case 0x116340u: goto label_116340;
            case 0x116344u: goto label_116344;
            case 0x116348u: goto label_116348;
            case 0x11634Cu: goto label_11634c;
            case 0x116350u: goto label_116350;
            case 0x116354u: goto label_116354;
            case 0x116358u: goto label_116358;
            case 0x11635Cu: goto label_11635c;
            case 0x116360u: goto label_116360;
            case 0x116364u: goto label_116364;
            case 0x116368u: goto label_116368;
            case 0x11636Cu: goto label_11636c;
            case 0x116370u: goto label_116370;
            case 0x116374u: goto label_116374;
            case 0x116378u: goto label_116378;
            case 0x11637Cu: goto label_11637c;
            case 0x116380u: goto label_116380;
            case 0x116384u: goto label_116384;
            case 0x116388u: goto label_116388;
            case 0x11638Cu: goto label_11638c;
            case 0x116390u: goto label_116390;
            case 0x116394u: goto label_116394;
            case 0x116398u: goto label_116398;
            case 0x11639Cu: goto label_11639c;
            case 0x1163A0u: goto label_1163a0;
            case 0x1163A4u: goto label_1163a4;
            case 0x1163A8u: goto label_1163a8;
            case 0x1163ACu: goto label_1163ac;
            case 0x1163B0u: goto label_1163b0;
            case 0x1163B4u: goto label_1163b4;
            case 0x1163B8u: goto label_1163b8;
            case 0x1163BCu: goto label_1163bc;
            case 0x1163C0u: goto label_1163c0;
            case 0x1163C4u: goto label_1163c4;
            case 0x1163C8u: goto label_1163c8;
            case 0x1163CCu: goto label_1163cc;
            case 0x1163D0u: goto label_1163d0;
            case 0x1163D4u: goto label_1163d4;
            case 0x1163D8u: goto label_1163d8;
            case 0x1163DCu: goto label_1163dc;
            case 0x1163E0u: goto label_1163e0;
            case 0x1163E4u: goto label_1163e4;
            case 0x1163E8u: goto label_1163e8;
            case 0x1163ECu: goto label_1163ec;
            case 0x1163F0u: goto label_1163f0;
            case 0x1163F4u: goto label_1163f4;
            case 0x1163F8u: goto label_1163f8;
            case 0x1163FCu: goto label_1163fc;
            case 0x116400u: goto label_116400;
            case 0x116404u: goto label_116404;
            case 0x116408u: goto label_116408;
            case 0x11640Cu: goto label_11640c;
            case 0x116410u: goto label_116410;
            case 0x116414u: goto label_116414;
            case 0x116418u: goto label_116418;
            case 0x11641Cu: goto label_11641c;
            case 0x116420u: goto label_116420;
            case 0x116424u: goto label_116424;
            case 0x116428u: goto label_116428;
            case 0x11642Cu: goto label_11642c;
            case 0x116430u: goto label_116430;
            case 0x116434u: goto label_116434;
            case 0x116438u: goto label_116438;
            case 0x11643Cu: goto label_11643c;
            case 0x116440u: goto label_116440;
            case 0x116444u: goto label_116444;
            case 0x116448u: goto label_116448;
            case 0x11644Cu: goto label_11644c;
            case 0x116450u: goto label_116450;
            case 0x116454u: goto label_116454;
            case 0x116458u: goto label_116458;
            case 0x11645Cu: goto label_11645c;
            case 0x116460u: goto label_116460;
            case 0x116464u: goto label_116464;
            case 0x116468u: goto label_116468;
            case 0x11646Cu: goto label_11646c;
            case 0x116470u: goto label_116470;
            case 0x116474u: goto label_116474;
            case 0x116478u: goto label_116478;
            case 0x11647Cu: goto label_11647c;
            case 0x116480u: goto label_116480;
            case 0x116484u: goto label_116484;
            case 0x116488u: goto label_116488;
            case 0x11648Cu: goto label_11648c;
            case 0x116490u: goto label_116490;
            case 0x116494u: goto label_116494;
            case 0x116498u: goto label_116498;
            case 0x11649Cu: goto label_11649c;
            case 0x1164A0u: goto label_1164a0;
            case 0x1164A4u: goto label_1164a4;
            case 0x1164A8u: goto label_1164a8;
            case 0x1164ACu: goto label_1164ac;
            case 0x1164B0u: goto label_1164b0;
            case 0x1164B4u: goto label_1164b4;
            case 0x1164B8u: goto label_1164b8;
            case 0x1164BCu: goto label_1164bc;
            case 0x1164C0u: goto label_1164c0;
            case 0x1164C4u: goto label_1164c4;
            case 0x1164C8u: goto label_1164c8;
            case 0x1164CCu: goto label_1164cc;
            case 0x1164D0u: goto label_1164d0;
            case 0x1164D4u: goto label_1164d4;
            case 0x1164D8u: goto label_1164d8;
            case 0x1164DCu: goto label_1164dc;
            case 0x1164E0u: goto label_1164e0;
            case 0x1164E4u: goto label_1164e4;
            case 0x1164E8u: goto label_1164e8;
            case 0x1164ECu: goto label_1164ec;
            case 0x1164F0u: goto label_1164f0;
            case 0x1164F4u: goto label_1164f4;
            case 0x1164F8u: goto label_1164f8;
            case 0x1164FCu: goto label_1164fc;
            case 0x116500u: goto label_116500;
            case 0x116504u: goto label_116504;
            case 0x116508u: goto label_116508;
            case 0x11650Cu: goto label_11650c;
            case 0x116510u: goto label_116510;
            case 0x116514u: goto label_116514;
            case 0x116518u: goto label_116518;
            case 0x11651Cu: goto label_11651c;
            case 0x116520u: goto label_116520;
            case 0x116524u: goto label_116524;
            case 0x116528u: goto label_116528;
            case 0x11652Cu: goto label_11652c;
            case 0x116530u: goto label_116530;
            case 0x116534u: goto label_116534;
            case 0x116538u: goto label_116538;
            case 0x11653Cu: goto label_11653c;
            case 0x116540u: goto label_116540;
            case 0x116544u: goto label_116544;
            case 0x116548u: goto label_116548;
            case 0x11654Cu: goto label_11654c;
            case 0x116550u: goto label_116550;
            case 0x116554u: goto label_116554;
            case 0x116558u: goto label_116558;
            case 0x11655Cu: goto label_11655c;
            case 0x116560u: goto label_116560;
            case 0x116564u: goto label_116564;
            case 0x116568u: goto label_116568;
            case 0x11656Cu: goto label_11656c;
            case 0x116570u: goto label_116570;
            case 0x116574u: goto label_116574;
            case 0x116578u: goto label_116578;
            case 0x11657Cu: goto label_11657c;
            case 0x116580u: goto label_116580;
            case 0x116584u: goto label_116584;
            case 0x116588u: goto label_116588;
            case 0x11658Cu: goto label_11658c;
            case 0x116590u: goto label_116590;
            case 0x116594u: goto label_116594;
            case 0x116598u: goto label_116598;
            case 0x11659Cu: goto label_11659c;
            case 0x1165A0u: goto label_1165a0;
            case 0x1165A4u: goto label_1165a4;
            case 0x1165A8u: goto label_1165a8;
            case 0x1165ACu: goto label_1165ac;
            case 0x1165B0u: goto label_1165b0;
            case 0x1165B4u: goto label_1165b4;
            case 0x1165B8u: goto label_1165b8;
            case 0x1165BCu: goto label_1165bc;
            case 0x1165C0u: goto label_1165c0;
            case 0x1165C4u: goto label_1165c4;
            case 0x1165C8u: goto label_1165c8;
            case 0x1165CCu: goto label_1165cc;
            case 0x1165D0u: goto label_1165d0;
            case 0x1165D4u: goto label_1165d4;
            case 0x1165D8u: goto label_1165d8;
            case 0x1165DCu: goto label_1165dc;
            case 0x1165E0u: goto label_1165e0;
            case 0x1165E4u: goto label_1165e4;
            case 0x1165E8u: goto label_1165e8;
            case 0x1165ECu: goto label_1165ec;
            case 0x1165F0u: goto label_1165f0;
            case 0x1165F4u: goto label_1165f4;
            case 0x1165F8u: goto label_1165f8;
            case 0x1165FCu: goto label_1165fc;
            case 0x116600u: goto label_116600;
            case 0x116604u: goto label_116604;
            case 0x116608u: goto label_116608;
            case 0x11660Cu: goto label_11660c;
            case 0x116610u: goto label_116610;
            case 0x116614u: goto label_116614;
            case 0x116618u: goto label_116618;
            case 0x11661Cu: goto label_11661c;
            case 0x116620u: goto label_116620;
            case 0x116624u: goto label_116624;
            case 0x116628u: goto label_116628;
            case 0x11662Cu: goto label_11662c;
            case 0x116630u: goto label_116630;
            case 0x116634u: goto label_116634;
            case 0x116638u: goto label_116638;
            case 0x11663Cu: goto label_11663c;
            case 0x116640u: goto label_116640;
            case 0x116644u: goto label_116644;
            case 0x116648u: goto label_116648;
            case 0x11664Cu: goto label_11664c;
            case 0x116650u: goto label_116650;
            case 0x116654u: goto label_116654;
            case 0x116658u: goto label_116658;
            case 0x11665Cu: goto label_11665c;
            case 0x116660u: goto label_116660;
            case 0x116664u: goto label_116664;
            case 0x116668u: goto label_116668;
            case 0x11666Cu: goto label_11666c;
            case 0x116670u: goto label_116670;
            case 0x116674u: goto label_116674;
            case 0x116678u: goto label_116678;
            case 0x11667Cu: goto label_11667c;
            case 0x116680u: goto label_116680;
            case 0x116684u: goto label_116684;
            case 0x116688u: goto label_116688;
            case 0x11668Cu: goto label_11668c;
            case 0x116690u: goto label_116690;
            case 0x116694u: goto label_116694;
            case 0x116698u: goto label_116698;
            case 0x11669Cu: goto label_11669c;
            case 0x1166A0u: goto label_1166a0;
            case 0x1166A4u: goto label_1166a4;
            case 0x1166A8u: goto label_1166a8;
            case 0x1166ACu: goto label_1166ac;
            case 0x1166B0u: goto label_1166b0;
            case 0x1166B4u: goto label_1166b4;
            case 0x1166B8u: goto label_1166b8;
            case 0x1166BCu: goto label_1166bc;
            case 0x1166C0u: goto label_1166c0;
            case 0x1166C4u: goto label_1166c4;
            case 0x1166C8u: goto label_1166c8;
            case 0x1166CCu: goto label_1166cc;
            case 0x1166D0u: goto label_1166d0;
            case 0x1166D4u: goto label_1166d4;
            case 0x1166D8u: goto label_1166d8;
            case 0x1166DCu: goto label_1166dc;
            case 0x1166E0u: goto label_1166e0;
            case 0x1166E4u: goto label_1166e4;
            case 0x1166E8u: goto label_1166e8;
            case 0x1166ECu: goto label_1166ec;
            case 0x1166F0u: goto label_1166f0;
            case 0x1166F4u: goto label_1166f4;
            case 0x1166F8u: goto label_1166f8;
            case 0x1166FCu: goto label_1166fc;
            case 0x116700u: goto label_116700;
            case 0x116704u: goto label_116704;
            case 0x116708u: goto label_116708;
            case 0x11670Cu: goto label_11670c;
            case 0x116710u: goto label_116710;
            case 0x116714u: goto label_116714;
            case 0x116718u: goto label_116718;
            case 0x11671Cu: goto label_11671c;
            case 0x116720u: goto label_116720;
            case 0x116724u: goto label_116724;
            case 0x116728u: goto label_116728;
            case 0x11672Cu: goto label_11672c;
            case 0x116730u: goto label_116730;
            case 0x116734u: goto label_116734;
            case 0x116738u: goto label_116738;
            case 0x11673Cu: goto label_11673c;
            case 0x116740u: goto label_116740;
            case 0x116744u: goto label_116744;
            case 0x116748u: goto label_116748;
            case 0x11674Cu: goto label_11674c;
            case 0x116750u: goto label_116750;
            case 0x116754u: goto label_116754;
            case 0x116758u: goto label_116758;
            case 0x11675Cu: goto label_11675c;
            case 0x116760u: goto label_116760;
            case 0x116764u: goto label_116764;
            case 0x116768u: goto label_116768;
            case 0x11676Cu: goto label_11676c;
            case 0x116770u: goto label_116770;
            case 0x116774u: goto label_116774;
            case 0x116778u: goto label_116778;
            case 0x11677Cu: goto label_11677c;
            case 0x116780u: goto label_116780;
            case 0x116784u: goto label_116784;
            case 0x116788u: goto label_116788;
            case 0x11678Cu: goto label_11678c;
            case 0x116790u: goto label_116790;
            case 0x116794u: goto label_116794;
            case 0x116798u: goto label_116798;
            case 0x11679Cu: goto label_11679c;
            case 0x1167A0u: goto label_1167a0;
            case 0x1167A4u: goto label_1167a4;
            case 0x1167A8u: goto label_1167a8;
            case 0x1167ACu: goto label_1167ac;
            case 0x1167B0u: goto label_1167b0;
            case 0x1167B4u: goto label_1167b4;
            case 0x1167B8u: goto label_1167b8;
            case 0x1167BCu: goto label_1167bc;
            case 0x1167C0u: goto label_1167c0;
            case 0x1167C4u: goto label_1167c4;
            case 0x1167C8u: goto label_1167c8;
            case 0x1167CCu: goto label_1167cc;
            case 0x1167D0u: goto label_1167d0;
            case 0x1167D4u: goto label_1167d4;
            case 0x1167D8u: goto label_1167d8;
            case 0x1167DCu: goto label_1167dc;
            case 0x1167E0u: goto label_1167e0;
            case 0x1167E4u: goto label_1167e4;
            case 0x1167E8u: goto label_1167e8;
            case 0x1167ECu: goto label_1167ec;
            case 0x1167F0u: goto label_1167f0;
            case 0x1167F4u: goto label_1167f4;
            case 0x1167F8u: goto label_1167f8;
            case 0x1167FCu: goto label_1167fc;
            case 0x116800u: goto label_116800;
            case 0x116804u: goto label_116804;
            case 0x116808u: goto label_116808;
            case 0x11680Cu: goto label_11680c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11680Cu;
label_11680c:
    // 0x11680c: 0x0
    ctx->pc = 0x11680cu;
    // NOP
}
