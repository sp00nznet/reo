#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013D4F8
// Address: 0x13d4f8 - 0x13d588
void sub_0013D4F8_0x13d4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13d4f8u;

label_13d4f8:
    // 0x13d4f8: 0x27bdff90
    ctx->pc = 0x13d4f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
label_13d4fc:
    // 0x13d4fc: 0xffb00000
    ctx->pc = 0x13d4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13d500:
    // 0x13d500: 0x3c100022
    ctx->pc = 0x13d500u;
    SET_GPR_U32(ctx, 16, ((uint32_t)34 << 16));
label_13d504:
    // 0x13d504: 0x2610dff0
    ctx->pc = 0x13d504u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294959088));
label_13d508:
    // 0x13d508: 0xffa50038
    ctx->pc = 0x13d508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 5));
label_13d50c:
    // 0x13d50c: 0xffa60040
    ctx->pc = 0x13d50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 6));
label_13d510:
    // 0x13d510: 0x27a60038
    ctx->pc = 0x13d510u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 56));
label_13d514:
    // 0x13d514: 0x80282d
    ctx->pc = 0x13d514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13d518:
    // 0x13d518: 0x200202d
    ctx->pc = 0x13d518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13d51c:
    // 0x13d51c: 0xffbf0008
    ctx->pc = 0x13d51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_13d520:
    // 0x13d520: 0xffa70048
    ctx->pc = 0x13d520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 7));
label_13d524:
    // 0x13d524: 0xffa80050
    ctx->pc = 0x13d524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 8));
label_13d528:
    // 0x13d528: 0xffa90058
    ctx->pc = 0x13d528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 9));
label_13d52c:
    // 0x13d52c: 0xffaa0060
    ctx->pc = 0x13d52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 10));
label_13d530:
    // 0x13d530: 0xffab0068
    ctx->pc = 0x13d530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 11));
label_13d534:
    // 0x13d534: 0xe7ac0018
    ctx->pc = 0x13d534u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_13d538:
    // 0x13d538: 0xe7ad001c
    ctx->pc = 0x13d538u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_13d53c:
    // 0x13d53c: 0xe7ae0020
    ctx->pc = 0x13d53cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_13d540:
    // 0x13d540: 0xe7af0024
    ctx->pc = 0x13d540u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_13d544:
    // 0x13d544: 0xe7b00028
    ctx->pc = 0x13d544u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_13d548:
    // 0x13d548: 0xe7b1002c
    ctx->pc = 0x13d548u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_13d54c:
    // 0x13d54c: 0xe7b20030
    ctx->pc = 0x13d54cu;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_13d550:
    // 0x13d550: 0xc043e20
label_13d554:
    if (ctx->pc == 0x13D554u) {
        ctx->pc = 0x13D554u;
        { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->pc = 0x13D558u;
        goto label_13d558;
    }
    ctx->pc = 0x13D550u;
    SET_GPR_U32(ctx, 31, 0x13D558u);
    ctx->pc = 0x13D554u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->pc = 0x10F880u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F880_0x10f880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D558u; }
    }
    if (ctx->pc != 0x13D558u) { return; }
    ctx->pc = 0x13D558u;
label_13d558:
    // 0x13d558: 0x3c030022
    ctx->pc = 0x13d558u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
label_13d55c:
    // 0x13d55c: 0x8c63dfe8
    ctx->pc = 0x13d55cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294959080)));
label_13d560:
    // 0x13d560: 0x10600004
label_13d564:
    if (ctx->pc == 0x13D564u) {
        ctx->pc = 0x13D564u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13D568u;
        goto label_13d568;
    }
    ctx->pc = 0x13D560u;
    {
        const bool branch_taken_0x13d560 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x13D564u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13d560) {
            ctx->pc = 0x13D574u;
            goto label_13d574;
        }
    }
    ctx->pc = 0x13D568u;
label_13d568:
    // 0x13d568: 0x3c020022
    ctx->pc = 0x13d568u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
label_13d56c:
    // 0x13d56c: 0x60f809
