#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00167CA0
// Address: 0x167ca0 - 0x167cc0
void sub_00167CA0_0x167ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x167ca0u;

    // 0x167ca0: 0x510c0
    ctx->pc = 0x167ca0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 3));
    // 0x167ca4: 0x451023
    ctx->pc = 0x167ca4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x167ca8: 0x21080
    ctx->pc = 0x167ca8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x167cac: 0x451021
    ctx->pc = 0x167cacu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x167cb0: 0x21080
    ctx->pc = 0x167cb0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x167cb4: 0x822021
    ctx->pc = 0x167cb4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x167cb8: 0x3e00008
    ctx->pc = 0x167CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167CBCu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4424), GPR_U32(ctx, 6));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x167CC0u;
}
