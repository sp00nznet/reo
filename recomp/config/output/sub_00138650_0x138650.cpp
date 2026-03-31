#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00138650
// Address: 0x138650 - 0x1389d0
void sub_00138650_0x138650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x138650u;

label_138650:
    // 0x138650: 0x27bdff90
    ctx->pc = 0x138650u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
label_138654:
    // 0x138654: 0x24020001
    ctx->pc = 0x138654u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_138658:
    // 0x138658: 0xffb20050
    ctx->pc = 0x138658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_13865c:
    // 0x13865c: 0x80902d
    ctx->pc = 0x13865cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_138660:
    // 0x138660: 0xffb00040
    ctx->pc = 0x138660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_138664:
    // 0x138664: 0xffb10048
    ctx->pc = 0x138664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_138668:
    // 0x138668: 0xffb30058
    ctx->pc = 0x138668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
label_13866c:
    // 0x13866c: 0xffbf0060
    ctx->pc = 0x13866cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_138670:
    // 0x138670: 0x82440001
    ctx->pc = 0x138670u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_138674:
    // 0x138674: 0x548200cf
label_138678:
    if (ctx->pc == 0x138678u) {
        ctx->pc = 0x138678u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x13867Cu;
        goto label_13867c;
    }
    ctx->pc = 0x138674u;
    {
        const bool branch_taken_0x138674 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x138674) {
            ctx->pc = 0x138678u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->pc = 0x1389B4u;
            goto label_1389b4;
        }
    }
    ctx->pc = 0x13867Cu;
label_13867c:
    // 0x13867c: 0x82420002
    ctx->pc = 0x13867cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_138680:
    // 0x138680: 0x1444002a
label_138684:
    if (ctx->pc == 0x138684u) {
        ctx->pc = 0x138684u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->pc = 0x138688u;
        goto label_138688;
    }
    ctx->pc = 0x138680u;
    {
        const bool branch_taken_0x138680 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x138684u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        if (branch_taken_0x138680) {
            ctx->pc = 0x13872Cu;
            goto label_13872c;
        }
    }
    ctx->pc = 0x138688u;
label_138688:
    // 0x138688: 0xc045270
label_13868c:
    if (ctx->pc == 0x13868Cu) {
        ctx->pc = 0x13868Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->pc = 0x138690u;
        goto label_138690;
    }
    ctx->pc = 0x138688u;
    SET_GPR_U32(ctx, 31, 0x138690u);
    ctx->pc = 0x13868Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 44)));
    ctx->pc = 0x1149C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001149C0_0x1149c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138690u; }
    }
    if (ctx->pc != 0x138690u) { return; }
    ctx->pc = 0x138690u;
label_138690:
    // 0x138690: 0x4430026
label_138694:
    if (ctx->pc == 0x138694u) {
        ctx->pc = 0x138694u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->pc = 0x138698u;
        goto label_138698;
    }
    ctx->pc = 0x138690u;
    {
        const bool branch_taken_0x138690 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x138690) {
            ctx->pc = 0x138694u;
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
            ctx->pc = 0x13872Cu;
            goto label_13872c;
        }
    }
    ctx->pc = 0x138698u;
label_138698:
    // 0x138698: 0x8e440004
    ctx->pc = 0x138698u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_13869c:
    // 0x13869c: 0x2650000c
    ctx->pc = 0x13869cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 12));
label_1386a0:
    // 0x1386a0: 0x282d
    ctx->pc = 0x1386a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1386a4:
    // 0x1386a4: 0x200302d
    ctx->pc = 0x1386a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1386a8:
    // 0x1386a8: 0x8c830000
    ctx->pc = 0x1386a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1386ac:
    // 0x1386ac: 0x8c620020
    ctx->pc = 0x1386acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1386b0:
    // 0x1386b0: 0x40f809
label_1386b4:
    if (ctx->pc == 0x1386B4u) {
        ctx->pc = 0x1386B4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 20));
        ctx->pc = 0x1386B8u;
        goto label_1386b8;
    }
    ctx->pc = 0x1386B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1386B8u);
        ctx->pc = 0x1386B4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 20));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x138650u: goto label_138650;
            case 0x138654u: goto label_138654;
            case 0x138658u: goto label_138658;
            case 0x13865Cu: goto label_13865c;
            case 0x138660u: goto label_138660;
            case 0x138664u: goto label_138664;
            case 0x138668u: goto label_138668;
            case 0x13866Cu: goto label_13866c;
            case 0x138670u: goto label_138670;
            case 0x138674u: goto label_138674;
            case 0x138678u: goto label_138678;
            case 0x13867Cu: goto label_13867c;
            case 0x138680u: goto label_138680;
            case 0x138684u: goto label_138684;
            case 0x138688u: goto label_138688;
            case 0x13868Cu: goto label_13868c;
            case 0x138690u: goto label_138690;
            case 0x138694u: goto label_138694;
            case 0x138698u: goto label_138698;
            case 0x13869Cu: goto label_13869c;
            case 0x1386A0u: goto label_1386a0;
            case 0x1386A4u: goto label_1386a4;
            case 0x1386A8u: goto label_1386a8;
            case 0x1386ACu: goto label_1386ac;
            case 0x1386B0u: goto label_1386b0;
            case 0x1386B4u: goto label_1386b4;
            case 0x1386B8u: goto label_1386b8;
            case 0x1386BCu: goto label_1386bc;
            case 0x1386C0u: goto label_1386c0;
            case 0x1386C4u: goto label_1386c4;
            case 0x1386C8u: goto label_1386c8;
            case 0x1386CCu: goto label_1386cc;
            case 0x1386D0u: goto label_1386d0;
            case 0x1386D4u: goto label_1386d4;
            case 0x1386D8u: goto label_1386d8;
            case 0x1386DCu: goto label_1386dc;
            case 0x1386E0u: goto label_1386e0;
            case 0x1386E4u: goto label_1386e4;
            case 0x1386E8u: goto label_1386e8;
            case 0x1386ECu: goto label_1386ec;
            case 0x1386F0u: goto label_1386f0;
            case 0x1386F4u: goto label_1386f4;
            case 0x1386F8u: goto label_1386f8;
            case 0x1386FCu: goto label_1386fc;
            case 0x138700u: goto label_138700;
            case 0x138704u: goto label_138704;
            case 0x138708u: goto label_138708;
            case 0x13870Cu: goto label_13870c;
            case 0x138710u: goto label_138710;
            case 0x138714u: goto label_138714;
            case 0x138718u: goto label_138718;
            case 0x13871Cu: goto label_13871c;
            case 0x138720u: goto label_138720;
            case 0x138724u: goto label_138724;
            case 0x138728u: goto label_138728;
            case 0x13872Cu: goto label_13872c;
            case 0x138730u: goto label_138730;
            case 0x138734u: goto label_138734;
            case 0x138738u: goto label_138738;
            case 0x13873Cu: goto label_13873c;
            case 0x138740u: goto label_138740;
            case 0x138744u: goto label_138744;
            case 0x138748u: goto label_138748;
            case 0x13874Cu: goto label_13874c;
            case 0x138750u: goto label_138750;
            case 0x138754u: goto label_138754;
            case 0x138758u: goto label_138758;
            case 0x13875Cu: goto label_13875c;
            case 0x138760u: goto label_138760;
            case 0x138764u: goto label_138764;
            case 0x138768u: goto label_138768;
            case 0x13876Cu: goto label_13876c;
            case 0x138770u: goto label_138770;
            case 0x138774u: goto label_138774;
            case 0x138778u: goto label_138778;
            case 0x13877Cu: goto label_13877c;
            case 0x138780u: goto label_138780;
            case 0x138784u: goto label_138784;
            case 0x138788u: goto label_138788;
            case 0x13878Cu: goto label_13878c;
            case 0x138790u: goto label_138790;
            case 0x138794u: goto label_138794;
            case 0x138798u: goto label_138798;
            case 0x13879Cu: goto label_13879c;
            case 0x1387A0u: goto label_1387a0;
            case 0x1387A4u: goto label_1387a4;
            case 0x1387A8u: goto label_1387a8;
            case 0x1387ACu: goto label_1387ac;
            case 0x1387B0u: goto label_1387b0;
            case 0x1387B4u: goto label_1387b4;
            case 0x1387B8u: goto label_1387b8;
            case 0x1387BCu: goto label_1387bc;
            case 0x1387C0u: goto label_1387c0;
            case 0x1387C4u: goto label_1387c4;
            case 0x1387C8u: goto label_1387c8;
            case 0x1387CCu: goto label_1387cc;
            case 0x1387D0u: goto label_1387d0;
            case 0x1387D4u: goto label_1387d4;
            case 0x1387D8u: goto label_1387d8;
            case 0x1387DCu: goto label_1387dc;
            case 0x1387E0u: goto label_1387e0;
            case 0x1387E4u: goto label_1387e4;
            case 0x1387E8u: goto label_1387e8;
            case 0x1387ECu: goto label_1387ec;
            case 0x1387F0u: goto label_1387f0;
            case 0x1387F4u: goto label_1387f4;
            case 0x1387F8u: goto label_1387f8;
            case 0x1387FCu: goto label_1387fc;
            case 0x138800u: goto label_138800;
            case 0x138804u: goto label_138804;
            case 0x138808u: goto label_138808;
            case 0x13880Cu: goto label_13880c;
            case 0x138810u: goto label_138810;
            case 0x138814u: goto label_138814;
            case 0x138818u: goto label_138818;
            case 0x13881Cu: goto label_13881c;
            case 0x138820u: goto label_138820;
            case 0x138824u: goto label_138824;
            case 0x138828u: goto label_138828;
            case 0x13882Cu: goto label_13882c;
            case 0x138830u: goto label_138830;
            case 0x138834u: goto label_138834;
            case 0x138838u: goto label_138838;
            case 0x13883Cu: goto label_13883c;
            case 0x138840u: goto label_138840;
            case 0x138844u: goto label_138844;
            case 0x138848u: goto label_138848;
            case 0x13884Cu: goto label_13884c;
            case 0x138850u: goto label_138850;
            case 0x138854u: goto label_138854;
            case 0x138858u: goto label_138858;
            case 0x13885Cu: goto label_13885c;
            case 0x138860u: goto label_138860;
            case 0x138864u: goto label_138864;
            case 0x138868u: goto label_138868;
            case 0x13886Cu: goto label_13886c;
            case 0x138870u: goto label_138870;
            case 0x138874u: goto label_138874;
            case 0x138878u: goto label_138878;
            case 0x13887Cu: goto label_13887c;
            case 0x138880u: goto label_138880;
            case 0x138884u: goto label_138884;
            case 0x138888u: goto label_138888;
            case 0x13888Cu: goto label_13888c;
            case 0x138890u: goto label_138890;
            case 0x138894u: goto label_138894;
            case 0x138898u: goto label_138898;
            case 0x13889Cu: goto label_13889c;
            case 0x1388A0u: goto label_1388a0;
            case 0x1388A4u: goto label_1388a4;
            case 0x1388A8u: goto label_1388a8;
            case 0x1388ACu: goto label_1388ac;
            case 0x1388B0u: goto label_1388b0;
            case 0x1388B4u: goto label_1388b4;
            case 0x1388B8u: goto label_1388b8;
            case 0x1388BCu: goto label_1388bc;
            case 0x1388C0u: goto label_1388c0;
            case 0x1388C4u: goto label_1388c4;
            case 0x1388C8u: goto label_1388c8;
            case 0x1388CCu: goto label_1388cc;
            case 0x1388D0u: goto label_1388d0;
            case 0x1388D4u: goto label_1388d4;
            case 0x1388D8u: goto label_1388d8;
            case 0x1388DCu: goto label_1388dc;
            case 0x1388E0u: goto label_1388e0;
            case 0x1388E4u: goto label_1388e4;
            case 0x1388E8u: goto label_1388e8;
            case 0x1388ECu: goto label_1388ec;
            case 0x1388F0u: goto label_1388f0;
            case 0x1388F4u: goto label_1388f4;
            case 0x1388F8u: goto label_1388f8;
            case 0x1388FCu: goto label_1388fc;
            case 0x138900u: goto label_138900;
            case 0x138904u: goto label_138904;
            case 0x138908u: goto label_138908;
            case 0x13890Cu: goto label_13890c;
            case 0x138910u: goto label_138910;
            case 0x138914u: goto label_138914;
            case 0x138918u: goto label_138918;
            case 0x13891Cu: goto label_13891c;
            case 0x138920u: goto label_138920;
            case 0x138924u: goto label_138924;
            case 0x138928u: goto label_138928;
            case 0x13892Cu: goto label_13892c;
            case 0x138930u: goto label_138930;
            case 0x138934u: goto label_138934;
            case 0x138938u: goto label_138938;
            case 0x13893Cu: goto label_13893c;
            case 0x138940u: goto label_138940;
            case 0x138944u: goto label_138944;
            case 0x138948u: goto label_138948;
            case 0x13894Cu: goto label_13894c;
            case 0x138950u: goto label_138950;
            case 0x138954u: goto label_138954;
            case 0x138958u: goto label_138958;
            case 0x13895Cu: goto label_13895c;
            case 0x138960u: goto label_138960;
            case 0x138964u: goto label_138964;
            case 0x138968u: goto label_138968;
            case 0x13896Cu: goto label_13896c;
            case 0x138970u: goto label_138970;
            case 0x138974u: goto label_138974;
            case 0x138978u: goto label_138978;
            case 0x13897Cu: goto label_13897c;
            case 0x138980u: goto label_138980;
            case 0x138984u: goto label_138984;
            case 0x138988u: goto label_138988;
            case 0x13898Cu: goto label_13898c;
            case 0x138990u: goto label_138990;
            case 0x138994u: goto label_138994;
            case 0x138998u: goto label_138998;
            case 0x13899Cu: goto label_13899c;
            case 0x1389A0u: goto label_1389a0;
            case 0x1389A4u: goto label_1389a4;
            case 0x1389A8u: goto label_1389a8;
            case 0x1389ACu: goto label_1389ac;
            case 0x1389B0u: goto label_1389b0;
            case 0x1389B4u: goto label_1389b4;
            case 0x1389B8u: goto label_1389b8;
            case 0x1389BCu: goto label_1389bc;
            case 0x1389C0u: goto label_1389c0;
            case 0x1389C4u: goto label_1389c4;
            case 0x1389C8u: goto label_1389c8;
            case 0x1389CCu: goto label_1389cc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1386B8u; }
            if (ctx->pc != 0x1386B8u) { return; }
        }
    }
    ctx->pc = 0x1386B8u;
label_1386b8:
    // 0x1386b8: 0xae000000
    ctx->pc = 0x1386b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1386bc:
    // 0x1386bc: 0x8e440008
    ctx->pc = 0x1386bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1386c0:
    // 0x1386c0: 0x24050001
    ctx->pc = 0x1386c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_1386c4:
    // 0x1386c4: 0xae400010
    ctx->pc = 0x1386c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_1386c8:
    // 0x1386c8: 0x8c830000
    ctx->pc = 0x1386c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1386cc:
    // 0x1386cc: 0x8c620020
    ctx->pc = 0x1386ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1386d0:
    // 0x1386d0: 0x40f809
