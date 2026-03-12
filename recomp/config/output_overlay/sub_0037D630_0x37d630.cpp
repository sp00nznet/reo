#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0037D630
// Address: 0x37d630 - 0x37d9f0
void sub_0037D630_0x37d630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x37d630u;

    // 0x37d630: 0x27bdffd0
    ctx->pc = 0x37d630u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37d634: 0x3c06003c
    ctx->pc = 0x37d634u;
    SET_GPR_U32(ctx, 6, ((uint32_t)60 << 16));
    // 0x37d638: 0xffbf0020
    ctx->pc = 0x37d638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x37d63c: 0x3c01003c
    ctx->pc = 0x37d63cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x37d640: 0x7fb00010
    ctx->pc = 0x37d640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37d644: 0x80282d
    ctx->pc = 0x37d644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d648: 0xe7b7000c
    ctx->pc = 0x37d648u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x37d64c: 0xe7b60008
    ctx->pc = 0x37d64cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x37d650: 0xe7b50004
    ctx->pc = 0x37d650u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x37d654: 0xe7b40000
    ctx->pc = 0x37d654u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x37d658: 0x8c228500
    ctx->pc = 0x37d658u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294935808)));
    // 0x37d65c: 0x4400004
    ctx->pc = 0x37D65Cu;
    {
        const bool branch_taken_0x37d65c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x37D660u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294935728));
        if (branch_taken_0x37d65c) {
            ctx->pc = 0x37D670u;
            goto label_37d670;
        }
    }
    ctx->pc = 0x37D664u;
    // 0x37d664: 0x44820000
    ctx->pc = 0x37d664u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x37d668: 0x10000008
    ctx->pc = 0x37D668u;
    {
        const bool branch_taken_0x37d668 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37D66Cu;
        ctx->f[22] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x37d668) {
            ctx->pc = 0x37D68Cu;
            goto label_37d68c;
        }
    }
    ctx->pc = 0x37D670u;
label_37d670:
    // 0x37d670: 0x21842
    ctx->pc = 0x37d670u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 1));
    // 0x37d674: 0x30420001
    ctx->pc = 0x37d674u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x37d678: 0x621825
    ctx->pc = 0x37d678u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37d67c: 0x44830000
    ctx->pc = 0x37d67cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x37d680: 0x0
    ctx->pc = 0x37d680u;
    // NOP
    // 0x37d684: 0x468005a0
    ctx->pc = 0x37d684u;
    ctx->f[22] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x37d688: 0x4616b580
    ctx->pc = 0x37d688u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[22]);
label_37d68c:
    // 0x37d68c: 0x3c01004c
    ctx->pc = 0x37d68cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x37d690: 0x90249d19
    ctx->pc = 0x37d690u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294941977)));
    // 0x37d694: 0x41080
    ctx->pc = 0x37d694u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x37d698: 0x3c01004c
    ctx->pc = 0x37d698u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x37d69c: 0x442021
    ctx->pc = 0x37d69cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37d6a0: 0x9023ae8a
    ctx->pc = 0x37d6a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946442)));
    // 0x37d6a4: 0x42040
    ctx->pc = 0x37d6a4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
    // 0x37d6a8: 0x44840000
    ctx->pc = 0x37d6a8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 4);
    // 0x37d6ac: 0x0
    ctx->pc = 0x37d6acu;
    // NOP
    // 0x37d6b0: 0x46800560
    ctx->pc = 0x37d6b0u;
    ctx->f[21] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x37d6b4: 0x4610004
    ctx->pc = 0x37D6B4u;
    {
        const bool branch_taken_0x37d6b4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x37D6B8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 3));
        if (branch_taken_0x37d6b4) {
            ctx->pc = 0x37D6C8u;
            goto label_37d6c8;
        }
    }
    ctx->pc = 0x37D6BCu;
    // 0x37d6bc: 0x10400003
    ctx->pc = 0x37D6BCu;
    {
        const bool branch_taken_0x37d6bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x37D6C0u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
        if (branch_taken_0x37d6bc) {
            ctx->pc = 0x37D6CCu;
            goto label_37d6cc;
        }
    }
    ctx->pc = 0x37D6C4u;
    // 0x37d6c4: 0x2442fffc
    ctx->pc = 0x37d6c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
