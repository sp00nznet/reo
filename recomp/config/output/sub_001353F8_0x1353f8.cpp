#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001353F8
// Address: 0x1353f8 - 0x135488
void sub_001353F8_0x1353f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1353f8u;

label_1353f8:
    // 0x1353f8: 0x27bdfff0
    ctx->pc = 0x1353f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1353fc:
    // 0x1353fc: 0x3c020022
    ctx->pc = 0x1353fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
label_135400:
    // 0x135400: 0xffbf0000
    ctx->pc = 0x135400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_135404:
    // 0x135404: 0x2442bb78
    ctx->pc = 0x135404u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294949752));
label_135408:
    // 0x135408: 0xa0302d
    ctx->pc = 0x135408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13540c:
    // 0x13540c: 0x8c430000
    ctx->pc = 0x13540cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_135410:
    // 0x135410: 0x14800005
label_135414:
    if (ctx->pc == 0x135414u) {
        ctx->pc = 0x135414u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x135418u;
        goto label_135418;
    }
    ctx->pc = 0x135410u;
    {
        const bool branch_taken_0x135410 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x135414u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x135410) {
            ctx->pc = 0x135428u;
            goto label_135428;
        }
    }
    ctx->pc = 0x135418u;
label_135418:
    // 0x135418: 0x3c040024
    ctx->pc = 0x135418u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_13541c:
    // 0x13541c: 0x2484b7b0
    ctx->pc = 0x13541cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948784));
label_135420:
    // 0x135420: 0x804d480
label_135424:
    if (ctx->pc == 0x135424u) {
        ctx->pc = 0x135424u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x135428u;
        goto label_135428;
    }
    ctx->pc = 0x135420u;
    ctx->pc = 0x135424u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x135200u;
    sub_00135200_0x135200(rdram, ctx, runtime); return;
    ctx->pc = 0x135428u;
label_135428:
    // 0x135428: 0x14c00005
label_13542c:
    if (ctx->pc == 0x13542Cu) {
        ctx->pc = 0x135430u;
        goto label_135430;
    }
    ctx->pc = 0x135428u;
    {
        const bool branch_taken_0x135428 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        if (branch_taken_0x135428) {
            ctx->pc = 0x135440u;
            goto label_135440;
        }
    }
    ctx->pc = 0x135430u;
label_135430:
    // 0x135430: 0x3c040024
    ctx->pc = 0x135430u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_135434:
    // 0x135434: 0x2484b7d8
    ctx->pc = 0x135434u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948824));
label_135438:
    // 0x135438: 0x804d480
label_13543c:
    if (ctx->pc == 0x13543Cu) {
        ctx->pc = 0x13543Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x135440u;
        goto label_135440;
    }
    ctx->pc = 0x135438u;
    ctx->pc = 0x13543Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x135200u;
    sub_00135200_0x135200(rdram, ctx, runtime); return;
    ctx->pc = 0x135440u;
label_135440:
    // 0x135440: 0xc04d522
label_135444:
    if (ctx->pc == 0x135444u) {
        ctx->pc = 0x135448u;
        goto label_135448;
    }
    ctx->pc = 0x135440u;
    SET_GPR_U32(ctx, 31, 0x135448u);
    ctx->pc = 0x135488u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135488_0x135488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135448u; }
    }
    if (ctx->pc != 0x135448u) { return; }
    ctx->pc = 0x135448u;
label_135448:
    // 0x135448: 0x54400007
label_13544c:
    if (ctx->pc == 0x13544Cu) {
        ctx->pc = 0x13544Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x135450u;
        goto label_135450;
    }
    ctx->pc = 0x135448u;
    {
        const bool branch_taken_0x135448 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x135448) {
            ctx->pc = 0x13544Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->pc = 0x135468u;
            goto label_135468;
        }
    }
    ctx->pc = 0x135450u;
label_135450:
    // 0x135450: 0x3c040024
    ctx->pc = 0x135450u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_135454:
    // 0x135454: 0xdfbf0000
    ctx->pc = 0x135454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_135458:
    // 0x135458: 0x2484b800
    ctx->pc = 0x135458u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948864));
label_13545c:
    // 0x13545c: 0x804d480
label_135460:
    if (ctx->pc == 0x135460u) {
        ctx->pc = 0x135460u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x135464u;
        goto label_135464;
    }
    ctx->pc = 0x13545Cu;
    ctx->pc = 0x135460u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x135200u;
    sub_00135200_0x135200(rdram, ctx, runtime); return;
    ctx->pc = 0x135464u;
label_135464:
    // 0x135464: 0x0
    ctx->pc = 0x135464u;
    // NOP
label_135468:
    // 0x135468: 0x10400004
