#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A0CF0
// Address: 0x1a0cf0 - 0x1a0d00
void sub_001A0CF0_0x1a0cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a0cf0u;

    // 0x1a0cf0: 0x3c01002a
    ctx->pc = 0x1a0cf0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1a0cf4: 0x3e00008
    ctx->pc = 0x1A0CF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0CF8u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294965768), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0CFCu;
    // 0x1a0cfc: 0x0
    ctx->pc = 0x1a0cfcu;
    // NOP
}
