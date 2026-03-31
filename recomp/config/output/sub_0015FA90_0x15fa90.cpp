#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015FA90
// Address: 0x15fa90 - 0x15faa8
void sub_0015FA90_0x15fa90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15fa90u;

    // 0x15fa90: 0x27bdfff0
    ctx->pc = 0x15fa90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15fa94: 0xffbf0000
    ctx->pc = 0x15fa94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15fa98: 0xdfbf0000
    ctx->pc = 0x15fa98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15fa9c: 0x8057e1c
    ctx->pc = 0x15FA9Cu;
    ctx->pc = 0x15FAA0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x15F870u;
    entry_15f870_0x15f8e0(rdram, ctx, runtime); return;
    ctx->pc = 0x15FAA4u;
    // 0x15faa4: 0x0
    ctx->pc = 0x15faa4u;
    // NOP
}
