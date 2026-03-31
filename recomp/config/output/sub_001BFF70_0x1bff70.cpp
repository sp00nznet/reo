#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BFF70
// Address: 0x1bff70 - 0x1c0020
void sub_001BFF70_0x1bff70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1bff70u;

    // 0x1bff70: 0x27bdffe0
    ctx->pc = 0x1bff70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bff74: 0x24020001
    ctx->pc = 0x1bff74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bff78: 0xffbf0010
    ctx->pc = 0x1bff78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bff7c: 0x7fb00000
    ctx->pc = 0x1bff7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bff80: 0x8c830004
    ctx->pc = 0x1bff80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bff84: 0x10620018
    ctx->pc = 0x1BFF84u;
    {
        const bool branch_taken_0x1bff84 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1BFF88u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1bff84) {
            ctx->pc = 0x1BFFE8u;
            goto label_1bffe8;
        }
    }
    ctx->pc = 0x1BFF8Cu;
    // 0x1bff8c: 0x10600003
    ctx->pc = 0x1BFF8Cu;
    {
        const bool branch_taken_0x1bff8c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bff8c) {
            ctx->pc = 0x1BFF9Cu;
            goto label_1bff9c;
        }
    }
    ctx->pc = 0x1BFF94u;
    // 0x1bff94: 0x1000001d
    ctx->pc = 0x1BFF94u;
    {
        const bool branch_taken_0x1bff94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BFF98u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1bff94) {
            ctx->pc = 0x1C000Cu;
            goto label_1c000c;
        }
    }
    ctx->pc = 0x1BFF9Cu;
label_1bff9c:
    // 0x1bff9c: 0xc06fe04
    ctx->pc = 0x1BFF9Cu;
    SET_GPR_U32(ctx, 31, 0x1BFFA4u);
    ctx->pc = 0x1BF810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BF810_0x1bf810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFFA4u; }
    }
    if (ctx->pc != 0x1BFFA4u) { return; }
    ctx->pc = 0x1BFFA4u;
    // 0x1bffa4: 0x4400018
    ctx->pc = 0x1BFFA4u;
    {
        const bool branch_taken_0x1bffa4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1bffa4) {
            ctx->pc = 0x1C0008u;
            goto label_1c0008;
        }
    }
    ctx->pc = 0x1BFFACu;
    // 0x1bffac: 0x8e030014
    ctx->pc = 0x1bffacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1bffb0: 0x3c020032
    ctx->pc = 0x1bffb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x1bffb4: 0x24426c40
    ctx->pc = 0x1bffb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 27712));
    // 0x1bffb8: 0x31880
    ctx->pc = 0x1bffb8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bffbc: 0x431021
    ctx->pc = 0x1bffbcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bffc0: 0xc0603d8
    ctx->pc = 0x1BFFC0u;
    SET_GPR_U32(ctx, 31, 0x1BFFC8u);
    ctx->pc = 0x1BFFC4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x180F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00180F60_0x180f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFFC8u; }
    }
    if (ctx->pc != 0x1BFFC8u) { return; }
    ctx->pc = 0x1BFFC8u;
    // 0x1bffc8: 0x4410003
    ctx->pc = 0x1BFFC8u;
    {
        const bool branch_taken_0x1bffc8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1bffc8) {
            ctx->pc = 0x1BFFD8u;
            goto label_1bffd8;
        }
    }
    ctx->pc = 0x1BFFD0u;
    // 0x1bffd0: 0x1000000e
    ctx->pc = 0x1BFFD0u;
    {
        const bool branch_taken_0x1bffd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BFFD4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1bffd0) {
            ctx->pc = 0x1C000Cu;
            goto label_1c000c;
        }
    }
    ctx->pc = 0x1BFFD8u;
label_1bffd8:
    // 0x1bffd8: 0x8e020004
    ctx->pc = 0x1bffd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bffdc: 0x24420001
    ctx->pc = 0x1bffdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bffe0: 0x10000009
    ctx->pc = 0x1BFFE0u;
    {
        const bool branch_taken_0x1bffe0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BFFE4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x1bffe0) {
            ctx->pc = 0x1C0008u;
            goto label_1c0008;
        }
    }
    ctx->pc = 0x1BFFE8u;
label_1bffe8:
    // 0x1bffe8: 0xc06fe04
    ctx->pc = 0x1BFFE8u;
    SET_GPR_U32(ctx, 31, 0x1BFFF0u);
    ctx->pc = 0x1BF810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BF810_0x1bf810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFFF0u; }
    }
    if (ctx->pc != 0x1BFFF0u) { return; }
    ctx->pc = 0x1BFFF0u;
    // 0x1bfff0: 0x4400005
    ctx->pc = 0x1BFFF0u;
    {
        const bool branch_taken_0x1bfff0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1bfff0) {
            ctx->pc = 0x1C0008u;
            goto label_1c0008;
        }
    }
    ctx->pc = 0x1BFFF8u;
    // 0x1bfff8: 0xae000004
    ctx->pc = 0x1bfff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1bfffc: 0x8e02001c
    ctx->pc = 0x1bfffcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1c0000: 0x10000002
    ctx->pc = 0x1C0000u;
    {
        const bool branch_taken_0x1c0000 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C0004u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 0)));
        if (branch_taken_0x1c0000) {
            ctx->pc = 0x1C000Cu;
            goto label_1c000c;
        }
    }
    ctx->pc = 0x1C0008u;
label_1c0008:
    // 0x1c0008: 0x2402ffff
    ctx->pc = 0x1c0008u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c000c:
    // 0x1c000c: 0xdfbf0010
    ctx->pc = 0x1c000cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0010: 0x7bb00000
    ctx->pc = 0x1c0010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0014: 0x3e00008
    ctx->pc = 0x1C0014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0018u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BFF9Cu: goto label_1bff9c;
            case 0x1BFFD8u: goto label_1bffd8;
            case 0x1BFFE8u: goto label_1bffe8;
            case 0x1C0008u: goto label_1c0008;
            case 0x1C000Cu: goto label_1c000c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C001Cu;
    // 0x1c001c: 0x0
    ctx->pc = 0x1c001cu;
    // NOP
}
