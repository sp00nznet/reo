#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00148828
// Address: 0x148828 - 0x148838
void sub_00148828_0x148828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x148828u;

    // 0x148828: 0x80282d
    ctx->pc = 0x148828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14882c: 0x3c040024
    ctx->pc = 0x14882cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x148830: 0x8045a12
    ctx->pc = 0x148830u;
    ctx->pc = 0x148834u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294959416));
    ctx->pc = 0x116848u;
    sub_00116848_0x116848(rdram, ctx, runtime); return;
    ctx->pc = 0x148838u;
}
