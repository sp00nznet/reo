#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001594F8
// Address: 0x1594f8 - 0x159520
void sub_001594F8_0x1594f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1594f8u;

    // 0x1594f8: 0x10a00003
    ctx->pc = 0x1594F8u;
    {
        const bool branch_taken_0x1594f8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x1594FCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 952));
        if (branch_taken_0x1594f8) {
            ctx->pc = 0x159508u;
            goto label_159508;
        }
    }
    ctx->pc = 0x159500u;
    // 0x159500: 0x8c820000
    ctx->pc = 0x159500u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x159504: 0xaca20000
    ctx->pc = 0x159504u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_159508:
    // 0x159508: 0x10c00003
    ctx->pc = 0x159508u;
    {
        const bool branch_taken_0x159508 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x159508) {
            ctx->pc = 0x159518u;
            goto label_159518;
        }
    }
    ctx->pc = 0x159510u;
    // 0x159510: 0x8c820008
    ctx->pc = 0x159510u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x159514: 0xacc20000
    ctx->pc = 0x159514u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_159518:
    // 0x159518: 0x3e00008
    ctx->pc = 0x159518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x159508u: goto label_159508;
            case 0x159518u: goto label_159518;
            default: break;
        }
        return;
    }
    ctx->pc = 0x159520u;
}
