#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00129468
// Address: 0x129468 - 0x1297a0
void sub_00129468_0x129468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x129468u;

label_129468:
    // 0x129468: 0x27bdffe0
    ctx->pc = 0x129468u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_12946c:
    // 0x12946c: 0xffb00000
    ctx->pc = 0x12946cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_129470:
    // 0x129470: 0x80802d
    ctx->pc = 0x129470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_129474:
    // 0x129474: 0xffb10008
    ctx->pc = 0x129474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_129478:
    // 0x129478: 0xa0882d
    ctx->pc = 0x129478u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12947c:
    // 0x12947c: 0xffb20010
    ctx->pc = 0x12947cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_129480:
    // 0x129480: 0xc0902d
    ctx->pc = 0x129480u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_129484:
    // 0x129484: 0xffbf0018
    ctx->pc = 0x129484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_129488:
    // 0x129488: 0xc04c16e
label_12948c:
    if (ctx->pc == 0x12948Cu) {
        ctx->pc = 0x12948Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x129490u;
        goto label_129490;
    }
    ctx->pc = 0x129488u;
    SET_GPR_U32(ctx, 31, 0x129490u);
    ctx->pc = 0x12948Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x1305B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001305B8_0x1305b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129490u; }
    }
    if (ctx->pc != 0x129490u) { return; }
    ctx->pc = 0x129490u;
label_129490:
    // 0x129490: 0x24030001
    ctx->pc = 0x129490u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_129494:
    // 0x129494: 0x10430003
label_129498:
    if (ctx->pc == 0x129498u) {
        ctx->pc = 0x12949Cu;
        goto label_12949c;
    }
    ctx->pc = 0x129494u;
    {
        const bool branch_taken_0x129494 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x129494) {
            ctx->pc = 0x1294A4u;
            goto label_1294a4;
        }
    }
    ctx->pc = 0x12949Cu;
label_12949c:
    // 0x12949c: 0xc04c1d2
label_1294a0:
    if (ctx->pc == 0x1294A0u) {
        ctx->pc = 0x1294A0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1294A4u;
        goto label_1294a4;
    }
    ctx->pc = 0x12949Cu;
    SET_GPR_U32(ctx, 31, 0x1294A4u);
    ctx->pc = 0x1294A0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x130748u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130748_0x130748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1294A4u; }
    }
    if (ctx->pc != 0x1294A4u) { return; }
    ctx->pc = 0x1294A4u;
label_1294a4:
    // 0x1294a4: 0xc049938
label_1294a8:
    if (ctx->pc == 0x1294A8u) {
        ctx->pc = 0x1294ACu;
        goto label_1294ac;
    }
    ctx->pc = 0x1294A4u;
    SET_GPR_U32(ctx, 31, 0x1294ACu);
    ctx->pc = 0x1264E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001264E0_0x1264e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1294ACu; }
    }
    if (ctx->pc != 0x1294ACu) { return; }
    ctx->pc = 0x1294ACu;
label_1294ac:
    // 0x1294ac: 0x8e060014
    ctx->pc = 0x1294acu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1294b0:
    // 0x1294b0: 0x8e02000c
    ctx->pc = 0x1294b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1294b4:
    // 0x1294b4: 0x2405ffff
    ctx->pc = 0x1294b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1294b8:
    // 0x1294b8: 0x8e030030
    ctx->pc = 0x1294b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1294bc:
    // 0x1294bc: 0x461023
    ctx->pc = 0x1294bcu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1294c0:
    // 0x1294c0: 0xae000020
    ctx->pc = 0x1294c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1294c4:
    // 0x1294c4: 0x222202a
    ctx->pc = 0x1294c4u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
label_1294c8:
    // 0x1294c8: 0x661821
    ctx->pc = 0x1294c8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1294cc:
    // 0x1294cc: 0x224100b
    ctx->pc = 0x1294ccu;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 17));
label_1294d0:
    // 0x1294d0: 0xae030018
    ctx->pc = 0x1294d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_1294d4:
    // 0x1294d4: 0x14400006
label_1294d8:
    if (ctx->pc == 0x1294D8u) {
        ctx->pc = 0x1294D8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->pc = 0x1294DCu;
        goto label_1294dc;
    }
    ctx->pc = 0x1294D4u;
    {
        const bool branch_taken_0x1294d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1294D8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        if (branch_taken_0x1294d4) {
            ctx->pc = 0x1294F0u;
            goto label_1294f0;
        }
    }
    ctx->pc = 0x1294DCu;
label_1294dc:
    // 0x1294dc: 0x24020003
    ctx->pc = 0x1294dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_1294e0:
    // 0x1294e0: 0xa2020001
    ctx->pc = 0x1294e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_1294e4:
    // 0x1294e4: 0x10000017
label_1294e8:
    if (ctx->pc == 0x1294E8u) {
        ctx->pc = 0x1294E8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1294ECu;
        goto label_1294ec;
    }
    ctx->pc = 0x1294E4u;
    {
        const bool branch_taken_0x1294e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1294E8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1294e4) {
            ctx->pc = 0x129544u;
            goto label_129544;
        }
    }
    ctx->pc = 0x1294ECu;
label_1294ec:
    // 0x1294ec: 0x0
    ctx->pc = 0x1294ecu;
    // NOP
label_1294f0:
    // 0x1294f0: 0xc04c1ea
label_1294f4:
    if (ctx->pc == 0x1294F4u) {
        ctx->pc = 0x1294F4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1294F8u;
        goto label_1294f8;
    }
    ctx->pc = 0x1294F0u;
    SET_GPR_U32(ctx, 31, 0x1294F8u);
    ctx->pc = 0x1294F4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x1307A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001307A8_0x1307a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1294F8u; }
    }
    if (ctx->pc != 0x1294F8u) { return; }
    ctx->pc = 0x1294F8u;
label_1294f8:
    // 0x1294f8: 0x8e040004
    ctx->pc = 0x1294f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1294fc:
    // 0x1294fc: 0xc04c3c8
label_129500:
    if (ctx->pc == 0x129500u) {
        ctx->pc = 0x129500u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x129504u;
        goto label_129504;
    }
    ctx->pc = 0x1294FCu;
    SET_GPR_U32(ctx, 31, 0x129504u);
    ctx->pc = 0x129500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130F20_0x130f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129504u; }
    }
    if (ctx->pc != 0x129504u) { return; }
    ctx->pc = 0x129504u;
label_129504:
    // 0x129504: 0x8e040004
    ctx->pc = 0x129504u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_129508:
    // 0x129508: 0xc04c38a
label_12950c:
    if (ctx->pc == 0x12950Cu) {
        ctx->pc = 0x12950Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x129510u;
        goto label_129510;
    }
    ctx->pc = 0x129508u;
    SET_GPR_U32(ctx, 31, 0x129510u);
    ctx->pc = 0x12950Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->pc = 0x130E28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130E28_0x130e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129510u; }
    }
    if (ctx->pc != 0x129510u) { return; }
    ctx->pc = 0x129510u;
label_129510:
    // 0x129510: 0x24030002
    ctx->pc = 0x129510u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_129514:
    // 0x129514: 0xa2030001
    ctx->pc = 0x129514u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_129518:
    // 0x129518: 0x282d
    ctx->pc = 0x129518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12951c:
    // 0x12951c: 0x8e040004
    ctx->pc = 0x12951cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_129520:
    // 0x129520: 0xc04c392
label_129524:
    if (ctx->pc == 0x129524u) {
        ctx->pc = 0x129524u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x129528u;
        goto label_129528;
    }
    ctx->pc = 0x129520u;
    SET_GPR_U32(ctx, 31, 0x129528u);
    ctx->pc = 0x129524u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x130E48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130E48_0x130e48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129528u; }
    }
    if (ctx->pc != 0x129528u) { return; }
    ctx->pc = 0x129528u;
label_129528:
    // 0x129528: 0x8e040004
    ctx->pc = 0x129528u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_12952c:
    // 0x12952c: 0xc04c170
label_129530:
    if (ctx->pc == 0x129530u) {
        ctx->pc = 0x129530u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x129534u;
        goto label_129534;
    }
    ctx->pc = 0x12952Cu;
    SET_GPR_U32(ctx, 31, 0x129534u);
    ctx->pc = 0x129530u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->pc = 0x1305C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001305C0_0x1305c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129534u; }
    }
    if (ctx->pc != 0x129534u) { return; }
    ctx->pc = 0x129534u;
label_129534:
    // 0x129534: 0x8e040004
    ctx->pc = 0x129534u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_129538:
    // 0x129538: 0xc04c1a6
label_12953c:
    if (ctx->pc == 0x12953Cu) {
        ctx->pc = 0x12953Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x129540u;
        goto label_129540;
    }
    ctx->pc = 0x129538u;
    SET_GPR_U32(ctx, 31, 0x129540u);
    ctx->pc = 0x12953Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->pc = 0x130698u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130698_0x130698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129540u; }
    }
    if (ctx->pc != 0x129540u) { return; }
    ctx->pc = 0x129540u;
label_129540:
    // 0x129540: 0x8e10001c
    ctx->pc = 0x129540u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_129544:
    // 0x129544: 0xc04993e
