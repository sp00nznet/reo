#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001234D8
// Address: 0x1234d8 - 0x123a40
void sub_001234D8_0x1234d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1234d8u;

label_1234d8:
    // 0x1234d8: 0x27bdffb0
    ctx->pc = 0x1234d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_1234dc:
    // 0x1234dc: 0x28a21000
    ctx->pc = 0x1234dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4096));
label_1234e0:
    // 0x1234e0: 0xffb00010
    ctx->pc = 0x1234e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1234e4:
    // 0x1234e4: 0x80802d
    ctx->pc = 0x1234e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1234e8:
    // 0x1234e8: 0xffb10018
    ctx->pc = 0x1234e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1234ec:
    // 0x1234ec: 0xc0882d
    ctx->pc = 0x1234ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1234f0:
    // 0x1234f0: 0xffb20020
    ctx->pc = 0x1234f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1234f4:
    // 0x1234f4: 0x140902d
    ctx->pc = 0x1234f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1234f8:
    // 0x1234f8: 0xffb30028
    ctx->pc = 0x1234f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1234fc:
    // 0x1234fc: 0x160982d
    ctx->pc = 0x1234fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_123500:
    // 0x123500: 0xffb40030
    ctx->pc = 0x123500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_123504:
    // 0x123504: 0x100a02d
    ctx->pc = 0x123504u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_123508:
    // 0x123508: 0xffb50038
    ctx->pc = 0x123508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_12350c:
    // 0x12350c: 0xe0a82d
    ctx->pc = 0x12350cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_123510:
    // 0x123510: 0xffb60040
    ctx->pc = 0x123510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_123514:
    // 0x123514: 0x120b02d
    ctx->pc = 0x123514u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_123518:
    // 0x123518: 0xffbf0048
    ctx->pc = 0x123518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_12351c:
    // 0x12351c: 0x3a0282d
    ctx->pc = 0x12351cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_123520:
    // 0x123520: 0x27a60004
    ctx->pc = 0x123520u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
label_123524:
    // 0x123524: 0x27a8000c
    ctx->pc = 0x123524u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 12));
label_123528:
    // 0x123528: 0x10400005
label_12352c:
    if (ctx->pc == 0x12352Cu) {
        ctx->pc = 0x12352Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 8));
        ctx->pc = 0x123530u;
        goto label_123530;
    }
    ctx->pc = 0x123528u;
    {
        const bool branch_taken_0x123528 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12352Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 8));
        if (branch_taken_0x123528) {
            ctx->pc = 0x123540u;
            goto label_123540;
        }
    }
    ctx->pc = 0x123530u;
label_123530:
    // 0x123530: 0xa6200000
    ctx->pc = 0x123530u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
label_123534:
    // 0x123534: 0x10000022
label_123538:
    if (ctx->pc == 0x123538u) {
        ctx->pc = 0x123538u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x12353Cu;
        goto label_12353c;
    }
    ctx->pc = 0x123534u;
    {
        const bool branch_taken_0x123534 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x123538u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x123534) {
            ctx->pc = 0x1235C0u;
            goto label_1235c0;
        }
    }
    ctx->pc = 0x12353Cu;
label_12353c:
    // 0x12353c: 0x0
    ctx->pc = 0x12353cu;
    // NOP
label_123540:
    // 0x123540: 0xc048c38
label_123544:
    if (ctx->pc == 0x123544u) {
        ctx->pc = 0x123548u;
        goto label_123548;
    }
    ctx->pc = 0x123540u;
    SET_GPR_U32(ctx, 31, 0x123548u);
    ctx->pc = 0x1230E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001230E0_0x1230e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123548u; }
    }
    if (ctx->pc != 0x123548u) { return; }
    ctx->pc = 0x123548u;
label_123548:
    // 0x123548: 0x40182d
    ctx->pc = 0x123548u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12354c:
    // 0x12354c: 0x1060001c
label_123550:
    if (ctx->pc == 0x123550u) {
        ctx->pc = 0x123550u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x123554u;
        goto label_123554;
    }
    ctx->pc = 0x12354Cu;
    {
        const bool branch_taken_0x12354c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x123550u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x12354c) {
            ctx->pc = 0x1235C0u;
            goto label_1235c0;
        }
    }
    ctx->pc = 0x123554u;
label_123554:
    // 0x123554: 0x701823
    ctx->pc = 0x123554u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_123558:
    // 0x123558: 0x32400
    ctx->pc = 0x123558u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 16));
label_12355c:
    // 0x12355c: 0x18800018
label_123560:
    if (ctx->pc == 0x123560u) {
        ctx->pc = 0x123560u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x123564u;
        goto label_123564;
    }
    ctx->pc = 0x12355Cu;
    {
        const bool branch_taken_0x12355c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x123560u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x12355c) {
            ctx->pc = 0x1235C0u;
            goto label_1235c0;
        }
    }
    ctx->pc = 0x123564u;
label_123564:
    // 0x123564: 0x93a30004
    ctx->pc = 0x123564u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
label_123568:
    // 0x123568: 0x2407ffff
    ctx->pc = 0x123568u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
label_12356c:
    // 0x12356c: 0x8fa60000
    ctx->pc = 0x12356cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_123570:
    // 0x123570: 0x24080001
    ctx->pc = 0x123570u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
label_123574:
    // 0x123574: 0x93a40008
    ctx->pc = 0x123574u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
label_123578:
    // 0x123578: 0x102d
    ctx->pc = 0x123578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12357c:
    // 0x12357c: 0xae660000
    ctx->pc = 0x12357cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
label_123580:
    // 0x123580: 0x8fa5000c
    ctx->pc = 0x123580u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_123584:
    // 0x123584: 0xa2430000
    ctx->pc = 0x123584u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
label_123588:
    // 0x123588: 0xa2840000
    ctx->pc = 0x123588u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 4));
label_12358c:
    // 0x12358c: 0x8fa30050
    ctx->pc = 0x12358cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_123590:
    // 0x123590: 0xac650000
    ctx->pc = 0x123590u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_123594:
    // 0x123594: 0xa2a70000
    ctx->pc = 0x123594u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 7));
label_123598:
    // 0x123598: 0x82840000
    ctx->pc = 0x123598u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_12359c:
    // 0x12359c: 0x82430000
    ctx->pc = 0x12359cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_1235a0:
    // 0x1235a0: 0x641818
    ctx->pc = 0x1235a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
label_1235a4:
    // 0x1235a4: 0x28640000
    ctx->pc = 0x1235a4u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 3), 0));
label_1235a8:
    // 0x1235a8: 0x24650007
    ctx->pc = 0x1235a8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 7));
label_1235ac:
    // 0x1235ac: 0xa4180b
    ctx->pc = 0x1235acu;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 5));
label_1235b0:
    // 0x1235b0: 0x8fa40058
    ctx->pc = 0x1235b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1235b4:
    // 0x1235b4: 0x318c3
    ctx->pc = 0x1235b4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_1235b8:
    // 0x1235b8: 0xa2c30000
    ctx->pc = 0x1235b8u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
label_1235bc:
    // 0x1235bc: 0xac880000
    ctx->pc = 0x1235bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
label_1235c0:
    // 0x1235c0: 0xdfb00010
    ctx->pc = 0x1235c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1235c4:
    // 0x1235c4: 0xdfb10018
    ctx->pc = 0x1235c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1235c8:
    // 0x1235c8: 0xdfb20020
    ctx->pc = 0x1235c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1235cc:
    // 0x1235cc: 0xdfb30028
    ctx->pc = 0x1235ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1235d0:
    // 0x1235d0: 0xdfb40030
    ctx->pc = 0x1235d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1235d4:
    // 0x1235d4: 0xdfb50038
    ctx->pc = 0x1235d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1235d8:
    // 0x1235d8: 0xdfb60040
    ctx->pc = 0x1235d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1235dc:
    // 0x1235dc: 0xdfbf0048
    ctx->pc = 0x1235dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1235e0:
    // 0x1235e0: 0x3e00008
label_1235e4:
    if (ctx->pc == 0x1235E4u) {
        ctx->pc = 0x1235E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1235E8u;
        goto label_1235e8;
    }
    ctx->pc = 0x1235E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1235E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1234D8u: goto label_1234d8;
            case 0x1234DCu: goto label_1234dc;
            case 0x1234E0u: goto label_1234e0;
            case 0x1234E4u: goto label_1234e4;
            case 0x1234E8u: goto label_1234e8;
            case 0x1234ECu: goto label_1234ec;
            case 0x1234F0u: goto label_1234f0;
            case 0x1234F4u: goto label_1234f4;
            case 0x1234F8u: goto label_1234f8;
            case 0x1234FCu: goto label_1234fc;
            case 0x123500u: goto label_123500;
            case 0x123504u: goto label_123504;
            case 0x123508u: goto label_123508;
            case 0x12350Cu: goto label_12350c;
            case 0x123510u: goto label_123510;
            case 0x123514u: goto label_123514;
            case 0x123518u: goto label_123518;
            case 0x12351Cu: goto label_12351c;
            case 0x123520u: goto label_123520;
            case 0x123524u: goto label_123524;
            case 0x123528u: goto label_123528;
            case 0x12352Cu: goto label_12352c;
            case 0x123530u: goto label_123530;
            case 0x123534u: goto label_123534;
            case 0x123538u: goto label_123538;
            case 0x12353Cu: goto label_12353c;
            case 0x123540u: goto label_123540;
            case 0x123544u: goto label_123544;
            case 0x123548u: goto label_123548;
            case 0x12354Cu: goto label_12354c;
            case 0x123550u: goto label_123550;
            case 0x123554u: goto label_123554;
            case 0x123558u: goto label_123558;
            case 0x12355Cu: goto label_12355c;
            case 0x123560u: goto label_123560;
            case 0x123564u: goto label_123564;
            case 0x123568u: goto label_123568;
            case 0x12356Cu: goto label_12356c;
            case 0x123570u: goto label_123570;
            case 0x123574u: goto label_123574;
            case 0x123578u: goto label_123578;
            case 0x12357Cu: goto label_12357c;
            case 0x123580u: goto label_123580;
            case 0x123584u: goto label_123584;
            case 0x123588u: goto label_123588;
            case 0x12358Cu: goto label_12358c;
            case 0x123590u: goto label_123590;
            case 0x123594u: goto label_123594;
            case 0x123598u: goto label_123598;
            case 0x12359Cu: goto label_12359c;
            case 0x1235A0u: goto label_1235a0;
            case 0x1235A4u: goto label_1235a4;
            case 0x1235A8u: goto label_1235a8;
            case 0x1235ACu: goto label_1235ac;
            case 0x1235B0u: goto label_1235b0;
            case 0x1235B4u: goto label_1235b4;
            case 0x1235B8u: goto label_1235b8;
            case 0x1235BCu: goto label_1235bc;
            case 0x1235C0u: goto label_1235c0;
            case 0x1235C4u: goto label_1235c4;
            case 0x1235C8u: goto label_1235c8;
            case 0x1235CCu: goto label_1235cc;
            case 0x1235D0u: goto label_1235d0;
            case 0x1235D4u: goto label_1235d4;
            case 0x1235D8u: goto label_1235d8;
            case 0x1235DCu: goto label_1235dc;
            case 0x1235E0u: goto label_1235e0;
            case 0x1235E4u: goto label_1235e4;
            case 0x1235E8u: goto label_1235e8;
            case 0x1235ECu: goto label_1235ec;
            case 0x1235F0u: goto label_1235f0;
            case 0x1235F4u: goto label_1235f4;
            case 0x1235F8u: goto label_1235f8;
            case 0x1235FCu: goto label_1235fc;
            case 0x123600u: goto label_123600;
            case 0x123604u: goto label_123604;
            case 0x123608u: goto label_123608;
            case 0x12360Cu: goto label_12360c;
            case 0x123610u: goto label_123610;
            case 0x123614u: goto label_123614;
            case 0x123618u: goto label_123618;
            case 0x12361Cu: goto label_12361c;
            case 0x123620u: goto label_123620;
            case 0x123624u: goto label_123624;
            case 0x123628u: goto label_123628;
            case 0x12362Cu: goto label_12362c;
            case 0x123630u: goto label_123630;
            case 0x123634u: goto label_123634;
            case 0x123638u: goto label_123638;
            case 0x12363Cu: goto label_12363c;
            case 0x123640u: goto label_123640;
            case 0x123644u: goto label_123644;
            case 0x123648u: goto label_123648;
            case 0x12364Cu: goto label_12364c;
            case 0x123650u: goto label_123650;
            case 0x123654u: goto label_123654;
            case 0x123658u: goto label_123658;
            case 0x12365Cu: goto label_12365c;
            case 0x123660u: goto label_123660;
            case 0x123664u: goto label_123664;
            case 0x123668u: goto label_123668;
            case 0x12366Cu: goto label_12366c;
            case 0x123670u: goto label_123670;
            case 0x123674u: goto label_123674;
            case 0x123678u: goto label_123678;
            case 0x12367Cu: goto label_12367c;
            case 0x123680u: goto label_123680;
            case 0x123684u: goto label_123684;
            case 0x123688u: goto label_123688;
            case 0x12368Cu: goto label_12368c;
            case 0x123690u: goto label_123690;
            case 0x123694u: goto label_123694;
            case 0x123698u: goto label_123698;
            case 0x12369Cu: goto label_12369c;
            case 0x1236A0u: goto label_1236a0;
            case 0x1236A4u: goto label_1236a4;
            case 0x1236A8u: goto label_1236a8;
            case 0x1236ACu: goto label_1236ac;
            case 0x1236B0u: goto label_1236b0;
            case 0x1236B4u: goto label_1236b4;
            case 0x1236B8u: goto label_1236b8;
            case 0x1236BCu: goto label_1236bc;
            case 0x1236C0u: goto label_1236c0;
            case 0x1236C4u: goto label_1236c4;
            case 0x1236C8u: goto label_1236c8;
            case 0x1236CCu: goto label_1236cc;
            case 0x1236D0u: goto label_1236d0;
            case 0x1236D4u: goto label_1236d4;
            case 0x1236D8u: goto label_1236d8;
            case 0x1236DCu: goto label_1236dc;
            case 0x1236E0u: goto label_1236e0;
            case 0x1236E4u: goto label_1236e4;
            case 0x1236E8u: goto label_1236e8;
            case 0x1236ECu: goto label_1236ec;
            case 0x1236F0u: goto label_1236f0;
            case 0x1236F4u: goto label_1236f4;
            case 0x1236F8u: goto label_1236f8;
            case 0x1236FCu: goto label_1236fc;
            case 0x123700u: goto label_123700;
            case 0x123704u: goto label_123704;
            case 0x123708u: goto label_123708;
            case 0x12370Cu: goto label_12370c;
            case 0x123710u: goto label_123710;
            case 0x123714u: goto label_123714;
            case 0x123718u: goto label_123718;
            case 0x12371Cu: goto label_12371c;
            case 0x123720u: goto label_123720;
            case 0x123724u: goto label_123724;
            case 0x123728u: goto label_123728;
            case 0x12372Cu: goto label_12372c;
            case 0x123730u: goto label_123730;
            case 0x123734u: goto label_123734;
            case 0x123738u: goto label_123738;
            case 0x12373Cu: goto label_12373c;
            case 0x123740u: goto label_123740;
            case 0x123744u: goto label_123744;
            case 0x123748u: goto label_123748;
            case 0x12374Cu: goto label_12374c;
            case 0x123750u: goto label_123750;
            case 0x123754u: goto label_123754;
            case 0x123758u: goto label_123758;
            case 0x12375Cu: goto label_12375c;
            case 0x123760u: goto label_123760;
            case 0x123764u: goto label_123764;
            case 0x123768u: goto label_123768;
            case 0x12376Cu: goto label_12376c;
            case 0x123770u: goto label_123770;
            case 0x123774u: goto label_123774;
            case 0x123778u: goto label_123778;
            case 0x12377Cu: goto label_12377c;
            case 0x123780u: goto label_123780;
            case 0x123784u: goto label_123784;
            case 0x123788u: goto label_123788;
            case 0x12378Cu: goto label_12378c;
            case 0x123790u: goto label_123790;
            case 0x123794u: goto label_123794;
            case 0x123798u: goto label_123798;
            case 0x12379Cu: goto label_12379c;
            case 0x1237A0u: goto label_1237a0;
            case 0x1237A4u: goto label_1237a4;
            case 0x1237A8u: goto label_1237a8;
            case 0x1237ACu: goto label_1237ac;
            case 0x1237B0u: goto label_1237b0;
            case 0x1237B4u: goto label_1237b4;
            case 0x1237B8u: goto label_1237b8;
            case 0x1237BCu: goto label_1237bc;
            case 0x1237C0u: goto label_1237c0;
            case 0x1237C4u: goto label_1237c4;
            case 0x1237C8u: goto label_1237c8;
            case 0x1237CCu: goto label_1237cc;
            case 0x1237D0u: goto label_1237d0;
            case 0x1237D4u: goto label_1237d4;
            case 0x1237D8u: goto label_1237d8;
            case 0x1237DCu: goto label_1237dc;
            case 0x1237E0u: goto label_1237e0;
            case 0x1237E4u: goto label_1237e4;
            case 0x1237E8u: goto label_1237e8;
            case 0x1237ECu: goto label_1237ec;
            case 0x1237F0u: goto label_1237f0;
            case 0x1237F4u: goto label_1237f4;
            case 0x1237F8u: goto label_1237f8;
            case 0x1237FCu: goto label_1237fc;
            case 0x123800u: goto label_123800;
            case 0x123804u: goto label_123804;
            case 0x123808u: goto label_123808;
            case 0x12380Cu: goto label_12380c;
            case 0x123810u: goto label_123810;
            case 0x123814u: goto label_123814;
            case 0x123818u: goto label_123818;
            case 0x12381Cu: goto label_12381c;
            case 0x123820u: goto label_123820;
            case 0x123824u: goto label_123824;
            case 0x123828u: goto label_123828;
            case 0x12382Cu: goto label_12382c;
            case 0x123830u: goto label_123830;
            case 0x123834u: goto label_123834;
            case 0x123838u: goto label_123838;
            case 0x12383Cu: goto label_12383c;
            case 0x123840u: goto label_123840;
            case 0x123844u: goto label_123844;
            case 0x123848u: goto label_123848;
            case 0x12384Cu: goto label_12384c;
            case 0x123850u: goto label_123850;
            case 0x123854u: goto label_123854;
            case 0x123858u: goto label_123858;
            case 0x12385Cu: goto label_12385c;
            case 0x123860u: goto label_123860;
            case 0x123864u: goto label_123864;
            case 0x123868u: goto label_123868;
            case 0x12386Cu: goto label_12386c;
            case 0x123870u: goto label_123870;
            case 0x123874u: goto label_123874;
            case 0x123878u: goto label_123878;
            case 0x12387Cu: goto label_12387c;
            case 0x123880u: goto label_123880;
            case 0x123884u: goto label_123884;
            case 0x123888u: goto label_123888;
            case 0x12388Cu: goto label_12388c;
            case 0x123890u: goto label_123890;
            case 0x123894u: goto label_123894;
            case 0x123898u: goto label_123898;
            case 0x12389Cu: goto label_12389c;
            case 0x1238A0u: goto label_1238a0;
            case 0x1238A4u: goto label_1238a4;
            case 0x1238A8u: goto label_1238a8;
            case 0x1238ACu: goto label_1238ac;
            case 0x1238B0u: goto label_1238b0;
            case 0x1238B4u: goto label_1238b4;
            case 0x1238B8u: goto label_1238b8;
            case 0x1238BCu: goto label_1238bc;
            case 0x1238C0u: goto label_1238c0;
            case 0x1238C4u: goto label_1238c4;
            case 0x1238C8u: goto label_1238c8;
            case 0x1238CCu: goto label_1238cc;
            case 0x1238D0u: goto label_1238d0;
            case 0x1238D4u: goto label_1238d4;
            case 0x1238D8u: goto label_1238d8;
            case 0x1238DCu: goto label_1238dc;
            case 0x1238E0u: goto label_1238e0;
            case 0x1238E4u: goto label_1238e4;
            case 0x1238E8u: goto label_1238e8;
            case 0x1238ECu: goto label_1238ec;
            case 0x1238F0u: goto label_1238f0;
            case 0x1238F4u: goto label_1238f4;
            case 0x1238F8u: goto label_1238f8;
            case 0x1238FCu: goto label_1238fc;
            case 0x123900u: goto label_123900;
            case 0x123904u: goto label_123904;
            case 0x123908u: goto label_123908;
            case 0x12390Cu: goto label_12390c;
            case 0x123910u: goto label_123910;
            case 0x123914u: goto label_123914;
            case 0x123918u: goto label_123918;
            case 0x12391Cu: goto label_12391c;
            case 0x123920u: goto label_123920;
            case 0x123924u: goto label_123924;
            case 0x123928u: goto label_123928;
            case 0x12392Cu: goto label_12392c;
            case 0x123930u: goto label_123930;
            case 0x123934u: goto label_123934;
            case 0x123938u: goto label_123938;
            case 0x12393Cu: goto label_12393c;
            case 0x123940u: goto label_123940;
            case 0x123944u: goto label_123944;
            case 0x123948u: goto label_123948;
            case 0x12394Cu: goto label_12394c;
            case 0x123950u: goto label_123950;
            case 0x123954u: goto label_123954;
            case 0x123958u: goto label_123958;
            case 0x12395Cu: goto label_12395c;
            case 0x123960u: goto label_123960;
            case 0x123964u: goto label_123964;
            case 0x123968u: goto label_123968;
            case 0x12396Cu: goto label_12396c;
            case 0x123970u: goto label_123970;
            case 0x123974u: goto label_123974;
            case 0x123978u: goto label_123978;
            case 0x12397Cu: goto label_12397c;
            case 0x123980u: goto label_123980;
            case 0x123984u: goto label_123984;
            case 0x123988u: goto label_123988;
            case 0x12398Cu: goto label_12398c;
            case 0x123990u: goto label_123990;
            case 0x123994u: goto label_123994;
            case 0x123998u: goto label_123998;
            case 0x12399Cu: goto label_12399c;
            case 0x1239A0u: goto label_1239a0;
            case 0x1239A4u: goto label_1239a4;
            case 0x1239A8u: goto label_1239a8;
            case 0x1239ACu: goto label_1239ac;
            case 0x1239B0u: goto label_1239b0;
            case 0x1239B4u: goto label_1239b4;
            case 0x1239B8u: goto label_1239b8;
            case 0x1239BCu: goto label_1239bc;
            case 0x1239C0u: goto label_1239c0;
            case 0x1239C4u: goto label_1239c4;
            case 0x1239C8u: goto label_1239c8;
            case 0x1239CCu: goto label_1239cc;
            case 0x1239D0u: goto label_1239d0;
            case 0x1239D4u: goto label_1239d4;
            case 0x1239D8u: goto label_1239d8;
            case 0x1239DCu: goto label_1239dc;
            case 0x1239E0u: goto label_1239e0;
            case 0x1239E4u: goto label_1239e4;
            case 0x1239E8u: goto label_1239e8;
            case 0x1239ECu: goto label_1239ec;
            case 0x1239F0u: goto label_1239f0;
            case 0x1239F4u: goto label_1239f4;
            case 0x1239F8u: goto label_1239f8;
            case 0x1239FCu: goto label_1239fc;
            case 0x123A00u: goto label_123a00;
            case 0x123A04u: goto label_123a04;
            case 0x123A08u: goto label_123a08;
            case 0x123A0Cu: goto label_123a0c;
            case 0x123A10u: goto label_123a10;
            case 0x123A14u: goto label_123a14;
            case 0x123A18u: goto label_123a18;
            case 0x123A1Cu: goto label_123a1c;
            case 0x123A20u: goto label_123a20;
            case 0x123A24u: goto label_123a24;
            case 0x123A28u: goto label_123a28;
            case 0x123A2Cu: goto label_123a2c;
            case 0x123A30u: goto label_123a30;
            case 0x123A34u: goto label_123a34;
            case 0x123A38u: goto label_123a38;
            case 0x123A3Cu: goto label_123a3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1235E8u;
