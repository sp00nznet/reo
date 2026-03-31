#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016D508
// Address: 0x16d508 - 0x16d5c8
void sub_0016D508_0x16d508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16d508u;

label_16d508:
    // 0x16d508: 0x27bdffc0
    ctx->pc = 0x16d508u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_16d50c:
    // 0x16d50c: 0xffb00010
    ctx->pc = 0x16d50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_16d510:
    // 0x16d510: 0xa0802d
    ctx->pc = 0x16d510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16d514:
    // 0x16d514: 0xffb10018
    ctx->pc = 0x16d514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_16d518:
    // 0x16d518: 0x80882d
    ctx->pc = 0x16d518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16d51c:
    // 0x16d51c: 0xffb20020
    ctx->pc = 0x16d51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_16d520:
    // 0x16d520: 0x24120080
    ctx->pc = 0x16d520u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 128));
label_16d524:
    // 0x16d524: 0xffb30028
    ctx->pc = 0x16d524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_16d528:
    // 0x16d528: 0x24130004
    ctx->pc = 0x16d528u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 4));
label_16d52c:
    // 0x16d52c: 0x1000000a
label_16d530:
    if (ctx->pc == 0x16D530u) {
        ctx->pc = 0x16D530u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->pc = 0x16D534u;
        goto label_16d534;
    }
    ctx->pc = 0x16D52Cu;
    {
        const bool branch_taken_0x16d52c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16D530u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        if (branch_taken_0x16d52c) {
            ctx->pc = 0x16D558u;
            goto label_16d558;
        }
    }
    ctx->pc = 0x16D534u;
label_16d534:
    // 0x16d534: 0x0
    ctx->pc = 0x16d534u;
    // NOP
label_16d538:
    // 0x16d538: 0x8e030000
    ctx->pc = 0x16d538u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16d53c:
    // 0x16d53c: 0x282d
    ctx->pc = 0x16d53cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d540:
    // 0x16d540: 0x8c620020
    ctx->pc = 0x16d540u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_16d544:
    // 0x16d544: 0x40f809
label_16d548:
    if (ctx->pc == 0x16D548u) {
        ctx->pc = 0x16D548u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16D54Cu;
        goto label_16d54c;
    }
    ctx->pc = 0x16D544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16D54Cu);
        ctx->pc = 0x16D548u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D508u: goto label_16d508;
            case 0x16D50Cu: goto label_16d50c;
            case 0x16D510u: goto label_16d510;
            case 0x16D514u: goto label_16d514;
            case 0x16D518u: goto label_16d518;
            case 0x16D51Cu: goto label_16d51c;
            case 0x16D520u: goto label_16d520;
            case 0x16D524u: goto label_16d524;
            case 0x16D528u: goto label_16d528;
            case 0x16D52Cu: goto label_16d52c;
            case 0x16D530u: goto label_16d530;
            case 0x16D534u: goto label_16d534;
            case 0x16D538u: goto label_16d538;
            case 0x16D53Cu: goto label_16d53c;
            case 0x16D540u: goto label_16d540;
            case 0x16D544u: goto label_16d544;
            case 0x16D548u: goto label_16d548;
            case 0x16D54Cu: goto label_16d54c;
            case 0x16D550u: goto label_16d550;
            case 0x16D554u: goto label_16d554;
            case 0x16D558u: goto label_16d558;
            case 0x16D55Cu: goto label_16d55c;
            case 0x16D560u: goto label_16d560;
            case 0x16D564u: goto label_16d564;
            case 0x16D568u: goto label_16d568;
            case 0x16D56Cu: goto label_16d56c;
            case 0x16D570u: goto label_16d570;
            case 0x16D574u: goto label_16d574;
            case 0x16D578u: goto label_16d578;
            case 0x16D57Cu: goto label_16d57c;
            case 0x16D580u: goto label_16d580;
            case 0x16D584u: goto label_16d584;
            case 0x16D588u: goto label_16d588;
            case 0x16D58Cu: goto label_16d58c;
            case 0x16D590u: goto label_16d590;
            case 0x16D594u: goto label_16d594;
            case 0x16D598u: goto label_16d598;
            case 0x16D59Cu: goto label_16d59c;
            case 0x16D5A0u: goto label_16d5a0;
            case 0x16D5A4u: goto label_16d5a4;
            case 0x16D5A8u: goto label_16d5a8;
            case 0x16D5ACu: goto label_16d5ac;
            case 0x16D5B0u: goto label_16d5b0;
            case 0x16D5B4u: goto label_16d5b4;
            case 0x16D5B8u: goto label_16d5b8;
            case 0x16D5BCu: goto label_16d5bc;
            case 0x16D5C0u: goto label_16d5c0;
            case 0x16D5C4u: goto label_16d5c4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16D54Cu; }
            if (ctx->pc != 0x16D54Cu) { return; }
        }
    }
    ctx->pc = 0x16D54Cu;