label_129548:
    if (ctx->pc == 0x129548u) {
        ctx->pc = 0x12954Cu;
        goto label_12954c;
    }
    ctx->pc = 0x129544u;
    SET_GPR_U32(ctx, 31, 0x12954Cu);
    ctx->pc = 0x1264F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001264F8_0x1264f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12954Cu; }
    }
    if (ctx->pc != 0x12954Cu) { return; }
    ctx->pc = 0x12954Cu;
label_12954c:
    // 0x12954c: 0x200102d
    ctx->pc = 0x12954cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_129550:
    // 0x129550: 0xdfb10008
    ctx->pc = 0x129550u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_129554:
    // 0x129554: 0xdfb00000
    ctx->pc = 0x129554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_129558:
    // 0x129558: 0xdfb20010
    ctx->pc = 0x129558u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12955c:
    // 0x12955c: 0xdfbf0018
    ctx->pc = 0x12955cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_129560:
    // 0x129560: 0x3e00008
label_129564:
    if (ctx->pc == 0x129564u) {
        ctx->pc = 0x129564u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x129568u;
        goto label_129568;
    }
    ctx->pc = 0x129560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129564u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x129468u: goto label_129468;
            case 0x12946Cu: goto label_12946c;
            case 0x129470u: goto label_129470;
            case 0x129474u: goto label_129474;
            case 0x129478u: goto label_129478;
            case 0x12947Cu: goto label_12947c;
            case 0x129480u: goto label_129480;
            case 0x129484u: goto label_129484;
            case 0x129488u: goto label_129488;
            case 0x12948Cu: goto label_12948c;
            case 0x129490u: goto label_129490;
            case 0x129494u: goto label_129494;
            case 0x129498u: goto label_129498;
            case 0x12949Cu: goto label_12949c;
            case 0x1294A0u: goto label_1294a0;
            case 0x1294A4u: goto label_1294a4;
            case 0x1294A8u: goto label_1294a8;
            case 0x1294ACu: goto label_1294ac;
            case 0x1294B0u: goto label_1294b0;
            case 0x1294B4u: goto label_1294b4;
            case 0x1294B8u: goto label_1294b8;
            case 0x1294BCu: goto label_1294bc;
            case 0x1294C0u: goto label_1294c0;
            case 0x1294C4u: goto label_1294c4;
            case 0x1294C8u: goto label_1294c8;
            case 0x1294CCu: goto label_1294cc;
            case 0x1294D0u: goto label_1294d0;
            case 0x1294D4u: goto label_1294d4;
            case 0x1294D8u: goto label_1294d8;
            case 0x1294DCu: goto label_1294dc;
            case 0x1294E0u: goto label_1294e0;
            case 0x1294E4u: goto label_1294e4;
            case 0x1294E8u: goto label_1294e8;
            case 0x1294ECu: goto label_1294ec;
            case 0x1294F0u: goto label_1294f0;
            case 0x1294F4u: goto label_1294f4;
            case 0x1294F8u: goto label_1294f8;
            case 0x1294FCu: goto label_1294fc;
            case 0x129500u: goto label_129500;
            case 0x129504u: goto label_129504;
            case 0x129508u: goto label_129508;
            case 0x12950Cu: goto label_12950c;
            case 0x129510u: goto label_129510;
            case 0x129514u: goto label_129514;
            case 0x129518u: goto label_129518;
            case 0x12951Cu: goto label_12951c;
            case 0x129520u: goto label_129520;
            case 0x129524u: goto label_129524;
            case 0x129528u: goto label_129528;
            case 0x12952Cu: goto label_12952c;
            case 0x129530u: goto label_129530;
            case 0x129534u: goto label_129534;
            case 0x129538u: goto label_129538;
            case 0x12953Cu: goto label_12953c;
            case 0x129540u: goto label_129540;
            case 0x129544u: goto label_129544;
            case 0x129548u: goto label_129548;
            case 0x12954Cu: goto label_12954c;
            case 0x129550u: goto label_129550;
            case 0x129554u: goto label_129554;
            case 0x129558u: goto label_129558;
            case 0x12955Cu: goto label_12955c;
            case 0x129560u: goto label_129560;
            case 0x129564u: goto label_129564;
            case 0x129568u: goto label_129568;
            case 0x12956Cu: goto label_12956c;
            case 0x129570u: goto label_129570;
            case 0x129574u: goto label_129574;
            case 0x129578u: goto label_129578;
            case 0x12957Cu: goto label_12957c;
            case 0x129580u: goto label_129580;
            case 0x129584u: goto label_129584;
            case 0x129588u: goto label_129588;
            case 0x12958Cu: goto label_12958c;
            case 0x129590u: goto label_129590;
            case 0x129594u: goto label_129594;
            case 0x129598u: goto label_129598;
            case 0x12959Cu: goto label_12959c;
            case 0x1295A0u: goto label_1295a0;
            case 0x1295A4u: goto label_1295a4;
            case 0x1295A8u: goto label_1295a8;
            case 0x1295ACu: goto label_1295ac;
            case 0x1295B0u: goto label_1295b0;
            case 0x1295B4u: goto label_1295b4;
            case 0x1295B8u: goto label_1295b8;
            case 0x1295BCu: goto label_1295bc;
            case 0x1295C0u: goto label_1295c0;
            case 0x1295C4u: goto label_1295c4;
            case 0x1295C8u: goto label_1295c8;
            case 0x1295CCu: goto label_1295cc;
            case 0x1295D0u: goto label_1295d0;
            case 0x1295D4u: goto label_1295d4;
            case 0x1295D8u: goto label_1295d8;
            case 0x1295DCu: goto label_1295dc;
            case 0x1295E0u: goto label_1295e0;
            case 0x1295E4u: goto label_1295e4;
            case 0x1295E8u: goto label_1295e8;
            case 0x1295ECu: goto label_1295ec;
            case 0x1295F0u: goto label_1295f0;
            case 0x1295F4u: goto label_1295f4;
            case 0x1295F8u: goto label_1295f8;
            case 0x1295FCu: goto label_1295fc;
            case 0x129600u: goto label_129600;
            case 0x129604u: goto label_129604;
            case 0x129608u: goto label_129608;
            case 0x12960Cu: goto label_12960c;
            case 0x129610u: goto label_129610;
            case 0x129614u: goto label_129614;
            case 0x129618u: goto label_129618;
            case 0x12961Cu: goto label_12961c;
            case 0x129620u: goto label_129620;
            case 0x129624u: goto label_129624;
            case 0x129628u: goto label_129628;
            case 0x12962Cu: goto label_12962c;
            case 0x129630u: goto label_129630;
            case 0x129634u: goto label_129634;
            case 0x129638u: goto label_129638;
            case 0x12963Cu: goto label_12963c;
            case 0x129640u: goto label_129640;
            case 0x129644u: goto label_129644;
            case 0x129648u: goto label_129648;
            case 0x12964Cu: goto label_12964c;
            case 0x129650u: goto label_129650;
            case 0x129654u: goto label_129654;
            case 0x129658u: goto label_129658;
            case 0x12965Cu: goto label_12965c;
            case 0x129660u: goto label_129660;
            case 0x129664u: goto label_129664;
            case 0x129668u: goto label_129668;
            case 0x12966Cu: goto label_12966c;
            case 0x129670u: goto label_129670;
            case 0x129674u: goto label_129674;
            case 0x129678u: goto label_129678;
            case 0x12967Cu: goto label_12967c;
            case 0x129680u: goto label_129680;
            case 0x129684u: goto label_129684;
            case 0x129688u: goto label_129688;
            case 0x12968Cu: goto label_12968c;
            case 0x129690u: goto label_129690;
            case 0x129694u: goto label_129694;
            case 0x129698u: goto label_129698;
            case 0x12969Cu: goto label_12969c;
            case 0x1296A0u: goto label_1296a0;
            case 0x1296A4u: goto label_1296a4;
            case 0x1296A8u: goto label_1296a8;
            case 0x1296ACu: goto label_1296ac;
            case 0x1296B0u: goto label_1296b0;
            case 0x1296B4u: goto label_1296b4;
            case 0x1296B8u: goto label_1296b8;
            case 0x1296BCu: goto label_1296bc;
            case 0x1296C0u: goto label_1296c0;
            case 0x1296C4u: goto label_1296c4;
            case 0x1296C8u: goto label_1296c8;
            case 0x1296CCu: goto label_1296cc;
            case 0x1296D0u: goto label_1296d0;
            case 0x1296D4u: goto label_1296d4;
            case 0x1296D8u: goto label_1296d8;
            case 0x1296DCu: goto label_1296dc;
            case 0x1296E0u: goto label_1296e0;
            case 0x1296E4u: goto label_1296e4;
            case 0x1296E8u: goto label_1296e8;
            case 0x1296ECu: goto label_1296ec;
            case 0x1296F0u: goto label_1296f0;
            case 0x1296F4u: goto label_1296f4;
            case 0x1296F8u: goto label_1296f8;
            case 0x1296FCu: goto label_1296fc;
            case 0x129700u: goto label_129700;
            case 0x129704u: goto label_129704;
            case 0x129708u: goto label_129708;
            case 0x12970Cu: goto label_12970c;
            case 0x129710u: goto label_129710;
            case 0x129714u: goto label_129714;
            case 0x129718u: goto label_129718;
            case 0x12971Cu: goto label_12971c;
            case 0x129720u: goto label_129720;
            case 0x129724u: goto label_129724;
            case 0x129728u: goto label_129728;
            case 0x12972Cu: goto label_12972c;
            case 0x129730u: goto label_129730;
            case 0x129734u: goto label_129734;
            case 0x129738u: goto label_129738;
            case 0x12973Cu: goto label_12973c;
            case 0x129740u: goto label_129740;
            case 0x129744u: goto label_129744;
            case 0x129748u: goto label_129748;
            case 0x12974Cu: goto label_12974c;
            case 0x129750u: goto label_129750;
            case 0x129754u: goto label_129754;
            case 0x129758u: goto label_129758;
            case 0x12975Cu: goto label_12975c;
            case 0x129760u: goto label_129760;
            case 0x129764u: goto label_129764;
            case 0x129768u: goto label_129768;
            case 0x12976Cu: goto label_12976c;
            case 0x129770u: goto label_129770;
            case 0x129774u: goto label_129774;
            case 0x129778u: goto label_129778;
            case 0x12977Cu: goto label_12977c;
            case 0x129780u: goto label_129780;
            case 0x129784u: goto label_129784;
            case 0x129788u: goto label_129788;
            case 0x12978Cu: goto label_12978c;
            case 0x129790u: goto label_129790;
            case 0x129794u: goto label_129794;
            case 0x129798u: goto label_129798;
            case 0x12979Cu: goto label_12979c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x129568u;
