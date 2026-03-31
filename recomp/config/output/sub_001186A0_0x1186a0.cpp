#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001186A0
// Address: 0x1186a0 - 0x1186b0
void sub_001186A0_0x1186a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1186a0u;

    // 0x1186a0: 0x3c020021
    ctx->pc = 0x1186a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x1186a4: 0x8045190
    ctx->pc = 0x1186A4u;
    ctx->pc = 0x1186A8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294942180)));
    ctx->pc = 0x114640u;
    sub_00114640_0x114640(rdram, ctx, runtime); return;
    ctx->pc = 0x1186ACu;
    // 0x1186ac: 0x0
    ctx->pc = 0x1186acu;
    // NOP
}
