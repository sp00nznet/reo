#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00372720
// Address: 0x372720 - 0x373630
void sub_00372720_0x372720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x372720u;

label_372720:
    // 0x372720: 0x42c3c
    ctx->pc = 0x372720u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x372724: 0x3c01003c
    ctx->pc = 0x372724u;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x372728: 0x84248dd0
    ctx->pc = 0x372728u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294938064)));
    // 0x37272c: 0x3c03003c
    ctx->pc = 0x37272cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x372730: 0x52c3f
    ctx->pc = 0x372730u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x372734: 0x302d
    ctx->pc = 0x372734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372738: 0x10000008
    ctx->pc = 0x372738u;
    {
        const bool branch_taken_0x372738 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37273Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294935984));
        if (branch_taken_0x372738) {
            ctx->pc = 0x37275Cu;
            goto label_37275c;
        }
    }
    ctx->pc = 0x372740u;
label_372740:
    // 0x372740: 0x621021
    ctx->pc = 0x372740u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x372744: 0x84420824
    ctx->pc = 0x372744u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2084)));
    // 0x372748: 0x14a20003
    ctx->pc = 0x372748u;
    {
        const bool branch_taken_0x372748 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x37274Cu;
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
        if (branch_taken_0x372748) {
            ctx->pc = 0x372758u;
            goto label_372758;
        }
    }
    ctx->pc = 0x372750u;
    // 0x372750: 0x10000006
    ctx->pc = 0x372750u;
    {
        const bool branch_taken_0x372750 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x372754u;
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        if (branch_taken_0x372750) {
            ctx->pc = 0x37276Cu;
            goto label_37276c;
        }
    }
    ctx->pc = 0x372758u;
label_372758:
    // 0x372758: 0x24c60001
    ctx->pc = 0x372758u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_37275c:
    // 0x37275c: 0xc4102a
    ctx->pc = 0x37275cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 4)));
    // 0x372760: 0x1440fff7
    ctx->pc = 0x372760u;
    {
        const bool branch_taken_0x372760 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x372764u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x372760) {
            ctx->pc = 0x372740u;
            goto label_372740;
        }
    }
    ctx->pc = 0x372768u;
    // 0x372768: 0x2402ffff
    ctx->pc = 0x372768u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_37276c:
    // 0x37276c: 0x3e00008
    ctx->pc = 0x37276Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x372720u: goto label_372720;
            case 0x372740u: goto label_372740;
            case 0x372758u: goto label_372758;
            case 0x37275Cu: goto label_37275c;
            case 0x37276Cu: goto label_37276c;
            case 0x372780u: goto label_372780;
            case 0x37285Cu: goto label_37285c;
            case 0x37288Cu: goto label_37288c;
            case 0x3728B8u: goto label_3728b8;
            case 0x3728C4u: goto label_3728c4;
            case 0x3728F8u: goto label_3728f8;
            case 0x372918u: goto label_372918;
            case 0x3729A0u: goto label_3729a0;
            case 0x3729BCu: goto label_3729bc;
            case 0x3729F8u: goto label_3729f8;
            case 0x372A14u: goto label_372a14;
            case 0x372A54u: goto label_372a54;
            case 0x372A70u: goto label_372a70;
            case 0x372AB0u: goto label_372ab0;
            case 0x372ACCu: goto label_372acc;
            case 0x372AD8u: goto label_372ad8;
            case 0x372ADCu: goto label_372adc;
            case 0x372AE0u: goto label_372ae0;
            case 0x372B00u: goto label_372b00;
            case 0x372B18u: goto label_372b18;
            case 0x372B70u: goto label_372b70;
            case 0x372B98u: goto label_372b98;
            case 0x372BC8u: goto label_372bc8;
            case 0x372BCCu: goto label_372bcc;
            case 0x372C50u: goto label_372c50;
            case 0x372C68u: goto label_372c68;
            case 0x372CE8u: goto label_372ce8;
            case 0x372D24u: goto label_372d24;
            case 0x372D2Cu: goto label_372d2c;
            case 0x372D30u: goto label_372d30;
            case 0x372E84u: goto label_372e84;
            case 0x372EC4u: goto label_372ec4;
            case 0x372EE0u: goto label_372ee0;
            case 0x372EF4u: goto label_372ef4;
            case 0x372EF8u: goto label_372ef8;
            case 0x372F48u: goto label_372f48;
            case 0x372F4Cu: goto label_372f4c;
            case 0x372F6Cu: goto label_372f6c;
            case 0x372FA0u: goto label_372fa0;
            case 0x372FB0u: goto label_372fb0;
            case 0x372FFCu: goto label_372ffc;
            case 0x373020u: goto label_373020;
            case 0x373034u: goto label_373034;
            case 0x373038u: goto label_373038;
            case 0x373120u: goto label_373120;
            case 0x37312Cu: goto label_37312c;
            case 0x3731BCu: goto label_3731bc;
            case 0x3731CCu: goto label_3731cc;
            case 0x373224u: goto label_373224;
            case 0x373254u: goto label_373254;
            case 0x373264u: goto label_373264;
            case 0x3732C8u: goto label_3732c8;
            case 0x3732D8u: goto label_3732d8;
            case 0x37331Cu: goto label_37331c;
            case 0x373338u: goto label_373338;
            case 0x37333Cu: goto label_37333c;
            case 0x373444u: goto label_373444;
            case 0x373460u: goto label_373460;
            case 0x3734E8u: goto label_3734e8;
            case 0x373564u: goto label_373564;
            case 0x3735ACu: goto label_3735ac;
            case 0x3735DCu: goto label_3735dc;
            case 0x3735E8u: goto label_3735e8;
            case 0x373610u: goto label_373610;
            default: break;
        }
        return;
    }
    ctx->pc = 0x372774u;
    // 0x372774: 0x0
    ctx->pc = 0x372774u;
    // NOP
    // 0x372778: 0x0
    ctx->pc = 0x372778u;
    // NOP
    // 0x37277c: 0x0
    ctx->pc = 0x37277cu;
    // NOP
label_372780:
    // 0x372780: 0x27bdfdf0
    ctx->pc = 0x372780u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x372784: 0xffbf00a0
    ctx->pc = 0x372784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x372788: 0x7fbe0090
    ctx->pc = 0x372788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x37278c: 0x7fb70080
    ctx->pc = 0x37278cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x372790: 0x7fb60070
    ctx->pc = 0x372790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x372794: 0x7fb50060
    ctx->pc = 0x372794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x372798: 0x7fb40050
    ctx->pc = 0x372798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x37279c: 0x80a82d
    ctx->pc = 0x37279cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3727a0: 0x7fb30040
    ctx->pc = 0x3727a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3727a4: 0x24040001
    ctx->pc = 0x3727a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x3727a8: 0x7fb20030
    ctx->pc = 0x3727a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3727ac: 0x7fb10020
    ctx->pc = 0x3727acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3727b0: 0x7fb00010
    ctx->pc = 0x3727b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3727b4: 0xc1ac574
    ctx->pc = 0x3727B4u;
    SET_GPR_U32(ctx, 31, 0x3727BCu);
    ctx->pc = 0x3727B8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->pc = 0x6B15D0u;
    {
        auto targetFn = runtime->lookupFunction(0x6B15D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3727BCu; }
        if (ctx->pc != 0x3727BCu) { return; }
    }
    ctx->pc = 0x3727BCu;
    // 0x3727bc: 0xc0dd46c
    ctx->pc = 0x3727BCu;
    SET_GPR_U32(ctx, 31, 0x3727C4u);
    ctx->pc = 0x3751B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_003751B0_0x3751b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3727C4u; }
    }
    if (ctx->pc != 0x3727C4u) { return; }
    ctx->pc = 0x3727C4u;
    // 0x3727c4: 0x8eb001f4
    ctx->pc = 0x3727c4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 21), 500)));
    // 0x3727c8: 0x8e140018
    ctx->pc = 0x3727c8u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3727cc: 0xc063f7c
    ctx->pc = 0x3727CCu;
    SET_GPR_U32(ctx, 31, 0x3727D4u);
    ctx->pc = 0x3727D0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 384));
    ctx->pc = 0x18FDF0u;
    {
        auto targetFn = runtime->lookupFunction(0x18FDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3727D4u; }
        if (ctx->pc != 0x3727D4u) { return; }
    }
    ctx->pc = 0x3727D4u;
    // 0x3727d4: 0x2404005f
    ctx->pc = 0x3727d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 95));
    // 0x3727d8: 0xc06bde0
    ctx->pc = 0x3727D8u;
    SET_GPR_U32(ctx, 31, 0x3727E0u);
    ctx->pc = 0x3727DCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3727E0u; }
        if (ctx->pc != 0x3727E0u) { return; }
    }
    ctx->pc = 0x3727E0u;
    // 0x3727e0: 0x24040060
    ctx->pc = 0x3727e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 96));
    // 0x3727e4: 0xc06bde0
    ctx->pc = 0x3727E4u;
    SET_GPR_U32(ctx, 31, 0x3727ECu);
    ctx->pc = 0x3727E8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3727ECu; }
        if (ctx->pc != 0x3727ECu) { return; }
    }
    ctx->pc = 0x3727ECu;
    // 0x3727ec: 0x8ea20200
    ctx->pc = 0x3727ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 512)));
    // 0x3727f0: 0x30420200
    ctx->pc = 0x3727f0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 512));
    // 0x3727f4: 0x10400019
    ctx->pc = 0x3727F4u;
    {
        const bool branch_taken_0x3727f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x3727f4) {
            ctx->pc = 0x37285Cu;
            goto label_37285c;
        }
    }
    ctx->pc = 0x3727FCu;
    // 0x3727fc: 0xc6a30218
    ctx->pc = 0x3727fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x372800: 0x27a40100
    ctx->pc = 0x372800u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 256));
    // 0x372804: 0xc6a20228
    ctx->pc = 0x372804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x372808: 0xc6a1021c
    ctx->pc = 0x372808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37280c: 0xc6a0022c
    ctx->pc = 0x37280cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372810: 0x4480a000
    ctx->pc = 0x372810u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x372814: 0x0
    ctx->pc = 0x372814u;
    // NOP
    // 0x372818: 0x4600a386
    ctx->pc = 0x372818u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x37281c: 0x46021b00
    ctx->pc = 0x37281cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x372820: 0xc063fc4
    ctx->pc = 0x372820u;
    SET_GPR_U32(ctx, 31, 0x372828u);
    ctx->pc = 0x372824u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x18FF10u;
    {
        auto targetFn = runtime->lookupFunction(0x18FF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372828u; }
        if (ctx->pc != 0x372828u) { return; }
    }
    ctx->pc = 0x372828u;
    // 0x372828: 0xc6ae0230
    ctx->pc = 0x372828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x37282c: 0x27a40100
    ctx->pc = 0x37282cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 256));
    // 0x372830: 0x4600a306
    ctx->pc = 0x372830u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x372834: 0xc0640b4
    ctx->pc = 0x372834u;
    SET_GPR_U32(ctx, 31, 0x37283Cu);
    ctx->pc = 0x372838u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1902D0u;
    {
        auto targetFn = runtime->lookupFunction(0x1902D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37283Cu; }
        if (ctx->pc != 0x37283Cu) { return; }
    }
    ctx->pc = 0x37283Cu;
    // 0x37283c: 0xc6ac0220
    ctx->pc = 0x37283cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x372840: 0x3c023f80
    ctx->pc = 0x372840u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x372844: 0xc6ad0224
    ctx->pc = 0x372844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x372848: 0x44827000
    ctx->pc = 0x372848u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x37284c: 0xc063ff8
    ctx->pc = 0x37284Cu;
    SET_GPR_U32(ctx, 31, 0x372854u);
    ctx->pc = 0x372850u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 256));
    ctx->pc = 0x18FFE0u;
    {
        auto targetFn = runtime->lookupFunction(0x18FFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372854u; }
        if (ctx->pc != 0x372854u) { return; }
    }
    ctx->pc = 0x372854u;
    // 0x372854: 0x1000000d
    ctx->pc = 0x372854u;
    {
        const bool branch_taken_0x372854 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x372858u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 256));
        if (branch_taken_0x372854) {
            ctx->pc = 0x37288Cu;
            goto label_37288c;
        }
    }
    ctx->pc = 0x37285Cu;
label_37285c:
    // 0x37285c: 0x4480a000
    ctx->pc = 0x37285cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x372860: 0x27a40100
    ctx->pc = 0x372860u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 256));
    // 0x372864: 0x4600a306
    ctx->pc = 0x372864u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x372868: 0x4600a346
    ctx->pc = 0x372868u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x37286c: 0xc063fc4
    ctx->pc = 0x37286Cu;
    SET_GPR_U32(ctx, 31, 0x372874u);
    ctx->pc = 0x372870u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x18FF10u;
    {
        auto targetFn = runtime->lookupFunction(0x18FF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372874u; }
        if (ctx->pc != 0x372874u) { return; }
    }
    ctx->pc = 0x372874u;
    // 0x372874: 0x4600a306
    ctx->pc = 0x372874u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x372878: 0x27a40100
    ctx->pc = 0x372878u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 256));
    // 0x37287c: 0x46006346
    ctx->pc = 0x37287cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x372880: 0xc0640b4
    ctx->pc = 0x372880u;
    SET_GPR_U32(ctx, 31, 0x372888u);
    ctx->pc = 0x372884u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1902D0u;
    {
        auto targetFn = runtime->lookupFunction(0x1902D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372888u; }
        if (ctx->pc != 0x372888u) { return; }
    }
    ctx->pc = 0x372888u;
    // 0x372888: 0x27a50100
    ctx->pc = 0x372888u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 256));
label_37288c:
    // 0x37288c: 0xc06bde0
    ctx->pc = 0x37288Cu;
    SET_GPR_U32(ctx, 31, 0x372894u);
    ctx->pc = 0x372890u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 25));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372894u; }
        if (ctx->pc != 0x372894u) { return; }
    }
    ctx->pc = 0x372894u;
    // 0x372894: 0x8ea20200
    ctx->pc = 0x372894u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 512)));
    // 0x372898: 0x30420400
    ctx->pc = 0x372898u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1024));
    // 0x37289c: 0x10400006
    ctx->pc = 0x37289Cu;
    {
        const bool branch_taken_0x37289c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x3728A0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x37289c) {
            ctx->pc = 0x3728B8u;
            goto label_3728b8;
        }
    }
    ctx->pc = 0x3728A4u;
    // 0x3728a4: 0x24040004
    ctx->pc = 0x3728a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x3728a8: 0xc06bc78
    ctx->pc = 0x3728A8u;
    SET_GPR_U32(ctx, 31, 0x3728B0u);
    ctx->pc = 0x3728ACu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1AF1E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3728B0u; }
        if (ctx->pc != 0x3728B0u) { return; }
    }
    ctx->pc = 0x3728B0u;
    // 0x3728b0: 0x10000004
    ctx->pc = 0x3728B0u;
    {
        const bool branch_taken_0x3728b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3728B4u;
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        if (branch_taken_0x3728b0) {
            ctx->pc = 0x3728C4u;
            goto label_3728c4;
        }
    }
    ctx->pc = 0x3728B8u;
