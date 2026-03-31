#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00141FC0
// Address: 0x141fc0 - 0x141ff0
void sub_00141FC0_0x141fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x141fc0u;

    // 0x141fc0: 0x27bdfff0
    ctx->pc = 0x141fc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x141fc4: 0x24040002
    ctx->pc = 0x141fc4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x141fc8: 0xffbf0000
    ctx->pc = 0x141fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x141fcc: 0xdfbf0000
    ctx->pc = 0x141fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141fd0: 0x8050788
    ctx->pc = 0x141FD0u;
    ctx->pc = 0x141FD4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x141E20u;
    entry_141e20_0x141f90(rdram, ctx, runtime); return;
    ctx->pc = 0x141FD8u;
    // 0x141fd8: 0x27bdfff0
    ctx->pc = 0x141fd8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x141fdc: 0x24040003
    ctx->pc = 0x141fdcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x141fe0: 0xffbf0000
    ctx->pc = 0x141fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x141fe4: 0xdfbf0000
    ctx->pc = 0x141fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141fe8: 0x8050788
    ctx->pc = 0x141FE8u;
    ctx->pc = 0x141FECu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x141E20u;
    entry_141e20_0x141f90(rdram, ctx, runtime); return;
    ctx->pc = 0x141FF0u;
}
