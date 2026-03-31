#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001061F0
// Address: 0x1061f0 - 0x106358
void sub_001061F0_0x1061f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1061f0u;

label_1061f0:
    // 0x1061f0: 0x27bdffe0
    ctx->pc = 0x1061f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1061f4:
    // 0x1061f4: 0x3c020037
    ctx->pc = 0x1061f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_1061f8:
    // 0x1061f8: 0xffb00000
    ctx->pc = 0x1061f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1061fc:
    // 0x1061fc: 0x80802d
    ctx->pc = 0x1061fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_106200:
    // 0x106200: 0xffb10008
    ctx->pc = 0x106200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_106204:
    // 0x106204: 0x2451f0dc
    ctx->pc = 0x106204u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294963420));
label_106208:
    // 0x106208: 0xa0202d
    ctx->pc = 0x106208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10620c:
    // 0x10620c: 0xc0282d
    ctx->pc = 0x10620cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_106210:
    // 0x106210: 0xffbf0010
    ctx->pc = 0x106210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_106214:
    // 0x106214: 0xc045376
label_106218:
    if (ctx->pc == 0x106218u) {
        ctx->pc = 0x106218u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x10621Cu;
        goto label_10621c;
    }
    ctx->pc = 0x106214u;
    SET_GPR_U32(ctx, 31, 0x10621Cu);
    ctx->pc = 0x106218u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x114DD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114DD8_0x114dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10621Cu; }
    }
    if (ctx->pc != 0x10621Cu) { return; }
    ctx->pc = 0x10621Cu;
label_10621c:
    // 0x10621c: 0x40182d
    ctx->pc = 0x10621cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_106220:
    // 0x106220: 0x2404ffff
    ctx->pc = 0x106220u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_106224:
    // 0x106224: 0x54640005
label_106228:
    if (ctx->pc == 0x106228u) {
        ctx->pc = 0x106228u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x10622Cu;
        goto label_10622c;
    }
    ctx->pc = 0x106224u;
    {
        const bool branch_taken_0x106224 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x106224) {
            ctx->pc = 0x106228u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x10623Cu;
            goto label_10623c;
        }
    }
    ctx->pc = 0x10622Cu;
label_10622c:
    // 0x10622c: 0x8e230000
    ctx->pc = 0x10622cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_106230:
    // 0x106230: 0x54600001
label_106234:
    if (ctx->pc == 0x106234u) {
        ctx->pc = 0x106234u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x106238u;
        goto label_106238;
    }
    ctx->pc = 0x106230u;
    {
        const bool branch_taken_0x106230 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x106230) {
            ctx->pc = 0x106234u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->pc = 0x106238u;
            goto label_106238;
        }
    }
    ctx->pc = 0x106238u;
label_106238:
    // 0x106238: 0xdfb00000
    ctx->pc = 0x106238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10623c:
    // 0x10623c: 0xdfb10008
    ctx->pc = 0x10623cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_106240:
    // 0x106240: 0xdfbf0010
    ctx->pc = 0x106240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_106244:
    // 0x106244: 0x3e00008