label_37d6c8:
    // 0x37d6c8: 0x21880
    ctx->pc = 0x37d6c8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
label_37d6cc:
    // 0x37d6cc: 0x3c01003c
    ctx->pc = 0x37d6ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x37d6d0: 0x3c020039
    ctx->pc = 0x37d6d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)57 << 16));
    // 0x37d6d4: 0x2442a540
    ctx->pc = 0x37d6d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944064));
    // 0x37d6d8: 0x431021
    ctx->pc = 0x37d6d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37d6dc: 0xc4570000
    ctx->pc = 0x37d6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x37d6e0: 0x4480a000
    ctx->pc = 0x37d6e0u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x37d6e4: 0x902284f6
    ctx->pc = 0x37d6e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294935798)));
    // 0x37d6e8: 0x1040000c
    ctx->pc = 0x37D6E8u;
    {
        const bool branch_taken_0x37d6e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x37D6ECu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37d6e8) {
            ctx->pc = 0x37D71Cu;
            goto label_37d71c;
        }
    }
    ctx->pc = 0x37D6F0u;
    // 0x37d6f0: 0x90c20044
    ctx->pc = 0x37d6f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x37d6f4: 0x3c0343fa
    ctx->pc = 0x37d6f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17402 << 16));
    // 0x37d6f8: 0x4483a000
    ctx->pc = 0x37d6f8u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 3);
    // 0x37d6fc: 0x14400002
    ctx->pc = 0x37D6FCu;
    {
        const bool branch_taken_0x37d6fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37D700u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x37d6fc) {
            ctx->pc = 0x37D708u;
            goto label_37d708;
        }
    }
    ctx->pc = 0x37D704u;
    // 0x37d704: 0x305000ff
    ctx->pc = 0x37d704u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 2), 255));
label_37d708:
    // 0x37d708: 0x90c20045
    ctx->pc = 0x37d708u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 69)));
    // 0x37d70c: 0x14400004
    ctx->pc = 0x37D70Cu;
    {
        const bool branch_taken_0x37d70c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37D710u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37d70c) {
            ctx->pc = 0x37D720u;
            goto label_37d720;
        }
    }
    ctx->pc = 0x37D714u;
    // 0x37d714: 0x36020002
    ctx->pc = 0x37d714u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 16), 2));
    // 0x37d718: 0x305000ff
    ctx->pc = 0x37d718u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 2), 255));
