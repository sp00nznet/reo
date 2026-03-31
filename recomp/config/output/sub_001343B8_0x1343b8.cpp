#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001343B8
// Address: 0x1343b8 - 0x134530
void sub_001343B8_0x1343b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1343b8u;

label_1343b8:
    // 0x1343b8: 0x27bdffc0
    ctx->pc = 0x1343b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_1343bc:
    // 0x1343bc: 0xffb00010
    ctx->pc = 0x1343bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1343c0:
    // 0x1343c0: 0xffb10018
    ctx->pc = 0x1343c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1343c4:
    // 0x1343c4: 0x80882d
    ctx->pc = 0x1343c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1343c8:
    // 0x1343c8: 0xffb30028
    ctx->pc = 0x1343c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1343cc:
    // 0x1343cc: 0xffb20020
    ctx->pc = 0x1343ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1343d0:
    // 0x1343d0: 0xffb40030
    ctx->pc = 0x1343d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1343d4:
    // 0x1343d4: 0xffbf0038
    ctx->pc = 0x1343d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_1343d8:
    // 0x1343d8: 0x8e32000c
    ctx->pc = 0x1343d8u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1343dc:
    // 0x1343dc: 0x8e340004
    ctx->pc = 0x1343dcu;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1343e0:
    // 0x1343e0: 0xc04b1cc
label_1343e4:
    if (ctx->pc == 0x1343E4u) {
        ctx->pc = 0x1343E4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1343E8u;
        goto label_1343e8;
    }
    ctx->pc = 0x1343E0u;
    SET_GPR_U32(ctx, 31, 0x1343E8u);
    ctx->pc = 0x1343E4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12C730u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C730_0x12c730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1343E8u; }
    }
    if (ctx->pc != 0x1343E8u) { return; }
    ctx->pc = 0x1343E8u;
label_1343e8:
    // 0x1343e8: 0x240202d
    ctx->pc = 0x1343e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1343ec:
    // 0x1343ec: 0xc04b1d2
label_1343f0:
    if (ctx->pc == 0x1343F0u) {
        ctx->pc = 0x1343F0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1343F4u;
        goto label_1343f4;
    }
    ctx->pc = 0x1343ECu;
    SET_GPR_U32(ctx, 31, 0x1343F4u);
    ctx->pc = 0x1343F0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12C748u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C748_0x12c748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1343F4u; }
    }
    if (ctx->pc != 0x1343F4u) { return; }
    ctx->pc = 0x1343F4u;
label_1343f4:
    // 0x1343f4: 0x40982d
    ctx->pc = 0x1343f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1343f8:
    // 0x1343f8: 0x8e220048
    ctx->pc = 0x1343f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_1343fc:
    // 0x1343fc: 0x21040
    ctx->pc = 0x1343fcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_134400:
    // 0x134400: 0x202802a
    ctx->pc = 0x134400u;
    SET_GPR_U32(ctx, 16, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
label_134404:
    // 0x134404: 0x5200000c
label_134408:
    if (ctx->pc == 0x134408u) {
        ctx->pc = 0x134408u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->pc = 0x13440Cu;
        goto label_13440c;
    }
    ctx->pc = 0x134404u;
    {
        const bool branch_taken_0x134404 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x134404) {
            ctx->pc = 0x134408u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
            ctx->pc = 0x134438u;
            goto label_134438;
        }
    }
    ctx->pc = 0x13440Cu;
label_13440c:
    // 0x13440c: 0xc04b5f6
label_134410:
    if (ctx->pc == 0x134410u) {
        ctx->pc = 0x134410u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x134414u;
        goto label_134414;
    }
    ctx->pc = 0x13440Cu;
    SET_GPR_U32(ctx, 31, 0x134414u);
    ctx->pc = 0x134410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D7D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D7D8_0x12d7d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134414u; }
    }
    if (ctx->pc != 0x134414u) { return; }
    ctx->pc = 0x134414u;
label_134414:
    // 0x134414: 0x53102a
    ctx->pc = 0x134414u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 19)));
label_134418:
    // 0x134418: 0x50400007
