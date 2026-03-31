#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013F1C8
// Address: 0x13f1c8 - 0x13f1e0
void sub_0013F1C8_0x13f1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13f1c8u;

    // 0x13f1c8: 0x52880
    ctx->pc = 0x13f1c8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x13f1cc: 0x852021
    ctx->pc = 0x13f1ccu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13f1d0: 0x8c830008
    ctx->pc = 0x13f1d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13f1d4: 0x3e00008
    ctx->pc = 0x13F1D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F1D8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13F1DCu;
    // 0x13f1dc: 0x0
    ctx->pc = 0x13f1dcu;
    // NOP
}
