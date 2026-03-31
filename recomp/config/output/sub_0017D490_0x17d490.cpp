#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017D490
// Address: 0x17d490 - 0x17d4f0
void sub_0017D490_0x17d490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17d490u;

    // 0x17d490: 0x517c2
    ctx->pc = 0x17d490u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 5), 31));
    // 0x17d494: 0x27bdffe0
    ctx->pc = 0x17d494u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17d498: 0x451021
    ctx->pc = 0x17d498u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17d49c: 0xffb00000
    ctx->pc = 0x17d49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17d4a0: 0x21043
    ctx->pc = 0x17d4a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x17d4a4: 0x80802d
    ctx->pc = 0x17d4a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d4a8: 0x21040
    ctx->pc = 0x17d4a8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x17d4ac: 0xffb10008
    ctx->pc = 0x17d4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17d4b0: 0x40282d
    ctx->pc = 0x17d4b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d4b4: 0x26040004
    ctx->pc = 0x17d4b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4));
    // 0x17d4b8: 0xffbf0010
    ctx->pc = 0x17d4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17d4bc: 0xc05f53c
    ctx->pc = 0x17D4BCu;
    SET_GPR_U32(ctx, 31, 0x17D4C4u);
    ctx->pc = 0x17D4C0u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x17D4F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D4F0_0x17d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D4C4u; }
    }
    if (ctx->pc != 0x17D4C4u) { return; }
    ctx->pc = 0x17D4C4u;
    // 0x17d4c4: 0x26040014
    ctx->pc = 0x17d4c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 20));
    // 0x17d4c8: 0xc05f53c
    ctx->pc = 0x17D4C8u;
    SET_GPR_U32(ctx, 31, 0x17D4D0u);
    ctx->pc = 0x17D4CCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17D4F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D4F0_0x17d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D4D0u; }
    }
    if (ctx->pc != 0x17D4D0u) { return; }
    ctx->pc = 0x17D4D0u;
    // 0x17d4d0: 0x26040024
    ctx->pc = 0x17d4d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 36));
    // 0x17d4d4: 0x220282d
    ctx->pc = 0x17d4d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d4d8: 0xdfb10008
    ctx->pc = 0x17d4d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17d4dc: 0xdfb00000
    ctx->pc = 0x17d4dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d4e0: 0xdfbf0010
    ctx->pc = 0x17d4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d4e4: 0x805f53c
    ctx->pc = 0x17D4E4u;
    ctx->pc = 0x17D4E8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17D4F0u;
    sub_0017D4F0_0x17d4f0(rdram, ctx, runtime); return;
    ctx->pc = 0x17D4ECu;
    // 0x17d4ec: 0x0
    ctx->pc = 0x17d4ecu;
    // NOP
}
