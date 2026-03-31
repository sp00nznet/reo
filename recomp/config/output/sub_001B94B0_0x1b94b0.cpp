#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B94B0
// Address: 0x1b94b0 - 0x1b9940
void sub_001B94B0_0x1b94b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b94b0u;

label_1b94b0:
    // 0x1b94b0: 0x27bdff00
    ctx->pc = 0x1b94b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967040));
label_1b94b4:
    // 0x1b94b4: 0xffbf0060
    ctx->pc = 0x1b94b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1b94b8:
    // 0x1b94b8: 0x7fb40050
    ctx->pc = 0x1b94b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1b94bc:
    // 0x1b94bc: 0x7fb30040
    ctx->pc = 0x1b94bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1b94c0:
    // 0x1b94c0: 0x80a02d
    ctx->pc = 0x1b94c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b94c4:
    // 0x1b94c4: 0x7fb20030
    ctx->pc = 0x1b94c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1b94c8:
    // 0x1b94c8: 0xa0982d
    ctx->pc = 0x1b94c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b94cc:
    // 0x1b94cc: 0x7fb10020
    ctx->pc = 0x1b94ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1b94d0:
    // 0x1b94d0: 0x3c050032
    ctx->pc = 0x1b94d0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
label_1b94d4:
    // 0x1b94d4: 0x7fb00010
    ctx->pc = 0x1b94d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1b94d8:
    // 0x1b94d8: 0xc0902d
    ctx->pc = 0x1b94d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b94dc:
    // 0x1b94dc: 0xe0882d
    ctx->pc = 0x1b94dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1b94e0:
    // 0x1b94e0: 0x27a40070
    ctx->pc = 0x1b94e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 112));
label_1b94e4:
    // 0x1b94e4: 0x24a540e0
    ctx->pc = 0x1b94e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16608));
label_1b94e8:
    // 0x1b94e8: 0xc06450c
label_1b94ec:
    if (ctx->pc == 0x1B94ECu) {
        ctx->pc = 0x1B94ECu;
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x1B94F0u;
        goto label_1b94f0;
    }
    ctx->pc = 0x1B94E8u;
    SET_GPR_U32(ctx, 31, 0x1B94F0u);
    ctx->pc = 0x1B94ECu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->pc = 0x191430u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00191430_0x191430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B94F0u; }
    }
    if (ctx->pc != 0x1B94F0u) { return; }
    ctx->pc = 0x1B94F0u;
label_1b94f0:
    // 0x1b94f0: 0xc6830004
    ctx->pc = 0x1b94f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b94f4:
    // 0x1b94f4: 0xc7a200a4
    ctx->pc = 0x1b94f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b94f8:
    // 0x1b94f8: 0xc6850000
    ctx->pc = 0x1b94f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1b94fc:
    // 0x1b94fc: 0xc7a400a0
    ctx->pc = 0x1b94fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1b9500:
    // 0x1b9500: 0xc6810008
    ctx->pc = 0x1b9500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b9504:
    // 0x1b9504: 0xc7a000a8
    ctx->pc = 0x1b9504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b9508:
    // 0x1b9508: 0x460218c1
    ctx->pc = 0x1b9508u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1b950c:
    // 0x1b950c: 0x46000881
    ctx->pc = 0x1b950cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b9510:
    // 0x1b9510: 0x46042901
    ctx->pc = 0x1b9510u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_1b9514:
    // 0x1b9514: 0x46042042
    ctx->pc = 0x1b9514u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
label_1b9518:
    // 0x1b9518: 0x46031802
    ctx->pc = 0x1b9518u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_1b951c:
    // 0x1b951c: 0x46000818
    ctx->pc = 0x1b951cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b9520:
    // 0x1b9520: 0xc0dc620
label_1b9524:
    if (ctx->pc == 0x1B9524u) {
        ctx->pc = 0x1B9524u;
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
        ctx->pc = 0x1B9528u;
        goto label_1b9528;
    }
    ctx->pc = 0x1B9520u;
    SET_GPR_U32(ctx, 31, 0x1B9528u);
    ctx->pc = 0x1B9524u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    ctx->pc = 0x371880u;
    {
        auto targetFn = runtime->lookupFunction(0x371880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9528u; }
        if (ctx->pc != 0x1B9528u) { return; }
    }
    ctx->pc = 0x1B9528u;
label_1b9528:
    // 0x1b9528: 0x46000506
    ctx->pc = 0x1b9528u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1b952c:
    // 0x1b952c: 0x3c024596
    ctx->pc = 0x1b952cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17814 << 16));
label_1b9530:
    // 0x1b9530: 0x44820000
    ctx->pc = 0x1b9530u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1b9534:
    // 0x1b9534: 0x2410003f
    ctx->pc = 0x1b9534u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 63));
label_1b9538:
    // 0x1b9538: 0xae300000
    ctx->pc = 0x1b9538u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_1b953c:
    // 0x1b953c: 0x4600a034
    ctx->pc = 0x1b953cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b9540:
    // 0x1b9540: 0x45010003
label_1b9544:
    if (ctx->pc == 0x1B9544u) {
        ctx->pc = 0x1B9544u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x1B9548u;
        goto label_1b9548;
    }
    ctx->pc = 0x1B9540u;
    {
        const bool branch_taken_0x1b9540 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B9544u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x1b9540) {
            ctx->pc = 0x1B9550u;
            goto label_1b9550;
        }
    }
    ctx->pc = 0x1B9548u;
label_1b9548:
    // 0x1b9548: 0x10000055
label_1b954c:
    if (ctx->pc == 0x1B954Cu) {
        ctx->pc = 0x1B954Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B9550u;
        goto label_1b9550;
    }
    ctx->pc = 0x1B9548u;
    {
        const bool branch_taken_0x1b9548 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B954Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b9548) {
            ctx->pc = 0x1B96A0u;
            goto label_1b96a0;
        }
    }
    ctx->pc = 0x1B9550u;
label_1b9550:
    // 0x1b9550: 0x3c0242c8
    ctx->pc = 0x1b9550u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17096 << 16));
label_1b9554:
    // 0x1b9554: 0x44820000
    ctx->pc = 0x1b9554u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1b9558:
    // 0x1b9558: 0x0
    ctx->pc = 0x1b9558u;
    // NOP
label_1b955c:
    // 0x1b955c: 0x4600a036
    ctx->pc = 0x1b955cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b9560:
    // 0x1b9560: 0x45000003
label_1b9564:
    if (ctx->pc == 0x1B9564u) {
        ctx->pc = 0x1B9564u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1B9568u;
        goto label_1b9568;
    }
    ctx->pc = 0x1B9560u;
    {
        const bool branch_taken_0x1b9560 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B9564u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 176));
        if (branch_taken_0x1b9560) {
            ctx->pc = 0x1B9570u;
            goto label_1b9570;
        }
    }
    ctx->pc = 0x1B9568u;
label_1b9568:
    // 0x1b9568: 0x1000004a
label_1b956c:
    if (ctx->pc == 0x1B956Cu) {
        ctx->pc = 0x1B956Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x1B9570u;
        goto label_1b9570;
    }
    ctx->pc = 0x1B9568u;
    {
        const bool branch_taken_0x1b9568 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B956Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
        if (branch_taken_0x1b9568) {
            ctx->pc = 0x1B9694u;
            goto label_1b9694;
        }
    }
    ctx->pc = 0x1B9570u;
label_1b9570:
    // 0x1b9570: 0xc063f7c
label_1b9574:
    if (ctx->pc == 0x1B9574u) {
        ctx->pc = 0x1B9578u;
        goto label_1b9578;
    }
    ctx->pc = 0x1B9570u;
    SET_GPR_U32(ctx, 31, 0x1B9578u);
    ctx->pc = 0x18FDF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018FDF0_0x18fdf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9578u; }
    }
    if (ctx->pc != 0x1B9578u) { return; }
    ctx->pc = 0x1B9578u;
label_1b9578:
    // 0x1b9578: 0x27a500b0
    ctx->pc = 0x1b9578u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 176));
label_1b957c:
    // 0x1b957c: 0xc06bde0
label_1b9580:
    if (ctx->pc == 0x1B9580u) {
        ctx->pc = 0x1B9580u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 26));
        ctx->pc = 0x1B9584u;
        goto label_1b9584;
    }
    ctx->pc = 0x1B957Cu;
    SET_GPR_U32(ctx, 31, 0x1B9584u);
    ctx->pc = 0x1B9580u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 26));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9584u; }
    }
    if (ctx->pc != 0x1B9584u) { return; }
    ctx->pc = 0x1B9584u;
label_1b9584:
    // 0x1b9584: 0x280282d
    ctx->pc = 0x1b9584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b9588:
    // 0x1b9588: 0xc064810
label_1b958c:
    if (ctx->pc == 0x1B958Cu) {
        ctx->pc = 0x1B958Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x1B9590u;
        goto label_1b9590;
    }
    ctx->pc = 0x1B9588u;
    SET_GPR_U32(ctx, 31, 0x1B9590u);
    ctx->pc = 0x1B958Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 240));
    ctx->pc = 0x192040u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00192040_0x192040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9590u; }
    }
    if (ctx->pc != 0x1B9590u) { return; }
    ctx->pc = 0x1B9590u;
label_1b9590:
    // 0x1b9590: 0xc7a100f0
    ctx->pc = 0x1b9590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b9594:
    // 0x1b9594: 0x44800000
    ctx->pc = 0x1b9594u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_1b9598:
    // 0x1b9598: 0x0
    ctx->pc = 0x1b9598u;
    // NOP
label_1b959c:
    // 0x1b959c: 0x46000834
    ctx->pc = 0x1b959cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b95a0:
    // 0x1b95a0: 0x45000002
label_1b95a4:
    if (ctx->pc == 0x1B95A4u) {
        ctx->pc = 0x1B95A8u;
        goto label_1b95a8;
    }
    ctx->pc = 0x1B95A0u;
    {
        const bool branch_taken_0x1b95a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b95a0) {
            ctx->pc = 0x1B95ACu;
            goto label_1b95ac;
        }
    }
    ctx->pc = 0x1B95A8u;
label_1b95a8:
    // 0x1b95a8: 0xe7a000f0
    ctx->pc = 0x1b95a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1b95ac:
    // 0x1b95ac: 0xc7a100f0
    ctx->pc = 0x1b95acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b95b0:
    // 0x1b95b0: 0x3c024420
    ctx->pc = 0x1b95b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17440 << 16));
label_1b95b4:
    // 0x1b95b4: 0x44820000
    ctx->pc = 0x1b95b4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1b95b8:
    // 0x1b95b8: 0x0
    ctx->pc = 0x1b95b8u;
    // NOP
label_1b95bc:
    // 0x1b95bc: 0x46000836
    ctx->pc = 0x1b95bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b95c0:
    // 0x1b95c0: 0x45010002
label_1b95c4:
    if (ctx->pc == 0x1B95C4u) {
        ctx->pc = 0x1B95C8u;
        goto label_1b95c8;
    }
    ctx->pc = 0x1B95C0u;
    {
        const bool branch_taken_0x1b95c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b95c0) {
            ctx->pc = 0x1B95CCu;
            goto label_1b95cc;
        }
    }
    ctx->pc = 0x1B95C8u;
label_1b95c8:
    // 0x1b95c8: 0xe7a000f0
    ctx->pc = 0x1b95c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1b95cc:
    // 0x1b95cc: 0xc7a100fc
    ctx->pc = 0x1b95ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b95d0:
    // 0x1b95d0: 0x44800000
    ctx->pc = 0x1b95d0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_1b95d4:
    // 0x1b95d4: 0x0
    ctx->pc = 0x1b95d4u;
    // NOP
label_1b95d8:
    // 0x1b95d8: 0x46000834
    ctx->pc = 0x1b95d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b95dc:
    // 0x1b95dc: 0x45000008
label_1b95e0:
    if (ctx->pc == 0x1B95E0u) {
        ctx->pc = 0x1B95E0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)17302 << 16));
        ctx->pc = 0x1B95E4u;
        goto label_1b95e4;
    }
    ctx->pc = 0x1B95DCu;
    {
        const bool branch_taken_0x1b95dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B95E0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)17302 << 16));
        if (branch_taken_0x1b95dc) {
            ctx->pc = 0x1B9600u;
            goto label_1b9600;
        }
    }
    ctx->pc = 0x1B95E4u;
label_1b95e4:
    // 0x1b95e4: 0xc7a000f0
    ctx->pc = 0x1b95e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b95e8:
    // 0x1b95e8: 0x3c024420
    ctx->pc = 0x1b95e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17440 << 16));
label_1b95ec:
    // 0x1b95ec: 0x44820800
    ctx->pc = 0x1b95ecu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_1b95f0:
    // 0x1b95f0: 0x0
    ctx->pc = 0x1b95f0u;
    // NOP
label_1b95f4:
    // 0x1b95f4: 0x46000801
    ctx->pc = 0x1b95f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b95f8:
    // 0x1b95f8: 0xe7a000f0
    ctx->pc = 0x1b95f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1b95fc:
    // 0x1b95fc: 0x3c024396
    ctx->pc = 0x1b95fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17302 << 16));
label_1b9600:
    // 0x1b9600: 0x3c010025
    ctx->pc = 0x1b9600u;
    SET_GPR_U32(ctx, 1, ((uint32_t)37 << 16));
label_1b9604:
    // 0x1b9604: 0x44820000
    ctx->pc = 0x1b9604u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1b9608:
    // 0x1b9608: 0xc7a200f0
    ctx->pc = 0x1b9608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b960c:
    // 0x1b960c: 0x4600a303
    ctx->pc = 0x1b960cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[0];
label_1b9610:
    // 0x1b9610: 0xc4210230
    ctx->pc = 0x1b9610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b9614:
    // 0x1b9614: 0x46011003
    ctx->pc = 0x1b9614u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[1];
label_1b9618:
    // 0x1b9618: 0x0
    ctx->pc = 0x1b9618u;
    // NOP
label_1b961c:
    // 0x1b961c: 0x46000024
    ctx->pc = 0x1b961cu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
label_1b9620:
    // 0x1b9620: 0x44100000
    ctx->pc = 0x1b9620u;
    SET_GPR_U32(ctx, 16, *(uint32_t*)&ctx->f[0]);
label_1b9624:
    // 0x1b9624: 0xc06487c
label_1b9628:
    if (ctx->pc == 0x1B9628u) {
        ctx->pc = 0x1B962Cu;
        goto label_1b962c;
    }
    ctx->pc = 0x1B9624u;
    SET_GPR_U32(ctx, 31, 0x1B962Cu);
    ctx->pc = 0x1921F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001921F0_0x1921f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B962Cu; }
    }
    if (ctx->pc != 0x1B962Cu) { return; }
    ctx->pc = 0x1B962Cu;
label_1b962c:
    // 0x1b962c: 0x46000024
    ctx->pc = 0x1b962cu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
label_1b9630:
    // 0x1b9630: 0x3c024396
    ctx->pc = 0x1b9630u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17302 << 16));
label_1b9634:
    // 0x1b9634: 0x44820800
    ctx->pc = 0x1b9634u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_1b9638:
    // 0x1b9638: 0x0
    ctx->pc = 0x1b9638u;
    // NOP
