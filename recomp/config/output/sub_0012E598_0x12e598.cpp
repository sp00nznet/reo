#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012E598
// Address: 0x12e598 - 0x12e708
void sub_0012E598_0x12e598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12e598u;

label_12e598:
    // 0x12e598: 0x27bdff90
    ctx->pc = 0x12e598u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
label_12e59c:
    // 0x12e59c: 0xffb10028
    ctx->pc = 0x12e59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_12e5a0:
    // 0x12e5a0: 0x882d
    ctx->pc = 0x12e5a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12e5a4:
    // 0x12e5a4: 0xffb20030
    ctx->pc = 0x12e5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_12e5a8:
    // 0x12e5a8: 0xc0902d
    ctx->pc = 0x12e5a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_12e5ac:
    // 0x12e5ac: 0xffb40040
    ctx->pc = 0x12e5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_12e5b0:
    // 0x12e5b0: 0xa02d
    ctx->pc = 0x12e5b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12e5b4:
    // 0x12e5b4: 0xffb70058
    ctx->pc = 0x12e5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_12e5b8:
    // 0x12e5b8: 0x80b82d
    ctx->pc = 0x12e5b8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12e5bc:
    // 0x12e5bc: 0xffbe0060
    ctx->pc = 0x12e5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_12e5c0:
    // 0x12e5c0: 0x26fe0004
    ctx->pc = 0x12e5c0u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 23), 4));
label_12e5c4:
    // 0x12e5c4: 0xffb00020
    ctx->pc = 0x12e5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_12e5c8:
    // 0x12e5c8: 0xffb30038
    ctx->pc = 0x12e5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_12e5cc:
    // 0x12e5cc: 0xffb50048
    ctx->pc = 0x12e5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_12e5d0:
    // 0x12e5d0: 0xffb60050
    ctx->pc = 0x12e5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_12e5d4:
    // 0x12e5d4: 0xffbf0068
    ctx->pc = 0x12e5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_12e5d8:
    // 0x12e5d8: 0x8ee30058
    ctx->pc = 0x12e5d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 23), 88)));
label_12e5dc:
    // 0x12e5dc: 0x18600012
label_12e5e0:
    if (ctx->pc == 0x12E5E0u) {
        ctx->pc = 0x12E5E0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
        ctx->pc = 0x12E5E4u;
        goto label_12e5e4;
    }
    ctx->pc = 0x12E5DCu;
    {
        const bool branch_taken_0x12e5dc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x12E5E0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
        if (branch_taken_0x12e5dc) {
            ctx->pc = 0x12E628u;
            goto label_12e628;
        }
    }
    ctx->pc = 0x12E5E4u;
label_12e5e4:
    // 0x12e5e4: 0x3c0802d
    ctx->pc = 0x12e5e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_12e5e8:
    // 0x12e5e8: 0x8e040000
    ctx->pc = 0x12e5e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12e5ec:
    // 0x12e5ec: 0x0
    ctx->pc = 0x12e5ecu;
    // NOP
label_12e5f0:
    // 0x12e5f0: 0x26100004
    ctx->pc = 0x12e5f0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
label_12e5f4:
    // 0x12e5f4: 0x8c830000
    ctx->pc = 0x12e5f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12e5f8:
    // 0x12e5f8: 0x8c620024
    ctx->pc = 0x12e5f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_12e5fc:
    // 0x12e5fc: 0x40f809
