#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_003748A0
// Address: 0x3748a0 - 0x374b20
void sub_003748A0_0x3748a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3748a0u;

    // 0x3748a0: 0x27bdff30
    ctx->pc = 0x3748a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x3748a4: 0xffbf0060
    ctx->pc = 0x3748a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3748a8: 0x7fb50050
    ctx->pc = 0x3748a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3748ac: 0x7fb40040
    ctx->pc = 0x3748acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3748b0: 0x80a82d
    ctx->pc = 0x3748b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3748b4: 0x7fb30030
    ctx->pc = 0x3748b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3748b8: 0x24040002
    ctx->pc = 0x3748b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x3748bc: 0x7fb20020
    ctx->pc = 0x3748bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3748c0: 0x7fb10010
    ctx->pc = 0x3748c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3748c4: 0xc1ac574
    ctx->pc = 0x3748C4u;
    SET_GPR_U32(ctx, 31, 0x3748CCu);
    ctx->pc = 0x3748C8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x6B15D0u;
    {
        auto targetFn = runtime->lookupFunction(0x6B15D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3748CCu; }
        if (ctx->pc != 0x3748CCu) { return; }
    }
    ctx->pc = 0x3748CCu;
    // 0x3748cc: 0x8ea20890
    ctx->pc = 0x3748ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 2192)));
    // 0x3748d0: 0x844200c2
    ctx->pc = 0x3748d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 194)));
    // 0x3748d4: 0x28420002
    ctx->pc = 0x3748d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x3748d8: 0x14400006
    ctx->pc = 0x3748D8u;
    {
        const bool branch_taken_0x3748d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x3748DCu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 21), 112));
        if (branch_taken_0x3748d8) {
            ctx->pc = 0x3748F4u;
            goto label_3748f4;
        }
    }
    ctx->pc = 0x3748E0u;
    // 0x3748e0: 0x8ea50898
    ctx->pc = 0x3748e0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 2200)));
    // 0x3748e4: 0xc064038
    ctx->pc = 0x3748E4u;
    SET_GPR_U32(ctx, 31, 0x3748ECu);
    ctx->pc = 0x3748E8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 184));
    ctx->pc = 0x1900E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1900E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3748ECu; }
        if (ctx->pc != 0x3748ECu) { return; }
    }
    ctx->pc = 0x3748ECu;
    // 0x3748ec: 0x10000009
    ctx->pc = 0x3748ECu;
    {
        const bool branch_taken_0x3748ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3748F0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 184));
        if (branch_taken_0x3748ec) {
            ctx->pc = 0x374914u;
            goto label_374914;
        }
    }
    ctx->pc = 0x3748F4u;
label_3748f4:
    // 0x3748f4: 0xc6a20020
    ctx->pc = 0x3748f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3748f8: 0x27a200b8
    ctx->pc = 0x3748f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 184));
    // 0x3748fc: 0xc6a10024
    ctx->pc = 0x3748fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x374900: 0xc6a00028
    ctx->pc = 0x374900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374904: 0xe4420000
    ctx->pc = 0x374904u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x374908: 0xe4410004
    ctx->pc = 0x374908u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x37490c: 0xe4400008
    ctx->pc = 0x37490cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x374910: 0x27a400b8
    ctx->pc = 0x374910u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 184));
