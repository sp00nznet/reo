#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00121EF0
// Address: 0x121ef0 - 0x121f28
void sub_00121EF0_0x121ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x121ef0u;

    // 0x121ef0: 0x80102d
    ctx->pc = 0x121ef0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121ef4: 0x2103f
    ctx->pc = 0x121ef4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x121ef8: 0x3c037fff
    ctx->pc = 0x121ef8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32767 << 16));
    // 0x121efc: 0x3c05ffff
    ctx->pc = 0x121efcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65535 << 16));
    // 0x121f00: 0x5283e
    ctx->pc = 0x121f00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x121f04: 0x3463ffff
    ctx->pc = 0x121f04u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x121f08: 0x852024
    ctx->pc = 0x121f08u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x121f0c: 0x431024
    ctx->pc = 0x121f0cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x121f10: 0x2103c
    ctx->pc = 0x121f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x121f14: 0x822025
    ctx->pc = 0x121f14u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x121f18: 0x80102d
    ctx->pc = 0x121f18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121f1c: 0x3e00008
    ctx->pc = 0x121F1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x121F24u;
    // 0x121f24: 0x0
    ctx->pc = 0x121f24u;
    // NOP
}
