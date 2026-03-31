#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015B1C0
// Address: 0x15b1c0 - 0x15b1e8
void sub_0015B1C0_0x15b1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15b1c0u;

    // 0x15b1c0: 0x3e00008
    ctx->pc = 0x15B1C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15B1E0u: goto label_15b1e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15B1C8u;
    // 0x15b1c8: 0x3c030026
    ctx->pc = 0x15b1c8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
    // 0x15b1cc: 0x8c624cb0
    ctx->pc = 0x15b1ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 19632)));
    // 0x15b1d0: 0x10400003
    ctx->pc = 0x15B1D0u;
    {
        const bool branch_taken_0x15b1d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x15b1d0) {
            ctx->pc = 0x15B1E0u;
            goto label_15b1e0;
        }
    }
    ctx->pc = 0x15B1D8u;
    // 0x15b1d8: 0x3c020200
    ctx->pc = 0x15b1d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)512 << 16));
    // 0x15b1dc: 0x822025
    ctx->pc = 0x15b1dcu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_15b1e0:
    // 0x15b1e0: 0x3e00008
    ctx->pc = 0x15B1E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B1E4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15B1E0u: goto label_15b1e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15B1E8u;
}
