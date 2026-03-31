#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0010A380
// Address: 0x10a380 - 0x10a448
void sub_0010A380_0x10a380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10a380u;

    // 0x10a380: 0x44066000
    ctx->pc = 0x10a380u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[12]);
    // 0x10a384: 0x27bdfff0
    ctx->pc = 0x10a384u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10a388: 0xffbf0000
    ctx->pc = 0x10a388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10a38c: 0xe7b40008
    ctx->pc = 0x10a38cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x10a390: 0x3c027fff
    ctx->pc = 0x10a390u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x10a394: 0x3442ffff
    ctx->pc = 0x10a394u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x10a398: 0x3c03007f
    ctx->pc = 0x10a398u;
    SET_GPR_U32(ctx, 3, ((uint32_t)127 << 16));
    // 0x10a39c: 0xc21024
    ctx->pc = 0x10a39cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x10a3a0: 0x3463ffff
    ctx->pc = 0x10a3a0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x10a3a4: 0x22dc2
    ctx->pc = 0x10a3a4u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 2), 23));
    // 0x10a3a8: 0x62182b
    ctx->pc = 0x10a3a8u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10a3ac: 0x46006006
    ctx->pc = 0x10a3acu;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x10a3b0: 0x10600021
    ctx->pc = 0x10A3B0u;
    {
        const bool branch_taken_0x10a3b0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x10A3B4u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        if (branch_taken_0x10a3b0) {
            ctx->pc = 0x10A438u;
            goto label_10a438;
        }
    }
    ctx->pc = 0x10A3B8u;
    // 0x10a3b8: 0x28a20100
    ctx->pc = 0x10a3b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 256));
    // 0x10a3bc: 0x14400006
    ctx->pc = 0x10A3BCu;
    {
        const bool branch_taken_0x10a3bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10A3C0u;
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x10a3bc) {
            ctx->pc = 0x10A3D8u;
            goto label_10a3d8;
        }
    }
    ctx->pc = 0x10A3C4u;
    // 0x10a3c4: 0x3c017149
    ctx->pc = 0x10a3c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)29001 << 16));
    // 0x10a3c8: 0x3421f2c9
    ctx->pc = 0x10a3c8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 62153));
    // 0x10a3cc: 0x4481a000
    ctx->pc = 0x10a3ccu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x10a3d0: 0x10000016
    ctx->pc = 0x10A3D0u;
    {
        const bool branch_taken_0x10a3d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x10a3d0) {
            ctx->pc = 0x10A42Cu;
            goto label_10a42c;
        }
    }
    ctx->pc = 0x10A3D8u;
label_10a3d8:
    // 0x10a3d8: 0x18a00009
    ctx->pc = 0x10A3D8u;
    {
        const bool branch_taken_0x10a3d8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x10A3DCu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 50000));
        if (branch_taken_0x10a3d8) {
            ctx->pc = 0x10A400u;
            goto label_10a400;
        }
    }
    ctx->pc = 0x10A3E0u;
    // 0x10a3e0: 0x3c02807f
    ctx->pc = 0x10a3e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32895 << 16));
    // 0x10a3e4: 0x51dc0
    ctx->pc = 0x10a3e4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 23));
    // 0x10a3e8: 0x3442ffff
    ctx->pc = 0x10a3e8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x10a3ec: 0xc21024
    ctx->pc = 0x10a3ecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x10a3f0: 0x431025
    ctx->pc = 0x10a3f0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10a3f4: 0x44826000
    ctx->pc = 0x10a3f4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x10a3f8: 0x1000000f
    ctx->pc = 0x10A3F8u;
    {
        const bool branch_taken_0x10a3f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10A3FCu;
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x10a3f8) {
            ctx->pc = 0x10A438u;
            goto label_10a438;
        }
    }
    ctx->pc = 0x10A400u;
label_10a400:
    // 0x10a400: 0x44102a
    ctx->pc = 0x10a400u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x10a404: 0x10400006
    ctx->pc = 0x10A404u;
    {
        const bool branch_taken_0x10a404 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10A408u;
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x10a404) {
            ctx->pc = 0x10A420u;
            goto label_10a420;
        }
    }
    ctx->pc = 0x10A40Cu;
    // 0x10a40c: 0x3c017149
    ctx->pc = 0x10a40cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)29001 << 16));
    // 0x10a410: 0x3421f2c9
    ctx->pc = 0x10a410u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 62153));
    // 0x10a414: 0x4481a000
    ctx->pc = 0x10a414u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x10a418: 0x10000004
    ctx->pc = 0x10A418u;
    {
        const bool branch_taken_0x10a418 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x10a418) {
            ctx->pc = 0x10A42Cu;
            goto label_10a42c;
        }
    }
    ctx->pc = 0x10A420u;
label_10a420:
    // 0x10a420: 0x3c010da2
    ctx->pc = 0x10a420u;
    SET_GPR_U32(ctx, 1, ((uint32_t)3490 << 16));
    // 0x10a424: 0x3421425f
    ctx->pc = 0x10a424u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 16991));
    // 0x10a428: 0x4481a000
    ctx->pc = 0x10a428u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_10a42c:
    // 0x10a42c: 0xc0428ac
    ctx->pc = 0x10A42Cu;
    SET_GPR_U32(ctx, 31, 0x10A434u);
    ctx->pc = 0x10A430u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x10A2B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A2B0_0x10a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A434u; }
    }
    if (ctx->pc != 0x10A434u) { return; }
    ctx->pc = 0x10A434u;
    // 0x10a434: 0x46140002
    ctx->pc = 0x10a434u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_10a438:
    // 0x10a438: 0xdfbf0000
    ctx->pc = 0x10a438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a43c: 0xc7b40008
    ctx->pc = 0x10a43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10a440: 0x3e00008
    ctx->pc = 0x10A440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A444u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10A3D8u: goto label_10a3d8;
            case 0x10A400u: goto label_10a400;
            case 0x10A420u: goto label_10a420;
            case 0x10A42Cu: goto label_10a42c;
            case 0x10A438u: goto label_10a438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10A448u;
}
