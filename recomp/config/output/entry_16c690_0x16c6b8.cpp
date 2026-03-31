#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_16c690
// Address: 0x16c690 - 0x16c6b8
void entry_16c690_0x16c6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16c690u;

    // 0x16c690: 0x24840da4
    ctx->pc = 0x16c690u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 3492));
    // 0x16c694: 0x3c027fff
    ctx->pc = 0x16c694u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x16c698: 0x8c830020
    ctx->pc = 0x16c698u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x16c69c: 0x3442ffff
    ctx->pc = 0x16c69cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x16c6a0: 0x10620002
    ctx->pc = 0x16C6A0u;
    {
        const bool branch_taken_0x16c6a0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x16C6A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x16c6a0) {
            ctx->pc = 0x16C6ACu;
            goto label_16c6ac;
        }
    }
    ctx->pc = 0x16C6A8u;
    // 0x16c6a8: 0xac820000
    ctx->pc = 0x16c6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_16c6ac:
    // 0x16c6ac: 0x3e00008
    ctx->pc = 0x16C6ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16C6ACu: goto label_16c6ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16C6B4u;
    // 0x16c6b4: 0x0
    ctx->pc = 0x16c6b4u;
    // NOP
}
