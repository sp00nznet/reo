#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F2810
// Address: 0x1f2810 - 0x1f2b08
void sub_001F2810_0x1f2810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f2810u;

    // 0x1f2810: 0x27bdffd0
    ctx->pc = 0x1f2810u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f2814: 0xffbe0020
    ctx->pc = 0x1f2814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x1f2818: 0xffbf0028
    ctx->pc = 0x1f2818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1f281c: 0x3a0f02d
    ctx->pc = 0x1f281cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2820: 0xafc40000
    ctx->pc = 0x1f2820u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1f2824: 0xafc50004
    ctx->pc = 0x1f2824u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x1f2828: 0xafc00008
    ctx->pc = 0x1f2828u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
    // 0x1f282c: 0x8fc20004
    ctx->pc = 0x1f282cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1f2830: 0xafc2000c
    ctx->pc = 0x1f2830u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x1f2834: 0x8fc40004
    ctx->pc = 0x1f2834u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1f2838: 0xc07cb99
    ctx->pc = 0x1F2838u;
    SET_GPR_U32(ctx, 31, 0x1F2840u);
    ctx->pc = 0x1F2E64u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F2E64_0x1f2e64(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2840u; }
    }
    if (ctx->pc != 0x1F2840u) { return; }
    ctx->pc = 0x1F2840u;
    // 0x1f2840: 0xafc20008
    ctx->pc = 0x1f2840u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x1f2844: 0x8fc20008
    ctx->pc = 0x1f2844u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1f2848: 0x10400004
    ctx->pc = 0x1F2848u;
    {
        const bool branch_taken_0x1f2848 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2848) {
            ctx->pc = 0x1F285Cu;
            goto label_1f285c;
        }
    }
    ctx->pc = 0x1F2850u;
    // 0x1f2850: 0x8fc20008
    ctx->pc = 0x1f2850u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1f2854: 0x1000009c
    ctx->pc = 0x1F2854u;
    {
        const bool branch_taken_0x1f2854 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2854) {
            ctx->pc = 0x1F2AC8u;
            goto label_1f2ac8;
        }
    }
    ctx->pc = 0x1F285Cu;
label_1f285c:
    // 0x1f285c: 0x8fc4000c
    ctx->pc = 0x1f285cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1f2860: 0xc07c6cd
    ctx->pc = 0x1F2860u;
    SET_GPR_U32(ctx, 31, 0x1F2868u);
    ctx->pc = 0x1F1B34u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1B34_0x1f1b34(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2868u; }
    }
    if (ctx->pc != 0x1F2868u) { return; }
    ctx->pc = 0x1F2868u;
    // 0x1f2868: 0x8fc30000
    ctx->pc = 0x1f2868u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f286c: 0x9463005e
    ctx->pc = 0x1f286cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 94)));
    // 0x1f2870: 0x14430028
    ctx->pc = 0x1F2870u;
    {
        const bool branch_taken_0x1f2870 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1f2870) {
            ctx->pc = 0x1F2914u;
            goto label_1f2914;
        }
    }
    ctx->pc = 0x1F2878u;
    // 0x1f2878: 0x8fc4000c
    ctx->pc = 0x1f2878u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1f287c: 0x282d
    ctx->pc = 0x1f287cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2880: 0xc07c6a9
    ctx->pc = 0x1F2880u;
    SET_GPR_U32(ctx, 31, 0x1F2888u);
    ctx->pc = 0x1F1AA4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1AA4_0x1f1aa4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2888u; }
    }
    if (ctx->pc != 0x1F2888u) { return; }
    ctx->pc = 0x1F2888u;
    // 0x1f2888: 0x8fc30000
    ctx->pc = 0x1f2888u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f288c: 0x8fc20000
    ctx->pc = 0x1f288cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2890: 0x8c420040
    ctx->pc = 0x1f2890u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1f2894: 0x24420001
    ctx->pc = 0x1f2894u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f2898: 0xac620040
    ctx->pc = 0x1f2898u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
    // 0x1f289c: 0x8fc40000
    ctx->pc = 0x1f289cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f28a0: 0x8fc5000c
    ctx->pc = 0x1f28a0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1f28a4: 0xc07c47a
    ctx->pc = 0x1F28A4u;
    SET_GPR_U32(ctx, 31, 0x1F28ACu);
    ctx->pc = 0x1F11E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F11E8_0x1f11e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F28ACu; }
    }
    if (ctx->pc != 0x1F28ACu) { return; }
    ctx->pc = 0x1F28ACu;
    // 0x1f28ac: 0xafc20008
    ctx->pc = 0x1f28acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x1f28b0: 0x8fc20008
    ctx->pc = 0x1f28b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1f28b4: 0x10400004
    ctx->pc = 0x1F28B4u;
    {
        const bool branch_taken_0x1f28b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f28b4) {
            ctx->pc = 0x1F28C8u;
            goto label_1f28c8;
        }
    }
    ctx->pc = 0x1F28BCu;
    // 0x1f28bc: 0x8fc20008
    ctx->pc = 0x1f28bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1f28c0: 0x10000081
    ctx->pc = 0x1F28C0u;
    {
        const bool branch_taken_0x1f28c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f28c0) {
            ctx->pc = 0x1F2AC8u;
            goto label_1f2ac8;
        }
    }
    ctx->pc = 0x1F28C8u;
