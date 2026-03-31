#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012B370
// Address: 0x12b370 - 0x12b3f8
void sub_0012B370_0x12b370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12b370u;

    // 0x12b370: 0x3c020021
    ctx->pc = 0x12b370u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x12b374: 0x27bdffc0
    ctx->pc = 0x12b374u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12b378: 0x8c477d78
    ctx->pc = 0x12b378u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 32120)));
    // 0x12b37c: 0x3c020026
    ctx->pc = 0x12b37cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x12b380: 0x3c050013
    ctx->pc = 0x12b380u;
    SET_GPR_U32(ctx, 5, ((uint32_t)19 << 16));
    // 0x12b384: 0x3c030021
    ctx->pc = 0x12b384u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x12b388: 0xffb00030
    ctx->pc = 0x12b388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x12b38c: 0x3c100021
    ctx->pc = 0x12b38cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)33 << 16));
    // 0x12b390: 0x24632d70
    ctx->pc = 0x12b390u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 11632));
    // 0x12b394: 0x3a0202d
    ctx->pc = 0x12b394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b398: 0x24061000
    ctx->pc = 0x12b398u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x12b39c: 0x24a5ad70
    ctx->pc = 0x12b39cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294946160));
    // 0x12b3a0: 0x24421cf0
    ctx->pc = 0x12b3a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7408));
    // 0x12b3a4: 0xffbf0038
    ctx->pc = 0x12b3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x12b3a8: 0xafa50004
    ctx->pc = 0x12b3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x12b3ac: 0x261004e4
    ctx->pc = 0x12b3acu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1252));
    // 0x12b3b0: 0xafa30008
    ctx->pc = 0x12b3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x12b3b4: 0xafa6000c
    ctx->pc = 0x12b3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x12b3b8: 0xafa70014
    ctx->pc = 0x12b3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x12b3bc: 0xc045108
    ctx->pc = 0x12B3BCu;
    SET_GPR_U32(ctx, 31, 0x12B3C4u);
    ctx->pc = 0x12B3C0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x114420u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114420_0x114420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B3C4u; }
    }
    if (ctx->pc != 0x12B3C4u) { return; }
    ctx->pc = 0x12B3C4u;
    // 0x12b3c4: 0xae020000
    ctx->pc = 0x12b3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x12b3c8: 0x282d
    ctx->pc = 0x12b3c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b3cc: 0x8e020000
    ctx->pc = 0x12b3ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12b3d0: 0xc045110
    ctx->pc = 0x12B3D0u;
    SET_GPR_U32(ctx, 31, 0x12B3D8u);
    ctx->pc = 0x12B3D4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x114440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114440_0x114440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B3D8u; }
    }
    if (ctx->pc != 0x12B3D8u) { return; }
    ctx->pc = 0x12B3D8u;
    // 0x12b3d8: 0x8e040000
    ctx->pc = 0x12b3d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12b3dc: 0x3c020021
    ctx->pc = 0x12b3dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x12b3e0: 0xc04512c
    ctx->pc = 0x12B3E0u;
    SET_GPR_U32(ctx, 31, 0x12B3E8u);
    ctx->pc = 0x12B3E4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 1136)));
    ctx->pc = 0x1144B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001144B0_0x1144b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B3E8u; }
    }
    if (ctx->pc != 0x12B3E8u) { return; }
    ctx->pc = 0x12B3E8u;
    // 0x12b3e8: 0xdfb00030
    ctx->pc = 0x12b3e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12b3ec: 0xdfbf0038
    ctx->pc = 0x12b3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12b3f0: 0x3e00008
    ctx->pc = 0x12B3F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B3F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12B3F8u;
}
