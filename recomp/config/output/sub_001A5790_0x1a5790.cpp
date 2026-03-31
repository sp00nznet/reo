#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A5790
// Address: 0x1a5790 - 0x1a57a0
void sub_001A5790_0x1a5790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a5790u;

    // 0x1a5790: 0xa0302d
    ctx->pc = 0x1a5790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5794: 0x8069650
    ctx->pc = 0x1A5794u;
    ctx->pc = 0x1A5798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A5940u;
    entry_1a5940_0x1a5a20(rdram, ctx, runtime); return;
    ctx->pc = 0x1A579Cu;
    // 0x1a579c: 0x0
    ctx->pc = 0x1a579cu;
    // NOP
}