label_129568:
    // 0x129568: 0x27bdfff0
    ctx->pc = 0x129568u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_12956c:
    // 0x12956c: 0xa0102d
    ctx->pc = 0x12956cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_129570:
    // 0x129570: 0xffb00000
    ctx->pc = 0x129570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_129574:
    // 0x129574: 0x80802d
    ctx->pc = 0x129574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_129578:
    // 0x129578: 0xffbf0008
    ctx->pc = 0x129578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_12957c:
    // 0x12957c: 0x16000004
label_129580:
    if (ctx->pc == 0x129580u) {
        ctx->pc = 0x129580u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x129584u;
        goto label_129584;
    }
    ctx->pc = 0x12957Cu;
    {
        const bool branch_taken_0x12957c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x129580u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12957c) {
            ctx->pc = 0x129590u;
            goto label_129590;
        }
    }
    ctx->pc = 0x129584u;
label_129584:
    // 0x129584: 0x3c040024
    ctx->pc = 0x129584u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_129588:
    // 0x129588: 0x1000000b
label_12958c:
    if (ctx->pc == 0x12958Cu) {
        ctx->pc = 0x12958Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942448));
        ctx->pc = 0x129590u;
        goto label_129590;
    }
    ctx->pc = 0x129588u;
    {
        const bool branch_taken_0x129588 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12958Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942448));
        if (branch_taken_0x129588) {
            ctx->pc = 0x1295B8u;
            goto label_1295b8;
        }
    }
    ctx->pc = 0x129590u;
label_129590:
    // 0x129590: 0x4410005
label_129594:
    if (ctx->pc == 0x129594u) {
        ctx->pc = 0x129598u;
        goto label_129598;
    }
    ctx->pc = 0x129590u;
    {
        const bool branch_taken_0x129590 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x129590) {
            ctx->pc = 0x1295A8u;
            goto label_1295a8;
        }
    }
    ctx->pc = 0x129598u;
label_129598:
    // 0x129598: 0x3c040024
    ctx->pc = 0x129598u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_12959c:
    // 0x12959c: 0x10000006
label_1295a0:
    if (ctx->pc == 0x1295A0u) {
        ctx->pc = 0x1295A0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942488));
        ctx->pc = 0x1295A4u;
        goto label_1295a4;
    }
    ctx->pc = 0x12959Cu;
    {
        const bool branch_taken_0x12959c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1295A0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942488));
        if (branch_taken_0x12959c) {
            ctx->pc = 0x1295B8u;
            goto label_1295b8;
        }
    }
    ctx->pc = 0x1295A4u;
label_1295a4:
    // 0x1295a4: 0x0
    ctx->pc = 0x1295a4u;
    // NOP
label_1295a8:
    // 0x1295a8: 0x54600007
label_1295ac:
    if (ctx->pc == 0x1295ACu) {
        ctx->pc = 0x1295ACu;
        SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->pc = 0x1295B0u;
        goto label_1295b0;
    }
    ctx->pc = 0x1295A8u;
    {
        const bool branch_taken_0x1295a8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1295a8) {
            ctx->pc = 0x1295ACu;
            SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
            ctx->pc = 0x1295C8u;
            goto label_1295c8;
        }
    }
    ctx->pc = 0x1295B0u;
label_1295b0:
    // 0x1295b0: 0x3c040024
    ctx->pc = 0x1295b0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_1295b4:
    // 0x1295b4: 0x24849f48
    ctx->pc = 0x1295b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942536));
label_1295b8:
    // 0x1295b8: 0xc04a034
label_1295bc:
    if (ctx->pc == 0x1295BCu) {
        ctx->pc = 0x1295C0u;
        goto label_1295c0;
    }
    ctx->pc = 0x1295B8u;
    SET_GPR_U32(ctx, 31, 0x1295C0u);
    ctx->pc = 0x1280D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001280D0_0x1280d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1295C0u; }
    }
    if (ctx->pc != 0x1295C0u) { return; }
    ctx->pc = 0x1295C0u;
label_1295c0:
    // 0x1295c0: 0x10000008
label_1295c4:
    if (ctx->pc == 0x1295C4u) {
        ctx->pc = 0x1295C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x1295C8u;
        goto label_1295c8;
    }
    ctx->pc = 0x1295C0u;
    {
        const bool branch_taken_0x1295c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1295C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x1295c0) {
            ctx->pc = 0x1295E4u;
            goto label_1295e4;
        }
    }
    ctx->pc = 0x1295C8u;
label_1295c8:
    // 0x1295c8: 0x24030002
    ctx->pc = 0x1295c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_1295cc:
    // 0x1295cc: 0x10e30005
label_1295d0:
    if (ctx->pc == 0x1295D0u) {
        ctx->pc = 0x1295D0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1295D4u;
        goto label_1295d4;
    }
    ctx->pc = 0x1295CCu;
    {
        const bool branch_taken_0x1295cc = (GPR_U32(ctx, 7) == GPR_U32(ctx, 3));
        ctx->pc = 0x1295D0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1295cc) {
            ctx->pc = 0x1295E4u;
            goto label_1295e4;
        }
    }
    ctx->pc = 0x1295D4u;
label_1295d4:
    // 0x1295d4: 0xc04a51a
label_1295d8:
    if (ctx->pc == 0x1295D8u) {
        ctx->pc = 0x1295DCu;
        goto label_1295dc;
    }
    ctx->pc = 0x1295D4u;
    SET_GPR_U32(ctx, 31, 0x1295DCu);
    ctx->pc = 0x129468u;
    goto label_129468;
    ctx->pc = 0x1295DCu;
label_1295dc:
    // 0x1295dc: 0x24030001
    ctx->pc = 0x1295dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1295e0:
    // 0x1295e0: 0xa2030002
    ctx->pc = 0x1295e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
label_1295e4:
    // 0x1295e4: 0xdfb00000
    ctx->pc = 0x1295e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1295e8:
    // 0x1295e8: 0xdfbf0008
    ctx->pc = 0x1295e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1295ec:
    // 0x1295ec: 0x3e00008
