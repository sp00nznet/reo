#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015B820
// Address: 0x15b820 - 0x15b838
void sub_0015B820_0x15b820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15b820u;

    // 0x15b820: 0x27bdfff0
    ctx->pc = 0x15b820u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15b824: 0xffbf0000
    ctx->pc = 0x15b824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15b828: 0xdfbf0000
    ctx->pc = 0x15b828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b82c: 0x80540b0
    ctx->pc = 0x15B82Cu;
    ctx->pc = 0x15B830u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1502C0u;
    entry_1502c0_0x1502f0(rdram, ctx, runtime); return;
    ctx->pc = 0x15B834u;
    // 0x15b834: 0x0
    ctx->pc = 0x15b834u;
    // NOP
}
