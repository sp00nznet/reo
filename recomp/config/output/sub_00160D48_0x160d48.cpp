#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00160D48
// Address: 0x160d48 - 0x160d58
void sub_00160D48_0x160d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x160d48u;

    // 0x160d48: 0x8c820030
    ctx->pc = 0x160d48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x160d4c: 0x3e00008
    ctx->pc = 0x160D4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160D50u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x160D54u;
    // 0x160d54: 0x0
    ctx->pc = 0x160d54u;
    // NOP
}
