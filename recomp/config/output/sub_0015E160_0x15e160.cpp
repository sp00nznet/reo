#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015E160
// Address: 0x15e160 - 0x15e170
void sub_0015E160_0x15e160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15e160u;

    // 0x15e160: 0x8c8200e0
    ctx->pc = 0x15e160u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x15e164: 0x3e00008
    ctx->pc = 0x15E164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E168u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15E16Cu;
    // 0x15e16c: 0x0
    ctx->pc = 0x15e16cu;
    // NOP
}
