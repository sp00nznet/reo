#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00371200
// Address: 0x371200 - 0x3713f0
void sub_00371200_0x371200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x371200u;

    // 0x371200: 0xc4850000
    ctx->pc = 0x371200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x371204: 0xc4a30000
    ctx->pc = 0x371204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x371208: 0xc4a10004
    ctx->pc = 0x371208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37120c: 0xc4840004
    ctx->pc = 0x37120cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x371210: 0xc4c20000
    ctx->pc = 0x371210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x371214: 0xc4c00004
    ctx->pc = 0x371214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371218: 0x46051981
    ctx->pc = 0x371218u;
    ctx->f[6] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x37121c: 0x460408c1
    ctx->pc = 0x37121cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x371220: 0x46032042
    ctx->pc = 0x371220u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x371224: 0x4606281a
    ctx->pc = 0x371224u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x371228: 0x4602309d
    ctx->pc = 0x371228u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[2]));
    // 0x37122c: 0x46020818
    ctx->pc = 0x37122cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x371230: 0x4600189d
    ctx->pc = 0x371230u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x371234: 0x46063002
    ctx->pc = 0x371234u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x371238: 0x46000047
    ctx->pc = 0x371238u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x37123c: 0x46031802
    ctx->pc = 0x37123cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x371240: 0x46000801
    ctx->pc = 0x371240u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x371244: 0x46001083
    ctx->pc = 0x371244u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
    // 0x371248: 0x46023002
    ctx->pc = 0x371248u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x37124c: 0x46002840
    ctx->pc = 0x37124cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x371250: 0xe4e10000
    ctx->pc = 0x371250u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x371254: 0xc4810004
    ctx->pc = 0x371254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371258: 0x46021802
    ctx->pc = 0x371258u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x37125c: 0x46000800
    ctx->pc = 0x37125cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x371260: 0x3e00008
    ctx->pc = 0x371260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371264u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3712ACu: goto label_3712ac;
            case 0x3712F4u: goto label_3712f4;
            case 0x37134Cu: goto label_37134c;
            case 0x3713B0u: goto label_3713b0;
            case 0x3713CCu: goto label_3713cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x371268u;
    // 0x371268: 0x0
    ctx->pc = 0x371268u;
    // NOP
    // 0x37126c: 0x0
    ctx->pc = 0x37126cu;
    // NOP
    // 0x371270: 0x27bdffc0
    ctx->pc = 0x371270u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x371274: 0xffbf0030
    ctx->pc = 0x371274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x371278: 0x44800800
    ctx->pc = 0x371278u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x37127c: 0x7fb10020
    ctx->pc = 0x37127cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x371280: 0x7fb00010
    ctx->pc = 0x371280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x371284: 0x80882d
    ctx->pc = 0x371284u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371288: 0xe7b40000
    ctx->pc = 0x371288u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x37128c: 0xc4a20000
    ctx->pc = 0x37128cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x371290: 0x46011034
    ctx->pc = 0x371290u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x371294: 0x45010005
    ctx->pc = 0x371294u;
    {
        const bool branch_taken_0x371294 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x371298u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x371294) {
            ctx->pc = 0x3712ACu;
            goto label_3712ac;
        }
    }
    ctx->pc = 0x37129Cu;
    // 0x37129c: 0xc6000008
    ctx->pc = 0x37129cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3712a0: 0x46010034
    ctx->pc = 0x3712a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3712a4: 0x45000049
    ctx->pc = 0x3712A4u;
    {
        const bool branch_taken_0x3712a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3712a4) {
            ctx->pc = 0x3713CCu;
            goto label_3713cc;
        }
    }
    ctx->pc = 0x3712ACu;