label_1f28c8:
    // 0x1f28c8: 0x8fc40000
    ctx->pc = 0x1f28c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f28cc: 0x24050001
    ctx->pc = 0x1f28ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f28d0: 0xc07c44b
    ctx->pc = 0x1F28D0u;
    SET_GPR_U32(ctx, 31, 0x1F28D8u);
    ctx->pc = 0x1F112Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F112C_0x1f112c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F28D8u; }
    }
    if (ctx->pc != 0x1F28D8u) { return; }
    ctx->pc = 0x1F28D8u;
    // 0x1f28d8: 0x1040000e
    ctx->pc = 0x1F28D8u;
    {
        const bool branch_taken_0x1f28d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f28d8) {
            ctx->pc = 0x1F2914u;
            goto label_1f2914;
        }
    }
    ctx->pc = 0x1F28E0u;
    // 0x1f28e0: 0x8fc40000
    ctx->pc = 0x1f28e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f28e4: 0xc07c441
    ctx->pc = 0x1F28E4u;
    SET_GPR_U32(ctx, 31, 0x1F28ECu);
    ctx->pc = 0x1F1104u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1104_0x1f1104(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F28ECu; }
    }
    if (ctx->pc != 0x1F28ECu) { return; }
    ctx->pc = 0x1F28ECu;
    // 0x1f28ec: 0x40182d
    ctx->pc = 0x1f28ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f28f0: 0x8fc20000
    ctx->pc = 0x1f28f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f28f4: 0x94420070
    ctx->pc = 0x1f28f4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1f28f8: 0x43102b
    ctx->pc = 0x1f28f8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f28fc: 0x10400005
    ctx->pc = 0x1F28FCu;
    {
        const bool branch_taken_0x1f28fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f28fc) {
            ctx->pc = 0x1F2914u;
            goto label_1f2914;
        }
    }
    ctx->pc = 0x1F2904u;
    // 0x1f2904: 0x8fc40000
    ctx->pc = 0x1f2904u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2908: 0x24050001
    ctx->pc = 0x1f2908u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f290c: 0xc07c46b
    ctx->pc = 0x1F290Cu;
    SET_GPR_U32(ctx, 31, 0x1F2914u);
    ctx->pc = 0x1F11ACu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F11AC_0x1f11ac(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2914u; }
    }
    if (ctx->pc != 0x1F2914u) { return; }
    ctx->pc = 0x1F2914u;
