#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00164728
// Address: 0x164728 - 0x164740
void sub_00164728_0x164728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x164728u;

    // 0x164728: 0x27bdfff0
    ctx->pc = 0x164728u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16472c: 0xffbf0000
    ctx->pc = 0x16472cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x164730: 0xdfbf0000
    ctx->pc = 0x164730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164734: 0x804c16e
    ctx->pc = 0x164734u;
    ctx->pc = 0x164738u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1305B8u;
    sub_001305B8_0x1305b8(rdram, ctx, runtime); return;
    ctx->pc = 0x16473Cu;
    // 0x16473c: 0x0
    ctx->pc = 0x16473cu;
    // NOP
}