label_12e600:
    if (ctx->pc == 0x12E600u) {
        ctx->pc = 0x12E600u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x12E604u;
        goto label_12e604;
    }
    ctx->pc = 0x12E5FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12E604u);
        ctx->pc = 0x12E600u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12E598u: goto label_12e598;
            case 0x12E59Cu: goto label_12e59c;
            case 0x12E5A0u: goto label_12e5a0;
            case 0x12E5A4u: goto label_12e5a4;
            case 0x12E5A8u: goto label_12e5a8;
            case 0x12E5ACu: goto label_12e5ac;
            case 0x12E5B0u: goto label_12e5b0;
            case 0x12E5B4u: goto label_12e5b4;
            case 0x12E5B8u: goto label_12e5b8;
            case 0x12E5BCu: goto label_12e5bc;
            case 0x12E5C0u: goto label_12e5c0;
            case 0x12E5C4u: goto label_12e5c4;
            case 0x12E5C8u: goto label_12e5c8;
            case 0x12E5CCu: goto label_12e5cc;
            case 0x12E5D0u: goto label_12e5d0;
            case 0x12E5D4u: goto label_12e5d4;
            case 0x12E5D8u: goto label_12e5d8;
            case 0x12E5DCu: goto label_12e5dc;
            case 0x12E5E0u: goto label_12e5e0;
            case 0x12E5E4u: goto label_12e5e4;
            case 0x12E5E8u: goto label_12e5e8;
            case 0x12E5ECu: goto label_12e5ec;
            case 0x12E5F0u: goto label_12e5f0;
            case 0x12E5F4u: goto label_12e5f4;
            case 0x12E5F8u: goto label_12e5f8;
            case 0x12E5FCu: goto label_12e5fc;
            case 0x12E600u: goto label_12e600;
            case 0x12E604u: goto label_12e604;
            case 0x12E608u: goto label_12e608;
            case 0x12E60Cu: goto label_12e60c;
            case 0x12E610u: goto label_12e610;
            case 0x12E614u: goto label_12e614;
            case 0x12E618u: goto label_12e618;
            case 0x12E61Cu: goto label_12e61c;
            case 0x12E620u: goto label_12e620;
            case 0x12E624u: goto label_12e624;
            case 0x12E628u: goto label_12e628;
            case 0x12E62Cu: goto label_12e62c;
            case 0x12E630u: goto label_12e630;
            case 0x12E634u: goto label_12e634;
            case 0x12E638u: goto label_12e638;
            case 0x12E63Cu: goto label_12e63c;
            case 0x12E640u: goto label_12e640;
            case 0x12E644u: goto label_12e644;
            case 0x12E648u: goto label_12e648;
            case 0x12E64Cu: goto label_12e64c;
            case 0x12E650u: goto label_12e650;
            case 0x12E654u: goto label_12e654;
            case 0x12E658u: goto label_12e658;
            case 0x12E65Cu: goto label_12e65c;
            case 0x12E660u: goto label_12e660;
            case 0x12E664u: goto label_12e664;
            case 0x12E668u: goto label_12e668;
            case 0x12E66Cu: goto label_12e66c;
            case 0x12E670u: goto label_12e670;
            case 0x12E674u: goto label_12e674;
            case 0x12E678u: goto label_12e678;
            case 0x12E67Cu: goto label_12e67c;
            case 0x12E680u: goto label_12e680;
            case 0x12E684u: goto label_12e684;
            case 0x12E688u: goto label_12e688;
            case 0x12E68Cu: goto label_12e68c;
            case 0x12E690u: goto label_12e690;
            case 0x12E694u: goto label_12e694;
            case 0x12E698u: goto label_12e698;
            case 0x12E69Cu: goto label_12e69c;
            case 0x12E6A0u: goto label_12e6a0;
            case 0x12E6A4u: goto label_12e6a4;
            case 0x12E6A8u: goto label_12e6a8;
            case 0x12E6ACu: goto label_12e6ac;
            case 0x12E6B0u: goto label_12e6b0;
            case 0x12E6B4u: goto label_12e6b4;
            case 0x12E6B8u: goto label_12e6b8;
            case 0x12E6BCu: goto label_12e6bc;
            case 0x12E6C0u: goto label_12e6c0;
            case 0x12E6C4u: goto label_12e6c4;
            case 0x12E6C8u: goto label_12e6c8;
            case 0x12E6CCu: goto label_12e6cc;
            case 0x12E6D0u: goto label_12e6d0;
            case 0x12E6D4u: goto label_12e6d4;
            case 0x12E6D8u: goto label_12e6d8;
            case 0x12E6DCu: goto label_12e6dc;
            case 0x12E6E0u: goto label_12e6e0;
            case 0x12E6E4u: goto label_12e6e4;
            case 0x12E6E8u: goto label_12e6e8;
            case 0x12E6ECu: goto label_12e6ec;
            case 0x12E6F0u: goto label_12e6f0;
            case 0x12E6F4u: goto label_12e6f4;
            case 0x12E6F8u: goto label_12e6f8;
            case 0x12E6FCu: goto label_12e6fc;
            case 0x12E700u: goto label_12e700;
            case 0x12E704u: goto label_12e704;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12E604u; }
            if (ctx->pc != 0x12E604u) { return; }
        }
    }
    ctx->pc = 0x12E604u;
