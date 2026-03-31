#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00135200
// Address: 0x135200 - 0x1353f8
void sub_00135200_0x135200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x135200u;

label_135200:
    // 0x135200: 0x27bdfff0
    ctx->pc = 0x135200u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_135204:
    // 0x135204: 0x80282d
    ctx->pc = 0x135204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_135208:
    // 0x135208: 0xffbf0000
    ctx->pc = 0x135208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13520c:
    // 0x13520c: 0x3c040022
    ctx->pc = 0x13520cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)34 << 16));
label_135210:
    // 0x135210: 0x2484bb80
    ctx->pc = 0x135210u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949760));
label_135214:
    // 0x135214: 0x302d
    ctx->pc = 0x135214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_135218:
    // 0x135218: 0xdfbf0000
    ctx->pc = 0x135218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13521c:
    // 0x13521c: 0x804d474
label_135220:
    if (ctx->pc == 0x135220u) {
        ctx->pc = 0x135220u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x135224u;
        goto label_135224;
    }
    ctx->pc = 0x13521Cu;
    ctx->pc = 0x135220u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1351D0u;
    entry_1351d0_0x135200(rdram, ctx, runtime); return;
    ctx->pc = 0x135224u;
label_135224:
    // 0x135224: 0x0
    ctx->pc = 0x135224u;
    // NOP
label_135228:
    // 0x135228: 0x27bdffe0
    ctx->pc = 0x135228u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_13522c:
    // 0x13522c: 0x3c020022
    ctx->pc = 0x13522cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
label_135230:
    // 0x135230: 0xffb10008
    ctx->pc = 0x135230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_135234:
    // 0x135234: 0x3c110022
    ctx->pc = 0x135234u;
    SET_GPR_U32(ctx, 17, ((uint32_t)34 << 16));
label_135238:
    // 0x135238: 0xffb00000
    ctx->pc = 0x135238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13523c:
    // 0x13523c: 0x2442bb78
    ctx->pc = 0x13523cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294949752));
label_135240:
    // 0x135240: 0xffbf0010
    ctx->pc = 0x135240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_135244:
    // 0x135244: 0x8e23bb84
    ctx->pc = 0x135244u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4294949764)));
label_135248:
    // 0x135248: 0x8c440000
    ctx->pc = 0x135248u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13524c:
    // 0x13524c: 0x1460001f
label_135250:
    if (ctx->pc == 0x135250u) {
        ctx->pc = 0x135250u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 4294949764));
        ctx->pc = 0x135254u;
        goto label_135254;
    }
    ctx->pc = 0x13524Cu;
    {
        const bool branch_taken_0x13524c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x135250u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 4294949764));
        if (branch_taken_0x13524c) {
            ctx->pc = 0x1352CCu;
            goto label_1352cc;
        }
    }
    ctx->pc = 0x135254u;
label_135254:
    // 0x135254: 0x3c020026
    ctx->pc = 0x135254u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
label_135258:
    // 0x135258: 0x24030027
    ctx->pc = 0x135258u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 39));
label_13525c:
    // 0x13525c: 0x24421f28
    ctx->pc = 0x13525cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7976));
label_135260:
    // 0x135260: 0x2463ffff
    ctx->pc = 0x135260u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
label_135264:
    // 0x135264: 0xac400000
    ctx->pc = 0x135264u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_135268:
    // 0x135268: 0xac400004
    ctx->pc = 0x135268u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_13526c:
    // 0x13526c: 0x0
    ctx->pc = 0x13526cu;
    // NOP
label_135270:
    // 0x135270: 0x0
    ctx->pc = 0x135270u;
    // NOP
label_135274:
    // 0x135274: 0x461fffa
label_135278:
    if (ctx->pc == 0x135278u) {
        ctx->pc = 0x135278u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
        ctx->pc = 0x13527Cu;
        goto label_13527c;
    }
    ctx->pc = 0x135274u;
    {
        const bool branch_taken_0x135274 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x135278u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
        if (branch_taken_0x135274) {
            ctx->pc = 0x135260u;
            goto label_135260;
        }
    }
    ctx->pc = 0x13527Cu;
label_13527c:
    // 0x13527c: 0x3c020026
    ctx->pc = 0x13527cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
label_135280:
    // 0x135280: 0x2403001f
    ctx->pc = 0x135280u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 31));
