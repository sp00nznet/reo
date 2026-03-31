#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_141640
// Address: 0x141640 - 0x1416d0
void entry_141640_0x1416d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x141640u;

label_141640:
    // 0x141640: 0x27bdffe0
    ctx->pc = 0x141640u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_141644:
    // 0x141644: 0x80302d
    ctx->pc = 0x141644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_141648:
    // 0x141648: 0xffb10008
    ctx->pc = 0x141648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_14164c:
    // 0x14164c: 0x3c110026
    ctx->pc = 0x14164cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)38 << 16));
label_141650:
    // 0x141650: 0x8e2249e8
    ctx->pc = 0x141650u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 18920)));
label_141654:
    // 0x141654: 0xffb00000
    ctx->pc = 0x141654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_141658:
    // 0x141658: 0x10400017
label_14165c:
    if (ctx->pc == 0x14165Cu) {
        ctx->pc = 0x14165Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->pc = 0x141660u;
        goto label_141660;
    }
    ctx->pc = 0x141658u;
    {
        const bool branch_taken_0x141658 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14165Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x141658) {
            ctx->pc = 0x1416B8u;
            goto label_1416b8;
        }
    }
    ctx->pc = 0x141660u;
label_141660:
    // 0x141660: 0x3c020023
    ctx->pc = 0x141660u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
label_141664:
    // 0x141664: 0x2442a5f0
    ctx->pc = 0x141664u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944240));
label_141668:
    // 0x141668: 0x8c430000
    ctx->pc = 0x141668u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14166c:
    // 0x14166c: 0x2463ffff
    ctx->pc = 0x14166cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
label_141670:
    // 0x141670: 0xac430000
    ctx->pc = 0x141670u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_141674:
    // 0x141674: 0x8c440000
    ctx->pc = 0x141674u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_141678:
    // 0x141678: 0x1480000c
label_14167c:
    if (ctx->pc == 0x14167Cu) {
        ctx->pc = 0x14167Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 18920));
        ctx->pc = 0x141680u;
        goto label_141680;
    }
    ctx->pc = 0x141678u;
    {
        const bool branch_taken_0x141678 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x14167Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 18920));
        if (branch_taken_0x141678) {
            ctx->pc = 0x1416ACu;
            goto label_1416ac;
        }
    }
    ctx->pc = 0x141680u;
label_141680:
    // 0x141680: 0x3c020023
    ctx->pc = 0x141680u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
label_141684:
    // 0x141684: 0x2450a5f4
    ctx->pc = 0x141684u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294944244));
label_141688:
    // 0x141688: 0x8e030000
    ctx->pc = 0x141688u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14168c:
    // 0x14168c: 0x10660005
label_141690:
    if (ctx->pc == 0x141690u) {
        ctx->pc = 0x141694u;
        goto label_141694;
    }
    ctx->pc = 0x14168Cu;
    {
        const bool branch_taken_0x14168c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 6));
        if (branch_taken_0x14168c) {
            ctx->pc = 0x1416A4u;
            goto label_1416a4;
        }
    }
    ctx->pc = 0x141694u;
label_141694:
    // 0x141694: 0x3c040024
    ctx->pc = 0x141694u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_141698:
    // 0x141698: 0x8e050000
    ctx->pc = 0x141698u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14169c:
    // 0x14169c: 0xc050600
label_1416a0:
    if (ctx->pc == 0x1416A0u) {
        ctx->pc = 0x1416A0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957992));
        ctx->pc = 0x1416A4u;
        goto label_1416a4;
    }
    ctx->pc = 0x14169Cu;
    SET_GPR_U32(ctx, 31, 0x1416A4u);
    ctx->pc = 0x1416A0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957992));
    ctx->pc = 0x141800u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00141800_0x141800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1416A4u; }
    }
    if (ctx->pc != 0x1416A4u) { return; }
    ctx->pc = 0x1416A4u;
label_1416a4:
    // 0x1416a4: 0xae000000
    ctx->pc = 0x1416a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1416a8:
    // 0x1416a8: 0x262349e8
    ctx->pc = 0x1416a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 18920));
label_1416ac:
    // 0x1416ac: 0x8c620000
    ctx->pc = 0x1416acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1416b0:
    // 0x1416b0: 0x40f809