label_12e604:
    // 0x12e604: 0x28842
    ctx->pc = 0x12e604u;
    SET_GPR_U32(ctx, 17, SRL32(GPR_U32(ctx, 2), 1));
label_12e608:
    // 0x12e608: 0x232182a
    ctx->pc = 0x12e608u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 18)));
label_12e60c:
    // 0x12e60c: 0x14600031
label_12e610:
    if (ctx->pc == 0x12E610u) {
        ctx->pc = 0x12E610u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E614u;
        goto label_12e614;
    }
    ctx->pc = 0x12E60Cu;
    {
        const bool branch_taken_0x12e60c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x12E610u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12e60c) {
            ctx->pc = 0x12E6D4u;
            goto label_12e6d4;
        }
    }
    ctx->pc = 0x12E614u;
label_12e614:
    // 0x12e614: 0x8ee30058
    ctx->pc = 0x12e614u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 23), 88)));
label_12e618:
    // 0x12e618: 0x26940001
    ctx->pc = 0x12e618u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_12e61c:
    // 0x12e61c: 0x283102a
    ctx->pc = 0x12e61cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 3)));
label_12e620:
    // 0x12e620: 0x5440fff3
label_12e624:
    if (ctx->pc == 0x12E624u) {
        ctx->pc = 0x12E624u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x12E628u;
        goto label_12e628;
    }
    ctx->pc = 0x12E620u;
    {
        const bool branch_taken_0x12e620 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x12e620) {
            ctx->pc = 0x12E624u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x12E5F0u;
            goto label_12e5f0;
        }
    }
    ctx->pc = 0x12E628u;
label_12e628:
    // 0x12e628: 0x18600029
label_12e62c:
    if (ctx->pc == 0x12E62Cu) {
        ctx->pc = 0x12E62Cu;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E630u;
        goto label_12e630;
    }
    ctx->pc = 0x12E628u;
    {
        const bool branch_taken_0x12e628 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x12E62Cu;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12e628) {
            ctx->pc = 0x12E6D0u;
            goto label_12e6d0;
        }
    }
    ctx->pc = 0x12E630u;
label_12e630:
    // 0x12e630: 0xa82d
    ctx->pc = 0x12e630u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12e634:
    // 0x12e634: 0x0
    ctx->pc = 0x12e634u;
    // NOP
label_12e638:
    // 0x12e638: 0x1a400021
label_12e63c:
    if (ctx->pc == 0x12E63Cu) {
        ctx->pc = 0x12E63Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E640u;
        goto label_12e640;
    }
    ctx->pc = 0x12E638u;
    {
        const bool branch_taken_0x12e638 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x12E63Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12e638) {
            ctx->pc = 0x12E6C0u;
            goto label_12e6c0;
        }
    }
    ctx->pc = 0x12E640u;
label_12e640:
    // 0x12e640: 0x8fa20010
    ctx->pc = 0x12e640u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_12e644:
    // 0x12e644: 0x12b040
    ctx->pc = 0x12e644u;
    SET_GPR_U32(ctx, 22, SLL32(GPR_U32(ctx, 18), 1));
label_12e648:
    // 0x12e648: 0x2be8021
    ctx->pc = 0x12e648u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 30)));
label_12e64c:
    // 0x12e64c: 0x2a29821
    ctx->pc = 0x12e64cu;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_12e650:
    // 0x12e650: 0x8e040000
    ctx->pc = 0x12e650u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12e654:
    // 0x12e654: 0x0
    ctx->pc = 0x12e654u;
    // NOP
label_12e658:
    // 0x12e658: 0x3a0382d
    ctx->pc = 0x12e658u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12e65c:
    // 0x12e65c: 0x24050001
    ctx->pc = 0x12e65cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_12e660:
    // 0x12e660: 0x8c830000
    ctx->pc = 0x12e660u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12e664:
    // 0x12e664: 0x8c620018
    ctx->pc = 0x12e664u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_12e668:
    // 0x12e668: 0x40f809
