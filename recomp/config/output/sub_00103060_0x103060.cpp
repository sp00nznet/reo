#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00103060
// Address: 0x103060 - 0x103088
void sub_00103060_0x103060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x103060u;

    // 0x103060: 0x2c82000a
    ctx->pc = 0x103060u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 10));
    // 0x103064: 0x10400006
    ctx->pc = 0x103064u;
    {
        const bool branch_taken_0x103064 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x103068u;
        SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
        if (branch_taken_0x103064) {
            ctx->pc = 0x103080u;
            goto label_103080;
        }
    }
    ctx->pc = 0x10306Cu;
    // 0x10306c: 0x41880
    ctx->pc = 0x10306cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x103070: 0x244294c8
    ctx->pc = 0x103070u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294939848));
    // 0x103074: 0x621821
    ctx->pc = 0x103074u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x103078: 0x3e00008
    ctx->pc = 0x103078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10307Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x103080u: goto label_103080;
            default: break;
        }
        return;
    }
    ctx->pc = 0x103080u;
label_103080:
    // 0x103080: 0x3e00008
    ctx->pc = 0x103080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103084u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x103080u: goto label_103080;
            default: break;
        }
        return;
    }
    ctx->pc = 0x103088u;
}
