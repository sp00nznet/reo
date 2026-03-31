#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00125518
// Address: 0x125518 - 0x125768
void sub_00125518_0x125518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x125518u;

label_125518:
    // 0x125518: 0x27bdffa0
    ctx->pc = 0x125518u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
label_12551c:
    // 0x12551c: 0xffb00010
    ctx->pc = 0x12551cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_125520:
    // 0x125520: 0xffb30028
    ctx->pc = 0x125520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_125524:
    // 0x125524: 0xffb40030
    ctx->pc = 0x125524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_125528:
    // 0x125528: 0x80a02d
    ctx->pc = 0x125528u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12552c:
    // 0x12552c: 0xffb50038
    ctx->pc = 0x12552cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_125530:
    // 0x125530: 0xffb60040
    ctx->pc = 0x125530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_125534:
    // 0x125534: 0x26960048
    ctx->pc = 0x125534u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 20), 72));
label_125538:
    // 0x125538: 0xffbe0050
    ctx->pc = 0x125538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_12553c:
    // 0x12553c: 0xffb10018
    ctx->pc = 0x12553cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_125540:
    // 0x125540: 0xffb20020
    ctx->pc = 0x125540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_125544:
    // 0x125544: 0xffb70048
    ctx->pc = 0x125544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_125548:
    // 0x125548: 0xffbf0058
    ctx->pc = 0x125548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_12554c:
    // 0x12554c: 0x8ed10010
    ctx->pc = 0x12554cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_125550:
    // 0x125550: 0x8ed20028
    ctx->pc = 0x125550u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 22), 40)));
label_125554:
    // 0x125554: 0x52200001
label_125558:
    if (ctx->pc == 0x125558u) {
        ctx->pc = 0x125558u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x12555Cu;
        goto label_12555c;
    }
    ctx->pc = 0x125554u;
    {
        const bool branch_taken_0x125554 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x125554) {
            ctx->pc = 0x125558u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x12555Cu;
            goto label_12555c;
        }
    }
    ctx->pc = 0x12555Cu;
label_12555c:
    // 0x12555c: 0x2519021
    ctx->pc = 0x12555cu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_125560:
    // 0x125560: 0x8e820044
    ctx->pc = 0x125560u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 68)));
label_125564:
    // 0x125564: 0x2652ffff
    ctx->pc = 0x125564u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
label_125568:
    // 0x125568: 0x8e970040
    ctx->pc = 0x125568u;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_12556c:
    // 0x12556c: 0x251001a
    ctx->pc = 0x12556cu;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_125570:
    // 0x125570: 0x8e840008
    ctx->pc = 0x125570u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_125574:
    // 0x125574: 0x8ede0014
    ctx->pc = 0x125574u;
    SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 22), 20)));
label_125578:
    // 0x125578: 0xafa20000
    ctx->pc = 0x125578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_12557c:
    // 0x12557c: 0x8ed3000c
    ctx->pc = 0x12557cu;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_125580:
    // 0x125580: 0x8010
    ctx->pc = 0x125580u;
    SET_GPR_U32(ctx, 16, ctx->hi);
label_125584:
    // 0x125584: 0x9012
    ctx->pc = 0x125584u;
    SET_GPR_U32(ctx, 18, ctx->lo);
label_125588:
    // 0x125588: 0xc04d418
label_12558c:
    if (ctx->pc == 0x12558Cu) {
        ctx->pc = 0x12558Cu;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 22), 32)));
        ctx->pc = 0x125590u;
        goto label_125590;
    }
    ctx->pc = 0x125588u;
    SET_GPR_U32(ctx, 31, 0x125590u);
    ctx->pc = 0x12558Cu;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 22), 32)));
    ctx->pc = 0x135060u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135060_0x135060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125590u; }
    }
    if (ctx->pc != 0x125590u) { return; }
    ctx->pc = 0x125590u;
label_125590:
    // 0x125590: 0x8ec30008
    ctx->pc = 0x125590u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_125594:
    // 0x125594: 0x2308023
    ctx->pc = 0x125594u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_125598:
    // 0x125598: 0x518818
    ctx->pc = 0x125598u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)(uint32_t)result); }
label_12559c:
    // 0x12559c: 0x2439018
    ctx->pc = 0x12559cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)(uint32_t)result); }
label_1255a0:
    // 0x1255a0: 0x2610ffff
    ctx->pc = 0x1255a0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
label_1255a4:
    // 0x1255a4: 0x70539818
    ctx->pc = 0x1255a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
label_1255a8:
    // 0x1255a8: 0x50600001
label_1255ac:
    if (ctx->pc == 0x1255ACu) {
        ctx->pc = 0x1255ACu;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x1255B0u;
        goto label_1255b0;
    }
    ctx->pc = 0x1255A8u;
    {
        const bool branch_taken_0x1255a8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1255a8) {
            ctx->pc = 0x1255ACu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1255B0u;
            goto label_1255b0;
        }
    }
    ctx->pc = 0x1255B0u;
label_1255b0:
    // 0x1255b0: 0x24040002
    ctx->pc = 0x1255b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_1255b4:
    // 0x1255b4: 0x223001a
    ctx->pc = 0x1255b4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_1255b8:
    // 0x1255b8: 0x52102a
    ctx->pc = 0x1255b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 18)));
label_1255bc:
    // 0x1255bc: 0xae930094
    ctx->pc = 0x1255bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 148), GPR_U32(ctx, 19));
label_1255c0:
    // 0x1255c0: 0x8812
    ctx->pc = 0x1255c0u;
    SET_GPR_U32(ctx, 17, ctx->lo);
label_1255c4:
    // 0x1255c4: 0x2308023
    ctx->pc = 0x1255c4u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_1255c8:
    // 0x1255c8: 0x222800b
    ctx->pc = 0x1255c8u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 17));
label_1255cc:
    // 0x1255cc: 0x2b0a821
    ctx->pc = 0x1255ccu;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_1255d0:
    // 0x1255d0: 0xae900090
    ctx->pc = 0x1255d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 144), GPR_U32(ctx, 16));
