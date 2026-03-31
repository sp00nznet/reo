#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012F720
// Address: 0x12f720 - 0x12f750
void sub_0012F720_0x12f720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12f720u;

    // 0x12f720: 0x27bdfff0
    ctx->pc = 0x12f720u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12f724: 0xffbf0000
    ctx->pc = 0x12f724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12f728: 0xc04b6b0
    ctx->pc = 0x12F728u;
    SET_GPR_U32(ctx, 31, 0x12F730u);
    ctx->pc = 0x12DAC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DAC0_0x12dac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F730u; }
    }
    if (ctx->pc != 0x12F730u) { return; }
    ctx->pc = 0x12F730u;
    // 0x12f730: 0xdfbf0000
    ctx->pc = 0x12f730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f734: 0x3c040022
    ctx->pc = 0x12f734u;
    SET_GPR_U32(ctx, 4, ((uint32_t)34 << 16));
    // 0x12f738: 0x24848760
    ctx->pc = 0x12f738u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936416));
    // 0x12f73c: 0x282d
    ctx->pc = 0x12f73cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f740: 0x24061780
    ctx->pc = 0x12f740u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6016));
    // 0x12f744: 0x8041f1a
    ctx->pc = 0x12F744u;
    ctx->pc = 0x12F748u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x107C68u;
    sub_00107C68_0x107c68(rdram, ctx, runtime); return;
    ctx->pc = 0x12F74Cu;
    // 0x12f74c: 0x0
    ctx->pc = 0x12f74cu;
    // NOP
}
