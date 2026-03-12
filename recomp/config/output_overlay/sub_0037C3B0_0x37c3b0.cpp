#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0037C3B0
// Address: 0x37c3b0 - 0x37c470
void sub_0037C3B0_0x37c3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x37c3b0u;

    // 0x37c3b0: 0x27bdffe0
    ctx->pc = 0x37c3b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37c3b4: 0x3c010057
    ctx->pc = 0x37c3b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37c3b8: 0xffbf0010
    ctx->pc = 0x37c3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37c3bc: 0x7fb00000
    ctx->pc = 0x37c3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37c3c0: 0x8022bb88
    ctx->pc = 0x37c3c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294949768)));
    // 0x37c3c4: 0x28420009
    ctx->pc = 0x37c3c4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 9));
    // 0x37c3c8: 0x14400003
    ctx->pc = 0x37C3C8u;
    {
        const bool branch_taken_0x37c3c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37C3CCu;
        SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
        if (branch_taken_0x37c3c8) {
            ctx->pc = 0x37C3D8u;
            goto label_37c3d8;
        }
    }
    ctx->pc = 0x37C3D0u;
    // 0x37c3d0: 0x10000020
    ctx->pc = 0x37C3D0u;
    {
        const bool branch_taken_0x37c3d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37C3D4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37c3d0) {
            ctx->pc = 0x37C454u;
            goto label_37c454;
        }
    }
    ctx->pc = 0x37C3D8u;
label_37c3d8:
    // 0x37c3d8: 0x24020080
    ctx->pc = 0x37c3d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
    // 0x37c3dc: 0x8423c810
    ctx->pc = 0x37c3dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294952976)));
    // 0x37c3e0: 0x14620003
    ctx->pc = 0x37C3E0u;
    {
        const bool branch_taken_0x37c3e0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x37C3E4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37c3e0) {
            ctx->pc = 0x37C3F0u;
            goto label_37c3f0;
        }
    }
    ctx->pc = 0x37C3E8u;
    // 0x37c3e8: 0x1000001b
    ctx->pc = 0x37C3E8u;
    {
        const bool branch_taken_0x37c3e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37C3ECu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x37c3e8) {
            ctx->pc = 0x37C458u;
            goto label_37c458;
        }
    }
    ctx->pc = 0x37C3F0u;
label_37c3f0:
    // 0x37c3f0: 0x3c010057
    ctx->pc = 0x37c3f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37c3f4: 0x1000000f
    ctx->pc = 0x37C3F4u;
    {
        const bool branch_taken_0x37c3f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37C3F8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294952992)));
        if (branch_taken_0x37c3f4) {
            ctx->pc = 0x37C434u;
            goto label_37c434;
        }
    }
    ctx->pc = 0x37C3FCu;
label_37c3fc:
    // 0x37c3fc: 0x9083000f
    ctx->pc = 0x37c3fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 15)));
    // 0x37c400: 0x8022bb88
    ctx->pc = 0x37c400u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294949768)));
    // 0x37c404: 0x43082a
    ctx->pc = 0x37c404u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x37c408: 0x14200009
    ctx->pc = 0x37C408u;
    {
        const bool branch_taken_0x37c408 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x37c408) {
            ctx->pc = 0x37C430u;
            goto label_37c430;
        }
    }
    ctx->pc = 0x37C410u;
    // 0x37c410: 0xc0df0b0
    ctx->pc = 0x37C410u;
    SET_GPR_U32(ctx, 31, 0x37C418u);
    ctx->pc = 0x37C414u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->pc = 0x37C2C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0037C2C0_0x37c2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C418u; }
    }
    if (ctx->pc != 0x37C418u) { return; }
    ctx->pc = 0x37C418u;
    // 0x37c418: 0x14400003
    ctx->pc = 0x37C418u;
    {
        const bool branch_taken_0x37c418 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37C41Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37c418) {
            ctx->pc = 0x37C428u;
            goto label_37c428;
        }
    }
    ctx->pc = 0x37C420u;
    // 0x37c420: 0x1000000c
    ctx->pc = 0x37C420u;
    {
        const bool branch_taken_0x37c420 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37C424u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37c420) {
            ctx->pc = 0x37C454u;
            goto label_37c454;
        }
    }
    ctx->pc = 0x37C428u;
label_37c428:
    // 0x37c428: 0x10000002
    ctx->pc = 0x37C428u;
    {
        const bool branch_taken_0x37c428 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x37c428) {
            ctx->pc = 0x37C434u;
            goto label_37c434;
        }
    }
    ctx->pc = 0x37C430u;
label_37c430:
    // 0x37c430: 0x8c840000
    ctx->pc = 0x37c430u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_37c434:
    // 0x37c434: 0x1480fff1
    ctx->pc = 0x37C434u;
    {
        const bool branch_taken_0x37c434 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x37C438u;
        SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
        if (branch_taken_0x37c434) {
            ctx->pc = 0x37C3FCu;
            goto label_37c3fc;
        }
    }
    ctx->pc = 0x37C43Cu;
    // 0x37c43c: 0x3c010057
    ctx->pc = 0x37c43cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37c440: 0x24020001
    ctx->pc = 0x37c440u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37c444: 0x8023bb88
    ctx->pc = 0x37c444u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294949768)));
    // 0x37c448: 0x24630001
    ctx->pc = 0x37c448u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x37c44c: 0x3c010057
    ctx->pc = 0x37c44cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37c450: 0xa023bb88
    ctx->pc = 0x37c450u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294949768), (uint8_t)GPR_U32(ctx, 3));
label_37c454:
    // 0x37c454: 0xdfbf0010
    ctx->pc = 0x37c454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_37c458:
    // 0x37c458: 0x7bb00000
    ctx->pc = 0x37c458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37c45c: 0x3e00008
    ctx->pc = 0x37C45Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C460u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37C3D8u: goto label_37c3d8;
            case 0x37C3F0u: goto label_37c3f0;
            case 0x37C3FCu: goto label_37c3fc;
            case 0x37C428u: goto label_37c428;
            case 0x37C430u: goto label_37c430;
            case 0x37C434u: goto label_37c434;
            case 0x37C454u: goto label_37c454;
            case 0x37C458u: goto label_37c458;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37C464u;
    // 0x37c464: 0x0
    ctx->pc = 0x37c464u;
    // NOP
    // 0x37c468: 0x0
    ctx->pc = 0x37c468u;
    // NOP
    // 0x37c46c: 0x0
    ctx->pc = 0x37c46cu;
    // NOP
}
