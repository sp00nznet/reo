#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001642C0
// Address: 0x1642c0 - 0x1642c8
void sub_001642C0_0x1642c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1642c0u;

    // 0x1642c0: 0x3e00008
    ctx->pc = 0x1642C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1642C4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1642C8u;
}
