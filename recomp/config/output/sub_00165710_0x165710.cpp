#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00165710
// Address: 0x165710 - 0x1658d0
void sub_00165710_0x165710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x165710u;

    // 0x165710: 0x27bdffe0
    ctx->pc = 0x165710u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x165714: 0x2405001b
    ctx->pc = 0x165714u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 27));
    // 0x165718: 0xffb00000
    ctx->pc = 0x165718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16571c: 0xffb10008
    ctx->pc = 0x16571cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x165720: 0xffbf0010
    ctx->pc = 0x165720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x165724: 0x8c911b74
    ctx->pc = 0x165724u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 4), 7028)));
    // 0x165728: 0xc05d58a
    ctx->pc = 0x165728u;
    SET_GPR_U32(ctx, 31, 0x165730u);
    ctx->pc = 0x16572Cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165730u; }
    }
    if (ctx->pc != 0x165730u) { return; }
    ctx->pc = 0x165730u;
    // 0x165730: 0x40182d
    ctx->pc = 0x165730u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165734: 0x8e220044
    ctx->pc = 0x165734u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x165738: 0x60282d
    ctx->pc = 0x165738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16573c: 0x10430008
    ctx->pc = 0x16573Cu;
    {
        const bool branch_taken_0x16573c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x165740u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16573c) {
            ctx->pc = 0x165760u;
            goto label_165760;
        }
    }
    ctx->pc = 0x165744u;
    // 0x165744: 0xae230044
    ctx->pc = 0x165744u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
    // 0x165748: 0xdfb00000
    ctx->pc = 0x165748u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16574c: 0xdfb10008
    ctx->pc = 0x16574cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x165750: 0xdfbf0010
    ctx->pc = 0x165750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165754: 0x804ca2e
    ctx->pc = 0x165754u;
    ctx->pc = 0x165758u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1328B8u;
    sub_001328B8_0x1328b8(rdram, ctx, runtime); return;
    ctx->pc = 0x16575Cu;
    // 0x16575c: 0x0
    ctx->pc = 0x16575cu;
    // NOP
