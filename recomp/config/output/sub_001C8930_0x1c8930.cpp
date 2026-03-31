#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C8930
// Address: 0x1c8930 - 0x1c8940
void sub_001C8930_0x1c8930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c8930u;

    // 0x1c8930: 0xac850008
    ctx->pc = 0x1c8930u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x1c8934: 0x8072250
    ctx->pc = 0x1C8934u;
    ctx->pc = 0x1C8938u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    ctx->pc = 0x1C8940u;
    sub_001C8940_0x1c8940(rdram, ctx, runtime); return;
    ctx->pc = 0x1C893Cu;
    // 0x1c893c: 0x0
    ctx->pc = 0x1c893cu;
    // NOP
}