label_106248:
    if (ctx->pc == 0x106248u) {
        ctx->pc = 0x106248u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x10624Cu;
        goto label_10624c;
    }
    ctx->pc = 0x106244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106248u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1061F0u: goto label_1061f0;
            case 0x1061F4u: goto label_1061f4;
            case 0x1061F8u: goto label_1061f8;
            case 0x1061FCu: goto label_1061fc;
            case 0x106200u: goto label_106200;
            case 0x106204u: goto label_106204;
            case 0x106208u: goto label_106208;
            case 0x10620Cu: goto label_10620c;
            case 0x106210u: goto label_106210;
            case 0x106214u: goto label_106214;
            case 0x106218u: goto label_106218;
            case 0x10621Cu: goto label_10621c;
            case 0x106220u: goto label_106220;
            case 0x106224u: goto label_106224;
            case 0x106228u: goto label_106228;
            case 0x10622Cu: goto label_10622c;
            case 0x106230u: goto label_106230;
            case 0x106234u: goto label_106234;
            case 0x106238u: goto label_106238;
            case 0x10623Cu: goto label_10623c;
            case 0x106240u: goto label_106240;
            case 0x106244u: goto label_106244;
            case 0x106248u: goto label_106248;
            case 0x10624Cu: goto label_10624c;
            case 0x106250u: goto label_106250;
            case 0x106254u: goto label_106254;
            case 0x106258u: goto label_106258;
            case 0x10625Cu: goto label_10625c;
            case 0x106260u: goto label_106260;
            case 0x106264u: goto label_106264;
            case 0x106268u: goto label_106268;
            case 0x10626Cu: goto label_10626c;
            case 0x106270u: goto label_106270;
            case 0x106274u: goto label_106274;
            case 0x106278u: goto label_106278;
            case 0x10627Cu: goto label_10627c;
            case 0x106280u: goto label_106280;
            case 0x106284u: goto label_106284;
            case 0x106288u: goto label_106288;
            case 0x10628Cu: goto label_10628c;
            case 0x106290u: goto label_106290;
            case 0x106294u: goto label_106294;
            case 0x106298u: goto label_106298;
            case 0x10629Cu: goto label_10629c;
            case 0x1062A0u: goto label_1062a0;
            case 0x1062A4u: goto label_1062a4;
            case 0x1062A8u: goto label_1062a8;
            case 0x1062ACu: goto label_1062ac;
            case 0x1062B0u: goto label_1062b0;
            case 0x1062B4u: goto label_1062b4;
            case 0x1062B8u: goto label_1062b8;
            case 0x1062BCu: goto label_1062bc;
            case 0x1062C0u: goto label_1062c0;
            case 0x1062C4u: goto label_1062c4;
            case 0x1062C8u: goto label_1062c8;
            case 0x1062CCu: goto label_1062cc;
            case 0x1062D0u: goto label_1062d0;
            case 0x1062D4u: goto label_1062d4;
            case 0x1062D8u: goto label_1062d8;
            case 0x1062DCu: goto label_1062dc;
            case 0x1062E0u: goto label_1062e0;
            case 0x1062E4u: goto label_1062e4;
            case 0x1062E8u: goto label_1062e8;
            case 0x1062ECu: goto label_1062ec;
            case 0x1062F0u: goto label_1062f0;
            case 0x1062F4u: goto label_1062f4;
            case 0x1062F8u: goto label_1062f8;
            case 0x1062FCu: goto label_1062fc;
            case 0x106300u: goto label_106300;
            case 0x106304u: goto label_106304;
            case 0x106308u: goto label_106308;
            case 0x10630Cu: goto label_10630c;
            case 0x106310u: goto label_106310;
            case 0x106314u: goto label_106314;
            case 0x106318u: goto label_106318;
            case 0x10631Cu: goto label_10631c;
            case 0x106320u: goto label_106320;
            case 0x106324u: goto label_106324;
            case 0x106328u: goto label_106328;
            case 0x10632Cu: goto label_10632c;
            case 0x106330u: goto label_106330;
            case 0x106334u: goto label_106334;
            case 0x106338u: goto label_106338;
            case 0x10633Cu: goto label_10633c;
            case 0x106340u: goto label_106340;
            case 0x106344u: goto label_106344;
            case 0x106348u: goto label_106348;
            case 0x10634Cu: goto label_10634c;
            case 0x106350u: goto label_106350;
            case 0x106354u: goto label_106354;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10624Cu;
label_10624c:
    // 0x10624c: 0x0
    ctx->pc = 0x10624cu;
    // NOP