label_135284:
    // 0x135284: 0x24422068
    ctx->pc = 0x135284u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8296));
label_135288:
    // 0x135288: 0x244201f4
    ctx->pc = 0x135288u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 500));
label_13528c:
    // 0x13528c: 0x0
    ctx->pc = 0x13528cu;
    // NOP
label_135290:
    // 0x135290: 0x2463ffff
    ctx->pc = 0x135290u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
label_135294:
    // 0x135294: 0xa0400000
    ctx->pc = 0x135294u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_135298:
    // 0x135298: 0x0
    ctx->pc = 0x135298u;
    // NOP
label_13529c:
    // 0x13529c: 0x0
    ctx->pc = 0x13529cu;
    // NOP
label_1352a0:
    // 0x1352a0: 0x0
    ctx->pc = 0x1352a0u;
    // NOP
label_1352a4:
    // 0x1352a4: 0x461fffa
label_1352a8:
    if (ctx->pc == 0x1352A8u) {
        ctx->pc = 0x1352A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->pc = 0x1352ACu;
        goto label_1352ac;
    }
    ctx->pc = 0x1352A4u;
    {
        const bool branch_taken_0x1352a4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1352A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967280));
        if (branch_taken_0x1352a4) {
            ctx->pc = 0x135290u;
            goto label_135290;
        }
    }
    ctx->pc = 0x1352ACu;
label_1352ac:
    // 0x1352ac: 0x3c100026
    ctx->pc = 0x1352acu;
    SET_GPR_U32(ctx, 16, ((uint32_t)38 << 16));
label_1352b0:
    // 0x1352b0: 0x282d
    ctx->pc = 0x1352b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1352b4:
    // 0x1352b4: 0x26102268
    ctx->pc = 0x1352b4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8808));
label_1352b8:
    // 0x1352b8: 0x24060009
    ctx->pc = 0x1352b8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 9));
label_1352bc:
    // 0x1352bc: 0xc041f1a
label_1352c0:
    if (ctx->pc == 0x1352C0u) {
        ctx->pc = 0x1352C0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1352C4u;
        goto label_1352c4;
    }
    ctx->pc = 0x1352BCu;
    SET_GPR_U32(ctx, 31, 0x1352C4u);
    ctx->pc = 0x1352C0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1352C4u; }
    }
    if (ctx->pc != 0x1352C4u) { return; }
    ctx->pc = 0x1352C4u;
label_1352c4:
    // 0x1352c4: 0xa2000000
    ctx->pc = 0x1352c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_1352c8:
    // 0x1352c8: 0x2623bb84
    ctx->pc = 0x1352c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 4294949764));
label_1352cc:
    // 0x1352cc: 0xdfb10008
    ctx->pc = 0x1352ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1352d0:
    // 0x1352d0: 0x8c620000
    ctx->pc = 0x1352d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1352d4:
    // 0x1352d4: 0xdfb00000
    ctx->pc = 0x1352d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1352d8:
    // 0x1352d8: 0xdfbf0010
    ctx->pc = 0x1352d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1352dc:
    // 0x1352dc: 0x24420001
    ctx->pc = 0x1352dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1352e0:
    // 0x1352e0: 0xac620000
    ctx->pc = 0x1352e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1352e4:
    // 0x1352e4: 0x3e00008
