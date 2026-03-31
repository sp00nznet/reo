#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CCAD0
// Address: 0x1ccad0 - 0x1ccb30
void sub_001CCAD0_0x1ccad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ccad0u;

    // 0x1ccad0: 0x27bdffe0
    ctx->pc = 0x1ccad0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ccad4: 0xffbf0010
    ctx->pc = 0x1ccad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ccad8: 0x7fb00000
    ctx->pc = 0x1ccad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ccadc: 0x8c830000
    ctx->pc = 0x1ccadcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ccae0: 0x1060000d
    ctx->pc = 0x1CCAE0u;
    {
        const bool branch_taken_0x1ccae0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CCAE4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ccae0) {
            ctx->pc = 0x1CCB18u;
            goto label_1ccb18;
        }
    }
    ctx->pc = 0x1CCAE8u;
    // 0x1ccae8: 0x8603000e
    ctx->pc = 0x1ccae8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1ccaec: 0x2463ffff
    ctx->pc = 0x1ccaecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ccaf0: 0xa603000e
    ctx->pc = 0x1ccaf0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ccaf4: 0x8603000e
    ctx->pc = 0x1ccaf4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1ccaf8: 0x1c600007
    ctx->pc = 0x1CCAF8u;
    {
        const bool branch_taken_0x1ccaf8 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1ccaf8) {
            ctx->pc = 0x1CCB18u;
            goto label_1ccb18;
        }
    }
    ctx->pc = 0x1CCB00u;
    // 0x1ccb00: 0xc07328c
    ctx->pc = 0x1CCB00u;
    SET_GPR_U32(ctx, 31, 0x1CCB08u);
    ctx->pc = 0x1CCB04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x1CCA30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CCA30_0x1cca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB08u; }
    }
    if (ctx->pc != 0x1CCB08u) { return; }
    ctx->pc = 0x1CCB08u;
    // 0x1ccb08: 0x200202d
    ctx->pc = 0x1ccb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccb0c: 0x282d
    ctx->pc = 0x1ccb0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccb10: 0xc041f1a
    ctx->pc = 0x1CCB10u;
    SET_GPR_U32(ctx, 31, 0x1CCB18u);
    ctx->pc = 0x1CCB14u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB18u; }
    }
    if (ctx->pc != 0x1CCB18u) { return; }
    ctx->pc = 0x1CCB18u;
label_1ccb18:
    // 0x1ccb18: 0xdfbf0010
    ctx->pc = 0x1ccb18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ccb1c: 0x7bb00000
    ctx->pc = 0x1ccb1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccb20: 0x3e00008
    ctx->pc = 0x1CCB20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCB24u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CCB18u: goto label_1ccb18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CCB28u;
    // 0x1ccb28: 0x0
    ctx->pc = 0x1ccb28u;
    // NOP
    // 0x1ccb2c: 0x0
    ctx->pc = 0x1ccb2cu;
    // NOP
}