label_165760:
    // 0x165760: 0xdfb00000
    ctx->pc = 0x165760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165764: 0xdfb10008
    ctx->pc = 0x165764u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x165768: 0xdfbf0010
    ctx->pc = 0x165768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16576c: 0x3e00008
    ctx->pc = 0x16576Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165770u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x165760u: goto label_165760;
            case 0x1657F8u: goto label_1657f8;
            case 0x165868u: goto label_165868;
            case 0x1658B0u: goto label_1658b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x165774u;
    // 0x165774: 0x0
    ctx->pc = 0x165774u;
    // NOP
    // 0x165778: 0x27bdffd0
    ctx->pc = 0x165778u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16577c: 0x24050006
    ctx->pc = 0x16577cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x165780: 0xffb00000
    ctx->pc = 0x165780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x165784: 0x80802d
    ctx->pc = 0x165784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165788: 0xffb10008
    ctx->pc = 0x165788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16578c: 0x261129b8
    ctx->pc = 0x16578cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 10680));
    // 0x165790: 0xffb30018
    ctx->pc = 0x165790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x165794: 0xffb20010
    ctx->pc = 0x165794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x165798: 0xffbf0020
    ctx->pc = 0x165798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16579c: 0xc05d58a
    ctx->pc = 0x16579Cu;
    SET_GPR_U32(ctx, 31, 0x1657A4u);
    ctx->pc = 0x1657A0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 16), 10672));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1657A4u; }
    }
    if (ctx->pc != 0x1657A4u) { return; }
    ctx->pc = 0x1657A4u;
    // 0x1657a4: 0x200202d
    ctx->pc = 0x1657a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1657a8: 0x10400041
    ctx->pc = 0x1657A8u;
    {
        const bool branch_taken_0x1657a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1657ACu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1657a8) {
            ctx->pc = 0x1658B0u;
            goto label_1658b0;
        }
    }
    ctx->pc = 0x1657B0u;
    // 0x1657b0: 0xc059634
    ctx->pc = 0x1657B0u;
    SET_GPR_U32(ctx, 31, 0x1657B8u);
    ctx->pc = 0x1657B4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7028), GPR_U32(ctx, 19));
    ctx->pc = 0x1658D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001658D0_0x1658d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1657B8u; }
    }
    if (ctx->pc != 0x1657B8u) { return; }
    ctx->pc = 0x1657B8u;
    // 0x1657b8: 0x1440003d
    ctx->pc = 0x1657B8u;
    {
        const bool branch_taken_0x1657b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1657BCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1657b8) {
            ctx->pc = 0x1658B0u;
            goto label_1658b0;
        }
    }
    ctx->pc = 0x1657C0u;
    // 0x1657c0: 0xc0596a2
    ctx->pc = 0x1657C0u;
    SET_GPR_U32(ctx, 31, 0x1657C8u);
    ctx->pc = 0x165A88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00165A88_0x165a88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1657C8u; }
    }
    if (ctx->pc != 0x1657C8u) { return; }
    ctx->pc = 0x1657C8u;
    // 0x1657c8: 0x3c05ff00
    ctx->pc = 0x1657c8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1657cc: 0x40902d
    ctx->pc = 0x1657ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1657d0: 0x200202d
    ctx->pc = 0x1657d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1657d4: 0x16400008
    ctx->pc = 0x1657D4u;
    {
        const bool branch_taken_0x1657d4 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x1657D8u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3076));
        if (branch_taken_0x1657d4) {
            ctx->pc = 0x1657F8u;
            goto label_1657f8;
        }
    }
    ctx->pc = 0x1657DCu;
    // 0x1657dc: 0xdfb00000
    ctx->pc = 0x1657dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1657e0: 0xdfb10008
    ctx->pc = 0x1657e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1657e4: 0xdfb20010
    ctx->pc = 0x1657e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1657e8: 0xdfb30018
    ctx->pc = 0x1657e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1657ec: 0xdfbf0020
    ctx->pc = 0x1657ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1657f0: 0x805a704
    ctx->pc = 0x1657F0u;
    ctx->pc = 0x1657F4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x1657F8u;
label_1657f8:
    // 0x1657f8: 0x8e260004
    ctx->pc = 0x1657f8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1657fc: 0x8e240008
    ctx->pc = 0x1657fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x165800: 0xc04fe2a
    ctx->pc = 0x165800u;
    SET_GPR_U32(ctx, 31, 0x165808u);
    ctx->pc = 0x165804u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x13F8A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F8A8_0x13f8a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165808u; }
    }
    if (ctx->pc != 0x165808u) { return; }
    ctx->pc = 0x165808u;
    // 0x165808: 0x200202d
    ctx->pc = 0x165808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16580c: 0x40482d
    ctx->pc = 0x16580cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165810: 0x3c020016
    ctx->pc = 0x165810u;
    SET_GPR_U32(ctx, 2, ((uint32_t)22 << 16));
    // 0x165814: 0x3c050016
    ctx->pc = 0x165814u;
    SET_GPR_U32(ctx, 5, ((uint32_t)22 << 16));
    // 0x165818: 0x3c030016
    ctx->pc = 0x165818u;
    SET_GPR_U32(ctx, 3, ((uint32_t)22 << 16));
    // 0x16581c: 0x3c060016
    ctx->pc = 0x16581cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)22 << 16));
    // 0x165820: 0x3c070016
    ctx->pc = 0x165820u;
    SET_GPR_U32(ctx, 7, ((uint32_t)22 << 16));
    // 0x165824: 0x24ab4820
    ctx->pc = 0x165824u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 5), 18464));
    // 0x165828: 0x120282d
    ctx->pc = 0x165828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16582c: 0x26082a5c
    ctx->pc = 0x16582cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 10844));
    // 0x165830: 0x244a47e0
    ctx->pc = 0x165830u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 18400));
    // 0x165834: 0x24634800
    ctx->pc = 0x165834u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 18432));
    // 0x165838: 0x24c64840
    ctx->pc = 0x165838u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 18496));
    // 0x16583c: 0x1520000a
    ctx->pc = 0x16583Cu;
    {
        const bool branch_taken_0x16583c = (GPR_U32(ctx, 9) != GPR_U32(ctx, 0));
        ctx->pc = 0x165840u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 18528));
        if (branch_taken_0x16583c) {
            ctx->pc = 0x165868u;
            goto label_165868;
        }
    }
    ctx->pc = 0x165844u;
    // 0x165844: 0x3c05ff00
    ctx->pc = 0x165844u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x165848: 0xdfb00000
    ctx->pc = 0x165848u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16584c: 0xdfb10008
    ctx->pc = 0x16584cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x165850: 0x34a50c05
    ctx->pc = 0x165850u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3077));
    // 0x165854: 0xdfb20010
    ctx->pc = 0x165854u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165858: 0xdfb30018
    ctx->pc = 0x165858u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16585c: 0xdfbf0020
    ctx->pc = 0x16585cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165860: 0x805a704
    ctx->pc = 0x165860u;
    ctx->pc = 0x165864u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x165868u;
