#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17c290
// Address: 0x17c290 - 0x17c420
void entry_17c290_0x17c420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17c290u;

    // 0x17c290: 0x27bdff80
    ctx->pc = 0x17c290u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x17c294: 0xffb00040
    ctx->pc = 0x17c294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x17c298: 0xffb10048
    ctx->pc = 0x17c298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x17c29c: 0x80882d
    ctx->pc = 0x17c29cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c2a0: 0xffb20050
    ctx->pc = 0x17c2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x17c2a4: 0xa0902d
    ctx->pc = 0x17c2a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c2a8: 0xffb30058
    ctx->pc = 0x17c2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x17c2ac: 0xc0982d
    ctx->pc = 0x17c2acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c2b0: 0xffb40060
    ctx->pc = 0x17c2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x17c2b4: 0x26500004
    ctx->pc = 0x17c2b4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 4));
    // 0x17c2b8: 0xffb50068
    ctx->pc = 0x17c2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x17c2bc: 0x264a0014
    ctx->pc = 0x17c2bcu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 18), 20));
    // 0x17c2c0: 0xffb60070
    ctx->pc = 0x17c2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x17c2c4: 0xe0b02d
    ctx->pc = 0x17c2c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c2c8: 0xffbf0078
    ctx->pc = 0x17c2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x17c2cc: 0x264b0024
    ctx->pc = 0x17c2ccu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 18), 36));
    // 0x17c2d0: 0x260202d
    ctx->pc = 0x17c2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c2d4: 0xafa00018
    ctx->pc = 0x17c2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x17c2d8: 0x8e050008
    ctx->pc = 0x17c2d8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17c2dc: 0x8e0c0004
    ctx->pc = 0x17c2dcu;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17c2e0: 0x517c2
    ctx->pc = 0x17c2e0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 5), 31));
    // 0x17c2e4: 0x8d480000
    ctx->pc = 0x17c2e4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x17c2e8: 0x1851818
    ctx->pc = 0x17c2e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x17c2ec: 0xa22821
    ctx->pc = 0x17c2ecu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x17c2f0: 0x8d690000
    ctx->pc = 0x17c2f0u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x17c2f4: 0x180a82d
    ctx->pc = 0x17c2f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c2f8: 0x8e060000
    ctx->pc = 0x17c2f8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17c2fc: 0x5a043
    ctx->pc = 0x17c2fcu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 5), 1));
    // 0x17c300: 0x8d4d0004
    ctx->pc = 0x17c300u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x17c304: 0x317c2
    ctx->pc = 0x17c304u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 31));
    // 0x17c308: 0x8e270008
    ctx->pc = 0x17c308u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x17c30c: 0x621821
    ctx->pc = 0x17c30cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17c310: 0x8d6a0004
    ctx->pc = 0x17c310u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x17c314: 0x317c2
    ctx->pc = 0x17c314u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 31));
    // 0x17c318: 0x31843
    ctx->pc = 0x17c318u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x17c31c: 0x621021
    ctx->pc = 0x17c31cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17c320: 0x8e2b000c
    ctx->pc = 0x17c320u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x17c324: 0x21043
    ctx->pc = 0x17c324u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x17c328: 0xc33021
    ctx->pc = 0x17c328u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x17c32c: 0x1224821
    ctx->pc = 0x17c32cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x17c330: 0x1024021
    ctx->pc = 0x17c330u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x17c334: 0xe7a80b
    ctx->pc = 0x17c334u;
    if (GPR_U32(ctx, 7) != 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 7));
    // 0x17c338: 0xafa60000
    ctx->pc = 0x17c338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x17c33c: 0xafa80004
    ctx->pc = 0x17c33cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x17c340: 0xafa90008
    ctx->pc = 0x17c340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x17c344: 0xafad0010
    ctx->pc = 0x17c344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 13));
    // 0x17c348: 0xafaa0014
    ctx->pc = 0x17c348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
    // 0x17c34c: 0x11600002
    ctx->pc = 0x17C34Cu;
    {
        const bool branch_taken_0x17c34c = (GPR_U32(ctx, 11) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C350u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 12));
        if (branch_taken_0x17c34c) {
            ctx->pc = 0x17C358u;
            goto label_17c358;
        }
    }
    ctx->pc = 0x17C354u;
    // 0x17c354: 0x160a02d
    ctx->pc = 0x17c354u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_17c358:
    // 0x17c358: 0xc05f14c
    ctx->pc = 0x17C358u;
    SET_GPR_U32(ctx, 31, 0x17C360u);
    ctx->pc = 0x17C530u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C530_0x17c530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C360u; }
    }
    if (ctx->pc != 0x17C360u) { return; }
    ctx->pc = 0x17C360u;
    // 0x17c360: 0x240a0020
    ctx->pc = 0x17c360u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 32));
    // 0x17c364: 0x8e030008
    ctx->pc = 0x17c364u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17c368: 0x24090010
    ctx->pc = 0x17c368u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 16));
    // 0x17c36c: 0x8e080004
    ctx->pc = 0x17c36cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17c370: 0x240282d
    ctx->pc = 0x17c370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c374: 0x33fc2
    ctx->pc = 0x17c374u;
    SET_GPR_U32(ctx, 7, SRL32(GPR_U32(ctx, 3), 31));
    // 0x17c378: 0x2406000b
    ctx->pc = 0x17c378u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 11));
    // 0x17c37c: 0x671821
    ctx->pc = 0x17c37cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x17c380: 0x220202d
    ctx->pc = 0x17c380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c384: 0x31843
    ctx->pc = 0x17c384u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x17c388: 0xafa20020
    ctx->pc = 0x17c388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x17c38c: 0xafa80030
    ctx->pc = 0x17c38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
    // 0x17c390: 0xafa30034
    ctx->pc = 0x17c390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x17c394: 0xafb60024
    ctx->pc = 0x17c394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 22));
    // 0x17c398: 0xafb50028
    ctx->pc = 0x17c398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 21));
    // 0x17c39c: 0x12690006
    ctx->pc = 0x17C39Cu;
    {
        const bool branch_taken_0x17c39c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 9));
        ctx->pc = 0x17C3A0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 20));
        if (branch_taken_0x17c39c) {
            ctx->pc = 0x17C3B8u;
            goto label_17c3b8;
        }
    }
    ctx->pc = 0x17C3A4u;
    // 0x17c3a4: 0x126a000c
    ctx->pc = 0x17C3A4u;
    {
        const bool branch_taken_0x17c3a4 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 10));
        ctx->pc = 0x17C3A8u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x17c3a4) {
            ctx->pc = 0x17C3D8u;
            goto label_17c3d8;
        }
    }
    ctx->pc = 0x17C3ACu;
    // 0x17c3ac: 0x10000013
    ctx->pc = 0x17C3ACu;
    {
        const bool branch_taken_0x17c3ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C3B0u;
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
        if (branch_taken_0x17c3ac) {
            ctx->pc = 0x17C3FCu;
            goto label_17c3fc;
        }
    }
    ctx->pc = 0x17C3B4u;
    // 0x17c3b4: 0x0
    ctx->pc = 0x17c3b4u;
    // NOP
