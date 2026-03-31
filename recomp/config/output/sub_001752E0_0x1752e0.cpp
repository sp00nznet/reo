#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001752E0
// Address: 0x1752e0 - 0x1752f8
void sub_001752E0_0x1752e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1752e0u;

    // 0x1752e0: 0x27bdfff0
    ctx->pc = 0x1752e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1752e4: 0xffbf0000
    ctx->pc = 0x1752e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1752e8: 0xdfbf0000
    ctx->pc = 0x1752e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1752ec: 0x805ccfe
    ctx->pc = 0x1752ECu;
    ctx->pc = 0x1752F0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1733F8u;
    entry_1733f8_0x1734b8(rdram, ctx, runtime); return;
    ctx->pc = 0x1752F4u;
    // 0x1752f4: 0x0
    ctx->pc = 0x1752f4u;
    // NOP
}
