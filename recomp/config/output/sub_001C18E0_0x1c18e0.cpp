#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C18E0
// Address: 0x1c18e0 - 0x1c1900
void sub_001C18E0_0x1c18e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c18e0u;

    // 0x1c18e0: 0x308200ff
    ctx->pc = 0x1c18e0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 255));
    // 0x1c18e4: 0x21902
    ctx->pc = 0x1c18e4u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 4));
    // 0x1c18e8: 0x24040006
    ctx->pc = 0x1c18e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c18ec: 0x640018
    ctx->pc = 0x1c18ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
    // 0x1c18f0: 0x1812
    ctx->pc = 0x1c18f0u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x1c18f4: 0x431023
    ctx->pc = 0x1c18f4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c18f8: 0x3e00008
    ctx->pc = 0x1C18F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C18FCu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1900u;
}
