#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00103000
// Address: 0x103000 - 0x103028
void sub_00103000_0x103000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x103000u;

    // 0x103000: 0x24030007
    ctx->pc = 0x103000u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
    // 0x103004: 0x41702
    ctx->pc = 0x103004u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 4), 28));
    // 0x103008: 0x14430005
    ctx->pc = 0x103008u;
    {
        const bool branch_taken_0x103008 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x10300Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
        if (branch_taken_0x103008) {
            ctx->pc = 0x103020u;
            goto label_103020;
        }
    }
    ctx->pc = 0x103010u;
    // 0x103010: 0x3c038000
    ctx->pc = 0x103010u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x103014: 0x3442ffff
    ctx->pc = 0x103014u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x103018: 0x822024
    ctx->pc = 0x103018u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10301c: 0x832025
    ctx->pc = 0x10301cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_103020:
    // 0x103020: 0x3e00008
    ctx->pc = 0x103020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103024u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x103020u: goto label_103020;
            default: break;
        }
        return;
    }
    ctx->pc = 0x103028u;
}
