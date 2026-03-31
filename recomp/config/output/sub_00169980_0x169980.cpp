#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00169980
// Address: 0x169980 - 0x1699b8
void sub_00169980_0x169980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x169980u;

    // 0x169980: 0x24840078
    ctx->pc = 0x169980u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 120));
    // 0x169984: 0x8c830000
    ctx->pc = 0x169984u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169988: 0x10600009
    ctx->pc = 0x169988u;
    {
        const bool branch_taken_0x169988 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x16998Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x169988) {
            ctx->pc = 0x1699B0u;
            goto label_1699b0;
        }
    }
    ctx->pc = 0x169990u;
    // 0x169990: 0x8c830004
    ctx->pc = 0x169990u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x169994: 0x8c840008
    ctx->pc = 0x169994u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x169998: 0x31040
    ctx->pc = 0x169998u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x16999c: 0x431021
    ctx->pc = 0x16999cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1699a0: 0x210c0
    ctx->pc = 0x1699a0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x1699a4: 0x431021
    ctx->pc = 0x1699a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1699a8: 0x21080
    ctx->pc = 0x1699a8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1699ac: 0x441021
    ctx->pc = 0x1699acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1699b0:
    // 0x1699b0: 0x3e00008
    ctx->pc = 0x1699B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1699B0u: goto label_1699b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1699B8u;
}
