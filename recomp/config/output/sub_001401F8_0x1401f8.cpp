#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001401F8
// Address: 0x1401f8 - 0x1407e0
void sub_001401F8_0x1401f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1401f8u;

label_1401f8:
    // 0x1401f8: 0x8c820010
    ctx->pc = 0x1401f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1401fc:
    // 0x1401fc: 0x302d
    ctx->pc = 0x1401fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_140200:
    // 0x140200: 0x8c87000c
    ctx->pc = 0x140200u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_140204:
    // 0x140204: 0x2442ffff
    ctx->pc = 0x140204u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_140208:
    // 0x140208: 0x1840000d
label_14020c:
    if (ctx->pc == 0x14020Cu) {
        ctx->pc = 0x14020Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
        ctx->pc = 0x140210u;
        goto label_140210;
    }
    ctx->pc = 0x140208u;
    {
        const bool branch_taken_0x140208 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x14020Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
        if (branch_taken_0x140208) {
            ctx->pc = 0x140240u;
            goto label_140240;
        }
    }
    ctx->pc = 0x140210u;
label_140210:
    // 0x140210: 0xe0282d
    ctx->pc = 0x140210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_140214:
    // 0x140214: 0x0
    ctx->pc = 0x140214u;
    // NOP
label_140218:
    // 0x140218: 0xaca0000c
    ctx->pc = 0x140218u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_14021c:
    // 0x14021c: 0x24c60001
    ctx->pc = 0x14021cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_140220:
    // 0x140220: 0x24a30010
    ctx->pc = 0x140220u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 16));
label_140224:
    // 0x140224: 0xaca00008
    ctx->pc = 0x140224u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_140228:
    // 0x140228: 0x8c820010
    ctx->pc = 0x140228u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_14022c:
    // 0x14022c: 0xaca30000
    ctx->pc = 0x14022cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_140230:
    // 0x140230: 0x2442ffff
    ctx->pc = 0x140230u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_140234:
    // 0x140234: 0xc2102a
    ctx->pc = 0x140234u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 2)));
label_140238:
    // 0x140238: 0x1440fff7
label_14023c:
    if (ctx->pc == 0x14023Cu) {
        ctx->pc = 0x14023Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140240u;
        goto label_140240;
    }
    ctx->pc = 0x140238u;
    {
        const bool branch_taken_0x140238 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14023Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x140238) {
            ctx->pc = 0x140218u;
            goto label_140218;
        }
    }
    ctx->pc = 0x140240u;
label_140240:
    // 0x140240: 0x61100
    ctx->pc = 0x140240u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 4));
label_140244:
    // 0x140244: 0x24060003
    ctx->pc = 0x140244u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
label_140248:
    // 0x140248: 0x471021
    ctx->pc = 0x140248u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_14024c:
    // 0x14024c: 0x24840024
    ctx->pc = 0x14024cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 36));
label_140250:
    // 0x140250: 0xac40000c
    ctx->pc = 0x140250u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_140254:
    // 0x140254: 0xac400000
    ctx->pc = 0x140254u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_140258:
    // 0x140258: 0xac400008
    ctx->pc = 0x140258u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_14025c:
    // 0x14025c: 0x0
    ctx->pc = 0x14025cu;
    // NOP
label_140260:
    // 0x140260: 0x24c6ffff
    ctx->pc = 0x140260u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
label_140264:
    // 0x140264: 0xac800000
    ctx->pc = 0x140264u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_140268:
    // 0x140268: 0x0
    ctx->pc = 0x140268u;
    // NOP
label_14026c:
    // 0x14026c: 0x0
    ctx->pc = 0x14026cu;
    // NOP
label_140270:
    // 0x140270: 0x0
    ctx->pc = 0x140270u;
    // NOP
label_140274:
    // 0x140274: 0x4c1fffa
label_140278:
    if (ctx->pc == 0x140278u) {
        ctx->pc = 0x140278u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x14027Cu;
        goto label_14027c;
    }
    ctx->pc = 0x140274u;
    {
        const bool branch_taken_0x140274 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x140278u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967292));
        if (branch_taken_0x140274) {
            ctx->pc = 0x140260u;
            goto label_140260;
        }
    }
    ctx->pc = 0x14027Cu;
label_14027c:
    // 0x14027c: 0x3e00008
label_140280:
    if (ctx->pc == 0x140280u) {
        ctx->pc = 0x140284u;
        goto label_140284;
    }
    ctx->pc = 0x14027Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1401F8u: goto label_1401f8;
            case 0x1401FCu: goto label_1401fc;
            case 0x140200u: goto label_140200;
            case 0x140204u: goto label_140204;
            case 0x140208u: goto label_140208;
            case 0x14020Cu: goto label_14020c;
            case 0x140210u: goto label_140210;
            case 0x140214u: goto label_140214;
            case 0x140218u: goto label_140218;
            case 0x14021Cu: goto label_14021c;
            case 0x140220u: goto label_140220;
            case 0x140224u: goto label_140224;
            case 0x140228u: goto label_140228;
            case 0x14022Cu: goto label_14022c;
            case 0x140230u: goto label_140230;
            case 0x140234u: goto label_140234;
            case 0x140238u: goto label_140238;
            case 0x14023Cu: goto label_14023c;
            case 0x140240u: goto label_140240;
            case 0x140244u: goto label_140244;
            case 0x140248u: goto label_140248;
            case 0x14024Cu: goto label_14024c;
            case 0x140250u: goto label_140250;
            case 0x140254u: goto label_140254;
            case 0x140258u: goto label_140258;
            case 0x14025Cu: goto label_14025c;
            case 0x140260u: goto label_140260;
            case 0x140264u: goto label_140264;
            case 0x140268u: goto label_140268;
            case 0x14026Cu: goto label_14026c;
            case 0x140270u: goto label_140270;
            case 0x140274u: goto label_140274;
            case 0x140278u: goto label_140278;
            case 0x14027Cu: goto label_14027c;
            case 0x140280u: goto label_140280;
            case 0x140284u: goto label_140284;
            case 0x140288u: goto label_140288;
            case 0x14028Cu: goto label_14028c;
            case 0x140290u: goto label_140290;
            case 0x140294u: goto label_140294;
            case 0x140298u: goto label_140298;
            case 0x14029Cu: goto label_14029c;
            case 0x1402A0u: goto label_1402a0;
            case 0x1402A4u: goto label_1402a4;
            case 0x1402A8u: goto label_1402a8;
            case 0x1402ACu: goto label_1402ac;
            case 0x1402B0u: goto label_1402b0;
            case 0x1402B4u: goto label_1402b4;
            case 0x1402B8u: goto label_1402b8;
            case 0x1402BCu: goto label_1402bc;
            case 0x1402C0u: goto label_1402c0;
            case 0x1402C4u: goto label_1402c4;
            case 0x1402C8u: goto label_1402c8;
            case 0x1402CCu: goto label_1402cc;
            case 0x1402D0u: goto label_1402d0;
            case 0x1402D4u: goto label_1402d4;
            case 0x1402D8u: goto label_1402d8;
            case 0x1402DCu: goto label_1402dc;
            case 0x1402E0u: goto label_1402e0;
            case 0x1402E4u: goto label_1402e4;
            case 0x1402E8u: goto label_1402e8;
            case 0x1402ECu: goto label_1402ec;
            case 0x1402F0u: goto label_1402f0;
            case 0x1402F4u: goto label_1402f4;
            case 0x1402F8u: goto label_1402f8;
            case 0x1402FCu: goto label_1402fc;
            case 0x140300u: goto label_140300;
            case 0x140304u: goto label_140304;
            case 0x140308u: goto label_140308;
            case 0x14030Cu: goto label_14030c;
            case 0x140310u: goto label_140310;
            case 0x140314u: goto label_140314;
            case 0x140318u: goto label_140318;
            case 0x14031Cu: goto label_14031c;
            case 0x140320u: goto label_140320;
            case 0x140324u: goto label_140324;
            case 0x140328u: goto label_140328;
            case 0x14032Cu: goto label_14032c;
            case 0x140330u: goto label_140330;
            case 0x140334u: goto label_140334;
            case 0x140338u: goto label_140338;
            case 0x14033Cu: goto label_14033c;
            case 0x140340u: goto label_140340;
            case 0x140344u: goto label_140344;
            case 0x140348u: goto label_140348;
            case 0x14034Cu: goto label_14034c;
            case 0x140350u: goto label_140350;
            case 0x140354u: goto label_140354;
            case 0x140358u: goto label_140358;
            case 0x14035Cu: goto label_14035c;
            case 0x140360u: goto label_140360;
            case 0x140364u: goto label_140364;
            case 0x140368u: goto label_140368;
            case 0x14036Cu: goto label_14036c;
            case 0x140370u: goto label_140370;
            case 0x140374u: goto label_140374;
            case 0x140378u: goto label_140378;
            case 0x14037Cu: goto label_14037c;
            case 0x140380u: goto label_140380;
            case 0x140384u: goto label_140384;
            case 0x140388u: goto label_140388;
            case 0x14038Cu: goto label_14038c;
            case 0x140390u: goto label_140390;
            case 0x140394u: goto label_140394;
            case 0x140398u: goto label_140398;
            case 0x14039Cu: goto label_14039c;
            case 0x1403A0u: goto label_1403a0;
            case 0x1403A4u: goto label_1403a4;
            case 0x1403A8u: goto label_1403a8;
            case 0x1403ACu: goto label_1403ac;
            case 0x1403B0u: goto label_1403b0;
            case 0x1403B4u: goto label_1403b4;
            case 0x1403B8u: goto label_1403b8;
            case 0x1403BCu: goto label_1403bc;
            case 0x1403C0u: goto label_1403c0;
            case 0x1403C4u: goto label_1403c4;
            case 0x1403C8u: goto label_1403c8;
            case 0x1403CCu: goto label_1403cc;
            case 0x1403D0u: goto label_1403d0;
            case 0x1403D4u: goto label_1403d4;
            case 0x1403D8u: goto label_1403d8;
            case 0x1403DCu: goto label_1403dc;
            case 0x1403E0u: goto label_1403e0;
            case 0x1403E4u: goto label_1403e4;
            case 0x1403E8u: goto label_1403e8;
            case 0x1403ECu: goto label_1403ec;
            case 0x1403F0u: goto label_1403f0;
            case 0x1403F4u: goto label_1403f4;
            case 0x1403F8u: goto label_1403f8;
            case 0x1403FCu: goto label_1403fc;
            case 0x140400u: goto label_140400;
            case 0x140404u: goto label_140404;
            case 0x140408u: goto label_140408;
            case 0x14040Cu: goto label_14040c;
            case 0x140410u: goto label_140410;
            case 0x140414u: goto label_140414;
            case 0x140418u: goto label_140418;
            case 0x14041Cu: goto label_14041c;
            case 0x140420u: goto label_140420;
            case 0x140424u: goto label_140424;
            case 0x140428u: goto label_140428;
            case 0x14042Cu: goto label_14042c;
            case 0x140430u: goto label_140430;
            case 0x140434u: goto label_140434;
            case 0x140438u: goto label_140438;
            case 0x14043Cu: goto label_14043c;
            case 0x140440u: goto label_140440;
            case 0x140444u: goto label_140444;
            case 0x140448u: goto label_140448;
            case 0x14044Cu: goto label_14044c;
            case 0x140450u: goto label_140450;
            case 0x140454u: goto label_140454;
            case 0x140458u: goto label_140458;
            case 0x14045Cu: goto label_14045c;
            case 0x140460u: goto label_140460;
            case 0x140464u: goto label_140464;
            case 0x140468u: goto label_140468;
            case 0x14046Cu: goto label_14046c;
            case 0x140470u: goto label_140470;
            case 0x140474u: goto label_140474;
            case 0x140478u: goto label_140478;
            case 0x14047Cu: goto label_14047c;
            case 0x140480u: goto label_140480;
            case 0x140484u: goto label_140484;
            case 0x140488u: goto label_140488;
            case 0x14048Cu: goto label_14048c;
            case 0x140490u: goto label_140490;
            case 0x140494u: goto label_140494;
            case 0x140498u: goto label_140498;
            case 0x14049Cu: goto label_14049c;
            case 0x1404A0u: goto label_1404a0;
            case 0x1404A4u: goto label_1404a4;
            case 0x1404A8u: goto label_1404a8;
            case 0x1404ACu: goto label_1404ac;
            case 0x1404B0u: goto label_1404b0;
            case 0x1404B4u: goto label_1404b4;
            case 0x1404B8u: goto label_1404b8;
            case 0x1404BCu: goto label_1404bc;
            case 0x1404C0u: goto label_1404c0;
            case 0x1404C4u: goto label_1404c4;
            case 0x1404C8u: goto label_1404c8;
            case 0x1404CCu: goto label_1404cc;
            case 0x1404D0u: goto label_1404d0;
            case 0x1404D4u: goto label_1404d4;
            case 0x1404D8u: goto label_1404d8;
            case 0x1404DCu: goto label_1404dc;
            case 0x1404E0u: goto label_1404e0;
            case 0x1404E4u: goto label_1404e4;
            case 0x1404E8u: goto label_1404e8;
            case 0x1404ECu: goto label_1404ec;
            case 0x1404F0u: goto label_1404f0;
            case 0x1404F4u: goto label_1404f4;
            case 0x1404F8u: goto label_1404f8;
            case 0x1404FCu: goto label_1404fc;
            case 0x140500u: goto label_140500;
            case 0x140504u: goto label_140504;
            case 0x140508u: goto label_140508;
            case 0x14050Cu: goto label_14050c;
            case 0x140510u: goto label_140510;
            case 0x140514u: goto label_140514;
            case 0x140518u: goto label_140518;
            case 0x14051Cu: goto label_14051c;
            case 0x140520u: goto label_140520;
            case 0x140524u: goto label_140524;
            case 0x140528u: goto label_140528;
            case 0x14052Cu: goto label_14052c;
            case 0x140530u: goto label_140530;
            case 0x140534u: goto label_140534;
            case 0x140538u: goto label_140538;
            case 0x14053Cu: goto label_14053c;
            case 0x140540u: goto label_140540;
            case 0x140544u: goto label_140544;
            case 0x140548u: goto label_140548;
            case 0x14054Cu: goto label_14054c;
            case 0x140550u: goto label_140550;
            case 0x140554u: goto label_140554;
            case 0x140558u: goto label_140558;
            case 0x14055Cu: goto label_14055c;
            case 0x140560u: goto label_140560;
            case 0x140564u: goto label_140564;
            case 0x140568u: goto label_140568;
            case 0x14056Cu: goto label_14056c;
            case 0x140570u: goto label_140570;
            case 0x140574u: goto label_140574;
            case 0x140578u: goto label_140578;
            case 0x14057Cu: goto label_14057c;
            case 0x140580u: goto label_140580;
            case 0x140584u: goto label_140584;
            case 0x140588u: goto label_140588;
            case 0x14058Cu: goto label_14058c;
            case 0x140590u: goto label_140590;
            case 0x140594u: goto label_140594;
            case 0x140598u: goto label_140598;
            case 0x14059Cu: goto label_14059c;
            case 0x1405A0u: goto label_1405a0;
            case 0x1405A4u: goto label_1405a4;
            case 0x1405A8u: goto label_1405a8;
            case 0x1405ACu: goto label_1405ac;
            case 0x1405B0u: goto label_1405b0;
            case 0x1405B4u: goto label_1405b4;
            case 0x1405B8u: goto label_1405b8;
            case 0x1405BCu: goto label_1405bc;
            case 0x1405C0u: goto label_1405c0;
            case 0x1405C4u: goto label_1405c4;
            case 0x1405C8u: goto label_1405c8;
            case 0x1405CCu: goto label_1405cc;
            case 0x1405D0u: goto label_1405d0;
            case 0x1405D4u: goto label_1405d4;
            case 0x1405D8u: goto label_1405d8;
            case 0x1405DCu: goto label_1405dc;
            case 0x1405E0u: goto label_1405e0;
            case 0x1405E4u: goto label_1405e4;
            case 0x1405E8u: goto label_1405e8;
            case 0x1405ECu: goto label_1405ec;
            case 0x1405F0u: goto label_1405f0;
            case 0x1405F4u: goto label_1405f4;
            case 0x1405F8u: goto label_1405f8;
            case 0x1405FCu: goto label_1405fc;
            case 0x140600u: goto label_140600;
            case 0x140604u: goto label_140604;
            case 0x140608u: goto label_140608;
            case 0x14060Cu: goto label_14060c;
            case 0x140610u: goto label_140610;
            case 0x140614u: goto label_140614;
            case 0x140618u: goto label_140618;
            case 0x14061Cu: goto label_14061c;
            case 0x140620u: goto label_140620;
            case 0x140624u: goto label_140624;
            case 0x140628u: goto label_140628;
            case 0x14062Cu: goto label_14062c;
            case 0x140630u: goto label_140630;
            case 0x140634u: goto label_140634;
            case 0x140638u: goto label_140638;
            case 0x14063Cu: goto label_14063c;
            case 0x140640u: goto label_140640;
            case 0x140644u: goto label_140644;
            case 0x140648u: goto label_140648;
            case 0x14064Cu: goto label_14064c;
            case 0x140650u: goto label_140650;
            case 0x140654u: goto label_140654;
            case 0x140658u: goto label_140658;
            case 0x14065Cu: goto label_14065c;
            case 0x140660u: goto label_140660;
            case 0x140664u: goto label_140664;
            case 0x140668u: goto label_140668;
            case 0x14066Cu: goto label_14066c;
            case 0x140670u: goto label_140670;
            case 0x140674u: goto label_140674;
            case 0x140678u: goto label_140678;
            case 0x14067Cu: goto label_14067c;
            case 0x140680u: goto label_140680;
            case 0x140684u: goto label_140684;
            case 0x140688u: goto label_140688;
            case 0x14068Cu: goto label_14068c;
            case 0x140690u: goto label_140690;
            case 0x140694u: goto label_140694;
            case 0x140698u: goto label_140698;
            case 0x14069Cu: goto label_14069c;
            case 0x1406A0u: goto label_1406a0;
            case 0x1406A4u: goto label_1406a4;
            case 0x1406A8u: goto label_1406a8;
            case 0x1406ACu: goto label_1406ac;
            case 0x1406B0u: goto label_1406b0;
            case 0x1406B4u: goto label_1406b4;
            case 0x1406B8u: goto label_1406b8;
            case 0x1406BCu: goto label_1406bc;
            case 0x1406C0u: goto label_1406c0;
            case 0x1406C4u: goto label_1406c4;
            case 0x1406C8u: goto label_1406c8;
            case 0x1406CCu: goto label_1406cc;
            case 0x1406D0u: goto label_1406d0;
            case 0x1406D4u: goto label_1406d4;
            case 0x1406D8u: goto label_1406d8;
            case 0x1406DCu: goto label_1406dc;
            case 0x1406E0u: goto label_1406e0;
            case 0x1406E4u: goto label_1406e4;
            case 0x1406E8u: goto label_1406e8;
            case 0x1406ECu: goto label_1406ec;
            case 0x1406F0u: goto label_1406f0;
            case 0x1406F4u: goto label_1406f4;
            case 0x1406F8u: goto label_1406f8;
            case 0x1406FCu: goto label_1406fc;
            case 0x140700u: goto label_140700;
            case 0x140704u: goto label_140704;
            case 0x140708u: goto label_140708;
            case 0x14070Cu: goto label_14070c;
            case 0x140710u: goto label_140710;
            case 0x140714u: goto label_140714;
            case 0x140718u: goto label_140718;
            case 0x14071Cu: goto label_14071c;
            case 0x140720u: goto label_140720;
            case 0x140724u: goto label_140724;
            case 0x140728u: goto label_140728;
            case 0x14072Cu: goto label_14072c;
            case 0x140730u: goto label_140730;
            case 0x140734u: goto label_140734;
            case 0x140738u: goto label_140738;
            case 0x14073Cu: goto label_14073c;
            case 0x140740u: goto label_140740;
            case 0x140744u: goto label_140744;
            case 0x140748u: goto label_140748;
            case 0x14074Cu: goto label_14074c;
            case 0x140750u: goto label_140750;
            case 0x140754u: goto label_140754;
            case 0x140758u: goto label_140758;
            case 0x14075Cu: goto label_14075c;
            case 0x140760u: goto label_140760;
            case 0x140764u: goto label_140764;
            case 0x140768u: goto label_140768;
            case 0x14076Cu: goto label_14076c;
            case 0x140770u: goto label_140770;
            case 0x140774u: goto label_140774;
            case 0x140778u: goto label_140778;
            case 0x14077Cu: goto label_14077c;
            case 0x140780u: goto label_140780;
            case 0x140784u: goto label_140784;
            case 0x140788u: goto label_140788;
            case 0x14078Cu: goto label_14078c;
            case 0x140790u: goto label_140790;
            case 0x140794u: goto label_140794;
            case 0x140798u: goto label_140798;
            case 0x14079Cu: goto label_14079c;
            case 0x1407A0u: goto label_1407a0;
            case 0x1407A4u: goto label_1407a4;
            case 0x1407A8u: goto label_1407a8;
            case 0x1407ACu: goto label_1407ac;
            case 0x1407B0u: goto label_1407b0;
            case 0x1407B4u: goto label_1407b4;
            case 0x1407B8u: goto label_1407b8;
            case 0x1407BCu: goto label_1407bc;
            case 0x1407C0u: goto label_1407c0;
            case 0x1407C4u: goto label_1407c4;
            case 0x1407C8u: goto label_1407c8;
            case 0x1407CCu: goto label_1407cc;
            case 0x1407D0u: goto label_1407d0;
            case 0x1407D4u: goto label_1407d4;
            case 0x1407D8u: goto label_1407d8;
            case 0x1407DCu: goto label_1407dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x140284u;
label_140284:
    // 0x140284: 0x0
    ctx->pc = 0x140284u;
    // NOP
label_140288:
    // 0x140288: 0x27bdfff0
    ctx->pc = 0x140288u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_14028c:
    // 0x14028c: 0x2ca20004
    ctx->pc = 0x14028cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), 4));
label_140290:
    // 0x140290: 0x14400009
label_140294:
    if (ctx->pc == 0x140294u) {
        ctx->pc = 0x140294u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x140298u;
        goto label_140298;
    }
    ctx->pc = 0x140290u;
    {
        const bool branch_taken_0x140290 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x140294u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x140290) {
            ctx->pc = 0x1402B8u;
            goto label_1402b8;
        }
    }
    ctx->pc = 0x140298u;
label_140298:
    // 0x140298: 0x8c820028
    ctx->pc = 0x140298u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_14029c:
    // 0x14029c: 0x50400014
label_1402a0:
    if (ctx->pc == 0x1402A0u) {
        ctx->pc = 0x1402A0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1402A4u;
        goto label_1402a4;
    }
    ctx->pc = 0x14029Cu;
    {
        const bool branch_taken_0x14029c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x14029c) {
            ctx->pc = 0x1402A0u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x1402F0u;
            goto label_1402f0;
        }
    }
    ctx->pc = 0x1402A4u;
label_1402a4:
    // 0x1402a4: 0x8c84002c
    ctx->pc = 0x1402a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_1402a8:
    // 0x1402a8: 0x40f809
label_1402ac:
    if (ctx->pc == 0x1402ACu) {
        ctx->pc = 0x1402ACu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x1402B0u;
        goto label_1402b0;
    }
    ctx->pc = 0x1402A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1402B0u);
        ctx->pc = 0x1402ACu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1401F8u: goto label_1401f8;
            case 0x1401FCu: goto label_1401fc;
            case 0x140200u: goto label_140200;
            case 0x140204u: goto label_140204;
            case 0x140208u: goto label_140208;
            case 0x14020Cu: goto label_14020c;
            case 0x140210u: goto label_140210;
            case 0x140214u: goto label_140214;
            case 0x140218u: goto label_140218;
            case 0x14021Cu: goto label_14021c;
            case 0x140220u: goto label_140220;
            case 0x140224u: goto label_140224;
            case 0x140228u: goto label_140228;
            case 0x14022Cu: goto label_14022c;
            case 0x140230u: goto label_140230;
            case 0x140234u: goto label_140234;
            case 0x140238u: goto label_140238;
            case 0x14023Cu: goto label_14023c;
            case 0x140240u: goto label_140240;
            case 0x140244u: goto label_140244;
            case 0x140248u: goto label_140248;
            case 0x14024Cu: goto label_14024c;
            case 0x140250u: goto label_140250;
            case 0x140254u: goto label_140254;
            case 0x140258u: goto label_140258;
            case 0x14025Cu: goto label_14025c;
            case 0x140260u: goto label_140260;
            case 0x140264u: goto label_140264;
            case 0x140268u: goto label_140268;
            case 0x14026Cu: goto label_14026c;
            case 0x140270u: goto label_140270;
            case 0x140274u: goto label_140274;
            case 0x140278u: goto label_140278;
            case 0x14027Cu: goto label_14027c;
            case 0x140280u: goto label_140280;
            case 0x140284u: goto label_140284;
            case 0x140288u: goto label_140288;
            case 0x14028Cu: goto label_14028c;
            case 0x140290u: goto label_140290;
            case 0x140294u: goto label_140294;
            case 0x140298u: goto label_140298;
            case 0x14029Cu: goto label_14029c;
            case 0x1402A0u: goto label_1402a0;
            case 0x1402A4u: goto label_1402a4;
            case 0x1402A8u: goto label_1402a8;
            case 0x1402ACu: goto label_1402ac;
            case 0x1402B0u: goto label_1402b0;
            case 0x1402B4u: goto label_1402b4;
            case 0x1402B8u: goto label_1402b8;
            case 0x1402BCu: goto label_1402bc;
            case 0x1402C0u: goto label_1402c0;
            case 0x1402C4u: goto label_1402c4;
            case 0x1402C8u: goto label_1402c8;
            case 0x1402CCu: goto label_1402cc;
            case 0x1402D0u: goto label_1402d0;
            case 0x1402D4u: goto label_1402d4;
            case 0x1402D8u: goto label_1402d8;
            case 0x1402DCu: goto label_1402dc;
            case 0x1402E0u: goto label_1402e0;
            case 0x1402E4u: goto label_1402e4;
            case 0x1402E8u: goto label_1402e8;
            case 0x1402ECu: goto label_1402ec;
            case 0x1402F0u: goto label_1402f0;
            case 0x1402F4u: goto label_1402f4;
            case 0x1402F8u: goto label_1402f8;
            case 0x1402FCu: goto label_1402fc;
            case 0x140300u: goto label_140300;
            case 0x140304u: goto label_140304;
            case 0x140308u: goto label_140308;
            case 0x14030Cu: goto label_14030c;
            case 0x140310u: goto label_140310;
            case 0x140314u: goto label_140314;
            case 0x140318u: goto label_140318;
            case 0x14031Cu: goto label_14031c;
            case 0x140320u: goto label_140320;
            case 0x140324u: goto label_140324;
            case 0x140328u: goto label_140328;
            case 0x14032Cu: goto label_14032c;
            case 0x140330u: goto label_140330;
            case 0x140334u: goto label_140334;
            case 0x140338u: goto label_140338;
            case 0x14033Cu: goto label_14033c;
            case 0x140340u: goto label_140340;
            case 0x140344u: goto label_140344;
            case 0x140348u: goto label_140348;
            case 0x14034Cu: goto label_14034c;
            case 0x140350u: goto label_140350;
            case 0x140354u: goto label_140354;
            case 0x140358u: goto label_140358;
            case 0x14035Cu: goto label_14035c;
            case 0x140360u: goto label_140360;
            case 0x140364u: goto label_140364;
            case 0x140368u: goto label_140368;
            case 0x14036Cu: goto label_14036c;
            case 0x140370u: goto label_140370;
            case 0x140374u: goto label_140374;
            case 0x140378u: goto label_140378;
            case 0x14037Cu: goto label_14037c;
            case 0x140380u: goto label_140380;
            case 0x140384u: goto label_140384;
            case 0x140388u: goto label_140388;
            case 0x14038Cu: goto label_14038c;
            case 0x140390u: goto label_140390;
            case 0x140394u: goto label_140394;
            case 0x140398u: goto label_140398;
            case 0x14039Cu: goto label_14039c;
            case 0x1403A0u: goto label_1403a0;
            case 0x1403A4u: goto label_1403a4;
            case 0x1403A8u: goto label_1403a8;
            case 0x1403ACu: goto label_1403ac;
            case 0x1403B0u: goto label_1403b0;
            case 0x1403B4u: goto label_1403b4;
            case 0x1403B8u: goto label_1403b8;
            case 0x1403BCu: goto label_1403bc;
            case 0x1403C0u: goto label_1403c0;
            case 0x1403C4u: goto label_1403c4;
            case 0x1403C8u: goto label_1403c8;
            case 0x1403CCu: goto label_1403cc;
            case 0x1403D0u: goto label_1403d0;
            case 0x1403D4u: goto label_1403d4;
            case 0x1403D8u: goto label_1403d8;
            case 0x1403DCu: goto label_1403dc;
            case 0x1403E0u: goto label_1403e0;
            case 0x1403E4u: goto label_1403e4;
            case 0x1403E8u: goto label_1403e8;
            case 0x1403ECu: goto label_1403ec;
            case 0x1403F0u: goto label_1403f0;
            case 0x1403F4u: goto label_1403f4;
            case 0x1403F8u: goto label_1403f8;
            case 0x1403FCu: goto label_1403fc;
            case 0x140400u: goto label_140400;
            case 0x140404u: goto label_140404;
            case 0x140408u: goto label_140408;
            case 0x14040Cu: goto label_14040c;
            case 0x140410u: goto label_140410;
            case 0x140414u: goto label_140414;
            case 0x140418u: goto label_140418;
            case 0x14041Cu: goto label_14041c;
            case 0x140420u: goto label_140420;
            case 0x140424u: goto label_140424;
            case 0x140428u: goto label_140428;
            case 0x14042Cu: goto label_14042c;
            case 0x140430u: goto label_140430;
            case 0x140434u: goto label_140434;
            case 0x140438u: goto label_140438;
            case 0x14043Cu: goto label_14043c;
            case 0x140440u: goto label_140440;
            case 0x140444u: goto label_140444;
            case 0x140448u: goto label_140448;
            case 0x14044Cu: goto label_14044c;
            case 0x140450u: goto label_140450;
            case 0x140454u: goto label_140454;
            case 0x140458u: goto label_140458;
            case 0x14045Cu: goto label_14045c;
            case 0x140460u: goto label_140460;
            case 0x140464u: goto label_140464;
            case 0x140468u: goto label_140468;
            case 0x14046Cu: goto label_14046c;
            case 0x140470u: goto label_140470;
            case 0x140474u: goto label_140474;
            case 0x140478u: goto label_140478;
            case 0x14047Cu: goto label_14047c;
            case 0x140480u: goto label_140480;
            case 0x140484u: goto label_140484;
            case 0x140488u: goto label_140488;
            case 0x14048Cu: goto label_14048c;
            case 0x140490u: goto label_140490;
            case 0x140494u: goto label_140494;
            case 0x140498u: goto label_140498;
            case 0x14049Cu: goto label_14049c;
            case 0x1404A0u: goto label_1404a0;
            case 0x1404A4u: goto label_1404a4;
            case 0x1404A8u: goto label_1404a8;
            case 0x1404ACu: goto label_1404ac;
            case 0x1404B0u: goto label_1404b0;
            case 0x1404B4u: goto label_1404b4;
            case 0x1404B8u: goto label_1404b8;
            case 0x1404BCu: goto label_1404bc;
            case 0x1404C0u: goto label_1404c0;
            case 0x1404C4u: goto label_1404c4;
            case 0x1404C8u: goto label_1404c8;
            case 0x1404CCu: goto label_1404cc;
            case 0x1404D0u: goto label_1404d0;
            case 0x1404D4u: goto label_1404d4;
            case 0x1404D8u: goto label_1404d8;
            case 0x1404DCu: goto label_1404dc;
            case 0x1404E0u: goto label_1404e0;
            case 0x1404E4u: goto label_1404e4;
            case 0x1404E8u: goto label_1404e8;
            case 0x1404ECu: goto label_1404ec;
            case 0x1404F0u: goto label_1404f0;
            case 0x1404F4u: goto label_1404f4;
            case 0x1404F8u: goto label_1404f8;
            case 0x1404FCu: goto label_1404fc;
            case 0x140500u: goto label_140500;
            case 0x140504u: goto label_140504;
            case 0x140508u: goto label_140508;
            case 0x14050Cu: goto label_14050c;
            case 0x140510u: goto label_140510;
            case 0x140514u: goto label_140514;
            case 0x140518u: goto label_140518;
            case 0x14051Cu: goto label_14051c;
            case 0x140520u: goto label_140520;
            case 0x140524u: goto label_140524;
            case 0x140528u: goto label_140528;
            case 0x14052Cu: goto label_14052c;
            case 0x140530u: goto label_140530;
            case 0x140534u: goto label_140534;
            case 0x140538u: goto label_140538;
            case 0x14053Cu: goto label_14053c;
            case 0x140540u: goto label_140540;
            case 0x140544u: goto label_140544;
            case 0x140548u: goto label_140548;
            case 0x14054Cu: goto label_14054c;
            case 0x140550u: goto label_140550;
            case 0x140554u: goto label_140554;
            case 0x140558u: goto label_140558;
            case 0x14055Cu: goto label_14055c;
            case 0x140560u: goto label_140560;
            case 0x140564u: goto label_140564;
            case 0x140568u: goto label_140568;
            case 0x14056Cu: goto label_14056c;
            case 0x140570u: goto label_140570;
            case 0x140574u: goto label_140574;
            case 0x140578u: goto label_140578;
            case 0x14057Cu: goto label_14057c;
            case 0x140580u: goto label_140580;
            case 0x140584u: goto label_140584;
            case 0x140588u: goto label_140588;
            case 0x14058Cu: goto label_14058c;
            case 0x140590u: goto label_140590;
            case 0x140594u: goto label_140594;
            case 0x140598u: goto label_140598;
            case 0x14059Cu: goto label_14059c;
            case 0x1405A0u: goto label_1405a0;
            case 0x1405A4u: goto label_1405a4;
            case 0x1405A8u: goto label_1405a8;
            case 0x1405ACu: goto label_1405ac;
            case 0x1405B0u: goto label_1405b0;
            case 0x1405B4u: goto label_1405b4;
            case 0x1405B8u: goto label_1405b8;
            case 0x1405BCu: goto label_1405bc;
            case 0x1405C0u: goto label_1405c0;
            case 0x1405C4u: goto label_1405c4;
            case 0x1405C8u: goto label_1405c8;
            case 0x1405CCu: goto label_1405cc;
            case 0x1405D0u: goto label_1405d0;
            case 0x1405D4u: goto label_1405d4;
            case 0x1405D8u: goto label_1405d8;
            case 0x1405DCu: goto label_1405dc;
            case 0x1405E0u: goto label_1405e0;
            case 0x1405E4u: goto label_1405e4;
            case 0x1405E8u: goto label_1405e8;
            case 0x1405ECu: goto label_1405ec;
            case 0x1405F0u: goto label_1405f0;
            case 0x1405F4u: goto label_1405f4;
            case 0x1405F8u: goto label_1405f8;
            case 0x1405FCu: goto label_1405fc;
            case 0x140600u: goto label_140600;
            case 0x140604u: goto label_140604;
            case 0x140608u: goto label_140608;
            case 0x14060Cu: goto label_14060c;
            case 0x140610u: goto label_140610;
            case 0x140614u: goto label_140614;
            case 0x140618u: goto label_140618;
            case 0x14061Cu: goto label_14061c;
            case 0x140620u: goto label_140620;
            case 0x140624u: goto label_140624;
            case 0x140628u: goto label_140628;
            case 0x14062Cu: goto label_14062c;
            case 0x140630u: goto label_140630;
            case 0x140634u: goto label_140634;
            case 0x140638u: goto label_140638;
            case 0x14063Cu: goto label_14063c;
            case 0x140640u: goto label_140640;
            case 0x140644u: goto label_140644;
            case 0x140648u: goto label_140648;
            case 0x14064Cu: goto label_14064c;
            case 0x140650u: goto label_140650;
            case 0x140654u: goto label_140654;
            case 0x140658u: goto label_140658;
            case 0x14065Cu: goto label_14065c;
            case 0x140660u: goto label_140660;
            case 0x140664u: goto label_140664;
            case 0x140668u: goto label_140668;
            case 0x14066Cu: goto label_14066c;
            case 0x140670u: goto label_140670;
            case 0x140674u: goto label_140674;
            case 0x140678u: goto label_140678;
            case 0x14067Cu: goto label_14067c;
            case 0x140680u: goto label_140680;
            case 0x140684u: goto label_140684;
            case 0x140688u: goto label_140688;
            case 0x14068Cu: goto label_14068c;
            case 0x140690u: goto label_140690;
            case 0x140694u: goto label_140694;
            case 0x140698u: goto label_140698;
            case 0x14069Cu: goto label_14069c;
            case 0x1406A0u: goto label_1406a0;
            case 0x1406A4u: goto label_1406a4;
            case 0x1406A8u: goto label_1406a8;
            case 0x1406ACu: goto label_1406ac;
            case 0x1406B0u: goto label_1406b0;
            case 0x1406B4u: goto label_1406b4;
            case 0x1406B8u: goto label_1406b8;
            case 0x1406BCu: goto label_1406bc;
            case 0x1406C0u: goto label_1406c0;
            case 0x1406C4u: goto label_1406c4;
            case 0x1406C8u: goto label_1406c8;
            case 0x1406CCu: goto label_1406cc;
            case 0x1406D0u: goto label_1406d0;
            case 0x1406D4u: goto label_1406d4;
            case 0x1406D8u: goto label_1406d8;
            case 0x1406DCu: goto label_1406dc;
            case 0x1406E0u: goto label_1406e0;
            case 0x1406E4u: goto label_1406e4;
            case 0x1406E8u: goto label_1406e8;
            case 0x1406ECu: goto label_1406ec;
            case 0x1406F0u: goto label_1406f0;
            case 0x1406F4u: goto label_1406f4;
            case 0x1406F8u: goto label_1406f8;
            case 0x1406FCu: goto label_1406fc;
            case 0x140700u: goto label_140700;
            case 0x140704u: goto label_140704;
            case 0x140708u: goto label_140708;
            case 0x14070Cu: goto label_14070c;
            case 0x140710u: goto label_140710;
            case 0x140714u: goto label_140714;
            case 0x140718u: goto label_140718;
            case 0x14071Cu: goto label_14071c;
            case 0x140720u: goto label_140720;
            case 0x140724u: goto label_140724;
            case 0x140728u: goto label_140728;
            case 0x14072Cu: goto label_14072c;
            case 0x140730u: goto label_140730;
            case 0x140734u: goto label_140734;
            case 0x140738u: goto label_140738;
            case 0x14073Cu: goto label_14073c;
            case 0x140740u: goto label_140740;
            case 0x140744u: goto label_140744;
            case 0x140748u: goto label_140748;
            case 0x14074Cu: goto label_14074c;
            case 0x140750u: goto label_140750;
            case 0x140754u: goto label_140754;
            case 0x140758u: goto label_140758;
            case 0x14075Cu: goto label_14075c;
            case 0x140760u: goto label_140760;
            case 0x140764u: goto label_140764;
            case 0x140768u: goto label_140768;
            case 0x14076Cu: goto label_14076c;
            case 0x140770u: goto label_140770;
            case 0x140774u: goto label_140774;
            case 0x140778u: goto label_140778;
            case 0x14077Cu: goto label_14077c;
            case 0x140780u: goto label_140780;
            case 0x140784u: goto label_140784;
            case 0x140788u: goto label_140788;
            case 0x14078Cu: goto label_14078c;
            case 0x140790u: goto label_140790;
            case 0x140794u: goto label_140794;
            case 0x140798u: goto label_140798;
            case 0x14079Cu: goto label_14079c;
            case 0x1407A0u: goto label_1407a0;
            case 0x1407A4u: goto label_1407a4;
            case 0x1407A8u: goto label_1407a8;
            case 0x1407ACu: goto label_1407ac;
            case 0x1407B0u: goto label_1407b0;
            case 0x1407B4u: goto label_1407b4;
            case 0x1407B8u: goto label_1407b8;
            case 0x1407BCu: goto label_1407bc;
            case 0x1407C0u: goto label_1407c0;
            case 0x1407C4u: goto label_1407c4;
            case 0x1407C8u: goto label_1407c8;
            case 0x1407CCu: goto label_1407cc;
            case 0x1407D0u: goto label_1407d0;
            case 0x1407D4u: goto label_1407d4;
            case 0x1407D8u: goto label_1407d8;
            case 0x1407DCu: goto label_1407dc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1402B0u; }
            if (ctx->pc != 0x1402B0u) { return; }
        }
    }
    ctx->pc = 0x1402B0u;
