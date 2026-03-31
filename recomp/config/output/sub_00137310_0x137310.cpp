#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00137310
// Address: 0x137310 - 0x137340
void sub_00137310_0x137310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x137310u;

    // 0x137310: 0x27bdfff0
    ctx->pc = 0x137310u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x137314: 0x3c020022
    ctx->pc = 0x137314u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x137318: 0xffbf0000
    ctx->pc = 0x137318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13731c: 0x2442bbc0
    ctx->pc = 0x13731cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294949824));
    // 0x137320: 0x3c040022
    ctx->pc = 0x137320u;
    SET_GPR_U32(ctx, 4, ((uint32_t)34 << 16));
    // 0x137324: 0x282d
    ctx->pc = 0x137324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137328: 0x8c430000
    ctx->pc = 0x137328u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13732c: 0x2484bb88
    ctx->pc = 0x13732cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x137330: 0xdfbf0000
    ctx->pc = 0x137330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137334: 0x24060038
    ctx->pc = 0x137334u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 56));
    // 0x137338: 0x8041f1a
    ctx->pc = 0x137338u;
    ctx->pc = 0x13733Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x107C68u;
    sub_00107C68_0x107c68(rdram, ctx, runtime); return;
    ctx->pc = 0x137340u;
}
