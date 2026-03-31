#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017D5C8
// Address: 0x17d5c8 - 0x17d638
void sub_0017D5C8_0x17d5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17d5c8u;

    // 0x17d5c8: 0x8c870004
    ctx->pc = 0x17d5c8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17d5cc: 0x8c830000
    ctx->pc = 0x17d5ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17d5d0: 0xa73818
    ctx->pc = 0x17d5d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)(uint32_t)result); }
    // 0x17d5d4: 0x8c820008
    ctx->pc = 0x17d5d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17d5d8: 0x451023
    ctx->pc = 0x17d5d8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17d5dc: 0xac820008
    ctx->pc = 0x17d5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x17d5e0: 0x671821
    ctx->pc = 0x17d5e0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x17d5e4: 0x661821
    ctx->pc = 0x17d5e4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x17d5e8: 0x3e00008
    ctx->pc = 0x17D5E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D5ECu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D5F0u;
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
    // 0x17d620: 0x27bdfff0
    ctx->pc = 0x17d620u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17d624: 0xffbf0000
    ctx->pc = 0x17d624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d628: 0xdfbf0000
    ctx->pc = 0x17d628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d62c: 0x8052490
    ctx->pc = 0x17D62Cu;
    ctx->pc = 0x17D630u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x149240u;
    sub_00149240_0x149240(rdram, ctx, runtime); return;
    ctx->pc = 0x17D634u;
    // 0x17d634: 0x0
    ctx->pc = 0x17d634u;
    // NOP
}
