#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017C590
// Address: 0x17c590 - 0x17c708
void sub_0017C590_0x17c590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17c590u;

label_17c590:
    // 0x17c590: 0x27bdffe0
    ctx->pc = 0x17c590u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_17c594:
    // 0x17c594: 0xffb20010
    ctx->pc = 0x17c594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_17c598:
    // 0x17c598: 0xc0902d
    ctx->pc = 0x17c598u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17c59c:
    // 0x17c59c: 0xffb10008
    ctx->pc = 0x17c59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_17c5a0:
    // 0x17c5a0: 0xa0882d
    ctx->pc = 0x17c5a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17c5a4:
    // 0x17c5a4: 0x240282d
    ctx->pc = 0x17c5a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17c5a8:
    // 0x17c5a8: 0xffb00000
    ctx->pc = 0x17c5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17c5ac:
    // 0x17c5ac: 0xffbf0018
    ctx->pc = 0x17c5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_17c5b0:
    // 0x17c5b0: 0xc05f1c2
label_17c5b4:
    if (ctx->pc == 0x17C5B4u) {
        ctx->pc = 0x17C5B4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17C5B8u;
        goto label_17c5b8;
    }
    ctx->pc = 0x17C5B0u;
    SET_GPR_U32(ctx, 31, 0x17C5B8u);
    ctx->pc = 0x17C5B4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17C708u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C708_0x17c708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C5B8u; }
    }
    if (ctx->pc != 0x17C5B8u) { return; }
    ctx->pc = 0x17C5B8u;
label_17c5b8:
    // 0x17c5b8: 0x24030001
    ctx->pc = 0x17c5b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_17c5bc:
    // 0x17c5bc: 0x5443004c
label_17c5c0:
    if (ctx->pc == 0x17C5C0u) {
        ctx->pc = 0x17C5C0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x17C5C4u;
        goto label_17c5c4;
    }
    ctx->pc = 0x17C5BCu;
    {
        const bool branch_taken_0x17c5bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x17c5bc) {
            ctx->pc = 0x17C5C0u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x17C6F0u;
            goto label_17c6f0;
        }
    }
    ctx->pc = 0x17C5C4u;
label_17c5c4:
    // 0x17c5c4: 0x2e420065
    ctx->pc = 0x17c5c4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), 101));
label_17c5c8:
    // 0x17c5c8: 0x1040003f
label_17c5cc:
    if (ctx->pc == 0x17C5CCu) {
        ctx->pc = 0x17C5CCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 18));
        ctx->pc = 0x17C5D0u;
        goto label_17c5d0;
    }
    ctx->pc = 0x17C5C8u;
    {
        const bool branch_taken_0x17c5c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C5CCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 18));
        if (branch_taken_0x17c5c8) {
            ctx->pc = 0x17C6C8u;
            goto label_17c6c8;
        }
    }
    ctx->pc = 0x17C5D0u;
label_17c5d0:
    // 0x17c5d0: 0x121080
    ctx->pc = 0x17c5d0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
label_17c5d4:
    // 0x17c5d4: 0x3c030024
    ctx->pc = 0x17c5d4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
label_17c5d8:
    // 0x17c5d8: 0x621821
    ctx->pc = 0x17c5d8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_17c5dc:
    // 0x17c5dc: 0x8c631130
    ctx->pc = 0x17c5dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4400)));
label_17c5e0:
    // 0x17c5e0: 0x600008
