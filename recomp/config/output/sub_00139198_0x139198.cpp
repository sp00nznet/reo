#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00139198
// Address: 0x139198 - 0x1392f8
void sub_00139198_0x139198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x139198u;

label_139198:
    // 0x139198: 0x27bdffe0
    ctx->pc = 0x139198u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_13919c:
    // 0x13919c: 0x3c030022
    ctx->pc = 0x13919cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
label_1391a0:
    // 0x1391a0: 0xffb00000
    ctx->pc = 0x1391a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1391a4:
    // 0x1391a4: 0x80802d
    ctx->pc = 0x1391a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1391a8:
    // 0x1391a8: 0xffb10008
    ctx->pc = 0x1391a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1391ac:
    // 0x1391ac: 0x2463c428
    ctx->pc = 0x1391acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294951976));
label_1391b0:
    // 0x1391b0: 0xffbf0010
    ctx->pc = 0x1391b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1391b4:
    // 0x1391b4: 0x24040001
    ctx->pc = 0x1391b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_1391b8:
    // 0x1391b8: 0x8c620000
    ctx->pc = 0x1391b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1391bc:
    // 0x1391bc: 0x82050001
    ctx->pc = 0x1391bcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1391c0:
    // 0x1391c0: 0x24420001
    ctx->pc = 0x1391c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1391c4:
    // 0x1391c4: 0x14a40016
label_1391c8:
    if (ctx->pc == 0x1391C8u) {
        ctx->pc = 0x1391C8u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1391CCu;
        goto label_1391cc;
    }
    ctx->pc = 0x1391C4u;
    {
        const bool branch_taken_0x1391c4 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 4));
        ctx->pc = 0x1391C8u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x1391c4) {
            ctx->pc = 0x139220u;
            goto label_139220;
        }
    }
    ctx->pc = 0x1391CCu;
label_1391cc:
    // 0x1391cc: 0x8e020014
    ctx->pc = 0x1391ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1391d0:
    // 0x1391d0: 0x8e030008
    ctx->pc = 0x1391d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1391d4:
    // 0x1391d4: 0x8c44003c
    ctx->pc = 0x1391d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1391d8:
    // 0x1391d8: 0x64182a
    ctx->pc = 0x1391d8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
label_1391dc:
    // 0x1391dc: 0x50600011
label_1391e0:
    if (ctx->pc == 0x1391E0u) {
        ctx->pc = 0x1391E0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1391E4u;
        goto label_1391e4;
    }
    ctx->pc = 0x1391DCu;
    {
        const bool branch_taken_0x1391dc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1391dc) {
            ctx->pc = 0x1391E0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x139224u;
            goto label_139224;
        }
    }
    ctx->pc = 0x1391E4u;
label_1391e4:
    // 0x1391e4: 0x8e020010
    ctx->pc = 0x1391e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1391e8:
    // 0x1391e8: 0x8e05000c
    ctx->pc = 0x1391e8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1391ec:
    // 0x1391ec: 0xa0202d
    ctx->pc = 0x1391ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1391f0:
    // 0x1391f0: 0xa22821
    ctx->pc = 0x1391f0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1391f4:
    // 0x1391f4: 0xc045416
label_1391f8:
    if (ctx->pc == 0x1391F8u) {
        ctx->pc = 0x1391F8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->pc = 0x1391FCu;
        goto label_1391fc;
    }
    ctx->pc = 0x1391F4u;
    SET_GPR_U32(ctx, 31, 0x1391FCu);
    ctx->pc = 0x1391F8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->pc = 0x115058u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00115058_0x115058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1391FCu; }
    }
    if (ctx->pc != 0x1391FCu) { return; }
    ctx->pc = 0x1391FCu;
label_1391fc:
    // 0x1391fc: 0x8e030020
    ctx->pc = 0x1391fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_139200:
    // 0x139200: 0x8e040024
    ctx->pc = 0x139200u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_139204:
    // 0x139204: 0x8e05000c
    ctx->pc = 0x139204u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_139208:
    // 0x139208: 0x60f809