label_1352e8:
    if (ctx->pc == 0x1352E8u) {
        ctx->pc = 0x1352E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1352ECu;
        goto label_1352ec;
    }
    ctx->pc = 0x1352E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1352E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135200u: goto label_135200;
            case 0x135204u: goto label_135204;
            case 0x135208u: goto label_135208;
            case 0x13520Cu: goto label_13520c;
            case 0x135210u: goto label_135210;
            case 0x135214u: goto label_135214;
            case 0x135218u: goto label_135218;
            case 0x13521Cu: goto label_13521c;
            case 0x135220u: goto label_135220;
            case 0x135224u: goto label_135224;
            case 0x135228u: goto label_135228;
            case 0x13522Cu: goto label_13522c;
            case 0x135230u: goto label_135230;
            case 0x135234u: goto label_135234;
            case 0x135238u: goto label_135238;
            case 0x13523Cu: goto label_13523c;
            case 0x135240u: goto label_135240;
            case 0x135244u: goto label_135244;
            case 0x135248u: goto label_135248;
            case 0x13524Cu: goto label_13524c;
            case 0x135250u: goto label_135250;
            case 0x135254u: goto label_135254;
            case 0x135258u: goto label_135258;
            case 0x13525Cu: goto label_13525c;
            case 0x135260u: goto label_135260;
            case 0x135264u: goto label_135264;
            case 0x135268u: goto label_135268;
            case 0x13526Cu: goto label_13526c;
            case 0x135270u: goto label_135270;
            case 0x135274u: goto label_135274;
            case 0x135278u: goto label_135278;
            case 0x13527Cu: goto label_13527c;
            case 0x135280u: goto label_135280;
            case 0x135284u: goto label_135284;
            case 0x135288u: goto label_135288;
            case 0x13528Cu: goto label_13528c;
            case 0x135290u: goto label_135290;
            case 0x135294u: goto label_135294;
            case 0x135298u: goto label_135298;
            case 0x13529Cu: goto label_13529c;
            case 0x1352A0u: goto label_1352a0;
            case 0x1352A4u: goto label_1352a4;
            case 0x1352A8u: goto label_1352a8;
            case 0x1352ACu: goto label_1352ac;
            case 0x1352B0u: goto label_1352b0;
            case 0x1352B4u: goto label_1352b4;
            case 0x1352B8u: goto label_1352b8;
            case 0x1352BCu: goto label_1352bc;
            case 0x1352C0u: goto label_1352c0;
            case 0x1352C4u: goto label_1352c4;
            case 0x1352C8u: goto label_1352c8;
            case 0x1352CCu: goto label_1352cc;
            case 0x1352D0u: goto label_1352d0;
            case 0x1352D4u: goto label_1352d4;
            case 0x1352D8u: goto label_1352d8;
            case 0x1352DCu: goto label_1352dc;
            case 0x1352E0u: goto label_1352e0;
            case 0x1352E4u: goto label_1352e4;
            case 0x1352E8u: goto label_1352e8;
            case 0x1352ECu: goto label_1352ec;
            case 0x1352F0u: goto label_1352f0;
            case 0x1352F4u: goto label_1352f4;
            case 0x1352F8u: goto label_1352f8;
            case 0x1352FCu: goto label_1352fc;
            case 0x135300u: goto label_135300;
            case 0x135304u: goto label_135304;
            case 0x135308u: goto label_135308;
            case 0x13530Cu: goto label_13530c;
            case 0x135310u: goto label_135310;
            case 0x135314u: goto label_135314;
            case 0x135318u: goto label_135318;
            case 0x13531Cu: goto label_13531c;
            case 0x135320u: goto label_135320;
            case 0x135324u: goto label_135324;
            case 0x135328u: goto label_135328;
            case 0x13532Cu: goto label_13532c;
            case 0x135330u: goto label_135330;
            case 0x135334u: goto label_135334;
            case 0x135338u: goto label_135338;
            case 0x13533Cu: goto label_13533c;
            case 0x135340u: goto label_135340;
            case 0x135344u: goto label_135344;
            case 0x135348u: goto label_135348;
            case 0x13534Cu: goto label_13534c;
            case 0x135350u: goto label_135350;
            case 0x135354u: goto label_135354;
            case 0x135358u: goto label_135358;
            case 0x13535Cu: goto label_13535c;
            case 0x135360u: goto label_135360;
            case 0x135364u: goto label_135364;
            case 0x135368u: goto label_135368;
            case 0x13536Cu: goto label_13536c;
            case 0x135370u: goto label_135370;
            case 0x135374u: goto label_135374;
            case 0x135378u: goto label_135378;
            case 0x13537Cu: goto label_13537c;
            case 0x135380u: goto label_135380;
            case 0x135384u: goto label_135384;
            case 0x135388u: goto label_135388;
            case 0x13538Cu: goto label_13538c;
            case 0x135390u: goto label_135390;
            case 0x135394u: goto label_135394;
            case 0x135398u: goto label_135398;
            case 0x13539Cu: goto label_13539c;
            case 0x1353A0u: goto label_1353a0;
            case 0x1353A4u: goto label_1353a4;
            case 0x1353A8u: goto label_1353a8;
            case 0x1353ACu: goto label_1353ac;
            case 0x1353B0u: goto label_1353b0;
            case 0x1353B4u: goto label_1353b4;
            case 0x1353B8u: goto label_1353b8;
            case 0x1353BCu: goto label_1353bc;
            case 0x1353C0u: goto label_1353c0;
            case 0x1353C4u: goto label_1353c4;
            case 0x1353C8u: goto label_1353c8;
            case 0x1353CCu: goto label_1353cc;
            case 0x1353D0u: goto label_1353d0;
            case 0x1353D4u: goto label_1353d4;
            case 0x1353D8u: goto label_1353d8;
            case 0x1353DCu: goto label_1353dc;
            case 0x1353E0u: goto label_1353e0;
            case 0x1353E4u: goto label_1353e4;
            case 0x1353E8u: goto label_1353e8;
            case 0x1353ECu: goto label_1353ec;
            case 0x1353F0u: goto label_1353f0;
            case 0x1353F4u: goto label_1353f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1352ECu;
