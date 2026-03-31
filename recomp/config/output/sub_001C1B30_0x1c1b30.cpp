#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C1B30
// Address: 0x1c1b30 - 0x1c1b60
void sub_001C1B30_0x1c1b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c1b30u;

    // 0x1c1b30: 0x80282d
    ctx->pc = 0x1c1b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1b34: 0x24020018
    ctx->pc = 0x1c1b34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x1c1b38: 0x90a30003
    ctx->pc = 0x1c1b38u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x1c1b3c: 0x24630001
    ctx->pc = 0x1c1b3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c1b40: 0x306400ff
    ctx->pc = 0x1c1b40u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 3), 255));
    // 0x1c1b44: 0x14820004
    ctx->pc = 0x1C1B44u;
    {
        const bool branch_taken_0x1c1b44 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x1C1B48u;
        WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1c1b44) {
            ctx->pc = 0x1C1B58u;
            goto label_1c1b58;
        }
    }
    ctx->pc = 0x1C1B4Cu;
    // 0x1c1b4c: 0xa0202d
    ctx->pc = 0x1c1b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1b50: 0x8070674
    ctx->pc = 0x1C1B50u;
    ctx->pc = 0x1C1B54u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1C19D0u;
    entry_1c19d0_0x1c1a88(rdram, ctx, runtime); return;
    ctx->pc = 0x1C1B58u;
label_1c1b58:
    // 0x1c1b58: 0x3e00008
    ctx->pc = 0x1C1B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1B58u: goto label_1c1b58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C1B60u;
}
