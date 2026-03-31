#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_124480
// Address: 0x124480 - 0x124518
void entry_124480_0x124518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x124480u;

label_124480:
    // 0x124480: 0x27bdfff0
    ctx->pc = 0x124480u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_124484:
    // 0x124484: 0x24020002
    ctx->pc = 0x124484u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_124488:
    // 0x124488: 0xffbf0000
    ctx->pc = 0x124488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_12448c:
    // 0x12448c: 0x8483009a
    ctx->pc = 0x12448cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 154)));
label_124490:
    // 0x124490: 0x14620005
label_124494:
    if (ctx->pc == 0x124494u) {
        ctx->pc = 0x124494u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x124498u;
        goto label_124498;
    }
    ctx->pc = 0x124490u;
    {
        const bool branch_taken_0x124490 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x124494u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x124490) {
            ctx->pc = 0x1244A8u;
            goto label_1244a8;
        }
    }
    ctx->pc = 0x124498u;
label_124498:
    // 0x124498: 0xdfbf0000
    ctx->pc = 0x124498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12449c:
    // 0x12449c: 0x80490b6
label_1244a0:
    if (ctx->pc == 0x1244A0u) {
        ctx->pc = 0x1244A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1244A4u;
        goto label_1244a4;
    }
    ctx->pc = 0x12449Cu;
    ctx->pc = 0x1244A0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1242D8u;
    entry_1242d8_0x124480(rdram, ctx, runtime); return;
    ctx->pc = 0x1244A4u;
label_1244a4:
    // 0x1244a4: 0x0
    ctx->pc = 0x1244a4u;
    // NOP
label_1244a8:
    // 0x1244a8: 0x14620003
label_1244ac:
    if (ctx->pc == 0x1244ACu) {
        ctx->pc = 0x1244ACu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1244B0u;
        goto label_1244b0;
    }
    ctx->pc = 0x1244A8u;
    {
        const bool branch_taken_0x1244a8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1244ACu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1244a8) {
            ctx->pc = 0x1244B8u;
            goto label_1244b8;
        }
    }
    ctx->pc = 0x1244B0u;
label_1244b0:
    // 0x1244b0: 0x8049056
label_1244b4:
    if (ctx->pc == 0x1244B4u) {
        ctx->pc = 0x1244B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1244B8u;
        goto label_1244b8;
    }
    ctx->pc = 0x1244B0u;
    ctx->pc = 0x1244B4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x124158u;
    entry_124158_0x1242d8(rdram, ctx, runtime); return;
    ctx->pc = 0x1244B8u;
label_1244b8:
    // 0x1244b8: 0x8048ff0
label_1244bc:
    if (ctx->pc == 0x1244BCu) {
        ctx->pc = 0x1244BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1244C0u;
        goto label_1244c0;
    }
    ctx->pc = 0x1244B8u;
    ctx->pc = 0x1244BCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x123FC0u;
    entry_123fc0_0x124158(rdram, ctx, runtime); return;
    ctx->pc = 0x1244C0u;
label_1244c0:
    // 0x1244c0: 0x3e00008
label_1244c4:
    if (ctx->pc == 0x1244C4u) {
        ctx->pc = 0x1244C4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1244C8u;
        goto label_1244c8;
    }
    ctx->pc = 0x1244C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1244C4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124480u: goto label_124480;
            case 0x124484u: goto label_124484;
            case 0x124488u: goto label_124488;
            case 0x12448Cu: goto label_12448c;
            case 0x124490u: goto label_124490;
            case 0x124494u: goto label_124494;
            case 0x124498u: goto label_124498;
            case 0x12449Cu: goto label_12449c;
            case 0x1244A0u: goto label_1244a0;
            case 0x1244A4u: goto label_1244a4;
            case 0x1244A8u: goto label_1244a8;
            case 0x1244ACu: goto label_1244ac;
            case 0x1244B0u: goto label_1244b0;
            case 0x1244B4u: goto label_1244b4;
            case 0x1244B8u: goto label_1244b8;
            case 0x1244BCu: goto label_1244bc;
            case 0x1244C0u: goto label_1244c0;
            case 0x1244C4u: goto label_1244c4;
            case 0x1244C8u: goto label_1244c8;
            case 0x1244CCu: goto label_1244cc;
            case 0x1244D0u: goto label_1244d0;
            case 0x1244D4u: goto label_1244d4;
            case 0x1244D8u: goto label_1244d8;
            case 0x1244DCu: goto label_1244dc;
            case 0x1244E0u: goto label_1244e0;
            case 0x1244E4u: goto label_1244e4;
            case 0x1244E8u: goto label_1244e8;
            case 0x1244ECu: goto label_1244ec;
            case 0x1244F0u: goto label_1244f0;
            case 0x1244F4u: goto label_1244f4;
            case 0x1244F8u: goto label_1244f8;
            case 0x1244FCu: goto label_1244fc;
            case 0x124500u: goto label_124500;
            case 0x124504u: goto label_124504;
            case 0x124508u: goto label_124508;
            case 0x12450Cu: goto label_12450c;
            case 0x124510u: goto label_124510;
            case 0x124514u: goto label_124514;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1244C8u;
