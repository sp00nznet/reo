#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00175F20
// Address: 0x175f20 - 0x175f68
void sub_00175F20_0x175f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x175f20u;

    // 0x175f20: 0x27bdfff0
    ctx->pc = 0x175f20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x175f24: 0xffb00000
    ctx->pc = 0x175f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175f28: 0xa0802d
    ctx->pc = 0x175f28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175f2c: 0xffbf0008
    ctx->pc = 0x175f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x175f30: 0xc05d58a
    ctx->pc = 0x175F30u;
    SET_GPR_U32(ctx, 31, 0x175F38u);
    ctx->pc = 0x175F34u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 71));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175F38u; }
    }
    if (ctx->pc != 0x175F38u) { return; }
    ctx->pc = 0x175F38u;
    // 0x175f38: 0x24030001
    ctx->pc = 0x175f38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x175f3c: 0x14430004
    ctx->pc = 0x175F3Cu;
    {
        const bool branch_taken_0x175f3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x175f3c) {
            ctx->pc = 0x175F50u;
            goto label_175f50;
        }
    }
    ctx->pc = 0x175F44u;
    // 0x175f44: 0x8e020264
    ctx->pc = 0x175f44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x175f48: 0x10000003
    ctx->pc = 0x175F48u;
    {
        const bool branch_taken_0x175f48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x175F4Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 2));
        if (branch_taken_0x175f48) {
            ctx->pc = 0x175F58u;
            goto label_175f58;
        }
    }
    ctx->pc = 0x175F50u;
label_175f50:
    // 0x175f50: 0x8e020298
    ctx->pc = 0x175f50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 664)));
    // 0x175f54: 0xae02028c
    ctx->pc = 0x175f54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 2));
label_175f58:
    // 0x175f58: 0xdfb00000
    ctx->pc = 0x175f58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175f5c: 0xdfbf0008
    ctx->pc = 0x175f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175f60: 0x3e00008
    ctx->pc = 0x175F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175F64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175F50u: goto label_175f50;
            case 0x175F58u: goto label_175f58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x175F68u;
}
