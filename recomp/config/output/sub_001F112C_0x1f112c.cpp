#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F112C
// Address: 0x1f112c - 0x1f116c
void sub_001F112C_0x1f112c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f112cu;

    // 0x1f112c: 0x27bdfff0
    ctx->pc = 0x1f112cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f1130: 0xffbe0000
    ctx->pc = 0x1f1130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x1f1134: 0x3a0f02d
    ctx->pc = 0x1f1134u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1138: 0xa0102d
    ctx->pc = 0x1f1138u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f113c: 0x3042ffff
    ctx->pc = 0x1f113cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1f1140: 0x40182d
    ctx->pc = 0x1f1140u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1144: 0x9482000e
    ctx->pc = 0x1f1144u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x1f1148: 0x621024
    ctx->pc = 0x1f1148u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f114c: 0x3042ffff
    ctx->pc = 0x1f114cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1f1150: 0x431026
    ctx->pc = 0x1f1150u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f1154: 0x2c420001
    ctx->pc = 0x1f1154u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x1f1158: 0x3c0e82d
    ctx->pc = 0x1f1158u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f115c: 0xdfbe0000
    ctx->pc = 0x1f115cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f1160: 0x27bd0010
    ctx->pc = 0x1f1160u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f1164: 0x3e00008
    ctx->pc = 0x1F1164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F116Cu;
}
