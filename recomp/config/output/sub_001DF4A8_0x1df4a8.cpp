#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001DF4A8
// Address: 0x1df4a8 - 0x1df99c
void sub_001DF4A8_0x1df4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1df4a8u;

label_1df4a8:
    // 0x1df4a8: 0x27bdff90
    ctx->pc = 0x1df4a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
label_1df4ac:
    // 0x1df4ac: 0xffbe0060
    ctx->pc = 0x1df4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_1df4b0:
    // 0x1df4b0: 0xffbf0068
    ctx->pc = 0x1df4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_1df4b4:
    // 0x1df4b4: 0x3a0f02d
    ctx->pc = 0x1df4b4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1df4b8:
    // 0x1df4b8: 0xafc40000
    ctx->pc = 0x1df4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_1df4bc:
    // 0x1df4bc: 0xafc50004
    ctx->pc = 0x1df4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_1df4c0:
    // 0x1df4c0: 0x8fc20000
    ctx->pc = 0x1df4c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1df4c4:
    // 0x1df4c4: 0x8c430080
    ctx->pc = 0x1df4c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_1df4c8:
    // 0x1df4c8: 0x24020001
    ctx->pc = 0x1df4c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1df4cc:
    // 0x1df4cc: 0x10620004
label_1df4d0:
    if (ctx->pc == 0x1DF4D0u) {
        ctx->pc = 0x1DF4D4u;
        goto label_1df4d4;
    }
    ctx->pc = 0x1DF4CCu;
    {
        const bool branch_taken_0x1df4cc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1df4cc) {
            ctx->pc = 0x1DF4E0u;
            goto label_1df4e0;
        }
    }
    ctx->pc = 0x1DF4D4u;
label_1df4d4:
    // 0x1df4d4: 0x102d
    ctx->pc = 0x1df4d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df4d8:
    // 0x1df4d8: 0x1000012a
label_1df4dc:
    if (ctx->pc == 0x1DF4DCu) {
        ctx->pc = 0x1DF4E0u;
        goto label_1df4e0;
    }
    ctx->pc = 0x1DF4D8u;
    {
        const bool branch_taken_0x1df4d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1df4d8) {
            ctx->pc = 0x1DF984u;
            goto label_1df984;
        }
    }
    ctx->pc = 0x1DF4E0u;
label_1df4e0:
    // 0x1df4e0: 0x8fc20004
    ctx->pc = 0x1df4e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_1df4e4:
    // 0x1df4e4: 0x2442003c
    ctx->pc = 0x1df4e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 60));
label_1df4e8:
    // 0x1df4e8: 0xafc20014
    ctx->pc = 0x1df4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
label_1df4ec:
    // 0x1df4ec: 0x8fc20000
    ctx->pc = 0x1df4ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1df4f0:
    // 0x1df4f0: 0x24420484
    ctx->pc = 0x1df4f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1156));
label_1df4f4:
    // 0x1df4f4: 0x40202d
    ctx->pc = 0x1df4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1df4f8:
    // 0x1df4f8: 0xc042c56
label_1df4fc:
    if (ctx->pc == 0x1DF4FCu) {
        ctx->pc = 0x1DF500u;
        goto label_1df500;
    }
    ctx->pc = 0x1DF4F8u;
    SET_GPR_U32(ctx, 31, 0x1DF500u);
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF500u; }
    }
    if (ctx->pc != 0x1DF500u) { return; }
    ctx->pc = 0x1DF500u;
label_1df500:
    // 0x1df500: 0x40382d
    ctx->pc = 0x1df500u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1df504:
    // 0x1df504: 0x8fc20000
    ctx->pc = 0x1df504u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1df508:
    // 0x1df508: 0x24430484
    ctx->pc = 0x1df508u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1156));
label_1df50c:
    // 0x1df50c: 0x8fc20004
    ctx->pc = 0x1df50cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_1df510:
    // 0x1df510: 0x2442002c
    ctx->pc = 0x1df510u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 44));
label_1df514:
    // 0x1df514: 0x94420000
    ctx->pc = 0x1df514u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1df518:
    // 0x1df518: 0x304203ff
    ctx->pc = 0x1df518u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1023));
label_1df51c:
    // 0x1df51c: 0x3042ffff
    ctx->pc = 0x1df51cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
label_1df520:
    // 0x1df520: 0x2442fff0
    ctx->pc = 0x1df520u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967280));
label_1df524:
    // 0x1df524: 0x8fc40014
    ctx->pc = 0x1df524u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_1df528:
    // 0x1df528: 0x60282d
    ctx->pc = 0x1df528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1df52c:
    // 0x1df52c: 0x40302d
    ctx->pc = 0x1df52cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1df530:
    // 0x1df530: 0x24080140
    ctx->pc = 0x1df530u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 320));
label_1df534:
    // 0x1df534: 0xc07acda
label_1df538:
    if (ctx->pc == 0x1DF538u) {
        ctx->pc = 0x1DF53Cu;
        goto label_1df53c;
    }
    ctx->pc = 0x1DF534u;
    SET_GPR_U32(ctx, 31, 0x1DF53Cu);
    ctx->pc = 0x1EB368u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001EB368_0x1eb368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF53Cu; }
    }
    if (ctx->pc != 0x1DF53Cu) { return; }
    ctx->pc = 0x1DF53Cu;
label_1df53c:
    // 0x1df53c: 0xafc20010
    ctx->pc = 0x1df53cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
label_1df540:
    // 0x1df540: 0x8fc20000
    ctx->pc = 0x1df540u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1df544:
    // 0x1df544: 0x244204ac
    ctx->pc = 0x1df544u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1196));
label_1df548:
    // 0x1df548: 0x8fc40010
    ctx->pc = 0x1df548u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_1df54c:
    // 0x1df54c: 0x40282d
    ctx->pc = 0x1df54cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1df550:
    // 0x1df550: 0xc042b9e
label_1df554:
    if (ctx->pc == 0x1DF554u) {
        ctx->pc = 0x1DF558u;
        goto label_1df558;
    }
    ctx->pc = 0x1DF550u;
    SET_GPR_U32(ctx, 31, 0x1DF558u);
    ctx->pc = 0x10AE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AE78_0x10ae78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF558u; }
    }
    if (ctx->pc != 0x1DF558u) { return; }
    ctx->pc = 0x1DF558u;
label_1df558:
    // 0x1df558: 0x1040003c
label_1df55c:
    if (ctx->pc == 0x1DF55Cu) {
        ctx->pc = 0x1DF560u;
        goto label_1df560;
    }
    ctx->pc = 0x1DF558u;
    {
        const bool branch_taken_0x1df558 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1df558) {
            ctx->pc = 0x1DF64Cu;
            goto label_1df64c;
        }
    }
    ctx->pc = 0x1DF560u;
label_1df560:
    // 0x1df560: 0x24020027
    ctx->pc = 0x1df560u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 39));
label_1df564:
    // 0x1df564: 0xa3c20040
    ctx->pc = 0x1df564u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 64), (uint8_t)GPR_U32(ctx, 2));
label_1df568:
    // 0x1df568: 0x8fc20004
    ctx->pc = 0x1df568u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_1df56c:
    // 0x1df56c: 0x2442002c
    ctx->pc = 0x1df56cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 44));
label_1df570:
    // 0x1df570: 0x8c420004
    ctx->pc = 0x1df570u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1df574:
    // 0x1df574: 0xafc20048
    ctx->pc = 0x1df574u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 72), GPR_U32(ctx, 2));
label_1df578:
    // 0x1df578: 0x24020008
    ctx->pc = 0x1df578u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
label_1df57c:
    // 0x1df57c: 0xa7c20044
    ctx->pc = 0x1df57cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 68), (uint16_t)GPR_U32(ctx, 2));
label_1df580:
    // 0x1df580: 0x24021000
    ctx->pc = 0x1df580u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4096));
label_1df584:
    // 0x1df584: 0xa7c20046
    ctx->pc = 0x1df584u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 70), (uint16_t)GPR_U32(ctx, 2));
label_1df588:
    // 0x1df588: 0xa3c00041
    ctx->pc = 0x1df588u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 65), (uint8_t)GPR_U32(ctx, 0));
label_1df58c:
    // 0x1df58c: 0xa7c00042
    ctx->pc = 0x1df58cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 66), (uint16_t)GPR_U32(ctx, 0));
label_1df590:
    // 0x1df590: 0xafc0004c
    ctx->pc = 0x1df590u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 76), GPR_U32(ctx, 0));
label_1df594:
    // 0x1df594: 0x24020001
    ctx->pc = 0x1df594u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1df598:
    // 0x1df598: 0xafc20050
    ctx->pc = 0x1df598u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 80), GPR_U32(ctx, 2));
label_1df59c:
    // 0x1df59c: 0x24020013
    ctx->pc = 0x1df59cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 19));
label_1df5a0:
    // 0x1df5a0: 0xafc20054
    ctx->pc = 0x1df5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 84), GPR_U32(ctx, 2));
label_1df5a4:
    // 0x1df5a4: 0x8fc20000
    ctx->pc = 0x1df5a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1df5a8:
    // 0x1df5a8: 0x8c4205b8
    ctx->pc = 0x1df5a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1464)));