label_1352ec:
    // 0x1352ec: 0x0
    ctx->pc = 0x1352ecu;
    // NOP
label_1352f0:
    // 0x1352f0: 0x27bdffc0
    ctx->pc = 0x1352f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_1352f4:
    // 0x1352f4: 0x3c030022
    ctx->pc = 0x1352f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
label_1352f8:
    // 0x1352f8: 0xffb00000
    ctx->pc = 0x1352f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1352fc:
    // 0x1352fc: 0x2463bb84
    ctx->pc = 0x1352fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294949764));
label_135300:
    // 0x135300: 0xffb10008
    ctx->pc = 0x135300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_135304:
    // 0x135304: 0xffb20010
    ctx->pc = 0x135304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_135308:
    // 0x135308: 0xffb30018
    ctx->pc = 0x135308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_13530c:
    // 0x13530c: 0xffb40020
    ctx->pc = 0x13530cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_135310:
    // 0x135310: 0xffb50028
    ctx->pc = 0x135310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_135314:
    // 0x135314: 0xffbf0030
    ctx->pc = 0x135314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_135318:
    // 0x135318: 0x8c620000
    ctx->pc = 0x135318u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_13531c:
    // 0x13531c: 0x2442ffff
    ctx->pc = 0x13531cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_135320:
    // 0x135320: 0x1440002b
label_135324:
    if (ctx->pc == 0x135324u) {
        ctx->pc = 0x135324u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x135328u;
        goto label_135328;
    }
    ctx->pc = 0x135320u;
    {
        const bool branch_taken_0x135320 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x135324u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x135320) {
            ctx->pc = 0x1353D0u;
            goto label_1353d0;
        }
    }
    ctx->pc = 0x135328u;
label_135328:
    // 0x135328: 0x3c020026
    ctx->pc = 0x135328u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
label_13532c:
    // 0x13532c: 0x882d
    ctx->pc = 0x13532cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_135330:
    // 0x135330: 0x24541f28
    ctx->pc = 0x135330u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 7976));
label_135334:
    // 0x135334: 0x26950004
    ctx->pc = 0x135334u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 20), 4));
label_135338:
    // 0x135338: 0x280902d
    ctx->pc = 0x135338u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13533c:
    // 0x13533c: 0x0
    ctx->pc = 0x13533cu;
    // NOP
label_135340:
    // 0x135340: 0x8e420000
    ctx->pc = 0x135340u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_135344:
    // 0x135344: 0x1198c0
    ctx->pc = 0x135344u;
    SET_GPR_U32(ctx, 19, SLL32(GPR_U32(ctx, 17), 3));
label_135348:
    // 0x135348: 0x10400007
label_13534c:
    if (ctx->pc == 0x13534Cu) {
        ctx->pc = 0x13534Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x135350u;
        goto label_135350;
    }
    ctx->pc = 0x135348u;
    {
        const bool branch_taken_0x135348 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13534Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x135348) {
            ctx->pc = 0x135368u;
            goto label_135368;
        }
    }
    ctx->pc = 0x135350u;
label_135350:
    // 0x135350: 0x8c420014
    ctx->pc = 0x135350u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_135354:
    // 0x135354: 0x2a0802d
    ctx->pc = 0x135354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_135358:
    // 0x135358: 0x40f809
