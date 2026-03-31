#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A1900
// Address: 0x1a1900 - 0x1a1910
void sub_001A1900_0x1a1900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a1900u;

    // 0x1a1900: 0x3c04002b
    ctx->pc = 0x1a1900u;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1a1904: 0x24050078
    ctx->pc = 0x1a1904u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 120));
    // 0x1a1908: 0x8068608
    ctx->pc = 0x1A1908u;
    ctx->pc = 0x1A190Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967088));
    ctx->pc = 0x1A1820u;
    sub_001A1820_0x1a1820(rdram, ctx, runtime); return;
    ctx->pc = 0x1A1910u;
}