label_374914:
    // 0x374914: 0xc1ad0c8
    ctx->pc = 0x374914u;
    SET_GPR_U32(ctx, 31, 0x37491Cu);
    ctx->pc = 0x6B4320u;
    {
        auto targetFn = runtime->lookupFunction(0x6B4320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37491Cu; }
        if (ctx->pc != 0x37491Cu) { return; }
    }
    ctx->pc = 0x37491Cu;
    // 0x37491c: 0x44806000
    ctx->pc = 0x37491cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x374920: 0x27a40070
    ctx->pc = 0x374920u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 112));
    // 0x374924: 0x46006346
    ctx->pc = 0x374924u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x374928: 0xc063fc4
    ctx->pc = 0x374928u;
    SET_GPR_U32(ctx, 31, 0x374930u);
    ctx->pc = 0x37492Cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x18FF10u;
    {
        auto targetFn = runtime->lookupFunction(0x18FF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374930u; }
        if (ctx->pc != 0x374930u) { return; }
    }
    ctx->pc = 0x374930u;
    // 0x374930: 0x44806000
    ctx->pc = 0x374930u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x374934: 0x27a40070
    ctx->pc = 0x374934u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 112));
    // 0x374938: 0x46006346
    ctx->pc = 0x374938u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x37493c: 0xc0640b4
    ctx->pc = 0x37493Cu;
    SET_GPR_U32(ctx, 31, 0x374944u);
    ctx->pc = 0x374940u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1902D0u;
    {
        auto targetFn = runtime->lookupFunction(0x1902D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374944u; }
        if (ctx->pc != 0x374944u) { return; }
    }
    ctx->pc = 0x374944u;
    // 0x374944: 0x27a50070
    ctx->pc = 0x374944u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 112));
    // 0x374948: 0xc06bde0
    ctx->pc = 0x374948u;
    SET_GPR_U32(ctx, 31, 0x374950u);
    ctx->pc = 0x37494Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 25));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374950u; }
        if (ctx->pc != 0x374950u) { return; }
    }
    ctx->pc = 0x374950u;
    // 0x374950: 0x2404005e
    ctx->pc = 0x374950u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 94));
    // 0x374954: 0xc06bde0
    ctx->pc = 0x374954u;
    SET_GPR_U32(ctx, 31, 0x37495Cu);
    ctx->pc = 0x374958u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 50));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37495Cu; }
        if (ctx->pc != 0x37495Cu) { return; }
    }
    ctx->pc = 0x37495Cu;
    // 0x37495c: 0x24040067
    ctx->pc = 0x37495cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 103));
    // 0x374960: 0xc06bde0
    ctx->pc = 0x374960u;
    SET_GPR_U32(ctx, 31, 0x374968u);
    ctx->pc = 0x374964u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374968u; }
        if (ctx->pc != 0x374968u) { return; }
    }
    ctx->pc = 0x374968u;
    // 0x374968: 0xc0dd31c
    ctx->pc = 0x374968u;
    SET_GPR_U32(ctx, 31, 0x374970u);
    ctx->pc = 0x37496Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 255));
    ctx->pc = 0x374C70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00374C70_0x374c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374970u; }
    }
    if (ctx->pc != 0x374970u) { return; }
    ctx->pc = 0x374970u;
    // 0x374970: 0x40902d
    ctx->pc = 0x374970u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374974: 0x8e820000
    ctx->pc = 0x374974u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x374978: 0x8c450000
    ctx->pc = 0x374978u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37497c: 0xc064a38
    ctx->pc = 0x37497Cu;
    SET_GPR_U32(ctx, 31, 0x374984u);
    ctx->pc = 0x374980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1928E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1928E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374984u; }
        if (ctx->pc != 0x374984u) { return; }
    }
    ctx->pc = 0x374984u;
    // 0x374984: 0x86a50018
    ctx->pc = 0x374984u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x374988: 0x27a600c8
    ctx->pc = 0x374988u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 200));
    // 0x37498c: 0x86a4001a
    ctx->pc = 0x37498cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 26)));
    // 0x374990: 0x86a3001c
    ctx->pc = 0x374990u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x374994: 0x86a2001e
    ctx->pc = 0x374994u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 30)));
    // 0x374998: 0xa4c50000
    ctx->pc = 0x374998u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x37499c: 0xa4c40002
    ctx->pc = 0x37499cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x3749a0: 0xa4c30004
    ctx->pc = 0x3749a0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3749a4: 0xa4c20006
    ctx->pc = 0x3749a4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x3749a8: 0xc0dc4fc
    ctx->pc = 0x3749A8u;
    SET_GPR_U32(ctx, 31, 0x3749B0u);
    ctx->pc = 0x3749ACu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 2200)));
    ctx->pc = 0x3713F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_003713F0_0x3713f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3749B0u; }
    }
    if (ctx->pc != 0x3749B0u) { return; }
    ctx->pc = 0x3749B0u;
    // 0x3749b0: 0xa7a200ca
    ctx->pc = 0x3749b0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 202), (uint16_t)GPR_U32(ctx, 2));
    // 0x3749b4: 0x1000004b
    ctx->pc = 0x3749B4u;
    {
        const bool branch_taken_0x3749b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3749B8u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x3749b4) {
            ctx->pc = 0x374AE4u;
            goto label_374ae4;
        }
    }
    ctx->pc = 0x3749BCu;
