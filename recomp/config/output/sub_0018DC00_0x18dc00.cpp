#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018DC00
// Address: 0x18dc00 - 0x18dc20
void sub_0018DC00_0x18dc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18dc00u;

    // 0x18dc00: 0x80302d
    ctx->pc = 0x18dc00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dc04: 0x282d
    ctx->pc = 0x18dc04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dc08: 0x3c04002a
    ctx->pc = 0x18dc08u;
    SET_GPR_U32(ctx, 4, ((uint32_t)42 << 16));
    // 0x18dc0c: 0x8062694
    ctx->pc = 0x18DC0Cu;
    ctx->pc = 0x18DC10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966864));
    ctx->pc = 0x189A50u;
    entry_189a50_0x189a70(rdram, ctx, runtime); return;
    ctx->pc = 0x18DC14u;
    // 0x18dc14: 0x0
    ctx->pc = 0x18dc14u;
    // NOP
    // 0x18dc18: 0x0
    ctx->pc = 0x18dc18u;
    // NOP
    // 0x18dc1c: 0x0
    ctx->pc = 0x18dc1cu;
    // NOP
}
