#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AB790
// Address: 0x1ab790 - 0x1ab7f0
void sub_001AB790_0x1ab790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ab790u;

    // 0x1ab790: 0x27bdfff0
    ctx->pc = 0x1ab790u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ab794: 0x3c01002b
    ctx->pc = 0x1ab794u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1ab798: 0xffbf0000
    ctx->pc = 0x1ab798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ab79c: 0x8c230ec0
    ctx->pc = 0x1ab79cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 3776)));
    // 0x1ab7a0: 0x1060000f
    ctx->pc = 0x1AB7A0u;
    {
        const bool branch_taken_0x1ab7a0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AB7A4u;
        SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
        if (branch_taken_0x1ab7a0) {
            ctx->pc = 0x1AB7E0u;
            goto label_1ab7e0;
        }
    }
    ctx->pc = 0x1AB7A8u;
    // 0x1ab7a8: 0x8c2316b0
    ctx->pc = 0x1ab7a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 5808)));
    // 0x1ab7ac: 0x14600009
    ctx->pc = 0x1AB7ACu;
    {
        const bool branch_taken_0x1ab7ac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ab7ac) {
            ctx->pc = 0x1AB7D4u;
            goto label_1ab7d4;
        }
    }
    ctx->pc = 0x1AB7B4u;
    // 0x1ab7b4: 0xc04af5e
    ctx->pc = 0x1AB7B4u;
    SET_GPR_U32(ctx, 31, 0x1AB7BCu);
    ctx->pc = 0x12BD78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BD78_0x12bd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB7BCu; }
    }
    if (ctx->pc != 0x1AB7BCu) { return; }
    ctx->pc = 0x1AB7BCu;
    // 0x1ab7bc: 0x3c01002b
    ctx->pc = 0x1ab7bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1ab7c0: 0x8c2316b0
    ctx->pc = 0x1ab7c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 5808)));
    // 0x1ab7c4: 0x24630001
    ctx->pc = 0x1ab7c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ab7c8: 0x3c01002b
    ctx->pc = 0x1ab7c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1ab7cc: 0x10000004
    ctx->pc = 0x1AB7CCu;
    {
        const bool branch_taken_0x1ab7cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AB7D0u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 5808), GPR_U32(ctx, 3));
        if (branch_taken_0x1ab7cc) {
            ctx->pc = 0x1AB7E0u;
            goto label_1ab7e0;
        }
    }
    ctx->pc = 0x1AB7D4u;
label_1ab7d4:
    // 0x1ab7d4: 0x24630001
    ctx->pc = 0x1ab7d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ab7d8: 0x3c01002b
    ctx->pc = 0x1ab7d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1ab7dc: 0xac2316b0
    ctx->pc = 0x1ab7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 5808), GPR_U32(ctx, 3));
label_1ab7e0:
    // 0x1ab7e0: 0xdfbf0000
    ctx->pc = 0x1ab7e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab7e4: 0x3e00008
    ctx->pc = 0x1AB7E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB7E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AB7D4u: goto label_1ab7d4;
            case 0x1AB7E0u: goto label_1ab7e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AB7ECu;
    // 0x1ab7ec: 0x0
    ctx->pc = 0x1ab7ecu;
    // NOP
}