label_1df5ac:
    // 0x1df5ac: 0x10400008
label_1df5b0:
    if (ctx->pc == 0x1DF5B0u) {
        ctx->pc = 0x1DF5B4u;
        goto label_1df5b4;
    }
    ctx->pc = 0x1DF5ACu;
    {
        const bool branch_taken_0x1df5ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1df5ac) {
            ctx->pc = 0x1DF5D0u;
            goto label_1df5d0;
        }
    }
    ctx->pc = 0x1DF5B4u;
label_1df5b4:
    // 0x1df5b4: 0x8fc20000
    ctx->pc = 0x1df5b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1df5b8:
    // 0x1df5b8: 0x27c30040
    ctx->pc = 0x1df5b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 64));
label_1df5bc:
    // 0x1df5bc: 0x27c50050
    ctx->pc = 0x1df5bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 30), 80));
label_1df5c0:
    // 0x1df5c0: 0x8c4205b8
    ctx->pc = 0x1df5c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1464)));
label_1df5c4:
    // 0x1df5c4: 0x60202d
    ctx->pc = 0x1df5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1df5c8:
    // 0x1df5c8: 0x40f809
label_1df5cc:
    if (ctx->pc == 0x1DF5CCu) {
        ctx->pc = 0x1DF5D0u;
        goto label_1df5d0;
    }
    ctx->pc = 0x1DF5C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DF5D0u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DF4A8u: goto label_1df4a8;
            case 0x1DF4ACu: goto label_1df4ac;
            case 0x1DF4B0u: goto label_1df4b0;
            case 0x1DF4B4u: goto label_1df4b4;
            case 0x1DF4B8u: goto label_1df4b8;
            case 0x1DF4BCu: goto label_1df4bc;
            case 0x1DF4C0u: goto label_1df4c0;
            case 0x1DF4C4u: goto label_1df4c4;
            case 0x1DF4C8u: goto label_1df4c8;
            case 0x1DF4CCu: goto label_1df4cc;
            case 0x1DF4D0u: goto label_1df4d0;
            case 0x1DF4D4u: goto label_1df4d4;
            case 0x1DF4D8u: goto label_1df4d8;
            case 0x1DF4DCu: goto label_1df4dc;
            case 0x1DF4E0u: goto label_1df4e0;
            case 0x1DF4E4u: goto label_1df4e4;
            case 0x1DF4E8u: goto label_1df4e8;
            case 0x1DF4ECu: goto label_1df4ec;
            case 0x1DF4F0u: goto label_1df4f0;
            case 0x1DF4F4u: goto label_1df4f4;
            case 0x1DF4F8u: goto label_1df4f8;
            case 0x1DF4FCu: goto label_1df4fc;
            case 0x1DF500u: goto label_1df500;
            case 0x1DF504u: goto label_1df504;
            case 0x1DF508u: goto label_1df508;
            case 0x1DF50Cu: goto label_1df50c;
            case 0x1DF510u: goto label_1df510;
            case 0x1DF514u: goto label_1df514;
            case 0x1DF518u: goto label_1df518;
            case 0x1DF51Cu: goto label_1df51c;
            case 0x1DF520u: goto label_1df520;
            case 0x1DF524u: goto label_1df524;
            case 0x1DF528u: goto label_1df528;
            case 0x1DF52Cu: goto label_1df52c;
            case 0x1DF530u: goto label_1df530;
            case 0x1DF534u: goto label_1df534;
            case 0x1DF538u: goto label_1df538;
            case 0x1DF53Cu: goto label_1df53c;
            case 0x1DF540u: goto label_1df540;
            case 0x1DF544u: goto label_1df544;
            case 0x1DF548u: goto label_1df548;
            case 0x1DF54Cu: goto label_1df54c;
            case 0x1DF550u: goto label_1df550;
            case 0x1DF554u: goto label_1df554;
            case 0x1DF558u: goto label_1df558;
            case 0x1DF55Cu: goto label_1df55c;
            case 0x1DF560u: goto label_1df560;
            case 0x1DF564u: goto label_1df564;
            case 0x1DF568u: goto label_1df568;
            case 0x1DF56Cu: goto label_1df56c;
            case 0x1DF570u: goto label_1df570;
            case 0x1DF574u: goto label_1df574;
            case 0x1DF578u: goto label_1df578;
            case 0x1DF57Cu: goto label_1df57c;
            case 0x1DF580u: goto label_1df580;
            case 0x1DF584u: goto label_1df584;
            case 0x1DF588u: goto label_1df588;
            case 0x1DF58Cu: goto label_1df58c;
            case 0x1DF590u: goto label_1df590;
            case 0x1DF594u: goto label_1df594;
            case 0x1DF598u: goto label_1df598;
            case 0x1DF59Cu: goto label_1df59c;
            case 0x1DF5A0u: goto label_1df5a0;
            case 0x1DF5A4u: goto label_1df5a4;
            case 0x1DF5A8u: goto label_1df5a8;
            case 0x1DF5ACu: goto label_1df5ac;
            case 0x1DF5B0u: goto label_1df5b0;
            case 0x1DF5B4u: goto label_1df5b4;
            case 0x1DF5B8u: goto label_1df5b8;
            case 0x1DF5BCu: goto label_1df5bc;
            case 0x1DF5C0u: goto label_1df5c0;
            case 0x1DF5C4u: goto label_1df5c4;
            case 0x1DF5C8u: goto label_1df5c8;
            case 0x1DF5CCu: goto label_1df5cc;
            case 0x1DF5D0u: goto label_1df5d0;
            case 0x1DF5D4u: goto label_1df5d4;
            case 0x1DF5D8u: goto label_1df5d8;
            case 0x1DF5DCu: goto label_1df5dc;
            case 0x1DF5E0u: goto label_1df5e0;
            case 0x1DF5E4u: goto label_1df5e4;
            case 0x1DF5E8u: goto label_1df5e8;
            case 0x1DF5ECu: goto label_1df5ec;
            case 0x1DF5F0u: goto label_1df5f0;
            case 0x1DF5F4u: goto label_1df5f4;
            case 0x1DF5F8u: goto label_1df5f8;
            case 0x1DF5FCu: goto label_1df5fc;
            case 0x1DF600u: goto label_1df600;
            case 0x1DF604u: goto label_1df604;
            case 0x1DF608u: goto label_1df608;
            case 0x1DF60Cu: goto label_1df60c;
            case 0x1DF610u: goto label_1df610;
            case 0x1DF614u: goto label_1df614;
            case 0x1DF618u: goto label_1df618;
            case 0x1DF61Cu: goto label_1df61c;
            case 0x1DF620u: goto label_1df620;
            case 0x1DF624u: goto label_1df624;
            case 0x1DF628u: goto label_1df628;
            case 0x1DF62Cu: goto label_1df62c;
            case 0x1DF630u: goto label_1df630;
            case 0x1DF634u: goto label_1df634;
            case 0x1DF638u: goto label_1df638;
            case 0x1DF63Cu: goto label_1df63c;
            case 0x1DF640u: goto label_1df640;
            case 0x1DF644u: goto label_1df644;
            case 0x1DF648u: goto label_1df648;
            case 0x1DF64Cu: goto label_1df64c;
            case 0x1DF650u: goto label_1df650;
            case 0x1DF654u: goto label_1df654;
            case 0x1DF658u: goto label_1df658;
            case 0x1DF65Cu: goto label_1df65c;
            case 0x1DF660u: goto label_1df660;
            case 0x1DF664u: goto label_1df664;
            case 0x1DF668u: goto label_1df668;
            case 0x1DF66Cu: goto label_1df66c;
            case 0x1DF670u: goto label_1df670;
            case 0x1DF674u: goto label_1df674;
            case 0x1DF678u: goto label_1df678;
            case 0x1DF67Cu: goto label_1df67c;
            case 0x1DF680u: goto label_1df680;
            case 0x1DF684u: goto label_1df684;
            case 0x1DF688u: goto label_1df688;
            case 0x1DF68Cu: goto label_1df68c;
            case 0x1DF690u: goto label_1df690;
            case 0x1DF694u: goto label_1df694;
            case 0x1DF698u: goto label_1df698;
            case 0x1DF69Cu: goto label_1df69c;
            case 0x1DF6A0u: goto label_1df6a0;
            case 0x1DF6A4u: goto label_1df6a4;
            case 0x1DF6A8u: goto label_1df6a8;
            case 0x1DF6ACu: goto label_1df6ac;
            case 0x1DF6B0u: goto label_1df6b0;
            case 0x1DF6B4u: goto label_1df6b4;
            case 0x1DF6B8u: goto label_1df6b8;
            case 0x1DF6BCu: goto label_1df6bc;
            case 0x1DF6C0u: goto label_1df6c0;
            case 0x1DF6C4u: goto label_1df6c4;
            case 0x1DF6C8u: goto label_1df6c8;
            case 0x1DF6CCu: goto label_1df6cc;
            case 0x1DF6D0u: goto label_1df6d0;
            case 0x1DF6D4u: goto label_1df6d4;
            case 0x1DF6D8u: goto label_1df6d8;
            case 0x1DF6DCu: goto label_1df6dc;
            case 0x1DF6E0u: goto label_1df6e0;
            case 0x1DF6E4u: goto label_1df6e4;
            case 0x1DF6E8u: goto label_1df6e8;
            case 0x1DF6ECu: goto label_1df6ec;
            case 0x1DF6F0u: goto label_1df6f0;
            case 0x1DF6F4u: goto label_1df6f4;
            case 0x1DF6F8u: goto label_1df6f8;
            case 0x1DF6FCu: goto label_1df6fc;
            case 0x1DF700u: goto label_1df700;
            case 0x1DF704u: goto label_1df704;
            case 0x1DF708u: goto label_1df708;
            case 0x1DF70Cu: goto label_1df70c;
            case 0x1DF710u: goto label_1df710;
            case 0x1DF714u: goto label_1df714;
            case 0x1DF718u: goto label_1df718;
            case 0x1DF71Cu: goto label_1df71c;
            case 0x1DF720u: goto label_1df720;
            case 0x1DF724u: goto label_1df724;
            case 0x1DF728u: goto label_1df728;
            case 0x1DF72Cu: goto label_1df72c;
            case 0x1DF730u: goto label_1df730;
            case 0x1DF734u: goto label_1df734;
            case 0x1DF738u: goto label_1df738;
            case 0x1DF73Cu: goto label_1df73c;
            case 0x1DF740u: goto label_1df740;
            case 0x1DF744u: goto label_1df744;
            case 0x1DF748u: goto label_1df748;
            case 0x1DF74Cu: goto label_1df74c;
            case 0x1DF750u: goto label_1df750;
            case 0x1DF754u: goto label_1df754;
            case 0x1DF758u: goto label_1df758;
            case 0x1DF75Cu: goto label_1df75c;
            case 0x1DF760u: goto label_1df760;
            case 0x1DF764u: goto label_1df764;
            case 0x1DF768u: goto label_1df768;
            case 0x1DF76Cu: goto label_1df76c;
            case 0x1DF770u: goto label_1df770;
            case 0x1DF774u: goto label_1df774;
            case 0x1DF778u: goto label_1df778;
            case 0x1DF77Cu: goto label_1df77c;
            case 0x1DF780u: goto label_1df780;
            case 0x1DF784u: goto label_1df784;
            case 0x1DF788u: goto label_1df788;
            case 0x1DF78Cu: goto label_1df78c;
            case 0x1DF790u: goto label_1df790;
            case 0x1DF794u: goto label_1df794;
            case 0x1DF798u: goto label_1df798;
            case 0x1DF79Cu: goto label_1df79c;
            case 0x1DF7A0u: goto label_1df7a0;
            case 0x1DF7A4u: goto label_1df7a4;
            case 0x1DF7A8u: goto label_1df7a8;
            case 0x1DF7ACu: goto label_1df7ac;
            case 0x1DF7B0u: goto label_1df7b0;
            case 0x1DF7B4u: goto label_1df7b4;
            case 0x1DF7B8u: goto label_1df7b8;
            case 0x1DF7BCu: goto label_1df7bc;
            case 0x1DF7C0u: goto label_1df7c0;
            case 0x1DF7C4u: goto label_1df7c4;
            case 0x1DF7C8u: goto label_1df7c8;
            case 0x1DF7CCu: goto label_1df7cc;
            case 0x1DF7D0u: goto label_1df7d0;
            case 0x1DF7D4u: goto label_1df7d4;
            case 0x1DF7D8u: goto label_1df7d8;
            case 0x1DF7DCu: goto label_1df7dc;
            case 0x1DF7E0u: goto label_1df7e0;
            case 0x1DF7E4u: goto label_1df7e4;
            case 0x1DF7E8u: goto label_1df7e8;
            case 0x1DF7ECu: goto label_1df7ec;
            case 0x1DF7F0u: goto label_1df7f0;
            case 0x1DF7F4u: goto label_1df7f4;
            case 0x1DF7F8u: goto label_1df7f8;
            case 0x1DF7FCu: goto label_1df7fc;
            case 0x1DF800u: goto label_1df800;
            case 0x1DF804u: goto label_1df804;
            case 0x1DF808u: goto label_1df808;
            case 0x1DF80Cu: goto label_1df80c;
            case 0x1DF810u: goto label_1df810;
            case 0x1DF814u: goto label_1df814;
            case 0x1DF818u: goto label_1df818;
            case 0x1DF81Cu: goto label_1df81c;
            case 0x1DF820u: goto label_1df820;
            case 0x1DF824u: goto label_1df824;
            case 0x1DF828u: goto label_1df828;
            case 0x1DF82Cu: goto label_1df82c;
            case 0x1DF830u: goto label_1df830;
            case 0x1DF834u: goto label_1df834;
            case 0x1DF838u: goto label_1df838;
            case 0x1DF83Cu: goto label_1df83c;
            case 0x1DF840u: goto label_1df840;
            case 0x1DF844u: goto label_1df844;
            case 0x1DF848u: goto label_1df848;
            case 0x1DF84Cu: goto label_1df84c;
            case 0x1DF850u: goto label_1df850;
            case 0x1DF854u: goto label_1df854;
            case 0x1DF858u: goto label_1df858;
            case 0x1DF85Cu: goto label_1df85c;
            case 0x1DF860u: goto label_1df860;
            case 0x1DF864u: goto label_1df864;
            case 0x1DF868u: goto label_1df868;
            case 0x1DF86Cu: goto label_1df86c;
            case 0x1DF870u: goto label_1df870;
            case 0x1DF874u: goto label_1df874;
            case 0x1DF878u: goto label_1df878;
            case 0x1DF87Cu: goto label_1df87c;
            case 0x1DF880u: goto label_1df880;
            case 0x1DF884u: goto label_1df884;
            case 0x1DF888u: goto label_1df888;
            case 0x1DF88Cu: goto label_1df88c;
            case 0x1DF890u: goto label_1df890;
            case 0x1DF894u: goto label_1df894;
            case 0x1DF898u: goto label_1df898;
            case 0x1DF89Cu: goto label_1df89c;
            case 0x1DF8A0u: goto label_1df8a0;
            case 0x1DF8A4u: goto label_1df8a4;
            case 0x1DF8A8u: goto label_1df8a8;
            case 0x1DF8ACu: goto label_1df8ac;
            case 0x1DF8B0u: goto label_1df8b0;
            case 0x1DF8B4u: goto label_1df8b4;
            case 0x1DF8B8u: goto label_1df8b8;
            case 0x1DF8BCu: goto label_1df8bc;
            case 0x1DF8C0u: goto label_1df8c0;
            case 0x1DF8C4u: goto label_1df8c4;
            case 0x1DF8C8u: goto label_1df8c8;
            case 0x1DF8CCu: goto label_1df8cc;
            case 0x1DF8D0u: goto label_1df8d0;
            case 0x1DF8D4u: goto label_1df8d4;
            case 0x1DF8D8u: goto label_1df8d8;
            case 0x1DF8DCu: goto label_1df8dc;
            case 0x1DF8E0u: goto label_1df8e0;
            case 0x1DF8E4u: goto label_1df8e4;
            case 0x1DF8E8u: goto label_1df8e8;
            case 0x1DF8ECu: goto label_1df8ec;
            case 0x1DF8F0u: goto label_1df8f0;
            case 0x1DF8F4u: goto label_1df8f4;
            case 0x1DF8F8u: goto label_1df8f8;
            case 0x1DF8FCu: goto label_1df8fc;
            case 0x1DF900u: goto label_1df900;
            case 0x1DF904u: goto label_1df904;
            case 0x1DF908u: goto label_1df908;
            case 0x1DF90Cu: goto label_1df90c;
            case 0x1DF910u: goto label_1df910;
            case 0x1DF914u: goto label_1df914;
            case 0x1DF918u: goto label_1df918;
            case 0x1DF91Cu: goto label_1df91c;
            case 0x1DF920u: goto label_1df920;
            case 0x1DF924u: goto label_1df924;
            case 0x1DF928u: goto label_1df928;
            case 0x1DF92Cu: goto label_1df92c;
            case 0x1DF930u: goto label_1df930;
            case 0x1DF934u: goto label_1df934;
            case 0x1DF938u: goto label_1df938;
            case 0x1DF93Cu: goto label_1df93c;
            case 0x1DF940u: goto label_1df940;
            case 0x1DF944u: goto label_1df944;
            case 0x1DF948u: goto label_1df948;
            case 0x1DF94Cu: goto label_1df94c;
            case 0x1DF950u: goto label_1df950;
            case 0x1DF954u: goto label_1df954;
            case 0x1DF958u: goto label_1df958;
            case 0x1DF95Cu: goto label_1df95c;
            case 0x1DF960u: goto label_1df960;
            case 0x1DF964u: goto label_1df964;
            case 0x1DF968u: goto label_1df968;
            case 0x1DF96Cu: goto label_1df96c;
            case 0x1DF970u: goto label_1df970;
            case 0x1DF974u: goto label_1df974;
            case 0x1DF978u: goto label_1df978;
            case 0x1DF97Cu: goto label_1df97c;
            case 0x1DF980u: goto label_1df980;
            case 0x1DF984u: goto label_1df984;
            case 0x1DF988u: goto label_1df988;
            case 0x1DF98Cu: goto label_1df98c;
            case 0x1DF990u: goto label_1df990;
            case 0x1DF994u: goto label_1df994;
            case 0x1DF998u: goto label_1df998;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DF5D0u; }
            if (ctx->pc != 0x1DF5D0u) { return; }
        }
    }
    ctx->pc = 0x1DF5D0u;
