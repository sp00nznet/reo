#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_13eca0
// Address: 0x13eca0 - 0x13ecb0
void entry_13eca0_0x13ecb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13eca0u;

    // 0x13eca0: 0x3402bb80
    ctx->pc = 0x13eca0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 48000));
    // 0x13eca4: 0xaca00000
    ctx->pc = 0x13eca4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x13eca8: 0x3e00008
    ctx->pc = 0x13ECA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13ECACu;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13ECB0u;
}
