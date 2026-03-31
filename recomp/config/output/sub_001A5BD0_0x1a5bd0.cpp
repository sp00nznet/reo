#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A5BD0
// Address: 0x1a5bd0 - 0x1a5c10
void sub_001A5BD0_0x1a5bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a5bd0u;

    // 0x1a5bd0: 0x2484ffff
    ctx->pc = 0x1a5bd0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1a5bd4: 0x10000007
    ctx->pc = 0x1A5BD4u;
    {
        const bool branch_taken_0x1a5bd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A5BD8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a5bd4) {
            ctx->pc = 0x1A5BF4u;
            goto label_1a5bf4;
        }
    }
    ctx->pc = 0x1A5BDCu;
label_1a5bdc:
    // 0x1a5bdc: 0x71880
    ctx->pc = 0x1a5bdcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 2));
    // 0x1a5be0: 0x63080
    ctx->pc = 0x1a5be0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a5be4: 0xa31821
    ctx->pc = 0x1a5be4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a5be8: 0xa63021
    ctx->pc = 0x1a5be8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1a5bec: 0x24e70001
    ctx->pc = 0x1a5becu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1a5bf0: 0xac660000
    ctx->pc = 0x1a5bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_1a5bf4:
    // 0x1a5bf4: 0xe4182a
    ctx->pc = 0x1a5bf4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 4)));
    // 0x1a5bf8: 0x1460fff8
    ctx->pc = 0x1A5BF8u;
    {
        const bool branch_taken_0x1a5bf8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A5BFCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 7), 1));
        if (branch_taken_0x1a5bf8) {
            ctx->pc = 0x1A5BDCu;
            goto label_1a5bdc;
        }
    }
    ctx->pc = 0x1A5C00u;
    // 0x1a5c00: 0x71880
    ctx->pc = 0x1a5c00u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 2));
    // 0x1a5c04: 0xa31821
    ctx->pc = 0x1a5c04u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a5c08: 0x3e00008
    ctx->pc = 0x1A5C08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5C0Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5BDCu: goto label_1a5bdc;
            case 0x1A5BF4u: goto label_1a5bf4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5C10u;
}
