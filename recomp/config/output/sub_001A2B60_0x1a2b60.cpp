#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A2B60
// Address: 0x1a2b60 - 0x1a2bb0
void sub_001A2B60_0x1a2b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a2b60u;

    // 0x1a2b60: 0x27bdffe0
    ctx->pc = 0x1a2b60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a2b64: 0xffbf0010
    ctx->pc = 0x1a2b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a2b68: 0x7fb00000
    ctx->pc = 0x1a2b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a2b6c: 0xa0802d
    ctx->pc = 0x1a2b6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2b70: 0xc068b24
    ctx->pc = 0x1A2B70u;
    SET_GPR_U32(ctx, 31, 0x1A2B78u);
    ctx->pc = 0x1A2B74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A2C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2C90_0x1a2c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2B78u; }
    }
    if (ctx->pc != 0x1A2B78u) { return; }
    ctx->pc = 0x1A2B78u;
    // 0x1a2b78: 0x10400008
    ctx->pc = 0x1A2B78u;
    {
        const bool branch_taken_0x1a2b78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a2b78) {
            ctx->pc = 0x1A2B9Cu;
            goto label_1a2b9c;
        }
    }
    ctx->pc = 0x1A2B80u;
    // 0x1a2b80: 0x8c430004
    ctx->pc = 0x1a2b80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a2b84: 0x203082b
    ctx->pc = 0x1a2b84u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1a2b88: 0x10200004
    ctx->pc = 0x1A2B88u;
    {
        const bool branch_taken_0x1a2b88 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A2B8Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x1a2b88) {
            ctx->pc = 0x1A2B9Cu;
            goto label_1a2b9c;
        }
    }
    ctx->pc = 0x1A2B90u;
    // 0x1a2b90: 0x621021
    ctx->pc = 0x1a2b90u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a2b94: 0x10000002
    ctx->pc = 0x1A2B94u;
    {
        const bool branch_taken_0x1a2b94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A2B98u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12)));
        if (branch_taken_0x1a2b94) {
            ctx->pc = 0x1A2BA0u;
            goto label_1a2ba0;
        }
    }
    ctx->pc = 0x1A2B9Cu;
label_1a2b9c:
    // 0x1a2b9c: 0x2402ffff
    ctx->pc = 0x1a2b9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a2ba0:
    // 0x1a2ba0: 0xdfbf0010
    ctx->pc = 0x1a2ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2ba4: 0x7bb00000
    ctx->pc = 0x1a2ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2ba8: 0x3e00008
    ctx->pc = 0x1A2BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2BACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A2B9Cu: goto label_1a2b9c;
            case 0x1A2BA0u: goto label_1a2ba0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A2BB0u;
}