label_3728b8:
    // 0x3728b8: 0xc06bc78
    ctx->pc = 0x3728B8u;
    SET_GPR_U32(ctx, 31, 0x3728C0u);
    ctx->pc = 0x3728BCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x1AF1E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3728C0u; }
        if (ctx->pc != 0x3728C0u) { return; }
    }
    ctx->pc = 0x3728C0u;
    // 0x3728c0: 0x82a30000
    ctx->pc = 0x3728c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_3728c4:
    // 0x3728c4: 0x106001db
    ctx->pc = 0x3728C4u;
    {
        const bool branch_taken_0x3728c4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x3728c4) {
            ctx->pc = 0x373034u;
            goto label_373034;
        }
    }
    ctx->pc = 0x3728CCu;
    // 0x3728cc: 0x82a30001
    ctx->pc = 0x3728ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
    // 0x3728d0: 0x106001d8
    ctx->pc = 0x3728D0u;
    {
        const bool branch_taken_0x3728d0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x3728d0) {
            ctx->pc = 0x373034u;
            goto label_373034;
        }
    }
    ctx->pc = 0x3728D8u;
    // 0x3728d8: 0x8ea30200
    ctx->pc = 0x3728d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 512)));
    // 0x3728dc: 0x30648000
    ctx->pc = 0x3728dcu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 3), 32768));
    // 0x3728e0: 0x108001d4
    ctx->pc = 0x3728E0u;
    {
        const bool branch_taken_0x3728e0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x3728E4u;
        SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 3), 16384));
        if (branch_taken_0x3728e0) {
            ctx->pc = 0x373034u;
            goto label_373034;
        }
    }
    ctx->pc = 0x3728E8u;
    // 0x3728e8: 0x11000003
    ctx->pc = 0x3728E8u;
    {
        const bool branch_taken_0x3728e8 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        if (branch_taken_0x3728e8) {
            ctx->pc = 0x3728F8u;
            goto label_3728f8;
        }
    }
    ctx->pc = 0x3728F0u;
    // 0x3728f0: 0x10000009
    ctx->pc = 0x3728F0u;
    {
        const bool branch_taken_0x3728f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3728F4u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 48)));
        if (branch_taken_0x3728f0) {
            ctx->pc = 0x372918u;
            goto label_372918;
        }
    }
    ctx->pc = 0x3728F8u;
label_3728f8:
    // 0x3728f8: 0x86a5023a
    ctx->pc = 0x3728f8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 570)));
    // 0x3728fc: 0x92a40030
    ctx->pc = 0x3728fcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x372900: 0x8e060018
    ctx->pc = 0x372900u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x372904: 0x52940
    ctx->pc = 0x372904u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 5));
    // 0x372908: 0x42040
    ctx->pc = 0x372908u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
    // 0x37290c: 0xa62821
    ctx->pc = 0x37290cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x372910: 0x852021
    ctx->pc = 0x372910u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x372914: 0x84841024
    ctx->pc = 0x372914u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4132)));
label_372918:
    // 0x372918: 0x43c3c
    ctx->pc = 0x372918u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << (32 + 16));
    // 0x37291c: 0x8e850808
    ctx->pc = 0x37291cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 2056)));
    // 0x372920: 0x73c3f
    ctx->pc = 0x372920u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x372924: 0x2404ffff
    ctx->pc = 0x372924u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x372928: 0x730c0
    ctx->pc = 0x372928u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 7), 3));
    // 0x37292c: 0xc73021
    ctx->pc = 0x37292cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x372930: 0x63040
    ctx->pc = 0x372930u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 1));
    // 0x372934: 0xc73021
    ctx->pc = 0x372934u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x372938: 0x688c0
    ctx->pc = 0x372938u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 6), 3));
    // 0x37293c: 0xb12821
    ctx->pc = 0x37293cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x372940: 0x8ca50000
    ctx->pc = 0x372940u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x372944: 0x10a401bb
    ctx->pc = 0x372944u;
    {
        const bool branch_taken_0x372944 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 4));
        if (branch_taken_0x372944) {
            ctx->pc = 0x373034u;
            goto label_373034;
        }
    }
    ctx->pc = 0x37294Cu;
    // 0x37294c: 0x10a001b9
    ctx->pc = 0x37294Cu;
    {
        const bool branch_taken_0x37294c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x37294c) {
            ctx->pc = 0x373034u;
            goto label_373034;
        }
    }
    ctx->pc = 0x372954u;
    // 0x372954: 0x11000061
    ctx->pc = 0x372954u;
    {
        const bool branch_taken_0x372954 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        ctx->pc = 0x372958u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x372954) {
            ctx->pc = 0x372ADCu;
            goto label_372adc;
        }
    }
    ctx->pc = 0x37295Cu;
    // 0x37295c: 0x30620040
    ctx->pc = 0x37295cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 64));
    // 0x372960: 0x1040005d
    ctx->pc = 0x372960u;
    {
        const bool branch_taken_0x372960 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x372960) {
            ctx->pc = 0x372AD8u;
            goto label_372ad8;
        }
    }
    ctx->pc = 0x372968u;
    // 0x372968: 0xc6a10214
    ctx->pc = 0x372968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37296c: 0x3c02437f
    ctx->pc = 0x37296cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17279 << 16));
    // 0x372970: 0x44821000
    ctx->pc = 0x372970u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x372974: 0x3c024f00
    ctx->pc = 0x372974u;
    SET_GPR_U32(ctx, 2, ((uint32_t)20224 << 16));
    // 0x372978: 0x44820000
    ctx->pc = 0x372978u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x37297c: 0x0
    ctx->pc = 0x37297cu;
    // NOP
    // 0x372980: 0x46011042
    ctx->pc = 0x372980u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x372984: 0x46010036
    ctx->pc = 0x372984u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x372988: 0x45010005
    ctx->pc = 0x372988u;
    {
        const bool branch_taken_0x372988 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x372988) {
            ctx->pc = 0x3729A0u;
            goto label_3729a0;
        }
    }
    ctx->pc = 0x372990u;
    // 0x372990: 0x46000864
    ctx->pc = 0x372990u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x372994: 0x44030800
    ctx->pc = 0x372994u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x372998: 0x10000008
    ctx->pc = 0x372998u;
    {
        const bool branch_taken_0x372998 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37299Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 24));
        if (branch_taken_0x372998) {
            ctx->pc = 0x3729BCu;
            goto label_3729bc;
        }
    }
    ctx->pc = 0x3729A0u;
label_3729a0:
    // 0x3729a0: 0x46000841
    ctx->pc = 0x3729a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3729a4: 0x3c028000
    ctx->pc = 0x3729a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x3729a8: 0x46000864
    ctx->pc = 0x3729a8u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x3729ac: 0x44030800
    ctx->pc = 0x3729acu;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x3729b0: 0x0
    ctx->pc = 0x3729b0u;
    // NOP
    // 0x3729b4: 0x621825
    ctx->pc = 0x3729b4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3729b8: 0x31e00
    ctx->pc = 0x3729b8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 24));
label_3729bc:
    // 0x3729bc: 0x3c02437f
    ctx->pc = 0x3729bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17279 << 16));
    // 0x3729c0: 0xafa3020c
    ctx->pc = 0x3729c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 3));
    // 0x3729c4: 0x44821000
    ctx->pc = 0x3729c4u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x3729c8: 0xc6a10208
    ctx->pc = 0x3729c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3729cc: 0x3c024f00
    ctx->pc = 0x3729ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)20224 << 16));
    // 0x3729d0: 0x44820000
    ctx->pc = 0x3729d0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x3729d4: 0x0
    ctx->pc = 0x3729d4u;
    // NOP
    // 0x3729d8: 0x46011042
    ctx->pc = 0x3729d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3729dc: 0x46010036
    ctx->pc = 0x3729dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3729e0: 0x45010005
    ctx->pc = 0x3729E0u;
    {
        const bool branch_taken_0x3729e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3729e0) {
            ctx->pc = 0x3729F8u;
            goto label_3729f8;
        }
    }
    ctx->pc = 0x3729E8u;
    // 0x3729e8: 0x46000864
    ctx->pc = 0x3729e8u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x3729ec: 0x44030800
    ctx->pc = 0x3729ecu;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x3729f0: 0x10000008
    ctx->pc = 0x3729F0u;
    {
        const bool branch_taken_0x3729f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3729F4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 524)));
        if (branch_taken_0x3729f0) {
            ctx->pc = 0x372A14u;
            goto label_372a14;
        }
    }
    ctx->pc = 0x3729F8u;
label_3729f8:
    // 0x3729f8: 0x46000841
    ctx->pc = 0x3729f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3729fc: 0x3c028000
    ctx->pc = 0x3729fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x372a00: 0x46000864
    ctx->pc = 0x372a00u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x372a04: 0x44030800
    ctx->pc = 0x372a04u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x372a08: 0x0
    ctx->pc = 0x372a08u;
    // NOP
    // 0x372a0c: 0x621825
    ctx->pc = 0x372a0cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x372a10: 0x8fa4020c
    ctx->pc = 0x372a10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_372a14:
    // 0x372a14: 0x3c024f00
    ctx->pc = 0x372a14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)20224 << 16));
    // 0x372a18: 0x32c00
    ctx->pc = 0x372a18u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 16));
    // 0x372a1c: 0x44820000
    ctx->pc = 0x372a1cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x372a20: 0x3c03437f
    ctx->pc = 0x372a20u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17279 << 16));
    // 0x372a24: 0x44831000
    ctx->pc = 0x372a24u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
    // 0x372a28: 0x851025
    ctx->pc = 0x372a28u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x372a2c: 0xafa2020c
    ctx->pc = 0x372a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 2));
    // 0x372a30: 0xc6a1020c
    ctx->pc = 0x372a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x372a34: 0x46011042
    ctx->pc = 0x372a34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x372a38: 0x46010036
    ctx->pc = 0x372a38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x372a3c: 0x45010005
    ctx->pc = 0x372A3Cu;
    {
        const bool branch_taken_0x372a3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x372a3c) {
            ctx->pc = 0x372A54u;
            goto label_372a54;
        }
    }
    ctx->pc = 0x372A44u;
    // 0x372a44: 0x46000864
    ctx->pc = 0x372a44u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x372a48: 0x44030800
    ctx->pc = 0x372a48u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x372a4c: 0x10000008
    ctx->pc = 0x372A4Cu;
    {
        const bool branch_taken_0x372a4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x372A50u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 524)));
        if (branch_taken_0x372a4c) {
            ctx->pc = 0x372A70u;
            goto label_372a70;
        }
    }
    ctx->pc = 0x372A54u;
label_372a54:
    // 0x372a54: 0x46000841
    ctx->pc = 0x372a54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x372a58: 0x3c028000
    ctx->pc = 0x372a58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x372a5c: 0x46000864
    ctx->pc = 0x372a5cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x372a60: 0x44030800
    ctx->pc = 0x372a60u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x372a64: 0x0
    ctx->pc = 0x372a64u;
    // NOP
    // 0x372a68: 0x621825
    ctx->pc = 0x372a68u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x372a6c: 0x8fa4020c
    ctx->pc = 0x372a6cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_372a70:
    // 0x372a70: 0x3c024f00
    ctx->pc = 0x372a70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)20224 << 16));
    // 0x372a74: 0x32a00
    ctx->pc = 0x372a74u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 8));
    // 0x372a78: 0x44820000
    ctx->pc = 0x372a78u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x372a7c: 0x3c03437f
    ctx->pc = 0x372a7cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)17279 << 16));
    // 0x372a80: 0x44831000
    ctx->pc = 0x372a80u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
    // 0x372a84: 0x851025
    ctx->pc = 0x372a84u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x372a88: 0xafa2020c
    ctx->pc = 0x372a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 2));
    // 0x372a8c: 0xc6a10210
    ctx->pc = 0x372a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x372a90: 0x46011042
    ctx->pc = 0x372a90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x372a94: 0x46010036
    ctx->pc = 0x372a94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x372a98: 0x45010005
    ctx->pc = 0x372A98u;
    {
        const bool branch_taken_0x372a98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x372a98) {
            ctx->pc = 0x372AB0u;
            goto label_372ab0;
        }
    }
    ctx->pc = 0x372AA0u;
    // 0x372aa0: 0x46000864
    ctx->pc = 0x372aa0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x372aa4: 0x44030800
    ctx->pc = 0x372aa4u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x372aa8: 0x10000008
    ctx->pc = 0x372AA8u;
    {
        const bool branch_taken_0x372aa8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x372AACu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 524)));
        if (branch_taken_0x372aa8) {
            ctx->pc = 0x372ACCu;
            goto label_372acc;
        }
    }
    ctx->pc = 0x372AB0u;
label_372ab0:
    // 0x372ab0: 0x46000841
    ctx->pc = 0x372ab0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x372ab4: 0x3c028000
    ctx->pc = 0x372ab4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x372ab8: 0x46000864
    ctx->pc = 0x372ab8u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x372abc: 0x44030800
    ctx->pc = 0x372abcu;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x372ac0: 0x0
    ctx->pc = 0x372ac0u;
    // NOP
    // 0x372ac4: 0x621825
    ctx->pc = 0x372ac4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x372ac8: 0x8fa2020c
    ctx->pc = 0x372ac8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_372acc:
    // 0x372acc: 0x431025
    ctx->pc = 0x372accu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x372ad0: 0x10000003
    ctx->pc = 0x372AD0u;
    {
        const bool branch_taken_0x372ad0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x372AD4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 2));
        if (branch_taken_0x372ad0) {
            ctx->pc = 0x372AE0u;
            goto label_372ae0;
        }
    }
    ctx->pc = 0x372AD8u;
label_372ad8:
    // 0x372ad8: 0x2402ffff
    ctx->pc = 0x372ad8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_372adc:
    // 0x372adc: 0xafa2020c
    ctx->pc = 0x372adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 2));
label_372ae0:
    // 0x372ae0: 0x8e820808
    ctx->pc = 0x372ae0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 2056)));
    // 0x372ae4: 0x2222021
    ctx->pc = 0x372ae4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x372ae8: 0x90820088
    ctx->pc = 0x372ae8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x372aec: 0x10400004
    ctx->pc = 0x372AECu;
    {
        const bool branch_taken_0x372aec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x372AF0u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x372aec) {
            ctx->pc = 0x372B00u;
            goto label_372b00;
        }
    }
    ctx->pc = 0x372AF4u;
    // 0x372af4: 0xc0dd2c8
    ctx->pc = 0x372AF4u;
    SET_GPR_U32(ctx, 31, 0x372AFCu);
    ctx->pc = 0x372AF8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 524));
    ctx->pc = 0x374B20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00374B20_0x374b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372AFCu; }
    }
    if (ctx->pc != 0x372AFCu) { return; }
    ctx->pc = 0x372AFCu;
    // 0x372afc: 0x982d
    ctx->pc = 0x372afcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_372b00:
    // 0x372b00: 0x27b200c0
    ctx->pc = 0x372b00u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 192));
    // 0x372b04: 0x27b000b4
    ctx->pc = 0x372b04u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 180));
    // 0x372b08: 0x27b600b8
    ctx->pc = 0x372b08u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 29), 184));
    // 0x372b0c: 0x27b700bc
    ctx->pc = 0x372b0cu;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 29), 188));
    // 0x372b10: 0x1000002e
    ctx->pc = 0x372B10u;
    {
        const bool branch_taken_0x372b10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x372B14u;
        SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 29), 176));
        if (branch_taken_0x372b10) {
            ctx->pc = 0x372BCCu;
            goto label_372bcc;
        }
    }
    ctx->pc = 0x372B18u;
