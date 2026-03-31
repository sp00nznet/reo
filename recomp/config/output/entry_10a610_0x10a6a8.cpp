#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_10a610
// Address: 0x10a610 - 0x10a6a8
void entry_10a610_0x10a6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10a610u;

label_10a610:
    // 0x10a610: 0x27bdffe0
    ctx->pc = 0x10a610u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_10a614:
    // 0x10a614: 0x2402ffff
    ctx->pc = 0x10a614u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_10a618:
    // 0x10a618: 0xffb00000
    ctx->pc = 0x10a618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_10a61c:
    // 0x10a61c: 0xa0802d
    ctx->pc = 0x10a61cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10a620:
    // 0x10a620: 0x2e030020
    ctx->pc = 0x10a620u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 16), 32));
label_10a624:
    // 0x10a624: 0xffb10008
    ctx->pc = 0x10a624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_10a628:
    // 0x10a628: 0xffbf0010
    ctx->pc = 0x10a628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_10a62c:
    // 0x10a62c: 0x10600019
label_10a630:
    if (ctx->pc == 0x10A630u) {
        ctx->pc = 0x10A630u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10A634u;
        goto label_10a634;
    }
    ctx->pc = 0x10A62Cu;
    {
        const bool branch_taken_0x10a62c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x10A630u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10a62c) {
            ctx->pc = 0x10A694u;
            goto label_10a694;
        }
    }
    ctx->pc = 0x10A634u;
label_10a634:
    // 0x10a634: 0x8e2501d4
    ctx->pc = 0x10a634u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 468)));
label_10a638:
    // 0x10a638: 0x14a00008
label_10a63c:
    if (ctx->pc == 0x10A63Cu) {
        ctx->pc = 0x10A63Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x10A640u;
        goto label_10a640;
    }
    ctx->pc = 0x10A638u;
    {
        const bool branch_taken_0x10a638 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x10A63Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x10a638) {
            ctx->pc = 0x10A65Cu;
            goto label_10a65c;
        }
    }
    ctx->pc = 0x10A640u;
label_10a640:
    // 0x10a640: 0xc042912
label_10a644:
    if (ctx->pc == 0x10A644u) {
        ctx->pc = 0x10A648u;
        goto label_10a648;
    }
    ctx->pc = 0x10A640u;
    SET_GPR_U32(ctx, 31, 0x10A648u);
    ctx->pc = 0x10A448u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A448_0x10a448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A648u; }
    }
    if (ctx->pc != 0x10A648u) { return; }
    ctx->pc = 0x10A648u;
label_10a648:
    // 0x10a648: 0x50400003
label_10a64c:
    if (ctx->pc == 0x10A64Cu) {
        ctx->pc = 0x10A64Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 468)));
        ctx->pc = 0x10A650u;
        goto label_10a650;
    }
    ctx->pc = 0x10A648u;
    {
        const bool branch_taken_0x10a648 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x10a648) {
            ctx->pc = 0x10A64Cu;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 468)));
            ctx->pc = 0x10A658u;
            goto label_10a658;
        }
    }
    ctx->pc = 0x10A650u;
label_10a650:
    // 0x10a650: 0x10000010
label_10a654:
    if (ctx->pc == 0x10A654u) {
        ctx->pc = 0x10A654u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x10A658u;
        goto label_10a658;
    }
    ctx->pc = 0x10A650u;
    {
        const bool branch_taken_0x10a650 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10A654u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x10a650) {
            ctx->pc = 0x10A694u;
            goto label_10a694;
        }
    }
    ctx->pc = 0x10A658u;
label_10a658:
    // 0x10a658: 0x101880
    ctx->pc = 0x10a658u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
label_10a65c:
    // 0x10a65c: 0x652021
    ctx->pc = 0x10a65cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_10a660:
    // 0x10a660: 0x8c850000
    ctx->pc = 0x10a660u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10a664:
    // 0x10a664: 0x10a0000b
label_10a668:
    if (ctx->pc == 0x10A668u) {
        ctx->pc = 0x10A668u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x10A66Cu;
        goto label_10a66c;
    }
    ctx->pc = 0x10A664u;
    {
        const bool branch_taken_0x10a664 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x10A668u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x10a664) {
            ctx->pc = 0x10A694u;
            goto label_10a694;
        }
    }
    ctx->pc = 0x10A66Cu;
label_10a66c:
    // 0x10a66c: 0x2403ffff
    ctx->pc = 0x10a66cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_10a670:
    // 0x10a670: 0x10a30008
label_10a674:
    if (ctx->pc == 0x10A674u) {
        ctx->pc = 0x10A674u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x10A678u;
        goto label_10a678;
    }
    ctx->pc = 0x10A670u;
    {
        const bool branch_taken_0x10a670 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x10A674u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x10a670) {
            ctx->pc = 0x10A694u;
            goto label_10a694;
        }
    }
    ctx->pc = 0x10A678u;
label_10a678:
    // 0x10a678: 0x24030001
    ctx->pc = 0x10a678u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_10a67c:
    // 0x10a67c: 0x10a30005
label_10a680:
    if (ctx->pc == 0x10A680u) {
        ctx->pc = 0x10A680u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x10A684u;
        goto label_10a684;
    }
    ctx->pc = 0x10A67Cu;
    {
        const bool branch_taken_0x10a67c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x10A680u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x10a67c) {
            ctx->pc = 0x10A694u;
            goto label_10a694;
        }
    }
    ctx->pc = 0x10A684u;