label_106250:
    // 0x106250: 0x27bdfff0
    ctx->pc = 0x106250u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_106254:
    // 0x106254: 0xffb00000
    ctx->pc = 0x106254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_106258:
    // 0x106258: 0x80802d
    ctx->pc = 0x106258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10625c:
    // 0x10625c: 0xffbf0008
    ctx->pc = 0x10625cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_106260:
    // 0x106260: 0x8e030054
    ctx->pc = 0x106260u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_106264:
    // 0x106264: 0x54600006
label_106268:
    if (ctx->pc == 0x106268u) {
        ctx->pc = 0x106268u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 56)));
        ctx->pc = 0x10626Cu;
        goto label_10626c;
    }
    ctx->pc = 0x106264u;
    {
        const bool branch_taken_0x106264 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x106264) {
            ctx->pc = 0x106268u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->pc = 0x106280u;
            goto label_106280;
        }
    }
    ctx->pc = 0x10626Cu;
label_10626c:
    // 0x10626c: 0x3c020021
    ctx->pc = 0x10626cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
label_106270:
    // 0x106270: 0x8c4397f0
    ctx->pc = 0x106270u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294940656)));
label_106274:
    // 0x106274: 0xae030054
    ctx->pc = 0x106274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_106278:
    // 0x106278: 0x8c620038
    ctx->pc = 0x106278u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_10627c:
    // 0x10627c: 0x0
    ctx->pc = 0x10627cu;
    // NOP
label_106280:
    // 0x106280: 0x54400004
label_106284:
    if (ctx->pc == 0x106284u) {
        ctx->pc = 0x106284u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x106288u;
        goto label_106288;
    }
    ctx->pc = 0x106280u;
    {
        const bool branch_taken_0x106280 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x106280) {
            ctx->pc = 0x106284u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->pc = 0x106294u;
            goto label_106294;
        }
    }
    ctx->pc = 0x106288u;
label_106288:
    // 0x106288: 0xc041544
label_10628c:
    if (ctx->pc == 0x10628Cu) {
        ctx->pc = 0x10628Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x106290u;
        goto label_106290;
    }
    ctx->pc = 0x106288u;
    SET_GPR_U32(ctx, 31, 0x106290u);
    ctx->pc = 0x10628Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x105510u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00105510_0x105510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106290u; }
    }
    if (ctx->pc != 0x106290u) { return; }
    ctx->pc = 0x106290u;
label_106290:
    // 0x106290: 0x8e020028
    ctx->pc = 0x106290u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_106294:
    // 0x106294: 0x14400006
label_106298:
    if (ctx->pc == 0x106298u) {
        ctx->pc = 0x106298u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x10629Cu;
        goto label_10629c;
    }
    ctx->pc = 0x106294u;
    {
        const bool branch_taken_0x106294 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x106298u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 29));
        if (branch_taken_0x106294) {
            ctx->pc = 0x1062B0u;
            goto label_1062b0;
        }
    }
    ctx->pc = 0x10629Cu;
label_10629c:
    // 0x10629c: 0x8e040054
    ctx->pc = 0x10629cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_1062a0:
    // 0x1062a0: 0x2402ffff
    ctx->pc = 0x1062a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1062a4:
    // 0x1062a4: 0x10000027
label_1062a8:
    if (ctx->pc == 0x1062A8u) {
        ctx->pc = 0x1062A8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x1062ACu;
        goto label_1062ac;
    }
    ctx->pc = 0x1062A4u;
    {
        const bool branch_taken_0x1062a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1062A8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x1062a4) {
            ctx->pc = 0x106344u;
            goto label_106344;
        }
    }
    ctx->pc = 0x1062ACu;
label_1062ac:
    // 0x1062ac: 0x0
    ctx->pc = 0x1062acu;
    // NOP
label_1062b0:
    // 0x1062b0: 0xc04142c
label_1062b4:
    if (ctx->pc == 0x1062B4u) {
        ctx->pc = 0x1062B4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1062B8u;
        goto label_1062b8;
    }
    ctx->pc = 0x1062B0u;
    SET_GPR_U32(ctx, 31, 0x1062B8u);
    ctx->pc = 0x1062B4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1050B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001050B0_0x1050b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1062B8u; }
    }
    if (ctx->pc != 0x1062B8u) { return; }
    ctx->pc = 0x1062B8u;