label_1386d4:
    if (ctx->pc == 0x1386D4u) {
        ctx->pc = 0x1386D4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1386D8u;
        goto label_1386d8;
    }
    ctx->pc = 0x1386D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1386D8u);
        ctx->pc = 0x1386D4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x138650u: goto label_138650;
            case 0x138654u: goto label_138654;
            case 0x138658u: goto label_138658;
            case 0x13865Cu: goto label_13865c;
            case 0x138660u: goto label_138660;
            case 0x138664u: goto label_138664;
            case 0x138668u: goto label_138668;
            case 0x13866Cu: goto label_13866c;
            case 0x138670u: goto label_138670;
            case 0x138674u: goto label_138674;
            case 0x138678u: goto label_138678;
            case 0x13867Cu: goto label_13867c;
            case 0x138680u: goto label_138680;
            case 0x138684u: goto label_138684;
            case 0x138688u: goto label_138688;
            case 0x13868Cu: goto label_13868c;
            case 0x138690u: goto label_138690;
            case 0x138694u: goto label_138694;
            case 0x138698u: goto label_138698;
            case 0x13869Cu: goto label_13869c;
            case 0x1386A0u: goto label_1386a0;
            case 0x1386A4u: goto label_1386a4;
            case 0x1386A8u: goto label_1386a8;
            case 0x1386ACu: goto label_1386ac;
            case 0x1386B0u: goto label_1386b0;
            case 0x1386B4u: goto label_1386b4;
            case 0x1386B8u: goto label_1386b8;
            case 0x1386BCu: goto label_1386bc;
            case 0x1386C0u: goto label_1386c0;
            case 0x1386C4u: goto label_1386c4;
            case 0x1386C8u: goto label_1386c8;
            case 0x1386CCu: goto label_1386cc;
            case 0x1386D0u: goto label_1386d0;
            case 0x1386D4u: goto label_1386d4;
            case 0x1386D8u: goto label_1386d8;
            case 0x1386DCu: goto label_1386dc;
            case 0x1386E0u: goto label_1386e0;
            case 0x1386E4u: goto label_1386e4;
            case 0x1386E8u: goto label_1386e8;
            case 0x1386ECu: goto label_1386ec;
            case 0x1386F0u: goto label_1386f0;
            case 0x1386F4u: goto label_1386f4;
            case 0x1386F8u: goto label_1386f8;
            case 0x1386FCu: goto label_1386fc;
            case 0x138700u: goto label_138700;
            case 0x138704u: goto label_138704;
            case 0x138708u: goto label_138708;
            case 0x13870Cu: goto label_13870c;
            case 0x138710u: goto label_138710;
            case 0x138714u: goto label_138714;
            case 0x138718u: goto label_138718;
            case 0x13871Cu: goto label_13871c;
            case 0x138720u: goto label_138720;
            case 0x138724u: goto label_138724;
            case 0x138728u: goto label_138728;
            case 0x13872Cu: goto label_13872c;
            case 0x138730u: goto label_138730;
            case 0x138734u: goto label_138734;
            case 0x138738u: goto label_138738;
            case 0x13873Cu: goto label_13873c;
            case 0x138740u: goto label_138740;
            case 0x138744u: goto label_138744;
            case 0x138748u: goto label_138748;
            case 0x13874Cu: goto label_13874c;
            case 0x138750u: goto label_138750;
            case 0x138754u: goto label_138754;
            case 0x138758u: goto label_138758;
            case 0x13875Cu: goto label_13875c;
            case 0x138760u: goto label_138760;
            case 0x138764u: goto label_138764;
            case 0x138768u: goto label_138768;
            case 0x13876Cu: goto label_13876c;
            case 0x138770u: goto label_138770;
            case 0x138774u: goto label_138774;
            case 0x138778u: goto label_138778;
            case 0x13877Cu: goto label_13877c;
            case 0x138780u: goto label_138780;
            case 0x138784u: goto label_138784;
            case 0x138788u: goto label_138788;
            case 0x13878Cu: goto label_13878c;
            case 0x138790u: goto label_138790;
            case 0x138794u: goto label_138794;
            case 0x138798u: goto label_138798;
            case 0x13879Cu: goto label_13879c;
            case 0x1387A0u: goto label_1387a0;
            case 0x1387A4u: goto label_1387a4;
            case 0x1387A8u: goto label_1387a8;
            case 0x1387ACu: goto label_1387ac;
            case 0x1387B0u: goto label_1387b0;
            case 0x1387B4u: goto label_1387b4;
            case 0x1387B8u: goto label_1387b8;
            case 0x1387BCu: goto label_1387bc;
            case 0x1387C0u: goto label_1387c0;
            case 0x1387C4u: goto label_1387c4;
            case 0x1387C8u: goto label_1387c8;
            case 0x1387CCu: goto label_1387cc;
            case 0x1387D0u: goto label_1387d0;
            case 0x1387D4u: goto label_1387d4;
            case 0x1387D8u: goto label_1387d8;
            case 0x1387DCu: goto label_1387dc;
            case 0x1387E0u: goto label_1387e0;
            case 0x1387E4u: goto label_1387e4;
            case 0x1387E8u: goto label_1387e8;
            case 0x1387ECu: goto label_1387ec;
            case 0x1387F0u: goto label_1387f0;
            case 0x1387F4u: goto label_1387f4;
            case 0x1387F8u: goto label_1387f8;
            case 0x1387FCu: goto label_1387fc;
            case 0x138800u: goto label_138800;
            case 0x138804u: goto label_138804;
            case 0x138808u: goto label_138808;
            case 0x13880Cu: goto label_13880c;
            case 0x138810u: goto label_138810;
            case 0x138814u: goto label_138814;
            case 0x138818u: goto label_138818;
            case 0x13881Cu: goto label_13881c;
            case 0x138820u: goto label_138820;
            case 0x138824u: goto label_138824;
            case 0x138828u: goto label_138828;
            case 0x13882Cu: goto label_13882c;
            case 0x138830u: goto label_138830;
            case 0x138834u: goto label_138834;
            case 0x138838u: goto label_138838;
            case 0x13883Cu: goto label_13883c;
            case 0x138840u: goto label_138840;
            case 0x138844u: goto label_138844;
            case 0x138848u: goto label_138848;
            case 0x13884Cu: goto label_13884c;
            case 0x138850u: goto label_138850;
            case 0x138854u: goto label_138854;
            case 0x138858u: goto label_138858;
            case 0x13885Cu: goto label_13885c;
            case 0x138860u: goto label_138860;
            case 0x138864u: goto label_138864;
            case 0x138868u: goto label_138868;
            case 0x13886Cu: goto label_13886c;
            case 0x138870u: goto label_138870;
            case 0x138874u: goto label_138874;
            case 0x138878u: goto label_138878;
            case 0x13887Cu: goto label_13887c;
            case 0x138880u: goto label_138880;
            case 0x138884u: goto label_138884;
            case 0x138888u: goto label_138888;
            case 0x13888Cu: goto label_13888c;
            case 0x138890u: goto label_138890;
            case 0x138894u: goto label_138894;
            case 0x138898u: goto label_138898;
            case 0x13889Cu: goto label_13889c;
            case 0x1388A0u: goto label_1388a0;
            case 0x1388A4u: goto label_1388a4;
            case 0x1388A8u: goto label_1388a8;
            case 0x1388ACu: goto label_1388ac;
            case 0x1388B0u: goto label_1388b0;
            case 0x1388B4u: goto label_1388b4;
            case 0x1388B8u: goto label_1388b8;
            case 0x1388BCu: goto label_1388bc;
            case 0x1388C0u: goto label_1388c0;
            case 0x1388C4u: goto label_1388c4;
            case 0x1388C8u: goto label_1388c8;
            case 0x1388CCu: goto label_1388cc;
            case 0x1388D0u: goto label_1388d0;
            case 0x1388D4u: goto label_1388d4;
            case 0x1388D8u: goto label_1388d8;
            case 0x1388DCu: goto label_1388dc;
            case 0x1388E0u: goto label_1388e0;
            case 0x1388E4u: goto label_1388e4;
            case 0x1388E8u: goto label_1388e8;
            case 0x1388ECu: goto label_1388ec;
            case 0x1388F0u: goto label_1388f0;
            case 0x1388F4u: goto label_1388f4;
            case 0x1388F8u: goto label_1388f8;
            case 0x1388FCu: goto label_1388fc;
            case 0x138900u: goto label_138900;
            case 0x138904u: goto label_138904;
            case 0x138908u: goto label_138908;
            case 0x13890Cu: goto label_13890c;
            case 0x138910u: goto label_138910;
            case 0x138914u: goto label_138914;
            case 0x138918u: goto label_138918;
            case 0x13891Cu: goto label_13891c;
            case 0x138920u: goto label_138920;
            case 0x138924u: goto label_138924;
            case 0x138928u: goto label_138928;
            case 0x13892Cu: goto label_13892c;
            case 0x138930u: goto label_138930;
            case 0x138934u: goto label_138934;
            case 0x138938u: goto label_138938;
            case 0x13893Cu: goto label_13893c;
            case 0x138940u: goto label_138940;
            case 0x138944u: goto label_138944;
            case 0x138948u: goto label_138948;
            case 0x13894Cu: goto label_13894c;
            case 0x138950u: goto label_138950;
            case 0x138954u: goto label_138954;
            case 0x138958u: goto label_138958;
            case 0x13895Cu: goto label_13895c;
            case 0x138960u: goto label_138960;
            case 0x138964u: goto label_138964;
            case 0x138968u: goto label_138968;
            case 0x13896Cu: goto label_13896c;
            case 0x138970u: goto label_138970;
            case 0x138974u: goto label_138974;
            case 0x138978u: goto label_138978;
            case 0x13897Cu: goto label_13897c;
            case 0x138980u: goto label_138980;
            case 0x138984u: goto label_138984;
            case 0x138988u: goto label_138988;
            case 0x13898Cu: goto label_13898c;
            case 0x138990u: goto label_138990;
            case 0x138994u: goto label_138994;
            case 0x138998u: goto label_138998;
            case 0x13899Cu: goto label_13899c;
            case 0x1389A0u: goto label_1389a0;
            case 0x1389A4u: goto label_1389a4;
            case 0x1389A8u: goto label_1389a8;
            case 0x1389ACu: goto label_1389ac;
            case 0x1389B0u: goto label_1389b0;
            case 0x1389B4u: goto label_1389b4;
            case 0x1389B8u: goto label_1389b8;
            case 0x1389BCu: goto label_1389bc;
            case 0x1389C0u: goto label_1389c0;
            case 0x1389C4u: goto label_1389c4;
            case 0x1389C8u: goto label_1389c8;
            case 0x1389CCu: goto label_1389cc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1386D8u; }
            if (ctx->pc != 0x1386D8u) { return; }
        }
    }
    ctx->pc = 0x1386D8u;
label_1386d8:
    // 0x1386d8: 0xae200000
    ctx->pc = 0x1386d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1386dc:
    // 0x1386dc: 0x8e42003c
    ctx->pc = 0x1386dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_1386e0:
    // 0x1386e0: 0x8e430010
    ctx->pc = 0x1386e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1386e4:
    // 0x1386e4: 0xae400018
    ctx->pc = 0x1386e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_1386e8:
    // 0x1386e8: 0x431021
    ctx->pc = 0x1386e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1386ec:
    // 0x1386ec: 0xa2400002
    ctx->pc = 0x1386ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
label_1386f0:
    // 0x1386f0: 0x1060000d
label_1386f4:
    if (ctx->pc == 0x1386F4u) {
        ctx->pc = 0x1386F4u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
        ctx->pc = 0x1386F8u;
        goto label_1386f8;
    }
    ctx->pc = 0x1386F0u;
    {
        const bool branch_taken_0x1386f0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1386F4u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
        if (branch_taken_0x1386f0) {
            ctx->pc = 0x138728u;
            goto label_138728;
        }
    }
    ctx->pc = 0x1386F8u;
label_1386f8:
    // 0x1386f8: 0x3c040024
    ctx->pc = 0x1386f8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_1386fc:
    // 0x1386fc: 0xc045a12
label_138700:
    if (ctx->pc == 0x138700u) {
        ctx->pc = 0x138700u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952944));
        ctx->pc = 0x138704u;
        goto label_138704;
    }
    ctx->pc = 0x1386FCu;
    SET_GPR_U32(ctx, 31, 0x138704u);
    ctx->pc = 0x138700u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952944));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138704u; }
    }
    if (ctx->pc != 0x138704u) { return; }
    ctx->pc = 0x138704u;
label_138704:
    // 0x138704: 0x0
    ctx->pc = 0x138704u;
    // NOP
label_138708:
    // 0x138708: 0x0
    ctx->pc = 0x138708u;
    // NOP
label_13870c:
    // 0x13870c: 0x0
    ctx->pc = 0x13870cu;
    // NOP
label_138710:
    // 0x138710: 0x0
    ctx->pc = 0x138710u;
    // NOP
label_138714:
    // 0x138714: 0x0
    ctx->pc = 0x138714u;
    // NOP
label_138718:
    // 0x138718: 0x0
    ctx->pc = 0x138718u;
    // NOP
label_13871c:
    // 0x13871c: 0x1000fffa
label_138720:
    if (ctx->pc == 0x138720u) {
        ctx->pc = 0x138724u;
        goto label_138724;
    }
    ctx->pc = 0x13871Cu;
    {
        const bool branch_taken_0x13871c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x13871c) {
            ctx->pc = 0x138708u;
            goto label_138708;
        }
    }
    ctx->pc = 0x138724u;
label_138724:
    // 0x138724: 0x0
    ctx->pc = 0x138724u;
    // NOP
label_138728:
    // 0x138728: 0x182d
    ctx->pc = 0x138728u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13872c:
    // 0x13872c: 0x146000a1
label_138730:
    if (ctx->pc == 0x138730u) {
        ctx->pc = 0x138730u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x138734u;
        goto label_138734;
    }
    ctx->pc = 0x13872Cu;
    {
        const bool branch_taken_0x13872c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x138730u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x13872c) {
            ctx->pc = 0x1389B4u;
            goto label_1389b4;
        }
    }
    ctx->pc = 0x138734u;
label_138734:
    // 0x138734: 0x8e440004
    ctx->pc = 0x138734u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_138738:
    // 0x138738: 0x3c067fff
    ctx->pc = 0x138738u;
    SET_GPR_U32(ctx, 6, ((uint32_t)32767 << 16));
label_13873c:
    // 0x13873c: 0x3a0382d
    ctx->pc = 0x13873cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_138740:
    // 0x138740: 0x24050001
    ctx->pc = 0x138740u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_138744:
    // 0x138744: 0x8c830000
    ctx->pc = 0x138744u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_138748:
    // 0x138748: 0x8c620018
    ctx->pc = 0x138748u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_13874c:
    // 0x13874c: 0x40f809
