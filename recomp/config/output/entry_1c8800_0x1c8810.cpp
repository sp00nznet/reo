#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1c8800
// Address: 0x1c8800 - 0x1c8810
void entry_1c8800_0x1c8810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c8800u;

    // 0x1c8800: 0x3e00008
    ctx->pc = 0x1C8800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8804u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 68)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8808u;
    // 0x1c8808: 0x0
    ctx->pc = 0x1c8808u;
    // NOP
    // 0x1c880c: 0x0
    ctx->pc = 0x1c880cu;
    // NOP
}
