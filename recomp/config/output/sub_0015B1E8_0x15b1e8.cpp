#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015B1E8
// Address: 0x15b1e8 - 0x15b208
void sub_0015B1E8_0x15b1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15b1e8u;

    // 0x15b1e8: 0x3c030026
    ctx->pc = 0x15b1e8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
    // 0x15b1ec: 0x8c624cb4
    ctx->pc = 0x15b1ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 19636)));
    // 0x15b1f0: 0x10400003
    ctx->pc = 0x15B1F0u;
    {
        const bool branch_taken_0x15b1f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x15b1f0) {
            ctx->pc = 0x15B200u;
            goto label_15b200;
        }
    }
    ctx->pc = 0x15B1F8u;
    // 0x15b1f8: 0x3c020200
    ctx->pc = 0x15b1f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)512 << 16));
    // 0x15b1fc: 0x822025
    ctx->pc = 0x15b1fcu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_15b200:
    // 0x15b200: 0x3e00008
    ctx->pc = 0x15B200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B204u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15B200u: goto label_15b200;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15B208u;
}
