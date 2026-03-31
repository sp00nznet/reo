#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_124ee8
// Address: 0x124ee8 - 0x124ef0
void entry_124ee8_0x124ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x124ee8u;

    // 0x124ee8: 0x3e00008
    ctx->pc = 0x124EE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124EECu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x124EF0u;
}
