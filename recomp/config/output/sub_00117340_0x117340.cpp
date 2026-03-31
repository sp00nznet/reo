#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00117340
// Address: 0x117340 - 0x1176b8
void sub_00117340_0x117340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x117340u;

label_117340:
    // 0x117340: 0x27bdfff0
    ctx->pc = 0x117340u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_117344:
    // 0x117344: 0x4a00005
label_117348:
    if (ctx->pc == 0x117348u) {
        ctx->pc = 0x117348u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x11734Cu;
        goto label_11734c;
    }
    ctx->pc = 0x117344u;
    {
        const bool branch_taken_0x117344 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x117348u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x117344) {
            ctx->pc = 0x11735Cu;
            goto label_11735c;
        }
    }
    ctx->pc = 0x11734Cu;
label_11734c:
    // 0x11734c: 0x8c820020
    ctx->pc = 0x11734cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_117350:
    // 0x117350: 0xa2102a
    ctx->pc = 0x117350u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
label_117354:
    // 0x117354: 0x54400005
label_117358:
    if (ctx->pc == 0x117358u) {
        ctx->pc = 0x117358u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->pc = 0x11735Cu;
        goto label_11735c;
    }
    ctx->pc = 0x117354u;
    {
        const bool branch_taken_0x117354 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x117354) {
            ctx->pc = 0x117358u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 28)));
            ctx->pc = 0x11736Cu;
            goto label_11736c;
        }
    }
    ctx->pc = 0x11735Cu;
label_11735c:
    // 0x11735c: 0xc045cc4
label_117360:
    if (ctx->pc == 0x117360u) {
        ctx->pc = 0x117364u;
        goto label_117364;
    }
    ctx->pc = 0x11735Cu;
    SET_GPR_U32(ctx, 31, 0x117364u);
    ctx->pc = 0x117310u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00117310_0x117310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117364u; }
    }
    if (ctx->pc != 0x117364u) { return; }
    ctx->pc = 0x117364u;
label_117364:
    // 0x117364: 0x10000004
label_117368:
    if (ctx->pc == 0x117368u) {
        ctx->pc = 0x117368u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x11736Cu;
        goto label_11736c;
    }
    ctx->pc = 0x117364u;
    {
        const bool branch_taken_0x117364 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x117368u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x117364) {
            ctx->pc = 0x117378u;
            goto label_117378;
        }
    }
    ctx->pc = 0x11736Cu;
label_11736c:
    // 0x11736c: 0x51180
    ctx->pc = 0x11736cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 6));
label_117370:
    // 0x117370: 0x621021
    ctx->pc = 0x117370u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_117374:
    // 0x117374: 0xdfbf0000
    ctx->pc = 0x117374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_117378:
    // 0x117378: 0x3e00008
label_11737c:
    if (ctx->pc == 0x11737Cu) {
        ctx->pc = 0x11737Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x117380u;
        goto label_117380;
    }
    ctx->pc = 0x117378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11737Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117340u: goto label_117340;
            case 0x117344u: goto label_117344;
            case 0x117348u: goto label_117348;
            case 0x11734Cu: goto label_11734c;
            case 0x117350u: goto label_117350;
            case 0x117354u: goto label_117354;
            case 0x117358u: goto label_117358;
            case 0x11735Cu: goto label_11735c;
            case 0x117360u: goto label_117360;
            case 0x117364u: goto label_117364;
            case 0x117368u: goto label_117368;
            case 0x11736Cu: goto label_11736c;
            case 0x117370u: goto label_117370;
            case 0x117374u: goto label_117374;
            case 0x117378u: goto label_117378;
            case 0x11737Cu: goto label_11737c;
            case 0x117380u: goto label_117380;
            case 0x117384u: goto label_117384;
            case 0x117388u: goto label_117388;
            case 0x11738Cu: goto label_11738c;
            case 0x117390u: goto label_117390;
            case 0x117394u: goto label_117394;
            case 0x117398u: goto label_117398;
            case 0x11739Cu: goto label_11739c;
            case 0x1173A0u: goto label_1173a0;
            case 0x1173A4u: goto label_1173a4;
            case 0x1173A8u: goto label_1173a8;
            case 0x1173ACu: goto label_1173ac;
            case 0x1173B0u: goto label_1173b0;
            case 0x1173B4u: goto label_1173b4;
            case 0x1173B8u: goto label_1173b8;
            case 0x1173BCu: goto label_1173bc;
            case 0x1173C0u: goto label_1173c0;
            case 0x1173C4u: goto label_1173c4;
            case 0x1173C8u: goto label_1173c8;
            case 0x1173CCu: goto label_1173cc;
            case 0x1173D0u: goto label_1173d0;
            case 0x1173D4u: goto label_1173d4;
            case 0x1173D8u: goto label_1173d8;
            case 0x1173DCu: goto label_1173dc;
            case 0x1173E0u: goto label_1173e0;
            case 0x1173E4u: goto label_1173e4;
            case 0x1173E8u: goto label_1173e8;
            case 0x1173ECu: goto label_1173ec;
            case 0x1173F0u: goto label_1173f0;
            case 0x1173F4u: goto label_1173f4;
            case 0x1173F8u: goto label_1173f8;
            case 0x1173FCu: goto label_1173fc;
            case 0x117400u: goto label_117400;
            case 0x117404u: goto label_117404;
            case 0x117408u: goto label_117408;
            case 0x11740Cu: goto label_11740c;
            case 0x117410u: goto label_117410;
            case 0x117414u: goto label_117414;
            case 0x117418u: goto label_117418;
            case 0x11741Cu: goto label_11741c;
            case 0x117420u: goto label_117420;
            case 0x117424u: goto label_117424;
            case 0x117428u: goto label_117428;
            case 0x11742Cu: goto label_11742c;
            case 0x117430u: goto label_117430;
            case 0x117434u: goto label_117434;
            case 0x117438u: goto label_117438;
            case 0x11743Cu: goto label_11743c;
            case 0x117440u: goto label_117440;
            case 0x117444u: goto label_117444;
            case 0x117448u: goto label_117448;
            case 0x11744Cu: goto label_11744c;
            case 0x117450u: goto label_117450;
            case 0x117454u: goto label_117454;
            case 0x117458u: goto label_117458;
            case 0x11745Cu: goto label_11745c;
            case 0x117460u: goto label_117460;
            case 0x117464u: goto label_117464;
            case 0x117468u: goto label_117468;
            case 0x11746Cu: goto label_11746c;
            case 0x117470u: goto label_117470;
            case 0x117474u: goto label_117474;
            case 0x117478u: goto label_117478;
            case 0x11747Cu: goto label_11747c;
            case 0x117480u: goto label_117480;
            case 0x117484u: goto label_117484;
            case 0x117488u: goto label_117488;
            case 0x11748Cu: goto label_11748c;
            case 0x117490u: goto label_117490;
            case 0x117494u: goto label_117494;
            case 0x117498u: goto label_117498;
            case 0x11749Cu: goto label_11749c;
            case 0x1174A0u: goto label_1174a0;
            case 0x1174A4u: goto label_1174a4;
            case 0x1174A8u: goto label_1174a8;
            case 0x1174ACu: goto label_1174ac;
            case 0x1174B0u: goto label_1174b0;
            case 0x1174B4u: goto label_1174b4;
            case 0x1174B8u: goto label_1174b8;
            case 0x1174BCu: goto label_1174bc;
            case 0x1174C0u: goto label_1174c0;
            case 0x1174C4u: goto label_1174c4;
            case 0x1174C8u: goto label_1174c8;
            case 0x1174CCu: goto label_1174cc;
            case 0x1174D0u: goto label_1174d0;
            case 0x1174D4u: goto label_1174d4;
            case 0x1174D8u: goto label_1174d8;
            case 0x1174DCu: goto label_1174dc;
            case 0x1174E0u: goto label_1174e0;
            case 0x1174E4u: goto label_1174e4;
            case 0x1174E8u: goto label_1174e8;
            case 0x1174ECu: goto label_1174ec;
            case 0x1174F0u: goto label_1174f0;
            case 0x1174F4u: goto label_1174f4;
            case 0x1174F8u: goto label_1174f8;
            case 0x1174FCu: goto label_1174fc;
            case 0x117500u: goto label_117500;
            case 0x117504u: goto label_117504;
            case 0x117508u: goto label_117508;
            case 0x11750Cu: goto label_11750c;
            case 0x117510u: goto label_117510;
            case 0x117514u: goto label_117514;
            case 0x117518u: goto label_117518;
            case 0x11751Cu: goto label_11751c;
            case 0x117520u: goto label_117520;
            case 0x117524u: goto label_117524;
            case 0x117528u: goto label_117528;
            case 0x11752Cu: goto label_11752c;
            case 0x117530u: goto label_117530;
            case 0x117534u: goto label_117534;
            case 0x117538u: goto label_117538;
            case 0x11753Cu: goto label_11753c;
            case 0x117540u: goto label_117540;
            case 0x117544u: goto label_117544;
            case 0x117548u: goto label_117548;
            case 0x11754Cu: goto label_11754c;
            case 0x117550u: goto label_117550;
            case 0x117554u: goto label_117554;
            case 0x117558u: goto label_117558;
            case 0x11755Cu: goto label_11755c;
            case 0x117560u: goto label_117560;
            case 0x117564u: goto label_117564;
            case 0x117568u: goto label_117568;
            case 0x11756Cu: goto label_11756c;
            case 0x117570u: goto label_117570;
            case 0x117574u: goto label_117574;
            case 0x117578u: goto label_117578;
            case 0x11757Cu: goto label_11757c;
            case 0x117580u: goto label_117580;
            case 0x117584u: goto label_117584;
            case 0x117588u: goto label_117588;
            case 0x11758Cu: goto label_11758c;
            case 0x117590u: goto label_117590;
            case 0x117594u: goto label_117594;
            case 0x117598u: goto label_117598;
            case 0x11759Cu: goto label_11759c;
            case 0x1175A0u: goto label_1175a0;
            case 0x1175A4u: goto label_1175a4;
            case 0x1175A8u: goto label_1175a8;
            case 0x1175ACu: goto label_1175ac;
            case 0x1175B0u: goto label_1175b0;
            case 0x1175B4u: goto label_1175b4;
            case 0x1175B8u: goto label_1175b8;
            case 0x1175BCu: goto label_1175bc;
            case 0x1175C0u: goto label_1175c0;
            case 0x1175C4u: goto label_1175c4;
            case 0x1175C8u: goto label_1175c8;
            case 0x1175CCu: goto label_1175cc;
            case 0x1175D0u: goto label_1175d0;
            case 0x1175D4u: goto label_1175d4;
            case 0x1175D8u: goto label_1175d8;
            case 0x1175DCu: goto label_1175dc;
            case 0x1175E0u: goto label_1175e0;
            case 0x1175E4u: goto label_1175e4;
            case 0x1175E8u: goto label_1175e8;
            case 0x1175ECu: goto label_1175ec;
            case 0x1175F0u: goto label_1175f0;
            case 0x1175F4u: goto label_1175f4;
            case 0x1175F8u: goto label_1175f8;
            case 0x1175FCu: goto label_1175fc;
            case 0x117600u: goto label_117600;
            case 0x117604u: goto label_117604;
            case 0x117608u: goto label_117608;
            case 0x11760Cu: goto label_11760c;
            case 0x117610u: goto label_117610;
            case 0x117614u: goto label_117614;
            case 0x117618u: goto label_117618;
            case 0x11761Cu: goto label_11761c;
            case 0x117620u: goto label_117620;
            case 0x117624u: goto label_117624;
            case 0x117628u: goto label_117628;
            case 0x11762Cu: goto label_11762c;
            case 0x117630u: goto label_117630;
            case 0x117634u: goto label_117634;
            case 0x117638u: goto label_117638;
            case 0x11763Cu: goto label_11763c;
            case 0x117640u: goto label_117640;
            case 0x117644u: goto label_117644;
            case 0x117648u: goto label_117648;
            case 0x11764Cu: goto label_11764c;
            case 0x117650u: goto label_117650;
            case 0x117654u: goto label_117654;
            case 0x117658u: goto label_117658;
            case 0x11765Cu: goto label_11765c;
            case 0x117660u: goto label_117660;
            case 0x117664u: goto label_117664;
            case 0x117668u: goto label_117668;
            case 0x11766Cu: goto label_11766c;
            case 0x117670u: goto label_117670;
            case 0x117674u: goto label_117674;
            case 0x117678u: goto label_117678;
            case 0x11767Cu: goto label_11767c;
            case 0x117680u: goto label_117680;
            case 0x117684u: goto label_117684;
            case 0x117688u: goto label_117688;
            case 0x11768Cu: goto label_11768c;
            case 0x117690u: goto label_117690;
            case 0x117694u: goto label_117694;
            case 0x117698u: goto label_117698;
            case 0x11769Cu: goto label_11769c;
            case 0x1176A0u: goto label_1176a0;
            case 0x1176A4u: goto label_1176a4;
            case 0x1176A8u: goto label_1176a8;
            case 0x1176ACu: goto label_1176ac;
            case 0x1176B0u: goto label_1176b0;
            case 0x1176B4u: goto label_1176b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x117380u;