label_1255d4:
    // 0x1255d4: 0x2b7102a
    ctx->pc = 0x1255d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 23)));
label_1255d8:
    // 0x1255d8: 0x14400023
label_1255dc:
    if (ctx->pc == 0x1255DCu) {
        ctx->pc = 0x1255DCu;
        SET_GPR_U32(ctx, 21, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 23)));
        ctx->pc = 0x1255E0u;
        goto label_1255e0;
    }
    ctx->pc = 0x1255D8u;
    {
        const bool branch_taken_0x1255d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1255DCu;
        SET_GPR_U32(ctx, 21, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 23)));
        if (branch_taken_0x1255d8) {
            ctx->pc = 0x125668u;
            goto label_125668;
        }
    }
    ctx->pc = 0x1255E0u;
label_1255e0:
    // 0x1255e0: 0x60102d
    ctx->pc = 0x1255e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1255e4:
    // 0x1255e4: 0x14440010
label_1255e8:
    if (ctx->pc == 0x1255E8u) {
        ctx->pc = 0x1255E8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1255ECu;
        goto label_1255ec;
    }
    ctx->pc = 0x1255E4u;
    {
        const bool branch_taken_0x1255e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x1255E8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1255e4) {
            ctx->pc = 0x125628u;
            goto label_125628;
        }
    }
    ctx->pc = 0x1255ECu;
label_1255ec:
    // 0x1255ec: 0xdfbe0050
    ctx->pc = 0x1255ecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1255f0:
    // 0x1255f0: 0x2e0282d
    ctx->pc = 0x1255f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1255f4:
    // 0x1255f4: 0xdfb70048
    ctx->pc = 0x1255f4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1255f8:
    // 0x1255f8: 0x2a0382d
    ctx->pc = 0x1255f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1255fc:
    // 0x1255fc: 0xdfb50038
    ctx->pc = 0x1255fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_125600:
    // 0x125600: 0x8fa60000
    ctx->pc = 0x125600u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_125604:
    // 0x125604: 0xdfb00010
    ctx->pc = 0x125604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_125608:
    // 0x125608: 0xdfb10018
    ctx->pc = 0x125608u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_12560c:
    // 0x12560c: 0xdfb20020
    ctx->pc = 0x12560cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_125610:
    // 0x125610: 0xdfb30028
    ctx->pc = 0x125610u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_125614:
    // 0x125614: 0xdfb40030
    ctx->pc = 0x125614u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_125618:
    // 0x125618: 0xdfb60040
    ctx->pc = 0x125618u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_12561c:
    // 0x12561c: 0xdfbf0058
    ctx->pc = 0x12561cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_125620:
    // 0x125620: 0x8049522
label_125624:
    if (ctx->pc == 0x125624u) {
        ctx->pc = 0x125624u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x125628u;
        goto label_125628;
    }
    ctx->pc = 0x125620u;
    ctx->pc = 0x125624u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x125488u;
    entry_125488_0x1254f8(rdram, ctx, runtime); return;
    ctx->pc = 0x125628u;
label_125628:
    // 0x125628: 0xdfbe0050
    ctx->pc = 0x125628u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_12562c:
    // 0x12562c: 0x2e0282d
    ctx->pc = 0x12562cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_125630:
    // 0x125630: 0xdfb70048
    ctx->pc = 0x125630u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_125634:
    // 0x125634: 0x2a0382d
    ctx->pc = 0x125634u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_125638:
    // 0x125638: 0xdfb50038
    ctx->pc = 0x125638u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_12563c:
    // 0x12563c: 0x8fa60000
    ctx->pc = 0x12563cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_125640:
    // 0x125640: 0xdfb00010
    ctx->pc = 0x125640u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_125644:
    // 0x125644: 0xdfb10018
    ctx->pc = 0x125644u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_125648:
    // 0x125648: 0xdfb20020
    ctx->pc = 0x125648u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12564c:
    // 0x12564c: 0xdfb30028
    ctx->pc = 0x12564cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_125650:
    // 0x125650: 0xdfb40030
    ctx->pc = 0x125650u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_125654:
    // 0x125654: 0xdfb60040
    ctx->pc = 0x125654u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_125658:
    // 0x125658: 0xdfbf0058
    ctx->pc = 0x125658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_12565c:
    // 0x12565c: 0x804953e
label_125660:
    if (ctx->pc == 0x125660u) {
        ctx->pc = 0x125660u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x125664u;
        goto label_125664;
    }
    ctx->pc = 0x12565Cu;
    ctx->pc = 0x125660u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x1254F8u;
    entry_1254f8_0x125518(rdram, ctx, runtime); return;
    ctx->pc = 0x125664u;
label_125664:
    // 0x125664: 0x0
    ctx->pc = 0x125664u;
    // NOP
label_125668:
    // 0x125668: 0xdfb00010
    ctx->pc = 0x125668u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12566c:
    // 0x12566c: 0xdfb10018
    ctx->pc = 0x12566cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_125670:
    // 0x125670: 0xdfb20020
    ctx->pc = 0x125670u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_125674:
    // 0x125674: 0xdfb30028
    ctx->pc = 0x125674u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_125678:
    // 0x125678: 0xdfb40030
    ctx->pc = 0x125678u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_12567c:
    // 0x12567c: 0xdfb50038
    ctx->pc = 0x12567cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_125680:
    // 0x125680: 0xdfb60040
    ctx->pc = 0x125680u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_125684:
    // 0x125684: 0xdfb70048
    ctx->pc = 0x125684u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_125688:
    // 0x125688: 0xdfbe0050
    ctx->pc = 0x125688u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_12568c:
    // 0x12568c: 0xdfbf0058
    ctx->pc = 0x12568cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_125690:
    // 0x125690: 0x3e00008