label_1235e8:
    // 0x1235e8: 0x27bdffa0
    ctx->pc = 0x1235e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
label_1235ec:
    // 0x1235ec: 0xffb00020
    ctx->pc = 0x1235ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1235f0:
    // 0x1235f0: 0x80802d
    ctx->pc = 0x1235f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1235f4:
    // 0x1235f4: 0xffb50048
    ctx->pc = 0x1235f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_1235f8:
    // 0x1235f8: 0x24150001
    ctx->pc = 0x1235f8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
label_1235fc:
    // 0x1235fc: 0xffb10028
    ctx->pc = 0x1235fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_123600:
    // 0x123600: 0x2611000e
    ctx->pc = 0x123600u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 14));
label_123604:
    // 0x123604: 0xffb20030
    ctx->pc = 0x123604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_123608:
    // 0x123608: 0x2612000f
    ctx->pc = 0x123608u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 15));
label_12360c:
    // 0x12360c: 0xffb30038
    ctx->pc = 0x12360cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_123610:
    // 0x123610: 0x26130010
    ctx->pc = 0x123610u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 16), 16));
label_123614:
    // 0x123614: 0xffb40040
    ctx->pc = 0x123614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_123618:
    // 0x123618: 0x2614000d
    ctx->pc = 0x123618u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 16), 13));
label_12361c:
    // 0x12361c: 0xffbf0050
    ctx->pc = 0x12361cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_123620:
    // 0x123620: 0xa0202d
    ctx->pc = 0x123620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_123624:
    // 0x123624: 0xa6150002
    ctx->pc = 0x123624u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 21));
label_123628:
    // 0x123628: 0x26020018
    ctx->pc = 0x123628u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 24));
label_12362c:
    // 0x12362c: 0xc0282d
    ctx->pc = 0x12362cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_123630:
    // 0x123630: 0x27a60010
    ctx->pc = 0x123630u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
label_123634:
    // 0x123634: 0x2607000c
    ctx->pc = 0x123634u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 12));
label_123638:
    // 0x123638: 0x280402d
    ctx->pc = 0x123638u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12363c:
    // 0x12363c: 0x240482d
    ctx->pc = 0x12363cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_123640:
    // 0x123640: 0x220502d
    ctx->pc = 0x123640u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_123644:
    // 0x123644: 0x260b0014
    ctx->pc = 0x123644u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 16), 20));
label_123648:
    // 0x123648: 0xafa20000
    ctx->pc = 0x123648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_12364c:
    // 0x12364c: 0xc048d36
label_123650:
    if (ctx->pc == 0x123650u) {
        ctx->pc = 0x123650u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
        ctx->pc = 0x123654u;
        goto label_123654;
    }
    ctx->pc = 0x12364Cu;
    SET_GPR_U32(ctx, 31, 0x123654u);
    ctx->pc = 0x123650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
    ctx->pc = 0x1234D8u;
    goto label_1234d8;
    ctx->pc = 0x123654u;
label_123654:
    // 0x123654: 0x4410004
label_123658:
    if (ctx->pc == 0x123658u) {
        ctx->pc = 0x123658u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x12365Cu;
        goto label_12365c;
    }
    ctx->pc = 0x123654u;
    {
        const bool branch_taken_0x123654 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x123658u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x123654) {
            ctx->pc = 0x123668u;
            goto label_123668;
        }
    }
    ctx->pc = 0x12365Cu;
label_12365c:
    // 0x12365c: 0x1000001f
label_123660:
    if (ctx->pc == 0x123660u) {
        ctx->pc = 0x123660u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x123664u;
        goto label_123664;
    }
    ctx->pc = 0x12365Cu;
    {
        const bool branch_taken_0x12365c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x123660u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12365c) {
            ctx->pc = 0x1236DCu;
            goto label_1236dc;
        }
    }
    ctx->pc = 0x123664u;
label_123664:
    // 0x123664: 0x0
    ctx->pc = 0x123664u;
    // NOP
label_123668:
    // 0x123668: 0xae000034
    ctx->pc = 0x123668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_12366c:
    // 0x12366c: 0xae000030
    ctx->pc = 0x12366cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_123670:
    // 0x123670: 0xae00002c
    ctx->pc = 0x123670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_123674:
    // 0x123674: 0xae000028
    ctx->pc = 0x123674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_123678:
    // 0x123678: 0xae000020
    ctx->pc = 0x123678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_12367c:
    // 0x12367c: 0xa600001c
    ctx->pc = 0x12367cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
label_123680:
    // 0x123680: 0xa6000026
    ctx->pc = 0x123680u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
label_123684:
    // 0x123684: 0xa6000024
    ctx->pc = 0x123684u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
label_123688:
    // 0x123688: 0x8e04003c
    ctx->pc = 0x123688u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_12368c:
    // 0x12368c: 0x82220000
    ctx->pc = 0x12368cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_123690:
    // 0x123690: 0x8e050040
    ctx->pc = 0x123690u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_123694:
    // 0x123694: 0xae020050
    ctx->pc = 0x123694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_123698:
    // 0x123698: 0x24020003
    ctx->pc = 0x123698u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_12369c:
    // 0x12369c: 0x8e060044
    ctx->pc = 0x12369cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1236a0:
    // 0x1236a0: 0x82430000
    ctx->pc = 0x1236a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_1236a4:
    // 0x1236a4: 0xae04005c
    ctx->pc = 0x1236a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
label_1236a8:
    // 0x1236a8: 0xae030054
    ctx->pc = 0x1236a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_1236ac:
    // 0x1236ac: 0xa6020098
    ctx->pc = 0x1236acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 2));
label_1236b0:
    // 0x1236b0: 0x8e630000
    ctx->pc = 0x1236b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1236b4:
    // 0x1236b4: 0xae050060
    ctx->pc = 0x1236b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 5));
label_1236b8:
    // 0x1236b8: 0xae030058
    ctx->pc = 0x1236b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
label_1236bc:
    // 0x1236bc: 0xae060064
    ctx->pc = 0x1236bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 6));
label_1236c0:
    // 0x1236c0: 0xae00008c
    ctx->pc = 0x1236c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
label_1236c4:
    // 0x1236c4: 0xae000088
    ctx->pc = 0x1236c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_1236c8:
    // 0x1236c8: 0x82820000
    ctx->pc = 0x1236c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_1236cc:
    // 0x1236cc: 0x54470002
label_1236d0:
    if (ctx->pc == 0x1236D0u) {
        ctx->pc = 0x1236D0u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 154), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1236D4u;
        goto label_1236d4;
    }
    ctx->pc = 0x1236CCu;
    {
        const bool branch_taken_0x1236cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 7));
        if (branch_taken_0x1236cc) {
            ctx->pc = 0x1236D0u;
            WRITE16(ADD32(GPR_U32(ctx, 16), 154), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x1236D8u;
            goto label_1236d8;
        }
    }
    ctx->pc = 0x1236D4u;
label_1236d4:
    // 0x1236d4: 0xa615009a
    ctx->pc = 0x1236d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 154), (uint16_t)GPR_U32(ctx, 21));
label_1236d8:
    // 0x1236d8: 0x87a20010
    ctx->pc = 0x1236d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
label_1236dc:
    // 0x1236dc: 0xdfb00020
    ctx->pc = 0x1236dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1236e0:
    // 0x1236e0: 0xdfb10028
    ctx->pc = 0x1236e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1236e4:
    // 0x1236e4: 0xdfb20030
    ctx->pc = 0x1236e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1236e8:
    // 0x1236e8: 0xdfb30038
    ctx->pc = 0x1236e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1236ec:
    // 0x1236ec: 0xdfb40040
    ctx->pc = 0x1236ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1236f0:
    // 0x1236f0: 0xdfb50048
    ctx->pc = 0x1236f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1236f4:
    // 0x1236f4: 0xdfbf0050
    ctx->pc = 0x1236f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1236f8:
    // 0x1236f8: 0x3e00008
label_1236fc:
    if (ctx->pc == 0x1236FCu) {
        ctx->pc = 0x1236FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x123700u;
        goto label_123700;
    }
    ctx->pc = 0x1236F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1236FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1234D8u: goto label_1234d8;
            case 0x1234DCu: goto label_1234dc;
            case 0x1234E0u: goto label_1234e0;
            case 0x1234E4u: goto label_1234e4;
            case 0x1234E8u: goto label_1234e8;
            case 0x1234ECu: goto label_1234ec;
            case 0x1234F0u: goto label_1234f0;
            case 0x1234F4u: goto label_1234f4;
            case 0x1234F8u: goto label_1234f8;
            case 0x1234FCu: goto label_1234fc;
            case 0x123500u: goto label_123500;
            case 0x123504u: goto label_123504;
            case 0x123508u: goto label_123508;
            case 0x12350Cu: goto label_12350c;
            case 0x123510u: goto label_123510;
            case 0x123514u: goto label_123514;
            case 0x123518u: goto label_123518;
            case 0x12351Cu: goto label_12351c;
            case 0x123520u: goto label_123520;
            case 0x123524u: goto label_123524;
            case 0x123528u: goto label_123528;
            case 0x12352Cu: goto label_12352c;
            case 0x123530u: goto label_123530;
            case 0x123534u: goto label_123534;
            case 0x123538u: goto label_123538;
            case 0x12353Cu: goto label_12353c;
            case 0x123540u: goto label_123540;
            case 0x123544u: goto label_123544;
            case 0x123548u: goto label_123548;
            case 0x12354Cu: goto label_12354c;
            case 0x123550u: goto label_123550;
            case 0x123554u: goto label_123554;
            case 0x123558u: goto label_123558;
            case 0x12355Cu: goto label_12355c;
            case 0x123560u: goto label_123560;
            case 0x123564u: goto label_123564;
            case 0x123568u: goto label_123568;
            case 0x12356Cu: goto label_12356c;
            case 0x123570u: goto label_123570;
            case 0x123574u: goto label_123574;
            case 0x123578u: goto label_123578;
            case 0x12357Cu: goto label_12357c;
            case 0x123580u: goto label_123580;
            case 0x123584u: goto label_123584;
            case 0x123588u: goto label_123588;
            case 0x12358Cu: goto label_12358c;
            case 0x123590u: goto label_123590;
            case 0x123594u: goto label_123594;
            case 0x123598u: goto label_123598;
            case 0x12359Cu: goto label_12359c;
            case 0x1235A0u: goto label_1235a0;
            case 0x1235A4u: goto label_1235a4;
            case 0x1235A8u: goto label_1235a8;
            case 0x1235ACu: goto label_1235ac;
            case 0x1235B0u: goto label_1235b0;
            case 0x1235B4u: goto label_1235b4;
            case 0x1235B8u: goto label_1235b8;
            case 0x1235BCu: goto label_1235bc;
            case 0x1235C0u: goto label_1235c0;
            case 0x1235C4u: goto label_1235c4;
            case 0x1235C8u: goto label_1235c8;
            case 0x1235CCu: goto label_1235cc;
            case 0x1235D0u: goto label_1235d0;
            case 0x1235D4u: goto label_1235d4;
            case 0x1235D8u: goto label_1235d8;
            case 0x1235DCu: goto label_1235dc;
            case 0x1235E0u: goto label_1235e0;
            case 0x1235E4u: goto label_1235e4;
            case 0x1235E8u: goto label_1235e8;
            case 0x1235ECu: goto label_1235ec;
            case 0x1235F0u: goto label_1235f0;
            case 0x1235F4u: goto label_1235f4;
            case 0x1235F8u: goto label_1235f8;
            case 0x1235FCu: goto label_1235fc;
            case 0x123600u: goto label_123600;
            case 0x123604u: goto label_123604;
            case 0x123608u: goto label_123608;
            case 0x12360Cu: goto label_12360c;
            case 0x123610u: goto label_123610;
            case 0x123614u: goto label_123614;
            case 0x123618u: goto label_123618;
            case 0x12361Cu: goto label_12361c;
            case 0x123620u: goto label_123620;
            case 0x123624u: goto label_123624;
            case 0x123628u: goto label_123628;
            case 0x12362Cu: goto label_12362c;
            case 0x123630u: goto label_123630;
            case 0x123634u: goto label_123634;
            case 0x123638u: goto label_123638;
            case 0x12363Cu: goto label_12363c;
            case 0x123640u: goto label_123640;
            case 0x123644u: goto label_123644;
            case 0x123648u: goto label_123648;
            case 0x12364Cu: goto label_12364c;
            case 0x123650u: goto label_123650;
            case 0x123654u: goto label_123654;
            case 0x123658u: goto label_123658;
            case 0x12365Cu: goto label_12365c;
            case 0x123660u: goto label_123660;
            case 0x123664u: goto label_123664;
            case 0x123668u: goto label_123668;
            case 0x12366Cu: goto label_12366c;
            case 0x123670u: goto label_123670;
            case 0x123674u: goto label_123674;
            case 0x123678u: goto label_123678;
            case 0x12367Cu: goto label_12367c;
            case 0x123680u: goto label_123680;
            case 0x123684u: goto label_123684;
            case 0x123688u: goto label_123688;
            case 0x12368Cu: goto label_12368c;
            case 0x123690u: goto label_123690;
            case 0x123694u: goto label_123694;
            case 0x123698u: goto label_123698;
            case 0x12369Cu: goto label_12369c;
            case 0x1236A0u: goto label_1236a0;
            case 0x1236A4u: goto label_1236a4;
            case 0x1236A8u: goto label_1236a8;
            case 0x1236ACu: goto label_1236ac;
            case 0x1236B0u: goto label_1236b0;
            case 0x1236B4u: goto label_1236b4;
            case 0x1236B8u: goto label_1236b8;
            case 0x1236BCu: goto label_1236bc;
            case 0x1236C0u: goto label_1236c0;
            case 0x1236C4u: goto label_1236c4;
            case 0x1236C8u: goto label_1236c8;
            case 0x1236CCu: goto label_1236cc;
            case 0x1236D0u: goto label_1236d0;
            case 0x1236D4u: goto label_1236d4;
            case 0x1236D8u: goto label_1236d8;
            case 0x1236DCu: goto label_1236dc;
            case 0x1236E0u: goto label_1236e0;
            case 0x1236E4u: goto label_1236e4;
            case 0x1236E8u: goto label_1236e8;
            case 0x1236ECu: goto label_1236ec;
            case 0x1236F0u: goto label_1236f0;
            case 0x1236F4u: goto label_1236f4;
            case 0x1236F8u: goto label_1236f8;
            case 0x1236FCu: goto label_1236fc;
            case 0x123700u: goto label_123700;
            case 0x123704u: goto label_123704;
            case 0x123708u: goto label_123708;
            case 0x12370Cu: goto label_12370c;
            case 0x123710u: goto label_123710;
            case 0x123714u: goto label_123714;
            case 0x123718u: goto label_123718;
            case 0x12371Cu: goto label_12371c;
            case 0x123720u: goto label_123720;
            case 0x123724u: goto label_123724;
            case 0x123728u: goto label_123728;
            case 0x12372Cu: goto label_12372c;
            case 0x123730u: goto label_123730;
            case 0x123734u: goto label_123734;
            case 0x123738u: goto label_123738;
            case 0x12373Cu: goto label_12373c;
            case 0x123740u: goto label_123740;
            case 0x123744u: goto label_123744;
            case 0x123748u: goto label_123748;
            case 0x12374Cu: goto label_12374c;
            case 0x123750u: goto label_123750;
            case 0x123754u: goto label_123754;
            case 0x123758u: goto label_123758;
            case 0x12375Cu: goto label_12375c;
            case 0x123760u: goto label_123760;
            case 0x123764u: goto label_123764;
            case 0x123768u: goto label_123768;
            case 0x12376Cu: goto label_12376c;
            case 0x123770u: goto label_123770;
            case 0x123774u: goto label_123774;
            case 0x123778u: goto label_123778;
            case 0x12377Cu: goto label_12377c;
            case 0x123780u: goto label_123780;
            case 0x123784u: goto label_123784;
            case 0x123788u: goto label_123788;
            case 0x12378Cu: goto label_12378c;
            case 0x123790u: goto label_123790;
            case 0x123794u: goto label_123794;
            case 0x123798u: goto label_123798;
            case 0x12379Cu: goto label_12379c;
            case 0x1237A0u: goto label_1237a0;
            case 0x1237A4u: goto label_1237a4;
            case 0x1237A8u: goto label_1237a8;
            case 0x1237ACu: goto label_1237ac;
            case 0x1237B0u: goto label_1237b0;
            case 0x1237B4u: goto label_1237b4;
            case 0x1237B8u: goto label_1237b8;
            case 0x1237BCu: goto label_1237bc;
            case 0x1237C0u: goto label_1237c0;
            case 0x1237C4u: goto label_1237c4;
            case 0x1237C8u: goto label_1237c8;
            case 0x1237CCu: goto label_1237cc;
            case 0x1237D0u: goto label_1237d0;
            case 0x1237D4u: goto label_1237d4;
            case 0x1237D8u: goto label_1237d8;
            case 0x1237DCu: goto label_1237dc;
            case 0x1237E0u: goto label_1237e0;
            case 0x1237E4u: goto label_1237e4;
            case 0x1237E8u: goto label_1237e8;
            case 0x1237ECu: goto label_1237ec;
            case 0x1237F0u: goto label_1237f0;
            case 0x1237F4u: goto label_1237f4;
            case 0x1237F8u: goto label_1237f8;
            case 0x1237FCu: goto label_1237fc;
            case 0x123800u: goto label_123800;
            case 0x123804u: goto label_123804;
            case 0x123808u: goto label_123808;
            case 0x12380Cu: goto label_12380c;
            case 0x123810u: goto label_123810;
            case 0x123814u: goto label_123814;
            case 0x123818u: goto label_123818;
            case 0x12381Cu: goto label_12381c;
            case 0x123820u: goto label_123820;
            case 0x123824u: goto label_123824;
            case 0x123828u: goto label_123828;
            case 0x12382Cu: goto label_12382c;
            case 0x123830u: goto label_123830;
            case 0x123834u: goto label_123834;
            case 0x123838u: goto label_123838;
            case 0x12383Cu: goto label_12383c;
            case 0x123840u: goto label_123840;
            case 0x123844u: goto label_123844;
            case 0x123848u: goto label_123848;
            case 0x12384Cu: goto label_12384c;
            case 0x123850u: goto label_123850;
            case 0x123854u: goto label_123854;
            case 0x123858u: goto label_123858;
            case 0x12385Cu: goto label_12385c;
            case 0x123860u: goto label_123860;
            case 0x123864u: goto label_123864;
            case 0x123868u: goto label_123868;
            case 0x12386Cu: goto label_12386c;
            case 0x123870u: goto label_123870;
            case 0x123874u: goto label_123874;
            case 0x123878u: goto label_123878;
            case 0x12387Cu: goto label_12387c;
            case 0x123880u: goto label_123880;
            case 0x123884u: goto label_123884;
            case 0x123888u: goto label_123888;
            case 0x12388Cu: goto label_12388c;
            case 0x123890u: goto label_123890;
            case 0x123894u: goto label_123894;
            case 0x123898u: goto label_123898;
            case 0x12389Cu: goto label_12389c;
            case 0x1238A0u: goto label_1238a0;
            case 0x1238A4u: goto label_1238a4;
            case 0x1238A8u: goto label_1238a8;
            case 0x1238ACu: goto label_1238ac;
            case 0x1238B0u: goto label_1238b0;
            case 0x1238B4u: goto label_1238b4;
            case 0x1238B8u: goto label_1238b8;
            case 0x1238BCu: goto label_1238bc;
            case 0x1238C0u: goto label_1238c0;
            case 0x1238C4u: goto label_1238c4;
            case 0x1238C8u: goto label_1238c8;
            case 0x1238CCu: goto label_1238cc;
            case 0x1238D0u: goto label_1238d0;
            case 0x1238D4u: goto label_1238d4;
            case 0x1238D8u: goto label_1238d8;
            case 0x1238DCu: goto label_1238dc;
            case 0x1238E0u: goto label_1238e0;
            case 0x1238E4u: goto label_1238e4;
            case 0x1238E8u: goto label_1238e8;
            case 0x1238ECu: goto label_1238ec;
            case 0x1238F0u: goto label_1238f0;
            case 0x1238F4u: goto label_1238f4;
            case 0x1238F8u: goto label_1238f8;
            case 0x1238FCu: goto label_1238fc;
            case 0x123900u: goto label_123900;
            case 0x123904u: goto label_123904;
            case 0x123908u: goto label_123908;
            case 0x12390Cu: goto label_12390c;
            case 0x123910u: goto label_123910;
            case 0x123914u: goto label_123914;
            case 0x123918u: goto label_123918;
            case 0x12391Cu: goto label_12391c;
            case 0x123920u: goto label_123920;
            case 0x123924u: goto label_123924;
            case 0x123928u: goto label_123928;
            case 0x12392Cu: goto label_12392c;
            case 0x123930u: goto label_123930;
            case 0x123934u: goto label_123934;
            case 0x123938u: goto label_123938;
            case 0x12393Cu: goto label_12393c;
            case 0x123940u: goto label_123940;
            case 0x123944u: goto label_123944;
            case 0x123948u: goto label_123948;
            case 0x12394Cu: goto label_12394c;
            case 0x123950u: goto label_123950;
            case 0x123954u: goto label_123954;
            case 0x123958u: goto label_123958;
            case 0x12395Cu: goto label_12395c;
            case 0x123960u: goto label_123960;
            case 0x123964u: goto label_123964;
            case 0x123968u: goto label_123968;
            case 0x12396Cu: goto label_12396c;
            case 0x123970u: goto label_123970;
            case 0x123974u: goto label_123974;
            case 0x123978u: goto label_123978;
            case 0x12397Cu: goto label_12397c;
            case 0x123980u: goto label_123980;
            case 0x123984u: goto label_123984;
            case 0x123988u: goto label_123988;
            case 0x12398Cu: goto label_12398c;
            case 0x123990u: goto label_123990;
            case 0x123994u: goto label_123994;
            case 0x123998u: goto label_123998;
            case 0x12399Cu: goto label_12399c;
            case 0x1239A0u: goto label_1239a0;
            case 0x1239A4u: goto label_1239a4;
            case 0x1239A8u: goto label_1239a8;
            case 0x1239ACu: goto label_1239ac;
            case 0x1239B0u: goto label_1239b0;
            case 0x1239B4u: goto label_1239b4;
            case 0x1239B8u: goto label_1239b8;
            case 0x1239BCu: goto label_1239bc;
            case 0x1239C0u: goto label_1239c0;
            case 0x1239C4u: goto label_1239c4;
            case 0x1239C8u: goto label_1239c8;
            case 0x1239CCu: goto label_1239cc;
            case 0x1239D0u: goto label_1239d0;
            case 0x1239D4u: goto label_1239d4;
            case 0x1239D8u: goto label_1239d8;
            case 0x1239DCu: goto label_1239dc;
            case 0x1239E0u: goto label_1239e0;
            case 0x1239E4u: goto label_1239e4;
            case 0x1239E8u: goto label_1239e8;
            case 0x1239ECu: goto label_1239ec;
            case 0x1239F0u: goto label_1239f0;
            case 0x1239F4u: goto label_1239f4;
            case 0x1239F8u: goto label_1239f8;
            case 0x1239FCu: goto label_1239fc;
            case 0x123A00u: goto label_123a00;
            case 0x123A04u: goto label_123a04;
            case 0x123A08u: goto label_123a08;
            case 0x123A0Cu: goto label_123a0c;
            case 0x123A10u: goto label_123a10;
            case 0x123A14u: goto label_123a14;
            case 0x123A18u: goto label_123a18;
            case 0x123A1Cu: goto label_123a1c;
            case 0x123A20u: goto label_123a20;
            case 0x123A24u: goto label_123a24;
            case 0x123A28u: goto label_123a28;
            case 0x123A2Cu: goto label_123a2c;
            case 0x123A30u: goto label_123a30;
            case 0x123A34u: goto label_123a34;
            case 0x123A38u: goto label_123a38;
            case 0x123A3Cu: goto label_123a3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x123700u;
