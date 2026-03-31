#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00165610
// Address: 0x165610 - 0x165630
void sub_00165610_0x165610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x165610u;

    // 0x165610: 0x27bdfff0
    ctx->pc = 0x165610u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x165614: 0xa0302d
    ctx->pc = 0x165614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165618: 0xffbf0000
    ctx->pc = 0x165618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16561c: 0x8c851b80
    ctx->pc = 0x16561cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 7040)));
    // 0x165620: 0xdfbf0000
    ctx->pc = 0x165620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165624: 0x8059f38
    ctx->pc = 0x165624u;
    ctx->pc = 0x165628u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x167CE0u;
    sub_00167CE0_0x167ce0(rdram, ctx, runtime); return;
    ctx->pc = 0x16562Cu;
    // 0x16562c: 0x0
    ctx->pc = 0x16562cu;
    // NOP
}
