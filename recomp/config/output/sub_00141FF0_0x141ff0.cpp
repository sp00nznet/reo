#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00141FF0
// Address: 0x141ff0 - 0x142008
void sub_00141FF0_0x141ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x141ff0u;

    // 0x141ff0: 0x27bdfff0
    ctx->pc = 0x141ff0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x141ff4: 0x24040004
    ctx->pc = 0x141ff4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x141ff8: 0xffbf0000
    ctx->pc = 0x141ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x141ffc: 0xdfbf0000
    ctx->pc = 0x141ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142000: 0x8050788
    ctx->pc = 0x142000u;
    ctx->pc = 0x142004u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x141E20u;
    entry_141e20_0x141f90(rdram, ctx, runtime); return;
    ctx->pc = 0x142008u;
}