label_13441c:
    if (ctx->pc == 0x13441Cu) {
        ctx->pc = 0x13441Cu;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->pc = 0x134420u;
        goto label_134420;
    }
    ctx->pc = 0x134418u;
    {
        const bool branch_taken_0x134418 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x134418) {
            ctx->pc = 0x13441Cu;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
            ctx->pc = 0x134438u;
            goto label_134438;
        }
    }
    ctx->pc = 0x134420u;
label_134420:
    // 0x134420: 0xc04b2ee
label_134424:
    if (ctx->pc == 0x134424u) {
        ctx->pc = 0x134424u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x134428u;
        goto label_134428;
    }
    ctx->pc = 0x134420u;
    SET_GPR_U32(ctx, 31, 0x134428u);
    ctx->pc = 0x134424u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x12CBB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012CBB8_0x12cbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134428u; }
    }
    if (ctx->pc != 0x134428u) { return; }
    ctx->pc = 0x134428u;
label_134428:
    // 0x134428: 0x24030003
    ctx->pc = 0x134428u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_13442c:
    // 0x13442c: 0x14430013
label_134430:
    if (ctx->pc == 0x134430u) {
        ctx->pc = 0x134434u;
        goto label_134434;
    }
    ctx->pc = 0x13442Cu;
    {
        const bool branch_taken_0x13442c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x13442c) {
            ctx->pc = 0x13447Cu;
            goto label_13447c;
        }
    }
    ctx->pc = 0x134434u;
label_134434:
    // 0x134434: 0x82220070
    ctx->pc = 0x134434u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
label_134438:
    // 0x134438: 0x1440000f
label_13443c:
    if (ctx->pc == 0x13443Cu) {
        ctx->pc = 0x13443Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x134440u;
        goto label_134440;
    }
    ctx->pc = 0x134438u;
    {
        const bool branch_taken_0x134438 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13443Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x134438) {
            ctx->pc = 0x134478u;
            goto label_134478;
        }
    }
    ctx->pc = 0x134440u;
label_134440:
    // 0x134440: 0x82220072
    ctx->pc = 0x134440u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 114)));
label_134444:
    // 0x134444: 0x5440000a
label_134448:
    if (ctx->pc == 0x134448u) {
        ctx->pc = 0x134448u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x13444Cu;
        goto label_13444c;
    }
    ctx->pc = 0x134444u;
    {
        const bool branch_taken_0x134444 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x134444) {
            ctx->pc = 0x134448u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
            ctx->pc = 0x134470u;
            goto label_134470;
        }
    }
    ctx->pc = 0x13444Cu;
label_13444c:
    // 0x13444c: 0x240202d
    ctx->pc = 0x13444cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_134450:
    // 0x134450: 0xc04b1c0
label_134454:
    if (ctx->pc == 0x134454u) {
        ctx->pc = 0x134454u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x134458u;
        goto label_134458;
    }
    ctx->pc = 0x134450u;
    SET_GPR_U32(ctx, 31, 0x134458u);
    ctx->pc = 0x134454u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x12C700u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C700_0x12c700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134458u; }
    }
    if (ctx->pc != 0x134458u) { return; }
    ctx->pc = 0x134458u;
label_134458:
    // 0x134458: 0xae20009c
    ctx->pc = 0x134458u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_13445c:
    // 0x13445c: 0x3c020021
    ctx->pc = 0x13445cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
label_134460:
    // 0x134460: 0x2442f3c4
    ctx->pc = 0x134460u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294964164));
label_134464:
    // 0x134464: 0x8c430000
    ctx->pc = 0x134464u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_134468:
    // 0x134468: 0xae2300a0
    ctx->pc = 0x134468u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 3));
label_13446c:
    // 0x13446c: 0x24020003
    ctx->pc = 0x13446cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_134470:
    // 0x134470: 0xa2220001
    ctx->pc = 0x134470u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_134474:
    // 0x134474: 0x24020001
    ctx->pc = 0x134474u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_134478:
    // 0x134478: 0xa2220071
    ctx->pc = 0x134478u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 113), (uint8_t)GPR_U32(ctx, 2));
