#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013B5B0
// Address: 0x13b5b0 - 0x13b5e8
void sub_0013B5B0_0x13b5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13b5b0u;

    // 0x13b5b0: 0x3c020022
    ctx->pc = 0x13b5b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13b5b4: 0x282d
    ctx->pc = 0x13b5b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b5b8: 0x2443daf0
    ctx->pc = 0x13b5b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294957808));
    // 0x13b5bc: 0x2404000c
    ctx->pc = 0x13b5bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
label_13b5c0:
    // 0x13b5c0: 0x80620000
    ctx->pc = 0x13b5c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13b5c4: 0x2484ffff
    ctx->pc = 0x13b5c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x13b5c8: 0x38420000
    ctx->pc = 0x13b5c8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 0));
    // 0x13b5cc: 0x62280a
    ctx->pc = 0x13b5ccu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
    // 0x13b5d0: 0x0
    ctx->pc = 0x13b5d0u;
    // NOP
    // 0x13b5d4: 0x481fffa
    ctx->pc = 0x13B5D4u;
    {
        const bool branch_taken_0x13b5d4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x13B5D8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 48));
        if (branch_taken_0x13b5d4) {
            ctx->pc = 0x13B5C0u;
            goto label_13b5c0;
        }
    }
    ctx->pc = 0x13B5DCu;
    // 0x13b5dc: 0x3e00008
    ctx->pc = 0x13B5DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B5E0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13B5C0u: goto label_13b5c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13B5E4u;
    // 0x13b5e4: 0x0
    ctx->pc = 0x13b5e4u;
    // NOP
}
