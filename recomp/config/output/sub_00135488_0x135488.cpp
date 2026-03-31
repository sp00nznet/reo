#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00135488
// Address: 0x135488 - 0x135560
void sub_00135488_0x135488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x135488u;

label_135488:
    // 0x135488: 0x27bdffe0
    ctx->pc = 0x135488u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_13548c:
    // 0x13548c: 0xffb00000
    ctx->pc = 0x13548cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_135490:
    // 0x135490: 0xa0802d
    ctx->pc = 0x135490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_135494:
    // 0x135494: 0xffb10008
    ctx->pc = 0x135494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_135498:
    // 0x135498: 0xffb20010
    ctx->pc = 0x135498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_13549c:
    // 0x13549c: 0xffbf0018
    ctx->pc = 0x13549cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1354a0:
    // 0x1354a0: 0xc04d57e
label_1354a4:
    if (ctx->pc == 0x1354A4u) {
        ctx->pc = 0x1354A4u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1354A8u;
        goto label_1354a8;
    }
    ctx->pc = 0x1354A0u;
    SET_GPR_U32(ctx, 31, 0x1354A8u);
    ctx->pc = 0x1354A4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1355F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001355F8_0x1355f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1354A8u; }
    }
    if (ctx->pc != 0x1354A8u) { return; }
    ctx->pc = 0x1354A8u;
label_1354a8:
    // 0x1354a8: 0x200f809
label_1354ac:
    if (ctx->pc == 0x1354ACu) {
        ctx->pc = 0x1354B0u;
        goto label_1354b0;
    }
    ctx->pc = 0x1354A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x1354B0u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135488u: goto label_135488;
            case 0x13548Cu: goto label_13548c;
            case 0x135490u: goto label_135490;
            case 0x135494u: goto label_135494;
            case 0x135498u: goto label_135498;
            case 0x13549Cu: goto label_13549c;
            case 0x1354A0u: goto label_1354a0;
            case 0x1354A4u: goto label_1354a4;
            case 0x1354A8u: goto label_1354a8;
            case 0x1354ACu: goto label_1354ac;
            case 0x1354B0u: goto label_1354b0;
            case 0x1354B4u: goto label_1354b4;
            case 0x1354B8u: goto label_1354b8;
            case 0x1354BCu: goto label_1354bc;
            case 0x1354C0u: goto label_1354c0;
            case 0x1354C4u: goto label_1354c4;
            case 0x1354C8u: goto label_1354c8;
            case 0x1354CCu: goto label_1354cc;
            case 0x1354D0u: goto label_1354d0;
            case 0x1354D4u: goto label_1354d4;
            case 0x1354D8u: goto label_1354d8;
            case 0x1354DCu: goto label_1354dc;
            case 0x1354E0u: goto label_1354e0;
            case 0x1354E4u: goto label_1354e4;
            case 0x1354E8u: goto label_1354e8;
            case 0x1354ECu: goto label_1354ec;
            case 0x1354F0u: goto label_1354f0;
            case 0x1354F4u: goto label_1354f4;
            case 0x1354F8u: goto label_1354f8;
            case 0x1354FCu: goto label_1354fc;
            case 0x135500u: goto label_135500;
            case 0x135504u: goto label_135504;
            case 0x135508u: goto label_135508;
            case 0x13550Cu: goto label_13550c;
            case 0x135510u: goto label_135510;
            case 0x135514u: goto label_135514;
            case 0x135518u: goto label_135518;
            case 0x13551Cu: goto label_13551c;
            case 0x135520u: goto label_135520;
            case 0x135524u: goto label_135524;
            case 0x135528u: goto label_135528;
            case 0x13552Cu: goto label_13552c;
            case 0x135530u: goto label_135530;
            case 0x135534u: goto label_135534;
            case 0x135538u: goto label_135538;
            case 0x13553Cu: goto label_13553c;
            case 0x135540u: goto label_135540;
            case 0x135544u: goto label_135544;
            case 0x135548u: goto label_135548;
            case 0x13554Cu: goto label_13554c;
            case 0x135550u: goto label_135550;
            case 0x135554u: goto label_135554;
            case 0x135558u: goto label_135558;
            case 0x13555Cu: goto label_13555c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1354B0u; }
            if (ctx->pc != 0x1354B0u) { return; }
        }
    }
    ctx->pc = 0x1354B0u;
label_1354b0:
    // 0x1354b0: 0x220202d
    ctx->pc = 0x1354b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1354b4:
    // 0x1354b4: 0x40902d
    ctx->pc = 0x1354b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1354b8:
    // 0x1354b8: 0xc04d558