label_1402b0:
    // 0x1402b0: 0x1000000f
label_1402b4:
    if (ctx->pc == 0x1402B4u) {
        ctx->pc = 0x1402B4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1402B8u;
        goto label_1402b8;
    }
    ctx->pc = 0x1402B0u;
    {
        const bool branch_taken_0x1402b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1402B4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1402b0) {
            ctx->pc = 0x1402F0u;
            goto label_1402f0;
        }
    }
    ctx->pc = 0x1402B8u;
label_1402b8:
    // 0x1402b8: 0x51080
    ctx->pc = 0x1402b8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
label_1402bc:
    // 0x1402bc: 0x441021
    ctx->pc = 0x1402bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1402c0:
    // 0x1402c0: 0x8c440018
    ctx->pc = 0x1402c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1402c4:
    // 0x1402c4: 0x10800009
label_1402c8:
    if (ctx->pc == 0x1402C8u) {
        ctx->pc = 0x1402C8u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1402CCu;
        goto label_1402cc;
    }
    ctx->pc = 0x1402C4u;
    {
        const bool branch_taken_0x1402c4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1402C8u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1402c4) {
            ctx->pc = 0x1402ECu;
            goto label_1402ec;
        }
    }
    ctx->pc = 0x1402CCu;
label_1402cc:
    // 0x1402cc: 0x0
    ctx->pc = 0x1402ccu;
    // NOP
label_1402d0:
    // 0x1402d0: 0x8c82000c
    ctx->pc = 0x1402d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1402d4:
    // 0x1402d4: 0x8c840000
    ctx->pc = 0x1402d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1402d8:
    // 0x1402d8: 0x0
    ctx->pc = 0x1402d8u;
    // NOP
label_1402dc:
    // 0x1402dc: 0x0
    ctx->pc = 0x1402dcu;
    // NOP
label_1402e0:
    // 0x1402e0: 0x0
    ctx->pc = 0x1402e0u;
    // NOP
label_1402e4:
    // 0x1402e4: 0x1480fffa
label_1402e8:
    if (ctx->pc == 0x1402E8u) {
        ctx->pc = 0x1402E8u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1402ECu;
        goto label_1402ec;
    }
    ctx->pc = 0x1402E4u;
    {
        const bool branch_taken_0x1402e4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1402E8u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x1402e4) {
            ctx->pc = 0x1402D0u;
            goto label_1402d0;
        }
    }
    ctx->pc = 0x1402ECu;
label_1402ec:
    // 0x1402ec: 0x60102d
    ctx->pc = 0x1402ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1402f0:
    // 0x1402f0: 0xdfbf0000
    ctx->pc = 0x1402f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1402f4:
    // 0x1402f4: 0x3e00008
label_1402f8:
    if (ctx->pc == 0x1402F8u) {
        ctx->pc = 0x1402F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1402FCu;
        goto label_1402fc;
    }
    ctx->pc = 0x1402F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1402F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1401F8u: goto label_1401f8;
            case 0x1401FCu: goto label_1401fc;
            case 0x140200u: goto label_140200;
            case 0x140204u: goto label_140204;
            case 0x140208u: goto label_140208;
            case 0x14020Cu: goto label_14020c;
            case 0x140210u: goto label_140210;
            case 0x140214u: goto label_140214;
            case 0x140218u: goto label_140218;
            case 0x14021Cu: goto label_14021c;
            case 0x140220u: goto label_140220;
            case 0x140224u: goto label_140224;
            case 0x140228u: goto label_140228;
            case 0x14022Cu: goto label_14022c;
            case 0x140230u: goto label_140230;
            case 0x140234u: goto label_140234;
            case 0x140238u: goto label_140238;
            case 0x14023Cu: goto label_14023c;
            case 0x140240u: goto label_140240;
            case 0x140244u: goto label_140244;
            case 0x140248u: goto label_140248;
            case 0x14024Cu: goto label_14024c;
            case 0x140250u: goto label_140250;
            case 0x140254u: goto label_140254;
            case 0x140258u: goto label_140258;
            case 0x14025Cu: goto label_14025c;
            case 0x140260u: goto label_140260;
            case 0x140264u: goto label_140264;
            case 0x140268u: goto label_140268;
            case 0x14026Cu: goto label_14026c;
            case 0x140270u: goto label_140270;
            case 0x140274u: goto label_140274;
            case 0x140278u: goto label_140278;
            case 0x14027Cu: goto label_14027c;
            case 0x140280u: goto label_140280;
            case 0x140284u: goto label_140284;
            case 0x140288u: goto label_140288;
            case 0x14028Cu: goto label_14028c;
            case 0x140290u: goto label_140290;
            case 0x140294u: goto label_140294;
            case 0x140298u: goto label_140298;
            case 0x14029Cu: goto label_14029c;
            case 0x1402A0u: goto label_1402a0;
            case 0x1402A4u: goto label_1402a4;
            case 0x1402A8u: goto label_1402a8;
            case 0x1402ACu: goto label_1402ac;
            case 0x1402B0u: goto label_1402b0;
            case 0x1402B4u: goto label_1402b4;
            case 0x1402B8u: goto label_1402b8;
            case 0x1402BCu: goto label_1402bc;
            case 0x1402C0u: goto label_1402c0;
            case 0x1402C4u: goto label_1402c4;
            case 0x1402C8u: goto label_1402c8;
            case 0x1402CCu: goto label_1402cc;
            case 0x1402D0u: goto label_1402d0;
            case 0x1402D4u: goto label_1402d4;
            case 0x1402D8u: goto label_1402d8;
            case 0x1402DCu: goto label_1402dc;
            case 0x1402E0u: goto label_1402e0;
            case 0x1402E4u: goto label_1402e4;
            case 0x1402E8u: goto label_1402e8;
            case 0x1402ECu: goto label_1402ec;
            case 0x1402F0u: goto label_1402f0;
            case 0x1402F4u: goto label_1402f4;
            case 0x1402F8u: goto label_1402f8;
            case 0x1402FCu: goto label_1402fc;
            case 0x140300u: goto label_140300;
            case 0x140304u: goto label_140304;
            case 0x140308u: goto label_140308;
            case 0x14030Cu: goto label_14030c;
            case 0x140310u: goto label_140310;
            case 0x140314u: goto label_140314;
            case 0x140318u: goto label_140318;
            case 0x14031Cu: goto label_14031c;
            case 0x140320u: goto label_140320;
            case 0x140324u: goto label_140324;
            case 0x140328u: goto label_140328;
            case 0x14032Cu: goto label_14032c;
            case 0x140330u: goto label_140330;
            case 0x140334u: goto label_140334;
            case 0x140338u: goto label_140338;
            case 0x14033Cu: goto label_14033c;
            case 0x140340u: goto label_140340;
            case 0x140344u: goto label_140344;
            case 0x140348u: goto label_140348;
            case 0x14034Cu: goto label_14034c;
            case 0x140350u: goto label_140350;
            case 0x140354u: goto label_140354;
            case 0x140358u: goto label_140358;
            case 0x14035Cu: goto label_14035c;
            case 0x140360u: goto label_140360;
            case 0x140364u: goto label_140364;
            case 0x140368u: goto label_140368;
            case 0x14036Cu: goto label_14036c;
            case 0x140370u: goto label_140370;
            case 0x140374u: goto label_140374;
            case 0x140378u: goto label_140378;
            case 0x14037Cu: goto label_14037c;
            case 0x140380u: goto label_140380;
            case 0x140384u: goto label_140384;
            case 0x140388u: goto label_140388;
            case 0x14038Cu: goto label_14038c;
            case 0x140390u: goto label_140390;
            case 0x140394u: goto label_140394;
            case 0x140398u: goto label_140398;
            case 0x14039Cu: goto label_14039c;
            case 0x1403A0u: goto label_1403a0;
            case 0x1403A4u: goto label_1403a4;
            case 0x1403A8u: goto label_1403a8;
            case 0x1403ACu: goto label_1403ac;
            case 0x1403B0u: goto label_1403b0;
            case 0x1403B4u: goto label_1403b4;
            case 0x1403B8u: goto label_1403b8;
            case 0x1403BCu: goto label_1403bc;
            case 0x1403C0u: goto label_1403c0;
            case 0x1403C4u: goto label_1403c4;
            case 0x1403C8u: goto label_1403c8;
            case 0x1403CCu: goto label_1403cc;
            case 0x1403D0u: goto label_1403d0;
            case 0x1403D4u: goto label_1403d4;
            case 0x1403D8u: goto label_1403d8;
            case 0x1403DCu: goto label_1403dc;
            case 0x1403E0u: goto label_1403e0;
            case 0x1403E4u: goto label_1403e4;
            case 0x1403E8u: goto label_1403e8;
            case 0x1403ECu: goto label_1403ec;
            case 0x1403F0u: goto label_1403f0;
            case 0x1403F4u: goto label_1403f4;
            case 0x1403F8u: goto label_1403f8;
            case 0x1403FCu: goto label_1403fc;
            case 0x140400u: goto label_140400;
            case 0x140404u: goto label_140404;
            case 0x140408u: goto label_140408;
            case 0x14040Cu: goto label_14040c;
            case 0x140410u: goto label_140410;
            case 0x140414u: goto label_140414;
            case 0x140418u: goto label_140418;
            case 0x14041Cu: goto label_14041c;
            case 0x140420u: goto label_140420;
            case 0x140424u: goto label_140424;
            case 0x140428u: goto label_140428;
            case 0x14042Cu: goto label_14042c;
            case 0x140430u: goto label_140430;
            case 0x140434u: goto label_140434;
            case 0x140438u: goto label_140438;
            case 0x14043Cu: goto label_14043c;
            case 0x140440u: goto label_140440;
            case 0x140444u: goto label_140444;
            case 0x140448u: goto label_140448;
            case 0x14044Cu: goto label_14044c;
            case 0x140450u: goto label_140450;
            case 0x140454u: goto label_140454;
            case 0x140458u: goto label_140458;
            case 0x14045Cu: goto label_14045c;
            case 0x140460u: goto label_140460;
            case 0x140464u: goto label_140464;
            case 0x140468u: goto label_140468;
            case 0x14046Cu: goto label_14046c;
            case 0x140470u: goto label_140470;
            case 0x140474u: goto label_140474;
            case 0x140478u: goto label_140478;
            case 0x14047Cu: goto label_14047c;
            case 0x140480u: goto label_140480;
            case 0x140484u: goto label_140484;
            case 0x140488u: goto label_140488;
            case 0x14048Cu: goto label_14048c;
            case 0x140490u: goto label_140490;
            case 0x140494u: goto label_140494;
            case 0x140498u: goto label_140498;
            case 0x14049Cu: goto label_14049c;
            case 0x1404A0u: goto label_1404a0;
            case 0x1404A4u: goto label_1404a4;
            case 0x1404A8u: goto label_1404a8;
            case 0x1404ACu: goto label_1404ac;
            case 0x1404B0u: goto label_1404b0;
            case 0x1404B4u: goto label_1404b4;
            case 0x1404B8u: goto label_1404b8;
            case 0x1404BCu: goto label_1404bc;
            case 0x1404C0u: goto label_1404c0;
            case 0x1404C4u: goto label_1404c4;
            case 0x1404C8u: goto label_1404c8;
            case 0x1404CCu: goto label_1404cc;
            case 0x1404D0u: goto label_1404d0;
            case 0x1404D4u: goto label_1404d4;
            case 0x1404D8u: goto label_1404d8;
            case 0x1404DCu: goto label_1404dc;
            case 0x1404E0u: goto label_1404e0;
            case 0x1404E4u: goto label_1404e4;
            case 0x1404E8u: goto label_1404e8;
            case 0x1404ECu: goto label_1404ec;
            case 0x1404F0u: goto label_1404f0;
            case 0x1404F4u: goto label_1404f4;
            case 0x1404F8u: goto label_1404f8;
            case 0x1404FCu: goto label_1404fc;
            case 0x140500u: goto label_140500;
            case 0x140504u: goto label_140504;
            case 0x140508u: goto label_140508;
            case 0x14050Cu: goto label_14050c;
            case 0x140510u: goto label_140510;
            case 0x140514u: goto label_140514;
            case 0x140518u: goto label_140518;
            case 0x14051Cu: goto label_14051c;
            case 0x140520u: goto label_140520;
            case 0x140524u: goto label_140524;
            case 0x140528u: goto label_140528;
            case 0x14052Cu: goto label_14052c;
            case 0x140530u: goto label_140530;
            case 0x140534u: goto label_140534;
            case 0x140538u: goto label_140538;
            case 0x14053Cu: goto label_14053c;
            case 0x140540u: goto label_140540;
            case 0x140544u: goto label_140544;
            case 0x140548u: goto label_140548;
            case 0x14054Cu: goto label_14054c;
            case 0x140550u: goto label_140550;
            case 0x140554u: goto label_140554;
            case 0x140558u: goto label_140558;
            case 0x14055Cu: goto label_14055c;
            case 0x140560u: goto label_140560;
            case 0x140564u: goto label_140564;
            case 0x140568u: goto label_140568;
            case 0x14056Cu: goto label_14056c;
            case 0x140570u: goto label_140570;
            case 0x140574u: goto label_140574;
            case 0x140578u: goto label_140578;
            case 0x14057Cu: goto label_14057c;
            case 0x140580u: goto label_140580;
            case 0x140584u: goto label_140584;
            case 0x140588u: goto label_140588;
            case 0x14058Cu: goto label_14058c;
            case 0x140590u: goto label_140590;
            case 0x140594u: goto label_140594;
            case 0x140598u: goto label_140598;
            case 0x14059Cu: goto label_14059c;
            case 0x1405A0u: goto label_1405a0;
            case 0x1405A4u: goto label_1405a4;
            case 0x1405A8u: goto label_1405a8;
            case 0x1405ACu: goto label_1405ac;
            case 0x1405B0u: goto label_1405b0;
            case 0x1405B4u: goto label_1405b4;
            case 0x1405B8u: goto label_1405b8;
            case 0x1405BCu: goto label_1405bc;
            case 0x1405C0u: goto label_1405c0;
            case 0x1405C4u: goto label_1405c4;
            case 0x1405C8u: goto label_1405c8;
            case 0x1405CCu: goto label_1405cc;
            case 0x1405D0u: goto label_1405d0;
            case 0x1405D4u: goto label_1405d4;
            case 0x1405D8u: goto label_1405d8;
            case 0x1405DCu: goto label_1405dc;
            case 0x1405E0u: goto label_1405e0;
            case 0x1405E4u: goto label_1405e4;
            case 0x1405E8u: goto label_1405e8;
            case 0x1405ECu: goto label_1405ec;
            case 0x1405F0u: goto label_1405f0;
            case 0x1405F4u: goto label_1405f4;
            case 0x1405F8u: goto label_1405f8;
            case 0x1405FCu: goto label_1405fc;
            case 0x140600u: goto label_140600;
            case 0x140604u: goto label_140604;
            case 0x140608u: goto label_140608;
            case 0x14060Cu: goto label_14060c;
            case 0x140610u: goto label_140610;
            case 0x140614u: goto label_140614;
            case 0x140618u: goto label_140618;
            case 0x14061Cu: goto label_14061c;
            case 0x140620u: goto label_140620;
            case 0x140624u: goto label_140624;
            case 0x140628u: goto label_140628;
            case 0x14062Cu: goto label_14062c;
            case 0x140630u: goto label_140630;
            case 0x140634u: goto label_140634;
            case 0x140638u: goto label_140638;
            case 0x14063Cu: goto label_14063c;
            case 0x140640u: goto label_140640;
            case 0x140644u: goto label_140644;
            case 0x140648u: goto label_140648;
            case 0x14064Cu: goto label_14064c;
            case 0x140650u: goto label_140650;
            case 0x140654u: goto label_140654;
            case 0x140658u: goto label_140658;
            case 0x14065Cu: goto label_14065c;
            case 0x140660u: goto label_140660;
            case 0x140664u: goto label_140664;
            case 0x140668u: goto label_140668;
            case 0x14066Cu: goto label_14066c;
            case 0x140670u: goto label_140670;
            case 0x140674u: goto label_140674;
            case 0x140678u: goto label_140678;
            case 0x14067Cu: goto label_14067c;
            case 0x140680u: goto label_140680;
            case 0x140684u: goto label_140684;
            case 0x140688u: goto label_140688;
            case 0x14068Cu: goto label_14068c;
            case 0x140690u: goto label_140690;
            case 0x140694u: goto label_140694;
            case 0x140698u: goto label_140698;
            case 0x14069Cu: goto label_14069c;
            case 0x1406A0u: goto label_1406a0;
            case 0x1406A4u: goto label_1406a4;
            case 0x1406A8u: goto label_1406a8;
            case 0x1406ACu: goto label_1406ac;
            case 0x1406B0u: goto label_1406b0;
            case 0x1406B4u: goto label_1406b4;
            case 0x1406B8u: goto label_1406b8;
            case 0x1406BCu: goto label_1406bc;
            case 0x1406C0u: goto label_1406c0;
            case 0x1406C4u: goto label_1406c4;
            case 0x1406C8u: goto label_1406c8;
            case 0x1406CCu: goto label_1406cc;
            case 0x1406D0u: goto label_1406d0;
            case 0x1406D4u: goto label_1406d4;
            case 0x1406D8u: goto label_1406d8;
            case 0x1406DCu: goto label_1406dc;
            case 0x1406E0u: goto label_1406e0;
            case 0x1406E4u: goto label_1406e4;
            case 0x1406E8u: goto label_1406e8;
            case 0x1406ECu: goto label_1406ec;
            case 0x1406F0u: goto label_1406f0;
            case 0x1406F4u: goto label_1406f4;
            case 0x1406F8u: goto label_1406f8;
            case 0x1406FCu: goto label_1406fc;
            case 0x140700u: goto label_140700;
            case 0x140704u: goto label_140704;
            case 0x140708u: goto label_140708;
            case 0x14070Cu: goto label_14070c;
            case 0x140710u: goto label_140710;
            case 0x140714u: goto label_140714;
            case 0x140718u: goto label_140718;
            case 0x14071Cu: goto label_14071c;
            case 0x140720u: goto label_140720;
            case 0x140724u: goto label_140724;
            case 0x140728u: goto label_140728;
            case 0x14072Cu: goto label_14072c;
            case 0x140730u: goto label_140730;
            case 0x140734u: goto label_140734;
            case 0x140738u: goto label_140738;
            case 0x14073Cu: goto label_14073c;
            case 0x140740u: goto label_140740;
            case 0x140744u: goto label_140744;
            case 0x140748u: goto label_140748;
            case 0x14074Cu: goto label_14074c;
            case 0x140750u: goto label_140750;
            case 0x140754u: goto label_140754;
            case 0x140758u: goto label_140758;
            case 0x14075Cu: goto label_14075c;
            case 0x140760u: goto label_140760;
            case 0x140764u: goto label_140764;
            case 0x140768u: goto label_140768;
            case 0x14076Cu: goto label_14076c;
            case 0x140770u: goto label_140770;
            case 0x140774u: goto label_140774;
            case 0x140778u: goto label_140778;
            case 0x14077Cu: goto label_14077c;
            case 0x140780u: goto label_140780;
            case 0x140784u: goto label_140784;
            case 0x140788u: goto label_140788;
            case 0x14078Cu: goto label_14078c;
            case 0x140790u: goto label_140790;
            case 0x140794u: goto label_140794;
            case 0x140798u: goto label_140798;
            case 0x14079Cu: goto label_14079c;
            case 0x1407A0u: goto label_1407a0;
            case 0x1407A4u: goto label_1407a4;
            case 0x1407A8u: goto label_1407a8;
            case 0x1407ACu: goto label_1407ac;
            case 0x1407B0u: goto label_1407b0;
            case 0x1407B4u: goto label_1407b4;
            case 0x1407B8u: goto label_1407b8;
            case 0x1407BCu: goto label_1407bc;
            case 0x1407C0u: goto label_1407c0;
            case 0x1407C4u: goto label_1407c4;
            case 0x1407C8u: goto label_1407c8;
            case 0x1407CCu: goto label_1407cc;
            case 0x1407D0u: goto label_1407d0;
            case 0x1407D4u: goto label_1407d4;
            case 0x1407D8u: goto label_1407d8;
            case 0x1407DCu: goto label_1407dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1402FCu;
label_1402fc:
    // 0x1402fc: 0x0
    ctx->pc = 0x1402fcu;
    // NOP
label_140300:
    // 0x140300: 0x27bdffb0
    ctx->pc = 0x140300u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_140304:
    // 0x140304: 0xffb20030
    ctx->pc = 0x140304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_140308:
    // 0x140308: 0xa0902d
    ctx->pc = 0x140308u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_14030c:
    // 0x14030c: 0x2e420004
    ctx->pc = 0x14030cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), 4));
label_140310:
    // 0x140310: 0xffb00020
    ctx->pc = 0x140310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_140314:
    // 0x140314: 0xffb10028
    ctx->pc = 0x140314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_140318:
    // 0x140318: 0xe0882d
    ctx->pc = 0x140318u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_14031c:
    // 0x14031c: 0xffb30038
    ctx->pc = 0x14031cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_140320:
    // 0x140320: 0xc0982d
    ctx->pc = 0x140320u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_140324:
    // 0x140324: 0xffbf0040
    ctx->pc = 0x140324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_140328:
    // 0x140328: 0x1440000b
label_14032c:
    if (ctx->pc == 0x14032Cu) {
        ctx->pc = 0x14032Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140330u;
        goto label_140330;
    }
    ctx->pc = 0x140328u;
    {
        const bool branch_taken_0x140328 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14032Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x140328) {
            ctx->pc = 0x140358u;
            goto label_140358;
        }
    }
    ctx->pc = 0x140330u;
label_140330:
    // 0x140330: 0x8e020028
    ctx->pc = 0x140330u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_140334:
    // 0x140334: 0x50400005
label_140338:
    if (ctx->pc == 0x140338u) {
        ctx->pc = 0x140338u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x14033Cu;
        goto label_14033c;
    }
    ctx->pc = 0x140334u;
    {
        const bool branch_taken_0x140334 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x140334) {
            ctx->pc = 0x140338u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->pc = 0x14034Cu;
            goto label_14034c;
        }
    }
    ctx->pc = 0x14033Cu;
label_14033c:
    // 0x14033c: 0x8e04002c
    ctx->pc = 0x14033cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_140340:
    // 0x140340: 0x40f809
label_140344:
    if (ctx->pc == 0x140344u) {
        ctx->pc = 0x140344u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x140348u;
        goto label_140348;
    }
    ctx->pc = 0x140340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x140348u);
        ctx->pc = 0x140344u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1401F8u: goto label_1401f8;
            case 0x1401FCu: goto label_1401fc;
            case 0x140200u: goto label_140200;
            case 0x140204u: goto label_140204;
            case 0x140208u: goto label_140208;
            case 0x14020Cu: goto label_14020c;
            case 0x140210u: goto label_140210;
            case 0x140214u: goto label_140214;
            case 0x140218u: goto label_140218;
            case 0x14021Cu: goto label_14021c;
            case 0x140220u: goto label_140220;
            case 0x140224u: goto label_140224;
            case 0x140228u: goto label_140228;
            case 0x14022Cu: goto label_14022c;
            case 0x140230u: goto label_140230;
            case 0x140234u: goto label_140234;
            case 0x140238u: goto label_140238;
            case 0x14023Cu: goto label_14023c;
            case 0x140240u: goto label_140240;
            case 0x140244u: goto label_140244;
            case 0x140248u: goto label_140248;
            case 0x14024Cu: goto label_14024c;
            case 0x140250u: goto label_140250;
            case 0x140254u: goto label_140254;
            case 0x140258u: goto label_140258;
            case 0x14025Cu: goto label_14025c;
            case 0x140260u: goto label_140260;
            case 0x140264u: goto label_140264;
            case 0x140268u: goto label_140268;
            case 0x14026Cu: goto label_14026c;
            case 0x140270u: goto label_140270;
            case 0x140274u: goto label_140274;
            case 0x140278u: goto label_140278;
            case 0x14027Cu: goto label_14027c;
            case 0x140280u: goto label_140280;
            case 0x140284u: goto label_140284;
            case 0x140288u: goto label_140288;
            case 0x14028Cu: goto label_14028c;
            case 0x140290u: goto label_140290;
            case 0x140294u: goto label_140294;
            case 0x140298u: goto label_140298;
            case 0x14029Cu: goto label_14029c;
            case 0x1402A0u: goto label_1402a0;
            case 0x1402A4u: goto label_1402a4;
            case 0x1402A8u: goto label_1402a8;
            case 0x1402ACu: goto label_1402ac;
            case 0x1402B0u: goto label_1402b0;
            case 0x1402B4u: goto label_1402b4;
            case 0x1402B8u: goto label_1402b8;
            case 0x1402BCu: goto label_1402bc;
            case 0x1402C0u: goto label_1402c0;
            case 0x1402C4u: goto label_1402c4;
            case 0x1402C8u: goto label_1402c8;
            case 0x1402CCu: goto label_1402cc;
            case 0x1402D0u: goto label_1402d0;
            case 0x1402D4u: goto label_1402d4;
            case 0x1402D8u: goto label_1402d8;
            case 0x1402DCu: goto label_1402dc;
            case 0x1402E0u: goto label_1402e0;
            case 0x1402E4u: goto label_1402e4;
            case 0x1402E8u: goto label_1402e8;
            case 0x1402ECu: goto label_1402ec;
            case 0x1402F0u: goto label_1402f0;
            case 0x1402F4u: goto label_1402f4;
            case 0x1402F8u: goto label_1402f8;
            case 0x1402FCu: goto label_1402fc;
            case 0x140300u: goto label_140300;
            case 0x140304u: goto label_140304;
            case 0x140308u: goto label_140308;
            case 0x14030Cu: goto label_14030c;
            case 0x140310u: goto label_140310;
            case 0x140314u: goto label_140314;
            case 0x140318u: goto label_140318;
            case 0x14031Cu: goto label_14031c;
            case 0x140320u: goto label_140320;
            case 0x140324u: goto label_140324;
            case 0x140328u: goto label_140328;
            case 0x14032Cu: goto label_14032c;
            case 0x140330u: goto label_140330;
            case 0x140334u: goto label_140334;
            case 0x140338u: goto label_140338;
            case 0x14033Cu: goto label_14033c;
            case 0x140340u: goto label_140340;
            case 0x140344u: goto label_140344;
            case 0x140348u: goto label_140348;
            case 0x14034Cu: goto label_14034c;
            case 0x140350u: goto label_140350;
            case 0x140354u: goto label_140354;
            case 0x140358u: goto label_140358;
            case 0x14035Cu: goto label_14035c;
            case 0x140360u: goto label_140360;
            case 0x140364u: goto label_140364;
            case 0x140368u: goto label_140368;
            case 0x14036Cu: goto label_14036c;
            case 0x140370u: goto label_140370;
            case 0x140374u: goto label_140374;
            case 0x140378u: goto label_140378;
            case 0x14037Cu: goto label_14037c;
            case 0x140380u: goto label_140380;
            case 0x140384u: goto label_140384;
            case 0x140388u: goto label_140388;
            case 0x14038Cu: goto label_14038c;
            case 0x140390u: goto label_140390;
            case 0x140394u: goto label_140394;
            case 0x140398u: goto label_140398;
            case 0x14039Cu: goto label_14039c;
            case 0x1403A0u: goto label_1403a0;
            case 0x1403A4u: goto label_1403a4;
            case 0x1403A8u: goto label_1403a8;
            case 0x1403ACu: goto label_1403ac;
            case 0x1403B0u: goto label_1403b0;
            case 0x1403B4u: goto label_1403b4;
            case 0x1403B8u: goto label_1403b8;
            case 0x1403BCu: goto label_1403bc;
            case 0x1403C0u: goto label_1403c0;
            case 0x1403C4u: goto label_1403c4;
            case 0x1403C8u: goto label_1403c8;
            case 0x1403CCu: goto label_1403cc;
            case 0x1403D0u: goto label_1403d0;
            case 0x1403D4u: goto label_1403d4;
            case 0x1403D8u: goto label_1403d8;
            case 0x1403DCu: goto label_1403dc;
            case 0x1403E0u: goto label_1403e0;
            case 0x1403E4u: goto label_1403e4;
            case 0x1403E8u: goto label_1403e8;
            case 0x1403ECu: goto label_1403ec;
            case 0x1403F0u: goto label_1403f0;
            case 0x1403F4u: goto label_1403f4;
            case 0x1403F8u: goto label_1403f8;
            case 0x1403FCu: goto label_1403fc;
            case 0x140400u: goto label_140400;
            case 0x140404u: goto label_140404;
            case 0x140408u: goto label_140408;
            case 0x14040Cu: goto label_14040c;
            case 0x140410u: goto label_140410;
            case 0x140414u: goto label_140414;
            case 0x140418u: goto label_140418;
            case 0x14041Cu: goto label_14041c;
            case 0x140420u: goto label_140420;
            case 0x140424u: goto label_140424;
            case 0x140428u: goto label_140428;
            case 0x14042Cu: goto label_14042c;
            case 0x140430u: goto label_140430;
            case 0x140434u: goto label_140434;
            case 0x140438u: goto label_140438;
            case 0x14043Cu: goto label_14043c;
            case 0x140440u: goto label_140440;
            case 0x140444u: goto label_140444;
            case 0x140448u: goto label_140448;
            case 0x14044Cu: goto label_14044c;
            case 0x140450u: goto label_140450;
            case 0x140454u: goto label_140454;
            case 0x140458u: goto label_140458;
            case 0x14045Cu: goto label_14045c;
            case 0x140460u: goto label_140460;
            case 0x140464u: goto label_140464;
            case 0x140468u: goto label_140468;
            case 0x14046Cu: goto label_14046c;
            case 0x140470u: goto label_140470;
            case 0x140474u: goto label_140474;
            case 0x140478u: goto label_140478;
            case 0x14047Cu: goto label_14047c;
            case 0x140480u: goto label_140480;
            case 0x140484u: goto label_140484;
            case 0x140488u: goto label_140488;
            case 0x14048Cu: goto label_14048c;
            case 0x140490u: goto label_140490;
            case 0x140494u: goto label_140494;
            case 0x140498u: goto label_140498;
            case 0x14049Cu: goto label_14049c;
            case 0x1404A0u: goto label_1404a0;
            case 0x1404A4u: goto label_1404a4;
            case 0x1404A8u: goto label_1404a8;
            case 0x1404ACu: goto label_1404ac;
            case 0x1404B0u: goto label_1404b0;
            case 0x1404B4u: goto label_1404b4;
            case 0x1404B8u: goto label_1404b8;
            case 0x1404BCu: goto label_1404bc;
            case 0x1404C0u: goto label_1404c0;
            case 0x1404C4u: goto label_1404c4;
            case 0x1404C8u: goto label_1404c8;
            case 0x1404CCu: goto label_1404cc;
            case 0x1404D0u: goto label_1404d0;
            case 0x1404D4u: goto label_1404d4;
            case 0x1404D8u: goto label_1404d8;
            case 0x1404DCu: goto label_1404dc;
            case 0x1404E0u: goto label_1404e0;
            case 0x1404E4u: goto label_1404e4;
            case 0x1404E8u: goto label_1404e8;
            case 0x1404ECu: goto label_1404ec;
            case 0x1404F0u: goto label_1404f0;
            case 0x1404F4u: goto label_1404f4;
            case 0x1404F8u: goto label_1404f8;
            case 0x1404FCu: goto label_1404fc;
            case 0x140500u: goto label_140500;
            case 0x140504u: goto label_140504;
            case 0x140508u: goto label_140508;
            case 0x14050Cu: goto label_14050c;
            case 0x140510u: goto label_140510;
            case 0x140514u: goto label_140514;
            case 0x140518u: goto label_140518;
            case 0x14051Cu: goto label_14051c;
            case 0x140520u: goto label_140520;
            case 0x140524u: goto label_140524;
            case 0x140528u: goto label_140528;
            case 0x14052Cu: goto label_14052c;
            case 0x140530u: goto label_140530;
            case 0x140534u: goto label_140534;
            case 0x140538u: goto label_140538;
            case 0x14053Cu: goto label_14053c;
            case 0x140540u: goto label_140540;
            case 0x140544u: goto label_140544;
            case 0x140548u: goto label_140548;
            case 0x14054Cu: goto label_14054c;
            case 0x140550u: goto label_140550;
            case 0x140554u: goto label_140554;
            case 0x140558u: goto label_140558;
            case 0x14055Cu: goto label_14055c;
            case 0x140560u: goto label_140560;
            case 0x140564u: goto label_140564;
            case 0x140568u: goto label_140568;
            case 0x14056Cu: goto label_14056c;
            case 0x140570u: goto label_140570;
            case 0x140574u: goto label_140574;
            case 0x140578u: goto label_140578;
            case 0x14057Cu: goto label_14057c;
            case 0x140580u: goto label_140580;
            case 0x140584u: goto label_140584;
            case 0x140588u: goto label_140588;
            case 0x14058Cu: goto label_14058c;
            case 0x140590u: goto label_140590;
            case 0x140594u: goto label_140594;
            case 0x140598u: goto label_140598;
            case 0x14059Cu: goto label_14059c;
            case 0x1405A0u: goto label_1405a0;
            case 0x1405A4u: goto label_1405a4;
            case 0x1405A8u: goto label_1405a8;
            case 0x1405ACu: goto label_1405ac;
            case 0x1405B0u: goto label_1405b0;
            case 0x1405B4u: goto label_1405b4;
            case 0x1405B8u: goto label_1405b8;
            case 0x1405BCu: goto label_1405bc;
            case 0x1405C0u: goto label_1405c0;
            case 0x1405C4u: goto label_1405c4;
            case 0x1405C8u: goto label_1405c8;
            case 0x1405CCu: goto label_1405cc;
            case 0x1405D0u: goto label_1405d0;
            case 0x1405D4u: goto label_1405d4;
            case 0x1405D8u: goto label_1405d8;
            case 0x1405DCu: goto label_1405dc;
            case 0x1405E0u: goto label_1405e0;
            case 0x1405E4u: goto label_1405e4;
            case 0x1405E8u: goto label_1405e8;
            case 0x1405ECu: goto label_1405ec;
            case 0x1405F0u: goto label_1405f0;
            case 0x1405F4u: goto label_1405f4;
            case 0x1405F8u: goto label_1405f8;
            case 0x1405FCu: goto label_1405fc;
            case 0x140600u: goto label_140600;
            case 0x140604u: goto label_140604;
            case 0x140608u: goto label_140608;
            case 0x14060Cu: goto label_14060c;
            case 0x140610u: goto label_140610;
            case 0x140614u: goto label_140614;
            case 0x140618u: goto label_140618;
            case 0x14061Cu: goto label_14061c;
            case 0x140620u: goto label_140620;
            case 0x140624u: goto label_140624;
            case 0x140628u: goto label_140628;
            case 0x14062Cu: goto label_14062c;
            case 0x140630u: goto label_140630;
            case 0x140634u: goto label_140634;
            case 0x140638u: goto label_140638;
            case 0x14063Cu: goto label_14063c;
            case 0x140640u: goto label_140640;
            case 0x140644u: goto label_140644;
            case 0x140648u: goto label_140648;
            case 0x14064Cu: goto label_14064c;
            case 0x140650u: goto label_140650;
            case 0x140654u: goto label_140654;
            case 0x140658u: goto label_140658;
            case 0x14065Cu: goto label_14065c;
            case 0x140660u: goto label_140660;
            case 0x140664u: goto label_140664;
            case 0x140668u: goto label_140668;
            case 0x14066Cu: goto label_14066c;
            case 0x140670u: goto label_140670;
            case 0x140674u: goto label_140674;
            case 0x140678u: goto label_140678;
            case 0x14067Cu: goto label_14067c;
            case 0x140680u: goto label_140680;
            case 0x140684u: goto label_140684;
            case 0x140688u: goto label_140688;
            case 0x14068Cu: goto label_14068c;
            case 0x140690u: goto label_140690;
            case 0x140694u: goto label_140694;
            case 0x140698u: goto label_140698;
            case 0x14069Cu: goto label_14069c;
            case 0x1406A0u: goto label_1406a0;
            case 0x1406A4u: goto label_1406a4;
            case 0x1406A8u: goto label_1406a8;
            case 0x1406ACu: goto label_1406ac;
            case 0x1406B0u: goto label_1406b0;
            case 0x1406B4u: goto label_1406b4;
            case 0x1406B8u: goto label_1406b8;
            case 0x1406BCu: goto label_1406bc;
            case 0x1406C0u: goto label_1406c0;
            case 0x1406C4u: goto label_1406c4;
            case 0x1406C8u: goto label_1406c8;
            case 0x1406CCu: goto label_1406cc;
            case 0x1406D0u: goto label_1406d0;
            case 0x1406D4u: goto label_1406d4;
            case 0x1406D8u: goto label_1406d8;
            case 0x1406DCu: goto label_1406dc;
            case 0x1406E0u: goto label_1406e0;
            case 0x1406E4u: goto label_1406e4;
            case 0x1406E8u: goto label_1406e8;
            case 0x1406ECu: goto label_1406ec;
            case 0x1406F0u: goto label_1406f0;
            case 0x1406F4u: goto label_1406f4;
            case 0x1406F8u: goto label_1406f8;
            case 0x1406FCu: goto label_1406fc;
            case 0x140700u: goto label_140700;
            case 0x140704u: goto label_140704;
            case 0x140708u: goto label_140708;
            case 0x14070Cu: goto label_14070c;
            case 0x140710u: goto label_140710;
            case 0x140714u: goto label_140714;
            case 0x140718u: goto label_140718;
            case 0x14071Cu: goto label_14071c;
            case 0x140720u: goto label_140720;
            case 0x140724u: goto label_140724;
            case 0x140728u: goto label_140728;
            case 0x14072Cu: goto label_14072c;
            case 0x140730u: goto label_140730;
            case 0x140734u: goto label_140734;
            case 0x140738u: goto label_140738;
            case 0x14073Cu: goto label_14073c;
            case 0x140740u: goto label_140740;
            case 0x140744u: goto label_140744;
            case 0x140748u: goto label_140748;
            case 0x14074Cu: goto label_14074c;
            case 0x140750u: goto label_140750;
            case 0x140754u: goto label_140754;
            case 0x140758u: goto label_140758;
            case 0x14075Cu: goto label_14075c;
            case 0x140760u: goto label_140760;
            case 0x140764u: goto label_140764;
            case 0x140768u: goto label_140768;
            case 0x14076Cu: goto label_14076c;
            case 0x140770u: goto label_140770;
            case 0x140774u: goto label_140774;
            case 0x140778u: goto label_140778;
            case 0x14077Cu: goto label_14077c;
            case 0x140780u: goto label_140780;
            case 0x140784u: goto label_140784;
            case 0x140788u: goto label_140788;
            case 0x14078Cu: goto label_14078c;
            case 0x140790u: goto label_140790;
            case 0x140794u: goto label_140794;
            case 0x140798u: goto label_140798;
            case 0x14079Cu: goto label_14079c;
            case 0x1407A0u: goto label_1407a0;
            case 0x1407A4u: goto label_1407a4;
            case 0x1407A8u: goto label_1407a8;
            case 0x1407ACu: goto label_1407ac;
            case 0x1407B0u: goto label_1407b0;
            case 0x1407B4u: goto label_1407b4;
            case 0x1407B8u: goto label_1407b8;
            case 0x1407BCu: goto label_1407bc;
            case 0x1407C0u: goto label_1407c0;
            case 0x1407C4u: goto label_1407c4;
            case 0x1407C8u: goto label_1407c8;
            case 0x1407CCu: goto label_1407cc;
            case 0x1407D0u: goto label_1407d0;
            case 0x1407D4u: goto label_1407d4;
            case 0x1407D8u: goto label_1407d8;
            case 0x1407DCu: goto label_1407dc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x140348u; }
            if (ctx->pc != 0x140348u) { return; }
        }
    }
    ctx->pc = 0x140348u;
