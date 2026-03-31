#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012D758
// Address: 0x12d758 - 0x12d768
void sub_0012D758_0x12d758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12d758u;

    // 0x12d758: 0x3e00008
    ctx->pc = 0x12D758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D75Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12D760u;
    // 0x12d760: 0x3e00008
    ctx->pc = 0x12D760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D764u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12D768u;
}
