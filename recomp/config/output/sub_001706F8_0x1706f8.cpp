#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001706F8
// Address: 0x1706f8 - 0x170710
void sub_001706F8_0x1706f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1706f8u;

    // 0x1706f8: 0x10800002
    ctx->pc = 0x1706F8u;
    {
        const bool branch_taken_0x1706f8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1706FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1706f8) {
            ctx->pc = 0x170704u;
            goto label_170704;
        }
    }
    ctx->pc = 0x170700u;
    // 0x170700: 0xac820000
    ctx->pc = 0x170700u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_170704:
    // 0x170704: 0x3e00008
    ctx->pc = 0x170704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170704u: goto label_170704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17070Cu;
    // 0x17070c: 0x0
    ctx->pc = 0x17070cu;
    // NOP
}
