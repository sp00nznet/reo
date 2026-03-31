#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_18dbe0
// Address: 0x18dbe0 - 0x18dc00
void entry_18dbe0_0x18dc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18dbe0u;

    // 0x18dbe0: 0x80282d
    ctx->pc = 0x18dbe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dbe4: 0x302d
    ctx->pc = 0x18dbe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dbe8: 0x3c04002a
    ctx->pc = 0x18dbe8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)42 << 16));
    // 0x18dbec: 0x806267c
    ctx->pc = 0x18DBECu;
    ctx->pc = 0x18DBF0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966864));
    ctx->pc = 0x1899F0u;
    sub_001899F0_0x1899f0(rdram, ctx, runtime); return;
    ctx->pc = 0x18DBF4u;
    // 0x18dbf4: 0x0
    ctx->pc = 0x18dbf4u;
    // NOP
    // 0x18dbf8: 0x0
    ctx->pc = 0x18dbf8u;
    // NOP
    // 0x18dbfc: 0x0
    ctx->pc = 0x18dbfcu;
    // NOP
}