label_13447c:
    // 0x13447c: 0xc04b2ee
label_134480:
    if (ctx->pc == 0x134480u) {
        ctx->pc = 0x134480u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x134484u;
        goto label_134484;
    }
    ctx->pc = 0x13447Cu;
    SET_GPR_U32(ctx, 31, 0x134484u);
    ctx->pc = 0x134480u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x12CBB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012CBB8_0x12cbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134484u; }
    }
    if (ctx->pc != 0x134484u) { return; }
    ctx->pc = 0x134484u;
label_134484:
    // 0x134484: 0x24030003
    ctx->pc = 0x134484u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_134488:
    // 0x134488: 0x14430021
label_13448c:
    if (ctx->pc == 0x13448Cu) {
        ctx->pc = 0x13448Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x134490u;
        goto label_134490;
    }
    ctx->pc = 0x134488u;
    {
        const bool branch_taken_0x134488 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x13448Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x134488) {
            ctx->pc = 0x134510u;
            goto label_134510;
        }
    }
    ctx->pc = 0x134490u;
label_134490:
    // 0x134490: 0xc04c952
label_134494:
    if (ctx->pc == 0x134494u) {
        ctx->pc = 0x134494u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x134498u;
        goto label_134498;
    }
    ctx->pc = 0x134490u;
    SET_GPR_U32(ctx, 31, 0x134498u);
    ctx->pc = 0x134494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x132548u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00132548_0x132548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134498u; }
    }
    if (ctx->pc != 0x134498u) { return; }
    ctx->pc = 0x134498u;
label_134498:
    // 0x134498: 0x40182d
    ctx->pc = 0x134498u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13449c:
    // 0x13449c: 0x8e220048
    ctx->pc = 0x13449cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_1344a0:
    // 0x1344a0: 0x431018
    ctx->pc = 0x1344a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_1344a4:
    // 0x1344a4: 0x18600019
label_1344a8:
    if (ctx->pc == 0x1344A8u) {
        ctx->pc = 0x1344A8u;
        SET_GPR_U32(ctx, 19, SLL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x1344ACu;
        goto label_1344ac;
    }
    ctx->pc = 0x1344A4u;
    {
        const bool branch_taken_0x1344a4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1344A8u;
        SET_GPR_U32(ctx, 19, SLL32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x1344a4) {
            ctx->pc = 0x13450Cu;
            goto label_13450c;
        }
    }
    ctx->pc = 0x1344ACu;
label_1344ac:
    // 0x1344ac: 0x26320018
    ctx->pc = 0x1344acu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 24));
label_1344b0:
    // 0x1344b0: 0x60882d
    ctx->pc = 0x1344b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1344b4:
    // 0x1344b4: 0x8e500000
    ctx->pc = 0x1344b4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1344b8:
    // 0x1344b8: 0x26520004
    ctx->pc = 0x1344b8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
label_1344bc:
    // 0x1344bc: 0x3a0382d
    ctx->pc = 0x1344bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1344c0:
    // 0x1344c0: 0x282d
    ctx->pc = 0x1344c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1344c4:
    // 0x1344c4: 0x8e030000
    ctx->pc = 0x1344c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1344c8:
    // 0x1344c8: 0x200202d
    ctx->pc = 0x1344c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1344cc:
    // 0x1344cc: 0x260302d
    ctx->pc = 0x1344ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1344d0:
    // 0x1344d0: 0x8c620018
    ctx->pc = 0x1344d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1344d4:
    // 0x1344d4: 0x40f809