label_125694:
    if (ctx->pc == 0x125694u) {
        ctx->pc = 0x125694u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x125698u;
        goto label_125698;
    }
    ctx->pc = 0x125690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125694u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125518u: goto label_125518;
            case 0x12551Cu: goto label_12551c;
            case 0x125520u: goto label_125520;
            case 0x125524u: goto label_125524;
            case 0x125528u: goto label_125528;
            case 0x12552Cu: goto label_12552c;
            case 0x125530u: goto label_125530;
            case 0x125534u: goto label_125534;
            case 0x125538u: goto label_125538;
            case 0x12553Cu: goto label_12553c;
            case 0x125540u: goto label_125540;
            case 0x125544u: goto label_125544;
            case 0x125548u: goto label_125548;
            case 0x12554Cu: goto label_12554c;
            case 0x125550u: goto label_125550;
            case 0x125554u: goto label_125554;
            case 0x125558u: goto label_125558;
            case 0x12555Cu: goto label_12555c;
            case 0x125560u: goto label_125560;
            case 0x125564u: goto label_125564;
            case 0x125568u: goto label_125568;
            case 0x12556Cu: goto label_12556c;
            case 0x125570u: goto label_125570;
            case 0x125574u: goto label_125574;
            case 0x125578u: goto label_125578;
            case 0x12557Cu: goto label_12557c;
            case 0x125580u: goto label_125580;
            case 0x125584u: goto label_125584;
            case 0x125588u: goto label_125588;
            case 0x12558Cu: goto label_12558c;
            case 0x125590u: goto label_125590;
            case 0x125594u: goto label_125594;
            case 0x125598u: goto label_125598;
            case 0x12559Cu: goto label_12559c;
            case 0x1255A0u: goto label_1255a0;
            case 0x1255A4u: goto label_1255a4;
            case 0x1255A8u: goto label_1255a8;
            case 0x1255ACu: goto label_1255ac;
            case 0x1255B0u: goto label_1255b0;
            case 0x1255B4u: goto label_1255b4;
            case 0x1255B8u: goto label_1255b8;
            case 0x1255BCu: goto label_1255bc;
            case 0x1255C0u: goto label_1255c0;
            case 0x1255C4u: goto label_1255c4;
            case 0x1255C8u: goto label_1255c8;
            case 0x1255CCu: goto label_1255cc;
            case 0x1255D0u: goto label_1255d0;
            case 0x1255D4u: goto label_1255d4;
            case 0x1255D8u: goto label_1255d8;
            case 0x1255DCu: goto label_1255dc;
            case 0x1255E0u: goto label_1255e0;
            case 0x1255E4u: goto label_1255e4;
            case 0x1255E8u: goto label_1255e8;
            case 0x1255ECu: goto label_1255ec;
            case 0x1255F0u: goto label_1255f0;
            case 0x1255F4u: goto label_1255f4;
            case 0x1255F8u: goto label_1255f8;
            case 0x1255FCu: goto label_1255fc;
            case 0x125600u: goto label_125600;
            case 0x125604u: goto label_125604;
            case 0x125608u: goto label_125608;
            case 0x12560Cu: goto label_12560c;
            case 0x125610u: goto label_125610;
            case 0x125614u: goto label_125614;
            case 0x125618u: goto label_125618;
            case 0x12561Cu: goto label_12561c;
            case 0x125620u: goto label_125620;
            case 0x125624u: goto label_125624;
            case 0x125628u: goto label_125628;
            case 0x12562Cu: goto label_12562c;
            case 0x125630u: goto label_125630;
            case 0x125634u: goto label_125634;
            case 0x125638u: goto label_125638;
            case 0x12563Cu: goto label_12563c;
            case 0x125640u: goto label_125640;
            case 0x125644u: goto label_125644;
            case 0x125648u: goto label_125648;
            case 0x12564Cu: goto label_12564c;
            case 0x125650u: goto label_125650;
            case 0x125654u: goto label_125654;
            case 0x125658u: goto label_125658;
            case 0x12565Cu: goto label_12565c;
            case 0x125660u: goto label_125660;
            case 0x125664u: goto label_125664;
            case 0x125668u: goto label_125668;
            case 0x12566Cu: goto label_12566c;
            case 0x125670u: goto label_125670;
            case 0x125674u: goto label_125674;
            case 0x125678u: goto label_125678;
            case 0x12567Cu: goto label_12567c;
            case 0x125680u: goto label_125680;
            case 0x125684u: goto label_125684;
            case 0x125688u: goto label_125688;
            case 0x12568Cu: goto label_12568c;
            case 0x125690u: goto label_125690;
            case 0x125694u: goto label_125694;
            case 0x125698u: goto label_125698;
            case 0x12569Cu: goto label_12569c;
            case 0x1256A0u: goto label_1256a0;
            case 0x1256A4u: goto label_1256a4;
            case 0x1256A8u: goto label_1256a8;
            case 0x1256ACu: goto label_1256ac;
            case 0x1256B0u: goto label_1256b0;
            case 0x1256B4u: goto label_1256b4;
            case 0x1256B8u: goto label_1256b8;
            case 0x1256BCu: goto label_1256bc;
            case 0x1256C0u: goto label_1256c0;
            case 0x1256C4u: goto label_1256c4;
            case 0x1256C8u: goto label_1256c8;
            case 0x1256CCu: goto label_1256cc;
            case 0x1256D0u: goto label_1256d0;
            case 0x1256D4u: goto label_1256d4;
            case 0x1256D8u: goto label_1256d8;
            case 0x1256DCu: goto label_1256dc;
            case 0x1256E0u: goto label_1256e0;
            case 0x1256E4u: goto label_1256e4;
            case 0x1256E8u: goto label_1256e8;
            case 0x1256ECu: goto label_1256ec;
            case 0x1256F0u: goto label_1256f0;
            case 0x1256F4u: goto label_1256f4;
            case 0x1256F8u: goto label_1256f8;
            case 0x1256FCu: goto label_1256fc;
            case 0x125700u: goto label_125700;
            case 0x125704u: goto label_125704;
            case 0x125708u: goto label_125708;
            case 0x12570Cu: goto label_12570c;
            case 0x125710u: goto label_125710;
            case 0x125714u: goto label_125714;
            case 0x125718u: goto label_125718;
            case 0x12571Cu: goto label_12571c;
            case 0x125720u: goto label_125720;
            case 0x125724u: goto label_125724;
            case 0x125728u: goto label_125728;
            case 0x12572Cu: goto label_12572c;
            case 0x125730u: goto label_125730;
            case 0x125734u: goto label_125734;
            case 0x125738u: goto label_125738;
            case 0x12573Cu: goto label_12573c;
            case 0x125740u: goto label_125740;
            case 0x125744u: goto label_125744;
            case 0x125748u: goto label_125748;
            case 0x12574Cu: goto label_12574c;
            case 0x125750u: goto label_125750;
            case 0x125754u: goto label_125754;
            case 0x125758u: goto label_125758;
            case 0x12575Cu: goto label_12575c;
            case 0x125760u: goto label_125760;
            case 0x125764u: goto label_125764;
            default: break;
        }
        return;
    }
    ctx->pc = 0x125698u;
