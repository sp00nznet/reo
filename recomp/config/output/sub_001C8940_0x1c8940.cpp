#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C8940
// Address: 0x1c8940 - 0x1c8950
void sub_001C8940_0x1c8940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c8940u;

    // 0x1c8940: 0xac80000c
    ctx->pc = 0x1c8940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1c8944: 0xac800004
    ctx->pc = 0x1c8944u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1c8948: 0x3e00008
    ctx->pc = 0x1C8948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C894Cu;
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8950u;
}
