#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001670C8
// Address: 0x1670c8 - 0x1670e0
void sub_001670C8_0x1670c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1670c8u;

    // 0x1670c8: 0x27bdfff0
    ctx->pc = 0x1670c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1670cc: 0x382d
    ctx->pc = 0x1670ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1670d0: 0xffbf0000
    ctx->pc = 0x1670d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1670d4: 0xdfbf0000
    ctx->pc = 0x1670d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1670d8: 0x8059c3e
    ctx->pc = 0x1670D8u;
    ctx->pc = 0x1670DCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1670F8u;
    entry_1670f8_0x167250(rdram, ctx, runtime); return;
    ctx->pc = 0x1670E0u;
}