label_372b18:
    // 0x372b18: 0x3c02004f
    ctx->pc = 0x372b18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)79 << 16));
    // 0x372b1c: 0x831821
    ctx->pc = 0x372b1cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x372b20: 0x2442dd90
    ctx->pc = 0x372b20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958480));
    // 0x372b24: 0x8c630008
    ctx->pc = 0x372b24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x372b28: 0x27a400b0
    ctx->pc = 0x372b28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 176));
    // 0x372b2c: 0x2406004c
    ctx->pc = 0x372b2cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 76));
    // 0x372b30: 0x31840
    ctx->pc = 0x372b30u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x372b34: 0x2831821
    ctx->pc = 0x372b34u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x372b38: 0x94650008
    ctx->pc = 0x372b38u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x372b3c: 0x518c0
    ctx->pc = 0x372b3cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x372b40: 0x651821
    ctx->pc = 0x372b40u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x372b44: 0x31840
    ctx->pc = 0x372b44u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x372b48: 0x651821
    ctx->pc = 0x372b48u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x372b4c: 0x31880
    ctx->pc = 0x372b4cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x372b50: 0xc041eac
    ctx->pc = 0x372B50u;
    SET_GPR_U32(ctx, 31, 0x372B58u);
    ctx->pc = 0x372B54u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x107AB0u;
    {
        auto targetFn = runtime->lookupFunction(0x107AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372B58u; }
        if (ctx->pc != 0x372B58u) { return; }
    }
    ctx->pc = 0x372B58u;
    // 0x372b58: 0x8ea20200
    ctx->pc = 0x372b58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 512)));
    // 0x372b5c: 0x30420080
    ctx->pc = 0x372b5cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 128));
    // 0x372b60: 0x10400003
    ctx->pc = 0x372B60u;
    {
        const bool branch_taken_0x372b60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x372b60) {
            ctx->pc = 0x372B70u;
            goto label_372b70;
        }
    }
    ctx->pc = 0x372B68u;
    // 0x372b68: 0xc6a00214
    ctx->pc = 0x372b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372b6c: 0xe6400000
    ctx->pc = 0x372b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_372b70:
    // 0x372b70: 0x8ea20200
    ctx->pc = 0x372b70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 512)));
    // 0x372b74: 0x30420040
    ctx->pc = 0x372b74u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64));
    // 0x372b78: 0x10400007
    ctx->pc = 0x372B78u;
    {
        const bool branch_taken_0x372b78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x372B7Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 58));
        if (branch_taken_0x372b78) {
            ctx->pc = 0x372B98u;
            goto label_372b98;
        }
    }
    ctx->pc = 0x372B80u;
    // 0x372b80: 0xc6a00208
    ctx->pc = 0x372b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372b84: 0xe6000000
    ctx->pc = 0x372b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x372b88: 0xc6a0020c
    ctx->pc = 0x372b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372b8c: 0xe6c00000
    ctx->pc = 0x372b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x372b90: 0xc6a00210
    ctx->pc = 0x372b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372b94: 0xe6e00000
    ctx->pc = 0x372b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_372b98:
    // 0x372b98: 0x3c0282d
    ctx->pc = 0x372b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372b9c: 0xc06bde0
    ctx->pc = 0x372B9Cu;
    SET_GPR_U32(ctx, 31, 0x372BA4u);
    ctx->pc = 0x372BA0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 255));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372BA4u; }
        if (ctx->pc != 0x372BA4u) { return; }
    }
    ctx->pc = 0x372BA4u;
    // 0x372ba4: 0x27a200f4
    ctx->pc = 0x372ba4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 244));
    // 0x372ba8: 0x8c460000
    ctx->pc = 0x372ba8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x372bac: 0x10c00006
    ctx->pc = 0x372BACu;
    {
        const bool branch_taken_0x372bac = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x372bac) {
            ctx->pc = 0x372BC8u;
            goto label_372bc8;
        }
    }
    ctx->pc = 0x372BB4u;
    // 0x372bb4: 0x8e820808
    ctx->pc = 0x372bb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 2056)));
    // 0x372bb8: 0x2221021
    ctx->pc = 0x372bb8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x372bbc: 0x8c440000
    ctx->pc = 0x372bbcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x372bc0: 0xc06cce8
    ctx->pc = 0x372BC0u;
    SET_GPR_U32(ctx, 31, 0x372BC8u);
    ctx->pc = 0x372BC4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B33A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1B33A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372BC8u; }
        if (ctx->pc != 0x372BC8u) { return; }
    }
    ctx->pc = 0x372BC8u;
label_372bc8:
    // 0x372bc8: 0x26730001
    ctx->pc = 0x372bc8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_372bcc:
    // 0x372bcc: 0x8e820808
    ctx->pc = 0x372bccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 2056)));
    // 0x372bd0: 0x2222021
    ctx->pc = 0x372bd0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x372bd4: 0x8c820004
    ctx->pc = 0x372bd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x372bd8: 0x262102a
    ctx->pc = 0x372bd8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 2)));
    // 0x372bdc: 0x1440ffce
    ctx->pc = 0x372BDCu;
    {
        const bool branch_taken_0x372bdc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x372BE0u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
        if (branch_taken_0x372bdc) {
            ctx->pc = 0x372B18u;
            goto label_372b18;
        }
    }
    ctx->pc = 0x372BE4u;
    // 0x372be4: 0xafa00200
    ctx->pc = 0x372be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 0));
    // 0x372be8: 0x27b60204
    ctx->pc = 0x372be8u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 29), 516));
    // 0x372bec: 0xaec00000
    ctx->pc = 0x372becu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x372bf0: 0x27b00208
    ctx->pc = 0x372bf0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 520));
    // 0x372bf4: 0xae000000
    ctx->pc = 0x372bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x372bf8: 0x8ea30200
    ctx->pc = 0x372bf8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 512)));
    // 0x372bfc: 0x30624000
    ctx->pc = 0x372bfcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16384));
    // 0x372c00: 0x104000a0
    ctx->pc = 0x372C00u;
    {
        const bool branch_taken_0x372c00 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x372C04u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 384));
        if (branch_taken_0x372c00) {
            ctx->pc = 0x372E84u;
            goto label_372e84;
        }
    }
    ctx->pc = 0x372C08u;
    // 0x372c08: 0x30620800
    ctx->pc = 0x372c08u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2048));
    // 0x372c0c: 0x10400036
    ctx->pc = 0x372C0Cu;
    {
        const bool branch_taken_0x372c0c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x372C10u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 4096));
        if (branch_taken_0x372c0c) {
            ctx->pc = 0x372CE8u;
            goto label_372ce8;
        }
    }
    ctx->pc = 0x372C14u;
    // 0x372c14: 0x1040000e
    ctx->pc = 0x372C14u;
    {
        const bool branch_taken_0x372c14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x372c14) {
            ctx->pc = 0x372C50u;
            goto label_372c50;
        }
    }
    ctx->pc = 0x372C1Cu;
    // 0x372c1c: 0x8ea501f0
    ctx->pc = 0x372c1cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 496)));
    // 0x372c20: 0xc064038
    ctx->pc = 0x372C20u;
    SET_GPR_U32(ctx, 31, 0x372C28u);
    ctx->pc = 0x372C24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 512));
    ctx->pc = 0x1900E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1900E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372C28u; }
        if (ctx->pc != 0x372C28u) { return; }
    }
    ctx->pc = 0x372C28u;
    // 0x372c28: 0x8ea501f0
    ctx->pc = 0x372c28u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 496)));
    // 0x372c2c: 0xc064540
    ctx->pc = 0x372C2Cu;
    SET_GPR_U32(ctx, 31, 0x372C34u);
    ctx->pc = 0x372C30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 320));
    ctx->pc = 0x191500u;
    {
        auto targetFn = runtime->lookupFunction(0x191500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372C34u; }
        if (ctx->pc != 0x372C34u) { return; }
    }
    ctx->pc = 0x372C34u;
    // 0x372c34: 0x44806000
    ctx->pc = 0x372c34u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x372c38: 0x27a40140
    ctx->pc = 0x372c38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 320));
    // 0x372c3c: 0x46006346
    ctx->pc = 0x372c3cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x372c40: 0xc064018
    ctx->pc = 0x372C40u;
    SET_GPR_U32(ctx, 31, 0x372C48u);
    ctx->pc = 0x372C44u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x190060u;
    {
        auto targetFn = runtime->lookupFunction(0x190060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372C48u; }
        if (ctx->pc != 0x372C48u) { return; }
    }
    ctx->pc = 0x372C48u;
    // 0x372c48: 0x10000039
    ctx->pc = 0x372C48u;
    {
        const bool branch_taken_0x372c48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x372C4Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 384));
        if (branch_taken_0x372c48) {
            ctx->pc = 0x372D30u;
            goto label_372d30;
        }
    }
    ctx->pc = 0x372C50u;
label_372c50:
    // 0x372c50: 0x8ea501f0
    ctx->pc = 0x372c50u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 496)));
    // 0x372c54: 0x10a00004
    ctx->pc = 0x372C54u;
    {
        const bool branch_taken_0x372c54 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x372C58u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 320));
        if (branch_taken_0x372c54) {
            ctx->pc = 0x372C68u;
            goto label_372c68;
        }
    }
    ctx->pc = 0x372C5Cu;
    // 0x372c5c: 0xc064038
    ctx->pc = 0x372C5Cu;
    SET_GPR_U32(ctx, 31, 0x372C64u);
    ctx->pc = 0x372C60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 512));
    ctx->pc = 0x1900E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1900E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372C64u; }
        if (ctx->pc != 0x372C64u) { return; }
    }
    ctx->pc = 0x372C64u;
    // 0x372c64: 0x27a40140
    ctx->pc = 0x372c64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 320));
label_372c68:
    // 0x372c68: 0xc063f7c
    ctx->pc = 0x372C68u;
    SET_GPR_U32(ctx, 31, 0x372C70u);
    ctx->pc = 0x18FDF0u;
    {
        auto targetFn = runtime->lookupFunction(0x18FDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372C70u; }
        if (ctx->pc != 0x372C70u) { return; }
    }
    ctx->pc = 0x372C70u;
    // 0x372c70: 0x3c010032
    ctx->pc = 0x372c70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x372c74: 0x27a40200
    ctx->pc = 0x372c74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 512));
    // 0x372c78: 0xc4224138
    ctx->pc = 0x372c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x372c7c: 0x27a501f0
    ctx->pc = 0x372c7cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 496));
    // 0x372c80: 0x3c010032
    ctx->pc = 0x372c80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x372c84: 0xc421413c
    ctx->pc = 0x372c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x372c88: 0xe7a201f0
    ctx->pc = 0x372c88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x372c8c: 0x3c010032
    ctx->pc = 0x372c8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x372c90: 0xc4204140
    ctx->pc = 0x372c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372c94: 0xe7a101f4
    ctx->pc = 0x372c94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
    // 0x372c98: 0xc0dc068
    ctx->pc = 0x372C98u;
    SET_GPR_U32(ctx, 31, 0x372CA0u);
    ctx->pc = 0x372C9Cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    ctx->pc = 0x3701A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_003701A0_0x3701a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372CA0u; }
    }
    if (ctx->pc != 0x372CA0u) { return; }
    ctx->pc = 0x372CA0u;
    // 0x372ca0: 0x3c030001
    ctx->pc = 0x372ca0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x372ca4: 0x27a40200
    ctx->pc = 0x372ca4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 512));
    // 0x372ca8: 0x629823
    ctx->pc = 0x372ca8u;
    SET_GPR_U32(ctx, 19, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x372cac: 0xc0dc050
    ctx->pc = 0x372CACu;
    SET_GPR_U32(ctx, 31, 0x372CB4u);
    ctx->pc = 0x372CB0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 496));
    ctx->pc = 0x370140u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370140_0x370140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372CB4u; }
    }
    if (ctx->pc != 0x372CB4u) { return; }
    ctx->pc = 0x372CB4u;
    // 0x372cb4: 0x40902d
    ctx->pc = 0x372cb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372cb8: 0xc0647e0
    ctx->pc = 0x372CB8u;
    SET_GPR_U32(ctx, 31, 0x372CC0u);
    ctx->pc = 0x372CBCu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 19), 65535));
    ctx->pc = 0x191F80u;
    {
        auto targetFn = runtime->lookupFunction(0x191F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372CC0u; }
        if (ctx->pc != 0x372CC0u) { return; }
    }
    ctx->pc = 0x372CC0u;
    // 0x372cc0: 0x46000306
    ctx->pc = 0x372cc0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x372cc4: 0xc064040
    ctx->pc = 0x372CC4u;
    SET_GPR_U32(ctx, 31, 0x372CCCu);
    ctx->pc = 0x372CC8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 320));
    ctx->pc = 0x190100u;
    {
        auto targetFn = runtime->lookupFunction(0x190100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372CCCu; }
        if (ctx->pc != 0x372CCCu) { return; }
    }
    ctx->pc = 0x372CCCu;
    // 0x372ccc: 0xc0647e0
    ctx->pc = 0x372CCCu;
    SET_GPR_U32(ctx, 31, 0x372CD4u);
    ctx->pc = 0x372CD0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 18), 65535));
    ctx->pc = 0x191F80u;
    {
        auto targetFn = runtime->lookupFunction(0x191F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372CD4u; }
        if (ctx->pc != 0x372CD4u) { return; }
    }
    ctx->pc = 0x372CD4u;
    // 0x372cd4: 0x46000306
    ctx->pc = 0x372cd4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x372cd8: 0xc064068
    ctx->pc = 0x372CD8u;
    SET_GPR_U32(ctx, 31, 0x372CE0u);
    ctx->pc = 0x372CDCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 320));
    ctx->pc = 0x1901A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1901A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372CE0u; }
        if (ctx->pc != 0x372CE0u) { return; }
    }
    ctx->pc = 0x372CE0u;
    // 0x372ce0: 0x10000012
    ctx->pc = 0x372CE0u;
    {
        const bool branch_taken_0x372ce0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x372ce0) {
            ctx->pc = 0x372D2Cu;
            goto label_372d2c;
        }
    }
    ctx->pc = 0x372CE8u;
label_372ce8:
    // 0x372ce8: 0x8ea501f0
    ctx->pc = 0x372ce8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 496)));
    // 0x372cec: 0x10a0000d
    ctx->pc = 0x372CECu;
    {
        const bool branch_taken_0x372cec = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x372CF0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 320));
        if (branch_taken_0x372cec) {
            ctx->pc = 0x372D24u;
            goto label_372d24;
        }
    }
    ctx->pc = 0x372CF4u;
    // 0x372cf4: 0xc064540
    ctx->pc = 0x372CF4u;
    SET_GPR_U32(ctx, 31, 0x372CFCu);
    ctx->pc = 0x372CF8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 320));
    ctx->pc = 0x191500u;
    {
        auto targetFn = runtime->lookupFunction(0x191500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372CFCu; }
        if (ctx->pc != 0x372CFCu) { return; }
    }
    ctx->pc = 0x372CFCu;
    // 0x372cfc: 0x27a40200
    ctx->pc = 0x372cfcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 512));
    // 0x372d00: 0xc064038
    ctx->pc = 0x372D00u;
    SET_GPR_U32(ctx, 31, 0x372D08u);
    ctx->pc = 0x372D04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 320));
    ctx->pc = 0x1900E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1900E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372D08u; }
        if (ctx->pc != 0x372D08u) { return; }
    }
    ctx->pc = 0x372D08u;
    // 0x372d08: 0x44806000
    ctx->pc = 0x372d08u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x372d0c: 0x27a40140
    ctx->pc = 0x372d0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 320));
    // 0x372d10: 0x46006346
    ctx->pc = 0x372d10u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x372d14: 0xc064018
    ctx->pc = 0x372D14u;
    SET_GPR_U32(ctx, 31, 0x372D1Cu);
    ctx->pc = 0x372D18u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x190060u;
    {
        auto targetFn = runtime->lookupFunction(0x190060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372D1Cu; }
        if (ctx->pc != 0x372D1Cu) { return; }
    }
    ctx->pc = 0x372D1Cu;
    // 0x372d1c: 0x10000003
    ctx->pc = 0x372D1Cu;
    {
        const bool branch_taken_0x372d1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x372d1c) {
            ctx->pc = 0x372D2Cu;
            goto label_372d2c;
        }
    }
    ctx->pc = 0x372D24u;