label_1b963c:
    // 0x1b963c: 0x44020000
    ctx->pc = 0x1b963cu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
label_1b9640:
    // 0x1b9640: 0x46800020
    ctx->pc = 0x1b9640u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1b9644:
    // 0x1b9644: 0x21080
    ctx->pc = 0x1b9644u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_1b9648:
    // 0x1b9648: 0x2621021
    ctx->pc = 0x1b9648u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1b964c:
    // 0x1b964c: 0x8c430000
    ctx->pc = 0x1b964cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b9650:
    // 0x1b9650: 0x46000802
    ctx->pc = 0x1b9650u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1b9654:
    // 0x1b9654: 0x8c420004
    ctx->pc = 0x1b9654u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1b9658:
    // 0x1b9658: 0x4600a001
    ctx->pc = 0x1b9658u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_1b965c:
    // 0x1b965c: 0x621023
    ctx->pc = 0x1b965cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1b9660:
    // 0x1b9660: 0x46010043
    ctx->pc = 0x1b9660u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
label_1b9664:
    // 0x1b9664: 0x44820000
    ctx->pc = 0x1b9664u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1b9668:
    // 0x1b9668: 0x0
    ctx->pc = 0x1b9668u;
    // NOP
label_1b966c:
    // 0x1b966c: 0x46800020
    ctx->pc = 0x1b966cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1b9670:
    // 0x1b9670: 0x46000802
    ctx->pc = 0x1b9670u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1b9674:
    // 0x1b9674: 0x46000024
    ctx->pc = 0x1b9674u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
label_1b9678:
    // 0x1b9678: 0x44020000
    ctx->pc = 0x1b9678u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
label_1b967c:
    // 0x1b967c: 0x0
    ctx->pc = 0x1b967cu;
    // NOP
label_1b9680:
    // 0x1b9680: 0x621023
    ctx->pc = 0x1b9680u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1b9684:
    // 0x1b9684: 0x14400003
label_1b9688:
    if (ctx->pc == 0x1B9688u) {
        ctx->pc = 0x1B968Cu;
        goto label_1b968c;
    }
    ctx->pc = 0x1B9684u;
    {
        const bool branch_taken_0x1b9684 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b9684) {
            ctx->pc = 0x1B9694u;
            goto label_1b9694;
        }
    }
    ctx->pc = 0x1B968Cu;
label_1b968c:
    // 0x1b968c: 0x10000004
label_1b9690:
    if (ctx->pc == 0x1B9690u) {
        ctx->pc = 0x1B9690u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B9694u;
        goto label_1b9694;
    }
    ctx->pc = 0x1B968Cu;
    {
        const bool branch_taken_0x1b968c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B9690u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b968c) {
            ctx->pc = 0x1B96A0u;
            goto label_1b96a0;
        }
    }
    ctx->pc = 0x1B9694u;
label_1b9694:
    // 0x1b9694: 0xae420000
    ctx->pc = 0x1b9694u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1b9698:
    // 0x1b9698: 0x24020001
    ctx->pc = 0x1b9698u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1b969c:
    // 0x1b969c: 0xae300000
    ctx->pc = 0x1b969cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_1b96a0:
    // 0x1b96a0: 0xdfbf0060
    ctx->pc = 0x1b96a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1b96a4:
    // 0x1b96a4: 0xc7b40000
    ctx->pc = 0x1b96a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b96a8:
    // 0x1b96a8: 0x7bb40050
    ctx->pc = 0x1b96a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b96ac:
    // 0x1b96ac: 0x7bb30040
    ctx->pc = 0x1b96acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b96b0:
    // 0x1b96b0: 0x7bb20030
    ctx->pc = 0x1b96b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b96b4:
    // 0x1b96b4: 0x7bb10020
    ctx->pc = 0x1b96b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b96b8:
    // 0x1b96b8: 0x7bb00010
    ctx->pc = 0x1b96b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b96bc:
    // 0x1b96bc: 0x3e00008
label_1b96c0:
    if (ctx->pc == 0x1B96C0u) {
        ctx->pc = 0x1B96C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x1B96C4u;
        goto label_1b96c4;
    }
    ctx->pc = 0x1B96BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B96C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B94B0u: goto label_1b94b0;
            case 0x1B94B4u: goto label_1b94b4;
            case 0x1B94B8u: goto label_1b94b8;
            case 0x1B94BCu: goto label_1b94bc;
            case 0x1B94C0u: goto label_1b94c0;
            case 0x1B94C4u: goto label_1b94c4;
            case 0x1B94C8u: goto label_1b94c8;
            case 0x1B94CCu: goto label_1b94cc;
            case 0x1B94D0u: goto label_1b94d0;
            case 0x1B94D4u: goto label_1b94d4;
            case 0x1B94D8u: goto label_1b94d8;
            case 0x1B94DCu: goto label_1b94dc;
            case 0x1B94E0u: goto label_1b94e0;
            case 0x1B94E4u: goto label_1b94e4;
            case 0x1B94E8u: goto label_1b94e8;
            case 0x1B94ECu: goto label_1b94ec;
            case 0x1B94F0u: goto label_1b94f0;
            case 0x1B94F4u: goto label_1b94f4;
            case 0x1B94F8u: goto label_1b94f8;
            case 0x1B94FCu: goto label_1b94fc;
            case 0x1B9500u: goto label_1b9500;
            case 0x1B9504u: goto label_1b9504;
            case 0x1B9508u: goto label_1b9508;
            case 0x1B950Cu: goto label_1b950c;
            case 0x1B9510u: goto label_1b9510;
            case 0x1B9514u: goto label_1b9514;
            case 0x1B9518u: goto label_1b9518;
            case 0x1B951Cu: goto label_1b951c;
            case 0x1B9520u: goto label_1b9520;
            case 0x1B9524u: goto label_1b9524;
            case 0x1B9528u: goto label_1b9528;
            case 0x1B952Cu: goto label_1b952c;
            case 0x1B9530u: goto label_1b9530;
            case 0x1B9534u: goto label_1b9534;
            case 0x1B9538u: goto label_1b9538;
            case 0x1B953Cu: goto label_1b953c;
            case 0x1B9540u: goto label_1b9540;
            case 0x1B9544u: goto label_1b9544;
            case 0x1B9548u: goto label_1b9548;
            case 0x1B954Cu: goto label_1b954c;
            case 0x1B9550u: goto label_1b9550;
            case 0x1B9554u: goto label_1b9554;
            case 0x1B9558u: goto label_1b9558;
            case 0x1B955Cu: goto label_1b955c;
            case 0x1B9560u: goto label_1b9560;
            case 0x1B9564u: goto label_1b9564;
            case 0x1B9568u: goto label_1b9568;
            case 0x1B956Cu: goto label_1b956c;
            case 0x1B9570u: goto label_1b9570;
            case 0x1B9574u: goto label_1b9574;
            case 0x1B9578u: goto label_1b9578;
            case 0x1B957Cu: goto label_1b957c;
            case 0x1B9580u: goto label_1b9580;
            case 0x1B9584u: goto label_1b9584;
            case 0x1B9588u: goto label_1b9588;
            case 0x1B958Cu: goto label_1b958c;
            case 0x1B9590u: goto label_1b9590;
            case 0x1B9594u: goto label_1b9594;
            case 0x1B9598u: goto label_1b9598;
            case 0x1B959Cu: goto label_1b959c;
            case 0x1B95A0u: goto label_1b95a0;
            case 0x1B95A4u: goto label_1b95a4;
            case 0x1B95A8u: goto label_1b95a8;
            case 0x1B95ACu: goto label_1b95ac;
            case 0x1B95B0u: goto label_1b95b0;
            case 0x1B95B4u: goto label_1b95b4;
            case 0x1B95B8u: goto label_1b95b8;
            case 0x1B95BCu: goto label_1b95bc;
            case 0x1B95C0u: goto label_1b95c0;
            case 0x1B95C4u: goto label_1b95c4;
            case 0x1B95C8u: goto label_1b95c8;
            case 0x1B95CCu: goto label_1b95cc;
            case 0x1B95D0u: goto label_1b95d0;
            case 0x1B95D4u: goto label_1b95d4;
            case 0x1B95D8u: goto label_1b95d8;
            case 0x1B95DCu: goto label_1b95dc;
            case 0x1B95E0u: goto label_1b95e0;
            case 0x1B95E4u: goto label_1b95e4;
            case 0x1B95E8u: goto label_1b95e8;
            case 0x1B95ECu: goto label_1b95ec;
            case 0x1B95F0u: goto label_1b95f0;
            case 0x1B95F4u: goto label_1b95f4;
            case 0x1B95F8u: goto label_1b95f8;
            case 0x1B95FCu: goto label_1b95fc;
            case 0x1B9600u: goto label_1b9600;
            case 0x1B9604u: goto label_1b9604;
            case 0x1B9608u: goto label_1b9608;
            case 0x1B960Cu: goto label_1b960c;
            case 0x1B9610u: goto label_1b9610;
            case 0x1B9614u: goto label_1b9614;
            case 0x1B9618u: goto label_1b9618;
            case 0x1B961Cu: goto label_1b961c;
            case 0x1B9620u: goto label_1b9620;
            case 0x1B9624u: goto label_1b9624;
            case 0x1B9628u: goto label_1b9628;
            case 0x1B962Cu: goto label_1b962c;
            case 0x1B9630u: goto label_1b9630;
            case 0x1B9634u: goto label_1b9634;
            case 0x1B9638u: goto label_1b9638;
            case 0x1B963Cu: goto label_1b963c;
            case 0x1B9640u: goto label_1b9640;
            case 0x1B9644u: goto label_1b9644;
            case 0x1B9648u: goto label_1b9648;
            case 0x1B964Cu: goto label_1b964c;
            case 0x1B9650u: goto label_1b9650;
            case 0x1B9654u: goto label_1b9654;
            case 0x1B9658u: goto label_1b9658;
            case 0x1B965Cu: goto label_1b965c;
            case 0x1B9660u: goto label_1b9660;
            case 0x1B9664u: goto label_1b9664;
            case 0x1B9668u: goto label_1b9668;
            case 0x1B966Cu: goto label_1b966c;
            case 0x1B9670u: goto label_1b9670;
            case 0x1B9674u: goto label_1b9674;
            case 0x1B9678u: goto label_1b9678;
            case 0x1B967Cu: goto label_1b967c;
            case 0x1B9680u: goto label_1b9680;
            case 0x1B9684u: goto label_1b9684;
            case 0x1B9688u: goto label_1b9688;
            case 0x1B968Cu: goto label_1b968c;
            case 0x1B9690u: goto label_1b9690;
            case 0x1B9694u: goto label_1b9694;
            case 0x1B9698u: goto label_1b9698;
            case 0x1B969Cu: goto label_1b969c;
            case 0x1B96A0u: goto label_1b96a0;
            case 0x1B96A4u: goto label_1b96a4;
            case 0x1B96A8u: goto label_1b96a8;
            case 0x1B96ACu: goto label_1b96ac;
            case 0x1B96B0u: goto label_1b96b0;
            case 0x1B96B4u: goto label_1b96b4;
            case 0x1B96B8u: goto label_1b96b8;
            case 0x1B96BCu: goto label_1b96bc;
            case 0x1B96C0u: goto label_1b96c0;
            case 0x1B96C4u: goto label_1b96c4;
            case 0x1B96C8u: goto label_1b96c8;
            case 0x1B96CCu: goto label_1b96cc;
            case 0x1B96D0u: goto label_1b96d0;
            case 0x1B96D4u: goto label_1b96d4;
            case 0x1B96D8u: goto label_1b96d8;
            case 0x1B96DCu: goto label_1b96dc;
            case 0x1B96E0u: goto label_1b96e0;
            case 0x1B96E4u: goto label_1b96e4;
            case 0x1B96E8u: goto label_1b96e8;
            case 0x1B96ECu: goto label_1b96ec;
            case 0x1B96F0u: goto label_1b96f0;
            case 0x1B96F4u: goto label_1b96f4;
            case 0x1B96F8u: goto label_1b96f8;
            case 0x1B96FCu: goto label_1b96fc;
            case 0x1B9700u: goto label_1b9700;
            case 0x1B9704u: goto label_1b9704;
            case 0x1B9708u: goto label_1b9708;
            case 0x1B970Cu: goto label_1b970c;
            case 0x1B9710u: goto label_1b9710;
            case 0x1B9714u: goto label_1b9714;
            case 0x1B9718u: goto label_1b9718;
            case 0x1B971Cu: goto label_1b971c;
            case 0x1B9720u: goto label_1b9720;
            case 0x1B9724u: goto label_1b9724;
            case 0x1B9728u: goto label_1b9728;
            case 0x1B972Cu: goto label_1b972c;
            case 0x1B9730u: goto label_1b9730;
            case 0x1B9734u: goto label_1b9734;
            case 0x1B9738u: goto label_1b9738;
            case 0x1B973Cu: goto label_1b973c;
            case 0x1B9740u: goto label_1b9740;
            case 0x1B9744u: goto label_1b9744;
            case 0x1B9748u: goto label_1b9748;
            case 0x1B974Cu: goto label_1b974c;
            case 0x1B9750u: goto label_1b9750;
            case 0x1B9754u: goto label_1b9754;
            case 0x1B9758u: goto label_1b9758;
            case 0x1B975Cu: goto label_1b975c;
            case 0x1B9760u: goto label_1b9760;
            case 0x1B9764u: goto label_1b9764;
            case 0x1B9768u: goto label_1b9768;
            case 0x1B976Cu: goto label_1b976c;
            case 0x1B9770u: goto label_1b9770;
            case 0x1B9774u: goto label_1b9774;
            case 0x1B9778u: goto label_1b9778;
            case 0x1B977Cu: goto label_1b977c;
            case 0x1B9780u: goto label_1b9780;
            case 0x1B9784u: goto label_1b9784;
            case 0x1B9788u: goto label_1b9788;
            case 0x1B978Cu: goto label_1b978c;
            case 0x1B9790u: goto label_1b9790;
            case 0x1B9794u: goto label_1b9794;
            case 0x1B9798u: goto label_1b9798;
            case 0x1B979Cu: goto label_1b979c;
            case 0x1B97A0u: goto label_1b97a0;
            case 0x1B97A4u: goto label_1b97a4;
            case 0x1B97A8u: goto label_1b97a8;
            case 0x1B97ACu: goto label_1b97ac;
            case 0x1B97B0u: goto label_1b97b0;
            case 0x1B97B4u: goto label_1b97b4;
            case 0x1B97B8u: goto label_1b97b8;
            case 0x1B97BCu: goto label_1b97bc;
            case 0x1B97C0u: goto label_1b97c0;
            case 0x1B97C4u: goto label_1b97c4;
            case 0x1B97C8u: goto label_1b97c8;
            case 0x1B97CCu: goto label_1b97cc;
            case 0x1B97D0u: goto label_1b97d0;
            case 0x1B97D4u: goto label_1b97d4;
            case 0x1B97D8u: goto label_1b97d8;
            case 0x1B97DCu: goto label_1b97dc;
            case 0x1B97E0u: goto label_1b97e0;
            case 0x1B97E4u: goto label_1b97e4;
            case 0x1B97E8u: goto label_1b97e8;
            case 0x1B97ECu: goto label_1b97ec;
            case 0x1B97F0u: goto label_1b97f0;
            case 0x1B97F4u: goto label_1b97f4;
            case 0x1B97F8u: goto label_1b97f8;
            case 0x1B97FCu: goto label_1b97fc;
            case 0x1B9800u: goto label_1b9800;
            case 0x1B9804u: goto label_1b9804;
            case 0x1B9808u: goto label_1b9808;
            case 0x1B980Cu: goto label_1b980c;
            case 0x1B9810u: goto label_1b9810;
            case 0x1B9814u: goto label_1b9814;
            case 0x1B9818u: goto label_1b9818;
            case 0x1B981Cu: goto label_1b981c;
            case 0x1B9820u: goto label_1b9820;
            case 0x1B9824u: goto label_1b9824;
            case 0x1B9828u: goto label_1b9828;
            case 0x1B982Cu: goto label_1b982c;
            case 0x1B9830u: goto label_1b9830;
            case 0x1B9834u: goto label_1b9834;
            case 0x1B9838u: goto label_1b9838;
            case 0x1B983Cu: goto label_1b983c;
            case 0x1B9840u: goto label_1b9840;
            case 0x1B9844u: goto label_1b9844;
            case 0x1B9848u: goto label_1b9848;
            case 0x1B984Cu: goto label_1b984c;
            case 0x1B9850u: goto label_1b9850;
            case 0x1B9854u: goto label_1b9854;
            case 0x1B9858u: goto label_1b9858;
            case 0x1B985Cu: goto label_1b985c;
            case 0x1B9860u: goto label_1b9860;
            case 0x1B9864u: goto label_1b9864;
            case 0x1B9868u: goto label_1b9868;
            case 0x1B986Cu: goto label_1b986c;
            case 0x1B9870u: goto label_1b9870;
            case 0x1B9874u: goto label_1b9874;
            case 0x1B9878u: goto label_1b9878;
            case 0x1B987Cu: goto label_1b987c;
            case 0x1B9880u: goto label_1b9880;
            case 0x1B9884u: goto label_1b9884;
            case 0x1B9888u: goto label_1b9888;
            case 0x1B988Cu: goto label_1b988c;
            case 0x1B9890u: goto label_1b9890;
            case 0x1B9894u: goto label_1b9894;
            case 0x1B9898u: goto label_1b9898;
            case 0x1B989Cu: goto label_1b989c;
            case 0x1B98A0u: goto label_1b98a0;
            case 0x1B98A4u: goto label_1b98a4;
            case 0x1B98A8u: goto label_1b98a8;
            case 0x1B98ACu: goto label_1b98ac;
            case 0x1B98B0u: goto label_1b98b0;
            case 0x1B98B4u: goto label_1b98b4;
            case 0x1B98B8u: goto label_1b98b8;
            case 0x1B98BCu: goto label_1b98bc;
            case 0x1B98C0u: goto label_1b98c0;
            case 0x1B98C4u: goto label_1b98c4;
            case 0x1B98C8u: goto label_1b98c8;
            case 0x1B98CCu: goto label_1b98cc;
            case 0x1B98D0u: goto label_1b98d0;
            case 0x1B98D4u: goto label_1b98d4;
            case 0x1B98D8u: goto label_1b98d8;
            case 0x1B98DCu: goto label_1b98dc;
            case 0x1B98E0u: goto label_1b98e0;
            case 0x1B98E4u: goto label_1b98e4;
            case 0x1B98E8u: goto label_1b98e8;
            case 0x1B98ECu: goto label_1b98ec;
            case 0x1B98F0u: goto label_1b98f0;
            case 0x1B98F4u: goto label_1b98f4;
            case 0x1B98F8u: goto label_1b98f8;
            case 0x1B98FCu: goto label_1b98fc;
            case 0x1B9900u: goto label_1b9900;
            case 0x1B9904u: goto label_1b9904;
            case 0x1B9908u: goto label_1b9908;
            case 0x1B990Cu: goto label_1b990c;
            case 0x1B9910u: goto label_1b9910;
            case 0x1B9914u: goto label_1b9914;
            case 0x1B9918u: goto label_1b9918;
            case 0x1B991Cu: goto label_1b991c;
            case 0x1B9920u: goto label_1b9920;
            case 0x1B9924u: goto label_1b9924;
            case 0x1B9928u: goto label_1b9928;
            case 0x1B992Cu: goto label_1b992c;
            case 0x1B9930u: goto label_1b9930;
            case 0x1B9934u: goto label_1b9934;
            case 0x1B9938u: goto label_1b9938;
            case 0x1B993Cu: goto label_1b993c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B96C4u;
