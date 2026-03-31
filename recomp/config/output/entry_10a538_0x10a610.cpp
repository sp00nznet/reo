#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_10a538
// Address: 0x10a538 - 0x10a610
void entry_10a538_0x10a610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10a538u;

label_10a538:
    // 0x10a538: 0x27bdffe0
    ctx->pc = 0x10a538u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_10a53c:
    // 0x10a53c: 0xffb10008
    ctx->pc = 0x10a53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_10a540:
    // 0x10a540: 0xa0882d
    ctx->pc = 0x10a540u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10a544:
    // 0x10a544: 0x2e220020
    ctx->pc = 0x10a544u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), 32));
label_10a548:
    // 0x10a548: 0xffb00000
    ctx->pc = 0x10a548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_10a54c:
    // 0x10a54c: 0xffbf0010
    ctx->pc = 0x10a54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_10a550:
    // 0x10a550: 0x14400005
label_10a554:
    if (ctx->pc == 0x10A554u) {
        ctx->pc = 0x10A554u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10A558u;
        goto label_10a558;
    }
    ctx->pc = 0x10A550u;
    {
        const bool branch_taken_0x10a550 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10A554u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10a550) {
            ctx->pc = 0x10A568u;
            goto label_10a568;
        }
    }
    ctx->pc = 0x10A558u;
label_10a558:
    // 0x10a558: 0x24030016
    ctx->pc = 0x10a558u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 22));
label_10a55c:
    // 0x10a55c: 0x2402ffff
    ctx->pc = 0x10a55cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_10a560:
    // 0x10a560: 0x10000026
label_10a564:
    if (ctx->pc == 0x10A564u) {
        ctx->pc = 0x10A564u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x10A568u;
        goto label_10a568;
    }
    ctx->pc = 0x10A560u;
    {
        const bool branch_taken_0x10a560 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10A564u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x10a560) {
            ctx->pc = 0x10A5FCu;
            goto label_10a5fc;
        }
    }
    ctx->pc = 0x10A568u;
label_10a568:
    // 0x10a568: 0x8e0301d4
    ctx->pc = 0x10a568u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_10a56c:
    // 0x10a56c: 0x14600007
label_10a570:
    if (ctx->pc == 0x10A570u) {
        ctx->pc = 0x10A570u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x10A574u;
        goto label_10a574;
    }
    ctx->pc = 0x10A56Cu;
    {
        const bool branch_taken_0x10a56c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x10A570u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x10a56c) {
            ctx->pc = 0x10A58Cu;
            goto label_10a58c;
        }
    }
    ctx->pc = 0x10A574u;
label_10a574:
    // 0x10a574: 0xc042912
label_10a578:
    if (ctx->pc == 0x10A578u) {
        ctx->pc = 0x10A57Cu;
        goto label_10a57c;
    }
    ctx->pc = 0x10A574u;
    SET_GPR_U32(ctx, 31, 0x10A57Cu);
    ctx->pc = 0x10A448u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A448_0x10a448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A57Cu; }
    }
    if (ctx->pc != 0x10A57Cu) { return; }
    ctx->pc = 0x10A57Cu;
label_10a57c:
    // 0x10a57c: 0x1440001f
label_10a580:
    if (ctx->pc == 0x10A580u) {
        ctx->pc = 0x10A580u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x10A584u;
        goto label_10a584;
    }
    ctx->pc = 0x10A57Cu;
    {
        const bool branch_taken_0x10a57c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10A580u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x10a57c) {
            ctx->pc = 0x10A5FCu;
            goto label_10a5fc;
        }
    }
    ctx->pc = 0x10A584u;
label_10a584:
    // 0x10a584: 0x8e0301d4
    ctx->pc = 0x10a584u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_10a588:
    // 0x10a588: 0x111080
    ctx->pc = 0x10a588u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
