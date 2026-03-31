#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012E358
// Address: 0x12e358 - 0x12e368
void sub_0012E358_0x12e358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12e358u;

    // 0x12e358: 0xa4860006
    ctx->pc = 0x12e358u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 6));
    // 0x12e35c: 0x3e00008
    ctx->pc = 0x12E35Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E360u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12E364u;
    // 0x12e364: 0x0
    ctx->pc = 0x12e364u;
    // NOP
}
