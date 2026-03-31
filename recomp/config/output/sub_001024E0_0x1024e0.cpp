#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001024E0
// Address: 0x1024e0 - 0x1024f0
void sub_001024E0_0x1024e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1024e0u;

    // 0x1024e0: 0x3084ffff
    ctx->pc = 0x1024e0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x1024e4: 0x48c4f800
    ctx->pc = 0x1024e4u;
    // Unimplemented CTC2 VU CReg: 31
    // 0x1024e8: 0x3e00008
    ctx->pc = 0x1024E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1024F0u;
}