label_140348:
    // 0x140348: 0xae200004
    ctx->pc = 0x140348u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_14034c:
    // 0x14034c: 0x10000032
label_140350:
    if (ctx->pc == 0x140350u) {
        ctx->pc = 0x140350u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x140354u;
        goto label_140354;
    }
    ctx->pc = 0x14034Cu;
    {
        const bool branch_taken_0x14034c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x140350u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x14034c) {
            ctx->pc = 0x140418u;
            goto label_140418;
        }
    }
    ctx->pc = 0x140354u;
label_140354:
    // 0x140354: 0x0
    ctx->pc = 0x140354u;
    // NOP
label_140358:
    // 0x140358: 0xc04fc96
label_14035c:
    if (ctx->pc == 0x14035Cu) {
        ctx->pc = 0x140360u;
        goto label_140360;
    }
    ctx->pc = 0x140358u;
    SET_GPR_U32(ctx, 31, 0x140360u);
    ctx->pc = 0x13F258u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F258_0x13f258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140360u; }
    }
    if (ctx->pc != 0x140360u) { return; }
    ctx->pc = 0x140360u;
label_140360:
    // 0x140360: 0x121080
    ctx->pc = 0x140360u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
label_140364:
    // 0x140364: 0x501021
    ctx->pc = 0x140364u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_140368:
    // 0x140368: 0x24450018
    ctx->pc = 0x140368u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 24));
label_14036c:
    // 0x14036c: 0x8ca40000
    ctx->pc = 0x14036cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_140370:
    // 0x140370: 0x10800025
label_140374:
    if (ctx->pc == 0x140374u) {
        ctx->pc = 0x140374u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x140378u;
        goto label_140378;
    }
    ctx->pc = 0x140370u;
    {
        const bool branch_taken_0x140370 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x140374u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 4), 8));
        if (branch_taken_0x140370) {
            ctx->pc = 0x140408u;
            goto label_140408;
        }
    }
    ctx->pc = 0x140378u;
label_140378:
    // 0x140378: 0x6a420007
    ctx->pc = 0x140378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
label_14037c:
    // 0x14037c: 0x6e420000
    ctx->pc = 0x14037cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
label_140380:
    // 0x140380: 0xb3a20007
    ctx->pc = 0x140380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_140384:
    // 0x140384: 0xb7a20000
    ctx->pc = 0x140384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_140388:
    // 0x140388: 0x8fa20004
    ctx->pc = 0x140388u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_14038c:
    // 0x14038c: 0x262102a
    ctx->pc = 0x14038cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 2)));
label_140390:
    // 0x140390: 0x5440000b
label_140394:
    if (ctx->pc == 0x140394u) {
        ctx->pc = 0x140394u;
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
        ctx->pc = 0x140398u;
        goto label_140398;
    }
    ctx->pc = 0x140390u;
    {
        const bool branch_taken_0x140390 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x140390) {
            ctx->pc = 0x140394u;
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
            ctx->pc = 0x1403C0u;
            goto label_1403c0;
        }
    }
    ctx->pc = 0x140398u;
label_140398:
    // 0x140398: 0x8c830000
    ctx->pc = 0x140398u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14039c:
    // 0x14039c: 0x6ba80007
    ctx->pc = 0x14039cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
label_1403a0:
    // 0x1403a0: 0x6fa80000
    ctx->pc = 0x1403a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
label_1403a4:
    // 0x1403a4: 0xb2280007
    ctx->pc = 0x1403a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1403a8:
    // 0x1403a8: 0xb6280000
    ctx->pc = 0x1403a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1403ac:
    // 0x1403ac: 0xaca30000
    ctx->pc = 0x1403acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1403b0:
    // 0x1403b0: 0x8e020014
    ctx->pc = 0x1403b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1403b4:
    // 0x1403b4: 0xac820000
    ctx->pc = 0x1403b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1403b8:
    // 0x1403b8: 0x10000015
label_1403bc:
    if (ctx->pc == 0x1403BCu) {
        ctx->pc = 0x1403BCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
        ctx->pc = 0x1403C0u;
        goto label_1403c0;
    }
    ctx->pc = 0x1403B8u;
    {
        const bool branch_taken_0x1403b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1403BCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
        if (branch_taken_0x1403b8) {
            ctx->pc = 0x140410u;
            goto label_140410;
        }
    }
    ctx->pc = 0x1403C0u;
label_1403c0:
    // 0x1403c0: 0x24020001
    ctx->pc = 0x1403c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1403c4:
    // 0x1403c4: 0x54620011
label_1403c8:
    if (ctx->pc == 0x1403C8u) {
        ctx->pc = 0x1403C8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x1403CCu;
        goto label_1403cc;
    }
    ctx->pc = 0x1403C4u;
    {
        const bool branch_taken_0x1403c4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1403c4) {
            ctx->pc = 0x1403C8u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->pc = 0x14040Cu;
            goto label_14040c;
        }
    }
    ctx->pc = 0x1403CCu;
label_1403cc:
    // 0x1403cc: 0x27b00010
    ctx->pc = 0x1403ccu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 16));
label_1403d0:
    // 0x1403d0: 0x260282d
    ctx->pc = 0x1403d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1403d4:
    // 0x1403d4: 0x3a0202d
    ctx->pc = 0x1403d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1403d8:
    // 0x1403d8: 0x3a0302d
    ctx->pc = 0x1403d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1403dc:
    // 0x1403dc: 0xc0501f8
label_1403e0:
    if (ctx->pc == 0x1403E0u) {
        ctx->pc = 0x1403E0u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1403E4u;
        goto label_1403e4;
    }
    ctx->pc = 0x1403DCu;
    SET_GPR_U32(ctx, 31, 0x1403E4u);
    ctx->pc = 0x1403E0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1407E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001407E0_0x1407e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1403E4u; }
    }
    if (ctx->pc != 0x1403E4u) { return; }
    ctx->pc = 0x1403E4u;
label_1403e4:
    // 0x1403e4: 0x6ba80007
    ctx->pc = 0x1403e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
label_1403e8:
    // 0x1403e8: 0x6fa80000
    ctx->pc = 0x1403e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
label_1403ec:
    // 0x1403ec: 0xb2280007
    ctx->pc = 0x1403ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1403f0:
    // 0x1403f0: 0xb6280000
    ctx->pc = 0x1403f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1403f4:
    // 0x1403f4: 0x6a050007
    ctx->pc = 0x1403f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
label_1403f8:
    // 0x1403f8: 0x6e050000
    ctx->pc = 0x1403f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
label_1403fc:
    // 0x1403fc: 0xb2450007
    ctx->pc = 0x1403fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_140400:
    // 0x140400: 0x10000003
label_140404:
    if (ctx->pc == 0x140404u) {
        ctx->pc = 0x140404u;
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->pc = 0x140408u;
        goto label_140408;
    }
    ctx->pc = 0x140400u;
    {
        const bool branch_taken_0x140400 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x140404u;
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
        if (branch_taken_0x140400) {
            ctx->pc = 0x140410u;
            goto label_140410;
        }
    }
    ctx->pc = 0x140408u;
label_140408:
    // 0x140408: 0xae200004
    ctx->pc = 0x140408u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_14040c:
    // 0x14040c: 0xae200000
    ctx->pc = 0x14040cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_140410:
    // 0x140410: 0xc04fc9c
label_140414:
    if (ctx->pc == 0x140414u) {
        ctx->pc = 0x140418u;
        goto label_140418;
    }
    ctx->pc = 0x140410u;
    SET_GPR_U32(ctx, 31, 0x140418u);
    ctx->pc = 0x13F270u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F270_0x13f270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140418u; }
    }
    if (ctx->pc != 0x140418u) { return; }
    ctx->pc = 0x140418u;
label_140418:
    // 0x140418: 0xdfb00020
    ctx->pc = 0x140418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_14041c:
    // 0x14041c: 0xdfb10028
    ctx->pc = 0x14041cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_140420:
    // 0x140420: 0xdfb20030
    ctx->pc = 0x140420u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_140424:
    // 0x140424: 0xdfb30038
    ctx->pc = 0x140424u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_140428:
    // 0x140428: 0xdfbf0040
    ctx->pc = 0x140428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_14042c:
    // 0x14042c: 0x3e00008
label_140430:
    if (ctx->pc == 0x140430u) {
        ctx->pc = 0x140430u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x140434u;
        goto label_140434;
    }
    ctx->pc = 0x14042Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140430u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1401F8u: goto label_1401f8;
            case 0x1401FCu: goto label_1401fc;
            case 0x140200u: goto label_140200;
            case 0x140204u: goto label_140204;
            case 0x140208u: goto label_140208;
            case 0x14020Cu: goto label_14020c;
            case 0x140210u: goto label_140210;
            case 0x140214u: goto label_140214;
            case 0x140218u: goto label_140218;
            case 0x14021Cu: goto label_14021c;
            case 0x140220u: goto label_140220;
            case 0x140224u: goto label_140224;
            case 0x140228u: goto label_140228;
            case 0x14022Cu: goto label_14022c;
            case 0x140230u: goto label_140230;
            case 0x140234u: goto label_140234;
            case 0x140238u: goto label_140238;
            case 0x14023Cu: goto label_14023c;
            case 0x140240u: goto label_140240;
            case 0x140244u: goto label_140244;
            case 0x140248u: goto label_140248;
            case 0x14024Cu: goto label_14024c;
            case 0x140250u: goto label_140250;
            case 0x140254u: goto label_140254;
            case 0x140258u: goto label_140258;
            case 0x14025Cu: goto label_14025c;
            case 0x140260u: goto label_140260;
            case 0x140264u: goto label_140264;
            case 0x140268u: goto label_140268;
            case 0x14026Cu: goto label_14026c;
            case 0x140270u: goto label_140270;
            case 0x140274u: goto label_140274;
            case 0x140278u: goto label_140278;
            case 0x14027Cu: goto label_14027c;
            case 0x140280u: goto label_140280;
            case 0x140284u: goto label_140284;
            case 0x140288u: goto label_140288;
            case 0x14028Cu: goto label_14028c;
            case 0x140290u: goto label_140290;
            case 0x140294u: goto label_140294;
            case 0x140298u: goto label_140298;
            case 0x14029Cu: goto label_14029c;
            case 0x1402A0u: goto label_1402a0;
            case 0x1402A4u: goto label_1402a4;
            case 0x1402A8u: goto label_1402a8;
            case 0x1402ACu: goto label_1402ac;
            case 0x1402B0u: goto label_1402b0;
            case 0x1402B4u: goto label_1402b4;
            case 0x1402B8u: goto label_1402b8;
            case 0x1402BCu: goto label_1402bc;
            case 0x1402C0u: goto label_1402c0;
            case 0x1402C4u: goto label_1402c4;
            case 0x1402C8u: goto label_1402c8;
            case 0x1402CCu: goto label_1402cc;
            case 0x1402D0u: goto label_1402d0;
            case 0x1402D4u: goto label_1402d4;
            case 0x1402D8u: goto label_1402d8;
            case 0x1402DCu: goto label_1402dc;
            case 0x1402E0u: goto label_1402e0;
            case 0x1402E4u: goto label_1402e4;
            case 0x1402E8u: goto label_1402e8;
            case 0x1402ECu: goto label_1402ec;
            case 0x1402F0u: goto label_1402f0;
            case 0x1402F4u: goto label_1402f4;
            case 0x1402F8u: goto label_1402f8;
            case 0x1402FCu: goto label_1402fc;
            case 0x140300u: goto label_140300;
            case 0x140304u: goto label_140304;
            case 0x140308u: goto label_140308;
            case 0x14030Cu: goto label_14030c;
            case 0x140310u: goto label_140310;
            case 0x140314u: goto label_140314;
            case 0x140318u: goto label_140318;
            case 0x14031Cu: goto label_14031c;
            case 0x140320u: goto label_140320;
            case 0x140324u: goto label_140324;
            case 0x140328u: goto label_140328;
            case 0x14032Cu: goto label_14032c;
            case 0x140330u: goto label_140330;
            case 0x140334u: goto label_140334;
            case 0x140338u: goto label_140338;
            case 0x14033Cu: goto label_14033c;
            case 0x140340u: goto label_140340;
            case 0x140344u: goto label_140344;
            case 0x140348u: goto label_140348;
            case 0x14034Cu: goto label_14034c;
            case 0x140350u: goto label_140350;
            case 0x140354u: goto label_140354;
            case 0x140358u: goto label_140358;
            case 0x14035Cu: goto label_14035c;
            case 0x140360u: goto label_140360;
            case 0x140364u: goto label_140364;
            case 0x140368u: goto label_140368;
            case 0x14036Cu: goto label_14036c;
            case 0x140370u: goto label_140370;
            case 0x140374u: goto label_140374;
            case 0x140378u: goto label_140378;
            case 0x14037Cu: goto label_14037c;
            case 0x140380u: goto label_140380;
            case 0x140384u: goto label_140384;
            case 0x140388u: goto label_140388;
            case 0x14038Cu: goto label_14038c;
            case 0x140390u: goto label_140390;
            case 0x140394u: goto label_140394;
            case 0x140398u: goto label_140398;
            case 0x14039Cu: goto label_14039c;
            case 0x1403A0u: goto label_1403a0;
            case 0x1403A4u: goto label_1403a4;
            case 0x1403A8u: goto label_1403a8;
            case 0x1403ACu: goto label_1403ac;
            case 0x1403B0u: goto label_1403b0;
            case 0x1403B4u: goto label_1403b4;
            case 0x1403B8u: goto label_1403b8;
            case 0x1403BCu: goto label_1403bc;
            case 0x1403C0u: goto label_1403c0;
            case 0x1403C4u: goto label_1403c4;
            case 0x1403C8u: goto label_1403c8;
            case 0x1403CCu: goto label_1403cc;
            case 0x1403D0u: goto label_1403d0;
            case 0x1403D4u: goto label_1403d4;
            case 0x1403D8u: goto label_1403d8;
            case 0x1403DCu: goto label_1403dc;
            case 0x1403E0u: goto label_1403e0;
            case 0x1403E4u: goto label_1403e4;
            case 0x1403E8u: goto label_1403e8;
            case 0x1403ECu: goto label_1403ec;
            case 0x1403F0u: goto label_1403f0;
            case 0x1403F4u: goto label_1403f4;
            case 0x1403F8u: goto label_1403f8;
            case 0x1403FCu: goto label_1403fc;
            case 0x140400u: goto label_140400;
            case 0x140404u: goto label_140404;
            case 0x140408u: goto label_140408;
            case 0x14040Cu: goto label_14040c;
            case 0x140410u: goto label_140410;
            case 0x140414u: goto label_140414;
            case 0x140418u: goto label_140418;
            case 0x14041Cu: goto label_14041c;
            case 0x140420u: goto label_140420;
            case 0x140424u: goto label_140424;
            case 0x140428u: goto label_140428;
            case 0x14042Cu: goto label_14042c;
            case 0x140430u: goto label_140430;
            case 0x140434u: goto label_140434;
            case 0x140438u: goto label_140438;
            case 0x14043Cu: goto label_14043c;
            case 0x140440u: goto label_140440;
            case 0x140444u: goto label_140444;
            case 0x140448u: goto label_140448;
            case 0x14044Cu: goto label_14044c;
            case 0x140450u: goto label_140450;
            case 0x140454u: goto label_140454;
            case 0x140458u: goto label_140458;
            case 0x14045Cu: goto label_14045c;
            case 0x140460u: goto label_140460;
            case 0x140464u: goto label_140464;
            case 0x140468u: goto label_140468;
            case 0x14046Cu: goto label_14046c;
            case 0x140470u: goto label_140470;
            case 0x140474u: goto label_140474;
            case 0x140478u: goto label_140478;
            case 0x14047Cu: goto label_14047c;
            case 0x140480u: goto label_140480;
            case 0x140484u: goto label_140484;
            case 0x140488u: goto label_140488;
            case 0x14048Cu: goto label_14048c;
            case 0x140490u: goto label_140490;
            case 0x140494u: goto label_140494;
            case 0x140498u: goto label_140498;
            case 0x14049Cu: goto label_14049c;
            case 0x1404A0u: goto label_1404a0;
            case 0x1404A4u: goto label_1404a4;
            case 0x1404A8u: goto label_1404a8;
            case 0x1404ACu: goto label_1404ac;
            case 0x1404B0u: goto label_1404b0;
            case 0x1404B4u: goto label_1404b4;
            case 0x1404B8u: goto label_1404b8;
            case 0x1404BCu: goto label_1404bc;
            case 0x1404C0u: goto label_1404c0;
            case 0x1404C4u: goto label_1404c4;
            case 0x1404C8u: goto label_1404c8;
            case 0x1404CCu: goto label_1404cc;
            case 0x1404D0u: goto label_1404d0;
            case 0x1404D4u: goto label_1404d4;
            case 0x1404D8u: goto label_1404d8;
            case 0x1404DCu: goto label_1404dc;
            case 0x1404E0u: goto label_1404e0;
            case 0x1404E4u: goto label_1404e4;
            case 0x1404E8u: goto label_1404e8;
            case 0x1404ECu: goto label_1404ec;
            case 0x1404F0u: goto label_1404f0;
            case 0x1404F4u: goto label_1404f4;
            case 0x1404F8u: goto label_1404f8;
            case 0x1404FCu: goto label_1404fc;
            case 0x140500u: goto label_140500;
            case 0x140504u: goto label_140504;
            case 0x140508u: goto label_140508;
            case 0x14050Cu: goto label_14050c;
            case 0x140510u: goto label_140510;
            case 0x140514u: goto label_140514;
            case 0x140518u: goto label_140518;
            case 0x14051Cu: goto label_14051c;
            case 0x140520u: goto label_140520;
            case 0x140524u: goto label_140524;
            case 0x140528u: goto label_140528;
            case 0x14052Cu: goto label_14052c;
            case 0x140530u: goto label_140530;
            case 0x140534u: goto label_140534;
            case 0x140538u: goto label_140538;
            case 0x14053Cu: goto label_14053c;
            case 0x140540u: goto label_140540;
            case 0x140544u: goto label_140544;
            case 0x140548u: goto label_140548;
            case 0x14054Cu: goto label_14054c;
            case 0x140550u: goto label_140550;
            case 0x140554u: goto label_140554;
            case 0x140558u: goto label_140558;
            case 0x14055Cu: goto label_14055c;
            case 0x140560u: goto label_140560;
            case 0x140564u: goto label_140564;
            case 0x140568u: goto label_140568;
            case 0x14056Cu: goto label_14056c;
            case 0x140570u: goto label_140570;
            case 0x140574u: goto label_140574;
            case 0x140578u: goto label_140578;
            case 0x14057Cu: goto label_14057c;
            case 0x140580u: goto label_140580;
            case 0x140584u: goto label_140584;
            case 0x140588u: goto label_140588;
            case 0x14058Cu: goto label_14058c;
            case 0x140590u: goto label_140590;
            case 0x140594u: goto label_140594;
            case 0x140598u: goto label_140598;
            case 0x14059Cu: goto label_14059c;
            case 0x1405A0u: goto label_1405a0;
            case 0x1405A4u: goto label_1405a4;
            case 0x1405A8u: goto label_1405a8;
            case 0x1405ACu: goto label_1405ac;
            case 0x1405B0u: goto label_1405b0;
            case 0x1405B4u: goto label_1405b4;
            case 0x1405B8u: goto label_1405b8;
            case 0x1405BCu: goto label_1405bc;
            case 0x1405C0u: goto label_1405c0;
            case 0x1405C4u: goto label_1405c4;
            case 0x1405C8u: goto label_1405c8;
            case 0x1405CCu: goto label_1405cc;
            case 0x1405D0u: goto label_1405d0;
            case 0x1405D4u: goto label_1405d4;
            case 0x1405D8u: goto label_1405d8;
            case 0x1405DCu: goto label_1405dc;
            case 0x1405E0u: goto label_1405e0;
            case 0x1405E4u: goto label_1405e4;
            case 0x1405E8u: goto label_1405e8;
            case 0x1405ECu: goto label_1405ec;
            case 0x1405F0u: goto label_1405f0;
            case 0x1405F4u: goto label_1405f4;
            case 0x1405F8u: goto label_1405f8;
            case 0x1405FCu: goto label_1405fc;
            case 0x140600u: goto label_140600;
            case 0x140604u: goto label_140604;
            case 0x140608u: goto label_140608;
            case 0x14060Cu: goto label_14060c;
            case 0x140610u: goto label_140610;
            case 0x140614u: goto label_140614;
            case 0x140618u: goto label_140618;
            case 0x14061Cu: goto label_14061c;
            case 0x140620u: goto label_140620;
            case 0x140624u: goto label_140624;
            case 0x140628u: goto label_140628;
            case 0x14062Cu: goto label_14062c;
            case 0x140630u: goto label_140630;
            case 0x140634u: goto label_140634;
            case 0x140638u: goto label_140638;
            case 0x14063Cu: goto label_14063c;
            case 0x140640u: goto label_140640;
            case 0x140644u: goto label_140644;
            case 0x140648u: goto label_140648;
            case 0x14064Cu: goto label_14064c;
            case 0x140650u: goto label_140650;
            case 0x140654u: goto label_140654;
            case 0x140658u: goto label_140658;
            case 0x14065Cu: goto label_14065c;
            case 0x140660u: goto label_140660;
            case 0x140664u: goto label_140664;
            case 0x140668u: goto label_140668;
            case 0x14066Cu: goto label_14066c;
            case 0x140670u: goto label_140670;
            case 0x140674u: goto label_140674;
            case 0x140678u: goto label_140678;
            case 0x14067Cu: goto label_14067c;
            case 0x140680u: goto label_140680;
            case 0x140684u: goto label_140684;
            case 0x140688u: goto label_140688;
            case 0x14068Cu: goto label_14068c;
            case 0x140690u: goto label_140690;
            case 0x140694u: goto label_140694;
            case 0x140698u: goto label_140698;
            case 0x14069Cu: goto label_14069c;
            case 0x1406A0u: goto label_1406a0;
            case 0x1406A4u: goto label_1406a4;
            case 0x1406A8u: goto label_1406a8;
            case 0x1406ACu: goto label_1406ac;
            case 0x1406B0u: goto label_1406b0;
            case 0x1406B4u: goto label_1406b4;
            case 0x1406B8u: goto label_1406b8;
            case 0x1406BCu: goto label_1406bc;
            case 0x1406C0u: goto label_1406c0;
            case 0x1406C4u: goto label_1406c4;
            case 0x1406C8u: goto label_1406c8;
            case 0x1406CCu: goto label_1406cc;
            case 0x1406D0u: goto label_1406d0;
            case 0x1406D4u: goto label_1406d4;
            case 0x1406D8u: goto label_1406d8;
            case 0x1406DCu: goto label_1406dc;
            case 0x1406E0u: goto label_1406e0;
            case 0x1406E4u: goto label_1406e4;
            case 0x1406E8u: goto label_1406e8;
            case 0x1406ECu: goto label_1406ec;
            case 0x1406F0u: goto label_1406f0;
            case 0x1406F4u: goto label_1406f4;
            case 0x1406F8u: goto label_1406f8;
            case 0x1406FCu: goto label_1406fc;
            case 0x140700u: goto label_140700;
            case 0x140704u: goto label_140704;
            case 0x140708u: goto label_140708;
            case 0x14070Cu: goto label_14070c;
            case 0x140710u: goto label_140710;
            case 0x140714u: goto label_140714;
            case 0x140718u: goto label_140718;
            case 0x14071Cu: goto label_14071c;
            case 0x140720u: goto label_140720;
            case 0x140724u: goto label_140724;
            case 0x140728u: goto label_140728;
            case 0x14072Cu: goto label_14072c;
            case 0x140730u: goto label_140730;
            case 0x140734u: goto label_140734;
            case 0x140738u: goto label_140738;
            case 0x14073Cu: goto label_14073c;
            case 0x140740u: goto label_140740;
            case 0x140744u: goto label_140744;
            case 0x140748u: goto label_140748;
            case 0x14074Cu: goto label_14074c;
            case 0x140750u: goto label_140750;
            case 0x140754u: goto label_140754;
            case 0x140758u: goto label_140758;
            case 0x14075Cu: goto label_14075c;
            case 0x140760u: goto label_140760;
            case 0x140764u: goto label_140764;
            case 0x140768u: goto label_140768;
            case 0x14076Cu: goto label_14076c;
            case 0x140770u: goto label_140770;
            case 0x140774u: goto label_140774;
            case 0x140778u: goto label_140778;
            case 0x14077Cu: goto label_14077c;
            case 0x140780u: goto label_140780;
            case 0x140784u: goto label_140784;
            case 0x140788u: goto label_140788;
            case 0x14078Cu: goto label_14078c;
            case 0x140790u: goto label_140790;
            case 0x140794u: goto label_140794;
            case 0x140798u: goto label_140798;
            case 0x14079Cu: goto label_14079c;
            case 0x1407A0u: goto label_1407a0;
            case 0x1407A4u: goto label_1407a4;
            case 0x1407A8u: goto label_1407a8;
            case 0x1407ACu: goto label_1407ac;
            case 0x1407B0u: goto label_1407b0;
            case 0x1407B4u: goto label_1407b4;
            case 0x1407B8u: goto label_1407b8;
            case 0x1407BCu: goto label_1407bc;
            case 0x1407C0u: goto label_1407c0;
            case 0x1407C4u: goto label_1407c4;
            case 0x1407C8u: goto label_1407c8;
            case 0x1407CCu: goto label_1407cc;
            case 0x1407D0u: goto label_1407d0;
            case 0x1407D4u: goto label_1407d4;
            case 0x1407D8u: goto label_1407d8;
            case 0x1407DCu: goto label_1407dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x140434u;
label_140434:
    // 0x140434: 0x0
    ctx->pc = 0x140434u;
    // NOP
label_140438:
    // 0x140438: 0x27bdffe0
    ctx->pc = 0x140438u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_14043c:
    // 0x14043c: 0xffb20010
    ctx->pc = 0x14043cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_140440:
    // 0x140440: 0xa0902d
    ctx->pc = 0x140440u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_140444:
    // 0x140444: 0x2e420004
    ctx->pc = 0x140444u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), 4));
label_140448:
    // 0x140448: 0xffb00000
    ctx->pc = 0x140448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_14044c:
    // 0x14044c: 0xffb10008
    ctx->pc = 0x14044cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_140450:
    // 0x140450: 0xc0882d
    ctx->pc = 0x140450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_140454:
    // 0x140454: 0xffbf0018
    ctx->pc = 0x140454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_140458:
    // 0x140458: 0x14400009
label_14045c:
    if (ctx->pc == 0x14045Cu) {
        ctx->pc = 0x14045Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140460u;
        goto label_140460;
    }
    ctx->pc = 0x140458u;
    {
        const bool branch_taken_0x140458 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14045Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x140458) {
            ctx->pc = 0x140480u;
            goto label_140480;
        }
    }
    ctx->pc = 0x140460u;
label_140460:
    // 0x140460: 0x8e020028
    ctx->pc = 0x140460u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_140464:
    // 0x140464: 0x50400044
label_140468:
    if (ctx->pc == 0x140468u) {
        ctx->pc = 0x140468u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x14046Cu;
        goto label_14046c;
    }
    ctx->pc = 0x140464u;
    {
        const bool branch_taken_0x140464 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x140464) {
            ctx->pc = 0x140468u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x140578u;
            goto label_140578;
        }
    }
    ctx->pc = 0x14046Cu;
label_14046c:
    // 0x14046c: 0x8e04002c
    ctx->pc = 0x14046cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_140470:
    // 0x140470: 0x40f809
label_140474:
    if (ctx->pc == 0x140474u) {
        ctx->pc = 0x140474u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x140478u;
        goto label_140478;
    }
    ctx->pc = 0x140470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x140478u);
        ctx->pc = 0x140474u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1401F8u: goto label_1401f8;
            case 0x1401FCu: goto label_1401fc;
            case 0x140200u: goto label_140200;
            case 0x140204u: goto label_140204;
            case 0x140208u: goto label_140208;
            case 0x14020Cu: goto label_14020c;
            case 0x140210u: goto label_140210;
            case 0x140214u: goto label_140214;
            case 0x140218u: goto label_140218;
            case 0x14021Cu: goto label_14021c;
            case 0x140220u: goto label_140220;
            case 0x140224u: goto label_140224;
            case 0x140228u: goto label_140228;
            case 0x14022Cu: goto label_14022c;
            case 0x140230u: goto label_140230;
            case 0x140234u: goto label_140234;
            case 0x140238u: goto label_140238;
            case 0x14023Cu: goto label_14023c;
            case 0x140240u: goto label_140240;
            case 0x140244u: goto label_140244;
            case 0x140248u: goto label_140248;
            case 0x14024Cu: goto label_14024c;
            case 0x140250u: goto label_140250;
            case 0x140254u: goto label_140254;
            case 0x140258u: goto label_140258;
            case 0x14025Cu: goto label_14025c;
            case 0x140260u: goto label_140260;
            case 0x140264u: goto label_140264;
            case 0x140268u: goto label_140268;
            case 0x14026Cu: goto label_14026c;
            case 0x140270u: goto label_140270;
            case 0x140274u: goto label_140274;
            case 0x140278u: goto label_140278;
            case 0x14027Cu: goto label_14027c;
            case 0x140280u: goto label_140280;
            case 0x140284u: goto label_140284;
            case 0x140288u: goto label_140288;
            case 0x14028Cu: goto label_14028c;
            case 0x140290u: goto label_140290;
            case 0x140294u: goto label_140294;
            case 0x140298u: goto label_140298;
            case 0x14029Cu: goto label_14029c;
            case 0x1402A0u: goto label_1402a0;
            case 0x1402A4u: goto label_1402a4;
            case 0x1402A8u: goto label_1402a8;
            case 0x1402ACu: goto label_1402ac;
            case 0x1402B0u: goto label_1402b0;
            case 0x1402B4u: goto label_1402b4;
            case 0x1402B8u: goto label_1402b8;
            case 0x1402BCu: goto label_1402bc;
            case 0x1402C0u: goto label_1402c0;
            case 0x1402C4u: goto label_1402c4;
            case 0x1402C8u: goto label_1402c8;
            case 0x1402CCu: goto label_1402cc;
            case 0x1402D0u: goto label_1402d0;
            case 0x1402D4u: goto label_1402d4;
            case 0x1402D8u: goto label_1402d8;
            case 0x1402DCu: goto label_1402dc;
            case 0x1402E0u: goto label_1402e0;
            case 0x1402E4u: goto label_1402e4;
            case 0x1402E8u: goto label_1402e8;
            case 0x1402ECu: goto label_1402ec;
            case 0x1402F0u: goto label_1402f0;
            case 0x1402F4u: goto label_1402f4;
            case 0x1402F8u: goto label_1402f8;
            case 0x1402FCu: goto label_1402fc;
            case 0x140300u: goto label_140300;
            case 0x140304u: goto label_140304;
            case 0x140308u: goto label_140308;
            case 0x14030Cu: goto label_14030c;
            case 0x140310u: goto label_140310;
            case 0x140314u: goto label_140314;
            case 0x140318u: goto label_140318;
            case 0x14031Cu: goto label_14031c;
            case 0x140320u: goto label_140320;
            case 0x140324u: goto label_140324;
            case 0x140328u: goto label_140328;
            case 0x14032Cu: goto label_14032c;
            case 0x140330u: goto label_140330;
            case 0x140334u: goto label_140334;
            case 0x140338u: goto label_140338;
            case 0x14033Cu: goto label_14033c;
            case 0x140340u: goto label_140340;
            case 0x140344u: goto label_140344;
            case 0x140348u: goto label_140348;
            case 0x14034Cu: goto label_14034c;
            case 0x140350u: goto label_140350;
            case 0x140354u: goto label_140354;
            case 0x140358u: goto label_140358;
            case 0x14035Cu: goto label_14035c;
            case 0x140360u: goto label_140360;
            case 0x140364u: goto label_140364;
            case 0x140368u: goto label_140368;
            case 0x14036Cu: goto label_14036c;
            case 0x140370u: goto label_140370;
            case 0x140374u: goto label_140374;
            case 0x140378u: goto label_140378;
            case 0x14037Cu: goto label_14037c;
            case 0x140380u: goto label_140380;
            case 0x140384u: goto label_140384;
            case 0x140388u: goto label_140388;
            case 0x14038Cu: goto label_14038c;
            case 0x140390u: goto label_140390;
            case 0x140394u: goto label_140394;
            case 0x140398u: goto label_140398;
            case 0x14039Cu: goto label_14039c;
            case 0x1403A0u: goto label_1403a0;
            case 0x1403A4u: goto label_1403a4;
            case 0x1403A8u: goto label_1403a8;
            case 0x1403ACu: goto label_1403ac;
            case 0x1403B0u: goto label_1403b0;
            case 0x1403B4u: goto label_1403b4;
            case 0x1403B8u: goto label_1403b8;
            case 0x1403BCu: goto label_1403bc;
            case 0x1403C0u: goto label_1403c0;
            case 0x1403C4u: goto label_1403c4;
            case 0x1403C8u: goto label_1403c8;
            case 0x1403CCu: goto label_1403cc;
            case 0x1403D0u: goto label_1403d0;
            case 0x1403D4u: goto label_1403d4;
            case 0x1403D8u: goto label_1403d8;
            case 0x1403DCu: goto label_1403dc;
            case 0x1403E0u: goto label_1403e0;
            case 0x1403E4u: goto label_1403e4;
            case 0x1403E8u: goto label_1403e8;
            case 0x1403ECu: goto label_1403ec;
            case 0x1403F0u: goto label_1403f0;
            case 0x1403F4u: goto label_1403f4;
            case 0x1403F8u: goto label_1403f8;
            case 0x1403FCu: goto label_1403fc;
            case 0x140400u: goto label_140400;
            case 0x140404u: goto label_140404;
            case 0x140408u: goto label_140408;
            case 0x14040Cu: goto label_14040c;
            case 0x140410u: goto label_140410;
            case 0x140414u: goto label_140414;
            case 0x140418u: goto label_140418;
            case 0x14041Cu: goto label_14041c;
            case 0x140420u: goto label_140420;
            case 0x140424u: goto label_140424;
            case 0x140428u: goto label_140428;
            case 0x14042Cu: goto label_14042c;
            case 0x140430u: goto label_140430;
            case 0x140434u: goto label_140434;
            case 0x140438u: goto label_140438;
            case 0x14043Cu: goto label_14043c;
            case 0x140440u: goto label_140440;
            case 0x140444u: goto label_140444;
            case 0x140448u: goto label_140448;
            case 0x14044Cu: goto label_14044c;
            case 0x140450u: goto label_140450;
            case 0x140454u: goto label_140454;
            case 0x140458u: goto label_140458;
            case 0x14045Cu: goto label_14045c;
            case 0x140460u: goto label_140460;
            case 0x140464u: goto label_140464;
            case 0x140468u: goto label_140468;
            case 0x14046Cu: goto label_14046c;
            case 0x140470u: goto label_140470;
            case 0x140474u: goto label_140474;
            case 0x140478u: goto label_140478;
            case 0x14047Cu: goto label_14047c;
            case 0x140480u: goto label_140480;
            case 0x140484u: goto label_140484;
            case 0x140488u: goto label_140488;
            case 0x14048Cu: goto label_14048c;
            case 0x140490u: goto label_140490;
            case 0x140494u: goto label_140494;
            case 0x140498u: goto label_140498;
            case 0x14049Cu: goto label_14049c;
            case 0x1404A0u: goto label_1404a0;
            case 0x1404A4u: goto label_1404a4;
            case 0x1404A8u: goto label_1404a8;
            case 0x1404ACu: goto label_1404ac;
            case 0x1404B0u: goto label_1404b0;
            case 0x1404B4u: goto label_1404b4;
            case 0x1404B8u: goto label_1404b8;
            case 0x1404BCu: goto label_1404bc;
            case 0x1404C0u: goto label_1404c0;
            case 0x1404C4u: goto label_1404c4;
            case 0x1404C8u: goto label_1404c8;
            case 0x1404CCu: goto label_1404cc;
            case 0x1404D0u: goto label_1404d0;
            case 0x1404D4u: goto label_1404d4;
            case 0x1404D8u: goto label_1404d8;
            case 0x1404DCu: goto label_1404dc;
            case 0x1404E0u: goto label_1404e0;
            case 0x1404E4u: goto label_1404e4;
            case 0x1404E8u: goto label_1404e8;
            case 0x1404ECu: goto label_1404ec;
            case 0x1404F0u: goto label_1404f0;
            case 0x1404F4u: goto label_1404f4;
            case 0x1404F8u: goto label_1404f8;
            case 0x1404FCu: goto label_1404fc;
            case 0x140500u: goto label_140500;
            case 0x140504u: goto label_140504;
            case 0x140508u: goto label_140508;
            case 0x14050Cu: goto label_14050c;
            case 0x140510u: goto label_140510;
            case 0x140514u: goto label_140514;
            case 0x140518u: goto label_140518;
            case 0x14051Cu: goto label_14051c;
            case 0x140520u: goto label_140520;
            case 0x140524u: goto label_140524;
            case 0x140528u: goto label_140528;
            case 0x14052Cu: goto label_14052c;
            case 0x140530u: goto label_140530;
            case 0x140534u: goto label_140534;
            case 0x140538u: goto label_140538;
            case 0x14053Cu: goto label_14053c;
            case 0x140540u: goto label_140540;
            case 0x140544u: goto label_140544;
            case 0x140548u: goto label_140548;
            case 0x14054Cu: goto label_14054c;
            case 0x140550u: goto label_140550;
            case 0x140554u: goto label_140554;
            case 0x140558u: goto label_140558;
            case 0x14055Cu: goto label_14055c;
            case 0x140560u: goto label_140560;
            case 0x140564u: goto label_140564;
            case 0x140568u: goto label_140568;
            case 0x14056Cu: goto label_14056c;
            case 0x140570u: goto label_140570;
            case 0x140574u: goto label_140574;
            case 0x140578u: goto label_140578;
            case 0x14057Cu: goto label_14057c;
            case 0x140580u: goto label_140580;
            case 0x140584u: goto label_140584;
            case 0x140588u: goto label_140588;
            case 0x14058Cu: goto label_14058c;
            case 0x140590u: goto label_140590;
            case 0x140594u: goto label_140594;
            case 0x140598u: goto label_140598;
            case 0x14059Cu: goto label_14059c;
            case 0x1405A0u: goto label_1405a0;
            case 0x1405A4u: goto label_1405a4;
            case 0x1405A8u: goto label_1405a8;
            case 0x1405ACu: goto label_1405ac;
            case 0x1405B0u: goto label_1405b0;
            case 0x1405B4u: goto label_1405b4;
            case 0x1405B8u: goto label_1405b8;
            case 0x1405BCu: goto label_1405bc;
            case 0x1405C0u: goto label_1405c0;
            case 0x1405C4u: goto label_1405c4;
            case 0x1405C8u: goto label_1405c8;
            case 0x1405CCu: goto label_1405cc;
            case 0x1405D0u: goto label_1405d0;
            case 0x1405D4u: goto label_1405d4;
            case 0x1405D8u: goto label_1405d8;
            case 0x1405DCu: goto label_1405dc;
            case 0x1405E0u: goto label_1405e0;
            case 0x1405E4u: goto label_1405e4;
            case 0x1405E8u: goto label_1405e8;
            case 0x1405ECu: goto label_1405ec;
            case 0x1405F0u: goto label_1405f0;
            case 0x1405F4u: goto label_1405f4;
            case 0x1405F8u: goto label_1405f8;
            case 0x1405FCu: goto label_1405fc;
            case 0x140600u: goto label_140600;
            case 0x140604u: goto label_140604;
            case 0x140608u: goto label_140608;
            case 0x14060Cu: goto label_14060c;
            case 0x140610u: goto label_140610;
            case 0x140614u: goto label_140614;
            case 0x140618u: goto label_140618;
            case 0x14061Cu: goto label_14061c;
            case 0x140620u: goto label_140620;
            case 0x140624u: goto label_140624;
            case 0x140628u: goto label_140628;
            case 0x14062Cu: goto label_14062c;
            case 0x140630u: goto label_140630;
            case 0x140634u: goto label_140634;
            case 0x140638u: goto label_140638;
            case 0x14063Cu: goto label_14063c;
            case 0x140640u: goto label_140640;
            case 0x140644u: goto label_140644;
            case 0x140648u: goto label_140648;
            case 0x14064Cu: goto label_14064c;
            case 0x140650u: goto label_140650;
            case 0x140654u: goto label_140654;
            case 0x140658u: goto label_140658;
            case 0x14065Cu: goto label_14065c;
            case 0x140660u: goto label_140660;
            case 0x140664u: goto label_140664;
            case 0x140668u: goto label_140668;
            case 0x14066Cu: goto label_14066c;
            case 0x140670u: goto label_140670;
            case 0x140674u: goto label_140674;
            case 0x140678u: goto label_140678;
            case 0x14067Cu: goto label_14067c;
            case 0x140680u: goto label_140680;
            case 0x140684u: goto label_140684;
            case 0x140688u: goto label_140688;
            case 0x14068Cu: goto label_14068c;
            case 0x140690u: goto label_140690;
            case 0x140694u: goto label_140694;
            case 0x140698u: goto label_140698;
            case 0x14069Cu: goto label_14069c;
            case 0x1406A0u: goto label_1406a0;
            case 0x1406A4u: goto label_1406a4;
            case 0x1406A8u: goto label_1406a8;
            case 0x1406ACu: goto label_1406ac;
            case 0x1406B0u: goto label_1406b0;
            case 0x1406B4u: goto label_1406b4;
            case 0x1406B8u: goto label_1406b8;
            case 0x1406BCu: goto label_1406bc;
            case 0x1406C0u: goto label_1406c0;
            case 0x1406C4u: goto label_1406c4;
            case 0x1406C8u: goto label_1406c8;
            case 0x1406CCu: goto label_1406cc;
            case 0x1406D0u: goto label_1406d0;
            case 0x1406D4u: goto label_1406d4;
            case 0x1406D8u: goto label_1406d8;
            case 0x1406DCu: goto label_1406dc;
            case 0x1406E0u: goto label_1406e0;
            case 0x1406E4u: goto label_1406e4;
            case 0x1406E8u: goto label_1406e8;
            case 0x1406ECu: goto label_1406ec;
            case 0x1406F0u: goto label_1406f0;
            case 0x1406F4u: goto label_1406f4;
            case 0x1406F8u: goto label_1406f8;
            case 0x1406FCu: goto label_1406fc;
            case 0x140700u: goto label_140700;
            case 0x140704u: goto label_140704;
            case 0x140708u: goto label_140708;
            case 0x14070Cu: goto label_14070c;
            case 0x140710u: goto label_140710;
            case 0x140714u: goto label_140714;
            case 0x140718u: goto label_140718;
            case 0x14071Cu: goto label_14071c;
            case 0x140720u: goto label_140720;
            case 0x140724u: goto label_140724;
            case 0x140728u: goto label_140728;
            case 0x14072Cu: goto label_14072c;
            case 0x140730u: goto label_140730;
            case 0x140734u: goto label_140734;
            case 0x140738u: goto label_140738;
            case 0x14073Cu: goto label_14073c;
            case 0x140740u: goto label_140740;
            case 0x140744u: goto label_140744;
            case 0x140748u: goto label_140748;
            case 0x14074Cu: goto label_14074c;
            case 0x140750u: goto label_140750;
            case 0x140754u: goto label_140754;
            case 0x140758u: goto label_140758;
            case 0x14075Cu: goto label_14075c;
            case 0x140760u: goto label_140760;
            case 0x140764u: goto label_140764;
            case 0x140768u: goto label_140768;
            case 0x14076Cu: goto label_14076c;
            case 0x140770u: goto label_140770;
            case 0x140774u: goto label_140774;
            case 0x140778u: goto label_140778;
            case 0x14077Cu: goto label_14077c;
            case 0x140780u: goto label_140780;
            case 0x140784u: goto label_140784;
            case 0x140788u: goto label_140788;
            case 0x14078Cu: goto label_14078c;
            case 0x140790u: goto label_140790;
            case 0x140794u: goto label_140794;
            case 0x140798u: goto label_140798;
            case 0x14079Cu: goto label_14079c;
            case 0x1407A0u: goto label_1407a0;
            case 0x1407A4u: goto label_1407a4;
            case 0x1407A8u: goto label_1407a8;
            case 0x1407ACu: goto label_1407ac;
            case 0x1407B0u: goto label_1407b0;
            case 0x1407B4u: goto label_1407b4;
            case 0x1407B8u: goto label_1407b8;
            case 0x1407BCu: goto label_1407bc;
            case 0x1407C0u: goto label_1407c0;
            case 0x1407C4u: goto label_1407c4;
            case 0x1407C8u: goto label_1407c8;
            case 0x1407CCu: goto label_1407cc;
            case 0x1407D0u: goto label_1407d0;
            case 0x1407D4u: goto label_1407d4;
            case 0x1407D8u: goto label_1407d8;
            case 0x1407DCu: goto label_1407dc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x140478u; }
            if (ctx->pc != 0x140478u) { return; }
        }
    }
    ctx->pc = 0x140478u;