label_13920c:
    if (ctx->pc == 0x13920Cu) {
        ctx->pc = 0x13920Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x139210u;
        goto label_139210;
    }
    ctx->pc = 0x139208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x139210u);
        ctx->pc = 0x13920Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x139198u: goto label_139198;
            case 0x13919Cu: goto label_13919c;
            case 0x1391A0u: goto label_1391a0;
            case 0x1391A4u: goto label_1391a4;
            case 0x1391A8u: goto label_1391a8;
            case 0x1391ACu: goto label_1391ac;
            case 0x1391B0u: goto label_1391b0;
            case 0x1391B4u: goto label_1391b4;
            case 0x1391B8u: goto label_1391b8;
            case 0x1391BCu: goto label_1391bc;
            case 0x1391C0u: goto label_1391c0;
            case 0x1391C4u: goto label_1391c4;
            case 0x1391C8u: goto label_1391c8;
            case 0x1391CCu: goto label_1391cc;
            case 0x1391D0u: goto label_1391d0;
            case 0x1391D4u: goto label_1391d4;
            case 0x1391D8u: goto label_1391d8;
            case 0x1391DCu: goto label_1391dc;
            case 0x1391E0u: goto label_1391e0;
            case 0x1391E4u: goto label_1391e4;
            case 0x1391E8u: goto label_1391e8;
            case 0x1391ECu: goto label_1391ec;
            case 0x1391F0u: goto label_1391f0;
            case 0x1391F4u: goto label_1391f4;
            case 0x1391F8u: goto label_1391f8;
            case 0x1391FCu: goto label_1391fc;
            case 0x139200u: goto label_139200;
            case 0x139204u: goto label_139204;
            case 0x139208u: goto label_139208;
            case 0x13920Cu: goto label_13920c;
            case 0x139210u: goto label_139210;
            case 0x139214u: goto label_139214;
            case 0x139218u: goto label_139218;
            case 0x13921Cu: goto label_13921c;
            case 0x139220u: goto label_139220;
            case 0x139224u: goto label_139224;
            case 0x139228u: goto label_139228;
            case 0x13922Cu: goto label_13922c;
            case 0x139230u: goto label_139230;
            case 0x139234u: goto label_139234;
            case 0x139238u: goto label_139238;
            case 0x13923Cu: goto label_13923c;
            case 0x139240u: goto label_139240;
            case 0x139244u: goto label_139244;
            case 0x139248u: goto label_139248;
            case 0x13924Cu: goto label_13924c;
            case 0x139250u: goto label_139250;
            case 0x139254u: goto label_139254;
            case 0x139258u: goto label_139258;
            case 0x13925Cu: goto label_13925c;
            case 0x139260u: goto label_139260;
            case 0x139264u: goto label_139264;
            case 0x139268u: goto label_139268;
            case 0x13926Cu: goto label_13926c;
            case 0x139270u: goto label_139270;
            case 0x139274u: goto label_139274;
            case 0x139278u: goto label_139278;
            case 0x13927Cu: goto label_13927c;
            case 0x139280u: goto label_139280;
            case 0x139284u: goto label_139284;
            case 0x139288u: goto label_139288;
            case 0x13928Cu: goto label_13928c;
            case 0x139290u: goto label_139290;
            case 0x139294u: goto label_139294;
            case 0x139298u: goto label_139298;
            case 0x13929Cu: goto label_13929c;
            case 0x1392A0u: goto label_1392a0;
            case 0x1392A4u: goto label_1392a4;
            case 0x1392A8u: goto label_1392a8;
            case 0x1392ACu: goto label_1392ac;
            case 0x1392B0u: goto label_1392b0;
            case 0x1392B4u: goto label_1392b4;
            case 0x1392B8u: goto label_1392b8;
            case 0x1392BCu: goto label_1392bc;
            case 0x1392C0u: goto label_1392c0;
            case 0x1392C4u: goto label_1392c4;
            case 0x1392C8u: goto label_1392c8;
            case 0x1392CCu: goto label_1392cc;
            case 0x1392D0u: goto label_1392d0;
            case 0x1392D4u: goto label_1392d4;
            case 0x1392D8u: goto label_1392d8;
            case 0x1392DCu: goto label_1392dc;
            case 0x1392E0u: goto label_1392e0;
            case 0x1392E4u: goto label_1392e4;
            case 0x1392E8u: goto label_1392e8;
            case 0x1392ECu: goto label_1392ec;
            case 0x1392F0u: goto label_1392f0;
            case 0x1392F4u: goto label_1392f4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x139210u; }
            if (ctx->pc != 0x139210u) { return; }
        }
    }
    ctx->pc = 0x139210u;