label_12e66c:
    if (ctx->pc == 0x12E66Cu) {
        ctx->pc = 0x12E66Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E670u;
        goto label_12e670;
    }
    ctx->pc = 0x12E668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12E670u);
        ctx->pc = 0x12E66Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12E598u: goto label_12e598;
            case 0x12E59Cu: goto label_12e59c;
            case 0x12E5A0u: goto label_12e5a0;
            case 0x12E5A4u: goto label_12e5a4;
            case 0x12E5A8u: goto label_12e5a8;
            case 0x12E5ACu: goto label_12e5ac;
            case 0x12E5B0u: goto label_12e5b0;
            case 0x12E5B4u: goto label_12e5b4;
            case 0x12E5B8u: goto label_12e5b8;
            case 0x12E5BCu: goto label_12e5bc;
            case 0x12E5C0u: goto label_12e5c0;
            case 0x12E5C4u: goto label_12e5c4;
            case 0x12E5C8u: goto label_12e5c8;
            case 0x12E5CCu: goto label_12e5cc;
            case 0x12E5D0u: goto label_12e5d0;
            case 0x12E5D4u: goto label_12e5d4;
            case 0x12E5D8u: goto label_12e5d8;
            case 0x12E5DCu: goto label_12e5dc;
            case 0x12E5E0u: goto label_12e5e0;
            case 0x12E5E4u: goto label_12e5e4;
            case 0x12E5E8u: goto label_12e5e8;
            case 0x12E5ECu: goto label_12e5ec;
            case 0x12E5F0u: goto label_12e5f0;
            case 0x12E5F4u: goto label_12e5f4;
            case 0x12E5F8u: goto label_12e5f8;
            case 0x12E5FCu: goto label_12e5fc;
            case 0x12E600u: goto label_12e600;
            case 0x12E604u: goto label_12e604;
            case 0x12E608u: goto label_12e608;
            case 0x12E60Cu: goto label_12e60c;
            case 0x12E610u: goto label_12e610;
            case 0x12E614u: goto label_12e614;
            case 0x12E618u: goto label_12e618;
            case 0x12E61Cu: goto label_12e61c;
            case 0x12E620u: goto label_12e620;
            case 0x12E624u: goto label_12e624;
            case 0x12E628u: goto label_12e628;
            case 0x12E62Cu: goto label_12e62c;
            case 0x12E630u: goto label_12e630;
            case 0x12E634u: goto label_12e634;
            case 0x12E638u: goto label_12e638;
            case 0x12E63Cu: goto label_12e63c;
            case 0x12E640u: goto label_12e640;
            case 0x12E644u: goto label_12e644;
            case 0x12E648u: goto label_12e648;
            case 0x12E64Cu: goto label_12e64c;
            case 0x12E650u: goto label_12e650;
            case 0x12E654u: goto label_12e654;
            case 0x12E658u: goto label_12e658;
            case 0x12E65Cu: goto label_12e65c;
            case 0x12E660u: goto label_12e660;
            case 0x12E664u: goto label_12e664;
            case 0x12E668u: goto label_12e668;
            case 0x12E66Cu: goto label_12e66c;
            case 0x12E670u: goto label_12e670;
            case 0x12E674u: goto label_12e674;
            case 0x12E678u: goto label_12e678;
            case 0x12E67Cu: goto label_12e67c;
            case 0x12E680u: goto label_12e680;
            case 0x12E684u: goto label_12e684;
            case 0x12E688u: goto label_12e688;
            case 0x12E68Cu: goto label_12e68c;
            case 0x12E690u: goto label_12e690;
            case 0x12E694u: goto label_12e694;
            case 0x12E698u: goto label_12e698;
            case 0x12E69Cu: goto label_12e69c;
            case 0x12E6A0u: goto label_12e6a0;
            case 0x12E6A4u: goto label_12e6a4;
            case 0x12E6A8u: goto label_12e6a8;
            case 0x12E6ACu: goto label_12e6ac;
            case 0x12E6B0u: goto label_12e6b0;
            case 0x12E6B4u: goto label_12e6b4;
            case 0x12E6B8u: goto label_12e6b8;
            case 0x12E6BCu: goto label_12e6bc;
            case 0x12E6C0u: goto label_12e6c0;
            case 0x12E6C4u: goto label_12e6c4;
            case 0x12E6C8u: goto label_12e6c8;
            case 0x12E6CCu: goto label_12e6cc;
            case 0x12E6D0u: goto label_12e6d0;
            case 0x12E6D4u: goto label_12e6d4;
            case 0x12E6D8u: goto label_12e6d8;
            case 0x12E6DCu: goto label_12e6dc;
            case 0x12E6E0u: goto label_12e6e0;
            case 0x12E6E4u: goto label_12e6e4;
            case 0x12E6E8u: goto label_12e6e8;
            case 0x12E6ECu: goto label_12e6ec;
            case 0x12E6F0u: goto label_12e6f0;
            case 0x12E6F4u: goto label_12e6f4;
            case 0x12E6F8u: goto label_12e6f8;
            case 0x12E6FCu: goto label_12e6fc;
            case 0x12E700u: goto label_12e700;
            case 0x12E704u: goto label_12e704;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12E670u; }
            if (ctx->pc != 0x12E670u) { return; }
        }
    }
    ctx->pc = 0x12E670u;