label_10a58c:
    // 0x10a58c: 0x432021
    ctx->pc = 0x10a58cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10a590:
    // 0x10a590: 0x8c850000
    ctx->pc = 0x10a590u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10a594:
    // 0x10a594: 0x54a0000c
label_10a598:
    if (ctx->pc == 0x10A598u) {
        ctx->pc = 0x10A598u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x10A59Cu;
        goto label_10a59c;
    }
    ctx->pc = 0x10A594u;
    {
        const bool branch_taken_0x10a594 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x10a594) {
            ctx->pc = 0x10A598u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x10A5C8u;
            goto label_10a5c8;
        }
    }
    ctx->pc = 0x10A59Cu;
label_10a59c:
    // 0x10a59c: 0xc0429e4
label_10a5a0:
    if (ctx->pc == 0x10A5A0u) {
        ctx->pc = 0x10A5A0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10A5A4u;
        goto label_10a5a4;
    }
    ctx->pc = 0x10A59Cu;
    SET_GPR_U32(ctx, 31, 0x10A5A4u);
    ctx->pc = 0x10A5A0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A790u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A790_0x10a790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A5A4u; }
    }
    if (ctx->pc != 0x10A5A4u) { return; }
    ctx->pc = 0x10A5A4u;
label_10a5a4:
    // 0x10a5a4: 0x200202d
    ctx->pc = 0x10a5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10a5a8:
    // 0x10a5a8: 0x220302d
    ctx->pc = 0x10a5a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10a5ac:
    // 0x10a5ac: 0xdfb10008
    ctx->pc = 0x10a5acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_10a5b0:
    // 0x10a5b0: 0xdfb00000
    ctx->pc = 0x10a5b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10a5b4:
    // 0x10a5b4: 0x40282d
    ctx->pc = 0x10a5b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10a5b8:
    // 0x10a5b8: 0xdfbf0010
    ctx->pc = 0x10a5b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10a5bc:
    // 0x10a5bc: 0x80429cc
label_10a5c0:
    if (ctx->pc == 0x10A5C0u) {
        ctx->pc = 0x10A5C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x10A5C4u;
        goto label_10a5c4;
    }
    ctx->pc = 0x10A5BCu;
    ctx->pc = 0x10A5C0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x10A730u;
    entry_10a730_0x10a790(rdram, ctx, runtime); return;
    ctx->pc = 0x10A5C4u;
label_10a5c4:
    // 0x10a5c4: 0x0
    ctx->pc = 0x10a5c4u;
    // NOP
label_10a5c8:
    // 0x10a5c8: 0x10a3000c
label_10a5cc:
    if (ctx->pc == 0x10A5CCu) {
        ctx->pc = 0x10A5CCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10A5D0u;
        goto label_10a5d0;
    }
    ctx->pc = 0x10A5C8u;
    {
        const bool branch_taken_0x10a5c8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x10A5CCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10a5c8) {
            ctx->pc = 0x10A5FCu;
            goto label_10a5fc;
        }
    }
    ctx->pc = 0x10A5D0u;
label_10a5d0:
    // 0x10a5d0: 0x2402ffff
    ctx->pc = 0x10a5d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_10a5d4:
    // 0x10a5d4: 0x54a20006
label_10a5d8:
    if (ctx->pc == 0x10A5D8u) {
        ctx->pc = 0x10A5D8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x10A5DCu;
        goto label_10a5dc;
    }
    ctx->pc = 0x10A5D4u;
    {
        const bool branch_taken_0x10a5d4 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        if (branch_taken_0x10a5d4) {
            ctx->pc = 0x10A5D8u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x10A5F0u;
            goto label_10a5f0;
        }
    }
    ctx->pc = 0x10A5DCu;
label_10a5dc:
    // 0x10a5dc: 0x24030016
    ctx->pc = 0x10a5dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 22));
label_10a5e0:
    // 0x10a5e0: 0x24020001
    ctx->pc = 0x10a5e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_10a5e4:
    // 0x10a5e4: 0x10000005