label_139210:
    // 0x139210: 0x8e020014
    ctx->pc = 0x139210u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_139214:
    // 0x139214: 0x8c43003c
    ctx->pc = 0x139214u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_139218:
    // 0x139218: 0xa2000001
    ctx->pc = 0x139218u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_13921c:
    // 0x13921c: 0xae030008
    ctx->pc = 0x13921cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_139220:
    // 0x139220: 0x8e020000
    ctx->pc = 0x139220u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_139224:
    // 0x139224: 0x3c0300ff
    ctx->pc = 0x139224u;
    SET_GPR_U32(ctx, 3, ((uint32_t)255 << 16));
label_139228:
    // 0x139228: 0x3463ff00
    ctx->pc = 0x139228u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65280));
label_13922c:
    // 0x13922c: 0x3c040001
    ctx->pc = 0x13922cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)1 << 16));
label_139230:
    // 0x139230: 0x431024
    ctx->pc = 0x139230u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_139234:
    // 0x139234: 0x5444002c
label_139238:
    if (ctx->pc == 0x139238u) {
        ctx->pc = 0x139238u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x13923Cu;
        goto label_13923c;
    }
    ctx->pc = 0x139234u;
    {
        const bool branch_taken_0x139234 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x139234) {
            ctx->pc = 0x139238u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x1392E8u;
            goto label_1392e8;
        }
    }
    ctx->pc = 0x13923Cu;
label_13923c:
    // 0x13923c: 0x3c020022
    ctx->pc = 0x13923cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
label_139240:
    // 0x139240: 0x24030001
    ctx->pc = 0x139240u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_139244:
    // 0x139244: 0x8c51c41c
    ctx->pc = 0x139244u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 4294951964)));
label_139248:
    // 0x139248: 0x56230027
label_13924c:
    if (ctx->pc == 0x13924Cu) {
        ctx->pc = 0x13924Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x139250u;
        goto label_139250;
    }
    ctx->pc = 0x139248u;
    {
        const bool branch_taken_0x139248 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 3));
        if (branch_taken_0x139248) {
            ctx->pc = 0x13924Cu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x1392E8u;
            goto label_1392e8;
        }
    }
    ctx->pc = 0x139250u;
label_139250:
    // 0x139250: 0x8e060010
    ctx->pc = 0x139250u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_139254:
    // 0x139254: 0x8e04002c
    ctx->pc = 0x139254u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_139258:
    // 0x139258: 0x8e020028
    ctx->pc = 0x139258u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_13925c:
    // 0x13925c: 0x40f809