label_1f2914:
    // 0x1f2914: 0x8fc4000c
    ctx->pc = 0x1f2914u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1f2918: 0xc07c6cd
    ctx->pc = 0x1F2918u;
    SET_GPR_U32(ctx, 31, 0x1F2920u);
    ctx->pc = 0x1F1B34u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1B34_0x1f1b34(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2920u; }
    }
    if (ctx->pc != 0x1F2920u) { return; }
    ctx->pc = 0x1F2920u;
    // 0x1f2920: 0x8fc30000
    ctx->pc = 0x1f2920u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2924: 0x94630064
    ctx->pc = 0x1f2924u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x1f2928: 0x14430030
    ctx->pc = 0x1F2928u;
    {
        const bool branch_taken_0x1f2928 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1f2928) {
            ctx->pc = 0x1F29ECu;
            goto label_1f29ec;
        }
    }
    ctx->pc = 0x1F2930u;
    // 0x1f2930: 0x8fc4000c
    ctx->pc = 0x1f2930u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1f2934: 0x24050001
    ctx->pc = 0x1f2934u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2938: 0xc07c6a9
    ctx->pc = 0x1F2938u;
    SET_GPR_U32(ctx, 31, 0x1F2940u);
    ctx->pc = 0x1F1AA4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1AA4_0x1f1aa4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2940u; }
    }
    if (ctx->pc != 0x1F2940u) { return; }
    ctx->pc = 0x1F2940u;
    // 0x1f2940: 0x8fc30000
    ctx->pc = 0x1f2940u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2944: 0x8fc20000
    ctx->pc = 0x1f2944u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2948: 0x8c420048
    ctx->pc = 0x1f2948u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1f294c: 0x24420001
    ctx->pc = 0x1f294cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f2950: 0xac620048
    ctx->pc = 0x1f2950u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
    // 0x1f2954: 0x8fc20000
    ctx->pc = 0x1f2954u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2958: 0x24420014
    ctx->pc = 0x1f2958u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20));
    // 0x1f295c: 0x40202d
    ctx->pc = 0x1f295cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2960: 0x8fc5000c
    ctx->pc = 0x1f2960u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1f2964: 0xc07c47a
    ctx->pc = 0x1F2964u;
    SET_GPR_U32(ctx, 31, 0x1F296Cu);
    ctx->pc = 0x1F11E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F11E8_0x1f11e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F296Cu; }
    }
    if (ctx->pc != 0x1F296Cu) { return; }
    ctx->pc = 0x1F296Cu;
    // 0x1f296c: 0xafc20008
    ctx->pc = 0x1f296cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x1f2970: 0x8fc20008
    ctx->pc = 0x1f2970u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1f2974: 0x10400004
    ctx->pc = 0x1F2974u;
    {
        const bool branch_taken_0x1f2974 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2974) {
            ctx->pc = 0x1F2988u;
            goto label_1f2988;
        }
    }
    ctx->pc = 0x1F297Cu;
    // 0x1f297c: 0x8fc20008
    ctx->pc = 0x1f297cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1f2980: 0x10000051
    ctx->pc = 0x1F2980u;
    {
        const bool branch_taken_0x1f2980 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2980) {
            ctx->pc = 0x1F2AC8u;
            goto label_1f2ac8;
        }
    }
    ctx->pc = 0x1F2988u;
label_1f2988:
    // 0x1f2988: 0x8fc20000
    ctx->pc = 0x1f2988u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f298c: 0x24420014
    ctx->pc = 0x1f298cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20));
    // 0x1f2990: 0x40202d
    ctx->pc = 0x1f2990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2994: 0x24050001
    ctx->pc = 0x1f2994u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2998: 0xc07c44b
    ctx->pc = 0x1F2998u;
    SET_GPR_U32(ctx, 31, 0x1F29A0u);
    ctx->pc = 0x1F112Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F112C_0x1f112c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F29A0u; }
    }
    if (ctx->pc != 0x1F29A0u) { return; }
    ctx->pc = 0x1F29A0u;
    // 0x1f29a0: 0x10400012
    ctx->pc = 0x1F29A0u;
    {
        const bool branch_taken_0x1f29a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f29a0) {
            ctx->pc = 0x1F29ECu;
            goto label_1f29ec;
        }
    }
    ctx->pc = 0x1F29A8u;
    // 0x1f29a8: 0x8fc20000
    ctx->pc = 0x1f29a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f29ac: 0x24420014
    ctx->pc = 0x1f29acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20));
    // 0x1f29b0: 0x40202d
    ctx->pc = 0x1f29b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f29b4: 0xc07c441
    ctx->pc = 0x1F29B4u;
    SET_GPR_U32(ctx, 31, 0x1F29BCu);
    ctx->pc = 0x1F1104u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1104_0x1f1104(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F29BCu; }
    }
    if (ctx->pc != 0x1F29BCu) { return; }
    ctx->pc = 0x1F29BCu;
    // 0x1f29bc: 0x40182d
    ctx->pc = 0x1f29bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f29c0: 0x8fc20000
    ctx->pc = 0x1f29c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f29c4: 0x94420072
    ctx->pc = 0x1f29c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 114)));
    // 0x1f29c8: 0x43102b
    ctx->pc = 0x1f29c8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f29cc: 0x10400007
    ctx->pc = 0x1F29CCu;
    {
        const bool branch_taken_0x1f29cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f29cc) {
            ctx->pc = 0x1F29ECu;
            goto label_1f29ec;
        }
    }
    ctx->pc = 0x1F29D4u;
    // 0x1f29d4: 0x8fc20000
    ctx->pc = 0x1f29d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f29d8: 0x24420014
    ctx->pc = 0x1f29d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20));
    // 0x1f29dc: 0x40202d
    ctx->pc = 0x1f29dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f29e0: 0x24050001
    ctx->pc = 0x1f29e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f29e4: 0xc07c46b
    ctx->pc = 0x1F29E4u;
    SET_GPR_U32(ctx, 31, 0x1F29ECu);
    ctx->pc = 0x1F11ACu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F11AC_0x1f11ac(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F29ECu; }
    }
    if (ctx->pc != 0x1F29ECu) { return; }
    ctx->pc = 0x1F29ECu;
