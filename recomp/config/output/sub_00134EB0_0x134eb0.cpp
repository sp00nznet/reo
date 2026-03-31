#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00134EB0
// Address: 0x134eb0 - 0x134ed8
void sub_00134EB0_0x134eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x134eb0u;

    // 0x134eb0: 0x27bdfff0
    ctx->pc = 0x134eb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x134eb4: 0x80102d
    ctx->pc = 0x134eb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134eb8: 0xffbf0000
    ctx->pc = 0x134eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x134ebc: 0x24470032
    ctx->pc = 0x134ebcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 50));
    // 0x134ec0: 0xc0202d
    ctx->pc = 0x134ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134ec4: 0x24460030
    ctx->pc = 0x134ec4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 48));
    // 0x134ec8: 0xdfbf0000
    ctx->pc = 0x134ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134ecc: 0x8049944
    ctx->pc = 0x134ECCu;
    ctx->pc = 0x134ED0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x126510u;
    sub_00126510_0x126510(rdram, ctx, runtime); return;
    ctx->pc = 0x134ED4u;
    // 0x134ed4: 0x0
    ctx->pc = 0x134ed4u;
    // NOP
}