label_138750:
    if (ctx->pc == 0x138750u) {
        ctx->pc = 0x138750u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
        ctx->pc = 0x138754u;
        goto label_138754;
    }
    ctx->pc = 0x13874Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x138754u);
        ctx->pc = 0x138750u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x138650u: goto label_138650;
            case 0x138654u: goto label_138654;
            case 0x138658u: goto label_138658;
            case 0x13865Cu: goto label_13865c;
            case 0x138660u: goto label_138660;
            case 0x138664u: goto label_138664;
            case 0x138668u: goto label_138668;
            case 0x13866Cu: goto label_13866c;
            case 0x138670u: goto label_138670;
            case 0x138674u: goto label_138674;
            case 0x138678u: goto label_138678;
            case 0x13867Cu: goto label_13867c;
            case 0x138680u: goto label_138680;
            case 0x138684u: goto label_138684;
            case 0x138688u: goto label_138688;
            case 0x13868Cu: goto label_13868c;
            case 0x138690u: goto label_138690;
            case 0x138694u: goto label_138694;
            case 0x138698u: goto label_138698;
            case 0x13869Cu: goto label_13869c;
            case 0x1386A0u: goto label_1386a0;
            case 0x1386A4u: goto label_1386a4;
            case 0x1386A8u: goto label_1386a8;
            case 0x1386ACu: goto label_1386ac;
            case 0x1386B0u: goto label_1386b0;
            case 0x1386B4u: goto label_1386b4;
            case 0x1386B8u: goto label_1386b8;
            case 0x1386BCu: goto label_1386bc;
            case 0x1386C0u: goto label_1386c0;
            case 0x1386C4u: goto label_1386c4;
            case 0x1386C8u: goto label_1386c8;
            case 0x1386CCu: goto label_1386cc;
            case 0x1386D0u: goto label_1386d0;
            case 0x1386D4u: goto label_1386d4;
            case 0x1386D8u: goto label_1386d8;
            case 0x1386DCu: goto label_1386dc;
            case 0x1386E0u: goto label_1386e0;
            case 0x1386E4u: goto label_1386e4;
            case 0x1386E8u: goto label_1386e8;
            case 0x1386ECu: goto label_1386ec;
            case 0x1386F0u: goto label_1386f0;
            case 0x1386F4u: goto label_1386f4;
            case 0x1386F8u: goto label_1386f8;
            case 0x1386FCu: goto label_1386fc;
            case 0x138700u: goto label_138700;
            case 0x138704u: goto label_138704;
            case 0x138708u: goto label_138708;
            case 0x13870Cu: goto label_13870c;
            case 0x138710u: goto label_138710;
            case 0x138714u: goto label_138714;
            case 0x138718u: goto label_138718;
            case 0x13871Cu: goto label_13871c;
            case 0x138720u: goto label_138720;
            case 0x138724u: goto label_138724;
            case 0x138728u: goto label_138728;
            case 0x13872Cu: goto label_13872c;
            case 0x138730u: goto label_138730;
            case 0x138734u: goto label_138734;
            case 0x138738u: goto label_138738;
            case 0x13873Cu: goto label_13873c;
            case 0x138740u: goto label_138740;
            case 0x138744u: goto label_138744;
            case 0x138748u: goto label_138748;
            case 0x13874Cu: goto label_13874c;
            case 0x138750u: goto label_138750;
            case 0x138754u: goto label_138754;
            case 0x138758u: goto label_138758;
            case 0x13875Cu: goto label_13875c;
            case 0x138760u: goto label_138760;
            case 0x138764u: goto label_138764;
            case 0x138768u: goto label_138768;
            case 0x13876Cu: goto label_13876c;
            case 0x138770u: goto label_138770;
            case 0x138774u: goto label_138774;
            case 0x138778u: goto label_138778;
            case 0x13877Cu: goto label_13877c;
            case 0x138780u: goto label_138780;
            case 0x138784u: goto label_138784;
            case 0x138788u: goto label_138788;
            case 0x13878Cu: goto label_13878c;
            case 0x138790u: goto label_138790;
            case 0x138794u: goto label_138794;
            case 0x138798u: goto label_138798;
            case 0x13879Cu: goto label_13879c;
            case 0x1387A0u: goto label_1387a0;
            case 0x1387A4u: goto label_1387a4;
            case 0x1387A8u: goto label_1387a8;
            case 0x1387ACu: goto label_1387ac;
            case 0x1387B0u: goto label_1387b0;
            case 0x1387B4u: goto label_1387b4;
            case 0x1387B8u: goto label_1387b8;
            case 0x1387BCu: goto label_1387bc;
            case 0x1387C0u: goto label_1387c0;
            case 0x1387C4u: goto label_1387c4;
            case 0x1387C8u: goto label_1387c8;
            case 0x1387CCu: goto label_1387cc;
            case 0x1387D0u: goto label_1387d0;
            case 0x1387D4u: goto label_1387d4;
            case 0x1387D8u: goto label_1387d8;
            case 0x1387DCu: goto label_1387dc;
            case 0x1387E0u: goto label_1387e0;
            case 0x1387E4u: goto label_1387e4;
            case 0x1387E8u: goto label_1387e8;
            case 0x1387ECu: goto label_1387ec;
            case 0x1387F0u: goto label_1387f0;
            case 0x1387F4u: goto label_1387f4;
            case 0x1387F8u: goto label_1387f8;
            case 0x1387FCu: goto label_1387fc;
            case 0x138800u: goto label_138800;
            case 0x138804u: goto label_138804;
            case 0x138808u: goto label_138808;
            case 0x13880Cu: goto label_13880c;
            case 0x138810u: goto label_138810;
            case 0x138814u: goto label_138814;
            case 0x138818u: goto label_138818;
            case 0x13881Cu: goto label_13881c;
            case 0x138820u: goto label_138820;
            case 0x138824u: goto label_138824;
            case 0x138828u: goto label_138828;
            case 0x13882Cu: goto label_13882c;
            case 0x138830u: goto label_138830;
            case 0x138834u: goto label_138834;
            case 0x138838u: goto label_138838;
            case 0x13883Cu: goto label_13883c;
            case 0x138840u: goto label_138840;
            case 0x138844u: goto label_138844;
            case 0x138848u: goto label_138848;
            case 0x13884Cu: goto label_13884c;
            case 0x138850u: goto label_138850;
            case 0x138854u: goto label_138854;
            case 0x138858u: goto label_138858;
            case 0x13885Cu: goto label_13885c;
            case 0x138860u: goto label_138860;
            case 0x138864u: goto label_138864;
            case 0x138868u: goto label_138868;
            case 0x13886Cu: goto label_13886c;
            case 0x138870u: goto label_138870;
            case 0x138874u: goto label_138874;
            case 0x138878u: goto label_138878;
            case 0x13887Cu: goto label_13887c;
            case 0x138880u: goto label_138880;
            case 0x138884u: goto label_138884;
            case 0x138888u: goto label_138888;
            case 0x13888Cu: goto label_13888c;
            case 0x138890u: goto label_138890;
            case 0x138894u: goto label_138894;
            case 0x138898u: goto label_138898;
            case 0x13889Cu: goto label_13889c;
            case 0x1388A0u: goto label_1388a0;
            case 0x1388A4u: goto label_1388a4;
            case 0x1388A8u: goto label_1388a8;
            case 0x1388ACu: goto label_1388ac;
            case 0x1388B0u: goto label_1388b0;
            case 0x1388B4u: goto label_1388b4;
            case 0x1388B8u: goto label_1388b8;
            case 0x1388BCu: goto label_1388bc;
            case 0x1388C0u: goto label_1388c0;
            case 0x1388C4u: goto label_1388c4;
            case 0x1388C8u: goto label_1388c8;
            case 0x1388CCu: goto label_1388cc;
            case 0x1388D0u: goto label_1388d0;
            case 0x1388D4u: goto label_1388d4;
            case 0x1388D8u: goto label_1388d8;
            case 0x1388DCu: goto label_1388dc;
            case 0x1388E0u: goto label_1388e0;
            case 0x1388E4u: goto label_1388e4;
            case 0x1388E8u: goto label_1388e8;
            case 0x1388ECu: goto label_1388ec;
            case 0x1388F0u: goto label_1388f0;
            case 0x1388F4u: goto label_1388f4;
            case 0x1388F8u: goto label_1388f8;
            case 0x1388FCu: goto label_1388fc;
            case 0x138900u: goto label_138900;
            case 0x138904u: goto label_138904;
            case 0x138908u: goto label_138908;
            case 0x13890Cu: goto label_13890c;
            case 0x138910u: goto label_138910;
            case 0x138914u: goto label_138914;
            case 0x138918u: goto label_138918;
            case 0x13891Cu: goto label_13891c;
            case 0x138920u: goto label_138920;
            case 0x138924u: goto label_138924;
            case 0x138928u: goto label_138928;
            case 0x13892Cu: goto label_13892c;
            case 0x138930u: goto label_138930;
            case 0x138934u: goto label_138934;
            case 0x138938u: goto label_138938;
            case 0x13893Cu: goto label_13893c;
            case 0x138940u: goto label_138940;
            case 0x138944u: goto label_138944;
            case 0x138948u: goto label_138948;
            case 0x13894Cu: goto label_13894c;
            case 0x138950u: goto label_138950;
            case 0x138954u: goto label_138954;
            case 0x138958u: goto label_138958;
            case 0x13895Cu: goto label_13895c;
            case 0x138960u: goto label_138960;
            case 0x138964u: goto label_138964;
            case 0x138968u: goto label_138968;
            case 0x13896Cu: goto label_13896c;
            case 0x138970u: goto label_138970;
            case 0x138974u: goto label_138974;
            case 0x138978u: goto label_138978;
            case 0x13897Cu: goto label_13897c;
            case 0x138980u: goto label_138980;
            case 0x138984u: goto label_138984;
            case 0x138988u: goto label_138988;
            case 0x13898Cu: goto label_13898c;
            case 0x138990u: goto label_138990;
            case 0x138994u: goto label_138994;
            case 0x138998u: goto label_138998;
            case 0x13899Cu: goto label_13899c;
            case 0x1389A0u: goto label_1389a0;
            case 0x1389A4u: goto label_1389a4;
            case 0x1389A8u: goto label_1389a8;
            case 0x1389ACu: goto label_1389ac;
            case 0x1389B0u: goto label_1389b0;
            case 0x1389B4u: goto label_1389b4;
            case 0x1389B8u: goto label_1389b8;
            case 0x1389BCu: goto label_1389bc;
            case 0x1389C0u: goto label_1389c0;
            case 0x1389C4u: goto label_1389c4;
            case 0x1389C8u: goto label_1389c8;
            case 0x1389CCu: goto label_1389cc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x138754u; }
            if (ctx->pc != 0x138754u) { return; }
        }
    }
    ctx->pc = 0x138754u;
label_138754:
    // 0x138754: 0x8e440008
    ctx->pc = 0x138754u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_138758:
    // 0x138758: 0x27b30020
    ctx->pc = 0x138758u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 32));
label_13875c:
    // 0x13875c: 0x3c067fff
    ctx->pc = 0x13875cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)32767 << 16));
label_138760:
    // 0x138760: 0x8c830000
    ctx->pc = 0x138760u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_138764:
    // 0x138764: 0x282d
    ctx->pc = 0x138764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_138768:
    // 0x138768: 0x34c6ffff
    ctx->pc = 0x138768u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
label_13876c:
    // 0x13876c: 0x8c620018
    ctx->pc = 0x13876cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_138770:
    // 0x138770: 0x40f809
label_138774:
    if (ctx->pc == 0x138774u) {
        ctx->pc = 0x138774u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x138778u;
        goto label_138778;
    }
    ctx->pc = 0x138770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x138778u);
        ctx->pc = 0x138774u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x138650u: goto label_138650;
            case 0x138654u: goto label_138654;
            case 0x138658u: goto label_138658;
            case 0x13865Cu: goto label_13865c;
            case 0x138660u: goto label_138660;
            case 0x138664u: goto label_138664;
            case 0x138668u: goto label_138668;
            case 0x13866Cu: goto label_13866c;
            case 0x138670u: goto label_138670;
            case 0x138674u: goto label_138674;
            case 0x138678u: goto label_138678;
            case 0x13867Cu: goto label_13867c;
            case 0x138680u: goto label_138680;
            case 0x138684u: goto label_138684;
            case 0x138688u: goto label_138688;
            case 0x13868Cu: goto label_13868c;
            case 0x138690u: goto label_138690;
            case 0x138694u: goto label_138694;
            case 0x138698u: goto label_138698;
            case 0x13869Cu: goto label_13869c;
            case 0x1386A0u: goto label_1386a0;
            case 0x1386A4u: goto label_1386a4;
            case 0x1386A8u: goto label_1386a8;
            case 0x1386ACu: goto label_1386ac;
            case 0x1386B0u: goto label_1386b0;
            case 0x1386B4u: goto label_1386b4;
            case 0x1386B8u: goto label_1386b8;
            case 0x1386BCu: goto label_1386bc;
            case 0x1386C0u: goto label_1386c0;
            case 0x1386C4u: goto label_1386c4;
            case 0x1386C8u: goto label_1386c8;
            case 0x1386CCu: goto label_1386cc;
            case 0x1386D0u: goto label_1386d0;
            case 0x1386D4u: goto label_1386d4;
            case 0x1386D8u: goto label_1386d8;
            case 0x1386DCu: goto label_1386dc;
            case 0x1386E0u: goto label_1386e0;
            case 0x1386E4u: goto label_1386e4;
            case 0x1386E8u: goto label_1386e8;
            case 0x1386ECu: goto label_1386ec;
            case 0x1386F0u: goto label_1386f0;
            case 0x1386F4u: goto label_1386f4;
            case 0x1386F8u: goto label_1386f8;
            case 0x1386FCu: goto label_1386fc;
            case 0x138700u: goto label_138700;
            case 0x138704u: goto label_138704;
            case 0x138708u: goto label_138708;
            case 0x13870Cu: goto label_13870c;
            case 0x138710u: goto label_138710;
            case 0x138714u: goto label_138714;
            case 0x138718u: goto label_138718;
            case 0x13871Cu: goto label_13871c;
            case 0x138720u: goto label_138720;
            case 0x138724u: goto label_138724;
            case 0x138728u: goto label_138728;
            case 0x13872Cu: goto label_13872c;
            case 0x138730u: goto label_138730;
            case 0x138734u: goto label_138734;
            case 0x138738u: goto label_138738;
            case 0x13873Cu: goto label_13873c;
            case 0x138740u: goto label_138740;
            case 0x138744u: goto label_138744;
            case 0x138748u: goto label_138748;
            case 0x13874Cu: goto label_13874c;
            case 0x138750u: goto label_138750;
            case 0x138754u: goto label_138754;
            case 0x138758u: goto label_138758;
            case 0x13875Cu: goto label_13875c;
            case 0x138760u: goto label_138760;
            case 0x138764u: goto label_138764;
            case 0x138768u: goto label_138768;
            case 0x13876Cu: goto label_13876c;
            case 0x138770u: goto label_138770;
            case 0x138774u: goto label_138774;
            case 0x138778u: goto label_138778;
            case 0x13877Cu: goto label_13877c;
            case 0x138780u: goto label_138780;
            case 0x138784u: goto label_138784;
            case 0x138788u: goto label_138788;
            case 0x13878Cu: goto label_13878c;
            case 0x138790u: goto label_138790;
            case 0x138794u: goto label_138794;
            case 0x138798u: goto label_138798;
            case 0x13879Cu: goto label_13879c;
            case 0x1387A0u: goto label_1387a0;
            case 0x1387A4u: goto label_1387a4;
            case 0x1387A8u: goto label_1387a8;
            case 0x1387ACu: goto label_1387ac;
            case 0x1387B0u: goto label_1387b0;
            case 0x1387B4u: goto label_1387b4;
            case 0x1387B8u: goto label_1387b8;
            case 0x1387BCu: goto label_1387bc;
            case 0x1387C0u: goto label_1387c0;
            case 0x1387C4u: goto label_1387c4;
            case 0x1387C8u: goto label_1387c8;
            case 0x1387CCu: goto label_1387cc;
            case 0x1387D0u: goto label_1387d0;
            case 0x1387D4u: goto label_1387d4;
            case 0x1387D8u: goto label_1387d8;
            case 0x1387DCu: goto label_1387dc;
            case 0x1387E0u: goto label_1387e0;
            case 0x1387E4u: goto label_1387e4;
            case 0x1387E8u: goto label_1387e8;
            case 0x1387ECu: goto label_1387ec;
            case 0x1387F0u: goto label_1387f0;
            case 0x1387F4u: goto label_1387f4;
            case 0x1387F8u: goto label_1387f8;
            case 0x1387FCu: goto label_1387fc;
            case 0x138800u: goto label_138800;
            case 0x138804u: goto label_138804;
            case 0x138808u: goto label_138808;
            case 0x13880Cu: goto label_13880c;
            case 0x138810u: goto label_138810;
            case 0x138814u: goto label_138814;
            case 0x138818u: goto label_138818;
            case 0x13881Cu: goto label_13881c;
            case 0x138820u: goto label_138820;
            case 0x138824u: goto label_138824;
            case 0x138828u: goto label_138828;
            case 0x13882Cu: goto label_13882c;
            case 0x138830u: goto label_138830;
            case 0x138834u: goto label_138834;
            case 0x138838u: goto label_138838;
            case 0x13883Cu: goto label_13883c;
            case 0x138840u: goto label_138840;
            case 0x138844u: goto label_138844;
            case 0x138848u: goto label_138848;
            case 0x13884Cu: goto label_13884c;
            case 0x138850u: goto label_138850;
            case 0x138854u: goto label_138854;
            case 0x138858u: goto label_138858;
            case 0x13885Cu: goto label_13885c;
            case 0x138860u: goto label_138860;
            case 0x138864u: goto label_138864;
            case 0x138868u: goto label_138868;
            case 0x13886Cu: goto label_13886c;
            case 0x138870u: goto label_138870;
            case 0x138874u: goto label_138874;
            case 0x138878u: goto label_138878;
            case 0x13887Cu: goto label_13887c;
            case 0x138880u: goto label_138880;
            case 0x138884u: goto label_138884;
            case 0x138888u: goto label_138888;
            case 0x13888Cu: goto label_13888c;
            case 0x138890u: goto label_138890;
            case 0x138894u: goto label_138894;
            case 0x138898u: goto label_138898;
            case 0x13889Cu: goto label_13889c;
            case 0x1388A0u: goto label_1388a0;
            case 0x1388A4u: goto label_1388a4;
            case 0x1388A8u: goto label_1388a8;
            case 0x1388ACu: goto label_1388ac;
            case 0x1388B0u: goto label_1388b0;
            case 0x1388B4u: goto label_1388b4;
            case 0x1388B8u: goto label_1388b8;
            case 0x1388BCu: goto label_1388bc;
            case 0x1388C0u: goto label_1388c0;
            case 0x1388C4u: goto label_1388c4;
            case 0x1388C8u: goto label_1388c8;
            case 0x1388CCu: goto label_1388cc;
            case 0x1388D0u: goto label_1388d0;
            case 0x1388D4u: goto label_1388d4;
            case 0x1388D8u: goto label_1388d8;
            case 0x1388DCu: goto label_1388dc;
            case 0x1388E0u: goto label_1388e0;
            case 0x1388E4u: goto label_1388e4;
            case 0x1388E8u: goto label_1388e8;
            case 0x1388ECu: goto label_1388ec;
            case 0x1388F0u: goto label_1388f0;
            case 0x1388F4u: goto label_1388f4;
            case 0x1388F8u: goto label_1388f8;
            case 0x1388FCu: goto label_1388fc;
            case 0x138900u: goto label_138900;
            case 0x138904u: goto label_138904;
            case 0x138908u: goto label_138908;
            case 0x13890Cu: goto label_13890c;
            case 0x138910u: goto label_138910;
            case 0x138914u: goto label_138914;
            case 0x138918u: goto label_138918;
            case 0x13891Cu: goto label_13891c;
            case 0x138920u: goto label_138920;
            case 0x138924u: goto label_138924;
            case 0x138928u: goto label_138928;
            case 0x13892Cu: goto label_13892c;
            case 0x138930u: goto label_138930;
            case 0x138934u: goto label_138934;
            case 0x138938u: goto label_138938;
            case 0x13893Cu: goto label_13893c;
            case 0x138940u: goto label_138940;
            case 0x138944u: goto label_138944;
            case 0x138948u: goto label_138948;
            case 0x13894Cu: goto label_13894c;
            case 0x138950u: goto label_138950;
            case 0x138954u: goto label_138954;
            case 0x138958u: goto label_138958;
            case 0x13895Cu: goto label_13895c;
            case 0x138960u: goto label_138960;
            case 0x138964u: goto label_138964;
            case 0x138968u: goto label_138968;
            case 0x13896Cu: goto label_13896c;
            case 0x138970u: goto label_138970;
            case 0x138974u: goto label_138974;
            case 0x138978u: goto label_138978;
            case 0x13897Cu: goto label_13897c;
            case 0x138980u: goto label_138980;
            case 0x138984u: goto label_138984;
            case 0x138988u: goto label_138988;
            case 0x13898Cu: goto label_13898c;
            case 0x138990u: goto label_138990;
            case 0x138994u: goto label_138994;
            case 0x138998u: goto label_138998;
            case 0x13899Cu: goto label_13899c;
            case 0x1389A0u: goto label_1389a0;
            case 0x1389A4u: goto label_1389a4;
            case 0x1389A8u: goto label_1389a8;
            case 0x1389ACu: goto label_1389ac;
            case 0x1389B0u: goto label_1389b0;
            case 0x1389B4u: goto label_1389b4;
            case 0x1389B8u: goto label_1389b8;
            case 0x1389BCu: goto label_1389bc;
            case 0x1389C0u: goto label_1389c0;
            case 0x1389C4u: goto label_1389c4;
            case 0x1389C8u: goto label_1389c8;
            case 0x1389CCu: goto label_1389cc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x138778u; }
            if (ctx->pc != 0x138778u) { return; }
        }
    }
    ctx->pc = 0x138778u;