label_16d54c:
    // 0x16d54c: 0x220202d
    ctx->pc = 0x16d54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16d550:
    // 0x16d550: 0xc05b572
label_16d554:
    if (ctx->pc == 0x16D554u) {
        ctx->pc = 0x16D554u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x16D558u;
        goto label_16d558;
    }
    ctx->pc = 0x16D550u;
    SET_GPR_U32(ctx, 31, 0x16D558u);
    ctx->pc = 0x16D554u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x16D5C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D5C8_0x16d5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D558u; }
    }
    if (ctx->pc != 0x16D558u) { return; }
    ctx->pc = 0x16D558u;
label_16d558:
    // 0x16d558: 0x8e020000
    ctx->pc = 0x16d558u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16d55c:
    // 0x16d55c: 0x200202d
    ctx->pc = 0x16d55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16d560:
    // 0x16d560: 0x24050001
    ctx->pc = 0x16d560u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_16d564:
    // 0x16d564: 0x24060004
    ctx->pc = 0x16d564u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
label_16d568:
    // 0x16d568: 0x8c430018
    ctx->pc = 0x16d568u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_16d56c:
    // 0x16d56c: 0x60f809
label_16d570:
    if (ctx->pc == 0x16D570u) {
        ctx->pc = 0x16D570u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16D574u;
        goto label_16d574;
    }
    ctx->pc = 0x16D56Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16D574u);
        ctx->pc = 0x16D570u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D508u: goto label_16d508;
            case 0x16D50Cu: goto label_16d50c;
            case 0x16D510u: goto label_16d510;
            case 0x16D514u: goto label_16d514;
            case 0x16D518u: goto label_16d518;
            case 0x16D51Cu: goto label_16d51c;
            case 0x16D520u: goto label_16d520;
            case 0x16D524u: goto label_16d524;
            case 0x16D528u: goto label_16d528;
            case 0x16D52Cu: goto label_16d52c;
            case 0x16D530u: goto label_16d530;
            case 0x16D534u: goto label_16d534;
            case 0x16D538u: goto label_16d538;
            case 0x16D53Cu: goto label_16d53c;
            case 0x16D540u: goto label_16d540;
            case 0x16D544u: goto label_16d544;
            case 0x16D548u: goto label_16d548;
            case 0x16D54Cu: goto label_16d54c;
            case 0x16D550u: goto label_16d550;
            case 0x16D554u: goto label_16d554;
            case 0x16D558u: goto label_16d558;
            case 0x16D55Cu: goto label_16d55c;
            case 0x16D560u: goto label_16d560;
            case 0x16D564u: goto label_16d564;
            case 0x16D568u: goto label_16d568;
            case 0x16D56Cu: goto label_16d56c;
            case 0x16D570u: goto label_16d570;
            case 0x16D574u: goto label_16d574;
            case 0x16D578u: goto label_16d578;
            case 0x16D57Cu: goto label_16d57c;
            case 0x16D580u: goto label_16d580;
            case 0x16D584u: goto label_16d584;
            case 0x16D588u: goto label_16d588;
            case 0x16D58Cu: goto label_16d58c;
            case 0x16D590u: goto label_16d590;
            case 0x16D594u: goto label_16d594;
            case 0x16D598u: goto label_16d598;
            case 0x16D59Cu: goto label_16d59c;
            case 0x16D5A0u: goto label_16d5a0;
            case 0x16D5A4u: goto label_16d5a4;
            case 0x16D5A8u: goto label_16d5a8;
            case 0x16D5ACu: goto label_16d5ac;
            case 0x16D5B0u: goto label_16d5b0;
            case 0x16D5B4u: goto label_16d5b4;
            case 0x16D5B8u: goto label_16d5b8;
            case 0x16D5BCu: goto label_16d5bc;
            case 0x16D5C0u: goto label_16d5c0;
            case 0x16D5C4u: goto label_16d5c4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16D574u; }
            if (ctx->pc != 0x16D574u) { return; }
        }
    }
    ctx->pc = 0x16D574u;