label_13535c:
    if (ctx->pc == 0x13535Cu) {
        ctx->pc = 0x13535Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x135360u;
        goto label_135360;
    }
    ctx->pc = 0x135358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x135360u);
        ctx->pc = 0x13535Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135200u: goto label_135200;
            case 0x135204u: goto label_135204;
            case 0x135208u: goto label_135208;
            case 0x13520Cu: goto label_13520c;
            case 0x135210u: goto label_135210;
            case 0x135214u: goto label_135214;
            case 0x135218u: goto label_135218;
            case 0x13521Cu: goto label_13521c;
            case 0x135220u: goto label_135220;
            case 0x135224u: goto label_135224;
            case 0x135228u: goto label_135228;
            case 0x13522Cu: goto label_13522c;
            case 0x135230u: goto label_135230;
            case 0x135234u: goto label_135234;
            case 0x135238u: goto label_135238;
            case 0x13523Cu: goto label_13523c;
            case 0x135240u: goto label_135240;
            case 0x135244u: goto label_135244;
            case 0x135248u: goto label_135248;
            case 0x13524Cu: goto label_13524c;
            case 0x135250u: goto label_135250;
            case 0x135254u: goto label_135254;
            case 0x135258u: goto label_135258;
            case 0x13525Cu: goto label_13525c;
            case 0x135260u: goto label_135260;
            case 0x135264u: goto label_135264;
            case 0x135268u: goto label_135268;
            case 0x13526Cu: goto label_13526c;
            case 0x135270u: goto label_135270;
            case 0x135274u: goto label_135274;
            case 0x135278u: goto label_135278;
            case 0x13527Cu: goto label_13527c;
            case 0x135280u: goto label_135280;
            case 0x135284u: goto label_135284;
            case 0x135288u: goto label_135288;
            case 0x13528Cu: goto label_13528c;
            case 0x135290u: goto label_135290;
            case 0x135294u: goto label_135294;
            case 0x135298u: goto label_135298;
            case 0x13529Cu: goto label_13529c;
            case 0x1352A0u: goto label_1352a0;
            case 0x1352A4u: goto label_1352a4;
            case 0x1352A8u: goto label_1352a8;
            case 0x1352ACu: goto label_1352ac;
            case 0x1352B0u: goto label_1352b0;
            case 0x1352B4u: goto label_1352b4;
            case 0x1352B8u: goto label_1352b8;
            case 0x1352BCu: goto label_1352bc;
            case 0x1352C0u: goto label_1352c0;
            case 0x1352C4u: goto label_1352c4;
            case 0x1352C8u: goto label_1352c8;
            case 0x1352CCu: goto label_1352cc;
            case 0x1352D0u: goto label_1352d0;
            case 0x1352D4u: goto label_1352d4;
            case 0x1352D8u: goto label_1352d8;
            case 0x1352DCu: goto label_1352dc;
            case 0x1352E0u: goto label_1352e0;
            case 0x1352E4u: goto label_1352e4;
            case 0x1352E8u: goto label_1352e8;
            case 0x1352ECu: goto label_1352ec;
            case 0x1352F0u: goto label_1352f0;
            case 0x1352F4u: goto label_1352f4;
            case 0x1352F8u: goto label_1352f8;
            case 0x1352FCu: goto label_1352fc;
            case 0x135300u: goto label_135300;
            case 0x135304u: goto label_135304;
            case 0x135308u: goto label_135308;
            case 0x13530Cu: goto label_13530c;
            case 0x135310u: goto label_135310;
            case 0x135314u: goto label_135314;
            case 0x135318u: goto label_135318;
            case 0x13531Cu: goto label_13531c;
            case 0x135320u: goto label_135320;
            case 0x135324u: goto label_135324;
            case 0x135328u: goto label_135328;
            case 0x13532Cu: goto label_13532c;
            case 0x135330u: goto label_135330;
            case 0x135334u: goto label_135334;
            case 0x135338u: goto label_135338;
            case 0x13533Cu: goto label_13533c;
            case 0x135340u: goto label_135340;
            case 0x135344u: goto label_135344;
            case 0x135348u: goto label_135348;
            case 0x13534Cu: goto label_13534c;
            case 0x135350u: goto label_135350;
            case 0x135354u: goto label_135354;
            case 0x135358u: goto label_135358;
            case 0x13535Cu: goto label_13535c;
            case 0x135360u: goto label_135360;
            case 0x135364u: goto label_135364;
            case 0x135368u: goto label_135368;
            case 0x13536Cu: goto label_13536c;
            case 0x135370u: goto label_135370;
            case 0x135374u: goto label_135374;
            case 0x135378u: goto label_135378;
            case 0x13537Cu: goto label_13537c;
            case 0x135380u: goto label_135380;
            case 0x135384u: goto label_135384;
            case 0x135388u: goto label_135388;
            case 0x13538Cu: goto label_13538c;
            case 0x135390u: goto label_135390;
            case 0x135394u: goto label_135394;
            case 0x135398u: goto label_135398;
            case 0x13539Cu: goto label_13539c;
            case 0x1353A0u: goto label_1353a0;
            case 0x1353A4u: goto label_1353a4;
            case 0x1353A8u: goto label_1353a8;
            case 0x1353ACu: goto label_1353ac;
            case 0x1353B0u: goto label_1353b0;
            case 0x1353B4u: goto label_1353b4;
            case 0x1353B8u: goto label_1353b8;
            case 0x1353BCu: goto label_1353bc;
            case 0x1353C0u: goto label_1353c0;
            case 0x1353C4u: goto label_1353c4;
            case 0x1353C8u: goto label_1353c8;
            case 0x1353CCu: goto label_1353cc;
            case 0x1353D0u: goto label_1353d0;
            case 0x1353D4u: goto label_1353d4;
            case 0x1353D8u: goto label_1353d8;
            case 0x1353DCu: goto label_1353dc;
            case 0x1353E0u: goto label_1353e0;
            case 0x1353E4u: goto label_1353e4;
            case 0x1353E8u: goto label_1353e8;
            case 0x1353ECu: goto label_1353ec;
            case 0x1353F0u: goto label_1353f0;
            case 0x1353F4u: goto label_1353f4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x135360u; }
            if (ctx->pc != 0x135360u) { return; }
        }
    }
    ctx->pc = 0x135360u;