label_165868:
    // 0x165868: 0xae690004
    ctx->pc = 0x165868u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 9));
    // 0x16586c: 0x240202d
    ctx->pc = 0x16586cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165870: 0xae720000
    ctx->pc = 0x165870u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
    // 0x165874: 0xae081c84
    ctx->pc = 0x165874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7300), GPR_U32(ctx, 8));
    // 0x165878: 0xad070014
    ctx->pc = 0x165878u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 7));
    // 0x16587c: 0x8e42000c
    ctx->pc = 0x16587cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x165880: 0xad0a0004
    ctx->pc = 0x165880u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 10));
    // 0x165884: 0xad020000
    ctx->pc = 0x165884u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x165888: 0xad030008
    ctx->pc = 0x165888u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x16588c: 0xad0b000c
    ctx->pc = 0x16588cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 11));
    // 0x165890: 0xc04c746
    ctx->pc = 0x165890u;
    SET_GPR_U32(ctx, 31, 0x165898u);
    ctx->pc = 0x165894u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 6));
    ctx->pc = 0x131D18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D18_0x131d18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165898u; }
    }
    if (ctx->pc != 0x165898u) { return; }
    ctx->pc = 0x165898u;
    // 0x165898: 0x200202d
    ctx->pc = 0x165898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16589c: 0xc0597bc
    ctx->pc = 0x16589Cu;
    SET_GPR_U32(ctx, 31, 0x1658A4u);
    ctx->pc = 0x1658A0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x165EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00165EF0_0x165ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1658A4u; }
    }
    if (ctx->pc != 0x1658A4u) { return; }
    ctx->pc = 0x1658A4u;
    // 0x1658a4: 0xc0596c2
    ctx->pc = 0x1658A4u;
    SET_GPR_U32(ctx, 31, 0x1658ACu);
    ctx->pc = 0x1658A8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x165B08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00165B08_0x165b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1658ACu; }
    }
    if (ctx->pc != 0x1658ACu) { return; }
    ctx->pc = 0x1658ACu;
    // 0x1658ac: 0x102d
    ctx->pc = 0x1658acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1658b0:
    // 0x1658b0: 0xdfb00000
    ctx->pc = 0x1658b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1658b4: 0xdfb10008
    ctx->pc = 0x1658b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1658b8: 0xdfb20010
    ctx->pc = 0x1658b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1658bc: 0xdfb30018
    ctx->pc = 0x1658bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1658c0: 0xdfbf0020
    ctx->pc = 0x1658c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1658c4: 0x3e00008
    ctx->pc = 0x1658C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1658C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x165760u: goto label_165760;
            case 0x1657F8u: goto label_1657f8;
            case 0x165868u: goto label_165868;
            case 0x1658B0u: goto label_1658b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1658CCu;
    // 0x1658cc: 0x0
    ctx->pc = 0x1658ccu;
    // NOP
}