label_1df5d0:
    // 0x1df5d0: 0x8fc20010
    ctx->pc = 0x1df5d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_1df5d4:
    // 0x1df5d4: 0x94420030
    ctx->pc = 0x1df5d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1df5d8:
    // 0x1df5d8: 0x3042ff00
    ctx->pc = 0x1df5d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65280));
label_1df5dc:
    // 0x1df5dc: 0x22200
    ctx->pc = 0x1df5dcu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 8));
label_1df5e0:
    // 0x1df5e0: 0x8fc20010
    ctx->pc = 0x1df5e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_1df5e4:
    // 0x1df5e4: 0x8c430030
    ctx->pc = 0x1df5e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1df5e8:
    // 0x1df5e8: 0x3c0200ff
    ctx->pc = 0x1df5e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)255 << 16));
label_1df5ec:
    // 0x1df5ec: 0x621024
    ctx->pc = 0x1df5ecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1df5f0:
    // 0x1df5f0: 0x21202
    ctx->pc = 0x1df5f0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
label_1df5f4:
    // 0x1df5f4: 0x80182d
    ctx->pc = 0x1df5f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1df5f8:
    // 0x1df5f8: 0x622025
    ctx->pc = 0x1df5f8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1df5fc:
    // 0x1df5fc: 0x8fc20010
    ctx->pc = 0x1df5fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_1df600:
    // 0x1df600: 0x8c430030
    ctx->pc = 0x1df600u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1df604:
    // 0x1df604: 0x3c02ff00
    ctx->pc = 0x1df604u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65280 << 16));