label_16d574:
    // 0x16d574: 0x8fa20004
    ctx->pc = 0x16d574u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_16d578:
    // 0x16d578: 0x54530006
label_16d57c:
    if (ctx->pc == 0x16D57Cu) {
        ctx->pc = 0x16D57Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x16D580u;
        goto label_16d580;
    }
    ctx->pc = 0x16D578u;
    {
        const bool branch_taken_0x16d578 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        if (branch_taken_0x16d578) {
            ctx->pc = 0x16D57Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x16D594u;
            goto label_16d594;
        }
    }
    ctx->pc = 0x16D580u;
label_16d580:
    // 0x16d580: 0xc05616e
label_16d584:
    if (ctx->pc == 0x16D584u) {
        ctx->pc = 0x16D584u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x16D588u;
        goto label_16d588;
    }
    ctx->pc = 0x16D580u;
    SET_GPR_U32(ctx, 31, 0x16D588u);
    ctx->pc = 0x16D584u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1585B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001585B8_0x1585b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D588u; }
    }
    if (ctx->pc != 0x16D588u) { return; }
    ctx->pc = 0x16D588u;
label_16d588:
    // 0x16d588: 0x1052ffeb
label_16d58c:
    if (ctx->pc == 0x16D58Cu) {
        ctx->pc = 0x16D58Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16D590u;
        goto label_16d590;
    }
    ctx->pc = 0x16D588u;
    {
        const bool branch_taken_0x16d588 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 18));
        ctx->pc = 0x16D58Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16d588) {
            ctx->pc = 0x16D538u;
            goto label_16d538;
        }
    }
    ctx->pc = 0x16D590u;
label_16d590:
    // 0x16d590: 0x8e030000
    ctx->pc = 0x16d590u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16d594:
    // 0x16d594: 0x200202d
    ctx->pc = 0x16d594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16d598:
    // 0x16d598: 0x24050001
    ctx->pc = 0x16d598u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_16d59c:
    // 0x16d59c: 0x8c62001c
    ctx->pc = 0x16d59cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_16d5a0:
    // 0x16d5a0: 0x40f809
label_16d5a4:
    if (ctx->pc == 0x16D5A4u) {
        ctx->pc = 0x16D5A4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16D5A8u;
        goto label_16d5a8;
    }
    ctx->pc = 0x16D5A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16D5A8u);
        ctx->pc = 0x16D5A4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D508u: goto label_16d508;
            case 0x16D50Cu: goto label_16d50c;
            case 0x16D510u: goto label_16d510;
            case 0x16D514u: goto label_16d514;
            case 0x16D518u: goto label_16d518;
            case 0x16D51Cu: goto label_16d51c;
            case 0x16D520u: goto label_16d520;
            case 0x16D524u: goto label_16d524;
            case 0x16D528u: goto label_16d528;
            case 0x16D52Cu: goto label_16d52c;
            case 0x16D530u: goto label_16d530;
            case 0x16D534u: goto label_16d534;
            case 0x16D538u: goto label_16d538;
            case 0x16D53Cu: goto label_16d53c;
            case 0x16D540u: goto label_16d540;
            case 0x16D544u: goto label_16d544;
            case 0x16D548u: goto label_16d548;
            case 0x16D54Cu: goto label_16d54c;
            case 0x16D550u: goto label_16d550;
            case 0x16D554u: goto label_16d554;
            case 0x16D558u: goto label_16d558;
            case 0x16D55Cu: goto label_16d55c;
            case 0x16D560u: goto label_16d560;
            case 0x16D564u: goto label_16d564;
            case 0x16D568u: goto label_16d568;
            case 0x16D56Cu: goto label_16d56c;
            case 0x16D570u: goto label_16d570;
            case 0x16D574u: goto label_16d574;
            case 0x16D578u: goto label_16d578;
            case 0x16D57Cu: goto label_16d57c;
            case 0x16D580u: goto label_16d580;
            case 0x16D584u: goto label_16d584;
            case 0x16D588u: goto label_16d588;
            case 0x16D58Cu: goto label_16d58c;
            case 0x16D590u: goto label_16d590;
            case 0x16D594u: goto label_16d594;
            case 0x16D598u: goto label_16d598;
            case 0x16D59Cu: goto label_16d59c;
            case 0x16D5A0u: goto label_16d5a0;
            case 0x16D5A4u: goto label_16d5a4;
            case 0x16D5A8u: goto label_16d5a8;
            case 0x16D5ACu: goto label_16d5ac;
            case 0x16D5B0u: goto label_16d5b0;
            case 0x16D5B4u: goto label_16d5b4;
            case 0x16D5B8u: goto label_16d5b8;
            case 0x16D5BCu: goto label_16d5bc;
            case 0x16D5C0u: goto label_16d5c0;
            case 0x16D5C4u: goto label_16d5c4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16D5A8u; }
            if (ctx->pc != 0x16D5A8u) { return; }
        }
    }
    ctx->pc = 0x16D5A8u;