label_117380:
    // 0x117380: 0x27bdffc0
    ctx->pc = 0x117380u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_117384:
    // 0x117384: 0x3c028000
    ctx->pc = 0x117384u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
label_117388:
    // 0x117388: 0xffb20020
    ctx->pc = 0x117388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_11738c:
    // 0x11738c: 0x3442000a
    ctx->pc = 0x11738cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 10));
label_117390:
    // 0x117390: 0xffbf0030
    ctx->pc = 0x117390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_117394:
    // 0x117394: 0x80902d
    ctx->pc = 0x117394u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_117398:
    // 0x117398: 0xffb10010
    ctx->pc = 0x117398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_11739c:
    // 0x11739c: 0xffb00000
    ctx->pc = 0x11739cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1173a0:
    // 0x1173a0: 0x8e430020
    ctx->pc = 0x1173a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_1173a4:
    // 0x1173a4: 0x10620009
label_1173a8:
    if (ctx->pc == 0x1173A8u) {
        ctx->pc = 0x1173A8u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1173ACu;
        goto label_1173ac;
    }
    ctx->pc = 0x1173A4u;
    {
        const bool branch_taken_0x1173a4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1173A8u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x1173a4) {
            ctx->pc = 0x1173CCu;
            goto label_1173cc;
        }
    }
    ctx->pc = 0x1173ACu;
label_1173ac:
    // 0x1173ac: 0x14400019
label_1173b0:
    if (ctx->pc == 0x1173B0u) {
        ctx->pc = 0x1173B0u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->pc = 0x1173B4u;
        goto label_1173b4;
    }
    ctx->pc = 0x1173ACu;
    {
        const bool branch_taken_0x1173ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1173B0u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 28)));
        if (branch_taken_0x1173ac) {
            ctx->pc = 0x117414u;
            goto label_117414;
        }
    }
    ctx->pc = 0x1173B4u;
label_1173b4:
    // 0x1173b4: 0x3c028000
    ctx->pc = 0x1173b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
label_1173b8:
    // 0x1173b8: 0x34420009
    ctx->pc = 0x1173b8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 9));
label_1173bc:
    // 0x1173bc: 0x10620011
label_1173c0:
    if (ctx->pc == 0x1173C0u) {
        ctx->pc = 0x1173C4u;
        goto label_1173c4;
    }
    ctx->pc = 0x1173BCu;
    {
        const bool branch_taken_0x1173bc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1173bc) {
            ctx->pc = 0x117404u;
            goto label_117404;
        }
    }
    ctx->pc = 0x1173C4u;
label_1173c4:
    // 0x1173c4: 0x10000014
label_1173c8:
    if (ctx->pc == 0x1173C8u) {
        ctx->pc = 0x1173C8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x1173CCu;
        goto label_1173cc;
    }
    ctx->pc = 0x1173C4u;
    {
        const bool branch_taken_0x1173c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1173C8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
        if (branch_taken_0x1173c4) {
            ctx->pc = 0x117418u;
            goto label_117418;
        }
    }
    ctx->pc = 0x1173CCu;
label_1173cc:
    // 0x1173cc: 0x8e51001c
    ctx->pc = 0x1173ccu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_1173d0:
    // 0x1173d0: 0x8e22001c
    ctx->pc = 0x1173d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1173d4:
    // 0x1173d4: 0x50400010
label_1173d8:
    if (ctx->pc == 0x1173D8u) {
        ctx->pc = 0x1173D8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x1173DCu;
        goto label_1173dc;
    }
    ctx->pc = 0x1173D4u;
    {
        const bool branch_taken_0x1173d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1173d4) {
            ctx->pc = 0x1173D8u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->pc = 0x117418u;
            goto label_117418;
        }
    }
    ctx->pc = 0x1173DCu;
label_1173dc:
    // 0x1173dc: 0x8e220018
    ctx->pc = 0x1173dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1173e0:
    // 0x1173e0: 0x380802d
    ctx->pc = 0x1173e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_1173e4:
    // 0x1173e4: 0x40e02d
    ctx->pc = 0x1173e4u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1173e8:
    // 0x1173e8: 0x8e22001c
    ctx->pc = 0x1173e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1173ec:
    // 0x1173ec: 0x40f809
label_1173f0:
    if (ctx->pc == 0x1173F0u) {
        ctx->pc = 0x1173F0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->pc = 0x1173F4u;
        goto label_1173f4;
    }
    ctx->pc = 0x1173ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1173F4u);
        ctx->pc = 0x1173F0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117340u: goto label_117340;
            case 0x117344u: goto label_117344;
            case 0x117348u: goto label_117348;
            case 0x11734Cu: goto label_11734c;
            case 0x117350u: goto label_117350;
            case 0x117354u: goto label_117354;
            case 0x117358u: goto label_117358;
            case 0x11735Cu: goto label_11735c;
            case 0x117360u: goto label_117360;
            case 0x117364u: goto label_117364;
            case 0x117368u: goto label_117368;
            case 0x11736Cu: goto label_11736c;
            case 0x117370u: goto label_117370;
            case 0x117374u: goto label_117374;
            case 0x117378u: goto label_117378;
            case 0x11737Cu: goto label_11737c;
            case 0x117380u: goto label_117380;
            case 0x117384u: goto label_117384;
            case 0x117388u: goto label_117388;
            case 0x11738Cu: goto label_11738c;
            case 0x117390u: goto label_117390;
            case 0x117394u: goto label_117394;
            case 0x117398u: goto label_117398;
            case 0x11739Cu: goto label_11739c;
            case 0x1173A0u: goto label_1173a0;
            case 0x1173A4u: goto label_1173a4;
            case 0x1173A8u: goto label_1173a8;
            case 0x1173ACu: goto label_1173ac;
            case 0x1173B0u: goto label_1173b0;
            case 0x1173B4u: goto label_1173b4;
            case 0x1173B8u: goto label_1173b8;
            case 0x1173BCu: goto label_1173bc;
            case 0x1173C0u: goto label_1173c0;
            case 0x1173C4u: goto label_1173c4;
            case 0x1173C8u: goto label_1173c8;
            case 0x1173CCu: goto label_1173cc;
            case 0x1173D0u: goto label_1173d0;
            case 0x1173D4u: goto label_1173d4;
            case 0x1173D8u: goto label_1173d8;
            case 0x1173DCu: goto label_1173dc;
            case 0x1173E0u: goto label_1173e0;
            case 0x1173E4u: goto label_1173e4;
            case 0x1173E8u: goto label_1173e8;
            case 0x1173ECu: goto label_1173ec;
            case 0x1173F0u: goto label_1173f0;
            case 0x1173F4u: goto label_1173f4;
            case 0x1173F8u: goto label_1173f8;
            case 0x1173FCu: goto label_1173fc;
            case 0x117400u: goto label_117400;
            case 0x117404u: goto label_117404;
            case 0x117408u: goto label_117408;
            case 0x11740Cu: goto label_11740c;
            case 0x117410u: goto label_117410;
            case 0x117414u: goto label_117414;
            case 0x117418u: goto label_117418;
            case 0x11741Cu: goto label_11741c;
            case 0x117420u: goto label_117420;
            case 0x117424u: goto label_117424;
            case 0x117428u: goto label_117428;
            case 0x11742Cu: goto label_11742c;
            case 0x117430u: goto label_117430;
            case 0x117434u: goto label_117434;
            case 0x117438u: goto label_117438;
            case 0x11743Cu: goto label_11743c;
            case 0x117440u: goto label_117440;
            case 0x117444u: goto label_117444;
            case 0x117448u: goto label_117448;
            case 0x11744Cu: goto label_11744c;
            case 0x117450u: goto label_117450;
            case 0x117454u: goto label_117454;
            case 0x117458u: goto label_117458;
            case 0x11745Cu: goto label_11745c;
            case 0x117460u: goto label_117460;
            case 0x117464u: goto label_117464;
            case 0x117468u: goto label_117468;
            case 0x11746Cu: goto label_11746c;
            case 0x117470u: goto label_117470;
            case 0x117474u: goto label_117474;
            case 0x117478u: goto label_117478;
            case 0x11747Cu: goto label_11747c;
            case 0x117480u: goto label_117480;
            case 0x117484u: goto label_117484;
            case 0x117488u: goto label_117488;
            case 0x11748Cu: goto label_11748c;
            case 0x117490u: goto label_117490;
            case 0x117494u: goto label_117494;
            case 0x117498u: goto label_117498;
            case 0x11749Cu: goto label_11749c;
            case 0x1174A0u: goto label_1174a0;
            case 0x1174A4u: goto label_1174a4;
            case 0x1174A8u: goto label_1174a8;
            case 0x1174ACu: goto label_1174ac;
            case 0x1174B0u: goto label_1174b0;
            case 0x1174B4u: goto label_1174b4;
            case 0x1174B8u: goto label_1174b8;
            case 0x1174BCu: goto label_1174bc;
            case 0x1174C0u: goto label_1174c0;
            case 0x1174C4u: goto label_1174c4;
            case 0x1174C8u: goto label_1174c8;
            case 0x1174CCu: goto label_1174cc;
            case 0x1174D0u: goto label_1174d0;
            case 0x1174D4u: goto label_1174d4;
            case 0x1174D8u: goto label_1174d8;
            case 0x1174DCu: goto label_1174dc;
            case 0x1174E0u: goto label_1174e0;
            case 0x1174E4u: goto label_1174e4;
            case 0x1174E8u: goto label_1174e8;
            case 0x1174ECu: goto label_1174ec;
            case 0x1174F0u: goto label_1174f0;
            case 0x1174F4u: goto label_1174f4;
            case 0x1174F8u: goto label_1174f8;
            case 0x1174FCu: goto label_1174fc;
            case 0x117500u: goto label_117500;
            case 0x117504u: goto label_117504;
            case 0x117508u: goto label_117508;
            case 0x11750Cu: goto label_11750c;
            case 0x117510u: goto label_117510;
            case 0x117514u: goto label_117514;
            case 0x117518u: goto label_117518;
            case 0x11751Cu: goto label_11751c;
            case 0x117520u: goto label_117520;
            case 0x117524u: goto label_117524;
            case 0x117528u: goto label_117528;
            case 0x11752Cu: goto label_11752c;
            case 0x117530u: goto label_117530;
            case 0x117534u: goto label_117534;
            case 0x117538u: goto label_117538;
            case 0x11753Cu: goto label_11753c;
            case 0x117540u: goto label_117540;
            case 0x117544u: goto label_117544;
            case 0x117548u: goto label_117548;
            case 0x11754Cu: goto label_11754c;
            case 0x117550u: goto label_117550;
            case 0x117554u: goto label_117554;
            case 0x117558u: goto label_117558;
            case 0x11755Cu: goto label_11755c;
            case 0x117560u: goto label_117560;
            case 0x117564u: goto label_117564;
            case 0x117568u: goto label_117568;
            case 0x11756Cu: goto label_11756c;
            case 0x117570u: goto label_117570;
            case 0x117574u: goto label_117574;
            case 0x117578u: goto label_117578;
            case 0x11757Cu: goto label_11757c;
            case 0x117580u: goto label_117580;
            case 0x117584u: goto label_117584;
            case 0x117588u: goto label_117588;
            case 0x11758Cu: goto label_11758c;
            case 0x117590u: goto label_117590;
            case 0x117594u: goto label_117594;
            case 0x117598u: goto label_117598;
            case 0x11759Cu: goto label_11759c;
            case 0x1175A0u: goto label_1175a0;
            case 0x1175A4u: goto label_1175a4;
            case 0x1175A8u: goto label_1175a8;
            case 0x1175ACu: goto label_1175ac;
            case 0x1175B0u: goto label_1175b0;
            case 0x1175B4u: goto label_1175b4;
            case 0x1175B8u: goto label_1175b8;
            case 0x1175BCu: goto label_1175bc;
            case 0x1175C0u: goto label_1175c0;
            case 0x1175C4u: goto label_1175c4;
            case 0x1175C8u: goto label_1175c8;
            case 0x1175CCu: goto label_1175cc;
            case 0x1175D0u: goto label_1175d0;
            case 0x1175D4u: goto label_1175d4;
            case 0x1175D8u: goto label_1175d8;
            case 0x1175DCu: goto label_1175dc;
            case 0x1175E0u: goto label_1175e0;
            case 0x1175E4u: goto label_1175e4;
            case 0x1175E8u: goto label_1175e8;
            case 0x1175ECu: goto label_1175ec;
            case 0x1175F0u: goto label_1175f0;
            case 0x1175F4u: goto label_1175f4;
            case 0x1175F8u: goto label_1175f8;
            case 0x1175FCu: goto label_1175fc;
            case 0x117600u: goto label_117600;
            case 0x117604u: goto label_117604;
            case 0x117608u: goto label_117608;
            case 0x11760Cu: goto label_11760c;
            case 0x117610u: goto label_117610;
            case 0x117614u: goto label_117614;
            case 0x117618u: goto label_117618;
            case 0x11761Cu: goto label_11761c;
            case 0x117620u: goto label_117620;
            case 0x117624u: goto label_117624;
            case 0x117628u: goto label_117628;
            case 0x11762Cu: goto label_11762c;
            case 0x117630u: goto label_117630;
            case 0x117634u: goto label_117634;
            case 0x117638u: goto label_117638;
            case 0x11763Cu: goto label_11763c;
            case 0x117640u: goto label_117640;
            case 0x117644u: goto label_117644;
            case 0x117648u: goto label_117648;
            case 0x11764Cu: goto label_11764c;
            case 0x117650u: goto label_117650;
            case 0x117654u: goto label_117654;
            case 0x117658u: goto label_117658;
            case 0x11765Cu: goto label_11765c;
            case 0x117660u: goto label_117660;
            case 0x117664u: goto label_117664;
            case 0x117668u: goto label_117668;
            case 0x11766Cu: goto label_11766c;
            case 0x117670u: goto label_117670;
            case 0x117674u: goto label_117674;
            case 0x117678u: goto label_117678;
            case 0x11767Cu: goto label_11767c;
            case 0x117680u: goto label_117680;
            case 0x117684u: goto label_117684;
            case 0x117688u: goto label_117688;
            case 0x11768Cu: goto label_11768c;
            case 0x117690u: goto label_117690;
            case 0x117694u: goto label_117694;
            case 0x117698u: goto label_117698;
            case 0x11769Cu: goto label_11769c;
            case 0x1176A0u: goto label_1176a0;
            case 0x1176A4u: goto label_1176a4;
            case 0x1176A8u: goto label_1176a8;
            case 0x1176ACu: goto label_1176ac;
            case 0x1176B0u: goto label_1176b0;
            case 0x1176B4u: goto label_1176b4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1173F4u; }
            if (ctx->pc != 0x1173F4u) { return; }
        }
    }
    ctx->pc = 0x1173F4u;