label_138778:
    // 0x138778: 0x8e450038
    ctx->pc = 0x138778u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_13877c:
    // 0x13877c: 0x8fb10024
    ctx->pc = 0x13877cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_138780:
    // 0x138780: 0x27b00010
    ctx->pc = 0x138780u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 16));
label_138784:
    // 0x138784: 0x8fa80004
    ctx->pc = 0x138784u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_138788:
    // 0x138788: 0x3a0202d
    ctx->pc = 0x138788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13878c:
    // 0x13878c: 0x3a0302d
    ctx->pc = 0x13878cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_138790:
    // 0x138790: 0x200382d
    ctx->pc = 0x138790u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_138794:
    // 0x138794: 0x111182a
    ctx->pc = 0x138794u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 17)));
label_138798:
    // 0x138798: 0x50a00001
label_13879c:
    if (ctx->pc == 0x13879Cu) {
        ctx->pc = 0x13879Cu;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x1387A0u;
        goto label_1387a0;
    }
    ctx->pc = 0x138798u;
    {
        const bool branch_taken_0x138798 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x138798) {
            ctx->pc = 0x13879Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1387A0u;
            goto label_1387a0;
        }
    }
    ctx->pc = 0x1387A0u;
label_1387a0:
    // 0x1387a0: 0x103880b
    ctx->pc = 0x1387a0u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 8));
label_1387a4:
    // 0x1387a4: 0x225001a
    ctx->pc = 0x1387a4u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_1387a8:
    // 0x1387a8: 0x1012
    ctx->pc = 0x1387a8u;
    SET_GPR_U32(ctx, 2, ctx->lo);
label_1387ac:
    // 0x1387ac: 0x458818
    ctx->pc = 0x1387acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)(uint32_t)result); }
label_1387b0:
    // 0x1387b0: 0xc0501f8
label_1387b4:
    if (ctx->pc == 0x1387B4u) {
        ctx->pc = 0x1387B4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1387B8u;
        goto label_1387b8;
    }
    ctx->pc = 0x1387B0u;
    SET_GPR_U32(ctx, 31, 0x1387B8u);
    ctx->pc = 0x1387B4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1407E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001407E0_0x1407e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1387B8u; }
    }
    if (ctx->pc != 0x1387B8u) { return; }
    ctx->pc = 0x1387B8u;
label_1387b8:
    // 0x1387b8: 0x8e440004
    ctx->pc = 0x1387b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1387bc:
    // 0x1387bc: 0x200302d
    ctx->pc = 0x1387bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1387c0:
    // 0x1387c0: 0x8c830000
    ctx->pc = 0x1387c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1387c4:
    // 0x1387c4: 0x8c62001c
    ctx->pc = 0x1387c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1387c8:
    // 0x1387c8: 0x40f809
label_1387cc:
    if (ctx->pc == 0x1387CCu) {
        ctx->pc = 0x1387CCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1387D0u;
        goto label_1387d0;
    }
    ctx->pc = 0x1387C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1387D0u);
        ctx->pc = 0x1387CCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x138650u: goto label_138650;
            case 0x138654u: goto label_138654;
            case 0x138658u: goto label_138658;
            case 0x13865Cu: goto label_13865c;
            case 0x138660u: goto label_138660;
            case 0x138664u: goto label_138664;
            case 0x138668u: goto label_138668;
            case 0x13866Cu: goto label_13866c;
            case 0x138670u: goto label_138670;
            case 0x138674u: goto label_138674;
            case 0x138678u: goto label_138678;
            case 0x13867Cu: goto label_13867c;
            case 0x138680u: goto label_138680;
            case 0x138684u: goto label_138684;
            case 0x138688u: goto label_138688;
            case 0x13868Cu: goto label_13868c;
            case 0x138690u: goto label_138690;
            case 0x138694u: goto label_138694;
            case 0x138698u: goto label_138698;
            case 0x13869Cu: goto label_13869c;
            case 0x1386A0u: goto label_1386a0;
            case 0x1386A4u: goto label_1386a4;
            case 0x1386A8u: goto label_1386a8;
            case 0x1386ACu: goto label_1386ac;
            case 0x1386B0u: goto label_1386b0;
            case 0x1386B4u: goto label_1386b4;
            case 0x1386B8u: goto label_1386b8;
            case 0x1386BCu: goto label_1386bc;
            case 0x1386C0u: goto label_1386c0;
            case 0x1386C4u: goto label_1386c4;
            case 0x1386C8u: goto label_1386c8;
            case 0x1386CCu: goto label_1386cc;
            case 0x1386D0u: goto label_1386d0;
            case 0x1386D4u: goto label_1386d4;
            case 0x1386D8u: goto label_1386d8;
            case 0x1386DCu: goto label_1386dc;
            case 0x1386E0u: goto label_1386e0;
            case 0x1386E4u: goto label_1386e4;
            case 0x1386E8u: goto label_1386e8;
            case 0x1386ECu: goto label_1386ec;
            case 0x1386F0u: goto label_1386f0;
            case 0x1386F4u: goto label_1386f4;
            case 0x1386F8u: goto label_1386f8;
            case 0x1386FCu: goto label_1386fc;
            case 0x138700u: goto label_138700;
            case 0x138704u: goto label_138704;
            case 0x138708u: goto label_138708;
            case 0x13870Cu: goto label_13870c;
            case 0x138710u: goto label_138710;
            case 0x138714u: goto label_138714;
            case 0x138718u: goto label_138718;
            case 0x13871Cu: goto label_13871c;
            case 0x138720u: goto label_138720;
            case 0x138724u: goto label_138724;
            case 0x138728u: goto label_138728;
            case 0x13872Cu: goto label_13872c;
            case 0x138730u: goto label_138730;
            case 0x138734u: goto label_138734;
            case 0x138738u: goto label_138738;
            case 0x13873Cu: goto label_13873c;
            case 0x138740u: goto label_138740;
            case 0x138744u: goto label_138744;
            case 0x138748u: goto label_138748;
            case 0x13874Cu: goto label_13874c;
            case 0x138750u: goto label_138750;
            case 0x138754u: goto label_138754;
            case 0x138758u: goto label_138758;
            case 0x13875Cu: goto label_13875c;
            case 0x138760u: goto label_138760;
            case 0x138764u: goto label_138764;
            case 0x138768u: goto label_138768;
            case 0x13876Cu: goto label_13876c;
            case 0x138770u: goto label_138770;
            case 0x138774u: goto label_138774;
            case 0x138778u: goto label_138778;
            case 0x13877Cu: goto label_13877c;
            case 0x138780u: goto label_138780;
            case 0x138784u: goto label_138784;
            case 0x138788u: goto label_138788;
            case 0x13878Cu: goto label_13878c;
            case 0x138790u: goto label_138790;
            case 0x138794u: goto label_138794;
            case 0x138798u: goto label_138798;
            case 0x13879Cu: goto label_13879c;
            case 0x1387A0u: goto label_1387a0;
            case 0x1387A4u: goto label_1387a4;
            case 0x1387A8u: goto label_1387a8;
            case 0x1387ACu: goto label_1387ac;
            case 0x1387B0u: goto label_1387b0;
            case 0x1387B4u: goto label_1387b4;
            case 0x1387B8u: goto label_1387b8;
            case 0x1387BCu: goto label_1387bc;
            case 0x1387C0u: goto label_1387c0;
            case 0x1387C4u: goto label_1387c4;
            case 0x1387C8u: goto label_1387c8;
            case 0x1387CCu: goto label_1387cc;
            case 0x1387D0u: goto label_1387d0;
            case 0x1387D4u: goto label_1387d4;
            case 0x1387D8u: goto label_1387d8;
            case 0x1387DCu: goto label_1387dc;
            case 0x1387E0u: goto label_1387e0;
            case 0x1387E4u: goto label_1387e4;
            case 0x1387E8u: goto label_1387e8;
            case 0x1387ECu: goto label_1387ec;
            case 0x1387F0u: goto label_1387f0;
            case 0x1387F4u: goto label_1387f4;
            case 0x1387F8u: goto label_1387f8;
            case 0x1387FCu: goto label_1387fc;
            case 0x138800u: goto label_138800;
            case 0x138804u: goto label_138804;
            case 0x138808u: goto label_138808;
            case 0x13880Cu: goto label_13880c;
            case 0x138810u: goto label_138810;
            case 0x138814u: goto label_138814;
            case 0x138818u: goto label_138818;
            case 0x13881Cu: goto label_13881c;
            case 0x138820u: goto label_138820;
            case 0x138824u: goto label_138824;
            case 0x138828u: goto label_138828;
            case 0x13882Cu: goto label_13882c;
            case 0x138830u: goto label_138830;
            case 0x138834u: goto label_138834;
            case 0x138838u: goto label_138838;
            case 0x13883Cu: goto label_13883c;
            case 0x138840u: goto label_138840;
            case 0x138844u: goto label_138844;
            case 0x138848u: goto label_138848;
            case 0x13884Cu: goto label_13884c;
            case 0x138850u: goto label_138850;
            case 0x138854u: goto label_138854;
            case 0x138858u: goto label_138858;
            case 0x13885Cu: goto label_13885c;
            case 0x138860u: goto label_138860;
            case 0x138864u: goto label_138864;
            case 0x138868u: goto label_138868;
            case 0x13886Cu: goto label_13886c;
            case 0x138870u: goto label_138870;
            case 0x138874u: goto label_138874;
            case 0x138878u: goto label_138878;
            case 0x13887Cu: goto label_13887c;
            case 0x138880u: goto label_138880;
            case 0x138884u: goto label_138884;
            case 0x138888u: goto label_138888;
            case 0x13888Cu: goto label_13888c;
            case 0x138890u: goto label_138890;
            case 0x138894u: goto label_138894;
            case 0x138898u: goto label_138898;
            case 0x13889Cu: goto label_13889c;
            case 0x1388A0u: goto label_1388a0;
            case 0x1388A4u: goto label_1388a4;
            case 0x1388A8u: goto label_1388a8;
            case 0x1388ACu: goto label_1388ac;
            case 0x1388B0u: goto label_1388b0;
            case 0x1388B4u: goto label_1388b4;
            case 0x1388B8u: goto label_1388b8;
            case 0x1388BCu: goto label_1388bc;
            case 0x1388C0u: goto label_1388c0;
            case 0x1388C4u: goto label_1388c4;
            case 0x1388C8u: goto label_1388c8;
            case 0x1388CCu: goto label_1388cc;
            case 0x1388D0u: goto label_1388d0;
            case 0x1388D4u: goto label_1388d4;
            case 0x1388D8u: goto label_1388d8;
            case 0x1388DCu: goto label_1388dc;
            case 0x1388E0u: goto label_1388e0;
            case 0x1388E4u: goto label_1388e4;
            case 0x1388E8u: goto label_1388e8;
            case 0x1388ECu: goto label_1388ec;
            case 0x1388F0u: goto label_1388f0;
            case 0x1388F4u: goto label_1388f4;
            case 0x1388F8u: goto label_1388f8;
            case 0x1388FCu: goto label_1388fc;
            case 0x138900u: goto label_138900;
            case 0x138904u: goto label_138904;
            case 0x138908u: goto label_138908;
            case 0x13890Cu: goto label_13890c;
            case 0x138910u: goto label_138910;
            case 0x138914u: goto label_138914;
            case 0x138918u: goto label_138918;
            case 0x13891Cu: goto label_13891c;
            case 0x138920u: goto label_138920;
            case 0x138924u: goto label_138924;
            case 0x138928u: goto label_138928;
            case 0x13892Cu: goto label_13892c;
            case 0x138930u: goto label_138930;
            case 0x138934u: goto label_138934;
            case 0x138938u: goto label_138938;
            case 0x13893Cu: goto label_13893c;
            case 0x138940u: goto label_138940;
            case 0x138944u: goto label_138944;
            case 0x138948u: goto label_138948;
            case 0x13894Cu: goto label_13894c;
            case 0x138950u: goto label_138950;
            case 0x138954u: goto label_138954;
            case 0x138958u: goto label_138958;
            case 0x13895Cu: goto label_13895c;
            case 0x138960u: goto label_138960;
            case 0x138964u: goto label_138964;
            case 0x138968u: goto label_138968;
            case 0x13896Cu: goto label_13896c;
            case 0x138970u: goto label_138970;
            case 0x138974u: goto label_138974;
            case 0x138978u: goto label_138978;
            case 0x13897Cu: goto label_13897c;
            case 0x138980u: goto label_138980;
            case 0x138984u: goto label_138984;
            case 0x138988u: goto label_138988;
            case 0x13898Cu: goto label_13898c;
            case 0x138990u: goto label_138990;
            case 0x138994u: goto label_138994;
            case 0x138998u: goto label_138998;
            case 0x13899Cu: goto label_13899c;
            case 0x1389A0u: goto label_1389a0;
            case 0x1389A4u: goto label_1389a4;
            case 0x1389A8u: goto label_1389a8;
            case 0x1389ACu: goto label_1389ac;
            case 0x1389B0u: goto label_1389b0;
            case 0x1389B4u: goto label_1389b4;
            case 0x1389B8u: goto label_1389b8;
            case 0x1389BCu: goto label_1389bc;
            case 0x1389C0u: goto label_1389c0;
            case 0x1389C4u: goto label_1389c4;
            case 0x1389C8u: goto label_1389c8;
            case 0x1389CCu: goto label_1389cc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1387D0u; }
            if (ctx->pc != 0x1387D0u) { return; }
        }
    }
    ctx->pc = 0x1387D0u;