label_139260:
    if (ctx->pc == 0x139260u) {
        ctx->pc = 0x139260u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x139264u;
        goto label_139264;
    }
    ctx->pc = 0x13925Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x139264u);
        ctx->pc = 0x139260u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x139198u: goto label_139198;
            case 0x13919Cu: goto label_13919c;
            case 0x1391A0u: goto label_1391a0;
            case 0x1391A4u: goto label_1391a4;
            case 0x1391A8u: goto label_1391a8;
            case 0x1391ACu: goto label_1391ac;
            case 0x1391B0u: goto label_1391b0;
            case 0x1391B4u: goto label_1391b4;
            case 0x1391B8u: goto label_1391b8;
            case 0x1391BCu: goto label_1391bc;
            case 0x1391C0u: goto label_1391c0;
            case 0x1391C4u: goto label_1391c4;
            case 0x1391C8u: goto label_1391c8;
            case 0x1391CCu: goto label_1391cc;
            case 0x1391D0u: goto label_1391d0;
            case 0x1391D4u: goto label_1391d4;
            case 0x1391D8u: goto label_1391d8;
            case 0x1391DCu: goto label_1391dc;
            case 0x1391E0u: goto label_1391e0;
            case 0x1391E4u: goto label_1391e4;
            case 0x1391E8u: goto label_1391e8;
            case 0x1391ECu: goto label_1391ec;
            case 0x1391F0u: goto label_1391f0;
            case 0x1391F4u: goto label_1391f4;
            case 0x1391F8u: goto label_1391f8;
            case 0x1391FCu: goto label_1391fc;
            case 0x139200u: goto label_139200;
            case 0x139204u: goto label_139204;
            case 0x139208u: goto label_139208;
            case 0x13920Cu: goto label_13920c;
            case 0x139210u: goto label_139210;
            case 0x139214u: goto label_139214;
            case 0x139218u: goto label_139218;
            case 0x13921Cu: goto label_13921c;
            case 0x139220u: goto label_139220;
            case 0x139224u: goto label_139224;
            case 0x139228u: goto label_139228;
            case 0x13922Cu: goto label_13922c;
            case 0x139230u: goto label_139230;
            case 0x139234u: goto label_139234;
            case 0x139238u: goto label_139238;
            case 0x13923Cu: goto label_13923c;
            case 0x139240u: goto label_139240;
            case 0x139244u: goto label_139244;
            case 0x139248u: goto label_139248;
            case 0x13924Cu: goto label_13924c;
            case 0x139250u: goto label_139250;
            case 0x139254u: goto label_139254;
            case 0x139258u: goto label_139258;
            case 0x13925Cu: goto label_13925c;
            case 0x139260u: goto label_139260;
            case 0x139264u: goto label_139264;
            case 0x139268u: goto label_139268;
            case 0x13926Cu: goto label_13926c;
            case 0x139270u: goto label_139270;
            case 0x139274u: goto label_139274;
            case 0x139278u: goto label_139278;
            case 0x13927Cu: goto label_13927c;
            case 0x139280u: goto label_139280;
            case 0x139284u: goto label_139284;
            case 0x139288u: goto label_139288;
            case 0x13928Cu: goto label_13928c;
            case 0x139290u: goto label_139290;
            case 0x139294u: goto label_139294;
            case 0x139298u: goto label_139298;
            case 0x13929Cu: goto label_13929c;
            case 0x1392A0u: goto label_1392a0;
            case 0x1392A4u: goto label_1392a4;
            case 0x1392A8u: goto label_1392a8;
            case 0x1392ACu: goto label_1392ac;
            case 0x1392B0u: goto label_1392b0;
            case 0x1392B4u: goto label_1392b4;
            case 0x1392B8u: goto label_1392b8;
            case 0x1392BCu: goto label_1392bc;
            case 0x1392C0u: goto label_1392c0;
            case 0x1392C4u: goto label_1392c4;
            case 0x1392C8u: goto label_1392c8;
            case 0x1392CCu: goto label_1392cc;
            case 0x1392D0u: goto label_1392d0;
            case 0x1392D4u: goto label_1392d4;
            case 0x1392D8u: goto label_1392d8;
            case 0x1392DCu: goto label_1392dc;
            case 0x1392E0u: goto label_1392e0;
            case 0x1392E4u: goto label_1392e4;
            case 0x1392E8u: goto label_1392e8;
            case 0x1392ECu: goto label_1392ec;
            case 0x1392F0u: goto label_1392f0;
            case 0x1392F4u: goto label_1392f4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x139264u; }
            if (ctx->pc != 0x139264u) { return; }
        }
    }
    ctx->pc = 0x139264u;
label_139264:
    // 0x139264: 0x8e030008
    ctx->pc = 0x139264u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_139268:
    // 0x139268: 0x8e020014
    ctx->pc = 0x139268u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_13926c:
    // 0x13926c: 0x24630001
    ctx->pc = 0x13926cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_139270:
    // 0x139270: 0x8e05000c
    ctx->pc = 0x139270u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_139274:
    // 0x139274: 0xae030008
    ctx->pc = 0x139274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_139278:
    // 0x139278: 0xac43003c
    ctx->pc = 0x139278u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_13927c:
    // 0x13927c: 0xa0202d
    ctx->pc = 0x13927cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_139280:
    // 0x139280: 0x8e020010
    ctx->pc = 0x139280u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_139284:
    // 0x139284: 0xa22821
    ctx->pc = 0x139284u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_139288:
    // 0x139288: 0xc0453c6
