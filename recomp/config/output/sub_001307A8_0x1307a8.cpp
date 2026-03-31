#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001307A8
// Address: 0x1307a8 - 0x1307e8
void sub_001307A8_0x1307a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1307a8u;

    // 0x1307a8: 0x4a00003
    ctx->pc = 0x1307A8u;
    {
        const bool branch_taken_0x1307a8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1307ACu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1307a8) {
            ctx->pc = 0x1307B8u;
            goto label_1307b8;
        }
    }
    ctx->pc = 0x1307B0u;
    // 0x1307b0: 0x3e00008
    ctx->pc = 0x1307B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1307B4u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1307B8u: goto label_1307b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1307B8u;
label_1307b8:
    // 0x1307b8: 0x8cc30010
    ctx->pc = 0x1307b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1307bc: 0x28640000
    ctx->pc = 0x1307bcu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 3), 0));
    // 0x1307c0: 0x246507ff
    ctx->pc = 0x1307c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 2047));
    // 0x1307c4: 0x60102d
    ctx->pc = 0x1307c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1307c8: 0xa4100b
    ctx->pc = 0x1307c8u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 5));
    // 0x1307cc: 0x212c3
    ctx->pc = 0x1307ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x1307d0: 0x222c0
    ctx->pc = 0x1307d0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 11));
    // 0x1307d4: 0x641823
    ctx->pc = 0x1307d4u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1307d8: 0x3182a
    ctx->pc = 0x1307d8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 3)));
    // 0x1307dc: 0x431021
    ctx->pc = 0x1307dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1307e0: 0x3e00008
    ctx->pc = 0x1307E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1307E4u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1307B8u: goto label_1307b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1307E8u;
}