label_140478:
    // 0x140478: 0x1000003f
label_14047c:
    if (ctx->pc == 0x14047Cu) {
        ctx->pc = 0x14047Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x140480u;
        goto label_140480;
    }
    ctx->pc = 0x140478u;
    {
        const bool branch_taken_0x140478 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14047Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x140478) {
            ctx->pc = 0x140578u;
            goto label_140578;
        }
    }
    ctx->pc = 0x140480u;
label_140480:
    // 0x140480: 0x8e220004
    ctx->pc = 0x140480u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_140484:
    // 0x140484: 0x5840003c
label_140488:
    if (ctx->pc == 0x140488u) {
        ctx->pc = 0x140488u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x14048Cu;
        goto label_14048c;
    }
    ctx->pc = 0x140484u;
    {
        const bool branch_taken_0x140484 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x140484) {
            ctx->pc = 0x140488u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x140578u;
            goto label_140578;
        }
    }
    ctx->pc = 0x14048Cu;
label_14048c:
    // 0x14048c: 0x8e220000
    ctx->pc = 0x14048cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_140490:
    // 0x140490: 0x50400039
label_140494:
    if (ctx->pc == 0x140494u) {
        ctx->pc = 0x140494u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x140498u;
        goto label_140498;
    }
    ctx->pc = 0x140490u;
    {
        const bool branch_taken_0x140490 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x140490) {
            ctx->pc = 0x140494u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x140578u;
            goto label_140578;
        }
    }
    ctx->pc = 0x140498u;
label_140498:
    // 0x140498: 0xc04fc96
label_14049c:
    if (ctx->pc == 0x14049Cu) {
        ctx->pc = 0x1404A0u;
        goto label_1404a0;
    }
    ctx->pc = 0x140498u;
    SET_GPR_U32(ctx, 31, 0x1404A0u);
    ctx->pc = 0x13F258u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F258_0x13f258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1404A0u; }
    }
    if (ctx->pc != 0x1404A0u) { return; }
    ctx->pc = 0x1404A0u;
label_1404a0:
    // 0x1404a0: 0x121080
    ctx->pc = 0x1404a0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
label_1404a4:
    // 0x1404a4: 0x2021021
    ctx->pc = 0x1404a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1404a8:
    // 0x1404a8: 0x24450018
    ctx->pc = 0x1404a8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 24));
label_1404ac:
    // 0x1404ac: 0x8ca20000
    ctx->pc = 0x1404acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1404b0:
    // 0x1404b0: 0x10400008
label_1404b4:
    if (ctx->pc == 0x1404B4u) {
        ctx->pc = 0x1404B4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1404B8u;
        goto label_1404b8;
    }
    ctx->pc = 0x1404B0u;
    {
        const bool branch_taken_0x1404b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1404B4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1404b0) {
            ctx->pc = 0x1404D4u;
            goto label_1404d4;
        }
    }
    ctx->pc = 0x1404B8u;
label_1404b8:
    // 0x1404b8: 0x40202d
    ctx->pc = 0x1404b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1404bc:
    // 0x1404bc: 0x8c820000
    ctx->pc = 0x1404bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1404c0:
    // 0x1404c0: 0x0
    ctx->pc = 0x1404c0u;
    // NOP
label_1404c4:
    // 0x1404c4: 0x0
    ctx->pc = 0x1404c4u;
    // NOP
label_1404c8:
    // 0x1404c8: 0x0
    ctx->pc = 0x1404c8u;
    // NOP
label_1404cc:
    // 0x1404cc: 0x1440fffa
label_1404d0:
    if (ctx->pc == 0x1404D0u) {
        ctx->pc = 0x1404D0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1404D4u;
        goto label_1404d4;
    }
    ctx->pc = 0x1404CCu;
    {
        const bool branch_taken_0x1404cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1404D0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1404cc) {
            ctx->pc = 0x1404B8u;
            goto label_1404b8;
        }
    }
    ctx->pc = 0x1404D4u;
label_1404d4:
    // 0x1404d4: 0x82030005
    ctx->pc = 0x1404d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_1404d8:
    // 0x1404d8: 0x24020001
    ctx->pc = 0x1404d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1404dc:
    // 0x1404dc: 0x5462000e
label_1404e0:
    if (ctx->pc == 0x1404E0u) {
        ctx->pc = 0x1404E0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x1404E4u;
        goto label_1404e4;
    }
    ctx->pc = 0x1404DCu;
    {
        const bool branch_taken_0x1404dc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1404dc) {
            ctx->pc = 0x1404E0u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->pc = 0x140518u;
            goto label_140518;
        }
    }
    ctx->pc = 0x1404E4u;
label_1404e4:
    // 0x1404e4: 0x5080000c
label_1404e8:
    if (ctx->pc == 0x1404E8u) {
        ctx->pc = 0x1404E8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x1404ECu;
        goto label_1404ec;
    }
    ctx->pc = 0x1404E4u;
    {
        const bool branch_taken_0x1404e4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1404e4) {
            ctx->pc = 0x1404E8u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->pc = 0x140518u;
            goto label_140518;
        }
    }
    ctx->pc = 0x1404ECu;
label_1404ec:
    // 0x1404ec: 0x8c820008
    ctx->pc = 0x1404ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1404f0:
    // 0x1404f0: 0x8c86000c
    ctx->pc = 0x1404f0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1404f4:
    // 0x1404f4: 0x8e230000
    ctx->pc = 0x1404f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1404f8:
    // 0x1404f8: 0x461021
    ctx->pc = 0x1404f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1404fc:
    // 0x1404fc: 0x54430006
label_140500:
    if (ctx->pc == 0x140500u) {
        ctx->pc = 0x140500u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x140504u;
        goto label_140504;
    }
    ctx->pc = 0x1404FCu;
    {
        const bool branch_taken_0x1404fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1404fc) {
            ctx->pc = 0x140500u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->pc = 0x140518u;
            goto label_140518;
        }
    }
    ctx->pc = 0x140504u;
label_140504:
    // 0x140504: 0x8e220004
    ctx->pc = 0x140504u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_140508:
    // 0x140508: 0xc21021
    ctx->pc = 0x140508u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_14050c:
    // 0x14050c: 0x10000013
label_140510:
    if (ctx->pc == 0x140510u) {
        ctx->pc = 0x140510u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x140514u;
        goto label_140514;
    }
    ctx->pc = 0x14050Cu;
    {
        const bool branch_taken_0x14050c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x140510u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x14050c) {
            ctx->pc = 0x14055Cu;
            goto label_14055c;
        }
    }
    ctx->pc = 0x140514u;
label_140514:
    // 0x140514: 0x0
    ctx->pc = 0x140514u;
    // NOP
label_140518:
    // 0x140518: 0x54800009
label_14051c:
    if (ctx->pc == 0x14051Cu) {
        ctx->pc = 0x14051Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x140520u;
        goto label_140520;
    }
    ctx->pc = 0x140518u;
    {
        const bool branch_taken_0x140518 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x140518) {
            ctx->pc = 0x14051Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->pc = 0x140540u;
            goto label_140540;
        }
    }
    ctx->pc = 0x140520u;
label_140520:
    // 0x140520: 0x8e020028
    ctx->pc = 0x140520u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_140524:
    // 0x140524: 0x5040000e
label_140528:
    if (ctx->pc == 0x140528u) {
        ctx->pc = 0x140528u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x14052Cu;
        goto label_14052c;
    }
    ctx->pc = 0x140524u;
    {
        const bool branch_taken_0x140524 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x140524) {
            ctx->pc = 0x140528u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x140560u;
            goto label_140560;
        }
    }
    ctx->pc = 0x14052Cu;
label_14052c:
    // 0x14052c: 0x8e04002c
    ctx->pc = 0x14052cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_140530:
    // 0x140530: 0x40f809
label_140534:
    if (ctx->pc == 0x140534u) {
        ctx->pc = 0x140534u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x140538u;
        goto label_140538;
    }
    ctx->pc = 0x140530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x140538u);
        ctx->pc = 0x140534u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1401F8u: goto label_1401f8;
            case 0x1401FCu: goto label_1401fc;
            case 0x140200u: goto label_140200;
            case 0x140204u: goto label_140204;
            case 0x140208u: goto label_140208;
            case 0x14020Cu: goto label_14020c;
            case 0x140210u: goto label_140210;
            case 0x140214u: goto label_140214;
            case 0x140218u: goto label_140218;
            case 0x14021Cu: goto label_14021c;
            case 0x140220u: goto label_140220;
            case 0x140224u: goto label_140224;
            case 0x140228u: goto label_140228;
            case 0x14022Cu: goto label_14022c;
            case 0x140230u: goto label_140230;
            case 0x140234u: goto label_140234;
            case 0x140238u: goto label_140238;
            case 0x14023Cu: goto label_14023c;
            case 0x140240u: goto label_140240;
            case 0x140244u: goto label_140244;
            case 0x140248u: goto label_140248;
            case 0x14024Cu: goto label_14024c;
            case 0x140250u: goto label_140250;
            case 0x140254u: goto label_140254;
            case 0x140258u: goto label_140258;
            case 0x14025Cu: goto label_14025c;
            case 0x140260u: goto label_140260;
            case 0x140264u: goto label_140264;
            case 0x140268u: goto label_140268;
            case 0x14026Cu: goto label_14026c;
            case 0x140270u: goto label_140270;
            case 0x140274u: goto label_140274;
            case 0x140278u: goto label_140278;
            case 0x14027Cu: goto label_14027c;
            case 0x140280u: goto label_140280;
            case 0x140284u: goto label_140284;
            case 0x140288u: goto label_140288;
            case 0x14028Cu: goto label_14028c;
            case 0x140290u: goto label_140290;
            case 0x140294u: goto label_140294;
            case 0x140298u: goto label_140298;
            case 0x14029Cu: goto label_14029c;
            case 0x1402A0u: goto label_1402a0;
            case 0x1402A4u: goto label_1402a4;
            case 0x1402A8u: goto label_1402a8;
            case 0x1402ACu: goto label_1402ac;
            case 0x1402B0u: goto label_1402b0;
            case 0x1402B4u: goto label_1402b4;
            case 0x1402B8u: goto label_1402b8;
            case 0x1402BCu: goto label_1402bc;
            case 0x1402C0u: goto label_1402c0;
            case 0x1402C4u: goto label_1402c4;
            case 0x1402C8u: goto label_1402c8;
            case 0x1402CCu: goto label_1402cc;
            case 0x1402D0u: goto label_1402d0;
            case 0x1402D4u: goto label_1402d4;
            case 0x1402D8u: goto label_1402d8;
            case 0x1402DCu: goto label_1402dc;
            case 0x1402E0u: goto label_1402e0;
            case 0x1402E4u: goto label_1402e4;
            case 0x1402E8u: goto label_1402e8;
            case 0x1402ECu: goto label_1402ec;
            case 0x1402F0u: goto label_1402f0;
            case 0x1402F4u: goto label_1402f4;
            case 0x1402F8u: goto label_1402f8;
            case 0x1402FCu: goto label_1402fc;
            case 0x140300u: goto label_140300;
            case 0x140304u: goto label_140304;
            case 0x140308u: goto label_140308;
            case 0x14030Cu: goto label_14030c;
            case 0x140310u: goto label_140310;
            case 0x140314u: goto label_140314;
            case 0x140318u: goto label_140318;
            case 0x14031Cu: goto label_14031c;
            case 0x140320u: goto label_140320;
            case 0x140324u: goto label_140324;
            case 0x140328u: goto label_140328;
            case 0x14032Cu: goto label_14032c;
            case 0x140330u: goto label_140330;
            case 0x140334u: goto label_140334;
            case 0x140338u: goto label_140338;
            case 0x14033Cu: goto label_14033c;
            case 0x140340u: goto label_140340;
            case 0x140344u: goto label_140344;
            case 0x140348u: goto label_140348;
            case 0x14034Cu: goto label_14034c;
            case 0x140350u: goto label_140350;
            case 0x140354u: goto label_140354;
            case 0x140358u: goto label_140358;
            case 0x14035Cu: goto label_14035c;
            case 0x140360u: goto label_140360;
            case 0x140364u: goto label_140364;
            case 0x140368u: goto label_140368;
            case 0x14036Cu: goto label_14036c;
            case 0x140370u: goto label_140370;
            case 0x140374u: goto label_140374;
            case 0x140378u: goto label_140378;
            case 0x14037Cu: goto label_14037c;
            case 0x140380u: goto label_140380;
            case 0x140384u: goto label_140384;
            case 0x140388u: goto label_140388;
            case 0x14038Cu: goto label_14038c;
            case 0x140390u: goto label_140390;
            case 0x140394u: goto label_140394;
            case 0x140398u: goto label_140398;
            case 0x14039Cu: goto label_14039c;
            case 0x1403A0u: goto label_1403a0;
            case 0x1403A4u: goto label_1403a4;
            case 0x1403A8u: goto label_1403a8;
            case 0x1403ACu: goto label_1403ac;
            case 0x1403B0u: goto label_1403b0;
            case 0x1403B4u: goto label_1403b4;
            case 0x1403B8u: goto label_1403b8;
            case 0x1403BCu: goto label_1403bc;
            case 0x1403C0u: goto label_1403c0;
            case 0x1403C4u: goto label_1403c4;
            case 0x1403C8u: goto label_1403c8;
            case 0x1403CCu: goto label_1403cc;
            case 0x1403D0u: goto label_1403d0;
            case 0x1403D4u: goto label_1403d4;
            case 0x1403D8u: goto label_1403d8;
            case 0x1403DCu: goto label_1403dc;
            case 0x1403E0u: goto label_1403e0;
            case 0x1403E4u: goto label_1403e4;
            case 0x1403E8u: goto label_1403e8;
            case 0x1403ECu: goto label_1403ec;
            case 0x1403F0u: goto label_1403f0;
            case 0x1403F4u: goto label_1403f4;
            case 0x1403F8u: goto label_1403f8;
            case 0x1403FCu: goto label_1403fc;
            case 0x140400u: goto label_140400;
            case 0x140404u: goto label_140404;
            case 0x140408u: goto label_140408;
            case 0x14040Cu: goto label_14040c;
            case 0x140410u: goto label_140410;
            case 0x140414u: goto label_140414;
            case 0x140418u: goto label_140418;
            case 0x14041Cu: goto label_14041c;
            case 0x140420u: goto label_140420;
            case 0x140424u: goto label_140424;
            case 0x140428u: goto label_140428;
            case 0x14042Cu: goto label_14042c;
            case 0x140430u: goto label_140430;
            case 0x140434u: goto label_140434;
            case 0x140438u: goto label_140438;
            case 0x14043Cu: goto label_14043c;
            case 0x140440u: goto label_140440;
            case 0x140444u: goto label_140444;
            case 0x140448u: goto label_140448;
            case 0x14044Cu: goto label_14044c;
            case 0x140450u: goto label_140450;
            case 0x140454u: goto label_140454;
            case 0x140458u: goto label_140458;
            case 0x14045Cu: goto label_14045c;
            case 0x140460u: goto label_140460;
            case 0x140464u: goto label_140464;
            case 0x140468u: goto label_140468;
            case 0x14046Cu: goto label_14046c;
            case 0x140470u: goto label_140470;
            case 0x140474u: goto label_140474;
            case 0x140478u: goto label_140478;
            case 0x14047Cu: goto label_14047c;
            case 0x140480u: goto label_140480;
            case 0x140484u: goto label_140484;
            case 0x140488u: goto label_140488;
            case 0x14048Cu: goto label_14048c;
            case 0x140490u: goto label_140490;
            case 0x140494u: goto label_140494;
            case 0x140498u: goto label_140498;
            case 0x14049Cu: goto label_14049c;
            case 0x1404A0u: goto label_1404a0;
            case 0x1404A4u: goto label_1404a4;
            case 0x1404A8u: goto label_1404a8;
            case 0x1404ACu: goto label_1404ac;
            case 0x1404B0u: goto label_1404b0;
            case 0x1404B4u: goto label_1404b4;
            case 0x1404B8u: goto label_1404b8;
            case 0x1404BCu: goto label_1404bc;
            case 0x1404C0u: goto label_1404c0;
            case 0x1404C4u: goto label_1404c4;
            case 0x1404C8u: goto label_1404c8;
            case 0x1404CCu: goto label_1404cc;
            case 0x1404D0u: goto label_1404d0;
            case 0x1404D4u: goto label_1404d4;
            case 0x1404D8u: goto label_1404d8;
            case 0x1404DCu: goto label_1404dc;
            case 0x1404E0u: goto label_1404e0;
            case 0x1404E4u: goto label_1404e4;
            case 0x1404E8u: goto label_1404e8;
            case 0x1404ECu: goto label_1404ec;
            case 0x1404F0u: goto label_1404f0;
            case 0x1404F4u: goto label_1404f4;
            case 0x1404F8u: goto label_1404f8;
            case 0x1404FCu: goto label_1404fc;
            case 0x140500u: goto label_140500;
            case 0x140504u: goto label_140504;
            case 0x140508u: goto label_140508;
            case 0x14050Cu: goto label_14050c;
            case 0x140510u: goto label_140510;
            case 0x140514u: goto label_140514;
            case 0x140518u: goto label_140518;
            case 0x14051Cu: goto label_14051c;
            case 0x140520u: goto label_140520;
            case 0x140524u: goto label_140524;
            case 0x140528u: goto label_140528;
            case 0x14052Cu: goto label_14052c;
            case 0x140530u: goto label_140530;
            case 0x140534u: goto label_140534;
            case 0x140538u: goto label_140538;
            case 0x14053Cu: goto label_14053c;
            case 0x140540u: goto label_140540;
            case 0x140544u: goto label_140544;
            case 0x140548u: goto label_140548;
            case 0x14054Cu: goto label_14054c;
            case 0x140550u: goto label_140550;
            case 0x140554u: goto label_140554;
            case 0x140558u: goto label_140558;
            case 0x14055Cu: goto label_14055c;
            case 0x140560u: goto label_140560;
            case 0x140564u: goto label_140564;
            case 0x140568u: goto label_140568;
            case 0x14056Cu: goto label_14056c;
            case 0x140570u: goto label_140570;
            case 0x140574u: goto label_140574;
            case 0x140578u: goto label_140578;
            case 0x14057Cu: goto label_14057c;
            case 0x140580u: goto label_140580;
            case 0x140584u: goto label_140584;
            case 0x140588u: goto label_140588;
            case 0x14058Cu: goto label_14058c;
            case 0x140590u: goto label_140590;
            case 0x140594u: goto label_140594;
            case 0x140598u: goto label_140598;
            case 0x14059Cu: goto label_14059c;
            case 0x1405A0u: goto label_1405a0;
            case 0x1405A4u: goto label_1405a4;
            case 0x1405A8u: goto label_1405a8;
            case 0x1405ACu: goto label_1405ac;
            case 0x1405B0u: goto label_1405b0;
            case 0x1405B4u: goto label_1405b4;
            case 0x1405B8u: goto label_1405b8;
            case 0x1405BCu: goto label_1405bc;
            case 0x1405C0u: goto label_1405c0;
            case 0x1405C4u: goto label_1405c4;
            case 0x1405C8u: goto label_1405c8;
            case 0x1405CCu: goto label_1405cc;
            case 0x1405D0u: goto label_1405d0;
            case 0x1405D4u: goto label_1405d4;
            case 0x1405D8u: goto label_1405d8;
            case 0x1405DCu: goto label_1405dc;
            case 0x1405E0u: goto label_1405e0;
            case 0x1405E4u: goto label_1405e4;
            case 0x1405E8u: goto label_1405e8;
            case 0x1405ECu: goto label_1405ec;
            case 0x1405F0u: goto label_1405f0;
            case 0x1405F4u: goto label_1405f4;
            case 0x1405F8u: goto label_1405f8;
            case 0x1405FCu: goto label_1405fc;
            case 0x140600u: goto label_140600;
            case 0x140604u: goto label_140604;
            case 0x140608u: goto label_140608;
            case 0x14060Cu: goto label_14060c;
            case 0x140610u: goto label_140610;
            case 0x140614u: goto label_140614;
            case 0x140618u: goto label_140618;
            case 0x14061Cu: goto label_14061c;
            case 0x140620u: goto label_140620;
            case 0x140624u: goto label_140624;
            case 0x140628u: goto label_140628;
            case 0x14062Cu: goto label_14062c;
            case 0x140630u: goto label_140630;
            case 0x140634u: goto label_140634;
            case 0x140638u: goto label_140638;
            case 0x14063Cu: goto label_14063c;
            case 0x140640u: goto label_140640;
            case 0x140644u: goto label_140644;
            case 0x140648u: goto label_140648;
            case 0x14064Cu: goto label_14064c;
            case 0x140650u: goto label_140650;
            case 0x140654u: goto label_140654;
            case 0x140658u: goto label_140658;
            case 0x14065Cu: goto label_14065c;
            case 0x140660u: goto label_140660;
            case 0x140664u: goto label_140664;
            case 0x140668u: goto label_140668;
            case 0x14066Cu: goto label_14066c;
            case 0x140670u: goto label_140670;
            case 0x140674u: goto label_140674;
            case 0x140678u: goto label_140678;
            case 0x14067Cu: goto label_14067c;
            case 0x140680u: goto label_140680;
            case 0x140684u: goto label_140684;
            case 0x140688u: goto label_140688;
            case 0x14068Cu: goto label_14068c;
            case 0x140690u: goto label_140690;
            case 0x140694u: goto label_140694;
            case 0x140698u: goto label_140698;
            case 0x14069Cu: goto label_14069c;
            case 0x1406A0u: goto label_1406a0;
            case 0x1406A4u: goto label_1406a4;
            case 0x1406A8u: goto label_1406a8;
            case 0x1406ACu: goto label_1406ac;
            case 0x1406B0u: goto label_1406b0;
            case 0x1406B4u: goto label_1406b4;
            case 0x1406B8u: goto label_1406b8;
            case 0x1406BCu: goto label_1406bc;
            case 0x1406C0u: goto label_1406c0;
            case 0x1406C4u: goto label_1406c4;
            case 0x1406C8u: goto label_1406c8;
            case 0x1406CCu: goto label_1406cc;
            case 0x1406D0u: goto label_1406d0;
            case 0x1406D4u: goto label_1406d4;
            case 0x1406D8u: goto label_1406d8;
            case 0x1406DCu: goto label_1406dc;
            case 0x1406E0u: goto label_1406e0;
            case 0x1406E4u: goto label_1406e4;
            case 0x1406E8u: goto label_1406e8;
            case 0x1406ECu: goto label_1406ec;
            case 0x1406F0u: goto label_1406f0;
            case 0x1406F4u: goto label_1406f4;
            case 0x1406F8u: goto label_1406f8;
            case 0x1406FCu: goto label_1406fc;
            case 0x140700u: goto label_140700;
            case 0x140704u: goto label_140704;
            case 0x140708u: goto label_140708;
            case 0x14070Cu: goto label_14070c;
            case 0x140710u: goto label_140710;
            case 0x140714u: goto label_140714;
            case 0x140718u: goto label_140718;
            case 0x14071Cu: goto label_14071c;
            case 0x140720u: goto label_140720;
            case 0x140724u: goto label_140724;
            case 0x140728u: goto label_140728;
            case 0x14072Cu: goto label_14072c;
            case 0x140730u: goto label_140730;
            case 0x140734u: goto label_140734;
            case 0x140738u: goto label_140738;
            case 0x14073Cu: goto label_14073c;
            case 0x140740u: goto label_140740;
            case 0x140744u: goto label_140744;
            case 0x140748u: goto label_140748;
            case 0x14074Cu: goto label_14074c;
            case 0x140750u: goto label_140750;
            case 0x140754u: goto label_140754;
            case 0x140758u: goto label_140758;
            case 0x14075Cu: goto label_14075c;
            case 0x140760u: goto label_140760;
            case 0x140764u: goto label_140764;
            case 0x140768u: goto label_140768;
            case 0x14076Cu: goto label_14076c;
            case 0x140770u: goto label_140770;
            case 0x140774u: goto label_140774;
            case 0x140778u: goto label_140778;
            case 0x14077Cu: goto label_14077c;
            case 0x140780u: goto label_140780;
            case 0x140784u: goto label_140784;
            case 0x140788u: goto label_140788;
            case 0x14078Cu: goto label_14078c;
            case 0x140790u: goto label_140790;
            case 0x140794u: goto label_140794;
            case 0x140798u: goto label_140798;
            case 0x14079Cu: goto label_14079c;
            case 0x1407A0u: goto label_1407a0;
            case 0x1407A4u: goto label_1407a4;
            case 0x1407A8u: goto label_1407a8;
            case 0x1407ACu: goto label_1407ac;
            case 0x1407B0u: goto label_1407b0;
            case 0x1407B4u: goto label_1407b4;
            case 0x1407B8u: goto label_1407b8;
            case 0x1407BCu: goto label_1407bc;
            case 0x1407C0u: goto label_1407c0;
            case 0x1407C4u: goto label_1407c4;
            case 0x1407C8u: goto label_1407c8;
            case 0x1407CCu: goto label_1407cc;
            case 0x1407D0u: goto label_1407d0;
            case 0x1407D4u: goto label_1407d4;
            case 0x1407D8u: goto label_1407d8;
            case 0x1407DCu: goto label_1407dc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x140538u; }
            if (ctx->pc != 0x140538u) { return; }
        }
    }
    ctx->pc = 0x140538u;
label_140538:
    // 0x140538: 0x10000009
label_14053c:
    if (ctx->pc == 0x14053Cu) {
        ctx->pc = 0x14053Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x140540u;
        goto label_140540;
    }
    ctx->pc = 0x140538u;
    {
        const bool branch_taken_0x140538 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14053Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x140538) {
            ctx->pc = 0x140560u;
            goto label_140560;
        }
    }
    ctx->pc = 0x140540u;
label_140540:
    // 0x140540: 0x6a230007
    ctx->pc = 0x140540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
label_140544:
    // 0x140544: 0x6e230000
    ctx->pc = 0x140544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
label_140548:
    // 0x140548: 0xb083000f
    ctx->pc = 0x140548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_14054c:
    // 0x14054c: 0xb4830008
    ctx->pc = 0x14054cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_140550:
    // 0x140550: 0xae020014
    ctx->pc = 0x140550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_140554:
    // 0x140554: 0xac800000
    ctx->pc = 0x140554u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_140558:
    // 0x140558: 0xaca40000
    ctx->pc = 0x140558u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_14055c:
    // 0x14055c: 0xdfb00000
    ctx->pc = 0x14055cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_140560:
    // 0x140560: 0xdfb10008
    ctx->pc = 0x140560u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_140564:
    // 0x140564: 0xdfb20010
    ctx->pc = 0x140564u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_140568:
    // 0x140568: 0xdfbf0018
    ctx->pc = 0x140568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_14056c:
    // 0x14056c: 0x804fc9c
label_140570:
    if (ctx->pc == 0x140570u) {
        ctx->pc = 0x140570u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x140574u;
        goto label_140574;
    }
    ctx->pc = 0x14056Cu;
    ctx->pc = 0x140570u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x13F270u;
    sub_0013F270_0x13f270(rdram, ctx, runtime); return;
    ctx->pc = 0x140574u;
label_140574:
    // 0x140574: 0x0
    ctx->pc = 0x140574u;
    // NOP
label_140578:
    // 0x140578: 0xdfb10008
    ctx->pc = 0x140578u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_14057c:
    // 0x14057c: 0xdfb20010
    ctx->pc = 0x14057cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_140580:
    // 0x140580: 0xdfbf0018
    ctx->pc = 0x140580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_140584:
    // 0x140584: 0x3e00008
