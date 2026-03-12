#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_003724F0
// Address: 0x3724f0 - 0x372720
void sub_003724F0_0x3724f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3724f0u;

    // 0x3724f0: 0x27bdfec0
    ctx->pc = 0x3724f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x3724f4: 0x2403ffff
    ctx->pc = 0x3724f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3724f8: 0xffbf0090
    ctx->pc = 0x3724f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x3724fc: 0x7fbe0080
    ctx->pc = 0x3724fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x372500: 0x7fb70070
    ctx->pc = 0x372500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x372504: 0x7fb60060
    ctx->pc = 0x372504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x372508: 0x7fb50050
    ctx->pc = 0x372508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x37250c: 0x7fb40040
    ctx->pc = 0x37250cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x372510: 0x7fb30030
    ctx->pc = 0x372510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x372514: 0x7fb20020
    ctx->pc = 0x372514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x372518: 0x7fb10010
    ctx->pc = 0x372518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37251c: 0x7fb00000
    ctx->pc = 0x37251cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x372520: 0x84910242
    ctx->pc = 0x372520u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 578)));
    // 0x372524: 0x12230072
    ctx->pc = 0x372524u;
    {
        const bool branch_taken_0x372524 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 3));
        ctx->pc = 0x372528u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x372524) {
            ctx->pc = 0x3726F0u;
            goto label_3726f0;
        }
    }
    ctx->pc = 0x37252Cu;
    // 0x37252c: 0x3c02003e
    ctx->pc = 0x37252cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)62 << 16));
    // 0x372530: 0x3c14003d
    ctx->pc = 0x372530u;
    SET_GPR_U32(ctx, 20, ((uint32_t)61 << 16));
    // 0x372534: 0x111840
    ctx->pc = 0x372534u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 1));
    // 0x372538: 0x2442bb14
    ctx->pc = 0x372538u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294949652));
    // 0x37253c: 0x431021
    ctx->pc = 0x37253cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x372540: 0x27a400e0
    ctx->pc = 0x372540u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 224));
    // 0x372544: 0x84500000
    ctx->pc = 0x372544u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x372548: 0xc063f7c
    ctx->pc = 0x372548u;
    SET_GPR_U32(ctx, 31, 0x372550u);
    ctx->pc = 0x37254Cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294939184));
    ctx->pc = 0x18FDF0u;
    {
        auto targetFn = runtime->lookupFunction(0x18FDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372550u; }
        if (ctx->pc != 0x372550u) { return; }
    }
    ctx->pc = 0x372550u;
    // 0x372550: 0xc0dd46c
    ctx->pc = 0x372550u;
    SET_GPR_U32(ctx, 31, 0x372558u);
    ctx->pc = 0x3751B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_003751B0_0x3751b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372558u; }
    }
    if (ctx->pc != 0x372558u) { return; }
    ctx->pc = 0x372558u;
    // 0x372558: 0x111840
    ctx->pc = 0x372558u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 1));
    // 0x37255c: 0x10f43c
    ctx->pc = 0x37255cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 16) << (32 + 16));
    // 0x372560: 0x712021
    ctx->pc = 0x372560u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x372564: 0x1ef43f
    ctx->pc = 0x372564u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 30) >> (32 + 16));
    // 0x372568: 0x280182d
    ctx->pc = 0x372568u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37256c: 0x421c0
    ctx->pc = 0x37256cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 7));
    // 0x372570: 0x982d
    ctx->pc = 0x372570u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372574: 0x10000030
    ctx->pc = 0x372574u;
    {
        const bool branch_taken_0x372574 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x372578u;
        SET_GPR_U32(ctx, 23, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        if (branch_taken_0x372574) {
            ctx->pc = 0x372638u;
            goto label_372638;
        }
    }
    ctx->pc = 0x37257Cu;
label_37257c:
    // 0x37257c: 0x27a400e0
    ctx->pc = 0x37257cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 224));
    // 0x372580: 0x2b21021
    ctx->pc = 0x372580u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x372584: 0x26a601c0
    ctx->pc = 0x372584u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 21), 448));
    // 0x372588: 0x24560040
    ctx->pc = 0x372588u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 64));
    // 0x37258c: 0xc0644e0
    ctx->pc = 0x37258Cu;
    SET_GPR_U32(ctx, 31, 0x372594u);
    ctx->pc = 0x372590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x191380u;
    {
        auto targetFn = runtime->lookupFunction(0x191380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372594u; }
        if (ctx->pc != 0x372594u) { return; }
    }
    ctx->pc = 0x372594u;
    // 0x372594: 0x2c0282d
    ctx->pc = 0x372594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372598: 0xc064038
    ctx->pc = 0x372598u;
    SET_GPR_U32(ctx, 31, 0x3725A0u);
    ctx->pc = 0x37259Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 304));
    ctx->pc = 0x1900E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1900E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3725A0u; }
        if (ctx->pc != 0x3725A0u) { return; }
    }
    ctx->pc = 0x3725A0u;
    // 0x3725a0: 0xc6a10218
    ctx->pc = 0x3725a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3725a4: 0x27a40120
    ctx->pc = 0x3725a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 288));
    // 0x3725a8: 0xc7a00130
    ctx->pc = 0x3725a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3725ac: 0x27a50130
    ctx->pc = 0x3725acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 304));
    // 0x3725b0: 0x26a601c0
    ctx->pc = 0x3725b0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 21), 448));
    // 0x3725b4: 0x46010001
    ctx->pc = 0x3725b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3725b8: 0xc064674
    ctx->pc = 0x3725B8u;
    SET_GPR_U32(ctx, 31, 0x3725C0u);
    ctx->pc = 0x3725BCu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    ctx->pc = 0x1919D0u;
    {
        auto targetFn = runtime->lookupFunction(0x1919D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3725C0u; }
        if (ctx->pc != 0x3725C0u) { return; }
    }
    ctx->pc = 0x3725C0u;
    // 0x3725c0: 0xc6a10200
    ctx->pc = 0x3725c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3725c4: 0x2f21021
    ctx->pc = 0x3725c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
    // 0x3725c8: 0xc7a00120
    ctx->pc = 0x3725c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3725cc: 0x34019820
    ctx->pc = 0x3725ccu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 0), 38944));
    // 0x3725d0: 0x412821
    ctx->pc = 0x3725d0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x3725d4: 0x27a400a0
    ctx->pc = 0x3725d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 160));
    // 0x3725d8: 0x27a20110
    ctx->pc = 0x3725d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 272));
    // 0x3725dc: 0x27a600e0
    ctx->pc = 0x3725dcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 224));
    // 0x3725e0: 0x46000800
    ctx->pc = 0x3725e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3725e4: 0xe4400000
    ctx->pc = 0x3725e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3725e8: 0x27a20124
    ctx->pc = 0x3725e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 292));
    // 0x3725ec: 0xc4400000
    ctx->pc = 0x3725ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3725f0: 0xc6a10204
    ctx->pc = 0x3725f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3725f4: 0x27a20114
    ctx->pc = 0x3725f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 276));
    // 0x3725f8: 0x46000800
    ctx->pc = 0x3725f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3725fc: 0xe4400000
    ctx->pc = 0x3725fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x372600: 0x27a20128
    ctx->pc = 0x372600u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 296));
    // 0x372604: 0xc4400000
    ctx->pc = 0x372604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372608: 0xc6a10208
    ctx->pc = 0x372608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37260c: 0x27a20118
    ctx->pc = 0x37260cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 280));
    // 0x372610: 0x46000800
    ctx->pc = 0x372610u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x372614: 0xc0644a0
    ctx->pc = 0x372614u;
    SET_GPR_U32(ctx, 31, 0x37261Cu);
    ctx->pc = 0x372618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->pc = 0x191280u;
    {
        auto targetFn = runtime->lookupFunction(0x191280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37261Cu; }
        if (ctx->pc != 0x37261Cu) { return; }
    }
    ctx->pc = 0x37261Cu;
    // 0x37261c: 0x2602001a
    ctx->pc = 0x37261cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 26));
    // 0x372620: 0x27a500a0
    ctx->pc = 0x372620u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 160));
    // 0x372624: 0xc06bde0
    ctx->pc = 0x372624u;
    SET_GPR_U32(ctx, 31, 0x37262Cu);
    ctx->pc = 0x372628u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 255));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37262Cu; }
        if (ctx->pc != 0x37262Cu) { return; }
    }
    ctx->pc = 0x37262Cu;
    // 0x37262c: 0x26630001
    ctx->pc = 0x37262cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 19), 1));
    // 0x372630: 0x39c3c
    ctx->pc = 0x372630u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) << (32 + 16));
    // 0x372634: 0x139c3f
    ctx->pc = 0x372634u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