label_17c3b8:
    // 0x17c3b8: 0xc05f164
    ctx->pc = 0x17C3B8u;
    SET_GPR_U32(ctx, 31, 0x17C3C0u);
    ctx->pc = 0x17C590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C590_0x17c590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C3C0u; }
    }
    if (ctx->pc != 0x17C3C0u) { return; }
    ctx->pc = 0x17C3C0u;
    // 0x17c3c0: 0x8e26003c
    ctx->pc = 0x17c3c0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x17c3c4: 0x3a0202d
    ctx->pc = 0x17c3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c3c8: 0xc0524b0
    ctx->pc = 0x17C3C8u;
    SET_GPR_U32(ctx, 31, 0x17C3D0u);
    ctx->pc = 0x17C3CCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1492C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001492C0_0x1492c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C3D0u; }
    }
    if (ctx->pc != 0x17C3D0u) { return; }
    ctx->pc = 0x17C3D0u;
    // 0x17c3d0: 0x10000009
    ctx->pc = 0x17C3D0u;
    {
        const bool branch_taken_0x17c3d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C3D4u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x17c3d0) {
            ctx->pc = 0x17C3F8u;
            goto label_17c3f8;
        }
    }
    ctx->pc = 0x17C3D8u;
label_17c3d8:
    // 0x17c3d8: 0x2406000d
    ctx->pc = 0x17c3d8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 13));
    // 0x17c3dc: 0xc05f164
    ctx->pc = 0x17C3DCu;
    SET_GPR_U32(ctx, 31, 0x17C3E4u);
    ctx->pc = 0x17C3E0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17C590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C590_0x17c590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C3E4u; }
    }
    if (ctx->pc != 0x17C3E4u) { return; }
    ctx->pc = 0x17C3E4u;
    // 0x17c3e4: 0x8e26003c
    ctx->pc = 0x17c3e4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x17c3e8: 0x3a0202d
    ctx->pc = 0x17c3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c3ec: 0xc0524b2
    ctx->pc = 0x17C3ECu;
    SET_GPR_U32(ctx, 31, 0x17C3F4u);
    ctx->pc = 0x17C3F0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1492C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001492C8_0x1492c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C3F4u; }
    }
    if (ctx->pc != 0x17C3F4u) { return; }
    ctx->pc = 0x17C3F4u;
    // 0x17c3f4: 0xdfb00040
    ctx->pc = 0x17c3f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_17c3f8:
    // 0x17c3f8: 0xdfb10048
    ctx->pc = 0x17c3f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_17c3fc:
    // 0x17c3fc: 0xdfb20050
    ctx->pc = 0x17c3fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17c400: 0xdfb30058
    ctx->pc = 0x17c400u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x17c404: 0xdfb40060
    ctx->pc = 0x17c404u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17c408: 0xdfb50068
    ctx->pc = 0x17c408u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17c40c: 0xdfb60070
    ctx->pc = 0x17c40cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17c410: 0xdfbf0078
    ctx->pc = 0x17c410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17c414: 0x3e00008
    ctx->pc = 0x17C414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C418u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17C358u: goto label_17c358;
            case 0x17C3B8u: goto label_17c3b8;
            case 0x17C3D8u: goto label_17c3d8;
            case 0x17C3F8u: goto label_17c3f8;
            case 0x17C3FCu: goto label_17c3fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17C41Cu;
    // 0x17c41c: 0x0
    ctx->pc = 0x17c41cu;
    // NOP
}
