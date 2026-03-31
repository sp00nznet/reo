#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001673D8
// Address: 0x1673d8 - 0x167430
void sub_001673D8_0x1673d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1673d8u;

label_1673d8:
    // 0x1673d8: 0x27bdffd0
    ctx->pc = 0x1673d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_1673dc:
    // 0x1673dc: 0xffb00010
    ctx->pc = 0x1673dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1673e0:
    // 0x1673e0: 0x80802d
    ctx->pc = 0x1673e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1673e4:
    // 0x1673e4: 0xffb10018
    ctx->pc = 0x1673e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1673e8:
    // 0x1673e8: 0x2cb10001
    ctx->pc = 0x1673e8u;
    SET_GPR_U32(ctx, 17, SLTU32(GPR_U32(ctx, 5), 1));
label_1673ec:
    // 0x1673ec: 0xffbf0020
    ctx->pc = 0x1673ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1673f0:
    // 0x1673f0: 0x8e030000
    ctx->pc = 0x1673f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1673f4:
    // 0x1673f4: 0x8c620018
    ctx->pc = 0x1673f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1673f8:
    // 0x1673f8: 0x40f809
label_1673fc:
    if (ctx->pc == 0x1673FCu) {
        ctx->pc = 0x1673FCu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x167400u;
        goto label_167400;
    }
    ctx->pc = 0x1673F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x167400u);
        ctx->pc = 0x1673FCu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1673D8u: goto label_1673d8;
            case 0x1673DCu: goto label_1673dc;
            case 0x1673E0u: goto label_1673e0;
            case 0x1673E4u: goto label_1673e4;
            case 0x1673E8u: goto label_1673e8;
            case 0x1673ECu: goto label_1673ec;
            case 0x1673F0u: goto label_1673f0;
            case 0x1673F4u: goto label_1673f4;
            case 0x1673F8u: goto label_1673f8;
            case 0x1673FCu: goto label_1673fc;
            case 0x167400u: goto label_167400;
            case 0x167404u: goto label_167404;
            case 0x167408u: goto label_167408;
            case 0x16740Cu: goto label_16740c;
            case 0x167410u: goto label_167410;
            case 0x167414u: goto label_167414;
            case 0x167418u: goto label_167418;
            case 0x16741Cu: goto label_16741c;
            case 0x167420u: goto label_167420;
            case 0x167424u: goto label_167424;
            case 0x167428u: goto label_167428;
            case 0x16742Cu: goto label_16742c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x167400u; }
            if (ctx->pc != 0x167400u) { return; }
        }
    }
    ctx->pc = 0x167400u;
label_167400:
    // 0x167400: 0x8e030000
    ctx->pc = 0x167400u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_167404:
    // 0x167404: 0x200202d
    ctx->pc = 0x167404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_167408:
    // 0x167408: 0x220282d
    ctx->pc = 0x167408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16740c:
    // 0x16740c: 0x8c620020
    ctx->pc = 0x16740cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_167410:
    // 0x167410: 0x40f809
label_167414:
    if (ctx->pc == 0x167414u) {
        ctx->pc = 0x167414u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x167418u;
        goto label_167418;
    }
    ctx->pc = 0x167410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x167418u);
        ctx->pc = 0x167414u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1673D8u: goto label_1673d8;
            case 0x1673DCu: goto label_1673dc;
            case 0x1673E0u: goto label_1673e0;
            case 0x1673E4u: goto label_1673e4;
            case 0x1673E8u: goto label_1673e8;
            case 0x1673ECu: goto label_1673ec;
            case 0x1673F0u: goto label_1673f0;
            case 0x1673F4u: goto label_1673f4;
            case 0x1673F8u: goto label_1673f8;
            case 0x1673FCu: goto label_1673fc;
            case 0x167400u: goto label_167400;
            case 0x167404u: goto label_167404;
            case 0x167408u: goto label_167408;
            case 0x16740Cu: goto label_16740c;
            case 0x167410u: goto label_167410;
            case 0x167414u: goto label_167414;
            case 0x167418u: goto label_167418;
            case 0x16741Cu: goto label_16741c;
            case 0x167420u: goto label_167420;
            case 0x167424u: goto label_167424;
            case 0x167428u: goto label_167428;
            case 0x16742Cu: goto label_16742c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x167418u; }
            if (ctx->pc != 0x167418u) { return; }
        }
    }
    ctx->pc = 0x167418u;
label_167418:
    // 0x167418: 0x8fa20004
    ctx->pc = 0x167418u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_16741c:
    // 0x16741c: 0xdfb00010
    ctx->pc = 0x16741cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_167420:
    // 0x167420: 0xdfb10018
    ctx->pc = 0x167420u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_167424:
    // 0x167424: 0xdfbf0020
    ctx->pc = 0x167424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_167428:
    // 0x167428: 0x3e00008
label_16742c:
    if (ctx->pc == 0x16742Cu) {
        ctx->pc = 0x16742Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x167430u;
        goto label_fallthrough_0x167428;
    }
    ctx->pc = 0x167428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16742Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1673D8u: goto label_1673d8;
            case 0x1673DCu: goto label_1673dc;
            case 0x1673E0u: goto label_1673e0;
            case 0x1673E4u: goto label_1673e4;
            case 0x1673E8u: goto label_1673e8;
            case 0x1673ECu: goto label_1673ec;
            case 0x1673F0u: goto label_1673f0;
            case 0x1673F4u: goto label_1673f4;
            case 0x1673F8u: goto label_1673f8;
            case 0x1673FCu: goto label_1673fc;
            case 0x167400u: goto label_167400;
            case 0x167404u: goto label_167404;
            case 0x167408u: goto label_167408;
            case 0x16740Cu: goto label_16740c;
            case 0x167410u: goto label_167410;
            case 0x167414u: goto label_167414;
            case 0x167418u: goto label_167418;
            case 0x16741Cu: goto label_16741c;
            case 0x167420u: goto label_167420;
            case 0x167424u: goto label_167424;
            case 0x167428u: goto label_167428;
            case 0x16742Cu: goto label_16742c;
            default: break;
        }
        return;
    }
label_fallthrough_0x167428:
    ctx->pc = 0x167430u;
}
