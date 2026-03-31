#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C12A0
// Address: 0x1c12a0 - 0x1c12c0
void sub_001C12A0_0x1c12a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c12a0u;

    // 0x1c12a0: 0x24020001
    ctx->pc = 0x1c12a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c12a4: 0x3c010032
    ctx->pc = 0x1c12a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c12a8: 0x821804
    ctx->pc = 0x1c12a8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x1c12ac: 0x8c226c90
    ctx->pc = 0x1c12acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 27792)));
    // 0x1c12b0: 0x3e00008
    ctx->pc = 0x1C12B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C12B4u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C12B8u;
    // 0x1c12b8: 0x0
    ctx->pc = 0x1c12b8u;
    // NOP
    // 0x1c12bc: 0x0
    ctx->pc = 0x1c12bcu;
    // NOP
}
