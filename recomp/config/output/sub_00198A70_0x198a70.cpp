#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00198A70
// Address: 0x198a70 - 0x198a90
void sub_00198A70_0x198a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x198a70u;

    // 0x198a70: 0x3c01002a
    ctx->pc = 0x198a70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x198a74: 0x8422fd5c
    ctx->pc = 0x198a74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294966620)));
    // 0x198a78: 0x821023
    ctx->pc = 0x198a78u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x198a7c: 0x2243c
    ctx->pc = 0x198a7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x198a80: 0x4243f
    ctx->pc = 0x198a80u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x198a84: 0x3e00008
    ctx->pc = 0x198A84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198A88u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x198A8Cu;
    // 0x198a8c: 0x0
    ctx->pc = 0x198a8cu;
    // NOP
}