label_125698:
    // 0x125698: 0x27bdffe0
    ctx->pc = 0x125698u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_12569c:
    // 0x12569c: 0x24020001
    ctx->pc = 0x12569cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1256a0:
    // 0x1256a0: 0xffb00000
    ctx->pc = 0x1256a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1256a4:
    // 0x1256a4: 0x80802d
    ctx->pc = 0x1256a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1256a8:
    // 0x1256a8: 0xffb10008
    ctx->pc = 0x1256a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1256ac:
    // 0x1256ac: 0xffbf0010
    ctx->pc = 0x1256acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1256b0:
    // 0x1256b0: 0x8e030004
    ctx->pc = 0x1256b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1256b4:
    // 0x1256b4: 0x54620012
label_1256b8:
    if (ctx->pc == 0x1256B8u) {
        ctx->pc = 0x1256B8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1256BCu;
        goto label_1256bc;
    }
    ctx->pc = 0x1256B4u;
    {
        const bool branch_taken_0x1256b4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1256b4) {
            ctx->pc = 0x1256B8u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
            ctx->pc = 0x125700u;
            goto label_125700;
        }
    }
    ctx->pc = 0x1256BCu;
label_1256bc:
    // 0x1256bc: 0xc04d3e6
label_1256c0:
    if (ctx->pc == 0x1256C0u) {
        ctx->pc = 0x1256C0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x1256C4u;
        goto label_1256c4;
    }
    ctx->pc = 0x1256BCu;
    SET_GPR_U32(ctx, 31, 0x1256C4u);
    ctx->pc = 0x1256C0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x134F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00134F98_0x134f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1256C4u; }
    }
    if (ctx->pc != 0x1256C4u) { return; }
    ctx->pc = 0x1256C4u;
label_1256c4:
    // 0x1256c4: 0x26050068
    ctx->pc = 0x1256c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 104));
label_1256c8:
    // 0x1256c8: 0x2606006c
    ctx->pc = 0x1256c8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 108));
label_1256cc:
    // 0x1256cc: 0x1440000a
label_1256d0:
    if (ctx->pc == 0x1256D0u) {
        ctx->pc = 0x1256D0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x1256D4u;
        goto label_1256d4;
    }
    ctx->pc = 0x1256CCu;
    {
        const bool branch_taken_0x1256cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1256D0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 112));
        if (branch_taken_0x1256cc) {
            ctx->pc = 0x1256F8u;
            goto label_1256f8;
        }
    }
    ctx->pc = 0x1256D4u;
label_1256d4:
    // 0x1256d4: 0x8e020078
    ctx->pc = 0x1256d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_1256d8:
    // 0x1256d8: 0x40f809