label_1354bc:
    if (ctx->pc == 0x1354BCu) {
        ctx->pc = 0x1354BCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1354C0u;
        goto label_1354c0;
    }
    ctx->pc = 0x1354B8u;
    SET_GPR_U32(ctx, 31, 0x1354C0u);
    ctx->pc = 0x1354BCu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x135560u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135560_0x135560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1354C0u; }
    }
    if (ctx->pc != 0x1354C0u) { return; }
    ctx->pc = 0x1354C0u;
label_1354c0:
    // 0x1354c0: 0x14400020
label_1354c4:
    if (ctx->pc == 0x1354C4u) {
        ctx->pc = 0x1354C4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1354C8u;
        goto label_1354c8;
    }
    ctx->pc = 0x1354C0u;
    {
        const bool branch_taken_0x1354c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1354C4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1354c0) {
            ctx->pc = 0x135544u;
            goto label_135544;
        }
    }
    ctx->pc = 0x1354C8u;
label_1354c8:
    // 0x1354c8: 0x3c040026
    ctx->pc = 0x1354c8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
label_1354cc:
    // 0x1354cc: 0x24832068
    ctx->pc = 0x1354ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 8296));
label_1354d0:
    // 0x1354d0: 0x80620004
    ctx->pc = 0x1354d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_1354d4:
    // 0x1354d4: 0x1040000b
label_1354d8:
    if (ctx->pc == 0x1354D8u) {
        ctx->pc = 0x1354D8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x1354DCu;
        goto label_1354dc;
    }
    ctx->pc = 0x1354D4u;
    {
        const bool branch_taken_0x1354d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1354D8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x1354d4) {
            ctx->pc = 0x135504u;
            goto label_135504;
        }
    }
    ctx->pc = 0x1354DCu;
label_1354dc:
    // 0x1354dc: 0x26100001
    ctx->pc = 0x1354dcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1354e0:
    // 0x1354e0: 0x2a020020
    ctx->pc = 0x1354e0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 32));
label_1354e4:
    // 0x1354e4: 0x10400007
label_1354e8:
    if (ctx->pc == 0x1354E8u) {
        ctx->pc = 0x1354E8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x1354ECu;
        goto label_1354ec;
    }
    ctx->pc = 0x1354E4u;
    {
        const bool branch_taken_0x1354e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1354E8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
        if (branch_taken_0x1354e4) {
            ctx->pc = 0x135504u;
            goto label_135504;
        }
    }
    ctx->pc = 0x1354ECu;
label_1354ec:
    // 0x1354ec: 0x80620000
    ctx->pc = 0x1354ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1354f0:
    // 0x1354f0: 0x0
    ctx->pc = 0x1354f0u;
    // NOP
label_1354f4:
    // 0x1354f4: 0x0
    ctx->pc = 0x1354f4u;
    // NOP
label_1354f8:
    // 0x1354f8: 0x0
    ctx->pc = 0x1354f8u;
    // NOP
label_1354fc:
    // 0x1354fc: 0x5440fff8
label_135500:
    if (ctx->pc == 0x135500u) {
        ctx->pc = 0x135500u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x135504u;
        goto label_135504;
    }
    ctx->pc = 0x1354FCu;
    {
        const bool branch_taken_0x1354fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1354fc) {
            ctx->pc = 0x135500u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x1354E0u;
            goto label_1354e0;
        }
    }
    ctx->pc = 0x135504u;
label_135504:
    // 0x135504: 0x24030020
    ctx->pc = 0x135504u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 32));
label_135508:
    // 0x135508: 0x1203000e
label_13550c:
    if (ctx->pc == 0x13550Cu) {
        ctx->pc = 0x13550Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x135510u;
        goto label_135510;
    }
    ctx->pc = 0x135508u;
    {
        const bool branch_taken_0x135508 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        ctx->pc = 0x13550Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x135508) {
            ctx->pc = 0x135544u;
            goto label_135544;
        }
    }
    ctx->pc = 0x135510u;
label_135510:
    // 0x135510: 0x24822068
    ctx->pc = 0x135510u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 8296));
label_135514:
    // 0x135514: 0x220202d
    ctx->pc = 0x135514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_135518:
    // 0x135518: 0x108100
    ctx->pc = 0x135518u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 4));
label_13551c:
    // 0x13551c: 0x24430004
    ctx->pc = 0x13551cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4));
label_135520:
    // 0x135520: 0x2021021
    ctx->pc = 0x135520u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_135524:
    // 0x135524: 0x2038021
    ctx->pc = 0x135524u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_135528:
    // 0x135528: 0xc042c56