label_3749bc:
    // 0x3749bc: 0x8e840808
    ctx->pc = 0x3749bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 2056)));
    // 0x3749c0: 0x1318c0
    ctx->pc = 0x3749c0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 3));
    // 0x3749c4: 0x732821
    ctx->pc = 0x3749c4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x3749c8: 0x52840
    ctx->pc = 0x3749c8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
    // 0x3749cc: 0x2403ffff
    ctx->pc = 0x3749ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3749d0: 0xb32821
    ctx->pc = 0x3749d0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x3749d4: 0x580c0
    ctx->pc = 0x3749d4u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 5), 3));
    // 0x3749d8: 0x902021
    ctx->pc = 0x3749d8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x3749dc: 0x8c840000
    ctx->pc = 0x3749dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3749e0: 0x1083003f
    ctx->pc = 0x3749E0u;
    {
        const bool branch_taken_0x3749e0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x3749e0) {
            ctx->pc = 0x374AE0u;
            goto label_374ae0;
        }
    }
    ctx->pc = 0x3749E8u;
    // 0x3749e8: 0x1080003d
    ctx->pc = 0x3749E8u;
    {
        const bool branch_taken_0x3749e8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x3749ECu;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        if (branch_taken_0x3749e8) {
            ctx->pc = 0x374AE0u;
            goto label_374ae0;
        }
    }
    ctx->pc = 0x3749F0u;
    // 0x3749f0: 0x90630008
    ctx->pc = 0x3749f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3749f4: 0x1060003a
    ctx->pc = 0x3749F4u;
    {
        const bool branch_taken_0x3749f4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x3749F8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x3749f4) {
            ctx->pc = 0x374AE0u;
            goto label_374ae0;
        }
    }
    ctx->pc = 0x3749FCu;
    // 0x3749fc: 0x10000013
    ctx->pc = 0x3749FCu;
    {
        const bool branch_taken_0x3749fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x374A00u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 2056)));
        if (branch_taken_0x3749fc) {
            ctx->pc = 0x374A4Cu;
            goto label_374a4c;
        }
    }
    ctx->pc = 0x374A04u;
label_374a04:
    // 0x374a04: 0x2623003a
    ctx->pc = 0x374a04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 58));
    // 0x374a08: 0x821021
    ctx->pc = 0x374a08u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x374a0c: 0x306400ff
    ctx->pc = 0x374a0cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 3), 255));
    // 0x374a10: 0x8c430008
    ctx->pc = 0x374a10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x374a14: 0x31840
    ctx->pc = 0x374a14u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x374a18: 0x3c02004f
    ctx->pc = 0x374a18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)79 << 16));
    // 0x374a1c: 0x2831821
    ctx->pc = 0x374a1cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x374a20: 0x2442dd90
    ctx->pc = 0x374a20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958480));
    // 0x374a24: 0x94650008
    ctx->pc = 0x374a24u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x374a28: 0x518c0
    ctx->pc = 0x374a28u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x374a2c: 0x651821
    ctx->pc = 0x374a2cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x374a30: 0x31840
    ctx->pc = 0x374a30u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x374a34: 0x651821
    ctx->pc = 0x374a34u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x374a38: 0x31880
    ctx->pc = 0x374a38u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x374a3c: 0xc06bde0
    ctx->pc = 0x374A3Cu;
    SET_GPR_U32(ctx, 31, 0x374A44u);
    ctx->pc = 0x374A40u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374A44u; }
        if (ctx->pc != 0x374A44u) { return; }
    }
    ctx->pc = 0x374A44u;
    // 0x374a44: 0x26310001
    ctx->pc = 0x374a44u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x374a48: 0x8e820808
    ctx->pc = 0x374a48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 2056)));
label_374a4c:
    // 0x374a4c: 0x2022021
    ctx->pc = 0x374a4cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x374a50: 0x8c820004
    ctx->pc = 0x374a50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x374a54: 0x222102a
    ctx->pc = 0x374a54u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x374a58: 0x1440ffea
    ctx->pc = 0x374A58u;
    {
        const bool branch_taken_0x374a58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x374A5Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x374a58) {
            ctx->pc = 0x374A04u;
            goto label_374a04;
        }
    }
    ctx->pc = 0x374A60u;
    // 0x374a60: 0x90820088
    ctx->pc = 0x374a60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x374a64: 0x10400005
    ctx->pc = 0x374A64u;
    {
        const bool branch_taken_0x374a64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x374A68u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x374a64) {
            ctx->pc = 0x374A7Cu;
            goto label_374a7c;
        }
    }
    ctx->pc = 0x374A6Cu;
    // 0x374a6c: 0xc0dd2c8
    ctx->pc = 0x374A6Cu;
    SET_GPR_U32(ctx, 31, 0x374A74u);
    ctx->pc = 0x374B20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00374B20_0x374b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374A74u; }
    }
    if (ctx->pc != 0x374A74u) { return; }
    ctx->pc = 0x374A74u;
    // 0x374a74: 0x10000004
    ctx->pc = 0x374A74u;
    {
        const bool branch_taken_0x374a74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x374A78u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 2072)));
        if (branch_taken_0x374a74) {
            ctx->pc = 0x374A88u;
            goto label_374a88;
        }
    }
    ctx->pc = 0x374A7Cu;
label_374a7c:
    // 0x374a7c: 0xc0dd300
    ctx->pc = 0x374A7Cu;
    SET_GPR_U32(ctx, 31, 0x374A84u);
    ctx->pc = 0x374C00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00374C00_0x374c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374A84u; }
    }
    if (ctx->pc != 0x374A84u) { return; }
    ctx->pc = 0x374A84u;
    // 0x374a84: 0x8e820818
    ctx->pc = 0x374a84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 2072)));