label_123700:
    // 0x123700: 0x27bdffe0
    ctx->pc = 0x123700u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_123704:
    // 0x123704: 0x24020001
    ctx->pc = 0x123704u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_123708:
    // 0x123708: 0xffb00000
    ctx->pc = 0x123708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_12370c:
    // 0x12370c: 0x80802d
    ctx->pc = 0x12370cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_123710:
    // 0x123710: 0xffb10008
    ctx->pc = 0x123710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_123714:
    // 0x123714: 0x26110048
    ctx->pc = 0x123714u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 72));
label_123718:
    // 0x123718: 0xffb20010
    ctx->pc = 0x123718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_12371c:
    // 0x12371c: 0xffbf0018
    ctx->pc = 0x12371cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_123720:
    // 0x123720: 0x8e030004
    ctx->pc = 0x123720u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_123724:
    // 0x123724: 0x1462004c
label_123728:
    if (ctx->pc == 0x123728u) {
        ctx->pc = 0x123728u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x12372Cu;
        goto label_12372c;
    }
    ctx->pc = 0x123724u;
    {
        const bool branch_taken_0x123724 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x123728u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        if (branch_taken_0x123724) {
            ctx->pc = 0x123858u;
            goto label_123858;
        }
    }
    ctx->pc = 0x12372Cu;
label_12372c:
    // 0x12372c: 0xc04d3e6
label_123730:
    if (ctx->pc == 0x123730u) {
        ctx->pc = 0x123730u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x123734u;
        goto label_123734;
    }
    ctx->pc = 0x12372Cu;
    SET_GPR_U32(ctx, 31, 0x123734u);
    ctx->pc = 0x123730u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x134F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00134F98_0x134f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123734u; }
    }
    if (ctx->pc != 0x123734u) { return; }
    ctx->pc = 0x123734u;
label_123734:
    // 0x123734: 0x54400048
label_123738:
    if (ctx->pc == 0x123738u) {
        ctx->pc = 0x123738u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x12373Cu;
        goto label_12373c;
    }
    ctx->pc = 0x123734u;
    {
        const bool branch_taken_0x123734 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x123734) {
            ctx->pc = 0x123738u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x123858u;
            goto label_123858;
        }
    }
    ctx->pc = 0x12373Cu;
label_12373c:
    // 0x12373c: 0x8e04007c
    ctx->pc = 0x12373cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_123740:
    // 0x123740: 0x26050068
    ctx->pc = 0x123740u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 104));
label_123744:
    // 0x123744: 0x8e020078
    ctx->pc = 0x123744u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_123748:
    // 0x123748: 0x2606006c
    ctx->pc = 0x123748u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 108));
label_12374c:
    // 0x12374c: 0x40f809
label_123750:
    if (ctx->pc == 0x123750u) {
        ctx->pc = 0x123750u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x123754u;
        goto label_123754;
    }
    ctx->pc = 0x12374Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x123754u);
        ctx->pc = 0x123750u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1234D8u: goto label_1234d8;
            case 0x1234DCu: goto label_1234dc;
            case 0x1234E0u: goto label_1234e0;
            case 0x1234E4u: goto label_1234e4;
            case 0x1234E8u: goto label_1234e8;
            case 0x1234ECu: goto label_1234ec;
            case 0x1234F0u: goto label_1234f0;
            case 0x1234F4u: goto label_1234f4;
            case 0x1234F8u: goto label_1234f8;
            case 0x1234FCu: goto label_1234fc;
            case 0x123500u: goto label_123500;
            case 0x123504u: goto label_123504;
            case 0x123508u: goto label_123508;
            case 0x12350Cu: goto label_12350c;
            case 0x123510u: goto label_123510;
            case 0x123514u: goto label_123514;
            case 0x123518u: goto label_123518;
            case 0x12351Cu: goto label_12351c;
            case 0x123520u: goto label_123520;
            case 0x123524u: goto label_123524;
            case 0x123528u: goto label_123528;
            case 0x12352Cu: goto label_12352c;
            case 0x123530u: goto label_123530;
            case 0x123534u: goto label_123534;
            case 0x123538u: goto label_123538;
            case 0x12353Cu: goto label_12353c;
            case 0x123540u: goto label_123540;
            case 0x123544u: goto label_123544;
            case 0x123548u: goto label_123548;
            case 0x12354Cu: goto label_12354c;
            case 0x123550u: goto label_123550;
            case 0x123554u: goto label_123554;
            case 0x123558u: goto label_123558;
            case 0x12355Cu: goto label_12355c;
            case 0x123560u: goto label_123560;
            case 0x123564u: goto label_123564;
            case 0x123568u: goto label_123568;
            case 0x12356Cu: goto label_12356c;
            case 0x123570u: goto label_123570;
            case 0x123574u: goto label_123574;
            case 0x123578u: goto label_123578;
            case 0x12357Cu: goto label_12357c;
            case 0x123580u: goto label_123580;
            case 0x123584u: goto label_123584;
            case 0x123588u: goto label_123588;
            case 0x12358Cu: goto label_12358c;
            case 0x123590u: goto label_123590;
            case 0x123594u: goto label_123594;
            case 0x123598u: goto label_123598;
            case 0x12359Cu: goto label_12359c;
            case 0x1235A0u: goto label_1235a0;
            case 0x1235A4u: goto label_1235a4;
            case 0x1235A8u: goto label_1235a8;
            case 0x1235ACu: goto label_1235ac;
            case 0x1235B0u: goto label_1235b0;
            case 0x1235B4u: goto label_1235b4;
            case 0x1235B8u: goto label_1235b8;
            case 0x1235BCu: goto label_1235bc;
            case 0x1235C0u: goto label_1235c0;
            case 0x1235C4u: goto label_1235c4;
            case 0x1235C8u: goto label_1235c8;
            case 0x1235CCu: goto label_1235cc;
            case 0x1235D0u: goto label_1235d0;
            case 0x1235D4u: goto label_1235d4;
            case 0x1235D8u: goto label_1235d8;
            case 0x1235DCu: goto label_1235dc;
            case 0x1235E0u: goto label_1235e0;
            case 0x1235E4u: goto label_1235e4;
            case 0x1235E8u: goto label_1235e8;
            case 0x1235ECu: goto label_1235ec;
            case 0x1235F0u: goto label_1235f0;
            case 0x1235F4u: goto label_1235f4;
            case 0x1235F8u: goto label_1235f8;
            case 0x1235FCu: goto label_1235fc;
            case 0x123600u: goto label_123600;
            case 0x123604u: goto label_123604;
            case 0x123608u: goto label_123608;
            case 0x12360Cu: goto label_12360c;
            case 0x123610u: goto label_123610;
            case 0x123614u: goto label_123614;
            case 0x123618u: goto label_123618;
            case 0x12361Cu: goto label_12361c;
            case 0x123620u: goto label_123620;
            case 0x123624u: goto label_123624;
            case 0x123628u: goto label_123628;
            case 0x12362Cu: goto label_12362c;
            case 0x123630u: goto label_123630;
            case 0x123634u: goto label_123634;
            case 0x123638u: goto label_123638;
            case 0x12363Cu: goto label_12363c;
            case 0x123640u: goto label_123640;
            case 0x123644u: goto label_123644;
            case 0x123648u: goto label_123648;
            case 0x12364Cu: goto label_12364c;
            case 0x123650u: goto label_123650;
            case 0x123654u: goto label_123654;
            case 0x123658u: goto label_123658;
            case 0x12365Cu: goto label_12365c;
            case 0x123660u: goto label_123660;
            case 0x123664u: goto label_123664;
            case 0x123668u: goto label_123668;
            case 0x12366Cu: goto label_12366c;
            case 0x123670u: goto label_123670;
            case 0x123674u: goto label_123674;
            case 0x123678u: goto label_123678;
            case 0x12367Cu: goto label_12367c;
            case 0x123680u: goto label_123680;
            case 0x123684u: goto label_123684;
            case 0x123688u: goto label_123688;
            case 0x12368Cu: goto label_12368c;
            case 0x123690u: goto label_123690;
            case 0x123694u: goto label_123694;
            case 0x123698u: goto label_123698;
            case 0x12369Cu: goto label_12369c;
            case 0x1236A0u: goto label_1236a0;
            case 0x1236A4u: goto label_1236a4;
            case 0x1236A8u: goto label_1236a8;
            case 0x1236ACu: goto label_1236ac;
            case 0x1236B0u: goto label_1236b0;
            case 0x1236B4u: goto label_1236b4;
            case 0x1236B8u: goto label_1236b8;
            case 0x1236BCu: goto label_1236bc;
            case 0x1236C0u: goto label_1236c0;
            case 0x1236C4u: goto label_1236c4;
            case 0x1236C8u: goto label_1236c8;
            case 0x1236CCu: goto label_1236cc;
            case 0x1236D0u: goto label_1236d0;
            case 0x1236D4u: goto label_1236d4;
            case 0x1236D8u: goto label_1236d8;
            case 0x1236DCu: goto label_1236dc;
            case 0x1236E0u: goto label_1236e0;
            case 0x1236E4u: goto label_1236e4;
            case 0x1236E8u: goto label_1236e8;
            case 0x1236ECu: goto label_1236ec;
            case 0x1236F0u: goto label_1236f0;
            case 0x1236F4u: goto label_1236f4;
            case 0x1236F8u: goto label_1236f8;
            case 0x1236FCu: goto label_1236fc;
            case 0x123700u: goto label_123700;
            case 0x123704u: goto label_123704;
            case 0x123708u: goto label_123708;
            case 0x12370Cu: goto label_12370c;
            case 0x123710u: goto label_123710;
            case 0x123714u: goto label_123714;
            case 0x123718u: goto label_123718;
            case 0x12371Cu: goto label_12371c;
            case 0x123720u: goto label_123720;
            case 0x123724u: goto label_123724;
            case 0x123728u: goto label_123728;
            case 0x12372Cu: goto label_12372c;
            case 0x123730u: goto label_123730;
            case 0x123734u: goto label_123734;
            case 0x123738u: goto label_123738;
            case 0x12373Cu: goto label_12373c;
            case 0x123740u: goto label_123740;
            case 0x123744u: goto label_123744;
            case 0x123748u: goto label_123748;
            case 0x12374Cu: goto label_12374c;
            case 0x123750u: goto label_123750;
            case 0x123754u: goto label_123754;
            case 0x123758u: goto label_123758;
            case 0x12375Cu: goto label_12375c;
            case 0x123760u: goto label_123760;
            case 0x123764u: goto label_123764;
            case 0x123768u: goto label_123768;
            case 0x12376Cu: goto label_12376c;
            case 0x123770u: goto label_123770;
            case 0x123774u: goto label_123774;
            case 0x123778u: goto label_123778;
            case 0x12377Cu: goto label_12377c;
            case 0x123780u: goto label_123780;
            case 0x123784u: goto label_123784;
            case 0x123788u: goto label_123788;
            case 0x12378Cu: goto label_12378c;
            case 0x123790u: goto label_123790;
            case 0x123794u: goto label_123794;
            case 0x123798u: goto label_123798;
            case 0x12379Cu: goto label_12379c;
            case 0x1237A0u: goto label_1237a0;
            case 0x1237A4u: goto label_1237a4;
            case 0x1237A8u: goto label_1237a8;
            case 0x1237ACu: goto label_1237ac;
            case 0x1237B0u: goto label_1237b0;
            case 0x1237B4u: goto label_1237b4;
            case 0x1237B8u: goto label_1237b8;
            case 0x1237BCu: goto label_1237bc;
            case 0x1237C0u: goto label_1237c0;
            case 0x1237C4u: goto label_1237c4;
            case 0x1237C8u: goto label_1237c8;
            case 0x1237CCu: goto label_1237cc;
            case 0x1237D0u: goto label_1237d0;
            case 0x1237D4u: goto label_1237d4;
            case 0x1237D8u: goto label_1237d8;
            case 0x1237DCu: goto label_1237dc;
            case 0x1237E0u: goto label_1237e0;
            case 0x1237E4u: goto label_1237e4;
            case 0x1237E8u: goto label_1237e8;
            case 0x1237ECu: goto label_1237ec;
            case 0x1237F0u: goto label_1237f0;
            case 0x1237F4u: goto label_1237f4;
            case 0x1237F8u: goto label_1237f8;
            case 0x1237FCu: goto label_1237fc;
            case 0x123800u: goto label_123800;
            case 0x123804u: goto label_123804;
            case 0x123808u: goto label_123808;
            case 0x12380Cu: goto label_12380c;
            case 0x123810u: goto label_123810;
            case 0x123814u: goto label_123814;
            case 0x123818u: goto label_123818;
            case 0x12381Cu: goto label_12381c;
            case 0x123820u: goto label_123820;
            case 0x123824u: goto label_123824;
            case 0x123828u: goto label_123828;
            case 0x12382Cu: goto label_12382c;
            case 0x123830u: goto label_123830;
            case 0x123834u: goto label_123834;
            case 0x123838u: goto label_123838;
            case 0x12383Cu: goto label_12383c;
            case 0x123840u: goto label_123840;
            case 0x123844u: goto label_123844;
            case 0x123848u: goto label_123848;
            case 0x12384Cu: goto label_12384c;
            case 0x123850u: goto label_123850;
            case 0x123854u: goto label_123854;
            case 0x123858u: goto label_123858;
            case 0x12385Cu: goto label_12385c;
            case 0x123860u: goto label_123860;
            case 0x123864u: goto label_123864;
            case 0x123868u: goto label_123868;
            case 0x12386Cu: goto label_12386c;
            case 0x123870u: goto label_123870;
            case 0x123874u: goto label_123874;
            case 0x123878u: goto label_123878;
            case 0x12387Cu: goto label_12387c;
            case 0x123880u: goto label_123880;
            case 0x123884u: goto label_123884;
            case 0x123888u: goto label_123888;
            case 0x12388Cu: goto label_12388c;
            case 0x123890u: goto label_123890;
            case 0x123894u: goto label_123894;
            case 0x123898u: goto label_123898;
            case 0x12389Cu: goto label_12389c;
            case 0x1238A0u: goto label_1238a0;
            case 0x1238A4u: goto label_1238a4;
            case 0x1238A8u: goto label_1238a8;
            case 0x1238ACu: goto label_1238ac;
            case 0x1238B0u: goto label_1238b0;
            case 0x1238B4u: goto label_1238b4;
            case 0x1238B8u: goto label_1238b8;
            case 0x1238BCu: goto label_1238bc;
            case 0x1238C0u: goto label_1238c0;
            case 0x1238C4u: goto label_1238c4;
            case 0x1238C8u: goto label_1238c8;
            case 0x1238CCu: goto label_1238cc;
            case 0x1238D0u: goto label_1238d0;
            case 0x1238D4u: goto label_1238d4;
            case 0x1238D8u: goto label_1238d8;
            case 0x1238DCu: goto label_1238dc;
            case 0x1238E0u: goto label_1238e0;
            case 0x1238E4u: goto label_1238e4;
            case 0x1238E8u: goto label_1238e8;
            case 0x1238ECu: goto label_1238ec;
            case 0x1238F0u: goto label_1238f0;
            case 0x1238F4u: goto label_1238f4;
            case 0x1238F8u: goto label_1238f8;
            case 0x1238FCu: goto label_1238fc;
            case 0x123900u: goto label_123900;
            case 0x123904u: goto label_123904;
            case 0x123908u: goto label_123908;
            case 0x12390Cu: goto label_12390c;
            case 0x123910u: goto label_123910;
            case 0x123914u: goto label_123914;
            case 0x123918u: goto label_123918;
            case 0x12391Cu: goto label_12391c;
            case 0x123920u: goto label_123920;
            case 0x123924u: goto label_123924;
            case 0x123928u: goto label_123928;
            case 0x12392Cu: goto label_12392c;
            case 0x123930u: goto label_123930;
            case 0x123934u: goto label_123934;
            case 0x123938u: goto label_123938;
            case 0x12393Cu: goto label_12393c;
            case 0x123940u: goto label_123940;
            case 0x123944u: goto label_123944;
            case 0x123948u: goto label_123948;
            case 0x12394Cu: goto label_12394c;
            case 0x123950u: goto label_123950;
            case 0x123954u: goto label_123954;
            case 0x123958u: goto label_123958;
            case 0x12395Cu: goto label_12395c;
            case 0x123960u: goto label_123960;
            case 0x123964u: goto label_123964;
            case 0x123968u: goto label_123968;
            case 0x12396Cu: goto label_12396c;
            case 0x123970u: goto label_123970;
            case 0x123974u: goto label_123974;
            case 0x123978u: goto label_123978;
            case 0x12397Cu: goto label_12397c;
            case 0x123980u: goto label_123980;
            case 0x123984u: goto label_123984;
            case 0x123988u: goto label_123988;
            case 0x12398Cu: goto label_12398c;
            case 0x123990u: goto label_123990;
            case 0x123994u: goto label_123994;
            case 0x123998u: goto label_123998;
            case 0x12399Cu: goto label_12399c;
            case 0x1239A0u: goto label_1239a0;
            case 0x1239A4u: goto label_1239a4;
            case 0x1239A8u: goto label_1239a8;
            case 0x1239ACu: goto label_1239ac;
            case 0x1239B0u: goto label_1239b0;
            case 0x1239B4u: goto label_1239b4;
            case 0x1239B8u: goto label_1239b8;
            case 0x1239BCu: goto label_1239bc;
            case 0x1239C0u: goto label_1239c0;
            case 0x1239C4u: goto label_1239c4;
            case 0x1239C8u: goto label_1239c8;
            case 0x1239CCu: goto label_1239cc;
            case 0x1239D0u: goto label_1239d0;
            case 0x1239D4u: goto label_1239d4;
            case 0x1239D8u: goto label_1239d8;
            case 0x1239DCu: goto label_1239dc;
            case 0x1239E0u: goto label_1239e0;
            case 0x1239E4u: goto label_1239e4;
            case 0x1239E8u: goto label_1239e8;
            case 0x1239ECu: goto label_1239ec;
            case 0x1239F0u: goto label_1239f0;
            case 0x1239F4u: goto label_1239f4;
            case 0x1239F8u: goto label_1239f8;
            case 0x1239FCu: goto label_1239fc;
            case 0x123A00u: goto label_123a00;
            case 0x123A04u: goto label_123a04;
            case 0x123A08u: goto label_123a08;
            case 0x123A0Cu: goto label_123a0c;
            case 0x123A10u: goto label_123a10;
            case 0x123A14u: goto label_123a14;
            case 0x123A18u: goto label_123a18;
            case 0x123A1Cu: goto label_123a1c;
            case 0x123A20u: goto label_123a20;
            case 0x123A24u: goto label_123a24;
            case 0x123A28u: goto label_123a28;
            case 0x123A2Cu: goto label_123a2c;
            case 0x123A30u: goto label_123a30;
            case 0x123A34u: goto label_123a34;
            case 0x123A38u: goto label_123a38;
            case 0x123A3Cu: goto label_123a3c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x123754u; }
            if (ctx->pc != 0x123754u) { return; }
        }
    }
    ctx->pc = 0x123754u;
