#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0037D3E0
// Address: 0x37d3e0 - 0x37d630
void sub_0037D3E0_0x37d3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x37d3e0u;

    // 0x37d3e0: 0x27bdff90
    ctx->pc = 0x37d3e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x37d3e4: 0x3c01003c
    ctx->pc = 0x37d3e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x37d3e8: 0xffbf0060
    ctx->pc = 0x37d3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x37d3ec: 0x7fb30050
    ctx->pc = 0x37d3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x37d3f0: 0x7fb20040
    ctx->pc = 0x37d3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x37d3f4: 0x80982d
    ctx->pc = 0x37d3f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d3f8: 0x7fb10030
    ctx->pc = 0x37d3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x37d3fc: 0x3c12003c
    ctx->pc = 0x37d3fcu;
    SET_GPR_U32(ctx, 18, ((uint32_t)60 << 16));
    // 0x37d400: 0x7fb00020
    ctx->pc = 0x37d400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37d404: 0xe7b90014
    ctx->pc = 0x37d404u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x37d408: 0xe7b80010
    ctx->pc = 0x37d408u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x37d40c: 0xe7b7000c
    ctx->pc = 0x37d40cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x37d410: 0xe7b60008
    ctx->pc = 0x37d410u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x37d414: 0xe7b50004
    ctx->pc = 0x37d414u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x37d418: 0xe7b40000
    ctx->pc = 0x37d418u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x37d41c: 0x8c228500
    ctx->pc = 0x37d41cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294935808)));
    // 0x37d420: 0x4400004
    ctx->pc = 0x37D420u;
    {
        const bool branch_taken_0x37d420 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x37D424u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294935728));
        if (branch_taken_0x37d420) {
            ctx->pc = 0x37D434u;
            goto label_37d434;
        }
    }
    ctx->pc = 0x37D428u;
    // 0x37d428: 0x44820000
    ctx->pc = 0x37d428u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x37d42c: 0x10000008
    ctx->pc = 0x37D42Cu;
    {
        const bool branch_taken_0x37d42c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37D430u;
        ctx->f[22] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x37d42c) {
            ctx->pc = 0x37D450u;
            goto label_37d450;
        }
    }
    ctx->pc = 0x37D434u;
label_37d434:
    // 0x37d434: 0x21842
    ctx->pc = 0x37d434u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 1));
    // 0x37d438: 0x30420001
    ctx->pc = 0x37d438u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x37d43c: 0x621825
    ctx->pc = 0x37d43cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37d440: 0x44830000
    ctx->pc = 0x37d440u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x37d444: 0x0
    ctx->pc = 0x37d444u;
    // NOP
    // 0x37d448: 0x468005a0
    ctx->pc = 0x37d448u;
    ctx->f[22] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x37d44c: 0x4616b580
    ctx->pc = 0x37d44cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[22]);
label_37d450:
    // 0x37d450: 0x3c01004c
    ctx->pc = 0x37d450u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x37d454: 0x90249d19
    ctx->pc = 0x37d454u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294941977)));
    // 0x37d458: 0x41080
    ctx->pc = 0x37d458u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x37d45c: 0x3c01004c
    ctx->pc = 0x37d45cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x37d460: 0x442021
    ctx->pc = 0x37d460u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37d464: 0x9023ae8a
    ctx->pc = 0x37d464u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946442)));
    // 0x37d468: 0x42040
    ctx->pc = 0x37d468u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
    // 0x37d46c: 0x44840000
    ctx->pc = 0x37d46cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 4);
    // 0x37d470: 0x0
    ctx->pc = 0x37d470u;
    // NOP
    // 0x37d474: 0x46800560
    ctx->pc = 0x37d474u;
    ctx->f[21] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x37d478: 0x4610004
    ctx->pc = 0x37D478u;
    {
        const bool branch_taken_0x37d478 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x37D47Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 3));
        if (branch_taken_0x37d478) {
            ctx->pc = 0x37D48Cu;
            goto label_37d48c;
        }
    }
    ctx->pc = 0x37D480u;
    // 0x37d480: 0x10400003
    ctx->pc = 0x37D480u;
    {
        const bool branch_taken_0x37d480 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x37D484u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
        if (branch_taken_0x37d480) {
            ctx->pc = 0x37D490u;
            goto label_37d490;
        }
    }
    ctx->pc = 0x37D488u;
    // 0x37d488: 0x2442fffc
    ctx->pc = 0x37d488u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