label_12e670:
    // 0x12e670: 0x8e630000
    ctx->pc = 0x12e670u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_12e674:
    // 0x12e674: 0x8fa50000
    ctx->pc = 0x12e674u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12e678:
    // 0x12e678: 0x112040
    ctx->pc = 0x12e678u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 17), 1));
label_12e67c:
    // 0x12e67c: 0x8fa60004
    ctx->pc = 0x12e67cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_12e680:
    // 0x12e680: 0xc041eac
label_12e684:
    if (ctx->pc == 0x12E684u) {
        ctx->pc = 0x12E684u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->pc = 0x12E688u;
        goto label_12e688;
    }
    ctx->pc = 0x12E680u;
    SET_GPR_U32(ctx, 31, 0x12E688u);
    ctx->pc = 0x12E684u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E688u; }
    }
    if (ctx->pc != 0x12E688u) { return; }
    ctx->pc = 0x12E688u;
label_12e688:
    // 0x12e688: 0x8e040000
    ctx->pc = 0x12e688u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12e68c:
    // 0x12e68c: 0x8fa20004
    ctx->pc = 0x12e68cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_12e690:
    // 0x12e690: 0x282d
    ctx->pc = 0x12e690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12e694:
    // 0x12e694: 0x8c870000
    ctx->pc = 0x12e694u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12e698:
    // 0x12e698: 0x3a0302d
    ctx->pc = 0x12e698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12e69c:
    // 0x12e69c: 0x213c0
    ctx->pc = 0x12e69cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 15));
label_12e6a0:
    // 0x12e6a0: 0x21403
    ctx->pc = 0x12e6a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_12e6a4:
    // 0x12e6a4: 0x8ce30020
    ctx->pc = 0x12e6a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 32)));
label_12e6a8:
    // 0x12e6a8: 0x60f809