label_1256dc:
    if (ctx->pc == 0x1256DCu) {
        ctx->pc = 0x1256DCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 124)));
        ctx->pc = 0x1256E0u;
        goto label_1256e0;
    }
    ctx->pc = 0x1256D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1256E0u);
        ctx->pc = 0x1256DCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 124)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125518u: goto label_125518;
            case 0x12551Cu: goto label_12551c;
            case 0x125520u: goto label_125520;
            case 0x125524u: goto label_125524;
            case 0x125528u: goto label_125528;
            case 0x12552Cu: goto label_12552c;
            case 0x125530u: goto label_125530;
            case 0x125534u: goto label_125534;
            case 0x125538u: goto label_125538;
            case 0x12553Cu: goto label_12553c;
            case 0x125540u: goto label_125540;
            case 0x125544u: goto label_125544;
            case 0x125548u: goto label_125548;
            case 0x12554Cu: goto label_12554c;
            case 0x125550u: goto label_125550;
            case 0x125554u: goto label_125554;
            case 0x125558u: goto label_125558;
            case 0x12555Cu: goto label_12555c;
            case 0x125560u: goto label_125560;
            case 0x125564u: goto label_125564;
            case 0x125568u: goto label_125568;
            case 0x12556Cu: goto label_12556c;
            case 0x125570u: goto label_125570;
            case 0x125574u: goto label_125574;
            case 0x125578u: goto label_125578;
            case 0x12557Cu: goto label_12557c;
            case 0x125580u: goto label_125580;
            case 0x125584u: goto label_125584;
            case 0x125588u: goto label_125588;
            case 0x12558Cu: goto label_12558c;
            case 0x125590u: goto label_125590;
            case 0x125594u: goto label_125594;
            case 0x125598u: goto label_125598;
            case 0x12559Cu: goto label_12559c;
            case 0x1255A0u: goto label_1255a0;
            case 0x1255A4u: goto label_1255a4;
            case 0x1255A8u: goto label_1255a8;
            case 0x1255ACu: goto label_1255ac;
            case 0x1255B0u: goto label_1255b0;
            case 0x1255B4u: goto label_1255b4;
            case 0x1255B8u: goto label_1255b8;
            case 0x1255BCu: goto label_1255bc;
            case 0x1255C0u: goto label_1255c0;
            case 0x1255C4u: goto label_1255c4;
            case 0x1255C8u: goto label_1255c8;
            case 0x1255CCu: goto label_1255cc;
            case 0x1255D0u: goto label_1255d0;
            case 0x1255D4u: goto label_1255d4;
            case 0x1255D8u: goto label_1255d8;
            case 0x1255DCu: goto label_1255dc;
            case 0x1255E0u: goto label_1255e0;
            case 0x1255E4u: goto label_1255e4;
            case 0x1255E8u: goto label_1255e8;
            case 0x1255ECu: goto label_1255ec;
            case 0x1255F0u: goto label_1255f0;
            case 0x1255F4u: goto label_1255f4;
            case 0x1255F8u: goto label_1255f8;
            case 0x1255FCu: goto label_1255fc;
            case 0x125600u: goto label_125600;
            case 0x125604u: goto label_125604;
            case 0x125608u: goto label_125608;
            case 0x12560Cu: goto label_12560c;
            case 0x125610u: goto label_125610;
            case 0x125614u: goto label_125614;
            case 0x125618u: goto label_125618;
            case 0x12561Cu: goto label_12561c;
            case 0x125620u: goto label_125620;
            case 0x125624u: goto label_125624;
            case 0x125628u: goto label_125628;
            case 0x12562Cu: goto label_12562c;
            case 0x125630u: goto label_125630;
            case 0x125634u: goto label_125634;
            case 0x125638u: goto label_125638;
            case 0x12563Cu: goto label_12563c;
            case 0x125640u: goto label_125640;
            case 0x125644u: goto label_125644;
            case 0x125648u: goto label_125648;
            case 0x12564Cu: goto label_12564c;
            case 0x125650u: goto label_125650;
            case 0x125654u: goto label_125654;
            case 0x125658u: goto label_125658;
            case 0x12565Cu: goto label_12565c;
            case 0x125660u: goto label_125660;
            case 0x125664u: goto label_125664;
            case 0x125668u: goto label_125668;
            case 0x12566Cu: goto label_12566c;
            case 0x125670u: goto label_125670;
            case 0x125674u: goto label_125674;
            case 0x125678u: goto label_125678;
            case 0x12567Cu: goto label_12567c;
            case 0x125680u: goto label_125680;
            case 0x125684u: goto label_125684;
            case 0x125688u: goto label_125688;
            case 0x12568Cu: goto label_12568c;
            case 0x125690u: goto label_125690;
            case 0x125694u: goto label_125694;
            case 0x125698u: goto label_125698;
            case 0x12569Cu: goto label_12569c;
            case 0x1256A0u: goto label_1256a0;
            case 0x1256A4u: goto label_1256a4;
            case 0x1256A8u: goto label_1256a8;
            case 0x1256ACu: goto label_1256ac;
            case 0x1256B0u: goto label_1256b0;
            case 0x1256B4u: goto label_1256b4;
            case 0x1256B8u: goto label_1256b8;
            case 0x1256BCu: goto label_1256bc;
            case 0x1256C0u: goto label_1256c0;
            case 0x1256C4u: goto label_1256c4;
            case 0x1256C8u: goto label_1256c8;
            case 0x1256CCu: goto label_1256cc;
            case 0x1256D0u: goto label_1256d0;
            case 0x1256D4u: goto label_1256d4;
            case 0x1256D8u: goto label_1256d8;
            case 0x1256DCu: goto label_1256dc;
            case 0x1256E0u: goto label_1256e0;
            case 0x1256E4u: goto label_1256e4;
            case 0x1256E8u: goto label_1256e8;
            case 0x1256ECu: goto label_1256ec;
            case 0x1256F0u: goto label_1256f0;
            case 0x1256F4u: goto label_1256f4;
            case 0x1256F8u: goto label_1256f8;
            case 0x1256FCu: goto label_1256fc;
            case 0x125700u: goto label_125700;
            case 0x125704u: goto label_125704;
            case 0x125708u: goto label_125708;
            case 0x12570Cu: goto label_12570c;
            case 0x125710u: goto label_125710;
            case 0x125714u: goto label_125714;
            case 0x125718u: goto label_125718;
            case 0x12571Cu: goto label_12571c;
            case 0x125720u: goto label_125720;
            case 0x125724u: goto label_125724;
            case 0x125728u: goto label_125728;
            case 0x12572Cu: goto label_12572c;
            case 0x125730u: goto label_125730;
            case 0x125734u: goto label_125734;
            case 0x125738u: goto label_125738;
            case 0x12573Cu: goto label_12573c;
            case 0x125740u: goto label_125740;
            case 0x125744u: goto label_125744;
            case 0x125748u: goto label_125748;
            case 0x12574Cu: goto label_12574c;
            case 0x125750u: goto label_125750;
            case 0x125754u: goto label_125754;
            case 0x125758u: goto label_125758;
            case 0x12575Cu: goto label_12575c;
            case 0x125760u: goto label_125760;
            case 0x125764u: goto label_125764;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1256E0u; }
            if (ctx->pc != 0x1256E0u) { return; }
        }
    }
    ctx->pc = 0x1256E0u;
label_1256e0:
    // 0x1256e0: 0xc0494dc
label_1256e4:
    if (ctx->pc == 0x1256E4u) {
        ctx->pc = 0x1256E4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1256E8u;
        goto label_1256e8;
    }
    ctx->pc = 0x1256E0u;
    SET_GPR_U32(ctx, 31, 0x1256E8u);
    ctx->pc = 0x1256E4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x125370u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00125370_0x125370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1256E8u; }
    }
    if (ctx->pc != 0x1256E8u) { return; }
    ctx->pc = 0x1256E8u;
label_1256e8:
    // 0x1256e8: 0x24020002
    ctx->pc = 0x1256e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_1256ec:
    // 0x1256ec: 0xae020004
    ctx->pc = 0x1256ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1256f0:
    // 0x1256f0: 0x10000003
label_1256f4:
    if (ctx->pc == 0x1256F4u) {
        ctx->pc = 0x1256F4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1256F8u;
        goto label_1256f8;
    }
    ctx->pc = 0x1256F0u;
    {
        const bool branch_taken_0x1256f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1256F4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1256f0) {
            ctx->pc = 0x125700u;
            goto label_125700;
        }
    }
    ctx->pc = 0x1256F8u;
label_1256f8:
    // 0x1256f8: 0x8e030004
    ctx->pc = 0x1256f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1256fc:
    // 0x1256fc: 0x24020002
    ctx->pc = 0x1256fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_125700:
    // 0x125700: 0x54620014