label_37d48c:
    // 0x37d48c: 0x21880
    ctx->pc = 0x37d48cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
label_37d490:
    // 0x37d490: 0x3c01003c
    ctx->pc = 0x37d490u;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x37d494: 0x3c020039
    ctx->pc = 0x37d494u;
    SET_GPR_U32(ctx, 2, ((uint32_t)57 << 16));
    // 0x37d498: 0x2442a530
    ctx->pc = 0x37d498u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944048));
    // 0x37d49c: 0x431021
    ctx->pc = 0x37d49cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37d4a0: 0xc4570000
    ctx->pc = 0x37d4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x37d4a4: 0x4480a000
    ctx->pc = 0x37d4a4u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x37d4a8: 0x902284f6
    ctx->pc = 0x37d4a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294935798)));
    // 0x37d4ac: 0x10400025
    ctx->pc = 0x37D4ACu;
    {
        const bool branch_taken_0x37d4ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x37D4B0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37d4ac) {
            ctx->pc = 0x37D544u;
            goto label_37d544;
        }
    }
    ctx->pc = 0x37D4B4u;
    // 0x37d4b4: 0x3c01004c
    ctx->pc = 0x37d4b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x37d4b8: 0x3c0243fa
    ctx->pc = 0x37d4b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17402 << 16));
    // 0x37d4bc: 0x8c23aea0
    ctx->pc = 0x37d4bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294946464)));
    // 0x37d4c0: 0x4482a000
    ctx->pc = 0x37d4c0u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 2);
    // 0x37d4c4: 0x24020001
    ctx->pc = 0x37d4c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37d4c8: 0x14620003
    ctx->pc = 0x37D4C8u;
    {
        const bool branch_taken_0x37d4c8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x37D4CCu;
        SET_GPR_U32(ctx, 4, ((uint32_t)74 << 16));
        if (branch_taken_0x37d4c8) {
            ctx->pc = 0x37D4D8u;
            goto label_37d4d8;
        }
    }
    ctx->pc = 0x37D4D0u;
    // 0x37d4d0: 0x10000012
    ctx->pc = 0x37D4D0u;
    {
        const bool branch_taken_0x37d4d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37D4D4u;
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)3);
        if (branch_taken_0x37d4d0) {
            ctx->pc = 0x37D51Cu;
            goto label_37d51c;
        }
    }
    ctx->pc = 0x37D4D8u;
label_37d4d8:
    // 0x37d4d8: 0x282d
    ctx->pc = 0x37d4d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d4dc: 0x24846d10
    ctx->pc = 0x37d4dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27920));
    // 0x37d4e0: 0xc199820
    ctx->pc = 0x37D4E0u;
    SET_GPR_U32(ctx, 31, 0x37D4E8u);
    ctx->pc = 0x37D4E4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x666080u;
    {
        auto targetFn = runtime->lookupFunction(0x666080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D4E8u; }
        if (ctx->pc != 0x37D4E8u) { return; }
    }
    ctx->pc = 0x37D4E8u;
    // 0x37d4e8: 0x304200ff
    ctx->pc = 0x37d4e8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x37d4ec: 0x14400003
    ctx->pc = 0x37D4ECu;
    {
        const bool branch_taken_0x37d4ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37D4F0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)74 << 16));
        if (branch_taken_0x37d4ec) {
            ctx->pc = 0x37D4FCu;
            goto label_37d4fc;
        }
    }
    ctx->pc = 0x37D4F4u;
    // 0x37d4f4: 0x26220001
    ctx->pc = 0x37d4f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 1));
    // 0x37d4f8: 0x305100ff
    ctx->pc = 0x37d4f8u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 2), 255));
label_37d4fc:
    // 0x37d4fc: 0x282d
    ctx->pc = 0x37d4fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d500: 0xc199820
    ctx->pc = 0x37D500u;
    SET_GPR_U32(ctx, 31, 0x37D508u);
    ctx->pc = 0x37D504u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32240));
    ctx->pc = 0x666080u;
    {
        auto targetFn = runtime->lookupFunction(0x666080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D508u; }
        if (ctx->pc != 0x37D508u) { return; }
    }
    ctx->pc = 0x37D508u;
    // 0x37d508: 0x304200ff
    ctx->pc = 0x37d508u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x37d50c: 0x14400003
    ctx->pc = 0x37D50Cu;
    {
        const bool branch_taken_0x37d50c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x37d50c) {
            ctx->pc = 0x37D51Cu;
            goto label_37d51c;
        }
    }
    ctx->pc = 0x37D514u;
    // 0x37d514: 0x26220001
    ctx->pc = 0x37d514u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 1));
    // 0x37d518: 0x305100ff
    ctx->pc = 0x37d518u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 2), 255));