label_17c5e4:
    if (ctx->pc == 0x17C5E4u) {
        ctx->pc = 0x17C5E8u;
        goto label_17c5e8;
    }
    ctx->pc = 0x17C5E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17C590u: goto label_17c590;
            case 0x17C594u: goto label_17c594;
            case 0x17C598u: goto label_17c598;
            case 0x17C59Cu: goto label_17c59c;
            case 0x17C5A0u: goto label_17c5a0;
            case 0x17C5A4u: goto label_17c5a4;
            case 0x17C5A8u: goto label_17c5a8;
            case 0x17C5ACu: goto label_17c5ac;
            case 0x17C5B0u: goto label_17c5b0;
            case 0x17C5B4u: goto label_17c5b4;
            case 0x17C5B8u: goto label_17c5b8;
            case 0x17C5BCu: goto label_17c5bc;
            case 0x17C5C0u: goto label_17c5c0;
            case 0x17C5C4u: goto label_17c5c4;
            case 0x17C5C8u: goto label_17c5c8;
            case 0x17C5CCu: goto label_17c5cc;
            case 0x17C5D0u: goto label_17c5d0;
            case 0x17C5D4u: goto label_17c5d4;
            case 0x17C5D8u: goto label_17c5d8;
            case 0x17C5DCu: goto label_17c5dc;
            case 0x17C5E0u: goto label_17c5e0;
            case 0x17C5E4u: goto label_17c5e4;
            case 0x17C5E8u: goto label_17c5e8;
            case 0x17C5ECu: goto label_17c5ec;
            case 0x17C5F0u: goto label_17c5f0;
            case 0x17C5F4u: goto label_17c5f4;
            case 0x17C5F8u: goto label_17c5f8;
            case 0x17C5FCu: goto label_17c5fc;
            case 0x17C600u: goto label_17c600;
            case 0x17C604u: goto label_17c604;
            case 0x17C608u: goto label_17c608;
            case 0x17C60Cu: goto label_17c60c;
            case 0x17C610u: goto label_17c610;
            case 0x17C614u: goto label_17c614;
            case 0x17C618u: goto label_17c618;
            case 0x17C61Cu: goto label_17c61c;
            case 0x17C620u: goto label_17c620;
            case 0x17C624u: goto label_17c624;
            case 0x17C628u: goto label_17c628;
            case 0x17C62Cu: goto label_17c62c;
            case 0x17C630u: goto label_17c630;
            case 0x17C634u: goto label_17c634;
            case 0x17C638u: goto label_17c638;
            case 0x17C63Cu: goto label_17c63c;
            case 0x17C640u: goto label_17c640;
            case 0x17C644u: goto label_17c644;
            case 0x17C648u: goto label_17c648;
            case 0x17C64Cu: goto label_17c64c;
            case 0x17C650u: goto label_17c650;
            case 0x17C654u: goto label_17c654;
            case 0x17C658u: goto label_17c658;
            case 0x17C65Cu: goto label_17c65c;
            case 0x17C660u: goto label_17c660;
            case 0x17C664u: goto label_17c664;
            case 0x17C668u: goto label_17c668;
            case 0x17C66Cu: goto label_17c66c;
            case 0x17C670u: goto label_17c670;
            case 0x17C674u: goto label_17c674;
            case 0x17C678u: goto label_17c678;
            case 0x17C67Cu: goto label_17c67c;
            case 0x17C680u: goto label_17c680;
            case 0x17C684u: goto label_17c684;
            case 0x17C688u: goto label_17c688;
            case 0x17C68Cu: goto label_17c68c;
            case 0x17C690u: goto label_17c690;
            case 0x17C694u: goto label_17c694;
            case 0x17C698u: goto label_17c698;
            case 0x17C69Cu: goto label_17c69c;
            case 0x17C6A0u: goto label_17c6a0;
            case 0x17C6A4u: goto label_17c6a4;
            case 0x17C6A8u: goto label_17c6a8;
            case 0x17C6ACu: goto label_17c6ac;
            case 0x17C6B0u: goto label_17c6b0;
            case 0x17C6B4u: goto label_17c6b4;
            case 0x17C6B8u: goto label_17c6b8;
            case 0x17C6BCu: goto label_17c6bc;
            case 0x17C6C0u: goto label_17c6c0;
            case 0x17C6C4u: goto label_17c6c4;
            case 0x17C6C8u: goto label_17c6c8;
            case 0x17C6CCu: goto label_17c6cc;
            case 0x17C6D0u: goto label_17c6d0;
            case 0x17C6D4u: goto label_17c6d4;
            case 0x17C6D8u: goto label_17c6d8;
            case 0x17C6DCu: goto label_17c6dc;
            case 0x17C6E0u: goto label_17c6e0;
            case 0x17C6E4u: goto label_17c6e4;
            case 0x17C6E8u: goto label_17c6e8;
            case 0x17C6ECu: goto label_17c6ec;
            case 0x17C6F0u: goto label_17c6f0;
            case 0x17C6F4u: goto label_17c6f4;
            case 0x17C6F8u: goto label_17c6f8;
            case 0x17C6FCu: goto label_17c6fc;
            case 0x17C700u: goto label_17c700;
            case 0x17C704u: goto label_17c704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17C5E8u;