label_1295f0:
    if (ctx->pc == 0x1295F0u) {
        ctx->pc = 0x1295F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1295F4u;
        goto label_1295f4;
    }
    ctx->pc = 0x1295ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1295F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x129468u: goto label_129468;
            case 0x12946Cu: goto label_12946c;
            case 0x129470u: goto label_129470;
            case 0x129474u: goto label_129474;
            case 0x129478u: goto label_129478;
            case 0x12947Cu: goto label_12947c;
            case 0x129480u: goto label_129480;
            case 0x129484u: goto label_129484;
            case 0x129488u: goto label_129488;
            case 0x12948Cu: goto label_12948c;
            case 0x129490u: goto label_129490;
            case 0x129494u: goto label_129494;
            case 0x129498u: goto label_129498;
            case 0x12949Cu: goto label_12949c;
            case 0x1294A0u: goto label_1294a0;
            case 0x1294A4u: goto label_1294a4;
            case 0x1294A8u: goto label_1294a8;
            case 0x1294ACu: goto label_1294ac;
            case 0x1294B0u: goto label_1294b0;
            case 0x1294B4u: goto label_1294b4;
            case 0x1294B8u: goto label_1294b8;
            case 0x1294BCu: goto label_1294bc;
            case 0x1294C0u: goto label_1294c0;
            case 0x1294C4u: goto label_1294c4;
            case 0x1294C8u: goto label_1294c8;
            case 0x1294CCu: goto label_1294cc;
            case 0x1294D0u: goto label_1294d0;
            case 0x1294D4u: goto label_1294d4;
            case 0x1294D8u: goto label_1294d8;
            case 0x1294DCu: goto label_1294dc;
            case 0x1294E0u: goto label_1294e0;
            case 0x1294E4u: goto label_1294e4;
            case 0x1294E8u: goto label_1294e8;
            case 0x1294ECu: goto label_1294ec;
            case 0x1294F0u: goto label_1294f0;
            case 0x1294F4u: goto label_1294f4;
            case 0x1294F8u: goto label_1294f8;
            case 0x1294FCu: goto label_1294fc;
            case 0x129500u: goto label_129500;
            case 0x129504u: goto label_129504;
            case 0x129508u: goto label_129508;
            case 0x12950Cu: goto label_12950c;
            case 0x129510u: goto label_129510;
            case 0x129514u: goto label_129514;
            case 0x129518u: goto label_129518;
            case 0x12951Cu: goto label_12951c;
            case 0x129520u: goto label_129520;
            case 0x129524u: goto label_129524;
            case 0x129528u: goto label_129528;
            case 0x12952Cu: goto label_12952c;
            case 0x129530u: goto label_129530;
            case 0x129534u: goto label_129534;
            case 0x129538u: goto label_129538;
            case 0x12953Cu: goto label_12953c;
            case 0x129540u: goto label_129540;
            case 0x129544u: goto label_129544;
            case 0x129548u: goto label_129548;
            case 0x12954Cu: goto label_12954c;
            case 0x129550u: goto label_129550;
            case 0x129554u: goto label_129554;
            case 0x129558u: goto label_129558;
            case 0x12955Cu: goto label_12955c;
            case 0x129560u: goto label_129560;
            case 0x129564u: goto label_129564;
            case 0x129568u: goto label_129568;
            case 0x12956Cu: goto label_12956c;
            case 0x129570u: goto label_129570;
            case 0x129574u: goto label_129574;
            case 0x129578u: goto label_129578;
            case 0x12957Cu: goto label_12957c;
            case 0x129580u: goto label_129580;
            case 0x129584u: goto label_129584;
            case 0x129588u: goto label_129588;
            case 0x12958Cu: goto label_12958c;
            case 0x129590u: goto label_129590;
            case 0x129594u: goto label_129594;
            case 0x129598u: goto label_129598;
            case 0x12959Cu: goto label_12959c;
            case 0x1295A0u: goto label_1295a0;
            case 0x1295A4u: goto label_1295a4;
            case 0x1295A8u: goto label_1295a8;
            case 0x1295ACu: goto label_1295ac;
            case 0x1295B0u: goto label_1295b0;
            case 0x1295B4u: goto label_1295b4;
            case 0x1295B8u: goto label_1295b8;
            case 0x1295BCu: goto label_1295bc;
            case 0x1295C0u: goto label_1295c0;
            case 0x1295C4u: goto label_1295c4;
            case 0x1295C8u: goto label_1295c8;
            case 0x1295CCu: goto label_1295cc;
            case 0x1295D0u: goto label_1295d0;
            case 0x1295D4u: goto label_1295d4;
            case 0x1295D8u: goto label_1295d8;
            case 0x1295DCu: goto label_1295dc;
            case 0x1295E0u: goto label_1295e0;
            case 0x1295E4u: goto label_1295e4;
            case 0x1295E8u: goto label_1295e8;
            case 0x1295ECu: goto label_1295ec;
            case 0x1295F0u: goto label_1295f0;
            case 0x1295F4u: goto label_1295f4;
            case 0x1295F8u: goto label_1295f8;
            case 0x1295FCu: goto label_1295fc;
            case 0x129600u: goto label_129600;
            case 0x129604u: goto label_129604;
            case 0x129608u: goto label_129608;
            case 0x12960Cu: goto label_12960c;
            case 0x129610u: goto label_129610;
            case 0x129614u: goto label_129614;
            case 0x129618u: goto label_129618;
            case 0x12961Cu: goto label_12961c;
            case 0x129620u: goto label_129620;
            case 0x129624u: goto label_129624;
            case 0x129628u: goto label_129628;
            case 0x12962Cu: goto label_12962c;
            case 0x129630u: goto label_129630;
            case 0x129634u: goto label_129634;
            case 0x129638u: goto label_129638;
            case 0x12963Cu: goto label_12963c;
            case 0x129640u: goto label_129640;
            case 0x129644u: goto label_129644;
            case 0x129648u: goto label_129648;
            case 0x12964Cu: goto label_12964c;
            case 0x129650u: goto label_129650;
            case 0x129654u: goto label_129654;
            case 0x129658u: goto label_129658;
            case 0x12965Cu: goto label_12965c;
            case 0x129660u: goto label_129660;
            case 0x129664u: goto label_129664;
            case 0x129668u: goto label_129668;
            case 0x12966Cu: goto label_12966c;
            case 0x129670u: goto label_129670;
            case 0x129674u: goto label_129674;
            case 0x129678u: goto label_129678;
            case 0x12967Cu: goto label_12967c;
            case 0x129680u: goto label_129680;
            case 0x129684u: goto label_129684;
            case 0x129688u: goto label_129688;
            case 0x12968Cu: goto label_12968c;
            case 0x129690u: goto label_129690;
            case 0x129694u: goto label_129694;
            case 0x129698u: goto label_129698;
            case 0x12969Cu: goto label_12969c;
            case 0x1296A0u: goto label_1296a0;
            case 0x1296A4u: goto label_1296a4;
            case 0x1296A8u: goto label_1296a8;
            case 0x1296ACu: goto label_1296ac;
            case 0x1296B0u: goto label_1296b0;
            case 0x1296B4u: goto label_1296b4;
            case 0x1296B8u: goto label_1296b8;
            case 0x1296BCu: goto label_1296bc;
            case 0x1296C0u: goto label_1296c0;
            case 0x1296C4u: goto label_1296c4;
            case 0x1296C8u: goto label_1296c8;
            case 0x1296CCu: goto label_1296cc;
            case 0x1296D0u: goto label_1296d0;
            case 0x1296D4u: goto label_1296d4;
            case 0x1296D8u: goto label_1296d8;
            case 0x1296DCu: goto label_1296dc;
            case 0x1296E0u: goto label_1296e0;
            case 0x1296E4u: goto label_1296e4;
            case 0x1296E8u: goto label_1296e8;
            case 0x1296ECu: goto label_1296ec;
            case 0x1296F0u: goto label_1296f0;
            case 0x1296F4u: goto label_1296f4;
            case 0x1296F8u: goto label_1296f8;
            case 0x1296FCu: goto label_1296fc;
            case 0x129700u: goto label_129700;
            case 0x129704u: goto label_129704;
            case 0x129708u: goto label_129708;
            case 0x12970Cu: goto label_12970c;
            case 0x129710u: goto label_129710;
            case 0x129714u: goto label_129714;
            case 0x129718u: goto label_129718;
            case 0x12971Cu: goto label_12971c;
            case 0x129720u: goto label_129720;
            case 0x129724u: goto label_129724;
            case 0x129728u: goto label_129728;
            case 0x12972Cu: goto label_12972c;
            case 0x129730u: goto label_129730;
            case 0x129734u: goto label_129734;
            case 0x129738u: goto label_129738;
            case 0x12973Cu: goto label_12973c;
            case 0x129740u: goto label_129740;
            case 0x129744u: goto label_129744;
            case 0x129748u: goto label_129748;
            case 0x12974Cu: goto label_12974c;
            case 0x129750u: goto label_129750;
            case 0x129754u: goto label_129754;
            case 0x129758u: goto label_129758;
            case 0x12975Cu: goto label_12975c;
            case 0x129760u: goto label_129760;
            case 0x129764u: goto label_129764;
            case 0x129768u: goto label_129768;
            case 0x12976Cu: goto label_12976c;
            case 0x129770u: goto label_129770;
            case 0x129774u: goto label_129774;
            case 0x129778u: goto label_129778;
            case 0x12977Cu: goto label_12977c;
            case 0x129780u: goto label_129780;
            case 0x129784u: goto label_129784;
            case 0x129788u: goto label_129788;
            case 0x12978Cu: goto label_12978c;
            case 0x129790u: goto label_129790;
            case 0x129794u: goto label_129794;
            case 0x129798u: goto label_129798;
            case 0x12979Cu: goto label_12979c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1295F4u;
label_1295f4:
    // 0x1295f4: 0x0
    ctx->pc = 0x1295f4u;
    // NOP
label_1295f8:
    // 0x1295f8: 0x27bdfff0
    ctx->pc = 0x1295f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1295fc:
    // 0x1295fc: 0xffbf0000
    ctx->pc = 0x1295fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_129600:
    // 0x129600: 0xdfbf0000
    ctx->pc = 0x129600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_129604:
    // 0x129604: 0x804a55a