label_135360:
    // 0x135360: 0x10000003
label_135364:
    if (ctx->pc == 0x135364u) {
        ctx->pc = 0x135364u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->pc = 0x135368u;
        goto label_135368;
    }
    ctx->pc = 0x135360u;
    {
        const bool branch_taken_0x135360 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x135364u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        if (branch_taken_0x135360) {
            ctx->pc = 0x135370u;
            goto label_135370;
        }
    }
    ctx->pc = 0x135368u;
label_135368:
    // 0x135368: 0x26900004
    ctx->pc = 0x135368u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 20), 4));
label_13536c:
    // 0x13536c: 0x2701021
    ctx->pc = 0x13536cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_135370:
    // 0x135370: 0x2a230028
    ctx->pc = 0x135370u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), 40));
label_135374:
    // 0x135374: 0xae400000
    ctx->pc = 0x135374u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_135378:
    // 0x135378: 0x26520008
    ctx->pc = 0x135378u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 8));
label_13537c:
    // 0x13537c: 0x1460fff0
label_135380:
    if (ctx->pc == 0x135380u) {
        ctx->pc = 0x135380u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x135384u;
        goto label_135384;
    }
    ctx->pc = 0x13537Cu;
    {
        const bool branch_taken_0x13537c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x135380u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x13537c) {
            ctx->pc = 0x135340u;
            goto label_135340;
        }
    }
    ctx->pc = 0x135384u;
label_135384:
    // 0x135384: 0x3c020026
    ctx->pc = 0x135384u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
label_135388:
    // 0x135388: 0x2411001f
    ctx->pc = 0x135388u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 31));
label_13538c:
    // 0x13538c: 0x24422068
    ctx->pc = 0x13538cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8296));
label_135390:
    // 0x135390: 0x244201f4
    ctx->pc = 0x135390u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 500));
label_135394:
    // 0x135394: 0x0
    ctx->pc = 0x135394u;
    // NOP
label_135398:
    // 0x135398: 0x2631ffff
    ctx->pc = 0x135398u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
label_13539c:
    // 0x13539c: 0xa0400000
    ctx->pc = 0x13539cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_1353a0:
    // 0x1353a0: 0x0
    ctx->pc = 0x1353a0u;
    // NOP
label_1353a4:
    // 0x1353a4: 0x0
    ctx->pc = 0x1353a4u;
    // NOP
label_1353a8:
    // 0x1353a8: 0x0
    ctx->pc = 0x1353a8u;
    // NOP
label_1353ac:
    // 0x1353ac: 0x621fffa
