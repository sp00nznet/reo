#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C8810
// Address: 0x1c8810 - 0x1c8820
void sub_001C8810_0x1c8810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c8810u;

    // 0x1c8810: 0x3e00008
    ctx->pc = 0x1C8810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8814u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8818u;
    // 0x1c8818: 0x0
    ctx->pc = 0x1c8818u;
    // NOP
    // 0x1c881c: 0x0
    ctx->pc = 0x1c881cu;
    // NOP
}