label_372638:
    // 0x372638: 0x13843c
    ctx->pc = 0x372638u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) << (32 + 16));
    // 0x37263c: 0x10843f
    ctx->pc = 0x37263cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x372640: 0x21e182a
    ctx->pc = 0x372640u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 30)));
    // 0x372644: 0x1460ffcd
    ctx->pc = 0x372644u;
    {
        const bool branch_taken_0x372644 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x372648u;
        SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 16), 6));
        if (branch_taken_0x372644) {
            ctx->pc = 0x37257Cu;
            goto label_37257c;
        }
    }
    ctx->pc = 0x37264Cu;
    // 0x37264c: 0x8e840808
    ctx->pc = 0x37264cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 2056)));
    // 0x372650: 0x1118c0
    ctx->pc = 0x372650u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 3));
    // 0x372654: 0x712821
    ctx->pc = 0x372654u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x372658: 0x52840
    ctx->pc = 0x372658u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
    // 0x37265c: 0x2403ffff
    ctx->pc = 0x37265cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x372660: 0xb12821
    ctx->pc = 0x372660u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x372664: 0x580c0
    ctx->pc = 0x372664u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 5), 3));
    // 0x372668: 0x902021
    ctx->pc = 0x372668u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x37266c: 0x8c840000
    ctx->pc = 0x37266cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x372670: 0x1083001f
    ctx->pc = 0x372670u;
    {
        const bool branch_taken_0x372670 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x372670) {
            ctx->pc = 0x3726F0u;
            goto label_3726f0;
        }
    }
    ctx->pc = 0x372678u;
    // 0x372678: 0x1080001d
    ctx->pc = 0x372678u;
    {
        const bool branch_taken_0x372678 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x37267Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x372678) {
            ctx->pc = 0x3726F0u;
            goto label_3726f0;
        }
    }
    ctx->pc = 0x372680u;
    // 0x372680: 0x10000013
    ctx->pc = 0x372680u;
    {
        const bool branch_taken_0x372680 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x372684u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 2056)));
        if (branch_taken_0x372680) {
            ctx->pc = 0x3726D0u;
            goto label_3726d0;
        }
    }
    ctx->pc = 0x372688u;