label_12e6ac:
    if (ctx->pc == 0x12E6ACu) {
        ctx->pc = 0x12E6ACu;
        SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->pc = 0x12E6B0u;
        goto label_12e6b0;
    }
    ctx->pc = 0x12E6A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12E6B0u);
        ctx->pc = 0x12E6ACu;
        SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12E598u: goto label_12e598;
            case 0x12E59Cu: goto label_12e59c;
            case 0x12E5A0u: goto label_12e5a0;
            case 0x12E5A4u: goto label_12e5a4;
            case 0x12E5A8u: goto label_12e5a8;
            case 0x12E5ACu: goto label_12e5ac;
            case 0x12E5B0u: goto label_12e5b0;
            case 0x12E5B4u: goto label_12e5b4;
            case 0x12E5B8u: goto label_12e5b8;
            case 0x12E5BCu: goto label_12e5bc;
            case 0x12E5C0u: goto label_12e5c0;
            case 0x12E5C4u: goto label_12e5c4;
            case 0x12E5C8u: goto label_12e5c8;
            case 0x12E5CCu: goto label_12e5cc;
            case 0x12E5D0u: goto label_12e5d0;
            case 0x12E5D4u: goto label_12e5d4;
            case 0x12E5D8u: goto label_12e5d8;
            case 0x12E5DCu: goto label_12e5dc;
            case 0x12E5E0u: goto label_12e5e0;
            case 0x12E5E4u: goto label_12e5e4;
            case 0x12E5E8u: goto label_12e5e8;
            case 0x12E5ECu: goto label_12e5ec;
            case 0x12E5F0u: goto label_12e5f0;
            case 0x12E5F4u: goto label_12e5f4;
            case 0x12E5F8u: goto label_12e5f8;
            case 0x12E5FCu: goto label_12e5fc;
            case 0x12E600u: goto label_12e600;
            case 0x12E604u: goto label_12e604;
            case 0x12E608u: goto label_12e608;
            case 0x12E60Cu: goto label_12e60c;
            case 0x12E610u: goto label_12e610;
            case 0x12E614u: goto label_12e614;
            case 0x12E618u: goto label_12e618;
            case 0x12E61Cu: goto label_12e61c;
            case 0x12E620u: goto label_12e620;
            case 0x12E624u: goto label_12e624;
            case 0x12E628u: goto label_12e628;
            case 0x12E62Cu: goto label_12e62c;
            case 0x12E630u: goto label_12e630;
            case 0x12E634u: goto label_12e634;
            case 0x12E638u: goto label_12e638;
            case 0x12E63Cu: goto label_12e63c;
            case 0x12E640u: goto label_12e640;
            case 0x12E644u: goto label_12e644;
            case 0x12E648u: goto label_12e648;
            case 0x12E64Cu: goto label_12e64c;
            case 0x12E650u: goto label_12e650;
            case 0x12E654u: goto label_12e654;
            case 0x12E658u: goto label_12e658;
            case 0x12E65Cu: goto label_12e65c;
            case 0x12E660u: goto label_12e660;
            case 0x12E664u: goto label_12e664;
            case 0x12E668u: goto label_12e668;
            case 0x12E66Cu: goto label_12e66c;
            case 0x12E670u: goto label_12e670;
            case 0x12E674u: goto label_12e674;
            case 0x12E678u: goto label_12e678;
            case 0x12E67Cu: goto label_12e67c;
            case 0x12E680u: goto label_12e680;
            case 0x12E684u: goto label_12e684;
            case 0x12E688u: goto label_12e688;
            case 0x12E68Cu: goto label_12e68c;
            case 0x12E690u: goto label_12e690;
            case 0x12E694u: goto label_12e694;
            case 0x12E698u: goto label_12e698;
            case 0x12E69Cu: goto label_12e69c;
            case 0x12E6A0u: goto label_12e6a0;
            case 0x12E6A4u: goto label_12e6a4;
            case 0x12E6A8u: goto label_12e6a8;
            case 0x12E6ACu: goto label_12e6ac;
            case 0x12E6B0u: goto label_12e6b0;
            case 0x12E6B4u: goto label_12e6b4;
            case 0x12E6B8u: goto label_12e6b8;
            case 0x12E6BCu: goto label_12e6bc;
            case 0x12E6C0u: goto label_12e6c0;
            case 0x12E6C4u: goto label_12e6c4;
            case 0x12E6C8u: goto label_12e6c8;
            case 0x12E6CCu: goto label_12e6cc;
            case 0x12E6D0u: goto label_12e6d0;
            case 0x12E6D4u: goto label_12e6d4;
            case 0x12E6D8u: goto label_12e6d8;
            case 0x12E6DCu: goto label_12e6dc;
            case 0x12E6E0u: goto label_12e6e0;
            case 0x12E6E4u: goto label_12e6e4;
            case 0x12E6E8u: goto label_12e6e8;
            case 0x12E6ECu: goto label_12e6ec;
            case 0x12E6F0u: goto label_12e6f0;
            case 0x12E6F4u: goto label_12e6f4;
            case 0x12E6F8u: goto label_12e6f8;
            case 0x12E6FCu: goto label_12e6fc;
            case 0x12E700u: goto label_12e700;
            case 0x12E704u: goto label_12e704;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12E6B0u; }
            if (ctx->pc != 0x12E6B0u) { return; }
        }
    }
    ctx->pc = 0x12E6B0u;