label_1353b0:
    if (ctx->pc == 0x1353B0u) {
        ctx->pc = 0x1353B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->pc = 0x1353B4u;
        goto label_1353b4;
    }
    ctx->pc = 0x1353ACu;
    {
        const bool branch_taken_0x1353ac = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1353B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967280));
        if (branch_taken_0x1353ac) {
            ctx->pc = 0x135398u;
            goto label_135398;
        }
    }
    ctx->pc = 0x1353B4u;
label_1353b4:
    // 0x1353b4: 0x3c100026
    ctx->pc = 0x1353b4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)38 << 16));
label_1353b8:
    // 0x1353b8: 0x282d
    ctx->pc = 0x1353b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1353bc:
    // 0x1353bc: 0x26102268
    ctx->pc = 0x1353bcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8808));
label_1353c0:
    // 0x1353c0: 0x24060009
    ctx->pc = 0x1353c0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 9));
label_1353c4:
    // 0x1353c4: 0xc041f1a
label_1353c8:
    if (ctx->pc == 0x1353C8u) {
        ctx->pc = 0x1353C8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1353CCu;
        goto label_1353cc;
    }
    ctx->pc = 0x1353C4u;
    SET_GPR_U32(ctx, 31, 0x1353CCu);
    ctx->pc = 0x1353C8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1353CCu; }
    }
    if (ctx->pc != 0x1353CCu) { return; }
    ctx->pc = 0x1353CCu;
label_1353cc:
    // 0x1353cc: 0xa2000000
    ctx->pc = 0x1353ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_1353d0:
    // 0x1353d0: 0xdfb00000
    ctx->pc = 0x1353d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1353d4:
    // 0x1353d4: 0xdfb10008
    ctx->pc = 0x1353d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1353d8:
    // 0x1353d8: 0xdfb20010
    ctx->pc = 0x1353d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1353dc:
    // 0x1353dc: 0xdfb30018
    ctx->pc = 0x1353dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1353e0:
    // 0x1353e0: 0xdfb40020
    ctx->pc = 0x1353e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1353e4:
    // 0x1353e4: 0xdfb50028
    ctx->pc = 0x1353e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1353e8:
    // 0x1353e8: 0xdfbf0030
    ctx->pc = 0x1353e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1353ec:
    // 0x1353ec: 0x3e00008