label_125704:
    if (ctx->pc == 0x125704u) {
        ctx->pc = 0x125704u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x125708u;
        goto label_125708;
    }
    ctx->pc = 0x125700u;
    {
        const bool branch_taken_0x125700 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x125700) {
            ctx->pc = 0x125704u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x125754u;
            goto label_125754;
        }
    }
    ctx->pc = 0x125708u;
label_125708:
    // 0x125708: 0xc04d41e
label_12570c:
    if (ctx->pc == 0x12570Cu) {
        ctx->pc = 0x12570Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x125710u;
        goto label_125710;
    }
    ctx->pc = 0x125708u;
    SET_GPR_U32(ctx, 31, 0x125710u);
    ctx->pc = 0x12570Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x135078u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135078_0x135078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125710u; }
    }
    if (ctx->pc != 0x125710u) { return; }
    ctx->pc = 0x125710u;
label_125710:
    // 0x125710: 0xc04d3e6
label_125714:
    if (ctx->pc == 0x125714u) {
        ctx->pc = 0x125714u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x125718u;
        goto label_125718;
    }
    ctx->pc = 0x125710u;
    SET_GPR_U32(ctx, 31, 0x125718u);
    ctx->pc = 0x125714u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x134F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00134F98_0x134f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125718u; }
    }
    if (ctx->pc != 0x125718u) { return; }
    ctx->pc = 0x125718u;
label_125718:
    // 0x125718: 0x40882d
    ctx->pc = 0x125718u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12571c:
    // 0x12571c: 0x24020003
    ctx->pc = 0x12571cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_125720:
    // 0x125720: 0x1622000b
label_125724:
    if (ctx->pc == 0x125724u) {
        ctx->pc = 0x125724u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x125728u;
        goto label_125728;
    }
    ctx->pc = 0x125720u;
    {
        const bool branch_taken_0x125720 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x125724u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x125720) {
            ctx->pc = 0x125750u;
            goto label_125750;
        }
    }
    ctx->pc = 0x125728u;
label_125728:
    // 0x125728: 0xc049546
label_12572c:
    if (ctx->pc == 0x12572Cu) {
        ctx->pc = 0x125730u;
        goto label_125730;
    }
    ctx->pc = 0x125728u;
    SET_GPR_U32(ctx, 31, 0x125730u);
    ctx->pc = 0x125518u;
    goto label_125518;
    ctx->pc = 0x125730u;
label_125730:
    // 0x125730: 0xc04d412
label_125734:
    if (ctx->pc == 0x125734u) {
        ctx->pc = 0x125734u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x125738u;
        goto label_125738;
    }
    ctx->pc = 0x125730u;
    SET_GPR_U32(ctx, 31, 0x125738u);
    ctx->pc = 0x125734u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x135048u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135048_0x135048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125738u; }
    }
    if (ctx->pc != 0x125738u) { return; }
    ctx->pc = 0x125738u;
label_125738:
    // 0x125738: 0x8e020080
    ctx->pc = 0x125738u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_12573c:
    // 0x12573c: 0x8e040084
    ctx->pc = 0x12573cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_125740:
    // 0x125740: 0x8e050094
    ctx->pc = 0x125740u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_125744:
    // 0x125744: 0x40f809