label_37d71c:
    // 0x37d71c: 0x202d
    ctx->pc = 0x37d71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37d720:
    // 0x37d720: 0xc0df830
    ctx->pc = 0x37D720u;
    SET_GPR_U32(ctx, 31, 0x37D728u);
    ctx->pc = 0x37E0C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0037E0C0_0x37e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D728u; }
    }
    if (ctx->pc != 0x37D728u) { return; }
    ctx->pc = 0x37D728u;
    // 0x37d728: 0x4615b080
    ctx->pc = 0x37d728u;
    ctx->f[2] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
    // 0x37d72c: 0x320200ff
    ctx->pc = 0x37d72cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 255));
    // 0x37d730: 0x21880
    ctx->pc = 0x37d730u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x37d734: 0x3c020039
    ctx->pc = 0x37d734u;
    SET_GPR_U32(ctx, 2, ((uint32_t)57 << 16));
    // 0x37d738: 0x2442a520
    ctx->pc = 0x37d738u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944032));
    // 0x37d73c: 0x4602a080
    ctx->pc = 0x37d73cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    // 0x37d740: 0x431021
    ctx->pc = 0x37d740u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37d744: 0x4602b882
    ctx->pc = 0x37d744u;
    ctx->f[2] = FPU_MUL_S(ctx->f[23], ctx->f[2]);
    // 0x37d748: 0xc4410000
    ctx->pc = 0x37d748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37d74c: 0x46020002
    ctx->pc = 0x37d74cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x37d750: 0x46000b02
    ctx->pc = 0x37d750u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x37d754: 0x46006024
    ctx->pc = 0x37d754u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[12]);
    // 0x37d758: 0x44100000
    ctx->pc = 0x37d758u;
    SET_GPR_U32(ctx, 16, *(uint32_t*)&ctx->f[0]);
    // 0x37d75c: 0xc064880
    ctx->pc = 0x37D75Cu;
    SET_GPR_U32(ctx, 31, 0x37D764u);
    ctx->pc = 0x192200u;
    {
        auto targetFn = runtime->lookupFunction(0x192200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D764u; }
        if (ctx->pc != 0x37D764u) { return; }
    }
    ctx->pc = 0x37D764u;
    // 0x37d764: 0x3c023f00
    ctx->pc = 0x37d764u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x37d768: 0x44820800
    ctx->pc = 0x37d768u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x37d76c: 0x0
    ctx->pc = 0x37d76cu;
    // NOP
    // 0x37d770: 0x46010034
    ctx->pc = 0x37d770u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37d774: 0x45010003
    ctx->pc = 0x37D774u;
    {
        const bool branch_taken_0x37d774 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x37D778u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37d774) {
            ctx->pc = 0x37D784u;
            goto label_37d784;
        }
    }
    ctx->pc = 0x37D77Cu;
    // 0x37d77c: 0x26100001
    ctx->pc = 0x37d77cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x37d780: 0x200102d
    ctx->pc = 0x37d780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37d784:
    // 0x37d784: 0xdfbf0020
    ctx->pc = 0x37d784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37d788: 0x7bb00010
    ctx->pc = 0x37d788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37d78c: 0xc7b7000c
    ctx->pc = 0x37d78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x37d790: 0xc7b60008
    ctx->pc = 0x37d790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x37d794: 0xc7b50004
    ctx->pc = 0x37d794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x37d798: 0xc7b40000
    ctx->pc = 0x37d798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x37d79c: 0x3e00008
    ctx->pc = 0x37D79Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D7A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37D670u: goto label_37d670;
            case 0x37D68Cu: goto label_37d68c;
            case 0x37D6C8u: goto label_37d6c8;
            case 0x37D6CCu: goto label_37d6cc;
            case 0x37D708u: goto label_37d708;
            case 0x37D71Cu: goto label_37d71c;
            case 0x37D720u: goto label_37d720;
            case 0x37D784u: goto label_37d784;
            case 0x37D7E4u: goto label_37d7e4;
            case 0x37D81Cu: goto label_37d81c;
            case 0x37D878u: goto label_37d878;
            case 0x37D88Cu: goto label_37d88c;
            case 0x37D8D8u: goto label_37d8d8;
            case 0x37D914u: goto label_37d914;
            case 0x37D918u: goto label_37d918;
            case 0x37D92Cu: goto label_37d92c;
            case 0x37D978u: goto label_37d978;
            case 0x37D9E0u: goto label_37d9e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37D7A4u;
    // 0x37d7a4: 0x0
    ctx->pc = 0x37d7a4u;
    // NOP
    // 0x37d7a8: 0x0
    ctx->pc = 0x37d7a8u;
    // NOP
    // 0x37d7ac: 0x0
    ctx->pc = 0x37d7acu;
    // NOP
    // 0x37d7b0: 0x27bdffc0
    ctx->pc = 0x37d7b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37d7b4: 0x282d
    ctx->pc = 0x37d7b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d7b8: 0xffbf0030
    ctx->pc = 0x37d7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x37d7bc: 0x24060008
    ctx->pc = 0x37d7bcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    // 0x37d7c0: 0x7fb20020
    ctx->pc = 0x37d7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37d7c4: 0x7fb10010
    ctx->pc = 0x37d7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37d7c8: 0x80902d
    ctx->pc = 0x37d7c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d7cc: 0x7fb00000
    ctx->pc = 0x37d7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37d7d0: 0x3c11003c
    ctx->pc = 0x37d7d0u;
    SET_GPR_U32(ctx, 17, ((uint32_t)60 << 16));
    // 0x37d7d4: 0x263184b0
    ctx->pc = 0x37d7d4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294935728));
    // 0x37d7d8: 0xc041f1a
    ctx->pc = 0x37D7D8u;
    SET_GPR_U32(ctx, 31, 0x37D7E0u);
    ctx->pc = 0x37D7DCu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        auto targetFn = runtime->lookupFunction(0x107C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D7E0u; }
        if (ctx->pc != 0x37D7E0u) { return; }
    }
    ctx->pc = 0x37D7E0u;
    // 0x37d7e0: 0x282d
    ctx->pc = 0x37d7e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37d7e4:
    // 0x37d7e4: 0x5243c
    ctx->pc = 0x37d7e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 16));
    // 0x37d7e8: 0x24a30001
    ctx->pc = 0x37d7e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 1));
    // 0x37d7ec: 0x4243f
    ctx->pc = 0x37d7ecu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x37d7f0: 0x32c3c
    ctx->pc = 0x37d7f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x37d7f4: 0x42080
    ctx->pc = 0x37d7f4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x37d7f8: 0x52c3f
    ctx->pc = 0x37d7f8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x37d7fc: 0x2242021
    ctx->pc = 0x37d7fcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x37d800: 0x28a30008
    ctx->pc = 0x37d800u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 8));
    // 0x37d804: 0x8c840018
    ctx->pc = 0x37d804u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x37d808: 0x1460fff6
    ctx->pc = 0x37D808u;
    {
        const bool branch_taken_0x37d808 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x37D80Cu;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        if (branch_taken_0x37d808) {
            ctx->pc = 0x37D7E4u;
            goto label_37d7e4;
        }
    }
    ctx->pc = 0x37D810u;
    // 0x37d810: 0x1200001e
    ctx->pc = 0x37D810u;
    {
        const bool branch_taken_0x37d810 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x37D814u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 100));
        if (branch_taken_0x37d810) {
            ctx->pc = 0x37D88Cu;
            goto label_37d88c;
        }
    }
    ctx->pc = 0x37D818u;
    // 0x37d818: 0x24050001
    ctx->pc = 0x37d818u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_37d81c:
    // 0x37d81c: 0x51c3c
    ctx->pc = 0x37d81cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x37d820: 0x31c3f
    ctx->pc = 0x37d820u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x37d824: 0x2433021
    ctx->pc = 0x37d824u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x37d828: 0x31880
    ctx->pc = 0x37d828u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x37d82c: 0x2231821
    ctx->pc = 0x37d82cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x37d830: 0x8c640018
    ctx->pc = 0x37d830u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x37d834: 0x41880
    ctx->pc = 0x37d834u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x37d838: 0x642021
    ctx->pc = 0x37d838u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37d83c: 0x41880
    ctx->pc = 0x37d83cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x37d840: 0x831821
    ctx->pc = 0x37d840u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x37d844: 0x31880
    ctx->pc = 0x37d844u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x37d848: 0x70001b
    ctx->pc = 0x37d848u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 3) / divisor; ctx->hi = GPR_U32(ctx, 16) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,3); } }
    // 0x37d84c: 0x0
    ctx->pc = 0x37d84cu;
    // NOP
    // 0x37d850: 0x0
    ctx->pc = 0x37d850u;
    // NOP
    // 0x37d854: 0x1812
    ctx->pc = 0x37d854u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x37d858: 0xa0c30000
    ctx->pc = 0x37d858u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x37d85c: 0x90c30000
    ctx->pc = 0x37d85cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x37d860: 0xe31823
    ctx->pc = 0x37d860u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x37d864: 0x33c3c
    ctx->pc = 0x37d864u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 16));
    // 0x37d868: 0x73c3f
    ctx->pc = 0x37d868u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x37d86c: 0x4e10002
    ctx->pc = 0x37D86Cu;
    {
        const bool branch_taken_0x37d86c = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x37D870u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x37d86c) {
            ctx->pc = 0x37D878u;
            goto label_37d878;
        }
    }
    ctx->pc = 0x37D874u;
    // 0x37d874: 0x382d
    ctx->pc = 0x37d874u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37d878:
    // 0x37d878: 0x32c3c
    ctx->pc = 0x37d878u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x37d87c: 0x52c3f
    ctx->pc = 0x37d87cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x37d880: 0x28a30008
    ctx->pc = 0x37d880u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 8));
    // 0x37d884: 0x1460ffe5
    ctx->pc = 0x37D884u;
    {
        const bool branch_taken_0x37d884 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x37d884) {
            ctx->pc = 0x37D81Cu;
            goto label_37d81c;
        }
    }
    ctx->pc = 0x37D88Cu;
