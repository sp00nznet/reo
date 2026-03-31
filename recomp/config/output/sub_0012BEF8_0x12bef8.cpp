#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012BEF8
// Address: 0x12bef8 - 0x12bf10
void sub_0012BEF8_0x12bef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12bef8u;

    // 0x12bef8: 0x27bdfff0
    ctx->pc = 0x12bef8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12befc: 0xffbf0000
    ctx->pc = 0x12befcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12bf00: 0xdfbf0000
    ctx->pc = 0x12bf00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bf04: 0x8050802
    ctx->pc = 0x12BF04u;
    ctx->pc = 0x12BF08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x142008u;
    sub_00142008_0x142008(rdram, ctx, runtime); return;
    ctx->pc = 0x12BF0Cu;
    // 0x12bf0c: 0x0
    ctx->pc = 0x12bf0cu;
    // NOP
}
