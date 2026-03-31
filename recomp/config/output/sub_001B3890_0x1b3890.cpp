#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B3890
// Address: 0x1b3890 - 0x1b38c0
void sub_001B3890_0x1b3890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b3890u;

    // 0x1b3890: 0x3c010032
    ctx->pc = 0x1b3890u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b3894: 0x94234414
    ctx->pc = 0x1b3894u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17428)));
    // 0x1b3898: 0x10600004
    ctx->pc = 0x1B3898u;
    {
        const bool branch_taken_0x1b3898 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B389Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
        if (branch_taken_0x1b3898) {
            ctx->pc = 0x1B38ACu;
            goto label_1b38ac;
        }
    }
    ctx->pc = 0x1B38A0u;
    // 0x1b38a0: 0xac24a9e8
    ctx->pc = 0x1b38a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945256), GPR_U32(ctx, 4));
    // 0x1b38a4: 0x3c01002c
    ctx->pc = 0x1b38a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b38a8: 0xac25a9ec
    ctx->pc = 0x1b38a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945260), GPR_U32(ctx, 5));
label_1b38ac:
    // 0x1b38ac: 0x3e00008
    ctx->pc = 0x1B38ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B38ACu: goto label_1b38ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B38B4u;
    // 0x1b38b4: 0x0
    ctx->pc = 0x1b38b4u;
    // NOP
    // 0x1b38b8: 0x0
    ctx->pc = 0x1b38b8u;
    // NOP
    // 0x1b38bc: 0x0
    ctx->pc = 0x1b38bcu;
    // NOP
}