label_3712ac:
    // 0x3712ac: 0x4480a000
    ctx->pc = 0x3712acu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x3712b0: 0x0
    ctx->pc = 0x3712b0u;
    // NOP
    // 0x3712b4: 0x46141034
    ctx->pc = 0x3712b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3712b8: 0x4500000e
    ctx->pc = 0x3712B8u;
    {
        const bool branch_taken_0x3712b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3712b8) {
            ctx->pc = 0x3712F4u;
            goto label_3712f4;
        }
    }
    ctx->pc = 0x3712C0u;
    // 0x3712c0: 0xc6200000
    ctx->pc = 0x3712c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3712c4: 0x46020001
    ctx->pc = 0x3712c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3712c8: 0x4600a032
    ctx->pc = 0x3712c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3712cc: 0x45010009
    ctx->pc = 0x3712CCu;
    {
        const bool branch_taken_0x3712cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3712cc) {
            ctx->pc = 0x3712F4u;
            goto label_3712f4;
        }
    }
    ctx->pc = 0x3712D4u;
    // 0x3712d4: 0x0
    ctx->pc = 0x3712d4u;
    // NOP
    // 0x3712d8: 0x0
    ctx->pc = 0x3712d8u;
    // NOP
    // 0x3712dc: 0x46001303
    ctx->pc = 0x3712dcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[12] = ctx->f[2] / ctx->f[0];
    // 0x3712e0: 0x0
    ctx->pc = 0x3712e0u;
    // NOP
    // 0x3712e4: 0x0
    ctx->pc = 0x3712e4u;
    // NOP
    // 0x3712e8: 0xc064828
    ctx->pc = 0x3712E8u;
    SET_GPR_U32(ctx, 31, 0x3712F0u);
    ctx->pc = 0x1920A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1920A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3712F0u; }
        if (ctx->pc != 0x3712F0u) { return; }
    }
    ctx->pc = 0x3712F0u;
    // 0x3712f0: 0x46000506
    ctx->pc = 0x3712f0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3712f4:
    // 0x3712f4: 0xc6020008
    ctx->pc = 0x3712f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3712f8: 0x44800800
    ctx->pc = 0x3712f8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x3712fc: 0x0
    ctx->pc = 0x3712fcu;
    // NOP
    // 0x371300: 0x46011034
    ctx->pc = 0x371300u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x371304: 0x45000011
    ctx->pc = 0x371304u;
    {
        const bool branch_taken_0x371304 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x371304) {
            ctx->pc = 0x37134Cu;
            goto label_37134c;
        }
    }
    ctx->pc = 0x37130Cu;
    // 0x37130c: 0xc6200008
    ctx->pc = 0x37130cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371310: 0x46020001
    ctx->pc = 0x371310u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x371314: 0x46000832
    ctx->pc = 0x371314u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x371318: 0x4501000c
    ctx->pc = 0x371318u;
    {
        const bool branch_taken_0x371318 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x371318) {
            ctx->pc = 0x37134Cu;
            goto label_37134c;
        }
    }
    ctx->pc = 0x371320u;
    // 0x371320: 0x0
    ctx->pc = 0x371320u;
    // NOP
    // 0x371324: 0x0
    ctx->pc = 0x371324u;
    // NOP
    // 0x371328: 0x46001303
    ctx->pc = 0x371328u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[12] = ctx->f[2] / ctx->f[0];
    // 0x37132c: 0x0
    ctx->pc = 0x37132cu;
    // NOP
    // 0x371330: 0x0
    ctx->pc = 0x371330u;
    // NOP
    // 0x371334: 0xc064828
    ctx->pc = 0x371334u;
    SET_GPR_U32(ctx, 31, 0x37133Cu);
    ctx->pc = 0x1920A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1920A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37133Cu; }
        if (ctx->pc != 0x37133Cu) { return; }
    }
    ctx->pc = 0x37133Cu;
    // 0x37133c: 0x4600a034
    ctx->pc = 0x37133cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x371340: 0x45000002
    ctx->pc = 0x371340u;
    {
        const bool branch_taken_0x371340 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x371340) {
            ctx->pc = 0x37134Cu;
            goto label_37134c;
        }
    }
    ctx->pc = 0x371348u;
    // 0x371348: 0x46000506
    ctx->pc = 0x371348u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_37134c:
    // 0x37134c: 0xc6210000
    ctx->pc = 0x37134cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371350: 0xc6020000
    ctx->pc = 0x371350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x371354: 0x44800000
    ctx->pc = 0x371354u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x371358: 0x0
    ctx->pc = 0x371358u;
    // NOP
    // 0x37135c: 0x46020841
    ctx->pc = 0x37135cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x371360: 0x4601a042
    ctx->pc = 0x371360u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x371364: 0x46011040
    ctx->pc = 0x371364u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x371368: 0xe6010000
    ctx->pc = 0x371368u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x37136c: 0xc6210004
    ctx->pc = 0x37136cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371370: 0xc6020004
    ctx->pc = 0x371370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x371374: 0x46020841
    ctx->pc = 0x371374u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x371378: 0x4601a042
    ctx->pc = 0x371378u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x37137c: 0x46011040
    ctx->pc = 0x37137cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x371380: 0xe6010004
    ctx->pc = 0x371380u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x371384: 0xc6210008
    ctx->pc = 0x371384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371388: 0xc6020008
    ctx->pc = 0x371388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37138c: 0x46020841
    ctx->pc = 0x37138cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x371390: 0x4601a042
    ctx->pc = 0x371390u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x371394: 0x46011040
    ctx->pc = 0x371394u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x371398: 0xe6010008
    ctx->pc = 0x371398u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x37139c: 0xc6010000
    ctx->pc = 0x37139cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3713a0: 0x46000834
    ctx->pc = 0x3713a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3713a4: 0x45000002
    ctx->pc = 0x3713A4u;
    {
        const bool branch_taken_0x3713a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3713a4) {
            ctx->pc = 0x3713B0u;
            goto label_3713b0;
        }
    }
    ctx->pc = 0x3713ACu;
    // 0x3713ac: 0xe6000000
    ctx->pc = 0x3713acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_3713b0:
    // 0x3713b0: 0xc6010008
    ctx->pc = 0x3713b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3713b4: 0x44800000
    ctx->pc = 0x3713b4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x3713b8: 0x0
    ctx->pc = 0x3713b8u;
    // NOP
    // 0x3713bc: 0x46000834
    ctx->pc = 0x3713bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3713c0: 0x45000002
    ctx->pc = 0x3713C0u;
    {
        const bool branch_taken_0x3713c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3713c0) {
            ctx->pc = 0x3713CCu;
            goto label_3713cc;
        }
    }
    ctx->pc = 0x3713C8u;
    // 0x3713c8: 0xe6000008
    ctx->pc = 0x3713c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3713cc:
    // 0x3713cc: 0xdfbf0030
    ctx->pc = 0x3713ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3713d0: 0xc7b40000
    ctx->pc = 0x3713d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3713d4: 0x7bb10020
    ctx->pc = 0x3713d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3713d8: 0x7bb00010
    ctx->pc = 0x3713d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3713dc: 0x3e00008
    ctx->pc = 0x3713DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3713E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3712ACu: goto label_3712ac;
            case 0x3712F4u: goto label_3712f4;
            case 0x37134Cu: goto label_37134c;
            case 0x3713B0u: goto label_3713b0;
            case 0x3713CCu: goto label_3713cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3713E4u;
    // 0x3713e4: 0x0
    ctx->pc = 0x3713e4u;
    // NOP
    // 0x3713e8: 0x0
    ctx->pc = 0x3713e8u;
    // NOP
    // 0x3713ec: 0x0
    ctx->pc = 0x3713ecu;
    // NOP
}
