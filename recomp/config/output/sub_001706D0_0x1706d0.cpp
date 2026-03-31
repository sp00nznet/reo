#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001706D0
// Address: 0x1706d0 - 0x1706e0
void sub_001706D0_0x1706d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1706d0u;

    // 0x1706d0: 0x54800001
    ctx->pc = 0x1706D0u;
    {
        const bool branch_taken_0x1706d0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x1706d0) {
            ctx->pc = 0x1706D4u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x1706D8u;
            goto label_1706d8;
        }
    }
    ctx->pc = 0x1706D8u;
label_1706d8:
    // 0x1706d8: 0x3e00008
    ctx->pc = 0x1706D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1706D8u: goto label_1706d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1706E0u;
}
