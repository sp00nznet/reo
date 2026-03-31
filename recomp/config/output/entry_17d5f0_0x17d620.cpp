#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17d5f0
// Address: 0x17d5f0 - 0x17d620
void entry_17d5f0_0x17d620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17d5f0u;

    // 0x17d5f0: 0x27bdfff0
    ctx->pc = 0x17d5f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17d5f4: 0xffb00000
    ctx->pc = 0x17d5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17d5f8: 0x80802d
    ctx->pc = 0x17d5f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d5fc: 0xffbf0008
    ctx->pc = 0x17d5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17d600: 0xc052486
    ctx->pc = 0x17D600u;
    SET_GPR_U32(ctx, 31, 0x17D608u);
    ctx->pc = 0x17D604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x149218u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00149218_0x149218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D608u; }
    }
    if (ctx->pc != 0x17D608u) { return; }
    ctx->pc = 0x17D608u;
    // 0x17d608: 0x200202d
    ctx->pc = 0x17d608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d60c: 0xdfbf0008
    ctx->pc = 0x17d60cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17d610: 0x282d
    ctx->pc = 0x17d610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d614: 0xdfb00000
    ctx->pc = 0x17d614u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d618: 0x805f4ba
    ctx->pc = 0x17D618u;
    ctx->pc = 0x17D61Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17D2E8u;
    sub_0017D2E8_0x17d2e8(rdram, ctx, runtime); return;
    ctx->pc = 0x17D620u;
}