label_1062b8:
    // 0x1062b8: 0x9603000c
    ctx->pc = 0x1062b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_1062bc:
    // 0x1062bc: 0x30621000
    ctx->pc = 0x1062bcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 4096));
label_1062c0:
    // 0x1062c0: 0x50400003
label_1062c4:
    if (ctx->pc == 0x1062C4u) {
        ctx->pc = 0x1062C4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x1062C8u;
        goto label_1062c8;
    }
    ctx->pc = 0x1062C0u;
    {
        const bool branch_taken_0x1062c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1062c0) {
            ctx->pc = 0x1062C4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->pc = 0x1062D0u;
            goto label_1062d0;
        }
    }
    ctx->pc = 0x1062C8u;
label_1062c8:
    // 0x1062c8: 0x1000000a
label_1062cc:
    if (ctx->pc == 0x1062CCu) {
        ctx->pc = 0x1062CCu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x1062D0u;
        goto label_1062d0;
    }
    ctx->pc = 0x1062C8u;
    {
        const bool branch_taken_0x1062c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1062CCu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 80)));
        if (branch_taken_0x1062c8) {
            ctx->pc = 0x1062F4u;
            goto label_1062f4;
        }
    }
    ctx->pc = 0x1062D0u;
label_1062d0:
    // 0x1062d0: 0x282d
    ctx->pc = 0x1062d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1062d4:
    // 0x1062d4: 0x8e04001c
    ctx->pc = 0x1062d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1062d8:
    // 0x1062d8: 0x40f809
