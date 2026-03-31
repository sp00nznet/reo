#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00169068
// Address: 0x169068 - 0x169098
void sub_00169068_0x169068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x169068u;

    // 0x169068: 0x90820000
    ctx->pc = 0x169068u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16906c: 0x90830001
    ctx->pc = 0x16906cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x169070: 0x21200
    ctx->pc = 0x169070u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
    // 0x169074: 0x90850002
    ctx->pc = 0x169074u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x169078: 0x431025
    ctx->pc = 0x169078u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16907c: 0x90860003
    ctx->pc = 0x16907cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x169080: 0x21200
    ctx->pc = 0x169080u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
    // 0x169084: 0x451025
    ctx->pc = 0x169084u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x169088: 0x21200
    ctx->pc = 0x169088u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
    // 0x16908c: 0x3e00008
    ctx->pc = 0x16908Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169090u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169094u;
    // 0x169094: 0x0
    ctx->pc = 0x169094u;
    // NOP
}