label_1387d0:
    // 0x1387d0: 0x260202d
    ctx->pc = 0x1387d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1387d4:
    // 0x1387d4: 0x27b00030
    ctx->pc = 0x1387d4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 48));
label_1387d8:
    // 0x1387d8: 0x220282d
    ctx->pc = 0x1387d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1387dc:
    // 0x1387dc: 0x260302d
    ctx->pc = 0x1387dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1387e0:
    // 0x1387e0: 0xc0501f8
label_1387e4:
    if (ctx->pc == 0x1387E4u) {
        ctx->pc = 0x1387E4u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1387E8u;
        goto label_1387e8;
    }
    ctx->pc = 0x1387E0u;
    SET_GPR_U32(ctx, 31, 0x1387E8u);
    ctx->pc = 0x1387E4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1407E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001407E0_0x1407e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1387E8u; }
    }
    if (ctx->pc != 0x1387E8u) { return; }
    ctx->pc = 0x1387E8u;
label_1387e8:
    // 0x1387e8: 0x8e440008
    ctx->pc = 0x1387e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1387ec:
    // 0x1387ec: 0x200302d
    ctx->pc = 0x1387ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1387f0:
    // 0x1387f0: 0x8c830000
    ctx->pc = 0x1387f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1387f4:
    // 0x1387f4: 0x8c62001c
    ctx->pc = 0x1387f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1387f8:
    // 0x1387f8: 0x40f809
label_1387fc:
    if (ctx->pc == 0x1387FCu) {
        ctx->pc = 0x1387FCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x138800u;
        goto label_138800;
    }
    ctx->pc = 0x1387F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x138800u);
        ctx->pc = 0x1387FCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x138650u: goto label_138650;
            case 0x138654u: goto label_138654;
            case 0x138658u: goto label_138658;
            case 0x13865Cu: goto label_13865c;
            case 0x138660u: goto label_138660;
            case 0x138664u: goto label_138664;
            case 0x138668u: goto label_138668;
            case 0x13866Cu: goto label_13866c;
            case 0x138670u: goto label_138670;
            case 0x138674u: goto label_138674;
            case 0x138678u: goto label_138678;
            case 0x13867Cu: goto label_13867c;
            case 0x138680u: goto label_138680;
            case 0x138684u: goto label_138684;
            case 0x138688u: goto label_138688;
            case 0x13868Cu: goto label_13868c;
            case 0x138690u: goto label_138690;
            case 0x138694u: goto label_138694;
            case 0x138698u: goto label_138698;
            case 0x13869Cu: goto label_13869c;
            case 0x1386A0u: goto label_1386a0;
            case 0x1386A4u: goto label_1386a4;
            case 0x1386A8u: goto label_1386a8;
            case 0x1386ACu: goto label_1386ac;
            case 0x1386B0u: goto label_1386b0;
            case 0x1386B4u: goto label_1386b4;
            case 0x1386B8u: goto label_1386b8;
            case 0x1386BCu: goto label_1386bc;
            case 0x1386C0u: goto label_1386c0;
            case 0x1386C4u: goto label_1386c4;
            case 0x1386C8u: goto label_1386c8;
            case 0x1386CCu: goto label_1386cc;
            case 0x1386D0u: goto label_1386d0;
            case 0x1386D4u: goto label_1386d4;
            case 0x1386D8u: goto label_1386d8;
            case 0x1386DCu: goto label_1386dc;
            case 0x1386E0u: goto label_1386e0;
            case 0x1386E4u: goto label_1386e4;
            case 0x1386E8u: goto label_1386e8;
            case 0x1386ECu: goto label_1386ec;
            case 0x1386F0u: goto label_1386f0;
            case 0x1386F4u: goto label_1386f4;
            case 0x1386F8u: goto label_1386f8;
            case 0x1386FCu: goto label_1386fc;
            case 0x138700u: goto label_138700;
            case 0x138704u: goto label_138704;
            case 0x138708u: goto label_138708;
            case 0x13870Cu: goto label_13870c;
            case 0x138710u: goto label_138710;
            case 0x138714u: goto label_138714;
            case 0x138718u: goto label_138718;
            case 0x13871Cu: goto label_13871c;
            case 0x138720u: goto label_138720;
            case 0x138724u: goto label_138724;
            case 0x138728u: goto label_138728;
            case 0x13872Cu: goto label_13872c;
            case 0x138730u: goto label_138730;
            case 0x138734u: goto label_138734;
            case 0x138738u: goto label_138738;
            case 0x13873Cu: goto label_13873c;
            case 0x138740u: goto label_138740;
            case 0x138744u: goto label_138744;
            case 0x138748u: goto label_138748;
            case 0x13874Cu: goto label_13874c;
            case 0x138750u: goto label_138750;
            case 0x138754u: goto label_138754;
            case 0x138758u: goto label_138758;
            case 0x13875Cu: goto label_13875c;
            case 0x138760u: goto label_138760;
            case 0x138764u: goto label_138764;
            case 0x138768u: goto label_138768;
            case 0x13876Cu: goto label_13876c;
            case 0x138770u: goto label_138770;
            case 0x138774u: goto label_138774;
            case 0x138778u: goto label_138778;
            case 0x13877Cu: goto label_13877c;
            case 0x138780u: goto label_138780;
            case 0x138784u: goto label_138784;
            case 0x138788u: goto label_138788;
            case 0x13878Cu: goto label_13878c;
            case 0x138790u: goto label_138790;
            case 0x138794u: goto label_138794;
            case 0x138798u: goto label_138798;
            case 0x13879Cu: goto label_13879c;
            case 0x1387A0u: goto label_1387a0;
            case 0x1387A4u: goto label_1387a4;
            case 0x1387A8u: goto label_1387a8;
            case 0x1387ACu: goto label_1387ac;
            case 0x1387B0u: goto label_1387b0;
            case 0x1387B4u: goto label_1387b4;
            case 0x1387B8u: goto label_1387b8;
            case 0x1387BCu: goto label_1387bc;
            case 0x1387C0u: goto label_1387c0;
            case 0x1387C4u: goto label_1387c4;
            case 0x1387C8u: goto label_1387c8;
            case 0x1387CCu: goto label_1387cc;
            case 0x1387D0u: goto label_1387d0;
            case 0x1387D4u: goto label_1387d4;
            case 0x1387D8u: goto label_1387d8;
            case 0x1387DCu: goto label_1387dc;
            case 0x1387E0u: goto label_1387e0;
            case 0x1387E4u: goto label_1387e4;
            case 0x1387E8u: goto label_1387e8;
            case 0x1387ECu: goto label_1387ec;
            case 0x1387F0u: goto label_1387f0;
            case 0x1387F4u: goto label_1387f4;
            case 0x1387F8u: goto label_1387f8;
            case 0x1387FCu: goto label_1387fc;
            case 0x138800u: goto label_138800;
            case 0x138804u: goto label_138804;
            case 0x138808u: goto label_138808;
            case 0x13880Cu: goto label_13880c;
            case 0x138810u: goto label_138810;
            case 0x138814u: goto label_138814;
            case 0x138818u: goto label_138818;
            case 0x13881Cu: goto label_13881c;
            case 0x138820u: goto label_138820;
            case 0x138824u: goto label_138824;
            case 0x138828u: goto label_138828;
            case 0x13882Cu: goto label_13882c;
            case 0x138830u: goto label_138830;
            case 0x138834u: goto label_138834;
            case 0x138838u: goto label_138838;
            case 0x13883Cu: goto label_13883c;
            case 0x138840u: goto label_138840;
            case 0x138844u: goto label_138844;
            case 0x138848u: goto label_138848;
            case 0x13884Cu: goto label_13884c;
            case 0x138850u: goto label_138850;
            case 0x138854u: goto label_138854;
            case 0x138858u: goto label_138858;
            case 0x13885Cu: goto label_13885c;
            case 0x138860u: goto label_138860;
            case 0x138864u: goto label_138864;
            case 0x138868u: goto label_138868;
            case 0x13886Cu: goto label_13886c;
            case 0x138870u: goto label_138870;
            case 0x138874u: goto label_138874;
            case 0x138878u: goto label_138878;
            case 0x13887Cu: goto label_13887c;
            case 0x138880u: goto label_138880;
            case 0x138884u: goto label_138884;
            case 0x138888u: goto label_138888;
            case 0x13888Cu: goto label_13888c;
            case 0x138890u: goto label_138890;
            case 0x138894u: goto label_138894;
            case 0x138898u: goto label_138898;
            case 0x13889Cu: goto label_13889c;
            case 0x1388A0u: goto label_1388a0;
            case 0x1388A4u: goto label_1388a4;
            case 0x1388A8u: goto label_1388a8;
            case 0x1388ACu: goto label_1388ac;
            case 0x1388B0u: goto label_1388b0;
            case 0x1388B4u: goto label_1388b4;
            case 0x1388B8u: goto label_1388b8;
            case 0x1388BCu: goto label_1388bc;
            case 0x1388C0u: goto label_1388c0;
            case 0x1388C4u: goto label_1388c4;
            case 0x1388C8u: goto label_1388c8;
            case 0x1388CCu: goto label_1388cc;
            case 0x1388D0u: goto label_1388d0;
            case 0x1388D4u: goto label_1388d4;
            case 0x1388D8u: goto label_1388d8;
            case 0x1388DCu: goto label_1388dc;
            case 0x1388E0u: goto label_1388e0;
            case 0x1388E4u: goto label_1388e4;
            case 0x1388E8u: goto label_1388e8;
            case 0x1388ECu: goto label_1388ec;
            case 0x1388F0u: goto label_1388f0;
            case 0x1388F4u: goto label_1388f4;
            case 0x1388F8u: goto label_1388f8;
            case 0x1388FCu: goto label_1388fc;
            case 0x138900u: goto label_138900;
            case 0x138904u: goto label_138904;
            case 0x138908u: goto label_138908;
            case 0x13890Cu: goto label_13890c;
            case 0x138910u: goto label_138910;
            case 0x138914u: goto label_138914;
            case 0x138918u: goto label_138918;
            case 0x13891Cu: goto label_13891c;
            case 0x138920u: goto label_138920;
            case 0x138924u: goto label_138924;
            case 0x138928u: goto label_138928;
            case 0x13892Cu: goto label_13892c;
            case 0x138930u: goto label_138930;
            case 0x138934u: goto label_138934;
            case 0x138938u: goto label_138938;
            case 0x13893Cu: goto label_13893c;
            case 0x138940u: goto label_138940;
            case 0x138944u: goto label_138944;
            case 0x138948u: goto label_138948;
            case 0x13894Cu: goto label_13894c;
            case 0x138950u: goto label_138950;
            case 0x138954u: goto label_138954;
            case 0x138958u: goto label_138958;
            case 0x13895Cu: goto label_13895c;
            case 0x138960u: goto label_138960;
            case 0x138964u: goto label_138964;
            case 0x138968u: goto label_138968;
            case 0x13896Cu: goto label_13896c;
            case 0x138970u: goto label_138970;
            case 0x138974u: goto label_138974;
            case 0x138978u: goto label_138978;
            case 0x13897Cu: goto label_13897c;
            case 0x138980u: goto label_138980;
            case 0x138984u: goto label_138984;
            case 0x138988u: goto label_138988;
            case 0x13898Cu: goto label_13898c;
            case 0x138990u: goto label_138990;
            case 0x138994u: goto label_138994;
            case 0x138998u: goto label_138998;
            case 0x13899Cu: goto label_13899c;
            case 0x1389A0u: goto label_1389a0;
            case 0x1389A4u: goto label_1389a4;
            case 0x1389A8u: goto label_1389a8;
            case 0x1389ACu: goto label_1389ac;
            case 0x1389B0u: goto label_1389b0;
            case 0x1389B4u: goto label_1389b4;
            case 0x1389B8u: goto label_1389b8;
            case 0x1389BCu: goto label_1389bc;
            case 0x1389C0u: goto label_1389c0;
            case 0x1389C4u: goto label_1389c4;
            case 0x1389C8u: goto label_1389c8;
            case 0x1389CCu: goto label_1389cc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x138800u; }
            if (ctx->pc != 0x138800u) { return; }
        }
    }
    ctx->pc = 0x138800u;
label_138800:
    // 0x138800: 0x5a20006c
label_138804:
    if (ctx->pc == 0x138804u) {
        ctx->pc = 0x138804u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x138808u;
        goto label_138808;
    }
    ctx->pc = 0x138800u;
    {
        const bool branch_taken_0x138800 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x138800) {
            ctx->pc = 0x138804u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->pc = 0x1389B4u;
            goto label_1389b4;
        }
    }
    ctx->pc = 0x138808u;
label_138808:
    // 0x138808: 0x8fa30004
    ctx->pc = 0x138808u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_13880c:
    // 0x13880c: 0x3062003f
    ctx->pc = 0x13880cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 63));
label_138810:
    // 0x138810: 0x10400011
label_138814:
    if (ctx->pc == 0x138814u) {
        ctx->pc = 0x138814u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        ctx->pc = 0x138818u;
        goto label_138818;
    }
    ctx->pc = 0x138810u;
    {
        const bool branch_taken_0x138810 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x138814u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x138810) {
            ctx->pc = 0x138858u;
            goto label_138858;
        }
    }
    ctx->pc = 0x138818u;