label_1df608:
    // 0x1df608: 0x621024
    ctx->pc = 0x1df608u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1df60c:
    // 0x1df60c: 0x21602
    ctx->pc = 0x1df60cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 24));
label_1df610:
    // 0x1df610: 0x80182d
    ctx->pc = 0x1df610u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1df614:
    // 0x1df614: 0x621025
    ctx->pc = 0x1df614u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1df618:
    // 0x1df618: 0x3042ffff
    ctx->pc = 0x1df618u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
label_1df61c:
    // 0x1df61c: 0x8fc40000
    ctx->pc = 0x1df61cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1df620:
    // 0x1df620: 0x282d
    ctx->pc = 0x1df620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df624:
    // 0x1df624: 0x40302d
    ctx->pc = 0x1df624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1df628:
    // 0x1df628: 0xc076bab
label_1df62c:
    if (ctx->pc == 0x1DF62Cu) {
        ctx->pc = 0x1DF630u;
        goto label_1df630;
    }
    ctx->pc = 0x1DF628u;
    SET_GPR_U32(ctx, 31, 0x1DF630u);
    ctx->pc = 0x1DAEACu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001DAEAC_0x1daeac(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF630u; }
    }
    if (ctx->pc != 0x1DF630u) { return; }
    ctx->pc = 0x1DF630u;
label_1df630:
    // 0x1df630: 0x8fc20000
    ctx->pc = 0x1df630u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1df634:
    // 0x1df634: 0xac40007c
    ctx->pc = 0x1df634u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 0));
label_1df638:
    // 0x1df638: 0x8fc20000
    ctx->pc = 0x1df638u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1df63c:
    // 0x1df63c: 0xac400080
    ctx->pc = 0x1df63cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
label_1df640:
    // 0x1df640: 0x24020001
    ctx->pc = 0x1df640u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1df644:
    // 0x1df644: 0x100000cf
label_1df648:
    if (ctx->pc == 0x1DF648u) {
        ctx->pc = 0x1DF64Cu;
        goto label_1df64c;
    }
    ctx->pc = 0x1DF644u;
    {
        const bool branch_taken_0x1df644 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1df644) {
            ctx->pc = 0x1DF984u;
            goto label_1df984;
        }
    }
    ctx->pc = 0x1DF64Cu;
label_1df64c:
    // 0x1df64c: 0x8fc20010
    ctx->pc = 0x1df64cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_1df650:
    // 0x1df650: 0x94420030
    ctx->pc = 0x1df650u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1df654:
    // 0x1df654: 0x3042ff00
    ctx->pc = 0x1df654u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65280));
label_1df658:
    // 0x1df658: 0x22200
    ctx->pc = 0x1df658u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 8));
label_1df65c:
    // 0x1df65c: 0x8fc20010
    ctx->pc = 0x1df65cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_1df660:
    // 0x1df660: 0x8c430030
    ctx->pc = 0x1df660u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1df664:
    // 0x1df664: 0x3c0200ff
    ctx->pc = 0x1df664u;
    SET_GPR_U32(ctx, 2, ((uint32_t)255 << 16));
label_1df668:
    // 0x1df668: 0x621024
    ctx->pc = 0x1df668u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1df66c:
    // 0x1df66c: 0x21202
    ctx->pc = 0x1df66cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
label_1df670:
    // 0x1df670: 0x80182d
    ctx->pc = 0x1df670u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1df674:
    // 0x1df674: 0x622025
    ctx->pc = 0x1df674u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1df678:
    // 0x1df678: 0x8fc20010
    ctx->pc = 0x1df678u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_1df67c:
    // 0x1df67c: 0x8c430030
    ctx->pc = 0x1df67cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1df680:
    // 0x1df680: 0x3c02ff00
    ctx->pc = 0x1df680u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65280 << 16));
label_1df684:
    // 0x1df684: 0x621024
    ctx->pc = 0x1df684u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1df688:
    // 0x1df688: 0x21602
    ctx->pc = 0x1df688u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 24));
label_1df68c:
    // 0x1df68c: 0x80182d
    ctx->pc = 0x1df68cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1df690:
    // 0x1df690: 0x621025
    ctx->pc = 0x1df690u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1df694:
    // 0x1df694: 0x3042ffff
    ctx->pc = 0x1df694u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
label_1df698:
    // 0x1df698: 0x8fc40000
    ctx->pc = 0x1df698u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1df69c:
    // 0x1df69c: 0x282d
    ctx->pc = 0x1df69cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df6a0:
    // 0x1df6a0: 0x40302d
    ctx->pc = 0x1df6a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1df6a4:
    // 0x1df6a4: 0xc076bab
label_1df6a8:
    if (ctx->pc == 0x1DF6A8u) {
        ctx->pc = 0x1DF6ACu;
        goto label_1df6ac;
    }
    ctx->pc = 0x1DF6A4u;
    SET_GPR_U32(ctx, 31, 0x1DF6ACu);
    ctx->pc = 0x1DAEACu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001DAEAC_0x1daeac(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF6ACu; }
    }
    if (ctx->pc != 0x1DF6ACu) { return; }
    ctx->pc = 0x1DF6ACu;
label_1df6ac:
    // 0x1df6ac: 0x8fc50010
    ctx->pc = 0x1df6acu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_1df6b0:
    // 0x1df6b0: 0x8fc20010
    ctx->pc = 0x1df6b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_1df6b4:
    // 0x1df6b4: 0x8c420028
    ctx->pc = 0x1df6b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1df6b8:
    // 0x1df6b8: 0x304200ff
    ctx->pc = 0x1df6b8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
label_1df6bc:
    // 0x1df6bc: 0x21e00
    ctx->pc = 0x1df6bcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 24));
label_1df6c0:
    // 0x1df6c0: 0x8fc20010
    ctx->pc = 0x1df6c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_1df6c4:
    // 0x1df6c4: 0x8c420028
    ctx->pc = 0x1df6c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1df6c8:
    // 0x1df6c8: 0x3042ff00
    ctx->pc = 0x1df6c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65280));
label_1df6cc:
    // 0x1df6cc: 0x21200
    ctx->pc = 0x1df6ccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
label_1df6d0:
    // 0x1df6d0: 0x622025
    ctx->pc = 0x1df6d0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1df6d4:
    // 0x1df6d4: 0x8fc20010
    ctx->pc = 0x1df6d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_1df6d8:
    // 0x1df6d8: 0x8c430028
    ctx->pc = 0x1df6d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1df6dc:
    // 0x1df6dc: 0x3c0200ff
    ctx->pc = 0x1df6dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)255 << 16));
label_1df6e0:
    // 0x1df6e0: 0x621024
    ctx->pc = 0x1df6e0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1df6e4:
    // 0x1df6e4: 0x21202
    ctx->pc = 0x1df6e4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
label_1df6e8:
    // 0x1df6e8: 0x822025
    ctx->pc = 0x1df6e8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1df6ec:
    // 0x1df6ec: 0x8fc20010
    ctx->pc = 0x1df6ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_1df6f0:
    // 0x1df6f0: 0x8c430028
    ctx->pc = 0x1df6f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1df6f4:
    // 0x1df6f4: 0x3c02ff00
    ctx->pc = 0x1df6f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65280 << 16));