label_1173f4:
    // 0x1173f4: 0x380182d
    ctx->pc = 0x1173f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_1173f8:
    // 0x1173f8: 0x200e02d
    ctx->pc = 0x1173f8u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1173fc:
    // 0x1173fc: 0x10000005
label_117400:
    if (ctx->pc == 0x117400u) {
        ctx->pc = 0x117400u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->pc = 0x117404u;
        goto label_117404;
    }
    ctx->pc = 0x1173FCu;
    {
        const bool branch_taken_0x1173fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x117400u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 28)));
        if (branch_taken_0x1173fc) {
            ctx->pc = 0x117414u;
            goto label_117414;
        }
    }
    ctx->pc = 0x117404u;
label_117404:
    // 0x117404: 0x8e420024
    ctx->pc = 0x117404u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_117408:
    // 0x117408: 0xae220024
    ctx->pc = 0x117408u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_11740c:
    // 0x11740c: 0x8e430028
    ctx->pc = 0x11740cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_117410:
    // 0x117410: 0xae230014
    ctx->pc = 0x117410u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_117414:
    // 0x117414: 0x8e240008
    ctx->pc = 0x117414u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_117418:
    // 0x117418: 0x4800003
label_11741c:
    if (ctx->pc == 0x11741Cu) {
        ctx->pc = 0x117420u;
        goto label_117420;
    }
    ctx->pc = 0x117418u;
    {
        const bool branch_taken_0x117418 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x117418) {
            ctx->pc = 0x117428u;
            goto label_117428;
        }
    }
    ctx->pc = 0x117420u;
label_117420:
    // 0x117420: 0xc045194
label_117424:
    if (ctx->pc == 0x117424u) {
        ctx->pc = 0x117428u;
        goto label_117428;
    }
    ctx->pc = 0x117420u;
    SET_GPR_U32(ctx, 31, 0x117428u);
    ctx->pc = 0x114650u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114650_0x114650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117428u; }
    }
    if (ctx->pc != 0x117428u) { return; }
    ctx->pc = 0x117428u;
label_117428:
    // 0x117428: 0xc045cbc
label_11742c:
    if (ctx->pc == 0x11742Cu) {
        ctx->pc = 0x11742Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x117430u;
        goto label_117430;
    }
    ctx->pc = 0x117428u;
    SET_GPR_U32(ctx, 31, 0x117430u);
    ctx->pc = 0x11742Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x1172F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001172F0_0x1172f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117430u; }
    }
    if (ctx->pc != 0x117430u) { return; }
    ctx->pc = 0x117430u;
label_117430:
    // 0x117430: 0xae200000
    ctx->pc = 0x117430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_117434:
    // 0x117434: 0xdfbf0030
    ctx->pc = 0x117434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_117438:
    // 0x117438: 0xdfb20020
    ctx->pc = 0x117438u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_11743c:
    // 0x11743c: 0xdfb10010
    ctx->pc = 0x11743cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_117440:
    // 0x117440: 0xdfb00000
    ctx->pc = 0x117440u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_117444:
    // 0x117444: 0x3e00008