label_1344d8:
    if (ctx->pc == 0x1344D8u) {
        ctx->pc = 0x1344D8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x1344DCu;
        goto label_1344dc;
    }
    ctx->pc = 0x1344D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1344DCu);
        ctx->pc = 0x1344D8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1343B8u: goto label_1343b8;
            case 0x1343BCu: goto label_1343bc;
            case 0x1343C0u: goto label_1343c0;
            case 0x1343C4u: goto label_1343c4;
            case 0x1343C8u: goto label_1343c8;
            case 0x1343CCu: goto label_1343cc;
            case 0x1343D0u: goto label_1343d0;
            case 0x1343D4u: goto label_1343d4;
            case 0x1343D8u: goto label_1343d8;
            case 0x1343DCu: goto label_1343dc;
            case 0x1343E0u: goto label_1343e0;
            case 0x1343E4u: goto label_1343e4;
            case 0x1343E8u: goto label_1343e8;
            case 0x1343ECu: goto label_1343ec;
            case 0x1343F0u: goto label_1343f0;
            case 0x1343F4u: goto label_1343f4;
            case 0x1343F8u: goto label_1343f8;
            case 0x1343FCu: goto label_1343fc;
            case 0x134400u: goto label_134400;
            case 0x134404u: goto label_134404;
            case 0x134408u: goto label_134408;
            case 0x13440Cu: goto label_13440c;
            case 0x134410u: goto label_134410;
            case 0x134414u: goto label_134414;
            case 0x134418u: goto label_134418;
            case 0x13441Cu: goto label_13441c;
            case 0x134420u: goto label_134420;
            case 0x134424u: goto label_134424;
            case 0x134428u: goto label_134428;
            case 0x13442Cu: goto label_13442c;
            case 0x134430u: goto label_134430;
            case 0x134434u: goto label_134434;
            case 0x134438u: goto label_134438;
            case 0x13443Cu: goto label_13443c;
            case 0x134440u: goto label_134440;
            case 0x134444u: goto label_134444;
            case 0x134448u: goto label_134448;
            case 0x13444Cu: goto label_13444c;
            case 0x134450u: goto label_134450;
            case 0x134454u: goto label_134454;
            case 0x134458u: goto label_134458;
            case 0x13445Cu: goto label_13445c;
            case 0x134460u: goto label_134460;
            case 0x134464u: goto label_134464;
            case 0x134468u: goto label_134468;
            case 0x13446Cu: goto label_13446c;
            case 0x134470u: goto label_134470;
            case 0x134474u: goto label_134474;
            case 0x134478u: goto label_134478;
            case 0x13447Cu: goto label_13447c;
            case 0x134480u: goto label_134480;
            case 0x134484u: goto label_134484;
            case 0x134488u: goto label_134488;
            case 0x13448Cu: goto label_13448c;
            case 0x134490u: goto label_134490;
            case 0x134494u: goto label_134494;
            case 0x134498u: goto label_134498;
            case 0x13449Cu: goto label_13449c;
            case 0x1344A0u: goto label_1344a0;
            case 0x1344A4u: goto label_1344a4;
            case 0x1344A8u: goto label_1344a8;
            case 0x1344ACu: goto label_1344ac;
            case 0x1344B0u: goto label_1344b0;
            case 0x1344B4u: goto label_1344b4;
            case 0x1344B8u: goto label_1344b8;
            case 0x1344BCu: goto label_1344bc;
            case 0x1344C0u: goto label_1344c0;
            case 0x1344C4u: goto label_1344c4;
            case 0x1344C8u: goto label_1344c8;
            case 0x1344CCu: goto label_1344cc;
            case 0x1344D0u: goto label_1344d0;
            case 0x1344D4u: goto label_1344d4;
            case 0x1344D8u: goto label_1344d8;
            case 0x1344DCu: goto label_1344dc;
            case 0x1344E0u: goto label_1344e0;
            case 0x1344E4u: goto label_1344e4;
            case 0x1344E8u: goto label_1344e8;
            case 0x1344ECu: goto label_1344ec;
            case 0x1344F0u: goto label_1344f0;
            case 0x1344F4u: goto label_1344f4;
            case 0x1344F8u: goto label_1344f8;
            case 0x1344FCu: goto label_1344fc;
            case 0x134500u: goto label_134500;
            case 0x134504u: goto label_134504;
            case 0x134508u: goto label_134508;
            case 0x13450Cu: goto label_13450c;
            case 0x134510u: goto label_134510;
            case 0x134514u: goto label_134514;
            case 0x134518u: goto label_134518;
            case 0x13451Cu: goto label_13451c;
            case 0x134520u: goto label_134520;
            case 0x134524u: goto label_134524;
            case 0x134528u: goto label_134528;
            case 0x13452Cu: goto label_13452c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1344DCu; }
            if (ctx->pc != 0x1344DCu) { return; }
        }
    }
    ctx->pc = 0x1344DCu;
