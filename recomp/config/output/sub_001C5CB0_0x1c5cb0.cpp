#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C5CB0
// Address: 0x1c5cb0 - 0x1c5ce0
void sub_001C5CB0_0x1c5cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c5cb0u;

    // 0x1c5cb0: 0x8ca50000
    ctx->pc = 0x1c5cb0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c5cb4: 0x10000006
    ctx->pc = 0x1C5CB4u;
    {
        const bool branch_taken_0x1c5cb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C5CB8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c5cb4) {
            ctx->pc = 0x1C5CD0u;
            goto label_1c5cd0;
        }
    }
    ctx->pc = 0x1C5CBCu;
label_1c5cbc:
    // 0x1c5cbc: 0x61880
    ctx->pc = 0x1c5cbcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1c5cc0: 0x831821
    ctx->pc = 0x1c5cc0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c5cc4: 0x24c60001
    ctx->pc = 0x1c5cc4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1c5cc8: 0xac650000
    ctx->pc = 0x1c5cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1c5ccc: 0x8ca50004
    ctx->pc = 0x1c5cccu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1c5cd0:
    // 0x1c5cd0: 0x14a0fffa
    ctx->pc = 0x1C5CD0u;
    {
        const bool branch_taken_0x1c5cd0 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c5cd0) {
            ctx->pc = 0x1C5CBCu;
            goto label_1c5cbc;
        }
    }
    ctx->pc = 0x1C5CD8u;
    // 0x1c5cd8: 0x3e00008
    ctx->pc = 0x1C5CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C5CBCu: goto label_1c5cbc;
            case 0x1C5CD0u: goto label_1c5cd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C5CE0u;
}
