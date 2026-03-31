#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00163480
// Address: 0x163480 - 0x163558
void sub_00163480_0x163480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x163480u;

    // 0x163480: 0x27bdfff0
    ctx->pc = 0x163480u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x163484: 0xffbf0000
    ctx->pc = 0x163484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x163488: 0xc05083e
    ctx->pc = 0x163488u;
    SET_GPR_U32(ctx, 31, 0x163490u);
    ctx->pc = 0x1420F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001420F8_0x1420f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163490u; }
    }
    if (ctx->pc != 0x163490u) { return; }
    ctx->pc = 0x163490u;
    // 0x163490: 0xdfbf0000
    ctx->pc = 0x163490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163494: 0x3c020027
    ctx->pc = 0x163494u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x163498: 0x3c030027
    ctx->pc = 0x163498u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x16349c: 0x3c040027
    ctx->pc = 0x16349cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)39 << 16));
    // 0x1634a0: 0x3c050027
    ctx->pc = 0x1634a0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)39 << 16));
    // 0x1634a4: 0xac400740
    ctx->pc = 0x1634a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1856), GPR_U32(ctx, 0));
    // 0x1634a8: 0xac600744
    ctx->pc = 0x1634a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1860), GPR_U32(ctx, 0));
    // 0x1634ac: 0xac800748
    ctx->pc = 0x1634acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1864), GPR_U32(ctx, 0));
    // 0x1634b0: 0xaca0074c
    ctx->pc = 0x1634b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1868), GPR_U32(ctx, 0));
    // 0x1634b4: 0x3e00008
    ctx->pc = 0x1634B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1634B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1634BCu;
    // 0x1634bc: 0x0
    ctx->pc = 0x1634bcu;
    // NOP
    // 0x1634c0: 0x27bdfff0
    ctx->pc = 0x1634c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1634c4: 0xffbf0000
    ctx->pc = 0x1634c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1634c8: 0xdfbf0000
    ctx->pc = 0x1634c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1634cc: 0x805084e
    ctx->pc = 0x1634CCu;
    ctx->pc = 0x1634D0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x142138u;
    sub_00142138_0x142138(rdram, ctx, runtime); return;
    ctx->pc = 0x1634D4u;
    // 0x1634d4: 0x0
    ctx->pc = 0x1634d4u;
    // NOP
    // 0x1634d8: 0x80102d
    ctx->pc = 0x1634d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1634dc: 0x202d
    ctx->pc = 0x1634dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1634e0: 0x27bdfff0
    ctx->pc = 0x1634e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1634e4: 0xa0302d
    ctx->pc = 0x1634e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1634e8: 0xffbf0000
    ctx->pc = 0x1634e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1634ec: 0xc0506c4
    ctx->pc = 0x1634ECu;
    SET_GPR_U32(ctx, 31, 0x1634F4u);
    ctx->pc = 0x1634F0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x141B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00141B10_0x141b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1634F4u; }
    }
    if (ctx->pc != 0x1634F4u) { return; }
    ctx->pc = 0x1634F4u;
    // 0x1634f4: 0x3c030027
    ctx->pc = 0x1634f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1634f8: 0xdfbf0000
    ctx->pc = 0x1634f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1634fc: 0xac620740
    ctx->pc = 0x1634fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1856), GPR_U32(ctx, 2));
    // 0x163500: 0x3e00008
    ctx->pc = 0x163500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163504u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x163508u;
    // 0x163508: 0x27bdfff0
    ctx->pc = 0x163508u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16350c: 0x3c020027
    ctx->pc = 0x16350cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x163510: 0xffbf0000
    ctx->pc = 0x163510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x163514: 0x202d
    ctx->pc = 0x163514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163518: 0x8c450740
    ctx->pc = 0x163518u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 1856)));
    // 0x16351c: 0xdfbf0000
    ctx->pc = 0x16351cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163520: 0x80506f8
    ctx->pc = 0x163520u;
    ctx->pc = 0x163524u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x141BE0u;
    sub_00141BE0_0x141be0(rdram, ctx, runtime); return;
    ctx->pc = 0x163528u;
    // 0x163528: 0x80102d
    ctx->pc = 0x163528u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16352c: 0x24040002
    ctx->pc = 0x16352cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x163530: 0x27bdfff0
    ctx->pc = 0x163530u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x163534: 0xa0302d
    ctx->pc = 0x163534u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163538: 0xffbf0000
    ctx->pc = 0x163538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16353c: 0xc0506c4
    ctx->pc = 0x16353Cu;
    SET_GPR_U32(ctx, 31, 0x163544u);
    ctx->pc = 0x163540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x141B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00141B10_0x141b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163544u; }
    }
    if (ctx->pc != 0x163544u) { return; }
    ctx->pc = 0x163544u;
    // 0x163544: 0x3c030027
    ctx->pc = 0x163544u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x163548: 0xdfbf0000
    ctx->pc = 0x163548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16354c: 0xac620744
    ctx->pc = 0x16354cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1860), GPR_U32(ctx, 2));
    // 0x163550: 0x3e00008
    ctx->pc = 0x163550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163554u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x163558u;
}
