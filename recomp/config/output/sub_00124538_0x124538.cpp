#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00124538
// Address: 0x124538 - 0x124558
void sub_00124538_0x124538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x124538u;

    // 0x124538: 0x3c040021
    ctx->pc = 0x124538u;
    SET_GPR_U32(ctx, 4, ((uint32_t)33 << 16));
    // 0x12453c: 0x102d
    ctx->pc = 0x12453cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124540: 0x2484b93c
    ctx->pc = 0x124540u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949180));
    // 0x124544: 0x8c830000
    ctx->pc = 0x124544u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x124548: 0x2463ffff
    ctx->pc = 0x124548u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12454c: 0x3e00008
    ctx->pc = 0x12454Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124550u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x124554u;
    // 0x124554: 0x0
    ctx->pc = 0x124554u;
    // NOP
}
