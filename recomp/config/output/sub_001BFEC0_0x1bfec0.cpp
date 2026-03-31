#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BFEC0
// Address: 0x1bfec0 - 0x1bff70
void sub_001BFEC0_0x1bfec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1bfec0u;

    // 0x1bfec0: 0x27bdffe0
    ctx->pc = 0x1bfec0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bfec4: 0x24020001
    ctx->pc = 0x1bfec4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bfec8: 0xffbf0010
    ctx->pc = 0x1bfec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bfecc: 0x7fb00000
    ctx->pc = 0x1bfeccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bfed0: 0x8c830004
    ctx->pc = 0x1bfed0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bfed4: 0x10620019
    ctx->pc = 0x1BFED4u;
    {
        const bool branch_taken_0x1bfed4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1BFED8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1bfed4) {
            ctx->pc = 0x1BFF3Cu;
            goto label_1bff3c;
        }
    }
    ctx->pc = 0x1BFEDCu;
    // 0x1bfedc: 0x10600003
    ctx->pc = 0x1BFEDCu;
    {
        const bool branch_taken_0x1bfedc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bfedc) {
            ctx->pc = 0x1BFEECu;
            goto label_1bfeec;
        }
    }
    ctx->pc = 0x1BFEE4u;
    // 0x1bfee4: 0x1000001e
    ctx->pc = 0x1BFEE4u;
    {
        const bool branch_taken_0x1bfee4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BFEE8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1bfee4) {
            ctx->pc = 0x1BFF60u;
            goto label_1bff60;
        }
    }
    ctx->pc = 0x1BFEECu;
label_1bfeec:
    // 0x1bfeec: 0xc06fe04
    ctx->pc = 0x1BFEECu;
    SET_GPR_U32(ctx, 31, 0x1BFEF4u);
    ctx->pc = 0x1BF810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BF810_0x1bf810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFEF4u; }
    }
    if (ctx->pc != 0x1BFEF4u) { return; }
    ctx->pc = 0x1BFEF4u;
    // 0x1bfef4: 0x4400019
    ctx->pc = 0x1BFEF4u;
    {
        const bool branch_taken_0x1bfef4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1bfef4) {
            ctx->pc = 0x1BFF5Cu;
            goto label_1bff5c;
        }
    }
    ctx->pc = 0x1BFEFCu;
    // 0x1bfefc: 0x8e030014
    ctx->pc = 0x1bfefcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1bff00: 0x3c020032
    ctx->pc = 0x1bff00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x1bff04: 0x24426c40
    ctx->pc = 0x1bff04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 27712));
    // 0x1bff08: 0x31880
    ctx->pc = 0x1bff08u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bff0c: 0x431021
    ctx->pc = 0x1bff0cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bff10: 0x8c440000
    ctx->pc = 0x1bff10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bff14: 0xc06052a
    ctx->pc = 0x1BFF14u;
    SET_GPR_U32(ctx, 31, 0x1BFF1Cu);
    ctx->pc = 0x1BFF18u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 68));
    ctx->pc = 0x1814A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001814A8_0x1814a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF1Cu; }
    }
    if (ctx->pc != 0x1BFF1Cu) { return; }
    ctx->pc = 0x1BFF1Cu;
    // 0x1bff1c: 0x4410003
    ctx->pc = 0x1BFF1Cu;
    {
        const bool branch_taken_0x1bff1c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1bff1c) {
            ctx->pc = 0x1BFF2Cu;
            goto label_1bff2c;
        }
    }
    ctx->pc = 0x1BFF24u;
    // 0x1bff24: 0x1000000e
    ctx->pc = 0x1BFF24u;
    {
        const bool branch_taken_0x1bff24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BFF28u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1bff24) {
            ctx->pc = 0x1BFF60u;
            goto label_1bff60;
        }
    }
    ctx->pc = 0x1BFF2Cu;
label_1bff2c:
    // 0x1bff2c: 0x8e020004
    ctx->pc = 0x1bff2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bff30: 0x24420001
    ctx->pc = 0x1bff30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bff34: 0x10000009
    ctx->pc = 0x1BFF34u;
    {
        const bool branch_taken_0x1bff34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BFF38u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x1bff34) {
            ctx->pc = 0x1BFF5Cu;
            goto label_1bff5c;
        }
    }
    ctx->pc = 0x1BFF3Cu;
label_1bff3c:
    // 0x1bff3c: 0xc06fe04
    ctx->pc = 0x1BFF3Cu;
    SET_GPR_U32(ctx, 31, 0x1BFF44u);
    ctx->pc = 0x1BF810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BF810_0x1bf810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF44u; }
    }
    if (ctx->pc != 0x1BFF44u) { return; }
    ctx->pc = 0x1BFF44u;
    // 0x1bff44: 0x4400005
    ctx->pc = 0x1BFF44u;
    {
        const bool branch_taken_0x1bff44 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1bff44) {
            ctx->pc = 0x1BFF5Cu;
            goto label_1bff5c;
        }
    }
    ctx->pc = 0x1BFF4Cu;
    // 0x1bff4c: 0xae000004
    ctx->pc = 0x1bff4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1bff50: 0x8e02001c
    ctx->pc = 0x1bff50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1bff54: 0x10000002
    ctx->pc = 0x1BFF54u;
    {
        const bool branch_taken_0x1bff54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BFF58u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 0)));
        if (branch_taken_0x1bff54) {
            ctx->pc = 0x1BFF60u;
            goto label_1bff60;
        }
    }
    ctx->pc = 0x1BFF5Cu;
label_1bff5c:
    // 0x1bff5c: 0x2402ffff
    ctx->pc = 0x1bff5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1bff60:
    // 0x1bff60: 0xdfbf0010
    ctx->pc = 0x1bff60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bff64: 0x7bb00000
    ctx->pc = 0x1bff64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bff68: 0x3e00008
    ctx->pc = 0x1BFF68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFF6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BFEECu: goto label_1bfeec;
            case 0x1BFF2Cu: goto label_1bff2c;
            case 0x1BFF3Cu: goto label_1bff3c;
            case 0x1BFF5Cu: goto label_1bff5c;
            case 0x1BFF60u: goto label_1bff60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BFF70u;
}
