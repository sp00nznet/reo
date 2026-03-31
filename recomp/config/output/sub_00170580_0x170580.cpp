#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00170580
// Address: 0x170580 - 0x170590
void sub_00170580_0x170580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x170580u;

    // 0x170580: 0x8c821b30
    ctx->pc = 0x170580u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 6960)));
    // 0x170584: 0x3e00008
    ctx->pc = 0x170584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170588u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17058Cu;
    // 0x17058c: 0x0
    ctx->pc = 0x17058cu;
    // NOP
}
