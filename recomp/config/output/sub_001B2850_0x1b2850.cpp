#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B2850
// Address: 0x1b2850 - 0x1b2990
void sub_001B2850_0x1b2850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b2850u;

    // 0x1b2850: 0x2403fffe
    ctx->pc = 0x1b2850u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967294));
label_1b2854:
    // 0x1b2854: 0x8ca70000
    ctx->pc = 0x1b2854u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b2858: 0x10e00003
    ctx->pc = 0x1B2858u;
    {
        const bool branch_taken_0x1b2858 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B285Cu;
        SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 7), 1));
        if (branch_taken_0x1b2858) {
            ctx->pc = 0x1B2868u;
            goto label_1b2868;
        }
    }
    ctx->pc = 0x1B2860u;
    // 0x1b2860: 0x14c00005
    ctx->pc = 0x1B2860u;
    {
        const bool branch_taken_0x1b2860 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b2860) {
            ctx->pc = 0x1B2878u;
            goto label_1b2878;
        }
    }
    ctx->pc = 0x1B2868u;
label_1b2868:
    // 0x1b2868: 0x34830001
    ctx->pc = 0x1b2868u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 1));
    // 0x1b286c: 0xaca30000
    ctx->pc = 0x1b286cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1b2870: 0x1000000d
    ctx->pc = 0x1B2870u;
    {
        const bool branch_taken_0x1b2870 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B2874u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
        if (branch_taken_0x1b2870) {
            ctx->pc = 0x1B28A8u;
            goto label_1b28a8;
        }
    }
    ctx->pc = 0x1B2878u;
label_1b2878:
    // 0x1b2878: 0xe33024
    ctx->pc = 0x1b2878u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1b287c: 0xc4800010
    ctx->pc = 0x1b287cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2880: 0xc4c10010
    ctx->pc = 0x1b2880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2884: 0x46000836
    ctx->pc = 0x1b2884u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2888: 0x45000005
    ctx->pc = 0x1B2888u;
    {
        const bool branch_taken_0x1b2888 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2888) {
            ctx->pc = 0x1B28A0u;
            goto label_1b28a0;
        }
    }
    ctx->pc = 0x1B2890u;
    // 0x1b2890: 0x34830001
    ctx->pc = 0x1b2890u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 1));
    // 0x1b2894: 0xaca30000
    ctx->pc = 0x1b2894u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1b2898: 0x10000003
    ctx->pc = 0x1B2898u;
    {
        const bool branch_taken_0x1b2898 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B289Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
        if (branch_taken_0x1b2898) {
            ctx->pc = 0x1B28A8u;
            goto label_1b28a8;
        }
    }
    ctx->pc = 0x1B28A0u;
label_1b28a0:
    // 0x1b28a0: 0x1000ffec
    ctx->pc = 0x1B28A0u;
    {
        const bool branch_taken_0x1b28a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B28A4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b28a0) {
            ctx->pc = 0x1B2854u;
            goto label_1b2854;
        }
    }
    ctx->pc = 0x1B28A8u;
label_1b28a8:
    // 0x1b28a8: 0x3e00008
    ctx->pc = 0x1B28A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B2854u: goto label_1b2854;
            case 0x1B2868u: goto label_1b2868;
            case 0x1B2878u: goto label_1b2878;
            case 0x1B28A0u: goto label_1b28a0;
            case 0x1B28A8u: goto label_1b28a8;
            case 0x1B28ECu: goto label_1b28ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B28B0u;
    // 0x1b28b0: 0x27bdffa0
    ctx->pc = 0x1b28b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b28b4: 0x3c010032
    ctx->pc = 0x1b28b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b28b8: 0xffbf0050
    ctx->pc = 0x1b28b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1b28bc: 0x7fb40040
    ctx->pc = 0x1b28bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b28c0: 0x7fb30030
    ctx->pc = 0x1b28c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b28c4: 0x7fb20020
    ctx->pc = 0x1b28c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b28c8: 0x7fb10010
    ctx->pc = 0x1b28c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b28cc: 0x7fb00000
    ctx->pc = 0x1b28ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b28d0: 0x80882d
    ctx->pc = 0x1b28d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b28d4: 0x902243d3
    ctx->pc = 0x1b28d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17363)));
    // 0x1b28d8: 0x3c10002c
    ctx->pc = 0x1b28d8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)44 << 16));
    // 0x1b28dc: 0x10400003
    ctx->pc = 0x1B28DCu;
    {
        const bool branch_taken_0x1b28dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B28E0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294938272));
        if (branch_taken_0x1b28dc) {
            ctx->pc = 0x1B28ECu;
            goto label_1b28ec;
        }
    }
    ctx->pc = 0x1B28E4u;
    // 0x1b28e4: 0xc06be14
    ctx->pc = 0x1B28E4u;
    SET_GPR_U32(ctx, 31, 0x1B28ECu);
    ctx->pc = 0x1B28E8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF850_0x1af850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B28ECu; }
    }
    if (ctx->pc != 0x1B28ECu) { return; }
    ctx->pc = 0x1B28ECu;