label_17c5e8:
    // 0x17c5e8: 0x200202d
    ctx->pc = 0x17c5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17c5ec:
    // 0x17c5ec: 0xdfb00000
    ctx->pc = 0x17c5ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17c5f0:
    // 0x17c5f0: 0x220282d
    ctx->pc = 0x17c5f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17c5f4:
    // 0x17c5f4: 0xdfb10008
    ctx->pc = 0x17c5f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17c5f8:
    // 0x17c5f8: 0xdfb20010
    ctx->pc = 0x17c5f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17c5fc:
    // 0x17c5fc: 0xdfbf0018
    ctx->pc = 0x17c5fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_17c600:
    // 0x17c600: 0x805f1f0
label_17c604:
    if (ctx->pc == 0x17C604u) {
        ctx->pc = 0x17C604u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x17C608u;
        goto label_17c608;
    }
    ctx->pc = 0x17C600u;
    ctx->pc = 0x17C604u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17C7C0u;
    entry_17c7c0_0x17c7e0(rdram, ctx, runtime); return;
    ctx->pc = 0x17C608u;
label_17c608:
    // 0x17c608: 0x200202d
    ctx->pc = 0x17c608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17c60c:
    // 0x17c60c: 0xdfb00000
    ctx->pc = 0x17c60cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17c610:
    // 0x17c610: 0x220282d
    ctx->pc = 0x17c610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17c614:
    // 0x17c614: 0xdfb10008
    ctx->pc = 0x17c614u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17c618:
    // 0x17c618: 0xdfb20010
    ctx->pc = 0x17c618u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17c61c:
    // 0x17c61c: 0xdfbf0018
    ctx->pc = 0x17c61cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_17c620:
    // 0x17c620: 0x805f1f8
label_17c624:
    if (ctx->pc == 0x17C624u) {
        ctx->pc = 0x17C624u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x17C628u;
        goto label_17c628;
    }
    ctx->pc = 0x17C620u;
    ctx->pc = 0x17C624u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17C7E0u;
    entry_17c7e0_0x17c800(rdram, ctx, runtime); return;
    ctx->pc = 0x17C628u;
label_17c628:
    // 0x17c628: 0x200202d
    ctx->pc = 0x17c628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17c62c:
    // 0x17c62c: 0xdfb00000
    ctx->pc = 0x17c62cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17c630:
    // 0x17c630: 0x220282d
    ctx->pc = 0x17c630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17c634:
    // 0x17c634: 0xdfb10008
    ctx->pc = 0x17c634u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17c638:
    // 0x17c638: 0xdfb20010
    ctx->pc = 0x17c638u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17c63c:
    // 0x17c63c: 0xdfbf0018
    ctx->pc = 0x17c63cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_17c640:
    // 0x17c640: 0x805f234