label_1244c8:
    // 0x1244c8: 0x3c020021
    ctx->pc = 0x1244c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
label_1244cc:
    // 0x1244cc: 0x3c030021
    ctx->pc = 0x1244ccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
label_1244d0:
    // 0x1244d0: 0xac44b940
    ctx->pc = 0x1244d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294949184), GPR_U32(ctx, 4));
label_1244d4:
    // 0x1244d4: 0x102d
    ctx->pc = 0x1244d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1244d8:
    // 0x1244d8: 0x3e00008
label_1244dc:
    if (ctx->pc == 0x1244DCu) {
        ctx->pc = 0x1244DCu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294949188), GPR_U32(ctx, 5));
        ctx->pc = 0x1244E0u;
        goto label_1244e0;
    }
    ctx->pc = 0x1244D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1244DCu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294949188), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124480u: goto label_124480;
            case 0x124484u: goto label_124484;
            case 0x124488u: goto label_124488;
            case 0x12448Cu: goto label_12448c;
            case 0x124490u: goto label_124490;
            case 0x124494u: goto label_124494;
            case 0x124498u: goto label_124498;
            case 0x12449Cu: goto label_12449c;
            case 0x1244A0u: goto label_1244a0;
            case 0x1244A4u: goto label_1244a4;
            case 0x1244A8u: goto label_1244a8;
            case 0x1244ACu: goto label_1244ac;
            case 0x1244B0u: goto label_1244b0;
            case 0x1244B4u: goto label_1244b4;
            case 0x1244B8u: goto label_1244b8;
            case 0x1244BCu: goto label_1244bc;
            case 0x1244C0u: goto label_1244c0;
            case 0x1244C4u: goto label_1244c4;
            case 0x1244C8u: goto label_1244c8;
            case 0x1244CCu: goto label_1244cc;
            case 0x1244D0u: goto label_1244d0;
            case 0x1244D4u: goto label_1244d4;
            case 0x1244D8u: goto label_1244d8;
            case 0x1244DCu: goto label_1244dc;
            case 0x1244E0u: goto label_1244e0;
            case 0x1244E4u: goto label_1244e4;
            case 0x1244E8u: goto label_1244e8;
            case 0x1244ECu: goto label_1244ec;
            case 0x1244F0u: goto label_1244f0;
            case 0x1244F4u: goto label_1244f4;
            case 0x1244F8u: goto label_1244f8;
            case 0x1244FCu: goto label_1244fc;
            case 0x124500u: goto label_124500;
            case 0x124504u: goto label_124504;
            case 0x124508u: goto label_124508;
            case 0x12450Cu: goto label_12450c;
            case 0x124510u: goto label_124510;
            case 0x124514u: goto label_124514;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1244E0u;
label_1244e0:
    // 0x1244e0: 0x3c020021
    ctx->pc = 0x1244e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
label_1244e4:
    // 0x1244e4: 0x27bdfff0
    ctx->pc = 0x1244e4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1244e8:
    // 0x1244e8: 0x8c43b940
    ctx->pc = 0x1244e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294949184)));
label_1244ec:
    // 0x1244ec: 0x80282d
    ctx->pc = 0x1244ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1244f0:
    // 0x1244f0: 0x10600004
label_1244f4:
    if (ctx->pc == 0x1244F4u) {
        ctx->pc = 0x1244F4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1244F8u;
        goto label_1244f8;
    }
    ctx->pc = 0x1244F0u;
    {
        const bool branch_taken_0x1244f0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1244F4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x1244f0) {
            ctx->pc = 0x124504u;
            goto label_124504;
        }
    }
    ctx->pc = 0x1244F8u;
label_1244f8:
    // 0x1244f8: 0x3c020021
    ctx->pc = 0x1244f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
label_1244fc:
    // 0x1244fc: 0x60f809
