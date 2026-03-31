#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00135020
// Address: 0x135020 - 0x135048
void sub_00135020_0x135020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x135020u;

    // 0x135020: 0x27bdfff0
    ctx->pc = 0x135020u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x135024: 0x282d
    ctx->pc = 0x135024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135028: 0xffbf0000
    ctx->pc = 0x135028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13502c: 0x24060008
    ctx->pc = 0x13502cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    // 0x135030: 0xac80000c
    ctx->pc = 0x135030u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x135034: 0x24840028
    ctx->pc = 0x135034u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 40));
    // 0x135038: 0xdfbf0000
    ctx->pc = 0x135038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13503c: 0x8041f1a
    ctx->pc = 0x13503Cu;
    ctx->pc = 0x135040u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x107C68u;
    sub_00107C68_0x107c68(rdram, ctx, runtime); return;
    ctx->pc = 0x135044u;
    // 0x135044: 0x0
    ctx->pc = 0x135044u;
    // NOP
}
