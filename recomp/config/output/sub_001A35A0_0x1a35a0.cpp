#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A35A0
// Address: 0x1a35a0 - 0x1a35f0
void sub_001A35A0_0x1a35a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a35a0u;

    // 0x1a35a0: 0x8c830004
    ctx->pc = 0x1a35a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a35a4: 0x302d
    ctx->pc = 0x1a35a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a35a8: 0x10000009
    ctx->pc = 0x1A35A8u;
    {
        const bool branch_taken_0x1a35a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A35ACu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12));
        if (branch_taken_0x1a35a8) {
            ctx->pc = 0x1A35D0u;
            goto label_1a35d0;
        }
    }
    ctx->pc = 0x1A35B0u;
label_1a35b0:
    // 0x1a35b0: 0x8c820000
    ctx->pc = 0x1a35b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a35b4: 0x14450003
    ctx->pc = 0x1A35B4u;
    {
        const bool branch_taken_0x1a35b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        ctx->pc = 0x1A35B8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a35b4) {
            ctx->pc = 0x1A35C4u;
            goto label_1a35c4;
        }
    }
    ctx->pc = 0x1A35BCu;
    // 0x1a35bc: 0x10000007
    ctx->pc = 0x1A35BCu;
    {
        const bool branch_taken_0x1a35bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a35bc) {
            ctx->pc = 0x1A35DCu;
            goto label_1a35dc;
        }
    }
    ctx->pc = 0x1A35C4u;
label_1a35c4:
    // 0x1a35c4: 0x8c820008
    ctx->pc = 0x1a35c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a35c8: 0x24c60001
    ctx->pc = 0x1a35c8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a35cc: 0x822021
    ctx->pc = 0x1a35ccu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1a35d0:
    // 0x1a35d0: 0xc3102b
    ctx->pc = 0x1a35d0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a35d4: 0x1440fff6
    ctx->pc = 0x1A35D4u;
    {
        const bool branch_taken_0x1a35d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A35D8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a35d4) {
            ctx->pc = 0x1A35B0u;
            goto label_1a35b0;
        }
    }
    ctx->pc = 0x1A35DCu;
label_1a35dc:
    // 0x1a35dc: 0x3e00008
    ctx->pc = 0x1A35DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A35B0u: goto label_1a35b0;
            case 0x1A35C4u: goto label_1a35c4;
            case 0x1A35D0u: goto label_1a35d0;
            case 0x1A35DCu: goto label_1a35dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A35E4u;
    // 0x1a35e4: 0x0
    ctx->pc = 0x1a35e4u;
    // NOP
    // 0x1a35e8: 0x0
    ctx->pc = 0x1a35e8u;
    // NOP
    // 0x1a35ec: 0x0
    ctx->pc = 0x1a35ecu;
    // NOP
}