label_140588:
    if (ctx->pc == 0x140588u) {
        ctx->pc = 0x140588u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x14058Cu;
        goto label_14058c;
    }
    ctx->pc = 0x140584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140588u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1401F8u: goto label_1401f8;
            case 0x1401FCu: goto label_1401fc;
            case 0x140200u: goto label_140200;
            case 0x140204u: goto label_140204;
            case 0x140208u: goto label_140208;
            case 0x14020Cu: goto label_14020c;
            case 0x140210u: goto label_140210;
            case 0x140214u: goto label_140214;
            case 0x140218u: goto label_140218;
            case 0x14021Cu: goto label_14021c;
            case 0x140220u: goto label_140220;
            case 0x140224u: goto label_140224;
            case 0x140228u: goto label_140228;
            case 0x14022Cu: goto label_14022c;
            case 0x140230u: goto label_140230;
            case 0x140234u: goto label_140234;
            case 0x140238u: goto label_140238;
            case 0x14023Cu: goto label_14023c;
            case 0x140240u: goto label_140240;
            case 0x140244u: goto label_140244;
            case 0x140248u: goto label_140248;
            case 0x14024Cu: goto label_14024c;
            case 0x140250u: goto label_140250;
            case 0x140254u: goto label_140254;
            case 0x140258u: goto label_140258;
            case 0x14025Cu: goto label_14025c;
            case 0x140260u: goto label_140260;
            case 0x140264u: goto label_140264;
            case 0x140268u: goto label_140268;
            case 0x14026Cu: goto label_14026c;
            case 0x140270u: goto label_140270;
            case 0x140274u: goto label_140274;
            case 0x140278u: goto label_140278;
            case 0x14027Cu: goto label_14027c;
            case 0x140280u: goto label_140280;
            case 0x140284u: goto label_140284;
            case 0x140288u: goto label_140288;
            case 0x14028Cu: goto label_14028c;
            case 0x140290u: goto label_140290;
            case 0x140294u: goto label_140294;
            case 0x140298u: goto label_140298;
            case 0x14029Cu: goto label_14029c;
            case 0x1402A0u: goto label_1402a0;
            case 0x1402A4u: goto label_1402a4;
            case 0x1402A8u: goto label_1402a8;
            case 0x1402ACu: goto label_1402ac;
            case 0x1402B0u: goto label_1402b0;
            case 0x1402B4u: goto label_1402b4;
            case 0x1402B8u: goto label_1402b8;
            case 0x1402BCu: goto label_1402bc;
            case 0x1402C0u: goto label_1402c0;
            case 0x1402C4u: goto label_1402c4;
            case 0x1402C8u: goto label_1402c8;
            case 0x1402CCu: goto label_1402cc;
            case 0x1402D0u: goto label_1402d0;
            case 0x1402D4u: goto label_1402d4;
            case 0x1402D8u: goto label_1402d8;
            case 0x1402DCu: goto label_1402dc;
            case 0x1402E0u: goto label_1402e0;
            case 0x1402E4u: goto label_1402e4;
            case 0x1402E8u: goto label_1402e8;
            case 0x1402ECu: goto label_1402ec;
            case 0x1402F0u: goto label_1402f0;
            case 0x1402F4u: goto label_1402f4;
            case 0x1402F8u: goto label_1402f8;
            case 0x1402FCu: goto label_1402fc;
            case 0x140300u: goto label_140300;
            case 0x140304u: goto label_140304;
            case 0x140308u: goto label_140308;
            case 0x14030Cu: goto label_14030c;
            case 0x140310u: goto label_140310;
            case 0x140314u: goto label_140314;
            case 0x140318u: goto label_140318;
            case 0x14031Cu: goto label_14031c;
            case 0x140320u: goto label_140320;
            case 0x140324u: goto label_140324;
            case 0x140328u: goto label_140328;
            case 0x14032Cu: goto label_14032c;
            case 0x140330u: goto label_140330;
            case 0x140334u: goto label_140334;
            case 0x140338u: goto label_140338;
            case 0x14033Cu: goto label_14033c;
            case 0x140340u: goto label_140340;
            case 0x140344u: goto label_140344;
            case 0x140348u: goto label_140348;
            case 0x14034Cu: goto label_14034c;
            case 0x140350u: goto label_140350;
            case 0x140354u: goto label_140354;
            case 0x140358u: goto label_140358;
            case 0x14035Cu: goto label_14035c;
            case 0x140360u: goto label_140360;
            case 0x140364u: goto label_140364;
            case 0x140368u: goto label_140368;
            case 0x14036Cu: goto label_14036c;
            case 0x140370u: goto label_140370;
            case 0x140374u: goto label_140374;
            case 0x140378u: goto label_140378;
            case 0x14037Cu: goto label_14037c;
            case 0x140380u: goto label_140380;
            case 0x140384u: goto label_140384;
            case 0x140388u: goto label_140388;
            case 0x14038Cu: goto label_14038c;
            case 0x140390u: goto label_140390;
            case 0x140394u: goto label_140394;
            case 0x140398u: goto label_140398;
            case 0x14039Cu: goto label_14039c;
            case 0x1403A0u: goto label_1403a0;
            case 0x1403A4u: goto label_1403a4;
            case 0x1403A8u: goto label_1403a8;
            case 0x1403ACu: goto label_1403ac;
            case 0x1403B0u: goto label_1403b0;
            case 0x1403B4u: goto label_1403b4;
            case 0x1403B8u: goto label_1403b8;
            case 0x1403BCu: goto label_1403bc;
            case 0x1403C0u: goto label_1403c0;
            case 0x1403C4u: goto label_1403c4;
            case 0x1403C8u: goto label_1403c8;
            case 0x1403CCu: goto label_1403cc;
            case 0x1403D0u: goto label_1403d0;
            case 0x1403D4u: goto label_1403d4;
            case 0x1403D8u: goto label_1403d8;
            case 0x1403DCu: goto label_1403dc;
            case 0x1403E0u: goto label_1403e0;
            case 0x1403E4u: goto label_1403e4;
            case 0x1403E8u: goto label_1403e8;
            case 0x1403ECu: goto label_1403ec;
            case 0x1403F0u: goto label_1403f0;
            case 0x1403F4u: goto label_1403f4;
            case 0x1403F8u: goto label_1403f8;
            case 0x1403FCu: goto label_1403fc;
            case 0x140400u: goto label_140400;
            case 0x140404u: goto label_140404;
            case 0x140408u: goto label_140408;
            case 0x14040Cu: goto label_14040c;
            case 0x140410u: goto label_140410;
            case 0x140414u: goto label_140414;
            case 0x140418u: goto label_140418;
            case 0x14041Cu: goto label_14041c;
            case 0x140420u: goto label_140420;
            case 0x140424u: goto label_140424;
            case 0x140428u: goto label_140428;
            case 0x14042Cu: goto label_14042c;
            case 0x140430u: goto label_140430;
            case 0x140434u: goto label_140434;
            case 0x140438u: goto label_140438;
            case 0x14043Cu: goto label_14043c;
            case 0x140440u: goto label_140440;
            case 0x140444u: goto label_140444;
            case 0x140448u: goto label_140448;
            case 0x14044Cu: goto label_14044c;
            case 0x140450u: goto label_140450;
            case 0x140454u: goto label_140454;
            case 0x140458u: goto label_140458;
            case 0x14045Cu: goto label_14045c;
            case 0x140460u: goto label_140460;
            case 0x140464u: goto label_140464;
            case 0x140468u: goto label_140468;
            case 0x14046Cu: goto label_14046c;
            case 0x140470u: goto label_140470;
            case 0x140474u: goto label_140474;
            case 0x140478u: goto label_140478;
            case 0x14047Cu: goto label_14047c;
            case 0x140480u: goto label_140480;
            case 0x140484u: goto label_140484;
            case 0x140488u: goto label_140488;
            case 0x14048Cu: goto label_14048c;
            case 0x140490u: goto label_140490;
            case 0x140494u: goto label_140494;
            case 0x140498u: goto label_140498;
            case 0x14049Cu: goto label_14049c;
            case 0x1404A0u: goto label_1404a0;
            case 0x1404A4u: goto label_1404a4;
            case 0x1404A8u: goto label_1404a8;
            case 0x1404ACu: goto label_1404ac;
            case 0x1404B0u: goto label_1404b0;
            case 0x1404B4u: goto label_1404b4;
            case 0x1404B8u: goto label_1404b8;
            case 0x1404BCu: goto label_1404bc;
            case 0x1404C0u: goto label_1404c0;
            case 0x1404C4u: goto label_1404c4;
            case 0x1404C8u: goto label_1404c8;
            case 0x1404CCu: goto label_1404cc;
            case 0x1404D0u: goto label_1404d0;
            case 0x1404D4u: goto label_1404d4;
            case 0x1404D8u: goto label_1404d8;
            case 0x1404DCu: goto label_1404dc;
            case 0x1404E0u: goto label_1404e0;
            case 0x1404E4u: goto label_1404e4;
            case 0x1404E8u: goto label_1404e8;
            case 0x1404ECu: goto label_1404ec;
            case 0x1404F0u: goto label_1404f0;
            case 0x1404F4u: goto label_1404f4;
            case 0x1404F8u: goto label_1404f8;
            case 0x1404FCu: goto label_1404fc;
            case 0x140500u: goto label_140500;
            case 0x140504u: goto label_140504;
            case 0x140508u: goto label_140508;
            case 0x14050Cu: goto label_14050c;
            case 0x140510u: goto label_140510;
            case 0x140514u: goto label_140514;
            case 0x140518u: goto label_140518;
            case 0x14051Cu: goto label_14051c;
            case 0x140520u: goto label_140520;
            case 0x140524u: goto label_140524;
            case 0x140528u: goto label_140528;
            case 0x14052Cu: goto label_14052c;
            case 0x140530u: goto label_140530;
            case 0x140534u: goto label_140534;
            case 0x140538u: goto label_140538;
            case 0x14053Cu: goto label_14053c;
            case 0x140540u: goto label_140540;
            case 0x140544u: goto label_140544;
            case 0x140548u: goto label_140548;
            case 0x14054Cu: goto label_14054c;
            case 0x140550u: goto label_140550;
            case 0x140554u: goto label_140554;
            case 0x140558u: goto label_140558;
            case 0x14055Cu: goto label_14055c;
            case 0x140560u: goto label_140560;
            case 0x140564u: goto label_140564;
            case 0x140568u: goto label_140568;
            case 0x14056Cu: goto label_14056c;
            case 0x140570u: goto label_140570;
            case 0x140574u: goto label_140574;
            case 0x140578u: goto label_140578;
            case 0x14057Cu: goto label_14057c;
            case 0x140580u: goto label_140580;
            case 0x140584u: goto label_140584;
            case 0x140588u: goto label_140588;
            case 0x14058Cu: goto label_14058c;
            case 0x140590u: goto label_140590;
            case 0x140594u: goto label_140594;
            case 0x140598u: goto label_140598;
            case 0x14059Cu: goto label_14059c;
            case 0x1405A0u: goto label_1405a0;
            case 0x1405A4u: goto label_1405a4;
            case 0x1405A8u: goto label_1405a8;
            case 0x1405ACu: goto label_1405ac;
            case 0x1405B0u: goto label_1405b0;
            case 0x1405B4u: goto label_1405b4;
            case 0x1405B8u: goto label_1405b8;
            case 0x1405BCu: goto label_1405bc;
            case 0x1405C0u: goto label_1405c0;
            case 0x1405C4u: goto label_1405c4;
            case 0x1405C8u: goto label_1405c8;
            case 0x1405CCu: goto label_1405cc;
            case 0x1405D0u: goto label_1405d0;
            case 0x1405D4u: goto label_1405d4;
            case 0x1405D8u: goto label_1405d8;
            case 0x1405DCu: goto label_1405dc;
            case 0x1405E0u: goto label_1405e0;
            case 0x1405E4u: goto label_1405e4;
            case 0x1405E8u: goto label_1405e8;
            case 0x1405ECu: goto label_1405ec;
            case 0x1405F0u: goto label_1405f0;
            case 0x1405F4u: goto label_1405f4;
            case 0x1405F8u: goto label_1405f8;
            case 0x1405FCu: goto label_1405fc;
            case 0x140600u: goto label_140600;
            case 0x140604u: goto label_140604;
            case 0x140608u: goto label_140608;
            case 0x14060Cu: goto label_14060c;
            case 0x140610u: goto label_140610;
            case 0x140614u: goto label_140614;
            case 0x140618u: goto label_140618;
            case 0x14061Cu: goto label_14061c;
            case 0x140620u: goto label_140620;
            case 0x140624u: goto label_140624;
            case 0x140628u: goto label_140628;
            case 0x14062Cu: goto label_14062c;
            case 0x140630u: goto label_140630;
            case 0x140634u: goto label_140634;
            case 0x140638u: goto label_140638;
            case 0x14063Cu: goto label_14063c;
            case 0x140640u: goto label_140640;
            case 0x140644u: goto label_140644;
            case 0x140648u: goto label_140648;
            case 0x14064Cu: goto label_14064c;
            case 0x140650u: goto label_140650;
            case 0x140654u: goto label_140654;
            case 0x140658u: goto label_140658;
            case 0x14065Cu: goto label_14065c;
            case 0x140660u: goto label_140660;
            case 0x140664u: goto label_140664;
            case 0x140668u: goto label_140668;
            case 0x14066Cu: goto label_14066c;
            case 0x140670u: goto label_140670;
            case 0x140674u: goto label_140674;
            case 0x140678u: goto label_140678;
            case 0x14067Cu: goto label_14067c;
            case 0x140680u: goto label_140680;
            case 0x140684u: goto label_140684;
            case 0x140688u: goto label_140688;
            case 0x14068Cu: goto label_14068c;
            case 0x140690u: goto label_140690;
            case 0x140694u: goto label_140694;
            case 0x140698u: goto label_140698;
            case 0x14069Cu: goto label_14069c;
            case 0x1406A0u: goto label_1406a0;
            case 0x1406A4u: goto label_1406a4;
            case 0x1406A8u: goto label_1406a8;
            case 0x1406ACu: goto label_1406ac;
            case 0x1406B0u: goto label_1406b0;
            case 0x1406B4u: goto label_1406b4;
            case 0x1406B8u: goto label_1406b8;
            case 0x1406BCu: goto label_1406bc;
            case 0x1406C0u: goto label_1406c0;
            case 0x1406C4u: goto label_1406c4;
            case 0x1406C8u: goto label_1406c8;
            case 0x1406CCu: goto label_1406cc;
            case 0x1406D0u: goto label_1406d0;
            case 0x1406D4u: goto label_1406d4;
            case 0x1406D8u: goto label_1406d8;
            case 0x1406DCu: goto label_1406dc;
            case 0x1406E0u: goto label_1406e0;
            case 0x1406E4u: goto label_1406e4;
            case 0x1406E8u: goto label_1406e8;
            case 0x1406ECu: goto label_1406ec;
            case 0x1406F0u: goto label_1406f0;
            case 0x1406F4u: goto label_1406f4;
            case 0x1406F8u: goto label_1406f8;
            case 0x1406FCu: goto label_1406fc;
            case 0x140700u: goto label_140700;
            case 0x140704u: goto label_140704;
            case 0x140708u: goto label_140708;
            case 0x14070Cu: goto label_14070c;
            case 0x140710u: goto label_140710;
            case 0x140714u: goto label_140714;
            case 0x140718u: goto label_140718;
            case 0x14071Cu: goto label_14071c;
            case 0x140720u: goto label_140720;
            case 0x140724u: goto label_140724;
            case 0x140728u: goto label_140728;
            case 0x14072Cu: goto label_14072c;
            case 0x140730u: goto label_140730;
            case 0x140734u: goto label_140734;
            case 0x140738u: goto label_140738;
            case 0x14073Cu: goto label_14073c;
            case 0x140740u: goto label_140740;
            case 0x140744u: goto label_140744;
            case 0x140748u: goto label_140748;
            case 0x14074Cu: goto label_14074c;
            case 0x140750u: goto label_140750;
            case 0x140754u: goto label_140754;
            case 0x140758u: goto label_140758;
            case 0x14075Cu: goto label_14075c;
            case 0x140760u: goto label_140760;
            case 0x140764u: goto label_140764;
            case 0x140768u: goto label_140768;
            case 0x14076Cu: goto label_14076c;
            case 0x140770u: goto label_140770;
            case 0x140774u: goto label_140774;
            case 0x140778u: goto label_140778;
            case 0x14077Cu: goto label_14077c;
            case 0x140780u: goto label_140780;
            case 0x140784u: goto label_140784;
            case 0x140788u: goto label_140788;
            case 0x14078Cu: goto label_14078c;
            case 0x140790u: goto label_140790;
            case 0x140794u: goto label_140794;
            case 0x140798u: goto label_140798;
            case 0x14079Cu: goto label_14079c;
            case 0x1407A0u: goto label_1407a0;
            case 0x1407A4u: goto label_1407a4;
            case 0x1407A8u: goto label_1407a8;
            case 0x1407ACu: goto label_1407ac;
            case 0x1407B0u: goto label_1407b0;
            case 0x1407B4u: goto label_1407b4;
            case 0x1407B8u: goto label_1407b8;
            case 0x1407BCu: goto label_1407bc;
            case 0x1407C0u: goto label_1407c0;
            case 0x1407C4u: goto label_1407c4;
            case 0x1407C8u: goto label_1407c8;
            case 0x1407CCu: goto label_1407cc;
            case 0x1407D0u: goto label_1407d0;
            case 0x1407D4u: goto label_1407d4;
            case 0x1407D8u: goto label_1407d8;
            case 0x1407DCu: goto label_1407dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14058Cu;
label_14058c:
    // 0x14058c: 0x0
    ctx->pc = 0x14058cu;
    // NOP
label_140590:
    // 0x140590: 0x27bdffe0
    ctx->pc = 0x140590u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_140594:
    // 0x140594: 0xffb20010
    ctx->pc = 0x140594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_140598:
    // 0x140598: 0xa0902d
    ctx->pc = 0x140598u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_14059c:
    // 0x14059c: 0x2e420004
    ctx->pc = 0x14059cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), 4));
label_1405a0:
    // 0x1405a0: 0xffb00000
    ctx->pc = 0x1405a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1405a4:
    // 0x1405a4: 0xffb10008
    ctx->pc = 0x1405a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1405a8:
    // 0x1405a8: 0xc0882d
    ctx->pc = 0x1405a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1405ac:
    // 0x1405ac: 0xffbf0018
    ctx->pc = 0x1405acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1405b0:
    // 0x1405b0: 0x14400009
label_1405b4:
    if (ctx->pc == 0x1405B4u) {
        ctx->pc = 0x1405B4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1405B8u;
        goto label_1405b8;
    }
    ctx->pc = 0x1405B0u;
    {
        const bool branch_taken_0x1405b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1405B4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1405b0) {
            ctx->pc = 0x1405D8u;
            goto label_1405d8;
        }
    }
    ctx->pc = 0x1405B8u;
label_1405b8:
    // 0x1405b8: 0x8e020028
    ctx->pc = 0x1405b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1405bc:
    // 0x1405bc: 0x50400040
label_1405c0:
    if (ctx->pc == 0x1405C0u) {
        ctx->pc = 0x1405C0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1405C4u;
        goto label_1405c4;
    }
    ctx->pc = 0x1405BCu;
    {
        const bool branch_taken_0x1405bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1405bc) {
            ctx->pc = 0x1405C0u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x1406C0u;
            goto label_1406c0;
        }
    }
    ctx->pc = 0x1405C4u;
label_1405c4:
    // 0x1405c4: 0x8e04002c
    ctx->pc = 0x1405c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1405c8:
    // 0x1405c8: 0x40f809
label_1405cc:
    if (ctx->pc == 0x1405CCu) {
        ctx->pc = 0x1405CCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x1405D0u;
        goto label_1405d0;
    }
    ctx->pc = 0x1405C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1405D0u);
        ctx->pc = 0x1405CCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1401F8u: goto label_1401f8;
            case 0x1401FCu: goto label_1401fc;
            case 0x140200u: goto label_140200;
            case 0x140204u: goto label_140204;
            case 0x140208u: goto label_140208;
            case 0x14020Cu: goto label_14020c;
            case 0x140210u: goto label_140210;
            case 0x140214u: goto label_140214;
            case 0x140218u: goto label_140218;
            case 0x14021Cu: goto label_14021c;
            case 0x140220u: goto label_140220;
            case 0x140224u: goto label_140224;
            case 0x140228u: goto label_140228;
            case 0x14022Cu: goto label_14022c;
            case 0x140230u: goto label_140230;
            case 0x140234u: goto label_140234;
            case 0x140238u: goto label_140238;
            case 0x14023Cu: goto label_14023c;
            case 0x140240u: goto label_140240;
            case 0x140244u: goto label_140244;
            case 0x140248u: goto label_140248;
            case 0x14024Cu: goto label_14024c;
            case 0x140250u: goto label_140250;
            case 0x140254u: goto label_140254;
            case 0x140258u: goto label_140258;
            case 0x14025Cu: goto label_14025c;
            case 0x140260u: goto label_140260;
            case 0x140264u: goto label_140264;
            case 0x140268u: goto label_140268;
            case 0x14026Cu: goto label_14026c;
            case 0x140270u: goto label_140270;
            case 0x140274u: goto label_140274;
            case 0x140278u: goto label_140278;
            case 0x14027Cu: goto label_14027c;
            case 0x140280u: goto label_140280;
            case 0x140284u: goto label_140284;
            case 0x140288u: goto label_140288;
            case 0x14028Cu: goto label_14028c;
            case 0x140290u: goto label_140290;
            case 0x140294u: goto label_140294;
            case 0x140298u: goto label_140298;
            case 0x14029Cu: goto label_14029c;
            case 0x1402A0u: goto label_1402a0;
            case 0x1402A4u: goto label_1402a4;
            case 0x1402A8u: goto label_1402a8;
            case 0x1402ACu: goto label_1402ac;
            case 0x1402B0u: goto label_1402b0;
            case 0x1402B4u: goto label_1402b4;
            case 0x1402B8u: goto label_1402b8;
            case 0x1402BCu: goto label_1402bc;
            case 0x1402C0u: goto label_1402c0;
            case 0x1402C4u: goto label_1402c4;
            case 0x1402C8u: goto label_1402c8;
            case 0x1402CCu: goto label_1402cc;
            case 0x1402D0u: goto label_1402d0;
            case 0x1402D4u: goto label_1402d4;
            case 0x1402D8u: goto label_1402d8;
            case 0x1402DCu: goto label_1402dc;
            case 0x1402E0u: goto label_1402e0;
            case 0x1402E4u: goto label_1402e4;
            case 0x1402E8u: goto label_1402e8;
            case 0x1402ECu: goto label_1402ec;
            case 0x1402F0u: goto label_1402f0;
            case 0x1402F4u: goto label_1402f4;
            case 0x1402F8u: goto label_1402f8;
            case 0x1402FCu: goto label_1402fc;
            case 0x140300u: goto label_140300;
            case 0x140304u: goto label_140304;
            case 0x140308u: goto label_140308;
            case 0x14030Cu: goto label_14030c;
            case 0x140310u: goto label_140310;
            case 0x140314u: goto label_140314;
            case 0x140318u: goto label_140318;
            case 0x14031Cu: goto label_14031c;
            case 0x140320u: goto label_140320;
            case 0x140324u: goto label_140324;
            case 0x140328u: goto label_140328;
            case 0x14032Cu: goto label_14032c;
            case 0x140330u: goto label_140330;
            case 0x140334u: goto label_140334;
            case 0x140338u: goto label_140338;
            case 0x14033Cu: goto label_14033c;
            case 0x140340u: goto label_140340;
            case 0x140344u: goto label_140344;
            case 0x140348u: goto label_140348;
            case 0x14034Cu: goto label_14034c;
            case 0x140350u: goto label_140350;
            case 0x140354u: goto label_140354;
            case 0x140358u: goto label_140358;
            case 0x14035Cu: goto label_14035c;
            case 0x140360u: goto label_140360;
            case 0x140364u: goto label_140364;
            case 0x140368u: goto label_140368;
            case 0x14036Cu: goto label_14036c;
            case 0x140370u: goto label_140370;
            case 0x140374u: goto label_140374;
            case 0x140378u: goto label_140378;
            case 0x14037Cu: goto label_14037c;
            case 0x140380u: goto label_140380;
            case 0x140384u: goto label_140384;
            case 0x140388u: goto label_140388;
            case 0x14038Cu: goto label_14038c;
            case 0x140390u: goto label_140390;
            case 0x140394u: goto label_140394;
            case 0x140398u: goto label_140398;
            case 0x14039Cu: goto label_14039c;
            case 0x1403A0u: goto label_1403a0;
            case 0x1403A4u: goto label_1403a4;
            case 0x1403A8u: goto label_1403a8;
            case 0x1403ACu: goto label_1403ac;
            case 0x1403B0u: goto label_1403b0;
            case 0x1403B4u: goto label_1403b4;
            case 0x1403B8u: goto label_1403b8;
            case 0x1403BCu: goto label_1403bc;
            case 0x1403C0u: goto label_1403c0;
            case 0x1403C4u: goto label_1403c4;
            case 0x1403C8u: goto label_1403c8;
            case 0x1403CCu: goto label_1403cc;
            case 0x1403D0u: goto label_1403d0;
            case 0x1403D4u: goto label_1403d4;
            case 0x1403D8u: goto label_1403d8;
            case 0x1403DCu: goto label_1403dc;
            case 0x1403E0u: goto label_1403e0;
            case 0x1403E4u: goto label_1403e4;
            case 0x1403E8u: goto label_1403e8;
            case 0x1403ECu: goto label_1403ec;
            case 0x1403F0u: goto label_1403f0;
            case 0x1403F4u: goto label_1403f4;
            case 0x1403F8u: goto label_1403f8;
            case 0x1403FCu: goto label_1403fc;
            case 0x140400u: goto label_140400;
            case 0x140404u: goto label_140404;
            case 0x140408u: goto label_140408;
            case 0x14040Cu: goto label_14040c;
            case 0x140410u: goto label_140410;
            case 0x140414u: goto label_140414;
            case 0x140418u: goto label_140418;
            case 0x14041Cu: goto label_14041c;
            case 0x140420u: goto label_140420;
            case 0x140424u: goto label_140424;
            case 0x140428u: goto label_140428;
            case 0x14042Cu: goto label_14042c;
            case 0x140430u: goto label_140430;
            case 0x140434u: goto label_140434;
            case 0x140438u: goto label_140438;
            case 0x14043Cu: goto label_14043c;
            case 0x140440u: goto label_140440;
            case 0x140444u: goto label_140444;
            case 0x140448u: goto label_140448;
            case 0x14044Cu: goto label_14044c;
            case 0x140450u: goto label_140450;
            case 0x140454u: goto label_140454;
            case 0x140458u: goto label_140458;
            case 0x14045Cu: goto label_14045c;
            case 0x140460u: goto label_140460;
            case 0x140464u: goto label_140464;
            case 0x140468u: goto label_140468;
            case 0x14046Cu: goto label_14046c;
            case 0x140470u: goto label_140470;
            case 0x140474u: goto label_140474;
            case 0x140478u: goto label_140478;
            case 0x14047Cu: goto label_14047c;
            case 0x140480u: goto label_140480;
            case 0x140484u: goto label_140484;
            case 0x140488u: goto label_140488;
            case 0x14048Cu: goto label_14048c;
            case 0x140490u: goto label_140490;
            case 0x140494u: goto label_140494;
            case 0x140498u: goto label_140498;
            case 0x14049Cu: goto label_14049c;
            case 0x1404A0u: goto label_1404a0;
            case 0x1404A4u: goto label_1404a4;
            case 0x1404A8u: goto label_1404a8;
            case 0x1404ACu: goto label_1404ac;
            case 0x1404B0u: goto label_1404b0;
            case 0x1404B4u: goto label_1404b4;
            case 0x1404B8u: goto label_1404b8;
            case 0x1404BCu: goto label_1404bc;
            case 0x1404C0u: goto label_1404c0;
            case 0x1404C4u: goto label_1404c4;
            case 0x1404C8u: goto label_1404c8;
            case 0x1404CCu: goto label_1404cc;
            case 0x1404D0u: goto label_1404d0;
            case 0x1404D4u: goto label_1404d4;
            case 0x1404D8u: goto label_1404d8;
            case 0x1404DCu: goto label_1404dc;
            case 0x1404E0u: goto label_1404e0;
            case 0x1404E4u: goto label_1404e4;
            case 0x1404E8u: goto label_1404e8;
            case 0x1404ECu: goto label_1404ec;
            case 0x1404F0u: goto label_1404f0;
            case 0x1404F4u: goto label_1404f4;
            case 0x1404F8u: goto label_1404f8;
            case 0x1404FCu: goto label_1404fc;
            case 0x140500u: goto label_140500;
            case 0x140504u: goto label_140504;
            case 0x140508u: goto label_140508;
            case 0x14050Cu: goto label_14050c;
            case 0x140510u: goto label_140510;
            case 0x140514u: goto label_140514;
            case 0x140518u: goto label_140518;
            case 0x14051Cu: goto label_14051c;
            case 0x140520u: goto label_140520;
            case 0x140524u: goto label_140524;
            case 0x140528u: goto label_140528;
            case 0x14052Cu: goto label_14052c;
            case 0x140530u: goto label_140530;
            case 0x140534u: goto label_140534;
            case 0x140538u: goto label_140538;
            case 0x14053Cu: goto label_14053c;
            case 0x140540u: goto label_140540;
            case 0x140544u: goto label_140544;
            case 0x140548u: goto label_140548;
            case 0x14054Cu: goto label_14054c;
            case 0x140550u: goto label_140550;
            case 0x140554u: goto label_140554;
            case 0x140558u: goto label_140558;
            case 0x14055Cu: goto label_14055c;
            case 0x140560u: goto label_140560;
            case 0x140564u: goto label_140564;
            case 0x140568u: goto label_140568;
            case 0x14056Cu: goto label_14056c;
            case 0x140570u: goto label_140570;
            case 0x140574u: goto label_140574;
            case 0x140578u: goto label_140578;
            case 0x14057Cu: goto label_14057c;
            case 0x140580u: goto label_140580;
            case 0x140584u: goto label_140584;
            case 0x140588u: goto label_140588;
            case 0x14058Cu: goto label_14058c;
            case 0x140590u: goto label_140590;
            case 0x140594u: goto label_140594;
            case 0x140598u: goto label_140598;
            case 0x14059Cu: goto label_14059c;
            case 0x1405A0u: goto label_1405a0;
            case 0x1405A4u: goto label_1405a4;
            case 0x1405A8u: goto label_1405a8;
            case 0x1405ACu: goto label_1405ac;
            case 0x1405B0u: goto label_1405b0;
            case 0x1405B4u: goto label_1405b4;
            case 0x1405B8u: goto label_1405b8;
            case 0x1405BCu: goto label_1405bc;
            case 0x1405C0u: goto label_1405c0;
            case 0x1405C4u: goto label_1405c4;
            case 0x1405C8u: goto label_1405c8;
            case 0x1405CCu: goto label_1405cc;
            case 0x1405D0u: goto label_1405d0;
            case 0x1405D4u: goto label_1405d4;
            case 0x1405D8u: goto label_1405d8;
            case 0x1405DCu: goto label_1405dc;
            case 0x1405E0u: goto label_1405e0;
            case 0x1405E4u: goto label_1405e4;
            case 0x1405E8u: goto label_1405e8;
            case 0x1405ECu: goto label_1405ec;
            case 0x1405F0u: goto label_1405f0;
            case 0x1405F4u: goto label_1405f4;
            case 0x1405F8u: goto label_1405f8;
            case 0x1405FCu: goto label_1405fc;
            case 0x140600u: goto label_140600;
            case 0x140604u: goto label_140604;
            case 0x140608u: goto label_140608;
            case 0x14060Cu: goto label_14060c;
            case 0x140610u: goto label_140610;
            case 0x140614u: goto label_140614;
            case 0x140618u: goto label_140618;
            case 0x14061Cu: goto label_14061c;
            case 0x140620u: goto label_140620;
            case 0x140624u: goto label_140624;
            case 0x140628u: goto label_140628;
            case 0x14062Cu: goto label_14062c;
            case 0x140630u: goto label_140630;
            case 0x140634u: goto label_140634;
            case 0x140638u: goto label_140638;
            case 0x14063Cu: goto label_14063c;
            case 0x140640u: goto label_140640;
            case 0x140644u: goto label_140644;
            case 0x140648u: goto label_140648;
            case 0x14064Cu: goto label_14064c;
            case 0x140650u: goto label_140650;
            case 0x140654u: goto label_140654;
            case 0x140658u: goto label_140658;
            case 0x14065Cu: goto label_14065c;
            case 0x140660u: goto label_140660;
            case 0x140664u: goto label_140664;
            case 0x140668u: goto label_140668;
            case 0x14066Cu: goto label_14066c;
            case 0x140670u: goto label_140670;
            case 0x140674u: goto label_140674;
            case 0x140678u: goto label_140678;
            case 0x14067Cu: goto label_14067c;
            case 0x140680u: goto label_140680;
            case 0x140684u: goto label_140684;
            case 0x140688u: goto label_140688;
            case 0x14068Cu: goto label_14068c;
            case 0x140690u: goto label_140690;
            case 0x140694u: goto label_140694;
            case 0x140698u: goto label_140698;
            case 0x14069Cu: goto label_14069c;
            case 0x1406A0u: goto label_1406a0;
            case 0x1406A4u: goto label_1406a4;
            case 0x1406A8u: goto label_1406a8;
            case 0x1406ACu: goto label_1406ac;
            case 0x1406B0u: goto label_1406b0;
            case 0x1406B4u: goto label_1406b4;
            case 0x1406B8u: goto label_1406b8;
            case 0x1406BCu: goto label_1406bc;
            case 0x1406C0u: goto label_1406c0;
            case 0x1406C4u: goto label_1406c4;
            case 0x1406C8u: goto label_1406c8;
            case 0x1406CCu: goto label_1406cc;
            case 0x1406D0u: goto label_1406d0;
            case 0x1406D4u: goto label_1406d4;
            case 0x1406D8u: goto label_1406d8;
            case 0x1406DCu: goto label_1406dc;
            case 0x1406E0u: goto label_1406e0;
            case 0x1406E4u: goto label_1406e4;
            case 0x1406E8u: goto label_1406e8;
            case 0x1406ECu: goto label_1406ec;
            case 0x1406F0u: goto label_1406f0;
            case 0x1406F4u: goto label_1406f4;
            case 0x1406F8u: goto label_1406f8;
            case 0x1406FCu: goto label_1406fc;
            case 0x140700u: goto label_140700;
            case 0x140704u: goto label_140704;
            case 0x140708u: goto label_140708;
            case 0x14070Cu: goto label_14070c;
            case 0x140710u: goto label_140710;
            case 0x140714u: goto label_140714;
            case 0x140718u: goto label_140718;
            case 0x14071Cu: goto label_14071c;
            case 0x140720u: goto label_140720;
            case 0x140724u: goto label_140724;
            case 0x140728u: goto label_140728;
            case 0x14072Cu: goto label_14072c;
            case 0x140730u: goto label_140730;
            case 0x140734u: goto label_140734;
            case 0x140738u: goto label_140738;
            case 0x14073Cu: goto label_14073c;
            case 0x140740u: goto label_140740;
            case 0x140744u: goto label_140744;
            case 0x140748u: goto label_140748;
            case 0x14074Cu: goto label_14074c;
            case 0x140750u: goto label_140750;
            case 0x140754u: goto label_140754;
            case 0x140758u: goto label_140758;
            case 0x14075Cu: goto label_14075c;
            case 0x140760u: goto label_140760;
            case 0x140764u: goto label_140764;
            case 0x140768u: goto label_140768;
            case 0x14076Cu: goto label_14076c;
            case 0x140770u: goto label_140770;
            case 0x140774u: goto label_140774;
            case 0x140778u: goto label_140778;
            case 0x14077Cu: goto label_14077c;
            case 0x140780u: goto label_140780;
            case 0x140784u: goto label_140784;
            case 0x140788u: goto label_140788;
            case 0x14078Cu: goto label_14078c;
            case 0x140790u: goto label_140790;
            case 0x140794u: goto label_140794;
            case 0x140798u: goto label_140798;
            case 0x14079Cu: goto label_14079c;
            case 0x1407A0u: goto label_1407a0;
            case 0x1407A4u: goto label_1407a4;
            case 0x1407A8u: goto label_1407a8;
            case 0x1407ACu: goto label_1407ac;
            case 0x1407B0u: goto label_1407b0;
            case 0x1407B4u: goto label_1407b4;
            case 0x1407B8u: goto label_1407b8;
            case 0x1407BCu: goto label_1407bc;
            case 0x1407C0u: goto label_1407c0;
            case 0x1407C4u: goto label_1407c4;
            case 0x1407C8u: goto label_1407c8;
            case 0x1407CCu: goto label_1407cc;
            case 0x1407D0u: goto label_1407d0;
            case 0x1407D4u: goto label_1407d4;
            case 0x1407D8u: goto label_1407d8;
            case 0x1407DCu: goto label_1407dc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1405D0u; }
            if (ctx->pc != 0x1405D0u) { return; }
        }
    }
    ctx->pc = 0x1405D0u;
label_1405d0:
    // 0x1405d0: 0x1000003b
label_1405d4:
    if (ctx->pc == 0x1405D4u) {
        ctx->pc = 0x1405D4u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1405D8u;
        goto label_1405d8;
    }
    ctx->pc = 0x1405D0u;
    {
        const bool branch_taken_0x1405d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1405D4u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1405d0) {
            ctx->pc = 0x1406C0u;
            goto label_1406c0;
        }
    }
    ctx->pc = 0x1405D8u;
label_1405d8:
    // 0x1405d8: 0x8e220004
    ctx->pc = 0x1405d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1405dc:
    // 0x1405dc: 0x58400038
label_1405e0:
    if (ctx->pc == 0x1405E0u) {
        ctx->pc = 0x1405E0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1405E4u;
        goto label_1405e4;
    }
    ctx->pc = 0x1405DCu;
    {
        const bool branch_taken_0x1405dc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1405dc) {
            ctx->pc = 0x1405E0u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x1406C0u;
            goto label_1406c0;
        }
    }
    ctx->pc = 0x1405E4u;
label_1405e4:
    // 0x1405e4: 0x8e220000
    ctx->pc = 0x1405e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1405e8:
    // 0x1405e8: 0x50400035
label_1405ec:
    if (ctx->pc == 0x1405ECu) {
        ctx->pc = 0x1405ECu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1405F0u;
        goto label_1405f0;
    }
    ctx->pc = 0x1405E8u;
    {
        const bool branch_taken_0x1405e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1405e8) {
            ctx->pc = 0x1405ECu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x1406C0u;
            goto label_1406c0;
        }
    }
    ctx->pc = 0x1405F0u;
label_1405f0:
    // 0x1405f0: 0xc04fc96
label_1405f4:
    if (ctx->pc == 0x1405F4u) {
        ctx->pc = 0x1405F8u;
        goto label_1405f8;
    }
    ctx->pc = 0x1405F0u;
    SET_GPR_U32(ctx, 31, 0x1405F8u);
    ctx->pc = 0x13F258u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F258_0x13f258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1405F8u; }
    }
    if (ctx->pc != 0x1405F8u) { return; }
    ctx->pc = 0x1405F8u;
label_1405f8:
    // 0x1405f8: 0x122880
    ctx->pc = 0x1405f8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 18), 2));
label_1405fc:
    // 0x1405fc: 0x26080008
    ctx->pc = 0x1405fcu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 8));
label_140600:
    // 0x140600: 0x82020005
    ctx->pc = 0x140600u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_140604:
    // 0x140604: 0xa81821
    ctx->pc = 0x140604u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_140608:
    // 0x140608: 0x24040001
    ctx->pc = 0x140608u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_14060c:
    // 0x14060c: 0x1444000e
label_140610:
    if (ctx->pc == 0x140610u) {
        ctx->pc = 0x140610u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->pc = 0x140614u;
        goto label_140614;
    }
    ctx->pc = 0x14060Cu;
    {
        const bool branch_taken_0x14060c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x140610u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 16)));
        if (branch_taken_0x14060c) {
            ctx->pc = 0x140648u;
            goto label_140648;
        }
    }
    ctx->pc = 0x140614u;
label_140614:
    // 0x140614: 0x50c0000d
label_140618:
    if (ctx->pc == 0x140618u) {
        ctx->pc = 0x140618u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x14061Cu;
        goto label_14061c;
    }
    ctx->pc = 0x140614u;
    {
        const bool branch_taken_0x140614 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x140614) {
            ctx->pc = 0x140618u;
            SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->pc = 0x14064Cu;
            goto label_14064c;
        }
    }
    ctx->pc = 0x14061Cu;
label_14061c:
    // 0x14061c: 0x8e240000
    ctx->pc = 0x14061cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_140620:
    // 0x140620: 0x8e270004
    ctx->pc = 0x140620u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_140624:
    // 0x140624: 0x8cc30008
    ctx->pc = 0x140624u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_140628:
    // 0x140628: 0x871021
    ctx->pc = 0x140628u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_14062c:
    // 0x14062c: 0x54430007
label_140630:
    if (ctx->pc == 0x140630u) {
        ctx->pc = 0x140630u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x140634u;
        goto label_140634;
    }
    ctx->pc = 0x14062Cu;
    {
        const bool branch_taken_0x14062c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x14062c) {
            ctx->pc = 0x140630u;
            SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->pc = 0x14064Cu;
            goto label_14064c;
        }
    }
    ctx->pc = 0x140634u;
label_140634:
    // 0x140634: 0x8cc2000c
    ctx->pc = 0x140634u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_140638:
    // 0x140638: 0xacc40008
    ctx->pc = 0x140638u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_14063c:
    // 0x14063c: 0x471021
    ctx->pc = 0x14063cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_140640:
    // 0x140640: 0x10000018
label_140644:
    if (ctx->pc == 0x140644u) {
        ctx->pc = 0x140644u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x140648u;
        goto label_140648;
    }
    ctx->pc = 0x140640u;
    {
        const bool branch_taken_0x140640 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x140644u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x140640) {
            ctx->pc = 0x1406A4u;
            goto label_1406a4;
        }
    }
    ctx->pc = 0x140648u;
label_140648:
    // 0x140648: 0x8e060014
    ctx->pc = 0x140648u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_14064c:
    // 0x14064c: 0x54c0000a
label_140650:
    if (ctx->pc == 0x140650u) {
        ctx->pc = 0x140650u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->pc = 0x140654u;
        goto label_140654;
    }
    ctx->pc = 0x14064Cu;
    {
        const bool branch_taken_0x14064c = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        if (branch_taken_0x14064c) {
            ctx->pc = 0x140650u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->pc = 0x140678u;
            goto label_140678;
        }
    }
    ctx->pc = 0x140654u;
