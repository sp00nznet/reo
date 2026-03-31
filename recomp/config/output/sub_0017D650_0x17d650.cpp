#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017D650
// Address: 0x17d650 - 0x17d6e8
void sub_0017D650_0x17d650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17d650u;

    // 0x17d650: 0x27bdfff0
    ctx->pc = 0x17d650u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17d654: 0xffbf0000
    ctx->pc = 0x17d654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d658: 0xdfbf0000
    ctx->pc = 0x17d658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d65c: 0x805f906
    ctx->pc = 0x17D65Cu;
    ctx->pc = 0x17D660u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17E418u;
    entry_17e418_0x17e4c8(rdram, ctx, runtime); return;
    ctx->pc = 0x17D664u;
    // 0x17d664: 0x0
    ctx->pc = 0x17d664u;
    // NOP
    // 0x17d668: 0x2484005c
    ctx->pc = 0x17d668u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 92));
    // 0x17d66c: 0xac860004
    ctx->pc = 0x17d66cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x17d670: 0x3e00008
    ctx->pc = 0x17D670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D674u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D678u;
    // 0x17d678: 0x8c82005c
    ctx->pc = 0x17d678u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x17d67c: 0x3e00008
    ctx->pc = 0x17D67Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D680u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D684u;
    // 0x17d684: 0x0
    ctx->pc = 0x17d684u;
    // NOP
    // 0x17d688: 0x27bdfff0
    ctx->pc = 0x17d688u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17d68c: 0x2484005c
    ctx->pc = 0x17d68cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 92));
    // 0x17d690: 0xffbf0000
    ctx->pc = 0x17d690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d694: 0x8c850004
    ctx->pc = 0x17d694u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17d698: 0xdfbf0000
    ctx->pc = 0x17d698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d69c: 0x8c840000
    ctx->pc = 0x17d69cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17d6a0: 0x805f96a
    ctx->pc = 0x17D6A0u;
    ctx->pc = 0x17D6A4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17E5A8u;
    entry_17e5a8_0x17e5e8(rdram, ctx, runtime); return;
    ctx->pc = 0x17D6A8u;
    // 0x17d6a8: 0x27bdfff0
    ctx->pc = 0x17d6a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17d6ac: 0x2484005c
    ctx->pc = 0x17d6acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 92));
    // 0x17d6b0: 0xffbf0000
    ctx->pc = 0x17d6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d6b4: 0x8c850004
    ctx->pc = 0x17d6b4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17d6b8: 0xdfbf0000
    ctx->pc = 0x17d6b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d6bc: 0x8c840000
    ctx->pc = 0x17d6bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17d6c0: 0x805f97a
    ctx->pc = 0x17D6C0u;
    ctx->pc = 0x17D6C4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17E5E8u;
    entry_17e5e8_0x17e628(rdram, ctx, runtime); return;
    ctx->pc = 0x17D6C8u;
    // 0x17d6c8: 0x27bdfff0
    ctx->pc = 0x17d6c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17d6cc: 0x2484005c
    ctx->pc = 0x17d6ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 92));
    // 0x17d6d0: 0xffbf0000
    ctx->pc = 0x17d6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d6d4: 0x8c850004
    ctx->pc = 0x17d6d4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17d6d8: 0xdfbf0000
    ctx->pc = 0x17d6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d6dc: 0x8c840000
    ctx->pc = 0x17d6dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17d6e0: 0x805f98a
    ctx->pc = 0x17D6E0u;
    ctx->pc = 0x17D6E4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17E628u;
    entry_17e628_0x17e6a0(rdram, ctx, runtime); return;
    ctx->pc = 0x17D6E8u;
}
