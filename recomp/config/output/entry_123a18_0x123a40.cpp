#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_123a18
// Address: 0x123a18 - 0x123a40
void entry_123a18_0x123a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x123a18u;

    // 0x123a18: 0x27bdfff0
    ctx->pc = 0x123a18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x123a1c: 0x24020001
    ctx->pc = 0x123a1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x123a20: 0xffbf0000
    ctx->pc = 0x123a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x123a24: 0x8483009a
    ctx->pc = 0x123a24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 154)));
    // 0x123a28: 0x14620003
    ctx->pc = 0x123A28u;
    {
        const bool branch_taken_0x123a28 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x123A2Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x123a28) {
            ctx->pc = 0x123A38u;
            goto label_123a38;
        }
    }
    ctx->pc = 0x123A30u;
    // 0x123a30: 0x8048e26
    ctx->pc = 0x123A30u;
    ctx->pc = 0x123A34u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x123898u;
    entry_123898_0x123a18(rdram, ctx, runtime); return;
    ctx->pc = 0x123A38u;
label_123a38:
    // 0x123a38: 0x8048dc0
    ctx->pc = 0x123A38u;
    ctx->pc = 0x123A3Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x123700u;
    entry_123700_0x123898(rdram, ctx, runtime); return;
    ctx->pc = 0x123A40u;
}
