#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001172F0
// Address: 0x1172f0 - 0x117310
void sub_001172F0_0x1172f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1172f0u;

    // 0x1172f0: 0x8c830010
    ctx->pc = 0x1172f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1172f4: 0x3c02ffff
    ctx->pc = 0x1172f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x1172f8: 0x3442fffe
    ctx->pc = 0x1172f8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65534));
    // 0x1172fc: 0xac800018
    ctx->pc = 0x1172fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x117300: 0x621824
    ctx->pc = 0x117300u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x117304: 0x3e00008
    ctx->pc = 0x117304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117308u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11730Cu;
    // 0x11730c: 0x0
    ctx->pc = 0x11730cu;
    // NOP
}