label_1b96c4:
    // 0x1b96c4: 0x0
    ctx->pc = 0x1b96c4u;
    // NOP
label_1b96c8:
    // 0x1b96c8: 0x0
    ctx->pc = 0x1b96c8u;
    // NOP
label_1b96cc:
    // 0x1b96cc: 0x0
    ctx->pc = 0x1b96ccu;
    // NOP
label_1b96d0:
    // 0x1b96d0: 0x27bdfff0
    ctx->pc = 0x1b96d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b96d4:
    // 0x1b96d4: 0x3c040023
    ctx->pc = 0x1b96d4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
label_1b96d8:
    // 0x1b96d8: 0x3c07003c
    ctx->pc = 0x1b96d8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)60 << 16));
label_1b96dc:
    // 0x1b96dc: 0x3c06003c
    ctx->pc = 0x1b96dcu;
    SET_GPR_U32(ctx, 6, ((uint32_t)60 << 16));
label_1b96e0:
    // 0x1b96e0: 0xffbf0000
    ctx->pc = 0x1b96e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b96e4:
    // 0x1b96e4: 0x102d
    ctx->pc = 0x1b96e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b96e8:
    // 0x1b96e8: 0x24050001
    ctx->pc = 0x1b96e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_1b96ec:
    // 0x1b96ec: 0x24844c50
    ctx->pc = 0x1b96ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19536));
label_1b96f0:
    // 0x1b96f0: 0x24e72750
    ctx->pc = 0x1b96f0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 10064));
label_1b96f4:
    // 0x1b96f4: 0x10000034
label_1b96f8:
    if (ctx->pc == 0x1B96F8u) {
        ctx->pc = 0x1B96F8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 12288));
        ctx->pc = 0x1B96FCu;
        goto label_1b96fc;
    }
    ctx->pc = 0x1B96F4u;
    {
        const bool branch_taken_0x1b96f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B96F8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 12288));
        if (branch_taken_0x1b96f4) {
            ctx->pc = 0x1B97C8u;
            goto label_1b97c8;
        }
    }
    ctx->pc = 0x1B96FCu;
label_1b96fc:
    // 0x1b96fc: 0x218c0
    ctx->pc = 0x1b96fcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 3));
label_1b9700:
    // 0x1b9700: 0x1024023
    ctx->pc = 0x1b9700u;
    SET_GPR_U32(ctx, 8, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_1b9704:
    // 0x1b9704: 0x621823
    ctx->pc = 0x1b9704u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1b9708:
    // 0x1b9708: 0x84080
    ctx->pc = 0x1b9708u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 2));
label_1b970c:
    // 0x1b970c: 0x31880
    ctx->pc = 0x1b970cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_1b9710:
    // 0x1b9710: 0xe84821
    ctx->pc = 0x1b9710u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1b9714:
    // 0x1b9714: 0xc31821
    ctx->pc = 0x1b9714u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1b9718:
    // 0x1b9718: 0xa1200000
    ctx->pc = 0x1b9718u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 0));
label_1b971c:
    // 0x1b971c: 0x24680d00
    ctx->pc = 0x1b971cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 3), 3328));
label_1b9720:
    // 0x1b9720: 0xa1200007
    ctx->pc = 0x1b9720u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 7), (uint8_t)GPR_U32(ctx, 0));
label_1b9724:
    // 0x1b9724: 0xa1200006
    ctx->pc = 0x1b9724u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 6), (uint8_t)GPR_U32(ctx, 0));
label_1b9728:
    // 0x1b9728: 0xa1200005
    ctx->pc = 0x1b9728u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5), (uint8_t)GPR_U32(ctx, 0));
label_1b972c:
    // 0x1b972c: 0xa1200004
    ctx->pc = 0x1b972cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 4), (uint8_t)GPR_U32(ctx, 0));
label_1b9730:
    // 0x1b9730: 0x90630d00
    ctx->pc = 0x1b9730u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3328)));
label_1b9734:
    // 0x1b9734: 0x10600023
label_1b9738:
    if (ctx->pc == 0x1B9738u) {
        ctx->pc = 0x1B973Cu;
        goto label_1b973c;
    }
    ctx->pc = 0x1B9734u;
    {
        const bool branch_taken_0x1b9734 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b9734) {
            ctx->pc = 0x1B97C4u;
            goto label_1b97c4;
        }
    }
    ctx->pc = 0x1B973Cu;
label_1b973c:
    // 0x1b973c: 0xa1250000
    ctx->pc = 0x1b973cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 5));
label_1b9740:
    // 0x1b9740: 0x95030002
    ctx->pc = 0x1b9740u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_1b9744:
    // 0x1b9744: 0x30638000
    ctx->pc = 0x1b9744u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 32768));
label_1b9748:
    // 0x1b9748: 0x3182b
    ctx->pc = 0x1b9748u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_1b974c:
    // 0x1b974c: 0xa1230001
    ctx->pc = 0x1b974cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 3));
label_1b9750:
    // 0x1b9750: 0x95030002
    ctx->pc = 0x1b9750u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_1b9754:
    // 0x1b9754: 0xa1230002
    ctx->pc = 0x1b9754u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 3));
label_1b9758:
    // 0x1b9758: 0x95030004
    ctx->pc = 0x1b9758u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
label_1b975c:
    // 0x1b975c: 0x3063000f
    ctx->pc = 0x1b975cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 15));
label_1b9760:
    // 0x1b9760: 0xa1230003
    ctx->pc = 0x1b9760u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 3));
label_1b9764:
    // 0x1b9764: 0xad280024
    ctx->pc = 0x1b9764u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 36), GPR_U32(ctx, 8));
label_1b9768:
    // 0x1b9768: 0x81230003
    ctx->pc = 0x1b9768u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
label_1b976c:
    // 0x1b976c: 0x31880
    ctx->pc = 0x1b976cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_1b9770:
    // 0x1b9770: 0x831821
    ctx->pc = 0x1b9770u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1b9774:
    // 0x1b9774: 0x8c630000
    ctx->pc = 0x1b9774u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1b9778:
    // 0x1b9778: 0xad230028
    ctx->pc = 0x1b9778u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 3));
label_1b977c:
    // 0x1b977c: 0x91030001
    ctx->pc = 0x1b977cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
label_1b9780:
    // 0x1b9780: 0xa5230038
    ctx->pc = 0x1b9780u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 56), (uint16_t)GPR_U32(ctx, 3));
label_1b9784:
    // 0x1b9784: 0xc5020008
    ctx->pc = 0x1b9784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b9788:
    // 0x1b9788: 0xc501000c
    ctx->pc = 0x1b9788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b978c:
    // 0x1b978c: 0xc5000010
    ctx->pc = 0x1b978cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b9790:
    // 0x1b9790: 0xe522002c
    ctx->pc = 0x1b9790u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 44), bits); }
label_1b9794:
    // 0x1b9794: 0xe5210030
    ctx->pc = 0x1b9794u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 48), bits); }
label_1b9798:
    // 0x1b9798: 0xe5200034
    ctx->pc = 0x1b9798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 52), bits); }
label_1b979c:
    // 0x1b979c: 0x8d230028
    ctx->pc = 0x1b979cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 40)));
label_1b97a0:
    // 0x1b97a0: 0x14600008
label_1b97a4:
    if (ctx->pc == 0x1B97A4u) {
        ctx->pc = 0x1B97A8u;
        goto label_1b97a8;
    }
    ctx->pc = 0x1B97A0u;
    {
        const bool branch_taken_0x1b97a0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b97a0) {
            ctx->pc = 0x1B97C4u;
            goto label_1b97c4;
        }
    }
    ctx->pc = 0x1B97A8u;
label_1b97a8:
    // 0x1b97a8: 0x0
    ctx->pc = 0x1b97a8u;
    // NOP
label_1b97ac:
    // 0x1b97ac: 0x0
    ctx->pc = 0x1b97acu;
    // NOP
label_1b97b0:
    // 0x1b97b0: 0x0
    ctx->pc = 0x1b97b0u;
    // NOP
label_1b97b4:
    // 0x1b97b4: 0x0
    ctx->pc = 0x1b97b4u;
    // NOP
label_1b97b8:
    // 0x1b97b8: 0x0
    ctx->pc = 0x1b97b8u;
    // NOP
label_1b97bc:
    // 0x1b97bc: 0x1000fffa
label_1b97c0:
    if (ctx->pc == 0x1B97C0u) {
        ctx->pc = 0x1B97C4u;
        goto label_1b97c4;
    }
    ctx->pc = 0x1B97BCu;
    {
        const bool branch_taken_0x1b97bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b97bc) {
            ctx->pc = 0x1B97A8u;
            goto label_1b97a8;
        }
    }
    ctx->pc = 0x1B97C4u;
label_1b97c4:
    // 0x1b97c4: 0x24420001
    ctx->pc = 0x1b97c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1b97c8:
    // 0x1b97c8: 0x28430004
    ctx->pc = 0x1b97c8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 4));
label_1b97cc:
    // 0x1b97cc: 0x1460ffcb
label_1b97d0:
    if (ctx->pc == 0x1B97D0u) {
        ctx->pc = 0x1B97D0u;
        SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x1B97D4u;
        goto label_1b97d4;
    }
    ctx->pc = 0x1B97CCu;
    {
        const bool branch_taken_0x1b97cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B97D0u;
        SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 2), 4));
        if (branch_taken_0x1b97cc) {
            ctx->pc = 0x1B96FCu;
            goto label_1b96fc;
        }
    }
    ctx->pc = 0x1B97D4u;
label_1b97d4:
    // 0x1b97d4: 0x3c01003c
    ctx->pc = 0x1b97d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
label_1b97d8:
    // 0x1b97d8: 0x8c263d74
    ctx->pc = 0x1b97d8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 15732)));
label_1b97dc:
    // 0x1b97dc: 0x14c00002
label_1b97e0:
    if (ctx->pc == 0x1B97E0u) {
        ctx->pc = 0x1B97E0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
        ctx->pc = 0x1B97E4u;
        goto label_1b97e4;
    }
    ctx->pc = 0x1B97DCu;
    {
        const bool branch_taken_0x1b97dc = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B97E0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
        if (branch_taken_0x1b97dc) {
            ctx->pc = 0x1B97E8u;
            goto label_1b97e8;
        }
    }
    ctx->pc = 0x1B97E4u;
label_1b97e4:
    // 0x1b97e4: 0x24060300
    ctx->pc = 0x1b97e4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 768));