label_372d24:
    // 0x372d24: 0xc063f7c
    ctx->pc = 0x372D24u;
    SET_GPR_U32(ctx, 31, 0x372D2Cu);
    ctx->pc = 0x18FDF0u;
    {
        auto targetFn = runtime->lookupFunction(0x18FDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372D2Cu; }
        if (ctx->pc != 0x372D2Cu) { return; }
    }
    ctx->pc = 0x372D2Cu;
label_372d2c:
    // 0x372d2c: 0x27a40180
    ctx->pc = 0x372d2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 384));
label_372d30:
    // 0x372d30: 0xc063f7c
    ctx->pc = 0x372D30u;
    SET_GPR_U32(ctx, 31, 0x372D38u);
    ctx->pc = 0x18FDF0u;
    {
        auto targetFn = runtime->lookupFunction(0x18FDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372D38u; }
        if (ctx->pc != 0x372D38u) { return; }
    }
    ctx->pc = 0x372D38u;
    // 0x372d38: 0x27a40180
    ctx->pc = 0x372d38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 384));
    // 0x372d3c: 0xc064008
    ctx->pc = 0x372D3Cu;
    SET_GPR_U32(ctx, 31, 0x372D44u);
    ctx->pc = 0x372D40u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 21), 180));
    ctx->pc = 0x190020u;
    {
        auto targetFn = runtime->lookupFunction(0x190020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372D44u; }
        if (ctx->pc != 0x372D44u) { return; }
    }
    ctx->pc = 0x372D44u;
    // 0x372d44: 0x86a40090
    ctx->pc = 0x372d44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 144)));
    // 0x372d48: 0x86a50092
    ctx->pc = 0x372d48u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
    // 0x372d4c: 0x86a60094
    ctx->pc = 0x372d4cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 148)));
    // 0x372d50: 0xc0dc088
    ctx->pc = 0x372D50u;
    SET_GPR_U32(ctx, 31, 0x372D58u);
    ctx->pc = 0x372D54u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 384));
    ctx->pc = 0x370220u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370220_0x370220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372D58u; }
    }
    if (ctx->pc != 0x372D58u) { return; }
    ctx->pc = 0x372D58u;
    // 0x372d58: 0x27a40180
    ctx->pc = 0x372d58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 384));
    // 0x372d5c: 0xc0644f8
    ctx->pc = 0x372D5Cu;
    SET_GPR_U32(ctx, 31, 0x372D64u);
    ctx->pc = 0x372D60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 320));
    ctx->pc = 0x1913E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1913E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372D64u; }
        if (ctx->pc != 0x372D64u) { return; }
    }
    ctx->pc = 0x372D64u;
    // 0x372d64: 0xc6ac0038
    ctx->pc = 0x372d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x372d68: 0xc6ad003c
    ctx->pc = 0x372d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x372d6c: 0xc6ae0040
    ctx->pc = 0x372d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x372d70: 0xc06401c
    ctx->pc = 0x372D70u;
    SET_GPR_U32(ctx, 31, 0x372D78u);
    ctx->pc = 0x372D74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 384));
    ctx->pc = 0x190070u;
    {
        auto targetFn = runtime->lookupFunction(0x190070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372D78u; }
        if (ctx->pc != 0x372D78u) { return; }
    }
    ctx->pc = 0x372D78u;
    // 0x372d78: 0xc6cd0000
    ctx->pc = 0x372d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x372d7c: 0xc60e0000
    ctx->pc = 0x372d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x372d80: 0xc7ac0200
    ctx->pc = 0x372d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x372d84: 0xc06401c
    ctx->pc = 0x372D84u;
    SET_GPR_U32(ctx, 31, 0x372D8Cu);
    ctx->pc = 0x372D88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 384));
    ctx->pc = 0x190070u;
    {
        auto targetFn = runtime->lookupFunction(0x190070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372D8Cu; }
        if (ctx->pc != 0x372D8Cu) { return; }
    }
    ctx->pc = 0x372D8Cu;
    // 0x372d8c: 0x8ea30200
    ctx->pc = 0x372d8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 512)));
    // 0x372d90: 0x30620800
    ctx->pc = 0x372d90u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2048));
    // 0x372d94: 0x1040006c
    ctx->pc = 0x372D94u;
    {
        const bool branch_taken_0x372d94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x372D98u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 4096));
        if (branch_taken_0x372d94) {
            ctx->pc = 0x372F48u;
            goto label_372f48;
        }
    }
    ctx->pc = 0x372D9Cu;
    // 0x372d9c: 0x1040006a
    ctx->pc = 0x372D9Cu;
    {
        const bool branch_taken_0x372d9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x372DA0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 256));
        if (branch_taken_0x372d9c) {
            ctx->pc = 0x372F48u;
            goto label_372f48;
        }
    }
    ctx->pc = 0x372DA4u;
    // 0x372da4: 0xc06450c
    ctx->pc = 0x372DA4u;
    SET_GPR_U32(ctx, 31, 0x372DACu);
    ctx->pc = 0x372DA8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 384));
    ctx->pc = 0x191430u;
    {
        auto targetFn = runtime->lookupFunction(0x191430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372DACu; }
        if (ctx->pc != 0x372DACu) { return; }
    }
    ctx->pc = 0x372DACu;
    // 0x372dac: 0x27a401c0
    ctx->pc = 0x372dacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 448));
    // 0x372db0: 0xc064038
    ctx->pc = 0x372DB0u;
    SET_GPR_U32(ctx, 31, 0x372DB8u);
    ctx->pc = 0x372DB4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 384));
    ctx->pc = 0x1900E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1900E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372DB8u; }
        if (ctx->pc != 0x372DB8u) { return; }
    }
    ctx->pc = 0x372DB8u;
    // 0x372db8: 0x3c010032
    ctx->pc = 0x372db8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x372dbc: 0x27a401e0
    ctx->pc = 0x372dbcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 480));
    // 0x372dc0: 0xc4254138
    ctx->pc = 0x372dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x372dc4: 0x27a501d0
    ctx->pc = 0x372dc4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 464));
    // 0x372dc8: 0xc7a401c0
    ctx->pc = 0x372dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x372dcc: 0x27a60100
    ctx->pc = 0x372dccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 256));
    // 0x372dd0: 0xc7a201c4
    ctx->pc = 0x372dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x372dd4: 0xc7a001c8
    ctx->pc = 0x372dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372dd8: 0x3c010032
    ctx->pc = 0x372dd8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x372ddc: 0xc423413c
    ctx->pc = 0x372ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x372de0: 0x46042901
    ctx->pc = 0x372de0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x372de4: 0xe7a401d0
    ctx->pc = 0x372de4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x372de8: 0x3c010032
    ctx->pc = 0x372de8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x372dec: 0xc4214140
    ctx->pc = 0x372decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x372df0: 0x46021881
    ctx->pc = 0x372df0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x372df4: 0xe7a201d4
    ctx->pc = 0x372df4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
    // 0x372df8: 0x46000801
    ctx->pc = 0x372df8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x372dfc: 0xc064674
    ctx->pc = 0x372DFCu;
    SET_GPR_U32(ctx, 31, 0x372E04u);
    ctx->pc = 0x372E00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    ctx->pc = 0x1919D0u;
    {
        auto targetFn = runtime->lookupFunction(0x1919D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372E04u; }
        if (ctx->pc != 0x372E04u) { return; }
    }
    ctx->pc = 0x372E04u;
    // 0x372e04: 0x27b201d8
    ctx->pc = 0x372e04u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 472));
    // 0x372e08: 0x27b001d4
    ctx->pc = 0x372e08u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 468));
    // 0x372e0c: 0xe6540000
    ctx->pc = 0x372e0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x372e10: 0x27a401d0
    ctx->pc = 0x372e10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 464));
    // 0x372e14: 0xe6140000
    ctx->pc = 0x372e14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x372e18: 0x27a501e0
    ctx->pc = 0x372e18u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 480));
    // 0x372e1c: 0xc0dc050
    ctx->pc = 0x372E1Cu;
    SET_GPR_U32(ctx, 31, 0x372E24u);
    ctx->pc = 0x372E20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    ctx->pc = 0x370140u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370140_0x370140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372E24u; }
    }
    if (ctx->pc != 0x372E24u) { return; }
    ctx->pc = 0x372E24u;
    // 0x372e24: 0x40982d
    ctx->pc = 0x372e24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372e28: 0xc063f7c
    ctx->pc = 0x372E28u;
    SET_GPR_U32(ctx, 31, 0x372E30u);
    ctx->pc = 0x372E2Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 256));
    ctx->pc = 0x18FDF0u;
    {
        auto targetFn = runtime->lookupFunction(0x18FDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372E30u; }
        if (ctx->pc != 0x372E30u) { return; }
    }
    ctx->pc = 0x372E30u;
    // 0x372e30: 0xc0647e0
    ctx->pc = 0x372E30u;
    SET_GPR_U32(ctx, 31, 0x372E38u);
    ctx->pc = 0x372E34u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 19), 65535));
    ctx->pc = 0x191F80u;
    {
        auto targetFn = runtime->lookupFunction(0x191F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372E38u; }
        if (ctx->pc != 0x372E38u) { return; }
    }
    ctx->pc = 0x372E38u;
    // 0x372e38: 0x46000306
    ctx->pc = 0x372e38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x372e3c: 0xc064068
    ctx->pc = 0x372E3Cu;
    SET_GPR_U32(ctx, 31, 0x372E44u);
    ctx->pc = 0x372E40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 256));
    ctx->pc = 0x1901A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1901A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372E44u; }
        if (ctx->pc != 0x372E44u) { return; }
    }
    ctx->pc = 0x372E44u;
    // 0x372e44: 0x27a401d0
    ctx->pc = 0x372e44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 464));
    // 0x372e48: 0xc064038
    ctx->pc = 0x372E48u;
    SET_GPR_U32(ctx, 31, 0x372E50u);
    ctx->pc = 0x372E4Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 384));
    ctx->pc = 0x1900E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1900E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372E50u; }
        if (ctx->pc != 0x372E50u) { return; }
    }
    ctx->pc = 0x372E50u;
    // 0x372e50: 0x27a40100
    ctx->pc = 0x372e50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 256));
    // 0x372e54: 0xc0644f8
    ctx->pc = 0x372E54u;
    SET_GPR_U32(ctx, 31, 0x372E5Cu);
    ctx->pc = 0x372E58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 384));
    ctx->pc = 0x1913E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1913E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372E5Cu; }
        if (ctx->pc != 0x372E5Cu) { return; }
    }
    ctx->pc = 0x372E5Cu;
    // 0x372e5c: 0x27a40180
    ctx->pc = 0x372e5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 384));
    // 0x372e60: 0xc064540
    ctx->pc = 0x372E60u;
    SET_GPR_U32(ctx, 31, 0x372E68u);
    ctx->pc = 0x372E64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 256));
    ctx->pc = 0x191500u;
    {
        auto targetFn = runtime->lookupFunction(0x191500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372E68u; }
        if (ctx->pc != 0x372E68u) { return; }
    }
    ctx->pc = 0x372E68u;
    // 0x372e68: 0xc60d0000
    ctx->pc = 0x372e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x372e6c: 0xc64e0000
    ctx->pc = 0x372e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x372e70: 0xc7ac01d0
    ctx->pc = 0x372e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x372e74: 0xc064018
    ctx->pc = 0x372E74u;
    SET_GPR_U32(ctx, 31, 0x372E7Cu);
    ctx->pc = 0x372E78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 384));
    ctx->pc = 0x190060u;
    {
        auto targetFn = runtime->lookupFunction(0x190060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372E7Cu; }
        if (ctx->pc != 0x372E7Cu) { return; }
    }
    ctx->pc = 0x372E7Cu;
    // 0x372e7c: 0x10000033
    ctx->pc = 0x372E7Cu;
    {
        const bool branch_taken_0x372e7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x372E80u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 512)));
        if (branch_taken_0x372e7c) {
            ctx->pc = 0x372F4Cu;
            goto label_372f4c;
        }
    }
    ctx->pc = 0x372E84u;
label_372e84:
    // 0x372e84: 0xc063f7c
    ctx->pc = 0x372E84u;
    SET_GPR_U32(ctx, 31, 0x372E8Cu);
    ctx->pc = 0x18FDF0u;
    {
        auto targetFn = runtime->lookupFunction(0x18FDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372E8Cu; }
        if (ctx->pc != 0x372E8Cu) { return; }
    }
    ctx->pc = 0x372E8Cu;
    // 0x372e8c: 0x8ea20200
    ctx->pc = 0x372e8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 512)));
    // 0x372e90: 0x30420800
    ctx->pc = 0x372e90u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2048));
    // 0x372e94: 0x1040000b
    ctx->pc = 0x372E94u;
    {
        const bool branch_taken_0x372e94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x372E98u;
        SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
        if (branch_taken_0x372e94) {
            ctx->pc = 0x372EC4u;
            goto label_372ec4;
        }
    }
    ctx->pc = 0x372E9Cu;
    // 0x372e9c: 0x27a40140
    ctx->pc = 0x372e9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 320));
    // 0x372ea0: 0xc06450c
    ctx->pc = 0x372EA0u;
    SET_GPR_U32(ctx, 31, 0x372EA8u);
    ctx->pc = 0x372EA4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16608));
    ctx->pc = 0x191430u;
    {
        auto targetFn = runtime->lookupFunction(0x191430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372EA8u; }
        if (ctx->pc != 0x372EA8u) { return; }
    }
    ctx->pc = 0x372EA8u;
    // 0x372ea8: 0x8ea501f0
    ctx->pc = 0x372ea8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 496)));
    // 0x372eac: 0x10a00012
    ctx->pc = 0x372EACu;
    {
        const bool branch_taken_0x372eac = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x372EB0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 384));
        if (branch_taken_0x372eac) {
            ctx->pc = 0x372EF8u;
            goto label_372ef8;
        }
    }
    ctx->pc = 0x372EB4u;
    // 0x372eb4: 0xc064038
    ctx->pc = 0x372EB4u;
    SET_GPR_U32(ctx, 31, 0x372EBCu);
    ctx->pc = 0x372EB8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 512));
    ctx->pc = 0x1900E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1900E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372EBCu; }
        if (ctx->pc != 0x372EBCu) { return; }
    }
    ctx->pc = 0x372EBCu;
    // 0x372ebc: 0x1000000d
    ctx->pc = 0x372EBCu;
    {
        const bool branch_taken_0x372ebc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x372ebc) {
            ctx->pc = 0x372EF4u;
            goto label_372ef4;
        }
    }
    ctx->pc = 0x372EC4u;
label_372ec4:
    // 0x372ec4: 0x8ea501f0
    ctx->pc = 0x372ec4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 496)));
    // 0x372ec8: 0x14a00005
    ctx->pc = 0x372EC8u;
    {
        const bool branch_taken_0x372ec8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x372ECCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 320));
        if (branch_taken_0x372ec8) {
            ctx->pc = 0x372EE0u;
            goto label_372ee0;
        }
    }
    ctx->pc = 0x372ED0u;
    // 0x372ed0: 0xc063f7c
    ctx->pc = 0x372ED0u;
    SET_GPR_U32(ctx, 31, 0x372ED8u);
    ctx->pc = 0x372ED4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 320));
    ctx->pc = 0x18FDF0u;
    {
        auto targetFn = runtime->lookupFunction(0x18FDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372ED8u; }
        if (ctx->pc != 0x372ED8u) { return; }
    }
    ctx->pc = 0x372ED8u;
    // 0x372ed8: 0x10000006
    ctx->pc = 0x372ED8u;
    {
        const bool branch_taken_0x372ed8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x372ed8) {
            ctx->pc = 0x372EF4u;
            goto label_372ef4;
        }
    }
    ctx->pc = 0x372EE0u;
