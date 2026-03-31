#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00141718
// Address: 0x141718 - 0x141730
void sub_00141718_0x141718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x141718u;

    // 0x141718: 0x27bdfff0
    ctx->pc = 0x141718u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14171c: 0x24040003
    ctx->pc = 0x14171cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x141720: 0xffbf0000
    ctx->pc = 0x141720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x141724: 0xdfbf0000
    ctx->pc = 0x141724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141728: 0x8050578
    ctx->pc = 0x141728u;
    ctx->pc = 0x14172Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1415E0u;
    entry_1415e0_0x141640(rdram, ctx, runtime); return;
    ctx->pc = 0x141730u;
}
