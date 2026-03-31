#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001284D0
// Address: 0x1284d0 - 0x1284f8
void sub_001284D0_0x1284d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1284d0u;

    // 0x1284d0: 0x28830000
    ctx->pc = 0x1284d0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 0));
    // 0x1284d4: 0x248507ff
    ctx->pc = 0x1284d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 2047));
    // 0x1284d8: 0x80102d
    ctx->pc = 0x1284d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1284dc: 0xa3100b
    ctx->pc = 0x1284dcu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 5));
    // 0x1284e0: 0x212c3
    ctx->pc = 0x1284e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x1284e4: 0x21ac0
    ctx->pc = 0x1284e4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 11));
    // 0x1284e8: 0x832023
    ctx->pc = 0x1284e8u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1284ec: 0x4202a
    ctx->pc = 0x1284ecu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 4)));
    // 0x1284f0: 0x3e00008
    ctx->pc = 0x1284F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1284F4u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1284F8u;
}