label_1f29ec:
    // 0x1f29ec: 0x8fc4000c
    ctx->pc = 0x1f29ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1f29f0: 0xc07c6cd
    ctx->pc = 0x1F29F0u;
    SET_GPR_U32(ctx, 31, 0x1F29F8u);
    ctx->pc = 0x1F1B34u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1B34_0x1f1b34(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F29F8u; }
    }
    if (ctx->pc != 0x1F29F8u) { return; }
    ctx->pc = 0x1F29F8u;
    // 0x1f29f8: 0x8fc30000
    ctx->pc = 0x1f29f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f29fc: 0x9463006a
    ctx->pc = 0x1f29fcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 106)));
    // 0x1f2a00: 0x14430030
    ctx->pc = 0x1F2A00u;
    {
        const bool branch_taken_0x1f2a00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1f2a00) {
            ctx->pc = 0x1F2AC4u;
            goto label_1f2ac4;
        }
    }
    ctx->pc = 0x1F2A08u;
    // 0x1f2a08: 0x8fc4000c
    ctx->pc = 0x1f2a08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1f2a0c: 0x24050002
    ctx->pc = 0x1f2a0cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f2a10: 0xc07c6a9
    ctx->pc = 0x1F2A10u;
    SET_GPR_U32(ctx, 31, 0x1F2A18u);
    ctx->pc = 0x1F1AA4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1AA4_0x1f1aa4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2A18u; }
    }
    if (ctx->pc != 0x1F2A18u) { return; }
    ctx->pc = 0x1F2A18u;
    // 0x1f2a18: 0x8fc30000
    ctx->pc = 0x1f2a18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2a1c: 0x8fc20000
    ctx->pc = 0x1f2a1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2a20: 0x8c420050
    ctx->pc = 0x1f2a20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1f2a24: 0x24420001
    ctx->pc = 0x1f2a24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f2a28: 0xac620050
    ctx->pc = 0x1f2a28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
    // 0x1f2a2c: 0x8fc20000
    ctx->pc = 0x1f2a2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2a30: 0x24420028
    ctx->pc = 0x1f2a30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 40));
    // 0x1f2a34: 0x40202d
    ctx->pc = 0x1f2a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a38: 0x8fc5000c
    ctx->pc = 0x1f2a38u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1f2a3c: 0xc07c47a
    ctx->pc = 0x1F2A3Cu;
    SET_GPR_U32(ctx, 31, 0x1F2A44u);
    ctx->pc = 0x1F11E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F11E8_0x1f11e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2A44u; }
    }
    if (ctx->pc != 0x1F2A44u) { return; }
    ctx->pc = 0x1F2A44u;
    // 0x1f2a44: 0xafc20008
    ctx->pc = 0x1f2a44u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x1f2a48: 0x8fc20008
    ctx->pc = 0x1f2a48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1f2a4c: 0x10400004
    ctx->pc = 0x1F2A4Cu;
    {
        const bool branch_taken_0x1f2a4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2a4c) {
            ctx->pc = 0x1F2A60u;
            goto label_1f2a60;
        }
    }
    ctx->pc = 0x1F2A54u;
    // 0x1f2a54: 0x8fc20008
    ctx->pc = 0x1f2a54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1f2a58: 0x1000001b
    ctx->pc = 0x1F2A58u;
    {
        const bool branch_taken_0x1f2a58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2a58) {
            ctx->pc = 0x1F2AC8u;
            goto label_1f2ac8;
        }
    }
    ctx->pc = 0x1F2A60u;