label_117448:
    if (ctx->pc == 0x117448u) {
        ctx->pc = 0x117448u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x11744Cu;
        goto label_11744c;
    }
    ctx->pc = 0x117444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117448u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117340u: goto label_117340;
            case 0x117344u: goto label_117344;
            case 0x117348u: goto label_117348;
            case 0x11734Cu: goto label_11734c;
            case 0x117350u: goto label_117350;
            case 0x117354u: goto label_117354;
            case 0x117358u: goto label_117358;
            case 0x11735Cu: goto label_11735c;
            case 0x117360u: goto label_117360;
            case 0x117364u: goto label_117364;
            case 0x117368u: goto label_117368;
            case 0x11736Cu: goto label_11736c;
            case 0x117370u: goto label_117370;
            case 0x117374u: goto label_117374;
            case 0x117378u: goto label_117378;
            case 0x11737Cu: goto label_11737c;
            case 0x117380u: goto label_117380;
            case 0x117384u: goto label_117384;
            case 0x117388u: goto label_117388;
            case 0x11738Cu: goto label_11738c;
            case 0x117390u: goto label_117390;
            case 0x117394u: goto label_117394;
            case 0x117398u: goto label_117398;
            case 0x11739Cu: goto label_11739c;
            case 0x1173A0u: goto label_1173a0;
            case 0x1173A4u: goto label_1173a4;
            case 0x1173A8u: goto label_1173a8;
            case 0x1173ACu: goto label_1173ac;
            case 0x1173B0u: goto label_1173b0;
            case 0x1173B4u: goto label_1173b4;
            case 0x1173B8u: goto label_1173b8;
            case 0x1173BCu: goto label_1173bc;
            case 0x1173C0u: goto label_1173c0;
            case 0x1173C4u: goto label_1173c4;
            case 0x1173C8u: goto label_1173c8;
            case 0x1173CCu: goto label_1173cc;
            case 0x1173D0u: goto label_1173d0;
            case 0x1173D4u: goto label_1173d4;
            case 0x1173D8u: goto label_1173d8;
            case 0x1173DCu: goto label_1173dc;
            case 0x1173E0u: goto label_1173e0;
            case 0x1173E4u: goto label_1173e4;
            case 0x1173E8u: goto label_1173e8;
            case 0x1173ECu: goto label_1173ec;
            case 0x1173F0u: goto label_1173f0;
            case 0x1173F4u: goto label_1173f4;
            case 0x1173F8u: goto label_1173f8;
            case 0x1173FCu: goto label_1173fc;
            case 0x117400u: goto label_117400;
            case 0x117404u: goto label_117404;
            case 0x117408u: goto label_117408;
            case 0x11740Cu: goto label_11740c;
            case 0x117410u: goto label_117410;
            case 0x117414u: goto label_117414;
            case 0x117418u: goto label_117418;
            case 0x11741Cu: goto label_11741c;
            case 0x117420u: goto label_117420;
            case 0x117424u: goto label_117424;
            case 0x117428u: goto label_117428;
            case 0x11742Cu: goto label_11742c;
            case 0x117430u: goto label_117430;
            case 0x117434u: goto label_117434;
            case 0x117438u: goto label_117438;
            case 0x11743Cu: goto label_11743c;
            case 0x117440u: goto label_117440;
            case 0x117444u: goto label_117444;
            case 0x117448u: goto label_117448;
            case 0x11744Cu: goto label_11744c;
            case 0x117450u: goto label_117450;
            case 0x117454u: goto label_117454;
            case 0x117458u: goto label_117458;
            case 0x11745Cu: goto label_11745c;
            case 0x117460u: goto label_117460;
            case 0x117464u: goto label_117464;
            case 0x117468u: goto label_117468;
            case 0x11746Cu: goto label_11746c;
            case 0x117470u: goto label_117470;
            case 0x117474u: goto label_117474;
            case 0x117478u: goto label_117478;
            case 0x11747Cu: goto label_11747c;
            case 0x117480u: goto label_117480;
            case 0x117484u: goto label_117484;
            case 0x117488u: goto label_117488;
            case 0x11748Cu: goto label_11748c;
            case 0x117490u: goto label_117490;
            case 0x117494u: goto label_117494;
            case 0x117498u: goto label_117498;
            case 0x11749Cu: goto label_11749c;
            case 0x1174A0u: goto label_1174a0;
            case 0x1174A4u: goto label_1174a4;
            case 0x1174A8u: goto label_1174a8;
            case 0x1174ACu: goto label_1174ac;
            case 0x1174B0u: goto label_1174b0;
            case 0x1174B4u: goto label_1174b4;
            case 0x1174B8u: goto label_1174b8;
            case 0x1174BCu: goto label_1174bc;
            case 0x1174C0u: goto label_1174c0;
            case 0x1174C4u: goto label_1174c4;
            case 0x1174C8u: goto label_1174c8;
            case 0x1174CCu: goto label_1174cc;
            case 0x1174D0u: goto label_1174d0;
            case 0x1174D4u: goto label_1174d4;
            case 0x1174D8u: goto label_1174d8;
            case 0x1174DCu: goto label_1174dc;
            case 0x1174E0u: goto label_1174e0;
            case 0x1174E4u: goto label_1174e4;
            case 0x1174E8u: goto label_1174e8;
            case 0x1174ECu: goto label_1174ec;
            case 0x1174F0u: goto label_1174f0;
            case 0x1174F4u: goto label_1174f4;
            case 0x1174F8u: goto label_1174f8;
            case 0x1174FCu: goto label_1174fc;
            case 0x117500u: goto label_117500;
            case 0x117504u: goto label_117504;
            case 0x117508u: goto label_117508;
            case 0x11750Cu: goto label_11750c;
            case 0x117510u: goto label_117510;
            case 0x117514u: goto label_117514;
            case 0x117518u: goto label_117518;
            case 0x11751Cu: goto label_11751c;
            case 0x117520u: goto label_117520;
            case 0x117524u: goto label_117524;
            case 0x117528u: goto label_117528;
            case 0x11752Cu: goto label_11752c;
            case 0x117530u: goto label_117530;
            case 0x117534u: goto label_117534;
            case 0x117538u: goto label_117538;
            case 0x11753Cu: goto label_11753c;
            case 0x117540u: goto label_117540;
            case 0x117544u: goto label_117544;
            case 0x117548u: goto label_117548;
            case 0x11754Cu: goto label_11754c;
            case 0x117550u: goto label_117550;
            case 0x117554u: goto label_117554;
            case 0x117558u: goto label_117558;
            case 0x11755Cu: goto label_11755c;
            case 0x117560u: goto label_117560;
            case 0x117564u: goto label_117564;
            case 0x117568u: goto label_117568;
            case 0x11756Cu: goto label_11756c;
            case 0x117570u: goto label_117570;
            case 0x117574u: goto label_117574;
            case 0x117578u: goto label_117578;
            case 0x11757Cu: goto label_11757c;
            case 0x117580u: goto label_117580;
            case 0x117584u: goto label_117584;
            case 0x117588u: goto label_117588;
            case 0x11758Cu: goto label_11758c;
            case 0x117590u: goto label_117590;
            case 0x117594u: goto label_117594;
            case 0x117598u: goto label_117598;
            case 0x11759Cu: goto label_11759c;
            case 0x1175A0u: goto label_1175a0;
            case 0x1175A4u: goto label_1175a4;
            case 0x1175A8u: goto label_1175a8;
            case 0x1175ACu: goto label_1175ac;
            case 0x1175B0u: goto label_1175b0;
            case 0x1175B4u: goto label_1175b4;
            case 0x1175B8u: goto label_1175b8;
            case 0x1175BCu: goto label_1175bc;
            case 0x1175C0u: goto label_1175c0;
            case 0x1175C4u: goto label_1175c4;
            case 0x1175C8u: goto label_1175c8;
            case 0x1175CCu: goto label_1175cc;
            case 0x1175D0u: goto label_1175d0;
            case 0x1175D4u: goto label_1175d4;
            case 0x1175D8u: goto label_1175d8;
            case 0x1175DCu: goto label_1175dc;
            case 0x1175E0u: goto label_1175e0;
            case 0x1175E4u: goto label_1175e4;
            case 0x1175E8u: goto label_1175e8;
            case 0x1175ECu: goto label_1175ec;
            case 0x1175F0u: goto label_1175f0;
            case 0x1175F4u: goto label_1175f4;
            case 0x1175F8u: goto label_1175f8;
            case 0x1175FCu: goto label_1175fc;
            case 0x117600u: goto label_117600;
            case 0x117604u: goto label_117604;
            case 0x117608u: goto label_117608;
            case 0x11760Cu: goto label_11760c;
            case 0x117610u: goto label_117610;
            case 0x117614u: goto label_117614;
            case 0x117618u: goto label_117618;
            case 0x11761Cu: goto label_11761c;
            case 0x117620u: goto label_117620;
            case 0x117624u: goto label_117624;
            case 0x117628u: goto label_117628;
            case 0x11762Cu: goto label_11762c;
            case 0x117630u: goto label_117630;
            case 0x117634u: goto label_117634;
            case 0x117638u: goto label_117638;
            case 0x11763Cu: goto label_11763c;
            case 0x117640u: goto label_117640;
            case 0x117644u: goto label_117644;
            case 0x117648u: goto label_117648;
            case 0x11764Cu: goto label_11764c;
            case 0x117650u: goto label_117650;
            case 0x117654u: goto label_117654;
            case 0x117658u: goto label_117658;
            case 0x11765Cu: goto label_11765c;
            case 0x117660u: goto label_117660;
            case 0x117664u: goto label_117664;
            case 0x117668u: goto label_117668;
            case 0x11766Cu: goto label_11766c;
            case 0x117670u: goto label_117670;
            case 0x117674u: goto label_117674;
            case 0x117678u: goto label_117678;
            case 0x11767Cu: goto label_11767c;
            case 0x117680u: goto label_117680;
            case 0x117684u: goto label_117684;
            case 0x117688u: goto label_117688;
            case 0x11768Cu: goto label_11768c;
            case 0x117690u: goto label_117690;
            case 0x117694u: goto label_117694;
            case 0x117698u: goto label_117698;
            case 0x11769Cu: goto label_11769c;
            case 0x1176A0u: goto label_1176a0;
            case 0x1176A4u: goto label_1176a4;
            case 0x1176A8u: goto label_1176a8;
            case 0x1176ACu: goto label_1176ac;
            case 0x1176B0u: goto label_1176b0;
            case 0x1176B4u: goto label_1176b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11744Cu;
label_11744c:
    // 0x11744c: 0x0
    ctx->pc = 0x11744cu;
    // NOP
label_117450:
    // 0x117450: 0x27bdfff0
    ctx->pc = 0x117450u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_117454:
    // 0x117454: 0xe0282d
    ctx->pc = 0x117454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_117458:
    // 0x117458: 0xffbf0000
    ctx->pc = 0x117458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_11745c:
    // 0x11745c: 0x3c048000
    ctx->pc = 0x11745cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
label_117460:
    // 0x117460: 0x34840008
    ctx->pc = 0x117460u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 8));
label_117464:
    // 0x117464: 0x24060040
    ctx->pc = 0x117464u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
label_117468:
    // 0x117468: 0x8ca70024
    ctx->pc = 0x117468u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_11746c:
    // 0x11746c: 0x8ca80028
    ctx->pc = 0x11746cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_117470:
    // 0x117470: 0xc045b92
label_117474:
    if (ctx->pc == 0x117474u) {
        ctx->pc = 0x117474u;
        SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 5), 44)));
        ctx->pc = 0x117478u;
        goto label_117478;
    }
    ctx->pc = 0x117470u;
    SET_GPR_U32(ctx, 31, 0x117478u);
    ctx->pc = 0x117474u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 5), 44)));
    ctx->pc = 0x116E48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116E48_0x116e48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117478u; }
    }
    if (ctx->pc != 0x117478u) { return; }
    ctx->pc = 0x117478u;
label_117478:
    // 0x117478: 0x24030800
    ctx->pc = 0x117478u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2048));
label_11747c:
    // 0x11747c: 0xdfbf0000
    ctx->pc = 0x11747cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_117480:
    // 0x117480: 0x2180b
    ctx->pc = 0x117480u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 0));
label_117484:
    // 0x117484: 0x60102d
    ctx->pc = 0x117484u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_117488:
    // 0x117488: 0x3e00008