label_1062dc:
    if (ctx->pc == 0x1062DCu) {
        ctx->pc = 0x1062DCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1062E0u;
        goto label_1062e0;
    }
    ctx->pc = 0x1062D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1062E0u);
        ctx->pc = 0x1062DCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1061F0u: goto label_1061f0;
            case 0x1061F4u: goto label_1061f4;
            case 0x1061F8u: goto label_1061f8;
            case 0x1061FCu: goto label_1061fc;
            case 0x106200u: goto label_106200;
            case 0x106204u: goto label_106204;
            case 0x106208u: goto label_106208;
            case 0x10620Cu: goto label_10620c;
            case 0x106210u: goto label_106210;
            case 0x106214u: goto label_106214;
            case 0x106218u: goto label_106218;
            case 0x10621Cu: goto label_10621c;
            case 0x106220u: goto label_106220;
            case 0x106224u: goto label_106224;
            case 0x106228u: goto label_106228;
            case 0x10622Cu: goto label_10622c;
            case 0x106230u: goto label_106230;
            case 0x106234u: goto label_106234;
            case 0x106238u: goto label_106238;
            case 0x10623Cu: goto label_10623c;
            case 0x106240u: goto label_106240;
            case 0x106244u: goto label_106244;
            case 0x106248u: goto label_106248;
            case 0x10624Cu: goto label_10624c;
            case 0x106250u: goto label_106250;
            case 0x106254u: goto label_106254;
            case 0x106258u: goto label_106258;
            case 0x10625Cu: goto label_10625c;
            case 0x106260u: goto label_106260;
            case 0x106264u: goto label_106264;
            case 0x106268u: goto label_106268;
            case 0x10626Cu: goto label_10626c;
            case 0x106270u: goto label_106270;
            case 0x106274u: goto label_106274;
            case 0x106278u: goto label_106278;
            case 0x10627Cu: goto label_10627c;
            case 0x106280u: goto label_106280;
            case 0x106284u: goto label_106284;
            case 0x106288u: goto label_106288;
            case 0x10628Cu: goto label_10628c;
            case 0x106290u: goto label_106290;
            case 0x106294u: goto label_106294;
            case 0x106298u: goto label_106298;
            case 0x10629Cu: goto label_10629c;
            case 0x1062A0u: goto label_1062a0;
            case 0x1062A4u: goto label_1062a4;
            case 0x1062A8u: goto label_1062a8;
            case 0x1062ACu: goto label_1062ac;
            case 0x1062B0u: goto label_1062b0;
            case 0x1062B4u: goto label_1062b4;
            case 0x1062B8u: goto label_1062b8;
            case 0x1062BCu: goto label_1062bc;
            case 0x1062C0u: goto label_1062c0;
            case 0x1062C4u: goto label_1062c4;
            case 0x1062C8u: goto label_1062c8;
            case 0x1062CCu: goto label_1062cc;
            case 0x1062D0u: goto label_1062d0;
            case 0x1062D4u: goto label_1062d4;
            case 0x1062D8u: goto label_1062d8;
            case 0x1062DCu: goto label_1062dc;
            case 0x1062E0u: goto label_1062e0;
            case 0x1062E4u: goto label_1062e4;
            case 0x1062E8u: goto label_1062e8;
            case 0x1062ECu: goto label_1062ec;
            case 0x1062F0u: goto label_1062f0;
            case 0x1062F4u: goto label_1062f4;
            case 0x1062F8u: goto label_1062f8;
            case 0x1062FCu: goto label_1062fc;
            case 0x106300u: goto label_106300;
            case 0x106304u: goto label_106304;
            case 0x106308u: goto label_106308;
            case 0x10630Cu: goto label_10630c;
            case 0x106310u: goto label_106310;
            case 0x106314u: goto label_106314;
            case 0x106318u: goto label_106318;
            case 0x10631Cu: goto label_10631c;
            case 0x106320u: goto label_106320;
            case 0x106324u: goto label_106324;
            case 0x106328u: goto label_106328;
            case 0x10632Cu: goto label_10632c;
            case 0x106330u: goto label_106330;
            case 0x106334u: goto label_106334;
            case 0x106338u: goto label_106338;
            case 0x10633Cu: goto label_10633c;
            case 0x106340u: goto label_106340;
            case 0x106344u: goto label_106344;
            case 0x106348u: goto label_106348;
            case 0x10634Cu: goto label_10634c;
            case 0x106350u: goto label_106350;
            case 0x106354u: goto label_106354;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1062E0u; }
            if (ctx->pc != 0x1062E0u) { return; }
        }
    }
    ctx->pc = 0x1062E0u;
label_1062e0:
    // 0x1062e0: 0x2403ffff
    ctx->pc = 0x1062e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1062e4:
    // 0x1062e4: 0x40282d
    ctx->pc = 0x1062e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1062e8:
    // 0x1062e8: 0x50a30017
label_1062ec:
    if (ctx->pc == 0x1062ECu) {
        ctx->pc = 0x1062ECu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1062F0u;
        goto label_1062f0;
    }
    ctx->pc = 0x1062E8u;
    {
        const bool branch_taken_0x1062e8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x1062e8) {
            ctx->pc = 0x1062ECu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x106348u;
            goto label_106348;
        }
    }
    ctx->pc = 0x1062F0u;
label_1062f0:
    // 0x1062f0: 0x9603000c
    ctx->pc = 0x1062f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_1062f4:
    // 0x1062f4: 0x30620004
    ctx->pc = 0x1062f4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 4));
label_1062f8:
    // 0x1062f8: 0x10400009
label_1062fc:
    if (ctx->pc == 0x1062FCu) {
        ctx->pc = 0x1062FCu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 8));
        ctx->pc = 0x106300u;
        goto label_106300;
    }
    ctx->pc = 0x1062F8u;
    {
        const bool branch_taken_0x1062f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1062FCu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 8));
        if (branch_taken_0x1062f8) {
            ctx->pc = 0x106320u;
            goto label_106320;
        }
    }
    ctx->pc = 0x106300u;
