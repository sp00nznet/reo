#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00141730
// Address: 0x141730 - 0x141748
void sub_00141730_0x141730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x141730u;

    // 0x141730: 0x27bdfff0
    ctx->pc = 0x141730u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x141734: 0x24040004
    ctx->pc = 0x141734u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x141738: 0xffbf0000
    ctx->pc = 0x141738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14173c: 0xdfbf0000
    ctx->pc = 0x14173cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141740: 0x8050578
    ctx->pc = 0x141740u;
    ctx->pc = 0x141744u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1415E0u;
    entry_1415e0_0x141640(rdram, ctx, runtime); return;
    ctx->pc = 0x141748u;
}
