#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BC3A0
// Address: 0x1bc3a0 - 0x1bc4f0
void sub_001BC3A0_0x1bc3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1bc3a0u;

    // 0x1bc3a0: 0x3c010031
    ctx->pc = 0x1bc3a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1bc3a4: 0x3c060031
    ctx->pc = 0x1bc3a4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)49 << 16));
    // 0x1bc3a8: 0x902565c0
    ctx->pc = 0x1bc3a8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 26048)));
    // 0x1bc3ac: 0x24040002
    ctx->pc = 0x1bc3acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bc3b0: 0x10a4004c
    ctx->pc = 0x1BC3B0u;
    {
        const bool branch_taken_0x1bc3b0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 4));
        ctx->pc = 0x1BC3B4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 26048));
        if (branch_taken_0x1bc3b0) {
            ctx->pc = 0x1BC4E4u;
            goto label_1bc4e4;
        }
    }
    ctx->pc = 0x1BC3B8u;
    // 0x1bc3b8: 0x24030001
    ctx->pc = 0x1bc3b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc3bc: 0x10a30005
    ctx->pc = 0x1BC3BCu;
    {
        const bool branch_taken_0x1bc3bc = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x1bc3bc) {
            ctx->pc = 0x1BC3D4u;
            goto label_1bc3d4;
        }
    }
    ctx->pc = 0x1BC3C4u;
    // 0x1bc3c4: 0x10a00047
    ctx->pc = 0x1BC3C4u;
    {
        const bool branch_taken_0x1bc3c4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bc3c4) {
            ctx->pc = 0x1BC4E4u;
            goto label_1bc4e4;
        }
    }
    ctx->pc = 0x1BC3CCu;
    // 0x1bc3cc: 0x10000045
    ctx->pc = 0x1BC3CCu;
    {
        const bool branch_taken_0x1bc3cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bc3cc) {
            ctx->pc = 0x1BC4E4u;
            goto label_1bc4e4;
        }
    }
    ctx->pc = 0x1BC3D4u;
label_1bc3d4:
    // 0x1bc3d4: 0x8cc30004
    ctx->pc = 0x1bc3d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1bc3d8: 0x14600022
    ctx->pc = 0x1BC3D8u;
    {
        const bool branch_taken_0x1bc3d8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1bc3d8) {
            ctx->pc = 0x1BC464u;
            goto label_1bc464;
        }
    }
    ctx->pc = 0x1BC3E0u;
    // 0x1bc3e0: 0xc4c20018
    ctx->pc = 0x1bc3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bc3e4: 0xc4c10014
    ctx->pc = 0x1bc3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bc3e8: 0x44800000
    ctx->pc = 0x1bc3e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1bc3ec: 0x0
    ctx->pc = 0x1bc3ecu;
    // NOP
    // 0x1bc3f0: 0x46020841
    ctx->pc = 0x1bc3f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1bc3f4: 0x46000836
    ctx->pc = 0x1bc3f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bc3f8: 0x45000003
    ctx->pc = 0x1BC3F8u;
    {
        const bool branch_taken_0x1bc3f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BC3FCu;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
        if (branch_taken_0x1bc3f8) {
            ctx->pc = 0x1BC408u;
            goto label_1bc408;
        }
    }
    ctx->pc = 0x1BC400u;
    // 0x1bc400: 0xa0c00000
    ctx->pc = 0x1bc400u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bc404: 0xe4c00014
    ctx->pc = 0x1bc404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
label_1bc408:
    // 0x1bc408: 0xc4c10014
    ctx->pc = 0x1bc408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bc40c: 0x3c03437f
    ctx->pc = 0x1bc40cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)17279 << 16));
    // 0x1bc410: 0x44831000
    ctx->pc = 0x1bc410u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
    // 0x1bc414: 0x3c034f00
    ctx->pc = 0x1bc414u;
    SET_GPR_U32(ctx, 3, ((uint32_t)20224 << 16));
    // 0x1bc418: 0x44830000
    ctx->pc = 0x1bc418u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1bc41c: 0x0
    ctx->pc = 0x1bc41cu;
    // NOP
    // 0x1bc420: 0x46011042
    ctx->pc = 0x1bc420u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1bc424: 0x46010036
    ctx->pc = 0x1bc424u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bc428: 0x45010005
    ctx->pc = 0x1BC428u;
    {
        const bool branch_taken_0x1bc428 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bc428) {
            ctx->pc = 0x1BC440u;
            goto label_1bc440;
        }
    }
    ctx->pc = 0x1BC430u;
    // 0x1bc430: 0x46000864
    ctx->pc = 0x1bc430u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1bc434: 0x44040800
    ctx->pc = 0x1bc434u;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[1]);
    // 0x1bc438: 0x10000008
    ctx->pc = 0x1BC438u;
    {
        const bool branch_taken_0x1bc438 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BC43Cu;
        WRITE8(ADD32(GPR_U32(ctx, 6), 16), (uint8_t)GPR_U32(ctx, 4));
        if (branch_taken_0x1bc438) {
            ctx->pc = 0x1BC45Cu;
            goto label_1bc45c;
        }
    }
    ctx->pc = 0x1BC440u;