label_37d51c:
    // 0x37d51c: 0x92420044
    ctx->pc = 0x37d51cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x37d520: 0x14400002
    ctx->pc = 0x37D520u;
    {
        const bool branch_taken_0x37d520 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37D524u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x37d520) {
            ctx->pc = 0x37D52Cu;
            goto label_37d52c;
        }
    }
    ctx->pc = 0x37D528u;
    // 0x37d528: 0x305000ff
    ctx->pc = 0x37d528u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 2), 255));
label_37d52c:
    // 0x37d52c: 0x92420045
    ctx->pc = 0x37d52cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 69)));
    // 0x37d530: 0x14400006
    ctx->pc = 0x37D530u;
    {
        const bool branch_taken_0x37d530 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37D534u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 17), 255));
        if (branch_taken_0x37d530) {
            ctx->pc = 0x37D54Cu;
            goto label_37d54c;
        }
    }
    ctx->pc = 0x37D538u;
    // 0x37d538: 0x36020002
    ctx->pc = 0x37d538u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 16), 2));
    // 0x37d53c: 0x10000002
    ctx->pc = 0x37D53Cu;
    {
        const bool branch_taken_0x37d53c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37D540u;
        SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 2), 255));
        if (branch_taken_0x37d53c) {
            ctx->pc = 0x37D548u;
            goto label_37d548;
        }
    }
    ctx->pc = 0x37D544u;
label_37d544:
    // 0x37d544: 0x64110004
    ctx->pc = 0x37d544u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)4);
label_37d548:
    // 0x37d548: 0x322300ff
    ctx->pc = 0x37d548u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 17), 255));
label_37d54c:
    // 0x37d54c: 0x320200ff
    ctx->pc = 0x37d54cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 255));
    // 0x37d550: 0x32080
    ctx->pc = 0x37d550u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 2));
    // 0x37d554: 0x260282d
    ctx->pc = 0x37d554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d558: 0x21880
    ctx->pc = 0x37d558u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x37d55c: 0x3c020039
    ctx->pc = 0x37d55cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)57 << 16));
    // 0x37d560: 0x2442a550
    ctx->pc = 0x37d560u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944080));
    // 0x37d564: 0x442021
    ctx->pc = 0x37d564u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37d568: 0x3c020039
    ctx->pc = 0x37d568u;
    SET_GPR_U32(ctx, 2, ((uint32_t)57 << 16));
    // 0x37d56c: 0x2442a520
    ctx->pc = 0x37d56cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944032));
    // 0x37d570: 0x431021
    ctx->pc = 0x37d570u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37d574: 0xc4980000
    ctx->pc = 0x37d574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x37d578: 0xc4590000
    ctx->pc = 0x37d578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x37d57c: 0xc0df830
    ctx->pc = 0x37D57Cu;
    SET_GPR_U32(ctx, 31, 0x37D584u);
    ctx->pc = 0x37D580u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x37E0C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0037E0C0_0x37e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D584u; }
    }
    if (ctx->pc != 0x37D584u) { return; }
    ctx->pc = 0x37D584u;
    // 0x37d584: 0x4615b040
    ctx->pc = 0x37d584u;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
    // 0x37d588: 0x3c01004c
    ctx->pc = 0x37d588u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x37d58c: 0x9022ae96
    ctx->pc = 0x37d58cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946454)));
    // 0x37d590: 0x4601a040
    ctx->pc = 0x37d590u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x37d594: 0x30420001
    ctx->pc = 0x37d594u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x37d598: 0x4601c042
    ctx->pc = 0x37d598u;
    ctx->f[1] = FPU_MUL_S(ctx->f[24], ctx->f[1]);
    // 0x37d59c: 0x4601b842
    ctx->pc = 0x37d59cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[1]);
    // 0x37d5a0: 0x46010002
    ctx->pc = 0x37d5a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x37d5a4: 0x10400004
    ctx->pc = 0x37D5A4u;
    {
        const bool branch_taken_0x37d5a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x37D5A8u;
        ctx->f[1] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
        if (branch_taken_0x37d5a4) {
            ctx->pc = 0x37D5B8u;
            goto label_37d5b8;
        }
    }
    ctx->pc = 0x37D5ACu;
    // 0x37d5ac: 0x3c010039
    ctx->pc = 0x37d5acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)57 << 16));
    // 0x37d5b0: 0x10000003
    ctx->pc = 0x37D5B0u;
    {
        const bool branch_taken_0x37d5b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37D5B4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x37d5b0) {
            ctx->pc = 0x37D5C0u;
            goto label_37d5c0;
        }
    }
    ctx->pc = 0x37D5B8u;