label_123754:
    // 0x123754: 0x8e240018
    ctx->pc = 0x123754u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_123758:
    // 0x123758: 0x8e270020
    ctx->pc = 0x123758u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_12375c:
    // 0x12375c: 0x24060002
    ctx->pc = 0x12375cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
label_123760:
    // 0x123760: 0x8e230024
    ctx->pc = 0x123760u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_123764:
    // 0x123764: 0x874823
    ctx->pc = 0x123764u;
    SET_GPR_U32(ctx, 9, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_123768:
    // 0x123768: 0x8204000e
    ctx->pc = 0x123768u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_12376c:
    // 0x12376c: 0x69102a
    ctx->pc = 0x12376cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 9)));
label_123770:
    // 0x123770: 0x8e250004
    ctx->pc = 0x123770u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_123774:
    // 0x123774: 0x62480b
    ctx->pc = 0x123774u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 9, GPR_U32(ctx, 3));
label_123778:
    // 0x123778: 0x71840
    ctx->pc = 0x123778u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 1));
label_12377c:
    // 0x12377c: 0x8e2b0014
    ctx->pc = 0x12377cu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_123780:
    // 0x123780: 0xa9102a
    ctx->pc = 0x123780u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 9)));
label_123784:
    // 0x123784: 0xa2480b
    ctx->pc = 0x123784u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 9, GPR_U32(ctx, 5));
label_123788:
    // 0x123788: 0x1635021
    ctx->pc = 0x123788u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_12378c:
    // 0x12378c: 0x1486001c
label_123790:
    if (ctx->pc == 0x123790u) {
        ctx->pc = 0x123790u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x123794u;
        goto label_123794;
    }
    ctx->pc = 0x12378Cu;
    {
        const bool branch_taken_0x12378c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 6));
        ctx->pc = 0x123790u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        if (branch_taken_0x12378c) {
            ctx->pc = 0x123800u;
            goto label_123800;
        }
    }
    ctx->pc = 0x123794u;
label_123794:
    // 0x123794: 0x8e22001c
    ctx->pc = 0x123794u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_123798:
    // 0x123798: 0x402d
    ctx->pc = 0x123798u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12379c:
    // 0x12379c: 0x471021
    ctx->pc = 0x12379cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1237a0:
    // 0x1237a0: 0x21040
    ctx->pc = 0x1237a0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_1237a4:
    // 0x1237a4: 0x19200024
label_1237a8:
    if (ctx->pc == 0x1237A8u) {
        ctx->pc = 0x1237A8u;
        SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->pc = 0x1237ACu;
        goto label_1237ac;
    }
    ctx->pc = 0x1237A4u;
    {
        const bool branch_taken_0x1237a4 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x1237A8u;
        SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        if (branch_taken_0x1237a4) {
            ctx->pc = 0x123838u;
            goto label_123838;
        }
    }
    ctx->pc = 0x1237ACu;
label_1237ac:
    // 0x1237ac: 0x240382d
    ctx->pc = 0x1237acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1237b0:
    // 0x1237b0: 0x94e20000
    ctx->pc = 0x1237b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_1237b4:
    // 0x1237b4: 0x82040
    ctx->pc = 0x1237b4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 8), 1));
label_1237b8:
    // 0x1237b8: 0x8a2821
    ctx->pc = 0x1237b8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_1237bc:
    // 0x1237bc: 0x8b2021
    ctx->pc = 0x1237bcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_1237c0:
    // 0x1237c0: 0x21a00
    ctx->pc = 0x1237c0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
label_1237c4:
    // 0x1237c4: 0x21202
    ctx->pc = 0x1237c4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
label_1237c8:
    // 0x1237c8: 0x431025
    ctx->pc = 0x1237c8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1237cc:
    // 0x1237cc: 0x25080001
    ctx->pc = 0x1237ccu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_1237d0:
    // 0x1237d0: 0xa4a20000
    ctx->pc = 0x1237d0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_1237d4:
    // 0x1237d4: 0x109302a
    ctx->pc = 0x1237d4u;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 9)));
label_1237d8:
    // 0x1237d8: 0x94e20002
    ctx->pc = 0x1237d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_1237dc:
    // 0x1237dc: 0x24e70004
    ctx->pc = 0x1237dcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
label_1237e0:
    // 0x1237e0: 0x21a00
    ctx->pc = 0x1237e0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
label_1237e4:
    // 0x1237e4: 0x21202
    ctx->pc = 0x1237e4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
label_1237e8:
    // 0x1237e8: 0x431025
    ctx->pc = 0x1237e8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1237ec:
    // 0x1237ec: 0x14c0fff0
label_1237f0:
    if (ctx->pc == 0x1237F0u) {
        ctx->pc = 0x1237F0u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1237F4u;
        goto label_1237f4;
    }
    ctx->pc = 0x1237ECu;
    {
        const bool branch_taken_0x1237ec = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x1237F0u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1237ec) {
            ctx->pc = 0x1237B0u;
            goto label_1237b0;
        }
    }
    ctx->pc = 0x1237F4u;
label_1237f4:
    // 0x1237f4: 0x10000010
label_1237f8:
    if (ctx->pc == 0x1237F8u) {
        ctx->pc = 0x1237F8u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x1237FCu;
        goto label_1237fc;
    }
    ctx->pc = 0x1237F4u;
    {
        const bool branch_taken_0x1237f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1237F8u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        if (branch_taken_0x1237f4) {
            ctx->pc = 0x123838u;
            goto label_123838;
        }
    }
    ctx->pc = 0x1237FCu;
label_1237fc:
    // 0x1237fc: 0x0
    ctx->pc = 0x1237fcu;
    // NOP
label_123800:
    // 0x123800: 0x1920000d
label_123804:
    if (ctx->pc == 0x123804u) {
        ctx->pc = 0x123804u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x123808u;
        goto label_123808;
    }
    ctx->pc = 0x123800u;
    {
        const bool branch_taken_0x123800 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x123804u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x123800) {
            ctx->pc = 0x123838u;
            goto label_123838;
        }
    }
    ctx->pc = 0x123808u;
label_123808:
    // 0x123808: 0x82040
    ctx->pc = 0x123808u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 8), 1));
label_12380c:
    // 0x12380c: 0x25080001
    ctx->pc = 0x12380cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_123810:
    // 0x123810: 0x921021
    ctx->pc = 0x123810u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_123814:
    // 0x123814: 0x8a2021
    ctx->pc = 0x123814u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_123818:
    // 0x123818: 0x94420000
    ctx->pc = 0x123818u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_12381c:
    // 0x12381c: 0x109282a
    ctx->pc = 0x12381cu;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 9)));
label_123820:
    // 0x123820: 0x21a00
    ctx->pc = 0x123820u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
label_123824:
    // 0x123824: 0x21202
    ctx->pc = 0x123824u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
label_123828:
    // 0x123828: 0x431025
    ctx->pc = 0x123828u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_12382c:
    // 0x12382c: 0x14a0fff6
label_123830:
    if (ctx->pc == 0x123830u) {
        ctx->pc = 0x123830u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x123834u;
        goto label_123834;
    }
    ctx->pc = 0x12382Cu;
    {
        const bool branch_taken_0x12382c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x123830u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x12382c) {
            ctx->pc = 0x123808u;
            goto label_123808;
        }
    }
    ctx->pc = 0x123834u;
label_123834:
    // 0x123834: 0x9203000e
    ctx->pc = 0x123834u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_123838:
    // 0x123838: 0x31600
    ctx->pc = 0x123838u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 24));
label_12383c:
    // 0x12383c: 0x24030002
    ctx->pc = 0x12383cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_123840:
    // 0x123840: 0x21603
    ctx->pc = 0x123840u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_123844:
    // 0x123844: 0xae030004
    ctx->pc = 0x123844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_123848:
    // 0x123848: 0x1221018
    ctx->pc = 0x123848u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_12384c:
    // 0x12384c: 0xae090090
    ctx->pc = 0x12384cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 9));
label_123850:
    // 0x123850: 0x21040
    ctx->pc = 0x123850u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_123854:
    // 0x123854: 0xae020094
    ctx->pc = 0x123854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_123858:
    // 0x123858: 0x24020002
    ctx->pc = 0x123858u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_12385c:
    // 0x12385c: 0x54620009
label_123860:
    if (ctx->pc == 0x123860u) {
        ctx->pc = 0x123860u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x123864u;
        goto label_123864;
    }
    ctx->pc = 0x12385Cu;
    {
        const bool branch_taken_0x12385c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x12385c) {
            ctx->pc = 0x123860u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x123884u;
            goto label_123884;
        }
    }
    ctx->pc = 0x123864u;
label_123864:
    // 0x123864: 0x8e030080
    ctx->pc = 0x123864u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_123868:
    // 0x123868: 0x8e040084
    ctx->pc = 0x123868u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_12386c:
    // 0x12386c: 0x8e050094
    ctx->pc = 0x12386cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_123870:
    // 0x123870: 0x60f809
label_123874:
    if (ctx->pc == 0x123874u) {
        ctx->pc = 0x123874u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = 0x123878u;
        goto label_123878;
    }
    ctx->pc = 0x123870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x123878u);
        ctx->pc = 0x123874u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1234D8u: goto label_1234d8;
            case 0x1234DCu: goto label_1234dc;
            case 0x1234E0u: goto label_1234e0;
            case 0x1234E4u: goto label_1234e4;
            case 0x1234E8u: goto label_1234e8;
            case 0x1234ECu: goto label_1234ec;
            case 0x1234F0u: goto label_1234f0;
            case 0x1234F4u: goto label_1234f4;
            case 0x1234F8u: goto label_1234f8;
            case 0x1234FCu: goto label_1234fc;
            case 0x123500u: goto label_123500;
            case 0x123504u: goto label_123504;
            case 0x123508u: goto label_123508;
            case 0x12350Cu: goto label_12350c;
            case 0x123510u: goto label_123510;
            case 0x123514u: goto label_123514;
            case 0x123518u: goto label_123518;
            case 0x12351Cu: goto label_12351c;
            case 0x123520u: goto label_123520;
            case 0x123524u: goto label_123524;
            case 0x123528u: goto label_123528;
            case 0x12352Cu: goto label_12352c;
            case 0x123530u: goto label_123530;
            case 0x123534u: goto label_123534;
            case 0x123538u: goto label_123538;
            case 0x12353Cu: goto label_12353c;
            case 0x123540u: goto label_123540;
            case 0x123544u: goto label_123544;
            case 0x123548u: goto label_123548;
            case 0x12354Cu: goto label_12354c;
            case 0x123550u: goto label_123550;
            case 0x123554u: goto label_123554;
            case 0x123558u: goto label_123558;
            case 0x12355Cu: goto label_12355c;
            case 0x123560u: goto label_123560;
            case 0x123564u: goto label_123564;
            case 0x123568u: goto label_123568;
            case 0x12356Cu: goto label_12356c;
            case 0x123570u: goto label_123570;
            case 0x123574u: goto label_123574;
            case 0x123578u: goto label_123578;
            case 0x12357Cu: goto label_12357c;
            case 0x123580u: goto label_123580;
            case 0x123584u: goto label_123584;
            case 0x123588u: goto label_123588;
            case 0x12358Cu: goto label_12358c;
            case 0x123590u: goto label_123590;
            case 0x123594u: goto label_123594;
            case 0x123598u: goto label_123598;
            case 0x12359Cu: goto label_12359c;
            case 0x1235A0u: goto label_1235a0;
            case 0x1235A4u: goto label_1235a4;
            case 0x1235A8u: goto label_1235a8;
            case 0x1235ACu: goto label_1235ac;
            case 0x1235B0u: goto label_1235b0;
            case 0x1235B4u: goto label_1235b4;
            case 0x1235B8u: goto label_1235b8;
            case 0x1235BCu: goto label_1235bc;
            case 0x1235C0u: goto label_1235c0;
            case 0x1235C4u: goto label_1235c4;
            case 0x1235C8u: goto label_1235c8;
            case 0x1235CCu: goto label_1235cc;
            case 0x1235D0u: goto label_1235d0;
            case 0x1235D4u: goto label_1235d4;
            case 0x1235D8u: goto label_1235d8;
            case 0x1235DCu: goto label_1235dc;
            case 0x1235E0u: goto label_1235e0;
            case 0x1235E4u: goto label_1235e4;
            case 0x1235E8u: goto label_1235e8;
            case 0x1235ECu: goto label_1235ec;
            case 0x1235F0u: goto label_1235f0;
            case 0x1235F4u: goto label_1235f4;
            case 0x1235F8u: goto label_1235f8;
            case 0x1235FCu: goto label_1235fc;
            case 0x123600u: goto label_123600;
            case 0x123604u: goto label_123604;
            case 0x123608u: goto label_123608;
            case 0x12360Cu: goto label_12360c;
            case 0x123610u: goto label_123610;
            case 0x123614u: goto label_123614;
            case 0x123618u: goto label_123618;
            case 0x12361Cu: goto label_12361c;
            case 0x123620u: goto label_123620;
            case 0x123624u: goto label_123624;
            case 0x123628u: goto label_123628;
            case 0x12362Cu: goto label_12362c;
            case 0x123630u: goto label_123630;
            case 0x123634u: goto label_123634;
            case 0x123638u: goto label_123638;
            case 0x12363Cu: goto label_12363c;
            case 0x123640u: goto label_123640;
            case 0x123644u: goto label_123644;
            case 0x123648u: goto label_123648;
            case 0x12364Cu: goto label_12364c;
            case 0x123650u: goto label_123650;
            case 0x123654u: goto label_123654;
            case 0x123658u: goto label_123658;
            case 0x12365Cu: goto label_12365c;
            case 0x123660u: goto label_123660;
            case 0x123664u: goto label_123664;
            case 0x123668u: goto label_123668;
            case 0x12366Cu: goto label_12366c;
            case 0x123670u: goto label_123670;
            case 0x123674u: goto label_123674;
            case 0x123678u: goto label_123678;
            case 0x12367Cu: goto label_12367c;
            case 0x123680u: goto label_123680;
            case 0x123684u: goto label_123684;
            case 0x123688u: goto label_123688;
            case 0x12368Cu: goto label_12368c;
            case 0x123690u: goto label_123690;
            case 0x123694u: goto label_123694;
            case 0x123698u: goto label_123698;
            case 0x12369Cu: goto label_12369c;
            case 0x1236A0u: goto label_1236a0;
            case 0x1236A4u: goto label_1236a4;
            case 0x1236A8u: goto label_1236a8;
            case 0x1236ACu: goto label_1236ac;
            case 0x1236B0u: goto label_1236b0;
            case 0x1236B4u: goto label_1236b4;
            case 0x1236B8u: goto label_1236b8;
            case 0x1236BCu: goto label_1236bc;
            case 0x1236C0u: goto label_1236c0;
            case 0x1236C4u: goto label_1236c4;
            case 0x1236C8u: goto label_1236c8;
            case 0x1236CCu: goto label_1236cc;
            case 0x1236D0u: goto label_1236d0;
            case 0x1236D4u: goto label_1236d4;
            case 0x1236D8u: goto label_1236d8;
            case 0x1236DCu: goto label_1236dc;
            case 0x1236E0u: goto label_1236e0;
            case 0x1236E4u: goto label_1236e4;
            case 0x1236E8u: goto label_1236e8;
            case 0x1236ECu: goto label_1236ec;
            case 0x1236F0u: goto label_1236f0;
            case 0x1236F4u: goto label_1236f4;
            case 0x1236F8u: goto label_1236f8;
            case 0x1236FCu: goto label_1236fc;
            case 0x123700u: goto label_123700;
            case 0x123704u: goto label_123704;
            case 0x123708u: goto label_123708;
            case 0x12370Cu: goto label_12370c;
            case 0x123710u: goto label_123710;
            case 0x123714u: goto label_123714;
            case 0x123718u: goto label_123718;
            case 0x12371Cu: goto label_12371c;
            case 0x123720u: goto label_123720;
            case 0x123724u: goto label_123724;
            case 0x123728u: goto label_123728;
            case 0x12372Cu: goto label_12372c;
            case 0x123730u: goto label_123730;
            case 0x123734u: goto label_123734;
            case 0x123738u: goto label_123738;
            case 0x12373Cu: goto label_12373c;
            case 0x123740u: goto label_123740;
            case 0x123744u: goto label_123744;
            case 0x123748u: goto label_123748;
            case 0x12374Cu: goto label_12374c;
            case 0x123750u: goto label_123750;
            case 0x123754u: goto label_123754;
            case 0x123758u: goto label_123758;
            case 0x12375Cu: goto label_12375c;
            case 0x123760u: goto label_123760;
            case 0x123764u: goto label_123764;
            case 0x123768u: goto label_123768;
            case 0x12376Cu: goto label_12376c;
            case 0x123770u: goto label_123770;
            case 0x123774u: goto label_123774;
            case 0x123778u: goto label_123778;
            case 0x12377Cu: goto label_12377c;
            case 0x123780u: goto label_123780;
            case 0x123784u: goto label_123784;
            case 0x123788u: goto label_123788;
            case 0x12378Cu: goto label_12378c;
            case 0x123790u: goto label_123790;
            case 0x123794u: goto label_123794;
            case 0x123798u: goto label_123798;
            case 0x12379Cu: goto label_12379c;
            case 0x1237A0u: goto label_1237a0;
            case 0x1237A4u: goto label_1237a4;
            case 0x1237A8u: goto label_1237a8;
            case 0x1237ACu: goto label_1237ac;
            case 0x1237B0u: goto label_1237b0;
            case 0x1237B4u: goto label_1237b4;
            case 0x1237B8u: goto label_1237b8;
            case 0x1237BCu: goto label_1237bc;
            case 0x1237C0u: goto label_1237c0;
            case 0x1237C4u: goto label_1237c4;
            case 0x1237C8u: goto label_1237c8;
            case 0x1237CCu: goto label_1237cc;
            case 0x1237D0u: goto label_1237d0;
            case 0x1237D4u: goto label_1237d4;
            case 0x1237D8u: goto label_1237d8;
            case 0x1237DCu: goto label_1237dc;
            case 0x1237E0u: goto label_1237e0;
            case 0x1237E4u: goto label_1237e4;
            case 0x1237E8u: goto label_1237e8;
            case 0x1237ECu: goto label_1237ec;
            case 0x1237F0u: goto label_1237f0;
            case 0x1237F4u: goto label_1237f4;
            case 0x1237F8u: goto label_1237f8;
            case 0x1237FCu: goto label_1237fc;
            case 0x123800u: goto label_123800;
            case 0x123804u: goto label_123804;
            case 0x123808u: goto label_123808;
            case 0x12380Cu: goto label_12380c;
            case 0x123810u: goto label_123810;
            case 0x123814u: goto label_123814;
            case 0x123818u: goto label_123818;
            case 0x12381Cu: goto label_12381c;
            case 0x123820u: goto label_123820;
            case 0x123824u: goto label_123824;
            case 0x123828u: goto label_123828;
            case 0x12382Cu: goto label_12382c;
            case 0x123830u: goto label_123830;
            case 0x123834u: goto label_123834;
            case 0x123838u: goto label_123838;
            case 0x12383Cu: goto label_12383c;
            case 0x123840u: goto label_123840;
            case 0x123844u: goto label_123844;
            case 0x123848u: goto label_123848;
            case 0x12384Cu: goto label_12384c;
            case 0x123850u: goto label_123850;
            case 0x123854u: goto label_123854;
            case 0x123858u: goto label_123858;
            case 0x12385Cu: goto label_12385c;
            case 0x123860u: goto label_123860;
            case 0x123864u: goto label_123864;
            case 0x123868u: goto label_123868;
            case 0x12386Cu: goto label_12386c;
            case 0x123870u: goto label_123870;
            case 0x123874u: goto label_123874;
            case 0x123878u: goto label_123878;
            case 0x12387Cu: goto label_12387c;
            case 0x123880u: goto label_123880;
            case 0x123884u: goto label_123884;
            case 0x123888u: goto label_123888;
            case 0x12388Cu: goto label_12388c;
            case 0x123890u: goto label_123890;
            case 0x123894u: goto label_123894;
            case 0x123898u: goto label_123898;
            case 0x12389Cu: goto label_12389c;
            case 0x1238A0u: goto label_1238a0;
            case 0x1238A4u: goto label_1238a4;
            case 0x1238A8u: goto label_1238a8;
            case 0x1238ACu: goto label_1238ac;
            case 0x1238B0u: goto label_1238b0;
            case 0x1238B4u: goto label_1238b4;
            case 0x1238B8u: goto label_1238b8;
            case 0x1238BCu: goto label_1238bc;
            case 0x1238C0u: goto label_1238c0;
            case 0x1238C4u: goto label_1238c4;
            case 0x1238C8u: goto label_1238c8;
            case 0x1238CCu: goto label_1238cc;
            case 0x1238D0u: goto label_1238d0;
            case 0x1238D4u: goto label_1238d4;
            case 0x1238D8u: goto label_1238d8;
            case 0x1238DCu: goto label_1238dc;
            case 0x1238E0u: goto label_1238e0;
            case 0x1238E4u: goto label_1238e4;
            case 0x1238E8u: goto label_1238e8;
            case 0x1238ECu: goto label_1238ec;
            case 0x1238F0u: goto label_1238f0;
            case 0x1238F4u: goto label_1238f4;
            case 0x1238F8u: goto label_1238f8;
            case 0x1238FCu: goto label_1238fc;
            case 0x123900u: goto label_123900;
            case 0x123904u: goto label_123904;
            case 0x123908u: goto label_123908;
            case 0x12390Cu: goto label_12390c;
            case 0x123910u: goto label_123910;
            case 0x123914u: goto label_123914;
            case 0x123918u: goto label_123918;
            case 0x12391Cu: goto label_12391c;
            case 0x123920u: goto label_123920;
            case 0x123924u: goto label_123924;
            case 0x123928u: goto label_123928;
            case 0x12392Cu: goto label_12392c;
            case 0x123930u: goto label_123930;
            case 0x123934u: goto label_123934;
            case 0x123938u: goto label_123938;
            case 0x12393Cu: goto label_12393c;
            case 0x123940u: goto label_123940;
            case 0x123944u: goto label_123944;
            case 0x123948u: goto label_123948;
            case 0x12394Cu: goto label_12394c;
            case 0x123950u: goto label_123950;
            case 0x123954u: goto label_123954;
            case 0x123958u: goto label_123958;
            case 0x12395Cu: goto label_12395c;
            case 0x123960u: goto label_123960;
            case 0x123964u: goto label_123964;
            case 0x123968u: goto label_123968;
            case 0x12396Cu: goto label_12396c;
            case 0x123970u: goto label_123970;
            case 0x123974u: goto label_123974;
            case 0x123978u: goto label_123978;
            case 0x12397Cu: goto label_12397c;
            case 0x123980u: goto label_123980;
            case 0x123984u: goto label_123984;
            case 0x123988u: goto label_123988;
            case 0x12398Cu: goto label_12398c;
            case 0x123990u: goto label_123990;
            case 0x123994u: goto label_123994;
            case 0x123998u: goto label_123998;
            case 0x12399Cu: goto label_12399c;
            case 0x1239A0u: goto label_1239a0;
            case 0x1239A4u: goto label_1239a4;
            case 0x1239A8u: goto label_1239a8;
            case 0x1239ACu: goto label_1239ac;
            case 0x1239B0u: goto label_1239b0;
            case 0x1239B4u: goto label_1239b4;
            case 0x1239B8u: goto label_1239b8;
            case 0x1239BCu: goto label_1239bc;
            case 0x1239C0u: goto label_1239c0;
            case 0x1239C4u: goto label_1239c4;
            case 0x1239C8u: goto label_1239c8;
            case 0x1239CCu: goto label_1239cc;
            case 0x1239D0u: goto label_1239d0;
            case 0x1239D4u: goto label_1239d4;
            case 0x1239D8u: goto label_1239d8;
            case 0x1239DCu: goto label_1239dc;
            case 0x1239E0u: goto label_1239e0;
            case 0x1239E4u: goto label_1239e4;
            case 0x1239E8u: goto label_1239e8;
            case 0x1239ECu: goto label_1239ec;
            case 0x1239F0u: goto label_1239f0;
            case 0x1239F4u: goto label_1239f4;
            case 0x1239F8u: goto label_1239f8;
            case 0x1239FCu: goto label_1239fc;
            case 0x123A00u: goto label_123a00;
            case 0x123A04u: goto label_123a04;
            case 0x123A08u: goto label_123a08;
            case 0x123A0Cu: goto label_123a0c;
            case 0x123A10u: goto label_123a10;
            case 0x123A14u: goto label_123a14;
            case 0x123A18u: goto label_123a18;
            case 0x123A1Cu: goto label_123a1c;
            case 0x123A20u: goto label_123a20;
            case 0x123A24u: goto label_123a24;
            case 0x123A28u: goto label_123a28;
            case 0x123A2Cu: goto label_123a2c;
            case 0x123A30u: goto label_123a30;
            case 0x123A34u: goto label_123a34;
            case 0x123A38u: goto label_123a38;
            case 0x123A3Cu: goto label_123a3c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x123878u; }
            if (ctx->pc != 0x123878u) { return; }
        }
    }
    ctx->pc = 0x123878u;