label_1bc440:
    // 0x1bc440: 0x46000841
    ctx->pc = 0x1bc440u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1bc444: 0x3c038000
    ctx->pc = 0x1bc444u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x1bc448: 0x46000864
    ctx->pc = 0x1bc448u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1bc44c: 0x44040800
    ctx->pc = 0x1bc44cu;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[1]);
    // 0x1bc450: 0x0
    ctx->pc = 0x1bc450u;
    // NOP
    // 0x1bc454: 0x832025
    ctx->pc = 0x1bc454u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1bc458: 0xa0c40010
    ctx->pc = 0x1bc458u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 16), (uint8_t)GPR_U32(ctx, 4));
label_1bc45c:
    // 0x1bc45c: 0x10000021
    ctx->pc = 0x1BC45Cu;
    {
        const bool branch_taken_0x1bc45c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bc45c) {
            ctx->pc = 0x1BC4E4u;
            goto label_1bc4e4;
        }
    }
    ctx->pc = 0x1BC464u;
label_1bc464:
    // 0x1bc464: 0xc4c20018
    ctx->pc = 0x1bc464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bc468: 0x3c033f80
    ctx->pc = 0x1bc468u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1bc46c: 0xc4c10014
    ctx->pc = 0x1bc46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bc470: 0x44830000
    ctx->pc = 0x1bc470u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1bc474: 0x0
    ctx->pc = 0x1bc474u;
    // NOP
    // 0x1bc478: 0x46020840
    ctx->pc = 0x1bc478u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1bc47c: 0x46000834
    ctx->pc = 0x1bc47cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bc480: 0x45010003
    ctx->pc = 0x1BC480u;
    {
        const bool branch_taken_0x1bc480 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BC484u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
        if (branch_taken_0x1bc480) {
            ctx->pc = 0x1BC490u;
            goto label_1bc490;
        }
    }
    ctx->pc = 0x1BC488u;
    // 0x1bc488: 0xa0c40000
    ctx->pc = 0x1bc488u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bc48c: 0xe4c00014
    ctx->pc = 0x1bc48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
label_1bc490:
    // 0x1bc490: 0xc4c10014
    ctx->pc = 0x1bc490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bc494: 0x3c03437f
    ctx->pc = 0x1bc494u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17279 << 16));
    // 0x1bc498: 0x44831000
    ctx->pc = 0x1bc498u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
    // 0x1bc49c: 0x3c034f00
    ctx->pc = 0x1bc49cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)20224 << 16));
    // 0x1bc4a0: 0x44830000
    ctx->pc = 0x1bc4a0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1bc4a4: 0x0
    ctx->pc = 0x1bc4a4u;
    // NOP
    // 0x1bc4a8: 0x46011042
    ctx->pc = 0x1bc4a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1bc4ac: 0x46010036
    ctx->pc = 0x1bc4acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bc4b0: 0x45010005
    ctx->pc = 0x1BC4B0u;
    {
        const bool branch_taken_0x1bc4b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bc4b0) {
            ctx->pc = 0x1BC4C8u;
            goto label_1bc4c8;
        }
    }
    ctx->pc = 0x1BC4B8u;
    // 0x1bc4b8: 0x46000864
    ctx->pc = 0x1bc4b8u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1bc4bc: 0x44040800
    ctx->pc = 0x1bc4bcu;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[1]);
    // 0x1bc4c0: 0x10000008
    ctx->pc = 0x1BC4C0u;
    {
        const bool branch_taken_0x1bc4c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BC4C4u;
        WRITE8(ADD32(GPR_U32(ctx, 6), 16), (uint8_t)GPR_U32(ctx, 4));
        if (branch_taken_0x1bc4c0) {
            ctx->pc = 0x1BC4E4u;
            goto label_1bc4e4;
        }
    }
    ctx->pc = 0x1BC4C8u;
label_1bc4c8:
    // 0x1bc4c8: 0x46000841
    ctx->pc = 0x1bc4c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1bc4cc: 0x3c038000
    ctx->pc = 0x1bc4ccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x1bc4d0: 0x46000864
    ctx->pc = 0x1bc4d0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1bc4d4: 0x44040800
    ctx->pc = 0x1bc4d4u;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[1]);
    // 0x1bc4d8: 0x0
    ctx->pc = 0x1bc4d8u;
    // NOP
    // 0x1bc4dc: 0x832025
    ctx->pc = 0x1bc4dcu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1bc4e0: 0xa0c40010
    ctx->pc = 0x1bc4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 16), (uint8_t)GPR_U32(ctx, 4));
label_1bc4e4:
    // 0x1bc4e4: 0x3e00008
    ctx->pc = 0x1BC4E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC3D4u: goto label_1bc3d4;
            case 0x1BC408u: goto label_1bc408;
            case 0x1BC440u: goto label_1bc440;
            case 0x1BC45Cu: goto label_1bc45c;
            case 0x1BC464u: goto label_1bc464;
            case 0x1BC490u: goto label_1bc490;
            case 0x1BC4C8u: goto label_1bc4c8;
            case 0x1BC4E4u: goto label_1bc4e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BC4ECu;
    // 0x1bc4ec: 0x0
    ctx->pc = 0x1bc4ecu;
    // NOP
}