label_372ee0:
    // 0x372ee0: 0xc064540
    ctx->pc = 0x372EE0u;
    SET_GPR_U32(ctx, 31, 0x372EE8u);
    ctx->pc = 0x191500u;
    {
        auto targetFn = runtime->lookupFunction(0x191500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372EE8u; }
        if (ctx->pc != 0x372EE8u) { return; }
    }
    ctx->pc = 0x372EE8u;
    // 0x372ee8: 0x27a40200
    ctx->pc = 0x372ee8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 512));
    // 0x372eec: 0xc064038
    ctx->pc = 0x372EECu;
    SET_GPR_U32(ctx, 31, 0x372EF4u);
    ctx->pc = 0x372EF0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 320));
    ctx->pc = 0x1900E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1900E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372EF4u; }
        if (ctx->pc != 0x372EF4u) { return; }
    }
    ctx->pc = 0x372EF4u;
label_372ef4:
    // 0x372ef4: 0x27a40180
    ctx->pc = 0x372ef4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 384));
label_372ef8:
    // 0x372ef8: 0xc064008
    ctx->pc = 0x372EF8u;
    SET_GPR_U32(ctx, 31, 0x372F00u);
    ctx->pc = 0x372EFCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 21), 180));
    ctx->pc = 0x190020u;
    {
        auto targetFn = runtime->lookupFunction(0x190020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372F00u; }
        if (ctx->pc != 0x372F00u) { return; }
    }
    ctx->pc = 0x372F00u;
    // 0x372f00: 0x86a40090
    ctx->pc = 0x372f00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 144)));
    // 0x372f04: 0x86a50092
    ctx->pc = 0x372f04u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
    // 0x372f08: 0x86a60094
    ctx->pc = 0x372f08u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 148)));
    // 0x372f0c: 0xc0dc088
    ctx->pc = 0x372F0Cu;
    SET_GPR_U32(ctx, 31, 0x372F14u);
    ctx->pc = 0x372F10u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 384));
    ctx->pc = 0x370220u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370220_0x370220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372F14u; }
    }
    if (ctx->pc != 0x372F14u) { return; }
    ctx->pc = 0x372F14u;
    // 0x372f14: 0x27a40180
    ctx->pc = 0x372f14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 384));
    // 0x372f18: 0xc0644f8
    ctx->pc = 0x372F18u;
    SET_GPR_U32(ctx, 31, 0x372F20u);
    ctx->pc = 0x372F1Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 320));
    ctx->pc = 0x1913E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1913E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372F20u; }
        if (ctx->pc != 0x372F20u) { return; }
    }
    ctx->pc = 0x372F20u;
    // 0x372f20: 0xc6ac0038
    ctx->pc = 0x372f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x372f24: 0xc6ad003c
    ctx->pc = 0x372f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x372f28: 0xc6ae0040
    ctx->pc = 0x372f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x372f2c: 0xc06401c
    ctx->pc = 0x372F2Cu;
    SET_GPR_U32(ctx, 31, 0x372F34u);
    ctx->pc = 0x372F30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 384));
    ctx->pc = 0x190070u;
    {
        auto targetFn = runtime->lookupFunction(0x190070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372F34u; }
        if (ctx->pc != 0x372F34u) { return; }
    }
    ctx->pc = 0x372F34u;
    // 0x372f34: 0xc6cd0000
    ctx->pc = 0x372f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x372f38: 0xc60e0000
    ctx->pc = 0x372f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x372f3c: 0xc7ac0200
    ctx->pc = 0x372f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x372f40: 0xc06401c
    ctx->pc = 0x372F40u;
    SET_GPR_U32(ctx, 31, 0x372F48u);
    ctx->pc = 0x372F44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 384));
    ctx->pc = 0x190070u;
    {
        auto targetFn = runtime->lookupFunction(0x190070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372F48u; }
        if (ctx->pc != 0x372F48u) { return; }
    }
    ctx->pc = 0x372F48u;
label_372f48:
    // 0x372f48: 0x8ea20200
    ctx->pc = 0x372f48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 512)));
label_372f4c:
    // 0x372f4c: 0x30424000
    ctx->pc = 0x372f4cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16384));
    // 0x372f50: 0x10400006
    ctx->pc = 0x372F50u;
    {
        const bool branch_taken_0x372f50 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x372F54u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 384));
        if (branch_taken_0x372f50) {
            ctx->pc = 0x372F6Cu;
            goto label_372f6c;
        }
    }
    ctx->pc = 0x372F58u;
    // 0x372f58: 0x3c05004a
    ctx->pc = 0x372f58u;
    SET_GPR_U32(ctx, 5, ((uint32_t)74 << 16));
    // 0x372f5c: 0x27a40180
    ctx->pc = 0x372f5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 384));
    // 0x372f60: 0xc064028
    ctx->pc = 0x372F60u;
    SET_GPR_U32(ctx, 31, 0x372F68u);
    ctx->pc = 0x372F64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294965104));
    ctx->pc = 0x1900A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1900A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372F68u; }
        if (ctx->pc != 0x372F68u) { return; }
    }
    ctx->pc = 0x372F68u;
    // 0x372f68: 0x27a50180
    ctx->pc = 0x372f68u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 384));
label_372f6c:
    // 0x372f6c: 0xc06bde0
    ctx->pc = 0x372F6Cu;
    SET_GPR_U32(ctx, 31, 0x372F74u);
    ctx->pc = 0x372F70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 26));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372F74u; }
        if (ctx->pc != 0x372F74u) { return; }
    }
    ctx->pc = 0x372F74u;
    // 0x372f74: 0x8e830808
    ctx->pc = 0x372f74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 2056)));
    // 0x372f78: 0x24020002
    ctx->pc = 0x372f78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x372f7c: 0x2231821
    ctx->pc = 0x372f7cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x372f80: 0x90630090
    ctx->pc = 0x372f80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x372f84: 0x14620006
    ctx->pc = 0x372F84u;
    {
        const bool branch_taken_0x372f84 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x372f84) {
            ctx->pc = 0x372FA0u;
            goto label_372fa0;
        }
    }
    ctx->pc = 0x372F8Cu;
    // 0x372f8c: 0x92a40238
    ctx->pc = 0x372f8cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 568)));
    // 0x372f90: 0xc1acbcc
    ctx->pc = 0x372F90u;
    SET_GPR_U32(ctx, 31, 0x372F98u);
    ctx->pc = 0x372F94u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x6B2F30u;
    {
        auto targetFn = runtime->lookupFunction(0x6B2F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372F98u; }
        if (ctx->pc != 0x372F98u) { return; }
    }
    ctx->pc = 0x372F98u;
    // 0x372f98: 0x10000005
    ctx->pc = 0x372F98u;
    {
        const bool branch_taken_0x372f98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x372F9Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 512)));
        if (branch_taken_0x372f98) {
            ctx->pc = 0x372FB0u;
            goto label_372fb0;
        }
    }
    ctx->pc = 0x372FA0u;
label_372fa0:
    // 0x372fa0: 0x92a40238
    ctx->pc = 0x372fa0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 568)));
    // 0x372fa4: 0xc1acbcc
    ctx->pc = 0x372FA4u;
    SET_GPR_U32(ctx, 31, 0x372FACu);
    ctx->pc = 0x372FA8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x6B2F30u;
    {
        auto targetFn = runtime->lookupFunction(0x6B2F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372FACu; }
        if (ctx->pc != 0x372FACu) { return; }
    }
    ctx->pc = 0x372FACu;
    // 0x372fac: 0x8ea30200
    ctx->pc = 0x372facu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 512)));
label_372fb0:
    // 0x372fb0: 0x30624000
    ctx->pc = 0x372fb0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16384));
    // 0x372fb4: 0x1440001a
    ctx->pc = 0x372FB4u;
    {
        const bool branch_taken_0x372fb4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x372FB8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
        if (branch_taken_0x372fb4) {
            ctx->pc = 0x373020u;
            goto label_373020;
        }
    }
    ctx->pc = 0x372FBCu;
    // 0x372fbc: 0x621024
    ctx->pc = 0x372fbcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x372fc0: 0x1040000e
    ctx->pc = 0x372FC0u;
    {
        const bool branch_taken_0x372fc0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x372FC4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 108));
        if (branch_taken_0x372fc0) {
            ctx->pc = 0x372FFCu;
            goto label_372ffc;
        }
    }
    ctx->pc = 0x372FC8u;
    // 0x372fc8: 0x2404006c
    ctx->pc = 0x372fc8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 108));
    // 0x372fcc: 0xc06bde0
    ctx->pc = 0x372FCCu;
    SET_GPR_U32(ctx, 31, 0x372FD4u);
    ctx->pc = 0x372FD0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372FD4u; }
        if (ctx->pc != 0x372FD4u) { return; }
    }
    ctx->pc = 0x372FD4u;
    // 0x372fd4: 0x8e820808
    ctx->pc = 0x372fd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 2056)));
    // 0x372fd8: 0x511021
    ctx->pc = 0x372fd8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x372fdc: 0x8c440000
    ctx->pc = 0x372fdcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x372fe0: 0xc06305c
    ctx->pc = 0x372FE0u;
    SET_GPR_U32(ctx, 31, 0x372FE8u);
    ctx->pc = 0x372FE4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18C170u;
    {
        auto targetFn = runtime->lookupFunction(0x18C170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372FE8u; }
        if (ctx->pc != 0x372FE8u) { return; }
    }
    ctx->pc = 0x372FE8u;
    // 0x372fe8: 0x2404006c
    ctx->pc = 0x372fe8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 108));
    // 0x372fec: 0xc06bde0
    ctx->pc = 0x372FECu;
    SET_GPR_U32(ctx, 31, 0x372FF4u);
    ctx->pc = 0x372FF0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372FF4u; }
        if (ctx->pc != 0x372FF4u) { return; }
    }
    ctx->pc = 0x372FF4u;
    // 0x372ff4: 0x10000010
    ctx->pc = 0x372FF4u;
    {
        const bool branch_taken_0x372ff4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x372FF8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        if (branch_taken_0x372ff4) {
            ctx->pc = 0x373038u;
            goto label_373038;
        }
    }
    ctx->pc = 0x372FFCu;
label_372ffc:
    // 0x372ffc: 0xc06bde0
    ctx->pc = 0x372FFCu;
    SET_GPR_U32(ctx, 31, 0x373004u);
    ctx->pc = 0x373000u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373004u; }
        if (ctx->pc != 0x373004u) { return; }
    }
    ctx->pc = 0x373004u;
    // 0x373004: 0x8e820808
    ctx->pc = 0x373004u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 2056)));
    // 0x373008: 0x511021
    ctx->pc = 0x373008u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x37300c: 0x8c440000
    ctx->pc = 0x37300cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x373010: 0xc06305c
    ctx->pc = 0x373010u;
    SET_GPR_U32(ctx, 31, 0x373018u);
    ctx->pc = 0x373014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18C170u;
    {
        auto targetFn = runtime->lookupFunction(0x18C170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373018u; }
        if (ctx->pc != 0x373018u) { return; }
    }
    ctx->pc = 0x373018u;
    // 0x373018: 0x10000006
    ctx->pc = 0x373018u;
    {
        const bool branch_taken_0x373018 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x373018) {
            ctx->pc = 0x373034u;
            goto label_373034;
        }
    }
    ctx->pc = 0x373020u;
label_373020:
    // 0x373020: 0x8e820808
    ctx->pc = 0x373020u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 2056)));
    // 0x373024: 0x511021
    ctx->pc = 0x373024u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x373028: 0x8c440000
    ctx->pc = 0x373028u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37302c: 0xc06305c
    ctx->pc = 0x37302Cu;
    SET_GPR_U32(ctx, 31, 0x373034u);
    ctx->pc = 0x373030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18C170u;
    {
        auto targetFn = runtime->lookupFunction(0x18C170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373034u; }
        if (ctx->pc != 0x373034u) { return; }
    }
    ctx->pc = 0x373034u;