label_374a88:
    // 0x374a88: 0x131940
    ctx->pc = 0x374a88u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 5));
    // 0x374a8c: 0x731821
    ctx->pc = 0x374a8cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x374a90: 0x240282d
    ctx->pc = 0x374a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374a94: 0x31840
    ctx->pc = 0x374a94u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x374a98: 0xc064a60
    ctx->pc = 0x374A98u;
    SET_GPR_U32(ctx, 31, 0x374AA0u);
    ctx->pc = 0x374A9Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x192980u;
    {
        auto targetFn = runtime->lookupFunction(0x192980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374AA0u; }
        if (ctx->pc != 0x374AA0u) { return; }
    }
    ctx->pc = 0x374AA0u;
    // 0x374aa0: 0x8e820808
    ctx->pc = 0x374aa0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 2056)));
    // 0x374aa4: 0x501021
    ctx->pc = 0x374aa4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x374aa8: 0x90420088
    ctx->pc = 0x374aa8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x374aac: 0x10400007
    ctx->pc = 0x374AACu;
    {
        const bool branch_taken_0x374aac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x374aac) {
            ctx->pc = 0x374ACCu;
            goto label_374acc;
        }
    }
    ctx->pc = 0x374AB4u;
    // 0x374ab4: 0x8ea50898
    ctx->pc = 0x374ab4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 2200)));
    // 0x374ab8: 0xc064038
    ctx->pc = 0x374AB8u;
    SET_GPR_U32(ctx, 31, 0x374AC0u);
    ctx->pc = 0x374ABCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 184));
    ctx->pc = 0x1900E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1900E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374AC0u; }
        if (ctx->pc != 0x374AC0u) { return; }
    }
    ctx->pc = 0x374AC0u;
    // 0x374ac0: 0x27a400b8
    ctx->pc = 0x374ac0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 184));
    // 0x374ac4: 0xc0dd3dc
    ctx->pc = 0x374AC4u;
    SET_GPR_U32(ctx, 31, 0x374ACCu);
    ctx->pc = 0x374AC8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 200));
    ctx->pc = 0x374F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00374F70_0x374f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374ACCu; }
    }
    if (ctx->pc != 0x374ACCu) { return; }
    ctx->pc = 0x374ACCu;
label_374acc:
    // 0x374acc: 0x8e820808
    ctx->pc = 0x374accu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 2056)));
    // 0x374ad0: 0x501021
    ctx->pc = 0x374ad0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x374ad4: 0x8c440000
    ctx->pc = 0x374ad4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x374ad8: 0xc06305c
    ctx->pc = 0x374AD8u;
    SET_GPR_U32(ctx, 31, 0x374AE0u);
    ctx->pc = 0x374ADCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18C170u;
    {
        auto targetFn = runtime->lookupFunction(0x18C170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374AE0u; }
        if (ctx->pc != 0x374AE0u) { return; }
    }
    ctx->pc = 0x374AE0u;
label_374ae0:
    // 0x374ae0: 0x26730001
    ctx->pc = 0x374ae0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_374ae4:
    // 0x374ae4: 0x96830812
    ctx->pc = 0x374ae4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2066)));
    // 0x374ae8: 0x263182a
    ctx->pc = 0x374ae8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 3)));
    // 0x374aec: 0x1460ffb3
    ctx->pc = 0x374AECu;
    {
        const bool branch_taken_0x374aec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x374aec) {
            ctx->pc = 0x3749BCu;
            goto label_3749bc;
        }
    }
    ctx->pc = 0x374AF4u;
    // 0x374af4: 0xdfbf0060
    ctx->pc = 0x374af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x374af8: 0x7bb50050
    ctx->pc = 0x374af8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x374afc: 0x7bb40040
    ctx->pc = 0x374afcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x374b00: 0x7bb30030
    ctx->pc = 0x374b00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x374b04: 0x7bb20020
    ctx->pc = 0x374b04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x374b08: 0x7bb10010
    ctx->pc = 0x374b08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374b0c: 0x7bb00000
    ctx->pc = 0x374b0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374b10: 0x3e00008
    ctx->pc = 0x374B10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374B14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3748F4u: goto label_3748f4;
            case 0x374914u: goto label_374914;
            case 0x3749BCu: goto label_3749bc;
            case 0x374A04u: goto label_374a04;
            case 0x374A4Cu: goto label_374a4c;
            case 0x374A7Cu: goto label_374a7c;
            case 0x374A88u: goto label_374a88;
            case 0x374ACCu: goto label_374acc;
            case 0x374AE0u: goto label_374ae0;
            case 0x374AE4u: goto label_374ae4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x374B18u;
    // 0x374b18: 0x0
    ctx->pc = 0x374b18u;
    // NOP
    // 0x374b1c: 0x0
    ctx->pc = 0x374b1cu;
    // NOP
}