label_11748c:
    if (ctx->pc == 0x11748Cu) {
        ctx->pc = 0x11748Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x117490u;
        goto label_117490;
    }
    ctx->pc = 0x117488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11748Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117340u: goto label_117340;
            case 0x117344u: goto label_117344;
            case 0x117348u: goto label_117348;
            case 0x11734Cu: goto label_11734c;
            case 0x117350u: goto label_117350;
            case 0x117354u: goto label_117354;
            case 0x117358u: goto label_117358;
            case 0x11735Cu: goto label_11735c;
            case 0x117360u: goto label_117360;
            case 0x117364u: goto label_117364;
            case 0x117368u: goto label_117368;
            case 0x11736Cu: goto label_11736c;
            case 0x117370u: goto label_117370;
            case 0x117374u: goto label_117374;
            case 0x117378u: goto label_117378;
            case 0x11737Cu: goto label_11737c;
            case 0x117380u: goto label_117380;
            case 0x117384u: goto label_117384;
            case 0x117388u: goto label_117388;
            case 0x11738Cu: goto label_11738c;
            case 0x117390u: goto label_117390;
            case 0x117394u: goto label_117394;
            case 0x117398u: goto label_117398;
            case 0x11739Cu: goto label_11739c;
            case 0x1173A0u: goto label_1173a0;
            case 0x1173A4u: goto label_1173a4;
            case 0x1173A8u: goto label_1173a8;
            case 0x1173ACu: goto label_1173ac;
            case 0x1173B0u: goto label_1173b0;
            case 0x1173B4u: goto label_1173b4;
            case 0x1173B8u: goto label_1173b8;
            case 0x1173BCu: goto label_1173bc;
            case 0x1173C0u: goto label_1173c0;
            case 0x1173C4u: goto label_1173c4;
            case 0x1173C8u: goto label_1173c8;
            case 0x1173CCu: goto label_1173cc;
            case 0x1173D0u: goto label_1173d0;
            case 0x1173D4u: goto label_1173d4;
            case 0x1173D8u: goto label_1173d8;
            case 0x1173DCu: goto label_1173dc;
            case 0x1173E0u: goto label_1173e0;
            case 0x1173E4u: goto label_1173e4;
            case 0x1173E8u: goto label_1173e8;
            case 0x1173ECu: goto label_1173ec;
            case 0x1173F0u: goto label_1173f0;
            case 0x1173F4u: goto label_1173f4;
            case 0x1173F8u: goto label_1173f8;
            case 0x1173FCu: goto label_1173fc;
            case 0x117400u: goto label_117400;
            case 0x117404u: goto label_117404;
            case 0x117408u: goto label_117408;
            case 0x11740Cu: goto label_11740c;
            case 0x117410u: goto label_117410;
            case 0x117414u: goto label_117414;
            case 0x117418u: goto label_117418;
            case 0x11741Cu: goto label_11741c;
            case 0x117420u: goto label_117420;
            case 0x117424u: goto label_117424;
            case 0x117428u: goto label_117428;
            case 0x11742Cu: goto label_11742c;
            case 0x117430u: goto label_117430;
            case 0x117434u: goto label_117434;
            case 0x117438u: goto label_117438;
            case 0x11743Cu: goto label_11743c;
            case 0x117440u: goto label_117440;
            case 0x117444u: goto label_117444;
            case 0x117448u: goto label_117448;
            case 0x11744Cu: goto label_11744c;
            case 0x117450u: goto label_117450;
            case 0x117454u: goto label_117454;
            case 0x117458u: goto label_117458;
            case 0x11745Cu: goto label_11745c;
            case 0x117460u: goto label_117460;
            case 0x117464u: goto label_117464;
            case 0x117468u: goto label_117468;
            case 0x11746Cu: goto label_11746c;
            case 0x117470u: goto label_117470;
            case 0x117474u: goto label_117474;
            case 0x117478u: goto label_117478;
            case 0x11747Cu: goto label_11747c;
            case 0x117480u: goto label_117480;
            case 0x117484u: goto label_117484;
            case 0x117488u: goto label_117488;
            case 0x11748Cu: goto label_11748c;
            case 0x117490u: goto label_117490;
            case 0x117494u: goto label_117494;
            case 0x117498u: goto label_117498;
            case 0x11749Cu: goto label_11749c;
            case 0x1174A0u: goto label_1174a0;
            case 0x1174A4u: goto label_1174a4;
            case 0x1174A8u: goto label_1174a8;
            case 0x1174ACu: goto label_1174ac;
            case 0x1174B0u: goto label_1174b0;
            case 0x1174B4u: goto label_1174b4;
            case 0x1174B8u: goto label_1174b8;
            case 0x1174BCu: goto label_1174bc;
            case 0x1174C0u: goto label_1174c0;
            case 0x1174C4u: goto label_1174c4;
            case 0x1174C8u: goto label_1174c8;
            case 0x1174CCu: goto label_1174cc;
            case 0x1174D0u: goto label_1174d0;
            case 0x1174D4u: goto label_1174d4;
            case 0x1174D8u: goto label_1174d8;
            case 0x1174DCu: goto label_1174dc;
            case 0x1174E0u: goto label_1174e0;
            case 0x1174E4u: goto label_1174e4;
            case 0x1174E8u: goto label_1174e8;
            case 0x1174ECu: goto label_1174ec;
            case 0x1174F0u: goto label_1174f0;
            case 0x1174F4u: goto label_1174f4;
            case 0x1174F8u: goto label_1174f8;
            case 0x1174FCu: goto label_1174fc;
            case 0x117500u: goto label_117500;
            case 0x117504u: goto label_117504;
            case 0x117508u: goto label_117508;
            case 0x11750Cu: goto label_11750c;
            case 0x117510u: goto label_117510;
            case 0x117514u: goto label_117514;
            case 0x117518u: goto label_117518;
            case 0x11751Cu: goto label_11751c;
            case 0x117520u: goto label_117520;
            case 0x117524u: goto label_117524;
            case 0x117528u: goto label_117528;
            case 0x11752Cu: goto label_11752c;
            case 0x117530u: goto label_117530;
            case 0x117534u: goto label_117534;
            case 0x117538u: goto label_117538;
            case 0x11753Cu: goto label_11753c;
            case 0x117540u: goto label_117540;
            case 0x117544u: goto label_117544;
            case 0x117548u: goto label_117548;
            case 0x11754Cu: goto label_11754c;
            case 0x117550u: goto label_117550;
            case 0x117554u: goto label_117554;
            case 0x117558u: goto label_117558;
            case 0x11755Cu: goto label_11755c;
            case 0x117560u: goto label_117560;
            case 0x117564u: goto label_117564;
            case 0x117568u: goto label_117568;
            case 0x11756Cu: goto label_11756c;
            case 0x117570u: goto label_117570;
            case 0x117574u: goto label_117574;
            case 0x117578u: goto label_117578;
            case 0x11757Cu: goto label_11757c;
            case 0x117580u: goto label_117580;
            case 0x117584u: goto label_117584;
            case 0x117588u: goto label_117588;
            case 0x11758Cu: goto label_11758c;
            case 0x117590u: goto label_117590;
            case 0x117594u: goto label_117594;
            case 0x117598u: goto label_117598;
            case 0x11759Cu: goto label_11759c;
            case 0x1175A0u: goto label_1175a0;
            case 0x1175A4u: goto label_1175a4;
            case 0x1175A8u: goto label_1175a8;
            case 0x1175ACu: goto label_1175ac;
            case 0x1175B0u: goto label_1175b0;
            case 0x1175B4u: goto label_1175b4;
            case 0x1175B8u: goto label_1175b8;
            case 0x1175BCu: goto label_1175bc;
            case 0x1175C0u: goto label_1175c0;
            case 0x1175C4u: goto label_1175c4;
            case 0x1175C8u: goto label_1175c8;
            case 0x1175CCu: goto label_1175cc;
            case 0x1175D0u: goto label_1175d0;
            case 0x1175D4u: goto label_1175d4;
            case 0x1175D8u: goto label_1175d8;
            case 0x1175DCu: goto label_1175dc;
            case 0x1175E0u: goto label_1175e0;
            case 0x1175E4u: goto label_1175e4;
            case 0x1175E8u: goto label_1175e8;
            case 0x1175ECu: goto label_1175ec;
            case 0x1175F0u: goto label_1175f0;
            case 0x1175F4u: goto label_1175f4;
            case 0x1175F8u: goto label_1175f8;
            case 0x1175FCu: goto label_1175fc;
            case 0x117600u: goto label_117600;
            case 0x117604u: goto label_117604;
            case 0x117608u: goto label_117608;
            case 0x11760Cu: goto label_11760c;
            case 0x117610u: goto label_117610;
            case 0x117614u: goto label_117614;
            case 0x117618u: goto label_117618;
            case 0x11761Cu: goto label_11761c;
            case 0x117620u: goto label_117620;
            case 0x117624u: goto label_117624;
            case 0x117628u: goto label_117628;
            case 0x11762Cu: goto label_11762c;
            case 0x117630u: goto label_117630;
            case 0x117634u: goto label_117634;
            case 0x117638u: goto label_117638;
            case 0x11763Cu: goto label_11763c;
            case 0x117640u: goto label_117640;
            case 0x117644u: goto label_117644;
            case 0x117648u: goto label_117648;
            case 0x11764Cu: goto label_11764c;
            case 0x117650u: goto label_117650;
            case 0x117654u: goto label_117654;
            case 0x117658u: goto label_117658;
            case 0x11765Cu: goto label_11765c;
            case 0x117660u: goto label_117660;
            case 0x117664u: goto label_117664;
            case 0x117668u: goto label_117668;
            case 0x11766Cu: goto label_11766c;
            case 0x117670u: goto label_117670;
            case 0x117674u: goto label_117674;
            case 0x117678u: goto label_117678;
            case 0x11767Cu: goto label_11767c;
            case 0x117680u: goto label_117680;
            case 0x117684u: goto label_117684;
            case 0x117688u: goto label_117688;
            case 0x11768Cu: goto label_11768c;
            case 0x117690u: goto label_117690;
            case 0x117694u: goto label_117694;
            case 0x117698u: goto label_117698;
            case 0x11769Cu: goto label_11769c;
            case 0x1176A0u: goto label_1176a0;
            case 0x1176A4u: goto label_1176a4;
            case 0x1176A8u: goto label_1176a8;
            case 0x1176ACu: goto label_1176ac;
            case 0x1176B0u: goto label_1176b0;
            case 0x1176B4u: goto label_1176b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x117490u;
label_117490:
    // 0x117490: 0x27bdffd0
    ctx->pc = 0x117490u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_117494:
    // 0x117494: 0xffb10010
    ctx->pc = 0x117494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_117498:
    // 0x117498: 0x80882d
    ctx->pc = 0x117498u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11749c:
    // 0x11749c: 0xffbf0020
    ctx->pc = 0x11749cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1174a0:
    // 0x1174a0: 0xffb00000
    ctx->pc = 0x1174a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1174a4:
    // 0x1174a4: 0xa0202d
    ctx->pc = 0x1174a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1174a8:
    // 0x1174a8: 0x8e250010
    ctx->pc = 0x1174a8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1174ac:
    // 0x1174ac: 0x30a20004
    ctx->pc = 0x1174acu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 4));
label_1174b0:
    // 0x1174b0: 0x10400005
label_1174b4:
    if (ctx->pc == 0x1174B4u) {
        ctx->pc = 0x1174B8u;
        goto label_1174b8;
    }
    ctx->pc = 0x1174B0u;
    {
        const bool branch_taken_0x1174b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1174b0) {
            ctx->pc = 0x1174C8u;
            goto label_1174c8;
        }
    }
    ctx->pc = 0x1174B8u;
label_1174b8:
    // 0x1174b8: 0xc045cd0
label_1174bc:
    if (ctx->pc == 0x1174BCu) {
        ctx->pc = 0x1174BCu;
        SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 16));
        ctx->pc = 0x1174C0u;
        goto label_1174c0;
    }
    ctx->pc = 0x1174B8u;
    SET_GPR_U32(ctx, 31, 0x1174C0u);
    ctx->pc = 0x1174BCu;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 16));
    ctx->pc = 0x117340u;
    goto label_117340;
    ctx->pc = 0x1174C0u;
label_1174c0:
    // 0x1174c0: 0x10000004
label_1174c4:
    if (ctx->pc == 0x1174C4u) {
        ctx->pc = 0x1174C4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1174C8u;
        goto label_1174c8;
    }
    ctx->pc = 0x1174C0u;
    {
        const bool branch_taken_0x1174c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1174C4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1174c0) {
            ctx->pc = 0x1174D4u;
            goto label_1174d4;
        }
    }
    ctx->pc = 0x1174C8u;
label_1174c8:
    // 0x1174c8: 0xc045cc4
label_1174cc:
    if (ctx->pc == 0x1174CCu) {
        ctx->pc = 0x1174D0u;
        goto label_1174d0;
    }
    ctx->pc = 0x1174C8u;
    SET_GPR_U32(ctx, 31, 0x1174D0u);
    ctx->pc = 0x117310u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00117310_0x117310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1174D0u; }
    }
    if (ctx->pc != 0x1174D0u) { return; }
    ctx->pc = 0x1174D0u;
label_1174d0:
    // 0x1174d0: 0x40802d
    ctx->pc = 0x1174d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1174d4:
    // 0x1174d4: 0x8e230014
    ctx->pc = 0x1174d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1174d8:
    // 0x1174d8: 0x3c028000
    ctx->pc = 0x1174d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
label_1174dc:
    // 0x1174dc: 0x8e25001c
    ctx->pc = 0x1174dcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1174e0:
    // 0x1174e0: 0x3442000c
    ctx->pc = 0x1174e0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 12));
label_1174e4:
    // 0x1174e4: 0xae030014
    ctx->pc = 0x1174e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_1174e8:
    // 0x1174e8: 0x3c048000
    ctx->pc = 0x1174e8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
label_1174ec:
    // 0x1174ec: 0xae05001c
    ctx->pc = 0x1174ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
label_1174f0:
    // 0x1174f0: 0x34840008
    ctx->pc = 0x1174f0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 8));
label_1174f4:
    // 0x1174f4: 0xae020020
    ctx->pc = 0x1174f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1174f8:
    // 0x1174f8: 0x200282d
    ctx->pc = 0x1174f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1174fc:
    // 0x1174fc: 0x24060040
    ctx->pc = 0x1174fcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
label_117500:
    // 0x117500: 0x8e220020
    ctx->pc = 0x117500u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_117504:
    // 0x117504: 0xae020024
    ctx->pc = 0x117504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_117508:
    // 0x117508: 0x8e230024
    ctx->pc = 0x117508u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_11750c:
    // 0x11750c: 0xae030028
    ctx->pc = 0x11750cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
label_117510:
    // 0x117510: 0x8e220028
    ctx->pc = 0x117510u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_117514:
    // 0x117514: 0xae02002c
    ctx->pc = 0x117514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_117518:
    // 0x117518: 0x8e290028
    ctx->pc = 0x117518u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_11751c:
    // 0x11751c: 0x8e270020
    ctx->pc = 0x11751cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_117520:
    // 0x117520: 0xc045b92
label_117524:
    if (ctx->pc == 0x117524u) {
        ctx->pc = 0x117524u;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->pc = 0x117528u;
        goto label_117528;
    }
    ctx->pc = 0x117520u;
    SET_GPR_U32(ctx, 31, 0x117528u);
    ctx->pc = 0x117524u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->pc = 0x116E48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116E48_0x116e48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117528u; }
    }
    if (ctx->pc != 0x117528u) { return; }
    ctx->pc = 0x117528u;
label_117528:
    // 0x117528: 0x14400009
label_11752c:
    if (ctx->pc == 0x11752Cu) {
        ctx->pc = 0x11752Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x117530u;
        goto label_117530;
    }
    ctx->pc = 0x117528u;
    {
        const bool branch_taken_0x117528 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x11752Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x117528) {
            ctx->pc = 0x117550u;
            goto label_117550;
        }
    }
    ctx->pc = 0x117530u;