label_1df6f8:
    // 0x1df6f8: 0x621024
    ctx->pc = 0x1df6f8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1df6fc:
    // 0x1df6fc: 0x21602
    ctx->pc = 0x1df6fcu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 24));
label_1df700:
    // 0x1df700: 0x821025
    ctx->pc = 0x1df700u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1df704:
    // 0x1df704: 0xaca20028
    ctx->pc = 0x1df704u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
label_1df708:
    // 0x1df708: 0x8fc50000
    ctx->pc = 0x1df708u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1df70c:
    // 0x1df70c: 0x8fc20010
    ctx->pc = 0x1df70cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_1df710:
    // 0x1df710: 0x8c420038
    ctx->pc = 0x1df710u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_1df714:
    // 0x1df714: 0x304200ff
    ctx->pc = 0x1df714u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
label_1df718:
    // 0x1df718: 0x21e00
    ctx->pc = 0x1df718u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 24));
label_1df71c:
    // 0x1df71c: 0x8fc20010
    ctx->pc = 0x1df71cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_1df720:
    // 0x1df720: 0x8c420038
    ctx->pc = 0x1df720u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_1df724:
    // 0x1df724: 0x3042ff00
    ctx->pc = 0x1df724u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65280));
label_1df728:
    // 0x1df728: 0x21200
    ctx->pc = 0x1df728u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
label_1df72c:
    // 0x1df72c: 0x622025
    ctx->pc = 0x1df72cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1df730:
    // 0x1df730: 0x8fc20010
    ctx->pc = 0x1df730u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_1df734:
    // 0x1df734: 0x8c430038
    ctx->pc = 0x1df734u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_1df738:
    // 0x1df738: 0x3c0200ff
    ctx->pc = 0x1df738u;
    SET_GPR_U32(ctx, 2, ((uint32_t)255 << 16));
label_1df73c:
    // 0x1df73c: 0x621024
    ctx->pc = 0x1df73cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1df740:
    // 0x1df740: 0x21203
    ctx->pc = 0x1df740u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_1df744:
    // 0x1df744: 0x822025
    ctx->pc = 0x1df744u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1df748:
    // 0x1df748: 0x8fc20010
    ctx->pc = 0x1df748u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_1df74c:
    // 0x1df74c: 0x8c430038
    ctx->pc = 0x1df74cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_1df750:
    // 0x1df750: 0x3c02ff00
    ctx->pc = 0x1df750u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65280 << 16));
label_1df754:
    // 0x1df754: 0x621024
    ctx->pc = 0x1df754u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1df758:
    // 0x1df758: 0x21602
    ctx->pc = 0x1df758u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 24));
label_1df75c:
    // 0x1df75c: 0x821025
    ctx->pc = 0x1df75cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1df760:
    // 0x1df760: 0xaca20508
    ctx->pc = 0x1df760u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1288), GPR_U32(ctx, 2));
label_1df764:
    // 0x1df764: 0x27c40020
    ctx->pc = 0x1df764u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 30), 32));
label_1df768:
    // 0x1df768: 0x8fc20010
    ctx->pc = 0x1df768u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_1df76c:
    // 0x1df76c: 0x8c430028
    ctx->pc = 0x1df76cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1df770:
    // 0x1df770: 0x3c02ff00
    ctx->pc = 0x1df770u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65280 << 16));
label_1df774:
    // 0x1df774: 0x621024
    ctx->pc = 0x1df774u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1df778:
    // 0x1df778: 0x23602
    ctx->pc = 0x1df778u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 2), 24));
label_1df77c:
    // 0x1df77c: 0x8fc20010
    ctx->pc = 0x1df77cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_1df780:
    // 0x1df780: 0x8c430028
    ctx->pc = 0x1df780u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1df784:
    // 0x1df784: 0x3c0200ff
    ctx->pc = 0x1df784u;
    SET_GPR_U32(ctx, 2, ((uint32_t)255 << 16));
label_1df788:
    // 0x1df788: 0x621024
    ctx->pc = 0x1df788u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1df78c:
    // 0x1df78c: 0x23c02
    ctx->pc = 0x1df78cu;
    SET_GPR_U32(ctx, 7, SRL32(GPR_U32(ctx, 2), 16));
label_1df790:
    // 0x1df790: 0x8fc20010
    ctx->pc = 0x1df790u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_1df794:
    // 0x1df794: 0x8c420028
    ctx->pc = 0x1df794u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1df798:
    // 0x1df798: 0x3042ff00
    ctx->pc = 0x1df798u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65280));
label_1df79c:
    // 0x1df79c: 0x21a02
    ctx->pc = 0x1df79cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 8));
label_1df7a0:
    // 0x1df7a0: 0x8fc20010
    ctx->pc = 0x1df7a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_1df7a4:
    // 0x1df7a4: 0x8c420028
    ctx->pc = 0x1df7a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1df7a8:
    // 0x1df7a8: 0x304200ff
    ctx->pc = 0x1df7a8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
label_1df7ac:
    // 0x1df7ac: 0x3c050025
    ctx->pc = 0x1df7acu;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
label_1df7b0:
    // 0x1df7b0: 0x24a57cf0
    ctx->pc = 0x1df7b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 31984));
label_1df7b4:
    // 0x1df7b4: 0x60402d
    ctx->pc = 0x1df7b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1df7b8:
    // 0x1df7b8: 0x40482d
    ctx->pc = 0x1df7b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1df7bc:
    // 0x1df7bc: 0xc042a0c
label_1df7c0:
    if (ctx->pc == 0x1DF7C0u) {
        ctx->pc = 0x1DF7C4u;
        goto label_1df7c4;
    }
    ctx->pc = 0x1DF7BCu;
    SET_GPR_U32(ctx, 31, 0x1DF7C4u);
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF7C4u; }
    }
    if (ctx->pc != 0x1DF7C4u) { return; }
    ctx->pc = 0x1DF7C4u;
label_1df7c4:
    // 0x1df7c4: 0x27c20020
    ctx->pc = 0x1df7c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 32));
label_1df7c8:
    // 0x1df7c8: 0x40202d
    ctx->pc = 0x1df7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1df7cc:
    // 0x1df7cc: 0xc07a1d6
label_1df7d0:
    if (ctx->pc == 0x1DF7D0u) {
        ctx->pc = 0x1DF7D4u;
        goto label_1df7d4;
    }
    ctx->pc = 0x1DF7CCu;
    SET_GPR_U32(ctx, 31, 0x1DF7D4u);
    ctx->pc = 0x1E8758u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8758_0x1e8758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF7D4u; }
    }
    if (ctx->pc != 0x1DF7D4u) { return; }
    ctx->pc = 0x1DF7D4u;
label_1df7d4:
    // 0x1df7d4: 0x8fc30000
    ctx->pc = 0x1df7d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1df7d8:
    // 0x1df7d8: 0x2103c
    ctx->pc = 0x1df7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1df7dc:
    // 0x1df7dc: 0x2103f
    ctx->pc = 0x1df7dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1df7e0:
    // 0x1df7e0: 0xac620500
    ctx->pc = 0x1df7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1280), GPR_U32(ctx, 2));
label_1df7e4:
    // 0x1df7e4: 0x8fc50000
    ctx->pc = 0x1df7e4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1df7e8:
    // 0x1df7e8: 0x8fc20010
    ctx->pc = 0x1df7e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_1df7ec:
    // 0x1df7ec: 0x8c42002c
    ctx->pc = 0x1df7ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1df7f0:
    // 0x1df7f0: 0x304200ff
    ctx->pc = 0x1df7f0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
label_1df7f4:
    // 0x1df7f4: 0x21e00
    ctx->pc = 0x1df7f4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 24));
label_1df7f8:
    // 0x1df7f8: 0x8fc20010
    ctx->pc = 0x1df7f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_1df7fc:
    // 0x1df7fc: 0x8c42002c
    ctx->pc = 0x1df7fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1df800:
    // 0x1df800: 0x3042ff00
    ctx->pc = 0x1df800u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65280));
label_1df804:
    // 0x1df804: 0x21200
    ctx->pc = 0x1df804u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
label_1df808:
    // 0x1df808: 0x622025
    ctx->pc = 0x1df808u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1df80c:
    // 0x1df80c: 0x8fc20010
    ctx->pc = 0x1df80cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_1df810:
    // 0x1df810: 0x8c43002c
    ctx->pc = 0x1df810u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1df814:
    // 0x1df814: 0x3c0200ff
    ctx->pc = 0x1df814u;
    SET_GPR_U32(ctx, 2, ((uint32_t)255 << 16));
label_1df818:
    // 0x1df818: 0x621024
    ctx->pc = 0x1df818u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1df81c:
    // 0x1df81c: 0x21202
    ctx->pc = 0x1df81cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
label_1df820:
    // 0x1df820: 0x822025
    ctx->pc = 0x1df820u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1df824:
    // 0x1df824: 0x8fc20010
    ctx->pc = 0x1df824u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_1df828:
    // 0x1df828: 0x8c43002c
    ctx->pc = 0x1df828u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1df82c:
    // 0x1df82c: 0x3c02ff00
    ctx->pc = 0x1df82cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65280 << 16));