label_123878:
    // 0x123878: 0x24020003
    ctx->pc = 0x123878u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_12387c:
    // 0x12387c: 0xae020004
    ctx->pc = 0x12387cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_123880:
    // 0x123880: 0xdfb00000
    ctx->pc = 0x123880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_123884:
    // 0x123884: 0xdfb10008
    ctx->pc = 0x123884u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_123888:
    // 0x123888: 0xdfb20010
    ctx->pc = 0x123888u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12388c:
    // 0x12388c: 0xdfbf0018
    ctx->pc = 0x12388cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_123890:
    // 0x123890: 0x3e00008
label_123894:
    if (ctx->pc == 0x123894u) {
        ctx->pc = 0x123894u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x123898u;
        goto label_123898;
    }
    ctx->pc = 0x123890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123894u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1234D8u: goto label_1234d8;
            case 0x1234DCu: goto label_1234dc;
            case 0x1234E0u: goto label_1234e0;
            case 0x1234E4u: goto label_1234e4;
            case 0x1234E8u: goto label_1234e8;
            case 0x1234ECu: goto label_1234ec;
            case 0x1234F0u: goto label_1234f0;
            case 0x1234F4u: goto label_1234f4;
            case 0x1234F8u: goto label_1234f8;
            case 0x1234FCu: goto label_1234fc;
            case 0x123500u: goto label_123500;
            case 0x123504u: goto label_123504;
            case 0x123508u: goto label_123508;
            case 0x12350Cu: goto label_12350c;
            case 0x123510u: goto label_123510;
            case 0x123514u: goto label_123514;
            case 0x123518u: goto label_123518;
            case 0x12351Cu: goto label_12351c;
            case 0x123520u: goto label_123520;
            case 0x123524u: goto label_123524;
            case 0x123528u: goto label_123528;
            case 0x12352Cu: goto label_12352c;
            case 0x123530u: goto label_123530;
            case 0x123534u: goto label_123534;
            case 0x123538u: goto label_123538;
            case 0x12353Cu: goto label_12353c;
            case 0x123540u: goto label_123540;
            case 0x123544u: goto label_123544;
            case 0x123548u: goto label_123548;
            case 0x12354Cu: goto label_12354c;
            case 0x123550u: goto label_123550;
            case 0x123554u: goto label_123554;
            case 0x123558u: goto label_123558;
            case 0x12355Cu: goto label_12355c;
            case 0x123560u: goto label_123560;
            case 0x123564u: goto label_123564;
            case 0x123568u: goto label_123568;
            case 0x12356Cu: goto label_12356c;
            case 0x123570u: goto label_123570;
            case 0x123574u: goto label_123574;
            case 0x123578u: goto label_123578;
            case 0x12357Cu: goto label_12357c;
            case 0x123580u: goto label_123580;
            case 0x123584u: goto label_123584;
            case 0x123588u: goto label_123588;
            case 0x12358Cu: goto label_12358c;
            case 0x123590u: goto label_123590;
            case 0x123594u: goto label_123594;
            case 0x123598u: goto label_123598;
            case 0x12359Cu: goto label_12359c;
            case 0x1235A0u: goto label_1235a0;
            case 0x1235A4u: goto label_1235a4;
            case 0x1235A8u: goto label_1235a8;
            case 0x1235ACu: goto label_1235ac;
            case 0x1235B0u: goto label_1235b0;
            case 0x1235B4u: goto label_1235b4;
            case 0x1235B8u: goto label_1235b8;
            case 0x1235BCu: goto label_1235bc;
            case 0x1235C0u: goto label_1235c0;
            case 0x1235C4u: goto label_1235c4;
            case 0x1235C8u: goto label_1235c8;
            case 0x1235CCu: goto label_1235cc;
            case 0x1235D0u: goto label_1235d0;
            case 0x1235D4u: goto label_1235d4;
            case 0x1235D8u: goto label_1235d8;
            case 0x1235DCu: goto label_1235dc;
            case 0x1235E0u: goto label_1235e0;
            case 0x1235E4u: goto label_1235e4;
            case 0x1235E8u: goto label_1235e8;
            case 0x1235ECu: goto label_1235ec;
            case 0x1235F0u: goto label_1235f0;
            case 0x1235F4u: goto label_1235f4;
            case 0x1235F8u: goto label_1235f8;
            case 0x1235FCu: goto label_1235fc;
            case 0x123600u: goto label_123600;
            case 0x123604u: goto label_123604;
            case 0x123608u: goto label_123608;
            case 0x12360Cu: goto label_12360c;
            case 0x123610u: goto label_123610;
            case 0x123614u: goto label_123614;
            case 0x123618u: goto label_123618;
            case 0x12361Cu: goto label_12361c;
            case 0x123620u: goto label_123620;
            case 0x123624u: goto label_123624;
            case 0x123628u: goto label_123628;
            case 0x12362Cu: goto label_12362c;
            case 0x123630u: goto label_123630;
            case 0x123634u: goto label_123634;
            case 0x123638u: goto label_123638;
            case 0x12363Cu: goto label_12363c;
            case 0x123640u: goto label_123640;
            case 0x123644u: goto label_123644;
            case 0x123648u: goto label_123648;
            case 0x12364Cu: goto label_12364c;
            case 0x123650u: goto label_123650;
            case 0x123654u: goto label_123654;
            case 0x123658u: goto label_123658;
            case 0x12365Cu: goto label_12365c;
            case 0x123660u: goto label_123660;
            case 0x123664u: goto label_123664;
            case 0x123668u: goto label_123668;
            case 0x12366Cu: goto label_12366c;
            case 0x123670u: goto label_123670;
            case 0x123674u: goto label_123674;
            case 0x123678u: goto label_123678;
            case 0x12367Cu: goto label_12367c;
            case 0x123680u: goto label_123680;
            case 0x123684u: goto label_123684;
            case 0x123688u: goto label_123688;
            case 0x12368Cu: goto label_12368c;
            case 0x123690u: goto label_123690;
            case 0x123694u: goto label_123694;
            case 0x123698u: goto label_123698;
            case 0x12369Cu: goto label_12369c;
            case 0x1236A0u: goto label_1236a0;
            case 0x1236A4u: goto label_1236a4;
            case 0x1236A8u: goto label_1236a8;
            case 0x1236ACu: goto label_1236ac;
            case 0x1236B0u: goto label_1236b0;
            case 0x1236B4u: goto label_1236b4;
            case 0x1236B8u: goto label_1236b8;
            case 0x1236BCu: goto label_1236bc;
            case 0x1236C0u: goto label_1236c0;
            case 0x1236C4u: goto label_1236c4;
            case 0x1236C8u: goto label_1236c8;
            case 0x1236CCu: goto label_1236cc;
            case 0x1236D0u: goto label_1236d0;
            case 0x1236D4u: goto label_1236d4;
            case 0x1236D8u: goto label_1236d8;
            case 0x1236DCu: goto label_1236dc;
            case 0x1236E0u: goto label_1236e0;
            case 0x1236E4u: goto label_1236e4;
            case 0x1236E8u: goto label_1236e8;
            case 0x1236ECu: goto label_1236ec;
            case 0x1236F0u: goto label_1236f0;
            case 0x1236F4u: goto label_1236f4;
            case 0x1236F8u: goto label_1236f8;
            case 0x1236FCu: goto label_1236fc;
            case 0x123700u: goto label_123700;
            case 0x123704u: goto label_123704;
            case 0x123708u: goto label_123708;
            case 0x12370Cu: goto label_12370c;
            case 0x123710u: goto label_123710;
            case 0x123714u: goto label_123714;
            case 0x123718u: goto label_123718;
            case 0x12371Cu: goto label_12371c;
            case 0x123720u: goto label_123720;
            case 0x123724u: goto label_123724;
            case 0x123728u: goto label_123728;
            case 0x12372Cu: goto label_12372c;
            case 0x123730u: goto label_123730;
            case 0x123734u: goto label_123734;
            case 0x123738u: goto label_123738;
            case 0x12373Cu: goto label_12373c;
            case 0x123740u: goto label_123740;
            case 0x123744u: goto label_123744;
            case 0x123748u: goto label_123748;
            case 0x12374Cu: goto label_12374c;
            case 0x123750u: goto label_123750;
            case 0x123754u: goto label_123754;
            case 0x123758u: goto label_123758;
            case 0x12375Cu: goto label_12375c;
            case 0x123760u: goto label_123760;
            case 0x123764u: goto label_123764;
            case 0x123768u: goto label_123768;
            case 0x12376Cu: goto label_12376c;
            case 0x123770u: goto label_123770;
            case 0x123774u: goto label_123774;
            case 0x123778u: goto label_123778;
            case 0x12377Cu: goto label_12377c;
            case 0x123780u: goto label_123780;
            case 0x123784u: goto label_123784;
            case 0x123788u: goto label_123788;
            case 0x12378Cu: goto label_12378c;
            case 0x123790u: goto label_123790;
            case 0x123794u: goto label_123794;
            case 0x123798u: goto label_123798;
            case 0x12379Cu: goto label_12379c;
            case 0x1237A0u: goto label_1237a0;
            case 0x1237A4u: goto label_1237a4;
            case 0x1237A8u: goto label_1237a8;
            case 0x1237ACu: goto label_1237ac;
            case 0x1237B0u: goto label_1237b0;
            case 0x1237B4u: goto label_1237b4;
            case 0x1237B8u: goto label_1237b8;
            case 0x1237BCu: goto label_1237bc;
            case 0x1237C0u: goto label_1237c0;
            case 0x1237C4u: goto label_1237c4;
            case 0x1237C8u: goto label_1237c8;
            case 0x1237CCu: goto label_1237cc;
            case 0x1237D0u: goto label_1237d0;
            case 0x1237D4u: goto label_1237d4;
            case 0x1237D8u: goto label_1237d8;
            case 0x1237DCu: goto label_1237dc;
            case 0x1237E0u: goto label_1237e0;
            case 0x1237E4u: goto label_1237e4;
            case 0x1237E8u: goto label_1237e8;
            case 0x1237ECu: goto label_1237ec;
            case 0x1237F0u: goto label_1237f0;
            case 0x1237F4u: goto label_1237f4;
            case 0x1237F8u: goto label_1237f8;
            case 0x1237FCu: goto label_1237fc;
            case 0x123800u: goto label_123800;
            case 0x123804u: goto label_123804;
            case 0x123808u: goto label_123808;
            case 0x12380Cu: goto label_12380c;
            case 0x123810u: goto label_123810;
            case 0x123814u: goto label_123814;
            case 0x123818u: goto label_123818;
            case 0x12381Cu: goto label_12381c;
            case 0x123820u: goto label_123820;
            case 0x123824u: goto label_123824;
            case 0x123828u: goto label_123828;
            case 0x12382Cu: goto label_12382c;
            case 0x123830u: goto label_123830;
            case 0x123834u: goto label_123834;
            case 0x123838u: goto label_123838;
            case 0x12383Cu: goto label_12383c;
            case 0x123840u: goto label_123840;
            case 0x123844u: goto label_123844;
            case 0x123848u: goto label_123848;
            case 0x12384Cu: goto label_12384c;
            case 0x123850u: goto label_123850;
            case 0x123854u: goto label_123854;
            case 0x123858u: goto label_123858;
            case 0x12385Cu: goto label_12385c;
            case 0x123860u: goto label_123860;
            case 0x123864u: goto label_123864;
            case 0x123868u: goto label_123868;
            case 0x12386Cu: goto label_12386c;
            case 0x123870u: goto label_123870;
            case 0x123874u: goto label_123874;
            case 0x123878u: goto label_123878;
            case 0x12387Cu: goto label_12387c;
            case 0x123880u: goto label_123880;
            case 0x123884u: goto label_123884;
            case 0x123888u: goto label_123888;
            case 0x12388Cu: goto label_12388c;
            case 0x123890u: goto label_123890;
            case 0x123894u: goto label_123894;
            case 0x123898u: goto label_123898;
            case 0x12389Cu: goto label_12389c;
            case 0x1238A0u: goto label_1238a0;
            case 0x1238A4u: goto label_1238a4;
            case 0x1238A8u: goto label_1238a8;
            case 0x1238ACu: goto label_1238ac;
            case 0x1238B0u: goto label_1238b0;
            case 0x1238B4u: goto label_1238b4;
            case 0x1238B8u: goto label_1238b8;
            case 0x1238BCu: goto label_1238bc;
            case 0x1238C0u: goto label_1238c0;
            case 0x1238C4u: goto label_1238c4;
            case 0x1238C8u: goto label_1238c8;
            case 0x1238CCu: goto label_1238cc;
            case 0x1238D0u: goto label_1238d0;
            case 0x1238D4u: goto label_1238d4;
            case 0x1238D8u: goto label_1238d8;
            case 0x1238DCu: goto label_1238dc;
            case 0x1238E0u: goto label_1238e0;
            case 0x1238E4u: goto label_1238e4;
            case 0x1238E8u: goto label_1238e8;
            case 0x1238ECu: goto label_1238ec;
            case 0x1238F0u: goto label_1238f0;
            case 0x1238F4u: goto label_1238f4;
            case 0x1238F8u: goto label_1238f8;
            case 0x1238FCu: goto label_1238fc;
            case 0x123900u: goto label_123900;
            case 0x123904u: goto label_123904;
            case 0x123908u: goto label_123908;
            case 0x12390Cu: goto label_12390c;
            case 0x123910u: goto label_123910;
            case 0x123914u: goto label_123914;
            case 0x123918u: goto label_123918;
            case 0x12391Cu: goto label_12391c;
            case 0x123920u: goto label_123920;
            case 0x123924u: goto label_123924;
            case 0x123928u: goto label_123928;
            case 0x12392Cu: goto label_12392c;
            case 0x123930u: goto label_123930;
            case 0x123934u: goto label_123934;
            case 0x123938u: goto label_123938;
            case 0x12393Cu: goto label_12393c;
            case 0x123940u: goto label_123940;
            case 0x123944u: goto label_123944;
            case 0x123948u: goto label_123948;
            case 0x12394Cu: goto label_12394c;
            case 0x123950u: goto label_123950;
            case 0x123954u: goto label_123954;
            case 0x123958u: goto label_123958;
            case 0x12395Cu: goto label_12395c;
            case 0x123960u: goto label_123960;
            case 0x123964u: goto label_123964;
            case 0x123968u: goto label_123968;
            case 0x12396Cu: goto label_12396c;
            case 0x123970u: goto label_123970;
            case 0x123974u: goto label_123974;
            case 0x123978u: goto label_123978;
            case 0x12397Cu: goto label_12397c;
            case 0x123980u: goto label_123980;
            case 0x123984u: goto label_123984;
            case 0x123988u: goto label_123988;
            case 0x12398Cu: goto label_12398c;
            case 0x123990u: goto label_123990;
            case 0x123994u: goto label_123994;
            case 0x123998u: goto label_123998;
            case 0x12399Cu: goto label_12399c;
            case 0x1239A0u: goto label_1239a0;
            case 0x1239A4u: goto label_1239a4;
            case 0x1239A8u: goto label_1239a8;
            case 0x1239ACu: goto label_1239ac;
            case 0x1239B0u: goto label_1239b0;
            case 0x1239B4u: goto label_1239b4;
            case 0x1239B8u: goto label_1239b8;
            case 0x1239BCu: goto label_1239bc;
            case 0x1239C0u: goto label_1239c0;
            case 0x1239C4u: goto label_1239c4;
            case 0x1239C8u: goto label_1239c8;
            case 0x1239CCu: goto label_1239cc;
            case 0x1239D0u: goto label_1239d0;
            case 0x1239D4u: goto label_1239d4;
            case 0x1239D8u: goto label_1239d8;
            case 0x1239DCu: goto label_1239dc;
            case 0x1239E0u: goto label_1239e0;
            case 0x1239E4u: goto label_1239e4;
            case 0x1239E8u: goto label_1239e8;
            case 0x1239ECu: goto label_1239ec;
            case 0x1239F0u: goto label_1239f0;
            case 0x1239F4u: goto label_1239f4;
            case 0x1239F8u: goto label_1239f8;
            case 0x1239FCu: goto label_1239fc;
            case 0x123A00u: goto label_123a00;
            case 0x123A04u: goto label_123a04;
            case 0x123A08u: goto label_123a08;
            case 0x123A0Cu: goto label_123a0c;
            case 0x123A10u: goto label_123a10;
            case 0x123A14u: goto label_123a14;
            case 0x123A18u: goto label_123a18;
            case 0x123A1Cu: goto label_123a1c;
            case 0x123A20u: goto label_123a20;
            case 0x123A24u: goto label_123a24;
            case 0x123A28u: goto label_123a28;
            case 0x123A2Cu: goto label_123a2c;
            case 0x123A30u: goto label_123a30;
            case 0x123A34u: goto label_123a34;
            case 0x123A38u: goto label_123a38;
            case 0x123A3Cu: goto label_123a3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x123898u;