label_1b97e8:
    // 0x1b97e8: 0x24040001
    ctx->pc = 0x1b97e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_1b97ec:
    // 0x1b97ec: 0x90273d73
    ctx->pc = 0x1b97ecu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15731)));
label_1b97f0:
    // 0x1b97f0: 0x3c01003c
    ctx->pc = 0x1b97f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
label_1b97f4:
    // 0x1b97f4: 0x90283d78
    ctx->pc = 0x1b97f4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15736)));
label_1b97f8:
    // 0x1b97f8: 0xc06b3e0
label_1b97fc:
    if (ctx->pc == 0x1B97FCu) {
        ctx->pc = 0x1B97FCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1B9800u;
        goto label_1b9800;
    }
    ctx->pc = 0x1B97F8u;
    SET_GPR_U32(ctx, 31, 0x1B9800u);
    ctx->pc = 0x1B97FCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1ACF80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001ACF80_0x1acf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9800u; }
    }
    if (ctx->pc != 0x1B9800u) { return; }
    ctx->pc = 0x1B9800u;
label_1b9800:
    // 0x1b9800: 0xdfbf0000
    ctx->pc = 0x1b9800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b9804:
    // 0x1b9804: 0x102d
    ctx->pc = 0x1b9804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9808:
    // 0x1b9808: 0x3e00008
label_1b980c:
    if (ctx->pc == 0x1B980Cu) {
        ctx->pc = 0x1B980Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1B9810u;
        goto label_1b9810;
    }
    ctx->pc = 0x1B9808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B980Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B94B0u: goto label_1b94b0;
            case 0x1B94B4u: goto label_1b94b4;
            case 0x1B94B8u: goto label_1b94b8;
            case 0x1B94BCu: goto label_1b94bc;
            case 0x1B94C0u: goto label_1b94c0;
            case 0x1B94C4u: goto label_1b94c4;
            case 0x1B94C8u: goto label_1b94c8;
            case 0x1B94CCu: goto label_1b94cc;
            case 0x1B94D0u: goto label_1b94d0;
            case 0x1B94D4u: goto label_1b94d4;
            case 0x1B94D8u: goto label_1b94d8;
            case 0x1B94DCu: goto label_1b94dc;
            case 0x1B94E0u: goto label_1b94e0;
            case 0x1B94E4u: goto label_1b94e4;
            case 0x1B94E8u: goto label_1b94e8;
            case 0x1B94ECu: goto label_1b94ec;
            case 0x1B94F0u: goto label_1b94f0;
            case 0x1B94F4u: goto label_1b94f4;
            case 0x1B94F8u: goto label_1b94f8;
            case 0x1B94FCu: goto label_1b94fc;
            case 0x1B9500u: goto label_1b9500;
            case 0x1B9504u: goto label_1b9504;
            case 0x1B9508u: goto label_1b9508;
            case 0x1B950Cu: goto label_1b950c;
            case 0x1B9510u: goto label_1b9510;
            case 0x1B9514u: goto label_1b9514;
            case 0x1B9518u: goto label_1b9518;
            case 0x1B951Cu: goto label_1b951c;
            case 0x1B9520u: goto label_1b9520;
            case 0x1B9524u: goto label_1b9524;
            case 0x1B9528u: goto label_1b9528;
            case 0x1B952Cu: goto label_1b952c;
            case 0x1B9530u: goto label_1b9530;
            case 0x1B9534u: goto label_1b9534;
            case 0x1B9538u: goto label_1b9538;
            case 0x1B953Cu: goto label_1b953c;
            case 0x1B9540u: goto label_1b9540;
            case 0x1B9544u: goto label_1b9544;
            case 0x1B9548u: goto label_1b9548;
            case 0x1B954Cu: goto label_1b954c;
            case 0x1B9550u: goto label_1b9550;
            case 0x1B9554u: goto label_1b9554;
            case 0x1B9558u: goto label_1b9558;
            case 0x1B955Cu: goto label_1b955c;
            case 0x1B9560u: goto label_1b9560;
            case 0x1B9564u: goto label_1b9564;
            case 0x1B9568u: goto label_1b9568;
            case 0x1B956Cu: goto label_1b956c;
            case 0x1B9570u: goto label_1b9570;
            case 0x1B9574u: goto label_1b9574;
            case 0x1B9578u: goto label_1b9578;
            case 0x1B957Cu: goto label_1b957c;
            case 0x1B9580u: goto label_1b9580;
            case 0x1B9584u: goto label_1b9584;
            case 0x1B9588u: goto label_1b9588;
            case 0x1B958Cu: goto label_1b958c;
            case 0x1B9590u: goto label_1b9590;
            case 0x1B9594u: goto label_1b9594;
            case 0x1B9598u: goto label_1b9598;
            case 0x1B959Cu: goto label_1b959c;
            case 0x1B95A0u: goto label_1b95a0;
            case 0x1B95A4u: goto label_1b95a4;
            case 0x1B95A8u: goto label_1b95a8;
            case 0x1B95ACu: goto label_1b95ac;
            case 0x1B95B0u: goto label_1b95b0;
            case 0x1B95B4u: goto label_1b95b4;
            case 0x1B95B8u: goto label_1b95b8;
            case 0x1B95BCu: goto label_1b95bc;
            case 0x1B95C0u: goto label_1b95c0;
            case 0x1B95C4u: goto label_1b95c4;
            case 0x1B95C8u: goto label_1b95c8;
            case 0x1B95CCu: goto label_1b95cc;
            case 0x1B95D0u: goto label_1b95d0;
            case 0x1B95D4u: goto label_1b95d4;
            case 0x1B95D8u: goto label_1b95d8;
            case 0x1B95DCu: goto label_1b95dc;
            case 0x1B95E0u: goto label_1b95e0;
            case 0x1B95E4u: goto label_1b95e4;
            case 0x1B95E8u: goto label_1b95e8;
            case 0x1B95ECu: goto label_1b95ec;
            case 0x1B95F0u: goto label_1b95f0;
            case 0x1B95F4u: goto label_1b95f4;
            case 0x1B95F8u: goto label_1b95f8;
            case 0x1B95FCu: goto label_1b95fc;
            case 0x1B9600u: goto label_1b9600;
            case 0x1B9604u: goto label_1b9604;
            case 0x1B9608u: goto label_1b9608;
            case 0x1B960Cu: goto label_1b960c;
            case 0x1B9610u: goto label_1b9610;
            case 0x1B9614u: goto label_1b9614;
            case 0x1B9618u: goto label_1b9618;
            case 0x1B961Cu: goto label_1b961c;
            case 0x1B9620u: goto label_1b9620;
            case 0x1B9624u: goto label_1b9624;
            case 0x1B9628u: goto label_1b9628;
            case 0x1B962Cu: goto label_1b962c;
            case 0x1B9630u: goto label_1b9630;
            case 0x1B9634u: goto label_1b9634;
            case 0x1B9638u: goto label_1b9638;
            case 0x1B963Cu: goto label_1b963c;
            case 0x1B9640u: goto label_1b9640;
            case 0x1B9644u: goto label_1b9644;
            case 0x1B9648u: goto label_1b9648;
            case 0x1B964Cu: goto label_1b964c;
            case 0x1B9650u: goto label_1b9650;
            case 0x1B9654u: goto label_1b9654;
            case 0x1B9658u: goto label_1b9658;
            case 0x1B965Cu: goto label_1b965c;
            case 0x1B9660u: goto label_1b9660;
            case 0x1B9664u: goto label_1b9664;
            case 0x1B9668u: goto label_1b9668;
            case 0x1B966Cu: goto label_1b966c;
            case 0x1B9670u: goto label_1b9670;
            case 0x1B9674u: goto label_1b9674;
            case 0x1B9678u: goto label_1b9678;
            case 0x1B967Cu: goto label_1b967c;
            case 0x1B9680u: goto label_1b9680;
            case 0x1B9684u: goto label_1b9684;
            case 0x1B9688u: goto label_1b9688;
            case 0x1B968Cu: goto label_1b968c;
            case 0x1B9690u: goto label_1b9690;
            case 0x1B9694u: goto label_1b9694;
            case 0x1B9698u: goto label_1b9698;
            case 0x1B969Cu: goto label_1b969c;
            case 0x1B96A0u: goto label_1b96a0;
            case 0x1B96A4u: goto label_1b96a4;
            case 0x1B96A8u: goto label_1b96a8;
            case 0x1B96ACu: goto label_1b96ac;
            case 0x1B96B0u: goto label_1b96b0;
            case 0x1B96B4u: goto label_1b96b4;
            case 0x1B96B8u: goto label_1b96b8;
            case 0x1B96BCu: goto label_1b96bc;
            case 0x1B96C0u: goto label_1b96c0;
            case 0x1B96C4u: goto label_1b96c4;
            case 0x1B96C8u: goto label_1b96c8;
            case 0x1B96CCu: goto label_1b96cc;
            case 0x1B96D0u: goto label_1b96d0;
            case 0x1B96D4u: goto label_1b96d4;
            case 0x1B96D8u: goto label_1b96d8;
            case 0x1B96DCu: goto label_1b96dc;
            case 0x1B96E0u: goto label_1b96e0;
            case 0x1B96E4u: goto label_1b96e4;
            case 0x1B96E8u: goto label_1b96e8;
            case 0x1B96ECu: goto label_1b96ec;
            case 0x1B96F0u: goto label_1b96f0;
            case 0x1B96F4u: goto label_1b96f4;
            case 0x1B96F8u: goto label_1b96f8;
            case 0x1B96FCu: goto label_1b96fc;
            case 0x1B9700u: goto label_1b9700;
            case 0x1B9704u: goto label_1b9704;
            case 0x1B9708u: goto label_1b9708;
            case 0x1B970Cu: goto label_1b970c;
            case 0x1B9710u: goto label_1b9710;
            case 0x1B9714u: goto label_1b9714;
            case 0x1B9718u: goto label_1b9718;
            case 0x1B971Cu: goto label_1b971c;
            case 0x1B9720u: goto label_1b9720;
            case 0x1B9724u: goto label_1b9724;
            case 0x1B9728u: goto label_1b9728;
            case 0x1B972Cu: goto label_1b972c;
            case 0x1B9730u: goto label_1b9730;
            case 0x1B9734u: goto label_1b9734;
            case 0x1B9738u: goto label_1b9738;
            case 0x1B973Cu: goto label_1b973c;
            case 0x1B9740u: goto label_1b9740;
            case 0x1B9744u: goto label_1b9744;
            case 0x1B9748u: goto label_1b9748;
            case 0x1B974Cu: goto label_1b974c;
            case 0x1B9750u: goto label_1b9750;
            case 0x1B9754u: goto label_1b9754;
            case 0x1B9758u: goto label_1b9758;
            case 0x1B975Cu: goto label_1b975c;
            case 0x1B9760u: goto label_1b9760;
            case 0x1B9764u: goto label_1b9764;
            case 0x1B9768u: goto label_1b9768;
            case 0x1B976Cu: goto label_1b976c;
            case 0x1B9770u: goto label_1b9770;
            case 0x1B9774u: goto label_1b9774;
            case 0x1B9778u: goto label_1b9778;
            case 0x1B977Cu: goto label_1b977c;
            case 0x1B9780u: goto label_1b9780;
            case 0x1B9784u: goto label_1b9784;
            case 0x1B9788u: goto label_1b9788;
            case 0x1B978Cu: goto label_1b978c;
            case 0x1B9790u: goto label_1b9790;
            case 0x1B9794u: goto label_1b9794;
            case 0x1B9798u: goto label_1b9798;
            case 0x1B979Cu: goto label_1b979c;
            case 0x1B97A0u: goto label_1b97a0;
            case 0x1B97A4u: goto label_1b97a4;
            case 0x1B97A8u: goto label_1b97a8;
            case 0x1B97ACu: goto label_1b97ac;
            case 0x1B97B0u: goto label_1b97b0;
            case 0x1B97B4u: goto label_1b97b4;
            case 0x1B97B8u: goto label_1b97b8;
            case 0x1B97BCu: goto label_1b97bc;
            case 0x1B97C0u: goto label_1b97c0;
            case 0x1B97C4u: goto label_1b97c4;
            case 0x1B97C8u: goto label_1b97c8;
            case 0x1B97CCu: goto label_1b97cc;
            case 0x1B97D0u: goto label_1b97d0;
            case 0x1B97D4u: goto label_1b97d4;
            case 0x1B97D8u: goto label_1b97d8;
            case 0x1B97DCu: goto label_1b97dc;
            case 0x1B97E0u: goto label_1b97e0;
            case 0x1B97E4u: goto label_1b97e4;
            case 0x1B97E8u: goto label_1b97e8;
            case 0x1B97ECu: goto label_1b97ec;
            case 0x1B97F0u: goto label_1b97f0;
            case 0x1B97F4u: goto label_1b97f4;
            case 0x1B97F8u: goto label_1b97f8;
            case 0x1B97FCu: goto label_1b97fc;
            case 0x1B9800u: goto label_1b9800;
            case 0x1B9804u: goto label_1b9804;
            case 0x1B9808u: goto label_1b9808;
            case 0x1B980Cu: goto label_1b980c;
            case 0x1B9810u: goto label_1b9810;
            case 0x1B9814u: goto label_1b9814;
            case 0x1B9818u: goto label_1b9818;
            case 0x1B981Cu: goto label_1b981c;
            case 0x1B9820u: goto label_1b9820;
            case 0x1B9824u: goto label_1b9824;
            case 0x1B9828u: goto label_1b9828;
            case 0x1B982Cu: goto label_1b982c;
            case 0x1B9830u: goto label_1b9830;
            case 0x1B9834u: goto label_1b9834;
            case 0x1B9838u: goto label_1b9838;
            case 0x1B983Cu: goto label_1b983c;
            case 0x1B9840u: goto label_1b9840;
            case 0x1B9844u: goto label_1b9844;
            case 0x1B9848u: goto label_1b9848;
            case 0x1B984Cu: goto label_1b984c;
            case 0x1B9850u: goto label_1b9850;
            case 0x1B9854u: goto label_1b9854;
            case 0x1B9858u: goto label_1b9858;
            case 0x1B985Cu: goto label_1b985c;
            case 0x1B9860u: goto label_1b9860;
            case 0x1B9864u: goto label_1b9864;
            case 0x1B9868u: goto label_1b9868;
            case 0x1B986Cu: goto label_1b986c;
            case 0x1B9870u: goto label_1b9870;
            case 0x1B9874u: goto label_1b9874;
            case 0x1B9878u: goto label_1b9878;
            case 0x1B987Cu: goto label_1b987c;
            case 0x1B9880u: goto label_1b9880;
            case 0x1B9884u: goto label_1b9884;
            case 0x1B9888u: goto label_1b9888;
            case 0x1B988Cu: goto label_1b988c;
            case 0x1B9890u: goto label_1b9890;
            case 0x1B9894u: goto label_1b9894;
            case 0x1B9898u: goto label_1b9898;
            case 0x1B989Cu: goto label_1b989c;
            case 0x1B98A0u: goto label_1b98a0;
            case 0x1B98A4u: goto label_1b98a4;
            case 0x1B98A8u: goto label_1b98a8;
            case 0x1B98ACu: goto label_1b98ac;
            case 0x1B98B0u: goto label_1b98b0;
            case 0x1B98B4u: goto label_1b98b4;
            case 0x1B98B8u: goto label_1b98b8;
            case 0x1B98BCu: goto label_1b98bc;
            case 0x1B98C0u: goto label_1b98c0;
            case 0x1B98C4u: goto label_1b98c4;
            case 0x1B98C8u: goto label_1b98c8;
            case 0x1B98CCu: goto label_1b98cc;
            case 0x1B98D0u: goto label_1b98d0;
            case 0x1B98D4u: goto label_1b98d4;
            case 0x1B98D8u: goto label_1b98d8;
            case 0x1B98DCu: goto label_1b98dc;
            case 0x1B98E0u: goto label_1b98e0;
            case 0x1B98E4u: goto label_1b98e4;
            case 0x1B98E8u: goto label_1b98e8;
            case 0x1B98ECu: goto label_1b98ec;
            case 0x1B98F0u: goto label_1b98f0;
            case 0x1B98F4u: goto label_1b98f4;
            case 0x1B98F8u: goto label_1b98f8;
            case 0x1B98FCu: goto label_1b98fc;
            case 0x1B9900u: goto label_1b9900;
            case 0x1B9904u: goto label_1b9904;
            case 0x1B9908u: goto label_1b9908;
            case 0x1B990Cu: goto label_1b990c;
            case 0x1B9910u: goto label_1b9910;
            case 0x1B9914u: goto label_1b9914;
            case 0x1B9918u: goto label_1b9918;
            case 0x1B991Cu: goto label_1b991c;
            case 0x1B9920u: goto label_1b9920;
            case 0x1B9924u: goto label_1b9924;
            case 0x1B9928u: goto label_1b9928;
            case 0x1B992Cu: goto label_1b992c;
            case 0x1B9930u: goto label_1b9930;
            case 0x1B9934u: goto label_1b9934;
            case 0x1B9938u: goto label_1b9938;
            case 0x1B993Cu: goto label_1b993c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B9810u;
