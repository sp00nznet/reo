#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016DB00
// Address: 0x16db00 - 0x16db20
void sub_0016DB00_0x16db00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16db00u;

    // 0x16db00: 0x27bdfff0
    ctx->pc = 0x16db00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16db04: 0xa0302d
    ctx->pc = 0x16db04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16db08: 0xffbf0000
    ctx->pc = 0x16db08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16db0c: 0x3c050157
    ctx->pc = 0x16db0cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)343 << 16));
    // 0x16db10: 0x34a552a0
    ctx->pc = 0x16db10u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 21152));
    // 0x16db14: 0xdfbf0000
    ctx->pc = 0x16db14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16db18: 0x8056ea0
    ctx->pc = 0x16DB18u;
    ctx->pc = 0x16DB1Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x15BA80u;
    sub_0015BA80_0x15ba80(rdram, ctx, runtime); return;
    ctx->pc = 0x16DB20u;
}