label_140654:
    // 0x140654: 0x8e020028
    ctx->pc = 0x140654u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_140658:
    // 0x140658: 0x50400013
label_14065c:
    if (ctx->pc == 0x14065Cu) {
        ctx->pc = 0x14065Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x140660u;
        goto label_140660;
    }
    ctx->pc = 0x140658u;
    {
        const bool branch_taken_0x140658 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x140658) {
            ctx->pc = 0x14065Cu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x1406A8u;
            goto label_1406a8;
        }
    }
    ctx->pc = 0x140660u;
label_140660:
    // 0x140660: 0x8e04002c
    ctx->pc = 0x140660u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_140664:
    // 0x140664: 0x40f809
label_140668:
    if (ctx->pc == 0x140668u) {
        ctx->pc = 0x140668u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x14066Cu;
        goto label_14066c;
    }
    ctx->pc = 0x140664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14066Cu);
        ctx->pc = 0x140668u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1401F8u: goto label_1401f8;
            case 0x1401FCu: goto label_1401fc;
            case 0x140200u: goto label_140200;
            case 0x140204u: goto label_140204;
            case 0x140208u: goto label_140208;
            case 0x14020Cu: goto label_14020c;
            case 0x140210u: goto label_140210;
            case 0x140214u: goto label_140214;
            case 0x140218u: goto label_140218;
            case 0x14021Cu: goto label_14021c;
            case 0x140220u: goto label_140220;
            case 0x140224u: goto label_140224;
            case 0x140228u: goto label_140228;
            case 0x14022Cu: goto label_14022c;
            case 0x140230u: goto label_140230;
            case 0x140234u: goto label_140234;
            case 0x140238u: goto label_140238;
            case 0x14023Cu: goto label_14023c;
            case 0x140240u: goto label_140240;
            case 0x140244u: goto label_140244;
            case 0x140248u: goto label_140248;
            case 0x14024Cu: goto label_14024c;
            case 0x140250u: goto label_140250;
            case 0x140254u: goto label_140254;
            case 0x140258u: goto label_140258;
            case 0x14025Cu: goto label_14025c;
            case 0x140260u: goto label_140260;
            case 0x140264u: goto label_140264;
            case 0x140268u: goto label_140268;
            case 0x14026Cu: goto label_14026c;
            case 0x140270u: goto label_140270;
            case 0x140274u: goto label_140274;
            case 0x140278u: goto label_140278;
            case 0x14027Cu: goto label_14027c;
            case 0x140280u: goto label_140280;
            case 0x140284u: goto label_140284;
            case 0x140288u: goto label_140288;
            case 0x14028Cu: goto label_14028c;
            case 0x140290u: goto label_140290;
            case 0x140294u: goto label_140294;
            case 0x140298u: goto label_140298;
            case 0x14029Cu: goto label_14029c;
            case 0x1402A0u: goto label_1402a0;
            case 0x1402A4u: goto label_1402a4;
            case 0x1402A8u: goto label_1402a8;
            case 0x1402ACu: goto label_1402ac;
            case 0x1402B0u: goto label_1402b0;
            case 0x1402B4u: goto label_1402b4;
            case 0x1402B8u: goto label_1402b8;
            case 0x1402BCu: goto label_1402bc;
            case 0x1402C0u: goto label_1402c0;
            case 0x1402C4u: goto label_1402c4;
            case 0x1402C8u: goto label_1402c8;
            case 0x1402CCu: goto label_1402cc;
            case 0x1402D0u: goto label_1402d0;
            case 0x1402D4u: goto label_1402d4;
            case 0x1402D8u: goto label_1402d8;
            case 0x1402DCu: goto label_1402dc;
            case 0x1402E0u: goto label_1402e0;
            case 0x1402E4u: goto label_1402e4;
            case 0x1402E8u: goto label_1402e8;
            case 0x1402ECu: goto label_1402ec;
            case 0x1402F0u: goto label_1402f0;
            case 0x1402F4u: goto label_1402f4;
            case 0x1402F8u: goto label_1402f8;
            case 0x1402FCu: goto label_1402fc;
            case 0x140300u: goto label_140300;
            case 0x140304u: goto label_140304;
            case 0x140308u: goto label_140308;
            case 0x14030Cu: goto label_14030c;
            case 0x140310u: goto label_140310;
            case 0x140314u: goto label_140314;
            case 0x140318u: goto label_140318;
            case 0x14031Cu: goto label_14031c;
            case 0x140320u: goto label_140320;
            case 0x140324u: goto label_140324;
            case 0x140328u: goto label_140328;
            case 0x14032Cu: goto label_14032c;
            case 0x140330u: goto label_140330;
            case 0x140334u: goto label_140334;
            case 0x140338u: goto label_140338;
            case 0x14033Cu: goto label_14033c;
            case 0x140340u: goto label_140340;
            case 0x140344u: goto label_140344;
            case 0x140348u: goto label_140348;
            case 0x14034Cu: goto label_14034c;
            case 0x140350u: goto label_140350;
            case 0x140354u: goto label_140354;
            case 0x140358u: goto label_140358;
            case 0x14035Cu: goto label_14035c;
            case 0x140360u: goto label_140360;
            case 0x140364u: goto label_140364;
            case 0x140368u: goto label_140368;
            case 0x14036Cu: goto label_14036c;
            case 0x140370u: goto label_140370;
            case 0x140374u: goto label_140374;
            case 0x140378u: goto label_140378;
            case 0x14037Cu: goto label_14037c;
            case 0x140380u: goto label_140380;
            case 0x140384u: goto label_140384;
            case 0x140388u: goto label_140388;
            case 0x14038Cu: goto label_14038c;
            case 0x140390u: goto label_140390;
            case 0x140394u: goto label_140394;
            case 0x140398u: goto label_140398;
            case 0x14039Cu: goto label_14039c;
            case 0x1403A0u: goto label_1403a0;
            case 0x1403A4u: goto label_1403a4;
            case 0x1403A8u: goto label_1403a8;
            case 0x1403ACu: goto label_1403ac;
            case 0x1403B0u: goto label_1403b0;
            case 0x1403B4u: goto label_1403b4;
            case 0x1403B8u: goto label_1403b8;
            case 0x1403BCu: goto label_1403bc;
            case 0x1403C0u: goto label_1403c0;
            case 0x1403C4u: goto label_1403c4;
            case 0x1403C8u: goto label_1403c8;
            case 0x1403CCu: goto label_1403cc;
            case 0x1403D0u: goto label_1403d0;
            case 0x1403D4u: goto label_1403d4;
            case 0x1403D8u: goto label_1403d8;
            case 0x1403DCu: goto label_1403dc;
            case 0x1403E0u: goto label_1403e0;
            case 0x1403E4u: goto label_1403e4;
            case 0x1403E8u: goto label_1403e8;
            case 0x1403ECu: goto label_1403ec;
            case 0x1403F0u: goto label_1403f0;
            case 0x1403F4u: goto label_1403f4;
            case 0x1403F8u: goto label_1403f8;
            case 0x1403FCu: goto label_1403fc;
            case 0x140400u: goto label_140400;
            case 0x140404u: goto label_140404;
            case 0x140408u: goto label_140408;
            case 0x14040Cu: goto label_14040c;
            case 0x140410u: goto label_140410;
            case 0x140414u: goto label_140414;
            case 0x140418u: goto label_140418;
            case 0x14041Cu: goto label_14041c;
            case 0x140420u: goto label_140420;
            case 0x140424u: goto label_140424;
            case 0x140428u: goto label_140428;
            case 0x14042Cu: goto label_14042c;
            case 0x140430u: goto label_140430;
            case 0x140434u: goto label_140434;
            case 0x140438u: goto label_140438;
            case 0x14043Cu: goto label_14043c;
            case 0x140440u: goto label_140440;
            case 0x140444u: goto label_140444;
            case 0x140448u: goto label_140448;
            case 0x14044Cu: goto label_14044c;
            case 0x140450u: goto label_140450;
            case 0x140454u: goto label_140454;
            case 0x140458u: goto label_140458;
            case 0x14045Cu: goto label_14045c;
            case 0x140460u: goto label_140460;
            case 0x140464u: goto label_140464;
            case 0x140468u: goto label_140468;
            case 0x14046Cu: goto label_14046c;
            case 0x140470u: goto label_140470;
            case 0x140474u: goto label_140474;
            case 0x140478u: goto label_140478;
            case 0x14047Cu: goto label_14047c;
            case 0x140480u: goto label_140480;
            case 0x140484u: goto label_140484;
            case 0x140488u: goto label_140488;
            case 0x14048Cu: goto label_14048c;
            case 0x140490u: goto label_140490;
            case 0x140494u: goto label_140494;
            case 0x140498u: goto label_140498;
            case 0x14049Cu: goto label_14049c;
            case 0x1404A0u: goto label_1404a0;
            case 0x1404A4u: goto label_1404a4;
            case 0x1404A8u: goto label_1404a8;
            case 0x1404ACu: goto label_1404ac;
            case 0x1404B0u: goto label_1404b0;
            case 0x1404B4u: goto label_1404b4;
            case 0x1404B8u: goto label_1404b8;
            case 0x1404BCu: goto label_1404bc;
            case 0x1404C0u: goto label_1404c0;
            case 0x1404C4u: goto label_1404c4;
            case 0x1404C8u: goto label_1404c8;
            case 0x1404CCu: goto label_1404cc;
            case 0x1404D0u: goto label_1404d0;
            case 0x1404D4u: goto label_1404d4;
            case 0x1404D8u: goto label_1404d8;
            case 0x1404DCu: goto label_1404dc;
            case 0x1404E0u: goto label_1404e0;
            case 0x1404E4u: goto label_1404e4;
            case 0x1404E8u: goto label_1404e8;
            case 0x1404ECu: goto label_1404ec;
            case 0x1404F0u: goto label_1404f0;
            case 0x1404F4u: goto label_1404f4;
            case 0x1404F8u: goto label_1404f8;
            case 0x1404FCu: goto label_1404fc;
            case 0x140500u: goto label_140500;
            case 0x140504u: goto label_140504;
            case 0x140508u: goto label_140508;
            case 0x14050Cu: goto label_14050c;
            case 0x140510u: goto label_140510;
            case 0x140514u: goto label_140514;
            case 0x140518u: goto label_140518;
            case 0x14051Cu: goto label_14051c;
            case 0x140520u: goto label_140520;
            case 0x140524u: goto label_140524;
            case 0x140528u: goto label_140528;
            case 0x14052Cu: goto label_14052c;
            case 0x140530u: goto label_140530;
            case 0x140534u: goto label_140534;
            case 0x140538u: goto label_140538;
            case 0x14053Cu: goto label_14053c;
            case 0x140540u: goto label_140540;
            case 0x140544u: goto label_140544;
            case 0x140548u: goto label_140548;
            case 0x14054Cu: goto label_14054c;
            case 0x140550u: goto label_140550;
            case 0x140554u: goto label_140554;
            case 0x140558u: goto label_140558;
            case 0x14055Cu: goto label_14055c;
            case 0x140560u: goto label_140560;
            case 0x140564u: goto label_140564;
            case 0x140568u: goto label_140568;
            case 0x14056Cu: goto label_14056c;
            case 0x140570u: goto label_140570;
            case 0x140574u: goto label_140574;
            case 0x140578u: goto label_140578;
            case 0x14057Cu: goto label_14057c;
            case 0x140580u: goto label_140580;
            case 0x140584u: goto label_140584;
            case 0x140588u: goto label_140588;
            case 0x14058Cu: goto label_14058c;
            case 0x140590u: goto label_140590;
            case 0x140594u: goto label_140594;
            case 0x140598u: goto label_140598;
            case 0x14059Cu: goto label_14059c;
            case 0x1405A0u: goto label_1405a0;
            case 0x1405A4u: goto label_1405a4;
            case 0x1405A8u: goto label_1405a8;
            case 0x1405ACu: goto label_1405ac;
            case 0x1405B0u: goto label_1405b0;
            case 0x1405B4u: goto label_1405b4;
            case 0x1405B8u: goto label_1405b8;
            case 0x1405BCu: goto label_1405bc;
            case 0x1405C0u: goto label_1405c0;
            case 0x1405C4u: goto label_1405c4;
            case 0x1405C8u: goto label_1405c8;
            case 0x1405CCu: goto label_1405cc;
            case 0x1405D0u: goto label_1405d0;
            case 0x1405D4u: goto label_1405d4;
            case 0x1405D8u: goto label_1405d8;
            case 0x1405DCu: goto label_1405dc;
            case 0x1405E0u: goto label_1405e0;
            case 0x1405E4u: goto label_1405e4;
            case 0x1405E8u: goto label_1405e8;
            case 0x1405ECu: goto label_1405ec;
            case 0x1405F0u: goto label_1405f0;
            case 0x1405F4u: goto label_1405f4;
            case 0x1405F8u: goto label_1405f8;
            case 0x1405FCu: goto label_1405fc;
            case 0x140600u: goto label_140600;
            case 0x140604u: goto label_140604;
            case 0x140608u: goto label_140608;
            case 0x14060Cu: goto label_14060c;
            case 0x140610u: goto label_140610;
            case 0x140614u: goto label_140614;
            case 0x140618u: goto label_140618;
            case 0x14061Cu: goto label_14061c;
            case 0x140620u: goto label_140620;
            case 0x140624u: goto label_140624;
            case 0x140628u: goto label_140628;
            case 0x14062Cu: goto label_14062c;
            case 0x140630u: goto label_140630;
            case 0x140634u: goto label_140634;
            case 0x140638u: goto label_140638;
            case 0x14063Cu: goto label_14063c;
            case 0x140640u: goto label_140640;
            case 0x140644u: goto label_140644;
            case 0x140648u: goto label_140648;
            case 0x14064Cu: goto label_14064c;
            case 0x140650u: goto label_140650;
            case 0x140654u: goto label_140654;
            case 0x140658u: goto label_140658;
            case 0x14065Cu: goto label_14065c;
            case 0x140660u: goto label_140660;
            case 0x140664u: goto label_140664;
            case 0x140668u: goto label_140668;
            case 0x14066Cu: goto label_14066c;
            case 0x140670u: goto label_140670;
            case 0x140674u: goto label_140674;
            case 0x140678u: goto label_140678;
            case 0x14067Cu: goto label_14067c;
            case 0x140680u: goto label_140680;
            case 0x140684u: goto label_140684;
            case 0x140688u: goto label_140688;
            case 0x14068Cu: goto label_14068c;
            case 0x140690u: goto label_140690;
            case 0x140694u: goto label_140694;
            case 0x140698u: goto label_140698;
            case 0x14069Cu: goto label_14069c;
            case 0x1406A0u: goto label_1406a0;
            case 0x1406A4u: goto label_1406a4;
            case 0x1406A8u: goto label_1406a8;
            case 0x1406ACu: goto label_1406ac;
            case 0x1406B0u: goto label_1406b0;
            case 0x1406B4u: goto label_1406b4;
            case 0x1406B8u: goto label_1406b8;
            case 0x1406BCu: goto label_1406bc;
            case 0x1406C0u: goto label_1406c0;
            case 0x1406C4u: goto label_1406c4;
            case 0x1406C8u: goto label_1406c8;
            case 0x1406CCu: goto label_1406cc;
            case 0x1406D0u: goto label_1406d0;
            case 0x1406D4u: goto label_1406d4;
            case 0x1406D8u: goto label_1406d8;
            case 0x1406DCu: goto label_1406dc;
            case 0x1406E0u: goto label_1406e0;
            case 0x1406E4u: goto label_1406e4;
            case 0x1406E8u: goto label_1406e8;
            case 0x1406ECu: goto label_1406ec;
            case 0x1406F0u: goto label_1406f0;
            case 0x1406F4u: goto label_1406f4;
            case 0x1406F8u: goto label_1406f8;
            case 0x1406FCu: goto label_1406fc;
            case 0x140700u: goto label_140700;
            case 0x140704u: goto label_140704;
            case 0x140708u: goto label_140708;
            case 0x14070Cu: goto label_14070c;
            case 0x140710u: goto label_140710;
            case 0x140714u: goto label_140714;
            case 0x140718u: goto label_140718;
            case 0x14071Cu: goto label_14071c;
            case 0x140720u: goto label_140720;
            case 0x140724u: goto label_140724;
            case 0x140728u: goto label_140728;
            case 0x14072Cu: goto label_14072c;
            case 0x140730u: goto label_140730;
            case 0x140734u: goto label_140734;
            case 0x140738u: goto label_140738;
            case 0x14073Cu: goto label_14073c;
            case 0x140740u: goto label_140740;
            case 0x140744u: goto label_140744;
            case 0x140748u: goto label_140748;
            case 0x14074Cu: goto label_14074c;
            case 0x140750u: goto label_140750;
            case 0x140754u: goto label_140754;
            case 0x140758u: goto label_140758;
            case 0x14075Cu: goto label_14075c;
            case 0x140760u: goto label_140760;
            case 0x140764u: goto label_140764;
            case 0x140768u: goto label_140768;
            case 0x14076Cu: goto label_14076c;
            case 0x140770u: goto label_140770;
            case 0x140774u: goto label_140774;
            case 0x140778u: goto label_140778;
            case 0x14077Cu: goto label_14077c;
            case 0x140780u: goto label_140780;
            case 0x140784u: goto label_140784;
            case 0x140788u: goto label_140788;
            case 0x14078Cu: goto label_14078c;
            case 0x140790u: goto label_140790;
            case 0x140794u: goto label_140794;
            case 0x140798u: goto label_140798;
            case 0x14079Cu: goto label_14079c;
            case 0x1407A0u: goto label_1407a0;
            case 0x1407A4u: goto label_1407a4;
            case 0x1407A8u: goto label_1407a8;
            case 0x1407ACu: goto label_1407ac;
            case 0x1407B0u: goto label_1407b0;
            case 0x1407B4u: goto label_1407b4;
            case 0x1407B8u: goto label_1407b8;
            case 0x1407BCu: goto label_1407bc;
            case 0x1407C0u: goto label_1407c0;
            case 0x1407C4u: goto label_1407c4;
            case 0x1407C8u: goto label_1407c8;
            case 0x1407CCu: goto label_1407cc;
            case 0x1407D0u: goto label_1407d0;
            case 0x1407D4u: goto label_1407d4;
            case 0x1407D8u: goto label_1407d8;
            case 0x1407DCu: goto label_1407dc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x14066Cu; }
            if (ctx->pc != 0x14066Cu) { return; }
        }
    }
    ctx->pc = 0x14066Cu;
label_14066c:
    // 0x14066c: 0x1000000e
label_140670:
    if (ctx->pc == 0x140670u) {
        ctx->pc = 0x140670u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x140674u;
        goto label_140674;
    }
    ctx->pc = 0x14066Cu;
    {
        const bool branch_taken_0x14066c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x140670u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x14066c) {
            ctx->pc = 0x1406A8u;
            goto label_1406a8;
        }
    }
    ctx->pc = 0x140674u;
label_140674:
    // 0x140674: 0x0
    ctx->pc = 0x140674u;
    // NOP
label_140678:
    // 0x140678: 0x24a30010
    ctx->pc = 0x140678u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 16));
label_14067c:
    // 0x14067c: 0x1031821
    ctx->pc = 0x14067cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_140680:
    // 0x140680: 0x6a240007
    ctx->pc = 0x140680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
label_140684:
    // 0x140684: 0x6e240000
    ctx->pc = 0x140684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
label_140688:
    // 0x140688: 0xb0c4000f
    ctx->pc = 0x140688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_14068c:
    // 0x14068c: 0xb4c40008
    ctx->pc = 0x14068cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_140690:
    // 0x140690: 0xae020014
    ctx->pc = 0x140690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_140694:
    // 0x140694: 0xacc00000
    ctx->pc = 0x140694u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_140698:
    // 0x140698: 0x8c620000
    ctx->pc = 0x140698u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14069c:
    // 0x14069c: 0xacc20000
    ctx->pc = 0x14069cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1406a0:
    // 0x1406a0: 0xac660000
    ctx->pc = 0x1406a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_1406a4:
    // 0x1406a4: 0xdfb00000
    ctx->pc = 0x1406a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1406a8:
    // 0x1406a8: 0xdfb10008
    ctx->pc = 0x1406a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1406ac:
    // 0x1406ac: 0xdfb20010
    ctx->pc = 0x1406acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1406b0:
    // 0x1406b0: 0xdfbf0018
    ctx->pc = 0x1406b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1406b4:
    // 0x1406b4: 0x804fc9c
label_1406b8:
    if (ctx->pc == 0x1406B8u) {
        ctx->pc = 0x1406B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1406BCu;
        goto label_1406bc;
    }
    ctx->pc = 0x1406B4u;
    ctx->pc = 0x1406B8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x13F270u;
    sub_0013F270_0x13f270(rdram, ctx, runtime); return;
    ctx->pc = 0x1406BCu;
label_1406bc:
    // 0x1406bc: 0x0
    ctx->pc = 0x1406bcu;
    // NOP
label_1406c0:
    // 0x1406c0: 0xdfb10008
    ctx->pc = 0x1406c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1406c4:
    // 0x1406c4: 0xdfb20010
    ctx->pc = 0x1406c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1406c8:
    // 0x1406c8: 0xdfbf0018
    ctx->pc = 0x1406c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1406cc:
    // 0x1406cc: 0x3e00008
label_1406d0:
    if (ctx->pc == 0x1406D0u) {
        ctx->pc = 0x1406D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1406D4u;
        goto label_1406d4;
    }
    ctx->pc = 0x1406CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1406D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1401F8u: goto label_1401f8;
            case 0x1401FCu: goto label_1401fc;
            case 0x140200u: goto label_140200;
            case 0x140204u: goto label_140204;
            case 0x140208u: goto label_140208;
            case 0x14020Cu: goto label_14020c;
            case 0x140210u: goto label_140210;
            case 0x140214u: goto label_140214;
            case 0x140218u: goto label_140218;
            case 0x14021Cu: goto label_14021c;
            case 0x140220u: goto label_140220;
            case 0x140224u: goto label_140224;
            case 0x140228u: goto label_140228;
            case 0x14022Cu: goto label_14022c;
            case 0x140230u: goto label_140230;
            case 0x140234u: goto label_140234;
            case 0x140238u: goto label_140238;
            case 0x14023Cu: goto label_14023c;
            case 0x140240u: goto label_140240;
            case 0x140244u: goto label_140244;
            case 0x140248u: goto label_140248;
            case 0x14024Cu: goto label_14024c;
            case 0x140250u: goto label_140250;
            case 0x140254u: goto label_140254;
            case 0x140258u: goto label_140258;
            case 0x14025Cu: goto label_14025c;
            case 0x140260u: goto label_140260;
            case 0x140264u: goto label_140264;
            case 0x140268u: goto label_140268;
            case 0x14026Cu: goto label_14026c;
            case 0x140270u: goto label_140270;
            case 0x140274u: goto label_140274;
            case 0x140278u: goto label_140278;
            case 0x14027Cu: goto label_14027c;
            case 0x140280u: goto label_140280;
            case 0x140284u: goto label_140284;
            case 0x140288u: goto label_140288;
            case 0x14028Cu: goto label_14028c;
            case 0x140290u: goto label_140290;
            case 0x140294u: goto label_140294;
            case 0x140298u: goto label_140298;
            case 0x14029Cu: goto label_14029c;
            case 0x1402A0u: goto label_1402a0;
            case 0x1402A4u: goto label_1402a4;
            case 0x1402A8u: goto label_1402a8;
            case 0x1402ACu: goto label_1402ac;
            case 0x1402B0u: goto label_1402b0;
            case 0x1402B4u: goto label_1402b4;
            case 0x1402B8u: goto label_1402b8;
            case 0x1402BCu: goto label_1402bc;
            case 0x1402C0u: goto label_1402c0;
            case 0x1402C4u: goto label_1402c4;
            case 0x1402C8u: goto label_1402c8;
            case 0x1402CCu: goto label_1402cc;
            case 0x1402D0u: goto label_1402d0;
            case 0x1402D4u: goto label_1402d4;
            case 0x1402D8u: goto label_1402d8;
            case 0x1402DCu: goto label_1402dc;
            case 0x1402E0u: goto label_1402e0;
            case 0x1402E4u: goto label_1402e4;
            case 0x1402E8u: goto label_1402e8;
            case 0x1402ECu: goto label_1402ec;
            case 0x1402F0u: goto label_1402f0;
            case 0x1402F4u: goto label_1402f4;
            case 0x1402F8u: goto label_1402f8;
            case 0x1402FCu: goto label_1402fc;
            case 0x140300u: goto label_140300;
            case 0x140304u: goto label_140304;
            case 0x140308u: goto label_140308;
            case 0x14030Cu: goto label_14030c;
            case 0x140310u: goto label_140310;
            case 0x140314u: goto label_140314;
            case 0x140318u: goto label_140318;
            case 0x14031Cu: goto label_14031c;
            case 0x140320u: goto label_140320;
            case 0x140324u: goto label_140324;
            case 0x140328u: goto label_140328;
            case 0x14032Cu: goto label_14032c;
            case 0x140330u: goto label_140330;
            case 0x140334u: goto label_140334;
            case 0x140338u: goto label_140338;
            case 0x14033Cu: goto label_14033c;
            case 0x140340u: goto label_140340;
            case 0x140344u: goto label_140344;
            case 0x140348u: goto label_140348;
            case 0x14034Cu: goto label_14034c;
            case 0x140350u: goto label_140350;
            case 0x140354u: goto label_140354;
            case 0x140358u: goto label_140358;
            case 0x14035Cu: goto label_14035c;
            case 0x140360u: goto label_140360;
            case 0x140364u: goto label_140364;
            case 0x140368u: goto label_140368;
            case 0x14036Cu: goto label_14036c;
            case 0x140370u: goto label_140370;
            case 0x140374u: goto label_140374;
            case 0x140378u: goto label_140378;
            case 0x14037Cu: goto label_14037c;
            case 0x140380u: goto label_140380;
            case 0x140384u: goto label_140384;
            case 0x140388u: goto label_140388;
            case 0x14038Cu: goto label_14038c;
            case 0x140390u: goto label_140390;
            case 0x140394u: goto label_140394;
            case 0x140398u: goto label_140398;
            case 0x14039Cu: goto label_14039c;
            case 0x1403A0u: goto label_1403a0;
            case 0x1403A4u: goto label_1403a4;
            case 0x1403A8u: goto label_1403a8;
            case 0x1403ACu: goto label_1403ac;
            case 0x1403B0u: goto label_1403b0;
            case 0x1403B4u: goto label_1403b4;
            case 0x1403B8u: goto label_1403b8;
            case 0x1403BCu: goto label_1403bc;
            case 0x1403C0u: goto label_1403c0;
            case 0x1403C4u: goto label_1403c4;
            case 0x1403C8u: goto label_1403c8;
            case 0x1403CCu: goto label_1403cc;
            case 0x1403D0u: goto label_1403d0;
            case 0x1403D4u: goto label_1403d4;
            case 0x1403D8u: goto label_1403d8;
            case 0x1403DCu: goto label_1403dc;
            case 0x1403E0u: goto label_1403e0;
            case 0x1403E4u: goto label_1403e4;
            case 0x1403E8u: goto label_1403e8;
            case 0x1403ECu: goto label_1403ec;
            case 0x1403F0u: goto label_1403f0;
            case 0x1403F4u: goto label_1403f4;
            case 0x1403F8u: goto label_1403f8;
            case 0x1403FCu: goto label_1403fc;
            case 0x140400u: goto label_140400;
            case 0x140404u: goto label_140404;
            case 0x140408u: goto label_140408;
            case 0x14040Cu: goto label_14040c;
            case 0x140410u: goto label_140410;
            case 0x140414u: goto label_140414;
            case 0x140418u: goto label_140418;
            case 0x14041Cu: goto label_14041c;
            case 0x140420u: goto label_140420;
            case 0x140424u: goto label_140424;
            case 0x140428u: goto label_140428;
            case 0x14042Cu: goto label_14042c;
            case 0x140430u: goto label_140430;
            case 0x140434u: goto label_140434;
            case 0x140438u: goto label_140438;
            case 0x14043Cu: goto label_14043c;
            case 0x140440u: goto label_140440;
            case 0x140444u: goto label_140444;
            case 0x140448u: goto label_140448;
            case 0x14044Cu: goto label_14044c;
            case 0x140450u: goto label_140450;
            case 0x140454u: goto label_140454;
            case 0x140458u: goto label_140458;
            case 0x14045Cu: goto label_14045c;
            case 0x140460u: goto label_140460;
            case 0x140464u: goto label_140464;
            case 0x140468u: goto label_140468;
            case 0x14046Cu: goto label_14046c;
            case 0x140470u: goto label_140470;
            case 0x140474u: goto label_140474;
            case 0x140478u: goto label_140478;
            case 0x14047Cu: goto label_14047c;
            case 0x140480u: goto label_140480;
            case 0x140484u: goto label_140484;
            case 0x140488u: goto label_140488;
            case 0x14048Cu: goto label_14048c;
            case 0x140490u: goto label_140490;
            case 0x140494u: goto label_140494;
            case 0x140498u: goto label_140498;
            case 0x14049Cu: goto label_14049c;
            case 0x1404A0u: goto label_1404a0;
            case 0x1404A4u: goto label_1404a4;
            case 0x1404A8u: goto label_1404a8;
            case 0x1404ACu: goto label_1404ac;
            case 0x1404B0u: goto label_1404b0;
            case 0x1404B4u: goto label_1404b4;
            case 0x1404B8u: goto label_1404b8;
            case 0x1404BCu: goto label_1404bc;
            case 0x1404C0u: goto label_1404c0;
            case 0x1404C4u: goto label_1404c4;
            case 0x1404C8u: goto label_1404c8;
            case 0x1404CCu: goto label_1404cc;
            case 0x1404D0u: goto label_1404d0;
            case 0x1404D4u: goto label_1404d4;
            case 0x1404D8u: goto label_1404d8;
            case 0x1404DCu: goto label_1404dc;
            case 0x1404E0u: goto label_1404e0;
            case 0x1404E4u: goto label_1404e4;
            case 0x1404E8u: goto label_1404e8;
            case 0x1404ECu: goto label_1404ec;
            case 0x1404F0u: goto label_1404f0;
            case 0x1404F4u: goto label_1404f4;
            case 0x1404F8u: goto label_1404f8;
            case 0x1404FCu: goto label_1404fc;
            case 0x140500u: goto label_140500;
            case 0x140504u: goto label_140504;
            case 0x140508u: goto label_140508;
            case 0x14050Cu: goto label_14050c;
            case 0x140510u: goto label_140510;
            case 0x140514u: goto label_140514;
            case 0x140518u: goto label_140518;
            case 0x14051Cu: goto label_14051c;
            case 0x140520u: goto label_140520;
            case 0x140524u: goto label_140524;
            case 0x140528u: goto label_140528;
            case 0x14052Cu: goto label_14052c;
            case 0x140530u: goto label_140530;
            case 0x140534u: goto label_140534;
            case 0x140538u: goto label_140538;
            case 0x14053Cu: goto label_14053c;
            case 0x140540u: goto label_140540;
            case 0x140544u: goto label_140544;
            case 0x140548u: goto label_140548;
            case 0x14054Cu: goto label_14054c;
            case 0x140550u: goto label_140550;
            case 0x140554u: goto label_140554;
            case 0x140558u: goto label_140558;
            case 0x14055Cu: goto label_14055c;
            case 0x140560u: goto label_140560;
            case 0x140564u: goto label_140564;
            case 0x140568u: goto label_140568;
            case 0x14056Cu: goto label_14056c;
            case 0x140570u: goto label_140570;
            case 0x140574u: goto label_140574;
            case 0x140578u: goto label_140578;
            case 0x14057Cu: goto label_14057c;
            case 0x140580u: goto label_140580;
            case 0x140584u: goto label_140584;
            case 0x140588u: goto label_140588;
            case 0x14058Cu: goto label_14058c;
            case 0x140590u: goto label_140590;
            case 0x140594u: goto label_140594;
            case 0x140598u: goto label_140598;
            case 0x14059Cu: goto label_14059c;
            case 0x1405A0u: goto label_1405a0;
            case 0x1405A4u: goto label_1405a4;
            case 0x1405A8u: goto label_1405a8;
            case 0x1405ACu: goto label_1405ac;
            case 0x1405B0u: goto label_1405b0;
            case 0x1405B4u: goto label_1405b4;
            case 0x1405B8u: goto label_1405b8;
            case 0x1405BCu: goto label_1405bc;
            case 0x1405C0u: goto label_1405c0;
            case 0x1405C4u: goto label_1405c4;
            case 0x1405C8u: goto label_1405c8;
            case 0x1405CCu: goto label_1405cc;
            case 0x1405D0u: goto label_1405d0;
            case 0x1405D4u: goto label_1405d4;
            case 0x1405D8u: goto label_1405d8;
            case 0x1405DCu: goto label_1405dc;
            case 0x1405E0u: goto label_1405e0;
            case 0x1405E4u: goto label_1405e4;
            case 0x1405E8u: goto label_1405e8;
            case 0x1405ECu: goto label_1405ec;
            case 0x1405F0u: goto label_1405f0;
            case 0x1405F4u: goto label_1405f4;
            case 0x1405F8u: goto label_1405f8;
            case 0x1405FCu: goto label_1405fc;
            case 0x140600u: goto label_140600;
            case 0x140604u: goto label_140604;
            case 0x140608u: goto label_140608;
            case 0x14060Cu: goto label_14060c;
            case 0x140610u: goto label_140610;
            case 0x140614u: goto label_140614;
            case 0x140618u: goto label_140618;
            case 0x14061Cu: goto label_14061c;
            case 0x140620u: goto label_140620;
            case 0x140624u: goto label_140624;
            case 0x140628u: goto label_140628;
            case 0x14062Cu: goto label_14062c;
            case 0x140630u: goto label_140630;
            case 0x140634u: goto label_140634;
            case 0x140638u: goto label_140638;
            case 0x14063Cu: goto label_14063c;
            case 0x140640u: goto label_140640;
            case 0x140644u: goto label_140644;
            case 0x140648u: goto label_140648;
            case 0x14064Cu: goto label_14064c;
            case 0x140650u: goto label_140650;
            case 0x140654u: goto label_140654;
            case 0x140658u: goto label_140658;
            case 0x14065Cu: goto label_14065c;
            case 0x140660u: goto label_140660;
            case 0x140664u: goto label_140664;
            case 0x140668u: goto label_140668;
            case 0x14066Cu: goto label_14066c;
            case 0x140670u: goto label_140670;
            case 0x140674u: goto label_140674;
            case 0x140678u: goto label_140678;
            case 0x14067Cu: goto label_14067c;
            case 0x140680u: goto label_140680;
            case 0x140684u: goto label_140684;
            case 0x140688u: goto label_140688;
            case 0x14068Cu: goto label_14068c;
            case 0x140690u: goto label_140690;
            case 0x140694u: goto label_140694;
            case 0x140698u: goto label_140698;
            case 0x14069Cu: goto label_14069c;
            case 0x1406A0u: goto label_1406a0;
            case 0x1406A4u: goto label_1406a4;
            case 0x1406A8u: goto label_1406a8;
            case 0x1406ACu: goto label_1406ac;
            case 0x1406B0u: goto label_1406b0;
            case 0x1406B4u: goto label_1406b4;
            case 0x1406B8u: goto label_1406b8;
            case 0x1406BCu: goto label_1406bc;
            case 0x1406C0u: goto label_1406c0;
            case 0x1406C4u: goto label_1406c4;
            case 0x1406C8u: goto label_1406c8;
            case 0x1406CCu: goto label_1406cc;
            case 0x1406D0u: goto label_1406d0;
            case 0x1406D4u: goto label_1406d4;
            case 0x1406D8u: goto label_1406d8;
            case 0x1406DCu: goto label_1406dc;
            case 0x1406E0u: goto label_1406e0;
            case 0x1406E4u: goto label_1406e4;
            case 0x1406E8u: goto label_1406e8;
            case 0x1406ECu: goto label_1406ec;
            case 0x1406F0u: goto label_1406f0;
            case 0x1406F4u: goto label_1406f4;
            case 0x1406F8u: goto label_1406f8;
            case 0x1406FCu: goto label_1406fc;
            case 0x140700u: goto label_140700;
            case 0x140704u: goto label_140704;
            case 0x140708u: goto label_140708;
            case 0x14070Cu: goto label_14070c;
            case 0x140710u: goto label_140710;
            case 0x140714u: goto label_140714;
            case 0x140718u: goto label_140718;
            case 0x14071Cu: goto label_14071c;
            case 0x140720u: goto label_140720;
            case 0x140724u: goto label_140724;
            case 0x140728u: goto label_140728;
            case 0x14072Cu: goto label_14072c;
            case 0x140730u: goto label_140730;
            case 0x140734u: goto label_140734;
            case 0x140738u: goto label_140738;
            case 0x14073Cu: goto label_14073c;
            case 0x140740u: goto label_140740;
            case 0x140744u: goto label_140744;
            case 0x140748u: goto label_140748;
            case 0x14074Cu: goto label_14074c;
            case 0x140750u: goto label_140750;
            case 0x140754u: goto label_140754;
            case 0x140758u: goto label_140758;
            case 0x14075Cu: goto label_14075c;
            case 0x140760u: goto label_140760;
            case 0x140764u: goto label_140764;
            case 0x140768u: goto label_140768;
            case 0x14076Cu: goto label_14076c;
            case 0x140770u: goto label_140770;
            case 0x140774u: goto label_140774;
            case 0x140778u: goto label_140778;
            case 0x14077Cu: goto label_14077c;
            case 0x140780u: goto label_140780;
            case 0x140784u: goto label_140784;
            case 0x140788u: goto label_140788;
            case 0x14078Cu: goto label_14078c;
            case 0x140790u: goto label_140790;
            case 0x140794u: goto label_140794;
            case 0x140798u: goto label_140798;
            case 0x14079Cu: goto label_14079c;
            case 0x1407A0u: goto label_1407a0;
            case 0x1407A4u: goto label_1407a4;
            case 0x1407A8u: goto label_1407a8;
            case 0x1407ACu: goto label_1407ac;
            case 0x1407B0u: goto label_1407b0;
            case 0x1407B4u: goto label_1407b4;
            case 0x1407B8u: goto label_1407b8;
            case 0x1407BCu: goto label_1407bc;
            case 0x1407C0u: goto label_1407c0;
            case 0x1407C4u: goto label_1407c4;
            case 0x1407C8u: goto label_1407c8;
            case 0x1407CCu: goto label_1407cc;
            case 0x1407D0u: goto label_1407d0;
            case 0x1407D4u: goto label_1407d4;
            case 0x1407D8u: goto label_1407d8;
            case 0x1407DCu: goto label_1407dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1406D4u;
label_1406d4:
    // 0x1406d4: 0x0
    ctx->pc = 0x1406d4u;
    // NOP
label_1406d8:
    // 0x1406d8: 0x51080
    ctx->pc = 0x1406d8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
