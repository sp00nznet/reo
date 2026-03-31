#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00167D00
// Address: 0x167d00 - 0x167d20
void sub_00167D00_0x167d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x167d00u;

    // 0x167d00: 0x510c0
    ctx->pc = 0x167d00u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 3));
    // 0x167d04: 0x451023
    ctx->pc = 0x167d04u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x167d08: 0x21080
    ctx->pc = 0x167d08u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x167d0c: 0x451021
    ctx->pc = 0x167d0cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x167d10: 0x21080
    ctx->pc = 0x167d10u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x167d14: 0x822021
    ctx->pc = 0x167d14u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x167d18: 0x3e00008
    ctx->pc = 0x167D18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167D1Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4428)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x167D20u;
}
