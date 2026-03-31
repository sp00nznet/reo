#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00138BA8
// Address: 0x138ba8 - 0x138bd0
void sub_00138BA8_0x138ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x138ba8u;

    // 0x138ba8: 0x27bdfff0
    ctx->pc = 0x138ba8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x138bac: 0xffb00000
    ctx->pc = 0x138bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x138bb0: 0xffbf0008
    ctx->pc = 0x138bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x138bb4: 0xc04fc96
    ctx->pc = 0x138BB4u;
    SET_GPR_U32(ctx, 31, 0x138BBCu);
    ctx->pc = 0x138BB8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13F258u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F258_0x13f258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138BBCu; }
    }
    if (ctx->pc != 0x138BBCu) { return; }
    ctx->pc = 0x138BBCu;
    // 0x138bbc: 0xdfbf0008
    ctx->pc = 0x138bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x138bc0: 0xa2000000
    ctx->pc = 0x138bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x138bc4: 0xdfb00000
    ctx->pc = 0x138bc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138bc8: 0x804fc9c
    ctx->pc = 0x138BC8u;
    ctx->pc = 0x138BCCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13F270u;
    sub_0013F270_0x13f270(rdram, ctx, runtime); return;
    ctx->pc = 0x138BD0u;
}