label_124500:
    if (ctx->pc == 0x124500u) {
        ctx->pc = 0x124500u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294949188)));
        ctx->pc = 0x124504u;
        goto label_124504;
    }
    ctx->pc = 0x1244FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x124504u);
        ctx->pc = 0x124500u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294949188)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124480u: goto label_124480;
            case 0x124484u: goto label_124484;
            case 0x124488u: goto label_124488;
            case 0x12448Cu: goto label_12448c;
            case 0x124490u: goto label_124490;
            case 0x124494u: goto label_124494;
            case 0x124498u: goto label_124498;
            case 0x12449Cu: goto label_12449c;
            case 0x1244A0u: goto label_1244a0;
            case 0x1244A4u: goto label_1244a4;
            case 0x1244A8u: goto label_1244a8;
            case 0x1244ACu: goto label_1244ac;
            case 0x1244B0u: goto label_1244b0;
            case 0x1244B4u: goto label_1244b4;
            case 0x1244B8u: goto label_1244b8;
            case 0x1244BCu: goto label_1244bc;
            case 0x1244C0u: goto label_1244c0;
            case 0x1244C4u: goto label_1244c4;
            case 0x1244C8u: goto label_1244c8;
            case 0x1244CCu: goto label_1244cc;
            case 0x1244D0u: goto label_1244d0;
            case 0x1244D4u: goto label_1244d4;
            case 0x1244D8u: goto label_1244d8;
            case 0x1244DCu: goto label_1244dc;
            case 0x1244E0u: goto label_1244e0;
            case 0x1244E4u: goto label_1244e4;
            case 0x1244E8u: goto label_1244e8;
            case 0x1244ECu: goto label_1244ec;
            case 0x1244F0u: goto label_1244f0;
            case 0x1244F4u: goto label_1244f4;
            case 0x1244F8u: goto label_1244f8;
            case 0x1244FCu: goto label_1244fc;
            case 0x124500u: goto label_124500;
            case 0x124504u: goto label_124504;
            case 0x124508u: goto label_124508;
            case 0x12450Cu: goto label_12450c;
            case 0x124510u: goto label_124510;
            case 0x124514u: goto label_124514;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x124504u; }
            if (ctx->pc != 0x124504u) { return; }
        }
    }
    ctx->pc = 0x124504u;
label_124504:
    // 0x124504: 0xdfbf0000
    ctx->pc = 0x124504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_124508:
    // 0x124508: 0x102d
    ctx->pc = 0x124508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12450c:
    // 0x12450c: 0x3e00008
label_124510:
    if (ctx->pc == 0x124510u) {
        ctx->pc = 0x124510u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x124514u;
        goto label_124514;
    }
    ctx->pc = 0x12450Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124510u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124480u: goto label_124480;
            case 0x124484u: goto label_124484;
            case 0x124488u: goto label_124488;
            case 0x12448Cu: goto label_12448c;
            case 0x124490u: goto label_124490;
            case 0x124494u: goto label_124494;
            case 0x124498u: goto label_124498;
            case 0x12449Cu: goto label_12449c;
            case 0x1244A0u: goto label_1244a0;
            case 0x1244A4u: goto label_1244a4;
            case 0x1244A8u: goto label_1244a8;
            case 0x1244ACu: goto label_1244ac;
            case 0x1244B0u: goto label_1244b0;
            case 0x1244B4u: goto label_1244b4;
            case 0x1244B8u: goto label_1244b8;
            case 0x1244BCu: goto label_1244bc;
            case 0x1244C0u: goto label_1244c0;
            case 0x1244C4u: goto label_1244c4;
            case 0x1244C8u: goto label_1244c8;
            case 0x1244CCu: goto label_1244cc;
            case 0x1244D0u: goto label_1244d0;
            case 0x1244D4u: goto label_1244d4;
            case 0x1244D8u: goto label_1244d8;
            case 0x1244DCu: goto label_1244dc;
            case 0x1244E0u: goto label_1244e0;
            case 0x1244E4u: goto label_1244e4;
            case 0x1244E8u: goto label_1244e8;
            case 0x1244ECu: goto label_1244ec;
            case 0x1244F0u: goto label_1244f0;
            case 0x1244F4u: goto label_1244f4;
            case 0x1244F8u: goto label_1244f8;
            case 0x1244FCu: goto label_1244fc;
            case 0x124500u: goto label_124500;
            case 0x124504u: goto label_124504;
            case 0x124508u: goto label_124508;
            case 0x12450Cu: goto label_12450c;
            case 0x124510u: goto label_124510;
            case 0x124514u: goto label_124514;
            default: break;
        }
        return;
    }
    ctx->pc = 0x124514u;
label_124514:
    // 0x124514: 0x0
    ctx->pc = 0x124514u;
    // NOP
}