label_13928c:
    if (ctx->pc == 0x13928Cu) {
        ctx->pc = 0x13928Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->pc = 0x139290u;
        goto label_139290;
    }
    ctx->pc = 0x139288u;
    SET_GPR_U32(ctx, 31, 0x139290u);
    ctx->pc = 0x13928Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->pc = 0x114F18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114F18_0x114f18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139290u; }
    }
    if (ctx->pc != 0x139290u) { return; }
    ctx->pc = 0x139290u;
label_139290:
    // 0x139290: 0x8e05000c
    ctx->pc = 0x139290u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_139294:
    // 0x139294: 0x8e020010
    ctx->pc = 0x139294u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_139298:
    // 0x139298: 0xa0202d
    ctx->pc = 0x139298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13929c:
    // 0x13929c: 0xa22821
    ctx->pc = 0x13929cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1392a0:
    // 0x1392a0: 0xc045416
label_1392a4:
    if (ctx->pc == 0x1392A4u) {
        ctx->pc = 0x1392A4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 63));
        ctx->pc = 0x1392A8u;
        goto label_1392a8;
    }
    ctx->pc = 0x1392A0u;
    SET_GPR_U32(ctx, 31, 0x1392A8u);
    ctx->pc = 0x1392A4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 63));
    ctx->pc = 0x115058u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00115058_0x115058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1392A8u; }
    }
    if (ctx->pc != 0x1392A8u) { return; }
    ctx->pc = 0x1392A8u;
label_1392a8:
    // 0x1392a8: 0x8e03000c
    ctx->pc = 0x1392a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1392ac:
    // 0x1392ac: 0x3c020fff
    ctx->pc = 0x1392acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
label_1392b0:
    // 0x1392b0: 0x8e040018
    ctx->pc = 0x1392b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1392b4:
    // 0x1392b4: 0x8e05001c
    ctx->pc = 0x1392b4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1392b8:
    // 0x1392b8: 0x3442ffff
    ctx->pc = 0x1392b8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_1392bc:
    // 0x1392bc: 0x621824
    ctx->pc = 0x1392bcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1392c0:
    // 0x1392c0: 0xae040034
    ctx->pc = 0x1392c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
label_1392c4:
    // 0x1392c4: 0xae050038
    ctx->pc = 0x1392c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 5));
label_1392c8:
    // 0x1392c8: 0x24050001
    ctx->pc = 0x1392c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_1392cc:
    // 0x1392cc: 0xae030030
    ctx->pc = 0x1392ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_1392d0:
    // 0x1392d0: 0x26040030
    ctx->pc = 0x1392d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 48));
label_1392d4:
    // 0x1392d4: 0xc045278
label_1392d8:
    if (ctx->pc == 0x1392D8u) {
        ctx->pc = 0x1392D8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
        ctx->pc = 0x1392DCu;
        goto label_1392dc;
    }
    ctx->pc = 0x1392D4u;
    SET_GPR_U32(ctx, 31, 0x1392DCu);
    ctx->pc = 0x1392D8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    ctx->pc = 0x1149E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001149E0_0x1149e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1392DCu; }
    }
    if (ctx->pc != 0x1392DCu) { return; }
    ctx->pc = 0x1392DCu;
label_1392dc:
    // 0x1392dc: 0xa2110001
    ctx->pc = 0x1392dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 17));
label_1392e0:
    // 0x1392e0: 0xae020040
    ctx->pc = 0x1392e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_1392e4:
    // 0x1392e4: 0xdfb00000
    ctx->pc = 0x1392e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1392e8:
    // 0x1392e8: 0xdfb10008
    ctx->pc = 0x1392e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1392ec:
    // 0x1392ec: 0xdfbf0010
    ctx->pc = 0x1392ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1392f0:
    // 0x1392f0: 0x3e00008