label_37d88c:
    // 0x37d88c: 0xa2470000
    ctx->pc = 0x37d88cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x37d890: 0xdfbf0030
    ctx->pc = 0x37d890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37d894: 0x7bb20020
    ctx->pc = 0x37d894u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37d898: 0x7bb10010
    ctx->pc = 0x37d898u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37d89c: 0x7bb00000
    ctx->pc = 0x37d89cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37d8a0: 0x3e00008
    ctx->pc = 0x37D8A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D8A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37D670u: goto label_37d670;
            case 0x37D68Cu: goto label_37d68c;
            case 0x37D6C8u: goto label_37d6c8;
            case 0x37D6CCu: goto label_37d6cc;
            case 0x37D708u: goto label_37d708;
            case 0x37D71Cu: goto label_37d71c;
            case 0x37D720u: goto label_37d720;
            case 0x37D784u: goto label_37d784;
            case 0x37D7E4u: goto label_37d7e4;
            case 0x37D81Cu: goto label_37d81c;
            case 0x37D878u: goto label_37d878;
            case 0x37D88Cu: goto label_37d88c;
            case 0x37D8D8u: goto label_37d8d8;
            case 0x37D914u: goto label_37d914;
            case 0x37D918u: goto label_37d918;
            case 0x37D92Cu: goto label_37d92c;
            case 0x37D978u: goto label_37d978;
            case 0x37D9E0u: goto label_37d9e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37D8A8u;
    // 0x37d8a8: 0x0
    ctx->pc = 0x37d8a8u;
    // NOP
    // 0x37d8ac: 0x0
    ctx->pc = 0x37d8acu;
    // NOP
    // 0x37d8b0: 0x27bdffd0
    ctx->pc = 0x37d8b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37d8b4: 0x3c01003c
    ctx->pc = 0x37d8b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x37d8b8: 0xffbf0020
    ctx->pc = 0x37d8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x37d8bc: 0x7fb10010
    ctx->pc = 0x37d8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37d8c0: 0x7fb00000
    ctx->pc = 0x37d8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37d8c4: 0x902284f6
    ctx->pc = 0x37d8c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294935798)));
    // 0x37d8c8: 0x10400018
    ctx->pc = 0x37D8C8u;
    {
        const bool branch_taken_0x37d8c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x37D8CCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37d8c8) {
            ctx->pc = 0x37D92Cu;
            goto label_37d92c;
        }
    }
    ctx->pc = 0x37D8D0u;
    // 0x37d8d0: 0x10000011
    ctx->pc = 0x37D8D0u;
    {
        const bool branch_taken_0x37d8d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37D8D4u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37d8d0) {
            ctx->pc = 0x37D918u;
            goto label_37d918;
        }
    }
    ctx->pc = 0x37D8D8u;
