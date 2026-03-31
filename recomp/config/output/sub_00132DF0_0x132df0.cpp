#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00132DF0
// Address: 0x132df0 - 0x132e20
void sub_00132DF0_0x132df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x132df0u;

    // 0x132df0: 0x27bdfff0
    ctx->pc = 0x132df0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x132df4: 0x14800006
    ctx->pc = 0x132DF4u;
    {
        const bool branch_taken_0x132df4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x132DF8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x132df4) {
            ctx->pc = 0x132E10u;
            goto label_132e10;
        }
    }
    ctx->pc = 0x132DFCu;
    // 0x132dfc: 0x3c040024
    ctx->pc = 0x132dfcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x132e00: 0xdfbf0000
    ctx->pc = 0x132e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132e04: 0x2484b450
    ctx->pc = 0x132e04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947920));
    // 0x132e08: 0x804a034
    ctx->pc = 0x132E08u;
    ctx->pc = 0x132E0Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1280D0u;
    sub_001280D0_0x1280d0(rdram, ctx, runtime); return;
    ctx->pc = 0x132E10u;
label_132e10:
    // 0x132e10: 0xdfbf0000
    ctx->pc = 0x132e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132e14: 0xa0850070
    ctx->pc = 0x132e14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 112), (uint8_t)GPR_U32(ctx, 5));
    // 0x132e18: 0x3e00008
    ctx->pc = 0x132E18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132E1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132E10u: goto label_132e10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x132E20u;
}
