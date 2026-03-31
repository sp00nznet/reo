#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CBDE0
// Address: 0x1cbde0 - 0x1cbdf0
void sub_001CBDE0_0x1cbde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1cbde0u;

    // 0x1cbde0: 0x3c010023
    ctx->pc = 0x1cbde0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1cbde4: 0x8045198
    ctx->pc = 0x1CBDE4u;
    ctx->pc = 0x1CBDE8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 24552)));
    ctx->pc = 0x114660u;
    sub_00114660_0x114660(rdram, ctx, runtime); return;
    ctx->pc = 0x1CBDECu;
    // 0x1cbdec: 0x0
    ctx->pc = 0x1cbdecu;
    // NOP
}
