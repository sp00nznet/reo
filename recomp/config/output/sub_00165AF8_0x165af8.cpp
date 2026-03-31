#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00165AF8
// Address: 0x165af8 - 0x165b08
void sub_00165AF8_0x165af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x165af8u;

    // 0x165af8: 0x3c030023
    ctx->pc = 0x165af8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x165afc: 0x3e00008
    ctx->pc = 0x165AFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165B00u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294963592)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x165B04u;
    // 0x165b04: 0x0
    ctx->pc = 0x165b04u;
    // NOP
}