label_1df830:
    // 0x1df830: 0x621024
    ctx->pc = 0x1df830u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1df834:
    // 0x1df834: 0x21602
    ctx->pc = 0x1df834u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 24));
label_1df838:
    // 0x1df838: 0x821025
    ctx->pc = 0x1df838u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1df83c:
    // 0x1df83c: 0xaca20504
    ctx->pc = 0x1df83cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1284), GPR_U32(ctx, 2));
label_1df840:
    // 0x1df840: 0x8fc20000
    ctx->pc = 0x1df840u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1df844:
    // 0x1df844: 0x24420084
    ctx->pc = 0x1df844u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 132));
label_1df848:
    // 0x1df848: 0xafc2000c
    ctx->pc = 0x1df848u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_1df84c:
    // 0x1df84c: 0x8fc5000c
    ctx->pc = 0x1df84cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_1df850:
    // 0x1df850: 0x8fc20010
    ctx->pc = 0x1df850u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_1df854:
    // 0x1df854: 0x8c420034
    ctx->pc = 0x1df854u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1df858:
    // 0x1df858: 0x304200ff
    ctx->pc = 0x1df858u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
label_1df85c:
    // 0x1df85c: 0x21e00
    ctx->pc = 0x1df85cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 24));
label_1df860:
    // 0x1df860: 0x8fc20010
    ctx->pc = 0x1df860u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_1df864:
    // 0x1df864: 0x8c420034
    ctx->pc = 0x1df864u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1df868:
    // 0x1df868: 0x3042ff00
    ctx->pc = 0x1df868u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65280));
label_1df86c:
    // 0x1df86c: 0x21200
    ctx->pc = 0x1df86cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
label_1df870:
    // 0x1df870: 0x622025
    ctx->pc = 0x1df870u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1df874:
    // 0x1df874: 0x8fc20010
    ctx->pc = 0x1df874u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_1df878:
    // 0x1df878: 0x8c430034
    ctx->pc = 0x1df878u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1df87c:
    // 0x1df87c: 0x3c0200ff
    ctx->pc = 0x1df87cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)255 << 16));
label_1df880:
    // 0x1df880: 0x621024
    ctx->pc = 0x1df880u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1df884:
    // 0x1df884: 0x21202
    ctx->pc = 0x1df884u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
label_1df888:
    // 0x1df888: 0x822025
    ctx->pc = 0x1df888u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1df88c:
    // 0x1df88c: 0x8fc20010
    ctx->pc = 0x1df88cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_1df890:
    // 0x1df890: 0x8c430034
    ctx->pc = 0x1df890u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1df894:
    // 0x1df894: 0x3c02ff00
    ctx->pc = 0x1df894u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65280 << 16));
label_1df898:
    // 0x1df898: 0x621024
    ctx->pc = 0x1df898u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1df89c:
    // 0x1df89c: 0x21602
    ctx->pc = 0x1df89cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 24));
label_1df8a0:
    // 0x1df8a0: 0x821025
    ctx->pc = 0x1df8a0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1df8a4:
    // 0x1df8a4: 0xaca20024
    ctx->pc = 0x1df8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
label_1df8a8:
    // 0x1df8a8: 0x8fc2000c
    ctx->pc = 0x1df8a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_1df8ac:
    // 0x1df8ac: 0x24440028
    ctx->pc = 0x1df8acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 40));
label_1df8b0:
    // 0x1df8b0: 0x8fc20010
    ctx->pc = 0x1df8b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_1df8b4:
    // 0x1df8b4: 0x2442003c
    ctx->pc = 0x1df8b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 60));
label_1df8b8:
    // 0x1df8b8: 0x8fc3000c
    ctx->pc = 0x1df8b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_1df8bc:
    // 0x1df8bc: 0x40282d
    ctx->pc = 0x1df8bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1df8c0:
    // 0x1df8c0: 0x8c660024
    ctx->pc = 0x1df8c0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1df8c4:
    // 0x1df8c4: 0xc041eac
label_1df8c8:
    if (ctx->pc == 0x1DF8C8u) {
        ctx->pc = 0x1DF8CCu;
        goto label_1df8cc;
    }
    ctx->pc = 0x1DF8C4u;
    SET_GPR_U32(ctx, 31, 0x1DF8CCu);
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF8CCu; }
    }
    if (ctx->pc != 0x1DF8CCu) { return; }
    ctx->pc = 0x1DF8CCu;
label_1df8cc:
    // 0x1df8cc: 0x8fc5000c
    ctx->pc = 0x1df8ccu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_1df8d0:
    // 0x1df8d0: 0x8fc2000c
    ctx->pc = 0x1df8d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_1df8d4:
    // 0x1df8d4: 0x8c420024
    ctx->pc = 0x1df8d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1df8d8:
    // 0x1df8d8: 0x304200ff
    ctx->pc = 0x1df8d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
label_1df8dc:
    // 0x1df8dc: 0x21e00
    ctx->pc = 0x1df8dcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 24));
label_1df8e0:
    // 0x1df8e0: 0x8fc2000c
    ctx->pc = 0x1df8e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_1df8e4:
    // 0x1df8e4: 0x8c420024
    ctx->pc = 0x1df8e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1df8e8:
    // 0x1df8e8: 0x3042ff00
    ctx->pc = 0x1df8e8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65280));
label_1df8ec:
    // 0x1df8ec: 0x21200
    ctx->pc = 0x1df8ecu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
label_1df8f0:
    // 0x1df8f0: 0x622025
    ctx->pc = 0x1df8f0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1df8f4:
    // 0x1df8f4: 0x8fc2000c
    ctx->pc = 0x1df8f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_1df8f8:
    // 0x1df8f8: 0x8c430024
    ctx->pc = 0x1df8f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1df8fc:
    // 0x1df8fc: 0x3c0200ff
    ctx->pc = 0x1df8fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)255 << 16));
label_1df900:
    // 0x1df900: 0x621024
    ctx->pc = 0x1df900u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1df904:
    // 0x1df904: 0x21202
    ctx->pc = 0x1df904u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
label_1df908:
    // 0x1df908: 0x822025
    ctx->pc = 0x1df908u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1df90c:
    // 0x1df90c: 0x8fc2000c
    ctx->pc = 0x1df90cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_1df910:
    // 0x1df910: 0x8c430024
    ctx->pc = 0x1df910u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1df914:
    // 0x1df914: 0x3c02ff00
    ctx->pc = 0x1df914u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65280 << 16));
label_1df918:
    // 0x1df918: 0x621024
    ctx->pc = 0x1df918u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1df91c:
    // 0x1df91c: 0x21602
    ctx->pc = 0x1df91cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 24));
label_1df920:
    // 0x1df920: 0x821025
    ctx->pc = 0x1df920u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1df924:
    // 0x1df924: 0xaca20024
    ctx->pc = 0x1df924u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
label_1df928:
    // 0x1df928: 0x8fc20000
    ctx->pc = 0x1df928u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1df92c:
    // 0x1df92c: 0x8c430080
    ctx->pc = 0x1df92cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_1df930:
    // 0x1df930: 0x24020003
    ctx->pc = 0x1df930u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_1df934:
    // 0x1df934: 0x10620008
label_1df938:
    if (ctx->pc == 0x1DF938u) {
        ctx->pc = 0x1DF93Cu;
        goto label_1df93c;
    }
    ctx->pc = 0x1DF934u;
    {
        const bool branch_taken_0x1df934 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1df934) {
            ctx->pc = 0x1DF958u;
            goto label_1df958;
        }
    }
    ctx->pc = 0x1DF93Cu;
label_1df93c:
    // 0x1df93c: 0x8fc30000
    ctx->pc = 0x1df93cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1df940:
    // 0x1df940: 0x24020002
    ctx->pc = 0x1df940u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_1df944:
    // 0x1df944: 0xac620080
    ctx->pc = 0x1df944u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_1df948:
    // 0x1df948: 0x8fc30000
    ctx->pc = 0x1df948u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1df94c:
    // 0x1df94c: 0x8fc20000
    ctx->pc = 0x1df94cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1df950:
    // 0x1df950: 0x8c4204fc
    ctx->pc = 0x1df950u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1276)));
label_1df954:
    // 0x1df954: 0xac62007c
    ctx->pc = 0x1df954u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 2));
label_1df958:
    // 0x1df958: 0x8fc30000
    ctx->pc = 0x1df958u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1df95c:
    // 0x1df95c: 0x8fc20000
    ctx->pc = 0x1df95cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1df960:
    // 0x1df960: 0x8c420514
    ctx->pc = 0x1df960u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1300)));
label_1df964:
    // 0x1df964: 0xac620510
    ctx->pc = 0x1df964u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1296), GPR_U32(ctx, 2));
label_1df968:
    // 0x1df968: 0x8fc30000
    ctx->pc = 0x1df968u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1df96c:
    // 0x1df96c: 0x8fc20000
    ctx->pc = 0x1df96cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1df970:
    // 0x1df970: 0x8c420510
    ctx->pc = 0x1df970u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1296)));
label_1df974:
    // 0x1df974: 0x21140
    ctx->pc = 0x1df974u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