label_373034:
    // 0x373034: 0xdfbf00a0
    ctx->pc = 0x373034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_373038:
    // 0x373038: 0xc7b40000
    ctx->pc = 0x373038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x37303c: 0x7bbe0090
    ctx->pc = 0x37303cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x373040: 0x7bb70080
    ctx->pc = 0x373040u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x373044: 0x7bb60070
    ctx->pc = 0x373044u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x373048: 0x7bb50060
    ctx->pc = 0x373048u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37304c: 0x7bb40050
    ctx->pc = 0x37304cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x373050: 0x7bb30040
    ctx->pc = 0x373050u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x373054: 0x7bb20030
    ctx->pc = 0x373054u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x373058: 0x7bb10020
    ctx->pc = 0x373058u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37305c: 0x7bb00010
    ctx->pc = 0x37305cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373060: 0x3e00008
    ctx->pc = 0x373060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373064u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 528));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x372720u: goto label_372720;
            case 0x372740u: goto label_372740;
            case 0x372758u: goto label_372758;
            case 0x37275Cu: goto label_37275c;
            case 0x37276Cu: goto label_37276c;
            case 0x372780u: goto label_372780;
            case 0x37285Cu: goto label_37285c;
            case 0x37288Cu: goto label_37288c;
            case 0x3728B8u: goto label_3728b8;
            case 0x3728C4u: goto label_3728c4;
            case 0x3728F8u: goto label_3728f8;
            case 0x372918u: goto label_372918;
            case 0x3729A0u: goto label_3729a0;
            case 0x3729BCu: goto label_3729bc;
            case 0x3729F8u: goto label_3729f8;
            case 0x372A14u: goto label_372a14;
            case 0x372A54u: goto label_372a54;
            case 0x372A70u: goto label_372a70;
            case 0x372AB0u: goto label_372ab0;
            case 0x372ACCu: goto label_372acc;
            case 0x372AD8u: goto label_372ad8;
            case 0x372ADCu: goto label_372adc;
            case 0x372AE0u: goto label_372ae0;
            case 0x372B00u: goto label_372b00;
            case 0x372B18u: goto label_372b18;
            case 0x372B70u: goto label_372b70;
            case 0x372B98u: goto label_372b98;
            case 0x372BC8u: goto label_372bc8;
            case 0x372BCCu: goto label_372bcc;
            case 0x372C50u: goto label_372c50;
            case 0x372C68u: goto label_372c68;
            case 0x372CE8u: goto label_372ce8;
            case 0x372D24u: goto label_372d24;
            case 0x372D2Cu: goto label_372d2c;
            case 0x372D30u: goto label_372d30;
            case 0x372E84u: goto label_372e84;
            case 0x372EC4u: goto label_372ec4;
            case 0x372EE0u: goto label_372ee0;
            case 0x372EF4u: goto label_372ef4;
            case 0x372EF8u: goto label_372ef8;
            case 0x372F48u: goto label_372f48;
            case 0x372F4Cu: goto label_372f4c;
            case 0x372F6Cu: goto label_372f6c;
            case 0x372FA0u: goto label_372fa0;
            case 0x372FB0u: goto label_372fb0;
            case 0x372FFCu: goto label_372ffc;
            case 0x373020u: goto label_373020;
            case 0x373034u: goto label_373034;
            case 0x373038u: goto label_373038;
            case 0x373120u: goto label_373120;
            case 0x37312Cu: goto label_37312c;
            case 0x3731BCu: goto label_3731bc;
            case 0x3731CCu: goto label_3731cc;
            case 0x373224u: goto label_373224;
            case 0x373254u: goto label_373254;
            case 0x373264u: goto label_373264;
            case 0x3732C8u: goto label_3732c8;
            case 0x3732D8u: goto label_3732d8;
            case 0x37331Cu: goto label_37331c;
            case 0x373338u: goto label_373338;
            case 0x37333Cu: goto label_37333c;
            case 0x373444u: goto label_373444;
            case 0x373460u: goto label_373460;
            case 0x3734E8u: goto label_3734e8;
            case 0x373564u: goto label_373564;
            case 0x3735ACu: goto label_3735ac;
            case 0x3735DCu: goto label_3735dc;
            case 0x3735E8u: goto label_3735e8;
            case 0x373610u: goto label_373610;
            default: break;
        }
        return;
    }
    ctx->pc = 0x373068u;
    // 0x373068: 0x0
    ctx->pc = 0x373068u;
    // NOP
    // 0x37306c: 0x0
    ctx->pc = 0x37306cu;
    // NOP
    // 0x373070: 0x27bdfe50
    ctx->pc = 0x373070u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x373074: 0xffbf0090
    ctx->pc = 0x373074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x373078: 0x7fbe0080
    ctx->pc = 0x373078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x37307c: 0x7fb70070
    ctx->pc = 0x37307cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x373080: 0x7fb60060
    ctx->pc = 0x373080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x373084: 0x7fb50050
    ctx->pc = 0x373084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x373088: 0x7fb40040
    ctx->pc = 0x373088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x37308c: 0x7fb30030
    ctx->pc = 0x37308cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x373090: 0x7fb20020
    ctx->pc = 0x373090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x373094: 0x7fb10010
    ctx->pc = 0x373094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x373098: 0x7fb00000
    ctx->pc = 0x373098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37309c: 0x80802d
    ctx->pc = 0x37309cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3730a0: 0xc1ac574
    ctx->pc = 0x3730A0u;
    SET_GPR_U32(ctx, 31, 0x3730A8u);
    ctx->pc = 0x3730A4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x6B15D0u;
    {
        auto targetFn = runtime->lookupFunction(0x6B15D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3730A8u; }
        if (ctx->pc != 0x3730A8u) { return; }
    }
    ctx->pc = 0x3730A8u;
    // 0x3730a8: 0x8e140018
    ctx->pc = 0x3730a8u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3730ac: 0xc0dd46c
    ctx->pc = 0x3730ACu;
    SET_GPR_U32(ctx, 31, 0x3730B4u);
    ctx->pc = 0x3730B0u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 20), 8)));
    ctx->pc = 0x3751B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_003751B0_0x3751b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3730B4u; }
    }
    if (ctx->pc != 0x3730B4u) { return; }
    ctx->pc = 0x3730B4u;
    // 0x3730b4: 0x8eb001f4
    ctx->pc = 0x3730b4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 21), 500)));
    // 0x3730b8: 0x8e130018
    ctx->pc = 0x3730b8u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3730bc: 0xc063f7c
    ctx->pc = 0x3730BCu;
    SET_GPR_U32(ctx, 31, 0x3730C4u);
    ctx->pc = 0x3730C0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 368));
    ctx->pc = 0x18FDF0u;
    {
        auto targetFn = runtime->lookupFunction(0x18FDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3730C4u; }
        if (ctx->pc != 0x3730C4u) { return; }
    }
    ctx->pc = 0x3730C4u;
    // 0x3730c4: 0x2404005f
    ctx->pc = 0x3730c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 95));
    // 0x3730c8: 0xc06bde0
    ctx->pc = 0x3730C8u;
    SET_GPR_U32(ctx, 31, 0x3730D0u);
    ctx->pc = 0x3730CCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3730D0u; }
        if (ctx->pc != 0x3730D0u) { return; }
    }
    ctx->pc = 0x3730D0u;
    // 0x3730d0: 0x24040060
    ctx->pc = 0x3730d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 96));
    // 0x3730d4: 0xc06bde0
    ctx->pc = 0x3730D4u;
    SET_GPR_U32(ctx, 31, 0x3730DCu);
    ctx->pc = 0x3730D8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3730DCu; }
        if (ctx->pc != 0x3730DCu) { return; }
    }
    ctx->pc = 0x3730DCu;
    // 0x3730dc: 0xc68c001c
    ctx->pc = 0x3730dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3730e0: 0xc68d0020
    ctx->pc = 0x3730e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3730e4: 0x44807000
    ctx->pc = 0x3730e4u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 0);
    // 0x3730e8: 0xc063fc4
    ctx->pc = 0x3730E8u;
    SET_GPR_U32(ctx, 31, 0x3730F0u);
    ctx->pc = 0x3730ECu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 240));
    ctx->pc = 0x18FF10u;
    {
        auto targetFn = runtime->lookupFunction(0x18FF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3730F0u; }
        if (ctx->pc != 0x3730F0u) { return; }
    }
    ctx->pc = 0x3730F0u;
    // 0x3730f0: 0x27a500f0
    ctx->pc = 0x3730f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 240));
    // 0x3730f4: 0xc06bde0
    ctx->pc = 0x3730F4u;
    SET_GPR_U32(ctx, 31, 0x3730FCu);
    ctx->pc = 0x3730F8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 25));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3730FCu; }
        if (ctx->pc != 0x3730FCu) { return; }
    }
    ctx->pc = 0x3730FCu;
    // 0x3730fc: 0x8e820004
    ctx->pc = 0x3730fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x373100: 0x30420400
    ctx->pc = 0x373100u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1024));
    // 0x373104: 0x10400006
    ctx->pc = 0x373104u;
    {
        const bool branch_taken_0x373104 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x373108u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x373104) {
            ctx->pc = 0x373120u;
            goto label_373120;
        }
    }
    ctx->pc = 0x37310Cu;
    // 0x37310c: 0x24040004
    ctx->pc = 0x37310cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x373110: 0xc06bc78
    ctx->pc = 0x373110u;
    SET_GPR_U32(ctx, 31, 0x373118u);
    ctx->pc = 0x373114u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1AF1E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373118u; }
        if (ctx->pc != 0x373118u) { return; }
    }
    ctx->pc = 0x373118u;
    // 0x373118: 0x10000004
    ctx->pc = 0x373118u;
    {
        const bool branch_taken_0x373118 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37311Cu;
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        if (branch_taken_0x373118) {
            ctx->pc = 0x37312Cu;
            goto label_37312c;
        }
    }
    ctx->pc = 0x373120u;
label_373120:
    // 0x373120: 0xc06bc78
    ctx->pc = 0x373120u;
    SET_GPR_U32(ctx, 31, 0x373128u);
    ctx->pc = 0x373124u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x1AF1E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373128u; }
        if (ctx->pc != 0x373128u) { return; }
    }
    ctx->pc = 0x373128u;
    // 0x373128: 0x82a30000
    ctx->pc = 0x373128u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_37312c:
    // 0x37312c: 0x10600082
    ctx->pc = 0x37312Cu;
    {
        const bool branch_taken_0x37312c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x37312c) {
            ctx->pc = 0x373338u;
            goto label_373338;
        }
    }
    ctx->pc = 0x373134u;
    // 0x373134: 0x82a30001
    ctx->pc = 0x373134u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
    // 0x373138: 0x1060007f
    ctx->pc = 0x373138u;
    {
        const bool branch_taken_0x373138 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x373138) {
            ctx->pc = 0x373338u;
            goto label_373338;
        }
    }
    ctx->pc = 0x373140u;
    // 0x373140: 0x8e830004
    ctx->pc = 0x373140u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x373144: 0x30638000
    ctx->pc = 0x373144u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 32768));
    // 0x373148: 0x1060007b
    ctx->pc = 0x373148u;
    {
        const bool branch_taken_0x373148 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x373148) {
            ctx->pc = 0x373338u;
            goto label_373338;
        }
    }
    ctx->pc = 0x373150u;
    // 0x373150: 0x96850002
    ctx->pc = 0x373150u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x373154: 0x2403ffff
    ctx->pc = 0x373154u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x373158: 0x92840001
    ctx->pc = 0x373158u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x37315c: 0x8e060018
    ctx->pc = 0x37315cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x373160: 0x8e670808
    ctx->pc = 0x373160u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 19), 2056)));
    // 0x373164: 0x52940
    ctx->pc = 0x373164u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 5));
    // 0x373168: 0x42040
    ctx->pc = 0x373168u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
    // 0x37316c: 0xa62821
    ctx->pc = 0x37316cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x373170: 0x852021
    ctx->pc = 0x373170u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x373174: 0x84851024
    ctx->pc = 0x373174u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4132)));
    // 0x373178: 0x520c0
    ctx->pc = 0x373178u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 3));
    // 0x37317c: 0x852021
    ctx->pc = 0x37317cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x373180: 0x42040
    ctx->pc = 0x373180u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
    // 0x373184: 0x852021
    ctx->pc = 0x373184u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x373188: 0x488c0
    ctx->pc = 0x373188u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 4), 3));
    // 0x37318c: 0xf12021
    ctx->pc = 0x37318cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x373190: 0x8c850000
    ctx->pc = 0x373190u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x373194: 0x10a30068
    ctx->pc = 0x373194u;
    {
        const bool branch_taken_0x373194 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x373194) {
            ctx->pc = 0x373338u;
            goto label_373338;
        }
    }
    ctx->pc = 0x37319Cu;
    // 0x37319c: 0x10a00066
    ctx->pc = 0x37319Cu;
    {
        const bool branch_taken_0x37319c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x37319c) {
            ctx->pc = 0x373338u;
            goto label_373338;
        }
    }
    ctx->pc = 0x3731A4u;
    // 0x3731a4: 0x90820088
    ctx->pc = 0x3731a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x3731a8: 0x10400004
    ctx->pc = 0x3731A8u;
    {
        const bool branch_taken_0x3731a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x3731ACu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x3731a8) {
            ctx->pc = 0x3731BCu;
            goto label_3731bc;
        }
    }
    ctx->pc = 0x3731B0u;
    // 0x3731b0: 0xc0dd2c8
    ctx->pc = 0x3731B0u;
    SET_GPR_U32(ctx, 31, 0x3731B8u);
    ctx->pc = 0x3731B4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x374B20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00374B20_0x374b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3731B8u; }
    }
    if (ctx->pc != 0x3731B8u) { return; }
    ctx->pc = 0x3731B8u;
    // 0x3731b8: 0x902d
    ctx->pc = 0x3731b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3731bc:
    // 0x3731bc: 0x27b600b0
    ctx->pc = 0x3731bcu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 29), 176));
    // 0x3731c0: 0x27b700a4
    ctx->pc = 0x3731c0u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 29), 164));
    // 0x3731c4: 0x10000027
    ctx->pc = 0x3731C4u;
    {
        const bool branch_taken_0x3731c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3731C8u;
        SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 29), 168));
        if (branch_taken_0x3731c4) {
            ctx->pc = 0x373264u;
            goto label_373264;
        }
    }
    ctx->pc = 0x3731CCu;
label_3731cc:
    // 0x3731cc: 0x3c02004f
    ctx->pc = 0x3731ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)79 << 16));
    // 0x3731d0: 0x701821
    ctx->pc = 0x3731d0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3731d4: 0x2442dd90
    ctx->pc = 0x3731d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958480));
    // 0x3731d8: 0x8c630008
    ctx->pc = 0x3731d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3731dc: 0x27a400a0
    ctx->pc = 0x3731dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 160));
    // 0x3731e0: 0x2406004c
    ctx->pc = 0x3731e0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 76));
    // 0x3731e4: 0x31840
    ctx->pc = 0x3731e4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x3731e8: 0x2631821
    ctx->pc = 0x3731e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x3731ec: 0x94650008
    ctx->pc = 0x3731ecu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3731f0: 0x518c0
    ctx->pc = 0x3731f0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x3731f4: 0x651821
    ctx->pc = 0x3731f4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3731f8: 0x31840
    ctx->pc = 0x3731f8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x3731fc: 0x651821
    ctx->pc = 0x3731fcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x373200: 0x31880
    ctx->pc = 0x373200u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x373204: 0xc041eac
    ctx->pc = 0x373204u;
    SET_GPR_U32(ctx, 31, 0x37320Cu);
    ctx->pc = 0x373208u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x107AB0u;
    {
        auto targetFn = runtime->lookupFunction(0x107AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37320Cu; }
        if (ctx->pc != 0x37320Cu) { return; }
    }
    ctx->pc = 0x37320Cu;
    // 0x37320c: 0x8e820004
    ctx->pc = 0x37320cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x373210: 0x30420080
    ctx->pc = 0x373210u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 128));
    // 0x373214: 0x10400003
    ctx->pc = 0x373214u;
    {
        const bool branch_taken_0x373214 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x373218u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        if (branch_taken_0x373214) {
            ctx->pc = 0x373224u;
            goto label_373224;
        }
    }
    ctx->pc = 0x37321Cu;
    // 0x37321c: 0xc4400050
    ctx->pc = 0x37321cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373220: 0xe6c00000
    ctx->pc = 0x373220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_373224:
    // 0x373224: 0x8e820004
    ctx->pc = 0x373224u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x373228: 0x30420040
    ctx->pc = 0x373228u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64));
    // 0x37322c: 0x10400009
    ctx->pc = 0x37322Cu;
    {
        const bool branch_taken_0x37322c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x373230u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 58));
        if (branch_taken_0x37322c) {
            ctx->pc = 0x373254u;
            goto label_373254;
        }
    }
    ctx->pc = 0x373234u;
    // 0x373234: 0xc680000c
    ctx->pc = 0x373234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373238: 0x27a200ac
    ctx->pc = 0x373238u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 172));
    // 0x37323c: 0xe6e00000
    ctx->pc = 0x37323cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x373240: 0xc6800010
    ctx->pc = 0x373240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373244: 0xe7c00000
    ctx->pc = 0x373244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x373248: 0xc6800014
    ctx->pc = 0x373248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37324c: 0xe4400000
    ctx->pc = 0x37324cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x373250: 0x2642003a
    ctx->pc = 0x373250u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 58));
