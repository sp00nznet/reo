#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015E020
// Address: 0x15e020 - 0x15e048
void sub_0015E020_0x15e020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15e020u;

    // 0x15e020: 0x27bdfff0
    ctx->pc = 0x15e020u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15e024: 0x248200b4
    ctx->pc = 0x15e024u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 180));
    // 0x15e028: 0xffbf0000
    ctx->pc = 0x15e028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15e02c: 0x282d
    ctx->pc = 0x15e02cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e030: 0xac400004
    ctx->pc = 0x15e030u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x15e034: 0xdfbf0000
    ctx->pc = 0x15e034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e038: 0xac400000
    ctx->pc = 0x15e038u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x15e03c: 0x805855e
    ctx->pc = 0x15E03Cu;
    ctx->pc = 0x15E040u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x161578u;
    sub_00161578_0x161578(rdram, ctx, runtime); return;
    ctx->pc = 0x15E044u;
    // 0x15e044: 0x0
    ctx->pc = 0x15e044u;
    // NOP
}