label_1b9810:
    // 0x1b9810: 0x27bdffc0
    ctx->pc = 0x1b9810u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_1b9814:
    // 0x1b9814: 0xffbf0030
    ctx->pc = 0x1b9814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1b9818:
    // 0x1b9818: 0x7fb20020
    ctx->pc = 0x1b9818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b981c:
    // 0x1b981c: 0x7fb10010
    ctx->pc = 0x1b981cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b9820:
    // 0x1b9820: 0xc0902d
    ctx->pc = 0x1b9820u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b9824:
    // 0x1b9824: 0xe0882d
    ctx->pc = 0x1b9824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1b9828:
    // 0x1b9828: 0x3c06003c
    ctx->pc = 0x1b9828u;
    SET_GPR_U32(ctx, 6, ((uint32_t)60 << 16));
label_1b982c:
    // 0x1b982c: 0x7fb00000
    ctx->pc = 0x1b982cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b9830:
    // 0x1b9830: 0x382d
    ctx->pc = 0x1b9830u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9834:
    // 0x1b9834: 0x10000020
label_1b9838:
    if (ctx->pc == 0x1B9838u) {
        ctx->pc = 0x1B9838u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 10064));
        ctx->pc = 0x1B983Cu;
        goto label_1b983c;
    }
    ctx->pc = 0x1B9834u;
    {
        const bool branch_taken_0x1b9834 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B9838u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 10064));
        if (branch_taken_0x1b9834) {
            ctx->pc = 0x1B98B8u;
            goto label_1b98b8;
        }
    }
    ctx->pc = 0x1B983Cu;
label_1b983c:
    // 0x1b983c: 0x671823
    ctx->pc = 0x1b983cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1b9840:
    // 0x1b9840: 0x31880
    ctx->pc = 0x1b9840u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_1b9844:
    // 0x1b9844: 0xc38021
    ctx->pc = 0x1b9844u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1b9848:
    // 0x1b9848: 0x82030000
    ctx->pc = 0x1b9848u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1b984c:
    // 0x1b984c: 0x14600019
label_1b9850:
    if (ctx->pc == 0x1B9850u) {
        ctx->pc = 0x1B9850u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B9854u;
        goto label_1b9854;
    }
    ctx->pc = 0x1B984Cu;
    {
        const bool branch_taken_0x1b984c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B9850u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1b984c) {
            ctx->pc = 0x1B98B4u;
            goto label_1b98b4;
        }
    }
    ctx->pc = 0x1B9854u;
label_1b9854:
    // 0x1b9854: 0x5163c
    ctx->pc = 0x1b9854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
label_1b9858:
    // 0x1b9858: 0xa2030000
    ctx->pc = 0x1b9858u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_1b985c:
    // 0x1b985c: 0x2163f
    ctx->pc = 0x1b985cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_1b9860:
    // 0x1b9860: 0x10400004
label_1b9864:
    if (ctx->pc == 0x1B9864u) {
        ctx->pc = 0x1B9864u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x1B9868u;
        goto label_1b9868;
    }
    ctx->pc = 0x1B9860u;
    {
        const bool branch_taken_0x1b9860 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B9864u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 5));
        if (branch_taken_0x1b9860) {
            ctx->pc = 0x1B9874u;
            goto label_1b9874;
        }
    }
    ctx->pc = 0x1B9868u;
label_1b9868:
    // 0x1b9868: 0x24020003
    ctx->pc = 0x1b9868u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_1b986c:
    // 0x1b986c: 0x10000002
label_1b9870:
    if (ctx->pc == 0x1B9870u) {
        ctx->pc = 0x1B9870u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1B9874u;
        goto label_1b9874;
    }
    ctx->pc = 0x1B986Cu;
    {
        const bool branch_taken_0x1b986c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B9870u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1b986c) {
            ctx->pc = 0x1B9878u;
            goto label_1b9878;
        }
    }
    ctx->pc = 0x1B9874u;
label_1b9874:
    // 0x1b9874: 0xa2000003
    ctx->pc = 0x1b9874u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_1b9878:
    // 0x1b9878: 0xc06e21c
label_1b987c:
    if (ctx->pc == 0x1B987Cu) {
        ctx->pc = 0x1B9880u;
        goto label_1b9880;
    }
    ctx->pc = 0x1B9878u;
    SET_GPR_U32(ctx, 31, 0x1B9880u);
    ctx->pc = 0x1B8870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8870_0x1b8870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9880u; }
    }
    if (ctx->pc != 0x1B9880u) { return; }
    ctx->pc = 0x1B9880u;
label_1b9880:
    // 0x1b9880: 0x3c03001c
    ctx->pc = 0x1b9880u;
    SET_GPR_U32(ctx, 3, ((uint32_t)28 << 16));
label_1b9884:
    // 0x1b9884: 0xa2020002
    ctx->pc = 0x1b9884u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_1b9888:
    // 0x1b9888: 0x24639ba0
    ctx->pc = 0x1b9888u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294941600));
label_1b988c:
    // 0x1b988c: 0xae030028
    ctx->pc = 0x1b988cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
label_1b9890:
    // 0x1b9890: 0xc6220000
    ctx->pc = 0x1b9890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b9894:
    // 0x1b9894: 0xc6210004
    ctx->pc = 0x1b9894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b9898:
    // 0x1b9898: 0xc6200008
    ctx->pc = 0x1b9898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b989c:
    // 0x1b989c: 0xe602002c
    ctx->pc = 0x1b989cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_1b98a0:
    // 0x1b98a0: 0xe6010030
    ctx->pc = 0x1b98a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1b98a4:
    // 0x1b98a4: 0xe6000034
    ctx->pc = 0x1b98a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_1b98a8:
    // 0x1b98a8: 0xa6120038
    ctx->pc = 0x1b98a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 18));
label_1b98ac:
    // 0x1b98ac: 0x10000005
label_1b98b0:
    if (ctx->pc == 0x1B98B0u) {
        ctx->pc = 0x1B98B0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x1B98B4u;
        goto label_1b98b4;
    }
    ctx->pc = 0x1B98ACu;
    {
        const bool branch_taken_0x1b98ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B98B0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        if (branch_taken_0x1b98ac) {
            ctx->pc = 0x1B98C4u;
            goto label_1b98c4;
        }
    }
    ctx->pc = 0x1B98B4u;
label_1b98b4:
    // 0x1b98b4: 0x24e70001
    ctx->pc = 0x1b98b4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_1b98b8:
    // 0x1b98b8: 0x28e30004
    ctx->pc = 0x1b98b8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 7), 4));
label_1b98bc:
    // 0x1b98bc: 0x1460ffdf
label_1b98c0:
    if (ctx->pc == 0x1B98C0u) {
        ctx->pc = 0x1B98C0u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 4));
        ctx->pc = 0x1B98C4u;
        goto label_1b98c4;
    }
    ctx->pc = 0x1B98BCu;
    {
        const bool branch_taken_0x1b98bc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B98C0u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 4));
        if (branch_taken_0x1b98bc) {
            ctx->pc = 0x1B983Cu;
            goto label_1b983c;
        }
    }
    ctx->pc = 0x1B98C4u;
label_1b98c4:
    // 0x1b98c4: 0xdfbf0030
    ctx->pc = 0x1b98c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b98c8:
    // 0x1b98c8: 0x7bb20020
    ctx->pc = 0x1b98c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b98cc:
    // 0x1b98cc: 0x7bb10010
    ctx->pc = 0x1b98ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b98d0:
    // 0x1b98d0: 0x7bb00000
    ctx->pc = 0x1b98d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b98d4:
    // 0x1b98d4: 0x3e00008