label_125748:
    if (ctx->pc == 0x125748u) {
        ctx->pc = 0x125748u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = 0x12574Cu;
        goto label_12574c;
    }
    ctx->pc = 0x125744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12574Cu);
        ctx->pc = 0x125748u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125518u: goto label_125518;
            case 0x12551Cu: goto label_12551c;
            case 0x125520u: goto label_125520;
            case 0x125524u: goto label_125524;
            case 0x125528u: goto label_125528;
            case 0x12552Cu: goto label_12552c;
            case 0x125530u: goto label_125530;
            case 0x125534u: goto label_125534;
            case 0x125538u: goto label_125538;
            case 0x12553Cu: goto label_12553c;
            case 0x125540u: goto label_125540;
            case 0x125544u: goto label_125544;
            case 0x125548u: goto label_125548;
            case 0x12554Cu: goto label_12554c;
            case 0x125550u: goto label_125550;
            case 0x125554u: goto label_125554;
            case 0x125558u: goto label_125558;
            case 0x12555Cu: goto label_12555c;
            case 0x125560u: goto label_125560;
            case 0x125564u: goto label_125564;
            case 0x125568u: goto label_125568;
            case 0x12556Cu: goto label_12556c;
            case 0x125570u: goto label_125570;
            case 0x125574u: goto label_125574;
            case 0x125578u: goto label_125578;
            case 0x12557Cu: goto label_12557c;
            case 0x125580u: goto label_125580;
            case 0x125584u: goto label_125584;
            case 0x125588u: goto label_125588;
            case 0x12558Cu: goto label_12558c;
            case 0x125590u: goto label_125590;
            case 0x125594u: goto label_125594;
            case 0x125598u: goto label_125598;
            case 0x12559Cu: goto label_12559c;
            case 0x1255A0u: goto label_1255a0;
            case 0x1255A4u: goto label_1255a4;
            case 0x1255A8u: goto label_1255a8;
            case 0x1255ACu: goto label_1255ac;
            case 0x1255B0u: goto label_1255b0;
            case 0x1255B4u: goto label_1255b4;
            case 0x1255B8u: goto label_1255b8;
            case 0x1255BCu: goto label_1255bc;
            case 0x1255C0u: goto label_1255c0;
            case 0x1255C4u: goto label_1255c4;
            case 0x1255C8u: goto label_1255c8;
            case 0x1255CCu: goto label_1255cc;
            case 0x1255D0u: goto label_1255d0;
            case 0x1255D4u: goto label_1255d4;
            case 0x1255D8u: goto label_1255d8;
            case 0x1255DCu: goto label_1255dc;
            case 0x1255E0u: goto label_1255e0;
            case 0x1255E4u: goto label_1255e4;
            case 0x1255E8u: goto label_1255e8;
            case 0x1255ECu: goto label_1255ec;
            case 0x1255F0u: goto label_1255f0;
            case 0x1255F4u: goto label_1255f4;
            case 0x1255F8u: goto label_1255f8;
            case 0x1255FCu: goto label_1255fc;
            case 0x125600u: goto label_125600;
            case 0x125604u: goto label_125604;
            case 0x125608u: goto label_125608;
            case 0x12560Cu: goto label_12560c;
            case 0x125610u: goto label_125610;
            case 0x125614u: goto label_125614;
            case 0x125618u: goto label_125618;
            case 0x12561Cu: goto label_12561c;
            case 0x125620u: goto label_125620;
            case 0x125624u: goto label_125624;
            case 0x125628u: goto label_125628;
            case 0x12562Cu: goto label_12562c;
            case 0x125630u: goto label_125630;
            case 0x125634u: goto label_125634;
            case 0x125638u: goto label_125638;
            case 0x12563Cu: goto label_12563c;
            case 0x125640u: goto label_125640;
            case 0x125644u: goto label_125644;
            case 0x125648u: goto label_125648;
            case 0x12564Cu: goto label_12564c;
            case 0x125650u: goto label_125650;
            case 0x125654u: goto label_125654;
            case 0x125658u: goto label_125658;
            case 0x12565Cu: goto label_12565c;
            case 0x125660u: goto label_125660;
            case 0x125664u: goto label_125664;
            case 0x125668u: goto label_125668;
            case 0x12566Cu: goto label_12566c;
            case 0x125670u: goto label_125670;
            case 0x125674u: goto label_125674;
            case 0x125678u: goto label_125678;
            case 0x12567Cu: goto label_12567c;
            case 0x125680u: goto label_125680;
            case 0x125684u: goto label_125684;
            case 0x125688u: goto label_125688;
            case 0x12568Cu: goto label_12568c;
            case 0x125690u: goto label_125690;
            case 0x125694u: goto label_125694;
            case 0x125698u: goto label_125698;
            case 0x12569Cu: goto label_12569c;
            case 0x1256A0u: goto label_1256a0;
            case 0x1256A4u: goto label_1256a4;
            case 0x1256A8u: goto label_1256a8;
            case 0x1256ACu: goto label_1256ac;
            case 0x1256B0u: goto label_1256b0;
            case 0x1256B4u: goto label_1256b4;
            case 0x1256B8u: goto label_1256b8;
            case 0x1256BCu: goto label_1256bc;
            case 0x1256C0u: goto label_1256c0;
            case 0x1256C4u: goto label_1256c4;
            case 0x1256C8u: goto label_1256c8;
            case 0x1256CCu: goto label_1256cc;
            case 0x1256D0u: goto label_1256d0;
            case 0x1256D4u: goto label_1256d4;
            case 0x1256D8u: goto label_1256d8;
            case 0x1256DCu: goto label_1256dc;
            case 0x1256E0u: goto label_1256e0;
            case 0x1256E4u: goto label_1256e4;
            case 0x1256E8u: goto label_1256e8;
            case 0x1256ECu: goto label_1256ec;
            case 0x1256F0u: goto label_1256f0;
            case 0x1256F4u: goto label_1256f4;
            case 0x1256F8u: goto label_1256f8;
            case 0x1256FCu: goto label_1256fc;
            case 0x125700u: goto label_125700;
            case 0x125704u: goto label_125704;
            case 0x125708u: goto label_125708;
            case 0x12570Cu: goto label_12570c;
            case 0x125710u: goto label_125710;
            case 0x125714u: goto label_125714;
            case 0x125718u: goto label_125718;
            case 0x12571Cu: goto label_12571c;
            case 0x125720u: goto label_125720;
            case 0x125724u: goto label_125724;
            case 0x125728u: goto label_125728;
            case 0x12572Cu: goto label_12572c;
            case 0x125730u: goto label_125730;
            case 0x125734u: goto label_125734;
            case 0x125738u: goto label_125738;
            case 0x12573Cu: goto label_12573c;
            case 0x125740u: goto label_125740;
            case 0x125744u: goto label_125744;
            case 0x125748u: goto label_125748;
            case 0x12574Cu: goto label_12574c;
            case 0x125750u: goto label_125750;
            case 0x125754u: goto label_125754;
            case 0x125758u: goto label_125758;
            case 0x12575Cu: goto label_12575c;
            case 0x125760u: goto label_125760;
            case 0x125764u: goto label_125764;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12574Cu; }
            if (ctx->pc != 0x12574Cu) { return; }
        }
    }
    ctx->pc = 0x12574Cu;
label_12574c:
    // 0x12574c: 0xae110004
    ctx->pc = 0x12574cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_125750:
    // 0x125750: 0xdfb00000
    ctx->pc = 0x125750u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_125754:
    // 0x125754: 0xdfb10008
    ctx->pc = 0x125754u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_125758:
    // 0x125758: 0xdfbf0010
    ctx->pc = 0x125758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12575c:
    // 0x12575c: 0x3e00008
