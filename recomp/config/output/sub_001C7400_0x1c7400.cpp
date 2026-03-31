#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C7400
// Address: 0x1c7400 - 0x1c7510
void sub_001C7400_0x1c7400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c7400u;

    // 0x1c7400: 0x27bdffd0
    ctx->pc = 0x1c7400u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c7404: 0x3c010033
    ctx->pc = 0x1c7404u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c7408: 0xffbf0020
    ctx->pc = 0x1c7408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c740c: 0x7fb10010
    ctx->pc = 0x1c740cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c7410: 0x7fb00000
    ctx->pc = 0x1c7410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c7414: 0xc42251e0
    ctx->pc = 0x1c7414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 20960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c7418: 0x3c010033
    ctx->pc = 0x1c7418u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c741c: 0xc4215064
    ctx->pc = 0x1c741cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 20580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7420: 0x3c010033
    ctx->pc = 0x1c7420u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c7424: 0xc420af20
    ctx->pc = 0x1c7424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294946592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7428: 0x46011040
    ctx->pc = 0x1c7428u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1c742c: 0x3c010033
    ctx->pc = 0x1c742cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c7430: 0xe42151e0
    ctx->pc = 0x1c7430u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20960), bits); }
    // 0x1c7434: 0x46000846
    ctx->pc = 0x1c7434u;
    ctx->f[1] = FPU_MOV_S(ctx->f[1]);
    // 0x1c7438: 0x46000834
    ctx->pc = 0x1c7438u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c743c: 0x45000024
    ctx->pc = 0x1C743Cu;
    {
        const bool branch_taken_0x1c743c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C7440u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c743c) {
            ctx->pc = 0x1C74D0u;
            goto label_1c74d0;
        }
    }
    ctx->pc = 0x1C7444u;
    // 0x1c7444: 0x1000002b
    ctx->pc = 0x1C7444u;
    {
        const bool branch_taken_0x1c7444 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C7448u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c7444) {
            ctx->pc = 0x1C74F4u;
            goto label_1c74f4;
        }
    }
    ctx->pc = 0x1C744Cu;
label_1c744c:
    // 0x1c744c: 0x3c040033
    ctx->pc = 0x1c744cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
    // 0x1c7450: 0xc071f30
    ctx->pc = 0x1C7450u;
    SET_GPR_U32(ctx, 31, 0x1C7458u);
    ctx->pc = 0x1C7454u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16368));
    ctx->pc = 0x1C7CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7CC0_0x1c7cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7458u; }
    }
    if (ctx->pc != 0x1C7458u) { return; }
    ctx->pc = 0x1C7458u;
    // 0x1c7458: 0x40202d
    ctx->pc = 0x1c7458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c745c: 0xc072f18
    ctx->pc = 0x1C745Cu;
    SET_GPR_U32(ctx, 31, 0x1C7464u);
    ctx->pc = 0x1C7460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CBC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CBC60_0x1cbc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7464u; }
    }
    if (ctx->pc != 0x1C7464u) { return; }
    ctx->pc = 0x1C7464u;
    // 0x1c7464: 0x4410014
    ctx->pc = 0x1C7464u;
    {
        const bool branch_taken_0x1c7464 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1C7468u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c7464) {
            ctx->pc = 0x1C74B8u;
            goto label_1c74b8;
        }
    }
    ctx->pc = 0x1C746Cu;
    // 0x1c746c: 0x24040002
    ctx->pc = 0x1c746cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c7470: 0xc071eb0
    ctx->pc = 0x1C7470u;
    SET_GPR_U32(ctx, 31, 0x1C7478u);
    ctx->pc = 0x1C7474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C7AC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7AC0_0x1c7ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7478u; }
    }
    if (ctx->pc != 0x1C7478u) { return; }
    ctx->pc = 0x1C7478u;
    // 0x1c7478: 0x3c010033
    ctx->pc = 0x1c7478u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c747c: 0x24020004
    ctx->pc = 0x1c747cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c7480: 0x942351b8
    ctx->pc = 0x1c7480u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 20920)));
    // 0x1c7484: 0x3c010033
    ctx->pc = 0x1c7484u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c7488: 0xac2251b0
    ctx->pc = 0x1c7488u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20912), GPR_U32(ctx, 2));
    // 0x1c748c: 0x3c010023
    ctx->pc = 0x1c748cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1c7490: 0x8c225f58
    ctx->pc = 0x1c7490u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 24408)));
    // 0x1c7494: 0x62102a
    ctx->pc = 0x1c7494u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x1c7498: 0x14400005
    ctx->pc = 0x1C7498u;
    {
        const bool branch_taken_0x1c7498 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C749Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1c7498) {
            ctx->pc = 0x1C74B0u;
            goto label_1c74b0;
        }
    }
    ctx->pc = 0x1C74A0u;
    // 0x1c74a0: 0x24020010
    ctx->pc = 0x1c74a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c74a4: 0x3c010033
    ctx->pc = 0x1c74a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c74a8: 0xac2251b0
    ctx->pc = 0x1c74a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20912), GPR_U32(ctx, 2));
    // 0x1c74ac: 0x2402ffff
    ctx->pc = 0x1c74acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c74b0:
    // 0x1c74b0: 0x10000011
    ctx->pc = 0x1C74B0u;
    {
        const bool branch_taken_0x1c74b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C74B4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1c74b0) {
            ctx->pc = 0x1C74F8u;
            goto label_1c74f8;
        }
    }
    ctx->pc = 0x1C74B8u;
