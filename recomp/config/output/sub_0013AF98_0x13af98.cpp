#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013AF98
// Address: 0x13af98 - 0x13afc8
void sub_0013AF98_0x13af98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13af98u;

    // 0x13af98: 0x24021fff
    ctx->pc = 0x13af98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8191));
    // 0x13af9c: 0x2442ffe0
    ctx->pc = 0x13af9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967264));
label_13afa0:
    // 0x13afa0: 0x0
    ctx->pc = 0x13afa0u;
    // NOP
    // 0x13afa4: 0x0
    ctx->pc = 0x13afa4u;
    // NOP
    // 0x13afa8: 0x0
    ctx->pc = 0x13afa8u;
    // NOP
    // 0x13afac: 0x0
    ctx->pc = 0x13afacu;
    // NOP
    // 0x13afb0: 0x0
    ctx->pc = 0x13afb0u;
    // NOP
    // 0x13afb4: 0x443fffa
    ctx->pc = 0x13AFB4u;
    {
        const bool branch_taken_0x13afb4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x13afb4) {
            ctx->pc = 0x13AFB8u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967264));
            ctx->pc = 0x13AFA0u;
            goto label_13afa0;
        }
    }
    ctx->pc = 0x13AFBCu;
    // 0x13afbc: 0x3e00008
    ctx->pc = 0x13AFBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13AFA0u: goto label_13afa0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13AFC4u;
    // 0x13afc4: 0x0
    ctx->pc = 0x13afc4u;
    // NOP
}
