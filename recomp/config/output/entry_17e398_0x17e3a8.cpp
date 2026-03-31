#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17e398
// Address: 0x17e398 - 0x17e3a8
void entry_17e398_0x17e3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17e398u;

    // 0x17e398: 0x3c020023
    ctx->pc = 0x17e398u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x17e39c: 0x3e00008
    ctx->pc = 0x17E39Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E3A0u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294965068), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E3A4u;
    // 0x17e3a4: 0x0
    ctx->pc = 0x17e3a4u;
    // NOP
}