label_117530:
    // 0x117530: 0x200302d
    ctx->pc = 0x117530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_117534:
    // 0x117534: 0x3c050011
    ctx->pc = 0x117534u;
    SET_GPR_U32(ctx, 5, ((uint32_t)17 << 16));
label_117538:
    // 0x117538: 0x24a57450
    ctx->pc = 0x117538u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29776));
label_11753c:
    // 0x11753c: 0xdfb10010
    ctx->pc = 0x11753cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_117540:
    // 0x117540: 0x24040800
    ctx->pc = 0x117540u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2048));
label_117544:
    // 0x117544: 0xdfb00000
    ctx->pc = 0x117544u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_117548:
    // 0x117548: 0x8047d02
label_11754c:
    if (ctx->pc == 0x11754Cu) {
        ctx->pc = 0x11754Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x117550u;
        goto label_117550;
    }
    ctx->pc = 0x117548u;
    ctx->pc = 0x11754Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x11F408u;
    entry_11f408_0x11f618(rdram, ctx, runtime); return;
    ctx->pc = 0x117550u;
label_117550:
    // 0x117550: 0xdfb10010
    ctx->pc = 0x117550u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_117554:
    // 0x117554: 0xdfb00000
    ctx->pc = 0x117554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_117558:
    // 0x117558: 0x3e00008
label_11755c:
    if (ctx->pc == 0x11755Cu) {
        ctx->pc = 0x11755Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x117560u;
        goto label_117560;
    }
    ctx->pc = 0x117558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11755Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117340u: goto label_117340;
            case 0x117344u: goto label_117344;
            case 0x117348u: goto label_117348;
            case 0x11734Cu: goto label_11734c;
            case 0x117350u: goto label_117350;
            case 0x117354u: goto label_117354;
            case 0x117358u: goto label_117358;
            case 0x11735Cu: goto label_11735c;
            case 0x117360u: goto label_117360;
            case 0x117364u: goto label_117364;
            case 0x117368u: goto label_117368;
            case 0x11736Cu: goto label_11736c;
            case 0x117370u: goto label_117370;
            case 0x117374u: goto label_117374;
            case 0x117378u: goto label_117378;
            case 0x11737Cu: goto label_11737c;
            case 0x117380u: goto label_117380;
            case 0x117384u: goto label_117384;
            case 0x117388u: goto label_117388;
            case 0x11738Cu: goto label_11738c;
            case 0x117390u: goto label_117390;
            case 0x117394u: goto label_117394;
            case 0x117398u: goto label_117398;
            case 0x11739Cu: goto label_11739c;
            case 0x1173A0u: goto label_1173a0;
            case 0x1173A4u: goto label_1173a4;
            case 0x1173A8u: goto label_1173a8;
            case 0x1173ACu: goto label_1173ac;
            case 0x1173B0u: goto label_1173b0;
            case 0x1173B4u: goto label_1173b4;
            case 0x1173B8u: goto label_1173b8;
            case 0x1173BCu: goto label_1173bc;
            case 0x1173C0u: goto label_1173c0;
            case 0x1173C4u: goto label_1173c4;
            case 0x1173C8u: goto label_1173c8;
            case 0x1173CCu: goto label_1173cc;
            case 0x1173D0u: goto label_1173d0;
            case 0x1173D4u: goto label_1173d4;
            case 0x1173D8u: goto label_1173d8;
            case 0x1173DCu: goto label_1173dc;
            case 0x1173E0u: goto label_1173e0;
            case 0x1173E4u: goto label_1173e4;
            case 0x1173E8u: goto label_1173e8;
            case 0x1173ECu: goto label_1173ec;
            case 0x1173F0u: goto label_1173f0;
            case 0x1173F4u: goto label_1173f4;
            case 0x1173F8u: goto label_1173f8;
            case 0x1173FCu: goto label_1173fc;
            case 0x117400u: goto label_117400;
            case 0x117404u: goto label_117404;
            case 0x117408u: goto label_117408;
            case 0x11740Cu: goto label_11740c;
            case 0x117410u: goto label_117410;
            case 0x117414u: goto label_117414;
            case 0x117418u: goto label_117418;
            case 0x11741Cu: goto label_11741c;
            case 0x117420u: goto label_117420;
            case 0x117424u: goto label_117424;
            case 0x117428u: goto label_117428;
            case 0x11742Cu: goto label_11742c;
            case 0x117430u: goto label_117430;
            case 0x117434u: goto label_117434;
            case 0x117438u: goto label_117438;
            case 0x11743Cu: goto label_11743c;
            case 0x117440u: goto label_117440;
            case 0x117444u: goto label_117444;
            case 0x117448u: goto label_117448;
            case 0x11744Cu: goto label_11744c;
            case 0x117450u: goto label_117450;
            case 0x117454u: goto label_117454;
            case 0x117458u: goto label_117458;
            case 0x11745Cu: goto label_11745c;
            case 0x117460u: goto label_117460;
            case 0x117464u: goto label_117464;
            case 0x117468u: goto label_117468;
            case 0x11746Cu: goto label_11746c;
            case 0x117470u: goto label_117470;
            case 0x117474u: goto label_117474;
            case 0x117478u: goto label_117478;
            case 0x11747Cu: goto label_11747c;
            case 0x117480u: goto label_117480;
            case 0x117484u: goto label_117484;
            case 0x117488u: goto label_117488;
            case 0x11748Cu: goto label_11748c;
            case 0x117490u: goto label_117490;
            case 0x117494u: goto label_117494;
            case 0x117498u: goto label_117498;
            case 0x11749Cu: goto label_11749c;
            case 0x1174A0u: goto label_1174a0;
            case 0x1174A4u: goto label_1174a4;
            case 0x1174A8u: goto label_1174a8;
            case 0x1174ACu: goto label_1174ac;
            case 0x1174B0u: goto label_1174b0;
            case 0x1174B4u: goto label_1174b4;
            case 0x1174B8u: goto label_1174b8;
            case 0x1174BCu: goto label_1174bc;
            case 0x1174C0u: goto label_1174c0;
            case 0x1174C4u: goto label_1174c4;
            case 0x1174C8u: goto label_1174c8;
            case 0x1174CCu: goto label_1174cc;
            case 0x1174D0u: goto label_1174d0;
            case 0x1174D4u: goto label_1174d4;
            case 0x1174D8u: goto label_1174d8;
            case 0x1174DCu: goto label_1174dc;
            case 0x1174E0u: goto label_1174e0;
            case 0x1174E4u: goto label_1174e4;
            case 0x1174E8u: goto label_1174e8;
            case 0x1174ECu: goto label_1174ec;
            case 0x1174F0u: goto label_1174f0;
            case 0x1174F4u: goto label_1174f4;
            case 0x1174F8u: goto label_1174f8;
            case 0x1174FCu: goto label_1174fc;
            case 0x117500u: goto label_117500;
            case 0x117504u: goto label_117504;
            case 0x117508u: goto label_117508;
            case 0x11750Cu: goto label_11750c;
            case 0x117510u: goto label_117510;
            case 0x117514u: goto label_117514;
            case 0x117518u: goto label_117518;
            case 0x11751Cu: goto label_11751c;
            case 0x117520u: goto label_117520;
            case 0x117524u: goto label_117524;
            case 0x117528u: goto label_117528;
            case 0x11752Cu: goto label_11752c;
            case 0x117530u: goto label_117530;
            case 0x117534u: goto label_117534;
            case 0x117538u: goto label_117538;
            case 0x11753Cu: goto label_11753c;
            case 0x117540u: goto label_117540;
            case 0x117544u: goto label_117544;
            case 0x117548u: goto label_117548;
            case 0x11754Cu: goto label_11754c;
            case 0x117550u: goto label_117550;
            case 0x117554u: goto label_117554;
            case 0x117558u: goto label_117558;
            case 0x11755Cu: goto label_11755c;
            case 0x117560u: goto label_117560;
            case 0x117564u: goto label_117564;
            case 0x117568u: goto label_117568;
            case 0x11756Cu: goto label_11756c;
            case 0x117570u: goto label_117570;
            case 0x117574u: goto label_117574;
            case 0x117578u: goto label_117578;
            case 0x11757Cu: goto label_11757c;
            case 0x117580u: goto label_117580;
            case 0x117584u: goto label_117584;
            case 0x117588u: goto label_117588;
            case 0x11758Cu: goto label_11758c;
            case 0x117590u: goto label_117590;
            case 0x117594u: goto label_117594;
            case 0x117598u: goto label_117598;
            case 0x11759Cu: goto label_11759c;
            case 0x1175A0u: goto label_1175a0;
            case 0x1175A4u: goto label_1175a4;
            case 0x1175A8u: goto label_1175a8;
            case 0x1175ACu: goto label_1175ac;
            case 0x1175B0u: goto label_1175b0;
            case 0x1175B4u: goto label_1175b4;
            case 0x1175B8u: goto label_1175b8;
            case 0x1175BCu: goto label_1175bc;
            case 0x1175C0u: goto label_1175c0;
            case 0x1175C4u: goto label_1175c4;
            case 0x1175C8u: goto label_1175c8;
            case 0x1175CCu: goto label_1175cc;
            case 0x1175D0u: goto label_1175d0;
            case 0x1175D4u: goto label_1175d4;
            case 0x1175D8u: goto label_1175d8;
            case 0x1175DCu: goto label_1175dc;
            case 0x1175E0u: goto label_1175e0;
            case 0x1175E4u: goto label_1175e4;
            case 0x1175E8u: goto label_1175e8;
            case 0x1175ECu: goto label_1175ec;
            case 0x1175F0u: goto label_1175f0;
            case 0x1175F4u: goto label_1175f4;
            case 0x1175F8u: goto label_1175f8;
            case 0x1175FCu: goto label_1175fc;
            case 0x117600u: goto label_117600;
            case 0x117604u: goto label_117604;
            case 0x117608u: goto label_117608;
            case 0x11760Cu: goto label_11760c;
            case 0x117610u: goto label_117610;
            case 0x117614u: goto label_117614;
            case 0x117618u: goto label_117618;
            case 0x11761Cu: goto label_11761c;
            case 0x117620u: goto label_117620;
            case 0x117624u: goto label_117624;
            case 0x117628u: goto label_117628;
            case 0x11762Cu: goto label_11762c;
            case 0x117630u: goto label_117630;
            case 0x117634u: goto label_117634;
            case 0x117638u: goto label_117638;
            case 0x11763Cu: goto label_11763c;
            case 0x117640u: goto label_117640;
            case 0x117644u: goto label_117644;
            case 0x117648u: goto label_117648;
            case 0x11764Cu: goto label_11764c;
            case 0x117650u: goto label_117650;
            case 0x117654u: goto label_117654;
            case 0x117658u: goto label_117658;
            case 0x11765Cu: goto label_11765c;
            case 0x117660u: goto label_117660;
            case 0x117664u: goto label_117664;
            case 0x117668u: goto label_117668;
            case 0x11766Cu: goto label_11766c;
            case 0x117670u: goto label_117670;
            case 0x117674u: goto label_117674;
            case 0x117678u: goto label_117678;
            case 0x11767Cu: goto label_11767c;
            case 0x117680u: goto label_117680;
            case 0x117684u: goto label_117684;
            case 0x117688u: goto label_117688;
            case 0x11768Cu: goto label_11768c;
            case 0x117690u: goto label_117690;
            case 0x117694u: goto label_117694;
            case 0x117698u: goto label_117698;
            case 0x11769Cu: goto label_11769c;
            case 0x1176A0u: goto label_1176a0;
            case 0x1176A4u: goto label_1176a4;
            case 0x1176A8u: goto label_1176a8;
            case 0x1176ACu: goto label_1176ac;
            case 0x1176B0u: goto label_1176b0;
            case 0x1176B4u: goto label_1176b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x117560u;
