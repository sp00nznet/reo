#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017D390
// Address: 0x17d390 - 0x17d410
void sub_0017D390_0x17d390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17d390u;

    // 0x17d390: 0x24840014
    ctx->pc = 0x17d390u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20));
    // 0x17d394: 0x24030001
    ctx->pc = 0x17d394u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d398: 0x8c820000
    ctx->pc = 0x17d398u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17d39c: 0x50430004
    ctx->pc = 0x17D39Cu;
    {
        const bool branch_taken_0x17d39c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x17d39c) {
            ctx->pc = 0x17D3A0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->pc = 0x17D3B0u;
            goto label_17d3b0;
        }
    }
    ctx->pc = 0x17D3A4u;
    // 0x17d3a4: 0xaca00000
    ctx->pc = 0x17d3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x17d3a8: 0x3e00008
    ctx->pc = 0x17D3A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D3ACu;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17D3B0u: goto label_17d3b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17D3B0u;
label_17d3b0:
    // 0x17d3b0: 0x8c830004
    ctx->pc = 0x17d3b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17d3b4: 0xacc20000
    ctx->pc = 0x17d3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x17d3b8: 0x3e00008
    ctx->pc = 0x17D3B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D3BCu;
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17D3B0u: goto label_17d3b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17D3C0u;
    // 0x17d3c0: 0x3e00008
    ctx->pc = 0x17D3C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D3C4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17D3B0u: goto label_17d3b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17D3C8u;
    // 0x17d3c8: 0x3e00008
    ctx->pc = 0x17D3C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D3CCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17D3B0u: goto label_17d3b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17D3D0u;
    // 0x17d3d0: 0x3e00008
    ctx->pc = 0x17D3D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D3D4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17D3B0u: goto label_17d3b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17D3D8u;
    // 0x17d3d8: 0x3e00008
    ctx->pc = 0x17D3D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D3DCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 44)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17D3B0u: goto label_17d3b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17D3E0u;
    // 0x17d3e0: 0x27bdfff0
    ctx->pc = 0x17d3e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17d3e4: 0xffbf0000
    ctx->pc = 0x17d3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d3e8: 0x8c840024
    ctx->pc = 0x17d3e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x17d3ec: 0xdfbf0000
    ctx->pc = 0x17d3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d3f0: 0x805f8ae
    ctx->pc = 0x17D3F0u;
    ctx->pc = 0x17D3F4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17E2B8u;
    entry_17e2b8_0x17e320(rdram, ctx, runtime); return;
    ctx->pc = 0x17D3F8u;
    // 0x17d3f8: 0x27bdfff0
    ctx->pc = 0x17d3f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17d3fc: 0xffbf0000
    ctx->pc = 0x17d3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d400: 0x8c840024
    ctx->pc = 0x17d400u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x17d404: 0xdfbf0000
    ctx->pc = 0x17d404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d408: 0x805f8d4
    ctx->pc = 0x17D408u;
    ctx->pc = 0x17D40Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17E350u;
    entry_17e350_0x17e368(rdram, ctx, runtime); return;
    ctx->pc = 0x17D410u;
}