label_12e6b0:
    // 0x12e6b0: 0x232102a
    ctx->pc = 0x12e6b0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 18)));
label_12e6b4:
    // 0x12e6b4: 0x5440ffe8
label_12e6b8:
    if (ctx->pc == 0x12E6B8u) {
        ctx->pc = 0x12E6B8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x12E6BCu;
        goto label_12e6bc;
    }
    ctx->pc = 0x12E6B4u;
    {
        const bool branch_taken_0x12e6b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x12e6b4) {
            ctx->pc = 0x12E6B8u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x12E658u;
            goto label_12e658;
        }
    }
    ctx->pc = 0x12E6BCu;
label_12e6bc:
    // 0x12e6bc: 0x8ee30058
    ctx->pc = 0x12e6bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 23), 88)));
label_12e6c0:
    // 0x12e6c0: 0x26940001
    ctx->pc = 0x12e6c0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_12e6c4:
    // 0x12e6c4: 0x283102a
    ctx->pc = 0x12e6c4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 3)));
label_12e6c8:
    // 0x12e6c8: 0x1440ffdb
label_12e6cc:
    if (ctx->pc == 0x12E6CCu) {
        ctx->pc = 0x12E6CCu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x12E6D0u;
        goto label_12e6d0;
    }
    ctx->pc = 0x12E6C8u;
    {
        const bool branch_taken_0x12e6c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12E6CCu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4));
        if (branch_taken_0x12e6c8) {
            ctx->pc = 0x12E638u;
            goto label_12e638;
        }
    }
    ctx->pc = 0x12E6D0u;
label_12e6d0:
    // 0x12e6d0: 0x220102d
    ctx->pc = 0x12e6d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12e6d4:
    // 0x12e6d4: 0xdfb00020
    ctx->pc = 0x12e6d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12e6d8:
    // 0x12e6d8: 0xdfb10028
    ctx->pc = 0x12e6d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_12e6dc:
    // 0x12e6dc: 0xdfb20030
    ctx->pc = 0x12e6dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_12e6e0:
    // 0x12e6e0: 0xdfb30038
    ctx->pc = 0x12e6e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_12e6e4:
    // 0x12e6e4: 0xdfb40040
    ctx->pc = 0x12e6e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_12e6e8:
    // 0x12e6e8: 0xdfb50048
    ctx->pc = 0x12e6e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_12e6ec:
    // 0x12e6ec: 0xdfb60050
    ctx->pc = 0x12e6ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_12e6f0:
    // 0x12e6f0: 0xdfb70058
    ctx->pc = 0x12e6f0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_12e6f4:
    // 0x12e6f4: 0xdfbe0060
    ctx->pc = 0x12e6f4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_12e6f8:
    // 0x12e6f8: 0xdfbf0068
    ctx->pc = 0x12e6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_12e6fc:
    // 0x12e6fc: 0x3e00008