label_1b98d8:
    if (ctx->pc == 0x1B98D8u) {
        ctx->pc = 0x1B98D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1B98DCu;
        goto label_1b98dc;
    }
    ctx->pc = 0x1B98D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B98D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B94B0u: goto label_1b94b0;
            case 0x1B94B4u: goto label_1b94b4;
            case 0x1B94B8u: goto label_1b94b8;
            case 0x1B94BCu: goto label_1b94bc;
            case 0x1B94C0u: goto label_1b94c0;
            case 0x1B94C4u: goto label_1b94c4;
            case 0x1B94C8u: goto label_1b94c8;
            case 0x1B94CCu: goto label_1b94cc;
            case 0x1B94D0u: goto label_1b94d0;
            case 0x1B94D4u: goto label_1b94d4;
            case 0x1B94D8u: goto label_1b94d8;
            case 0x1B94DCu: goto label_1b94dc;
            case 0x1B94E0u: goto label_1b94e0;
            case 0x1B94E4u: goto label_1b94e4;
            case 0x1B94E8u: goto label_1b94e8;
            case 0x1B94ECu: goto label_1b94ec;
            case 0x1B94F0u: goto label_1b94f0;
            case 0x1B94F4u: goto label_1b94f4;
            case 0x1B94F8u: goto label_1b94f8;
            case 0x1B94FCu: goto label_1b94fc;
            case 0x1B9500u: goto label_1b9500;
            case 0x1B9504u: goto label_1b9504;
            case 0x1B9508u: goto label_1b9508;
            case 0x1B950Cu: goto label_1b950c;
            case 0x1B9510u: goto label_1b9510;
            case 0x1B9514u: goto label_1b9514;
            case 0x1B9518u: goto label_1b9518;
            case 0x1B951Cu: goto label_1b951c;
            case 0x1B9520u: goto label_1b9520;
            case 0x1B9524u: goto label_1b9524;
            case 0x1B9528u: goto label_1b9528;
            case 0x1B952Cu: goto label_1b952c;
            case 0x1B9530u: goto label_1b9530;
            case 0x1B9534u: goto label_1b9534;
            case 0x1B9538u: goto label_1b9538;
            case 0x1B953Cu: goto label_1b953c;
            case 0x1B9540u: goto label_1b9540;
            case 0x1B9544u: goto label_1b9544;
            case 0x1B9548u: goto label_1b9548;
            case 0x1B954Cu: goto label_1b954c;
            case 0x1B9550u: goto label_1b9550;
            case 0x1B9554u: goto label_1b9554;
            case 0x1B9558u: goto label_1b9558;
            case 0x1B955Cu: goto label_1b955c;
            case 0x1B9560u: goto label_1b9560;
            case 0x1B9564u: goto label_1b9564;
            case 0x1B9568u: goto label_1b9568;
            case 0x1B956Cu: goto label_1b956c;
            case 0x1B9570u: goto label_1b9570;
            case 0x1B9574u: goto label_1b9574;
            case 0x1B9578u: goto label_1b9578;
            case 0x1B957Cu: goto label_1b957c;
            case 0x1B9580u: goto label_1b9580;
            case 0x1B9584u: goto label_1b9584;
            case 0x1B9588u: goto label_1b9588;
            case 0x1B958Cu: goto label_1b958c;
            case 0x1B9590u: goto label_1b9590;
            case 0x1B9594u: goto label_1b9594;
            case 0x1B9598u: goto label_1b9598;
            case 0x1B959Cu: goto label_1b959c;
            case 0x1B95A0u: goto label_1b95a0;
            case 0x1B95A4u: goto label_1b95a4;
            case 0x1B95A8u: goto label_1b95a8;
            case 0x1B95ACu: goto label_1b95ac;
            case 0x1B95B0u: goto label_1b95b0;
            case 0x1B95B4u: goto label_1b95b4;
            case 0x1B95B8u: goto label_1b95b8;
            case 0x1B95BCu: goto label_1b95bc;
            case 0x1B95C0u: goto label_1b95c0;
            case 0x1B95C4u: goto label_1b95c4;
            case 0x1B95C8u: goto label_1b95c8;
            case 0x1B95CCu: goto label_1b95cc;
            case 0x1B95D0u: goto label_1b95d0;
            case 0x1B95D4u: goto label_1b95d4;
            case 0x1B95D8u: goto label_1b95d8;
            case 0x1B95DCu: goto label_1b95dc;
            case 0x1B95E0u: goto label_1b95e0;
            case 0x1B95E4u: goto label_1b95e4;
            case 0x1B95E8u: goto label_1b95e8;
            case 0x1B95ECu: goto label_1b95ec;
            case 0x1B95F0u: goto label_1b95f0;
            case 0x1B95F4u: goto label_1b95f4;
            case 0x1B95F8u: goto label_1b95f8;
            case 0x1B95FCu: goto label_1b95fc;
            case 0x1B9600u: goto label_1b9600;
            case 0x1B9604u: goto label_1b9604;
            case 0x1B9608u: goto label_1b9608;
            case 0x1B960Cu: goto label_1b960c;
            case 0x1B9610u: goto label_1b9610;
            case 0x1B9614u: goto label_1b9614;
            case 0x1B9618u: goto label_1b9618;
            case 0x1B961Cu: goto label_1b961c;
            case 0x1B9620u: goto label_1b9620;
            case 0x1B9624u: goto label_1b9624;
            case 0x1B9628u: goto label_1b9628;
            case 0x1B962Cu: goto label_1b962c;
            case 0x1B9630u: goto label_1b9630;
            case 0x1B9634u: goto label_1b9634;
            case 0x1B9638u: goto label_1b9638;
            case 0x1B963Cu: goto label_1b963c;
            case 0x1B9640u: goto label_1b9640;
            case 0x1B9644u: goto label_1b9644;
            case 0x1B9648u: goto label_1b9648;
            case 0x1B964Cu: goto label_1b964c;
            case 0x1B9650u: goto label_1b9650;
            case 0x1B9654u: goto label_1b9654;
            case 0x1B9658u: goto label_1b9658;
            case 0x1B965Cu: goto label_1b965c;
            case 0x1B9660u: goto label_1b9660;
            case 0x1B9664u: goto label_1b9664;
            case 0x1B9668u: goto label_1b9668;
            case 0x1B966Cu: goto label_1b966c;
            case 0x1B9670u: goto label_1b9670;
            case 0x1B9674u: goto label_1b9674;
            case 0x1B9678u: goto label_1b9678;
            case 0x1B967Cu: goto label_1b967c;
            case 0x1B9680u: goto label_1b9680;
            case 0x1B9684u: goto label_1b9684;
            case 0x1B9688u: goto label_1b9688;
            case 0x1B968Cu: goto label_1b968c;
            case 0x1B9690u: goto label_1b9690;
            case 0x1B9694u: goto label_1b9694;
            case 0x1B9698u: goto label_1b9698;
            case 0x1B969Cu: goto label_1b969c;
            case 0x1B96A0u: goto label_1b96a0;
            case 0x1B96A4u: goto label_1b96a4;
            case 0x1B96A8u: goto label_1b96a8;
            case 0x1B96ACu: goto label_1b96ac;
            case 0x1B96B0u: goto label_1b96b0;
            case 0x1B96B4u: goto label_1b96b4;
            case 0x1B96B8u: goto label_1b96b8;
            case 0x1B96BCu: goto label_1b96bc;
            case 0x1B96C0u: goto label_1b96c0;
            case 0x1B96C4u: goto label_1b96c4;
            case 0x1B96C8u: goto label_1b96c8;
            case 0x1B96CCu: goto label_1b96cc;
            case 0x1B96D0u: goto label_1b96d0;
            case 0x1B96D4u: goto label_1b96d4;
            case 0x1B96D8u: goto label_1b96d8;
            case 0x1B96DCu: goto label_1b96dc;
            case 0x1B96E0u: goto label_1b96e0;
            case 0x1B96E4u: goto label_1b96e4;
            case 0x1B96E8u: goto label_1b96e8;
            case 0x1B96ECu: goto label_1b96ec;
            case 0x1B96F0u: goto label_1b96f0;
            case 0x1B96F4u: goto label_1b96f4;
            case 0x1B96F8u: goto label_1b96f8;
            case 0x1B96FCu: goto label_1b96fc;
            case 0x1B9700u: goto label_1b9700;
            case 0x1B9704u: goto label_1b9704;
            case 0x1B9708u: goto label_1b9708;
            case 0x1B970Cu: goto label_1b970c;
            case 0x1B9710u: goto label_1b9710;
            case 0x1B9714u: goto label_1b9714;
            case 0x1B9718u: goto label_1b9718;
            case 0x1B971Cu: goto label_1b971c;
            case 0x1B9720u: goto label_1b9720;
            case 0x1B9724u: goto label_1b9724;
            case 0x1B9728u: goto label_1b9728;
            case 0x1B972Cu: goto label_1b972c;
            case 0x1B9730u: goto label_1b9730;
            case 0x1B9734u: goto label_1b9734;
            case 0x1B9738u: goto label_1b9738;
            case 0x1B973Cu: goto label_1b973c;
            case 0x1B9740u: goto label_1b9740;
            case 0x1B9744u: goto label_1b9744;
            case 0x1B9748u: goto label_1b9748;
            case 0x1B974Cu: goto label_1b974c;
            case 0x1B9750u: goto label_1b9750;
            case 0x1B9754u: goto label_1b9754;
            case 0x1B9758u: goto label_1b9758;
            case 0x1B975Cu: goto label_1b975c;
            case 0x1B9760u: goto label_1b9760;
            case 0x1B9764u: goto label_1b9764;
            case 0x1B9768u: goto label_1b9768;
            case 0x1B976Cu: goto label_1b976c;
            case 0x1B9770u: goto label_1b9770;
            case 0x1B9774u: goto label_1b9774;
            case 0x1B9778u: goto label_1b9778;
            case 0x1B977Cu: goto label_1b977c;
            case 0x1B9780u: goto label_1b9780;
            case 0x1B9784u: goto label_1b9784;
            case 0x1B9788u: goto label_1b9788;
            case 0x1B978Cu: goto label_1b978c;
            case 0x1B9790u: goto label_1b9790;
            case 0x1B9794u: goto label_1b9794;
            case 0x1B9798u: goto label_1b9798;
            case 0x1B979Cu: goto label_1b979c;
            case 0x1B97A0u: goto label_1b97a0;
            case 0x1B97A4u: goto label_1b97a4;
            case 0x1B97A8u: goto label_1b97a8;
            case 0x1B97ACu: goto label_1b97ac;
            case 0x1B97B0u: goto label_1b97b0;
            case 0x1B97B4u: goto label_1b97b4;
            case 0x1B97B8u: goto label_1b97b8;
            case 0x1B97BCu: goto label_1b97bc;
            case 0x1B97C0u: goto label_1b97c0;
            case 0x1B97C4u: goto label_1b97c4;
            case 0x1B97C8u: goto label_1b97c8;
            case 0x1B97CCu: goto label_1b97cc;
            case 0x1B97D0u: goto label_1b97d0;
            case 0x1B97D4u: goto label_1b97d4;
            case 0x1B97D8u: goto label_1b97d8;
            case 0x1B97DCu: goto label_1b97dc;
            case 0x1B97E0u: goto label_1b97e0;
            case 0x1B97E4u: goto label_1b97e4;
            case 0x1B97E8u: goto label_1b97e8;
            case 0x1B97ECu: goto label_1b97ec;
            case 0x1B97F0u: goto label_1b97f0;
            case 0x1B97F4u: goto label_1b97f4;
            case 0x1B97F8u: goto label_1b97f8;
            case 0x1B97FCu: goto label_1b97fc;
            case 0x1B9800u: goto label_1b9800;
            case 0x1B9804u: goto label_1b9804;
            case 0x1B9808u: goto label_1b9808;
            case 0x1B980Cu: goto label_1b980c;
            case 0x1B9810u: goto label_1b9810;
            case 0x1B9814u: goto label_1b9814;
            case 0x1B9818u: goto label_1b9818;
            case 0x1B981Cu: goto label_1b981c;
            case 0x1B9820u: goto label_1b9820;
            case 0x1B9824u: goto label_1b9824;
            case 0x1B9828u: goto label_1b9828;
            case 0x1B982Cu: goto label_1b982c;
            case 0x1B9830u: goto label_1b9830;
            case 0x1B9834u: goto label_1b9834;
            case 0x1B9838u: goto label_1b9838;
            case 0x1B983Cu: goto label_1b983c;
            case 0x1B9840u: goto label_1b9840;
            case 0x1B9844u: goto label_1b9844;
            case 0x1B9848u: goto label_1b9848;
            case 0x1B984Cu: goto label_1b984c;
            case 0x1B9850u: goto label_1b9850;
            case 0x1B9854u: goto label_1b9854;
            case 0x1B9858u: goto label_1b9858;
            case 0x1B985Cu: goto label_1b985c;
            case 0x1B9860u: goto label_1b9860;
            case 0x1B9864u: goto label_1b9864;
            case 0x1B9868u: goto label_1b9868;
            case 0x1B986Cu: goto label_1b986c;
            case 0x1B9870u: goto label_1b9870;
            case 0x1B9874u: goto label_1b9874;
            case 0x1B9878u: goto label_1b9878;
            case 0x1B987Cu: goto label_1b987c;
            case 0x1B9880u: goto label_1b9880;
            case 0x1B9884u: goto label_1b9884;
            case 0x1B9888u: goto label_1b9888;
            case 0x1B988Cu: goto label_1b988c;
            case 0x1B9890u: goto label_1b9890;
            case 0x1B9894u: goto label_1b9894;
            case 0x1B9898u: goto label_1b9898;
            case 0x1B989Cu: goto label_1b989c;
            case 0x1B98A0u: goto label_1b98a0;
            case 0x1B98A4u: goto label_1b98a4;
            case 0x1B98A8u: goto label_1b98a8;
            case 0x1B98ACu: goto label_1b98ac;
            case 0x1B98B0u: goto label_1b98b0;
            case 0x1B98B4u: goto label_1b98b4;
            case 0x1B98B8u: goto label_1b98b8;
            case 0x1B98BCu: goto label_1b98bc;
            case 0x1B98C0u: goto label_1b98c0;
            case 0x1B98C4u: goto label_1b98c4;
            case 0x1B98C8u: goto label_1b98c8;
            case 0x1B98CCu: goto label_1b98cc;
            case 0x1B98D0u: goto label_1b98d0;
            case 0x1B98D4u: goto label_1b98d4;
            case 0x1B98D8u: goto label_1b98d8;
            case 0x1B98DCu: goto label_1b98dc;
            case 0x1B98E0u: goto label_1b98e0;
            case 0x1B98E4u: goto label_1b98e4;
            case 0x1B98E8u: goto label_1b98e8;
            case 0x1B98ECu: goto label_1b98ec;
            case 0x1B98F0u: goto label_1b98f0;
            case 0x1B98F4u: goto label_1b98f4;
            case 0x1B98F8u: goto label_1b98f8;
            case 0x1B98FCu: goto label_1b98fc;
            case 0x1B9900u: goto label_1b9900;
            case 0x1B9904u: goto label_1b9904;
            case 0x1B9908u: goto label_1b9908;
            case 0x1B990Cu: goto label_1b990c;
            case 0x1B9910u: goto label_1b9910;
            case 0x1B9914u: goto label_1b9914;
            case 0x1B9918u: goto label_1b9918;
            case 0x1B991Cu: goto label_1b991c;
            case 0x1B9920u: goto label_1b9920;
            case 0x1B9924u: goto label_1b9924;
            case 0x1B9928u: goto label_1b9928;
            case 0x1B992Cu: goto label_1b992c;
            case 0x1B9930u: goto label_1b9930;
            case 0x1B9934u: goto label_1b9934;
            case 0x1B9938u: goto label_1b9938;
            case 0x1B993Cu: goto label_1b993c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B98DCu;
label_1b98dc:
    // 0x1b98dc: 0x0
    ctx->pc = 0x1b98dcu;
    // NOP
label_1b98e0:
    // 0x1b98e0: 0x27bdffd0
    ctx->pc = 0x1b98e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b98e4:
    // 0x1b98e4: 0xffbf0020
    ctx->pc = 0x1b98e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b98e8:
    // 0x1b98e8: 0x7fb10010
    ctx->pc = 0x1b98e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b98ec:
    // 0x1b98ec: 0x7fb00000
    ctx->pc = 0x1b98ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b98f0:
    // 0x1b98f0: 0x3c11003c
    ctx->pc = 0x1b98f0u;
    SET_GPR_U32(ctx, 17, ((uint32_t)60 << 16));
label_1b98f4:
    // 0x1b98f4: 0x26312750
    ctx->pc = 0x1b98f4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 10064));
label_1b98f8:
    // 0x1b98f8: 0x802d
    ctx->pc = 0x1b98f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b98fc:
    // 0x1b98fc: 0x82230000
    ctx->pc = 0x1b98fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1b9900:
    // 0x1b9900: 0x10600004
label_1b9904:
    if (ctx->pc == 0x1B9904u) {
        ctx->pc = 0x1B9908u;
        goto label_1b9908;
    }
    ctx->pc = 0x1B9900u;
    {
        const bool branch_taken_0x1b9900 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b9900) {
            ctx->pc = 0x1B9914u;
            goto label_1b9914;
        }
    }
    ctx->pc = 0x1B9908u;
label_1b9908:
    // 0x1b9908: 0x8e220028
    ctx->pc = 0x1b9908u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1b990c:
    // 0x1b990c: 0x40f809
