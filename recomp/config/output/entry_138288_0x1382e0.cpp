#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_138288
// Address: 0x138288 - 0x1382e0
void entry_138288_0x1382e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x138288u;

    // 0x138288: 0x3c030022
    ctx->pc = 0x138288u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x13828c: 0x41600
    ctx->pc = 0x13828cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 24));
    // 0x138290: 0x2463bbcc
    ctx->pc = 0x138290u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294949836));
    // 0x138294: 0x21603
    ctx->pc = 0x138294u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x138298: 0x27bdfff0
    ctx->pc = 0x138298u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13829c: 0x3c060022
    ctx->pc = 0x13829cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)34 << 16));
    // 0x1382a0: 0xffbf0000
    ctx->pc = 0x1382a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1382a4: 0x24050001
    ctx->pc = 0x1382a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1382a8: 0xac620000
    ctx->pc = 0x1382a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1382ac: 0x8c620000
    ctx->pc = 0x1382acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1382b0: 0x14850007
    ctx->pc = 0x1382B0u;
    {
        const bool branch_taken_0x1382b0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 5));
        ctx->pc = 0x1382B4u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294949884), GPR_U32(ctx, 2));
        if (branch_taken_0x1382b0) {
            ctx->pc = 0x1382D0u;
            goto label_1382d0;
        }
    }
    ctx->pc = 0x1382B8u;
    // 0x1382b8: 0x3c040024
    ctx->pc = 0x1382b8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1382bc: 0xdfbf0000
    ctx->pc = 0x1382bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1382c0: 0x2484c6e8
    ctx->pc = 0x1382c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952680));
    // 0x1382c4: 0x8045a12
    ctx->pc = 0x1382C4u;
    ctx->pc = 0x1382C8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x116848u;
    sub_00116848_0x116848(rdram, ctx, runtime); return;
    ctx->pc = 0x1382CCu;
    // 0x1382cc: 0x0
    ctx->pc = 0x1382ccu;
    // NOP
label_1382d0:
    // 0x1382d0: 0xdfbf0000
    ctx->pc = 0x1382d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1382d4: 0x3e00008
    ctx->pc = 0x1382D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1382D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1382D0u: goto label_1382d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1382DCu;
    // 0x1382dc: 0x0
    ctx->pc = 0x1382dcu;
    // NOP
}
