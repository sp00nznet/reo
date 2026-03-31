#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AEBE0
// Address: 0x1aebe0 - 0x1aec10
void sub_001AEBE0_0x1aebe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1aebe0u;

    // 0x1aebe0: 0x27bdfff0
    ctx->pc = 0x1aebe0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aebe4: 0x3c040032
    ctx->pc = 0x1aebe4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x1aebe8: 0xffbf0000
    ctx->pc = 0x1aebe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aebec: 0x248443c0
    ctx->pc = 0x1aebecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17344));
    // 0x1aebf0: 0x282d
    ctx->pc = 0x1aebf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aebf4: 0xc041f1a
    ctx->pc = 0x1AEBF4u;
    SET_GPR_U32(ctx, 31, 0x1AEBFCu);
    ctx->pc = 0x1AEBF8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 240));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEBFCu; }
    }
    if (ctx->pc != 0x1AEBFCu) { return; }
    ctx->pc = 0x1AEBFCu;
    // 0x1aebfc: 0xc06bb04
    ctx->pc = 0x1AEBFCu;
    SET_GPR_U32(ctx, 31, 0x1AEC04u);
    ctx->pc = 0x1AEC10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AEC10_0x1aec10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC04u; }
    }
    if (ctx->pc != 0x1AEC04u) { return; }
    ctx->pc = 0x1AEC04u;
    // 0x1aec04: 0xdfbf0000
    ctx->pc = 0x1aec04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aec08: 0x3e00008
    ctx->pc = 0x1AEC08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEC0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AEC10u;
}
