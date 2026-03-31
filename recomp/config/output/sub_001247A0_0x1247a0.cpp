#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001247A0
// Address: 0x1247a0 - 0x124860
void sub_001247A0_0x1247a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1247a0u;

    // 0x1247a0: 0x27bdfff0
    ctx->pc = 0x1247a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1247a4: 0xffbf0000
    ctx->pc = 0x1247a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1247a8: 0xc04d364
    ctx->pc = 0x1247A8u;
    SET_GPR_U32(ctx, 31, 0x1247B0u);
    ctx->pc = 0x134D90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00134D90_0x134d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1247B0u; }
    }
    if (ctx->pc != 0x1247B0u) { return; }
    ctx->pc = 0x1247B0u;
    // 0x1247b0: 0xc049146
    ctx->pc = 0x1247B0u;
    SET_GPR_U32(ctx, 31, 0x1247B8u);
    ctx->pc = 0x124518u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00124518_0x124518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1247B8u; }
    }
    if (ctx->pc != 0x1247B8u) { return; }
    ctx->pc = 0x1247B8u;
    // 0x1247b8: 0x3c040021
    ctx->pc = 0x1247b8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)33 << 16));
    // 0x1247bc: 0xdfbf0000
    ctx->pc = 0x1247bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1247c0: 0x282d
    ctx->pc = 0x1247c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1247c4: 0x2484b958
    ctx->pc = 0x1247c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949208));
    // 0x1247c8: 0x24060e40
    ctx->pc = 0x1247c8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3648));
    // 0x1247cc: 0x8041f1a
    ctx->pc = 0x1247CCu;
    ctx->pc = 0x1247D0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x107C68u;
    sub_00107C68_0x107c68(rdram, ctx, runtime); return;
    ctx->pc = 0x1247D4u;
    // 0x1247d4: 0x0
    ctx->pc = 0x1247d4u;
    // NOP
    // 0x1247d8: 0x27bdfff0
    ctx->pc = 0x1247d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1247dc: 0xffbf0000
    ctx->pc = 0x1247dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1247e0: 0xc04d36e
    ctx->pc = 0x1247E0u;
    SET_GPR_U32(ctx, 31, 0x1247E8u);
    ctx->pc = 0x134DB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00134DB8_0x134db8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1247E8u; }
    }
    if (ctx->pc != 0x1247E8u) { return; }
    ctx->pc = 0x1247E8u;
    // 0x1247e8: 0xc04914e
    ctx->pc = 0x1247E8u;
    SET_GPR_U32(ctx, 31, 0x1247F0u);
    ctx->pc = 0x124538u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00124538_0x124538(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1247F0u; }
    }
    if (ctx->pc != 0x1247F0u) { return; }
    ctx->pc = 0x1247F0u;
    // 0x1247f0: 0x3c040021
    ctx->pc = 0x1247f0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)33 << 16));
    // 0x1247f4: 0xdfbf0000
    ctx->pc = 0x1247f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1247f8: 0x282d
    ctx->pc = 0x1247f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1247fc: 0x2484b958
    ctx->pc = 0x1247fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949208));
    // 0x124800: 0x24060e40
    ctx->pc = 0x124800u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3648));
    // 0x124804: 0x8041f1a
    ctx->pc = 0x124804u;
    ctx->pc = 0x124808u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x107C68u;
    sub_00107C68_0x107c68(rdram, ctx, runtime); return;
    ctx->pc = 0x12480Cu;
    // 0x12480c: 0x0
    ctx->pc = 0x12480cu;
    // NOP
    // 0x124810: 0x8c88008c
    ctx->pc = 0x124810u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x124814: 0x8c82003c
    ctx->pc = 0x124814u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x124818: 0xaca80000
    ctx->pc = 0x124818u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x12481c: 0x8c85008c
    ctx->pc = 0x12481cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x124820: 0x8c830040
    ctx->pc = 0x124820u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x124824: 0x651823
    ctx->pc = 0x124824u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x124828: 0xacc30000
    ctx->pc = 0x124828u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x12482c: 0x8c850018
    ctx->pc = 0x12482cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x124830: 0x8c830088
    ctx->pc = 0x124830u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x124834: 0xa32823
    ctx->pc = 0x124834u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x124838: 0x3e00008
    ctx->pc = 0x124838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12483Cu;
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x124840u;
    // 0x124840: 0x8c82008c
    ctx->pc = 0x124840u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x124844: 0x8c830088
    ctx->pc = 0x124844u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x124848: 0x461021
    ctx->pc = 0x124848u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x12484c: 0x661821
    ctx->pc = 0x12484cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x124850: 0xac82008c
    ctx->pc = 0x124850u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 2));
    // 0x124854: 0x3e00008
    ctx->pc = 0x124854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124858u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12485Cu;
    // 0x12485c: 0x0
    ctx->pc = 0x12485cu;
    // NOP
}
