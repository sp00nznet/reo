#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B0980
// Address: 0x1b0980 - 0x1b0a00
void sub_001B0980_0x1b0980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b0980u;

    // 0x1b0980: 0xac800018
    ctx->pc = 0x1b0980u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1b0984: 0x3c03000f
    ctx->pc = 0x1b0984u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15 << 16));
    // 0x1b0988: 0x8c860000
    ctx->pc = 0x1b0988u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b098c: 0x3465000f
    ctx->pc = 0x1b098cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 15));
    // 0x1b0990: 0xc51824
    ctx->pc = 0x1b0990u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1b0994: 0x10600005
    ctx->pc = 0x1B0994u;
    {
        const bool branch_taken_0x1b0994 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B0998u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x1b0994) {
            ctx->pc = 0x1B09ACu;
            goto label_1b09ac;
        }
    }
    ctx->pc = 0x1B099Cu;
    // 0x1b099c: 0xac83001c
    ctx->pc = 0x1b099cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
    // 0x1b09a0: 0x8c830000
    ctx->pc = 0x1b09a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b09a4: 0x10000014
    ctx->pc = 0x1B09A4u;
    {
        const bool branch_taken_0x1b09a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B09A8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
        if (branch_taken_0x1b09a4) {
            ctx->pc = 0x1B09F8u;
            goto label_1b09f8;
        }
    }
    ctx->pc = 0x1B09ACu;
label_1b09ac:
    // 0x1b09ac: 0x8c830008
    ctx->pc = 0x1b09acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b09b0: 0x651824
    ctx->pc = 0x1b09b0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b09b4: 0x1060000a
    ctx->pc = 0x1B09B4u;
    {
        const bool branch_taken_0x1b09b4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B09B8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x1b09b4) {
            ctx->pc = 0x1B09E0u;
            goto label_1b09e0;
        }
    }
    ctx->pc = 0x1B09BCu;
    // 0x1b09bc: 0x8c83001c
    ctx->pc = 0x1b09bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1b09c0: 0x2463ffff
    ctx->pc = 0x1b09c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b09c4: 0x4610007
    ctx->pc = 0x1B09C4u;
    {
        const bool branch_taken_0x1b09c4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B09C8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
        if (branch_taken_0x1b09c4) {
            ctx->pc = 0x1B09E4u;
            goto label_1b09e4;
        }
    }
    ctx->pc = 0x1B09CCu;
    // 0x1b09cc: 0x24030002
    ctx->pc = 0x1b09ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b09d0: 0xac83001c
    ctx->pc = 0x1b09d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
    // 0x1b09d4: 0x8c830008
    ctx->pc = 0x1b09d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b09d8: 0x10000002
    ctx->pc = 0x1B09D8u;
    {
        const bool branch_taken_0x1b09d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B09DCu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
        if (branch_taken_0x1b09d8) {
            ctx->pc = 0x1B09E4u;
            goto label_1b09e4;
        }
    }
    ctx->pc = 0x1B09E0u;
label_1b09e0:
    // 0x1b09e0: 0xac83001c
    ctx->pc = 0x1b09e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
label_1b09e4:
    // 0x1b09e4: 0x8c850000
    ctx->pc = 0x1b09e4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b09e8: 0x8c830018
    ctx->pc = 0x1b09e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1b09ec: 0x30a58ff0
    ctx->pc = 0x1b09ecu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 36848));
    // 0x1b09f0: 0x651825
    ctx->pc = 0x1b09f0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b09f4: 0xac830018
    ctx->pc = 0x1b09f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
label_1b09f8:
    // 0x1b09f8: 0x3e00008
    ctx->pc = 0x1B09F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B09ACu: goto label_1b09ac;
            case 0x1B09E0u: goto label_1b09e0;
            case 0x1B09E4u: goto label_1b09e4;
            case 0x1B09F8u: goto label_1b09f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B0A00u;
}
