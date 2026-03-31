#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00132E20
// Address: 0x132e20 - 0x132e50
void sub_00132E20_0x132e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x132e20u;

    // 0x132e20: 0x27bdfff0
    ctx->pc = 0x132e20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x132e24: 0x14800006
    ctx->pc = 0x132E24u;
    {
        const bool branch_taken_0x132e24 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x132E28u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x132e24) {
            ctx->pc = 0x132E40u;
            goto label_132e40;
        }
    }
    ctx->pc = 0x132E2Cu;
    // 0x132e2c: 0x3c040024
    ctx->pc = 0x132e2cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x132e30: 0xc04a034
    ctx->pc = 0x132E30u;
    SET_GPR_U32(ctx, 31, 0x132E38u);
    ctx->pc = 0x132E34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947976));
    ctx->pc = 0x1280D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001280D0_0x1280d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132E38u; }
    }
    if (ctx->pc != 0x132E38u) { return; }
    ctx->pc = 0x132E38u;
    // 0x132e38: 0x10000002
    ctx->pc = 0x132E38u;
    {
        const bool branch_taken_0x132e38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x132E3Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x132e38) {
            ctx->pc = 0x132E44u;
            goto label_132e44;
        }
    }
    ctx->pc = 0x132E40u;
label_132e40:
    // 0x132e40: 0x80820071
    ctx->pc = 0x132e40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 113)));
label_132e44:
    // 0x132e44: 0xdfbf0000
    ctx->pc = 0x132e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132e48: 0x3e00008
    ctx->pc = 0x132E48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132E4Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132E40u: goto label_132e40;
            case 0x132E44u: goto label_132e44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x132E50u;
}