label_1f2a60:
    // 0x1f2a60: 0x8fc20000
    ctx->pc = 0x1f2a60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2a64: 0x24420028
    ctx->pc = 0x1f2a64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 40));
    // 0x1f2a68: 0x40202d
    ctx->pc = 0x1f2a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a6c: 0x24050001
    ctx->pc = 0x1f2a6cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2a70: 0xc07c44b
    ctx->pc = 0x1F2A70u;
    SET_GPR_U32(ctx, 31, 0x1F2A78u);
    ctx->pc = 0x1F112Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F112C_0x1f112c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2A78u; }
    }
    if (ctx->pc != 0x1F2A78u) { return; }
    ctx->pc = 0x1F2A78u;
    // 0x1f2a78: 0x10400012
    ctx->pc = 0x1F2A78u;
    {
        const bool branch_taken_0x1f2a78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2a78) {
            ctx->pc = 0x1F2AC4u;
            goto label_1f2ac4;
        }
    }
    ctx->pc = 0x1F2A80u;
    // 0x1f2a80: 0x8fc20000
    ctx->pc = 0x1f2a80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2a84: 0x24420028
    ctx->pc = 0x1f2a84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 40));
    // 0x1f2a88: 0x40202d
    ctx->pc = 0x1f2a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a8c: 0xc07c441
    ctx->pc = 0x1F2A8Cu;
    SET_GPR_U32(ctx, 31, 0x1F2A94u);
    ctx->pc = 0x1F1104u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1104_0x1f1104(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2A94u; }
    }
    if (ctx->pc != 0x1F2A94u) { return; }
    ctx->pc = 0x1F2A94u;
    // 0x1f2a94: 0x40182d
    ctx->pc = 0x1f2a94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a98: 0x8fc20000
    ctx->pc = 0x1f2a98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2a9c: 0x94420074
    ctx->pc = 0x1f2a9cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x1f2aa0: 0x43102b
    ctx->pc = 0x1f2aa0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f2aa4: 0x10400007
    ctx->pc = 0x1F2AA4u;
    {
        const bool branch_taken_0x1f2aa4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2aa4) {
            ctx->pc = 0x1F2AC4u;
            goto label_1f2ac4;
        }
    }
    ctx->pc = 0x1F2AACu;
    // 0x1f2aac: 0x8fc20000
    ctx->pc = 0x1f2aacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2ab0: 0x24420028
    ctx->pc = 0x1f2ab0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 40));
    // 0x1f2ab4: 0x40202d
    ctx->pc = 0x1f2ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ab8: 0x24050001
    ctx->pc = 0x1f2ab8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2abc: 0xc07c46b
    ctx->pc = 0x1F2ABCu;
    SET_GPR_U32(ctx, 31, 0x1F2AC4u);
    ctx->pc = 0x1F11ACu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F11AC_0x1f11ac(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2AC4u; }
    }
    if (ctx->pc != 0x1F2AC4u) { return; }
    ctx->pc = 0x1F2AC4u;
label_1f2ac4:
    // 0x1f2ac4: 0x8fc20008
    ctx->pc = 0x1f2ac4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_1f2ac8:
    // 0x1f2ac8: 0x3c0e82d
    ctx->pc = 0x1f2ac8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2acc: 0xdfbe0020
    ctx->pc = 0x1f2accu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f2ad0: 0xdfbf0028
    ctx->pc = 0x1f2ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2ad4: 0x27bd0030
    ctx->pc = 0x1f2ad4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f2ad8: 0x3e00008
    ctx->pc = 0x1F2AD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F285Cu: goto label_1f285c;
            case 0x1F28C8u: goto label_1f28c8;
            case 0x1F2914u: goto label_1f2914;
            case 0x1F2988u: goto label_1f2988;
            case 0x1F29ECu: goto label_1f29ec;
            case 0x1F2A60u: goto label_1f2a60;
            case 0x1F2AC4u: goto label_1f2ac4;
            case 0x1F2AC8u: goto label_1f2ac8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F2AE0u;
    // 0x1f2ae0: 0x27bdffe0
    ctx->pc = 0x1f2ae0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f2ae4: 0xffbe0010
    ctx->pc = 0x1f2ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x1f2ae8: 0x3a0f02d
    ctx->pc = 0x1f2ae8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2aec: 0xafc40000
    ctx->pc = 0x1f2aecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1f2af0: 0x102d
    ctx->pc = 0x1f2af0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2af4: 0x3c0e82d
    ctx->pc = 0x1f2af4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2af8: 0xdfbe0010
    ctx->pc = 0x1f2af8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f2afc: 0x27bd0020
    ctx->pc = 0x1f2afcu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f2b00: 0x3e00008
    ctx->pc = 0x1F2B00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F285Cu: goto label_1f285c;
            case 0x1F28C8u: goto label_1f28c8;
            case 0x1F2914u: goto label_1f2914;
            case 0x1F2988u: goto label_1f2988;
            case 0x1F29ECu: goto label_1f29ec;
            case 0x1F2A60u: goto label_1f2a60;
            case 0x1F2AC4u: goto label_1f2ac4;
            case 0x1F2AC8u: goto label_1f2ac8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F2B08u;
}
