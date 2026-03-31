#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00135048
// Address: 0x135048 - 0x135060
void sub_00135048_0x135048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x135048u;

    // 0x135048: 0x8c82000c
    ctx->pc = 0x135048u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x13504c: 0x24030003
    ctx->pc = 0x13504cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x135050: 0x50430001
    ctx->pc = 0x135050u;
    {
        const bool branch_taken_0x135050 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x135050) {
            ctx->pc = 0x135054u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
            ctx->pc = 0x135058u;
            goto label_135058;
        }
    }
    ctx->pc = 0x135058u;
label_135058:
    // 0x135058: 0x3e00008
    ctx->pc = 0x135058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135058u: goto label_135058;
            default: break;
        }
        return;
    }
    ctx->pc = 0x135060u;
}
