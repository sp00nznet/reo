#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001ACF80
// Address: 0x1acf80 - 0x1acfa0
void sub_001ACF80_0x1acf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1acf80u;

    // 0x1acf80: 0x6343c
    ctx->pc = 0x1acf80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1acf84: 0x30e700ff
    ctx->pc = 0x1acf84u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 7), 255));
    // 0x1acf88: 0x6343f
    ctx->pc = 0x1acf88u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1acf8c: 0x8069f3c
    ctx->pc = 0x1ACF8Cu;
    ctx->pc = 0x1ACF90u;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 8), 255));
    ctx->pc = 0x1A7CF0u;
    entry_1a7cf0_0x1a7de0(rdram, ctx, runtime); return;
    ctx->pc = 0x1ACF94u;
    // 0x1acf94: 0x0
    ctx->pc = 0x1acf94u;
    // NOP
    // 0x1acf98: 0x0
    ctx->pc = 0x1acf98u;
    // NOP
    // 0x1acf9c: 0x0
    ctx->pc = 0x1acf9cu;
    // NOP
}