label_37d8d8:
    // 0x37d8d8: 0x3c02004a
    ctx->pc = 0x37d8d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
    // 0x37d8dc: 0x712023
    ctx->pc = 0x37d8dcu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x37d8e0: 0x24425c30
    ctx->pc = 0x37d8e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23600));
    // 0x37d8e4: 0x418c0
    ctx->pc = 0x37d8e4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x37d8e8: 0x282d
    ctx->pc = 0x37d8e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d8ec: 0x831821
    ctx->pc = 0x37d8ecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x37d8f0: 0x31940
    ctx->pc = 0x37d8f0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
    // 0x37d8f4: 0xc199820
    ctx->pc = 0x37D8F4u;
    SET_GPR_U32(ctx, 31, 0x37D8FCu);
    ctx->pc = 0x37D8F8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x666080u;
    {
        auto targetFn = runtime->lookupFunction(0x666080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D8FCu; }
        if (ctx->pc != 0x37D8FCu) { return; }
    }
    ctx->pc = 0x37D8FCu;
    // 0x37d8fc: 0x304200ff
    ctx->pc = 0x37d8fcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x37d900: 0x14400004
    ctx->pc = 0x37D900u;
    {
        const bool branch_taken_0x37d900 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x37d900) {
            ctx->pc = 0x37D914u;
            goto label_37d914;
        }
    }
    ctx->pc = 0x37D908u;
    // 0x37d908: 0x26020001
    ctx->pc = 0x37d908u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 1));
    // 0x37d90c: 0x2863c
    ctx->pc = 0x37d90cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 24));
    // 0x37d910: 0x10863f
    ctx->pc = 0x37d910u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
