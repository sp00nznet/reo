#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F3840
// Address: 0x1f3840 - 0x1f3900
void sub_001F3840_0x1f3840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f3840u;

    // 0x1f3840: 0x27bdffe0
    ctx->pc = 0x1f3840u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f3844: 0xffbe0010
    ctx->pc = 0x1f3844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x1f3848: 0x3a0f02d
    ctx->pc = 0x1f3848u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f384c: 0xafc40000
    ctx->pc = 0x1f384cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1f3850: 0xafc50004
    ctx->pc = 0x1f3850u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x1f3854: 0x8fc20004
    ctx->pc = 0x1f3854u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1f3858: 0x2403fffc
    ctx->pc = 0x1f3858u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1f385c: 0x431024
    ctx->pc = 0x1f385cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f3860: 0xafc20008
    ctx->pc = 0x1f3860u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x1f3864: 0x8fc30008
    ctx->pc = 0x1f3864u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1f3868: 0x38620000
    ctx->pc = 0x1f3868u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 0));
    // 0x1f386c: 0x2c420001
    ctx->pc = 0x1f386cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x1f3870: 0xafc20008
    ctx->pc = 0x1f3870u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x1f3874: 0x8fc20008
    ctx->pc = 0x1f3874u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1f3878: 0x3c0e82d
    ctx->pc = 0x1f3878u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f387c: 0xdfbe0010
    ctx->pc = 0x1f387cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3880: 0x27bd0020
    ctx->pc = 0x1f3880u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f3884: 0x3e00008
    ctx->pc = 0x1F3884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F388Cu;
    // 0x1f388c: 0x27bdffd0
    ctx->pc = 0x1f388cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f3890: 0xffbe0020
    ctx->pc = 0x1f3890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x1f3894: 0xffbf0028
    ctx->pc = 0x1f3894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1f3898: 0x3a0f02d
    ctx->pc = 0x1f3898u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f389c: 0xafc40000
    ctx->pc = 0x1f389cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1f38a0: 0xafc50004
    ctx->pc = 0x1f38a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x1f38a4: 0x27c20010
    ctx->pc = 0x1f38a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 16));
    // 0x1f38a8: 0x40202d
    ctx->pc = 0x1f38a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f38ac: 0x8fc50004
    ctx->pc = 0x1f38acu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1f38b0: 0x24060010
    ctx->pc = 0x1f38b0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f38b4: 0xc041eac
    ctx->pc = 0x1F38B4u;
    SET_GPR_U32(ctx, 31, 0x1F38BCu);
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F38BCu; }
    }
    if (ctx->pc != 0x1F38BCu) { return; }
    ctx->pc = 0x1F38BCu;
    // 0x1f38bc: 0x97c20010
    ctx->pc = 0x1f38bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1f38c0: 0x304203ff
    ctx->pc = 0x1f38c0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1023));
    // 0x1f38c4: 0x3042ffff
    ctx->pc = 0x1f38c4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1f38c8: 0xafc2000c
    ctx->pc = 0x1f38c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x1f38cc: 0x8fc40000
    ctx->pc = 0x1f38ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f38d0: 0x8fc50004
    ctx->pc = 0x1f38d0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1f38d4: 0x8fc6000c
    ctx->pc = 0x1f38d4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1f38d8: 0xc07cd5f
    ctx->pc = 0x1F38D8u;
    SET_GPR_U32(ctx, 31, 0x1F38E0u);
    ctx->pc = 0x1F357Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F357C_0x1f357c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F38E0u; }
    }
    if (ctx->pc != 0x1F38E0u) { return; }
    ctx->pc = 0x1F38E0u;
    // 0x1f38e0: 0xafc20008
    ctx->pc = 0x1f38e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x1f38e4: 0x8fc20008
    ctx->pc = 0x1f38e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1f38e8: 0x3c0e82d
    ctx->pc = 0x1f38e8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f38ec: 0xdfbe0020
    ctx->pc = 0x1f38ecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f38f0: 0xdfbf0028
    ctx->pc = 0x1f38f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f38f4: 0x27bd0030
    ctx->pc = 0x1f38f4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f38f8: 0x3e00008
    ctx->pc = 0x1F38F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F3900u;
}