label_129608:
    if (ctx->pc == 0x129608u) {
        ctx->pc = 0x129608u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12960Cu;
        goto label_12960c;
    }
    ctx->pc = 0x129604u;
    ctx->pc = 0x129608u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x129568u;
    goto label_129568;
    ctx->pc = 0x12960Cu;
label_12960c:
    // 0x12960c: 0x0
    ctx->pc = 0x12960cu;
    // NOP
label_129610:
    // 0x129610: 0x27bdffd0
    ctx->pc = 0x129610u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_129614:
    // 0x129614: 0xffb00000
    ctx->pc = 0x129614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_129618:
    // 0x129618: 0x80802d
    ctx->pc = 0x129618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12961c:
    // 0x12961c: 0xffb30018
    ctx->pc = 0x12961cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_129620:
    // 0x129620: 0xc0982d
    ctx->pc = 0x129620u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_129624:
    // 0x129624: 0xffb40020
    ctx->pc = 0x129624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_129628:
    // 0x129628: 0xa0a02d
    ctx->pc = 0x129628u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12962c:
    // 0x12962c: 0x24040004
    ctx->pc = 0x12962cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
label_129630:
    // 0x129630: 0x200302d
    ctx->pc = 0x129630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_129634:
    // 0x129634: 0x282d
    ctx->pc = 0x129634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_129638:
    // 0x129638: 0x280382d
    ctx->pc = 0x129638u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12963c:
    // 0x12963c: 0xffb10008
    ctx->pc = 0x12963cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_129640:
    // 0x129640: 0xffb20010
    ctx->pc = 0x129640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_129644:
    // 0x129644: 0xffbf0028
    ctx->pc = 0x129644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_129648:
    // 0x129648: 0xc04a13e
label_12964c:
    if (ctx->pc == 0x12964Cu) {
        ctx->pc = 0x12964Cu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x129650u;
        goto label_129650;
    }
    ctx->pc = 0x129648u;
    SET_GPR_U32(ctx, 31, 0x129650u);
    ctx->pc = 0x12964Cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1284F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001284F8_0x1284f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129650u; }
    }
    if (ctx->pc != 0x129650u) { return; }
    ctx->pc = 0x129650u;
label_129650:
    // 0x129650: 0x16000003
label_129654:
    if (ctx->pc == 0x129654u) {
        ctx->pc = 0x129654u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        ctx->pc = 0x129658u;
        goto label_129658;
    }
    ctx->pc = 0x129650u;
    {
        const bool branch_taken_0x129650 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x129654u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x129650) {
            ctx->pc = 0x129660u;
            goto label_129660;
        }
    }
    ctx->pc = 0x129658u;
label_129658:
    // 0x129658: 0x10000009
label_12965c:
    if (ctx->pc == 0x12965Cu) {
        ctx->pc = 0x12965Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942576));
        ctx->pc = 0x129660u;
        goto label_129660;
    }
    ctx->pc = 0x129658u;
    {
        const bool branch_taken_0x129658 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12965Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942576));
        if (branch_taken_0x129658) {
            ctx->pc = 0x129680u;
            goto label_129680;
        }
    }
    ctx->pc = 0x129660u;
label_129660:
    // 0x129660: 0x6810003
label_129664:
    if (ctx->pc == 0x129664u) {
        ctx->pc = 0x129664u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        ctx->pc = 0x129668u;
        goto label_129668;
    }
    ctx->pc = 0x129660u;
    {
        const bool branch_taken_0x129660 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x129664u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x129660) {
            ctx->pc = 0x129670u;
            goto label_129670;
        }
    }
    ctx->pc = 0x129668u;
label_129668:
    // 0x129668: 0x10000005
label_12966c:
    if (ctx->pc == 0x12966Cu) {
        ctx->pc = 0x12966Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942616));
        ctx->pc = 0x129670u;
        goto label_129670;
    }
    ctx->pc = 0x129668u;
    {
        const bool branch_taken_0x129668 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12966Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942616));
        if (branch_taken_0x129668) {
            ctx->pc = 0x129680u;
            goto label_129680;
        }
    }
    ctx->pc = 0x129670u;
label_129670:
    // 0x129670: 0x56600007
label_129674:
    if (ctx->pc == 0x129674u) {
        ctx->pc = 0x129674u;
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->pc = 0x129678u;
        goto label_129678;
    }
    ctx->pc = 0x129670u;
    {
        const bool branch_taken_0x129670 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        if (branch_taken_0x129670) {
            ctx->pc = 0x129674u;
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
            ctx->pc = 0x129690u;
            goto label_129690;
        }
    }
    ctx->pc = 0x129678u;
label_129678:
    // 0x129678: 0x3c040024
    ctx->pc = 0x129678u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_12967c:
    // 0x12967c: 0x24849fc8
    ctx->pc = 0x12967cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942664));
label_129680:
    // 0x129680: 0xc04a034
label_129684:
    if (ctx->pc == 0x129684u) {
        ctx->pc = 0x129688u;
        goto label_129688;
    }
    ctx->pc = 0x129680u;
    SET_GPR_U32(ctx, 31, 0x129688u);
    ctx->pc = 0x1280D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001280D0_0x1280d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129688u; }
    }
    if (ctx->pc != 0x129688u) { return; }
    ctx->pc = 0x129688u;
label_129688:
    // 0x129688: 0x1000003c
label_12968c:
    if (ctx->pc == 0x12968Cu) {
        ctx->pc = 0x12968Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x129690u;
        goto label_129690;
    }
    ctx->pc = 0x129688u;
    {
        const bool branch_taken_0x129688 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12968Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x129688) {
            ctx->pc = 0x12977Cu;
            goto label_12977c;
        }
    }
    ctx->pc = 0x129690u;
label_129690:
    // 0x129690: 0x24030002
    ctx->pc = 0x129690u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_129694:
    // 0x129694: 0x10830039
label_129698:
    if (ctx->pc == 0x129698u) {
        ctx->pc = 0x129698u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12969Cu;
        goto label_12969c;
    }
    ctx->pc = 0x129694u;
    {
        const bool branch_taken_0x129694 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x129698u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x129694) {
            ctx->pc = 0x12977Cu;
            goto label_12977c;
        }
    }
    ctx->pc = 0x12969Cu;
label_12969c:
    // 0x12969c: 0x8e020008
    ctx->pc = 0x12969cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1296a0:
    // 0x1296a0: 0x10400005
label_1296a4:
    if (ctx->pc == 0x1296A4u) {
        ctx->pc = 0x1296A4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        ctx->pc = 0x1296A8u;
        goto label_1296a8;
    }
    ctx->pc = 0x1296A0u;
    {
        const bool branch_taken_0x1296a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1296A4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x1296a0) {
            ctx->pc = 0x1296B8u;
            goto label_1296b8;
        }
    }
    ctx->pc = 0x1296A8u;
label_1296a8:
    // 0x1296a8: 0xc04a034
label_1296ac:
    if (ctx->pc == 0x1296ACu) {
        ctx->pc = 0x1296ACu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942704));
        ctx->pc = 0x1296B0u;
        goto label_1296b0;
    }
    ctx->pc = 0x1296A8u;
    SET_GPR_U32(ctx, 31, 0x1296B0u);
    ctx->pc = 0x1296ACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942704));
    ctx->pc = 0x1280D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001280D0_0x1280d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1296B0u; }
    }
    if (ctx->pc != 0x1296B0u) { return; }
    ctx->pc = 0x1296B0u;
label_1296b0:
    // 0x1296b0: 0x10000032
label_1296b4:
    if (ctx->pc == 0x1296B4u) {
        ctx->pc = 0x1296B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1296B8u;
        goto label_1296b8;
    }
    ctx->pc = 0x1296B0u;
    {
        const bool branch_taken_0x1296b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1296B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1296b0) {
            ctx->pc = 0x12977Cu;
            goto label_12977c;
        }
    }
    ctx->pc = 0x1296B8u;
label_1296b8:
    // 0x1296b8: 0x1492c0
    ctx->pc = 0x1296b8u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 20), 11));
label_1296bc:
    // 0x1296bc: 0x260202d
    ctx->pc = 0x1296bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1296c0:
    // 0x1296c0: 0x240282d
    ctx->pc = 0x1296c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1296c4:
    // 0x1296c4: 0xc04fe2a
label_1296c8:
    if (ctx->pc == 0x1296C8u) {
        ctx->pc = 0x1296C8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1296CCu;
        goto label_1296cc;
    }
    ctx->pc = 0x1296C4u;
    SET_GPR_U32(ctx, 31, 0x1296CCu);
    ctx->pc = 0x1296C8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13F8A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F8A8_0x13f8a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1296CCu; }
    }
    if (ctx->pc != 0x1296CCu) { return; }
    ctx->pc = 0x1296CCu;
label_1296cc:
    // 0x1296cc: 0x40882d
    ctx->pc = 0x1296ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1296d0:
    // 0x1296d0: 0x1220002a
label_1296d4:
    if (ctx->pc == 0x1296D4u) {
        ctx->pc = 0x1296D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x1296D8u;
        goto label_1296d8;
    }
    ctx->pc = 0x1296D0u;
    {
        const bool branch_taken_0x1296d0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x1296D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x1296d0) {
            ctx->pc = 0x12977Cu;
            goto label_12977c;
        }
    }
    ctx->pc = 0x1296D8u;
