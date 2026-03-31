#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00140070
// Address: 0x140070 - 0x1400c0
void sub_00140070_0x140070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x140070u;

    // 0x140070: 0x27bdfff0
    ctx->pc = 0x140070u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x140074: 0x3c030023
    ctx->pc = 0x140074u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x140078: 0xffbf0000
    ctx->pc = 0x140078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14007c: 0x24638c90
    ctx->pc = 0x14007cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937744));
    // 0x140080: 0x8c620000
    ctx->pc = 0x140080u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x140084: 0x2442ffff
    ctx->pc = 0x140084u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x140088: 0x14400009
    ctx->pc = 0x140088u;
    {
        const bool branch_taken_0x140088 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14008Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x140088) {
            ctx->pc = 0x1400B0u;
            goto label_1400b0;
        }
    }
    ctx->pc = 0x140090u;
    // 0x140090: 0x3c040023
    ctx->pc = 0x140090u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x140094: 0xdfbf0000
    ctx->pc = 0x140094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140098: 0x282d
    ctx->pc = 0x140098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14009c: 0x24848c98
    ctx->pc = 0x14009cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937752));
    // 0x1400a0: 0x24060c00
    ctx->pc = 0x1400a0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3072));
    // 0x1400a4: 0x8041f1a
    ctx->pc = 0x1400A4u;
    ctx->pc = 0x1400A8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x107C68u;
    sub_00107C68_0x107c68(rdram, ctx, runtime); return;
    ctx->pc = 0x1400ACu;
    // 0x1400ac: 0x0
    ctx->pc = 0x1400acu;
    // NOP
label_1400b0:
    // 0x1400b0: 0xdfbf0000
    ctx->pc = 0x1400b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1400b4: 0x3e00008
    ctx->pc = 0x1400B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1400B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1400B0u: goto label_1400b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1400BCu;
    // 0x1400bc: 0x0
    ctx->pc = 0x1400bcu;
    // NOP
}
