#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CFAA0
// Address: 0x1cfaa0 - 0x1cfb20
void sub_001CFAA0_0x1cfaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1cfaa0u;

    // 0x1cfaa0: 0x3c070034
    ctx->pc = 0x1cfaa0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1cfaa4: 0x3083ffff
    ctx->pc = 0x1cfaa4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 65535));
    // 0x1cfaa8: 0x24e713f0
    ctx->pc = 0x1cfaa8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 5104));
    // 0x1cfaac: 0x10000017
    ctx->pc = 0x1CFAACu;
    {
        const bool branch_taken_0x1cfaac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CFAB0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cfaac) {
            ctx->pc = 0x1CFB0Cu;
            goto label_1cfb0c;
        }
    }
    ctx->pc = 0x1CFAB4u;
label_1cfab4:
    // 0x1cfab4: 0x90e20000
    ctx->pc = 0x1cfab4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1cfab8: 0x10400012
    ctx->pc = 0x1CFAB8u;
    {
        const bool branch_taken_0x1cfab8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cfab8) {
            ctx->pc = 0x1CFB04u;
            goto label_1cfb04;
        }
    }
    ctx->pc = 0x1CFAC0u;
    // 0x1cfac0: 0x8ce60004
    ctx->pc = 0x1cfac0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1cfac4: 0x10c0000f
    ctx->pc = 0x1CFAC4u;
    {
        const bool branch_taken_0x1cfac4 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CFAC8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cfac4) {
            ctx->pc = 0x1CFB04u;
            goto label_1cfb04;
        }
    }
    ctx->pc = 0x1CFACCu;
    // 0x1cfacc: 0x1000000b
    ctx->pc = 0x1CFACCu;
    {
        const bool branch_taken_0x1cfacc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CFAD0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 1600));
        if (branch_taken_0x1cfacc) {
            ctx->pc = 0x1CFAFCu;
            goto label_1cfafc;
        }
    }
    ctx->pc = 0x1CFAD4u;
label_1cfad4:
    // 0x1cfad4: 0xc21021
    ctx->pc = 0x1cfad4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1cfad8: 0x94420004
    ctx->pc = 0x1cfad8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1cfadc: 0x10400005
    ctx->pc = 0x1CFADCu;
    {
        const bool branch_taken_0x1cfadc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cfadc) {
            ctx->pc = 0x1CFAF4u;
            goto label_1cfaf4;
        }
    }
    ctx->pc = 0x1CFAE4u;
    // 0x1cfae4: 0x14430003
    ctx->pc = 0x1CFAE4u;
    {
        const bool branch_taken_0x1cfae4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1cfae4) {
            ctx->pc = 0x1CFAF4u;
            goto label_1cfaf4;
        }
    }
    ctx->pc = 0x1CFAECu;
    // 0x1cfaec: 0x1000000a
    ctx->pc = 0x1CFAECu;
    {
        const bool branch_taken_0x1cfaec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CFAF0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1cfaec) {
            ctx->pc = 0x1CFB18u;
            goto label_1cfb18;
        }
    }
    ctx->pc = 0x1CFAF4u;
label_1cfaf4:
    // 0x1cfaf4: 0x24840001
    ctx->pc = 0x1cfaf4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cfaf8: 0x28820640
    ctx->pc = 0x1cfaf8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 1600));
label_1cfafc:
    // 0x1cfafc: 0x1440fff5
    ctx->pc = 0x1CFAFCu;
    {
        const bool branch_taken_0x1cfafc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CFB00u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x1cfafc) {
            ctx->pc = 0x1CFAD4u;
            goto label_1cfad4;
        }
    }
    ctx->pc = 0x1CFB04u;
label_1cfb04:
    // 0x1cfb04: 0x24a50001
    ctx->pc = 0x1cfb04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1cfb08: 0x24e70010
    ctx->pc = 0x1cfb08u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 16));
label_1cfb0c:
    // 0x1cfb0c: 0x28a20004
    ctx->pc = 0x1cfb0cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4));
    // 0x1cfb10: 0x1440ffe8
    ctx->pc = 0x1CFB10u;
    {
        const bool branch_taken_0x1cfb10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CFB14u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cfb10) {
            ctx->pc = 0x1CFAB4u;
            goto label_1cfab4;
        }
    }
    ctx->pc = 0x1CFB18u;
label_1cfb18:
    // 0x1cfb18: 0x3e00008
    ctx->pc = 0x1CFB18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CFAB4u: goto label_1cfab4;
            case 0x1CFAD4u: goto label_1cfad4;
            case 0x1CFAF4u: goto label_1cfaf4;
            case 0x1CFAFCu: goto label_1cfafc;
            case 0x1CFB04u: goto label_1cfb04;
            case 0x1CFB0Cu: goto label_1cfb0c;
            case 0x1CFB18u: goto label_1cfb18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CFB20u;
}
