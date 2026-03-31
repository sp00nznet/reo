#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B12C0
// Address: 0x1b12c0 - 0x1b1300
void sub_001B12C0_0x1b12c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b12c0u;

    // 0x1b12c0: 0x3c05004f
    ctx->pc = 0x1b12c0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)79 << 16));
    // 0x1b12c4: 0x182d
    ctx->pc = 0x1b12c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b12c8: 0x10000008
    ctx->pc = 0x1B12C8u;
    {
        const bool branch_taken_0x1b12c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B12CCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294953856));
        if (branch_taken_0x1b12c8) {
            ctx->pc = 0x1B12ECu;
            goto label_1b12ec;
        }
    }
    ctx->pc = 0x1B12D0u;
label_1b12d0:
    // 0x1b12d0: 0x8ca20000
    ctx->pc = 0x1b12d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b12d4: 0x14440003
    ctx->pc = 0x1B12D4u;
    {
        const bool branch_taken_0x1b12d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x1B12D8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1b12d4) {
            ctx->pc = 0x1B12E4u;
            goto label_1b12e4;
        }
    }
    ctx->pc = 0x1B12DCu;
    // 0x1b12dc: 0x10000006
    ctx->pc = 0x1B12DCu;
    {
        const bool branch_taken_0x1b12dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b12dc) {
            ctx->pc = 0x1B12F8u;
            goto label_1b12f8;
        }
    }
    ctx->pc = 0x1B12E4u;
label_1b12e4:
    // 0x1b12e4: 0x24630001
    ctx->pc = 0x1b12e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b12e8: 0x24a50004
    ctx->pc = 0x1b12e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
label_1b12ec:
    // 0x1b12ec: 0x28620480
    ctx->pc = 0x1b12ecu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 1152));
    // 0x1b12f0: 0x1440fff7
    ctx->pc = 0x1B12F0u;
    {
        const bool branch_taken_0x1b12f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B12F4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b12f0) {
            ctx->pc = 0x1B12D0u;
            goto label_1b12d0;
        }
    }
    ctx->pc = 0x1B12F8u;
label_1b12f8:
    // 0x1b12f8: 0x3e00008
    ctx->pc = 0x1B12F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B12D0u: goto label_1b12d0;
            case 0x1B12E4u: goto label_1b12e4;
            case 0x1B12ECu: goto label_1b12ec;
            case 0x1B12F8u: goto label_1b12f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B1300u;
}