label_1296d8:
    // 0x1296d8: 0xc049938
label_1296dc:
    if (ctx->pc == 0x1296DCu) {
        ctx->pc = 0x1296E0u;
        goto label_1296e0;
    }
    ctx->pc = 0x1296D8u;
    SET_GPR_U32(ctx, 31, 0x1296E0u);
    ctx->pc = 0x1264E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001264E0_0x1264e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1296E0u; }
    }
    if (ctx->pc != 0x1296E0u) { return; }
    ctx->pc = 0x1296E0u;
label_1296e0:
    // 0x1296e0: 0xae130024
    ctx->pc = 0x1296e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 19));
label_1296e4:
    // 0x1296e4: 0xae110008
    ctx->pc = 0x1296e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
label_1296e8:
    // 0x1296e8: 0x3c040021
    ctx->pc = 0x1296e8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)33 << 16));
label_1296ec:
    // 0x1296ec: 0xae120028
    ctx->pc = 0x1296ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 18));
label_1296f0:
    // 0x1296f0: 0x24030001
    ctx->pc = 0x1296f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1296f4:
    // 0x1296f4: 0x8c82d100
    ctx->pc = 0x1296f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294955264)));
label_1296f8:
    // 0x1296f8: 0x14430003
label_1296fc:
    if (ctx->pc == 0x1296FCu) {
        ctx->pc = 0x1296FCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x129700u;
        goto label_129700;
    }
    ctx->pc = 0x1296F8u;
    {
        const bool branch_taken_0x1296f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1296FCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1296f8) {
            ctx->pc = 0x129708u;
            goto label_129708;
        }
    }
    ctx->pc = 0x129700u;
label_129700:
    // 0x129700: 0xc04a0ca
label_129704:
    if (ctx->pc == 0x129704u) {
        ctx->pc = 0x129704u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x129708u;
        goto label_129708;
    }
    ctx->pc = 0x129700u;
    SET_GPR_U32(ctx, 31, 0x129708u);
    ctx->pc = 0x129704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x128328u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00128328_0x128328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129708u; }
    }
    if (ctx->pc != 0x129708u) { return; }
    ctx->pc = 0x129708u;
label_129708:
    // 0x129708: 0xc04993e
label_12970c:
    if (ctx->pc == 0x12970Cu) {
        ctx->pc = 0x129710u;
        goto label_129710;
    }
    ctx->pc = 0x129708u;
    SET_GPR_U32(ctx, 31, 0x129710u);
    ctx->pc = 0x1264F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001264F8_0x1264f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129710u; }
    }
    if (ctx->pc != 0x129710u) { return; }
    ctx->pc = 0x129710u;
label_129710:
    // 0x129710: 0x200202d
    ctx->pc = 0x129710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_129714:
    // 0x129714: 0x8e060008
    ctx->pc = 0x129714u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_129718:
    // 0x129718: 0xc04a51a
label_12971c:
    if (ctx->pc == 0x12971Cu) {
        ctx->pc = 0x12971Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x129720u;
        goto label_129720;
    }
    ctx->pc = 0x129718u;
    SET_GPR_U32(ctx, 31, 0x129720u);
    ctx->pc = 0x12971Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129468u;
    goto label_129468;
    ctx->pc = 0x129720u;
label_129720:
    // 0x129720: 0x40882d
    ctx->pc = 0x129720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_129724:
    // 0x129724: 0x5e20000e
label_129728:
    if (ctx->pc == 0x129728u) {
        ctx->pc = 0x129728u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x12972Cu;
        goto label_12972c;
    }
    ctx->pc = 0x129724u;
    {
        const bool branch_taken_0x129724 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x129724) {
            ctx->pc = 0x129728u;
            WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x129760u;
            goto label_129760;
        }
    }
    ctx->pc = 0x12972Cu;
label_12972c:
    // 0x12972c: 0xc049938
label_129730:
    if (ctx->pc == 0x129730u) {
        ctx->pc = 0x129734u;
        goto label_129734;
    }
    ctx->pc = 0x12972Cu;
    SET_GPR_U32(ctx, 31, 0x129734u);
    ctx->pc = 0x1264E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001264E0_0x1264e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129734u; }
    }
    if (ctx->pc != 0x129734u) { return; }
    ctx->pc = 0x129734u;
label_129734:
    // 0x129734: 0x8e040008
    ctx->pc = 0x129734u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_129738:
    // 0x129738: 0x10800006
label_12973c:
    if (ctx->pc == 0x12973Cu) {
        ctx->pc = 0x129740u;
        goto label_129740;
    }
    ctx->pc = 0x129738u;
    {
        const bool branch_taken_0x129738 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x129738) {
            ctx->pc = 0x129754u;
            goto label_129754;
        }
    }
    ctx->pc = 0x129740u;
label_129740:
    // 0x129740: 0x8c830000
    ctx->pc = 0x129740u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_129744:
    // 0x129744: 0x8c62000c
    ctx->pc = 0x129744u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_129748:
    // 0x129748: 0x40f809
