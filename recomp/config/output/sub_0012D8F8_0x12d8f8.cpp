#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012D8F8
// Address: 0x12d8f8 - 0x12d950
void sub_0012D8F8_0x12d8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12d8f8u;

    // 0x12d8f8: 0x27bdfff0
    ctx->pc = 0x12d8f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d8fc: 0xffb00000
    ctx->pc = 0x12d8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12d900: 0x80802d
    ctx->pc = 0x12d900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d904: 0xffbf0008
    ctx->pc = 0x12d904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12d908: 0xc0493d2
    ctx->pc = 0x12D908u;
    SET_GPR_U32(ctx, 31, 0x12D910u);
    ctx->pc = 0x12D90Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x124F48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00124F48_0x124f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D910u; }
    }
    if (ctx->pc != 0x12D910u) { return; }
    ctx->pc = 0x12D910u;
    // 0x12d910: 0x1840000b
    ctx->pc = 0x12D910u;
    {
        const bool branch_taken_0x12d910 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12D914u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12d910) {
            ctx->pc = 0x12D940u;
            goto label_12d940;
        }
    }
    ctx->pc = 0x12D918u;
    // 0x12d918: 0x92020001
    ctx->pc = 0x12d918u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x12d91c: 0x2442fffe
    ctx->pc = 0x12d91cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x12d920: 0x2c420002
    ctx->pc = 0x12d920u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x12d924: 0x50400006
    ctx->pc = 0x12D924u;
    {
        const bool branch_taken_0x12d924 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x12d924) {
            ctx->pc = 0x12D928u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x12D940u;
            goto label_12d940;
        }
    }
    ctx->pc = 0x12D92Cu;
    // 0x12d92c: 0xc0493d4
    ctx->pc = 0x12D92Cu;
    SET_GPR_U32(ctx, 31, 0x12D934u);
    ctx->pc = 0x12D930u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x124F50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00124F50_0x124f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D934u; }
    }
    if (ctx->pc != 0x12D934u) { return; }
    ctx->pc = 0x12D934u;
    // 0x12d934: 0x10000003
    ctx->pc = 0x12D934u;
    {
        const bool branch_taken_0x12d934 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12D938u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x12d934) {
            ctx->pc = 0x12D944u;
            goto label_12d944;
        }
    }
    ctx->pc = 0x12D93Cu;
    // 0x12d93c: 0x0
    ctx->pc = 0x12d93cu;
    // NOP
label_12d940:
    // 0x12d940: 0xdfb00000
    ctx->pc = 0x12d940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12d944:
    // 0x12d944: 0xdfbf0008
    ctx->pc = 0x12d944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12d948: 0x3e00008
    ctx->pc = 0x12D948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D94Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12D940u: goto label_12d940;
            case 0x12D944u: goto label_12d944;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12D950u;
}