label_138818:
    // 0x138818: 0xc045a12
label_13881c:
    if (ctx->pc == 0x13881Cu) {
        ctx->pc = 0x13881Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952976));
        ctx->pc = 0x138820u;
        goto label_138820;
    }
    ctx->pc = 0x138818u;
    SET_GPR_U32(ctx, 31, 0x138820u);
    ctx->pc = 0x13881Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952976));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138820u; }
    }
    if (ctx->pc != 0x138820u) { return; }
    ctx->pc = 0x138820u;
label_138820:
    // 0x138820: 0x3c040024
    ctx->pc = 0x138820u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_138824:
    // 0x138824: 0x8fa50000
    ctx->pc = 0x138824u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_138828:
    // 0x138828: 0x2484c838
    ctx->pc = 0x138828u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953016));
label_13882c:
    // 0x13882c: 0x8fa60020
    ctx->pc = 0x13882cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_138830:
    // 0x138830: 0xc045a12
label_138834:
    if (ctx->pc == 0x138834u) {
        ctx->pc = 0x138834u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x138838u;
        goto label_138838;
    }
    ctx->pc = 0x138830u;
    SET_GPR_U32(ctx, 31, 0x138838u);
    ctx->pc = 0x138834u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138838u; }
    }
    if (ctx->pc != 0x138838u) { return; }
    ctx->pc = 0x138838u;
label_138838:
    // 0x138838: 0x0
    ctx->pc = 0x138838u;
    // NOP
label_13883c:
    // 0x13883c: 0x0
    ctx->pc = 0x13883cu;
    // NOP
label_138840:
    // 0x138840: 0x0
    ctx->pc = 0x138840u;
    // NOP
label_138844:
    // 0x138844: 0x0
    ctx->pc = 0x138844u;
    // NOP
label_138848:
    // 0x138848: 0x0
    ctx->pc = 0x138848u;
    // NOP
label_13884c:
    // 0x13884c: 0x1000fffa
label_138850:
    if (ctx->pc == 0x138850u) {
        ctx->pc = 0x138854u;
        goto label_138854;
    }
    ctx->pc = 0x13884Cu;
    {
        const bool branch_taken_0x13884c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x13884c) {
            ctx->pc = 0x138838u;
            goto label_138838;
        }
    }
    ctx->pc = 0x138854u;
label_138854:
    // 0x138854: 0x0
    ctx->pc = 0x138854u;
    // NOP
label_138858:
    // 0x138858: 0x8fa40000
    ctx->pc = 0x138858u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_13885c:
    // 0x13885c: 0x3082003f
    ctx->pc = 0x13885cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 63));
label_138860:
    // 0x138860: 0x50400013
label_138864:
    if (ctx->pc == 0x138864u) {
        ctx->pc = 0x138864u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x138868u;
        goto label_138868;
    }
    ctx->pc = 0x138860u;
    {
        const bool branch_taken_0x138860 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x138860) {
            ctx->pc = 0x138864u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->pc = 0x1388B0u;
            goto label_1388b0;
        }
    }
    ctx->pc = 0x138868u;
label_138868:
    // 0x138868: 0x3c040024
    ctx->pc = 0x138868u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_13886c:
    // 0x13886c: 0xc045a12
label_138870:
    if (ctx->pc == 0x138870u) {
        ctx->pc = 0x138870u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953064));
        ctx->pc = 0x138874u;
        goto label_138874;
    }
    ctx->pc = 0x13886Cu;
    SET_GPR_U32(ctx, 31, 0x138874u);
    ctx->pc = 0x138870u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953064));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138874u; }
    }
    if (ctx->pc != 0x138874u) { return; }
    ctx->pc = 0x138874u;
label_138874:
    // 0x138874: 0x3c040024
    ctx->pc = 0x138874u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_138878:
    // 0x138878: 0x8fa50000
    ctx->pc = 0x138878u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_13887c:
    // 0x13887c: 0x2484c838
    ctx->pc = 0x13887cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953016));
label_138880:
    // 0x138880: 0x8fa60020
    ctx->pc = 0x138880u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_138884:
    // 0x138884: 0xc045a12
label_138888:
    if (ctx->pc == 0x138888u) {
        ctx->pc = 0x138888u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x13888Cu;
        goto label_13888c;
    }
    ctx->pc = 0x138884u;
    SET_GPR_U32(ctx, 31, 0x13888Cu);
    ctx->pc = 0x138888u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13888Cu; }
    }
    if (ctx->pc != 0x13888Cu) { return; }
    ctx->pc = 0x13888Cu;
label_13888c:
    // 0x13888c: 0x0
    ctx->pc = 0x13888cu;
    // NOP
label_138890:
    // 0x138890: 0x0
    ctx->pc = 0x138890u;
    // NOP
label_138894:
    // 0x138894: 0x0
    ctx->pc = 0x138894u;
    // NOP
label_138898:
    // 0x138898: 0x0
    ctx->pc = 0x138898u;
    // NOP
label_13889c:
    // 0x13889c: 0x0
    ctx->pc = 0x13889cu;
    // NOP
label_1388a0:
    // 0x1388a0: 0x0
    ctx->pc = 0x1388a0u;
    // NOP
label_1388a4:
    // 0x1388a4: 0x1000fffa
label_1388a8:
    if (ctx->pc == 0x1388A8u) {
        ctx->pc = 0x1388ACu;
        goto label_1388ac;
    }
    ctx->pc = 0x1388A4u;
    {
        const bool branch_taken_0x1388a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1388a4) {
            ctx->pc = 0x138890u;
            goto label_138890;
        }
    }
    ctx->pc = 0x1388ACu;
label_1388ac:
    // 0x1388ac: 0x0
    ctx->pc = 0x1388acu;
    // NOP
label_1388b0:
    // 0x1388b0: 0x3042003f
    ctx->pc = 0x1388b0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 63));
label_1388b4:
    // 0x1388b4: 0x10400012
label_1388b8:
    if (ctx->pc == 0x1388B8u) {
        ctx->pc = 0x1388B8u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->pc = 0x1388BCu;
        goto label_1388bc;
    }
    ctx->pc = 0x1388B4u;
    {
        const bool branch_taken_0x1388b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1388B8u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        if (branch_taken_0x1388b4) {
            ctx->pc = 0x138900u;
            goto label_138900;
        }
    }
    ctx->pc = 0x1388BCu;
label_1388bc:
    // 0x1388bc: 0x3c040024
    ctx->pc = 0x1388bcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_1388c0:
    // 0x1388c0: 0xc045a12
label_1388c4:
    if (ctx->pc == 0x1388C4u) {
        ctx->pc = 0x1388C4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953104));
        ctx->pc = 0x1388C8u;
        goto label_1388c8;
    }
    ctx->pc = 0x1388C0u;
    SET_GPR_U32(ctx, 31, 0x1388C8u);
    ctx->pc = 0x1388C4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953104));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1388C8u; }
    }
    if (ctx->pc != 0x1388C8u) { return; }
    ctx->pc = 0x1388C8u;
label_1388c8:
    // 0x1388c8: 0x3c040024
    ctx->pc = 0x1388c8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_1388cc:
    // 0x1388cc: 0x8fa50000
    ctx->pc = 0x1388ccu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1388d0:
    // 0x1388d0: 0x2484c838
    ctx->pc = 0x1388d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953016));
label_1388d4:
    // 0x1388d4: 0x8fa60020
    ctx->pc = 0x1388d4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1388d8:
    // 0x1388d8: 0xc045a12
label_1388dc:
    if (ctx->pc == 0x1388DCu) {
        ctx->pc = 0x1388DCu;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x1388E0u;
        goto label_1388e0;
    }
    ctx->pc = 0x1388D8u;
    SET_GPR_U32(ctx, 31, 0x1388E0u);
    ctx->pc = 0x1388DCu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1388E0u; }
    }
    if (ctx->pc != 0x1388E0u) { return; }
    ctx->pc = 0x1388E0u;
label_1388e0:
    // 0x1388e0: 0x0
    ctx->pc = 0x1388e0u;
    // NOP
label_1388e4:
    // 0x1388e4: 0x0
    ctx->pc = 0x1388e4u;
    // NOP
label_1388e8:
    // 0x1388e8: 0x0
    ctx->pc = 0x1388e8u;
    // NOP
label_1388ec:
    // 0x1388ec: 0x0
    ctx->pc = 0x1388ecu;
    // NOP
label_1388f0:
    // 0x1388f0: 0x0
    ctx->pc = 0x1388f0u;
    // NOP
label_1388f4:
    // 0x1388f4: 0x1000fffa
label_1388f8:
    if (ctx->pc == 0x1388F8u) {
        ctx->pc = 0x1388FCu;
        goto label_1388fc;
    }
    ctx->pc = 0x1388F4u;
    {
        const bool branch_taken_0x1388f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1388f4) {
            ctx->pc = 0x1388E0u;
            goto label_1388e0;
        }
    }
    ctx->pc = 0x1388FCu;
label_1388fc:
    // 0x1388fc: 0x0
    ctx->pc = 0x1388fcu;
    // NOP
label_138900:
    // 0x138900: 0xc0453c6
label_138904:
    if (ctx->pc == 0x138904u) {
        ctx->pc = 0x138904u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->pc = 0x138908u;
        goto label_138908;
    }
    ctx->pc = 0x138900u;
    SET_GPR_U32(ctx, 31, 0x138908u);
    ctx->pc = 0x138904u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->pc = 0x114F18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114F18_0x114f18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138908u; }
    }
    if (ctx->pc != 0x138908u) { return; }
    ctx->pc = 0x138908u;
label_138908:
    // 0x138908: 0x3c020fff
    ctx->pc = 0x138908u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
label_13890c:
    // 0x13890c: 0x8fa30000
    ctx->pc = 0x13890cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_138910:
    // 0x138910: 0x3442ffff
    ctx->pc = 0x138910u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_138914:
    // 0x138914: 0x8fa60004
    ctx->pc = 0x138914u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_138918:
    // 0x138918: 0x2644001c
    ctx->pc = 0x138918u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 28));
label_13891c:
    // 0x13891c: 0x8fa70020
    ctx->pc = 0x13891cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_138920:
    // 0x138920: 0x621824
    ctx->pc = 0x138920u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_138924:
    // 0x138924: 0xae43001c
    ctx->pc = 0x138924u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
label_138928:
    // 0x138928: 0x24050001
    ctx->pc = 0x138928u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_13892c:
    // 0x13892c: 0xae470020
    ctx->pc = 0x13892cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 7));
label_138930:
    // 0x138930: 0xae460024
    ctx->pc = 0x138930u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 6));
label_138934:
    // 0x138934: 0xc045278
label_138938:
    if (ctx->pc == 0x138938u) {
        ctx->pc = 0x138938u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->pc = 0x13893Cu;
        goto label_13893c;
    }
    ctx->pc = 0x138934u;
    SET_GPR_U32(ctx, 31, 0x13893Cu);
    ctx->pc = 0x138938u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
    ctx->pc = 0x1149E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001149E0_0x1149e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13893Cu; }
    }
    if (ctx->pc != 0x13893Cu) { return; }
    ctx->pc = 0x13893Cu;
label_13893c:
    // 0x13893c: 0x14400012
label_138940:
    if (ctx->pc == 0x138940u) {
        ctx->pc = 0x138940u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
        ctx->pc = 0x138944u;
        goto label_138944;
    }
    ctx->pc = 0x13893Cu;
    {
        const bool branch_taken_0x13893c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x138940u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
        if (branch_taken_0x13893c) {
            ctx->pc = 0x138988u;
            goto label_138988;
        }
    }
    ctx->pc = 0x138944u;
label_138944:
    // 0x138944: 0x3c040024
    ctx->pc = 0x138944u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_138948:
    // 0x138948: 0xc045a12
label_13894c:
    if (ctx->pc == 0x13894Cu) {
        ctx->pc = 0x13894Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953144));
        ctx->pc = 0x138950u;
        goto label_138950;
    }
    ctx->pc = 0x138948u;
    SET_GPR_U32(ctx, 31, 0x138950u);
    ctx->pc = 0x13894Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953144));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138950u; }
    }
    if (ctx->pc != 0x138950u) { return; }
    ctx->pc = 0x138950u;
label_138950:
    // 0x138950: 0x8e440004
    ctx->pc = 0x138950u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_138954:
    // 0x138954: 0x24050001
    ctx->pc = 0x138954u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_138958:
    // 0x138958: 0x8c830000
    ctx->pc = 0x138958u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13895c:
    // 0x13895c: 0x8c62001c
    ctx->pc = 0x13895cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_138960:
    // 0x138960: 0x40f809