label_373254:
    // 0x373254: 0x27a500a0
    ctx->pc = 0x373254u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 160));
    // 0x373258: 0xc06bde0
    ctx->pc = 0x373258u;
    SET_GPR_U32(ctx, 31, 0x373260u);
    ctx->pc = 0x37325Cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 255));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373260u; }
        if (ctx->pc != 0x373260u) { return; }
    }
    ctx->pc = 0x373260u;
    // 0x373260: 0x26520001
    ctx->pc = 0x373260u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_373264:
    // 0x373264: 0x8e620808
    ctx->pc = 0x373264u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 2056)));
    // 0x373268: 0x2221821
    ctx->pc = 0x373268u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x37326c: 0x8c620004
    ctx->pc = 0x37326cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x373270: 0x242102a
    ctx->pc = 0x373270u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x373274: 0x1440ffd5
    ctx->pc = 0x373274u;
    {
        const bool branch_taken_0x373274 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x373278u;
        SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 18), 2));
        if (branch_taken_0x373274) {
            ctx->pc = 0x3731CCu;
            goto label_3731cc;
        }
    }
    ctx->pc = 0x37327Cu;
    // 0x37327c: 0x8e860004
    ctx->pc = 0x37327cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x373280: 0x2a0202d
    ctx->pc = 0x373280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373284: 0x280282d
    ctx->pc = 0x373284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373288: 0xc194ae4
    ctx->pc = 0x373288u;
    SET_GPR_U32(ctx, 31, 0x373290u);
    ctx->pc = 0x37328Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 304));
    ctx->pc = 0x652B90u;
    {
        auto targetFn = runtime->lookupFunction(0x652B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373290u; }
        if (ctx->pc != 0x373290u) { return; }
    }
    ctx->pc = 0x373290u;
    // 0x373290: 0x27a50130
    ctx->pc = 0x373290u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 304));
    // 0x373294: 0xc06bde0
    ctx->pc = 0x373294u;
    SET_GPR_U32(ctx, 31, 0x37329Cu);
    ctx->pc = 0x373298u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 26));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37329Cu; }
        if (ctx->pc != 0x37329Cu) { return; }
    }
    ctx->pc = 0x37329Cu;
    // 0x37329c: 0x8e630808
    ctx->pc = 0x37329cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 2056)));
    // 0x3732a0: 0x24020002
    ctx->pc = 0x3732a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x3732a4: 0x2231821
    ctx->pc = 0x3732a4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3732a8: 0x90630090
    ctx->pc = 0x3732a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x3732ac: 0x14620006
    ctx->pc = 0x3732ACu;
    {
        const bool branch_taken_0x3732ac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x3732ac) {
            ctx->pc = 0x3732C8u;
            goto label_3732c8;
        }
    }
    ctx->pc = 0x3732B4u;
    // 0x3732b4: 0x92a40238
    ctx->pc = 0x3732b4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 568)));
    // 0x3732b8: 0xc1acbcc
    ctx->pc = 0x3732B8u;
    SET_GPR_U32(ctx, 31, 0x3732C0u);
    ctx->pc = 0x3732BCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x6B2F30u;
    {
        auto targetFn = runtime->lookupFunction(0x6B2F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3732C0u; }
        if (ctx->pc != 0x3732C0u) { return; }
    }
    ctx->pc = 0x3732C0u;
    // 0x3732c0: 0x10000005
    ctx->pc = 0x3732C0u;
    {
        const bool branch_taken_0x3732c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3732C4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 4)));
        if (branch_taken_0x3732c0) {
            ctx->pc = 0x3732D8u;
            goto label_3732d8;
        }
    }
    ctx->pc = 0x3732C8u;
label_3732c8:
    // 0x3732c8: 0x92a40238
    ctx->pc = 0x3732c8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 568)));
    // 0x3732cc: 0xc1acbcc
    ctx->pc = 0x3732CCu;
    SET_GPR_U32(ctx, 31, 0x3732D4u);
    ctx->pc = 0x3732D0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x6B2F30u;
    {
        auto targetFn = runtime->lookupFunction(0x6B2F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3732D4u; }
        if (ctx->pc != 0x3732D4u) { return; }
    }
    ctx->pc = 0x3732D4u;
    // 0x3732d4: 0x8e830004
    ctx->pc = 0x3732d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_3732d8:
    // 0x3732d8: 0x3c020001
    ctx->pc = 0x3732d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x3732dc: 0x621024
    ctx->pc = 0x3732dcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3732e0: 0x1040000e
    ctx->pc = 0x3732E0u;
    {
        const bool branch_taken_0x3732e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x3732E4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 108));
        if (branch_taken_0x3732e0) {
            ctx->pc = 0x37331Cu;
            goto label_37331c;
        }
    }
    ctx->pc = 0x3732E8u;
    // 0x3732e8: 0x2404006c
    ctx->pc = 0x3732e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 108));
    // 0x3732ec: 0xc06bde0
    ctx->pc = 0x3732ECu;
    SET_GPR_U32(ctx, 31, 0x3732F4u);
    ctx->pc = 0x3732F0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3732F4u; }
        if (ctx->pc != 0x3732F4u) { return; }
    }
    ctx->pc = 0x3732F4u;
    // 0x3732f4: 0x8e620808
    ctx->pc = 0x3732f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 2056)));
    // 0x3732f8: 0x511021
    ctx->pc = 0x3732f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3732fc: 0x8c440000
    ctx->pc = 0x3732fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x373300: 0xc06305c
    ctx->pc = 0x373300u;
    SET_GPR_U32(ctx, 31, 0x373308u);
    ctx->pc = 0x373304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18C170u;
    {
        auto targetFn = runtime->lookupFunction(0x18C170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373308u; }
        if (ctx->pc != 0x373308u) { return; }
    }
    ctx->pc = 0x373308u;
    // 0x373308: 0x2404006c
    ctx->pc = 0x373308u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 108));
    // 0x37330c: 0xc06bde0
    ctx->pc = 0x37330Cu;
    SET_GPR_U32(ctx, 31, 0x373314u);
    ctx->pc = 0x373310u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373314u; }
        if (ctx->pc != 0x373314u) { return; }
    }
    ctx->pc = 0x373314u;
    // 0x373314: 0x10000009
    ctx->pc = 0x373314u;
    {
        const bool branch_taken_0x373314 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x373318u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x373314) {
            ctx->pc = 0x37333Cu;
            goto label_37333c;
        }
    }
    ctx->pc = 0x37331Cu;
label_37331c:
    // 0x37331c: 0xc06bde0
    ctx->pc = 0x37331Cu;
    SET_GPR_U32(ctx, 31, 0x373324u);
    ctx->pc = 0x373320u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373324u; }
        if (ctx->pc != 0x373324u) { return; }
    }
    ctx->pc = 0x373324u;
    // 0x373324: 0x8e620808
    ctx->pc = 0x373324u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 2056)));
    // 0x373328: 0x511021
    ctx->pc = 0x373328u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x37332c: 0x8c440000
    ctx->pc = 0x37332cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x373330: 0xc06305c
    ctx->pc = 0x373330u;
    SET_GPR_U32(ctx, 31, 0x373338u);
    ctx->pc = 0x373334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18C170u;
    {
        auto targetFn = runtime->lookupFunction(0x18C170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373338u; }
        if (ctx->pc != 0x373338u) { return; }
    }
    ctx->pc = 0x373338u;
label_373338:
    // 0x373338: 0xdfbf0090
    ctx->pc = 0x373338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_37333c:
    // 0x37333c: 0x7bbe0080
    ctx->pc = 0x37333cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x373340: 0x7bb70070
    ctx->pc = 0x373340u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x373344: 0x7bb60060
    ctx->pc = 0x373344u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x373348: 0x7bb50050
    ctx->pc = 0x373348u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37334c: 0x7bb40040
    ctx->pc = 0x37334cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x373350: 0x7bb30030
    ctx->pc = 0x373350u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x373354: 0x7bb20020
    ctx->pc = 0x373354u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x373358: 0x7bb10010
    ctx->pc = 0x373358u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37335c: 0x7bb00000
    ctx->pc = 0x37335cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373360: 0x3e00008
    ctx->pc = 0x373360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373364u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x372720u: goto label_372720;
            case 0x372740u: goto label_372740;
            case 0x372758u: goto label_372758;
            case 0x37275Cu: goto label_37275c;
            case 0x37276Cu: goto label_37276c;
            case 0x372780u: goto label_372780;
            case 0x37285Cu: goto label_37285c;
            case 0x37288Cu: goto label_37288c;
            case 0x3728B8u: goto label_3728b8;
            case 0x3728C4u: goto label_3728c4;
            case 0x3728F8u: goto label_3728f8;
            case 0x372918u: goto label_372918;
            case 0x3729A0u: goto label_3729a0;
            case 0x3729BCu: goto label_3729bc;
            case 0x3729F8u: goto label_3729f8;
            case 0x372A14u: goto label_372a14;
            case 0x372A54u: goto label_372a54;
            case 0x372A70u: goto label_372a70;
            case 0x372AB0u: goto label_372ab0;
            case 0x372ACCu: goto label_372acc;
            case 0x372AD8u: goto label_372ad8;
            case 0x372ADCu: goto label_372adc;
            case 0x372AE0u: goto label_372ae0;
            case 0x372B00u: goto label_372b00;
            case 0x372B18u: goto label_372b18;
            case 0x372B70u: goto label_372b70;
            case 0x372B98u: goto label_372b98;
            case 0x372BC8u: goto label_372bc8;
            case 0x372BCCu: goto label_372bcc;
            case 0x372C50u: goto label_372c50;
            case 0x372C68u: goto label_372c68;
            case 0x372CE8u: goto label_372ce8;
            case 0x372D24u: goto label_372d24;
            case 0x372D2Cu: goto label_372d2c;
            case 0x372D30u: goto label_372d30;
            case 0x372E84u: goto label_372e84;
            case 0x372EC4u: goto label_372ec4;
            case 0x372EE0u: goto label_372ee0;
            case 0x372EF4u: goto label_372ef4;
            case 0x372EF8u: goto label_372ef8;
            case 0x372F48u: goto label_372f48;
            case 0x372F4Cu: goto label_372f4c;
            case 0x372F6Cu: goto label_372f6c;
            case 0x372FA0u: goto label_372fa0;
            case 0x372FB0u: goto label_372fb0;
            case 0x372FFCu: goto label_372ffc;
            case 0x373020u: goto label_373020;
            case 0x373034u: goto label_373034;
            case 0x373038u: goto label_373038;
            case 0x373120u: goto label_373120;
            case 0x37312Cu: goto label_37312c;
            case 0x3731BCu: goto label_3731bc;
            case 0x3731CCu: goto label_3731cc;
            case 0x373224u: goto label_373224;
            case 0x373254u: goto label_373254;
            case 0x373264u: goto label_373264;
            case 0x3732C8u: goto label_3732c8;
            case 0x3732D8u: goto label_3732d8;
            case 0x37331Cu: goto label_37331c;
            case 0x373338u: goto label_373338;
            case 0x37333Cu: goto label_37333c;
            case 0x373444u: goto label_373444;
            case 0x373460u: goto label_373460;
            case 0x3734E8u: goto label_3734e8;
            case 0x373564u: goto label_373564;
            case 0x3735ACu: goto label_3735ac;
            case 0x3735DCu: goto label_3735dc;
            case 0x3735E8u: goto label_3735e8;
            case 0x373610u: goto label_373610;
            default: break;
        }
        return;
    }
    ctx->pc = 0x373368u;
    // 0x373368: 0x0
    ctx->pc = 0x373368u;
    // NOP
    // 0x37336c: 0x0
    ctx->pc = 0x37336cu;
    // NOP
    // 0x373370: 0x80dc9e0
    ctx->pc = 0x373370u;
    ctx->pc = 0x373374u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    ctx->pc = 0x372780u;
    goto label_372780;
    ctx->pc = 0x373378u;
    // 0x373378: 0x0
    ctx->pc = 0x373378u;
    // NOP
    // 0x37337c: 0x0
    ctx->pc = 0x37337cu;
    // NOP
    // 0x373380: 0x27bdff70
    ctx->pc = 0x373380u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x373384: 0xffbf0030
    ctx->pc = 0x373384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x373388: 0x7fb20020
    ctx->pc = 0x373388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37338c: 0x7fb10010
    ctx->pc = 0x37338cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x373390: 0x7fb00000
    ctx->pc = 0x373390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x373394: 0x8c920018
    ctx->pc = 0x373394u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x373398: 0xc1bc53c
    ctx->pc = 0x373398u;
    SET_GPR_U32(ctx, 31, 0x3733A0u);
    ctx->pc = 0x37339Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x6F14F0u;
    {
        auto targetFn = runtime->lookupFunction(0x6F14F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3733A0u; }
        if (ctx->pc != 0x3733A0u) { return; }
    }
    ctx->pc = 0x3733A0u;
    // 0x3733a0: 0xc641019c
    ctx->pc = 0x3733a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3733a4: 0x3c024248
    ctx->pc = 0x3733a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16968 << 16));
    // 0x3733a8: 0x27b00088
    ctx->pc = 0x3733a8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 136));
    // 0x3733ac: 0x27b10084
    ctx->pc = 0x3733acu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 132));
    // 0x3733b0: 0x44820000
    ctx->pc = 0x3733b0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x3733b4: 0x27a40080
    ctx->pc = 0x3733b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
    // 0x3733b8: 0x27a5008f
    ctx->pc = 0x3733b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 143));
    // 0x3733bc: 0x240600ff
    ctx->pc = 0x3733bcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 255));
    // 0x3733c0: 0xe7a10080
    ctx->pc = 0x3733c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x3733c4: 0xc64101a0
    ctx->pc = 0x3733c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3733c8: 0xe6010000
    ctx->pc = 0x3733c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x3733cc: 0xc641003c
    ctx->pc = 0x3733ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3733d0: 0x46010000
    ctx->pc = 0x3733d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3733d4: 0xc185bc8
    ctx->pc = 0x3733D4u;
    SET_GPR_U32(ctx, 31, 0x3733DCu);
    ctx->pc = 0x3733D8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->pc = 0x616F20u;
    {
        auto targetFn = runtime->lookupFunction(0x616F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3733DCu; }
        if (ctx->pc != 0x3733DCu) { return; }
    }
    ctx->pc = 0x3733DCu;
    // 0x3733dc: 0x3c024040
    ctx->pc = 0x3733dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16448 << 16));
    // 0x3733e0: 0x27a40040
    ctx->pc = 0x3733e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x3733e4: 0x44820800
    ctx->pc = 0x3733e4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x3733e8: 0x0
    ctx->pc = 0x3733e8u;
    // NOP
    // 0x3733ec: 0x46000800
    ctx->pc = 0x3733ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3733f0: 0xc063f7c
    ctx->pc = 0x3733F0u;
    SET_GPR_U32(ctx, 31, 0x3733F8u);
    ctx->pc = 0x3733F4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->pc = 0x18FDF0u;
    {
        auto targetFn = runtime->lookupFunction(0x18FDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3733F8u; }
        if (ctx->pc != 0x3733F8u) { return; }
    }
    ctx->pc = 0x3733F8u;
    // 0x3733f8: 0x8e4301a8
    ctx->pc = 0x3733f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 424)));
    // 0x3733fc: 0x3c024000
    ctx->pc = 0x3733fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x373400: 0x44821000
    ctx->pc = 0x373400u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x373404: 0x3c0242c8
    ctx->pc = 0x373404u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17096 << 16));
    // 0x373408: 0x44820000
    ctx->pc = 0x373408u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x37340c: 0x84640002
    ctx->pc = 0x37340cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x373410: 0x964201a4
    ctx->pc = 0x373410u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 420)));
    // 0x373414: 0x44840800
    ctx->pc = 0x373414u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 4);
    // 0x373418: 0x0
    ctx->pc = 0x373418u;
    // NOP
    // 0x37341c: 0x46800860
    ctx->pc = 0x37341cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x373420: 0x46011042
    ctx->pc = 0x373420u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x373424: 0x46000b03
    ctx->pc = 0x373424u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
    // 0x373428: 0x0
    ctx->pc = 0x373428u;
    // NOP
    // 0x37342c: 0x0
    ctx->pc = 0x37342cu;
    // NOP
    // 0x373430: 0x4400004
    ctx->pc = 0x373430u;
    {
        const bool branch_taken_0x373430 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x373430) {
            ctx->pc = 0x373444u;
            goto label_373444;
        }
    }
    ctx->pc = 0x373438u;
    // 0x373438: 0x44820000
    ctx->pc = 0x373438u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x37343c: 0x10000008
    ctx->pc = 0x37343Cu;
    {
        const bool branch_taken_0x37343c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x373440u;
        ctx->f[3] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x37343c) {
            ctx->pc = 0x373460u;
            goto label_373460;
        }
    }
    ctx->pc = 0x373444u;