label_117560:
    // 0x117560: 0x27bdff70
    ctx->pc = 0x117560u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
label_117564:
    // 0x117564: 0xffb10030
    ctx->pc = 0x117564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_117568:
    // 0x117568: 0x80882d
    ctx->pc = 0x117568u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11756c:
    // 0x11756c: 0xffb50070
    ctx->pc = 0x11756cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
label_117570:
    // 0x117570: 0xffb40060
    ctx->pc = 0x117570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_117574:
    // 0x117574: 0x3c040026
    ctx->pc = 0x117574u;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
label_117578:
    // 0x117578: 0xffb30050
    ctx->pc = 0x117578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_11757c:
    // 0x11757c: 0xc0a02d
    ctx->pc = 0x11757cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_117580:
    // 0x117580: 0xffb20040
    ctx->pc = 0x117580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_117584:
    // 0x117584: 0xa0982d
    ctx->pc = 0x117584u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_117588:
    // 0x117588: 0xffb00020
    ctx->pc = 0x117588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_11758c:
    // 0x11758c: 0xe0a82d
    ctx->pc = 0x11758cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_117590:
    // 0x117590: 0xffbf0080
    ctx->pc = 0x117590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_117594:
    // 0x117594: 0x100902d
    ctx->pc = 0x117594u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_117598:
    // 0x117598: 0xc045c92
label_11759c:
    if (ctx->pc == 0x11759Cu) {
        ctx->pc = 0x11759Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953408));
        ctx->pc = 0x1175A0u;
        goto label_1175a0;
    }
    ctx->pc = 0x117598u;
    SET_GPR_U32(ctx, 31, 0x1175A0u);
    ctx->pc = 0x11759Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953408));
    ctx->pc = 0x117248u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00117248_0x117248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1175A0u; }
    }
    if (ctx->pc != 0x1175A0u) { return; }
    ctx->pc = 0x1175A0u;
label_1175a0:
    // 0x1175a0: 0x40802d
    ctx->pc = 0x1175a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1175a4:
    // 0x1175a4: 0x1200003b
label_1175a8:
    if (ctx->pc == 0x1175A8u) {
        ctx->pc = 0x1175A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1175ACu;
        goto label_1175ac;
    }
    ctx->pc = 0x1175A4u;
    {
        const bool branch_taken_0x1175a4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1175A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1175a4) {
            ctx->pc = 0x117694u;
            goto label_117694;
        }
    }
    ctx->pc = 0x1175ACu;
label_1175ac:
    // 0x1175ac: 0x8e020018
    ctx->pc = 0x1175acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1175b0:
    // 0x1175b0: 0x32430001
    ctx->pc = 0x1175b0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 18), 1));
label_1175b4:
    // 0x1175b4: 0xae300000
    ctx->pc = 0x1175b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_1175b8:
    // 0x1175b8: 0xae220004
    ctx->pc = 0x1175b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1175bc:
    // 0x1175bc: 0xae130020
    ctx->pc = 0x1175bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 19));
label_1175c0:
    // 0x1175c0: 0xae140024
    ctx->pc = 0x1175c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 20));
label_1175c4:
    // 0x1175c4: 0xae150028
    ctx->pc = 0x1175c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 21));
label_1175c8:
    // 0x1175c8: 0xae100014
    ctx->pc = 0x1175c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
label_1175cc:
    // 0x1175cc: 0x14600022
label_1175d0:
    if (ctx->pc == 0x1175D0u) {
        ctx->pc = 0x1175D0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
        ctx->pc = 0x1175D4u;
        goto label_1175d4;
    }
    ctx->pc = 0x1175CCu;
    {
        const bool branch_taken_0x1175cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1175D0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
        if (branch_taken_0x1175cc) {
            ctx->pc = 0x117658u;
            goto label_117658;
        }
    }
    ctx->pc = 0x1175D4u;
label_1175d4:
    // 0x1175d4: 0x24020001
    ctx->pc = 0x1175d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1175d8:
    // 0x1175d8: 0xafa00008
    ctx->pc = 0x1175d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1175dc:
    // 0x1175dc: 0xafa20004
    ctx->pc = 0x1175dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_1175e0:
    // 0x1175e0: 0xc045188
label_1175e4:
    if (ctx->pc == 0x1175E4u) {
        ctx->pc = 0x1175E4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1175E8u;
        goto label_1175e8;
    }
    ctx->pc = 0x1175E0u;
    SET_GPR_U32(ctx, 31, 0x1175E8u);
    ctx->pc = 0x1175E4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114620u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114620_0x114620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1175E8u; }
    }
    if (ctx->pc != 0x1175E8u) { return; }
    ctx->pc = 0x1175E8u;
label_1175e8:
    // 0x1175e8: 0x4410005
label_1175ec:
    if (ctx->pc == 0x1175ECu) {
        ctx->pc = 0x1175ECu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x1175F0u;
        goto label_1175f0;
    }
    ctx->pc = 0x1175E8u;
    {
        const bool branch_taken_0x1175e8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1175ECu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x1175e8) {
            ctx->pc = 0x117600u;
            goto label_117600;
        }
    }
    ctx->pc = 0x1175F0u;
label_1175f0:
    // 0x1175f0: 0xc045cbc
label_1175f4:
    if (ctx->pc == 0x1175F4u) {
        ctx->pc = 0x1175F4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1175F8u;
        goto label_1175f8;
    }
    ctx->pc = 0x1175F0u;
    SET_GPR_U32(ctx, 31, 0x1175F8u);
    ctx->pc = 0x1175F4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1172F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001172F0_0x1172f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1175F8u; }
    }
    if (ctx->pc != 0x1175F8u) { return; }
    ctx->pc = 0x1175F8u;
label_1175f8:
    // 0x1175f8: 0x10000026
label_1175fc:
    if (ctx->pc == 0x1175FCu) {
        ctx->pc = 0x1175FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x117600u;
        goto label_117600;
    }
    ctx->pc = 0x1175F8u;
    {
        const bool branch_taken_0x1175f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1175FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x1175f8) {
            ctx->pc = 0x117694u;
            goto label_117694;
        }
    }
    ctx->pc = 0x117600u;
label_117600:
    // 0x117600: 0x3c048000
    ctx->pc = 0x117600u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
label_117604:
    // 0x117604: 0x200282d
    ctx->pc = 0x117604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_117608:
    // 0x117608: 0x3484000c
    ctx->pc = 0x117608u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 12));
label_11760c:
    // 0x11760c: 0x24060040
    ctx->pc = 0x11760cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
label_117610:
    // 0x117610: 0x382d
    ctx->pc = 0x117610u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117614:
    // 0x117614: 0x402d
    ctx->pc = 0x117614u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117618:
    // 0x117618: 0xc045b82
label_11761c:
    if (ctx->pc == 0x11761Cu) {
        ctx->pc = 0x11761Cu;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x117620u;
        goto label_117620;
    }
    ctx->pc = 0x117618u;
    SET_GPR_U32(ctx, 31, 0x117620u);
    ctx->pc = 0x11761Cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x116E08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116E08_0x116e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117620u; }
    }
    if (ctx->pc != 0x117620u) { return; }
    ctx->pc = 0x117620u;
label_117620:
    // 0x117620: 0x14400007
label_117624:
    if (ctx->pc == 0x117624u) {
        ctx->pc = 0x117628u;
        goto label_117628;
    }
    ctx->pc = 0x117620u;
    {
        const bool branch_taken_0x117620 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x117620) {
            ctx->pc = 0x117640u;
            goto label_117640;
        }
    }
    ctx->pc = 0x117628u;
label_117628:
    // 0x117628: 0xc045cbc
label_11762c:
    if (ctx->pc == 0x11762Cu) {
        ctx->pc = 0x11762Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x117630u;
        goto label_117630;
    }
    ctx->pc = 0x117628u;
    SET_GPR_U32(ctx, 31, 0x117630u);
    ctx->pc = 0x11762Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1172F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001172F0_0x1172f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117630u; }
    }
    if (ctx->pc != 0x117630u) { return; }
    ctx->pc = 0x117630u;
label_117630:
    // 0x117630: 0xc04518c
label_117634:
    if (ctx->pc == 0x117634u) {
        ctx->pc = 0x117634u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x117638u;
        goto label_117638;
    }
    ctx->pc = 0x117630u;
    SET_GPR_U32(ctx, 31, 0x117638u);
    ctx->pc = 0x117634u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117638u; }
    }
    if (ctx->pc != 0x117638u) { return; }
    ctx->pc = 0x117638u;
label_117638:
    // 0x117638: 0x10000016
label_11763c:
    if (ctx->pc == 0x11763Cu) {
        ctx->pc = 0x11763Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x117640u;
        goto label_117640;
    }
    ctx->pc = 0x117638u;
    {
        const bool branch_taken_0x117638 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11763Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x117638) {
            ctx->pc = 0x117694u;
            goto label_117694;
        }
    }
    ctx->pc = 0x117640u;
label_117640:
    // 0x117640: 0xc045198
label_117644:
    if (ctx->pc == 0x117644u) {
        ctx->pc = 0x117644u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x117648u;
        goto label_117648;
    }
    ctx->pc = 0x117640u;
    SET_GPR_U32(ctx, 31, 0x117648u);
    ctx->pc = 0x117644u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117648u; }
    }
    if (ctx->pc != 0x117648u) { return; }
    ctx->pc = 0x117648u;
label_117648:
    // 0x117648: 0xc04518c
label_11764c:
    if (ctx->pc == 0x11764Cu) {
        ctx->pc = 0x11764Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x117650u;
        goto label_117650;
    }
    ctx->pc = 0x117648u;
    SET_GPR_U32(ctx, 31, 0x117650u);
    ctx->pc = 0x11764Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117650u; }
    }
    if (ctx->pc != 0x117650u) { return; }
    ctx->pc = 0x117650u;
label_117650:
    // 0x117650: 0x10000010
label_117654:
    if (ctx->pc == 0x117654u) {
        ctx->pc = 0x117654u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x117658u;
        goto label_117658;
    }
    ctx->pc = 0x117650u;
    {
        const bool branch_taken_0x117650 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x117654u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x117650) {
            ctx->pc = 0x117694u;
            goto label_117694;
        }
    }
    ctx->pc = 0x117658u;
label_117658:
    // 0x117658: 0x2402ffff
    ctx->pc = 0x117658u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_11765c:
    // 0x11765c: 0x3c048000
    ctx->pc = 0x11765cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
label_117660:
    // 0x117660: 0xae220008
    ctx->pc = 0x117660u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_117664:
    // 0x117664: 0x3484000c
    ctx->pc = 0x117664u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 12));
label_117668:
    // 0x117668: 0x200282d
    ctx->pc = 0x117668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11766c:
    // 0x11766c: 0x24060040
    ctx->pc = 0x11766cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
label_117670:
    // 0x117670: 0x382d
    ctx->pc = 0x117670u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117674:
    // 0x117674: 0x402d
    ctx->pc = 0x117674u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117678:
    // 0x117678: 0xc045b82
label_11767c:
    if (ctx->pc == 0x11767Cu) {
        ctx->pc = 0x11767Cu;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x117680u;
        goto label_117680;
    }
    ctx->pc = 0x117678u;
    SET_GPR_U32(ctx, 31, 0x117680u);
    ctx->pc = 0x11767Cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x116E08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116E08_0x116e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117680u; }
    }
    if (ctx->pc != 0x117680u) { return; }
    ctx->pc = 0x117680u;
label_117680:
    // 0x117680: 0x14400004
label_117684:
    if (ctx->pc == 0x117684u) {
        ctx->pc = 0x117684u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x117688u;
        goto label_117688;
    }
    ctx->pc = 0x117680u;
    {
        const bool branch_taken_0x117680 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x117684u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x117680) {
            ctx->pc = 0x117694u;
            goto label_117694;
        }
    }
    ctx->pc = 0x117688u;
label_117688:
    // 0x117688: 0xc045cbc
