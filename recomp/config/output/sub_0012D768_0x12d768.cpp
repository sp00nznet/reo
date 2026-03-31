#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012D768
// Address: 0x12d768 - 0x12d778
void sub_0012D768_0x12d768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12d768u;

    // 0x12d768: 0x3e00008
    ctx->pc = 0x12D768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D76Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12D770u;
    // 0x12d770: 0x3e00008
    ctx->pc = 0x12D770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D774u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 68)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12D778u;
}