label_10a5e8:
    if (ctx->pc == 0x10A5E8u) {
        ctx->pc = 0x10A5E8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x10A5ECu;
        goto label_10a5ec;
    }
    ctx->pc = 0x10A5E4u;
    {
        const bool branch_taken_0x10a5e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10A5E8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x10a5e4) {
            ctx->pc = 0x10A5FCu;
            goto label_10a5fc;
        }
    }
    ctx->pc = 0x10A5ECu;
label_10a5ec:
    // 0x10a5ec: 0x0
    ctx->pc = 0x10a5ecu;
    // NOP
label_10a5f0:
    // 0x10a5f0: 0xa0f809
label_10a5f4:
    if (ctx->pc == 0x10A5F4u) {
        ctx->pc = 0x10A5F4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10A5F8u;
        goto label_10a5f8;
    }
    ctx->pc = 0x10A5F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x10A5F8u);
        ctx->pc = 0x10A5F4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10A538u: goto label_10a538;
            case 0x10A53Cu: goto label_10a53c;
            case 0x10A540u: goto label_10a540;
            case 0x10A544u: goto label_10a544;
            case 0x10A548u: goto label_10a548;
            case 0x10A54Cu: goto label_10a54c;
            case 0x10A550u: goto label_10a550;
            case 0x10A554u: goto label_10a554;
            case 0x10A558u: goto label_10a558;
            case 0x10A55Cu: goto label_10a55c;
            case 0x10A560u: goto label_10a560;
            case 0x10A564u: goto label_10a564;
            case 0x10A568u: goto label_10a568;
            case 0x10A56Cu: goto label_10a56c;
            case 0x10A570u: goto label_10a570;
            case 0x10A574u: goto label_10a574;
            case 0x10A578u: goto label_10a578;
            case 0x10A57Cu: goto label_10a57c;
            case 0x10A580u: goto label_10a580;
            case 0x10A584u: goto label_10a584;
            case 0x10A588u: goto label_10a588;
            case 0x10A58Cu: goto label_10a58c;
            case 0x10A590u: goto label_10a590;
            case 0x10A594u: goto label_10a594;
            case 0x10A598u: goto label_10a598;
            case 0x10A59Cu: goto label_10a59c;
            case 0x10A5A0u: goto label_10a5a0;
            case 0x10A5A4u: goto label_10a5a4;
            case 0x10A5A8u: goto label_10a5a8;
            case 0x10A5ACu: goto label_10a5ac;
            case 0x10A5B0u: goto label_10a5b0;
            case 0x10A5B4u: goto label_10a5b4;
            case 0x10A5B8u: goto label_10a5b8;
            case 0x10A5BCu: goto label_10a5bc;
            case 0x10A5C0u: goto label_10a5c0;
            case 0x10A5C4u: goto label_10a5c4;
            case 0x10A5C8u: goto label_10a5c8;
            case 0x10A5CCu: goto label_10a5cc;
            case 0x10A5D0u: goto label_10a5d0;
            case 0x10A5D4u: goto label_10a5d4;
            case 0x10A5D8u: goto label_10a5d8;
            case 0x10A5DCu: goto label_10a5dc;
            case 0x10A5E0u: goto label_10a5e0;
            case 0x10A5E4u: goto label_10a5e4;
            case 0x10A5E8u: goto label_10a5e8;
            case 0x10A5ECu: goto label_10a5ec;
            case 0x10A5F0u: goto label_10a5f0;
            case 0x10A5F4u: goto label_10a5f4;
            case 0x10A5F8u: goto label_10a5f8;
            case 0x10A5FCu: goto label_10a5fc;
            case 0x10A600u: goto label_10a600;
            case 0x10A604u: goto label_10a604;
            case 0x10A608u: goto label_10a608;
            case 0x10A60Cu: goto label_10a60c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10A5F8u; }
            if (ctx->pc != 0x10A5F8u) { return; }
        }
    }
    ctx->pc = 0x10A5F8u;