label_372688:
    // 0x372688: 0x2623003a
    ctx->pc = 0x372688u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 58));
    // 0x37268c: 0x821021
    ctx->pc = 0x37268cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x372690: 0x306400ff
    ctx->pc = 0x372690u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 3), 255));
    // 0x372694: 0x8c430008
    ctx->pc = 0x372694u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x372698: 0x31840
    ctx->pc = 0x372698u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x37269c: 0x3c02004f
    ctx->pc = 0x37269cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)79 << 16));
    // 0x3726a0: 0x2831821
    ctx->pc = 0x3726a0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x3726a4: 0x2442dd90
    ctx->pc = 0x3726a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958480));
    // 0x3726a8: 0x94650008
    ctx->pc = 0x3726a8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3726ac: 0x518c0
    ctx->pc = 0x3726acu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x3726b0: 0x651821
    ctx->pc = 0x3726b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3726b4: 0x31840
    ctx->pc = 0x3726b4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x3726b8: 0x651821
    ctx->pc = 0x3726b8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3726bc: 0x31880
    ctx->pc = 0x3726bcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x3726c0: 0xc06bde0
    ctx->pc = 0x3726C0u;
    SET_GPR_U32(ctx, 31, 0x3726C8u);
    ctx->pc = 0x3726C4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3726C8u; }
        if (ctx->pc != 0x3726C8u) { return; }
    }
    ctx->pc = 0x3726C8u;
    // 0x3726c8: 0x26310001
    ctx->pc = 0x3726c8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x3726cc: 0x8e820808
    ctx->pc = 0x3726ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 2056)));
label_3726d0:
    // 0x3726d0: 0x2022021
    ctx->pc = 0x3726d0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3726d4: 0x8c820004
    ctx->pc = 0x3726d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3726d8: 0x222102a
    ctx->pc = 0x3726d8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x3726dc: 0x1440ffea
    ctx->pc = 0x3726DCu;
    {
        const bool branch_taken_0x3726dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x3726E0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x3726dc) {
            ctx->pc = 0x372688u;
            goto label_372688;
        }
    }
    ctx->pc = 0x3726E4u;
    // 0x3726e4: 0x8c840000
    ctx->pc = 0x3726e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3726e8: 0xc06305c
    ctx->pc = 0x3726E8u;
    SET_GPR_U32(ctx, 31, 0x3726F0u);
    ctx->pc = 0x3726ECu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18C170u;
    {
        auto targetFn = runtime->lookupFunction(0x18C170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3726F0u; }
        if (ctx->pc != 0x3726F0u) { return; }
    }
    ctx->pc = 0x3726F0u;
label_3726f0:
    // 0x3726f0: 0xdfbf0090
    ctx->pc = 0x3726f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3726f4: 0x7bbe0080
    ctx->pc = 0x3726f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3726f8: 0x7bb70070
    ctx->pc = 0x3726f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3726fc: 0x7bb60060
    ctx->pc = 0x3726fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x372700: 0x7bb50050
    ctx->pc = 0x372700u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x372704: 0x7bb40040
    ctx->pc = 0x372704u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x372708: 0x7bb30030
    ctx->pc = 0x372708u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37270c: 0x7bb20020
    ctx->pc = 0x37270cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x372710: 0x7bb10010
    ctx->pc = 0x372710u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x372714: 0x7bb00000
    ctx->pc = 0x372714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372718: 0x3e00008
    ctx->pc = 0x372718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37271Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37257Cu: goto label_37257c;
            case 0x372638u: goto label_372638;
            case 0x372688u: goto label_372688;
            case 0x3726D0u: goto label_3726d0;
            case 0x3726F0u: goto label_3726f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x372720u;
}