label_1344dc:
    // 0x1344dc: 0x282d
    ctx->pc = 0x1344dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1344e0:
    // 0x1344e0: 0x8fa40000
    ctx->pc = 0x1344e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1344e4:
    // 0x1344e4: 0xc041f1a
label_1344e8:
    if (ctx->pc == 0x1344E8u) {
        ctx->pc = 0x1344E8u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x1344ECu;
        goto label_1344ec;
    }
    ctx->pc = 0x1344E4u;
    SET_GPR_U32(ctx, 31, 0x1344ECu);
    ctx->pc = 0x1344E8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1344ECu; }
    }
    if (ctx->pc != 0x1344ECu) { return; }
    ctx->pc = 0x1344ECu;
label_1344ec:
    // 0x1344ec: 0x8e030000
    ctx->pc = 0x1344ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1344f0:
    // 0x1344f0: 0x200202d
    ctx->pc = 0x1344f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1344f4:
    // 0x1344f4: 0x24050001
    ctx->pc = 0x1344f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_1344f8:
    // 0x1344f8: 0x8c620020
    ctx->pc = 0x1344f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1344fc:
    // 0x1344fc: 0x40f809
label_134500:
    if (ctx->pc == 0x134500u) {
        ctx->pc = 0x134500u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x134504u;
        goto label_134504;
    }
    ctx->pc = 0x1344FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x134504u);
        ctx->pc = 0x134500u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1343B8u: goto label_1343b8;
            case 0x1343BCu: goto label_1343bc;
            case 0x1343C0u: goto label_1343c0;
            case 0x1343C4u: goto label_1343c4;
            case 0x1343C8u: goto label_1343c8;
            case 0x1343CCu: goto label_1343cc;
            case 0x1343D0u: goto label_1343d0;
            case 0x1343D4u: goto label_1343d4;
            case 0x1343D8u: goto label_1343d8;
            case 0x1343DCu: goto label_1343dc;
            case 0x1343E0u: goto label_1343e0;
            case 0x1343E4u: goto label_1343e4;
            case 0x1343E8u: goto label_1343e8;
            case 0x1343ECu: goto label_1343ec;
            case 0x1343F0u: goto label_1343f0;
            case 0x1343F4u: goto label_1343f4;
            case 0x1343F8u: goto label_1343f8;
            case 0x1343FCu: goto label_1343fc;
            case 0x134400u: goto label_134400;
            case 0x134404u: goto label_134404;
            case 0x134408u: goto label_134408;
            case 0x13440Cu: goto label_13440c;
            case 0x134410u: goto label_134410;
            case 0x134414u: goto label_134414;
            case 0x134418u: goto label_134418;
            case 0x13441Cu: goto label_13441c;
            case 0x134420u: goto label_134420;
            case 0x134424u: goto label_134424;
            case 0x134428u: goto label_134428;
            case 0x13442Cu: goto label_13442c;
            case 0x134430u: goto label_134430;
            case 0x134434u: goto label_134434;
            case 0x134438u: goto label_134438;
            case 0x13443Cu: goto label_13443c;
            case 0x134440u: goto label_134440;
            case 0x134444u: goto label_134444;
            case 0x134448u: goto label_134448;
            case 0x13444Cu: goto label_13444c;
            case 0x134450u: goto label_134450;
            case 0x134454u: goto label_134454;
            case 0x134458u: goto label_134458;
            case 0x13445Cu: goto label_13445c;
            case 0x134460u: goto label_134460;
            case 0x134464u: goto label_134464;
            case 0x134468u: goto label_134468;
            case 0x13446Cu: goto label_13446c;
            case 0x134470u: goto label_134470;
            case 0x134474u: goto label_134474;
            case 0x134478u: goto label_134478;
            case 0x13447Cu: goto label_13447c;
            case 0x134480u: goto label_134480;
            case 0x134484u: goto label_134484;
            case 0x134488u: goto label_134488;
            case 0x13448Cu: goto label_13448c;
            case 0x134490u: goto label_134490;
            case 0x134494u: goto label_134494;
            case 0x134498u: goto label_134498;
            case 0x13449Cu: goto label_13449c;
            case 0x1344A0u: goto label_1344a0;
            case 0x1344A4u: goto label_1344a4;
            case 0x1344A8u: goto label_1344a8;
            case 0x1344ACu: goto label_1344ac;
            case 0x1344B0u: goto label_1344b0;
            case 0x1344B4u: goto label_1344b4;
            case 0x1344B8u: goto label_1344b8;
            case 0x1344BCu: goto label_1344bc;
            case 0x1344C0u: goto label_1344c0;
            case 0x1344C4u: goto label_1344c4;
            case 0x1344C8u: goto label_1344c8;
            case 0x1344CCu: goto label_1344cc;
            case 0x1344D0u: goto label_1344d0;
            case 0x1344D4u: goto label_1344d4;
            case 0x1344D8u: goto label_1344d8;
            case 0x1344DCu: goto label_1344dc;
            case 0x1344E0u: goto label_1344e0;
            case 0x1344E4u: goto label_1344e4;
            case 0x1344E8u: goto label_1344e8;
            case 0x1344ECu: goto label_1344ec;
            case 0x1344F0u: goto label_1344f0;
            case 0x1344F4u: goto label_1344f4;
            case 0x1344F8u: goto label_1344f8;
            case 0x1344FCu: goto label_1344fc;
            case 0x134500u: goto label_134500;
            case 0x134504u: goto label_134504;
            case 0x134508u: goto label_134508;
            case 0x13450Cu: goto label_13450c;
            case 0x134510u: goto label_134510;
            case 0x134514u: goto label_134514;
            case 0x134518u: goto label_134518;
            case 0x13451Cu: goto label_13451c;
            case 0x134520u: goto label_134520;
            case 0x134524u: goto label_134524;
            case 0x134528u: goto label_134528;
            case 0x13452Cu: goto label_13452c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x134504u; }
            if (ctx->pc != 0x134504u) { return; }
        }
    }
    ctx->pc = 0x134504u;
