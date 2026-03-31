#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0010D068
// Address: 0x10d068 - 0x10d0b0
void sub_0010D068_0x10d068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10d068u;

    // 0x10d068: 0x27bdfff0
    ctx->pc = 0x10d068u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10d06c: 0xffb00000
    ctx->pc = 0x10d06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10d070: 0xa0802d
    ctx->pc = 0x10d070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d074: 0xffbf0008
    ctx->pc = 0x10d074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10d078: 0x8e020008
    ctx->pc = 0x10d078u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x10d07c: 0x14400004
    ctx->pc = 0x10D07Cu;
    {
        const bool branch_taken_0x10d07c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10D080u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10d07c) {
            ctx->pc = 0x10D090u;
            goto label_10d090;
        }
    }
    ctx->pc = 0x10D084u;
    // 0x10d084: 0x10000006
    ctx->pc = 0x10D084u;
    {
        const bool branch_taken_0x10d084 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10D088u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x10d084) {
            ctx->pc = 0x10D0A0u;
            goto label_10d0a0;
        }
    }
    ctx->pc = 0x10D08Cu;
    // 0x10d08c: 0x0
    ctx->pc = 0x10d08cu;
    // NOP
label_10d090:
    // 0x10d090: 0xc0418d6
    ctx->pc = 0x10D090u;
    SET_GPR_U32(ctx, 31, 0x10D098u);
    ctx->pc = 0x106358u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00106358_0x106358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D098u; }
    }
    if (ctx->pc != 0x10D098u) { return; }
    ctx->pc = 0x10D098u;
    // 0x10d098: 0xae000004
    ctx->pc = 0x10d098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x10d09c: 0xae000008
    ctx->pc = 0x10d09cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_10d0a0:
    // 0x10d0a0: 0xdfb00000
    ctx->pc = 0x10d0a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d0a4: 0xdfbf0008
    ctx->pc = 0x10d0a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10d0a8: 0x3e00008
    ctx->pc = 0x10D0A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D0ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10D090u: goto label_10d090;
            case 0x10D0A0u: goto label_10d0a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10D0B0u;
}