label_123898:
    // 0x123898: 0x27bdffe0
    ctx->pc = 0x123898u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_12389c:
    // 0x12389c: 0x24020001
    ctx->pc = 0x12389cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1238a0:
    // 0x1238a0: 0xffb00000
    ctx->pc = 0x1238a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1238a4:
    // 0x1238a4: 0x80802d
    ctx->pc = 0x1238a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1238a8:
    // 0x1238a8: 0xffb10008
    ctx->pc = 0x1238a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1238ac:
    // 0x1238ac: 0x26110048
    ctx->pc = 0x1238acu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 72));
label_1238b0:
    // 0x1238b0: 0xffb20010
    ctx->pc = 0x1238b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1238b4:
    // 0x1238b4: 0xffbf0018
    ctx->pc = 0x1238b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1238b8:
    // 0x1238b8: 0x8e030004
    ctx->pc = 0x1238b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1238bc:
    // 0x1238bc: 0x14620046
label_1238c0:
    if (ctx->pc == 0x1238C0u) {
        ctx->pc = 0x1238C0u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1238C4u;
        goto label_1238c4;
    }
    ctx->pc = 0x1238BCu;
    {
        const bool branch_taken_0x1238bc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1238C0u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        if (branch_taken_0x1238bc) {
            ctx->pc = 0x1239D8u;
            goto label_1239d8;
        }
    }
    ctx->pc = 0x1238C4u;
label_1238c4:
    // 0x1238c4: 0xc04d3e6
label_1238c8:
    if (ctx->pc == 0x1238C8u) {
        ctx->pc = 0x1238C8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x1238CCu;
        goto label_1238cc;
    }
    ctx->pc = 0x1238C4u;
    SET_GPR_U32(ctx, 31, 0x1238CCu);
    ctx->pc = 0x1238C8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x134F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00134F98_0x134f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1238CCu; }
    }
    if (ctx->pc != 0x1238CCu) { return; }
    ctx->pc = 0x1238CCu;
label_1238cc:
    // 0x1238cc: 0x54400042
label_1238d0:
    if (ctx->pc == 0x1238D0u) {
        ctx->pc = 0x1238D0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1238D4u;
        goto label_1238d4;
    }
    ctx->pc = 0x1238CCu;
    {
        const bool branch_taken_0x1238cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1238cc) {
            ctx->pc = 0x1238D0u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x1239D8u;
            goto label_1239d8;
        }
    }
    ctx->pc = 0x1238D4u;
label_1238d4:
    // 0x1238d4: 0x8e04007c
    ctx->pc = 0x1238d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_1238d8:
    // 0x1238d8: 0x26050068
    ctx->pc = 0x1238d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 104));
label_1238dc:
    // 0x1238dc: 0x8e020078
    ctx->pc = 0x1238dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_1238e0:
    // 0x1238e0: 0x2606006c
    ctx->pc = 0x1238e0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 108));
label_1238e4:
    // 0x1238e4: 0x40f809
label_1238e8:
    if (ctx->pc == 0x1238E8u) {
        ctx->pc = 0x1238E8u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x1238ECu;
        goto label_1238ec;
    }
    ctx->pc = 0x1238E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1238ECu);
        ctx->pc = 0x1238E8u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1234D8u: goto label_1234d8;
            case 0x1234DCu: goto label_1234dc;
            case 0x1234E0u: goto label_1234e0;
            case 0x1234E4u: goto label_1234e4;
            case 0x1234E8u: goto label_1234e8;
            case 0x1234ECu: goto label_1234ec;
            case 0x1234F0u: goto label_1234f0;
            case 0x1234F4u: goto label_1234f4;
            case 0x1234F8u: goto label_1234f8;
            case 0x1234FCu: goto label_1234fc;
            case 0x123500u: goto label_123500;
            case 0x123504u: goto label_123504;
            case 0x123508u: goto label_123508;
            case 0x12350Cu: goto label_12350c;
            case 0x123510u: goto label_123510;
            case 0x123514u: goto label_123514;
            case 0x123518u: goto label_123518;
            case 0x12351Cu: goto label_12351c;
            case 0x123520u: goto label_123520;
            case 0x123524u: goto label_123524;
            case 0x123528u: goto label_123528;
            case 0x12352Cu: goto label_12352c;
            case 0x123530u: goto label_123530;
            case 0x123534u: goto label_123534;
            case 0x123538u: goto label_123538;
            case 0x12353Cu: goto label_12353c;
            case 0x123540u: goto label_123540;
            case 0x123544u: goto label_123544;
            case 0x123548u: goto label_123548;
            case 0x12354Cu: goto label_12354c;
            case 0x123550u: goto label_123550;
            case 0x123554u: goto label_123554;
            case 0x123558u: goto label_123558;
            case 0x12355Cu: goto label_12355c;
            case 0x123560u: goto label_123560;
            case 0x123564u: goto label_123564;
            case 0x123568u: goto label_123568;
            case 0x12356Cu: goto label_12356c;
            case 0x123570u: goto label_123570;
            case 0x123574u: goto label_123574;
            case 0x123578u: goto label_123578;
            case 0x12357Cu: goto label_12357c;
            case 0x123580u: goto label_123580;
            case 0x123584u: goto label_123584;
            case 0x123588u: goto label_123588;
            case 0x12358Cu: goto label_12358c;
            case 0x123590u: goto label_123590;
            case 0x123594u: goto label_123594;
            case 0x123598u: goto label_123598;
            case 0x12359Cu: goto label_12359c;
            case 0x1235A0u: goto label_1235a0;
            case 0x1235A4u: goto label_1235a4;
            case 0x1235A8u: goto label_1235a8;
            case 0x1235ACu: goto label_1235ac;
            case 0x1235B0u: goto label_1235b0;
            case 0x1235B4u: goto label_1235b4;
            case 0x1235B8u: goto label_1235b8;
            case 0x1235BCu: goto label_1235bc;
            case 0x1235C0u: goto label_1235c0;
            case 0x1235C4u: goto label_1235c4;
            case 0x1235C8u: goto label_1235c8;
            case 0x1235CCu: goto label_1235cc;
            case 0x1235D0u: goto label_1235d0;
            case 0x1235D4u: goto label_1235d4;
            case 0x1235D8u: goto label_1235d8;
            case 0x1235DCu: goto label_1235dc;
            case 0x1235E0u: goto label_1235e0;
            case 0x1235E4u: goto label_1235e4;
            case 0x1235E8u: goto label_1235e8;
            case 0x1235ECu: goto label_1235ec;
            case 0x1235F0u: goto label_1235f0;
            case 0x1235F4u: goto label_1235f4;
            case 0x1235F8u: goto label_1235f8;
            case 0x1235FCu: goto label_1235fc;
            case 0x123600u: goto label_123600;
            case 0x123604u: goto label_123604;
            case 0x123608u: goto label_123608;
            case 0x12360Cu: goto label_12360c;
            case 0x123610u: goto label_123610;
            case 0x123614u: goto label_123614;
            case 0x123618u: goto label_123618;
            case 0x12361Cu: goto label_12361c;
            case 0x123620u: goto label_123620;
            case 0x123624u: goto label_123624;
            case 0x123628u: goto label_123628;
            case 0x12362Cu: goto label_12362c;
            case 0x123630u: goto label_123630;
            case 0x123634u: goto label_123634;
            case 0x123638u: goto label_123638;
            case 0x12363Cu: goto label_12363c;
            case 0x123640u: goto label_123640;
            case 0x123644u: goto label_123644;
            case 0x123648u: goto label_123648;
            case 0x12364Cu: goto label_12364c;
            case 0x123650u: goto label_123650;
            case 0x123654u: goto label_123654;
            case 0x123658u: goto label_123658;
            case 0x12365Cu: goto label_12365c;
            case 0x123660u: goto label_123660;
            case 0x123664u: goto label_123664;
            case 0x123668u: goto label_123668;
            case 0x12366Cu: goto label_12366c;
            case 0x123670u: goto label_123670;
            case 0x123674u: goto label_123674;
            case 0x123678u: goto label_123678;
            case 0x12367Cu: goto label_12367c;
            case 0x123680u: goto label_123680;
            case 0x123684u: goto label_123684;
            case 0x123688u: goto label_123688;
            case 0x12368Cu: goto label_12368c;
            case 0x123690u: goto label_123690;
            case 0x123694u: goto label_123694;
            case 0x123698u: goto label_123698;
            case 0x12369Cu: goto label_12369c;
            case 0x1236A0u: goto label_1236a0;
            case 0x1236A4u: goto label_1236a4;
            case 0x1236A8u: goto label_1236a8;
            case 0x1236ACu: goto label_1236ac;
            case 0x1236B0u: goto label_1236b0;
            case 0x1236B4u: goto label_1236b4;
            case 0x1236B8u: goto label_1236b8;
            case 0x1236BCu: goto label_1236bc;
            case 0x1236C0u: goto label_1236c0;
            case 0x1236C4u: goto label_1236c4;
            case 0x1236C8u: goto label_1236c8;
            case 0x1236CCu: goto label_1236cc;
            case 0x1236D0u: goto label_1236d0;
            case 0x1236D4u: goto label_1236d4;
            case 0x1236D8u: goto label_1236d8;
            case 0x1236DCu: goto label_1236dc;
            case 0x1236E0u: goto label_1236e0;
            case 0x1236E4u: goto label_1236e4;
            case 0x1236E8u: goto label_1236e8;
            case 0x1236ECu: goto label_1236ec;
            case 0x1236F0u: goto label_1236f0;
            case 0x1236F4u: goto label_1236f4;
            case 0x1236F8u: goto label_1236f8;
            case 0x1236FCu: goto label_1236fc;
            case 0x123700u: goto label_123700;
            case 0x123704u: goto label_123704;
            case 0x123708u: goto label_123708;
            case 0x12370Cu: goto label_12370c;
            case 0x123710u: goto label_123710;
            case 0x123714u: goto label_123714;
            case 0x123718u: goto label_123718;
            case 0x12371Cu: goto label_12371c;
            case 0x123720u: goto label_123720;
            case 0x123724u: goto label_123724;
            case 0x123728u: goto label_123728;
            case 0x12372Cu: goto label_12372c;
            case 0x123730u: goto label_123730;
            case 0x123734u: goto label_123734;
            case 0x123738u: goto label_123738;
            case 0x12373Cu: goto label_12373c;
            case 0x123740u: goto label_123740;
            case 0x123744u: goto label_123744;
            case 0x123748u: goto label_123748;
            case 0x12374Cu: goto label_12374c;
            case 0x123750u: goto label_123750;
            case 0x123754u: goto label_123754;
            case 0x123758u: goto label_123758;
            case 0x12375Cu: goto label_12375c;
            case 0x123760u: goto label_123760;
            case 0x123764u: goto label_123764;
            case 0x123768u: goto label_123768;
            case 0x12376Cu: goto label_12376c;
            case 0x123770u: goto label_123770;
            case 0x123774u: goto label_123774;
            case 0x123778u: goto label_123778;
            case 0x12377Cu: goto label_12377c;
            case 0x123780u: goto label_123780;
            case 0x123784u: goto label_123784;
            case 0x123788u: goto label_123788;
            case 0x12378Cu: goto label_12378c;
            case 0x123790u: goto label_123790;
            case 0x123794u: goto label_123794;
            case 0x123798u: goto label_123798;
            case 0x12379Cu: goto label_12379c;
            case 0x1237A0u: goto label_1237a0;
            case 0x1237A4u: goto label_1237a4;
            case 0x1237A8u: goto label_1237a8;
            case 0x1237ACu: goto label_1237ac;
            case 0x1237B0u: goto label_1237b0;
            case 0x1237B4u: goto label_1237b4;
            case 0x1237B8u: goto label_1237b8;
            case 0x1237BCu: goto label_1237bc;
            case 0x1237C0u: goto label_1237c0;
            case 0x1237C4u: goto label_1237c4;
            case 0x1237C8u: goto label_1237c8;
            case 0x1237CCu: goto label_1237cc;
            case 0x1237D0u: goto label_1237d0;
            case 0x1237D4u: goto label_1237d4;
            case 0x1237D8u: goto label_1237d8;
            case 0x1237DCu: goto label_1237dc;
            case 0x1237E0u: goto label_1237e0;
            case 0x1237E4u: goto label_1237e4;
            case 0x1237E8u: goto label_1237e8;
            case 0x1237ECu: goto label_1237ec;
            case 0x1237F0u: goto label_1237f0;
            case 0x1237F4u: goto label_1237f4;
            case 0x1237F8u: goto label_1237f8;
            case 0x1237FCu: goto label_1237fc;
            case 0x123800u: goto label_123800;
            case 0x123804u: goto label_123804;
            case 0x123808u: goto label_123808;
            case 0x12380Cu: goto label_12380c;
            case 0x123810u: goto label_123810;
            case 0x123814u: goto label_123814;
            case 0x123818u: goto label_123818;
            case 0x12381Cu: goto label_12381c;
            case 0x123820u: goto label_123820;
            case 0x123824u: goto label_123824;
            case 0x123828u: goto label_123828;
            case 0x12382Cu: goto label_12382c;
            case 0x123830u: goto label_123830;
            case 0x123834u: goto label_123834;
            case 0x123838u: goto label_123838;
            case 0x12383Cu: goto label_12383c;
            case 0x123840u: goto label_123840;
            case 0x123844u: goto label_123844;
            case 0x123848u: goto label_123848;
            case 0x12384Cu: goto label_12384c;
            case 0x123850u: goto label_123850;
            case 0x123854u: goto label_123854;
            case 0x123858u: goto label_123858;
            case 0x12385Cu: goto label_12385c;
            case 0x123860u: goto label_123860;
            case 0x123864u: goto label_123864;
            case 0x123868u: goto label_123868;
            case 0x12386Cu: goto label_12386c;
            case 0x123870u: goto label_123870;
            case 0x123874u: goto label_123874;
            case 0x123878u: goto label_123878;
            case 0x12387Cu: goto label_12387c;
            case 0x123880u: goto label_123880;
            case 0x123884u: goto label_123884;
            case 0x123888u: goto label_123888;
            case 0x12388Cu: goto label_12388c;
            case 0x123890u: goto label_123890;
            case 0x123894u: goto label_123894;
            case 0x123898u: goto label_123898;
            case 0x12389Cu: goto label_12389c;
            case 0x1238A0u: goto label_1238a0;
            case 0x1238A4u: goto label_1238a4;
            case 0x1238A8u: goto label_1238a8;
            case 0x1238ACu: goto label_1238ac;
            case 0x1238B0u: goto label_1238b0;
            case 0x1238B4u: goto label_1238b4;
            case 0x1238B8u: goto label_1238b8;
            case 0x1238BCu: goto label_1238bc;
            case 0x1238C0u: goto label_1238c0;
            case 0x1238C4u: goto label_1238c4;
            case 0x1238C8u: goto label_1238c8;
            case 0x1238CCu: goto label_1238cc;
            case 0x1238D0u: goto label_1238d0;
            case 0x1238D4u: goto label_1238d4;
            case 0x1238D8u: goto label_1238d8;
            case 0x1238DCu: goto label_1238dc;
            case 0x1238E0u: goto label_1238e0;
            case 0x1238E4u: goto label_1238e4;
            case 0x1238E8u: goto label_1238e8;
            case 0x1238ECu: goto label_1238ec;
            case 0x1238F0u: goto label_1238f0;
            case 0x1238F4u: goto label_1238f4;
            case 0x1238F8u: goto label_1238f8;
            case 0x1238FCu: goto label_1238fc;
            case 0x123900u: goto label_123900;
            case 0x123904u: goto label_123904;
            case 0x123908u: goto label_123908;
            case 0x12390Cu: goto label_12390c;
            case 0x123910u: goto label_123910;
            case 0x123914u: goto label_123914;
            case 0x123918u: goto label_123918;
            case 0x12391Cu: goto label_12391c;
            case 0x123920u: goto label_123920;
            case 0x123924u: goto label_123924;
            case 0x123928u: goto label_123928;
            case 0x12392Cu: goto label_12392c;
            case 0x123930u: goto label_123930;
            case 0x123934u: goto label_123934;
            case 0x123938u: goto label_123938;
            case 0x12393Cu: goto label_12393c;
            case 0x123940u: goto label_123940;
            case 0x123944u: goto label_123944;
            case 0x123948u: goto label_123948;
            case 0x12394Cu: goto label_12394c;
            case 0x123950u: goto label_123950;
            case 0x123954u: goto label_123954;
            case 0x123958u: goto label_123958;
            case 0x12395Cu: goto label_12395c;
            case 0x123960u: goto label_123960;
            case 0x123964u: goto label_123964;
            case 0x123968u: goto label_123968;
            case 0x12396Cu: goto label_12396c;
            case 0x123970u: goto label_123970;
            case 0x123974u: goto label_123974;
            case 0x123978u: goto label_123978;
            case 0x12397Cu: goto label_12397c;
            case 0x123980u: goto label_123980;
            case 0x123984u: goto label_123984;
            case 0x123988u: goto label_123988;
            case 0x12398Cu: goto label_12398c;
            case 0x123990u: goto label_123990;
            case 0x123994u: goto label_123994;
            case 0x123998u: goto label_123998;
            case 0x12399Cu: goto label_12399c;
            case 0x1239A0u: goto label_1239a0;
            case 0x1239A4u: goto label_1239a4;
            case 0x1239A8u: goto label_1239a8;
            case 0x1239ACu: goto label_1239ac;
            case 0x1239B0u: goto label_1239b0;
            case 0x1239B4u: goto label_1239b4;
            case 0x1239B8u: goto label_1239b8;
            case 0x1239BCu: goto label_1239bc;
            case 0x1239C0u: goto label_1239c0;
            case 0x1239C4u: goto label_1239c4;
            case 0x1239C8u: goto label_1239c8;
            case 0x1239CCu: goto label_1239cc;
            case 0x1239D0u: goto label_1239d0;
            case 0x1239D4u: goto label_1239d4;
            case 0x1239D8u: goto label_1239d8;
            case 0x1239DCu: goto label_1239dc;
            case 0x1239E0u: goto label_1239e0;
            case 0x1239E4u: goto label_1239e4;
            case 0x1239E8u: goto label_1239e8;
            case 0x1239ECu: goto label_1239ec;
            case 0x1239F0u: goto label_1239f0;
            case 0x1239F4u: goto label_1239f4;
            case 0x1239F8u: goto label_1239f8;
            case 0x1239FCu: goto label_1239fc;
            case 0x123A00u: goto label_123a00;
            case 0x123A04u: goto label_123a04;
            case 0x123A08u: goto label_123a08;
            case 0x123A0Cu: goto label_123a0c;
            case 0x123A10u: goto label_123a10;
            case 0x123A14u: goto label_123a14;
            case 0x123A18u: goto label_123a18;
            case 0x123A1Cu: goto label_123a1c;
            case 0x123A20u: goto label_123a20;
            case 0x123A24u: goto label_123a24;
            case 0x123A28u: goto label_123a28;
            case 0x123A2Cu: goto label_123a2c;
            case 0x123A30u: goto label_123a30;
            case 0x123A34u: goto label_123a34;
            case 0x123A38u: goto label_123a38;
            case 0x123A3Cu: goto label_123a3c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1238ECu; }
            if (ctx->pc != 0x1238ECu) { return; }
        }
    }
    ctx->pc = 0x1238ECu;
label_1238ec:
    // 0x1238ec: 0x8e240018
    ctx->pc = 0x1238ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1238f0:
    // 0x1238f0: 0x8e290020
    ctx->pc = 0x1238f0u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1238f4:
    // 0x1238f4: 0x24060002
    ctx->pc = 0x1238f4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