label_1b9910:
    if (ctx->pc == 0x1B9910u) {
        ctx->pc = 0x1B9910u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B9914u;
        goto label_1b9914;
    }
    ctx->pc = 0x1B990Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B9914u);
        ctx->pc = 0x1B9910u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B94B0u: goto label_1b94b0;
            case 0x1B94B4u: goto label_1b94b4;
            case 0x1B94B8u: goto label_1b94b8;
            case 0x1B94BCu: goto label_1b94bc;
            case 0x1B94C0u: goto label_1b94c0;
            case 0x1B94C4u: goto label_1b94c4;
            case 0x1B94C8u: goto label_1b94c8;
            case 0x1B94CCu: goto label_1b94cc;
            case 0x1B94D0u: goto label_1b94d0;
            case 0x1B94D4u: goto label_1b94d4;
            case 0x1B94D8u: goto label_1b94d8;
            case 0x1B94DCu: goto label_1b94dc;
            case 0x1B94E0u: goto label_1b94e0;
            case 0x1B94E4u: goto label_1b94e4;
            case 0x1B94E8u: goto label_1b94e8;
            case 0x1B94ECu: goto label_1b94ec;
            case 0x1B94F0u: goto label_1b94f0;
            case 0x1B94F4u: goto label_1b94f4;
            case 0x1B94F8u: goto label_1b94f8;
            case 0x1B94FCu: goto label_1b94fc;
            case 0x1B9500u: goto label_1b9500;
            case 0x1B9504u: goto label_1b9504;
            case 0x1B9508u: goto label_1b9508;
            case 0x1B950Cu: goto label_1b950c;
            case 0x1B9510u: goto label_1b9510;
            case 0x1B9514u: goto label_1b9514;
            case 0x1B9518u: goto label_1b9518;
            case 0x1B951Cu: goto label_1b951c;
            case 0x1B9520u: goto label_1b9520;
            case 0x1B9524u: goto label_1b9524;
            case 0x1B9528u: goto label_1b9528;
            case 0x1B952Cu: goto label_1b952c;
            case 0x1B9530u: goto label_1b9530;
            case 0x1B9534u: goto label_1b9534;
            case 0x1B9538u: goto label_1b9538;
            case 0x1B953Cu: goto label_1b953c;
            case 0x1B9540u: goto label_1b9540;
            case 0x1B9544u: goto label_1b9544;
            case 0x1B9548u: goto label_1b9548;
            case 0x1B954Cu: goto label_1b954c;
            case 0x1B9550u: goto label_1b9550;
            case 0x1B9554u: goto label_1b9554;
            case 0x1B9558u: goto label_1b9558;
            case 0x1B955Cu: goto label_1b955c;
            case 0x1B9560u: goto label_1b9560;
            case 0x1B9564u: goto label_1b9564;
            case 0x1B9568u: goto label_1b9568;
            case 0x1B956Cu: goto label_1b956c;
            case 0x1B9570u: goto label_1b9570;
            case 0x1B9574u: goto label_1b9574;
            case 0x1B9578u: goto label_1b9578;
            case 0x1B957Cu: goto label_1b957c;
            case 0x1B9580u: goto label_1b9580;
            case 0x1B9584u: goto label_1b9584;
            case 0x1B9588u: goto label_1b9588;
            case 0x1B958Cu: goto label_1b958c;
            case 0x1B9590u: goto label_1b9590;
            case 0x1B9594u: goto label_1b9594;
            case 0x1B9598u: goto label_1b9598;
            case 0x1B959Cu: goto label_1b959c;
            case 0x1B95A0u: goto label_1b95a0;
            case 0x1B95A4u: goto label_1b95a4;
            case 0x1B95A8u: goto label_1b95a8;
            case 0x1B95ACu: goto label_1b95ac;
            case 0x1B95B0u: goto label_1b95b0;
            case 0x1B95B4u: goto label_1b95b4;
            case 0x1B95B8u: goto label_1b95b8;
            case 0x1B95BCu: goto label_1b95bc;
            case 0x1B95C0u: goto label_1b95c0;
            case 0x1B95C4u: goto label_1b95c4;
            case 0x1B95C8u: goto label_1b95c8;
            case 0x1B95CCu: goto label_1b95cc;
            case 0x1B95D0u: goto label_1b95d0;
            case 0x1B95D4u: goto label_1b95d4;
            case 0x1B95D8u: goto label_1b95d8;
            case 0x1B95DCu: goto label_1b95dc;
            case 0x1B95E0u: goto label_1b95e0;
            case 0x1B95E4u: goto label_1b95e4;
            case 0x1B95E8u: goto label_1b95e8;
            case 0x1B95ECu: goto label_1b95ec;
            case 0x1B95F0u: goto label_1b95f0;
            case 0x1B95F4u: goto label_1b95f4;
            case 0x1B95F8u: goto label_1b95f8;
            case 0x1B95FCu: goto label_1b95fc;
            case 0x1B9600u: goto label_1b9600;
            case 0x1B9604u: goto label_1b9604;
            case 0x1B9608u: goto label_1b9608;
            case 0x1B960Cu: goto label_1b960c;
            case 0x1B9610u: goto label_1b9610;
            case 0x1B9614u: goto label_1b9614;
            case 0x1B9618u: goto label_1b9618;
            case 0x1B961Cu: goto label_1b961c;
            case 0x1B9620u: goto label_1b9620;
            case 0x1B9624u: goto label_1b9624;
            case 0x1B9628u: goto label_1b9628;
            case 0x1B962Cu: goto label_1b962c;
            case 0x1B9630u: goto label_1b9630;
            case 0x1B9634u: goto label_1b9634;
            case 0x1B9638u: goto label_1b9638;
            case 0x1B963Cu: goto label_1b963c;
            case 0x1B9640u: goto label_1b9640;
            case 0x1B9644u: goto label_1b9644;
            case 0x1B9648u: goto label_1b9648;
            case 0x1B964Cu: goto label_1b964c;
            case 0x1B9650u: goto label_1b9650;
            case 0x1B9654u: goto label_1b9654;
            case 0x1B9658u: goto label_1b9658;
            case 0x1B965Cu: goto label_1b965c;
            case 0x1B9660u: goto label_1b9660;
            case 0x1B9664u: goto label_1b9664;
            case 0x1B9668u: goto label_1b9668;
            case 0x1B966Cu: goto label_1b966c;
            case 0x1B9670u: goto label_1b9670;
            case 0x1B9674u: goto label_1b9674;
            case 0x1B9678u: goto label_1b9678;
            case 0x1B967Cu: goto label_1b967c;
            case 0x1B9680u: goto label_1b9680;
            case 0x1B9684u: goto label_1b9684;
            case 0x1B9688u: goto label_1b9688;
            case 0x1B968Cu: goto label_1b968c;
            case 0x1B9690u: goto label_1b9690;
            case 0x1B9694u: goto label_1b9694;
            case 0x1B9698u: goto label_1b9698;
            case 0x1B969Cu: goto label_1b969c;
            case 0x1B96A0u: goto label_1b96a0;
            case 0x1B96A4u: goto label_1b96a4;
            case 0x1B96A8u: goto label_1b96a8;
            case 0x1B96ACu: goto label_1b96ac;
            case 0x1B96B0u: goto label_1b96b0;
            case 0x1B96B4u: goto label_1b96b4;
            case 0x1B96B8u: goto label_1b96b8;
            case 0x1B96BCu: goto label_1b96bc;
            case 0x1B96C0u: goto label_1b96c0;
            case 0x1B96C4u: goto label_1b96c4;
            case 0x1B96C8u: goto label_1b96c8;
            case 0x1B96CCu: goto label_1b96cc;
            case 0x1B96D0u: goto label_1b96d0;
            case 0x1B96D4u: goto label_1b96d4;
            case 0x1B96D8u: goto label_1b96d8;
            case 0x1B96DCu: goto label_1b96dc;
            case 0x1B96E0u: goto label_1b96e0;
            case 0x1B96E4u: goto label_1b96e4;
            case 0x1B96E8u: goto label_1b96e8;
            case 0x1B96ECu: goto label_1b96ec;
            case 0x1B96F0u: goto label_1b96f0;
            case 0x1B96F4u: goto label_1b96f4;
            case 0x1B96F8u: goto label_1b96f8;
            case 0x1B96FCu: goto label_1b96fc;
            case 0x1B9700u: goto label_1b9700;
            case 0x1B9704u: goto label_1b9704;
            case 0x1B9708u: goto label_1b9708;
            case 0x1B970Cu: goto label_1b970c;
            case 0x1B9710u: goto label_1b9710;
            case 0x1B9714u: goto label_1b9714;
            case 0x1B9718u: goto label_1b9718;
            case 0x1B971Cu: goto label_1b971c;
            case 0x1B9720u: goto label_1b9720;
            case 0x1B9724u: goto label_1b9724;
            case 0x1B9728u: goto label_1b9728;
            case 0x1B972Cu: goto label_1b972c;
            case 0x1B9730u: goto label_1b9730;
            case 0x1B9734u: goto label_1b9734;
            case 0x1B9738u: goto label_1b9738;
            case 0x1B973Cu: goto label_1b973c;
            case 0x1B9740u: goto label_1b9740;
            case 0x1B9744u: goto label_1b9744;
            case 0x1B9748u: goto label_1b9748;
            case 0x1B974Cu: goto label_1b974c;
            case 0x1B9750u: goto label_1b9750;
            case 0x1B9754u: goto label_1b9754;
            case 0x1B9758u: goto label_1b9758;
            case 0x1B975Cu: goto label_1b975c;
            case 0x1B9760u: goto label_1b9760;
            case 0x1B9764u: goto label_1b9764;
            case 0x1B9768u: goto label_1b9768;
            case 0x1B976Cu: goto label_1b976c;
            case 0x1B9770u: goto label_1b9770;
            case 0x1B9774u: goto label_1b9774;
            case 0x1B9778u: goto label_1b9778;
            case 0x1B977Cu: goto label_1b977c;
            case 0x1B9780u: goto label_1b9780;
            case 0x1B9784u: goto label_1b9784;
            case 0x1B9788u: goto label_1b9788;
            case 0x1B978Cu: goto label_1b978c;
            case 0x1B9790u: goto label_1b9790;
            case 0x1B9794u: goto label_1b9794;
            case 0x1B9798u: goto label_1b9798;
            case 0x1B979Cu: goto label_1b979c;
            case 0x1B97A0u: goto label_1b97a0;
            case 0x1B97A4u: goto label_1b97a4;
            case 0x1B97A8u: goto label_1b97a8;
            case 0x1B97ACu: goto label_1b97ac;
            case 0x1B97B0u: goto label_1b97b0;
            case 0x1B97B4u: goto label_1b97b4;
            case 0x1B97B8u: goto label_1b97b8;
            case 0x1B97BCu: goto label_1b97bc;
            case 0x1B97C0u: goto label_1b97c0;
            case 0x1B97C4u: goto label_1b97c4;
            case 0x1B97C8u: goto label_1b97c8;
            case 0x1B97CCu: goto label_1b97cc;
            case 0x1B97D0u: goto label_1b97d0;
            case 0x1B97D4u: goto label_1b97d4;
            case 0x1B97D8u: goto label_1b97d8;
            case 0x1B97DCu: goto label_1b97dc;
            case 0x1B97E0u: goto label_1b97e0;
            case 0x1B97E4u: goto label_1b97e4;
            case 0x1B97E8u: goto label_1b97e8;
            case 0x1B97ECu: goto label_1b97ec;
            case 0x1B97F0u: goto label_1b97f0;
            case 0x1B97F4u: goto label_1b97f4;
            case 0x1B97F8u: goto label_1b97f8;
            case 0x1B97FCu: goto label_1b97fc;
            case 0x1B9800u: goto label_1b9800;
            case 0x1B9804u: goto label_1b9804;
            case 0x1B9808u: goto label_1b9808;
            case 0x1B980Cu: goto label_1b980c;
            case 0x1B9810u: goto label_1b9810;
            case 0x1B9814u: goto label_1b9814;
            case 0x1B9818u: goto label_1b9818;
            case 0x1B981Cu: goto label_1b981c;
            case 0x1B9820u: goto label_1b9820;
            case 0x1B9824u: goto label_1b9824;
            case 0x1B9828u: goto label_1b9828;
            case 0x1B982Cu: goto label_1b982c;
            case 0x1B9830u: goto label_1b9830;
            case 0x1B9834u: goto label_1b9834;
            case 0x1B9838u: goto label_1b9838;
            case 0x1B983Cu: goto label_1b983c;
            case 0x1B9840u: goto label_1b9840;
            case 0x1B9844u: goto label_1b9844;
            case 0x1B9848u: goto label_1b9848;
            case 0x1B984Cu: goto label_1b984c;
            case 0x1B9850u: goto label_1b9850;
            case 0x1B9854u: goto label_1b9854;
            case 0x1B9858u: goto label_1b9858;
            case 0x1B985Cu: goto label_1b985c;
            case 0x1B9860u: goto label_1b9860;
            case 0x1B9864u: goto label_1b9864;
            case 0x1B9868u: goto label_1b9868;
            case 0x1B986Cu: goto label_1b986c;
            case 0x1B9870u: goto label_1b9870;
            case 0x1B9874u: goto label_1b9874;
            case 0x1B9878u: goto label_1b9878;
            case 0x1B987Cu: goto label_1b987c;
            case 0x1B9880u: goto label_1b9880;
            case 0x1B9884u: goto label_1b9884;
            case 0x1B9888u: goto label_1b9888;
            case 0x1B988Cu: goto label_1b988c;
            case 0x1B9890u: goto label_1b9890;
            case 0x1B9894u: goto label_1b9894;
            case 0x1B9898u: goto label_1b9898;
            case 0x1B989Cu: goto label_1b989c;
            case 0x1B98A0u: goto label_1b98a0;
            case 0x1B98A4u: goto label_1b98a4;
            case 0x1B98A8u: goto label_1b98a8;
            case 0x1B98ACu: goto label_1b98ac;
            case 0x1B98B0u: goto label_1b98b0;
            case 0x1B98B4u: goto label_1b98b4;
            case 0x1B98B8u: goto label_1b98b8;
            case 0x1B98BCu: goto label_1b98bc;
            case 0x1B98C0u: goto label_1b98c0;
            case 0x1B98C4u: goto label_1b98c4;
            case 0x1B98C8u: goto label_1b98c8;
            case 0x1B98CCu: goto label_1b98cc;
            case 0x1B98D0u: goto label_1b98d0;
            case 0x1B98D4u: goto label_1b98d4;
            case 0x1B98D8u: goto label_1b98d8;
            case 0x1B98DCu: goto label_1b98dc;
            case 0x1B98E0u: goto label_1b98e0;
            case 0x1B98E4u: goto label_1b98e4;
            case 0x1B98E8u: goto label_1b98e8;
            case 0x1B98ECu: goto label_1b98ec;
            case 0x1B98F0u: goto label_1b98f0;
            case 0x1B98F4u: goto label_1b98f4;
            case 0x1B98F8u: goto label_1b98f8;
            case 0x1B98FCu: goto label_1b98fc;
            case 0x1B9900u: goto label_1b9900;
            case 0x1B9904u: goto label_1b9904;
            case 0x1B9908u: goto label_1b9908;
            case 0x1B990Cu: goto label_1b990c;
            case 0x1B9910u: goto label_1b9910;
            case 0x1B9914u: goto label_1b9914;
            case 0x1B9918u: goto label_1b9918;
            case 0x1B991Cu: goto label_1b991c;
            case 0x1B9920u: goto label_1b9920;
            case 0x1B9924u: goto label_1b9924;
            case 0x1B9928u: goto label_1b9928;
            case 0x1B992Cu: goto label_1b992c;
            case 0x1B9930u: goto label_1b9930;
            case 0x1B9934u: goto label_1b9934;
            case 0x1B9938u: goto label_1b9938;
            case 0x1B993Cu: goto label_1b993c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B9914u; }
            if (ctx->pc != 0x1B9914u) { return; }
        }
    }
    ctx->pc = 0x1B9914u;
label_1b9914:
    // 0x1b9914: 0x26100001
    ctx->pc = 0x1b9914u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1b9918:
    // 0x1b9918: 0x2a030004
    ctx->pc = 0x1b9918u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 4));
label_1b991c:
    // 0x1b991c: 0x1460fff7
label_1b9920:
    if (ctx->pc == 0x1B9920u) {
        ctx->pc = 0x1B9920u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 60));
        ctx->pc = 0x1B9924u;
        goto label_1b9924;
    }
    ctx->pc = 0x1B991Cu;
    {
        const bool branch_taken_0x1b991c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B9920u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 60));
        if (branch_taken_0x1b991c) {
            ctx->pc = 0x1B98FCu;
            goto label_1b98fc;
        }
    }
    ctx->pc = 0x1B9924u;
label_1b9924:
    // 0x1b9924: 0xdfbf0020
    ctx->pc = 0x1b9924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b9928:
    // 0x1b9928: 0x7bb10010
    ctx->pc = 0x1b9928u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b992c:
    // 0x1b992c: 0x7bb00000
    ctx->pc = 0x1b992cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b9930:
    // 0x1b9930: 0x3e00008
