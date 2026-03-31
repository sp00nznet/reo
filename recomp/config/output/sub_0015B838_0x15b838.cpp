#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015B838
// Address: 0x15b838 - 0x15b850
void sub_0015B838_0x15b838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15b838u;

    // 0x15b838: 0x27bdfff0
    ctx->pc = 0x15b838u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15b83c: 0xffbf0000
    ctx->pc = 0x15b83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15b840: 0x8c840380
    ctx->pc = 0x15b840u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x15b844: 0xdfbf0000
    ctx->pc = 0x15b844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b848: 0x80540bc
    ctx->pc = 0x15B848u;
    ctx->pc = 0x15B84Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1502F0u;
    entry_1502f0_0x150408(rdram, ctx, runtime); return;
    ctx->pc = 0x15B850u;
}