label_1416b4:
    if (ctx->pc == 0x1416B4u) {
        ctx->pc = 0x1416B4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->pc = 0x1416B8u;
        goto label_1416b8;
    }
    ctx->pc = 0x1416B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1416B8u);
        ctx->pc = 0x1416B4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x141640u: goto label_141640;
            case 0x141644u: goto label_141644;
            case 0x141648u: goto label_141648;
            case 0x14164Cu: goto label_14164c;
            case 0x141650u: goto label_141650;
            case 0x141654u: goto label_141654;
            case 0x141658u: goto label_141658;
            case 0x14165Cu: goto label_14165c;
            case 0x141660u: goto label_141660;
            case 0x141664u: goto label_141664;
            case 0x141668u: goto label_141668;
            case 0x14166Cu: goto label_14166c;
            case 0x141670u: goto label_141670;
            case 0x141674u: goto label_141674;
            case 0x141678u: goto label_141678;
            case 0x14167Cu: goto label_14167c;
            case 0x141680u: goto label_141680;
            case 0x141684u: goto label_141684;
            case 0x141688u: goto label_141688;
            case 0x14168Cu: goto label_14168c;
            case 0x141690u: goto label_141690;
            case 0x141694u: goto label_141694;
            case 0x141698u: goto label_141698;
            case 0x14169Cu: goto label_14169c;
            case 0x1416A0u: goto label_1416a0;
            case 0x1416A4u: goto label_1416a4;
            case 0x1416A8u: goto label_1416a8;
            case 0x1416ACu: goto label_1416ac;
            case 0x1416B0u: goto label_1416b0;
            case 0x1416B4u: goto label_1416b4;
            case 0x1416B8u: goto label_1416b8;
            case 0x1416BCu: goto label_1416bc;
            case 0x1416C0u: goto label_1416c0;
            case 0x1416C4u: goto label_1416c4;
            case 0x1416C8u: goto label_1416c8;
            case 0x1416CCu: goto label_1416cc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1416B8u; }
            if (ctx->pc != 0x1416B8u) { return; }
        }
    }
    ctx->pc = 0x1416B8u;
label_1416b8:
    // 0x1416b8: 0xdfb00000
    ctx->pc = 0x1416b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1416bc:
    // 0x1416bc: 0xdfb10008
    ctx->pc = 0x1416bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1416c0:
    // 0x1416c0: 0xdfbf0010
    ctx->pc = 0x1416c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1416c4:
    // 0x1416c4: 0x3e00008
label_1416c8:
    if (ctx->pc == 0x1416C8u) {
        ctx->pc = 0x1416C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1416CCu;
        goto label_1416cc;
    }
    ctx->pc = 0x1416C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1416C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x141640u: goto label_141640;
            case 0x141644u: goto label_141644;
            case 0x141648u: goto label_141648;
            case 0x14164Cu: goto label_14164c;
            case 0x141650u: goto label_141650;
            case 0x141654u: goto label_141654;
            case 0x141658u: goto label_141658;
            case 0x14165Cu: goto label_14165c;
            case 0x141660u: goto label_141660;
            case 0x141664u: goto label_141664;
            case 0x141668u: goto label_141668;
            case 0x14166Cu: goto label_14166c;
            case 0x141670u: goto label_141670;
            case 0x141674u: goto label_141674;
            case 0x141678u: goto label_141678;
            case 0x14167Cu: goto label_14167c;
            case 0x141680u: goto label_141680;
            case 0x141684u: goto label_141684;
            case 0x141688u: goto label_141688;
            case 0x14168Cu: goto label_14168c;
            case 0x141690u: goto label_141690;
            case 0x141694u: goto label_141694;
            case 0x141698u: goto label_141698;
            case 0x14169Cu: goto label_14169c;
            case 0x1416A0u: goto label_1416a0;
            case 0x1416A4u: goto label_1416a4;
            case 0x1416A8u: goto label_1416a8;
            case 0x1416ACu: goto label_1416ac;
            case 0x1416B0u: goto label_1416b0;
            case 0x1416B4u: goto label_1416b4;
            case 0x1416B8u: goto label_1416b8;
            case 0x1416BCu: goto label_1416bc;
            case 0x1416C0u: goto label_1416c0;
            case 0x1416C4u: goto label_1416c4;
            case 0x1416C8u: goto label_1416c8;
            case 0x1416CCu: goto label_1416cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1416CCu;
label_1416cc:
    // 0x1416cc: 0x0
    ctx->pc = 0x1416ccu;
    // NOP
}