label_106300:
    // 0x106300: 0x8e020004
    ctx->pc = 0x106300u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_106304:
    // 0x106304: 0x8e030030
    ctx->pc = 0x106304u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_106308:
    // 0x106308: 0x1060000d
label_10630c:
    if (ctx->pc == 0x10630Cu) {
        ctx->pc = 0x10630Cu;
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) - GPR_U64(ctx, 2));
        ctx->pc = 0x106310u;
        goto label_106310;
    }
    ctx->pc = 0x106308u;
    {
        const bool branch_taken_0x106308 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x10630Cu;
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) - GPR_U64(ctx, 2));
        if (branch_taken_0x106308) {
            ctx->pc = 0x106340u;
            goto label_106340;
        }
    }
    ctx->pc = 0x106310u;
label_106310:
    // 0x106310: 0x8e02003c
    ctx->pc = 0x106310u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_106314:
    // 0x106314: 0x1000000a
label_106318:
    if (ctx->pc == 0x106318u) {
        ctx->pc = 0x106318u;
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) - GPR_U64(ctx, 2));
        ctx->pc = 0x10631Cu;
        goto label_10631c;
    }
    ctx->pc = 0x106314u;
    {
        const bool branch_taken_0x106314 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x106318u;
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) - GPR_U64(ctx, 2));
        if (branch_taken_0x106314) {
            ctx->pc = 0x106340u;
            goto label_106340;
        }
    }
    ctx->pc = 0x10631Cu;
label_10631c:
    // 0x10631c: 0x0
    ctx->pc = 0x10631cu;
    // NOP
label_106320:
    // 0x106320: 0x10400008
label_106324:
    if (ctx->pc == 0x106324u) {
        ctx->pc = 0x106324u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x106328u;
        goto label_106328;
    }
    ctx->pc = 0x106320u;
    {
        const bool branch_taken_0x106320 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x106324u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x106320) {
            ctx->pc = 0x106344u;
            goto label_106344;
        }
    }
    ctx->pc = 0x106328u;
label_106328:
    // 0x106328: 0x8e030000
    ctx->pc = 0x106328u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10632c:
    // 0x10632c: 0x50600006
label_106330:
    if (ctx->pc == 0x106330u) {
        ctx->pc = 0x106330u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x106334u;
        goto label_106334;
    }
    ctx->pc = 0x10632Cu;
    {
        const bool branch_taken_0x10632c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x10632c) {
            ctx->pc = 0x106330u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x106348u;
            goto label_106348;
        }
    }
    ctx->pc = 0x106334u;
label_106334:
    // 0x106334: 0x8e020010
    ctx->pc = 0x106334u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_106338:
    // 0x106338: 0x621023
    ctx->pc = 0x106338u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10633c:
    // 0x10633c: 0xa2282d
    ctx->pc = 0x10633cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 2));
label_106340:
    // 0x106340: 0xa0102d
    ctx->pc = 0x106340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_106344:
    // 0x106344: 0xdfb00000
    ctx->pc = 0x106344u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_106348:
    // 0x106348: 0xdfbf0008
    ctx->pc = 0x106348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_10634c:
    // 0x10634c: 0x3e00008
