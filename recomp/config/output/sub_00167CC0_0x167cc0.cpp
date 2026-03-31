#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00167CC0
// Address: 0x167cc0 - 0x167ce0
void sub_00167CC0_0x167cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x167cc0u;

    // 0x167cc0: 0x510c0
    ctx->pc = 0x167cc0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 3));
    // 0x167cc4: 0x451023
    ctx->pc = 0x167cc4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x167cc8: 0x21080
    ctx->pc = 0x167cc8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x167ccc: 0x451021
    ctx->pc = 0x167cccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x167cd0: 0x21080
    ctx->pc = 0x167cd0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x167cd4: 0x822021
    ctx->pc = 0x167cd4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x167cd8: 0x3e00008
    ctx->pc = 0x167CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167CDCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4424)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x167CE0u;
}
