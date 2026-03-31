#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017D6E8
// Address: 0x17d6e8 - 0x17d740
void sub_0017D6E8_0x17d6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17d6e8u;

    // 0x17d6e8: 0x27bdfff0
    ctx->pc = 0x17d6e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17d6ec: 0xffbf0000
    ctx->pc = 0x17d6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d6f0: 0xdfbf0000
    ctx->pc = 0x17d6f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d6f4: 0x805f5c0
    ctx->pc = 0x17D6F4u;
    ctx->pc = 0x17D6F8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17D700u;
    goto label_17d700;
    ctx->pc = 0x17D6FCu;
    // 0x17d6fc: 0x0
    ctx->pc = 0x17d6fcu;
    // NOP
label_17d700:
    // 0x17d700: 0x27bdfff0
    ctx->pc = 0x17d700u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17d704: 0x282d
    ctx->pc = 0x17d704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d708: 0xffb00000
    ctx->pc = 0x17d708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17d70c: 0x3c100023
    ctx->pc = 0x17d70cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    // 0x17d710: 0x2610f748
    ctx->pc = 0x17d710u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294965064));
    // 0x17d714: 0x2406022c
    ctx->pc = 0x17d714u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 556));
    // 0x17d718: 0xffbf0008
    ctx->pc = 0x17d718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17d71c: 0xc041f1a
    ctx->pc = 0x17D71Cu;
    SET_GPR_U32(ctx, 31, 0x17D724u);
    ctx->pc = 0x17D720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D724u; }
    }
    if (ctx->pc != 0x17D724u) { return; }
    ctx->pc = 0x17D724u;
    // 0x17d724: 0x24030008
    ctx->pc = 0x17d724u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
    // 0x17d728: 0xae030008
    ctx->pc = 0x17d728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x17d72c: 0x202d
    ctx->pc = 0x17d72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d730: 0xdfb00000
    ctx->pc = 0x17d730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d734: 0xdfbf0008
    ctx->pc = 0x17d734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17d738: 0x805f8e6
    ctx->pc = 0x17D738u;
    ctx->pc = 0x17D73Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17E398u;
    entry_17e398_0x17e3a8(rdram, ctx, runtime); return;
    ctx->pc = 0x17D740u;
}