label_13d570:
    if (ctx->pc == 0x13D570u) {
        ctx->pc = 0x13D570u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294959084)));
        ctx->pc = 0x13D574u;
        goto label_13d574;
    }
    ctx->pc = 0x13D56Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13D574u);
        ctx->pc = 0x13D570u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294959084)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13D4F8u: goto label_13d4f8;
            case 0x13D4FCu: goto label_13d4fc;
            case 0x13D500u: goto label_13d500;
            case 0x13D504u: goto label_13d504;
            case 0x13D508u: goto label_13d508;
            case 0x13D50Cu: goto label_13d50c;
            case 0x13D510u: goto label_13d510;
            case 0x13D514u: goto label_13d514;
            case 0x13D518u: goto label_13d518;
            case 0x13D51Cu: goto label_13d51c;
            case 0x13D520u: goto label_13d520;
            case 0x13D524u: goto label_13d524;
            case 0x13D528u: goto label_13d528;
            case 0x13D52Cu: goto label_13d52c;
            case 0x13D530u: goto label_13d530;
            case 0x13D534u: goto label_13d534;
            case 0x13D538u: goto label_13d538;
            case 0x13D53Cu: goto label_13d53c;
            case 0x13D540u: goto label_13d540;
            case 0x13D544u: goto label_13d544;
            case 0x13D548u: goto label_13d548;
            case 0x13D54Cu: goto label_13d54c;
            case 0x13D550u: goto label_13d550;
            case 0x13D554u: goto label_13d554;
            case 0x13D558u: goto label_13d558;
            case 0x13D55Cu: goto label_13d55c;
            case 0x13D560u: goto label_13d560;
            case 0x13D564u: goto label_13d564;
            case 0x13D568u: goto label_13d568;
            case 0x13D56Cu: goto label_13d56c;
            case 0x13D570u: goto label_13d570;
            case 0x13D574u: goto label_13d574;
            case 0x13D578u: goto label_13d578;
            case 0x13D57Cu: goto label_13d57c;
            case 0x13D580u: goto label_13d580;
            case 0x13D584u: goto label_13d584;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13D574u; }
            if (ctx->pc != 0x13D574u) { return; }
        }
    }
    ctx->pc = 0x13D574u;
label_13d574:
    // 0x13d574: 0xdfb00000
    ctx->pc = 0x13d574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13d578:
    // 0x13d578: 0xdfbf0008
    ctx->pc = 0x13d578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13d57c:
    // 0x13d57c: 0x3e00008
label_13d580:
    if (ctx->pc == 0x13D580u) {
        ctx->pc = 0x13D580u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x13D584u;
        goto label_13d584;
    }
    ctx->pc = 0x13D57Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D580u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13D4F8u: goto label_13d4f8;
            case 0x13D4FCu: goto label_13d4fc;
            case 0x13D500u: goto label_13d500;
            case 0x13D504u: goto label_13d504;
            case 0x13D508u: goto label_13d508;
            case 0x13D50Cu: goto label_13d50c;
            case 0x13D510u: goto label_13d510;
            case 0x13D514u: goto label_13d514;
            case 0x13D518u: goto label_13d518;
            case 0x13D51Cu: goto label_13d51c;
            case 0x13D520u: goto label_13d520;
            case 0x13D524u: goto label_13d524;
            case 0x13D528u: goto label_13d528;
            case 0x13D52Cu: goto label_13d52c;
            case 0x13D530u: goto label_13d530;
            case 0x13D534u: goto label_13d534;
            case 0x13D538u: goto label_13d538;
            case 0x13D53Cu: goto label_13d53c;
            case 0x13D540u: goto label_13d540;
            case 0x13D544u: goto label_13d544;
            case 0x13D548u: goto label_13d548;
            case 0x13D54Cu: goto label_13d54c;
            case 0x13D550u: goto label_13d550;
            case 0x13D554u: goto label_13d554;
            case 0x13D558u: goto label_13d558;
            case 0x13D55Cu: goto label_13d55c;
            case 0x13D560u: goto label_13d560;
            case 0x13D564u: goto label_13d564;
            case 0x13D568u: goto label_13d568;
            case 0x13D56Cu: goto label_13d56c;
            case 0x13D570u: goto label_13d570;
            case 0x13D574u: goto label_13d574;
            case 0x13D578u: goto label_13d578;
            case 0x13D57Cu: goto label_13d57c;
            case 0x13D580u: goto label_13d580;
            case 0x13D584u: goto label_13d584;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13D584u;
label_13d584:
    // 0x13d584: 0x0
    ctx->pc = 0x13d584u;
    // NOP
}