label_1406dc:
    // 0x1406dc: 0x2ca50004
    ctx->pc = 0x1406dcu;
    SET_GPR_U32(ctx, 5, SLTU32(GPR_U32(ctx, 5), 4));
label_1406e0:
    // 0x1406e0: 0x27bdffe0
    ctx->pc = 0x1406e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1406e4:
    // 0x1406e4: 0x80402d
    ctx->pc = 0x1406e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1406e8:
    // 0x1406e8: 0xffbf0010
    ctx->pc = 0x1406e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1406ec:
    // 0x1406ec: 0x481021
    ctx->pc = 0x1406ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1406f0:
    // 0x1406f0: 0x14a00009
label_1406f4:
    if (ctx->pc == 0x1406F4u) {
        ctx->pc = 0x1406F4u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x1406F8u;
        goto label_1406f8;
    }
    ctx->pc = 0x1406F0u;
    {
        const bool branch_taken_0x1406f0 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x1406F4u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x1406f0) {
            ctx->pc = 0x140718u;
            goto label_140718;
        }
    }
    ctx->pc = 0x1406F8u;
label_1406f8:
    // 0x1406f8: 0x8d020028
    ctx->pc = 0x1406f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 40)));
label_1406fc:
    // 0x1406fc: 0x50400016
label_140700:
    if (ctx->pc == 0x140700u) {
        ctx->pc = 0x140700u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140704u;
        goto label_140704;
    }
    ctx->pc = 0x1406FCu;
    {
        const bool branch_taken_0x1406fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1406fc) {
            ctx->pc = 0x140700u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x140758u;
            goto label_140758;
        }
    }
    ctx->pc = 0x140704u;
label_140704:
    // 0x140704: 0x8d04002c
    ctx->pc = 0x140704u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 8), 44)));
label_140708:
    // 0x140708: 0x40f809
label_14070c:
    if (ctx->pc == 0x14070Cu) {
        ctx->pc = 0x14070Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x140710u;
        goto label_140710;
    }
    ctx->pc = 0x140708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x140710u);
        ctx->pc = 0x14070Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1401F8u: goto label_1401f8;
            case 0x1401FCu: goto label_1401fc;
            case 0x140200u: goto label_140200;
            case 0x140204u: goto label_140204;
            case 0x140208u: goto label_140208;
            case 0x14020Cu: goto label_14020c;
            case 0x140210u: goto label_140210;
            case 0x140214u: goto label_140214;
            case 0x140218u: goto label_140218;
            case 0x14021Cu: goto label_14021c;
            case 0x140220u: goto label_140220;
            case 0x140224u: goto label_140224;
            case 0x140228u: goto label_140228;
            case 0x14022Cu: goto label_14022c;
            case 0x140230u: goto label_140230;
            case 0x140234u: goto label_140234;
            case 0x140238u: goto label_140238;
            case 0x14023Cu: goto label_14023c;
            case 0x140240u: goto label_140240;
            case 0x140244u: goto label_140244;
            case 0x140248u: goto label_140248;
            case 0x14024Cu: goto label_14024c;
            case 0x140250u: goto label_140250;
            case 0x140254u: goto label_140254;
            case 0x140258u: goto label_140258;
            case 0x14025Cu: goto label_14025c;
            case 0x140260u: goto label_140260;
            case 0x140264u: goto label_140264;
            case 0x140268u: goto label_140268;
            case 0x14026Cu: goto label_14026c;
            case 0x140270u: goto label_140270;
            case 0x140274u: goto label_140274;
            case 0x140278u: goto label_140278;
            case 0x14027Cu: goto label_14027c;
            case 0x140280u: goto label_140280;
            case 0x140284u: goto label_140284;
            case 0x140288u: goto label_140288;
            case 0x14028Cu: goto label_14028c;
            case 0x140290u: goto label_140290;
            case 0x140294u: goto label_140294;
            case 0x140298u: goto label_140298;
            case 0x14029Cu: goto label_14029c;
            case 0x1402A0u: goto label_1402a0;
            case 0x1402A4u: goto label_1402a4;
            case 0x1402A8u: goto label_1402a8;
            case 0x1402ACu: goto label_1402ac;
            case 0x1402B0u: goto label_1402b0;
            case 0x1402B4u: goto label_1402b4;
            case 0x1402B8u: goto label_1402b8;
            case 0x1402BCu: goto label_1402bc;
            case 0x1402C0u: goto label_1402c0;
            case 0x1402C4u: goto label_1402c4;
            case 0x1402C8u: goto label_1402c8;
            case 0x1402CCu: goto label_1402cc;
            case 0x1402D0u: goto label_1402d0;
            case 0x1402D4u: goto label_1402d4;
            case 0x1402D8u: goto label_1402d8;
            case 0x1402DCu: goto label_1402dc;
            case 0x1402E0u: goto label_1402e0;
            case 0x1402E4u: goto label_1402e4;
            case 0x1402E8u: goto label_1402e8;
            case 0x1402ECu: goto label_1402ec;
            case 0x1402F0u: goto label_1402f0;
            case 0x1402F4u: goto label_1402f4;
            case 0x1402F8u: goto label_1402f8;
            case 0x1402FCu: goto label_1402fc;
            case 0x140300u: goto label_140300;
            case 0x140304u: goto label_140304;
            case 0x140308u: goto label_140308;
            case 0x14030Cu: goto label_14030c;
            case 0x140310u: goto label_140310;
            case 0x140314u: goto label_140314;
            case 0x140318u: goto label_140318;
            case 0x14031Cu: goto label_14031c;
            case 0x140320u: goto label_140320;
            case 0x140324u: goto label_140324;
            case 0x140328u: goto label_140328;
            case 0x14032Cu: goto label_14032c;
            case 0x140330u: goto label_140330;
            case 0x140334u: goto label_140334;
            case 0x140338u: goto label_140338;
            case 0x14033Cu: goto label_14033c;
            case 0x140340u: goto label_140340;
            case 0x140344u: goto label_140344;
            case 0x140348u: goto label_140348;
            case 0x14034Cu: goto label_14034c;
            case 0x140350u: goto label_140350;
            case 0x140354u: goto label_140354;
            case 0x140358u: goto label_140358;
            case 0x14035Cu: goto label_14035c;
            case 0x140360u: goto label_140360;
            case 0x140364u: goto label_140364;
            case 0x140368u: goto label_140368;
            case 0x14036Cu: goto label_14036c;
            case 0x140370u: goto label_140370;
            case 0x140374u: goto label_140374;
            case 0x140378u: goto label_140378;
            case 0x14037Cu: goto label_14037c;
            case 0x140380u: goto label_140380;
            case 0x140384u: goto label_140384;
            case 0x140388u: goto label_140388;
            case 0x14038Cu: goto label_14038c;
            case 0x140390u: goto label_140390;
            case 0x140394u: goto label_140394;
            case 0x140398u: goto label_140398;
            case 0x14039Cu: goto label_14039c;
            case 0x1403A0u: goto label_1403a0;
            case 0x1403A4u: goto label_1403a4;
            case 0x1403A8u: goto label_1403a8;
            case 0x1403ACu: goto label_1403ac;
            case 0x1403B0u: goto label_1403b0;
            case 0x1403B4u: goto label_1403b4;
            case 0x1403B8u: goto label_1403b8;
            case 0x1403BCu: goto label_1403bc;
            case 0x1403C0u: goto label_1403c0;
            case 0x1403C4u: goto label_1403c4;
            case 0x1403C8u: goto label_1403c8;
            case 0x1403CCu: goto label_1403cc;
            case 0x1403D0u: goto label_1403d0;
            case 0x1403D4u: goto label_1403d4;
            case 0x1403D8u: goto label_1403d8;
            case 0x1403DCu: goto label_1403dc;
            case 0x1403E0u: goto label_1403e0;
            case 0x1403E4u: goto label_1403e4;
            case 0x1403E8u: goto label_1403e8;
            case 0x1403ECu: goto label_1403ec;
            case 0x1403F0u: goto label_1403f0;
            case 0x1403F4u: goto label_1403f4;
            case 0x1403F8u: goto label_1403f8;
            case 0x1403FCu: goto label_1403fc;
            case 0x140400u: goto label_140400;
            case 0x140404u: goto label_140404;
            case 0x140408u: goto label_140408;
            case 0x14040Cu: goto label_14040c;
            case 0x140410u: goto label_140410;
            case 0x140414u: goto label_140414;
            case 0x140418u: goto label_140418;
            case 0x14041Cu: goto label_14041c;
            case 0x140420u: goto label_140420;
            case 0x140424u: goto label_140424;
            case 0x140428u: goto label_140428;
            case 0x14042Cu: goto label_14042c;
            case 0x140430u: goto label_140430;
            case 0x140434u: goto label_140434;
            case 0x140438u: goto label_140438;
            case 0x14043Cu: goto label_14043c;
            case 0x140440u: goto label_140440;
            case 0x140444u: goto label_140444;
            case 0x140448u: goto label_140448;
            case 0x14044Cu: goto label_14044c;
            case 0x140450u: goto label_140450;
            case 0x140454u: goto label_140454;
            case 0x140458u: goto label_140458;
            case 0x14045Cu: goto label_14045c;
            case 0x140460u: goto label_140460;
            case 0x140464u: goto label_140464;
            case 0x140468u: goto label_140468;
            case 0x14046Cu: goto label_14046c;
            case 0x140470u: goto label_140470;
            case 0x140474u: goto label_140474;
            case 0x140478u: goto label_140478;
            case 0x14047Cu: goto label_14047c;
            case 0x140480u: goto label_140480;
            case 0x140484u: goto label_140484;
            case 0x140488u: goto label_140488;
            case 0x14048Cu: goto label_14048c;
            case 0x140490u: goto label_140490;
            case 0x140494u: goto label_140494;
            case 0x140498u: goto label_140498;
            case 0x14049Cu: goto label_14049c;
            case 0x1404A0u: goto label_1404a0;
            case 0x1404A4u: goto label_1404a4;
            case 0x1404A8u: goto label_1404a8;
            case 0x1404ACu: goto label_1404ac;
            case 0x1404B0u: goto label_1404b0;
            case 0x1404B4u: goto label_1404b4;
            case 0x1404B8u: goto label_1404b8;
            case 0x1404BCu: goto label_1404bc;
            case 0x1404C0u: goto label_1404c0;
            case 0x1404C4u: goto label_1404c4;
            case 0x1404C8u: goto label_1404c8;
            case 0x1404CCu: goto label_1404cc;
            case 0x1404D0u: goto label_1404d0;
            case 0x1404D4u: goto label_1404d4;
            case 0x1404D8u: goto label_1404d8;
            case 0x1404DCu: goto label_1404dc;
            case 0x1404E0u: goto label_1404e0;
            case 0x1404E4u: goto label_1404e4;
            case 0x1404E8u: goto label_1404e8;
            case 0x1404ECu: goto label_1404ec;
            case 0x1404F0u: goto label_1404f0;
            case 0x1404F4u: goto label_1404f4;
            case 0x1404F8u: goto label_1404f8;
            case 0x1404FCu: goto label_1404fc;
            case 0x140500u: goto label_140500;
            case 0x140504u: goto label_140504;
            case 0x140508u: goto label_140508;
            case 0x14050Cu: goto label_14050c;
            case 0x140510u: goto label_140510;
            case 0x140514u: goto label_140514;
            case 0x140518u: goto label_140518;
            case 0x14051Cu: goto label_14051c;
            case 0x140520u: goto label_140520;
            case 0x140524u: goto label_140524;
            case 0x140528u: goto label_140528;
            case 0x14052Cu: goto label_14052c;
            case 0x140530u: goto label_140530;
            case 0x140534u: goto label_140534;
            case 0x140538u: goto label_140538;
            case 0x14053Cu: goto label_14053c;
            case 0x140540u: goto label_140540;
            case 0x140544u: goto label_140544;
            case 0x140548u: goto label_140548;
            case 0x14054Cu: goto label_14054c;
            case 0x140550u: goto label_140550;
            case 0x140554u: goto label_140554;
            case 0x140558u: goto label_140558;
            case 0x14055Cu: goto label_14055c;
            case 0x140560u: goto label_140560;
            case 0x140564u: goto label_140564;
            case 0x140568u: goto label_140568;
            case 0x14056Cu: goto label_14056c;
            case 0x140570u: goto label_140570;
            case 0x140574u: goto label_140574;
            case 0x140578u: goto label_140578;
            case 0x14057Cu: goto label_14057c;
            case 0x140580u: goto label_140580;
            case 0x140584u: goto label_140584;
            case 0x140588u: goto label_140588;
            case 0x14058Cu: goto label_14058c;
            case 0x140590u: goto label_140590;
            case 0x140594u: goto label_140594;
            case 0x140598u: goto label_140598;
            case 0x14059Cu: goto label_14059c;
            case 0x1405A0u: goto label_1405a0;
            case 0x1405A4u: goto label_1405a4;
            case 0x1405A8u: goto label_1405a8;
            case 0x1405ACu: goto label_1405ac;
            case 0x1405B0u: goto label_1405b0;
            case 0x1405B4u: goto label_1405b4;
            case 0x1405B8u: goto label_1405b8;
            case 0x1405BCu: goto label_1405bc;
            case 0x1405C0u: goto label_1405c0;
            case 0x1405C4u: goto label_1405c4;
            case 0x1405C8u: goto label_1405c8;
            case 0x1405CCu: goto label_1405cc;
            case 0x1405D0u: goto label_1405d0;
            case 0x1405D4u: goto label_1405d4;
            case 0x1405D8u: goto label_1405d8;
            case 0x1405DCu: goto label_1405dc;
            case 0x1405E0u: goto label_1405e0;
            case 0x1405E4u: goto label_1405e4;
            case 0x1405E8u: goto label_1405e8;
            case 0x1405ECu: goto label_1405ec;
            case 0x1405F0u: goto label_1405f0;
            case 0x1405F4u: goto label_1405f4;
            case 0x1405F8u: goto label_1405f8;
            case 0x1405FCu: goto label_1405fc;
            case 0x140600u: goto label_140600;
            case 0x140604u: goto label_140604;
            case 0x140608u: goto label_140608;
            case 0x14060Cu: goto label_14060c;
            case 0x140610u: goto label_140610;
            case 0x140614u: goto label_140614;
            case 0x140618u: goto label_140618;
            case 0x14061Cu: goto label_14061c;
            case 0x140620u: goto label_140620;
            case 0x140624u: goto label_140624;
            case 0x140628u: goto label_140628;
            case 0x14062Cu: goto label_14062c;
            case 0x140630u: goto label_140630;
            case 0x140634u: goto label_140634;
            case 0x140638u: goto label_140638;
            case 0x14063Cu: goto label_14063c;
            case 0x140640u: goto label_140640;
            case 0x140644u: goto label_140644;
            case 0x140648u: goto label_140648;
            case 0x14064Cu: goto label_14064c;
            case 0x140650u: goto label_140650;
            case 0x140654u: goto label_140654;
            case 0x140658u: goto label_140658;
            case 0x14065Cu: goto label_14065c;
            case 0x140660u: goto label_140660;
            case 0x140664u: goto label_140664;
            case 0x140668u: goto label_140668;
            case 0x14066Cu: goto label_14066c;
            case 0x140670u: goto label_140670;
            case 0x140674u: goto label_140674;
            case 0x140678u: goto label_140678;
            case 0x14067Cu: goto label_14067c;
            case 0x140680u: goto label_140680;
            case 0x140684u: goto label_140684;
            case 0x140688u: goto label_140688;
            case 0x14068Cu: goto label_14068c;
            case 0x140690u: goto label_140690;
            case 0x140694u: goto label_140694;
            case 0x140698u: goto label_140698;
            case 0x14069Cu: goto label_14069c;
            case 0x1406A0u: goto label_1406a0;
            case 0x1406A4u: goto label_1406a4;
            case 0x1406A8u: goto label_1406a8;
            case 0x1406ACu: goto label_1406ac;
            case 0x1406B0u: goto label_1406b0;
            case 0x1406B4u: goto label_1406b4;
            case 0x1406B8u: goto label_1406b8;
            case 0x1406BCu: goto label_1406bc;
            case 0x1406C0u: goto label_1406c0;
            case 0x1406C4u: goto label_1406c4;
            case 0x1406C8u: goto label_1406c8;
            case 0x1406CCu: goto label_1406cc;
            case 0x1406D0u: goto label_1406d0;
            case 0x1406D4u: goto label_1406d4;
            case 0x1406D8u: goto label_1406d8;
            case 0x1406DCu: goto label_1406dc;
            case 0x1406E0u: goto label_1406e0;
            case 0x1406E4u: goto label_1406e4;
            case 0x1406E8u: goto label_1406e8;
            case 0x1406ECu: goto label_1406ec;
            case 0x1406F0u: goto label_1406f0;
            case 0x1406F4u: goto label_1406f4;
            case 0x1406F8u: goto label_1406f8;
            case 0x1406FCu: goto label_1406fc;
            case 0x140700u: goto label_140700;
            case 0x140704u: goto label_140704;
            case 0x140708u: goto label_140708;
            case 0x14070Cu: goto label_14070c;
            case 0x140710u: goto label_140710;
            case 0x140714u: goto label_140714;
            case 0x140718u: goto label_140718;
            case 0x14071Cu: goto label_14071c;
            case 0x140720u: goto label_140720;
            case 0x140724u: goto label_140724;
            case 0x140728u: goto label_140728;
            case 0x14072Cu: goto label_14072c;
            case 0x140730u: goto label_140730;
            case 0x140734u: goto label_140734;
            case 0x140738u: goto label_140738;
            case 0x14073Cu: goto label_14073c;
            case 0x140740u: goto label_140740;
            case 0x140744u: goto label_140744;
            case 0x140748u: goto label_140748;
            case 0x14074Cu: goto label_14074c;
            case 0x140750u: goto label_140750;
            case 0x140754u: goto label_140754;
            case 0x140758u: goto label_140758;
            case 0x14075Cu: goto label_14075c;
            case 0x140760u: goto label_140760;
            case 0x140764u: goto label_140764;
            case 0x140768u: goto label_140768;
            case 0x14076Cu: goto label_14076c;
            case 0x140770u: goto label_140770;
            case 0x140774u: goto label_140774;
            case 0x140778u: goto label_140778;
            case 0x14077Cu: goto label_14077c;
            case 0x140780u: goto label_140780;
            case 0x140784u: goto label_140784;
            case 0x140788u: goto label_140788;
            case 0x14078Cu: goto label_14078c;
            case 0x140790u: goto label_140790;
            case 0x140794u: goto label_140794;
            case 0x140798u: goto label_140798;
            case 0x14079Cu: goto label_14079c;
            case 0x1407A0u: goto label_1407a0;
            case 0x1407A4u: goto label_1407a4;
            case 0x1407A8u: goto label_1407a8;
            case 0x1407ACu: goto label_1407ac;
            case 0x1407B0u: goto label_1407b0;
            case 0x1407B4u: goto label_1407b4;
            case 0x1407B8u: goto label_1407b8;
            case 0x1407BCu: goto label_1407bc;
            case 0x1407C0u: goto label_1407c0;
            case 0x1407C4u: goto label_1407c4;
            case 0x1407C8u: goto label_1407c8;
            case 0x1407CCu: goto label_1407cc;
            case 0x1407D0u: goto label_1407d0;
            case 0x1407D4u: goto label_1407d4;
            case 0x1407D8u: goto label_1407d8;
            case 0x1407DCu: goto label_1407dc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x140710u; }
            if (ctx->pc != 0x140710u) { return; }
        }
    }
    ctx->pc = 0x140710u;
label_140710:
    // 0x140710: 0x10000011
label_140714:
    if (ctx->pc == 0x140714u) {
        ctx->pc = 0x140714u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140718u;
        goto label_140718;
    }
    ctx->pc = 0x140710u;
    {
        const bool branch_taken_0x140710 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x140714u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x140710) {
            ctx->pc = 0x140758u;
            goto label_140758;
        }
    }
    ctx->pc = 0x140718u;
label_140718:
    // 0x140718: 0x8c430018
    ctx->pc = 0x140718u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_14071c:
    // 0x14071c: 0x1060000e
label_140720:
    if (ctx->pc == 0x140720u) {
        ctx->pc = 0x140720u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140724u;
        goto label_140724;
    }
    ctx->pc = 0x14071Cu;
    {
        const bool branch_taken_0x14071c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x140720u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14071c) {
            ctx->pc = 0x140758u;
            goto label_140758;
        }
    }
    ctx->pc = 0x140724u;
label_140724:
    // 0x140724: 0x6862000f
    ctx->pc = 0x140724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
label_140728:
    // 0x140728: 0x6c620008
    ctx->pc = 0x140728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
label_14072c:
    // 0x14072c: 0xb3a20007
    ctx->pc = 0x14072cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_140730:
    // 0x140730: 0xb7a20000
    ctx->pc = 0x140730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_140734:
    // 0x140734: 0x24040001
    ctx->pc = 0x140734u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_140738:
    // 0x140738: 0x8fa30004
    ctx->pc = 0x140738u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_14073c:
    // 0x14073c: 0xace30000
    ctx->pc = 0x14073cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_140740:
    // 0x140740: 0x66102a
    ctx->pc = 0x140740u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 6)));
label_140744:
    // 0x140744: 0x663026
    ctx->pc = 0x140744u;
    SET_GPR_U32(ctx, 6, XOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_140748:
    // 0x140748: 0x81030005
    ctx->pc = 0x140748u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 5)));
label_14074c:
    // 0x14074c: 0x10640002
label_140750:
    if (ctx->pc == 0x140750u) {
        ctx->pc = 0x140750u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x140754u;
        goto label_140754;
    }
    ctx->pc = 0x14074Cu;
    {
        const bool branch_taken_0x14074c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        ctx->pc = 0x140750u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x14074c) {
            ctx->pc = 0x140758u;
            goto label_140758;
        }
    }
    ctx->pc = 0x140754u;
label_140754:
    // 0x140754: 0x2cc20001
    ctx->pc = 0x140754u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), 1));
label_140758:
    // 0x140758: 0xdfbf0010
    ctx->pc = 0x140758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14075c:
    // 0x14075c: 0x3e00008
label_140760:
    if (ctx->pc == 0x140760u) {
        ctx->pc = 0x140760u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x140764u;
        goto label_140764;
    }
    ctx->pc = 0x14075Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140760u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1401F8u: goto label_1401f8;
            case 0x1401FCu: goto label_1401fc;
            case 0x140200u: goto label_140200;
            case 0x140204u: goto label_140204;
            case 0x140208u: goto label_140208;
            case 0x14020Cu: goto label_14020c;
            case 0x140210u: goto label_140210;
            case 0x140214u: goto label_140214;
            case 0x140218u: goto label_140218;
            case 0x14021Cu: goto label_14021c;
            case 0x140220u: goto label_140220;
            case 0x140224u: goto label_140224;
            case 0x140228u: goto label_140228;
            case 0x14022Cu: goto label_14022c;
            case 0x140230u: goto label_140230;
            case 0x140234u: goto label_140234;
            case 0x140238u: goto label_140238;
            case 0x14023Cu: goto label_14023c;
            case 0x140240u: goto label_140240;
            case 0x140244u: goto label_140244;
            case 0x140248u: goto label_140248;
            case 0x14024Cu: goto label_14024c;
            case 0x140250u: goto label_140250;
            case 0x140254u: goto label_140254;
            case 0x140258u: goto label_140258;
            case 0x14025Cu: goto label_14025c;
            case 0x140260u: goto label_140260;
            case 0x140264u: goto label_140264;
            case 0x140268u: goto label_140268;
            case 0x14026Cu: goto label_14026c;
            case 0x140270u: goto label_140270;
            case 0x140274u: goto label_140274;
            case 0x140278u: goto label_140278;
            case 0x14027Cu: goto label_14027c;
            case 0x140280u: goto label_140280;
            case 0x140284u: goto label_140284;
            case 0x140288u: goto label_140288;
            case 0x14028Cu: goto label_14028c;
            case 0x140290u: goto label_140290;
            case 0x140294u: goto label_140294;
            case 0x140298u: goto label_140298;
            case 0x14029Cu: goto label_14029c;
            case 0x1402A0u: goto label_1402a0;
            case 0x1402A4u: goto label_1402a4;
            case 0x1402A8u: goto label_1402a8;
            case 0x1402ACu: goto label_1402ac;
            case 0x1402B0u: goto label_1402b0;
            case 0x1402B4u: goto label_1402b4;
            case 0x1402B8u: goto label_1402b8;
            case 0x1402BCu: goto label_1402bc;
            case 0x1402C0u: goto label_1402c0;
            case 0x1402C4u: goto label_1402c4;
            case 0x1402C8u: goto label_1402c8;
            case 0x1402CCu: goto label_1402cc;
            case 0x1402D0u: goto label_1402d0;
            case 0x1402D4u: goto label_1402d4;
            case 0x1402D8u: goto label_1402d8;
            case 0x1402DCu: goto label_1402dc;
            case 0x1402E0u: goto label_1402e0;
            case 0x1402E4u: goto label_1402e4;
            case 0x1402E8u: goto label_1402e8;
            case 0x1402ECu: goto label_1402ec;
            case 0x1402F0u: goto label_1402f0;
            case 0x1402F4u: goto label_1402f4;
            case 0x1402F8u: goto label_1402f8;
            case 0x1402FCu: goto label_1402fc;
            case 0x140300u: goto label_140300;
            case 0x140304u: goto label_140304;
            case 0x140308u: goto label_140308;
            case 0x14030Cu: goto label_14030c;
            case 0x140310u: goto label_140310;
            case 0x140314u: goto label_140314;
            case 0x140318u: goto label_140318;
            case 0x14031Cu: goto label_14031c;
            case 0x140320u: goto label_140320;
            case 0x140324u: goto label_140324;
            case 0x140328u: goto label_140328;
            case 0x14032Cu: goto label_14032c;
            case 0x140330u: goto label_140330;
            case 0x140334u: goto label_140334;
            case 0x140338u: goto label_140338;
            case 0x14033Cu: goto label_14033c;
            case 0x140340u: goto label_140340;
            case 0x140344u: goto label_140344;
            case 0x140348u: goto label_140348;
            case 0x14034Cu: goto label_14034c;
            case 0x140350u: goto label_140350;
            case 0x140354u: goto label_140354;
            case 0x140358u: goto label_140358;
            case 0x14035Cu: goto label_14035c;
            case 0x140360u: goto label_140360;
            case 0x140364u: goto label_140364;
            case 0x140368u: goto label_140368;
            case 0x14036Cu: goto label_14036c;
            case 0x140370u: goto label_140370;
            case 0x140374u: goto label_140374;
            case 0x140378u: goto label_140378;
            case 0x14037Cu: goto label_14037c;
            case 0x140380u: goto label_140380;
            case 0x140384u: goto label_140384;
            case 0x140388u: goto label_140388;
            case 0x14038Cu: goto label_14038c;
            case 0x140390u: goto label_140390;
            case 0x140394u: goto label_140394;
            case 0x140398u: goto label_140398;
            case 0x14039Cu: goto label_14039c;
            case 0x1403A0u: goto label_1403a0;
            case 0x1403A4u: goto label_1403a4;
            case 0x1403A8u: goto label_1403a8;
            case 0x1403ACu: goto label_1403ac;
            case 0x1403B0u: goto label_1403b0;
            case 0x1403B4u: goto label_1403b4;
            case 0x1403B8u: goto label_1403b8;
            case 0x1403BCu: goto label_1403bc;
            case 0x1403C0u: goto label_1403c0;
            case 0x1403C4u: goto label_1403c4;
            case 0x1403C8u: goto label_1403c8;
            case 0x1403CCu: goto label_1403cc;
            case 0x1403D0u: goto label_1403d0;
            case 0x1403D4u: goto label_1403d4;
            case 0x1403D8u: goto label_1403d8;
            case 0x1403DCu: goto label_1403dc;
            case 0x1403E0u: goto label_1403e0;
            case 0x1403E4u: goto label_1403e4;
            case 0x1403E8u: goto label_1403e8;
            case 0x1403ECu: goto label_1403ec;
            case 0x1403F0u: goto label_1403f0;
            case 0x1403F4u: goto label_1403f4;
            case 0x1403F8u: goto label_1403f8;
            case 0x1403FCu: goto label_1403fc;
            case 0x140400u: goto label_140400;
            case 0x140404u: goto label_140404;
            case 0x140408u: goto label_140408;
            case 0x14040Cu: goto label_14040c;
            case 0x140410u: goto label_140410;
            case 0x140414u: goto label_140414;
            case 0x140418u: goto label_140418;
            case 0x14041Cu: goto label_14041c;
            case 0x140420u: goto label_140420;
            case 0x140424u: goto label_140424;
            case 0x140428u: goto label_140428;
            case 0x14042Cu: goto label_14042c;
            case 0x140430u: goto label_140430;
            case 0x140434u: goto label_140434;
            case 0x140438u: goto label_140438;
            case 0x14043Cu: goto label_14043c;
            case 0x140440u: goto label_140440;
            case 0x140444u: goto label_140444;
            case 0x140448u: goto label_140448;
            case 0x14044Cu: goto label_14044c;
            case 0x140450u: goto label_140450;
            case 0x140454u: goto label_140454;
            case 0x140458u: goto label_140458;
            case 0x14045Cu: goto label_14045c;
            case 0x140460u: goto label_140460;
            case 0x140464u: goto label_140464;
            case 0x140468u: goto label_140468;
            case 0x14046Cu: goto label_14046c;
            case 0x140470u: goto label_140470;
            case 0x140474u: goto label_140474;
            case 0x140478u: goto label_140478;
            case 0x14047Cu: goto label_14047c;
            case 0x140480u: goto label_140480;
            case 0x140484u: goto label_140484;
            case 0x140488u: goto label_140488;
            case 0x14048Cu: goto label_14048c;
            case 0x140490u: goto label_140490;
            case 0x140494u: goto label_140494;
            case 0x140498u: goto label_140498;
            case 0x14049Cu: goto label_14049c;
            case 0x1404A0u: goto label_1404a0;
            case 0x1404A4u: goto label_1404a4;
            case 0x1404A8u: goto label_1404a8;
            case 0x1404ACu: goto label_1404ac;
            case 0x1404B0u: goto label_1404b0;
            case 0x1404B4u: goto label_1404b4;
            case 0x1404B8u: goto label_1404b8;
            case 0x1404BCu: goto label_1404bc;
            case 0x1404C0u: goto label_1404c0;
            case 0x1404C4u: goto label_1404c4;
            case 0x1404C8u: goto label_1404c8;
            case 0x1404CCu: goto label_1404cc;
            case 0x1404D0u: goto label_1404d0;
            case 0x1404D4u: goto label_1404d4;
            case 0x1404D8u: goto label_1404d8;
            case 0x1404DCu: goto label_1404dc;
            case 0x1404E0u: goto label_1404e0;
            case 0x1404E4u: goto label_1404e4;
            case 0x1404E8u: goto label_1404e8;
            case 0x1404ECu: goto label_1404ec;
            case 0x1404F0u: goto label_1404f0;
            case 0x1404F4u: goto label_1404f4;
            case 0x1404F8u: goto label_1404f8;
            case 0x1404FCu: goto label_1404fc;
            case 0x140500u: goto label_140500;
            case 0x140504u: goto label_140504;
            case 0x140508u: goto label_140508;
            case 0x14050Cu: goto label_14050c;
            case 0x140510u: goto label_140510;
            case 0x140514u: goto label_140514;
            case 0x140518u: goto label_140518;
            case 0x14051Cu: goto label_14051c;
            case 0x140520u: goto label_140520;
            case 0x140524u: goto label_140524;
            case 0x140528u: goto label_140528;
            case 0x14052Cu: goto label_14052c;
            case 0x140530u: goto label_140530;
            case 0x140534u: goto label_140534;
            case 0x140538u: goto label_140538;
            case 0x14053Cu: goto label_14053c;
            case 0x140540u: goto label_140540;
            case 0x140544u: goto label_140544;
            case 0x140548u: goto label_140548;
            case 0x14054Cu: goto label_14054c;
            case 0x140550u: goto label_140550;
            case 0x140554u: goto label_140554;
            case 0x140558u: goto label_140558;
            case 0x14055Cu: goto label_14055c;
            case 0x140560u: goto label_140560;
            case 0x140564u: goto label_140564;
            case 0x140568u: goto label_140568;
            case 0x14056Cu: goto label_14056c;
            case 0x140570u: goto label_140570;
            case 0x140574u: goto label_140574;
            case 0x140578u: goto label_140578;
            case 0x14057Cu: goto label_14057c;
            case 0x140580u: goto label_140580;
            case 0x140584u: goto label_140584;
            case 0x140588u: goto label_140588;
            case 0x14058Cu: goto label_14058c;
            case 0x140590u: goto label_140590;
            case 0x140594u: goto label_140594;
            case 0x140598u: goto label_140598;
            case 0x14059Cu: goto label_14059c;
            case 0x1405A0u: goto label_1405a0;
            case 0x1405A4u: goto label_1405a4;
            case 0x1405A8u: goto label_1405a8;
            case 0x1405ACu: goto label_1405ac;
            case 0x1405B0u: goto label_1405b0;
            case 0x1405B4u: goto label_1405b4;
            case 0x1405B8u: goto label_1405b8;
            case 0x1405BCu: goto label_1405bc;
            case 0x1405C0u: goto label_1405c0;
            case 0x1405C4u: goto label_1405c4;
            case 0x1405C8u: goto label_1405c8;
            case 0x1405CCu: goto label_1405cc;
            case 0x1405D0u: goto label_1405d0;
            case 0x1405D4u: goto label_1405d4;
            case 0x1405D8u: goto label_1405d8;
            case 0x1405DCu: goto label_1405dc;
            case 0x1405E0u: goto label_1405e0;
            case 0x1405E4u: goto label_1405e4;
            case 0x1405E8u: goto label_1405e8;
            case 0x1405ECu: goto label_1405ec;
            case 0x1405F0u: goto label_1405f0;
            case 0x1405F4u: goto label_1405f4;
            case 0x1405F8u: goto label_1405f8;
            case 0x1405FCu: goto label_1405fc;
            case 0x140600u: goto label_140600;
            case 0x140604u: goto label_140604;
            case 0x140608u: goto label_140608;
            case 0x14060Cu: goto label_14060c;
            case 0x140610u: goto label_140610;
            case 0x140614u: goto label_140614;
            case 0x140618u: goto label_140618;
            case 0x14061Cu: goto label_14061c;
            case 0x140620u: goto label_140620;
            case 0x140624u: goto label_140624;
            case 0x140628u: goto label_140628;
            case 0x14062Cu: goto label_14062c;
            case 0x140630u: goto label_140630;
            case 0x140634u: goto label_140634;
            case 0x140638u: goto label_140638;
            case 0x14063Cu: goto label_14063c;
            case 0x140640u: goto label_140640;
            case 0x140644u: goto label_140644;
            case 0x140648u: goto label_140648;
            case 0x14064Cu: goto label_14064c;
            case 0x140650u: goto label_140650;
            case 0x140654u: goto label_140654;
            case 0x140658u: goto label_140658;
            case 0x14065Cu: goto label_14065c;
            case 0x140660u: goto label_140660;
            case 0x140664u: goto label_140664;
            case 0x140668u: goto label_140668;
            case 0x14066Cu: goto label_14066c;
            case 0x140670u: goto label_140670;
            case 0x140674u: goto label_140674;
            case 0x140678u: goto label_140678;
            case 0x14067Cu: goto label_14067c;
            case 0x140680u: goto label_140680;
            case 0x140684u: goto label_140684;
            case 0x140688u: goto label_140688;
            case 0x14068Cu: goto label_14068c;
            case 0x140690u: goto label_140690;
            case 0x140694u: goto label_140694;
            case 0x140698u: goto label_140698;
            case 0x14069Cu: goto label_14069c;
            case 0x1406A0u: goto label_1406a0;
            case 0x1406A4u: goto label_1406a4;
            case 0x1406A8u: goto label_1406a8;
            case 0x1406ACu: goto label_1406ac;
            case 0x1406B0u: goto label_1406b0;
            case 0x1406B4u: goto label_1406b4;
            case 0x1406B8u: goto label_1406b8;
            case 0x1406BCu: goto label_1406bc;
            case 0x1406C0u: goto label_1406c0;
            case 0x1406C4u: goto label_1406c4;
            case 0x1406C8u: goto label_1406c8;
            case 0x1406CCu: goto label_1406cc;
            case 0x1406D0u: goto label_1406d0;
            case 0x1406D4u: goto label_1406d4;
            case 0x1406D8u: goto label_1406d8;
            case 0x1406DCu: goto label_1406dc;
            case 0x1406E0u: goto label_1406e0;
            case 0x1406E4u: goto label_1406e4;
            case 0x1406E8u: goto label_1406e8;
            case 0x1406ECu: goto label_1406ec;
            case 0x1406F0u: goto label_1406f0;
            case 0x1406F4u: goto label_1406f4;
            case 0x1406F8u: goto label_1406f8;
            case 0x1406FCu: goto label_1406fc;
            case 0x140700u: goto label_140700;
            case 0x140704u: goto label_140704;
            case 0x140708u: goto label_140708;
            case 0x14070Cu: goto label_14070c;
            case 0x140710u: goto label_140710;
            case 0x140714u: goto label_140714;
            case 0x140718u: goto label_140718;
            case 0x14071Cu: goto label_14071c;
            case 0x140720u: goto label_140720;
            case 0x140724u: goto label_140724;
            case 0x140728u: goto label_140728;
            case 0x14072Cu: goto label_14072c;
            case 0x140730u: goto label_140730;
            case 0x140734u: goto label_140734;
            case 0x140738u: goto label_140738;
            case 0x14073Cu: goto label_14073c;
            case 0x140740u: goto label_140740;
            case 0x140744u: goto label_140744;
            case 0x140748u: goto label_140748;
            case 0x14074Cu: goto label_14074c;
            case 0x140750u: goto label_140750;
            case 0x140754u: goto label_140754;
            case 0x140758u: goto label_140758;
            case 0x14075Cu: goto label_14075c;
            case 0x140760u: goto label_140760;
            case 0x140764u: goto label_140764;
            case 0x140768u: goto label_140768;
            case 0x14076Cu: goto label_14076c;
            case 0x140770u: goto label_140770;
            case 0x140774u: goto label_140774;
            case 0x140778u: goto label_140778;
            case 0x14077Cu: goto label_14077c;
            case 0x140780u: goto label_140780;
            case 0x140784u: goto label_140784;
            case 0x140788u: goto label_140788;
            case 0x14078Cu: goto label_14078c;
            case 0x140790u: goto label_140790;
            case 0x140794u: goto label_140794;
            case 0x140798u: goto label_140798;
            case 0x14079Cu: goto label_14079c;
            case 0x1407A0u: goto label_1407a0;
            case 0x1407A4u: goto label_1407a4;
            case 0x1407A8u: goto label_1407a8;
            case 0x1407ACu: goto label_1407ac;
            case 0x1407B0u: goto label_1407b0;
            case 0x1407B4u: goto label_1407b4;
            case 0x1407B8u: goto label_1407b8;
            case 0x1407BCu: goto label_1407bc;
            case 0x1407C0u: goto label_1407c0;
            case 0x1407C4u: goto label_1407c4;
            case 0x1407C8u: goto label_1407c8;
            case 0x1407CCu: goto label_1407cc;
            case 0x1407D0u: goto label_1407d0;
            case 0x1407D4u: goto label_1407d4;
            case 0x1407D8u: goto label_1407d8;
            case 0x1407DCu: goto label_1407dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x140764u;
