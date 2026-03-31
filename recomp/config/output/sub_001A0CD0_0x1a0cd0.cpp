#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A0CD0
// Address: 0x1a0cd0 - 0x1a0ce0
void sub_001A0CD0_0x1a0cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a0cd0u;

    // 0x1a0cd0: 0x3c01002a
    ctx->pc = 0x1a0cd0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1a0cd4: 0x3e00008
    ctx->pc = 0x1A0CD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0CD8u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966704), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0CDCu;
    // 0x1a0cdc: 0x0
    ctx->pc = 0x1a0cdcu;
    // NOP
}
