#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17b360
// Address: 0x17b360 - 0x17b460
void entry_17b360_0x17b460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17b360u;

    // 0x17b360: 0x27bdffa0
    ctx->pc = 0x17b360u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17b364: 0xffb10038
    ctx->pc = 0x17b364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x17b368: 0xa0882d
    ctx->pc = 0x17b368u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b36c: 0xffb20040
    ctx->pc = 0x17b36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x17b370: 0x26320004
    ctx->pc = 0x17b370u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 4));
    // 0x17b374: 0xffb30048
    ctx->pc = 0x17b374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x17b378: 0x80982d
    ctx->pc = 0x17b378u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b37c: 0xffb40050
    ctx->pc = 0x17b37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x17b380: 0xc0a02d
    ctx->pc = 0x17b380u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b384: 0xffb00030
    ctx->pc = 0x17b384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x17b388: 0x3a0202d
    ctx->pc = 0x17b388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b38c: 0xffbf0058
    ctx->pc = 0x17b38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x17b390: 0x8e230048
    ctx->pc = 0x17b390u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x17b394: 0x8e270044
    ctx->pc = 0x17b394u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x17b398: 0x317c2
    ctx->pc = 0x17b398u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 31));
    // 0x17b39c: 0x8e680008
    ctx->pc = 0x17b39cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x17b3a0: 0x8e450000
    ctx->pc = 0x17b3a0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17b3a4: 0x621021
    ctx->pc = 0x17b3a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17b3a8: 0x21043
    ctx->pc = 0x17b3a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x17b3ac: 0xafa70014
    ctx->pc = 0x17b3acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x17b3b0: 0xafa50000
    ctx->pc = 0x17b3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x17b3b4: 0xafa20018
    ctx->pc = 0x17b3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x17b3b8: 0xafa70004
    ctx->pc = 0x17b3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x17b3bc: 0xafa30008
    ctx->pc = 0x17b3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x17b3c0: 0x15000005
    ctx->pc = 0x17B3C0u;
    {
        const bool branch_taken_0x17b3c0 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x17B3C4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
        if (branch_taken_0x17b3c0) {
            ctx->pc = 0x17B3D8u;
            goto label_17b3d8;
        }
    }
    ctx->pc = 0x17B3C8u;
    // 0x17b3c8: 0x8e420004
    ctx->pc = 0x17b3c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x17b3cc: 0x21080
    ctx->pc = 0x17b3ccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x17b3d0: 0x10000002
    ctx->pc = 0x17B3D0u;
    {
        const bool branch_taken_0x17b3d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17B3D4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        if (branch_taken_0x17b3d0) {
            ctx->pc = 0x17B3DCu;
            goto label_17b3dc;
        }
    }
    ctx->pc = 0x17B3D8u;
label_17b3d8:
    // 0x17b3d8: 0xafa8001c
    ctx->pc = 0x17b3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 8));
label_17b3dc:
    // 0x17b3dc: 0x27b00010
    ctx->pc = 0x17b3dcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 16));
    // 0x17b3e0: 0xc053df2
    ctx->pc = 0x17B3E0u;
    SET_GPR_U32(ctx, 31, 0x17B3E8u);
    ctx->pc = 0x17B3E4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14F7C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0014F7C8_0x14f7c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B3E8u; }
    }
    if (ctx->pc != 0x17B3E8u) { return; }
    ctx->pc = 0x17B3E8u;
    // 0x17b3e8: 0x200282d
    ctx->pc = 0x17b3e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b3ec: 0x8e260048
    ctx->pc = 0x17b3ecu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x17b3f0: 0x3a0202d
    ctx->pc = 0x17b3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b3f4: 0x8e230044
    ctx->pc = 0x17b3f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x17b3f8: 0x8e670008
    ctx->pc = 0x17b3f8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x17b3fc: 0x8e420000
    ctx->pc = 0x17b3fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17b400: 0xafa30014
    ctx->pc = 0x17b400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x17b404: 0xafa20000
    ctx->pc = 0x17b404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x17b408: 0xafb40010
    ctx->pc = 0x17b408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
    // 0x17b40c: 0xafa60018
    ctx->pc = 0x17b40cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x17b410: 0xafa30004
    ctx->pc = 0x17b410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x17b414: 0x14e00006
    ctx->pc = 0x17B414u;
    {
        const bool branch_taken_0x17b414 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x17B418u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
        if (branch_taken_0x17b414) {
            ctx->pc = 0x17B430u;
            goto label_17b430;
        }
    }
    ctx->pc = 0x17B41Cu;
    // 0x17b41c: 0x8e420004
    ctx->pc = 0x17b41cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x17b420: 0x21080
    ctx->pc = 0x17b420u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x17b424: 0x10000003
    ctx->pc = 0x17B424u;
    {
        const bool branch_taken_0x17b424 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17B428u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        if (branch_taken_0x17b424) {
            ctx->pc = 0x17B434u;
            goto label_17b434;
        }
    }
    ctx->pc = 0x17B42Cu;
    // 0x17b42c: 0x0
    ctx->pc = 0x17b42cu;
    // NOP
label_17b430:
    // 0x17b430: 0xafa7001c
    ctx->pc = 0x17b430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 7));
label_17b434:
    // 0x17b434: 0xc054000
    ctx->pc = 0x17B434u;
    SET_GPR_U32(ctx, 31, 0x17B43Cu);
    ctx->pc = 0x17B438u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 60)));
    ctx->pc = 0x150000u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00150000_0x150000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B43Cu; }
    }
    if (ctx->pc != 0x17B43Cu) { return; }
    ctx->pc = 0x17B43Cu;
    // 0x17b43c: 0xdfb00030
    ctx->pc = 0x17b43cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17b440: 0xdfb10038
    ctx->pc = 0x17b440u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17b444: 0xdfb20040
    ctx->pc = 0x17b444u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17b448: 0xdfb30048
    ctx->pc = 0x17b448u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17b44c: 0xdfb40050
    ctx->pc = 0x17b44cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17b450: 0xdfbf0058
    ctx->pc = 0x17b450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x17b454: 0x3e00008
    ctx->pc = 0x17B454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B458u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17B3D8u: goto label_17b3d8;
            case 0x17B3DCu: goto label_17b3dc;
            case 0x17B430u: goto label_17b430;
            case 0x17B434u: goto label_17b434;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17B45Cu;
    // 0x17b45c: 0x0
    ctx->pc = 0x17b45cu;
    // NOP
}
