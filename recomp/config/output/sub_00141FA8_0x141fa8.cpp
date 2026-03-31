#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00141FA8
// Address: 0x141fa8 - 0x141fc0
void sub_00141FA8_0x141fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x141fa8u;

    // 0x141fa8: 0x27bdfff0
    ctx->pc = 0x141fa8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x141fac: 0x24040001
    ctx->pc = 0x141facu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x141fb0: 0xffbf0000
    ctx->pc = 0x141fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x141fb4: 0xdfbf0000
    ctx->pc = 0x141fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141fb8: 0x8050788
    ctx->pc = 0x141FB8u;
    ctx->pc = 0x141FBCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x141E20u;
    entry_141e20_0x141f90(rdram, ctx, runtime); return;
    ctx->pc = 0x141FC0u;
}
