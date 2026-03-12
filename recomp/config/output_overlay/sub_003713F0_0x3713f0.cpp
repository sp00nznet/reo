#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_003713F0
// Address: 0x3713f0 - 0x371760
void sub_003713F0_0x3713f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3713f0u;

    // 0x3713f0: 0x27bdffc0
    ctx->pc = 0x3713f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3713f4: 0x80302d
    ctx->pc = 0x3713f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3713f8: 0xffbf0010
    ctx->pc = 0x3713f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3713fc: 0x3c023f80
    ctx->pc = 0x3713fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x371400: 0xe7b40000
    ctx->pc = 0x371400u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x371404: 0x27a40030
    ctx->pc = 0x371404u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x371408: 0xafa20020
    ctx->pc = 0x371408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x37140c: 0x27a50020
    ctx->pc = 0x37140cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x371410: 0xafa00024
    ctx->pc = 0x371410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x371414: 0xc064674
    ctx->pc = 0x371414u;
    SET_GPR_U32(ctx, 31, 0x37141Cu);
    ctx->pc = 0x371418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    ctx->pc = 0x1919D0u;
    {
        auto targetFn = runtime->lookupFunction(0x1919D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37141Cu; }
        if (ctx->pc != 0x37141Cu) { return; }
    }
    ctx->pc = 0x37141Cu;
    // 0x37141c: 0xc064760
    ctx->pc = 0x37141Cu;
    SET_GPR_U32(ctx, 31, 0x371424u);
    ctx->pc = 0x371420u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x191D80u;
    {
        auto targetFn = runtime->lookupFunction(0x191D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371424u; }
        if (ctx->pc != 0x371424u) { return; }
    }
    ctx->pc = 0x371424u;
    // 0x371424: 0xc064760
    ctx->pc = 0x371424u;
    SET_GPR_U32(ctx, 31, 0x37142Cu);
    ctx->pc = 0x371428u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x191D80u;
    {
        auto targetFn = runtime->lookupFunction(0x191D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37142Cu; }
        if (ctx->pc != 0x37142Cu) { return; }
    }
    ctx->pc = 0x37142Cu;
    // 0x37142c: 0x27a40030
    ctx->pc = 0x37142cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x371430: 0xc06477c
    ctx->pc = 0x371430u;
    SET_GPR_U32(ctx, 31, 0x371438u);
    ctx->pc = 0x371434u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x191DF0u;
    {
        auto targetFn = runtime->lookupFunction(0x191DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371438u; }
        if (ctx->pc != 0x371438u) { return; }
    }
    ctx->pc = 0x371438u;
    // 0x371438: 0x3c023f80
    ctx->pc = 0x371438u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x37143c: 0x44820800
    ctx->pc = 0x37143cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x371440: 0x0
    ctx->pc = 0x371440u;
    // NOP
    // 0x371444: 0x46000d02
    ctx->pc = 0x371444u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x371448: 0x4614a002
    ctx->pc = 0x371448u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x37144c: 0xc0dc62c
    ctx->pc = 0x37144Cu;
    SET_GPR_U32(ctx, 31, 0x371454u);
    ctx->pc = 0x371450u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x3718B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_003718B0_0x3718b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371454u; }
    }
    if (ctx->pc != 0x371454u) { return; }
    ctx->pc = 0x371454u;
    // 0x371454: 0x4600a346
    ctx->pc = 0x371454u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x371458: 0xc064860
    ctx->pc = 0x371458u;
    SET_GPR_U32(ctx, 31, 0x371460u);
    ctx->pc = 0x37145Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x192180u;
    {
        auto targetFn = runtime->lookupFunction(0x192180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371460u; }
        if (ctx->pc != 0x371460u) { return; }
    }
    ctx->pc = 0x371460u;
    // 0x371460: 0xc0647bc
    ctx->pc = 0x371460u;
    SET_GPR_U32(ctx, 31, 0x371468u);
    ctx->pc = 0x371464u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x191EF0u;
    {
        auto targetFn = runtime->lookupFunction(0x191EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371468u; }
        if (ctx->pc != 0x371468u) { return; }
    }
    ctx->pc = 0x371468u;
    // 0x371468: 0xdfbf0010
    ctx->pc = 0x371468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37146c: 0xc7b40000
    ctx->pc = 0x37146cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x371470: 0x3042ffff
    ctx->pc = 0x371470u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x371474: 0x3e00008
    ctx->pc = 0x371474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371478u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37147Cu;
    // 0x37147c: 0x0
    ctx->pc = 0x37147cu;
    // NOP
    // 0x371480: 0x27bdff90
    ctx->pc = 0x371480u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x371484: 0xffbf0040
    ctx->pc = 0x371484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x371488: 0x7fb30030
    ctx->pc = 0x371488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x37148c: 0x7fb20020
    ctx->pc = 0x37148cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x371490: 0x80982d
    ctx->pc = 0x371490u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371494: 0x7fb10010
    ctx->pc = 0x371494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x371498: 0xe0902d
    ctx->pc = 0x371498u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37149c: 0x7fb00000
    ctx->pc = 0x37149cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3714a0: 0x27b10064
    ctx->pc = 0x3714a0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 100));
    // 0x3714a4: 0xace0000c
    ctx->pc = 0x3714a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x3714a8: 0x27b00068
    ctx->pc = 0x3714a8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 104));
    // 0x3714ac: 0xace0001c
    ctx->pc = 0x3714acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
    // 0x3714b0: 0x27a40060
    ctx->pc = 0x3714b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    // 0x3714b4: 0xace0002c
    ctx->pc = 0x3714b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 0));
    // 0x3714b8: 0xace00030
    ctx->pc = 0x3714b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 0));
    // 0x3714bc: 0xace00034
    ctx->pc = 0x3714bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 0));
    // 0x3714c0: 0xace00038
    ctx->pc = 0x3714c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 0));
    // 0x3714c4: 0xace0003c
    ctx->pc = 0x3714c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 0));
    // 0x3714c8: 0xc4a10000
    ctx->pc = 0x3714c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3714cc: 0xc4c00000
    ctx->pc = 0x3714ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3714d0: 0x46000801
    ctx->pc = 0x3714d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3714d4: 0xe7a00060
    ctx->pc = 0x3714d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3714d8: 0xc4a10004
    ctx->pc = 0x3714d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3714dc: 0xc4c00004
    ctx->pc = 0x3714dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3714e0: 0x46000801
    ctx->pc = 0x3714e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3714e4: 0xe6200000
    ctx->pc = 0x3714e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x3714e8: 0xc4a10008
    ctx->pc = 0x3714e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3714ec: 0xc4c00008
    ctx->pc = 0x3714ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3714f0: 0x46000801
    ctx->pc = 0x3714f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3714f4: 0xc064760
    ctx->pc = 0x3714F4u;
    SET_GPR_U32(ctx, 31, 0x3714FCu);
    ctx->pc = 0x3714F8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->pc = 0x191D80u;
    {
        auto targetFn = runtime->lookupFunction(0x191D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3714FCu; }
        if (ctx->pc != 0x3714FCu) { return; }
    }
    ctx->pc = 0x3714FCu;
    // 0x3714fc: 0xc6600000
    ctx->pc = 0x3714fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371500: 0x27a40050
    ctx->pc = 0x371500u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x371504: 0x27a50060
    ctx->pc = 0x371504u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 96));
    // 0x371508: 0x260302d
    ctx->pc = 0x371508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37150c: 0xe6400010
    ctx->pc = 0x37150cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x371510: 0xc6600004
    ctx->pc = 0x371510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371514: 0xe6400014
    ctx->pc = 0x371514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x371518: 0xc6600008
    ctx->pc = 0x371518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37151c: 0xe6400018
    ctx->pc = 0x37151cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x371520: 0xc7a00060
    ctx->pc = 0x371520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371524: 0xe6400020
    ctx->pc = 0x371524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x371528: 0xc6200000
    ctx->pc = 0x371528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37152c: 0xe6400024
    ctx->pc = 0x37152cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x371530: 0xc6000000
    ctx->pc = 0x371530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371534: 0xc064794
    ctx->pc = 0x371534u;
    SET_GPR_U32(ctx, 31, 0x37153Cu);
    ctx->pc = 0x371538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    ctx->pc = 0x191E50u;
    {
        auto targetFn = runtime->lookupFunction(0x191E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37153Cu; }
        if (ctx->pc != 0x37153Cu) { return; }
    }
    ctx->pc = 0x37153Cu;
    // 0x37153c: 0xc7a00050
    ctx->pc = 0x37153cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371540: 0xe6400000
    ctx->pc = 0x371540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x371544: 0xc7a00054
    ctx->pc = 0x371544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371548: 0xe6400004
    ctx->pc = 0x371548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x37154c: 0xc7a00058
    ctx->pc = 0x37154cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371550: 0xe6400008
    ctx->pc = 0x371550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x371554: 0xdfbf0040
    ctx->pc = 0x371554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x371558: 0x7bb30030
    ctx->pc = 0x371558u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37155c: 0x7bb20020
    ctx->pc = 0x37155cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x371560: 0x7bb10010
    ctx->pc = 0x371560u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x371564: 0x7bb00000
    ctx->pc = 0x371564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371568: 0x3e00008
    ctx->pc = 0x371568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37156Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x371570u;
    // 0x371570: 0x3c033f80
    ctx->pc = 0x371570u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x371574: 0x27bdffc0
    ctx->pc = 0x371574u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x371578: 0x44831000
    ctx->pc = 0x371578u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
    // 0x37157c: 0x3c024000
    ctx->pc = 0x37157cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x371580: 0xffbf0010
    ctx->pc = 0x371580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x371584: 0x44820000
    ctx->pc = 0x371584u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x371588: 0x460f1040
    ctx->pc = 0x371588u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[15]);
    // 0x37158c: 0x27a40038
    ctx->pc = 0x37158cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 56));
    // 0x371590: 0x27a50030
    ctx->pc = 0x371590u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 48));
    // 0x371594: 0x27a60028
    ctx->pc = 0x371594u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 40));
    // 0x371598: 0x27a70020
    ctx->pc = 0x371598u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 32));
    // 0x37159c: 0x46000bc3
    ctx->pc = 0x37159cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[15] = ctx->f[1] / ctx->f[0];
    // 0x3715a0: 0x460f1001
    ctx->pc = 0x3715a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[15]);
    // 0x3715a4: 0xe7b50004
    ctx->pc = 0x3715a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3715a8: 0xe7b40000
    ctx->pc = 0x3715a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3715ac: 0x46006546
    ctx->pc = 0x3715acu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x3715b0: 0xafa3002c
    ctx->pc = 0x3715b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x3715b4: 0x46006d06
    ctx->pc = 0x3715b4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x3715b8: 0xafa30028
    ctx->pc = 0x3715b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x3715bc: 0x46007306
    ctx->pc = 0x3715bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[14]);
    // 0x3715c0: 0xafa0003c
    ctx->pc = 0x3715c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x3715c4: 0xe7af0034
    ctx->pc = 0x3715c4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3715c8: 0xafa00038
    ctx->pc = 0x3715c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x3715cc: 0xc0dc5d8
    ctx->pc = 0x3715CCu;
    SET_GPR_U32(ctx, 31, 0x3715D4u);
    ctx->pc = 0x3715D0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->pc = 0x371760u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00371760_0x371760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3715D4u; }
    }
    if (ctx->pc != 0x3715D4u) { return; }
    ctx->pc = 0x3715D4u;
    // 0x3715d4: 0xc7a00024
    ctx->pc = 0x3715d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3715d8: 0xdfbf0010
    ctx->pc = 0x3715d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3715dc: 0x4615a041
    ctx->pc = 0x3715dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x3715e0: 0xc7b40000
    ctx->pc = 0x3715e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3715e4: 0x46010002
    ctx->pc = 0x3715e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3715e8: 0x4600a800
    ctx->pc = 0x3715e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x3715ec: 0xc7b50004
    ctx->pc = 0x3715ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3715f0: 0x3e00008
    ctx->pc = 0x3715F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3715F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3715F8u;
    // 0x3715f8: 0x0
    ctx->pc = 0x3715f8u;
    // NOP
    // 0x3715fc: 0x0
    ctx->pc = 0x3715fcu;
    // NOP
    // 0x371600: 0x27bdff40
    ctx->pc = 0x371600u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x371604: 0xffbf0080
    ctx->pc = 0x371604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x371608: 0x7fb60070
    ctx->pc = 0x371608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x37160c: 0x7fb50060
    ctx->pc = 0x37160cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x371610: 0xe0b02d
    ctx->pc = 0x371610u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371614: 0x7fb40050
    ctx->pc = 0x371614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x371618: 0x7fb30040
    ctx->pc = 0x371618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x37161c: 0x7fb20030
    ctx->pc = 0x37161cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x371620: 0x7fb10020
    ctx->pc = 0x371620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x371624: 0xc0902d
    ctx->pc = 0x371624u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371628: 0x7fb00010
    ctx->pc = 0x371628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37162c: 0x80882d
    ctx->pc = 0x37162cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371630: 0xe7b40000
    ctx->pc = 0x371630u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x371634: 0xa0802d
    ctx->pc = 0x371634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371638: 0x46006506
    ctx->pc = 0x371638u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x37163c: 0x27a400b0
    ctx->pc = 0x37163cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 176));
    // 0x371640: 0xc0dc108
    ctx->pc = 0x371640u;
    SET_GPR_U32(ctx, 31, 0x371648u);
    ctx->pc = 0x371644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x370420u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370420_0x370420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371648u; }
    }
    if (ctx->pc != 0x371648u) { return; }
    ctx->pc = 0x371648u;
    // 0x371648: 0xc7a000b0
    ctx->pc = 0x371648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37164c: 0x240282d
    ctx->pc = 0x37164cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371650: 0xc6210000
    ctx->pc = 0x371650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371654: 0x27b500b4
    ctx->pc = 0x371654u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 29), 180));
    // 0x371658: 0x27b300a4
    ctx->pc = 0x371658u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 164));
    // 0x37165c: 0x27b400b8
    ctx->pc = 0x37165cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 29), 184));
    // 0x371660: 0x27b200a8
    ctx->pc = 0x371660u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 168));
    // 0x371664: 0x27a400b0
    ctx->pc = 0x371664u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 176));
    // 0x371668: 0x200302d
    ctx->pc = 0x371668u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37166c: 0x46140002
    ctx->pc = 0x37166cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x371670: 0x46000800
    ctx->pc = 0x371670u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x371674: 0xe7a000a0
    ctx->pc = 0x371674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x371678: 0xc6a00000
    ctx->pc = 0x371678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37167c: 0xc6210004
    ctx->pc = 0x37167cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371680: 0x46140002
    ctx->pc = 0x371680u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x371684: 0x46000800
    ctx->pc = 0x371684u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x371688: 0xe6600000
    ctx->pc = 0x371688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x37168c: 0xc6800000
    ctx->pc = 0x37168cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371690: 0xc6210008
    ctx->pc = 0x371690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371694: 0x46140002
    ctx->pc = 0x371694u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x371698: 0x46000800
    ctx->pc = 0x371698u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x37169c: 0xc0dc108
    ctx->pc = 0x37169Cu;
    SET_GPR_U32(ctx, 31, 0x3716A4u);
    ctx->pc = 0x3716A0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    ctx->pc = 0x370420u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370420_0x370420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3716A4u; }
    }
    if (ctx->pc != 0x3716A4u) { return; }
    ctx->pc = 0x3716A4u;
    // 0x3716a4: 0xc7a000b0
    ctx->pc = 0x3716a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3716a8: 0x27a400b0
    ctx->pc = 0x3716a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 176));
    // 0x3716ac: 0xc6010000
    ctx->pc = 0x3716acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3716b0: 0x27a50090
    ctx->pc = 0x3716b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
    // 0x3716b4: 0x27a600a0
    ctx->pc = 0x3716b4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 160));
    // 0x3716b8: 0x46140002
    ctx->pc = 0x3716b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x3716bc: 0x46000800
    ctx->pc = 0x3716bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3716c0: 0xe7a00090
    ctx->pc = 0x3716c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x3716c4: 0xc6a00000
    ctx->pc = 0x3716c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3716c8: 0xc6010004
    ctx->pc = 0x3716c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3716cc: 0x46140002
    ctx->pc = 0x3716ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x3716d0: 0x46000800
    ctx->pc = 0x3716d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3716d4: 0xe7a00094
    ctx->pc = 0x3716d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x3716d8: 0xc6800000
    ctx->pc = 0x3716d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3716dc: 0xc6010008
    ctx->pc = 0x3716dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3716e0: 0x46140002
    ctx->pc = 0x3716e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x3716e4: 0x46000800
    ctx->pc = 0x3716e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3716e8: 0xc0dc108
    ctx->pc = 0x3716E8u;
    SET_GPR_U32(ctx, 31, 0x3716F0u);
    ctx->pc = 0x3716ECu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    ctx->pc = 0x370420u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370420_0x370420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3716F0u; }
    }
    if (ctx->pc != 0x3716F0u) { return; }
    ctx->pc = 0x3716F0u;
    // 0x3716f0: 0xc7a000b0
    ctx->pc = 0x3716f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3716f4: 0xc7a100a0
    ctx->pc = 0x3716f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3716f8: 0x46140002
    ctx->pc = 0x3716f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x3716fc: 0x46000800
    ctx->pc = 0x3716fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x371700: 0xe6c00000
    ctx->pc = 0x371700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x371704: 0xc6a00000
    ctx->pc = 0x371704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371708: 0xc6610000
    ctx->pc = 0x371708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37170c: 0x46140002
    ctx->pc = 0x37170cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x371710: 0x46000800
    ctx->pc = 0x371710u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x371714: 0xe6c00004
    ctx->pc = 0x371714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x371718: 0xc6800000
    ctx->pc = 0x371718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37171c: 0xc6410000
    ctx->pc = 0x37171cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371720: 0x46140002
    ctx->pc = 0x371720u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x371724: 0x46000800
    ctx->pc = 0x371724u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x371728: 0xe6c00008
    ctx->pc = 0x371728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
    // 0x37172c: 0xdfbf0080
    ctx->pc = 0x37172cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x371730: 0xc7b40000
    ctx->pc = 0x371730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x371734: 0x7bb60070
    ctx->pc = 0x371734u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x371738: 0x7bb50060
    ctx->pc = 0x371738u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37173c: 0x7bb40050
    ctx->pc = 0x37173cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x371740: 0x7bb30040
    ctx->pc = 0x371740u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x371744: 0x7bb20030
    ctx->pc = 0x371744u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x371748: 0x7bb10020
    ctx->pc = 0x371748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37174c: 0x7bb00010
    ctx->pc = 0x37174cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x371750: 0x3e00008
    ctx->pc = 0x371750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371754u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x371758u;
    // 0x371758: 0x0
    ctx->pc = 0x371758u;
    // NOP
    // 0x37175c: 0x0
    ctx->pc = 0x37175cu;
    // NOP
}
