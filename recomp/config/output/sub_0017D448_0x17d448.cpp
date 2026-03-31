#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017D448
// Address: 0x17d448 - 0x17d468
void sub_0017D448_0x17d448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17d448u;

    // 0x17d448: 0x27bdfff0
    ctx->pc = 0x17d448u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17d44c: 0xffbf0000
    ctx->pc = 0x17d44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d450: 0x8c840030
    ctx->pc = 0x17d450u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x17d454: 0xdfbf0000
    ctx->pc = 0x17d454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d458: 0x805e9fe
    ctx->pc = 0x17D458u;
    ctx->pc = 0x17D45Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17A7F8u;
    entry_17a7f8_0x17a818(rdram, ctx, runtime); return;
    ctx->pc = 0x17D460u;
    // 0x17d460: 0x3e00008
    ctx->pc = 0x17D460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D464u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D468u;
}