label_12974c:
    if (ctx->pc == 0x12974Cu) {
        ctx->pc = 0x129750u;
        goto label_129750;
    }
    ctx->pc = 0x129748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x129750u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x129468u: goto label_129468;
            case 0x12946Cu: goto label_12946c;
            case 0x129470u: goto label_129470;
            case 0x129474u: goto label_129474;
            case 0x129478u: goto label_129478;
            case 0x12947Cu: goto label_12947c;
            case 0x129480u: goto label_129480;
            case 0x129484u: goto label_129484;
            case 0x129488u: goto label_129488;
            case 0x12948Cu: goto label_12948c;
            case 0x129490u: goto label_129490;
            case 0x129494u: goto label_129494;
            case 0x129498u: goto label_129498;
            case 0x12949Cu: goto label_12949c;
            case 0x1294A0u: goto label_1294a0;
            case 0x1294A4u: goto label_1294a4;
            case 0x1294A8u: goto label_1294a8;
            case 0x1294ACu: goto label_1294ac;
            case 0x1294B0u: goto label_1294b0;
            case 0x1294B4u: goto label_1294b4;
            case 0x1294B8u: goto label_1294b8;
            case 0x1294BCu: goto label_1294bc;
            case 0x1294C0u: goto label_1294c0;
            case 0x1294C4u: goto label_1294c4;
            case 0x1294C8u: goto label_1294c8;
            case 0x1294CCu: goto label_1294cc;
            case 0x1294D0u: goto label_1294d0;
            case 0x1294D4u: goto label_1294d4;
            case 0x1294D8u: goto label_1294d8;
            case 0x1294DCu: goto label_1294dc;
            case 0x1294E0u: goto label_1294e0;
            case 0x1294E4u: goto label_1294e4;
            case 0x1294E8u: goto label_1294e8;
            case 0x1294ECu: goto label_1294ec;
            case 0x1294F0u: goto label_1294f0;
            case 0x1294F4u: goto label_1294f4;
            case 0x1294F8u: goto label_1294f8;
            case 0x1294FCu: goto label_1294fc;
            case 0x129500u: goto label_129500;
            case 0x129504u: goto label_129504;
            case 0x129508u: goto label_129508;
            case 0x12950Cu: goto label_12950c;
            case 0x129510u: goto label_129510;
            case 0x129514u: goto label_129514;
            case 0x129518u: goto label_129518;
            case 0x12951Cu: goto label_12951c;
            case 0x129520u: goto label_129520;
            case 0x129524u: goto label_129524;
            case 0x129528u: goto label_129528;
            case 0x12952Cu: goto label_12952c;
            case 0x129530u: goto label_129530;
            case 0x129534u: goto label_129534;
            case 0x129538u: goto label_129538;
            case 0x12953Cu: goto label_12953c;
            case 0x129540u: goto label_129540;
            case 0x129544u: goto label_129544;
            case 0x129548u: goto label_129548;
            case 0x12954Cu: goto label_12954c;
            case 0x129550u: goto label_129550;
            case 0x129554u: goto label_129554;
            case 0x129558u: goto label_129558;
            case 0x12955Cu: goto label_12955c;
            case 0x129560u: goto label_129560;
            case 0x129564u: goto label_129564;
            case 0x129568u: goto label_129568;
            case 0x12956Cu: goto label_12956c;
            case 0x129570u: goto label_129570;
            case 0x129574u: goto label_129574;
            case 0x129578u: goto label_129578;
            case 0x12957Cu: goto label_12957c;
            case 0x129580u: goto label_129580;
            case 0x129584u: goto label_129584;
            case 0x129588u: goto label_129588;
            case 0x12958Cu: goto label_12958c;
            case 0x129590u: goto label_129590;
            case 0x129594u: goto label_129594;
            case 0x129598u: goto label_129598;
            case 0x12959Cu: goto label_12959c;
            case 0x1295A0u: goto label_1295a0;
            case 0x1295A4u: goto label_1295a4;
            case 0x1295A8u: goto label_1295a8;
            case 0x1295ACu: goto label_1295ac;
            case 0x1295B0u: goto label_1295b0;
            case 0x1295B4u: goto label_1295b4;
            case 0x1295B8u: goto label_1295b8;
            case 0x1295BCu: goto label_1295bc;
            case 0x1295C0u: goto label_1295c0;
            case 0x1295C4u: goto label_1295c4;
            case 0x1295C8u: goto label_1295c8;
            case 0x1295CCu: goto label_1295cc;
            case 0x1295D0u: goto label_1295d0;
            case 0x1295D4u: goto label_1295d4;
            case 0x1295D8u: goto label_1295d8;
            case 0x1295DCu: goto label_1295dc;
            case 0x1295E0u: goto label_1295e0;
            case 0x1295E4u: goto label_1295e4;
            case 0x1295E8u: goto label_1295e8;
            case 0x1295ECu: goto label_1295ec;
            case 0x1295F0u: goto label_1295f0;
            case 0x1295F4u: goto label_1295f4;
            case 0x1295F8u: goto label_1295f8;
            case 0x1295FCu: goto label_1295fc;
            case 0x129600u: goto label_129600;
            case 0x129604u: goto label_129604;
            case 0x129608u: goto label_129608;
            case 0x12960Cu: goto label_12960c;
            case 0x129610u: goto label_129610;
            case 0x129614u: goto label_129614;
            case 0x129618u: goto label_129618;
            case 0x12961Cu: goto label_12961c;
            case 0x129620u: goto label_129620;
            case 0x129624u: goto label_129624;
            case 0x129628u: goto label_129628;
            case 0x12962Cu: goto label_12962c;
            case 0x129630u: goto label_129630;
            case 0x129634u: goto label_129634;
            case 0x129638u: goto label_129638;
            case 0x12963Cu: goto label_12963c;
            case 0x129640u: goto label_129640;
            case 0x129644u: goto label_129644;
            case 0x129648u: goto label_129648;
            case 0x12964Cu: goto label_12964c;
            case 0x129650u: goto label_129650;
            case 0x129654u: goto label_129654;
            case 0x129658u: goto label_129658;
            case 0x12965Cu: goto label_12965c;
            case 0x129660u: goto label_129660;
            case 0x129664u: goto label_129664;
            case 0x129668u: goto label_129668;
            case 0x12966Cu: goto label_12966c;
            case 0x129670u: goto label_129670;
            case 0x129674u: goto label_129674;
            case 0x129678u: goto label_129678;
            case 0x12967Cu: goto label_12967c;
            case 0x129680u: goto label_129680;
            case 0x129684u: goto label_129684;
            case 0x129688u: goto label_129688;
            case 0x12968Cu: goto label_12968c;
            case 0x129690u: goto label_129690;
            case 0x129694u: goto label_129694;
            case 0x129698u: goto label_129698;
            case 0x12969Cu: goto label_12969c;
            case 0x1296A0u: goto label_1296a0;
            case 0x1296A4u: goto label_1296a4;
            case 0x1296A8u: goto label_1296a8;
            case 0x1296ACu: goto label_1296ac;
            case 0x1296B0u: goto label_1296b0;
            case 0x1296B4u: goto label_1296b4;
            case 0x1296B8u: goto label_1296b8;
            case 0x1296BCu: goto label_1296bc;
            case 0x1296C0u: goto label_1296c0;
            case 0x1296C4u: goto label_1296c4;
            case 0x1296C8u: goto label_1296c8;
            case 0x1296CCu: goto label_1296cc;
            case 0x1296D0u: goto label_1296d0;
            case 0x1296D4u: goto label_1296d4;
            case 0x1296D8u: goto label_1296d8;
            case 0x1296DCu: goto label_1296dc;
            case 0x1296E0u: goto label_1296e0;
            case 0x1296E4u: goto label_1296e4;
            case 0x1296E8u: goto label_1296e8;
            case 0x1296ECu: goto label_1296ec;
            case 0x1296F0u: goto label_1296f0;
            case 0x1296F4u: goto label_1296f4;
            case 0x1296F8u: goto label_1296f8;
            case 0x1296FCu: goto label_1296fc;
            case 0x129700u: goto label_129700;
            case 0x129704u: goto label_129704;
            case 0x129708u: goto label_129708;
            case 0x12970Cu: goto label_12970c;
            case 0x129710u: goto label_129710;
            case 0x129714u: goto label_129714;
            case 0x129718u: goto label_129718;
            case 0x12971Cu: goto label_12971c;
            case 0x129720u: goto label_129720;
            case 0x129724u: goto label_129724;
            case 0x129728u: goto label_129728;
            case 0x12972Cu: goto label_12972c;
            case 0x129730u: goto label_129730;
            case 0x129734u: goto label_129734;
            case 0x129738u: goto label_129738;
            case 0x12973Cu: goto label_12973c;
            case 0x129740u: goto label_129740;
            case 0x129744u: goto label_129744;
            case 0x129748u: goto label_129748;
            case 0x12974Cu: goto label_12974c;
            case 0x129750u: goto label_129750;
            case 0x129754u: goto label_129754;
            case 0x129758u: goto label_129758;
            case 0x12975Cu: goto label_12975c;
            case 0x129760u: goto label_129760;
            case 0x129764u: goto label_129764;
            case 0x129768u: goto label_129768;
            case 0x12976Cu: goto label_12976c;
            case 0x129770u: goto label_129770;
            case 0x129774u: goto label_129774;
            case 0x129778u: goto label_129778;
            case 0x12977Cu: goto label_12977c;
            case 0x129780u: goto label_129780;
            case 0x129784u: goto label_129784;
            case 0x129788u: goto label_129788;
            case 0x12978Cu: goto label_12978c;
            case 0x129790u: goto label_129790;
            case 0x129794u: goto label_129794;
            case 0x129798u: goto label_129798;
            case 0x12979Cu: goto label_12979c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x129750u; }
            if (ctx->pc != 0x129750u) { return; }
        }
    }
    ctx->pc = 0x129750u;
label_129750:
    // 0x129750: 0xae000008
    ctx->pc = 0x129750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_129754:
    // 0x129754: 0xc04993e
label_129758:
    if (ctx->pc == 0x129758u) {
        ctx->pc = 0x12975Cu;
        goto label_12975c;
    }
    ctx->pc = 0x129754u;
    SET_GPR_U32(ctx, 31, 0x12975Cu);
    ctx->pc = 0x1264F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001264F8_0x1264f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12975Cu; }
    }
    if (ctx->pc != 0x12975Cu) { return; }
    ctx->pc = 0x12975Cu;
label_12975c:
    // 0x12975c: 0xa2000002
    ctx->pc = 0x12975cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_129760:
    // 0x129760: 0x200302d
    ctx->pc = 0x129760u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_129764:
    // 0x129764: 0x280382d
    ctx->pc = 0x129764u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_129768:
    // 0x129768: 0x260402d
    ctx->pc = 0x129768u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12976c:
    // 0x12976c: 0x24040004
    ctx->pc = 0x12976cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
label_129770:
    // 0x129770: 0xc04a13e
label_129774:
    if (ctx->pc == 0x129774u) {
        ctx->pc = 0x129774u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x129778u;
        goto label_129778;
    }
    ctx->pc = 0x129770u;
    SET_GPR_U32(ctx, 31, 0x129778u);
    ctx->pc = 0x129774u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1284F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001284F8_0x1284f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129778u; }
    }
    if (ctx->pc != 0x129778u) { return; }
    ctx->pc = 0x129778u;
label_129778:
    // 0x129778: 0x220102d
    ctx->pc = 0x129778u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12977c:
    // 0x12977c: 0xdfb00000
    ctx->pc = 0x12977cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_129780:
    // 0x129780: 0xdfb10008
    ctx->pc = 0x129780u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_129784:
    // 0x129784: 0xdfb20010
    ctx->pc = 0x129784u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_129788:
    // 0x129788: 0xdfb30018
    ctx->pc = 0x129788u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_12978c:
    // 0x12978c: 0xdfb40020
    ctx->pc = 0x12978cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_129790:
    // 0x129790: 0xdfbf0028
    ctx->pc = 0x129790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_129794:
    // 0x129794: 0x3e00008