label_1c74b8:
    // 0x1c74b8: 0x1840000a
    ctx->pc = 0x1C74B8u;
    {
        const bool branch_taken_0x1c74b8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1C74BCu;
        SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
        if (branch_taken_0x1c74b8) {
            ctx->pc = 0x1C74E4u;
            goto label_1c74e4;
        }
    }
    ctx->pc = 0x1C74C0u;
    // 0x1c74c0: 0x220282d
    ctx->pc = 0x1c74c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c74c4: 0x24843ff0
    ctx->pc = 0x1c74c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16368));
    // 0x1c74c8: 0xc071f60
    ctx->pc = 0x1C74C8u;
    SET_GPR_U32(ctx, 31, 0x1C74D0u);
    ctx->pc = 0x1C74CCu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->pc = 0x1C7D80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7D80_0x1c7d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C74D0u; }
    }
    if (ctx->pc != 0x1C74D0u) { return; }
    ctx->pc = 0x1C74D0u;
label_1c74d0:
    // 0x1c74d0: 0x3c040033
    ctx->pc = 0x1c74d0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
    // 0x1c74d4: 0xc071f24
    ctx->pc = 0x1C74D4u;
    SET_GPR_U32(ctx, 31, 0x1C74DCu);
    ctx->pc = 0x1C74D8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16368));
    ctx->pc = 0x1C7C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7C90_0x1c7c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C74DCu; }
    }
    if (ctx->pc != 0x1C74DCu) { return; }
    ctx->pc = 0x1C74DCu;
    // 0x1c74dc: 0x1440ffdb
    ctx->pc = 0x1C74DCu;
    {
        const bool branch_taken_0x1c74dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C74E0u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c74dc) {
            ctx->pc = 0x1C744Cu;
            goto label_1c744c;
        }
    }
    ctx->pc = 0x1C74E4u;
label_1c74e4:
    // 0x1c74e4: 0x1a000003
    ctx->pc = 0x1C74E4u;
    {
        const bool branch_taken_0x1c74e4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1C74E8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c74e4) {
            ctx->pc = 0x1C74F4u;
            goto label_1c74f4;
        }
    }
    ctx->pc = 0x1C74ECu;
    // 0x1c74ec: 0x3c010033
    ctx->pc = 0x1c74ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c74f0: 0xac2051e0
    ctx->pc = 0x1c74f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20960), GPR_U32(ctx, 0));
label_1c74f4:
    // 0x1c74f4: 0xdfbf0020
    ctx->pc = 0x1c74f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c74f8:
    // 0x1c74f8: 0x7bb10010
    ctx->pc = 0x1c74f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c74fc: 0x7bb00000
    ctx->pc = 0x1c74fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7500: 0x3e00008
    ctx->pc = 0x1C7500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7504u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C744Cu: goto label_1c744c;
            case 0x1C74B0u: goto label_1c74b0;
            case 0x1C74B8u: goto label_1c74b8;
            case 0x1C74D0u: goto label_1c74d0;
            case 0x1C74E4u: goto label_1c74e4;
            case 0x1C74F4u: goto label_1c74f4;
            case 0x1C74F8u: goto label_1c74f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C7508u;
    // 0x1c7508: 0x0
    ctx->pc = 0x1c7508u;
    // NOP
    // 0x1c750c: 0x0
    ctx->pc = 0x1c750cu;
    // NOP
}