label_1238f8:
    // 0x1238f8: 0x8e230024
    ctx->pc = 0x1238f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1238fc:
    // 0x1238fc: 0x894023
    ctx->pc = 0x1238fcu;
    SET_GPR_U32(ctx, 8, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_123900:
    // 0x123900: 0x8204000e
    ctx->pc = 0x123900u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_123904:
    // 0x123904: 0x68102a
    ctx->pc = 0x123904u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 8)));
label_123908:
    // 0x123908: 0x8e250004
    ctx->pc = 0x123908u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12390c:
    // 0x12390c: 0x62400b
    ctx->pc = 0x12390cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 8, GPR_U32(ctx, 3));
label_123910:
    // 0x123910: 0x91840
    ctx->pc = 0x123910u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 9), 1));
label_123914:
    // 0x123914: 0x8e2b0014
    ctx->pc = 0x123914u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_123918:
    // 0x123918: 0xa8102a
    ctx->pc = 0x123918u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 8)));
label_12391c:
    // 0x12391c: 0xa2400b
    ctx->pc = 0x12391cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 8, GPR_U32(ctx, 5));
label_123920:
    // 0x123920: 0x1635021
    ctx->pc = 0x123920u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_123924:
    // 0x123924: 0x14860018
label_123928:
    if (ctx->pc == 0x123928u) {
        ctx->pc = 0x123928u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x12392Cu;
        goto label_12392c;
    }
    ctx->pc = 0x123924u;
    {
        const bool branch_taken_0x123924 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 6));
        ctx->pc = 0x123928u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        if (branch_taken_0x123924) {
            ctx->pc = 0x123988u;
            goto label_123988;
        }
    }
    ctx->pc = 0x12392Cu;
label_12392c:
    // 0x12392c: 0x8e22001c
    ctx->pc = 0x12392cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_123930:
    // 0x123930: 0x382d
    ctx->pc = 0x123930u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123934:
    // 0x123934: 0x491021
    ctx->pc = 0x123934u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_123938:
    // 0x123938: 0x21040
    ctx->pc = 0x123938u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_12393c:
    // 0x12393c: 0x1900001f
label_123940:
    if (ctx->pc == 0x123940u) {
        ctx->pc = 0x123940u;
        SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->pc = 0x123944u;
        goto label_123944;
    }
    ctx->pc = 0x12393Cu;
    {
        const bool branch_taken_0x12393c = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x123940u;
        SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        if (branch_taken_0x12393c) {
            ctx->pc = 0x1239BCu;
            goto label_1239bc;
        }
    }
    ctx->pc = 0x123944u;
label_123944:
    // 0x123944: 0x240302d
    ctx->pc = 0x123944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_123948:
    // 0x123948: 0x90c20000
    ctx->pc = 0x123948u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_12394c:
    // 0x12394c: 0x71840
    ctx->pc = 0x12394cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 1));
label_123950:
    // 0x123950: 0x6a2021
    ctx->pc = 0x123950u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_123954:
    // 0x123954: 0x691821
    ctx->pc = 0x123954u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_123958:
    // 0x123958: 0x21200
    ctx->pc = 0x123958u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
label_12395c:
    // 0x12395c: 0x24e70001
    ctx->pc = 0x12395cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_123960:
    // 0x123960: 0xa4820000
    ctx->pc = 0x123960u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_123964:
    // 0x123964: 0xe8282a
    ctx->pc = 0x123964u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 8)));
label_123968:
    // 0x123968: 0x90c20001
    ctx->pc = 0x123968u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_12396c:
    // 0x12396c: 0x24c60002
    ctx->pc = 0x12396cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
label_123970:
    // 0x123970: 0x21200
    ctx->pc = 0x123970u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
label_123974:
    // 0x123974: 0x14a0fff4
label_123978:
    if (ctx->pc == 0x123978u) {
        ctx->pc = 0x123978u;
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x12397Cu;
        goto label_12397c;
    }
    ctx->pc = 0x123974u;
    {
        const bool branch_taken_0x123974 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x123978u;
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x123974) {
            ctx->pc = 0x123948u;
            goto label_123948;
        }
    }
    ctx->pc = 0x12397Cu;
label_12397c:
    // 0x12397c: 0x1000000f
label_123980:
    if (ctx->pc == 0x123980u) {
        ctx->pc = 0x123980u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x123984u;
        goto label_123984;
    }
    ctx->pc = 0x12397Cu;
    {
        const bool branch_taken_0x12397c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x123980u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        if (branch_taken_0x12397c) {
            ctx->pc = 0x1239BCu;
            goto label_1239bc;
        }
    }
    ctx->pc = 0x123984u;
label_123984:
    // 0x123984: 0x0
    ctx->pc = 0x123984u;
    // NOP
label_123988:
    // 0x123988: 0x1900000c
label_12398c:
    if (ctx->pc == 0x12398Cu) {
        ctx->pc = 0x12398Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x123990u;
        goto label_123990;
    }
    ctx->pc = 0x123988u;
    {
        const bool branch_taken_0x123988 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x12398Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x123988) {
            ctx->pc = 0x1239BCu;
            goto label_1239bc;
        }
    }
    ctx->pc = 0x123990u;
label_123990:
    // 0x123990: 0x140282d
    ctx->pc = 0x123990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_123994:
    // 0x123994: 0x0
    ctx->pc = 0x123994u;
    // NOP
label_123998:
    // 0x123998: 0x2471021
    ctx->pc = 0x123998u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
label_12399c:
    // 0x12399c: 0x24e70001
    ctx->pc = 0x12399cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_1239a0:
    // 0x1239a0: 0x90430000
    ctx->pc = 0x1239a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1239a4:
    // 0x1239a4: 0xe8202a
    ctx->pc = 0x1239a4u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 8)));
label_1239a8:
    // 0x1239a8: 0x31a00
    ctx->pc = 0x1239a8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
label_1239ac:
    // 0x1239ac: 0xa4a30000
    ctx->pc = 0x1239acu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_1239b0:
    // 0x1239b0: 0x1480fff9
label_1239b4:
    if (ctx->pc == 0x1239B4u) {
        ctx->pc = 0x1239B4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x1239B8u;
        goto label_1239b8;
    }
    ctx->pc = 0x1239B0u;
    {
        const bool branch_taken_0x1239b0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1239B4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
        if (branch_taken_0x1239b0) {
            ctx->pc = 0x123998u;
            goto label_123998;
        }
    }
    ctx->pc = 0x1239B8u;
label_1239b8:
    // 0x1239b8: 0x9203000e
    ctx->pc = 0x1239b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1239bc:
    // 0x1239bc: 0x31600
    ctx->pc = 0x1239bcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 24));
label_1239c0:
    // 0x1239c0: 0x24030002
    ctx->pc = 0x1239c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_1239c4:
    // 0x1239c4: 0x21603
    ctx->pc = 0x1239c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_1239c8:
    // 0x1239c8: 0xae030004
    ctx->pc = 0x1239c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1239cc:
    // 0x1239cc: 0x1021018
    ctx->pc = 0x1239ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_1239d0:
    // 0x1239d0: 0xae080090
    ctx->pc = 0x1239d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 8));
label_1239d4:
    // 0x1239d4: 0xae020094
    ctx->pc = 0x1239d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_1239d8:
    // 0x1239d8: 0x24020002
    ctx->pc = 0x1239d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_1239dc:
    // 0x1239dc: 0x54620009
label_1239e0:
    if (ctx->pc == 0x1239E0u) {
        ctx->pc = 0x1239E0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1239E4u;
        goto label_1239e4;
    }
    ctx->pc = 0x1239DCu;
    {
        const bool branch_taken_0x1239dc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1239dc) {
            ctx->pc = 0x1239E0u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x123A04u;
            goto label_123a04;
        }
    }
    ctx->pc = 0x1239E4u;
label_1239e4:
    // 0x1239e4: 0x8e030080
    ctx->pc = 0x1239e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_1239e8:
    // 0x1239e8: 0x8e040084
    ctx->pc = 0x1239e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1239ec:
    // 0x1239ec: 0x8e050094
    ctx->pc = 0x1239ecu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1239f0:
    // 0x1239f0: 0x60f809
label_1239f4:
    if (ctx->pc == 0x1239F4u) {
        ctx->pc = 0x1239F4u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = 0x1239F8u;
        goto label_1239f8;
    }
    ctx->pc = 0x1239F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1239F8u);
        ctx->pc = 0x1239F4u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1234D8u: goto label_1234d8;
            case 0x1234DCu: goto label_1234dc;
            case 0x1234E0u: goto label_1234e0;
            case 0x1234E4u: goto label_1234e4;
            case 0x1234E8u: goto label_1234e8;
            case 0x1234ECu: goto label_1234ec;
            case 0x1234F0u: goto label_1234f0;
            case 0x1234F4u: goto label_1234f4;
            case 0x1234F8u: goto label_1234f8;
            case 0x1234FCu: goto label_1234fc;
            case 0x123500u: goto label_123500;
            case 0x123504u: goto label_123504;
            case 0x123508u: goto label_123508;
            case 0x12350Cu: goto label_12350c;
            case 0x123510u: goto label_123510;
            case 0x123514u: goto label_123514;
            case 0x123518u: goto label_123518;
            case 0x12351Cu: goto label_12351c;
            case 0x123520u: goto label_123520;
            case 0x123524u: goto label_123524;
            case 0x123528u: goto label_123528;
            case 0x12352Cu: goto label_12352c;
            case 0x123530u: goto label_123530;
            case 0x123534u: goto label_123534;
            case 0x123538u: goto label_123538;
            case 0x12353Cu: goto label_12353c;
            case 0x123540u: goto label_123540;
            case 0x123544u: goto label_123544;
            case 0x123548u: goto label_123548;
            case 0x12354Cu: goto label_12354c;
            case 0x123550u: goto label_123550;
            case 0x123554u: goto label_123554;
            case 0x123558u: goto label_123558;
            case 0x12355Cu: goto label_12355c;
            case 0x123560u: goto label_123560;
            case 0x123564u: goto label_123564;
            case 0x123568u: goto label_123568;
            case 0x12356Cu: goto label_12356c;
            case 0x123570u: goto label_123570;
            case 0x123574u: goto label_123574;
            case 0x123578u: goto label_123578;
            case 0x12357Cu: goto label_12357c;
            case 0x123580u: goto label_123580;
            case 0x123584u: goto label_123584;
            case 0x123588u: goto label_123588;
            case 0x12358Cu: goto label_12358c;
            case 0x123590u: goto label_123590;
            case 0x123594u: goto label_123594;
            case 0x123598u: goto label_123598;
            case 0x12359Cu: goto label_12359c;
            case 0x1235A0u: goto label_1235a0;
            case 0x1235A4u: goto label_1235a4;
            case 0x1235A8u: goto label_1235a8;
            case 0x1235ACu: goto label_1235ac;
            case 0x1235B0u: goto label_1235b0;
            case 0x1235B4u: goto label_1235b4;
            case 0x1235B8u: goto label_1235b8;
            case 0x1235BCu: goto label_1235bc;
            case 0x1235C0u: goto label_1235c0;
            case 0x1235C4u: goto label_1235c4;
            case 0x1235C8u: goto label_1235c8;
            case 0x1235CCu: goto label_1235cc;
            case 0x1235D0u: goto label_1235d0;
            case 0x1235D4u: goto label_1235d4;
            case 0x1235D8u: goto label_1235d8;
            case 0x1235DCu: goto label_1235dc;
            case 0x1235E0u: goto label_1235e0;
            case 0x1235E4u: goto label_1235e4;
            case 0x1235E8u: goto label_1235e8;
            case 0x1235ECu: goto label_1235ec;
            case 0x1235F0u: goto label_1235f0;
            case 0x1235F4u: goto label_1235f4;
            case 0x1235F8u: goto label_1235f8;
            case 0x1235FCu: goto label_1235fc;
            case 0x123600u: goto label_123600;
            case 0x123604u: goto label_123604;
            case 0x123608u: goto label_123608;
            case 0x12360Cu: goto label_12360c;
            case 0x123610u: goto label_123610;
            case 0x123614u: goto label_123614;
            case 0x123618u: goto label_123618;
            case 0x12361Cu: goto label_12361c;
            case 0x123620u: goto label_123620;
            case 0x123624u: goto label_123624;
            case 0x123628u: goto label_123628;
            case 0x12362Cu: goto label_12362c;
            case 0x123630u: goto label_123630;
            case 0x123634u: goto label_123634;
            case 0x123638u: goto label_123638;
            case 0x12363Cu: goto label_12363c;
            case 0x123640u: goto label_123640;
            case 0x123644u: goto label_123644;
            case 0x123648u: goto label_123648;
            case 0x12364Cu: goto label_12364c;
            case 0x123650u: goto label_123650;
            case 0x123654u: goto label_123654;
            case 0x123658u: goto label_123658;
            case 0x12365Cu: goto label_12365c;
            case 0x123660u: goto label_123660;
            case 0x123664u: goto label_123664;
            case 0x123668u: goto label_123668;
            case 0x12366Cu: goto label_12366c;
            case 0x123670u: goto label_123670;
            case 0x123674u: goto label_123674;
            case 0x123678u: goto label_123678;
            case 0x12367Cu: goto label_12367c;
            case 0x123680u: goto label_123680;
            case 0x123684u: goto label_123684;
            case 0x123688u: goto label_123688;
            case 0x12368Cu: goto label_12368c;
            case 0x123690u: goto label_123690;
            case 0x123694u: goto label_123694;
            case 0x123698u: goto label_123698;
            case 0x12369Cu: goto label_12369c;
            case 0x1236A0u: goto label_1236a0;
            case 0x1236A4u: goto label_1236a4;
            case 0x1236A8u: goto label_1236a8;
            case 0x1236ACu: goto label_1236ac;
            case 0x1236B0u: goto label_1236b0;
            case 0x1236B4u: goto label_1236b4;
            case 0x1236B8u: goto label_1236b8;
            case 0x1236BCu: goto label_1236bc;
            case 0x1236C0u: goto label_1236c0;
            case 0x1236C4u: goto label_1236c4;
            case 0x1236C8u: goto label_1236c8;
            case 0x1236CCu: goto label_1236cc;
            case 0x1236D0u: goto label_1236d0;
            case 0x1236D4u: goto label_1236d4;
            case 0x1236D8u: goto label_1236d8;
            case 0x1236DCu: goto label_1236dc;
            case 0x1236E0u: goto label_1236e0;
            case 0x1236E4u: goto label_1236e4;
            case 0x1236E8u: goto label_1236e8;
            case 0x1236ECu: goto label_1236ec;
            case 0x1236F0u: goto label_1236f0;
            case 0x1236F4u: goto label_1236f4;
            case 0x1236F8u: goto label_1236f8;
            case 0x1236FCu: goto label_1236fc;
            case 0x123700u: goto label_123700;
            case 0x123704u: goto label_123704;
            case 0x123708u: goto label_123708;
            case 0x12370Cu: goto label_12370c;
            case 0x123710u: goto label_123710;
            case 0x123714u: goto label_123714;
            case 0x123718u: goto label_123718;
            case 0x12371Cu: goto label_12371c;
            case 0x123720u: goto label_123720;
            case 0x123724u: goto label_123724;
            case 0x123728u: goto label_123728;
            case 0x12372Cu: goto label_12372c;
            case 0x123730u: goto label_123730;
            case 0x123734u: goto label_123734;
            case 0x123738u: goto label_123738;
            case 0x12373Cu: goto label_12373c;
            case 0x123740u: goto label_123740;
            case 0x123744u: goto label_123744;
            case 0x123748u: goto label_123748;
            case 0x12374Cu: goto label_12374c;
            case 0x123750u: goto label_123750;
            case 0x123754u: goto label_123754;
            case 0x123758u: goto label_123758;
            case 0x12375Cu: goto label_12375c;
            case 0x123760u: goto label_123760;
            case 0x123764u: goto label_123764;
            case 0x123768u: goto label_123768;
            case 0x12376Cu: goto label_12376c;
            case 0x123770u: goto label_123770;
            case 0x123774u: goto label_123774;
            case 0x123778u: goto label_123778;
            case 0x12377Cu: goto label_12377c;
            case 0x123780u: goto label_123780;
            case 0x123784u: goto label_123784;
            case 0x123788u: goto label_123788;
            case 0x12378Cu: goto label_12378c;
            case 0x123790u: goto label_123790;
            case 0x123794u: goto label_123794;
            case 0x123798u: goto label_123798;
            case 0x12379Cu: goto label_12379c;
            case 0x1237A0u: goto label_1237a0;
            case 0x1237A4u: goto label_1237a4;
            case 0x1237A8u: goto label_1237a8;
            case 0x1237ACu: goto label_1237ac;
            case 0x1237B0u: goto label_1237b0;
            case 0x1237B4u: goto label_1237b4;
            case 0x1237B8u: goto label_1237b8;
            case 0x1237BCu: goto label_1237bc;
            case 0x1237C0u: goto label_1237c0;
            case 0x1237C4u: goto label_1237c4;
            case 0x1237C8u: goto label_1237c8;
            case 0x1237CCu: goto label_1237cc;
            case 0x1237D0u: goto label_1237d0;
            case 0x1237D4u: goto label_1237d4;
            case 0x1237D8u: goto label_1237d8;
            case 0x1237DCu: goto label_1237dc;
            case 0x1237E0u: goto label_1237e0;
            case 0x1237E4u: goto label_1237e4;
            case 0x1237E8u: goto label_1237e8;
            case 0x1237ECu: goto label_1237ec;
            case 0x1237F0u: goto label_1237f0;
            case 0x1237F4u: goto label_1237f4;
            case 0x1237F8u: goto label_1237f8;
            case 0x1237FCu: goto label_1237fc;
            case 0x123800u: goto label_123800;
            case 0x123804u: goto label_123804;
            case 0x123808u: goto label_123808;
            case 0x12380Cu: goto label_12380c;
            case 0x123810u: goto label_123810;
            case 0x123814u: goto label_123814;
            case 0x123818u: goto label_123818;
            case 0x12381Cu: goto label_12381c;
            case 0x123820u: goto label_123820;
            case 0x123824u: goto label_123824;
            case 0x123828u: goto label_123828;
            case 0x12382Cu: goto label_12382c;
            case 0x123830u: goto label_123830;
            case 0x123834u: goto label_123834;
            case 0x123838u: goto label_123838;
            case 0x12383Cu: goto label_12383c;
            case 0x123840u: goto label_123840;
            case 0x123844u: goto label_123844;
            case 0x123848u: goto label_123848;
            case 0x12384Cu: goto label_12384c;
            case 0x123850u: goto label_123850;
            case 0x123854u: goto label_123854;
            case 0x123858u: goto label_123858;
            case 0x12385Cu: goto label_12385c;
            case 0x123860u: goto label_123860;
            case 0x123864u: goto label_123864;
            case 0x123868u: goto label_123868;
            case 0x12386Cu: goto label_12386c;
            case 0x123870u: goto label_123870;
            case 0x123874u: goto label_123874;
            case 0x123878u: goto label_123878;
            case 0x12387Cu: goto label_12387c;
            case 0x123880u: goto label_123880;
            case 0x123884u: goto label_123884;
            case 0x123888u: goto label_123888;
            case 0x12388Cu: goto label_12388c;
            case 0x123890u: goto label_123890;
            case 0x123894u: goto label_123894;
            case 0x123898u: goto label_123898;
            case 0x12389Cu: goto label_12389c;
            case 0x1238A0u: goto label_1238a0;
            case 0x1238A4u: goto label_1238a4;
            case 0x1238A8u: goto label_1238a8;
            case 0x1238ACu: goto label_1238ac;
            case 0x1238B0u: goto label_1238b0;
            case 0x1238B4u: goto label_1238b4;
            case 0x1238B8u: goto label_1238b8;
            case 0x1238BCu: goto label_1238bc;
            case 0x1238C0u: goto label_1238c0;
            case 0x1238C4u: goto label_1238c4;
            case 0x1238C8u: goto label_1238c8;
            case 0x1238CCu: goto label_1238cc;
            case 0x1238D0u: goto label_1238d0;
            case 0x1238D4u: goto label_1238d4;
            case 0x1238D8u: goto label_1238d8;
            case 0x1238DCu: goto label_1238dc;
            case 0x1238E0u: goto label_1238e0;
            case 0x1238E4u: goto label_1238e4;
            case 0x1238E8u: goto label_1238e8;
            case 0x1238ECu: goto label_1238ec;
            case 0x1238F0u: goto label_1238f0;
            case 0x1238F4u: goto label_1238f4;
            case 0x1238F8u: goto label_1238f8;
            case 0x1238FCu: goto label_1238fc;
            case 0x123900u: goto label_123900;
            case 0x123904u: goto label_123904;
            case 0x123908u: goto label_123908;
            case 0x12390Cu: goto label_12390c;
            case 0x123910u: goto label_123910;
            case 0x123914u: goto label_123914;
            case 0x123918u: goto label_123918;
            case 0x12391Cu: goto label_12391c;
            case 0x123920u: goto label_123920;
            case 0x123924u: goto label_123924;
            case 0x123928u: goto label_123928;
            case 0x12392Cu: goto label_12392c;
            case 0x123930u: goto label_123930;
            case 0x123934u: goto label_123934;
            case 0x123938u: goto label_123938;
            case 0x12393Cu: goto label_12393c;
            case 0x123940u: goto label_123940;
            case 0x123944u: goto label_123944;
            case 0x123948u: goto label_123948;
            case 0x12394Cu: goto label_12394c;
            case 0x123950u: goto label_123950;
            case 0x123954u: goto label_123954;
            case 0x123958u: goto label_123958;
            case 0x12395Cu: goto label_12395c;
            case 0x123960u: goto label_123960;
            case 0x123964u: goto label_123964;
            case 0x123968u: goto label_123968;
            case 0x12396Cu: goto label_12396c;
            case 0x123970u: goto label_123970;
            case 0x123974u: goto label_123974;
            case 0x123978u: goto label_123978;
            case 0x12397Cu: goto label_12397c;
            case 0x123980u: goto label_123980;
            case 0x123984u: goto label_123984;
            case 0x123988u: goto label_123988;
            case 0x12398Cu: goto label_12398c;
            case 0x123990u: goto label_123990;
            case 0x123994u: goto label_123994;
            case 0x123998u: goto label_123998;
            case 0x12399Cu: goto label_12399c;
            case 0x1239A0u: goto label_1239a0;
            case 0x1239A4u: goto label_1239a4;
            case 0x1239A8u: goto label_1239a8;
            case 0x1239ACu: goto label_1239ac;
            case 0x1239B0u: goto label_1239b0;
            case 0x1239B4u: goto label_1239b4;
            case 0x1239B8u: goto label_1239b8;
            case 0x1239BCu: goto label_1239bc;
            case 0x1239C0u: goto label_1239c0;
            case 0x1239C4u: goto label_1239c4;
            case 0x1239C8u: goto label_1239c8;
            case 0x1239CCu: goto label_1239cc;
            case 0x1239D0u: goto label_1239d0;
            case 0x1239D4u: goto label_1239d4;
            case 0x1239D8u: goto label_1239d8;
            case 0x1239DCu: goto label_1239dc;
            case 0x1239E0u: goto label_1239e0;
            case 0x1239E4u: goto label_1239e4;
            case 0x1239E8u: goto label_1239e8;
            case 0x1239ECu: goto label_1239ec;
            case 0x1239F0u: goto label_1239f0;
            case 0x1239F4u: goto label_1239f4;
            case 0x1239F8u: goto label_1239f8;
            case 0x1239FCu: goto label_1239fc;
            case 0x123A00u: goto label_123a00;
            case 0x123A04u: goto label_123a04;
            case 0x123A08u: goto label_123a08;
            case 0x123A0Cu: goto label_123a0c;
            case 0x123A10u: goto label_123a10;
            case 0x123A14u: goto label_123a14;
            case 0x123A18u: goto label_123a18;
            case 0x123A1Cu: goto label_123a1c;
            case 0x123A20u: goto label_123a20;
            case 0x123A24u: goto label_123a24;
            case 0x123A28u: goto label_123a28;
            case 0x123A2Cu: goto label_123a2c;
            case 0x123A30u: goto label_123a30;
            case 0x123A34u: goto label_123a34;
            case 0x123A38u: goto label_123a38;
            case 0x123A3Cu: goto label_123a3c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1239F8u; }
            if (ctx->pc != 0x1239F8u) { return; }
        }
    }
    ctx->pc = 0x1239F8u;