label_138964:
    if (ctx->pc == 0x138964u) {
        ctx->pc = 0x138964u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x138968u;
        goto label_138968;
    }
    ctx->pc = 0x138960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x138968u);
        ctx->pc = 0x138964u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x138650u: goto label_138650;
            case 0x138654u: goto label_138654;
            case 0x138658u: goto label_138658;
            case 0x13865Cu: goto label_13865c;
            case 0x138660u: goto label_138660;
            case 0x138664u: goto label_138664;
            case 0x138668u: goto label_138668;
            case 0x13866Cu: goto label_13866c;
            case 0x138670u: goto label_138670;
            case 0x138674u: goto label_138674;
            case 0x138678u: goto label_138678;
            case 0x13867Cu: goto label_13867c;
            case 0x138680u: goto label_138680;
            case 0x138684u: goto label_138684;
            case 0x138688u: goto label_138688;
            case 0x13868Cu: goto label_13868c;
            case 0x138690u: goto label_138690;
            case 0x138694u: goto label_138694;
            case 0x138698u: goto label_138698;
            case 0x13869Cu: goto label_13869c;
            case 0x1386A0u: goto label_1386a0;
            case 0x1386A4u: goto label_1386a4;
            case 0x1386A8u: goto label_1386a8;
            case 0x1386ACu: goto label_1386ac;
            case 0x1386B0u: goto label_1386b0;
            case 0x1386B4u: goto label_1386b4;
            case 0x1386B8u: goto label_1386b8;
            case 0x1386BCu: goto label_1386bc;
            case 0x1386C0u: goto label_1386c0;
            case 0x1386C4u: goto label_1386c4;
            case 0x1386C8u: goto label_1386c8;
            case 0x1386CCu: goto label_1386cc;
            case 0x1386D0u: goto label_1386d0;
            case 0x1386D4u: goto label_1386d4;
            case 0x1386D8u: goto label_1386d8;
            case 0x1386DCu: goto label_1386dc;
            case 0x1386E0u: goto label_1386e0;
            case 0x1386E4u: goto label_1386e4;
            case 0x1386E8u: goto label_1386e8;
            case 0x1386ECu: goto label_1386ec;
            case 0x1386F0u: goto label_1386f0;
            case 0x1386F4u: goto label_1386f4;
            case 0x1386F8u: goto label_1386f8;
            case 0x1386FCu: goto label_1386fc;
            case 0x138700u: goto label_138700;
            case 0x138704u: goto label_138704;
            case 0x138708u: goto label_138708;
            case 0x13870Cu: goto label_13870c;
            case 0x138710u: goto label_138710;
            case 0x138714u: goto label_138714;
            case 0x138718u: goto label_138718;
            case 0x13871Cu: goto label_13871c;
            case 0x138720u: goto label_138720;
            case 0x138724u: goto label_138724;
            case 0x138728u: goto label_138728;
            case 0x13872Cu: goto label_13872c;
            case 0x138730u: goto label_138730;
            case 0x138734u: goto label_138734;
            case 0x138738u: goto label_138738;
            case 0x13873Cu: goto label_13873c;
            case 0x138740u: goto label_138740;
            case 0x138744u: goto label_138744;
            case 0x138748u: goto label_138748;
            case 0x13874Cu: goto label_13874c;
            case 0x138750u: goto label_138750;
            case 0x138754u: goto label_138754;
            case 0x138758u: goto label_138758;
            case 0x13875Cu: goto label_13875c;
            case 0x138760u: goto label_138760;
            case 0x138764u: goto label_138764;
            case 0x138768u: goto label_138768;
            case 0x13876Cu: goto label_13876c;
            case 0x138770u: goto label_138770;
            case 0x138774u: goto label_138774;
            case 0x138778u: goto label_138778;
            case 0x13877Cu: goto label_13877c;
            case 0x138780u: goto label_138780;
            case 0x138784u: goto label_138784;
            case 0x138788u: goto label_138788;
            case 0x13878Cu: goto label_13878c;
            case 0x138790u: goto label_138790;
            case 0x138794u: goto label_138794;
            case 0x138798u: goto label_138798;
            case 0x13879Cu: goto label_13879c;
            case 0x1387A0u: goto label_1387a0;
            case 0x1387A4u: goto label_1387a4;
            case 0x1387A8u: goto label_1387a8;
            case 0x1387ACu: goto label_1387ac;
            case 0x1387B0u: goto label_1387b0;
            case 0x1387B4u: goto label_1387b4;
            case 0x1387B8u: goto label_1387b8;
            case 0x1387BCu: goto label_1387bc;
            case 0x1387C0u: goto label_1387c0;
            case 0x1387C4u: goto label_1387c4;
            case 0x1387C8u: goto label_1387c8;
            case 0x1387CCu: goto label_1387cc;
            case 0x1387D0u: goto label_1387d0;
            case 0x1387D4u: goto label_1387d4;
            case 0x1387D8u: goto label_1387d8;
            case 0x1387DCu: goto label_1387dc;
            case 0x1387E0u: goto label_1387e0;
            case 0x1387E4u: goto label_1387e4;
            case 0x1387E8u: goto label_1387e8;
            case 0x1387ECu: goto label_1387ec;
            case 0x1387F0u: goto label_1387f0;
            case 0x1387F4u: goto label_1387f4;
            case 0x1387F8u: goto label_1387f8;
            case 0x1387FCu: goto label_1387fc;
            case 0x138800u: goto label_138800;
            case 0x138804u: goto label_138804;
            case 0x138808u: goto label_138808;
            case 0x13880Cu: goto label_13880c;
            case 0x138810u: goto label_138810;
            case 0x138814u: goto label_138814;
            case 0x138818u: goto label_138818;
            case 0x13881Cu: goto label_13881c;
            case 0x138820u: goto label_138820;
            case 0x138824u: goto label_138824;
            case 0x138828u: goto label_138828;
            case 0x13882Cu: goto label_13882c;
            case 0x138830u: goto label_138830;
            case 0x138834u: goto label_138834;
            case 0x138838u: goto label_138838;
            case 0x13883Cu: goto label_13883c;
            case 0x138840u: goto label_138840;
            case 0x138844u: goto label_138844;
            case 0x138848u: goto label_138848;
            case 0x13884Cu: goto label_13884c;
            case 0x138850u: goto label_138850;
            case 0x138854u: goto label_138854;
            case 0x138858u: goto label_138858;
            case 0x13885Cu: goto label_13885c;
            case 0x138860u: goto label_138860;
            case 0x138864u: goto label_138864;
            case 0x138868u: goto label_138868;
            case 0x13886Cu: goto label_13886c;
            case 0x138870u: goto label_138870;
            case 0x138874u: goto label_138874;
            case 0x138878u: goto label_138878;
            case 0x13887Cu: goto label_13887c;
            case 0x138880u: goto label_138880;
            case 0x138884u: goto label_138884;
            case 0x138888u: goto label_138888;
            case 0x13888Cu: goto label_13888c;
            case 0x138890u: goto label_138890;
            case 0x138894u: goto label_138894;
            case 0x138898u: goto label_138898;
            case 0x13889Cu: goto label_13889c;
            case 0x1388A0u: goto label_1388a0;
            case 0x1388A4u: goto label_1388a4;
            case 0x1388A8u: goto label_1388a8;
            case 0x1388ACu: goto label_1388ac;
            case 0x1388B0u: goto label_1388b0;
            case 0x1388B4u: goto label_1388b4;
            case 0x1388B8u: goto label_1388b8;
            case 0x1388BCu: goto label_1388bc;
            case 0x1388C0u: goto label_1388c0;
            case 0x1388C4u: goto label_1388c4;
            case 0x1388C8u: goto label_1388c8;
            case 0x1388CCu: goto label_1388cc;
            case 0x1388D0u: goto label_1388d0;
            case 0x1388D4u: goto label_1388d4;
            case 0x1388D8u: goto label_1388d8;
            case 0x1388DCu: goto label_1388dc;
            case 0x1388E0u: goto label_1388e0;
            case 0x1388E4u: goto label_1388e4;
            case 0x1388E8u: goto label_1388e8;
            case 0x1388ECu: goto label_1388ec;
            case 0x1388F0u: goto label_1388f0;
            case 0x1388F4u: goto label_1388f4;
            case 0x1388F8u: goto label_1388f8;
            case 0x1388FCu: goto label_1388fc;
            case 0x138900u: goto label_138900;
            case 0x138904u: goto label_138904;
            case 0x138908u: goto label_138908;
            case 0x13890Cu: goto label_13890c;
            case 0x138910u: goto label_138910;
            case 0x138914u: goto label_138914;
            case 0x138918u: goto label_138918;
            case 0x13891Cu: goto label_13891c;
            case 0x138920u: goto label_138920;
            case 0x138924u: goto label_138924;
            case 0x138928u: goto label_138928;
            case 0x13892Cu: goto label_13892c;
            case 0x138930u: goto label_138930;
            case 0x138934u: goto label_138934;
            case 0x138938u: goto label_138938;
            case 0x13893Cu: goto label_13893c;
            case 0x138940u: goto label_138940;
            case 0x138944u: goto label_138944;
            case 0x138948u: goto label_138948;
            case 0x13894Cu: goto label_13894c;
            case 0x138950u: goto label_138950;
            case 0x138954u: goto label_138954;
            case 0x138958u: goto label_138958;
            case 0x13895Cu: goto label_13895c;
            case 0x138960u: goto label_138960;
            case 0x138964u: goto label_138964;
            case 0x138968u: goto label_138968;
            case 0x13896Cu: goto label_13896c;
            case 0x138970u: goto label_138970;
            case 0x138974u: goto label_138974;
            case 0x138978u: goto label_138978;
            case 0x13897Cu: goto label_13897c;
            case 0x138980u: goto label_138980;
            case 0x138984u: goto label_138984;
            case 0x138988u: goto label_138988;
            case 0x13898Cu: goto label_13898c;
            case 0x138990u: goto label_138990;
            case 0x138994u: goto label_138994;
            case 0x138998u: goto label_138998;
            case 0x13899Cu: goto label_13899c;
            case 0x1389A0u: goto label_1389a0;
            case 0x1389A4u: goto label_1389a4;
            case 0x1389A8u: goto label_1389a8;
            case 0x1389ACu: goto label_1389ac;
            case 0x1389B0u: goto label_1389b0;
            case 0x1389B4u: goto label_1389b4;
            case 0x1389B8u: goto label_1389b8;
            case 0x1389BCu: goto label_1389bc;
            case 0x1389C0u: goto label_1389c0;
            case 0x1389C4u: goto label_1389c4;
            case 0x1389C8u: goto label_1389c8;
            case 0x1389CCu: goto label_1389cc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x138968u; }
            if (ctx->pc != 0x138968u) { return; }
        }
    }
    ctx->pc = 0x138968u;
label_138968:
    // 0x138968: 0x8e440008
    ctx->pc = 0x138968u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_13896c:
    // 0x13896c: 0x260302d
    ctx->pc = 0x13896cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_138970:
    // 0x138970: 0x8c830000
    ctx->pc = 0x138970u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_138974:
    // 0x138974: 0x8c62001c
    ctx->pc = 0x138974u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_138978:
    // 0x138978: 0x40f809
label_13897c:
    if (ctx->pc == 0x13897Cu) {
        ctx->pc = 0x13897Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x138980u;
        goto label_138980;
    }
    ctx->pc = 0x138978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x138980u);
        ctx->pc = 0x13897Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x138650u: goto label_138650;
            case 0x138654u: goto label_138654;
            case 0x138658u: goto label_138658;
            case 0x13865Cu: goto label_13865c;
            case 0x138660u: goto label_138660;
            case 0x138664u: goto label_138664;
            case 0x138668u: goto label_138668;
            case 0x13866Cu: goto label_13866c;
            case 0x138670u: goto label_138670;
            case 0x138674u: goto label_138674;
            case 0x138678u: goto label_138678;
            case 0x13867Cu: goto label_13867c;
            case 0x138680u: goto label_138680;
            case 0x138684u: goto label_138684;
            case 0x138688u: goto label_138688;
            case 0x13868Cu: goto label_13868c;
            case 0x138690u: goto label_138690;
            case 0x138694u: goto label_138694;
            case 0x138698u: goto label_138698;
            case 0x13869Cu: goto label_13869c;
            case 0x1386A0u: goto label_1386a0;
            case 0x1386A4u: goto label_1386a4;
            case 0x1386A8u: goto label_1386a8;
            case 0x1386ACu: goto label_1386ac;
            case 0x1386B0u: goto label_1386b0;
            case 0x1386B4u: goto label_1386b4;
            case 0x1386B8u: goto label_1386b8;
            case 0x1386BCu: goto label_1386bc;
            case 0x1386C0u: goto label_1386c0;
            case 0x1386C4u: goto label_1386c4;
            case 0x1386C8u: goto label_1386c8;
            case 0x1386CCu: goto label_1386cc;
            case 0x1386D0u: goto label_1386d0;
            case 0x1386D4u: goto label_1386d4;
            case 0x1386D8u: goto label_1386d8;
            case 0x1386DCu: goto label_1386dc;
            case 0x1386E0u: goto label_1386e0;
            case 0x1386E4u: goto label_1386e4;
            case 0x1386E8u: goto label_1386e8;
            case 0x1386ECu: goto label_1386ec;
            case 0x1386F0u: goto label_1386f0;
            case 0x1386F4u: goto label_1386f4;
            case 0x1386F8u: goto label_1386f8;
            case 0x1386FCu: goto label_1386fc;
            case 0x138700u: goto label_138700;
            case 0x138704u: goto label_138704;
            case 0x138708u: goto label_138708;
            case 0x13870Cu: goto label_13870c;
            case 0x138710u: goto label_138710;
            case 0x138714u: goto label_138714;
            case 0x138718u: goto label_138718;
            case 0x13871Cu: goto label_13871c;
            case 0x138720u: goto label_138720;
            case 0x138724u: goto label_138724;
            case 0x138728u: goto label_138728;
            case 0x13872Cu: goto label_13872c;
            case 0x138730u: goto label_138730;
            case 0x138734u: goto label_138734;
            case 0x138738u: goto label_138738;
            case 0x13873Cu: goto label_13873c;
            case 0x138740u: goto label_138740;
            case 0x138744u: goto label_138744;
            case 0x138748u: goto label_138748;
            case 0x13874Cu: goto label_13874c;
            case 0x138750u: goto label_138750;
            case 0x138754u: goto label_138754;
            case 0x138758u: goto label_138758;
            case 0x13875Cu: goto label_13875c;
            case 0x138760u: goto label_138760;
            case 0x138764u: goto label_138764;
            case 0x138768u: goto label_138768;
            case 0x13876Cu: goto label_13876c;
            case 0x138770u: goto label_138770;
            case 0x138774u: goto label_138774;
            case 0x138778u: goto label_138778;
            case 0x13877Cu: goto label_13877c;
            case 0x138780u: goto label_138780;
            case 0x138784u: goto label_138784;
            case 0x138788u: goto label_138788;
            case 0x13878Cu: goto label_13878c;
            case 0x138790u: goto label_138790;
            case 0x138794u: goto label_138794;
            case 0x138798u: goto label_138798;
            case 0x13879Cu: goto label_13879c;
            case 0x1387A0u: goto label_1387a0;
            case 0x1387A4u: goto label_1387a4;
            case 0x1387A8u: goto label_1387a8;
            case 0x1387ACu: goto label_1387ac;
            case 0x1387B0u: goto label_1387b0;
            case 0x1387B4u: goto label_1387b4;
            case 0x1387B8u: goto label_1387b8;
            case 0x1387BCu: goto label_1387bc;
            case 0x1387C0u: goto label_1387c0;
            case 0x1387C4u: goto label_1387c4;
            case 0x1387C8u: goto label_1387c8;
            case 0x1387CCu: goto label_1387cc;
            case 0x1387D0u: goto label_1387d0;
            case 0x1387D4u: goto label_1387d4;
            case 0x1387D8u: goto label_1387d8;
            case 0x1387DCu: goto label_1387dc;
            case 0x1387E0u: goto label_1387e0;
            case 0x1387E4u: goto label_1387e4;
            case 0x1387E8u: goto label_1387e8;
            case 0x1387ECu: goto label_1387ec;
            case 0x1387F0u: goto label_1387f0;
            case 0x1387F4u: goto label_1387f4;
            case 0x1387F8u: goto label_1387f8;
            case 0x1387FCu: goto label_1387fc;
            case 0x138800u: goto label_138800;
            case 0x138804u: goto label_138804;
            case 0x138808u: goto label_138808;
            case 0x13880Cu: goto label_13880c;
            case 0x138810u: goto label_138810;
            case 0x138814u: goto label_138814;
            case 0x138818u: goto label_138818;
            case 0x13881Cu: goto label_13881c;
            case 0x138820u: goto label_138820;
            case 0x138824u: goto label_138824;
            case 0x138828u: goto label_138828;
            case 0x13882Cu: goto label_13882c;
            case 0x138830u: goto label_138830;
            case 0x138834u: goto label_138834;
            case 0x138838u: goto label_138838;
            case 0x13883Cu: goto label_13883c;
            case 0x138840u: goto label_138840;
            case 0x138844u: goto label_138844;
            case 0x138848u: goto label_138848;
            case 0x13884Cu: goto label_13884c;
            case 0x138850u: goto label_138850;
            case 0x138854u: goto label_138854;
            case 0x138858u: goto label_138858;
            case 0x13885Cu: goto label_13885c;
            case 0x138860u: goto label_138860;
            case 0x138864u: goto label_138864;
            case 0x138868u: goto label_138868;
            case 0x13886Cu: goto label_13886c;
            case 0x138870u: goto label_138870;
            case 0x138874u: goto label_138874;
            case 0x138878u: goto label_138878;
            case 0x13887Cu: goto label_13887c;
            case 0x138880u: goto label_138880;
            case 0x138884u: goto label_138884;
            case 0x138888u: goto label_138888;
            case 0x13888Cu: goto label_13888c;
            case 0x138890u: goto label_138890;
            case 0x138894u: goto label_138894;
            case 0x138898u: goto label_138898;
            case 0x13889Cu: goto label_13889c;
            case 0x1388A0u: goto label_1388a0;
            case 0x1388A4u: goto label_1388a4;
            case 0x1388A8u: goto label_1388a8;
            case 0x1388ACu: goto label_1388ac;
            case 0x1388B0u: goto label_1388b0;
            case 0x1388B4u: goto label_1388b4;
            case 0x1388B8u: goto label_1388b8;
            case 0x1388BCu: goto label_1388bc;
            case 0x1388C0u: goto label_1388c0;
            case 0x1388C4u: goto label_1388c4;
            case 0x1388C8u: goto label_1388c8;
            case 0x1388CCu: goto label_1388cc;
            case 0x1388D0u: goto label_1388d0;
            case 0x1388D4u: goto label_1388d4;
            case 0x1388D8u: goto label_1388d8;
            case 0x1388DCu: goto label_1388dc;
            case 0x1388E0u: goto label_1388e0;
            case 0x1388E4u: goto label_1388e4;
            case 0x1388E8u: goto label_1388e8;
            case 0x1388ECu: goto label_1388ec;
            case 0x1388F0u: goto label_1388f0;
            case 0x1388F4u: goto label_1388f4;
            case 0x1388F8u: goto label_1388f8;
            case 0x1388FCu: goto label_1388fc;
            case 0x138900u: goto label_138900;
            case 0x138904u: goto label_138904;
            case 0x138908u: goto label_138908;
            case 0x13890Cu: goto label_13890c;
            case 0x138910u: goto label_138910;
            case 0x138914u: goto label_138914;
            case 0x138918u: goto label_138918;
            case 0x13891Cu: goto label_13891c;
            case 0x138920u: goto label_138920;
            case 0x138924u: goto label_138924;
            case 0x138928u: goto label_138928;
            case 0x13892Cu: goto label_13892c;
            case 0x138930u: goto label_138930;
            case 0x138934u: goto label_138934;
            case 0x138938u: goto label_138938;
            case 0x13893Cu: goto label_13893c;
            case 0x138940u: goto label_138940;
            case 0x138944u: goto label_138944;
            case 0x138948u: goto label_138948;
            case 0x13894Cu: goto label_13894c;
            case 0x138950u: goto label_138950;
            case 0x138954u: goto label_138954;
            case 0x138958u: goto label_138958;
            case 0x13895Cu: goto label_13895c;
            case 0x138960u: goto label_138960;
            case 0x138964u: goto label_138964;
            case 0x138968u: goto label_138968;
            case 0x13896Cu: goto label_13896c;
            case 0x138970u: goto label_138970;
            case 0x138974u: goto label_138974;
            case 0x138978u: goto label_138978;
            case 0x13897Cu: goto label_13897c;
            case 0x138980u: goto label_138980;
            case 0x138984u: goto label_138984;
            case 0x138988u: goto label_138988;
            case 0x13898Cu: goto label_13898c;
            case 0x138990u: goto label_138990;
            case 0x138994u: goto label_138994;
            case 0x138998u: goto label_138998;
            case 0x13899Cu: goto label_13899c;
            case 0x1389A0u: goto label_1389a0;
            case 0x1389A4u: goto label_1389a4;
            case 0x1389A8u: goto label_1389a8;
            case 0x1389ACu: goto label_1389ac;
            case 0x1389B0u: goto label_1389b0;
            case 0x1389B4u: goto label_1389b4;
            case 0x1389B8u: goto label_1389b8;
            case 0x1389BCu: goto label_1389bc;
            case 0x1389C0u: goto label_1389c0;
            case 0x1389C4u: goto label_1389c4;
            case 0x1389C8u: goto label_1389c8;
            case 0x1389CCu: goto label_1389cc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x138980u; }
            if (ctx->pc != 0x138980u) { return; }
        }
    }
    ctx->pc = 0x138980u;