label_17c644:
    if (ctx->pc == 0x17C644u) {
        ctx->pc = 0x17C644u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x17C648u;
        goto label_17c648;
    }
    ctx->pc = 0x17C640u;
    ctx->pc = 0x17C644u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17C8D0u;
    entry_17c8d0_0x17c8f0(rdram, ctx, runtime); return;
    ctx->pc = 0x17C648u;
label_17c648:
    // 0x17c648: 0x200202d
    ctx->pc = 0x17c648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17c64c:
    // 0x17c64c: 0xdfb00000
    ctx->pc = 0x17c64cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17c650:
    // 0x17c650: 0x220282d
    ctx->pc = 0x17c650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17c654:
    // 0x17c654: 0xdfb10008
    ctx->pc = 0x17c654u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17c658:
    // 0x17c658: 0xdfb20010
    ctx->pc = 0x17c658u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17c65c:
    // 0x17c65c: 0xdfbf0018
    ctx->pc = 0x17c65cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_17c660:
    // 0x17c660: 0x805f23c
label_17c664:
    if (ctx->pc == 0x17C664u) {
        ctx->pc = 0x17C664u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x17C668u;
        goto label_17c668;
    }
    ctx->pc = 0x17C660u;
    ctx->pc = 0x17C664u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17C8F0u;
    entry_17c8f0_0x17c910(rdram, ctx, runtime); return;
    ctx->pc = 0x17C668u;
label_17c668:
    // 0x17c668: 0x200202d
    ctx->pc = 0x17c668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17c66c:
    // 0x17c66c: 0xdfb00000
    ctx->pc = 0x17c66cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17c670:
    // 0x17c670: 0x220282d
    ctx->pc = 0x17c670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17c674:
    // 0x17c674: 0xdfb10008
    ctx->pc = 0x17c674u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17c678:
    // 0x17c678: 0xdfb20010
    ctx->pc = 0x17c678u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17c67c:
    // 0x17c67c: 0xdfbf0018
    ctx->pc = 0x17c67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_17c680:
    // 0x17c680: 0x805f244
label_17c684:
    if (ctx->pc == 0x17C684u) {
        ctx->pc = 0x17C684u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x17C688u;
        goto label_17c688;
    }
    ctx->pc = 0x17C680u;
    ctx->pc = 0x17C684u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17C910u;
    entry_17c910_0x17c928(rdram, ctx, runtime); return;
    ctx->pc = 0x17C688u;
label_17c688:
    // 0x17c688: 0x200202d
    ctx->pc = 0x17c688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17c68c:
    // 0x17c68c: 0xdfb00000
    ctx->pc = 0x17c68cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17c690:
    // 0x17c690: 0x220282d
    ctx->pc = 0x17c690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17c694:
    // 0x17c694: 0xdfb10008
    ctx->pc = 0x17c694u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17c698:
    // 0x17c698: 0xdfb20010
    ctx->pc = 0x17c698u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17c69c:
    // 0x17c69c: 0xdfbf0018
    ctx->pc = 0x17c69cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_17c6a0:
    // 0x17c6a0: 0x805f24a
label_17c6a4:
    if (ctx->pc == 0x17C6A4u) {
        ctx->pc = 0x17C6A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x17C6A8u;
        goto label_17c6a8;
    }
    ctx->pc = 0x17C6A0u;
    ctx->pc = 0x17C6A4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17C928u;
    entry_17c928_0x17c940(rdram, ctx, runtime); return;
    ctx->pc = 0x17C6A8u;
label_17c6a8:
    // 0x17c6a8: 0x200202d
    ctx->pc = 0x17c6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17c6ac:
    // 0x17c6ac: 0xdfb00000
    ctx->pc = 0x17c6acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17c6b0:
    // 0x17c6b0: 0x220282d
    ctx->pc = 0x17c6b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17c6b4:
    // 0x17c6b4: 0xdfb10008
    ctx->pc = 0x17c6b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17c6b8:
    // 0x17c6b8: 0xdfb20010
    ctx->pc = 0x17c6b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17c6bc:
    // 0x17c6bc: 0xdfbf0018
    ctx->pc = 0x17c6bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_17c6c0:
    // 0x17c6c0: 0x805f200
