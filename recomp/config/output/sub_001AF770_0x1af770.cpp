#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AF770
// Address: 0x1af770 - 0x1af780
void sub_001AF770_0x1af770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1af770u;

    // 0x1af770: 0x3e00008
    ctx->pc = 0x1AF770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF778u;
    // 0x1af778: 0x0
    ctx->pc = 0x1af778u;
    // NOP
    // 0x1af77c: 0x0
    ctx->pc = 0x1af77cu;
    // NOP
}