label_11768c:
    if (ctx->pc == 0x11768Cu) {
        ctx->pc = 0x11768Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x117690u;
        goto label_117690;
    }
    ctx->pc = 0x117688u;
    SET_GPR_U32(ctx, 31, 0x117690u);
    ctx->pc = 0x11768Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1172F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001172F0_0x1172f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117690u; }
    }
    if (ctx->pc != 0x117690u) { return; }
    ctx->pc = 0x117690u;
label_117690:
    // 0x117690: 0x2402fffe
    ctx->pc = 0x117690u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
label_117694:
    // 0x117694: 0xdfbf0080
    ctx->pc = 0x117694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_117698:
    // 0x117698: 0xdfb50070
    ctx->pc = 0x117698u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_11769c:
    // 0x11769c: 0xdfb40060
    ctx->pc = 0x11769cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1176a0:
    // 0x1176a0: 0xdfb30050
    ctx->pc = 0x1176a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1176a4:
    // 0x1176a4: 0xdfb20040
    ctx->pc = 0x1176a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1176a8:
    // 0x1176a8: 0xdfb10030
    ctx->pc = 0x1176a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1176ac:
    // 0x1176ac: 0xdfb00020
    ctx->pc = 0x1176acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1176b0:
    // 0x1176b0: 0x3e00008
label_1176b4:
    if (ctx->pc == 0x1176B4u) {
        ctx->pc = 0x1176B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x1176B8u;
        goto label_fallthrough_0x1176b0;
    }
    ctx->pc = 0x1176B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1176B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117340u: goto label_117340;
            case 0x117344u: goto label_117344;
            case 0x117348u: goto label_117348;
            case 0x11734Cu: goto label_11734c;
            case 0x117350u: goto label_117350;
            case 0x117354u: goto label_117354;
            case 0x117358u: goto label_117358;
            case 0x11735Cu: goto label_11735c;
            case 0x117360u: goto label_117360;
            case 0x117364u: goto label_117364;
            case 0x117368u: goto label_117368;
            case 0x11736Cu: goto label_11736c;
            case 0x117370u: goto label_117370;
            case 0x117374u: goto label_117374;
            case 0x117378u: goto label_117378;
            case 0x11737Cu: goto label_11737c;
            case 0x117380u: goto label_117380;
            case 0x117384u: goto label_117384;
            case 0x117388u: goto label_117388;
            case 0x11738Cu: goto label_11738c;
            case 0x117390u: goto label_117390;
            case 0x117394u: goto label_117394;
            case 0x117398u: goto label_117398;
            case 0x11739Cu: goto label_11739c;
            case 0x1173A0u: goto label_1173a0;
            case 0x1173A4u: goto label_1173a4;
            case 0x1173A8u: goto label_1173a8;
            case 0x1173ACu: goto label_1173ac;
            case 0x1173B0u: goto label_1173b0;
            case 0x1173B4u: goto label_1173b4;
            case 0x1173B8u: goto label_1173b8;
            case 0x1173BCu: goto label_1173bc;
            case 0x1173C0u: goto label_1173c0;
            case 0x1173C4u: goto label_1173c4;
            case 0x1173C8u: goto label_1173c8;
            case 0x1173CCu: goto label_1173cc;
            case 0x1173D0u: goto label_1173d0;
            case 0x1173D4u: goto label_1173d4;
            case 0x1173D8u: goto label_1173d8;
            case 0x1173DCu: goto label_1173dc;
            case 0x1173E0u: goto label_1173e0;
            case 0x1173E4u: goto label_1173e4;
            case 0x1173E8u: goto label_1173e8;
            case 0x1173ECu: goto label_1173ec;
            case 0x1173F0u: goto label_1173f0;
            case 0x1173F4u: goto label_1173f4;
            case 0x1173F8u: goto label_1173f8;
            case 0x1173FCu: goto label_1173fc;
            case 0x117400u: goto label_117400;
            case 0x117404u: goto label_117404;
            case 0x117408u: goto label_117408;
            case 0x11740Cu: goto label_11740c;
            case 0x117410u: goto label_117410;
            case 0x117414u: goto label_117414;
            case 0x117418u: goto label_117418;
            case 0x11741Cu: goto label_11741c;
            case 0x117420u: goto label_117420;
            case 0x117424u: goto label_117424;
            case 0x117428u: goto label_117428;
            case 0x11742Cu: goto label_11742c;
            case 0x117430u: goto label_117430;
            case 0x117434u: goto label_117434;
            case 0x117438u: goto label_117438;
            case 0x11743Cu: goto label_11743c;
            case 0x117440u: goto label_117440;
            case 0x117444u: goto label_117444;
            case 0x117448u: goto label_117448;
            case 0x11744Cu: goto label_11744c;
            case 0x117450u: goto label_117450;
            case 0x117454u: goto label_117454;
            case 0x117458u: goto label_117458;
            case 0x11745Cu: goto label_11745c;
            case 0x117460u: goto label_117460;
            case 0x117464u: goto label_117464;
            case 0x117468u: goto label_117468;
            case 0x11746Cu: goto label_11746c;
            case 0x117470u: goto label_117470;
            case 0x117474u: goto label_117474;
            case 0x117478u: goto label_117478;
            case 0x11747Cu: goto label_11747c;
            case 0x117480u: goto label_117480;
            case 0x117484u: goto label_117484;
            case 0x117488u: goto label_117488;
            case 0x11748Cu: goto label_11748c;
            case 0x117490u: goto label_117490;
            case 0x117494u: goto label_117494;
            case 0x117498u: goto label_117498;
            case 0x11749Cu: goto label_11749c;
            case 0x1174A0u: goto label_1174a0;
            case 0x1174A4u: goto label_1174a4;
            case 0x1174A8u: goto label_1174a8;
            case 0x1174ACu: goto label_1174ac;
            case 0x1174B0u: goto label_1174b0;
            case 0x1174B4u: goto label_1174b4;
            case 0x1174B8u: goto label_1174b8;
            case 0x1174BCu: goto label_1174bc;
            case 0x1174C0u: goto label_1174c0;
            case 0x1174C4u: goto label_1174c4;
            case 0x1174C8u: goto label_1174c8;
            case 0x1174CCu: goto label_1174cc;
            case 0x1174D0u: goto label_1174d0;
            case 0x1174D4u: goto label_1174d4;
            case 0x1174D8u: goto label_1174d8;
            case 0x1174DCu: goto label_1174dc;
            case 0x1174E0u: goto label_1174e0;
            case 0x1174E4u: goto label_1174e4;
            case 0x1174E8u: goto label_1174e8;
            case 0x1174ECu: goto label_1174ec;
            case 0x1174F0u: goto label_1174f0;
            case 0x1174F4u: goto label_1174f4;
            case 0x1174F8u: goto label_1174f8;
            case 0x1174FCu: goto label_1174fc;
            case 0x117500u: goto label_117500;
            case 0x117504u: goto label_117504;
            case 0x117508u: goto label_117508;
            case 0x11750Cu: goto label_11750c;
            case 0x117510u: goto label_117510;
            case 0x117514u: goto label_117514;
            case 0x117518u: goto label_117518;
            case 0x11751Cu: goto label_11751c;
            case 0x117520u: goto label_117520;
            case 0x117524u: goto label_117524;
            case 0x117528u: goto label_117528;
            case 0x11752Cu: goto label_11752c;
            case 0x117530u: goto label_117530;
            case 0x117534u: goto label_117534;
            case 0x117538u: goto label_117538;
            case 0x11753Cu: goto label_11753c;
            case 0x117540u: goto label_117540;
            case 0x117544u: goto label_117544;
            case 0x117548u: goto label_117548;
            case 0x11754Cu: goto label_11754c;
            case 0x117550u: goto label_117550;
            case 0x117554u: goto label_117554;
            case 0x117558u: goto label_117558;
            case 0x11755Cu: goto label_11755c;
            case 0x117560u: goto label_117560;
            case 0x117564u: goto label_117564;
            case 0x117568u: goto label_117568;
            case 0x11756Cu: goto label_11756c;
            case 0x117570u: goto label_117570;
            case 0x117574u: goto label_117574;
            case 0x117578u: goto label_117578;
            case 0x11757Cu: goto label_11757c;
            case 0x117580u: goto label_117580;
            case 0x117584u: goto label_117584;
            case 0x117588u: goto label_117588;
            case 0x11758Cu: goto label_11758c;
            case 0x117590u: goto label_117590;
            case 0x117594u: goto label_117594;
            case 0x117598u: goto label_117598;
            case 0x11759Cu: goto label_11759c;
            case 0x1175A0u: goto label_1175a0;
            case 0x1175A4u: goto label_1175a4;
            case 0x1175A8u: goto label_1175a8;
            case 0x1175ACu: goto label_1175ac;
            case 0x1175B0u: goto label_1175b0;
            case 0x1175B4u: goto label_1175b4;
            case 0x1175B8u: goto label_1175b8;
            case 0x1175BCu: goto label_1175bc;
            case 0x1175C0u: goto label_1175c0;
            case 0x1175C4u: goto label_1175c4;
            case 0x1175C8u: goto label_1175c8;
            case 0x1175CCu: goto label_1175cc;
            case 0x1175D0u: goto label_1175d0;
            case 0x1175D4u: goto label_1175d4;
            case 0x1175D8u: goto label_1175d8;
            case 0x1175DCu: goto label_1175dc;
            case 0x1175E0u: goto label_1175e0;
            case 0x1175E4u: goto label_1175e4;
            case 0x1175E8u: goto label_1175e8;
            case 0x1175ECu: goto label_1175ec;
            case 0x1175F0u: goto label_1175f0;
            case 0x1175F4u: goto label_1175f4;
            case 0x1175F8u: goto label_1175f8;
            case 0x1175FCu: goto label_1175fc;
            case 0x117600u: goto label_117600;
            case 0x117604u: goto label_117604;
            case 0x117608u: goto label_117608;
            case 0x11760Cu: goto label_11760c;
            case 0x117610u: goto label_117610;
            case 0x117614u: goto label_117614;
            case 0x117618u: goto label_117618;
            case 0x11761Cu: goto label_11761c;
            case 0x117620u: goto label_117620;
            case 0x117624u: goto label_117624;
            case 0x117628u: goto label_117628;
            case 0x11762Cu: goto label_11762c;
            case 0x117630u: goto label_117630;
            case 0x117634u: goto label_117634;
            case 0x117638u: goto label_117638;
            case 0x11763Cu: goto label_11763c;
            case 0x117640u: goto label_117640;
            case 0x117644u: goto label_117644;
            case 0x117648u: goto label_117648;
            case 0x11764Cu: goto label_11764c;
            case 0x117650u: goto label_117650;
            case 0x117654u: goto label_117654;
            case 0x117658u: goto label_117658;
            case 0x11765Cu: goto label_11765c;
            case 0x117660u: goto label_117660;
            case 0x117664u: goto label_117664;
            case 0x117668u: goto label_117668;
            case 0x11766Cu: goto label_11766c;
            case 0x117670u: goto label_117670;
            case 0x117674u: goto label_117674;
            case 0x117678u: goto label_117678;
            case 0x11767Cu: goto label_11767c;
            case 0x117680u: goto label_117680;
            case 0x117684u: goto label_117684;
            case 0x117688u: goto label_117688;
            case 0x11768Cu: goto label_11768c;
            case 0x117690u: goto label_117690;
            case 0x117694u: goto label_117694;
            case 0x117698u: goto label_117698;
            case 0x11769Cu: goto label_11769c;
            case 0x1176A0u: goto label_1176a0;
            case 0x1176A4u: goto label_1176a4;
            case 0x1176A8u: goto label_1176a8;
            case 0x1176ACu: goto label_1176ac;
            case 0x1176B0u: goto label_1176b0;
            case 0x1176B4u: goto label_1176b4;
            default: break;
        }
        return;
    }
label_fallthrough_0x1176b0:
    ctx->pc = 0x1176B8u;
}