label_1df978:
    // 0x1df978: 0x24420fa0
    ctx->pc = 0x1df978u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4000));
label_1df97c:
    // 0x1df97c: 0xac62051c
    ctx->pc = 0x1df97cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1308), GPR_U32(ctx, 2));
label_1df980:
    // 0x1df980: 0x102d
    ctx->pc = 0x1df980u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df984:
    // 0x1df984: 0x3c0e82d
    ctx->pc = 0x1df984u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1df988:
    // 0x1df988: 0xdfbe0060
    ctx->pc = 0x1df988u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1df98c:
    // 0x1df98c: 0xdfbf0068
    ctx->pc = 0x1df98cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_1df990:
    // 0x1df990: 0x27bd0070
    ctx->pc = 0x1df990u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
label_1df994:
    // 0x1df994: 0x3e00008
label_1df998:
    if (ctx->pc == 0x1DF998u) {
        ctx->pc = 0x1DF99Cu;
        goto label_fallthrough_0x1df994;
    }
    ctx->pc = 0x1DF994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DF4A8u: goto label_1df4a8;
            case 0x1DF4ACu: goto label_1df4ac;
            case 0x1DF4B0u: goto label_1df4b0;
            case 0x1DF4B4u: goto label_1df4b4;
            case 0x1DF4B8u: goto label_1df4b8;
            case 0x1DF4BCu: goto label_1df4bc;
            case 0x1DF4C0u: goto label_1df4c0;
            case 0x1DF4C4u: goto label_1df4c4;
            case 0x1DF4C8u: goto label_1df4c8;
            case 0x1DF4CCu: goto label_1df4cc;
            case 0x1DF4D0u: goto label_1df4d0;
            case 0x1DF4D4u: goto label_1df4d4;
            case 0x1DF4D8u: goto label_1df4d8;
            case 0x1DF4DCu: goto label_1df4dc;
            case 0x1DF4E0u: goto label_1df4e0;
            case 0x1DF4E4u: goto label_1df4e4;
            case 0x1DF4E8u: goto label_1df4e8;
            case 0x1DF4ECu: goto label_1df4ec;
            case 0x1DF4F0u: goto label_1df4f0;
            case 0x1DF4F4u: goto label_1df4f4;
            case 0x1DF4F8u: goto label_1df4f8;
            case 0x1DF4FCu: goto label_1df4fc;
            case 0x1DF500u: goto label_1df500;
            case 0x1DF504u: goto label_1df504;
            case 0x1DF508u: goto label_1df508;
            case 0x1DF50Cu: goto label_1df50c;
            case 0x1DF510u: goto label_1df510;
            case 0x1DF514u: goto label_1df514;
            case 0x1DF518u: goto label_1df518;
            case 0x1DF51Cu: goto label_1df51c;
            case 0x1DF520u: goto label_1df520;
            case 0x1DF524u: goto label_1df524;
            case 0x1DF528u: goto label_1df528;
            case 0x1DF52Cu: goto label_1df52c;
            case 0x1DF530u: goto label_1df530;
            case 0x1DF534u: goto label_1df534;
            case 0x1DF538u: goto label_1df538;
            case 0x1DF53Cu: goto label_1df53c;
            case 0x1DF540u: goto label_1df540;
            case 0x1DF544u: goto label_1df544;
            case 0x1DF548u: goto label_1df548;
            case 0x1DF54Cu: goto label_1df54c;
            case 0x1DF550u: goto label_1df550;
            case 0x1DF554u: goto label_1df554;
            case 0x1DF558u: goto label_1df558;
            case 0x1DF55Cu: goto label_1df55c;
            case 0x1DF560u: goto label_1df560;
            case 0x1DF564u: goto label_1df564;
            case 0x1DF568u: goto label_1df568;
            case 0x1DF56Cu: goto label_1df56c;
            case 0x1DF570u: goto label_1df570;
            case 0x1DF574u: goto label_1df574;
            case 0x1DF578u: goto label_1df578;
            case 0x1DF57Cu: goto label_1df57c;
            case 0x1DF580u: goto label_1df580;
            case 0x1DF584u: goto label_1df584;
            case 0x1DF588u: goto label_1df588;
            case 0x1DF58Cu: goto label_1df58c;
            case 0x1DF590u: goto label_1df590;
            case 0x1DF594u: goto label_1df594;
            case 0x1DF598u: goto label_1df598;
            case 0x1DF59Cu: goto label_1df59c;
            case 0x1DF5A0u: goto label_1df5a0;
            case 0x1DF5A4u: goto label_1df5a4;
            case 0x1DF5A8u: goto label_1df5a8;
            case 0x1DF5ACu: goto label_1df5ac;
            case 0x1DF5B0u: goto label_1df5b0;
            case 0x1DF5B4u: goto label_1df5b4;
            case 0x1DF5B8u: goto label_1df5b8;
            case 0x1DF5BCu: goto label_1df5bc;
            case 0x1DF5C0u: goto label_1df5c0;
            case 0x1DF5C4u: goto label_1df5c4;
            case 0x1DF5C8u: goto label_1df5c8;
            case 0x1DF5CCu: goto label_1df5cc;
            case 0x1DF5D0u: goto label_1df5d0;
            case 0x1DF5D4u: goto label_1df5d4;
            case 0x1DF5D8u: goto label_1df5d8;
            case 0x1DF5DCu: goto label_1df5dc;
            case 0x1DF5E0u: goto label_1df5e0;
            case 0x1DF5E4u: goto label_1df5e4;
            case 0x1DF5E8u: goto label_1df5e8;
            case 0x1DF5ECu: goto label_1df5ec;
            case 0x1DF5F0u: goto label_1df5f0;
            case 0x1DF5F4u: goto label_1df5f4;
            case 0x1DF5F8u: goto label_1df5f8;
            case 0x1DF5FCu: goto label_1df5fc;
            case 0x1DF600u: goto label_1df600;
            case 0x1DF604u: goto label_1df604;
            case 0x1DF608u: goto label_1df608;
            case 0x1DF60Cu: goto label_1df60c;
            case 0x1DF610u: goto label_1df610;
            case 0x1DF614u: goto label_1df614;
            case 0x1DF618u: goto label_1df618;
            case 0x1DF61Cu: goto label_1df61c;
            case 0x1DF620u: goto label_1df620;
            case 0x1DF624u: goto label_1df624;
            case 0x1DF628u: goto label_1df628;
            case 0x1DF62Cu: goto label_1df62c;
            case 0x1DF630u: goto label_1df630;
            case 0x1DF634u: goto label_1df634;
            case 0x1DF638u: goto label_1df638;
            case 0x1DF63Cu: goto label_1df63c;
            case 0x1DF640u: goto label_1df640;
            case 0x1DF644u: goto label_1df644;
            case 0x1DF648u: goto label_1df648;
            case 0x1DF64Cu: goto label_1df64c;
            case 0x1DF650u: goto label_1df650;
            case 0x1DF654u: goto label_1df654;
            case 0x1DF658u: goto label_1df658;
            case 0x1DF65Cu: goto label_1df65c;
            case 0x1DF660u: goto label_1df660;
            case 0x1DF664u: goto label_1df664;
            case 0x1DF668u: goto label_1df668;
            case 0x1DF66Cu: goto label_1df66c;
            case 0x1DF670u: goto label_1df670;
            case 0x1DF674u: goto label_1df674;
            case 0x1DF678u: goto label_1df678;
            case 0x1DF67Cu: goto label_1df67c;
            case 0x1DF680u: goto label_1df680;
            case 0x1DF684u: goto label_1df684;
            case 0x1DF688u: goto label_1df688;
            case 0x1DF68Cu: goto label_1df68c;
            case 0x1DF690u: goto label_1df690;
            case 0x1DF694u: goto label_1df694;
            case 0x1DF698u: goto label_1df698;
            case 0x1DF69Cu: goto label_1df69c;
            case 0x1DF6A0u: goto label_1df6a0;
            case 0x1DF6A4u: goto label_1df6a4;
            case 0x1DF6A8u: goto label_1df6a8;
            case 0x1DF6ACu: goto label_1df6ac;
            case 0x1DF6B0u: goto label_1df6b0;
            case 0x1DF6B4u: goto label_1df6b4;
            case 0x1DF6B8u: goto label_1df6b8;
            case 0x1DF6BCu: goto label_1df6bc;
            case 0x1DF6C0u: goto label_1df6c0;
            case 0x1DF6C4u: goto label_1df6c4;
            case 0x1DF6C8u: goto label_1df6c8;
            case 0x1DF6CCu: goto label_1df6cc;
            case 0x1DF6D0u: goto label_1df6d0;
            case 0x1DF6D4u: goto label_1df6d4;
            case 0x1DF6D8u: goto label_1df6d8;
            case 0x1DF6DCu: goto label_1df6dc;
            case 0x1DF6E0u: goto label_1df6e0;
            case 0x1DF6E4u: goto label_1df6e4;
            case 0x1DF6E8u: goto label_1df6e8;
            case 0x1DF6ECu: goto label_1df6ec;
            case 0x1DF6F0u: goto label_1df6f0;
            case 0x1DF6F4u: goto label_1df6f4;
            case 0x1DF6F8u: goto label_1df6f8;
            case 0x1DF6FCu: goto label_1df6fc;
            case 0x1DF700u: goto label_1df700;
            case 0x1DF704u: goto label_1df704;
            case 0x1DF708u: goto label_1df708;
            case 0x1DF70Cu: goto label_1df70c;
            case 0x1DF710u: goto label_1df710;
            case 0x1DF714u: goto label_1df714;
            case 0x1DF718u: goto label_1df718;
            case 0x1DF71Cu: goto label_1df71c;
            case 0x1DF720u: goto label_1df720;
            case 0x1DF724u: goto label_1df724;
            case 0x1DF728u: goto label_1df728;
            case 0x1DF72Cu: goto label_1df72c;
            case 0x1DF730u: goto label_1df730;
            case 0x1DF734u: goto label_1df734;
            case 0x1DF738u: goto label_1df738;
            case 0x1DF73Cu: goto label_1df73c;
            case 0x1DF740u: goto label_1df740;
            case 0x1DF744u: goto label_1df744;
            case 0x1DF748u: goto label_1df748;
            case 0x1DF74Cu: goto label_1df74c;
            case 0x1DF750u: goto label_1df750;
            case 0x1DF754u: goto label_1df754;
            case 0x1DF758u: goto label_1df758;
            case 0x1DF75Cu: goto label_1df75c;
            case 0x1DF760u: goto label_1df760;
            case 0x1DF764u: goto label_1df764;
            case 0x1DF768u: goto label_1df768;
            case 0x1DF76Cu: goto label_1df76c;
            case 0x1DF770u: goto label_1df770;
            case 0x1DF774u: goto label_1df774;
            case 0x1DF778u: goto label_1df778;
            case 0x1DF77Cu: goto label_1df77c;
            case 0x1DF780u: goto label_1df780;
            case 0x1DF784u: goto label_1df784;
            case 0x1DF788u: goto label_1df788;
            case 0x1DF78Cu: goto label_1df78c;
            case 0x1DF790u: goto label_1df790;
            case 0x1DF794u: goto label_1df794;
            case 0x1DF798u: goto label_1df798;
            case 0x1DF79Cu: goto label_1df79c;
            case 0x1DF7A0u: goto label_1df7a0;
            case 0x1DF7A4u: goto label_1df7a4;
            case 0x1DF7A8u: goto label_1df7a8;
            case 0x1DF7ACu: goto label_1df7ac;
            case 0x1DF7B0u: goto label_1df7b0;
            case 0x1DF7B4u: goto label_1df7b4;
            case 0x1DF7B8u: goto label_1df7b8;
            case 0x1DF7BCu: goto label_1df7bc;
            case 0x1DF7C0u: goto label_1df7c0;
            case 0x1DF7C4u: goto label_1df7c4;
            case 0x1DF7C8u: goto label_1df7c8;
            case 0x1DF7CCu: goto label_1df7cc;
            case 0x1DF7D0u: goto label_1df7d0;
            case 0x1DF7D4u: goto label_1df7d4;
            case 0x1DF7D8u: goto label_1df7d8;
            case 0x1DF7DCu: goto label_1df7dc;
            case 0x1DF7E0u: goto label_1df7e0;
            case 0x1DF7E4u: goto label_1df7e4;
            case 0x1DF7E8u: goto label_1df7e8;
            case 0x1DF7ECu: goto label_1df7ec;
            case 0x1DF7F0u: goto label_1df7f0;
            case 0x1DF7F4u: goto label_1df7f4;
            case 0x1DF7F8u: goto label_1df7f8;
            case 0x1DF7FCu: goto label_1df7fc;
            case 0x1DF800u: goto label_1df800;
            case 0x1DF804u: goto label_1df804;
            case 0x1DF808u: goto label_1df808;
            case 0x1DF80Cu: goto label_1df80c;
            case 0x1DF810u: goto label_1df810;
            case 0x1DF814u: goto label_1df814;
            case 0x1DF818u: goto label_1df818;
            case 0x1DF81Cu: goto label_1df81c;
            case 0x1DF820u: goto label_1df820;
            case 0x1DF824u: goto label_1df824;
            case 0x1DF828u: goto label_1df828;
            case 0x1DF82Cu: goto label_1df82c;
            case 0x1DF830u: goto label_1df830;
            case 0x1DF834u: goto label_1df834;
            case 0x1DF838u: goto label_1df838;
            case 0x1DF83Cu: goto label_1df83c;
            case 0x1DF840u: goto label_1df840;
            case 0x1DF844u: goto label_1df844;
            case 0x1DF848u: goto label_1df848;
            case 0x1DF84Cu: goto label_1df84c;
            case 0x1DF850u: goto label_1df850;
            case 0x1DF854u: goto label_1df854;
            case 0x1DF858u: goto label_1df858;
            case 0x1DF85Cu: goto label_1df85c;
            case 0x1DF860u: goto label_1df860;
            case 0x1DF864u: goto label_1df864;
            case 0x1DF868u: goto label_1df868;
            case 0x1DF86Cu: goto label_1df86c;
            case 0x1DF870u: goto label_1df870;
            case 0x1DF874u: goto label_1df874;
            case 0x1DF878u: goto label_1df878;
            case 0x1DF87Cu: goto label_1df87c;
            case 0x1DF880u: goto label_1df880;
            case 0x1DF884u: goto label_1df884;
            case 0x1DF888u: goto label_1df888;
            case 0x1DF88Cu: goto label_1df88c;
            case 0x1DF890u: goto label_1df890;
            case 0x1DF894u: goto label_1df894;
            case 0x1DF898u: goto label_1df898;
            case 0x1DF89Cu: goto label_1df89c;
            case 0x1DF8A0u: goto label_1df8a0;
            case 0x1DF8A4u: goto label_1df8a4;
            case 0x1DF8A8u: goto label_1df8a8;
            case 0x1DF8ACu: goto label_1df8ac;
            case 0x1DF8B0u: goto label_1df8b0;
            case 0x1DF8B4u: goto label_1df8b4;
            case 0x1DF8B8u: goto label_1df8b8;
            case 0x1DF8BCu: goto label_1df8bc;
            case 0x1DF8C0u: goto label_1df8c0;
            case 0x1DF8C4u: goto label_1df8c4;
            case 0x1DF8C8u: goto label_1df8c8;
            case 0x1DF8CCu: goto label_1df8cc;
            case 0x1DF8D0u: goto label_1df8d0;
            case 0x1DF8D4u: goto label_1df8d4;
            case 0x1DF8D8u: goto label_1df8d8;
            case 0x1DF8DCu: goto label_1df8dc;
            case 0x1DF8E0u: goto label_1df8e0;
            case 0x1DF8E4u: goto label_1df8e4;
            case 0x1DF8E8u: goto label_1df8e8;
            case 0x1DF8ECu: goto label_1df8ec;
            case 0x1DF8F0u: goto label_1df8f0;
            case 0x1DF8F4u: goto label_1df8f4;
            case 0x1DF8F8u: goto label_1df8f8;
            case 0x1DF8FCu: goto label_1df8fc;
            case 0x1DF900u: goto label_1df900;
            case 0x1DF904u: goto label_1df904;
            case 0x1DF908u: goto label_1df908;
            case 0x1DF90Cu: goto label_1df90c;
            case 0x1DF910u: goto label_1df910;
            case 0x1DF914u: goto label_1df914;
            case 0x1DF918u: goto label_1df918;
            case 0x1DF91Cu: goto label_1df91c;
            case 0x1DF920u: goto label_1df920;
            case 0x1DF924u: goto label_1df924;
            case 0x1DF928u: goto label_1df928;
            case 0x1DF92Cu: goto label_1df92c;
            case 0x1DF930u: goto label_1df930;
            case 0x1DF934u: goto label_1df934;
            case 0x1DF938u: goto label_1df938;
            case 0x1DF93Cu: goto label_1df93c;
            case 0x1DF940u: goto label_1df940;
            case 0x1DF944u: goto label_1df944;
            case 0x1DF948u: goto label_1df948;
            case 0x1DF94Cu: goto label_1df94c;
            case 0x1DF950u: goto label_1df950;
            case 0x1DF954u: goto label_1df954;
            case 0x1DF958u: goto label_1df958;
            case 0x1DF95Cu: goto label_1df95c;
            case 0x1DF960u: goto label_1df960;
            case 0x1DF964u: goto label_1df964;
            case 0x1DF968u: goto label_1df968;
            case 0x1DF96Cu: goto label_1df96c;
            case 0x1DF970u: goto label_1df970;
            case 0x1DF974u: goto label_1df974;
            case 0x1DF978u: goto label_1df978;
            case 0x1DF97Cu: goto label_1df97c;
            case 0x1DF980u: goto label_1df980;
            case 0x1DF984u: goto label_1df984;
            case 0x1DF988u: goto label_1df988;
            case 0x1DF98Cu: goto label_1df98c;
            case 0x1DF990u: goto label_1df990;
            case 0x1DF994u: goto label_1df994;
            case 0x1DF998u: goto label_1df998;
            default: break;
        }
        return;
    }
label_fallthrough_0x1df994:
    ctx->pc = 0x1DF99Cu;
}
