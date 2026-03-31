#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C8830
// Address: 0x1c8830 - 0x1c8840
void sub_001C8830_0x1c8830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c8830u;

    // 0x1c8830: 0x8042bf0
    ctx->pc = 0x1C8830u;
    ctx->pc = 0x1C8834u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 124));
    ctx->pc = 0x10AFC0u;
    sub_0010AFC0_0x10afc0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C8838u;
    // 0x1c8838: 0x0
    ctx->pc = 0x1c8838u;
    // NOP
    // 0x1c883c: 0x0
    ctx->pc = 0x1c883cu;
    // NOP
}