label_13546c:
    if (ctx->pc == 0x13546Cu) {
        ctx->pc = 0x13546Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x135470u;
        goto label_135470;
    }
    ctx->pc = 0x135468u;
    {
        const bool branch_taken_0x135468 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13546Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x135468) {
            ctx->pc = 0x13547Cu;
            goto label_13547c;
        }
    }
    ctx->pc = 0x135470u;
label_135470:
    // 0x135470: 0x3c040013
    ctx->pc = 0x135470u;
    SET_GPR_U32(ctx, 4, ((uint32_t)19 << 16));
label_135474:
    // 0x135474: 0x40f809
label_135478:
    if (ctx->pc == 0x135478u) {
        ctx->pc = 0x135478u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20944));
        ctx->pc = 0x13547Cu;
        goto label_13547c;
    }
    ctx->pc = 0x135474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13547Cu);
        ctx->pc = 0x135478u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20944));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1353F8u: goto label_1353f8;
            case 0x1353FCu: goto label_1353fc;
            case 0x135400u: goto label_135400;
            case 0x135404u: goto label_135404;
            case 0x135408u: goto label_135408;
            case 0x13540Cu: goto label_13540c;
            case 0x135410u: goto label_135410;
            case 0x135414u: goto label_135414;
            case 0x135418u: goto label_135418;
            case 0x13541Cu: goto label_13541c;
            case 0x135420u: goto label_135420;
            case 0x135424u: goto label_135424;
            case 0x135428u: goto label_135428;
            case 0x13542Cu: goto label_13542c;
            case 0x135430u: goto label_135430;
            case 0x135434u: goto label_135434;
            case 0x135438u: goto label_135438;
            case 0x13543Cu: goto label_13543c;
            case 0x135440u: goto label_135440;
            case 0x135444u: goto label_135444;
            case 0x135448u: goto label_135448;
            case 0x13544Cu: goto label_13544c;
            case 0x135450u: goto label_135450;
            case 0x135454u: goto label_135454;
            case 0x135458u: goto label_135458;
            case 0x13545Cu: goto label_13545c;
            case 0x135460u: goto label_135460;
            case 0x135464u: goto label_135464;
            case 0x135468u: goto label_135468;
            case 0x13546Cu: goto label_13546c;
            case 0x135470u: goto label_135470;
            case 0x135474u: goto label_135474;
            case 0x135478u: goto label_135478;
            case 0x13547Cu: goto label_13547c;
            case 0x135480u: goto label_135480;
            case 0x135484u: goto label_135484;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13547Cu; }
            if (ctx->pc != 0x13547Cu) { return; }
        }
    }
    ctx->pc = 0x13547Cu;
label_13547c:
    // 0x13547c: 0xdfbf0000
    ctx->pc = 0x13547cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_135480:
    // 0x135480: 0x3e00008
label_135484:
    if (ctx->pc == 0x135484u) {
        ctx->pc = 0x135484u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x135488u;
        goto label_fallthrough_0x135480;
    }
    ctx->pc = 0x135480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135484u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1353F8u: goto label_1353f8;
            case 0x1353FCu: goto label_1353fc;
            case 0x135400u: goto label_135400;
            case 0x135404u: goto label_135404;
            case 0x135408u: goto label_135408;
            case 0x13540Cu: goto label_13540c;
            case 0x135410u: goto label_135410;
            case 0x135414u: goto label_135414;
            case 0x135418u: goto label_135418;
            case 0x13541Cu: goto label_13541c;
            case 0x135420u: goto label_135420;
            case 0x135424u: goto label_135424;
            case 0x135428u: goto label_135428;
            case 0x13542Cu: goto label_13542c;
            case 0x135430u: goto label_135430;
            case 0x135434u: goto label_135434;
            case 0x135438u: goto label_135438;
            case 0x13543Cu: goto label_13543c;
            case 0x135440u: goto label_135440;
            case 0x135444u: goto label_135444;
            case 0x135448u: goto label_135448;
            case 0x13544Cu: goto label_13544c;
            case 0x135450u: goto label_135450;
            case 0x135454u: goto label_135454;
            case 0x135458u: goto label_135458;
            case 0x13545Cu: goto label_13545c;
            case 0x135460u: goto label_135460;
            case 0x135464u: goto label_135464;
            case 0x135468u: goto label_135468;
            case 0x13546Cu: goto label_13546c;
            case 0x135470u: goto label_135470;
            case 0x135474u: goto label_135474;
            case 0x135478u: goto label_135478;
            case 0x13547Cu: goto label_13547c;
            case 0x135480u: goto label_135480;
            case 0x135484u: goto label_135484;
            default: break;
        }
        return;
    }
label_fallthrough_0x135480:
    ctx->pc = 0x135488u;
}
