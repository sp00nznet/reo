#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001382F0
// Address: 0x1382f0 - 0x138328
void sub_001382F0_0x1382f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1382f0u;

    // 0x1382f0: 0x3c020022
    ctx->pc = 0x1382f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x1382f4: 0x27bdfff0
    ctx->pc = 0x1382f4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1382f8: 0x8c43bbfc
    ctx->pc = 0x1382f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294949884)));
    // 0x1382fc: 0x24040001
    ctx->pc = 0x1382fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x138300: 0x14640005
    ctx->pc = 0x138300u;
    {
        const bool branch_taken_0x138300 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x138304u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x138300) {
            ctx->pc = 0x138318u;
            goto label_138318;
        }
    }
    ctx->pc = 0x138308u;
    // 0x138308: 0xdfbf0000
    ctx->pc = 0x138308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13830c: 0x80505cc
    ctx->pc = 0x13830Cu;
    ctx->pc = 0x138310u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x141730u;
    sub_00141730_0x141730(rdram, ctx, runtime); return;
    ctx->pc = 0x138314u;
    // 0x138314: 0x0
    ctx->pc = 0x138314u;
    // NOP
label_138318:
    // 0x138318: 0xdfbf0000
    ctx->pc = 0x138318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13831c: 0x3e00008
    ctx->pc = 0x13831Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138320u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x138318u: goto label_138318;
            default: break;
        }
        return;
    }
    ctx->pc = 0x138324u;
    // 0x138324: 0x0
    ctx->pc = 0x138324u;
    // NOP
}
