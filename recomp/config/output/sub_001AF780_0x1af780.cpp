#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AF780
// Address: 0x1af780 - 0x1af790
void sub_001AF780_0x1af780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1af780u;

    // 0x1af780: 0x8065804
    ctx->pc = 0x1AF780u;
    ctx->pc = 0x1AF784u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 255));
    ctx->pc = 0x196010u;
    sub_00196010_0x196010(rdram, ctx, runtime); return;
    ctx->pc = 0x1AF788u;
    // 0x1af788: 0x0
    ctx->pc = 0x1af788u;
    // NOP
    // 0x1af78c: 0x0
    ctx->pc = 0x1af78cu;
    // NOP
}