label_138980:
    // 0x138980: 0x1000000c
label_138984:
    if (ctx->pc == 0x138984u) {
        ctx->pc = 0x138984u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x138988u;
        goto label_138988;
    }
    ctx->pc = 0x138980u;
    {
        const bool branch_taken_0x138980 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x138984u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x138980) {
            ctx->pc = 0x1389B4u;
            goto label_1389b4;
        }
    }
    ctx->pc = 0x138988u;
label_138988:
    // 0x138988: 0x6ba40007
    ctx->pc = 0x138988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
label_13898c:
    // 0x13898c: 0x6fa40000
    ctx->pc = 0x13898cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
label_138990:
    // 0x138990: 0xb2440013
    ctx->pc = 0x138990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 19); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_138994:
    // 0x138994: 0xb644000c
    ctx->pc = 0x138994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 12); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_138998:
    // 0x138998: 0x24020001
    ctx->pc = 0x138998u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_13899c:
    // 0x13899c: 0x6a640007
    ctx->pc = 0x13899cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
label_1389a0:
    // 0x1389a0: 0x6e640000
    ctx->pc = 0x1389a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
label_1389a4:
    // 0x1389a4: 0xb244001b
    ctx->pc = 0x1389a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 27); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1389a8:
    // 0x1389a8: 0xb6440014
    ctx->pc = 0x1389a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1389ac:
    // 0x1389ac: 0xa2420002
    ctx->pc = 0x1389acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
label_1389b0:
    // 0x1389b0: 0xdfb00040
    ctx->pc = 0x1389b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1389b4:
    // 0x1389b4: 0xdfb10048
    ctx->pc = 0x1389b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1389b8:
    // 0x1389b8: 0xdfb20050
    ctx->pc = 0x1389b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1389bc:
    // 0x1389bc: 0xdfb30058
    ctx->pc = 0x1389bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1389c0:
    // 0x1389c0: 0xdfbf0060
    ctx->pc = 0x1389c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1389c4:
    // 0x1389c4: 0x3e00008
label_1389c8:
    if (ctx->pc == 0x1389C8u) {
        ctx->pc = 0x1389C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1389CCu;
        goto label_1389cc;
    }
    ctx->pc = 0x1389C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1389C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x138650u: goto label_138650;
            case 0x138654u: goto label_138654;
            case 0x138658u: goto label_138658;
            case 0x13865Cu: goto label_13865c;
            case 0x138660u: goto label_138660;
            case 0x138664u: goto label_138664;
            case 0x138668u: goto label_138668;
            case 0x13866Cu: goto label_13866c;
            case 0x138670u: goto label_138670;
            case 0x138674u: goto label_138674;
            case 0x138678u: goto label_138678;
            case 0x13867Cu: goto label_13867c;
            case 0x138680u: goto label_138680;
            case 0x138684u: goto label_138684;
            case 0x138688u: goto label_138688;
            case 0x13868Cu: goto label_13868c;
            case 0x138690u: goto label_138690;
            case 0x138694u: goto label_138694;
            case 0x138698u: goto label_138698;
            case 0x13869Cu: goto label_13869c;
            case 0x1386A0u: goto label_1386a0;
            case 0x1386A4u: goto label_1386a4;
            case 0x1386A8u: goto label_1386a8;
            case 0x1386ACu: goto label_1386ac;
            case 0x1386B0u: goto label_1386b0;
            case 0x1386B4u: goto label_1386b4;
            case 0x1386B8u: goto label_1386b8;
            case 0x1386BCu: goto label_1386bc;
            case 0x1386C0u: goto label_1386c0;
            case 0x1386C4u: goto label_1386c4;
            case 0x1386C8u: goto label_1386c8;
            case 0x1386CCu: goto label_1386cc;
            case 0x1386D0u: goto label_1386d0;
            case 0x1386D4u: goto label_1386d4;
            case 0x1386D8u: goto label_1386d8;
            case 0x1386DCu: goto label_1386dc;
            case 0x1386E0u: goto label_1386e0;
            case 0x1386E4u: goto label_1386e4;
            case 0x1386E8u: goto label_1386e8;
            case 0x1386ECu: goto label_1386ec;
            case 0x1386F0u: goto label_1386f0;
            case 0x1386F4u: goto label_1386f4;
            case 0x1386F8u: goto label_1386f8;
            case 0x1386FCu: goto label_1386fc;
            case 0x138700u: goto label_138700;
            case 0x138704u: goto label_138704;
            case 0x138708u: goto label_138708;
            case 0x13870Cu: goto label_13870c;
            case 0x138710u: goto label_138710;
            case 0x138714u: goto label_138714;
            case 0x138718u: goto label_138718;
            case 0x13871Cu: goto label_13871c;
            case 0x138720u: goto label_138720;
            case 0x138724u: goto label_138724;
            case 0x138728u: goto label_138728;
            case 0x13872Cu: goto label_13872c;
            case 0x138730u: goto label_138730;
            case 0x138734u: goto label_138734;
            case 0x138738u: goto label_138738;
            case 0x13873Cu: goto label_13873c;
            case 0x138740u: goto label_138740;
            case 0x138744u: goto label_138744;
            case 0x138748u: goto label_138748;
            case 0x13874Cu: goto label_13874c;
            case 0x138750u: goto label_138750;
            case 0x138754u: goto label_138754;
            case 0x138758u: goto label_138758;
            case 0x13875Cu: goto label_13875c;
            case 0x138760u: goto label_138760;
            case 0x138764u: goto label_138764;
            case 0x138768u: goto label_138768;
            case 0x13876Cu: goto label_13876c;
            case 0x138770u: goto label_138770;
            case 0x138774u: goto label_138774;
            case 0x138778u: goto label_138778;
            case 0x13877Cu: goto label_13877c;
            case 0x138780u: goto label_138780;
            case 0x138784u: goto label_138784;
            case 0x138788u: goto label_138788;
            case 0x13878Cu: goto label_13878c;
            case 0x138790u: goto label_138790;
            case 0x138794u: goto label_138794;
            case 0x138798u: goto label_138798;
            case 0x13879Cu: goto label_13879c;
            case 0x1387A0u: goto label_1387a0;
            case 0x1387A4u: goto label_1387a4;
            case 0x1387A8u: goto label_1387a8;
            case 0x1387ACu: goto label_1387ac;
            case 0x1387B0u: goto label_1387b0;
            case 0x1387B4u: goto label_1387b4;
            case 0x1387B8u: goto label_1387b8;
            case 0x1387BCu: goto label_1387bc;
            case 0x1387C0u: goto label_1387c0;
            case 0x1387C4u: goto label_1387c4;
            case 0x1387C8u: goto label_1387c8;
            case 0x1387CCu: goto label_1387cc;
            case 0x1387D0u: goto label_1387d0;
            case 0x1387D4u: goto label_1387d4;
            case 0x1387D8u: goto label_1387d8;
            case 0x1387DCu: goto label_1387dc;
            case 0x1387E0u: goto label_1387e0;
            case 0x1387E4u: goto label_1387e4;
            case 0x1387E8u: goto label_1387e8;
            case 0x1387ECu: goto label_1387ec;
            case 0x1387F0u: goto label_1387f0;
            case 0x1387F4u: goto label_1387f4;
            case 0x1387F8u: goto label_1387f8;
            case 0x1387FCu: goto label_1387fc;
            case 0x138800u: goto label_138800;
            case 0x138804u: goto label_138804;
            case 0x138808u: goto label_138808;
            case 0x13880Cu: goto label_13880c;
            case 0x138810u: goto label_138810;
            case 0x138814u: goto label_138814;
            case 0x138818u: goto label_138818;
            case 0x13881Cu: goto label_13881c;
            case 0x138820u: goto label_138820;
            case 0x138824u: goto label_138824;
            case 0x138828u: goto label_138828;
            case 0x13882Cu: goto label_13882c;
            case 0x138830u: goto label_138830;
            case 0x138834u: goto label_138834;
            case 0x138838u: goto label_138838;
            case 0x13883Cu: goto label_13883c;
            case 0x138840u: goto label_138840;
            case 0x138844u: goto label_138844;
            case 0x138848u: goto label_138848;
            case 0x13884Cu: goto label_13884c;
            case 0x138850u: goto label_138850;
            case 0x138854u: goto label_138854;
            case 0x138858u: goto label_138858;
            case 0x13885Cu: goto label_13885c;
            case 0x138860u: goto label_138860;
            case 0x138864u: goto label_138864;
            case 0x138868u: goto label_138868;
            case 0x13886Cu: goto label_13886c;
            case 0x138870u: goto label_138870;
            case 0x138874u: goto label_138874;
            case 0x138878u: goto label_138878;
            case 0x13887Cu: goto label_13887c;
            case 0x138880u: goto label_138880;
            case 0x138884u: goto label_138884;
            case 0x138888u: goto label_138888;
            case 0x13888Cu: goto label_13888c;
            case 0x138890u: goto label_138890;
            case 0x138894u: goto label_138894;
            case 0x138898u: goto label_138898;
            case 0x13889Cu: goto label_13889c;
            case 0x1388A0u: goto label_1388a0;
            case 0x1388A4u: goto label_1388a4;
            case 0x1388A8u: goto label_1388a8;
            case 0x1388ACu: goto label_1388ac;
            case 0x1388B0u: goto label_1388b0;
            case 0x1388B4u: goto label_1388b4;
            case 0x1388B8u: goto label_1388b8;
            case 0x1388BCu: goto label_1388bc;
            case 0x1388C0u: goto label_1388c0;
            case 0x1388C4u: goto label_1388c4;
            case 0x1388C8u: goto label_1388c8;
            case 0x1388CCu: goto label_1388cc;
            case 0x1388D0u: goto label_1388d0;
            case 0x1388D4u: goto label_1388d4;
            case 0x1388D8u: goto label_1388d8;
            case 0x1388DCu: goto label_1388dc;
            case 0x1388E0u: goto label_1388e0;
            case 0x1388E4u: goto label_1388e4;
            case 0x1388E8u: goto label_1388e8;
            case 0x1388ECu: goto label_1388ec;
            case 0x1388F0u: goto label_1388f0;
            case 0x1388F4u: goto label_1388f4;
            case 0x1388F8u: goto label_1388f8;
            case 0x1388FCu: goto label_1388fc;
            case 0x138900u: goto label_138900;
            case 0x138904u: goto label_138904;
            case 0x138908u: goto label_138908;
            case 0x13890Cu: goto label_13890c;
            case 0x138910u: goto label_138910;
            case 0x138914u: goto label_138914;
            case 0x138918u: goto label_138918;
            case 0x13891Cu: goto label_13891c;
            case 0x138920u: goto label_138920;
            case 0x138924u: goto label_138924;
            case 0x138928u: goto label_138928;
            case 0x13892Cu: goto label_13892c;
            case 0x138930u: goto label_138930;
            case 0x138934u: goto label_138934;
            case 0x138938u: goto label_138938;
            case 0x13893Cu: goto label_13893c;
            case 0x138940u: goto label_138940;
            case 0x138944u: goto label_138944;
            case 0x138948u: goto label_138948;
            case 0x13894Cu: goto label_13894c;
            case 0x138950u: goto label_138950;
            case 0x138954u: goto label_138954;
            case 0x138958u: goto label_138958;
            case 0x13895Cu: goto label_13895c;
            case 0x138960u: goto label_138960;
            case 0x138964u: goto label_138964;
            case 0x138968u: goto label_138968;
            case 0x13896Cu: goto label_13896c;
            case 0x138970u: goto label_138970;
            case 0x138974u: goto label_138974;
            case 0x138978u: goto label_138978;
            case 0x13897Cu: goto label_13897c;
            case 0x138980u: goto label_138980;
            case 0x138984u: goto label_138984;
            case 0x138988u: goto label_138988;
            case 0x13898Cu: goto label_13898c;
            case 0x138990u: goto label_138990;
            case 0x138994u: goto label_138994;
            case 0x138998u: goto label_138998;
            case 0x13899Cu: goto label_13899c;
            case 0x1389A0u: goto label_1389a0;
            case 0x1389A4u: goto label_1389a4;
            case 0x1389A8u: goto label_1389a8;
            case 0x1389ACu: goto label_1389ac;
            case 0x1389B0u: goto label_1389b0;
            case 0x1389B4u: goto label_1389b4;
            case 0x1389B8u: goto label_1389b8;
            case 0x1389BCu: goto label_1389bc;
            case 0x1389C0u: goto label_1389c0;
            case 0x1389C4u: goto label_1389c4;
            case 0x1389C8u: goto label_1389c8;
            case 0x1389CCu: goto label_1389cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1389CCu;
label_1389cc:
    // 0x1389cc: 0x0
    ctx->pc = 0x1389ccu;
    // NOP
}
