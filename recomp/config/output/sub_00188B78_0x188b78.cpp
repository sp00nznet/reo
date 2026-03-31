#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00188B78
// Address: 0x188b78 - 0x188bc0
void sub_00188B78_0x188b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x188b78u;

    // 0x188b78: 0x3c030023
    ctx->pc = 0x188b78u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x188b7c: 0x27bdfff0
    ctx->pc = 0x188b7cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x188b80: 0x8c62fd38
    ctx->pc = 0x188b80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294966584)));
    // 0x188b84: 0x14400003
    ctx->pc = 0x188B84u;
    {
        const bool branch_taken_0x188b84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x188B88u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x188b84) {
            ctx->pc = 0x188B94u;
            goto label_188b94;
        }
    }
    ctx->pc = 0x188B8Cu;
    // 0x188b8c: 0x10000009
    ctx->pc = 0x188B8Cu;
    {
        const bool branch_taken_0x188b8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x188B90u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x188b8c) {
            ctx->pc = 0x188BB4u;
            goto label_188bb4;
        }
    }
    ctx->pc = 0x188B94u;
label_188b94:
    // 0x188b94: 0x3c020029
    ctx->pc = 0x188b94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x188b98: 0xac60fd38
    ctx->pc = 0x188b98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966584), GPR_U32(ctx, 0));
    // 0x188b9c: 0x8c444140
    ctx->pc = 0x188b9cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 16704)));
    // 0x188ba0: 0x4800004
    ctx->pc = 0x188BA0u;
    {
        const bool branch_taken_0x188ba0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x188BA4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x188ba0) {
            ctx->pc = 0x188BB4u;
            goto label_188bb4;
        }
    }
    ctx->pc = 0x188BA8u;
    // 0x188ba8: 0xc04518c
    ctx->pc = 0x188BA8u;
    SET_GPR_U32(ctx, 31, 0x188BB0u);
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188BB0u; }
    }
    if (ctx->pc != 0x188BB0u) { return; }
    ctx->pc = 0x188BB0u;
    // 0x188bb0: 0x24020001
    ctx->pc = 0x188bb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_188bb4:
    // 0x188bb4: 0xdfbf0000
    ctx->pc = 0x188bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188bb8: 0x3e00008
    ctx->pc = 0x188BB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188BBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188B94u: goto label_188b94;
            case 0x188BB4u: goto label_188bb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x188BC0u;
}
