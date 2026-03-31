#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BE400
// Address: 0x1be400 - 0x1be410
void sub_001BE400_0x1be400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1be400u;

    // 0x1be400: 0x3c040025
    ctx->pc = 0x1be400u;
    SET_GPR_U32(ctx, 4, ((uint32_t)37 << 16));
    // 0x1be404: 0x8046bfc
    ctx->pc = 0x1BE404u;
    ctx->pc = 0x1BE408u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1176));
    ctx->pc = 0x11AFF0u;
    entry_11aff0_0x11b010(rdram, ctx, runtime); return;
    ctx->pc = 0x1BE40Cu;
    // 0x1be40c: 0x0
    ctx->pc = 0x1be40cu;
    // NOP
}