label_134504:
    // 0x134504: 0x5620ffec
label_134508:
    if (ctx->pc == 0x134508u) {
        ctx->pc = 0x134508u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x13450Cu;
        goto label_13450c;
    }
    ctx->pc = 0x134504u;
    {
        const bool branch_taken_0x134504 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x134504) {
            ctx->pc = 0x134508u;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->pc = 0x1344B8u;
            goto label_1344b8;
        }
    }
    ctx->pc = 0x13450Cu;
label_13450c:
    // 0x13450c: 0xdfb00010
    ctx->pc = 0x13450cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_134510:
    // 0x134510: 0xdfb10018
    ctx->pc = 0x134510u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_134514:
    // 0x134514: 0xdfb20020
    ctx->pc = 0x134514u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_134518:
    // 0x134518: 0xdfb30028
    ctx->pc = 0x134518u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_13451c:
    // 0x13451c: 0xdfb40030
    ctx->pc = 0x13451cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_134520:
    // 0x134520: 0xdfbf0038
    ctx->pc = 0x134520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_134524:
    // 0x134524: 0x3e00008
label_134528:
    if (ctx->pc == 0x134528u) {
        ctx->pc = 0x134528u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x13452Cu;
        goto label_13452c;
    }
    ctx->pc = 0x134524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134528u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1343B8u: goto label_1343b8;
            case 0x1343BCu: goto label_1343bc;
            case 0x1343C0u: goto label_1343c0;
            case 0x1343C4u: goto label_1343c4;
            case 0x1343C8u: goto label_1343c8;
            case 0x1343CCu: goto label_1343cc;
            case 0x1343D0u: goto label_1343d0;
            case 0x1343D4u: goto label_1343d4;
            case 0x1343D8u: goto label_1343d8;
            case 0x1343DCu: goto label_1343dc;
            case 0x1343E0u: goto label_1343e0;
            case 0x1343E4u: goto label_1343e4;
            case 0x1343E8u: goto label_1343e8;
            case 0x1343ECu: goto label_1343ec;
            case 0x1343F0u: goto label_1343f0;
            case 0x1343F4u: goto label_1343f4;
            case 0x1343F8u: goto label_1343f8;
            case 0x1343FCu: goto label_1343fc;
            case 0x134400u: goto label_134400;
            case 0x134404u: goto label_134404;
            case 0x134408u: goto label_134408;
            case 0x13440Cu: goto label_13440c;
            case 0x134410u: goto label_134410;
            case 0x134414u: goto label_134414;
            case 0x134418u: goto label_134418;
            case 0x13441Cu: goto label_13441c;
            case 0x134420u: goto label_134420;
            case 0x134424u: goto label_134424;
            case 0x134428u: goto label_134428;
            case 0x13442Cu: goto label_13442c;
            case 0x134430u: goto label_134430;
            case 0x134434u: goto label_134434;
            case 0x134438u: goto label_134438;
            case 0x13443Cu: goto label_13443c;
            case 0x134440u: goto label_134440;
            case 0x134444u: goto label_134444;
            case 0x134448u: goto label_134448;
            case 0x13444Cu: goto label_13444c;
            case 0x134450u: goto label_134450;
            case 0x134454u: goto label_134454;
            case 0x134458u: goto label_134458;
            case 0x13445Cu: goto label_13445c;
            case 0x134460u: goto label_134460;
            case 0x134464u: goto label_134464;
            case 0x134468u: goto label_134468;
            case 0x13446Cu: goto label_13446c;
            case 0x134470u: goto label_134470;
            case 0x134474u: goto label_134474;
            case 0x134478u: goto label_134478;
            case 0x13447Cu: goto label_13447c;
            case 0x134480u: goto label_134480;
            case 0x134484u: goto label_134484;
            case 0x134488u: goto label_134488;
            case 0x13448Cu: goto label_13448c;
            case 0x134490u: goto label_134490;
            case 0x134494u: goto label_134494;
            case 0x134498u: goto label_134498;
            case 0x13449Cu: goto label_13449c;
            case 0x1344A0u: goto label_1344a0;
            case 0x1344A4u: goto label_1344a4;
            case 0x1344A8u: goto label_1344a8;
            case 0x1344ACu: goto label_1344ac;
            case 0x1344B0u: goto label_1344b0;
            case 0x1344B4u: goto label_1344b4;
            case 0x1344B8u: goto label_1344b8;
            case 0x1344BCu: goto label_1344bc;
            case 0x1344C0u: goto label_1344c0;
            case 0x1344C4u: goto label_1344c4;
            case 0x1344C8u: goto label_1344c8;
            case 0x1344CCu: goto label_1344cc;
            case 0x1344D0u: goto label_1344d0;
            case 0x1344D4u: goto label_1344d4;
            case 0x1344D8u: goto label_1344d8;
            case 0x1344DCu: goto label_1344dc;
            case 0x1344E0u: goto label_1344e0;
            case 0x1344E4u: goto label_1344e4;
            case 0x1344E8u: goto label_1344e8;
            case 0x1344ECu: goto label_1344ec;
            case 0x1344F0u: goto label_1344f0;
            case 0x1344F4u: goto label_1344f4;
            case 0x1344F8u: goto label_1344f8;
            case 0x1344FCu: goto label_1344fc;
            case 0x134500u: goto label_134500;
            case 0x134504u: goto label_134504;
            case 0x134508u: goto label_134508;
            case 0x13450Cu: goto label_13450c;
            case 0x134510u: goto label_134510;
            case 0x134514u: goto label_134514;
            case 0x134518u: goto label_134518;
            case 0x13451Cu: goto label_13451c;
            case 0x134520u: goto label_134520;
            case 0x134524u: goto label_134524;
            case 0x134528u: goto label_134528;
            case 0x13452Cu: goto label_13452c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13452Cu;
label_13452c:
    // 0x13452c: 0x0
    ctx->pc = 0x13452cu;
    // NOP
}