label_17c6c4:
    if (ctx->pc == 0x17C6C4u) {
        ctx->pc = 0x17C6C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x17C6C8u;
        goto label_17c6c8;
    }
    ctx->pc = 0x17C6C0u;
    ctx->pc = 0x17C6C4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17C800u;
    entry_17c800_0x17c818(rdram, ctx, runtime); return;
    ctx->pc = 0x17C6C8u;
label_17c6c8:
    // 0x17c6c8: 0x200202d
    ctx->pc = 0x17c6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17c6cc:
    // 0x17c6cc: 0xdfb00000
    ctx->pc = 0x17c6ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17c6d0:
    // 0x17c6d0: 0x220282d
    ctx->pc = 0x17c6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17c6d4:
    // 0x17c6d4: 0xdfb10008
    ctx->pc = 0x17c6d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17c6d8:
    // 0x17c6d8: 0x3c060024
    ctx->pc = 0x17c6d8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
label_17c6dc:
    // 0x17c6dc: 0xdfb20010
    ctx->pc = 0x17c6dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17c6e0:
    // 0x17c6e0: 0xdfbf0018
    ctx->pc = 0x17c6e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_17c6e4:
    // 0x17c6e4: 0x24c610f0
    ctx->pc = 0x17c6e4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4336));
label_17c6e8:
    // 0x17c6e8: 0x805f472
label_17c6ec:
    if (ctx->pc == 0x17C6ECu) {
        ctx->pc = 0x17C6ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x17C6F0u;
        goto label_17c6f0;
    }
    ctx->pc = 0x17C6E8u;
    ctx->pc = 0x17C6ECu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17D1C8u;
    sub_0017D1C8_0x17d1c8(rdram, ctx, runtime); return;
    ctx->pc = 0x17C6F0u;
label_17c6f0:
    // 0x17c6f0: 0xdfb10008
    ctx->pc = 0x17c6f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17c6f4:
    // 0x17c6f4: 0xdfb20010
    ctx->pc = 0x17c6f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17c6f8:
    // 0x17c6f8: 0xdfbf0018
    ctx->pc = 0x17c6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_17c6fc:
    // 0x17c6fc: 0x3e00008