label_12e700:
    if (ctx->pc == 0x12E700u) {
        ctx->pc = 0x12E700u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x12E704u;
        goto label_12e704;
    }
    ctx->pc = 0x12E6FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E700u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12E598u: goto label_12e598;
            case 0x12E59Cu: goto label_12e59c;
            case 0x12E5A0u: goto label_12e5a0;
            case 0x12E5A4u: goto label_12e5a4;
            case 0x12E5A8u: goto label_12e5a8;
            case 0x12E5ACu: goto label_12e5ac;
            case 0x12E5B0u: goto label_12e5b0;
            case 0x12E5B4u: goto label_12e5b4;
            case 0x12E5B8u: goto label_12e5b8;
            case 0x12E5BCu: goto label_12e5bc;
            case 0x12E5C0u: goto label_12e5c0;
            case 0x12E5C4u: goto label_12e5c4;
            case 0x12E5C8u: goto label_12e5c8;
            case 0x12E5CCu: goto label_12e5cc;
            case 0x12E5D0u: goto label_12e5d0;
            case 0x12E5D4u: goto label_12e5d4;
            case 0x12E5D8u: goto label_12e5d8;
            case 0x12E5DCu: goto label_12e5dc;
            case 0x12E5E0u: goto label_12e5e0;
            case 0x12E5E4u: goto label_12e5e4;
            case 0x12E5E8u: goto label_12e5e8;
            case 0x12E5ECu: goto label_12e5ec;
            case 0x12E5F0u: goto label_12e5f0;
            case 0x12E5F4u: goto label_12e5f4;
            case 0x12E5F8u: goto label_12e5f8;
            case 0x12E5FCu: goto label_12e5fc;
            case 0x12E600u: goto label_12e600;
            case 0x12E604u: goto label_12e604;
            case 0x12E608u: goto label_12e608;
            case 0x12E60Cu: goto label_12e60c;
            case 0x12E610u: goto label_12e610;
            case 0x12E614u: goto label_12e614;
            case 0x12E618u: goto label_12e618;
            case 0x12E61Cu: goto label_12e61c;
            case 0x12E620u: goto label_12e620;
            case 0x12E624u: goto label_12e624;
            case 0x12E628u: goto label_12e628;
            case 0x12E62Cu: goto label_12e62c;
            case 0x12E630u: goto label_12e630;
            case 0x12E634u: goto label_12e634;
            case 0x12E638u: goto label_12e638;
            case 0x12E63Cu: goto label_12e63c;
            case 0x12E640u: goto label_12e640;
            case 0x12E644u: goto label_12e644;
            case 0x12E648u: goto label_12e648;
            case 0x12E64Cu: goto label_12e64c;
            case 0x12E650u: goto label_12e650;
            case 0x12E654u: goto label_12e654;
            case 0x12E658u: goto label_12e658;
            case 0x12E65Cu: goto label_12e65c;
            case 0x12E660u: goto label_12e660;
            case 0x12E664u: goto label_12e664;
            case 0x12E668u: goto label_12e668;
            case 0x12E66Cu: goto label_12e66c;
            case 0x12E670u: goto label_12e670;
            case 0x12E674u: goto label_12e674;
            case 0x12E678u: goto label_12e678;
            case 0x12E67Cu: goto label_12e67c;
            case 0x12E680u: goto label_12e680;
            case 0x12E684u: goto label_12e684;
            case 0x12E688u: goto label_12e688;
            case 0x12E68Cu: goto label_12e68c;
            case 0x12E690u: goto label_12e690;
            case 0x12E694u: goto label_12e694;
            case 0x12E698u: goto label_12e698;
            case 0x12E69Cu: goto label_12e69c;
            case 0x12E6A0u: goto label_12e6a0;
            case 0x12E6A4u: goto label_12e6a4;
            case 0x12E6A8u: goto label_12e6a8;
            case 0x12E6ACu: goto label_12e6ac;
            case 0x12E6B0u: goto label_12e6b0;
            case 0x12E6B4u: goto label_12e6b4;
            case 0x12E6B8u: goto label_12e6b8;
            case 0x12E6BCu: goto label_12e6bc;
            case 0x12E6C0u: goto label_12e6c0;
            case 0x12E6C4u: goto label_12e6c4;
            case 0x12E6C8u: goto label_12e6c8;
            case 0x12E6CCu: goto label_12e6cc;
            case 0x12E6D0u: goto label_12e6d0;
            case 0x12E6D4u: goto label_12e6d4;
            case 0x12E6D8u: goto label_12e6d8;
            case 0x12E6DCu: goto label_12e6dc;
            case 0x12E6E0u: goto label_12e6e0;
            case 0x12E6E4u: goto label_12e6e4;
            case 0x12E6E8u: goto label_12e6e8;
            case 0x12E6ECu: goto label_12e6ec;
            case 0x12E6F0u: goto label_12e6f0;
            case 0x12E6F4u: goto label_12e6f4;
            case 0x12E6F8u: goto label_12e6f8;
            case 0x12E6FCu: goto label_12e6fc;
            case 0x12E700u: goto label_12e700;
            case 0x12E704u: goto label_12e704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12E704u;
label_12e704:
    // 0x12e704: 0x0
    ctx->pc = 0x12e704u;
    // NOP
}