label_106350:
    if (ctx->pc == 0x106350u) {
        ctx->pc = 0x106350u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x106354u;
        goto label_106354;
    }
    ctx->pc = 0x10634Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106350u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1061F0u: goto label_1061f0;
            case 0x1061F4u: goto label_1061f4;
            case 0x1061F8u: goto label_1061f8;
            case 0x1061FCu: goto label_1061fc;
            case 0x106200u: goto label_106200;
            case 0x106204u: goto label_106204;
            case 0x106208u: goto label_106208;
            case 0x10620Cu: goto label_10620c;
            case 0x106210u: goto label_106210;
            case 0x106214u: goto label_106214;
            case 0x106218u: goto label_106218;
            case 0x10621Cu: goto label_10621c;
            case 0x106220u: goto label_106220;
            case 0x106224u: goto label_106224;
            case 0x106228u: goto label_106228;
            case 0x10622Cu: goto label_10622c;
            case 0x106230u: goto label_106230;
            case 0x106234u: goto label_106234;
            case 0x106238u: goto label_106238;
            case 0x10623Cu: goto label_10623c;
            case 0x106240u: goto label_106240;
            case 0x106244u: goto label_106244;
            case 0x106248u: goto label_106248;
            case 0x10624Cu: goto label_10624c;
            case 0x106250u: goto label_106250;
            case 0x106254u: goto label_106254;
            case 0x106258u: goto label_106258;
            case 0x10625Cu: goto label_10625c;
            case 0x106260u: goto label_106260;
            case 0x106264u: goto label_106264;
            case 0x106268u: goto label_106268;
            case 0x10626Cu: goto label_10626c;
            case 0x106270u: goto label_106270;
            case 0x106274u: goto label_106274;
            case 0x106278u: goto label_106278;
            case 0x10627Cu: goto label_10627c;
            case 0x106280u: goto label_106280;
            case 0x106284u: goto label_106284;
            case 0x106288u: goto label_106288;
            case 0x10628Cu: goto label_10628c;
            case 0x106290u: goto label_106290;
            case 0x106294u: goto label_106294;
            case 0x106298u: goto label_106298;
            case 0x10629Cu: goto label_10629c;
            case 0x1062A0u: goto label_1062a0;
            case 0x1062A4u: goto label_1062a4;
            case 0x1062A8u: goto label_1062a8;
            case 0x1062ACu: goto label_1062ac;
            case 0x1062B0u: goto label_1062b0;
            case 0x1062B4u: goto label_1062b4;
            case 0x1062B8u: goto label_1062b8;
            case 0x1062BCu: goto label_1062bc;
            case 0x1062C0u: goto label_1062c0;
            case 0x1062C4u: goto label_1062c4;
            case 0x1062C8u: goto label_1062c8;
            case 0x1062CCu: goto label_1062cc;
            case 0x1062D0u: goto label_1062d0;
            case 0x1062D4u: goto label_1062d4;
            case 0x1062D8u: goto label_1062d8;
            case 0x1062DCu: goto label_1062dc;
            case 0x1062E0u: goto label_1062e0;
            case 0x1062E4u: goto label_1062e4;
            case 0x1062E8u: goto label_1062e8;
            case 0x1062ECu: goto label_1062ec;
            case 0x1062F0u: goto label_1062f0;
            case 0x1062F4u: goto label_1062f4;
            case 0x1062F8u: goto label_1062f8;
            case 0x1062FCu: goto label_1062fc;
            case 0x106300u: goto label_106300;
            case 0x106304u: goto label_106304;
            case 0x106308u: goto label_106308;
            case 0x10630Cu: goto label_10630c;
            case 0x106310u: goto label_106310;
            case 0x106314u: goto label_106314;
            case 0x106318u: goto label_106318;
            case 0x10631Cu: goto label_10631c;
            case 0x106320u: goto label_106320;
            case 0x106324u: goto label_106324;
            case 0x106328u: goto label_106328;
            case 0x10632Cu: goto label_10632c;
            case 0x106330u: goto label_106330;
            case 0x106334u: goto label_106334;
            case 0x106338u: goto label_106338;
            case 0x10633Cu: goto label_10633c;
            case 0x106340u: goto label_106340;
            case 0x106344u: goto label_106344;
            case 0x106348u: goto label_106348;
            case 0x10634Cu: goto label_10634c;
            case 0x106350u: goto label_106350;
            case 0x106354u: goto label_106354;
            default: break;
        }
        return;
    }
    ctx->pc = 0x106354u;
label_106354:
    // 0x106354: 0x0
    ctx->pc = 0x106354u;
    // NOP
}
