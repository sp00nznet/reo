#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BFD50
// Address: 0x1bfd50 - 0x1bfe00
void sub_001BFD50_0x1bfd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1bfd50u;

    // 0x1bfd50: 0x27bdffe0
    ctx->pc = 0x1bfd50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bfd54: 0x24020001
    ctx->pc = 0x1bfd54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bfd58: 0xffbf0010
    ctx->pc = 0x1bfd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bfd5c: 0x7fb00000
    ctx->pc = 0x1bfd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bfd60: 0x8c830004
    ctx->pc = 0x1bfd60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bfd64: 0x10620019
    ctx->pc = 0x1BFD64u;
    {
        const bool branch_taken_0x1bfd64 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1BFD68u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1bfd64) {
            ctx->pc = 0x1BFDCCu;
            goto label_1bfdcc;
        }
    }
    ctx->pc = 0x1BFD6Cu;
    // 0x1bfd6c: 0x10600003
    ctx->pc = 0x1BFD6Cu;
    {
        const bool branch_taken_0x1bfd6c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bfd6c) {
            ctx->pc = 0x1BFD7Cu;
            goto label_1bfd7c;
        }
    }
    ctx->pc = 0x1BFD74u;
    // 0x1bfd74: 0x1000001e
    ctx->pc = 0x1BFD74u;
    {
        const bool branch_taken_0x1bfd74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BFD78u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1bfd74) {
            ctx->pc = 0x1BFDF0u;
            goto label_1bfdf0;
        }
    }
    ctx->pc = 0x1BFD7Cu;
label_1bfd7c:
    // 0x1bfd7c: 0xc06fe04
    ctx->pc = 0x1BFD7Cu;
    SET_GPR_U32(ctx, 31, 0x1BFD84u);
    ctx->pc = 0x1BF810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BF810_0x1bf810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFD84u; }
    }
    if (ctx->pc != 0x1BFD84u) { return; }
    ctx->pc = 0x1BFD84u;
    // 0x1bfd84: 0x4400019
    ctx->pc = 0x1BFD84u;
    {
        const bool branch_taken_0x1bfd84 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1bfd84) {
            ctx->pc = 0x1BFDECu;
            goto label_1bfdec;
        }
    }
    ctx->pc = 0x1BFD8Cu;
    // 0x1bfd8c: 0x8e030014
    ctx->pc = 0x1bfd8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1bfd90: 0x3c020032
    ctx->pc = 0x1bfd90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x1bfd94: 0x24426c40
    ctx->pc = 0x1bfd94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 27712));
    // 0x1bfd98: 0x31880
    ctx->pc = 0x1bfd98u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bfd9c: 0x431021
    ctx->pc = 0x1bfd9cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bfda0: 0x8c440000
    ctx->pc = 0x1bfda0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bfda4: 0xc0604fc
    ctx->pc = 0x1BFDA4u;
    SET_GPR_U32(ctx, 31, 0x1BFDACu);
    ctx->pc = 0x1BFDA8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 68));
    ctx->pc = 0x1813F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001813F0_0x1813f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFDACu; }
    }
    if (ctx->pc != 0x1BFDACu) { return; }
    ctx->pc = 0x1BFDACu;
    // 0x1bfdac: 0x4410003
    ctx->pc = 0x1BFDACu;
    {
        const bool branch_taken_0x1bfdac = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1bfdac) {
            ctx->pc = 0x1BFDBCu;
            goto label_1bfdbc;
        }
    }
    ctx->pc = 0x1BFDB4u;
    // 0x1bfdb4: 0x1000000e
    ctx->pc = 0x1BFDB4u;
    {
        const bool branch_taken_0x1bfdb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BFDB8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1bfdb4) {
            ctx->pc = 0x1BFDF0u;
            goto label_1bfdf0;
        }
    }
    ctx->pc = 0x1BFDBCu;
label_1bfdbc:
    // 0x1bfdbc: 0x8e020004
    ctx->pc = 0x1bfdbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bfdc0: 0x24420001
    ctx->pc = 0x1bfdc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bfdc4: 0x10000009
    ctx->pc = 0x1BFDC4u;
    {
        const bool branch_taken_0x1bfdc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BFDC8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x1bfdc4) {
            ctx->pc = 0x1BFDECu;
            goto label_1bfdec;
        }
    }
    ctx->pc = 0x1BFDCCu;
label_1bfdcc:
    // 0x1bfdcc: 0xc06fe04
    ctx->pc = 0x1BFDCCu;
    SET_GPR_U32(ctx, 31, 0x1BFDD4u);
    ctx->pc = 0x1BF810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BF810_0x1bf810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFDD4u; }
    }
    if (ctx->pc != 0x1BFDD4u) { return; }
    ctx->pc = 0x1BFDD4u;
    // 0x1bfdd4: 0x4400005
    ctx->pc = 0x1BFDD4u;
    {
        const bool branch_taken_0x1bfdd4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1bfdd4) {
            ctx->pc = 0x1BFDECu;
            goto label_1bfdec;
        }
    }
    ctx->pc = 0x1BFDDCu;
    // 0x1bfddc: 0xae000004
    ctx->pc = 0x1bfddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1bfde0: 0x8e02001c
    ctx->pc = 0x1bfde0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1bfde4: 0x10000002
    ctx->pc = 0x1BFDE4u;
    {
        const bool branch_taken_0x1bfde4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BFDE8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 0)));
        if (branch_taken_0x1bfde4) {
            ctx->pc = 0x1BFDF0u;
            goto label_1bfdf0;
        }
    }
    ctx->pc = 0x1BFDECu;
label_1bfdec:
    // 0x1bfdec: 0x2402ffff
    ctx->pc = 0x1bfdecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1bfdf0:
    // 0x1bfdf0: 0xdfbf0010
    ctx->pc = 0x1bfdf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bfdf4: 0x7bb00000
    ctx->pc = 0x1bfdf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bfdf8: 0x3e00008
    ctx->pc = 0x1BFDF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFDFCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BFD7Cu: goto label_1bfd7c;
            case 0x1BFDBCu: goto label_1bfdbc;
            case 0x1BFDCCu: goto label_1bfdcc;
            case 0x1BFDECu: goto label_1bfdec;
            case 0x1BFDF0u: goto label_1bfdf0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BFE00u;
}
