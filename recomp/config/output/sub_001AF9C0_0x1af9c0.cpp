#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AF9C0
// Address: 0x1af9c0 - 0x1afa00
void sub_001AF9C0_0x1af9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1af9c0u;

    // 0x1af9c0: 0x3c01002c
    ctx->pc = 0x1af9c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1af9c4: 0x24050007
    ctx->pc = 0x1af9c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1af9c8: 0xac208e10
    ctx->pc = 0x1af9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938128), GPR_U32(ctx, 0));
    // 0x1af9cc: 0x3c01002c
    ctx->pc = 0x1af9ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1af9d0: 0xac208e08
    ctx->pc = 0x1af9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938120), GPR_U32(ctx, 0));
    // 0x1af9d4: 0x3c04002c
    ctx->pc = 0x1af9d4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x1af9d8: 0x24848e20
    ctx->pc = 0x1af9d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294938144));
label_1af9dc:
    // 0x1af9dc: 0x51880
    ctx->pc = 0x1af9dcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1af9e0: 0x831821
    ctx->pc = 0x1af9e0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1af9e4: 0x24a5ffff
    ctx->pc = 0x1af9e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1af9e8: 0xac600000
    ctx->pc = 0x1af9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1af9ec: 0x0
    ctx->pc = 0x1af9ecu;
    // NOP
    // 0x1af9f0: 0x4a1fffa
    ctx->pc = 0x1AF9F0u;
    {
        const bool branch_taken_0x1af9f0 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1af9f0) {
            ctx->pc = 0x1AF9DCu;
            goto label_1af9dc;
        }
    }
    ctx->pc = 0x1AF9F8u;
    // 0x1af9f8: 0x3e00008
    ctx->pc = 0x1AF9F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AF9DCu: goto label_1af9dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AFA00u;
}
