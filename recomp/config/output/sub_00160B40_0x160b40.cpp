#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00160B40
// Address: 0x160b40 - 0x160b58
void sub_00160B40_0x160b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x160b40u;

    // 0x160b40: 0x27bdfff0
    ctx->pc = 0x160b40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x160b44: 0xffbf0000
    ctx->pc = 0x160b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x160b48: 0xdfbf0000
    ctx->pc = 0x160b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160b4c: 0x805f3bc
    ctx->pc = 0x160B4Cu;
    ctx->pc = 0x160B50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17CEF0u;
    entry_17cef0_0x17cf48(rdram, ctx, runtime); return;
    ctx->pc = 0x160B54u;
    // 0x160b54: 0x0
    ctx->pc = 0x160b54u;
    // NOP
}