label_125760:
    if (ctx->pc == 0x125760u) {
        ctx->pc = 0x125760u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x125764u;
        goto label_125764;
    }
    ctx->pc = 0x12575Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125760u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125518u: goto label_125518;
            case 0x12551Cu: goto label_12551c;
            case 0x125520u: goto label_125520;
            case 0x125524u: goto label_125524;
            case 0x125528u: goto label_125528;
            case 0x12552Cu: goto label_12552c;
            case 0x125530u: goto label_125530;
            case 0x125534u: goto label_125534;
            case 0x125538u: goto label_125538;
            case 0x12553Cu: goto label_12553c;
            case 0x125540u: goto label_125540;
            case 0x125544u: goto label_125544;
            case 0x125548u: goto label_125548;
            case 0x12554Cu: goto label_12554c;
            case 0x125550u: goto label_125550;
            case 0x125554u: goto label_125554;
            case 0x125558u: goto label_125558;
            case 0x12555Cu: goto label_12555c;
            case 0x125560u: goto label_125560;
            case 0x125564u: goto label_125564;
            case 0x125568u: goto label_125568;
            case 0x12556Cu: goto label_12556c;
            case 0x125570u: goto label_125570;
            case 0x125574u: goto label_125574;
            case 0x125578u: goto label_125578;
            case 0x12557Cu: goto label_12557c;
            case 0x125580u: goto label_125580;
            case 0x125584u: goto label_125584;
            case 0x125588u: goto label_125588;
            case 0x12558Cu: goto label_12558c;
            case 0x125590u: goto label_125590;
            case 0x125594u: goto label_125594;
            case 0x125598u: goto label_125598;
            case 0x12559Cu: goto label_12559c;
            case 0x1255A0u: goto label_1255a0;
            case 0x1255A4u: goto label_1255a4;
            case 0x1255A8u: goto label_1255a8;
            case 0x1255ACu: goto label_1255ac;
            case 0x1255B0u: goto label_1255b0;
            case 0x1255B4u: goto label_1255b4;
            case 0x1255B8u: goto label_1255b8;
            case 0x1255BCu: goto label_1255bc;
            case 0x1255C0u: goto label_1255c0;
            case 0x1255C4u: goto label_1255c4;
            case 0x1255C8u: goto label_1255c8;
            case 0x1255CCu: goto label_1255cc;
            case 0x1255D0u: goto label_1255d0;
            case 0x1255D4u: goto label_1255d4;
            case 0x1255D8u: goto label_1255d8;
            case 0x1255DCu: goto label_1255dc;
            case 0x1255E0u: goto label_1255e0;
            case 0x1255E4u: goto label_1255e4;
            case 0x1255E8u: goto label_1255e8;
            case 0x1255ECu: goto label_1255ec;
            case 0x1255F0u: goto label_1255f0;
            case 0x1255F4u: goto label_1255f4;
            case 0x1255F8u: goto label_1255f8;
            case 0x1255FCu: goto label_1255fc;
            case 0x125600u: goto label_125600;
            case 0x125604u: goto label_125604;
            case 0x125608u: goto label_125608;
            case 0x12560Cu: goto label_12560c;
            case 0x125610u: goto label_125610;
            case 0x125614u: goto label_125614;
            case 0x125618u: goto label_125618;
            case 0x12561Cu: goto label_12561c;
            case 0x125620u: goto label_125620;
            case 0x125624u: goto label_125624;
            case 0x125628u: goto label_125628;
            case 0x12562Cu: goto label_12562c;
            case 0x125630u: goto label_125630;
            case 0x125634u: goto label_125634;
            case 0x125638u: goto label_125638;
            case 0x12563Cu: goto label_12563c;
            case 0x125640u: goto label_125640;
            case 0x125644u: goto label_125644;
            case 0x125648u: goto label_125648;
            case 0x12564Cu: goto label_12564c;
            case 0x125650u: goto label_125650;
            case 0x125654u: goto label_125654;
            case 0x125658u: goto label_125658;
            case 0x12565Cu: goto label_12565c;
            case 0x125660u: goto label_125660;
            case 0x125664u: goto label_125664;
            case 0x125668u: goto label_125668;
            case 0x12566Cu: goto label_12566c;
            case 0x125670u: goto label_125670;
            case 0x125674u: goto label_125674;
            case 0x125678u: goto label_125678;
            case 0x12567Cu: goto label_12567c;
            case 0x125680u: goto label_125680;
            case 0x125684u: goto label_125684;
            case 0x125688u: goto label_125688;
            case 0x12568Cu: goto label_12568c;
            case 0x125690u: goto label_125690;
            case 0x125694u: goto label_125694;
            case 0x125698u: goto label_125698;
            case 0x12569Cu: goto label_12569c;
            case 0x1256A0u: goto label_1256a0;
            case 0x1256A4u: goto label_1256a4;
            case 0x1256A8u: goto label_1256a8;
            case 0x1256ACu: goto label_1256ac;
            case 0x1256B0u: goto label_1256b0;
            case 0x1256B4u: goto label_1256b4;
            case 0x1256B8u: goto label_1256b8;
            case 0x1256BCu: goto label_1256bc;
            case 0x1256C0u: goto label_1256c0;
            case 0x1256C4u: goto label_1256c4;
            case 0x1256C8u: goto label_1256c8;
            case 0x1256CCu: goto label_1256cc;
            case 0x1256D0u: goto label_1256d0;
            case 0x1256D4u: goto label_1256d4;
            case 0x1256D8u: goto label_1256d8;
            case 0x1256DCu: goto label_1256dc;
            case 0x1256E0u: goto label_1256e0;
            case 0x1256E4u: goto label_1256e4;
            case 0x1256E8u: goto label_1256e8;
            case 0x1256ECu: goto label_1256ec;
            case 0x1256F0u: goto label_1256f0;
            case 0x1256F4u: goto label_1256f4;
            case 0x1256F8u: goto label_1256f8;
            case 0x1256FCu: goto label_1256fc;
            case 0x125700u: goto label_125700;
            case 0x125704u: goto label_125704;
            case 0x125708u: goto label_125708;
            case 0x12570Cu: goto label_12570c;
            case 0x125710u: goto label_125710;
            case 0x125714u: goto label_125714;
            case 0x125718u: goto label_125718;
            case 0x12571Cu: goto label_12571c;
            case 0x125720u: goto label_125720;
            case 0x125724u: goto label_125724;
            case 0x125728u: goto label_125728;
            case 0x12572Cu: goto label_12572c;
            case 0x125730u: goto label_125730;
            case 0x125734u: goto label_125734;
            case 0x125738u: goto label_125738;
            case 0x12573Cu: goto label_12573c;
            case 0x125740u: goto label_125740;
            case 0x125744u: goto label_125744;
            case 0x125748u: goto label_125748;
            case 0x12574Cu: goto label_12574c;
            case 0x125750u: goto label_125750;
            case 0x125754u: goto label_125754;
            case 0x125758u: goto label_125758;
            case 0x12575Cu: goto label_12575c;
            case 0x125760u: goto label_125760;
            case 0x125764u: goto label_125764;
            default: break;
        }
        return;
    }
    ctx->pc = 0x125764u;
label_125764:
    // 0x125764: 0x0
    ctx->pc = 0x125764u;
    // NOP
}