label_17c700:
    if (ctx->pc == 0x17C700u) {
        ctx->pc = 0x17C700u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x17C704u;
        goto label_17c704;
    }
    ctx->pc = 0x17C6FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C700u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17C590u: goto label_17c590;
            case 0x17C594u: goto label_17c594;
            case 0x17C598u: goto label_17c598;
            case 0x17C59Cu: goto label_17c59c;
            case 0x17C5A0u: goto label_17c5a0;
            case 0x17C5A4u: goto label_17c5a4;
            case 0x17C5A8u: goto label_17c5a8;
            case 0x17C5ACu: goto label_17c5ac;
            case 0x17C5B0u: goto label_17c5b0;
            case 0x17C5B4u: goto label_17c5b4;
            case 0x17C5B8u: goto label_17c5b8;
            case 0x17C5BCu: goto label_17c5bc;
            case 0x17C5C0u: goto label_17c5c0;
            case 0x17C5C4u: goto label_17c5c4;
            case 0x17C5C8u: goto label_17c5c8;
            case 0x17C5CCu: goto label_17c5cc;
            case 0x17C5D0u: goto label_17c5d0;
            case 0x17C5D4u: goto label_17c5d4;
            case 0x17C5D8u: goto label_17c5d8;
            case 0x17C5DCu: goto label_17c5dc;
            case 0x17C5E0u: goto label_17c5e0;
            case 0x17C5E4u: goto label_17c5e4;
            case 0x17C5E8u: goto label_17c5e8;
            case 0x17C5ECu: goto label_17c5ec;
            case 0x17C5F0u: goto label_17c5f0;
            case 0x17C5F4u: goto label_17c5f4;
            case 0x17C5F8u: goto label_17c5f8;
            case 0x17C5FCu: goto label_17c5fc;
            case 0x17C600u: goto label_17c600;
            case 0x17C604u: goto label_17c604;
            case 0x17C608u: goto label_17c608;
            case 0x17C60Cu: goto label_17c60c;
            case 0x17C610u: goto label_17c610;
            case 0x17C614u: goto label_17c614;
            case 0x17C618u: goto label_17c618;
            case 0x17C61Cu: goto label_17c61c;
            case 0x17C620u: goto label_17c620;
            case 0x17C624u: goto label_17c624;
            case 0x17C628u: goto label_17c628;
            case 0x17C62Cu: goto label_17c62c;
            case 0x17C630u: goto label_17c630;
            case 0x17C634u: goto label_17c634;
            case 0x17C638u: goto label_17c638;
            case 0x17C63Cu: goto label_17c63c;
            case 0x17C640u: goto label_17c640;
            case 0x17C644u: goto label_17c644;
            case 0x17C648u: goto label_17c648;
            case 0x17C64Cu: goto label_17c64c;
            case 0x17C650u: goto label_17c650;
            case 0x17C654u: goto label_17c654;
            case 0x17C658u: goto label_17c658;
            case 0x17C65Cu: goto label_17c65c;
            case 0x17C660u: goto label_17c660;
            case 0x17C664u: goto label_17c664;
            case 0x17C668u: goto label_17c668;
            case 0x17C66Cu: goto label_17c66c;
            case 0x17C670u: goto label_17c670;
            case 0x17C674u: goto label_17c674;
            case 0x17C678u: goto label_17c678;
            case 0x17C67Cu: goto label_17c67c;
            case 0x17C680u: goto label_17c680;
            case 0x17C684u: goto label_17c684;
            case 0x17C688u: goto label_17c688;
            case 0x17C68Cu: goto label_17c68c;
            case 0x17C690u: goto label_17c690;
            case 0x17C694u: goto label_17c694;
            case 0x17C698u: goto label_17c698;
            case 0x17C69Cu: goto label_17c69c;
            case 0x17C6A0u: goto label_17c6a0;
            case 0x17C6A4u: goto label_17c6a4;
            case 0x17C6A8u: goto label_17c6a8;
            case 0x17C6ACu: goto label_17c6ac;
            case 0x17C6B0u: goto label_17c6b0;
            case 0x17C6B4u: goto label_17c6b4;
            case 0x17C6B8u: goto label_17c6b8;
            case 0x17C6BCu: goto label_17c6bc;
            case 0x17C6C0u: goto label_17c6c0;
            case 0x17C6C4u: goto label_17c6c4;
            case 0x17C6C8u: goto label_17c6c8;
            case 0x17C6CCu: goto label_17c6cc;
            case 0x17C6D0u: goto label_17c6d0;
            case 0x17C6D4u: goto label_17c6d4;
            case 0x17C6D8u: goto label_17c6d8;
            case 0x17C6DCu: goto label_17c6dc;
            case 0x17C6E0u: goto label_17c6e0;
            case 0x17C6E4u: goto label_17c6e4;
            case 0x17C6E8u: goto label_17c6e8;
            case 0x17C6ECu: goto label_17c6ec;
            case 0x17C6F0u: goto label_17c6f0;
            case 0x17C6F4u: goto label_17c6f4;
            case 0x17C6F8u: goto label_17c6f8;
            case 0x17C6FCu: goto label_17c6fc;
            case 0x17C700u: goto label_17c700;
            case 0x17C704u: goto label_17c704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17C704u;
label_17c704:
    // 0x17c704: 0x0
    ctx->pc = 0x17c704u;
    // NOP
}
