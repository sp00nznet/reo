#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00176188
// Address: 0x176188 - 0x176198
void sub_00176188_0x176188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x176188u;

    // 0x176188: 0xac860110
    ctx->pc = 0x176188u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 6));
    // 0x17618c: 0x3e00008
    ctx->pc = 0x17618Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176190u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 268), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x176194u;
    // 0x176194: 0x0
    ctx->pc = 0x176194u;
    // NOP
}
