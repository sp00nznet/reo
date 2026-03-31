#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A57A0
// Address: 0x1a57a0 - 0x1a57b0
void sub_001A57A0_0x1a57a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a57a0u;

    // 0x1a57a0: 0x8069688
    ctx->pc = 0x1A57A0u;
    ctx->pc = 0x1A57A4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A5A20u;
    entry_1a5a20_0x1a5aa0(rdram, ctx, runtime); return;
    ctx->pc = 0x1A57A8u;
    // 0x1a57a8: 0x0
    ctx->pc = 0x1a57a8u;
    // NOP
    // 0x1a57ac: 0x0
    ctx->pc = 0x1a57acu;
    // NOP
}