label_1b28ec:
    // 0x1b28ec: 0x200202d
    ctx->pc = 0x1b28ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b28f0: 0x282d
    ctx->pc = 0x1b28f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b28f4: 0xc041f1a
    ctx->pc = 0x1B28F4u;
    SET_GPR_U32(ctx, 31, 0x1B28FCu);
    ctx->pc = 0x1B28F8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 828));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B28FCu; }
    }
    if (ctx->pc != 0x1B28FCu) { return; }
    ctx->pc = 0x1B28FCu;
    // 0x1b28fc: 0xc06bde8
    ctx->pc = 0x1B28FCu;
    SET_GPR_U32(ctx, 31, 0x1B2904u);
    ctx->pc = 0x1B2900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF7A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF7A0_0x1af7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2904u; }
    }
    if (ctx->pc != 0x1B2904u) { return; }
    ctx->pc = 0x1B2904u;
    // 0x1b2904: 0x1118c0
    ctx->pc = 0x1b2904u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 3));
    // 0x1b2908: 0x3c020002
    ctx->pc = 0x1b2908u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x1b290c: 0x711821
    ctx->pc = 0x1b290cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1b2910: 0x3442b680
    ctx->pc = 0x1b2910u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46720));
    // 0x1b2914: 0x31840
    ctx->pc = 0x1b2914u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1b2918: 0x711821
    ctx->pc = 0x1b2918u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1b291c: 0x390c0
    ctx->pc = 0x1b291cu;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1b2920: 0x2429821
    ctx->pc = 0x1b2920u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1b2924: 0xc06bdc4
    ctx->pc = 0x1B2924u;
    SET_GPR_U32(ctx, 31, 0x1B292Cu);
    ctx->pc = 0x1B2928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF710u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF710_0x1af710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B292Cu; }
    }
    if (ctx->pc != 0x1B292Cu) { return; }
    ctx->pc = 0x1B292Cu;
    // 0x1b292c: 0x40a02d
    ctx->pc = 0x1b292cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2930: 0x260302d
    ctx->pc = 0x1b2930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2934: 0x280202d
    ctx->pc = 0x1b2934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2938: 0xc041f1a
    ctx->pc = 0x1B2938u;
    SET_GPR_U32(ctx, 31, 0x1B2940u);
    ctx->pc = 0x1B293Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2940u; }
    }
    if (ctx->pc != 0x1B2940u) { return; }
    ctx->pc = 0x1B2940u;
    // 0x1b2940: 0x2921021
    ctx->pc = 0x1b2940u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x1b2944: 0xae140010
    ctx->pc = 0x1b2944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 20));
    // 0x1b2948: 0xae020014
    ctx->pc = 0x1b2948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1b294c: 0x200202d
    ctx->pc = 0x1b294cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2950: 0xa6110008
    ctx->pc = 0x1b2950u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 17));
    // 0x1b2954: 0xa600000a
    ctx->pc = 0x1b2954u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b2958: 0xc07395c
    ctx->pc = 0x1B2958u;
    SET_GPR_U32(ctx, 31, 0x1B2960u);
    ctx->pc = 0x1B295Cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1CE570u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE570_0x1ce570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2960u; }
    }
    if (ctx->pc != 0x1B2960u) { return; }
    ctx->pc = 0x1B2960u;
    // 0x1b2960: 0x24030001
    ctx->pc = 0x1b2960u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2964: 0x3c010032
    ctx->pc = 0x1b2964u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b2968: 0xa02343d3
    ctx->pc = 0x1b2968u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17363), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b296c: 0xdfbf0050
    ctx->pc = 0x1b296cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b2970: 0x7bb40040
    ctx->pc = 0x1b2970u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b2974: 0x7bb30030
    ctx->pc = 0x1b2974u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2978: 0x7bb20020
    ctx->pc = 0x1b2978u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b297c: 0x7bb10010
    ctx->pc = 0x1b297cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2980: 0x7bb00000
    ctx->pc = 0x1b2980u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2984: 0x3e00008
    ctx->pc = 0x1B2984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2988u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B2854u: goto label_1b2854;
            case 0x1B2868u: goto label_1b2868;
            case 0x1B2878u: goto label_1b2878;
            case 0x1B28A0u: goto label_1b28a0;
            case 0x1B28A8u: goto label_1b28a8;
            case 0x1B28ECu: goto label_1b28ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B298Cu;
    // 0x1b298c: 0x0
    ctx->pc = 0x1b298cu;
    // NOP
}