label_13552c:
    if (ctx->pc == 0x13552Cu) {
        ctx->pc = 0x13552Cu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
        ctx->pc = 0x135530u;
        goto label_135530;
    }
    ctx->pc = 0x135528u;
    SET_GPR_U32(ctx, 31, 0x135530u);
    ctx->pc = 0x13552Cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135530u; }
    }
    if (ctx->pc != 0x135530u) { return; }
    ctx->pc = 0x135530u;
label_135530:
    // 0x135530: 0x200202d
    ctx->pc = 0x135530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_135534:
    // 0x135534: 0x220282d
    ctx->pc = 0x135534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_135538:
    // 0x135538: 0xc041eac
label_13553c:
    if (ctx->pc == 0x13553Cu) {
        ctx->pc = 0x13553Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x135540u;
        goto label_135540;
    }
    ctx->pc = 0x135538u;
    SET_GPR_U32(ctx, 31, 0x135540u);
    ctx->pc = 0x13553Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135540u; }
    }
    if (ctx->pc != 0x135540u) { return; }
    ctx->pc = 0x135540u;
label_135540:
    // 0x135540: 0x240102d
    ctx->pc = 0x135540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_135544:
    // 0x135544: 0xdfb00000
    ctx->pc = 0x135544u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_135548:
    // 0x135548: 0xdfb10008
    ctx->pc = 0x135548u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13554c:
    // 0x13554c: 0xdfb20010
    ctx->pc = 0x13554cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_135550:
    // 0x135550: 0xdfbf0018
    ctx->pc = 0x135550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_135554:
    // 0x135554: 0x3e00008
label_135558:
    if (ctx->pc == 0x135558u) {
        ctx->pc = 0x135558u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x13555Cu;
        goto label_13555c;
    }
    ctx->pc = 0x135554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135558u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135488u: goto label_135488;
            case 0x13548Cu: goto label_13548c;
            case 0x135490u: goto label_135490;
            case 0x135494u: goto label_135494;
            case 0x135498u: goto label_135498;
            case 0x13549Cu: goto label_13549c;
            case 0x1354A0u: goto label_1354a0;
            case 0x1354A4u: goto label_1354a4;
            case 0x1354A8u: goto label_1354a8;
            case 0x1354ACu: goto label_1354ac;
            case 0x1354B0u: goto label_1354b0;
            case 0x1354B4u: goto label_1354b4;
            case 0x1354B8u: goto label_1354b8;
            case 0x1354BCu: goto label_1354bc;
            case 0x1354C0u: goto label_1354c0;
            case 0x1354C4u: goto label_1354c4;
            case 0x1354C8u: goto label_1354c8;
            case 0x1354CCu: goto label_1354cc;
            case 0x1354D0u: goto label_1354d0;
            case 0x1354D4u: goto label_1354d4;
            case 0x1354D8u: goto label_1354d8;
            case 0x1354DCu: goto label_1354dc;
            case 0x1354E0u: goto label_1354e0;
            case 0x1354E4u: goto label_1354e4;
            case 0x1354E8u: goto label_1354e8;
            case 0x1354ECu: goto label_1354ec;
            case 0x1354F0u: goto label_1354f0;
            case 0x1354F4u: goto label_1354f4;
            case 0x1354F8u: goto label_1354f8;
            case 0x1354FCu: goto label_1354fc;
            case 0x135500u: goto label_135500;
            case 0x135504u: goto label_135504;
            case 0x135508u: goto label_135508;
            case 0x13550Cu: goto label_13550c;
            case 0x135510u: goto label_135510;
            case 0x135514u: goto label_135514;
            case 0x135518u: goto label_135518;
            case 0x13551Cu: goto label_13551c;
            case 0x135520u: goto label_135520;
            case 0x135524u: goto label_135524;
            case 0x135528u: goto label_135528;
            case 0x13552Cu: goto label_13552c;
            case 0x135530u: goto label_135530;
            case 0x135534u: goto label_135534;
            case 0x135538u: goto label_135538;
            case 0x13553Cu: goto label_13553c;
            case 0x135540u: goto label_135540;
            case 0x135544u: goto label_135544;
            case 0x135548u: goto label_135548;
            case 0x13554Cu: goto label_13554c;
            case 0x135550u: goto label_135550;
            case 0x135554u: goto label_135554;
            case 0x135558u: goto label_135558;
            case 0x13555Cu: goto label_13555c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13555Cu;
label_13555c:
    // 0x13555c: 0x0
    ctx->pc = 0x13555cu;
    // NOP
}
