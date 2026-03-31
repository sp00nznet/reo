#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D6710
// Address: 0x1d6710 - 0x1d6720
void sub_001D6710_0x1d6710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d6710u;

    // 0x1d6710: 0x3c010034
    ctx->pc = 0x1d6710u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d6714: 0x3e00008
    ctx->pc = 0x1D6714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6718u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 17896)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D671Cu;
    // 0x1d671c: 0x0
    ctx->pc = 0x1d671cu;
    // NOP
}