label_129798:
    if (ctx->pc == 0x129798u) {
        ctx->pc = 0x129798u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x12979Cu;
        goto label_12979c;
    }
    ctx->pc = 0x129794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129798u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x129468u: goto label_129468;
            case 0x12946Cu: goto label_12946c;
            case 0x129470u: goto label_129470;
            case 0x129474u: goto label_129474;
            case 0x129478u: goto label_129478;
            case 0x12947Cu: goto label_12947c;
            case 0x129480u: goto label_129480;
            case 0x129484u: goto label_129484;
            case 0x129488u: goto label_129488;
            case 0x12948Cu: goto label_12948c;
            case 0x129490u: goto label_129490;
            case 0x129494u: goto label_129494;
            case 0x129498u: goto label_129498;
            case 0x12949Cu: goto label_12949c;
            case 0x1294A0u: goto label_1294a0;
            case 0x1294A4u: goto label_1294a4;
            case 0x1294A8u: goto label_1294a8;
            case 0x1294ACu: goto label_1294ac;
            case 0x1294B0u: goto label_1294b0;
            case 0x1294B4u: goto label_1294b4;
            case 0x1294B8u: goto label_1294b8;
            case 0x1294BCu: goto label_1294bc;
            case 0x1294C0u: goto label_1294c0;
            case 0x1294C4u: goto label_1294c4;
            case 0x1294C8u: goto label_1294c8;
            case 0x1294CCu: goto label_1294cc;
            case 0x1294D0u: goto label_1294d0;
            case 0x1294D4u: goto label_1294d4;
            case 0x1294D8u: goto label_1294d8;
            case 0x1294DCu: goto label_1294dc;
            case 0x1294E0u: goto label_1294e0;
            case 0x1294E4u: goto label_1294e4;
            case 0x1294E8u: goto label_1294e8;
            case 0x1294ECu: goto label_1294ec;
            case 0x1294F0u: goto label_1294f0;
            case 0x1294F4u: goto label_1294f4;
            case 0x1294F8u: goto label_1294f8;
            case 0x1294FCu: goto label_1294fc;
            case 0x129500u: goto label_129500;
            case 0x129504u: goto label_129504;
            case 0x129508u: goto label_129508;
            case 0x12950Cu: goto label_12950c;
            case 0x129510u: goto label_129510;
            case 0x129514u: goto label_129514;
            case 0x129518u: goto label_129518;
            case 0x12951Cu: goto label_12951c;
            case 0x129520u: goto label_129520;
            case 0x129524u: goto label_129524;
            case 0x129528u: goto label_129528;
            case 0x12952Cu: goto label_12952c;
            case 0x129530u: goto label_129530;
            case 0x129534u: goto label_129534;
            case 0x129538u: goto label_129538;
            case 0x12953Cu: goto label_12953c;
            case 0x129540u: goto label_129540;
            case 0x129544u: goto label_129544;
            case 0x129548u: goto label_129548;
            case 0x12954Cu: goto label_12954c;
            case 0x129550u: goto label_129550;
            case 0x129554u: goto label_129554;
            case 0x129558u: goto label_129558;
            case 0x12955Cu: goto label_12955c;
            case 0x129560u: goto label_129560;
            case 0x129564u: goto label_129564;
            case 0x129568u: goto label_129568;
            case 0x12956Cu: goto label_12956c;
            case 0x129570u: goto label_129570;
            case 0x129574u: goto label_129574;
            case 0x129578u: goto label_129578;
            case 0x12957Cu: goto label_12957c;
            case 0x129580u: goto label_129580;
            case 0x129584u: goto label_129584;
            case 0x129588u: goto label_129588;
            case 0x12958Cu: goto label_12958c;
            case 0x129590u: goto label_129590;
            case 0x129594u: goto label_129594;
            case 0x129598u: goto label_129598;
            case 0x12959Cu: goto label_12959c;
            case 0x1295A0u: goto label_1295a0;
            case 0x1295A4u: goto label_1295a4;
            case 0x1295A8u: goto label_1295a8;
            case 0x1295ACu: goto label_1295ac;
            case 0x1295B0u: goto label_1295b0;
            case 0x1295B4u: goto label_1295b4;
            case 0x1295B8u: goto label_1295b8;
            case 0x1295BCu: goto label_1295bc;
            case 0x1295C0u: goto label_1295c0;
            case 0x1295C4u: goto label_1295c4;
            case 0x1295C8u: goto label_1295c8;
            case 0x1295CCu: goto label_1295cc;
            case 0x1295D0u: goto label_1295d0;
            case 0x1295D4u: goto label_1295d4;
            case 0x1295D8u: goto label_1295d8;
            case 0x1295DCu: goto label_1295dc;
            case 0x1295E0u: goto label_1295e0;
            case 0x1295E4u: goto label_1295e4;
            case 0x1295E8u: goto label_1295e8;
            case 0x1295ECu: goto label_1295ec;
            case 0x1295F0u: goto label_1295f0;
            case 0x1295F4u: goto label_1295f4;
            case 0x1295F8u: goto label_1295f8;
            case 0x1295FCu: goto label_1295fc;
            case 0x129600u: goto label_129600;
            case 0x129604u: goto label_129604;
            case 0x129608u: goto label_129608;
            case 0x12960Cu: goto label_12960c;
            case 0x129610u: goto label_129610;
            case 0x129614u: goto label_129614;
            case 0x129618u: goto label_129618;
            case 0x12961Cu: goto label_12961c;
            case 0x129620u: goto label_129620;
            case 0x129624u: goto label_129624;
            case 0x129628u: goto label_129628;
            case 0x12962Cu: goto label_12962c;
            case 0x129630u: goto label_129630;
            case 0x129634u: goto label_129634;
            case 0x129638u: goto label_129638;
            case 0x12963Cu: goto label_12963c;
            case 0x129640u: goto label_129640;
            case 0x129644u: goto label_129644;
            case 0x129648u: goto label_129648;
            case 0x12964Cu: goto label_12964c;
            case 0x129650u: goto label_129650;
            case 0x129654u: goto label_129654;
            case 0x129658u: goto label_129658;
            case 0x12965Cu: goto label_12965c;
            case 0x129660u: goto label_129660;
            case 0x129664u: goto label_129664;
            case 0x129668u: goto label_129668;
            case 0x12966Cu: goto label_12966c;
            case 0x129670u: goto label_129670;
            case 0x129674u: goto label_129674;
            case 0x129678u: goto label_129678;
            case 0x12967Cu: goto label_12967c;
            case 0x129680u: goto label_129680;
            case 0x129684u: goto label_129684;
            case 0x129688u: goto label_129688;
            case 0x12968Cu: goto label_12968c;
            case 0x129690u: goto label_129690;
            case 0x129694u: goto label_129694;
            case 0x129698u: goto label_129698;
            case 0x12969Cu: goto label_12969c;
            case 0x1296A0u: goto label_1296a0;
            case 0x1296A4u: goto label_1296a4;
            case 0x1296A8u: goto label_1296a8;
            case 0x1296ACu: goto label_1296ac;
            case 0x1296B0u: goto label_1296b0;
            case 0x1296B4u: goto label_1296b4;
            case 0x1296B8u: goto label_1296b8;
            case 0x1296BCu: goto label_1296bc;
            case 0x1296C0u: goto label_1296c0;
            case 0x1296C4u: goto label_1296c4;
            case 0x1296C8u: goto label_1296c8;
            case 0x1296CCu: goto label_1296cc;
            case 0x1296D0u: goto label_1296d0;
            case 0x1296D4u: goto label_1296d4;
            case 0x1296D8u: goto label_1296d8;
            case 0x1296DCu: goto label_1296dc;
            case 0x1296E0u: goto label_1296e0;
            case 0x1296E4u: goto label_1296e4;
            case 0x1296E8u: goto label_1296e8;
            case 0x1296ECu: goto label_1296ec;
            case 0x1296F0u: goto label_1296f0;
            case 0x1296F4u: goto label_1296f4;
            case 0x1296F8u: goto label_1296f8;
            case 0x1296FCu: goto label_1296fc;
            case 0x129700u: goto label_129700;
            case 0x129704u: goto label_129704;
            case 0x129708u: goto label_129708;
            case 0x12970Cu: goto label_12970c;
            case 0x129710u: goto label_129710;
            case 0x129714u: goto label_129714;
            case 0x129718u: goto label_129718;
            case 0x12971Cu: goto label_12971c;
            case 0x129720u: goto label_129720;
            case 0x129724u: goto label_129724;
            case 0x129728u: goto label_129728;
            case 0x12972Cu: goto label_12972c;
            case 0x129730u: goto label_129730;
            case 0x129734u: goto label_129734;
            case 0x129738u: goto label_129738;
            case 0x12973Cu: goto label_12973c;
            case 0x129740u: goto label_129740;
            case 0x129744u: goto label_129744;
            case 0x129748u: goto label_129748;
            case 0x12974Cu: goto label_12974c;
            case 0x129750u: goto label_129750;
            case 0x129754u: goto label_129754;
            case 0x129758u: goto label_129758;
            case 0x12975Cu: goto label_12975c;
            case 0x129760u: goto label_129760;
            case 0x129764u: goto label_129764;
            case 0x129768u: goto label_129768;
            case 0x12976Cu: goto label_12976c;
            case 0x129770u: goto label_129770;
            case 0x129774u: goto label_129774;
            case 0x129778u: goto label_129778;
            case 0x12977Cu: goto label_12977c;
            case 0x129780u: goto label_129780;
            case 0x129784u: goto label_129784;
            case 0x129788u: goto label_129788;
            case 0x12978Cu: goto label_12978c;
            case 0x129790u: goto label_129790;
            case 0x129794u: goto label_129794;
            case 0x129798u: goto label_129798;
            case 0x12979Cu: goto label_12979c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12979Cu;
label_12979c:
    // 0x12979c: 0x0
    ctx->pc = 0x12979cu;
    // NOP
}