label_37d5b8:
    // 0x37d5b8: 0x3c023f80
    ctx->pc = 0x37d5b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x37d5bc: 0x44820000
    ctx->pc = 0x37d5bcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_37d5c0:
    // 0x37d5c0: 0x46010302
    ctx->pc = 0x37d5c0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x37d5c4: 0x46006024
    ctx->pc = 0x37d5c4u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[12]);
    // 0x37d5c8: 0x44100000
    ctx->pc = 0x37d5c8u;
    SET_GPR_U32(ctx, 16, *(uint32_t*)&ctx->f[0]);
    // 0x37d5cc: 0xc064880
    ctx->pc = 0x37D5CCu;
    SET_GPR_U32(ctx, 31, 0x37D5D4u);
    ctx->pc = 0x192200u;
    {
        auto targetFn = runtime->lookupFunction(0x192200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D5D4u; }
        if (ctx->pc != 0x37D5D4u) { return; }
    }
    ctx->pc = 0x37D5D4u;
    // 0x37d5d4: 0x3c023f00
    ctx->pc = 0x37d5d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x37d5d8: 0x44820800
    ctx->pc = 0x37d5d8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x37d5dc: 0x0
    ctx->pc = 0x37d5dcu;
    // NOP
    // 0x37d5e0: 0x46010034
    ctx->pc = 0x37d5e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37d5e4: 0x45010003
    ctx->pc = 0x37D5E4u;
    {
        const bool branch_taken_0x37d5e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x37D5E8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37d5e4) {
            ctx->pc = 0x37D5F4u;
            goto label_37d5f4;
        }
    }
    ctx->pc = 0x37D5ECu;
    // 0x37d5ec: 0x26100001
    ctx->pc = 0x37d5ecu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x37d5f0: 0x200102d
    ctx->pc = 0x37d5f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37d5f4:
    // 0x37d5f4: 0xdfbf0060
    ctx->pc = 0x37d5f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37d5f8: 0x7bb30050
    ctx->pc = 0x37d5f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37d5fc: 0xc7b90014
    ctx->pc = 0x37d5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x37d600: 0x7bb20040
    ctx->pc = 0x37d600u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37d604: 0xc7b80010
    ctx->pc = 0x37d604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x37d608: 0x7bb10030
    ctx->pc = 0x37d608u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37d60c: 0xc7b7000c
    ctx->pc = 0x37d60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x37d610: 0x7bb00020
    ctx->pc = 0x37d610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37d614: 0xc7b60008
    ctx->pc = 0x37d614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x37d618: 0xc7b50004
    ctx->pc = 0x37d618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x37d61c: 0xc7b40000
    ctx->pc = 0x37d61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x37d620: 0x3e00008
    ctx->pc = 0x37D620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D624u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37D434u: goto label_37d434;
            case 0x37D450u: goto label_37d450;
            case 0x37D48Cu: goto label_37d48c;
            case 0x37D490u: goto label_37d490;
            case 0x37D4D8u: goto label_37d4d8;
            case 0x37D4FCu: goto label_37d4fc;
            case 0x37D51Cu: goto label_37d51c;
            case 0x37D52Cu: goto label_37d52c;
            case 0x37D544u: goto label_37d544;
            case 0x37D548u: goto label_37d548;
            case 0x37D54Cu: goto label_37d54c;
            case 0x37D5B8u: goto label_37d5b8;
            case 0x37D5C0u: goto label_37d5c0;
            case 0x37D5F4u: goto label_37d5f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37D628u;
    // 0x37d628: 0x0
    ctx->pc = 0x37d628u;
    // NOP
    // 0x37d62c: 0x0
    ctx->pc = 0x37d62cu;
    // NOP
}