label_1239f8:
    // 0x1239f8: 0x24020003
    ctx->pc = 0x1239f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_1239fc:
    // 0x1239fc: 0xae020004
    ctx->pc = 0x1239fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_123a00:
    // 0x123a00: 0xdfb00000
    ctx->pc = 0x123a00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_123a04:
    // 0x123a04: 0xdfb10008
    ctx->pc = 0x123a04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_123a08:
    // 0x123a08: 0xdfb20010
    ctx->pc = 0x123a08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_123a0c:
    // 0x123a0c: 0xdfbf0018
    ctx->pc = 0x123a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_123a10:
    // 0x123a10: 0x3e00008
label_123a14:
    if (ctx->pc == 0x123A14u) {
        ctx->pc = 0x123A14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x123A18u;
        goto label_123a18;
    }
    ctx->pc = 0x123A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123A14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1234D8u: goto label_1234d8;
            case 0x1234DCu: goto label_1234dc;
            case 0x1234E0u: goto label_1234e0;
            case 0x1234E4u: goto label_1234e4;
            case 0x1234E8u: goto label_1234e8;
            case 0x1234ECu: goto label_1234ec;
            case 0x1234F0u: goto label_1234f0;
            case 0x1234F4u: goto label_1234f4;
            case 0x1234F8u: goto label_1234f8;
            case 0x1234FCu: goto label_1234fc;
            case 0x123500u: goto label_123500;
            case 0x123504u: goto label_123504;
            case 0x123508u: goto label_123508;
            case 0x12350Cu: goto label_12350c;
            case 0x123510u: goto label_123510;
            case 0x123514u: goto label_123514;
            case 0x123518u: goto label_123518;
            case 0x12351Cu: goto label_12351c;
            case 0x123520u: goto label_123520;
            case 0x123524u: goto label_123524;
            case 0x123528u: goto label_123528;
            case 0x12352Cu: goto label_12352c;
            case 0x123530u: goto label_123530;
            case 0x123534u: goto label_123534;
            case 0x123538u: goto label_123538;
            case 0x12353Cu: goto label_12353c;
            case 0x123540u: goto label_123540;
            case 0x123544u: goto label_123544;
            case 0x123548u: goto label_123548;
            case 0x12354Cu: goto label_12354c;
            case 0x123550u: goto label_123550;
            case 0x123554u: goto label_123554;
            case 0x123558u: goto label_123558;
            case 0x12355Cu: goto label_12355c;
            case 0x123560u: goto label_123560;
            case 0x123564u: goto label_123564;
            case 0x123568u: goto label_123568;
            case 0x12356Cu: goto label_12356c;
            case 0x123570u: goto label_123570;
            case 0x123574u: goto label_123574;
            case 0x123578u: goto label_123578;
            case 0x12357Cu: goto label_12357c;
            case 0x123580u: goto label_123580;
            case 0x123584u: goto label_123584;
            case 0x123588u: goto label_123588;
            case 0x12358Cu: goto label_12358c;
            case 0x123590u: goto label_123590;
            case 0x123594u: goto label_123594;
            case 0x123598u: goto label_123598;
            case 0x12359Cu: goto label_12359c;
            case 0x1235A0u: goto label_1235a0;
            case 0x1235A4u: goto label_1235a4;
            case 0x1235A8u: goto label_1235a8;
            case 0x1235ACu: goto label_1235ac;
            case 0x1235B0u: goto label_1235b0;
            case 0x1235B4u: goto label_1235b4;
            case 0x1235B8u: goto label_1235b8;
            case 0x1235BCu: goto label_1235bc;
            case 0x1235C0u: goto label_1235c0;
            case 0x1235C4u: goto label_1235c4;
            case 0x1235C8u: goto label_1235c8;
            case 0x1235CCu: goto label_1235cc;
            case 0x1235D0u: goto label_1235d0;
            case 0x1235D4u: goto label_1235d4;
            case 0x1235D8u: goto label_1235d8;
            case 0x1235DCu: goto label_1235dc;
            case 0x1235E0u: goto label_1235e0;
            case 0x1235E4u: goto label_1235e4;
            case 0x1235E8u: goto label_1235e8;
            case 0x1235ECu: goto label_1235ec;
            case 0x1235F0u: goto label_1235f0;
            case 0x1235F4u: goto label_1235f4;
            case 0x1235F8u: goto label_1235f8;
            case 0x1235FCu: goto label_1235fc;
            case 0x123600u: goto label_123600;
            case 0x123604u: goto label_123604;
            case 0x123608u: goto label_123608;
            case 0x12360Cu: goto label_12360c;
            case 0x123610u: goto label_123610;
            case 0x123614u: goto label_123614;
            case 0x123618u: goto label_123618;
            case 0x12361Cu: goto label_12361c;
            case 0x123620u: goto label_123620;
            case 0x123624u: goto label_123624;
            case 0x123628u: goto label_123628;
            case 0x12362Cu: goto label_12362c;
            case 0x123630u: goto label_123630;
            case 0x123634u: goto label_123634;
            case 0x123638u: goto label_123638;
            case 0x12363Cu: goto label_12363c;
            case 0x123640u: goto label_123640;
            case 0x123644u: goto label_123644;
            case 0x123648u: goto label_123648;
            case 0x12364Cu: goto label_12364c;
            case 0x123650u: goto label_123650;
            case 0x123654u: goto label_123654;
            case 0x123658u: goto label_123658;
            case 0x12365Cu: goto label_12365c;
            case 0x123660u: goto label_123660;
            case 0x123664u: goto label_123664;
            case 0x123668u: goto label_123668;
            case 0x12366Cu: goto label_12366c;
            case 0x123670u: goto label_123670;
            case 0x123674u: goto label_123674;
            case 0x123678u: goto label_123678;
            case 0x12367Cu: goto label_12367c;
            case 0x123680u: goto label_123680;
            case 0x123684u: goto label_123684;
            case 0x123688u: goto label_123688;
            case 0x12368Cu: goto label_12368c;
            case 0x123690u: goto label_123690;
            case 0x123694u: goto label_123694;
            case 0x123698u: goto label_123698;
            case 0x12369Cu: goto label_12369c;
            case 0x1236A0u: goto label_1236a0;
            case 0x1236A4u: goto label_1236a4;
            case 0x1236A8u: goto label_1236a8;
            case 0x1236ACu: goto label_1236ac;
            case 0x1236B0u: goto label_1236b0;
            case 0x1236B4u: goto label_1236b4;
            case 0x1236B8u: goto label_1236b8;
            case 0x1236BCu: goto label_1236bc;
            case 0x1236C0u: goto label_1236c0;
            case 0x1236C4u: goto label_1236c4;
            case 0x1236C8u: goto label_1236c8;
            case 0x1236CCu: goto label_1236cc;
            case 0x1236D0u: goto label_1236d0;
            case 0x1236D4u: goto label_1236d4;
            case 0x1236D8u: goto label_1236d8;
            case 0x1236DCu: goto label_1236dc;
            case 0x1236E0u: goto label_1236e0;
            case 0x1236E4u: goto label_1236e4;
            case 0x1236E8u: goto label_1236e8;
            case 0x1236ECu: goto label_1236ec;
            case 0x1236F0u: goto label_1236f0;
            case 0x1236F4u: goto label_1236f4;
            case 0x1236F8u: goto label_1236f8;
            case 0x1236FCu: goto label_1236fc;
            case 0x123700u: goto label_123700;
            case 0x123704u: goto label_123704;
            case 0x123708u: goto label_123708;
            case 0x12370Cu: goto label_12370c;
            case 0x123710u: goto label_123710;
            case 0x123714u: goto label_123714;
            case 0x123718u: goto label_123718;
            case 0x12371Cu: goto label_12371c;
            case 0x123720u: goto label_123720;
            case 0x123724u: goto label_123724;
            case 0x123728u: goto label_123728;
            case 0x12372Cu: goto label_12372c;
            case 0x123730u: goto label_123730;
            case 0x123734u: goto label_123734;
            case 0x123738u: goto label_123738;
            case 0x12373Cu: goto label_12373c;
            case 0x123740u: goto label_123740;
            case 0x123744u: goto label_123744;
            case 0x123748u: goto label_123748;
            case 0x12374Cu: goto label_12374c;
            case 0x123750u: goto label_123750;
            case 0x123754u: goto label_123754;
            case 0x123758u: goto label_123758;
            case 0x12375Cu: goto label_12375c;
            case 0x123760u: goto label_123760;
            case 0x123764u: goto label_123764;
            case 0x123768u: goto label_123768;
            case 0x12376Cu: goto label_12376c;
            case 0x123770u: goto label_123770;
            case 0x123774u: goto label_123774;
            case 0x123778u: goto label_123778;
            case 0x12377Cu: goto label_12377c;
            case 0x123780u: goto label_123780;
            case 0x123784u: goto label_123784;
            case 0x123788u: goto label_123788;
            case 0x12378Cu: goto label_12378c;
            case 0x123790u: goto label_123790;
            case 0x123794u: goto label_123794;
            case 0x123798u: goto label_123798;
            case 0x12379Cu: goto label_12379c;
            case 0x1237A0u: goto label_1237a0;
            case 0x1237A4u: goto label_1237a4;
            case 0x1237A8u: goto label_1237a8;
            case 0x1237ACu: goto label_1237ac;
            case 0x1237B0u: goto label_1237b0;
            case 0x1237B4u: goto label_1237b4;
            case 0x1237B8u: goto label_1237b8;
            case 0x1237BCu: goto label_1237bc;
            case 0x1237C0u: goto label_1237c0;
            case 0x1237C4u: goto label_1237c4;
            case 0x1237C8u: goto label_1237c8;
            case 0x1237CCu: goto label_1237cc;
            case 0x1237D0u: goto label_1237d0;
            case 0x1237D4u: goto label_1237d4;
            case 0x1237D8u: goto label_1237d8;
            case 0x1237DCu: goto label_1237dc;
            case 0x1237E0u: goto label_1237e0;
            case 0x1237E4u: goto label_1237e4;
            case 0x1237E8u: goto label_1237e8;
            case 0x1237ECu: goto label_1237ec;
            case 0x1237F0u: goto label_1237f0;
            case 0x1237F4u: goto label_1237f4;
            case 0x1237F8u: goto label_1237f8;
            case 0x1237FCu: goto label_1237fc;
            case 0x123800u: goto label_123800;
            case 0x123804u: goto label_123804;
            case 0x123808u: goto label_123808;
            case 0x12380Cu: goto label_12380c;
            case 0x123810u: goto label_123810;
            case 0x123814u: goto label_123814;
            case 0x123818u: goto label_123818;
            case 0x12381Cu: goto label_12381c;
            case 0x123820u: goto label_123820;
            case 0x123824u: goto label_123824;
            case 0x123828u: goto label_123828;
            case 0x12382Cu: goto label_12382c;
            case 0x123830u: goto label_123830;
            case 0x123834u: goto label_123834;
            case 0x123838u: goto label_123838;
            case 0x12383Cu: goto label_12383c;
            case 0x123840u: goto label_123840;
            case 0x123844u: goto label_123844;
            case 0x123848u: goto label_123848;
            case 0x12384Cu: goto label_12384c;
            case 0x123850u: goto label_123850;
            case 0x123854u: goto label_123854;
            case 0x123858u: goto label_123858;
            case 0x12385Cu: goto label_12385c;
            case 0x123860u: goto label_123860;
            case 0x123864u: goto label_123864;
            case 0x123868u: goto label_123868;
            case 0x12386Cu: goto label_12386c;
            case 0x123870u: goto label_123870;
            case 0x123874u: goto label_123874;
            case 0x123878u: goto label_123878;
            case 0x12387Cu: goto label_12387c;
            case 0x123880u: goto label_123880;
            case 0x123884u: goto label_123884;
            case 0x123888u: goto label_123888;
            case 0x12388Cu: goto label_12388c;
            case 0x123890u: goto label_123890;
            case 0x123894u: goto label_123894;
            case 0x123898u: goto label_123898;
            case 0x12389Cu: goto label_12389c;
            case 0x1238A0u: goto label_1238a0;
            case 0x1238A4u: goto label_1238a4;
            case 0x1238A8u: goto label_1238a8;
            case 0x1238ACu: goto label_1238ac;
            case 0x1238B0u: goto label_1238b0;
            case 0x1238B4u: goto label_1238b4;
            case 0x1238B8u: goto label_1238b8;
            case 0x1238BCu: goto label_1238bc;
            case 0x1238C0u: goto label_1238c0;
            case 0x1238C4u: goto label_1238c4;
            case 0x1238C8u: goto label_1238c8;
            case 0x1238CCu: goto label_1238cc;
            case 0x1238D0u: goto label_1238d0;
            case 0x1238D4u: goto label_1238d4;
            case 0x1238D8u: goto label_1238d8;
            case 0x1238DCu: goto label_1238dc;
            case 0x1238E0u: goto label_1238e0;
            case 0x1238E4u: goto label_1238e4;
            case 0x1238E8u: goto label_1238e8;
            case 0x1238ECu: goto label_1238ec;
            case 0x1238F0u: goto label_1238f0;
            case 0x1238F4u: goto label_1238f4;
            case 0x1238F8u: goto label_1238f8;
            case 0x1238FCu: goto label_1238fc;
            case 0x123900u: goto label_123900;
            case 0x123904u: goto label_123904;
            case 0x123908u: goto label_123908;
            case 0x12390Cu: goto label_12390c;
            case 0x123910u: goto label_123910;
            case 0x123914u: goto label_123914;
            case 0x123918u: goto label_123918;
            case 0x12391Cu: goto label_12391c;
            case 0x123920u: goto label_123920;
            case 0x123924u: goto label_123924;
            case 0x123928u: goto label_123928;
            case 0x12392Cu: goto label_12392c;
            case 0x123930u: goto label_123930;
            case 0x123934u: goto label_123934;
            case 0x123938u: goto label_123938;
            case 0x12393Cu: goto label_12393c;
            case 0x123940u: goto label_123940;
            case 0x123944u: goto label_123944;
            case 0x123948u: goto label_123948;
            case 0x12394Cu: goto label_12394c;
            case 0x123950u: goto label_123950;
            case 0x123954u: goto label_123954;
            case 0x123958u: goto label_123958;
            case 0x12395Cu: goto label_12395c;
            case 0x123960u: goto label_123960;
            case 0x123964u: goto label_123964;
            case 0x123968u: goto label_123968;
            case 0x12396Cu: goto label_12396c;
            case 0x123970u: goto label_123970;
            case 0x123974u: goto label_123974;
            case 0x123978u: goto label_123978;
            case 0x12397Cu: goto label_12397c;
            case 0x123980u: goto label_123980;
            case 0x123984u: goto label_123984;
            case 0x123988u: goto label_123988;
            case 0x12398Cu: goto label_12398c;
            case 0x123990u: goto label_123990;
            case 0x123994u: goto label_123994;
            case 0x123998u: goto label_123998;
            case 0x12399Cu: goto label_12399c;
            case 0x1239A0u: goto label_1239a0;
            case 0x1239A4u: goto label_1239a4;
            case 0x1239A8u: goto label_1239a8;
            case 0x1239ACu: goto label_1239ac;
            case 0x1239B0u: goto label_1239b0;
            case 0x1239B4u: goto label_1239b4;
            case 0x1239B8u: goto label_1239b8;
            case 0x1239BCu: goto label_1239bc;
            case 0x1239C0u: goto label_1239c0;
            case 0x1239C4u: goto label_1239c4;
            case 0x1239C8u: goto label_1239c8;
            case 0x1239CCu: goto label_1239cc;
            case 0x1239D0u: goto label_1239d0;
            case 0x1239D4u: goto label_1239d4;
            case 0x1239D8u: goto label_1239d8;
            case 0x1239DCu: goto label_1239dc;
            case 0x1239E0u: goto label_1239e0;
            case 0x1239E4u: goto label_1239e4;
            case 0x1239E8u: goto label_1239e8;
            case 0x1239ECu: goto label_1239ec;
            case 0x1239F0u: goto label_1239f0;
            case 0x1239F4u: goto label_1239f4;
            case 0x1239F8u: goto label_1239f8;
            case 0x1239FCu: goto label_1239fc;
            case 0x123A00u: goto label_123a00;
            case 0x123A04u: goto label_123a04;
            case 0x123A08u: goto label_123a08;
            case 0x123A0Cu: goto label_123a0c;
            case 0x123A10u: goto label_123a10;
            case 0x123A14u: goto label_123a14;
            case 0x123A18u: goto label_123a18;
            case 0x123A1Cu: goto label_123a1c;
            case 0x123A20u: goto label_123a20;
            case 0x123A24u: goto label_123a24;
            case 0x123A28u: goto label_123a28;
            case 0x123A2Cu: goto label_123a2c;
            case 0x123A30u: goto label_123a30;
            case 0x123A34u: goto label_123a34;
            case 0x123A38u: goto label_123a38;
            case 0x123A3Cu: goto label_123a3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x123A18u;
label_123a18:
    // 0x123a18: 0x27bdfff0
    ctx->pc = 0x123a18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_123a1c:
    // 0x123a1c: 0x24020001
    ctx->pc = 0x123a1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_123a20:
    // 0x123a20: 0xffbf0000
    ctx->pc = 0x123a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_123a24:
    // 0x123a24: 0x8483009a
    ctx->pc = 0x123a24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 154)));
label_123a28:
    // 0x123a28: 0x14620003
label_123a2c:
    if (ctx->pc == 0x123A2Cu) {
        ctx->pc = 0x123A2Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x123A30u;
        goto label_123a30;
    }
    ctx->pc = 0x123A28u;
    {
        const bool branch_taken_0x123a28 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x123A2Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x123a28) {
            ctx->pc = 0x123A38u;
            goto label_123a38;
        }
    }
    ctx->pc = 0x123A30u;
label_123a30:
    // 0x123a30: 0x8048e26
label_123a34:
    if (ctx->pc == 0x123A34u) {
        ctx->pc = 0x123A34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x123A38u;
        goto label_123a38;
    }
    ctx->pc = 0x123A30u;
    ctx->pc = 0x123A34u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x123898u;
    goto label_123898;
    ctx->pc = 0x123A38u;
label_123a38:
    // 0x123a38: 0x8048dc0
label_123a3c:
    if (ctx->pc == 0x123A3Cu) {
        ctx->pc = 0x123A3Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x123A40u;
        goto label_fallthrough_0x123a38;
    }
    ctx->pc = 0x123A38u;
    ctx->pc = 0x123A3Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x123700u;
    goto label_123700;
label_fallthrough_0x123a38:
    ctx->pc = 0x123A40u;
}
