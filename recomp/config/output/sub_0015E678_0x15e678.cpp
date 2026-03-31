#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015E678
// Address: 0x15e678 - 0x15e6a0
void sub_0015E678_0x15e678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15e678u;

    // 0x15e678: 0x3c020023
    ctx->pc = 0x15e678u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x15e67c: 0x3e00008
    ctx->pc = 0x15E67Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E680u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958680));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15E684u;
    // 0x15e684: 0x0
    ctx->pc = 0x15e684u;
    // NOP
    // 0x15e688: 0x27bdfff0
    ctx->pc = 0x15e688u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15e68c: 0xa0202d
    ctx->pc = 0x15e68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e690: 0xffbf0000
    ctx->pc = 0x15e690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15e694: 0xdfbf0000
    ctx->pc = 0x15e694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e698: 0x8058dd4
    ctx->pc = 0x15E698u;
    ctx->pc = 0x15E69Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x163750u;
    sub_00163750_0x163750(rdram, ctx, runtime); return;
    ctx->pc = 0x15E6A0u;
}
