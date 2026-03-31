#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00167CE0
// Address: 0x167ce0 - 0x167d00
void sub_00167CE0_0x167ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x167ce0u;

    // 0x167ce0: 0x510c0
    ctx->pc = 0x167ce0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 3));
    // 0x167ce4: 0x451023
    ctx->pc = 0x167ce4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x167ce8: 0x21080
    ctx->pc = 0x167ce8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x167cec: 0x451021
    ctx->pc = 0x167cecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x167cf0: 0x21080
    ctx->pc = 0x167cf0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x167cf4: 0x822021
    ctx->pc = 0x167cf4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x167cf8: 0x3e00008
    ctx->pc = 0x167CF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167CFCu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4428), GPR_U32(ctx, 6));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x167D00u;
}