label_10a5f8:
    // 0x10a5f8: 0x102d
    ctx->pc = 0x10a5f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10a5fc:
    // 0x10a5fc: 0xdfb00000
    ctx->pc = 0x10a5fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10a600:
    // 0x10a600: 0xdfb10008
    ctx->pc = 0x10a600u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_10a604:
    // 0x10a604: 0xdfbf0010
    ctx->pc = 0x10a604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10a608:
    // 0x10a608: 0x3e00008
label_10a60c:
    if (ctx->pc == 0x10A60Cu) {
        ctx->pc = 0x10A60Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x10A610u;
        goto label_fallthrough_0x10a608;
    }
    ctx->pc = 0x10A608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A60Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10A538u: goto label_10a538;
            case 0x10A53Cu: goto label_10a53c;
            case 0x10A540u: goto label_10a540;
            case 0x10A544u: goto label_10a544;
            case 0x10A548u: goto label_10a548;
            case 0x10A54Cu: goto label_10a54c;
            case 0x10A550u: goto label_10a550;
            case 0x10A554u: goto label_10a554;
            case 0x10A558u: goto label_10a558;
            case 0x10A55Cu: goto label_10a55c;
            case 0x10A560u: goto label_10a560;
            case 0x10A564u: goto label_10a564;
            case 0x10A568u: goto label_10a568;
            case 0x10A56Cu: goto label_10a56c;
            case 0x10A570u: goto label_10a570;
            case 0x10A574u: goto label_10a574;
            case 0x10A578u: goto label_10a578;
            case 0x10A57Cu: goto label_10a57c;
            case 0x10A580u: goto label_10a580;
            case 0x10A584u: goto label_10a584;
            case 0x10A588u: goto label_10a588;
            case 0x10A58Cu: goto label_10a58c;
            case 0x10A590u: goto label_10a590;
            case 0x10A594u: goto label_10a594;
            case 0x10A598u: goto label_10a598;
            case 0x10A59Cu: goto label_10a59c;
            case 0x10A5A0u: goto label_10a5a0;
            case 0x10A5A4u: goto label_10a5a4;
            case 0x10A5A8u: goto label_10a5a8;
            case 0x10A5ACu: goto label_10a5ac;
            case 0x10A5B0u: goto label_10a5b0;
            case 0x10A5B4u: goto label_10a5b4;
            case 0x10A5B8u: goto label_10a5b8;
            case 0x10A5BCu: goto label_10a5bc;
            case 0x10A5C0u: goto label_10a5c0;
            case 0x10A5C4u: goto label_10a5c4;
            case 0x10A5C8u: goto label_10a5c8;
            case 0x10A5CCu: goto label_10a5cc;
            case 0x10A5D0u: goto label_10a5d0;
            case 0x10A5D4u: goto label_10a5d4;
            case 0x10A5D8u: goto label_10a5d8;
            case 0x10A5DCu: goto label_10a5dc;
            case 0x10A5E0u: goto label_10a5e0;
            case 0x10A5E4u: goto label_10a5e4;
            case 0x10A5E8u: goto label_10a5e8;
            case 0x10A5ECu: goto label_10a5ec;
            case 0x10A5F0u: goto label_10a5f0;
            case 0x10A5F4u: goto label_10a5f4;
            case 0x10A5F8u: goto label_10a5f8;
            case 0x10A5FCu: goto label_10a5fc;
            case 0x10A600u: goto label_10a600;
            case 0x10A604u: goto label_10a604;
            case 0x10A608u: goto label_10a608;
            case 0x10A60Cu: goto label_10a60c;
            default: break;
        }
        return;
    }
label_fallthrough_0x10a608:
    ctx->pc = 0x10A610u;
}
