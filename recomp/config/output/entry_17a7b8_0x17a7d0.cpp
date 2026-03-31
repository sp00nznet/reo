#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17a7b8
// Address: 0x17a7b8 - 0x17a7d0
void entry_17a7b8_0x17a7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17a7b8u;

    // 0x17a7b8: 0x27bdfff0
    ctx->pc = 0x17a7b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17a7bc: 0xc0202d
    ctx->pc = 0x17a7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a7c0: 0xffbf0000
    ctx->pc = 0x17a7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17a7c4: 0xdfbf0000
    ctx->pc = 0x17a7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a7c8: 0x8053ef6
    ctx->pc = 0x17A7C8u;
    ctx->pc = 0x17A7CCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x14FBD8u;
    entry_14fbd8_0x14fe88(rdram, ctx, runtime); return;
    ctx->pc = 0x17A7D0u;
}
