#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00141F90
// Address: 0x141f90 - 0x141fa8
void sub_00141F90_0x141f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x141f90u;

    // 0x141f90: 0x27bdfff0
    ctx->pc = 0x141f90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x141f94: 0x202d
    ctx->pc = 0x141f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141f98: 0xffbf0000
    ctx->pc = 0x141f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x141f9c: 0xdfbf0000
    ctx->pc = 0x141f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141fa0: 0x8050788
    ctx->pc = 0x141FA0u;
    ctx->pc = 0x141FA4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x141E20u;
    entry_141e20_0x141f90(rdram, ctx, runtime); return;
    ctx->pc = 0x141FA8u;
}