label_140764:
    // 0x140764: 0x0
    ctx->pc = 0x140764u;
    // NOP
label_140768:
    // 0x140768: 0x52880
    ctx->pc = 0x140768u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
label_14076c:
    // 0x14076c: 0xa42821
    ctx->pc = 0x14076cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_140770:
    // 0x140770: 0x8ca30018
    ctx->pc = 0x140770u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_140774:
    // 0x140774: 0x10600009
label_140778:
    if (ctx->pc == 0x140778u) {
        ctx->pc = 0x140778u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14077Cu;
        goto label_14077c;
    }
    ctx->pc = 0x140774u;
    {
        const bool branch_taken_0x140774 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x140778u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x140774) {
            ctx->pc = 0x14079Cu;
            goto label_14079c;
        }
    }
    ctx->pc = 0x14077Cu;
label_14077c:
    // 0x14077c: 0x0
    ctx->pc = 0x14077cu;
    // NOP
label_140780:
    // 0x140780: 0x8c630000
    ctx->pc = 0x140780u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_140784:
    // 0x140784: 0x0
    ctx->pc = 0x140784u;
    // NOP
label_140788:
    // 0x140788: 0x0
    ctx->pc = 0x140788u;
    // NOP
label_14078c:
    // 0x14078c: 0x0
    ctx->pc = 0x14078cu;
    // NOP
label_140790:
    // 0x140790: 0x0
    ctx->pc = 0x140790u;
    // NOP
label_140794:
    // 0x140794: 0x1460fffa
label_140798:
    if (ctx->pc == 0x140798u) {
        ctx->pc = 0x140798u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x14079Cu;
        goto label_14079c;
    }
    ctx->pc = 0x140794u;
    {
        const bool branch_taken_0x140794 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x140798u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x140794) {
            ctx->pc = 0x140780u;
            goto label_140780;
        }
    }
    ctx->pc = 0x14079Cu;
label_14079c:
    // 0x14079c: 0x3e00008
label_1407a0:
    if (ctx->pc == 0x1407A0u) {
        ctx->pc = 0x1407A4u;
        goto label_1407a4;
    }
    ctx->pc = 0x14079Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1401F8u: goto label_1401f8;
            case 0x1401FCu: goto label_1401fc;
            case 0x140200u: goto label_140200;
            case 0x140204u: goto label_140204;
            case 0x140208u: goto label_140208;
            case 0x14020Cu: goto label_14020c;
            case 0x140210u: goto label_140210;
            case 0x140214u: goto label_140214;
            case 0x140218u: goto label_140218;
            case 0x14021Cu: goto label_14021c;
            case 0x140220u: goto label_140220;
            case 0x140224u: goto label_140224;
            case 0x140228u: goto label_140228;
            case 0x14022Cu: goto label_14022c;
            case 0x140230u: goto label_140230;
            case 0x140234u: goto label_140234;
            case 0x140238u: goto label_140238;
            case 0x14023Cu: goto label_14023c;
            case 0x140240u: goto label_140240;
            case 0x140244u: goto label_140244;
            case 0x140248u: goto label_140248;
            case 0x14024Cu: goto label_14024c;
            case 0x140250u: goto label_140250;
            case 0x140254u: goto label_140254;
            case 0x140258u: goto label_140258;
            case 0x14025Cu: goto label_14025c;
            case 0x140260u: goto label_140260;
            case 0x140264u: goto label_140264;
            case 0x140268u: goto label_140268;
            case 0x14026Cu: goto label_14026c;
            case 0x140270u: goto label_140270;
            case 0x140274u: goto label_140274;
            case 0x140278u: goto label_140278;
            case 0x14027Cu: goto label_14027c;
            case 0x140280u: goto label_140280;
            case 0x140284u: goto label_140284;
            case 0x140288u: goto label_140288;
            case 0x14028Cu: goto label_14028c;
            case 0x140290u: goto label_140290;
            case 0x140294u: goto label_140294;
            case 0x140298u: goto label_140298;
            case 0x14029Cu: goto label_14029c;
            case 0x1402A0u: goto label_1402a0;
            case 0x1402A4u: goto label_1402a4;
            case 0x1402A8u: goto label_1402a8;
            case 0x1402ACu: goto label_1402ac;
            case 0x1402B0u: goto label_1402b0;
            case 0x1402B4u: goto label_1402b4;
            case 0x1402B8u: goto label_1402b8;
            case 0x1402BCu: goto label_1402bc;
            case 0x1402C0u: goto label_1402c0;
            case 0x1402C4u: goto label_1402c4;
            case 0x1402C8u: goto label_1402c8;
            case 0x1402CCu: goto label_1402cc;
            case 0x1402D0u: goto label_1402d0;
            case 0x1402D4u: goto label_1402d4;
            case 0x1402D8u: goto label_1402d8;
            case 0x1402DCu: goto label_1402dc;
            case 0x1402E0u: goto label_1402e0;
            case 0x1402E4u: goto label_1402e4;
            case 0x1402E8u: goto label_1402e8;
            case 0x1402ECu: goto label_1402ec;
            case 0x1402F0u: goto label_1402f0;
            case 0x1402F4u: goto label_1402f4;
            case 0x1402F8u: goto label_1402f8;
            case 0x1402FCu: goto label_1402fc;
            case 0x140300u: goto label_140300;
            case 0x140304u: goto label_140304;
            case 0x140308u: goto label_140308;
            case 0x14030Cu: goto label_14030c;
            case 0x140310u: goto label_140310;
            case 0x140314u: goto label_140314;
            case 0x140318u: goto label_140318;
            case 0x14031Cu: goto label_14031c;
            case 0x140320u: goto label_140320;
            case 0x140324u: goto label_140324;
            case 0x140328u: goto label_140328;
            case 0x14032Cu: goto label_14032c;
            case 0x140330u: goto label_140330;
            case 0x140334u: goto label_140334;
            case 0x140338u: goto label_140338;
            case 0x14033Cu: goto label_14033c;
            case 0x140340u: goto label_140340;
            case 0x140344u: goto label_140344;
            case 0x140348u: goto label_140348;
            case 0x14034Cu: goto label_14034c;
            case 0x140350u: goto label_140350;
            case 0x140354u: goto label_140354;
            case 0x140358u: goto label_140358;
            case 0x14035Cu: goto label_14035c;
            case 0x140360u: goto label_140360;
            case 0x140364u: goto label_140364;
            case 0x140368u: goto label_140368;
            case 0x14036Cu: goto label_14036c;
            case 0x140370u: goto label_140370;
            case 0x140374u: goto label_140374;
            case 0x140378u: goto label_140378;
            case 0x14037Cu: goto label_14037c;
            case 0x140380u: goto label_140380;
            case 0x140384u: goto label_140384;
            case 0x140388u: goto label_140388;
            case 0x14038Cu: goto label_14038c;
            case 0x140390u: goto label_140390;
            case 0x140394u: goto label_140394;
            case 0x140398u: goto label_140398;
            case 0x14039Cu: goto label_14039c;
            case 0x1403A0u: goto label_1403a0;
            case 0x1403A4u: goto label_1403a4;
            case 0x1403A8u: goto label_1403a8;
            case 0x1403ACu: goto label_1403ac;
            case 0x1403B0u: goto label_1403b0;
            case 0x1403B4u: goto label_1403b4;
            case 0x1403B8u: goto label_1403b8;
            case 0x1403BCu: goto label_1403bc;
            case 0x1403C0u: goto label_1403c0;
            case 0x1403C4u: goto label_1403c4;
            case 0x1403C8u: goto label_1403c8;
            case 0x1403CCu: goto label_1403cc;
            case 0x1403D0u: goto label_1403d0;
            case 0x1403D4u: goto label_1403d4;
            case 0x1403D8u: goto label_1403d8;
            case 0x1403DCu: goto label_1403dc;
            case 0x1403E0u: goto label_1403e0;
            case 0x1403E4u: goto label_1403e4;
            case 0x1403E8u: goto label_1403e8;
            case 0x1403ECu: goto label_1403ec;
            case 0x1403F0u: goto label_1403f0;
            case 0x1403F4u: goto label_1403f4;
            case 0x1403F8u: goto label_1403f8;
            case 0x1403FCu: goto label_1403fc;
            case 0x140400u: goto label_140400;
            case 0x140404u: goto label_140404;
            case 0x140408u: goto label_140408;
            case 0x14040Cu: goto label_14040c;
            case 0x140410u: goto label_140410;
            case 0x140414u: goto label_140414;
            case 0x140418u: goto label_140418;
            case 0x14041Cu: goto label_14041c;
            case 0x140420u: goto label_140420;
            case 0x140424u: goto label_140424;
            case 0x140428u: goto label_140428;
            case 0x14042Cu: goto label_14042c;
            case 0x140430u: goto label_140430;
            case 0x140434u: goto label_140434;
            case 0x140438u: goto label_140438;
            case 0x14043Cu: goto label_14043c;
            case 0x140440u: goto label_140440;
            case 0x140444u: goto label_140444;
            case 0x140448u: goto label_140448;
            case 0x14044Cu: goto label_14044c;
            case 0x140450u: goto label_140450;
            case 0x140454u: goto label_140454;
            case 0x140458u: goto label_140458;
            case 0x14045Cu: goto label_14045c;
            case 0x140460u: goto label_140460;
            case 0x140464u: goto label_140464;
            case 0x140468u: goto label_140468;
            case 0x14046Cu: goto label_14046c;
            case 0x140470u: goto label_140470;
            case 0x140474u: goto label_140474;
            case 0x140478u: goto label_140478;
            case 0x14047Cu: goto label_14047c;
            case 0x140480u: goto label_140480;
            case 0x140484u: goto label_140484;
            case 0x140488u: goto label_140488;
            case 0x14048Cu: goto label_14048c;
            case 0x140490u: goto label_140490;
            case 0x140494u: goto label_140494;
            case 0x140498u: goto label_140498;
            case 0x14049Cu: goto label_14049c;
            case 0x1404A0u: goto label_1404a0;
            case 0x1404A4u: goto label_1404a4;
            case 0x1404A8u: goto label_1404a8;
            case 0x1404ACu: goto label_1404ac;
            case 0x1404B0u: goto label_1404b0;
            case 0x1404B4u: goto label_1404b4;
            case 0x1404B8u: goto label_1404b8;
            case 0x1404BCu: goto label_1404bc;
            case 0x1404C0u: goto label_1404c0;
            case 0x1404C4u: goto label_1404c4;
            case 0x1404C8u: goto label_1404c8;
            case 0x1404CCu: goto label_1404cc;
            case 0x1404D0u: goto label_1404d0;
            case 0x1404D4u: goto label_1404d4;
            case 0x1404D8u: goto label_1404d8;
            case 0x1404DCu: goto label_1404dc;
            case 0x1404E0u: goto label_1404e0;
            case 0x1404E4u: goto label_1404e4;
            case 0x1404E8u: goto label_1404e8;
            case 0x1404ECu: goto label_1404ec;
            case 0x1404F0u: goto label_1404f0;
            case 0x1404F4u: goto label_1404f4;
            case 0x1404F8u: goto label_1404f8;
            case 0x1404FCu: goto label_1404fc;
            case 0x140500u: goto label_140500;
            case 0x140504u: goto label_140504;
            case 0x140508u: goto label_140508;
            case 0x14050Cu: goto label_14050c;
            case 0x140510u: goto label_140510;
            case 0x140514u: goto label_140514;
            case 0x140518u: goto label_140518;
            case 0x14051Cu: goto label_14051c;
            case 0x140520u: goto label_140520;
            case 0x140524u: goto label_140524;
            case 0x140528u: goto label_140528;
            case 0x14052Cu: goto label_14052c;
            case 0x140530u: goto label_140530;
            case 0x140534u: goto label_140534;
            case 0x140538u: goto label_140538;
            case 0x14053Cu: goto label_14053c;
            case 0x140540u: goto label_140540;
            case 0x140544u: goto label_140544;
            case 0x140548u: goto label_140548;
            case 0x14054Cu: goto label_14054c;
            case 0x140550u: goto label_140550;
            case 0x140554u: goto label_140554;
            case 0x140558u: goto label_140558;
            case 0x14055Cu: goto label_14055c;
            case 0x140560u: goto label_140560;
            case 0x140564u: goto label_140564;
            case 0x140568u: goto label_140568;
            case 0x14056Cu: goto label_14056c;
            case 0x140570u: goto label_140570;
            case 0x140574u: goto label_140574;
            case 0x140578u: goto label_140578;
            case 0x14057Cu: goto label_14057c;
            case 0x140580u: goto label_140580;
            case 0x140584u: goto label_140584;
            case 0x140588u: goto label_140588;
            case 0x14058Cu: goto label_14058c;
            case 0x140590u: goto label_140590;
            case 0x140594u: goto label_140594;
            case 0x140598u: goto label_140598;
            case 0x14059Cu: goto label_14059c;
            case 0x1405A0u: goto label_1405a0;
            case 0x1405A4u: goto label_1405a4;
            case 0x1405A8u: goto label_1405a8;
            case 0x1405ACu: goto label_1405ac;
            case 0x1405B0u: goto label_1405b0;
            case 0x1405B4u: goto label_1405b4;
            case 0x1405B8u: goto label_1405b8;
            case 0x1405BCu: goto label_1405bc;
            case 0x1405C0u: goto label_1405c0;
            case 0x1405C4u: goto label_1405c4;
            case 0x1405C8u: goto label_1405c8;
            case 0x1405CCu: goto label_1405cc;
            case 0x1405D0u: goto label_1405d0;
            case 0x1405D4u: goto label_1405d4;
            case 0x1405D8u: goto label_1405d8;
            case 0x1405DCu: goto label_1405dc;
            case 0x1405E0u: goto label_1405e0;
            case 0x1405E4u: goto label_1405e4;
            case 0x1405E8u: goto label_1405e8;
            case 0x1405ECu: goto label_1405ec;
            case 0x1405F0u: goto label_1405f0;
            case 0x1405F4u: goto label_1405f4;
            case 0x1405F8u: goto label_1405f8;
            case 0x1405FCu: goto label_1405fc;
            case 0x140600u: goto label_140600;
            case 0x140604u: goto label_140604;
            case 0x140608u: goto label_140608;
            case 0x14060Cu: goto label_14060c;
            case 0x140610u: goto label_140610;
            case 0x140614u: goto label_140614;
            case 0x140618u: goto label_140618;
            case 0x14061Cu: goto label_14061c;
            case 0x140620u: goto label_140620;
            case 0x140624u: goto label_140624;
            case 0x140628u: goto label_140628;
            case 0x14062Cu: goto label_14062c;
            case 0x140630u: goto label_140630;
            case 0x140634u: goto label_140634;
            case 0x140638u: goto label_140638;
            case 0x14063Cu: goto label_14063c;
            case 0x140640u: goto label_140640;
            case 0x140644u: goto label_140644;
            case 0x140648u: goto label_140648;
            case 0x14064Cu: goto label_14064c;
            case 0x140650u: goto label_140650;
            case 0x140654u: goto label_140654;
            case 0x140658u: goto label_140658;
            case 0x14065Cu: goto label_14065c;
            case 0x140660u: goto label_140660;
            case 0x140664u: goto label_140664;
            case 0x140668u: goto label_140668;
            case 0x14066Cu: goto label_14066c;
            case 0x140670u: goto label_140670;
            case 0x140674u: goto label_140674;
            case 0x140678u: goto label_140678;
            case 0x14067Cu: goto label_14067c;
            case 0x140680u: goto label_140680;
            case 0x140684u: goto label_140684;
            case 0x140688u: goto label_140688;
            case 0x14068Cu: goto label_14068c;
            case 0x140690u: goto label_140690;
            case 0x140694u: goto label_140694;
            case 0x140698u: goto label_140698;
            case 0x14069Cu: goto label_14069c;
            case 0x1406A0u: goto label_1406a0;
            case 0x1406A4u: goto label_1406a4;
            case 0x1406A8u: goto label_1406a8;
            case 0x1406ACu: goto label_1406ac;
            case 0x1406B0u: goto label_1406b0;
            case 0x1406B4u: goto label_1406b4;
            case 0x1406B8u: goto label_1406b8;
            case 0x1406BCu: goto label_1406bc;
            case 0x1406C0u: goto label_1406c0;
            case 0x1406C4u: goto label_1406c4;
            case 0x1406C8u: goto label_1406c8;
            case 0x1406CCu: goto label_1406cc;
            case 0x1406D0u: goto label_1406d0;
            case 0x1406D4u: goto label_1406d4;
            case 0x1406D8u: goto label_1406d8;
            case 0x1406DCu: goto label_1406dc;
            case 0x1406E0u: goto label_1406e0;
            case 0x1406E4u: goto label_1406e4;
            case 0x1406E8u: goto label_1406e8;
            case 0x1406ECu: goto label_1406ec;
            case 0x1406F0u: goto label_1406f0;
            case 0x1406F4u: goto label_1406f4;
            case 0x1406F8u: goto label_1406f8;
            case 0x1406FCu: goto label_1406fc;
            case 0x140700u: goto label_140700;
            case 0x140704u: goto label_140704;
            case 0x140708u: goto label_140708;
            case 0x14070Cu: goto label_14070c;
            case 0x140710u: goto label_140710;
            case 0x140714u: goto label_140714;
            case 0x140718u: goto label_140718;
            case 0x14071Cu: goto label_14071c;
            case 0x140720u: goto label_140720;
            case 0x140724u: goto label_140724;
            case 0x140728u: goto label_140728;
            case 0x14072Cu: goto label_14072c;
            case 0x140730u: goto label_140730;
            case 0x140734u: goto label_140734;
            case 0x140738u: goto label_140738;
            case 0x14073Cu: goto label_14073c;
            case 0x140740u: goto label_140740;
            case 0x140744u: goto label_140744;
            case 0x140748u: goto label_140748;
            case 0x14074Cu: goto label_14074c;
            case 0x140750u: goto label_140750;
            case 0x140754u: goto label_140754;
            case 0x140758u: goto label_140758;
            case 0x14075Cu: goto label_14075c;
            case 0x140760u: goto label_140760;
            case 0x140764u: goto label_140764;
            case 0x140768u: goto label_140768;
            case 0x14076Cu: goto label_14076c;
            case 0x140770u: goto label_140770;
            case 0x140774u: goto label_140774;
            case 0x140778u: goto label_140778;
            case 0x14077Cu: goto label_14077c;
            case 0x140780u: goto label_140780;
            case 0x140784u: goto label_140784;
            case 0x140788u: goto label_140788;
            case 0x14078Cu: goto label_14078c;
            case 0x140790u: goto label_140790;
            case 0x140794u: goto label_140794;
            case 0x140798u: goto label_140798;
            case 0x14079Cu: goto label_14079c;
            case 0x1407A0u: goto label_1407a0;
            case 0x1407A4u: goto label_1407a4;
            case 0x1407A8u: goto label_1407a8;
            case 0x1407ACu: goto label_1407ac;
            case 0x1407B0u: goto label_1407b0;
            case 0x1407B4u: goto label_1407b4;
            case 0x1407B8u: goto label_1407b8;
            case 0x1407BCu: goto label_1407bc;
            case 0x1407C0u: goto label_1407c0;
            case 0x1407C4u: goto label_1407c4;
            case 0x1407C8u: goto label_1407c8;
            case 0x1407CCu: goto label_1407cc;
            case 0x1407D0u: goto label_1407d0;
            case 0x1407D4u: goto label_1407d4;
            case 0x1407D8u: goto label_1407d8;
            case 0x1407DCu: goto label_1407dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1407A4u;
label_1407a4:
    // 0x1407a4: 0x0
    ctx->pc = 0x1407a4u;
    // NOP
label_1407a8:
    // 0x1407a8: 0x8c830014
    ctx->pc = 0x1407a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1407ac:
    // 0x1407ac: 0x10600009
label_1407b0:
    if (ctx->pc == 0x1407B0u) {
        ctx->pc = 0x1407B0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1407B4u;
        goto label_1407b4;
    }
    ctx->pc = 0x1407ACu;
    {
        const bool branch_taken_0x1407ac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1407B0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1407ac) {
            ctx->pc = 0x1407D4u;
            goto label_1407d4;
        }
    }
    ctx->pc = 0x1407B4u;
label_1407b4:
    // 0x1407b4: 0x0
    ctx->pc = 0x1407b4u;
    // NOP
label_1407b8:
    // 0x1407b8: 0x8c630000
    ctx->pc = 0x1407b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1407bc:
    // 0x1407bc: 0x0
    ctx->pc = 0x1407bcu;
    // NOP
label_1407c0:
    // 0x1407c0: 0x0
    ctx->pc = 0x1407c0u;
    // NOP
label_1407c4:
    // 0x1407c4: 0x0
    ctx->pc = 0x1407c4u;
    // NOP
label_1407c8:
    // 0x1407c8: 0x0
    ctx->pc = 0x1407c8u;
    // NOP
label_1407cc:
    // 0x1407cc: 0x1460fffa
label_1407d0:
    if (ctx->pc == 0x1407D0u) {
        ctx->pc = 0x1407D0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x1407D4u;
        goto label_1407d4;
    }
    ctx->pc = 0x1407CCu;
    {
        const bool branch_taken_0x1407cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1407D0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x1407cc) {
            ctx->pc = 0x1407B8u;
            goto label_1407b8;
        }
    }
    ctx->pc = 0x1407D4u;
label_1407d4:
    // 0x1407d4: 0x3e00008
label_1407d8:
    if (ctx->pc == 0x1407D8u) {
        ctx->pc = 0x1407DCu;
        goto label_1407dc;
    }
    ctx->pc = 0x1407D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1401F8u: goto label_1401f8;
            case 0x1401FCu: goto label_1401fc;
            case 0x140200u: goto label_140200;
            case 0x140204u: goto label_140204;
            case 0x140208u: goto label_140208;
            case 0x14020Cu: goto label_14020c;
            case 0x140210u: goto label_140210;
            case 0x140214u: goto label_140214;
            case 0x140218u: goto label_140218;
            case 0x14021Cu: goto label_14021c;
            case 0x140220u: goto label_140220;
            case 0x140224u: goto label_140224;
            case 0x140228u: goto label_140228;
            case 0x14022Cu: goto label_14022c;
            case 0x140230u: goto label_140230;
            case 0x140234u: goto label_140234;
            case 0x140238u: goto label_140238;
            case 0x14023Cu: goto label_14023c;
            case 0x140240u: goto label_140240;
            case 0x140244u: goto label_140244;
            case 0x140248u: goto label_140248;
            case 0x14024Cu: goto label_14024c;
            case 0x140250u: goto label_140250;
            case 0x140254u: goto label_140254;
            case 0x140258u: goto label_140258;
            case 0x14025Cu: goto label_14025c;
            case 0x140260u: goto label_140260;
            case 0x140264u: goto label_140264;
            case 0x140268u: goto label_140268;
            case 0x14026Cu: goto label_14026c;
            case 0x140270u: goto label_140270;
            case 0x140274u: goto label_140274;
            case 0x140278u: goto label_140278;
            case 0x14027Cu: goto label_14027c;
            case 0x140280u: goto label_140280;
            case 0x140284u: goto label_140284;
            case 0x140288u: goto label_140288;
            case 0x14028Cu: goto label_14028c;
            case 0x140290u: goto label_140290;
            case 0x140294u: goto label_140294;
            case 0x140298u: goto label_140298;
            case 0x14029Cu: goto label_14029c;
            case 0x1402A0u: goto label_1402a0;
            case 0x1402A4u: goto label_1402a4;
            case 0x1402A8u: goto label_1402a8;
            case 0x1402ACu: goto label_1402ac;
            case 0x1402B0u: goto label_1402b0;
            case 0x1402B4u: goto label_1402b4;
            case 0x1402B8u: goto label_1402b8;
            case 0x1402BCu: goto label_1402bc;
            case 0x1402C0u: goto label_1402c0;
            case 0x1402C4u: goto label_1402c4;
            case 0x1402C8u: goto label_1402c8;
            case 0x1402CCu: goto label_1402cc;
            case 0x1402D0u: goto label_1402d0;
            case 0x1402D4u: goto label_1402d4;
            case 0x1402D8u: goto label_1402d8;
            case 0x1402DCu: goto label_1402dc;
            case 0x1402E0u: goto label_1402e0;
            case 0x1402E4u: goto label_1402e4;
            case 0x1402E8u: goto label_1402e8;
            case 0x1402ECu: goto label_1402ec;
            case 0x1402F0u: goto label_1402f0;
            case 0x1402F4u: goto label_1402f4;
            case 0x1402F8u: goto label_1402f8;
            case 0x1402FCu: goto label_1402fc;
            case 0x140300u: goto label_140300;
            case 0x140304u: goto label_140304;
            case 0x140308u: goto label_140308;
            case 0x14030Cu: goto label_14030c;
            case 0x140310u: goto label_140310;
            case 0x140314u: goto label_140314;
            case 0x140318u: goto label_140318;
            case 0x14031Cu: goto label_14031c;
            case 0x140320u: goto label_140320;
            case 0x140324u: goto label_140324;
            case 0x140328u: goto label_140328;
            case 0x14032Cu: goto label_14032c;
            case 0x140330u: goto label_140330;
            case 0x140334u: goto label_140334;
            case 0x140338u: goto label_140338;
            case 0x14033Cu: goto label_14033c;
            case 0x140340u: goto label_140340;
            case 0x140344u: goto label_140344;
            case 0x140348u: goto label_140348;
            case 0x14034Cu: goto label_14034c;
            case 0x140350u: goto label_140350;
            case 0x140354u: goto label_140354;
            case 0x140358u: goto label_140358;
            case 0x14035Cu: goto label_14035c;
            case 0x140360u: goto label_140360;
            case 0x140364u: goto label_140364;
            case 0x140368u: goto label_140368;
            case 0x14036Cu: goto label_14036c;
            case 0x140370u: goto label_140370;
            case 0x140374u: goto label_140374;
            case 0x140378u: goto label_140378;
            case 0x14037Cu: goto label_14037c;
            case 0x140380u: goto label_140380;
            case 0x140384u: goto label_140384;
            case 0x140388u: goto label_140388;
            case 0x14038Cu: goto label_14038c;
            case 0x140390u: goto label_140390;
            case 0x140394u: goto label_140394;
            case 0x140398u: goto label_140398;
            case 0x14039Cu: goto label_14039c;
            case 0x1403A0u: goto label_1403a0;
            case 0x1403A4u: goto label_1403a4;
            case 0x1403A8u: goto label_1403a8;
            case 0x1403ACu: goto label_1403ac;
            case 0x1403B0u: goto label_1403b0;
            case 0x1403B4u: goto label_1403b4;
            case 0x1403B8u: goto label_1403b8;
            case 0x1403BCu: goto label_1403bc;
            case 0x1403C0u: goto label_1403c0;
            case 0x1403C4u: goto label_1403c4;
            case 0x1403C8u: goto label_1403c8;
            case 0x1403CCu: goto label_1403cc;
            case 0x1403D0u: goto label_1403d0;
            case 0x1403D4u: goto label_1403d4;
            case 0x1403D8u: goto label_1403d8;
            case 0x1403DCu: goto label_1403dc;
            case 0x1403E0u: goto label_1403e0;
            case 0x1403E4u: goto label_1403e4;
            case 0x1403E8u: goto label_1403e8;
            case 0x1403ECu: goto label_1403ec;
            case 0x1403F0u: goto label_1403f0;
            case 0x1403F4u: goto label_1403f4;
            case 0x1403F8u: goto label_1403f8;
            case 0x1403FCu: goto label_1403fc;
            case 0x140400u: goto label_140400;
            case 0x140404u: goto label_140404;
            case 0x140408u: goto label_140408;
            case 0x14040Cu: goto label_14040c;
            case 0x140410u: goto label_140410;
            case 0x140414u: goto label_140414;
            case 0x140418u: goto label_140418;
            case 0x14041Cu: goto label_14041c;
            case 0x140420u: goto label_140420;
            case 0x140424u: goto label_140424;
            case 0x140428u: goto label_140428;
            case 0x14042Cu: goto label_14042c;
            case 0x140430u: goto label_140430;
            case 0x140434u: goto label_140434;
            case 0x140438u: goto label_140438;
            case 0x14043Cu: goto label_14043c;
            case 0x140440u: goto label_140440;
            case 0x140444u: goto label_140444;
            case 0x140448u: goto label_140448;
            case 0x14044Cu: goto label_14044c;
            case 0x140450u: goto label_140450;
            case 0x140454u: goto label_140454;
            case 0x140458u: goto label_140458;
            case 0x14045Cu: goto label_14045c;
            case 0x140460u: goto label_140460;
            case 0x140464u: goto label_140464;
            case 0x140468u: goto label_140468;
            case 0x14046Cu: goto label_14046c;
            case 0x140470u: goto label_140470;
            case 0x140474u: goto label_140474;
            case 0x140478u: goto label_140478;
            case 0x14047Cu: goto label_14047c;
            case 0x140480u: goto label_140480;
            case 0x140484u: goto label_140484;
            case 0x140488u: goto label_140488;
            case 0x14048Cu: goto label_14048c;
            case 0x140490u: goto label_140490;
            case 0x140494u: goto label_140494;
            case 0x140498u: goto label_140498;
            case 0x14049Cu: goto label_14049c;
            case 0x1404A0u: goto label_1404a0;
            case 0x1404A4u: goto label_1404a4;
            case 0x1404A8u: goto label_1404a8;
            case 0x1404ACu: goto label_1404ac;
            case 0x1404B0u: goto label_1404b0;
            case 0x1404B4u: goto label_1404b4;
            case 0x1404B8u: goto label_1404b8;
            case 0x1404BCu: goto label_1404bc;
            case 0x1404C0u: goto label_1404c0;
            case 0x1404C4u: goto label_1404c4;
            case 0x1404C8u: goto label_1404c8;
            case 0x1404CCu: goto label_1404cc;
            case 0x1404D0u: goto label_1404d0;
            case 0x1404D4u: goto label_1404d4;
            case 0x1404D8u: goto label_1404d8;
            case 0x1404DCu: goto label_1404dc;
            case 0x1404E0u: goto label_1404e0;
            case 0x1404E4u: goto label_1404e4;
            case 0x1404E8u: goto label_1404e8;
            case 0x1404ECu: goto label_1404ec;
            case 0x1404F0u: goto label_1404f0;
            case 0x1404F4u: goto label_1404f4;
            case 0x1404F8u: goto label_1404f8;
            case 0x1404FCu: goto label_1404fc;
            case 0x140500u: goto label_140500;
            case 0x140504u: goto label_140504;
            case 0x140508u: goto label_140508;
            case 0x14050Cu: goto label_14050c;
            case 0x140510u: goto label_140510;
            case 0x140514u: goto label_140514;
            case 0x140518u: goto label_140518;
            case 0x14051Cu: goto label_14051c;
            case 0x140520u: goto label_140520;
            case 0x140524u: goto label_140524;
            case 0x140528u: goto label_140528;
            case 0x14052Cu: goto label_14052c;
            case 0x140530u: goto label_140530;
            case 0x140534u: goto label_140534;
            case 0x140538u: goto label_140538;
            case 0x14053Cu: goto label_14053c;
            case 0x140540u: goto label_140540;
            case 0x140544u: goto label_140544;
            case 0x140548u: goto label_140548;
            case 0x14054Cu: goto label_14054c;
            case 0x140550u: goto label_140550;
            case 0x140554u: goto label_140554;
            case 0x140558u: goto label_140558;
            case 0x14055Cu: goto label_14055c;
            case 0x140560u: goto label_140560;
            case 0x140564u: goto label_140564;
            case 0x140568u: goto label_140568;
            case 0x14056Cu: goto label_14056c;
            case 0x140570u: goto label_140570;
            case 0x140574u: goto label_140574;
            case 0x140578u: goto label_140578;
            case 0x14057Cu: goto label_14057c;
            case 0x140580u: goto label_140580;
            case 0x140584u: goto label_140584;
            case 0x140588u: goto label_140588;
            case 0x14058Cu: goto label_14058c;
            case 0x140590u: goto label_140590;
            case 0x140594u: goto label_140594;
            case 0x140598u: goto label_140598;
            case 0x14059Cu: goto label_14059c;
            case 0x1405A0u: goto label_1405a0;
            case 0x1405A4u: goto label_1405a4;
            case 0x1405A8u: goto label_1405a8;
            case 0x1405ACu: goto label_1405ac;
            case 0x1405B0u: goto label_1405b0;
            case 0x1405B4u: goto label_1405b4;
            case 0x1405B8u: goto label_1405b8;
            case 0x1405BCu: goto label_1405bc;
            case 0x1405C0u: goto label_1405c0;
            case 0x1405C4u: goto label_1405c4;
            case 0x1405C8u: goto label_1405c8;
            case 0x1405CCu: goto label_1405cc;
            case 0x1405D0u: goto label_1405d0;
            case 0x1405D4u: goto label_1405d4;
            case 0x1405D8u: goto label_1405d8;
            case 0x1405DCu: goto label_1405dc;
            case 0x1405E0u: goto label_1405e0;
            case 0x1405E4u: goto label_1405e4;
            case 0x1405E8u: goto label_1405e8;
            case 0x1405ECu: goto label_1405ec;
            case 0x1405F0u: goto label_1405f0;
            case 0x1405F4u: goto label_1405f4;
            case 0x1405F8u: goto label_1405f8;
            case 0x1405FCu: goto label_1405fc;
            case 0x140600u: goto label_140600;
            case 0x140604u: goto label_140604;
            case 0x140608u: goto label_140608;
            case 0x14060Cu: goto label_14060c;
            case 0x140610u: goto label_140610;
            case 0x140614u: goto label_140614;
            case 0x140618u: goto label_140618;
            case 0x14061Cu: goto label_14061c;
            case 0x140620u: goto label_140620;
            case 0x140624u: goto label_140624;
            case 0x140628u: goto label_140628;
            case 0x14062Cu: goto label_14062c;
            case 0x140630u: goto label_140630;
            case 0x140634u: goto label_140634;
            case 0x140638u: goto label_140638;
            case 0x14063Cu: goto label_14063c;
            case 0x140640u: goto label_140640;
            case 0x140644u: goto label_140644;
            case 0x140648u: goto label_140648;
            case 0x14064Cu: goto label_14064c;
            case 0x140650u: goto label_140650;
            case 0x140654u: goto label_140654;
            case 0x140658u: goto label_140658;
            case 0x14065Cu: goto label_14065c;
            case 0x140660u: goto label_140660;
            case 0x140664u: goto label_140664;
            case 0x140668u: goto label_140668;
            case 0x14066Cu: goto label_14066c;
            case 0x140670u: goto label_140670;
            case 0x140674u: goto label_140674;
            case 0x140678u: goto label_140678;
            case 0x14067Cu: goto label_14067c;
            case 0x140680u: goto label_140680;
            case 0x140684u: goto label_140684;
            case 0x140688u: goto label_140688;
            case 0x14068Cu: goto label_14068c;
            case 0x140690u: goto label_140690;
            case 0x140694u: goto label_140694;
            case 0x140698u: goto label_140698;
            case 0x14069Cu: goto label_14069c;
            case 0x1406A0u: goto label_1406a0;
            case 0x1406A4u: goto label_1406a4;
            case 0x1406A8u: goto label_1406a8;
            case 0x1406ACu: goto label_1406ac;
            case 0x1406B0u: goto label_1406b0;
            case 0x1406B4u: goto label_1406b4;
            case 0x1406B8u: goto label_1406b8;
            case 0x1406BCu: goto label_1406bc;
            case 0x1406C0u: goto label_1406c0;
            case 0x1406C4u: goto label_1406c4;
            case 0x1406C8u: goto label_1406c8;
            case 0x1406CCu: goto label_1406cc;
            case 0x1406D0u: goto label_1406d0;
            case 0x1406D4u: goto label_1406d4;
            case 0x1406D8u: goto label_1406d8;
            case 0x1406DCu: goto label_1406dc;
            case 0x1406E0u: goto label_1406e0;
            case 0x1406E4u: goto label_1406e4;
            case 0x1406E8u: goto label_1406e8;
            case 0x1406ECu: goto label_1406ec;
            case 0x1406F0u: goto label_1406f0;
            case 0x1406F4u: goto label_1406f4;
            case 0x1406F8u: goto label_1406f8;
            case 0x1406FCu: goto label_1406fc;
            case 0x140700u: goto label_140700;
            case 0x140704u: goto label_140704;
            case 0x140708u: goto label_140708;
            case 0x14070Cu: goto label_14070c;
            case 0x140710u: goto label_140710;
            case 0x140714u: goto label_140714;
            case 0x140718u: goto label_140718;
            case 0x14071Cu: goto label_14071c;
            case 0x140720u: goto label_140720;
            case 0x140724u: goto label_140724;
            case 0x140728u: goto label_140728;
            case 0x14072Cu: goto label_14072c;
            case 0x140730u: goto label_140730;
            case 0x140734u: goto label_140734;
            case 0x140738u: goto label_140738;
            case 0x14073Cu: goto label_14073c;
            case 0x140740u: goto label_140740;
            case 0x140744u: goto label_140744;
            case 0x140748u: goto label_140748;
            case 0x14074Cu: goto label_14074c;
            case 0x140750u: goto label_140750;
            case 0x140754u: goto label_140754;
            case 0x140758u: goto label_140758;
            case 0x14075Cu: goto label_14075c;
            case 0x140760u: goto label_140760;
            case 0x140764u: goto label_140764;
            case 0x140768u: goto label_140768;
            case 0x14076Cu: goto label_14076c;
            case 0x140770u: goto label_140770;
            case 0x140774u: goto label_140774;
            case 0x140778u: goto label_140778;
            case 0x14077Cu: goto label_14077c;
            case 0x140780u: goto label_140780;
            case 0x140784u: goto label_140784;
            case 0x140788u: goto label_140788;
            case 0x14078Cu: goto label_14078c;
            case 0x140790u: goto label_140790;
            case 0x140794u: goto label_140794;
            case 0x140798u: goto label_140798;
            case 0x14079Cu: goto label_14079c;
            case 0x1407A0u: goto label_1407a0;
            case 0x1407A4u: goto label_1407a4;
            case 0x1407A8u: goto label_1407a8;
            case 0x1407ACu: goto label_1407ac;
            case 0x1407B0u: goto label_1407b0;
            case 0x1407B4u: goto label_1407b4;
            case 0x1407B8u: goto label_1407b8;
            case 0x1407BCu: goto label_1407bc;
            case 0x1407C0u: goto label_1407c0;
            case 0x1407C4u: goto label_1407c4;
            case 0x1407C8u: goto label_1407c8;
            case 0x1407CCu: goto label_1407cc;
            case 0x1407D0u: goto label_1407d0;
            case 0x1407D4u: goto label_1407d4;
            case 0x1407D8u: goto label_1407d8;
            case 0x1407DCu: goto label_1407dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1407DCu;
label_1407dc:
    // 0x1407dc: 0x0
    ctx->pc = 0x1407dcu;
    // NOP
}