label_373444:
    // 0x373444: 0x21842
    ctx->pc = 0x373444u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 1));
    // 0x373448: 0x30420001
    ctx->pc = 0x373448u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x37344c: 0x621825
    ctx->pc = 0x37344cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x373450: 0x44830000
    ctx->pc = 0x373450u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x373454: 0x0
    ctx->pc = 0x373454u;
    // NOP
    // 0x373458: 0x468000e0
    ctx->pc = 0x373458u;
    ctx->f[3] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x37345c: 0x460318c0
    ctx->pc = 0x37345cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_373460:
    // 0x373460: 0x44840000
    ctx->pc = 0x373460u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 4);
    // 0x373464: 0x3c024000
    ctx->pc = 0x373464u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x373468: 0x44821000
    ctx->pc = 0x373468u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x37346c: 0x3c0342c8
    ctx->pc = 0x37346cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)17096 << 16));
    // 0x373470: 0x46800060
    ctx->pc = 0x373470u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x373474: 0x3c010039
    ctx->pc = 0x373474u;
    SET_GPR_U32(ctx, 1, ((uint32_t)57 << 16));
    // 0x373478: 0x3c023f80
    ctx->pc = 0x373478u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x37347c: 0x27a40040
    ctx->pc = 0x37347cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x373480: 0x46011042
    ctx->pc = 0x373480u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x373484: 0x46011880
    ctx->pc = 0x373484u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x373488: 0x44830800
    ctx->pc = 0x373488u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x37348c: 0xc420ca68
    ctx->pc = 0x37348cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294953576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373490: 0x46011383
    ctx->pc = 0x373490u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[14] = ctx->f[2] / ctx->f[1];
    // 0x373494: 0x44826800
    ctx->pc = 0x373494u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x373498: 0x0
    ctx->pc = 0x373498u;
    // NOP
    // 0x37349c: 0x46006300
    ctx->pc = 0x37349cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x3734a0: 0xc063ff8
    ctx->pc = 0x3734A0u;
    SET_GPR_U32(ctx, 31, 0x3734A8u);
    ctx->pc = 0x3734A4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[0]);
    ctx->pc = 0x18FFE0u;
    {
        auto targetFn = runtime->lookupFunction(0x18FFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3734A8u; }
        if (ctx->pc != 0x3734A8u) { return; }
    }
    ctx->pc = 0x3734A8u;
    // 0x3734a8: 0x964501a6
    ctx->pc = 0x3734a8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 422)));
    // 0x3734ac: 0x202d
    ctx->pc = 0x3734acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3734b0: 0x302d
    ctx->pc = 0x3734b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3734b4: 0xc0dc088
    ctx->pc = 0x3734B4u;
    SET_GPR_U32(ctx, 31, 0x3734BCu);
    ctx->pc = 0x3734B8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x370220u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370220_0x370220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3734BCu; }
    }
    if (ctx->pc != 0x3734BCu) { return; }
    ctx->pc = 0x3734BCu;
    // 0x3734bc: 0xc7a00080
    ctx->pc = 0x3734bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3734c0: 0xe7a00070
    ctx->pc = 0x3734c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x3734c4: 0xc6200000
    ctx->pc = 0x3734c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3734c8: 0xe7a00074
    ctx->pc = 0x3734c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x3734cc: 0xc6000000
    ctx->pc = 0x3734ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3734d0: 0xc0dd46c
    ctx->pc = 0x3734D0u;
    SET_GPR_U32(ctx, 31, 0x3734D8u);
    ctx->pc = 0x3734D4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    ctx->pc = 0x3751B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_003751B0_0x3751b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3734D8u; }
    }
    if (ctx->pc != 0x3734D8u) { return; }
    ctx->pc = 0x3734D8u;
    // 0x3734d8: 0x3c12003c
    ctx->pc = 0x3734d8u;
    SET_GPR_U32(ctx, 18, ((uint32_t)60 << 16));
    // 0x3734dc: 0x24040005
    ctx->pc = 0x3734dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    // 0x3734e0: 0xc0dc9c8
    ctx->pc = 0x3734E0u;
    SET_GPR_U32(ctx, 31, 0x3734E8u);
    ctx->pc = 0x3734E4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294935984));
    ctx->pc = 0x372720u;
    goto label_372720;
    ctx->pc = 0x3734E8u;
label_3734e8:
    // 0x3734e8: 0x21c3c
    ctx->pc = 0x3734e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3734ec: 0x27a50040
    ctx->pc = 0x3734ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 64));
    // 0x3734f0: 0x31c3f
    ctx->pc = 0x3734f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3734f4: 0x3c02003c
    ctx->pc = 0x3734f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x3734f8: 0x244295d4
    ctx->pc = 0x3734f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294940116));
    // 0x3734fc: 0x31940
    ctx->pc = 0x3734fcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
    // 0x373500: 0x431021
    ctx->pc = 0x373500u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373504: 0x84500000
    ctx->pc = 0x373504u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x373508: 0xc06bde0
    ctx->pc = 0x373508u;
    SET_GPR_U32(ctx, 31, 0x373510u);
    ctx->pc = 0x37350Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 26));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373510u; }
        if (ctx->pc != 0x373510u) { return; }
    }
    ctx->pc = 0x373510u;
    // 0x373510: 0x10343c
    ctx->pc = 0x373510u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 16));
    // 0x373514: 0x3c01003c
    ctx->pc = 0x373514u;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x373518: 0x6343f
    ctx->pc = 0x373518u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x37351c: 0x8c248db8
    ctx->pc = 0x37351cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294938040)));
    // 0x373520: 0x628c0
    ctx->pc = 0x373520u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 3));
    // 0x373524: 0x2403ffff
    ctx->pc = 0x373524u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x373528: 0xa62821
    ctx->pc = 0x373528u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x37352c: 0x52840
    ctx->pc = 0x37352cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
    // 0x373530: 0xa62821
    ctx->pc = 0x373530u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x373534: 0x580c0
    ctx->pc = 0x373534u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 5), 3));
    // 0x373538: 0x902021
    ctx->pc = 0x373538u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x37353c: 0x8c840000
    ctx->pc = 0x37353cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x373540: 0x10830033
    ctx->pc = 0x373540u;
    {
        const bool branch_taken_0x373540 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x373540) {
            ctx->pc = 0x373610u;
            goto label_373610;
        }
    }
    ctx->pc = 0x373548u;
    // 0x373548: 0x8e430808
    ctx->pc = 0x373548u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 2056)));
    // 0x37354c: 0x701821
    ctx->pc = 0x37354cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x373550: 0x8c630000
    ctx->pc = 0x373550u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x373554: 0x1060002e
    ctx->pc = 0x373554u;
    {
        const bool branch_taken_0x373554 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x373558u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x373554) {
            ctx->pc = 0x373610u;
            goto label_373610;
        }
    }
    ctx->pc = 0x37355Cu;
    // 0x37355c: 0x10000013
    ctx->pc = 0x37355Cu;
    {
        const bool branch_taken_0x37355c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x373560u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2056)));
        if (branch_taken_0x37355c) {
            ctx->pc = 0x3735ACu;
            goto label_3735ac;
        }
    }
    ctx->pc = 0x373564u;
label_373564:
    // 0x373564: 0x2623003a
    ctx->pc = 0x373564u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 58));
    // 0x373568: 0x821021
    ctx->pc = 0x373568u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x37356c: 0x306400ff
    ctx->pc = 0x37356cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 3), 255));
    // 0x373570: 0x8c430008
    ctx->pc = 0x373570u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x373574: 0x31840
    ctx->pc = 0x373574u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x373578: 0x3c02004f
    ctx->pc = 0x373578u;
    SET_GPR_U32(ctx, 2, ((uint32_t)79 << 16));
    // 0x37357c: 0x2431821
    ctx->pc = 0x37357cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x373580: 0x2442dd90
    ctx->pc = 0x373580u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958480));
    // 0x373584: 0x94650008
    ctx->pc = 0x373584u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x373588: 0x518c0
    ctx->pc = 0x373588u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x37358c: 0x651821
    ctx->pc = 0x37358cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x373590: 0x31840
    ctx->pc = 0x373590u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x373594: 0x651821
    ctx->pc = 0x373594u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x373598: 0x31880
    ctx->pc = 0x373598u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x37359c: 0xc06bde0
    ctx->pc = 0x37359Cu;
    SET_GPR_U32(ctx, 31, 0x3735A4u);
    ctx->pc = 0x3735A0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3735A4u; }
        if (ctx->pc != 0x3735A4u) { return; }
    }
    ctx->pc = 0x3735A4u;
    // 0x3735a4: 0x26310001
    ctx->pc = 0x3735a4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x3735a8: 0x8e420808
    ctx->pc = 0x3735a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2056)));
label_3735ac:
    // 0x3735ac: 0x2022021
    ctx->pc = 0x3735acu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3735b0: 0x8c820004
    ctx->pc = 0x3735b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3735b4: 0x222102a
    ctx->pc = 0x3735b4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x3735b8: 0x1440ffea
    ctx->pc = 0x3735B8u;
    {
        const bool branch_taken_0x3735b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x3735BCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x3735b8) {
            ctx->pc = 0x373564u;
            goto label_373564;
        }
    }
    ctx->pc = 0x3735C0u;
    // 0x3735c0: 0x90820088
    ctx->pc = 0x3735c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x3735c4: 0x10400005
    ctx->pc = 0x3735C4u;
    {
        const bool branch_taken_0x3735c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x3735C8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x3735c4) {
            ctx->pc = 0x3735DCu;
            goto label_3735dc;
        }
    }
    ctx->pc = 0x3735CCu;
    // 0x3735cc: 0xc0dd2c8
    ctx->pc = 0x3735CCu;
    SET_GPR_U32(ctx, 31, 0x3735D4u);
    ctx->pc = 0x374B20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00374B20_0x374b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3735D4u; }
    }
    if (ctx->pc != 0x3735D4u) { return; }
    ctx->pc = 0x3735D4u;
    // 0x3735d4: 0x10000004
    ctx->pc = 0x3735D4u;
    {
        const bool branch_taken_0x3735d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3735D8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 108));
        if (branch_taken_0x3735d4) {
            ctx->pc = 0x3735E8u;
            goto label_3735e8;
        }
    }
    ctx->pc = 0x3735DCu;
label_3735dc:
    // 0x3735dc: 0xc0dd300
    ctx->pc = 0x3735DCu;
    SET_GPR_U32(ctx, 31, 0x3735E4u);
    ctx->pc = 0x374C00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00374C00_0x374c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3735E4u; }
    }
    if (ctx->pc != 0x3735E4u) { return; }
    ctx->pc = 0x3735E4u;
    // 0x3735e4: 0x2404006c
    ctx->pc = 0x3735e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 108));
label_3735e8:
    // 0x3735e8: 0xc06bde0
    ctx->pc = 0x3735E8u;
    SET_GPR_U32(ctx, 31, 0x3735F0u);
    ctx->pc = 0x3735ECu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3735F0u; }
        if (ctx->pc != 0x3735F0u) { return; }
    }
    ctx->pc = 0x3735F0u;
    // 0x3735f0: 0x8e420808
    ctx->pc = 0x3735f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2056)));
    // 0x3735f4: 0x501021
    ctx->pc = 0x3735f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3735f8: 0x8c440000
    ctx->pc = 0x3735f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3735fc: 0xc06305c
    ctx->pc = 0x3735FCu;
    SET_GPR_U32(ctx, 31, 0x373604u);
    ctx->pc = 0x373600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18C170u;
    {
        auto targetFn = runtime->lookupFunction(0x18C170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373604u; }
        if (ctx->pc != 0x373604u) { return; }
    }
    ctx->pc = 0x373604u;
    // 0x373604: 0x2404006c
    ctx->pc = 0x373604u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 108));
    // 0x373608: 0xc06bde0
    ctx->pc = 0x373608u;
    SET_GPR_U32(ctx, 31, 0x373610u);
    ctx->pc = 0x37360Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373610u; }
        if (ctx->pc != 0x373610u) { return; }
    }
    ctx->pc = 0x373610u;
label_373610:
    // 0x373610: 0xdfbf0030
    ctx->pc = 0x373610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x373614: 0x7bb20020
    ctx->pc = 0x373614u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x373618: 0x7bb10010
    ctx->pc = 0x373618u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37361c: 0x7bb00000
    ctx->pc = 0x37361cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373620: 0x3e00008
    ctx->pc = 0x373620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373624u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x372720u: goto label_372720;
            case 0x372740u: goto label_372740;
            case 0x372758u: goto label_372758;
            case 0x37275Cu: goto label_37275c;
            case 0x37276Cu: goto label_37276c;
            case 0x372780u: goto label_372780;
            case 0x37285Cu: goto label_37285c;
            case 0x37288Cu: goto label_37288c;
            case 0x3728B8u: goto label_3728b8;
            case 0x3728C4u: goto label_3728c4;
            case 0x3728F8u: goto label_3728f8;
            case 0x372918u: goto label_372918;
            case 0x3729A0u: goto label_3729a0;
            case 0x3729BCu: goto label_3729bc;
            case 0x3729F8u: goto label_3729f8;
            case 0x372A14u: goto label_372a14;
            case 0x372A54u: goto label_372a54;
            case 0x372A70u: goto label_372a70;
            case 0x372AB0u: goto label_372ab0;
            case 0x372ACCu: goto label_372acc;
            case 0x372AD8u: goto label_372ad8;
            case 0x372ADCu: goto label_372adc;
            case 0x372AE0u: goto label_372ae0;
            case 0x372B00u: goto label_372b00;
            case 0x372B18u: goto label_372b18;
            case 0x372B70u: goto label_372b70;
            case 0x372B98u: goto label_372b98;
            case 0x372BC8u: goto label_372bc8;
            case 0x372BCCu: goto label_372bcc;
            case 0x372C50u: goto label_372c50;
            case 0x372C68u: goto label_372c68;
            case 0x372CE8u: goto label_372ce8;
            case 0x372D24u: goto label_372d24;
            case 0x372D2Cu: goto label_372d2c;
            case 0x372D30u: goto label_372d30;
            case 0x372E84u: goto label_372e84;
            case 0x372EC4u: goto label_372ec4;
            case 0x372EE0u: goto label_372ee0;
            case 0x372EF4u: goto label_372ef4;
            case 0x372EF8u: goto label_372ef8;
            case 0x372F48u: goto label_372f48;
            case 0x372F4Cu: goto label_372f4c;
            case 0x372F6Cu: goto label_372f6c;
            case 0x372FA0u: goto label_372fa0;
            case 0x372FB0u: goto label_372fb0;
            case 0x372FFCu: goto label_372ffc;
            case 0x373020u: goto label_373020;
            case 0x373034u: goto label_373034;
            case 0x373038u: goto label_373038;
            case 0x373120u: goto label_373120;
            case 0x37312Cu: goto label_37312c;
            case 0x3731BCu: goto label_3731bc;
            case 0x3731CCu: goto label_3731cc;
            case 0x373224u: goto label_373224;
            case 0x373254u: goto label_373254;
            case 0x373264u: goto label_373264;
            case 0x3732C8u: goto label_3732c8;
            case 0x3732D8u: goto label_3732d8;
            case 0x37331Cu: goto label_37331c;
            case 0x373338u: goto label_373338;
            case 0x37333Cu: goto label_37333c;
            case 0x373444u: goto label_373444;
            case 0x373460u: goto label_373460;
            case 0x3734E8u: goto label_3734e8;
            case 0x373564u: goto label_373564;
            case 0x3735ACu: goto label_3735ac;
            case 0x3735DCu: goto label_3735dc;
            case 0x3735E8u: goto label_3735e8;
            case 0x373610u: goto label_373610;
            default: break;
        }
        return;
    }
    ctx->pc = 0x373628u;
    // 0x373628: 0x0
    ctx->pc = 0x373628u;
    // NOP
    // 0x37362c: 0x0
    ctx->pc = 0x37362cu;
    // NOP
}
