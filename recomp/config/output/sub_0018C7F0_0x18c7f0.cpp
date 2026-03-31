#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018C7F0
// Address: 0x18c7f0 - 0x18c810
void sub_0018C7F0_0x18c7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18c7f0u;

    // 0x18c7f0: 0x3c021700
    ctx->pc = 0x18c7f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)5888 << 16));
    // 0x18c7f4: 0xac820000
    ctx->pc = 0x18c7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x18c7f8: 0xac800004
    ctx->pc = 0x18c7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x18c7fc: 0x24820010
    ctx->pc = 0x18c7fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 16));
    // 0x18c800: 0xac800008
    ctx->pc = 0x18c800u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x18c804: 0x3e00008
    ctx->pc = 0x18C804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C808u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18C80Cu;
    // 0x18c80c: 0x0
    ctx->pc = 0x18c80cu;
    // NOP
}
