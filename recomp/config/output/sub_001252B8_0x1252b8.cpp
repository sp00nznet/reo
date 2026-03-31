#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001252B8
// Address: 0x1252b8 - 0x1252c0
void sub_001252B8_0x1252b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1252b8u;

    // 0x1252b8: 0x3e00008
    ctx->pc = 0x1252B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1252BCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 148)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1252C0u;
}