label_16d5a8:
    // 0x16d5a8: 0xdfb00010
    ctx->pc = 0x16d5a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16d5ac:
    // 0x16d5ac: 0xdfb10018
    ctx->pc = 0x16d5acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_16d5b0:
    // 0x16d5b0: 0xdfb20020
    ctx->pc = 0x16d5b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16d5b4:
    // 0x16d5b4: 0xdfb30028
    ctx->pc = 0x16d5b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_16d5b8:
    // 0x16d5b8: 0xdfbf0030
    ctx->pc = 0x16d5b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16d5bc:
    // 0x16d5bc: 0x3e00008
label_16d5c0:
    if (ctx->pc == 0x16D5C0u) {
        ctx->pc = 0x16D5C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x16D5C4u;
        goto label_16d5c4;
    }
    ctx->pc = 0x16D5BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D5C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D508u: goto label_16d508;
            case 0x16D50Cu: goto label_16d50c;
            case 0x16D510u: goto label_16d510;
            case 0x16D514u: goto label_16d514;
            case 0x16D518u: goto label_16d518;
            case 0x16D51Cu: goto label_16d51c;
            case 0x16D520u: goto label_16d520;
            case 0x16D524u: goto label_16d524;
            case 0x16D528u: goto label_16d528;
            case 0x16D52Cu: goto label_16d52c;
            case 0x16D530u: goto label_16d530;
            case 0x16D534u: goto label_16d534;
            case 0x16D538u: goto label_16d538;
            case 0x16D53Cu: goto label_16d53c;
            case 0x16D540u: goto label_16d540;
            case 0x16D544u: goto label_16d544;
            case 0x16D548u: goto label_16d548;
            case 0x16D54Cu: goto label_16d54c;
            case 0x16D550u: goto label_16d550;
            case 0x16D554u: goto label_16d554;
            case 0x16D558u: goto label_16d558;
            case 0x16D55Cu: goto label_16d55c;
            case 0x16D560u: goto label_16d560;
            case 0x16D564u: goto label_16d564;
            case 0x16D568u: goto label_16d568;
            case 0x16D56Cu: goto label_16d56c;
            case 0x16D570u: goto label_16d570;
            case 0x16D574u: goto label_16d574;
            case 0x16D578u: goto label_16d578;
            case 0x16D57Cu: goto label_16d57c;
            case 0x16D580u: goto label_16d580;
            case 0x16D584u: goto label_16d584;
            case 0x16D588u: goto label_16d588;
            case 0x16D58Cu: goto label_16d58c;
            case 0x16D590u: goto label_16d590;
            case 0x16D594u: goto label_16d594;
            case 0x16D598u: goto label_16d598;
            case 0x16D59Cu: goto label_16d59c;
            case 0x16D5A0u: goto label_16d5a0;
            case 0x16D5A4u: goto label_16d5a4;
            case 0x16D5A8u: goto label_16d5a8;
            case 0x16D5ACu: goto label_16d5ac;
            case 0x16D5B0u: goto label_16d5b0;
            case 0x16D5B4u: goto label_16d5b4;
            case 0x16D5B8u: goto label_16d5b8;
            case 0x16D5BCu: goto label_16d5bc;
            case 0x16D5C0u: goto label_16d5c0;
            case 0x16D5C4u: goto label_16d5c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16D5C4u;
label_16d5c4:
    // 0x16d5c4: 0x0
    ctx->pc = 0x16d5c4u;
    // NOP
}
