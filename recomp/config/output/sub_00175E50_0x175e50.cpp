#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00175E50
// Address: 0x175e50 - 0x175ec0
void sub_00175E50_0x175e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x175e50u;

    // 0x175e50: 0x27bdffe0
    ctx->pc = 0x175e50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x175e54: 0xffb00000
    ctx->pc = 0x175e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175e58: 0x80802d
    ctx->pc = 0x175e58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175e5c: 0xffb10008
    ctx->pc = 0x175e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x175e60: 0xffbf0010
    ctx->pc = 0x175e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x175e64: 0xc05d7b0
    ctx->pc = 0x175E64u;
    SET_GPR_U32(ctx, 31, 0x175E6Cu);
    ctx->pc = 0x175E68u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 3264));
    ctx->pc = 0x175EC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175EC0_0x175ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E6Cu; }
    }
    if (ctx->pc != 0x175E6Cu) { return; }
    ctx->pc = 0x175E6Cu;
    // 0x175e6c: 0x200202d
    ctx->pc = 0x175e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175e70: 0x10400005
    ctx->pc = 0x175E70u;
    {
        const bool branch_taken_0x175e70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x175E74u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x175e70) {
            ctx->pc = 0x175E88u;
            goto label_175e88;
        }
    }
    ctx->pc = 0x175E78u;
    // 0x175e78: 0x8e220264
    ctx->pc = 0x175e78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x175e7c: 0x8e230268
    ctx->pc = 0x175e7cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 616)));
    // 0x175e80: 0x431021
    ctx->pc = 0x175e80u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175e84: 0xae220264
    ctx->pc = 0x175e84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
label_175e88:
    // 0x175e88: 0xc05d7be
    ctx->pc = 0x175E88u;
    SET_GPR_U32(ctx, 31, 0x175E90u);
    ctx->pc = 0x175EF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175EF8_0x175ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E90u; }
    }
    if (ctx->pc != 0x175E90u) { return; }
    ctx->pc = 0x175E90u;
    // 0x175e90: 0x10400006
    ctx->pc = 0x175E90u;
    {
        const bool branch_taken_0x175e90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x175E94u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x175e90) {
            ctx->pc = 0x175EACu;
            goto label_175eac;
        }
    }
    ctx->pc = 0x175E98u;
    // 0x175e98: 0x8e220288
    ctx->pc = 0x175e98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 648)));
    // 0x175e9c: 0x8e230268
    ctx->pc = 0x175e9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 616)));
    // 0x175ea0: 0x431021
    ctx->pc = 0x175ea0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175ea4: 0xae220288
    ctx->pc = 0x175ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 648), GPR_U32(ctx, 2));
    // 0x175ea8: 0xdfb00000
    ctx->pc = 0x175ea8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_175eac:
    // 0x175eac: 0xdfb10008
    ctx->pc = 0x175eacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175eb0: 0xdfbf0010
    ctx->pc = 0x175eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175eb4: 0x3e00008
    ctx->pc = 0x175EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175EB8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175E88u: goto label_175e88;
            case 0x175EACu: goto label_175eac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x175EBCu;
    // 0x175ebc: 0x0
    ctx->pc = 0x175ebcu;
    // NOP
}
