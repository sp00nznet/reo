#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_166cd8
// Address: 0x166cd8 - 0x166d08
void entry_166cd8_0x166d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x166cd8u;

    // 0x166cd8: 0x24020002
    ctx->pc = 0x166cd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x166cdc: 0x0
    ctx->pc = 0x166cdcu;
    // NOP
label_166ce0:
    // 0x166ce0: 0x2442ffff
    ctx->pc = 0x166ce0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x166ce4: 0xac800000
    ctx->pc = 0x166ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x166ce8: 0xac800004
    ctx->pc = 0x166ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x166cec: 0xac800008
    ctx->pc = 0x166cecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x166cf0: 0xac80000c
    ctx->pc = 0x166cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x166cf4: 0x441fffa
    ctx->pc = 0x166CF4u;
    {
        const bool branch_taken_0x166cf4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x166CF8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16));
        if (branch_taken_0x166cf4) {
            ctx->pc = 0x166CE0u;
            goto label_166ce0;
        }
    }
    ctx->pc = 0x166CFCu;
    // 0x166cfc: 0x3e00008
    ctx->pc = 0x166CFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166CE0u: goto label_166ce0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x166D04u;
    // 0x166d04: 0x0
    ctx->pc = 0x166d04u;
    // NOP
}
