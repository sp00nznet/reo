#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00103028
// Address: 0x103028 - 0x103060
void sub_00103028_0x103028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x103028u;

    // 0x103028: 0x10a0000a
    ctx->pc = 0x103028u;
    {
        const bool branch_taken_0x103028 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x10302Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967295));
        if (branch_taken_0x103028) {
            ctx->pc = 0x103054u;
            goto label_103054;
        }
    }
    ctx->pc = 0x103030u;
    // 0x103030: 0x2403ffff
    ctx->pc = 0x103030u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x103034: 0x0
    ctx->pc = 0x103034u;
    // NOP
label_103038:
    // 0x103038: 0xa0800000
    ctx->pc = 0x103038u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x10303c: 0x2442ffff
    ctx->pc = 0x10303cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x103040: 0x24840001
    ctx->pc = 0x103040u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x103044: 0x0
    ctx->pc = 0x103044u;
    // NOP
    // 0x103048: 0x0
    ctx->pc = 0x103048u;
    // NOP
    // 0x10304c: 0x1443fffa
    ctx->pc = 0x10304Cu;
    {
        const bool branch_taken_0x10304c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x10304c) {
            ctx->pc = 0x103038u;
            goto label_103038;
        }
    }
    ctx->pc = 0x103054u;
label_103054:
    // 0x103054: 0x3e00008
    ctx->pc = 0x103054u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x103038u: goto label_103038;
            case 0x103054u: goto label_103054;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10305Cu;
    // 0x10305c: 0x0
    ctx->pc = 0x10305cu;
    // NOP
}