label_1392f4:
    if (ctx->pc == 0x1392F4u) {
        ctx->pc = 0x1392F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1392F8u;
        goto label_fallthrough_0x1392f0;
    }
    ctx->pc = 0x1392F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1392F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x139198u: goto label_139198;
            case 0x13919Cu: goto label_13919c;
            case 0x1391A0u: goto label_1391a0;
            case 0x1391A4u: goto label_1391a4;
            case 0x1391A8u: goto label_1391a8;
            case 0x1391ACu: goto label_1391ac;
            case 0x1391B0u: goto label_1391b0;
            case 0x1391B4u: goto label_1391b4;
            case 0x1391B8u: goto label_1391b8;
            case 0x1391BCu: goto label_1391bc;
            case 0x1391C0u: goto label_1391c0;
            case 0x1391C4u: goto label_1391c4;
            case 0x1391C8u: goto label_1391c8;
            case 0x1391CCu: goto label_1391cc;
            case 0x1391D0u: goto label_1391d0;
            case 0x1391D4u: goto label_1391d4;
            case 0x1391D8u: goto label_1391d8;
            case 0x1391DCu: goto label_1391dc;
            case 0x1391E0u: goto label_1391e0;
            case 0x1391E4u: goto label_1391e4;
            case 0x1391E8u: goto label_1391e8;
            case 0x1391ECu: goto label_1391ec;
            case 0x1391F0u: goto label_1391f0;
            case 0x1391F4u: goto label_1391f4;
            case 0x1391F8u: goto label_1391f8;
            case 0x1391FCu: goto label_1391fc;
            case 0x139200u: goto label_139200;
            case 0x139204u: goto label_139204;
            case 0x139208u: goto label_139208;
            case 0x13920Cu: goto label_13920c;
            case 0x139210u: goto label_139210;
            case 0x139214u: goto label_139214;
            case 0x139218u: goto label_139218;
            case 0x13921Cu: goto label_13921c;
            case 0x139220u: goto label_139220;
            case 0x139224u: goto label_139224;
            case 0x139228u: goto label_139228;
            case 0x13922Cu: goto label_13922c;
            case 0x139230u: goto label_139230;
            case 0x139234u: goto label_139234;
            case 0x139238u: goto label_139238;
            case 0x13923Cu: goto label_13923c;
            case 0x139240u: goto label_139240;
            case 0x139244u: goto label_139244;
            case 0x139248u: goto label_139248;
            case 0x13924Cu: goto label_13924c;
            case 0x139250u: goto label_139250;
            case 0x139254u: goto label_139254;
            case 0x139258u: goto label_139258;
            case 0x13925Cu: goto label_13925c;
            case 0x139260u: goto label_139260;
            case 0x139264u: goto label_139264;
            case 0x139268u: goto label_139268;
            case 0x13926Cu: goto label_13926c;
            case 0x139270u: goto label_139270;
            case 0x139274u: goto label_139274;
            case 0x139278u: goto label_139278;
            case 0x13927Cu: goto label_13927c;
            case 0x139280u: goto label_139280;
            case 0x139284u: goto label_139284;
            case 0x139288u: goto label_139288;
            case 0x13928Cu: goto label_13928c;
            case 0x139290u: goto label_139290;
            case 0x139294u: goto label_139294;
            case 0x139298u: goto label_139298;
            case 0x13929Cu: goto label_13929c;
            case 0x1392A0u: goto label_1392a0;
            case 0x1392A4u: goto label_1392a4;
            case 0x1392A8u: goto label_1392a8;
            case 0x1392ACu: goto label_1392ac;
            case 0x1392B0u: goto label_1392b0;
            case 0x1392B4u: goto label_1392b4;
            case 0x1392B8u: goto label_1392b8;
            case 0x1392BCu: goto label_1392bc;
            case 0x1392C0u: goto label_1392c0;
            case 0x1392C4u: goto label_1392c4;
            case 0x1392C8u: goto label_1392c8;
            case 0x1392CCu: goto label_1392cc;
            case 0x1392D0u: goto label_1392d0;
            case 0x1392D4u: goto label_1392d4;
            case 0x1392D8u: goto label_1392d8;
            case 0x1392DCu: goto label_1392dc;
            case 0x1392E0u: goto label_1392e0;
            case 0x1392E4u: goto label_1392e4;
            case 0x1392E8u: goto label_1392e8;
            case 0x1392ECu: goto label_1392ec;
            case 0x1392F0u: goto label_1392f0;
            case 0x1392F4u: goto label_1392f4;
            default: break;
        }
        return;
    }
label_fallthrough_0x1392f0:
    ctx->pc = 0x1392F8u;
}
