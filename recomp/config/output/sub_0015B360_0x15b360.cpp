#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015B360
// Address: 0x15b360 - 0x15b410
void sub_0015B360_0x15b360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15b360u;

    // 0x15b360: 0x27bdffd0
    ctx->pc = 0x15b360u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15b364: 0x2402ffc0
    ctx->pc = 0x15b364u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x15b368: 0xffb30018
    ctx->pc = 0x15b368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x15b36c: 0x80982d
    ctx->pc = 0x15b36cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b370: 0xffb10008
    ctx->pc = 0x15b370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15b374: 0x138940
    ctx->pc = 0x15b374u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 19), 5));
    // 0x15b378: 0xffb20010
    ctx->pc = 0x15b378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x15b37c: 0x24b2003f
    ctx->pc = 0x15b37cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 5), 63));
    // 0x15b380: 0x2338823
    ctx->pc = 0x15b380u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x15b384: 0x2429024
    ctx->pc = 0x15b384u;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x15b388: 0x118940
    ctx->pc = 0x15b388u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 5));
    // 0x15b38c: 0x133200
    ctx->pc = 0x15b38cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 19), 8));
    // 0x15b390: 0x2518821
    ctx->pc = 0x15b390u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x15b394: 0xffb40020
    ctx->pc = 0x15b394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x15b398: 0x24c60800
    ctx->pc = 0x15b398u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2048));
    // 0x15b39c: 0x240202d
    ctx->pc = 0x15b39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b3a0: 0x26341520
    ctx->pc = 0x15b3a0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 17), 5408));
    // 0x15b3a4: 0x282d
    ctx->pc = 0x15b3a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b3a8: 0xffb00000
    ctx->pc = 0x15b3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15b3ac: 0xffbf0028
    ctx->pc = 0x15b3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x15b3b0: 0xc0558b4
    ctx->pc = 0x15B3B0u;
    SET_GPR_U32(ctx, 31, 0x15B3B8u);
    ctx->pc = 0x15B3B4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)38 << 16));
    ctx->pc = 0x1562D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001562D0_0x1562d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B3B8u; }
    }
    if (ctx->pc != 0x15B3B8u) { return; }
    ctx->pc = 0x15B3B8u;
    // 0x15b3b8: 0x280202d
    ctx->pc = 0x15b3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b3bc: 0xc056da4
    ctx->pc = 0x15B3BCu;
    SET_GPR_U32(ctx, 31, 0x15B3C4u);
    ctx->pc = 0x15B3C0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2784));
    ctx->pc = 0x15B690u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B690_0x15b690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B3C4u; }
    }
    if (ctx->pc != 0x15B3C4u) { return; }
    ctx->pc = 0x15B3C4u;
    // 0x15b3c4: 0x3c050024
    ctx->pc = 0x15b3c4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x15b3c8: 0x26104c70
    ctx->pc = 0x15b3c8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 19568));
    // 0x15b3cc: 0x24a5e610
    ctx->pc = 0x15b3ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294960656));
    // 0x15b3d0: 0x200202d
    ctx->pc = 0x15b3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b3d4: 0xc05583c
    ctx->pc = 0x15B3D4u;
    SET_GPR_U32(ctx, 31, 0x15B3DCu);
    ctx->pc = 0x15B3D8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x1560F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001560F0_0x1560f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B3DCu; }
    }
    if (ctx->pc != 0x15B3DCu) { return; }
    ctx->pc = 0x15B3DCu;
    // 0x15b3dc: 0xae11004c
    ctx->pc = 0x15b3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 17));
    // 0x15b3e0: 0xae120058
    ctx->pc = 0x15b3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 18));
    // 0x15b3e4: 0xae140050
    ctx->pc = 0x15b3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 20));
    // 0x15b3e8: 0xae130054
    ctx->pc = 0x15b3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 19));
    // 0x15b3ec: 0xdfb10008
    ctx->pc = 0x15b3ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15b3f0: 0xdfb00000
    ctx->pc = 0x15b3f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b3f4: 0xdfb20010
    ctx->pc = 0x15b3f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b3f8: 0xdfb30018
    ctx->pc = 0x15b3f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15b3fc: 0xdfb40020
    ctx->pc = 0x15b3fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15b400: 0xdfbf0028
    ctx->pc = 0x15b400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15b404: 0x3e00008
    ctx->pc = 0x15B404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B408u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15B40Cu;
    // 0x15b40c: 0x0
    ctx->pc = 0x15b40cu;
    // NOP
}