label_1b9934:
    if (ctx->pc == 0x1B9934u) {
        ctx->pc = 0x1B9934u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1B9938u;
        goto label_1b9938;
    }
    ctx->pc = 0x1B9930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9934u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B94B0u: goto label_1b94b0;
            case 0x1B94B4u: goto label_1b94b4;
            case 0x1B94B8u: goto label_1b94b8;
            case 0x1B94BCu: goto label_1b94bc;
            case 0x1B94C0u: goto label_1b94c0;
            case 0x1B94C4u: goto label_1b94c4;
            case 0x1B94C8u: goto label_1b94c8;
            case 0x1B94CCu: goto label_1b94cc;
            case 0x1B94D0u: goto label_1b94d0;
            case 0x1B94D4u: goto label_1b94d4;
            case 0x1B94D8u: goto label_1b94d8;
            case 0x1B94DCu: goto label_1b94dc;
            case 0x1B94E0u: goto label_1b94e0;
            case 0x1B94E4u: goto label_1b94e4;
            case 0x1B94E8u: goto label_1b94e8;
            case 0x1B94ECu: goto label_1b94ec;
            case 0x1B94F0u: goto label_1b94f0;
            case 0x1B94F4u: goto label_1b94f4;
            case 0x1B94F8u: goto label_1b94f8;
            case 0x1B94FCu: goto label_1b94fc;
            case 0x1B9500u: goto label_1b9500;
            case 0x1B9504u: goto label_1b9504;
            case 0x1B9508u: goto label_1b9508;
            case 0x1B950Cu: goto label_1b950c;
            case 0x1B9510u: goto label_1b9510;
            case 0x1B9514u: goto label_1b9514;
            case 0x1B9518u: goto label_1b9518;
            case 0x1B951Cu: goto label_1b951c;
            case 0x1B9520u: goto label_1b9520;
            case 0x1B9524u: goto label_1b9524;
            case 0x1B9528u: goto label_1b9528;
            case 0x1B952Cu: goto label_1b952c;
            case 0x1B9530u: goto label_1b9530;
            case 0x1B9534u: goto label_1b9534;
            case 0x1B9538u: goto label_1b9538;
            case 0x1B953Cu: goto label_1b953c;
            case 0x1B9540u: goto label_1b9540;
            case 0x1B9544u: goto label_1b9544;
            case 0x1B9548u: goto label_1b9548;
            case 0x1B954Cu: goto label_1b954c;
            case 0x1B9550u: goto label_1b9550;
            case 0x1B9554u: goto label_1b9554;
            case 0x1B9558u: goto label_1b9558;
            case 0x1B955Cu: goto label_1b955c;
            case 0x1B9560u: goto label_1b9560;
            case 0x1B9564u: goto label_1b9564;
            case 0x1B9568u: goto label_1b9568;
            case 0x1B956Cu: goto label_1b956c;
            case 0x1B9570u: goto label_1b9570;
            case 0x1B9574u: goto label_1b9574;
            case 0x1B9578u: goto label_1b9578;
            case 0x1B957Cu: goto label_1b957c;
            case 0x1B9580u: goto label_1b9580;
            case 0x1B9584u: goto label_1b9584;
            case 0x1B9588u: goto label_1b9588;
            case 0x1B958Cu: goto label_1b958c;
            case 0x1B9590u: goto label_1b9590;
            case 0x1B9594u: goto label_1b9594;
            case 0x1B9598u: goto label_1b9598;
            case 0x1B959Cu: goto label_1b959c;
            case 0x1B95A0u: goto label_1b95a0;
            case 0x1B95A4u: goto label_1b95a4;
            case 0x1B95A8u: goto label_1b95a8;
            case 0x1B95ACu: goto label_1b95ac;
            case 0x1B95B0u: goto label_1b95b0;
            case 0x1B95B4u: goto label_1b95b4;
            case 0x1B95B8u: goto label_1b95b8;
            case 0x1B95BCu: goto label_1b95bc;
            case 0x1B95C0u: goto label_1b95c0;
            case 0x1B95C4u: goto label_1b95c4;
            case 0x1B95C8u: goto label_1b95c8;
            case 0x1B95CCu: goto label_1b95cc;
            case 0x1B95D0u: goto label_1b95d0;
            case 0x1B95D4u: goto label_1b95d4;
            case 0x1B95D8u: goto label_1b95d8;
            case 0x1B95DCu: goto label_1b95dc;
            case 0x1B95E0u: goto label_1b95e0;
            case 0x1B95E4u: goto label_1b95e4;
            case 0x1B95E8u: goto label_1b95e8;
            case 0x1B95ECu: goto label_1b95ec;
            case 0x1B95F0u: goto label_1b95f0;
            case 0x1B95F4u: goto label_1b95f4;
            case 0x1B95F8u: goto label_1b95f8;
            case 0x1B95FCu: goto label_1b95fc;
            case 0x1B9600u: goto label_1b9600;
            case 0x1B9604u: goto label_1b9604;
            case 0x1B9608u: goto label_1b9608;
            case 0x1B960Cu: goto label_1b960c;
            case 0x1B9610u: goto label_1b9610;
            case 0x1B9614u: goto label_1b9614;
            case 0x1B9618u: goto label_1b9618;
            case 0x1B961Cu: goto label_1b961c;
            case 0x1B9620u: goto label_1b9620;
            case 0x1B9624u: goto label_1b9624;
            case 0x1B9628u: goto label_1b9628;
            case 0x1B962Cu: goto label_1b962c;
            case 0x1B9630u: goto label_1b9630;
            case 0x1B9634u: goto label_1b9634;
            case 0x1B9638u: goto label_1b9638;
            case 0x1B963Cu: goto label_1b963c;
            case 0x1B9640u: goto label_1b9640;
            case 0x1B9644u: goto label_1b9644;
            case 0x1B9648u: goto label_1b9648;
            case 0x1B964Cu: goto label_1b964c;
            case 0x1B9650u: goto label_1b9650;
            case 0x1B9654u: goto label_1b9654;
            case 0x1B9658u: goto label_1b9658;
            case 0x1B965Cu: goto label_1b965c;
            case 0x1B9660u: goto label_1b9660;
            case 0x1B9664u: goto label_1b9664;
            case 0x1B9668u: goto label_1b9668;
            case 0x1B966Cu: goto label_1b966c;
            case 0x1B9670u: goto label_1b9670;
            case 0x1B9674u: goto label_1b9674;
            case 0x1B9678u: goto label_1b9678;
            case 0x1B967Cu: goto label_1b967c;
            case 0x1B9680u: goto label_1b9680;
            case 0x1B9684u: goto label_1b9684;
            case 0x1B9688u: goto label_1b9688;
            case 0x1B968Cu: goto label_1b968c;
            case 0x1B9690u: goto label_1b9690;
            case 0x1B9694u: goto label_1b9694;
            case 0x1B9698u: goto label_1b9698;
            case 0x1B969Cu: goto label_1b969c;
            case 0x1B96A0u: goto label_1b96a0;
            case 0x1B96A4u: goto label_1b96a4;
            case 0x1B96A8u: goto label_1b96a8;
            case 0x1B96ACu: goto label_1b96ac;
            case 0x1B96B0u: goto label_1b96b0;
            case 0x1B96B4u: goto label_1b96b4;
            case 0x1B96B8u: goto label_1b96b8;
            case 0x1B96BCu: goto label_1b96bc;
            case 0x1B96C0u: goto label_1b96c0;
            case 0x1B96C4u: goto label_1b96c4;
            case 0x1B96C8u: goto label_1b96c8;
            case 0x1B96CCu: goto label_1b96cc;
            case 0x1B96D0u: goto label_1b96d0;
            case 0x1B96D4u: goto label_1b96d4;
            case 0x1B96D8u: goto label_1b96d8;
            case 0x1B96DCu: goto label_1b96dc;
            case 0x1B96E0u: goto label_1b96e0;
            case 0x1B96E4u: goto label_1b96e4;
            case 0x1B96E8u: goto label_1b96e8;
            case 0x1B96ECu: goto label_1b96ec;
            case 0x1B96F0u: goto label_1b96f0;
            case 0x1B96F4u: goto label_1b96f4;
            case 0x1B96F8u: goto label_1b96f8;
            case 0x1B96FCu: goto label_1b96fc;
            case 0x1B9700u: goto label_1b9700;
            case 0x1B9704u: goto label_1b9704;
            case 0x1B9708u: goto label_1b9708;
            case 0x1B970Cu: goto label_1b970c;
            case 0x1B9710u: goto label_1b9710;
            case 0x1B9714u: goto label_1b9714;
            case 0x1B9718u: goto label_1b9718;
            case 0x1B971Cu: goto label_1b971c;
            case 0x1B9720u: goto label_1b9720;
            case 0x1B9724u: goto label_1b9724;
            case 0x1B9728u: goto label_1b9728;
            case 0x1B972Cu: goto label_1b972c;
            case 0x1B9730u: goto label_1b9730;
            case 0x1B9734u: goto label_1b9734;
            case 0x1B9738u: goto label_1b9738;
            case 0x1B973Cu: goto label_1b973c;
            case 0x1B9740u: goto label_1b9740;
            case 0x1B9744u: goto label_1b9744;
            case 0x1B9748u: goto label_1b9748;
            case 0x1B974Cu: goto label_1b974c;
            case 0x1B9750u: goto label_1b9750;
            case 0x1B9754u: goto label_1b9754;
            case 0x1B9758u: goto label_1b9758;
            case 0x1B975Cu: goto label_1b975c;
            case 0x1B9760u: goto label_1b9760;
            case 0x1B9764u: goto label_1b9764;
            case 0x1B9768u: goto label_1b9768;
            case 0x1B976Cu: goto label_1b976c;
            case 0x1B9770u: goto label_1b9770;
            case 0x1B9774u: goto label_1b9774;
            case 0x1B9778u: goto label_1b9778;
            case 0x1B977Cu: goto label_1b977c;
            case 0x1B9780u: goto label_1b9780;
            case 0x1B9784u: goto label_1b9784;
            case 0x1B9788u: goto label_1b9788;
            case 0x1B978Cu: goto label_1b978c;
            case 0x1B9790u: goto label_1b9790;
            case 0x1B9794u: goto label_1b9794;
            case 0x1B9798u: goto label_1b9798;
            case 0x1B979Cu: goto label_1b979c;
            case 0x1B97A0u: goto label_1b97a0;
            case 0x1B97A4u: goto label_1b97a4;
            case 0x1B97A8u: goto label_1b97a8;
            case 0x1B97ACu: goto label_1b97ac;
            case 0x1B97B0u: goto label_1b97b0;
            case 0x1B97B4u: goto label_1b97b4;
            case 0x1B97B8u: goto label_1b97b8;
            case 0x1B97BCu: goto label_1b97bc;
            case 0x1B97C0u: goto label_1b97c0;
            case 0x1B97C4u: goto label_1b97c4;
            case 0x1B97C8u: goto label_1b97c8;
            case 0x1B97CCu: goto label_1b97cc;
            case 0x1B97D0u: goto label_1b97d0;
            case 0x1B97D4u: goto label_1b97d4;
            case 0x1B97D8u: goto label_1b97d8;
            case 0x1B97DCu: goto label_1b97dc;
            case 0x1B97E0u: goto label_1b97e0;
            case 0x1B97E4u: goto label_1b97e4;
            case 0x1B97E8u: goto label_1b97e8;
            case 0x1B97ECu: goto label_1b97ec;
            case 0x1B97F0u: goto label_1b97f0;
            case 0x1B97F4u: goto label_1b97f4;
            case 0x1B97F8u: goto label_1b97f8;
            case 0x1B97FCu: goto label_1b97fc;
            case 0x1B9800u: goto label_1b9800;
            case 0x1B9804u: goto label_1b9804;
            case 0x1B9808u: goto label_1b9808;
            case 0x1B980Cu: goto label_1b980c;
            case 0x1B9810u: goto label_1b9810;
            case 0x1B9814u: goto label_1b9814;
            case 0x1B9818u: goto label_1b9818;
            case 0x1B981Cu: goto label_1b981c;
            case 0x1B9820u: goto label_1b9820;
            case 0x1B9824u: goto label_1b9824;
            case 0x1B9828u: goto label_1b9828;
            case 0x1B982Cu: goto label_1b982c;
            case 0x1B9830u: goto label_1b9830;
            case 0x1B9834u: goto label_1b9834;
            case 0x1B9838u: goto label_1b9838;
            case 0x1B983Cu: goto label_1b983c;
            case 0x1B9840u: goto label_1b9840;
            case 0x1B9844u: goto label_1b9844;
            case 0x1B9848u: goto label_1b9848;
            case 0x1B984Cu: goto label_1b984c;
            case 0x1B9850u: goto label_1b9850;
            case 0x1B9854u: goto label_1b9854;
            case 0x1B9858u: goto label_1b9858;
            case 0x1B985Cu: goto label_1b985c;
            case 0x1B9860u: goto label_1b9860;
            case 0x1B9864u: goto label_1b9864;
            case 0x1B9868u: goto label_1b9868;
            case 0x1B986Cu: goto label_1b986c;
            case 0x1B9870u: goto label_1b9870;
            case 0x1B9874u: goto label_1b9874;
            case 0x1B9878u: goto label_1b9878;
            case 0x1B987Cu: goto label_1b987c;
            case 0x1B9880u: goto label_1b9880;
            case 0x1B9884u: goto label_1b9884;
            case 0x1B9888u: goto label_1b9888;
            case 0x1B988Cu: goto label_1b988c;
            case 0x1B9890u: goto label_1b9890;
            case 0x1B9894u: goto label_1b9894;
            case 0x1B9898u: goto label_1b9898;
            case 0x1B989Cu: goto label_1b989c;
            case 0x1B98A0u: goto label_1b98a0;
            case 0x1B98A4u: goto label_1b98a4;
            case 0x1B98A8u: goto label_1b98a8;
            case 0x1B98ACu: goto label_1b98ac;
            case 0x1B98B0u: goto label_1b98b0;
            case 0x1B98B4u: goto label_1b98b4;
            case 0x1B98B8u: goto label_1b98b8;
            case 0x1B98BCu: goto label_1b98bc;
            case 0x1B98C0u: goto label_1b98c0;
            case 0x1B98C4u: goto label_1b98c4;
            case 0x1B98C8u: goto label_1b98c8;
            case 0x1B98CCu: goto label_1b98cc;
            case 0x1B98D0u: goto label_1b98d0;
            case 0x1B98D4u: goto label_1b98d4;
            case 0x1B98D8u: goto label_1b98d8;
            case 0x1B98DCu: goto label_1b98dc;
            case 0x1B98E0u: goto label_1b98e0;
            case 0x1B98E4u: goto label_1b98e4;
            case 0x1B98E8u: goto label_1b98e8;
            case 0x1B98ECu: goto label_1b98ec;
            case 0x1B98F0u: goto label_1b98f0;
            case 0x1B98F4u: goto label_1b98f4;
            case 0x1B98F8u: goto label_1b98f8;
            case 0x1B98FCu: goto label_1b98fc;
            case 0x1B9900u: goto label_1b9900;
            case 0x1B9904u: goto label_1b9904;
            case 0x1B9908u: goto label_1b9908;
            case 0x1B990Cu: goto label_1b990c;
            case 0x1B9910u: goto label_1b9910;
            case 0x1B9914u: goto label_1b9914;
            case 0x1B9918u: goto label_1b9918;
            case 0x1B991Cu: goto label_1b991c;
            case 0x1B9920u: goto label_1b9920;
            case 0x1B9924u: goto label_1b9924;
            case 0x1B9928u: goto label_1b9928;
            case 0x1B992Cu: goto label_1b992c;
            case 0x1B9930u: goto label_1b9930;
            case 0x1B9934u: goto label_1b9934;
            case 0x1B9938u: goto label_1b9938;
            case 0x1B993Cu: goto label_1b993c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B9938u;
label_1b9938:
    // 0x1b9938: 0x0
    ctx->pc = 0x1b9938u;
    // NOP
label_1b993c:
    // 0x1b993c: 0x0
    ctx->pc = 0x1b993cu;
    // NOP
}