label_1353f0:
    if (ctx->pc == 0x1353F0u) {
        ctx->pc = 0x1353F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1353F4u;
        goto label_1353f4;
    }
    ctx->pc = 0x1353ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1353F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135200u: goto label_135200;
            case 0x135204u: goto label_135204;
            case 0x135208u: goto label_135208;
            case 0x13520Cu: goto label_13520c;
            case 0x135210u: goto label_135210;
            case 0x135214u: goto label_135214;
            case 0x135218u: goto label_135218;
            case 0x13521Cu: goto label_13521c;
            case 0x135220u: goto label_135220;
            case 0x135224u: goto label_135224;
            case 0x135228u: goto label_135228;
            case 0x13522Cu: goto label_13522c;
            case 0x135230u: goto label_135230;
            case 0x135234u: goto label_135234;
            case 0x135238u: goto label_135238;
            case 0x13523Cu: goto label_13523c;
            case 0x135240u: goto label_135240;
            case 0x135244u: goto label_135244;
            case 0x135248u: goto label_135248;
            case 0x13524Cu: goto label_13524c;
            case 0x135250u: goto label_135250;
            case 0x135254u: goto label_135254;
            case 0x135258u: goto label_135258;
            case 0x13525Cu: goto label_13525c;
            case 0x135260u: goto label_135260;
            case 0x135264u: goto label_135264;
            case 0x135268u: goto label_135268;
            case 0x13526Cu: goto label_13526c;
            case 0x135270u: goto label_135270;
            case 0x135274u: goto label_135274;
            case 0x135278u: goto label_135278;
            case 0x13527Cu: goto label_13527c;
            case 0x135280u: goto label_135280;
            case 0x135284u: goto label_135284;
            case 0x135288u: goto label_135288;
            case 0x13528Cu: goto label_13528c;
            case 0x135290u: goto label_135290;
            case 0x135294u: goto label_135294;
            case 0x135298u: goto label_135298;
            case 0x13529Cu: goto label_13529c;
            case 0x1352A0u: goto label_1352a0;
            case 0x1352A4u: goto label_1352a4;
            case 0x1352A8u: goto label_1352a8;
            case 0x1352ACu: goto label_1352ac;
            case 0x1352B0u: goto label_1352b0;
            case 0x1352B4u: goto label_1352b4;
            case 0x1352B8u: goto label_1352b8;
            case 0x1352BCu: goto label_1352bc;
            case 0x1352C0u: goto label_1352c0;
            case 0x1352C4u: goto label_1352c4;
            case 0x1352C8u: goto label_1352c8;
            case 0x1352CCu: goto label_1352cc;
            case 0x1352D0u: goto label_1352d0;
            case 0x1352D4u: goto label_1352d4;
            case 0x1352D8u: goto label_1352d8;
            case 0x1352DCu: goto label_1352dc;
            case 0x1352E0u: goto label_1352e0;
            case 0x1352E4u: goto label_1352e4;
            case 0x1352E8u: goto label_1352e8;
            case 0x1352ECu: goto label_1352ec;
            case 0x1352F0u: goto label_1352f0;
            case 0x1352F4u: goto label_1352f4;
            case 0x1352F8u: goto label_1352f8;
            case 0x1352FCu: goto label_1352fc;
            case 0x135300u: goto label_135300;
            case 0x135304u: goto label_135304;
            case 0x135308u: goto label_135308;
            case 0x13530Cu: goto label_13530c;
            case 0x135310u: goto label_135310;
            case 0x135314u: goto label_135314;
            case 0x135318u: goto label_135318;
            case 0x13531Cu: goto label_13531c;
            case 0x135320u: goto label_135320;
            case 0x135324u: goto label_135324;
            case 0x135328u: goto label_135328;
            case 0x13532Cu: goto label_13532c;
            case 0x135330u: goto label_135330;
            case 0x135334u: goto label_135334;
            case 0x135338u: goto label_135338;
            case 0x13533Cu: goto label_13533c;
            case 0x135340u: goto label_135340;
            case 0x135344u: goto label_135344;
            case 0x135348u: goto label_135348;
            case 0x13534Cu: goto label_13534c;
            case 0x135350u: goto label_135350;
            case 0x135354u: goto label_135354;
            case 0x135358u: goto label_135358;
            case 0x13535Cu: goto label_13535c;
            case 0x135360u: goto label_135360;
            case 0x135364u: goto label_135364;
            case 0x135368u: goto label_135368;
            case 0x13536Cu: goto label_13536c;
            case 0x135370u: goto label_135370;
            case 0x135374u: goto label_135374;
            case 0x135378u: goto label_135378;
            case 0x13537Cu: goto label_13537c;
            case 0x135380u: goto label_135380;
            case 0x135384u: goto label_135384;
            case 0x135388u: goto label_135388;
            case 0x13538Cu: goto label_13538c;
            case 0x135390u: goto label_135390;
            case 0x135394u: goto label_135394;
            case 0x135398u: goto label_135398;
            case 0x13539Cu: goto label_13539c;
            case 0x1353A0u: goto label_1353a0;
            case 0x1353A4u: goto label_1353a4;
            case 0x1353A8u: goto label_1353a8;
            case 0x1353ACu: goto label_1353ac;
            case 0x1353B0u: goto label_1353b0;
            case 0x1353B4u: goto label_1353b4;
            case 0x1353B8u: goto label_1353b8;
            case 0x1353BCu: goto label_1353bc;
            case 0x1353C0u: goto label_1353c0;
            case 0x1353C4u: goto label_1353c4;
            case 0x1353C8u: goto label_1353c8;
            case 0x1353CCu: goto label_1353cc;
            case 0x1353D0u: goto label_1353d0;
            case 0x1353D4u: goto label_1353d4;
            case 0x1353D8u: goto label_1353d8;
            case 0x1353DCu: goto label_1353dc;
            case 0x1353E0u: goto label_1353e0;
            case 0x1353E4u: goto label_1353e4;
            case 0x1353E8u: goto label_1353e8;
            case 0x1353ECu: goto label_1353ec;
            case 0x1353F0u: goto label_1353f0;
            case 0x1353F4u: goto label_1353f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1353F4u;
label_1353f4:
    // 0x1353f4: 0x0
    ctx->pc = 0x1353f4u;
    // NOP
}