label_37d914:
    // 0x37d914: 0x26310001
    ctx->pc = 0x37d914u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_37d918:
    // 0x37d918: 0x3c01004c
    ctx->pc = 0x37d918u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x37d91c: 0x8c22aea0
    ctx->pc = 0x37d91cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946464)));
    // 0x37d920: 0x222102b
    ctx->pc = 0x37d920u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x37d924: 0x1440ffec
    ctx->pc = 0x37D924u;
    {
        const bool branch_taken_0x37d924 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37D928u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 4));
        if (branch_taken_0x37d924) {
            ctx->pc = 0x37D8D8u;
            goto label_37d8d8;
        }
    }
    ctx->pc = 0x37D92Cu;
label_37d92c:
    // 0x37d92c: 0x200102d
    ctx->pc = 0x37d92cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d930: 0xdfbf0020
    ctx->pc = 0x37d930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37d934: 0x7bb10010
    ctx->pc = 0x37d934u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37d938: 0x7bb00000
    ctx->pc = 0x37d938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37d93c: 0x3e00008
    ctx->pc = 0x37D93Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D940u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37D670u: goto label_37d670;
            case 0x37D68Cu: goto label_37d68c;
            case 0x37D6C8u: goto label_37d6c8;
            case 0x37D6CCu: goto label_37d6cc;
            case 0x37D708u: goto label_37d708;
            case 0x37D71Cu: goto label_37d71c;
            case 0x37D720u: goto label_37d720;
            case 0x37D784u: goto label_37d784;
            case 0x37D7E4u: goto label_37d7e4;
            case 0x37D81Cu: goto label_37d81c;
            case 0x37D878u: goto label_37d878;
            case 0x37D88Cu: goto label_37d88c;
            case 0x37D8D8u: goto label_37d8d8;
            case 0x37D914u: goto label_37d914;
            case 0x37D918u: goto label_37d918;
            case 0x37D92Cu: goto label_37d92c;
            case 0x37D978u: goto label_37d978;
            case 0x37D9E0u: goto label_37d9e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37D944u;
    // 0x37d944: 0x0
    ctx->pc = 0x37d944u;
    // NOP
    // 0x37d948: 0x0
    ctx->pc = 0x37d948u;
    // NOP
    // 0x37d94c: 0x0
    ctx->pc = 0x37d94cu;
    // NOP
    // 0x37d950: 0x308500ff
    ctx->pc = 0x37d950u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 4), 255));
    // 0x37d954: 0x3c030032
    ctx->pc = 0x37d954u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x37d958: 0x24041ce4
    ctx->pc = 0x37d958u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7396));
    // 0x37d95c: 0x2463fb60
    ctx->pc = 0x37d95cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294966112));
    // 0x37d960: 0xa42018
    ctx->pc = 0x37d960u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x37d964: 0x102d
    ctx->pc = 0x37d964u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d968: 0x402d
    ctx->pc = 0x37d968u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d96c: 0x482d
    ctx->pc = 0x37d96cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d970: 0x382d
    ctx->pc = 0x37d970u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d974: 0x643021
    ctx->pc = 0x37d974u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_37d978:
    // 0x37d978: 0x718c0
    ctx->pc = 0x37d978u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 3));
    // 0x37d97c: 0x671821
    ctx->pc = 0x37d97cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x37d980: 0x31840
    ctx->pc = 0x37d980u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x37d984: 0x671821
    ctx->pc = 0x37d984u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x37d988: 0x318c0
    ctx->pc = 0x37d988u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x37d98c: 0x24e70001
    ctx->pc = 0x37d98cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x37d990: 0xc32021
    ctx->pc = 0x37d990u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x37d994: 0x948506d4
    ctx->pc = 0x37d994u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1748)));
    // 0x37d998: 0x28e30030
    ctx->pc = 0x37d998u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 7), 48));
    // 0x37d99c: 0x948406d6
    ctx->pc = 0x37d99cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1750)));
    // 0x37d9a0: 0x1254821
    ctx->pc = 0x37d9a0u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x37d9a4: 0x1460fff4
    ctx->pc = 0x37D9A4u;
    {
        const bool branch_taken_0x37d9a4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x37D9A8u;
        SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        if (branch_taken_0x37d9a4) {
            ctx->pc = 0x37D978u;
            goto label_37d978;
        }
    }
    ctx->pc = 0x37D9ACu;
    // 0x37d9ac: 0x1120000c
    ctx->pc = 0x37D9ACu;
    {
        const bool branch_taken_0x37d9ac = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        if (branch_taken_0x37d9ac) {
            ctx->pc = 0x37D9E0u;
            goto label_37d9e0;
        }
    }
    ctx->pc = 0x37D9B4u;
    // 0x37d9b4: 0x81080
    ctx->pc = 0x37d9b4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 8), 2));
    // 0x37d9b8: 0x481821
    ctx->pc = 0x37d9b8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x37d9bc: 0x31080
    ctx->pc = 0x37d9bcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x37d9c0: 0x621021
    ctx->pc = 0x37d9c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37d9c4: 0x21080
    ctx->pc = 0x37d9c4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x37d9c8: 0x49001a
    ctx->pc = 0x37d9c8u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x37d9cc: 0x0
    ctx->pc = 0x37d9ccu;
    // NOP
    // 0x37d9d0: 0x0
    ctx->pc = 0x37d9d0u;
    // NOP
    // 0x37d9d4: 0x1012
    ctx->pc = 0x37d9d4u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x37d9d8: 0x2163c
    ctx->pc = 0x37d9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x37d9dc: 0x2163f
    ctx->pc = 0x37d9dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_37d9e0:
    // 0x37d9e0: 0x3e00008
    ctx->pc = 0x37D9E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37D670u: goto label_37d670;
            case 0x37D68Cu: goto label_37d68c;
            case 0x37D6C8u: goto label_37d6c8;
            case 0x37D6CCu: goto label_37d6cc;
            case 0x37D708u: goto label_37d708;
            case 0x37D71Cu: goto label_37d71c;
            case 0x37D720u: goto label_37d720;
            case 0x37D784u: goto label_37d784;
            case 0x37D7E4u: goto label_37d7e4;
            case 0x37D81Cu: goto label_37d81c;
            case 0x37D878u: goto label_37d878;
            case 0x37D88Cu: goto label_37d88c;
            case 0x37D8D8u: goto label_37d8d8;
            case 0x37D914u: goto label_37d914;
            case 0x37D918u: goto label_37d918;
            case 0x37D92Cu: goto label_37d92c;
            case 0x37D978u: goto label_37d978;
            case 0x37D9E0u: goto label_37d9e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37D9E8u;
    // 0x37d9e8: 0x0
    ctx->pc = 0x37d9e8u;
    // NOP
    // 0x37d9ec: 0x0
    ctx->pc = 0x37d9ecu;
    // NOP
}