label_10a684:
    // 0x10a684: 0xac800000
    ctx->pc = 0x10a684u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_10a688:
    // 0x10a688: 0xa0f809
label_10a68c:
    if (ctx->pc == 0x10A68Cu) {
        ctx->pc = 0x10A68Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10A690u;
        goto label_10a690;
    }
    ctx->pc = 0x10A688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x10A690u);
        ctx->pc = 0x10A68Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10A610u: goto label_10a610;
            case 0x10A614u: goto label_10a614;
            case 0x10A618u: goto label_10a618;
            case 0x10A61Cu: goto label_10a61c;
            case 0x10A620u: goto label_10a620;
            case 0x10A624u: goto label_10a624;
            case 0x10A628u: goto label_10a628;
            case 0x10A62Cu: goto label_10a62c;
            case 0x10A630u: goto label_10a630;
            case 0x10A634u: goto label_10a634;
            case 0x10A638u: goto label_10a638;
            case 0x10A63Cu: goto label_10a63c;
            case 0x10A640u: goto label_10a640;
            case 0x10A644u: goto label_10a644;
            case 0x10A648u: goto label_10a648;
            case 0x10A64Cu: goto label_10a64c;
            case 0x10A650u: goto label_10a650;
            case 0x10A654u: goto label_10a654;
            case 0x10A658u: goto label_10a658;
            case 0x10A65Cu: goto label_10a65c;
            case 0x10A660u: goto label_10a660;
            case 0x10A664u: goto label_10a664;
            case 0x10A668u: goto label_10a668;
            case 0x10A66Cu: goto label_10a66c;
            case 0x10A670u: goto label_10a670;
            case 0x10A674u: goto label_10a674;
            case 0x10A678u: goto label_10a678;
            case 0x10A67Cu: goto label_10a67c;
            case 0x10A680u: goto label_10a680;
            case 0x10A684u: goto label_10a684;
            case 0x10A688u: goto label_10a688;
            case 0x10A68Cu: goto label_10a68c;
            case 0x10A690u: goto label_10a690;
            case 0x10A694u: goto label_10a694;
            case 0x10A698u: goto label_10a698;
            case 0x10A69Cu: goto label_10a69c;
            case 0x10A6A0u: goto label_10a6a0;
            case 0x10A6A4u: goto label_10a6a4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10A690u; }
            if (ctx->pc != 0x10A690u) { return; }
        }
    }
    ctx->pc = 0x10A690u;
label_10a690:
    // 0x10a690: 0x102d
    ctx->pc = 0x10a690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10a694:
    // 0x10a694: 0xdfb00000
    ctx->pc = 0x10a694u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10a698:
    // 0x10a698: 0xdfb10008
    ctx->pc = 0x10a698u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_10a69c:
    // 0x10a69c: 0xdfbf0010
    ctx->pc = 0x10a69cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10a6a0:
    // 0x10a6a0: 0x3e00008
label_10a6a4:
    if (ctx->pc == 0x10A6A4u) {
        ctx->pc = 0x10A6A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x10A6A8u;
        goto label_fallthrough_0x10a6a0;
    }
    ctx->pc = 0x10A6A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A6A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10A610u: goto label_10a610;
            case 0x10A614u: goto label_10a614;
            case 0x10A618u: goto label_10a618;
            case 0x10A61Cu: goto label_10a61c;
            case 0x10A620u: goto label_10a620;
            case 0x10A624u: goto label_10a624;
            case 0x10A628u: goto label_10a628;
            case 0x10A62Cu: goto label_10a62c;
            case 0x10A630u: goto label_10a630;
            case 0x10A634u: goto label_10a634;
            case 0x10A638u: goto label_10a638;
            case 0x10A63Cu: goto label_10a63c;
            case 0x10A640u: goto label_10a640;
            case 0x10A644u: goto label_10a644;
            case 0x10A648u: goto label_10a648;
            case 0x10A64Cu: goto label_10a64c;
            case 0x10A650u: goto label_10a650;
            case 0x10A654u: goto label_10a654;
            case 0x10A658u: goto label_10a658;
            case 0x10A65Cu: goto label_10a65c;
            case 0x10A660u: goto label_10a660;
            case 0x10A664u: goto label_10a664;
            case 0x10A668u: goto label_10a668;
            case 0x10A66Cu: goto label_10a66c;
            case 0x10A670u: goto label_10a670;
            case 0x10A674u: goto label_10a674;
            case 0x10A678u: goto label_10a678;
            case 0x10A67Cu: goto label_10a67c;
            case 0x10A680u: goto label_10a680;
            case 0x10A684u: goto label_10a684;
            case 0x10A688u: goto label_10a688;
            case 0x10A68Cu: goto label_10a68c;
            case 0x10A690u: goto label_10a690;
            case 0x10A694u: goto label_10a694;
            case 0x10A698u: goto label_10a698;
            case 0x10A69Cu: goto label_10a69c;
            case 0x10A6A0u: goto label_10a6a0;
            case 0x10A6A4u: goto label_10a6a4;
            default: break;
        }
        return;
    }
label_fallthrough_0x10a6a0:
    ctx->pc = 0x10A6A8u;
}
