#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001464F0
// Address: 0x1464f0 - 0x1465c0
void sub_001464F0_0x1464f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1464f0u;

    // 0x1464f0: 0x27bdffd0
    ctx->pc = 0x1464f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1464f4: 0x24020003
    ctx->pc = 0x1464f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1464f8: 0xffb00000
    ctx->pc = 0x1464f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1464fc: 0xffbf0020
    ctx->pc = 0x1464fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x146500: 0x80802d
    ctx->pc = 0x146500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146504: 0xffb10010
    ctx->pc = 0x146504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x146508: 0x8e03018c
    ctx->pc = 0x146508u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 396)));
    // 0x14650c: 0x1462000a
    ctx->pc = 0x14650Cu;
    {
        const bool branch_taken_0x14650c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x146510u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x14650c) {
            ctx->pc = 0x146538u;
            goto label_146538;
        }
    }
    ctx->pc = 0x146514u;
    // 0x146514: 0x8e020138
    ctx->pc = 0x146514u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x146518: 0x10400007
    ctx->pc = 0x146518u;
    {
        const bool branch_taken_0x146518 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14651Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x146518) {
            ctx->pc = 0x146538u;
            goto label_146538;
        }
    }
    ctx->pc = 0x146520u;
    // 0x146520: 0x3c050024
    ctx->pc = 0x146520u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x146524: 0xc05221c
    ctx->pc = 0x146524u;
    SET_GPR_U32(ctx, 31, 0x14652Cu);
    ctx->pc = 0x146528u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294958976));
    ctx->pc = 0x148870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00148870_0x148870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14652Cu; }
    }
    if (ctx->pc != 0x14652Cu) { return; }
    ctx->pc = 0x14652Cu;
    // 0x14652c: 0xae000138
    ctx->pc = 0x14652cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 0));
    // 0x146530: 0x8e03018c
    ctx->pc = 0x146530u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 396)));
    // 0x146534: 0x24020002
    ctx->pc = 0x146534u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_146538:
    // 0x146538: 0x1062000e
    ctx->pc = 0x146538u;
    {
        const bool branch_taken_0x146538 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x14653Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 3));
        if (branch_taken_0x146538) {
            ctx->pc = 0x146574u;
            goto label_146574;
        }
    }
    ctx->pc = 0x146540u;
    // 0x146540: 0x10400005
    ctx->pc = 0x146540u;
    {
        const bool branch_taken_0x146540 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x146544u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x146540) {
            ctx->pc = 0x146558u;
            goto label_146558;
        }
    }
    ctx->pc = 0x146548u;
    // 0x146548: 0x10620008
    ctx->pc = 0x146548u;
    {
        const bool branch_taken_0x146548 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x14654Cu;
        SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
        if (branch_taken_0x146548) {
            ctx->pc = 0x14656Cu;
            goto label_14656c;
        }
    }
    ctx->pc = 0x146550u;
    // 0x146550: 0x1000000b
    ctx->pc = 0x146550u;
    {
        const bool branch_taken_0x146550 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x146554u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 472)));
        if (branch_taken_0x146550) {
            ctx->pc = 0x146580u;
            goto label_146580;
        }
    }
    ctx->pc = 0x146558u;
label_146558:
    // 0x146558: 0x24020003
    ctx->pc = 0x146558u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x14655c: 0x14620007
    ctx->pc = 0x14655Cu;
    {
        const bool branch_taken_0x14655c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x146560u;
        SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
        if (branch_taken_0x14655c) {
            ctx->pc = 0x14657Cu;
            goto label_14657c;
        }
    }
    ctx->pc = 0x146564u;
    // 0x146564: 0x10000009
    ctx->pc = 0x146564u;
    {
        const bool branch_taken_0x146564 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x146568u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 472)));
        if (branch_taken_0x146564) {
            ctx->pc = 0x14658Cu;
            goto label_14658c;
        }
    }
    ctx->pc = 0x14656Cu;
label_14656c:
    // 0x14656c: 0x10000007
    ctx->pc = 0x14656Cu;
    {
        const bool branch_taken_0x14656c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x146570u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 488)));
        if (branch_taken_0x14656c) {
            ctx->pc = 0x14658Cu;
            goto label_14658c;
        }
    }
    ctx->pc = 0x146574u;
label_146574:
    // 0x146574: 0x10000005
    ctx->pc = 0x146574u;
    {
        const bool branch_taken_0x146574 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x146578u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 504)));
        if (branch_taken_0x146574) {
            ctx->pc = 0x14658Cu;
            goto label_14658c;
        }
    }
    ctx->pc = 0x14657Cu;
label_14657c:
    // 0x14657c: 0x8e1101d8
    ctx->pc = 0x14657cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 472)));
label_146580:
    // 0x146580: 0x24a5dfa0
    ctx->pc = 0x146580u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294959008));
    // 0x146584: 0xc05221c
    ctx->pc = 0x146584u;
    SET_GPR_U32(ctx, 31, 0x14658Cu);
    ctx->pc = 0x146588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x148870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00148870_0x148870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14658Cu; }
    }
    if (ctx->pc != 0x14658Cu) { return; }
    ctx->pc = 0x14658Cu;
label_14658c:
    // 0x14658c: 0xc051140
    ctx->pc = 0x14658Cu;
    SET_GPR_U32(ctx, 31, 0x146594u);
    ctx->pc = 0x146590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x144500u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00144500_0x144500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146594u; }
    }
    if (ctx->pc != 0x146594u) { return; }
    ctx->pc = 0x146594u;
    // 0x146594: 0x40182d
    ctx->pc = 0x146594u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146598: 0x10600002
    ctx->pc = 0x146598u;
    {
        const bool branch_taken_0x146598 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x14659Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x146598) {
            ctx->pc = 0x1465A4u;
            goto label_1465a4;
        }
    }
    ctx->pc = 0x1465A0u;
    // 0x1465a0: 0xae220028
    ctx->pc = 0x1465a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_1465a4:
    // 0x1465a4: 0xdfbf0020
    ctx->pc = 0x1465a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1465a8: 0x60102d
    ctx->pc = 0x1465a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1465ac: 0xdfb10010
    ctx->pc = 0x1465acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1465b0: 0xdfb00000
    ctx->pc = 0x1465b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1465b4: 0x3e00008
    ctx->pc = 0x1465B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1465B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x146538u: goto label_146538;
            case 0x146558u: goto label_146558;
            case 0x14656Cu: goto label_14656c;
            case 0x146574u: goto label_146574;
            case 0x14657Cu: goto label_14657c;
            case 0x146580u: goto label_146580;
            case 0x14658Cu: goto label_14658c;
            case 0x1465A4u: goto label_1465a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1465BCu;
    // 0x1465bc: 0x0
    ctx->pc = 0x1465bcu;
    // NOP
}
