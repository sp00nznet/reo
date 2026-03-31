#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D3790
// Address: 0x1d3790 - 0x1d3b90
void sub_001D3790_0x1d3790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d3790u;

label_1d3790:
    // 0x1d3790: 0x27bdfee0
    ctx->pc = 0x1d3790u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967008));
label_1d3794:
    // 0x1d3794: 0x3c010032
    ctx->pc = 0x1d3794u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
label_1d3798:
    // 0x1d3798: 0xffbf0010
    ctx->pc = 0x1d3798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1d379c:
    // 0x1d379c: 0x7fb00000
    ctx->pc = 0x1d379cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d37a0:
    // 0x1d37a0: 0x802243d7
    ctx->pc = 0x1d37a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 17367)));
label_1d37a4:
    // 0x1d37a4: 0x3c100032
    ctx->pc = 0x1d37a4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
label_1d37a8:
    // 0x1d37a8: 0x14400011
label_1d37ac:
    if (ctx->pc == 0x1D37ACu) {
        ctx->pc = 0x1D37ACu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 17344));
        ctx->pc = 0x1D37B0u;
        goto label_1d37b0;
    }
    ctx->pc = 0x1D37A8u;
    {
        const bool branch_taken_0x1d37a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D37ACu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 17344));
        if (branch_taken_0x1d37a8) {
            ctx->pc = 0x1D37F0u;
            goto label_1d37f0;
        }
    }
    ctx->pc = 0x1D37B0u;
label_1d37b0:
    // 0x1d37b0: 0x9607001a
    ctx->pc = 0x1d37b0u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
label_1d37b4:
    // 0x1d37b4: 0x3c050025
    ctx->pc = 0x1d37b4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
label_1d37b8:
    // 0x1d37b8: 0x9608001c
    ctx->pc = 0x1d37b8u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
label_1d37bc:
    // 0x1d37bc: 0x3c060025
    ctx->pc = 0x1d37bcu;
    SET_GPR_U32(ctx, 6, ((uint32_t)37 << 16));
label_1d37c0:
    // 0x1d37c0: 0x9609001e
    ctx->pc = 0x1d37c0u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
label_1d37c4:
    // 0x1d37c4: 0x27a40020
    ctx->pc = 0x1d37c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
label_1d37c8:
    // 0x1d37c8: 0x24a56600
    ctx->pc = 0x1d37c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 26112));
label_1d37cc:
    // 0x1d37cc: 0xc042a0c
label_1d37d0:
    if (ctx->pc == 0x1D37D0u) {
        ctx->pc = 0x1D37D0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 26136));
        ctx->pc = 0x1D37D4u;
        goto label_1d37d4;
    }
    ctx->pc = 0x1D37CCu;
    SET_GPR_U32(ctx, 31, 0x1D37D4u);
    ctx->pc = 0x1D37D0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 26136));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D37D4u; }
    }
    if (ctx->pc != 0x1D37D4u) { return; }
    ctx->pc = 0x1D37D4u;
label_1d37d4:
    // 0x1d37d4: 0x8e050060
    ctx->pc = 0x1d37d4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1d37d8:
    // 0x1d37d8: 0x27a40020
    ctx->pc = 0x1d37d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
label_1d37dc:
    // 0x1d37dc: 0x24060001
    ctx->pc = 0x1d37dcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_1d37e0:
    // 0x1d37e0: 0xc07323c
label_1d37e4:
    if (ctx->pc == 0x1D37E4u) {
        ctx->pc = 0x1D37E4u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D37E8u;
        goto label_1d37e8;
    }
    ctx->pc = 0x1D37E0u;
    SET_GPR_U32(ctx, 31, 0x1D37E8u);
    ctx->pc = 0x1D37E4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CC8F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8F0_0x1cc8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D37E8u; }
    }
    if (ctx->pc != 0x1D37E8u) { return; }
    ctx->pc = 0x1D37E8u;
label_1d37e8:
    // 0x1d37e8: 0x1000000c
label_1d37ec:
    if (ctx->pc == 0x1D37ECu) {
        ctx->pc = 0x1D37ECu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
        ctx->pc = 0x1D37F0u;
        goto label_1d37f0;
    }
    ctx->pc = 0x1D37E8u;
    {
        const bool branch_taken_0x1d37e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D37ECu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
        if (branch_taken_0x1d37e8) {
            ctx->pc = 0x1D381Cu;
            goto label_1d381c;
        }
    }
    ctx->pc = 0x1D37F0u;
label_1d37f0:
    // 0x1d37f0: 0x9606001a
    ctx->pc = 0x1d37f0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
label_1d37f4:
    // 0x1d37f4: 0x3c050025
    ctx->pc = 0x1d37f4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
label_1d37f8:
    // 0x1d37f8: 0x9607001c
    ctx->pc = 0x1d37f8u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
label_1d37fc:
    // 0x1d37fc: 0x27a40020
    ctx->pc = 0x1d37fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
label_1d3800:
    // 0x1d3800: 0x9608001e
    ctx->pc = 0x1d3800u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
label_1d3804:
    // 0x1d3804: 0xc042a0c
label_1d3808:
    if (ctx->pc == 0x1D3808u) {
        ctx->pc = 0x1D3808u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 26160));
        ctx->pc = 0x1D380Cu;
        goto label_1d380c;
    }
    ctx->pc = 0x1D3804u;
    SET_GPR_U32(ctx, 31, 0x1D380Cu);
    ctx->pc = 0x1D3808u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 26160));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D380Cu; }
    }
    if (ctx->pc != 0x1D380Cu) { return; }
    ctx->pc = 0x1D380Cu;
label_1d380c:
    // 0x1d380c: 0x8e050060
    ctx->pc = 0x1d380cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1d3810:
    // 0x1d3810: 0xc06a8f8
label_1d3814:
    if (ctx->pc == 0x1D3814u) {
        ctx->pc = 0x1D3814u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1D3818u;
        goto label_1d3818;
    }
    ctx->pc = 0x1D3810u;
    SET_GPR_U32(ctx, 31, 0x1D3818u);
    ctx->pc = 0x1D3814u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1AA3E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AA3E0_0x1aa3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3818u; }
    }
    if (ctx->pc != 0x1D3818u) { return; }
    ctx->pc = 0x1D3818u;
label_1d3818:
    // 0x1d3818: 0xae02005c
    ctx->pc = 0x1d3818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
label_1d381c:
    // 0x1d381c: 0xdfbf0010
    ctx->pc = 0x1d381cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d3820:
    // 0x1d3820: 0x7bb00000
    ctx->pc = 0x1d3820u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3824:
    // 0x1d3824: 0x3e00008
label_1d3828:
    if (ctx->pc == 0x1D3828u) {
        ctx->pc = 0x1D3828u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x1D382Cu;
        goto label_1d382c;
    }
    ctx->pc = 0x1D3824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3828u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3790u: goto label_1d3790;
            case 0x1D3794u: goto label_1d3794;
            case 0x1D3798u: goto label_1d3798;
            case 0x1D379Cu: goto label_1d379c;
            case 0x1D37A0u: goto label_1d37a0;
            case 0x1D37A4u: goto label_1d37a4;
            case 0x1D37A8u: goto label_1d37a8;
            case 0x1D37ACu: goto label_1d37ac;
            case 0x1D37B0u: goto label_1d37b0;
            case 0x1D37B4u: goto label_1d37b4;
            case 0x1D37B8u: goto label_1d37b8;
            case 0x1D37BCu: goto label_1d37bc;
            case 0x1D37C0u: goto label_1d37c0;
            case 0x1D37C4u: goto label_1d37c4;
            case 0x1D37C8u: goto label_1d37c8;
            case 0x1D37CCu: goto label_1d37cc;
            case 0x1D37D0u: goto label_1d37d0;
            case 0x1D37D4u: goto label_1d37d4;
            case 0x1D37D8u: goto label_1d37d8;
            case 0x1D37DCu: goto label_1d37dc;
            case 0x1D37E0u: goto label_1d37e0;
            case 0x1D37E4u: goto label_1d37e4;
            case 0x1D37E8u: goto label_1d37e8;
            case 0x1D37ECu: goto label_1d37ec;
            case 0x1D37F0u: goto label_1d37f0;
            case 0x1D37F4u: goto label_1d37f4;
            case 0x1D37F8u: goto label_1d37f8;
            case 0x1D37FCu: goto label_1d37fc;
            case 0x1D3800u: goto label_1d3800;
            case 0x1D3804u: goto label_1d3804;
            case 0x1D3808u: goto label_1d3808;
            case 0x1D380Cu: goto label_1d380c;
            case 0x1D3810u: goto label_1d3810;
            case 0x1D3814u: goto label_1d3814;
            case 0x1D3818u: goto label_1d3818;
            case 0x1D381Cu: goto label_1d381c;
            case 0x1D3820u: goto label_1d3820;
            case 0x1D3824u: goto label_1d3824;
            case 0x1D3828u: goto label_1d3828;
            case 0x1D382Cu: goto label_1d382c;
            case 0x1D3830u: goto label_1d3830;
            case 0x1D3834u: goto label_1d3834;
            case 0x1D3838u: goto label_1d3838;
            case 0x1D383Cu: goto label_1d383c;
            case 0x1D3840u: goto label_1d3840;
            case 0x1D3844u: goto label_1d3844;
            case 0x1D3848u: goto label_1d3848;
            case 0x1D384Cu: goto label_1d384c;
            case 0x1D3850u: goto label_1d3850;
            case 0x1D3854u: goto label_1d3854;
            case 0x1D3858u: goto label_1d3858;
            case 0x1D385Cu: goto label_1d385c;
            case 0x1D3860u: goto label_1d3860;
            case 0x1D3864u: goto label_1d3864;
            case 0x1D3868u: goto label_1d3868;
            case 0x1D386Cu: goto label_1d386c;
            case 0x1D3870u: goto label_1d3870;
            case 0x1D3874u: goto label_1d3874;
            case 0x1D3878u: goto label_1d3878;
            case 0x1D387Cu: goto label_1d387c;
            case 0x1D3880u: goto label_1d3880;
            case 0x1D3884u: goto label_1d3884;
            case 0x1D3888u: goto label_1d3888;
            case 0x1D388Cu: goto label_1d388c;
            case 0x1D3890u: goto label_1d3890;
            case 0x1D3894u: goto label_1d3894;
            case 0x1D3898u: goto label_1d3898;
            case 0x1D389Cu: goto label_1d389c;
            case 0x1D38A0u: goto label_1d38a0;
            case 0x1D38A4u: goto label_1d38a4;
            case 0x1D38A8u: goto label_1d38a8;
            case 0x1D38ACu: goto label_1d38ac;
            case 0x1D38B0u: goto label_1d38b0;
            case 0x1D38B4u: goto label_1d38b4;
            case 0x1D38B8u: goto label_1d38b8;
            case 0x1D38BCu: goto label_1d38bc;
            case 0x1D38C0u: goto label_1d38c0;
            case 0x1D38C4u: goto label_1d38c4;
            case 0x1D38C8u: goto label_1d38c8;
            case 0x1D38CCu: goto label_1d38cc;
            case 0x1D38D0u: goto label_1d38d0;
            case 0x1D38D4u: goto label_1d38d4;
            case 0x1D38D8u: goto label_1d38d8;
            case 0x1D38DCu: goto label_1d38dc;
            case 0x1D38E0u: goto label_1d38e0;
            case 0x1D38E4u: goto label_1d38e4;
            case 0x1D38E8u: goto label_1d38e8;
            case 0x1D38ECu: goto label_1d38ec;
            case 0x1D38F0u: goto label_1d38f0;
            case 0x1D38F4u: goto label_1d38f4;
            case 0x1D38F8u: goto label_1d38f8;
            case 0x1D38FCu: goto label_1d38fc;
            case 0x1D3900u: goto label_1d3900;
            case 0x1D3904u: goto label_1d3904;
            case 0x1D3908u: goto label_1d3908;
            case 0x1D390Cu: goto label_1d390c;
            case 0x1D3910u: goto label_1d3910;
            case 0x1D3914u: goto label_1d3914;
            case 0x1D3918u: goto label_1d3918;
            case 0x1D391Cu: goto label_1d391c;
            case 0x1D3920u: goto label_1d3920;
            case 0x1D3924u: goto label_1d3924;
            case 0x1D3928u: goto label_1d3928;
            case 0x1D392Cu: goto label_1d392c;
            case 0x1D3930u: goto label_1d3930;
            case 0x1D3934u: goto label_1d3934;
            case 0x1D3938u: goto label_1d3938;
            case 0x1D393Cu: goto label_1d393c;
            case 0x1D3940u: goto label_1d3940;
            case 0x1D3944u: goto label_1d3944;
            case 0x1D3948u: goto label_1d3948;
            case 0x1D394Cu: goto label_1d394c;
            case 0x1D3950u: goto label_1d3950;
            case 0x1D3954u: goto label_1d3954;
            case 0x1D3958u: goto label_1d3958;
            case 0x1D395Cu: goto label_1d395c;
            case 0x1D3960u: goto label_1d3960;
            case 0x1D3964u: goto label_1d3964;
            case 0x1D3968u: goto label_1d3968;
            case 0x1D396Cu: goto label_1d396c;
            case 0x1D3970u: goto label_1d3970;
            case 0x1D3974u: goto label_1d3974;
            case 0x1D3978u: goto label_1d3978;
            case 0x1D397Cu: goto label_1d397c;
            case 0x1D3980u: goto label_1d3980;
            case 0x1D3984u: goto label_1d3984;
            case 0x1D3988u: goto label_1d3988;
            case 0x1D398Cu: goto label_1d398c;
            case 0x1D3990u: goto label_1d3990;
            case 0x1D3994u: goto label_1d3994;
            case 0x1D3998u: goto label_1d3998;
            case 0x1D399Cu: goto label_1d399c;
            case 0x1D39A0u: goto label_1d39a0;
            case 0x1D39A4u: goto label_1d39a4;
            case 0x1D39A8u: goto label_1d39a8;
            case 0x1D39ACu: goto label_1d39ac;
            case 0x1D39B0u: goto label_1d39b0;
            case 0x1D39B4u: goto label_1d39b4;
            case 0x1D39B8u: goto label_1d39b8;
            case 0x1D39BCu: goto label_1d39bc;
            case 0x1D39C0u: goto label_1d39c0;
            case 0x1D39C4u: goto label_1d39c4;
            case 0x1D39C8u: goto label_1d39c8;
            case 0x1D39CCu: goto label_1d39cc;
            case 0x1D39D0u: goto label_1d39d0;
            case 0x1D39D4u: goto label_1d39d4;
            case 0x1D39D8u: goto label_1d39d8;
            case 0x1D39DCu: goto label_1d39dc;
            case 0x1D39E0u: goto label_1d39e0;
            case 0x1D39E4u: goto label_1d39e4;
            case 0x1D39E8u: goto label_1d39e8;
            case 0x1D39ECu: goto label_1d39ec;
            case 0x1D39F0u: goto label_1d39f0;
            case 0x1D39F4u: goto label_1d39f4;
            case 0x1D39F8u: goto label_1d39f8;
            case 0x1D39FCu: goto label_1d39fc;
            case 0x1D3A00u: goto label_1d3a00;
            case 0x1D3A04u: goto label_1d3a04;
            case 0x1D3A08u: goto label_1d3a08;
            case 0x1D3A0Cu: goto label_1d3a0c;
            case 0x1D3A10u: goto label_1d3a10;
            case 0x1D3A14u: goto label_1d3a14;
            case 0x1D3A18u: goto label_1d3a18;
            case 0x1D3A1Cu: goto label_1d3a1c;
            case 0x1D3A20u: goto label_1d3a20;
            case 0x1D3A24u: goto label_1d3a24;
            case 0x1D3A28u: goto label_1d3a28;
            case 0x1D3A2Cu: goto label_1d3a2c;
            case 0x1D3A30u: goto label_1d3a30;
            case 0x1D3A34u: goto label_1d3a34;
            case 0x1D3A38u: goto label_1d3a38;
            case 0x1D3A3Cu: goto label_1d3a3c;
            case 0x1D3A40u: goto label_1d3a40;
            case 0x1D3A44u: goto label_1d3a44;
            case 0x1D3A48u: goto label_1d3a48;
            case 0x1D3A4Cu: goto label_1d3a4c;
            case 0x1D3A50u: goto label_1d3a50;
            case 0x1D3A54u: goto label_1d3a54;
            case 0x1D3A58u: goto label_1d3a58;
            case 0x1D3A5Cu: goto label_1d3a5c;
            case 0x1D3A60u: goto label_1d3a60;
            case 0x1D3A64u: goto label_1d3a64;
            case 0x1D3A68u: goto label_1d3a68;
            case 0x1D3A6Cu: goto label_1d3a6c;
            case 0x1D3A70u: goto label_1d3a70;
            case 0x1D3A74u: goto label_1d3a74;
            case 0x1D3A78u: goto label_1d3a78;
            case 0x1D3A7Cu: goto label_1d3a7c;
            case 0x1D3A80u: goto label_1d3a80;
            case 0x1D3A84u: goto label_1d3a84;
            case 0x1D3A88u: goto label_1d3a88;
            case 0x1D3A8Cu: goto label_1d3a8c;
            case 0x1D3A90u: goto label_1d3a90;
            case 0x1D3A94u: goto label_1d3a94;
            case 0x1D3A98u: goto label_1d3a98;
            case 0x1D3A9Cu: goto label_1d3a9c;
            case 0x1D3AA0u: goto label_1d3aa0;
            case 0x1D3AA4u: goto label_1d3aa4;
            case 0x1D3AA8u: goto label_1d3aa8;
            case 0x1D3AACu: goto label_1d3aac;
            case 0x1D3AB0u: goto label_1d3ab0;
            case 0x1D3AB4u: goto label_1d3ab4;
            case 0x1D3AB8u: goto label_1d3ab8;
            case 0x1D3ABCu: goto label_1d3abc;
            case 0x1D3AC0u: goto label_1d3ac0;
            case 0x1D3AC4u: goto label_1d3ac4;
            case 0x1D3AC8u: goto label_1d3ac8;
            case 0x1D3ACCu: goto label_1d3acc;
            case 0x1D3AD0u: goto label_1d3ad0;
            case 0x1D3AD4u: goto label_1d3ad4;
            case 0x1D3AD8u: goto label_1d3ad8;
            case 0x1D3ADCu: goto label_1d3adc;
            case 0x1D3AE0u: goto label_1d3ae0;
            case 0x1D3AE4u: goto label_1d3ae4;
            case 0x1D3AE8u: goto label_1d3ae8;
            case 0x1D3AECu: goto label_1d3aec;
            case 0x1D3AF0u: goto label_1d3af0;
            case 0x1D3AF4u: goto label_1d3af4;
            case 0x1D3AF8u: goto label_1d3af8;
            case 0x1D3AFCu: goto label_1d3afc;
            case 0x1D3B00u: goto label_1d3b00;
            case 0x1D3B04u: goto label_1d3b04;
            case 0x1D3B08u: goto label_1d3b08;
            case 0x1D3B0Cu: goto label_1d3b0c;
            case 0x1D3B10u: goto label_1d3b10;
            case 0x1D3B14u: goto label_1d3b14;
            case 0x1D3B18u: goto label_1d3b18;
            case 0x1D3B1Cu: goto label_1d3b1c;
            case 0x1D3B20u: goto label_1d3b20;
            case 0x1D3B24u: goto label_1d3b24;
            case 0x1D3B28u: goto label_1d3b28;
            case 0x1D3B2Cu: goto label_1d3b2c;
            case 0x1D3B30u: goto label_1d3b30;
            case 0x1D3B34u: goto label_1d3b34;
            case 0x1D3B38u: goto label_1d3b38;
            case 0x1D3B3Cu: goto label_1d3b3c;
            case 0x1D3B40u: goto label_1d3b40;
            case 0x1D3B44u: goto label_1d3b44;
            case 0x1D3B48u: goto label_1d3b48;
            case 0x1D3B4Cu: goto label_1d3b4c;
            case 0x1D3B50u: goto label_1d3b50;
            case 0x1D3B54u: goto label_1d3b54;
            case 0x1D3B58u: goto label_1d3b58;
            case 0x1D3B5Cu: goto label_1d3b5c;
            case 0x1D3B60u: goto label_1d3b60;
            case 0x1D3B64u: goto label_1d3b64;
            case 0x1D3B68u: goto label_1d3b68;
            case 0x1D3B6Cu: goto label_1d3b6c;
            case 0x1D3B70u: goto label_1d3b70;
            case 0x1D3B74u: goto label_1d3b74;
            case 0x1D3B78u: goto label_1d3b78;
            case 0x1D3B7Cu: goto label_1d3b7c;
            case 0x1D3B80u: goto label_1d3b80;
            case 0x1D3B84u: goto label_1d3b84;
            case 0x1D3B88u: goto label_1d3b88;
            case 0x1D3B8Cu: goto label_1d3b8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D382Cu;
label_1d382c:
    // 0x1d382c: 0x0
    ctx->pc = 0x1d382cu;
    // NOP
label_1d3830:
    // 0x1d3830: 0x27bdff90
    ctx->pc = 0x1d3830u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
label_1d3834:
    // 0x1d3834: 0x3c010032
    ctx->pc = 0x1d3834u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
label_1d3838:
    // 0x1d3838: 0xffbf0050
    ctx->pc = 0x1d3838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1d383c:
    // 0x1d383c: 0x282d
    ctx->pc = 0x1d383cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3840:
    // 0x1d3840: 0x7fb40040
    ctx->pc = 0x1d3840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1d3844:
    // 0x1d3844: 0x3c060030
    ctx->pc = 0x1d3844u;
    SET_GPR_U32(ctx, 6, ((uint32_t)48 << 16));
label_1d3848:
    // 0x1d3848: 0x7fb30030
    ctx->pc = 0x1d3848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1d384c:
    // 0x1d384c: 0x7fb20020
    ctx->pc = 0x1d384cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d3850:
    // 0x1d3850: 0x7fb10010
    ctx->pc = 0x1d3850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d3854:
    // 0x1d3854: 0x7fb00000
    ctx->pc = 0x1d3854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d3858:
    // 0x1d3858: 0x8c244420
    ctx->pc = 0x1d3858u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 17440)));
label_1d385c:
    // 0x1d385c: 0x3c100032
    ctx->pc = 0x1d385cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
label_1d3860:
    // 0x1d3860: 0xc041f1a
label_1d3864:
    if (ctx->pc == 0x1D3864u) {
        ctx->pc = 0x1D3864u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 17344));
        ctx->pc = 0x1D3868u;
        goto label_1d3868;
    }
    ctx->pc = 0x1D3860u;
    SET_GPR_U32(ctx, 31, 0x1D3868u);
    ctx->pc = 0x1D3864u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 17344));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3868u; }
    }
    if (ctx->pc != 0x1D3868u) { return; }
    ctx->pc = 0x1D3868u;
label_1d3868:
    // 0x1d3868: 0xc074de4
label_1d386c:
    if (ctx->pc == 0x1D386Cu) {
        ctx->pc = 0x1D3870u;
        goto label_1d3870;
    }
    ctx->pc = 0x1D3868u;
    SET_GPR_U32(ctx, 31, 0x1D3870u);
    ctx->pc = 0x1D3790u;
    goto label_1d3790;
    ctx->pc = 0x1D3870u;
label_1d3870:
    // 0x1d3870: 0x3c010032
    ctx->pc = 0x1d3870u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
label_1d3874:
    // 0x1d3874: 0x302d
    ctx->pc = 0x1d3874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3878:
    // 0x1d3878: 0x8c274420
    ctx->pc = 0x1d3878u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 1), 17440)));
label_1d387c:
    // 0x1d387c: 0x3c010032
    ctx->pc = 0x1d387cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
label_1d3880:
    // 0x1d3880: 0x24c60001
    ctx->pc = 0x1d3880u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_1d3884:
    // 0x1d3884: 0x8c254420
    ctx->pc = 0x1d3884u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 17440)));
label_1d3888:
    // 0x1d3888: 0x2cc30020
    ctx->pc = 0x1d3888u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 6), 32));
label_1d388c:
    // 0x1d388c: 0x8ce40000
    ctx->pc = 0x1d388cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1d3890:
    // 0x1d3890: 0xa42021
    ctx->pc = 0x1d3890u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1d3894:
    // 0x1d3894: 0xace40000
    ctx->pc = 0x1d3894u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
label_1d3898:
    // 0x1d3898: 0x1460fff8
label_1d389c:
    if (ctx->pc == 0x1D389Cu) {
        ctx->pc = 0x1D389Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 8));
        ctx->pc = 0x1D38A0u;
        goto label_1d38a0;
    }
    ctx->pc = 0x1D3898u;
    {
        const bool branch_taken_0x1d3898 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D389Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 8));
        if (branch_taken_0x1d3898) {
            ctx->pc = 0x1D387Cu;
            goto label_1d387c;
        }
    }
    ctx->pc = 0x1D38A0u;
label_1d38a0:
    // 0x1d38a0: 0x3c010032
    ctx->pc = 0x1d38a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
label_1d38a4:
    // 0x1d38a4: 0x8e140060
    ctx->pc = 0x1d38a4u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1d38a8:
    // 0x1d38a8: 0x8c254420
    ctx->pc = 0x1d38a8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 17440)));
label_1d38ac:
    // 0x1d38ac: 0x3c040018
    ctx->pc = 0x1d38acu;
    SET_GPR_U32(ctx, 4, ((uint32_t)24 << 16));
label_1d38b0:
    // 0x1d38b0: 0x3c130023
    ctx->pc = 0x1d38b0u;
    SET_GPR_U32(ctx, 19, ((uint32_t)35 << 16));
label_1d38b4:
    // 0x1d38b4: 0x2403fffc
    ctx->pc = 0x1d38b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967292));
label_1d38b8:
    // 0x1d38b8: 0x27b10064
    ctx->pc = 0x1d38b8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 100));
label_1d38bc:
    // 0x1d38bc: 0x26736800
    ctx->pc = 0x1d38bcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 26624));
label_1d38c0:
    // 0x1d38c0: 0x27b2006c
    ctx->pc = 0x1d38c0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 108));
label_1d38c4:
    // 0x1d38c4: 0xafa00060
    ctx->pc = 0x1d38c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_1d38c8:
    // 0x1d38c8: 0xa42021
    ctx->pc = 0x1d38c8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1d38cc:
    // 0x1d38cc: 0xafa40068
    ctx->pc = 0x1d38ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
label_1d38d0:
    // 0x1d38d0: 0x8fa40068
    ctx->pc = 0x1d38d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1d38d4:
    // 0x1d38d4: 0x24840003
    ctx->pc = 0x1d38d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 3));
label_1d38d8:
    // 0x1d38d8: 0x831824
    ctx->pc = 0x1d38d8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1d38dc:
    // 0x1d38dc: 0xafa30068
    ctx->pc = 0x1d38dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
label_1d38e0:
    // 0x1d38e0: 0x10000057
label_1d38e4:
    if (ctx->pc == 0x1D38E4u) {
        ctx->pc = 0x1D38E4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x1D38E8u;
        goto label_1d38e8;
    }
    ctx->pc = 0x1D38E0u;
    {
        const bool branch_taken_0x1d38e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D38E4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x1d38e0) {
            ctx->pc = 0x1D3A40u;
            goto label_1d3a40;
        }
    }
    ctx->pc = 0x1D38E8u;
label_1d38e8:
    // 0x1d38e8: 0x8e650004
    ctx->pc = 0x1d38e8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1d38ec:
    // 0x1d38ec: 0x24030063
    ctx->pc = 0x1d38ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 99));
label_1d38f0:
    // 0x1d38f0: 0x10a30028
label_1d38f4:
    if (ctx->pc == 0x1D38F4u) {
        ctx->pc = 0x1D38F8u;
        goto label_1d38f8;
    }
    ctx->pc = 0x1D38F0u;
    {
        const bool branch_taken_0x1d38f0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x1d38f0) {
            ctx->pc = 0x1D3994u;
            goto label_1d3994;
        }
    }
    ctx->pc = 0x1D38F8u;
label_1d38f8:
    // 0x1d38f8: 0x8e640008
    ctx->pc = 0x1d38f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1d38fc:
    // 0x1d38fc: 0x10830025
label_1d3900:
    if (ctx->pc == 0x1D3900u) {
        ctx->pc = 0x1D3904u;
        goto label_1d3904;
    }
    ctx->pc = 0x1D38FCu;
    {
        const bool branch_taken_0x1d38fc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1d38fc) {
            ctx->pc = 0x1D3994u;
            goto label_1d3994;
        }
    }
    ctx->pc = 0x1D3904u;
label_1d3904:
    // 0x1d3904: 0x518c0
    ctx->pc = 0x1d3904u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
label_1d3908:
    // 0x1d3908: 0x2838021
    ctx->pc = 0x1d3908u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_1d390c:
    // 0x1d390c: 0x8e030000
    ctx->pc = 0x1d390cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d3910:
    // 0x1d3910: 0x1060001e
label_1d3914:
    if (ctx->pc == 0x1D3914u) {
        ctx->pc = 0x1D3914u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
        ctx->pc = 0x1D3918u;
        goto label_1d3918;
    }
    ctx->pc = 0x1D3910u;
    {
        const bool branch_taken_0x1d3910 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D3914u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x1d3910) {
            ctx->pc = 0x1D398Cu;
            goto label_1d398c;
        }
    }
    ctx->pc = 0x1D3918u;
label_1d3918:
    // 0x1d3918: 0x8e030004
    ctx->pc = 0x1d3918u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d391c:
    // 0x1d391c: 0x1060001a
label_1d3920:
    if (ctx->pc == 0x1D3920u) {
        ctx->pc = 0x1D3924u;
        goto label_1d3924;
    }
    ctx->pc = 0x1D391Cu;
    {
        const bool branch_taken_0x1d391c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d391c) {
            ctx->pc = 0x1D3988u;
            goto label_1d3988;
        }
    }
    ctx->pc = 0x1D3924u;
label_1d3924:
    // 0x1d3924: 0x24020001
    ctx->pc = 0x1d3924u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1d3928:
    // 0x1d3928: 0x1482000a
label_1d392c:
    if (ctx->pc == 0x1D392Cu) {
        ctx->pc = 0x1D3930u;
        goto label_1d3930;
    }
    ctx->pc = 0x1D3928u;
    {
        const bool branch_taken_0x1d3928 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x1d3928) {
            ctx->pc = 0x1D3954u;
            goto label_1d3954;
        }
    }
    ctx->pc = 0x1D3930u;
label_1d3930:
    // 0x1d3930: 0x8fa40068
    ctx->pc = 0x1d3930u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1d3934:
    // 0x1d3934: 0x2402fffc
    ctx->pc = 0x1d3934u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967292));
label_1d3938:
    // 0x1d3938: 0x8fa30060
    ctx->pc = 0x1d3938u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1d393c:
    // 0x1d393c: 0x831821
    ctx->pc = 0x1d393cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1d3940:
    // 0x1d3940: 0xae430000
    ctx->pc = 0x1d3940u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1d3944:
    // 0x1d3944: 0x8e430000
    ctx->pc = 0x1d3944u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d3948:
    // 0x1d3948: 0x24630003
    ctx->pc = 0x1d3948u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3));
label_1d394c:
    // 0x1d394c: 0x621024
    ctx->pc = 0x1d394cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d3950:
    // 0x1d3950: 0xae420000
    ctx->pc = 0x1d3950u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1d3954:
    // 0x1d3954: 0x8e620008
    ctx->pc = 0x1d3954u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1d3958:
    // 0x1d3958: 0x8e050000
    ctx->pc = 0x1d3958u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d395c:
    // 0x1d395c: 0x21080
    ctx->pc = 0x1d395cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_1d3960:
    // 0x1d3960: 0x5d1021
    ctx->pc = 0x1d3960u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_1d3964:
    // 0x1d3964: 0x8c440068
    ctx->pc = 0x1d3964u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 104)));
label_1d3968:
    // 0x1d3968: 0xc0636ec
label_1d396c:
    if (ctx->pc == 0x1D396Cu) {
        ctx->pc = 0x1D396Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1D3970u;
        goto label_1d3970;
    }
    ctx->pc = 0x1D3968u;
    SET_GPR_U32(ctx, 31, 0x1D3970u);
    ctx->pc = 0x1D396Cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x18DBB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DBB0_0x18dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3970u; }
    }
    if (ctx->pc != 0x1D3970u) { return; }
    ctx->pc = 0x1D3970u;
label_1d3970:
    // 0x1d3970: 0x8e630008
    ctx->pc = 0x1d3970u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1d3974:
    // 0x1d3974: 0x8e040004
    ctx->pc = 0x1d3974u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d3978:
    // 0x1d3978: 0x31880
    ctx->pc = 0x1d3978u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_1d397c:
    // 0x1d397c: 0x7d1821
    ctx->pc = 0x1d397cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_1d3980:
    // 0x1d3980: 0x10000004
label_1d3984:
    if (ctx->pc == 0x1D3984u) {
        ctx->pc = 0x1D3984u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
        ctx->pc = 0x1D3988u;
        goto label_1d3988;
    }
    ctx->pc = 0x1D3980u;
    {
        const bool branch_taken_0x1d3980 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D3984u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
        if (branch_taken_0x1d3980) {
            ctx->pc = 0x1D3994u;
            goto label_1d3994;
        }
    }
    ctx->pc = 0x1D3988u;
label_1d3988:
    // 0x1d3988: 0x41880
    ctx->pc = 0x1d3988u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
label_1d398c:
    // 0x1d398c: 0x7d1821
    ctx->pc = 0x1d398cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_1d3990:
    // 0x1d3990: 0xac600060
    ctx->pc = 0x1d3990u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
label_1d3994:
    // 0x1d3994: 0x8e660000
    ctx->pc = 0x1d3994u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d3998:
    // 0x1d3998: 0x10c00028
label_1d399c:
    if (ctx->pc == 0x1D399Cu) {
        ctx->pc = 0x1D39A0u;
        goto label_1d39a0;
    }
    ctx->pc = 0x1D3998u;
    {
        const bool branch_taken_0x1d3998 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d3998) {
            ctx->pc = 0x1D3A3Cu;
            goto label_1d3a3c;
        }
    }
    ctx->pc = 0x1D39A0u;
label_1d39a0:
    // 0x1d39a0: 0x8e64000c
    ctx->pc = 0x1d39a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1d39a4:
    // 0x1d39a4: 0x24030002
    ctx->pc = 0x1d39a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_1d39a8:
    // 0x1d39a8: 0x1083001b
label_1d39ac:
    if (ctx->pc == 0x1D39ACu) {
        ctx->pc = 0x1D39ACu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1D39B0u;
        goto label_1d39b0;
    }
    ctx->pc = 0x1D39A8u;
    {
        const bool branch_taken_0x1d39a8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1D39ACu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1d39a8) {
            ctx->pc = 0x1D3A18u;
            goto label_1d3a18;
        }
    }
    ctx->pc = 0x1D39B0u;
label_1d39b0:
    // 0x1d39b0: 0x10830012
label_1d39b4:
    if (ctx->pc == 0x1D39B4u) {
        ctx->pc = 0x1D39B8u;
        goto label_1d39b8;
    }
    ctx->pc = 0x1D39B0u;
    {
        const bool branch_taken_0x1d39b0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1d39b0) {
            ctx->pc = 0x1D39FCu;
            goto label_1d39fc;
        }
    }
    ctx->pc = 0x1D39B8u;
label_1d39b8:
    // 0x1d39b8: 0x10800009
label_1d39bc:
    if (ctx->pc == 0x1D39BCu) {
        ctx->pc = 0x1D39BCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 99));
        ctx->pc = 0x1D39C0u;
        goto label_1d39c0;
    }
    ctx->pc = 0x1D39B8u;
    {
        const bool branch_taken_0x1d39b8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D39BCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 99));
        if (branch_taken_0x1d39b8) {
            ctx->pc = 0x1D39E0u;
            goto label_1d39e0;
        }
    }
    ctx->pc = 0x1D39C0u;
label_1d39c0:
    // 0x1d39c0: 0x10830003
label_1d39c4:
    if (ctx->pc == 0x1D39C4u) {
        ctx->pc = 0x1D39C8u;
        goto label_1d39c8;
    }
    ctx->pc = 0x1D39C0u;
    {
        const bool branch_taken_0x1d39c0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1d39c0) {
            ctx->pc = 0x1D39D0u;
            goto label_1d39d0;
        }
    }
    ctx->pc = 0x1D39C8u;
label_1d39c8:
    // 0x1d39c8: 0x1000001d
label_1d39cc:
    if (ctx->pc == 0x1D39CCu) {
        ctx->pc = 0x1D39CCu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x1D39D0u;
        goto label_1d39d0;
    }
    ctx->pc = 0x1D39C8u;
    {
        const bool branch_taken_0x1d39c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D39CCu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 16));
        if (branch_taken_0x1d39c8) {
            ctx->pc = 0x1D3A40u;
            goto label_1d3a40;
        }
    }
    ctx->pc = 0x1D39D0u;
label_1d39d0:
    // 0x1d39d0: 0xc0f809
label_1d39d4:
    if (ctx->pc == 0x1D39D4u) {
        ctx->pc = 0x1D39D8u;
        goto label_1d39d8;
    }
    ctx->pc = 0x1D39D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1D39D8u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3790u: goto label_1d3790;
            case 0x1D3794u: goto label_1d3794;
            case 0x1D3798u: goto label_1d3798;
            case 0x1D379Cu: goto label_1d379c;
            case 0x1D37A0u: goto label_1d37a0;
            case 0x1D37A4u: goto label_1d37a4;
            case 0x1D37A8u: goto label_1d37a8;
            case 0x1D37ACu: goto label_1d37ac;
            case 0x1D37B0u: goto label_1d37b0;
            case 0x1D37B4u: goto label_1d37b4;
            case 0x1D37B8u: goto label_1d37b8;
            case 0x1D37BCu: goto label_1d37bc;
            case 0x1D37C0u: goto label_1d37c0;
            case 0x1D37C4u: goto label_1d37c4;
            case 0x1D37C8u: goto label_1d37c8;
            case 0x1D37CCu: goto label_1d37cc;
            case 0x1D37D0u: goto label_1d37d0;
            case 0x1D37D4u: goto label_1d37d4;
            case 0x1D37D8u: goto label_1d37d8;
            case 0x1D37DCu: goto label_1d37dc;
            case 0x1D37E0u: goto label_1d37e0;
            case 0x1D37E4u: goto label_1d37e4;
            case 0x1D37E8u: goto label_1d37e8;
            case 0x1D37ECu: goto label_1d37ec;
            case 0x1D37F0u: goto label_1d37f0;
            case 0x1D37F4u: goto label_1d37f4;
            case 0x1D37F8u: goto label_1d37f8;
            case 0x1D37FCu: goto label_1d37fc;
            case 0x1D3800u: goto label_1d3800;
            case 0x1D3804u: goto label_1d3804;
            case 0x1D3808u: goto label_1d3808;
            case 0x1D380Cu: goto label_1d380c;
            case 0x1D3810u: goto label_1d3810;
            case 0x1D3814u: goto label_1d3814;
            case 0x1D3818u: goto label_1d3818;
            case 0x1D381Cu: goto label_1d381c;
            case 0x1D3820u: goto label_1d3820;
            case 0x1D3824u: goto label_1d3824;
            case 0x1D3828u: goto label_1d3828;
            case 0x1D382Cu: goto label_1d382c;
            case 0x1D3830u: goto label_1d3830;
            case 0x1D3834u: goto label_1d3834;
            case 0x1D3838u: goto label_1d3838;
            case 0x1D383Cu: goto label_1d383c;
            case 0x1D3840u: goto label_1d3840;
            case 0x1D3844u: goto label_1d3844;
            case 0x1D3848u: goto label_1d3848;
            case 0x1D384Cu: goto label_1d384c;
            case 0x1D3850u: goto label_1d3850;
            case 0x1D3854u: goto label_1d3854;
            case 0x1D3858u: goto label_1d3858;
            case 0x1D385Cu: goto label_1d385c;
            case 0x1D3860u: goto label_1d3860;
            case 0x1D3864u: goto label_1d3864;
            case 0x1D3868u: goto label_1d3868;
            case 0x1D386Cu: goto label_1d386c;
            case 0x1D3870u: goto label_1d3870;
            case 0x1D3874u: goto label_1d3874;
            case 0x1D3878u: goto label_1d3878;
            case 0x1D387Cu: goto label_1d387c;
            case 0x1D3880u: goto label_1d3880;
            case 0x1D3884u: goto label_1d3884;
            case 0x1D3888u: goto label_1d3888;
            case 0x1D388Cu: goto label_1d388c;
            case 0x1D3890u: goto label_1d3890;
            case 0x1D3894u: goto label_1d3894;
            case 0x1D3898u: goto label_1d3898;
            case 0x1D389Cu: goto label_1d389c;
            case 0x1D38A0u: goto label_1d38a0;
            case 0x1D38A4u: goto label_1d38a4;
            case 0x1D38A8u: goto label_1d38a8;
            case 0x1D38ACu: goto label_1d38ac;
            case 0x1D38B0u: goto label_1d38b0;
            case 0x1D38B4u: goto label_1d38b4;
            case 0x1D38B8u: goto label_1d38b8;
            case 0x1D38BCu: goto label_1d38bc;
            case 0x1D38C0u: goto label_1d38c0;
            case 0x1D38C4u: goto label_1d38c4;
            case 0x1D38C8u: goto label_1d38c8;
            case 0x1D38CCu: goto label_1d38cc;
            case 0x1D38D0u: goto label_1d38d0;
            case 0x1D38D4u: goto label_1d38d4;
            case 0x1D38D8u: goto label_1d38d8;
            case 0x1D38DCu: goto label_1d38dc;
            case 0x1D38E0u: goto label_1d38e0;
            case 0x1D38E4u: goto label_1d38e4;
            case 0x1D38E8u: goto label_1d38e8;
            case 0x1D38ECu: goto label_1d38ec;
            case 0x1D38F0u: goto label_1d38f0;
            case 0x1D38F4u: goto label_1d38f4;
            case 0x1D38F8u: goto label_1d38f8;
            case 0x1D38FCu: goto label_1d38fc;
            case 0x1D3900u: goto label_1d3900;
            case 0x1D3904u: goto label_1d3904;
            case 0x1D3908u: goto label_1d3908;
            case 0x1D390Cu: goto label_1d390c;
            case 0x1D3910u: goto label_1d3910;
            case 0x1D3914u: goto label_1d3914;
            case 0x1D3918u: goto label_1d3918;
            case 0x1D391Cu: goto label_1d391c;
            case 0x1D3920u: goto label_1d3920;
            case 0x1D3924u: goto label_1d3924;
            case 0x1D3928u: goto label_1d3928;
            case 0x1D392Cu: goto label_1d392c;
            case 0x1D3930u: goto label_1d3930;
            case 0x1D3934u: goto label_1d3934;
            case 0x1D3938u: goto label_1d3938;
            case 0x1D393Cu: goto label_1d393c;
            case 0x1D3940u: goto label_1d3940;
            case 0x1D3944u: goto label_1d3944;
            case 0x1D3948u: goto label_1d3948;
            case 0x1D394Cu: goto label_1d394c;
            case 0x1D3950u: goto label_1d3950;
            case 0x1D3954u: goto label_1d3954;
            case 0x1D3958u: goto label_1d3958;
            case 0x1D395Cu: goto label_1d395c;
            case 0x1D3960u: goto label_1d3960;
            case 0x1D3964u: goto label_1d3964;
            case 0x1D3968u: goto label_1d3968;
            case 0x1D396Cu: goto label_1d396c;
            case 0x1D3970u: goto label_1d3970;
            case 0x1D3974u: goto label_1d3974;
            case 0x1D3978u: goto label_1d3978;
            case 0x1D397Cu: goto label_1d397c;
            case 0x1D3980u: goto label_1d3980;
            case 0x1D3984u: goto label_1d3984;
            case 0x1D3988u: goto label_1d3988;
            case 0x1D398Cu: goto label_1d398c;
            case 0x1D3990u: goto label_1d3990;
            case 0x1D3994u: goto label_1d3994;
            case 0x1D3998u: goto label_1d3998;
            case 0x1D399Cu: goto label_1d399c;
            case 0x1D39A0u: goto label_1d39a0;
            case 0x1D39A4u: goto label_1d39a4;
            case 0x1D39A8u: goto label_1d39a8;
            case 0x1D39ACu: goto label_1d39ac;
            case 0x1D39B0u: goto label_1d39b0;
            case 0x1D39B4u: goto label_1d39b4;
            case 0x1D39B8u: goto label_1d39b8;
            case 0x1D39BCu: goto label_1d39bc;
            case 0x1D39C0u: goto label_1d39c0;
            case 0x1D39C4u: goto label_1d39c4;
            case 0x1D39C8u: goto label_1d39c8;
            case 0x1D39CCu: goto label_1d39cc;
            case 0x1D39D0u: goto label_1d39d0;
            case 0x1D39D4u: goto label_1d39d4;
            case 0x1D39D8u: goto label_1d39d8;
            case 0x1D39DCu: goto label_1d39dc;
            case 0x1D39E0u: goto label_1d39e0;
            case 0x1D39E4u: goto label_1d39e4;
            case 0x1D39E8u: goto label_1d39e8;
            case 0x1D39ECu: goto label_1d39ec;
            case 0x1D39F0u: goto label_1d39f0;
            case 0x1D39F4u: goto label_1d39f4;
            case 0x1D39F8u: goto label_1d39f8;
            case 0x1D39FCu: goto label_1d39fc;
            case 0x1D3A00u: goto label_1d3a00;
            case 0x1D3A04u: goto label_1d3a04;
            case 0x1D3A08u: goto label_1d3a08;
            case 0x1D3A0Cu: goto label_1d3a0c;
            case 0x1D3A10u: goto label_1d3a10;
            case 0x1D3A14u: goto label_1d3a14;
            case 0x1D3A18u: goto label_1d3a18;
            case 0x1D3A1Cu: goto label_1d3a1c;
            case 0x1D3A20u: goto label_1d3a20;
            case 0x1D3A24u: goto label_1d3a24;
            case 0x1D3A28u: goto label_1d3a28;
            case 0x1D3A2Cu: goto label_1d3a2c;
            case 0x1D3A30u: goto label_1d3a30;
            case 0x1D3A34u: goto label_1d3a34;
            case 0x1D3A38u: goto label_1d3a38;
            case 0x1D3A3Cu: goto label_1d3a3c;
            case 0x1D3A40u: goto label_1d3a40;
            case 0x1D3A44u: goto label_1d3a44;
            case 0x1D3A48u: goto label_1d3a48;
            case 0x1D3A4Cu: goto label_1d3a4c;
            case 0x1D3A50u: goto label_1d3a50;
            case 0x1D3A54u: goto label_1d3a54;
            case 0x1D3A58u: goto label_1d3a58;
            case 0x1D3A5Cu: goto label_1d3a5c;
            case 0x1D3A60u: goto label_1d3a60;
            case 0x1D3A64u: goto label_1d3a64;
            case 0x1D3A68u: goto label_1d3a68;
            case 0x1D3A6Cu: goto label_1d3a6c;
            case 0x1D3A70u: goto label_1d3a70;
            case 0x1D3A74u: goto label_1d3a74;
            case 0x1D3A78u: goto label_1d3a78;
            case 0x1D3A7Cu: goto label_1d3a7c;
            case 0x1D3A80u: goto label_1d3a80;
            case 0x1D3A84u: goto label_1d3a84;
            case 0x1D3A88u: goto label_1d3a88;
            case 0x1D3A8Cu: goto label_1d3a8c;
            case 0x1D3A90u: goto label_1d3a90;
            case 0x1D3A94u: goto label_1d3a94;
            case 0x1D3A98u: goto label_1d3a98;
            case 0x1D3A9Cu: goto label_1d3a9c;
            case 0x1D3AA0u: goto label_1d3aa0;
            case 0x1D3AA4u: goto label_1d3aa4;
            case 0x1D3AA8u: goto label_1d3aa8;
            case 0x1D3AACu: goto label_1d3aac;
            case 0x1D3AB0u: goto label_1d3ab0;
            case 0x1D3AB4u: goto label_1d3ab4;
            case 0x1D3AB8u: goto label_1d3ab8;
            case 0x1D3ABCu: goto label_1d3abc;
            case 0x1D3AC0u: goto label_1d3ac0;
            case 0x1D3AC4u: goto label_1d3ac4;
            case 0x1D3AC8u: goto label_1d3ac8;
            case 0x1D3ACCu: goto label_1d3acc;
            case 0x1D3AD0u: goto label_1d3ad0;
            case 0x1D3AD4u: goto label_1d3ad4;
            case 0x1D3AD8u: goto label_1d3ad8;
            case 0x1D3ADCu: goto label_1d3adc;
            case 0x1D3AE0u: goto label_1d3ae0;
            case 0x1D3AE4u: goto label_1d3ae4;
            case 0x1D3AE8u: goto label_1d3ae8;
            case 0x1D3AECu: goto label_1d3aec;
            case 0x1D3AF0u: goto label_1d3af0;
            case 0x1D3AF4u: goto label_1d3af4;
            case 0x1D3AF8u: goto label_1d3af8;
            case 0x1D3AFCu: goto label_1d3afc;
            case 0x1D3B00u: goto label_1d3b00;
            case 0x1D3B04u: goto label_1d3b04;
            case 0x1D3B08u: goto label_1d3b08;
            case 0x1D3B0Cu: goto label_1d3b0c;
            case 0x1D3B10u: goto label_1d3b10;
            case 0x1D3B14u: goto label_1d3b14;
            case 0x1D3B18u: goto label_1d3b18;
            case 0x1D3B1Cu: goto label_1d3b1c;
            case 0x1D3B20u: goto label_1d3b20;
            case 0x1D3B24u: goto label_1d3b24;
            case 0x1D3B28u: goto label_1d3b28;
            case 0x1D3B2Cu: goto label_1d3b2c;
            case 0x1D3B30u: goto label_1d3b30;
            case 0x1D3B34u: goto label_1d3b34;
            case 0x1D3B38u: goto label_1d3b38;
            case 0x1D3B3Cu: goto label_1d3b3c;
            case 0x1D3B40u: goto label_1d3b40;
            case 0x1D3B44u: goto label_1d3b44;
            case 0x1D3B48u: goto label_1d3b48;
            case 0x1D3B4Cu: goto label_1d3b4c;
            case 0x1D3B50u: goto label_1d3b50;
            case 0x1D3B54u: goto label_1d3b54;
            case 0x1D3B58u: goto label_1d3b58;
            case 0x1D3B5Cu: goto label_1d3b5c;
            case 0x1D3B60u: goto label_1d3b60;
            case 0x1D3B64u: goto label_1d3b64;
            case 0x1D3B68u: goto label_1d3b68;
            case 0x1D3B6Cu: goto label_1d3b6c;
            case 0x1D3B70u: goto label_1d3b70;
            case 0x1D3B74u: goto label_1d3b74;
            case 0x1D3B78u: goto label_1d3b78;
            case 0x1D3B7Cu: goto label_1d3b7c;
            case 0x1D3B80u: goto label_1d3b80;
            case 0x1D3B84u: goto label_1d3b84;
            case 0x1D3B88u: goto label_1d3b88;
            case 0x1D3B8Cu: goto label_1d3b8c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D39D8u; }
            if (ctx->pc != 0x1D39D8u) { return; }
        }
    }
    ctx->pc = 0x1D39D8u;
label_1d39d8:
    // 0x1d39d8: 0x10000018
label_1d39dc:
    if (ctx->pc == 0x1D39DCu) {
        ctx->pc = 0x1D39E0u;
        goto label_1d39e0;
    }
    ctx->pc = 0x1D39D8u;
    {
        const bool branch_taken_0x1d39d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d39d8) {
            ctx->pc = 0x1D3A3Cu;
            goto label_1d3a3c;
        }
    }
    ctx->pc = 0x1D39E0u;
label_1d39e0:
    // 0x1d39e0: 0x8fa50060
    ctx->pc = 0x1d39e0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1d39e4:
    // 0x1d39e4: 0x10a00015
label_1d39e8:
    if (ctx->pc == 0x1D39E8u) {
        ctx->pc = 0x1D39ECu;
        goto label_1d39ec;
    }
    ctx->pc = 0x1D39E4u;
    {
        const bool branch_taken_0x1d39e4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d39e4) {
            ctx->pc = 0x1D3A3Cu;
            goto label_1d3a3c;
        }
    }
    ctx->pc = 0x1D39ECu;
label_1d39ec:
    // 0x1d39ec: 0xc0f809
label_1d39f0:
    if (ctx->pc == 0x1D39F0u) {
        ctx->pc = 0x1D39F0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->pc = 0x1D39F4u;
        goto label_1d39f4;
    }
    ctx->pc = 0x1D39ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1D39F4u);
        ctx->pc = 0x1D39F0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3790u: goto label_1d3790;
            case 0x1D3794u: goto label_1d3794;
            case 0x1D3798u: goto label_1d3798;
            case 0x1D379Cu: goto label_1d379c;
            case 0x1D37A0u: goto label_1d37a0;
            case 0x1D37A4u: goto label_1d37a4;
            case 0x1D37A8u: goto label_1d37a8;
            case 0x1D37ACu: goto label_1d37ac;
            case 0x1D37B0u: goto label_1d37b0;
            case 0x1D37B4u: goto label_1d37b4;
            case 0x1D37B8u: goto label_1d37b8;
            case 0x1D37BCu: goto label_1d37bc;
            case 0x1D37C0u: goto label_1d37c0;
            case 0x1D37C4u: goto label_1d37c4;
            case 0x1D37C8u: goto label_1d37c8;
            case 0x1D37CCu: goto label_1d37cc;
            case 0x1D37D0u: goto label_1d37d0;
            case 0x1D37D4u: goto label_1d37d4;
            case 0x1D37D8u: goto label_1d37d8;
            case 0x1D37DCu: goto label_1d37dc;
            case 0x1D37E0u: goto label_1d37e0;
            case 0x1D37E4u: goto label_1d37e4;
            case 0x1D37E8u: goto label_1d37e8;
            case 0x1D37ECu: goto label_1d37ec;
            case 0x1D37F0u: goto label_1d37f0;
            case 0x1D37F4u: goto label_1d37f4;
            case 0x1D37F8u: goto label_1d37f8;
            case 0x1D37FCu: goto label_1d37fc;
            case 0x1D3800u: goto label_1d3800;
            case 0x1D3804u: goto label_1d3804;
            case 0x1D3808u: goto label_1d3808;
            case 0x1D380Cu: goto label_1d380c;
            case 0x1D3810u: goto label_1d3810;
            case 0x1D3814u: goto label_1d3814;
            case 0x1D3818u: goto label_1d3818;
            case 0x1D381Cu: goto label_1d381c;
            case 0x1D3820u: goto label_1d3820;
            case 0x1D3824u: goto label_1d3824;
            case 0x1D3828u: goto label_1d3828;
            case 0x1D382Cu: goto label_1d382c;
            case 0x1D3830u: goto label_1d3830;
            case 0x1D3834u: goto label_1d3834;
            case 0x1D3838u: goto label_1d3838;
            case 0x1D383Cu: goto label_1d383c;
            case 0x1D3840u: goto label_1d3840;
            case 0x1D3844u: goto label_1d3844;
            case 0x1D3848u: goto label_1d3848;
            case 0x1D384Cu: goto label_1d384c;
            case 0x1D3850u: goto label_1d3850;
            case 0x1D3854u: goto label_1d3854;
            case 0x1D3858u: goto label_1d3858;
            case 0x1D385Cu: goto label_1d385c;
            case 0x1D3860u: goto label_1d3860;
            case 0x1D3864u: goto label_1d3864;
            case 0x1D3868u: goto label_1d3868;
            case 0x1D386Cu: goto label_1d386c;
            case 0x1D3870u: goto label_1d3870;
            case 0x1D3874u: goto label_1d3874;
            case 0x1D3878u: goto label_1d3878;
            case 0x1D387Cu: goto label_1d387c;
            case 0x1D3880u: goto label_1d3880;
            case 0x1D3884u: goto label_1d3884;
            case 0x1D3888u: goto label_1d3888;
            case 0x1D388Cu: goto label_1d388c;
            case 0x1D3890u: goto label_1d3890;
            case 0x1D3894u: goto label_1d3894;
            case 0x1D3898u: goto label_1d3898;
            case 0x1D389Cu: goto label_1d389c;
            case 0x1D38A0u: goto label_1d38a0;
            case 0x1D38A4u: goto label_1d38a4;
            case 0x1D38A8u: goto label_1d38a8;
            case 0x1D38ACu: goto label_1d38ac;
            case 0x1D38B0u: goto label_1d38b0;
            case 0x1D38B4u: goto label_1d38b4;
            case 0x1D38B8u: goto label_1d38b8;
            case 0x1D38BCu: goto label_1d38bc;
            case 0x1D38C0u: goto label_1d38c0;
            case 0x1D38C4u: goto label_1d38c4;
            case 0x1D38C8u: goto label_1d38c8;
            case 0x1D38CCu: goto label_1d38cc;
            case 0x1D38D0u: goto label_1d38d0;
            case 0x1D38D4u: goto label_1d38d4;
            case 0x1D38D8u: goto label_1d38d8;
            case 0x1D38DCu: goto label_1d38dc;
            case 0x1D38E0u: goto label_1d38e0;
            case 0x1D38E4u: goto label_1d38e4;
            case 0x1D38E8u: goto label_1d38e8;
            case 0x1D38ECu: goto label_1d38ec;
            case 0x1D38F0u: goto label_1d38f0;
            case 0x1D38F4u: goto label_1d38f4;
            case 0x1D38F8u: goto label_1d38f8;
            case 0x1D38FCu: goto label_1d38fc;
            case 0x1D3900u: goto label_1d3900;
            case 0x1D3904u: goto label_1d3904;
            case 0x1D3908u: goto label_1d3908;
            case 0x1D390Cu: goto label_1d390c;
            case 0x1D3910u: goto label_1d3910;
            case 0x1D3914u: goto label_1d3914;
            case 0x1D3918u: goto label_1d3918;
            case 0x1D391Cu: goto label_1d391c;
            case 0x1D3920u: goto label_1d3920;
            case 0x1D3924u: goto label_1d3924;
            case 0x1D3928u: goto label_1d3928;
            case 0x1D392Cu: goto label_1d392c;
            case 0x1D3930u: goto label_1d3930;
            case 0x1D3934u: goto label_1d3934;
            case 0x1D3938u: goto label_1d3938;
            case 0x1D393Cu: goto label_1d393c;
            case 0x1D3940u: goto label_1d3940;
            case 0x1D3944u: goto label_1d3944;
            case 0x1D3948u: goto label_1d3948;
            case 0x1D394Cu: goto label_1d394c;
            case 0x1D3950u: goto label_1d3950;
            case 0x1D3954u: goto label_1d3954;
            case 0x1D3958u: goto label_1d3958;
            case 0x1D395Cu: goto label_1d395c;
            case 0x1D3960u: goto label_1d3960;
            case 0x1D3964u: goto label_1d3964;
            case 0x1D3968u: goto label_1d3968;
            case 0x1D396Cu: goto label_1d396c;
            case 0x1D3970u: goto label_1d3970;
            case 0x1D3974u: goto label_1d3974;
            case 0x1D3978u: goto label_1d3978;
            case 0x1D397Cu: goto label_1d397c;
            case 0x1D3980u: goto label_1d3980;
            case 0x1D3984u: goto label_1d3984;
            case 0x1D3988u: goto label_1d3988;
            case 0x1D398Cu: goto label_1d398c;
            case 0x1D3990u: goto label_1d3990;
            case 0x1D3994u: goto label_1d3994;
            case 0x1D3998u: goto label_1d3998;
            case 0x1D399Cu: goto label_1d399c;
            case 0x1D39A0u: goto label_1d39a0;
            case 0x1D39A4u: goto label_1d39a4;
            case 0x1D39A8u: goto label_1d39a8;
            case 0x1D39ACu: goto label_1d39ac;
            case 0x1D39B0u: goto label_1d39b0;
            case 0x1D39B4u: goto label_1d39b4;
            case 0x1D39B8u: goto label_1d39b8;
            case 0x1D39BCu: goto label_1d39bc;
            case 0x1D39C0u: goto label_1d39c0;
            case 0x1D39C4u: goto label_1d39c4;
            case 0x1D39C8u: goto label_1d39c8;
            case 0x1D39CCu: goto label_1d39cc;
            case 0x1D39D0u: goto label_1d39d0;
            case 0x1D39D4u: goto label_1d39d4;
            case 0x1D39D8u: goto label_1d39d8;
            case 0x1D39DCu: goto label_1d39dc;
            case 0x1D39E0u: goto label_1d39e0;
            case 0x1D39E4u: goto label_1d39e4;
            case 0x1D39E8u: goto label_1d39e8;
            case 0x1D39ECu: goto label_1d39ec;
            case 0x1D39F0u: goto label_1d39f0;
            case 0x1D39F4u: goto label_1d39f4;
            case 0x1D39F8u: goto label_1d39f8;
            case 0x1D39FCu: goto label_1d39fc;
            case 0x1D3A00u: goto label_1d3a00;
            case 0x1D3A04u: goto label_1d3a04;
            case 0x1D3A08u: goto label_1d3a08;
            case 0x1D3A0Cu: goto label_1d3a0c;
            case 0x1D3A10u: goto label_1d3a10;
            case 0x1D3A14u: goto label_1d3a14;
            case 0x1D3A18u: goto label_1d3a18;
            case 0x1D3A1Cu: goto label_1d3a1c;
            case 0x1D3A20u: goto label_1d3a20;
            case 0x1D3A24u: goto label_1d3a24;
            case 0x1D3A28u: goto label_1d3a28;
            case 0x1D3A2Cu: goto label_1d3a2c;
            case 0x1D3A30u: goto label_1d3a30;
            case 0x1D3A34u: goto label_1d3a34;
            case 0x1D3A38u: goto label_1d3a38;
            case 0x1D3A3Cu: goto label_1d3a3c;
            case 0x1D3A40u: goto label_1d3a40;
            case 0x1D3A44u: goto label_1d3a44;
            case 0x1D3A48u: goto label_1d3a48;
            case 0x1D3A4Cu: goto label_1d3a4c;
            case 0x1D3A50u: goto label_1d3a50;
            case 0x1D3A54u: goto label_1d3a54;
            case 0x1D3A58u: goto label_1d3a58;
            case 0x1D3A5Cu: goto label_1d3a5c;
            case 0x1D3A60u: goto label_1d3a60;
            case 0x1D3A64u: goto label_1d3a64;
            case 0x1D3A68u: goto label_1d3a68;
            case 0x1D3A6Cu: goto label_1d3a6c;
            case 0x1D3A70u: goto label_1d3a70;
            case 0x1D3A74u: goto label_1d3a74;
            case 0x1D3A78u: goto label_1d3a78;
            case 0x1D3A7Cu: goto label_1d3a7c;
            case 0x1D3A80u: goto label_1d3a80;
            case 0x1D3A84u: goto label_1d3a84;
            case 0x1D3A88u: goto label_1d3a88;
            case 0x1D3A8Cu: goto label_1d3a8c;
            case 0x1D3A90u: goto label_1d3a90;
            case 0x1D3A94u: goto label_1d3a94;
            case 0x1D3A98u: goto label_1d3a98;
            case 0x1D3A9Cu: goto label_1d3a9c;
            case 0x1D3AA0u: goto label_1d3aa0;
            case 0x1D3AA4u: goto label_1d3aa4;
            case 0x1D3AA8u: goto label_1d3aa8;
            case 0x1D3AACu: goto label_1d3aac;
            case 0x1D3AB0u: goto label_1d3ab0;
            case 0x1D3AB4u: goto label_1d3ab4;
            case 0x1D3AB8u: goto label_1d3ab8;
            case 0x1D3ABCu: goto label_1d3abc;
            case 0x1D3AC0u: goto label_1d3ac0;
            case 0x1D3AC4u: goto label_1d3ac4;
            case 0x1D3AC8u: goto label_1d3ac8;
            case 0x1D3ACCu: goto label_1d3acc;
            case 0x1D3AD0u: goto label_1d3ad0;
            case 0x1D3AD4u: goto label_1d3ad4;
            case 0x1D3AD8u: goto label_1d3ad8;
            case 0x1D3ADCu: goto label_1d3adc;
            case 0x1D3AE0u: goto label_1d3ae0;
            case 0x1D3AE4u: goto label_1d3ae4;
            case 0x1D3AE8u: goto label_1d3ae8;
            case 0x1D3AECu: goto label_1d3aec;
            case 0x1D3AF0u: goto label_1d3af0;
            case 0x1D3AF4u: goto label_1d3af4;
            case 0x1D3AF8u: goto label_1d3af8;
            case 0x1D3AFCu: goto label_1d3afc;
            case 0x1D3B00u: goto label_1d3b00;
            case 0x1D3B04u: goto label_1d3b04;
            case 0x1D3B08u: goto label_1d3b08;
            case 0x1D3B0Cu: goto label_1d3b0c;
            case 0x1D3B10u: goto label_1d3b10;
            case 0x1D3B14u: goto label_1d3b14;
            case 0x1D3B18u: goto label_1d3b18;
            case 0x1D3B1Cu: goto label_1d3b1c;
            case 0x1D3B20u: goto label_1d3b20;
            case 0x1D3B24u: goto label_1d3b24;
            case 0x1D3B28u: goto label_1d3b28;
            case 0x1D3B2Cu: goto label_1d3b2c;
            case 0x1D3B30u: goto label_1d3b30;
            case 0x1D3B34u: goto label_1d3b34;
            case 0x1D3B38u: goto label_1d3b38;
            case 0x1D3B3Cu: goto label_1d3b3c;
            case 0x1D3B40u: goto label_1d3b40;
            case 0x1D3B44u: goto label_1d3b44;
            case 0x1D3B48u: goto label_1d3b48;
            case 0x1D3B4Cu: goto label_1d3b4c;
            case 0x1D3B50u: goto label_1d3b50;
            case 0x1D3B54u: goto label_1d3b54;
            case 0x1D3B58u: goto label_1d3b58;
            case 0x1D3B5Cu: goto label_1d3b5c;
            case 0x1D3B60u: goto label_1d3b60;
            case 0x1D3B64u: goto label_1d3b64;
            case 0x1D3B68u: goto label_1d3b68;
            case 0x1D3B6Cu: goto label_1d3b6c;
            case 0x1D3B70u: goto label_1d3b70;
            case 0x1D3B74u: goto label_1d3b74;
            case 0x1D3B78u: goto label_1d3b78;
            case 0x1D3B7Cu: goto label_1d3b7c;
            case 0x1D3B80u: goto label_1d3b80;
            case 0x1D3B84u: goto label_1d3b84;
            case 0x1D3B88u: goto label_1d3b88;
            case 0x1D3B8Cu: goto label_1d3b8c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D39F4u; }
            if (ctx->pc != 0x1D39F4u) { return; }
        }
    }
    ctx->pc = 0x1D39F4u;
label_1d39f4:
    // 0x1d39f4: 0x10000011
label_1d39f8:
    if (ctx->pc == 0x1D39F8u) {
        ctx->pc = 0x1D39FCu;
        goto label_1d39fc;
    }
    ctx->pc = 0x1D39F4u;
    {
        const bool branch_taken_0x1d39f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d39f4) {
            ctx->pc = 0x1D3A3Cu;
            goto label_1d3a3c;
        }
    }
    ctx->pc = 0x1D39FCu;
label_1d39fc:
    // 0x1d39fc: 0x8e230000
    ctx->pc = 0x1d39fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d3a00:
    // 0x1d3a00: 0x1060000e
label_1d3a04:
    if (ctx->pc == 0x1D3A04u) {
        ctx->pc = 0x1D3A08u;
        goto label_1d3a08;
    }
    ctx->pc = 0x1D3A00u;
    {
        const bool branch_taken_0x1d3a00 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d3a00) {
            ctx->pc = 0x1D3A3Cu;
            goto label_1d3a3c;
        }
    }
    ctx->pc = 0x1D3A08u;
label_1d3a08:
    // 0x1d3a08: 0xc0f809
label_1d3a0c:
    if (ctx->pc == 0x1D3A0Cu) {
        ctx->pc = 0x1D3A0Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x1D3A10u;
        goto label_1d3a10;
    }
    ctx->pc = 0x1D3A08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1D3A10u);
        ctx->pc = 0x1D3A0Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3790u: goto label_1d3790;
            case 0x1D3794u: goto label_1d3794;
            case 0x1D3798u: goto label_1d3798;
            case 0x1D379Cu: goto label_1d379c;
            case 0x1D37A0u: goto label_1d37a0;
            case 0x1D37A4u: goto label_1d37a4;
            case 0x1D37A8u: goto label_1d37a8;
            case 0x1D37ACu: goto label_1d37ac;
            case 0x1D37B0u: goto label_1d37b0;
            case 0x1D37B4u: goto label_1d37b4;
            case 0x1D37B8u: goto label_1d37b8;
            case 0x1D37BCu: goto label_1d37bc;
            case 0x1D37C0u: goto label_1d37c0;
            case 0x1D37C4u: goto label_1d37c4;
            case 0x1D37C8u: goto label_1d37c8;
            case 0x1D37CCu: goto label_1d37cc;
            case 0x1D37D0u: goto label_1d37d0;
            case 0x1D37D4u: goto label_1d37d4;
            case 0x1D37D8u: goto label_1d37d8;
            case 0x1D37DCu: goto label_1d37dc;
            case 0x1D37E0u: goto label_1d37e0;
            case 0x1D37E4u: goto label_1d37e4;
            case 0x1D37E8u: goto label_1d37e8;
            case 0x1D37ECu: goto label_1d37ec;
            case 0x1D37F0u: goto label_1d37f0;
            case 0x1D37F4u: goto label_1d37f4;
            case 0x1D37F8u: goto label_1d37f8;
            case 0x1D37FCu: goto label_1d37fc;
            case 0x1D3800u: goto label_1d3800;
            case 0x1D3804u: goto label_1d3804;
            case 0x1D3808u: goto label_1d3808;
            case 0x1D380Cu: goto label_1d380c;
            case 0x1D3810u: goto label_1d3810;
            case 0x1D3814u: goto label_1d3814;
            case 0x1D3818u: goto label_1d3818;
            case 0x1D381Cu: goto label_1d381c;
            case 0x1D3820u: goto label_1d3820;
            case 0x1D3824u: goto label_1d3824;
            case 0x1D3828u: goto label_1d3828;
            case 0x1D382Cu: goto label_1d382c;
            case 0x1D3830u: goto label_1d3830;
            case 0x1D3834u: goto label_1d3834;
            case 0x1D3838u: goto label_1d3838;
            case 0x1D383Cu: goto label_1d383c;
            case 0x1D3840u: goto label_1d3840;
            case 0x1D3844u: goto label_1d3844;
            case 0x1D3848u: goto label_1d3848;
            case 0x1D384Cu: goto label_1d384c;
            case 0x1D3850u: goto label_1d3850;
            case 0x1D3854u: goto label_1d3854;
            case 0x1D3858u: goto label_1d3858;
            case 0x1D385Cu: goto label_1d385c;
            case 0x1D3860u: goto label_1d3860;
            case 0x1D3864u: goto label_1d3864;
            case 0x1D3868u: goto label_1d3868;
            case 0x1D386Cu: goto label_1d386c;
            case 0x1D3870u: goto label_1d3870;
            case 0x1D3874u: goto label_1d3874;
            case 0x1D3878u: goto label_1d3878;
            case 0x1D387Cu: goto label_1d387c;
            case 0x1D3880u: goto label_1d3880;
            case 0x1D3884u: goto label_1d3884;
            case 0x1D3888u: goto label_1d3888;
            case 0x1D388Cu: goto label_1d388c;
            case 0x1D3890u: goto label_1d3890;
            case 0x1D3894u: goto label_1d3894;
            case 0x1D3898u: goto label_1d3898;
            case 0x1D389Cu: goto label_1d389c;
            case 0x1D38A0u: goto label_1d38a0;
            case 0x1D38A4u: goto label_1d38a4;
            case 0x1D38A8u: goto label_1d38a8;
            case 0x1D38ACu: goto label_1d38ac;
            case 0x1D38B0u: goto label_1d38b0;
            case 0x1D38B4u: goto label_1d38b4;
            case 0x1D38B8u: goto label_1d38b8;
            case 0x1D38BCu: goto label_1d38bc;
            case 0x1D38C0u: goto label_1d38c0;
            case 0x1D38C4u: goto label_1d38c4;
            case 0x1D38C8u: goto label_1d38c8;
            case 0x1D38CCu: goto label_1d38cc;
            case 0x1D38D0u: goto label_1d38d0;
            case 0x1D38D4u: goto label_1d38d4;
            case 0x1D38D8u: goto label_1d38d8;
            case 0x1D38DCu: goto label_1d38dc;
            case 0x1D38E0u: goto label_1d38e0;
            case 0x1D38E4u: goto label_1d38e4;
            case 0x1D38E8u: goto label_1d38e8;
            case 0x1D38ECu: goto label_1d38ec;
            case 0x1D38F0u: goto label_1d38f0;
            case 0x1D38F4u: goto label_1d38f4;
            case 0x1D38F8u: goto label_1d38f8;
            case 0x1D38FCu: goto label_1d38fc;
            case 0x1D3900u: goto label_1d3900;
            case 0x1D3904u: goto label_1d3904;
            case 0x1D3908u: goto label_1d3908;
            case 0x1D390Cu: goto label_1d390c;
            case 0x1D3910u: goto label_1d3910;
            case 0x1D3914u: goto label_1d3914;
            case 0x1D3918u: goto label_1d3918;
            case 0x1D391Cu: goto label_1d391c;
            case 0x1D3920u: goto label_1d3920;
            case 0x1D3924u: goto label_1d3924;
            case 0x1D3928u: goto label_1d3928;
            case 0x1D392Cu: goto label_1d392c;
            case 0x1D3930u: goto label_1d3930;
            case 0x1D3934u: goto label_1d3934;
            case 0x1D3938u: goto label_1d3938;
            case 0x1D393Cu: goto label_1d393c;
            case 0x1D3940u: goto label_1d3940;
            case 0x1D3944u: goto label_1d3944;
            case 0x1D3948u: goto label_1d3948;
            case 0x1D394Cu: goto label_1d394c;
            case 0x1D3950u: goto label_1d3950;
            case 0x1D3954u: goto label_1d3954;
            case 0x1D3958u: goto label_1d3958;
            case 0x1D395Cu: goto label_1d395c;
            case 0x1D3960u: goto label_1d3960;
            case 0x1D3964u: goto label_1d3964;
            case 0x1D3968u: goto label_1d3968;
            case 0x1D396Cu: goto label_1d396c;
            case 0x1D3970u: goto label_1d3970;
            case 0x1D3974u: goto label_1d3974;
            case 0x1D3978u: goto label_1d3978;
            case 0x1D397Cu: goto label_1d397c;
            case 0x1D3980u: goto label_1d3980;
            case 0x1D3984u: goto label_1d3984;
            case 0x1D3988u: goto label_1d3988;
            case 0x1D398Cu: goto label_1d398c;
            case 0x1D3990u: goto label_1d3990;
            case 0x1D3994u: goto label_1d3994;
            case 0x1D3998u: goto label_1d3998;
            case 0x1D399Cu: goto label_1d399c;
            case 0x1D39A0u: goto label_1d39a0;
            case 0x1D39A4u: goto label_1d39a4;
            case 0x1D39A8u: goto label_1d39a8;
            case 0x1D39ACu: goto label_1d39ac;
            case 0x1D39B0u: goto label_1d39b0;
            case 0x1D39B4u: goto label_1d39b4;
            case 0x1D39B8u: goto label_1d39b8;
            case 0x1D39BCu: goto label_1d39bc;
            case 0x1D39C0u: goto label_1d39c0;
            case 0x1D39C4u: goto label_1d39c4;
            case 0x1D39C8u: goto label_1d39c8;
            case 0x1D39CCu: goto label_1d39cc;
            case 0x1D39D0u: goto label_1d39d0;
            case 0x1D39D4u: goto label_1d39d4;
            case 0x1D39D8u: goto label_1d39d8;
            case 0x1D39DCu: goto label_1d39dc;
            case 0x1D39E0u: goto label_1d39e0;
            case 0x1D39E4u: goto label_1d39e4;
            case 0x1D39E8u: goto label_1d39e8;
            case 0x1D39ECu: goto label_1d39ec;
            case 0x1D39F0u: goto label_1d39f0;
            case 0x1D39F4u: goto label_1d39f4;
            case 0x1D39F8u: goto label_1d39f8;
            case 0x1D39FCu: goto label_1d39fc;
            case 0x1D3A00u: goto label_1d3a00;
            case 0x1D3A04u: goto label_1d3a04;
            case 0x1D3A08u: goto label_1d3a08;
            case 0x1D3A0Cu: goto label_1d3a0c;
            case 0x1D3A10u: goto label_1d3a10;
            case 0x1D3A14u: goto label_1d3a14;
            case 0x1D3A18u: goto label_1d3a18;
            case 0x1D3A1Cu: goto label_1d3a1c;
            case 0x1D3A20u: goto label_1d3a20;
            case 0x1D3A24u: goto label_1d3a24;
            case 0x1D3A28u: goto label_1d3a28;
            case 0x1D3A2Cu: goto label_1d3a2c;
            case 0x1D3A30u: goto label_1d3a30;
            case 0x1D3A34u: goto label_1d3a34;
            case 0x1D3A38u: goto label_1d3a38;
            case 0x1D3A3Cu: goto label_1d3a3c;
            case 0x1D3A40u: goto label_1d3a40;
            case 0x1D3A44u: goto label_1d3a44;
            case 0x1D3A48u: goto label_1d3a48;
            case 0x1D3A4Cu: goto label_1d3a4c;
            case 0x1D3A50u: goto label_1d3a50;
            case 0x1D3A54u: goto label_1d3a54;
            case 0x1D3A58u: goto label_1d3a58;
            case 0x1D3A5Cu: goto label_1d3a5c;
            case 0x1D3A60u: goto label_1d3a60;
            case 0x1D3A64u: goto label_1d3a64;
            case 0x1D3A68u: goto label_1d3a68;
            case 0x1D3A6Cu: goto label_1d3a6c;
            case 0x1D3A70u: goto label_1d3a70;
            case 0x1D3A74u: goto label_1d3a74;
            case 0x1D3A78u: goto label_1d3a78;
            case 0x1D3A7Cu: goto label_1d3a7c;
            case 0x1D3A80u: goto label_1d3a80;
            case 0x1D3A84u: goto label_1d3a84;
            case 0x1D3A88u: goto label_1d3a88;
            case 0x1D3A8Cu: goto label_1d3a8c;
            case 0x1D3A90u: goto label_1d3a90;
            case 0x1D3A94u: goto label_1d3a94;
            case 0x1D3A98u: goto label_1d3a98;
            case 0x1D3A9Cu: goto label_1d3a9c;
            case 0x1D3AA0u: goto label_1d3aa0;
            case 0x1D3AA4u: goto label_1d3aa4;
            case 0x1D3AA8u: goto label_1d3aa8;
            case 0x1D3AACu: goto label_1d3aac;
            case 0x1D3AB0u: goto label_1d3ab0;
            case 0x1D3AB4u: goto label_1d3ab4;
            case 0x1D3AB8u: goto label_1d3ab8;
            case 0x1D3ABCu: goto label_1d3abc;
            case 0x1D3AC0u: goto label_1d3ac0;
            case 0x1D3AC4u: goto label_1d3ac4;
            case 0x1D3AC8u: goto label_1d3ac8;
            case 0x1D3ACCu: goto label_1d3acc;
            case 0x1D3AD0u: goto label_1d3ad0;
            case 0x1D3AD4u: goto label_1d3ad4;
            case 0x1D3AD8u: goto label_1d3ad8;
            case 0x1D3ADCu: goto label_1d3adc;
            case 0x1D3AE0u: goto label_1d3ae0;
            case 0x1D3AE4u: goto label_1d3ae4;
            case 0x1D3AE8u: goto label_1d3ae8;
            case 0x1D3AECu: goto label_1d3aec;
            case 0x1D3AF0u: goto label_1d3af0;
            case 0x1D3AF4u: goto label_1d3af4;
            case 0x1D3AF8u: goto label_1d3af8;
            case 0x1D3AFCu: goto label_1d3afc;
            case 0x1D3B00u: goto label_1d3b00;
            case 0x1D3B04u: goto label_1d3b04;
            case 0x1D3B08u: goto label_1d3b08;
            case 0x1D3B0Cu: goto label_1d3b0c;
            case 0x1D3B10u: goto label_1d3b10;
            case 0x1D3B14u: goto label_1d3b14;
            case 0x1D3B18u: goto label_1d3b18;
            case 0x1D3B1Cu: goto label_1d3b1c;
            case 0x1D3B20u: goto label_1d3b20;
            case 0x1D3B24u: goto label_1d3b24;
            case 0x1D3B28u: goto label_1d3b28;
            case 0x1D3B2Cu: goto label_1d3b2c;
            case 0x1D3B30u: goto label_1d3b30;
            case 0x1D3B34u: goto label_1d3b34;
            case 0x1D3B38u: goto label_1d3b38;
            case 0x1D3B3Cu: goto label_1d3b3c;
            case 0x1D3B40u: goto label_1d3b40;
            case 0x1D3B44u: goto label_1d3b44;
            case 0x1D3B48u: goto label_1d3b48;
            case 0x1D3B4Cu: goto label_1d3b4c;
            case 0x1D3B50u: goto label_1d3b50;
            case 0x1D3B54u: goto label_1d3b54;
            case 0x1D3B58u: goto label_1d3b58;
            case 0x1D3B5Cu: goto label_1d3b5c;
            case 0x1D3B60u: goto label_1d3b60;
            case 0x1D3B64u: goto label_1d3b64;
            case 0x1D3B68u: goto label_1d3b68;
            case 0x1D3B6Cu: goto label_1d3b6c;
            case 0x1D3B70u: goto label_1d3b70;
            case 0x1D3B74u: goto label_1d3b74;
            case 0x1D3B78u: goto label_1d3b78;
            case 0x1D3B7Cu: goto label_1d3b7c;
            case 0x1D3B80u: goto label_1d3b80;
            case 0x1D3B84u: goto label_1d3b84;
            case 0x1D3B88u: goto label_1d3b88;
            case 0x1D3B8Cu: goto label_1d3b8c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D3A10u; }
            if (ctx->pc != 0x1D3A10u) { return; }
        }
    }
    ctx->pc = 0x1D3A10u;
label_1d3a10:
    // 0x1d3a10: 0x1000000a
label_1d3a14:
    if (ctx->pc == 0x1D3A14u) {
        ctx->pc = 0x1D3A18u;
        goto label_1d3a18;
    }
    ctx->pc = 0x1D3A10u;
    {
        const bool branch_taken_0x1d3a10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d3a10) {
            ctx->pc = 0x1D3A3Cu;
            goto label_1d3a3c;
        }
    }
    ctx->pc = 0x1D3A18u;
label_1d3a18:
    // 0x1d3a18: 0x8fa30060
    ctx->pc = 0x1d3a18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1d3a1c:
    // 0x1d3a1c: 0x10600007
label_1d3a20:
    if (ctx->pc == 0x1D3A20u) {
        ctx->pc = 0x1D3A24u;
        goto label_1d3a24;
    }
    ctx->pc = 0x1D3A1Cu;
    {
        const bool branch_taken_0x1d3a1c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d3a1c) {
            ctx->pc = 0x1D3A3Cu;
            goto label_1d3a3c;
        }
    }
    ctx->pc = 0x1D3A24u;
label_1d3a24:
    // 0x1d3a24: 0x8e230000
    ctx->pc = 0x1d3a24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d3a28:
    // 0x1d3a28: 0x10600004
label_1d3a2c:
    if (ctx->pc == 0x1D3A2Cu) {
        ctx->pc = 0x1D3A30u;
        goto label_1d3a30;
    }
    ctx->pc = 0x1D3A28u;
    {
        const bool branch_taken_0x1d3a28 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d3a28) {
            ctx->pc = 0x1D3A3Cu;
            goto label_1d3a3c;
        }
    }
    ctx->pc = 0x1D3A30u;
label_1d3a30:
    // 0x1d3a30: 0x8e450000
    ctx->pc = 0x1d3a30u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d3a34:
    // 0x1d3a34: 0xc0f809
label_1d3a38:
    if (ctx->pc == 0x1D3A38u) {
        ctx->pc = 0x1D3A38u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->pc = 0x1D3A3Cu;
        goto label_1d3a3c;
    }
    ctx->pc = 0x1D3A34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1D3A3Cu);
        ctx->pc = 0x1D3A38u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3790u: goto label_1d3790;
            case 0x1D3794u: goto label_1d3794;
            case 0x1D3798u: goto label_1d3798;
            case 0x1D379Cu: goto label_1d379c;
            case 0x1D37A0u: goto label_1d37a0;
            case 0x1D37A4u: goto label_1d37a4;
            case 0x1D37A8u: goto label_1d37a8;
            case 0x1D37ACu: goto label_1d37ac;
            case 0x1D37B0u: goto label_1d37b0;
            case 0x1D37B4u: goto label_1d37b4;
            case 0x1D37B8u: goto label_1d37b8;
            case 0x1D37BCu: goto label_1d37bc;
            case 0x1D37C0u: goto label_1d37c0;
            case 0x1D37C4u: goto label_1d37c4;
            case 0x1D37C8u: goto label_1d37c8;
            case 0x1D37CCu: goto label_1d37cc;
            case 0x1D37D0u: goto label_1d37d0;
            case 0x1D37D4u: goto label_1d37d4;
            case 0x1D37D8u: goto label_1d37d8;
            case 0x1D37DCu: goto label_1d37dc;
            case 0x1D37E0u: goto label_1d37e0;
            case 0x1D37E4u: goto label_1d37e4;
            case 0x1D37E8u: goto label_1d37e8;
            case 0x1D37ECu: goto label_1d37ec;
            case 0x1D37F0u: goto label_1d37f0;
            case 0x1D37F4u: goto label_1d37f4;
            case 0x1D37F8u: goto label_1d37f8;
            case 0x1D37FCu: goto label_1d37fc;
            case 0x1D3800u: goto label_1d3800;
            case 0x1D3804u: goto label_1d3804;
            case 0x1D3808u: goto label_1d3808;
            case 0x1D380Cu: goto label_1d380c;
            case 0x1D3810u: goto label_1d3810;
            case 0x1D3814u: goto label_1d3814;
            case 0x1D3818u: goto label_1d3818;
            case 0x1D381Cu: goto label_1d381c;
            case 0x1D3820u: goto label_1d3820;
            case 0x1D3824u: goto label_1d3824;
            case 0x1D3828u: goto label_1d3828;
            case 0x1D382Cu: goto label_1d382c;
            case 0x1D3830u: goto label_1d3830;
            case 0x1D3834u: goto label_1d3834;
            case 0x1D3838u: goto label_1d3838;
            case 0x1D383Cu: goto label_1d383c;
            case 0x1D3840u: goto label_1d3840;
            case 0x1D3844u: goto label_1d3844;
            case 0x1D3848u: goto label_1d3848;
            case 0x1D384Cu: goto label_1d384c;
            case 0x1D3850u: goto label_1d3850;
            case 0x1D3854u: goto label_1d3854;
            case 0x1D3858u: goto label_1d3858;
            case 0x1D385Cu: goto label_1d385c;
            case 0x1D3860u: goto label_1d3860;
            case 0x1D3864u: goto label_1d3864;
            case 0x1D3868u: goto label_1d3868;
            case 0x1D386Cu: goto label_1d386c;
            case 0x1D3870u: goto label_1d3870;
            case 0x1D3874u: goto label_1d3874;
            case 0x1D3878u: goto label_1d3878;
            case 0x1D387Cu: goto label_1d387c;
            case 0x1D3880u: goto label_1d3880;
            case 0x1D3884u: goto label_1d3884;
            case 0x1D3888u: goto label_1d3888;
            case 0x1D388Cu: goto label_1d388c;
            case 0x1D3890u: goto label_1d3890;
            case 0x1D3894u: goto label_1d3894;
            case 0x1D3898u: goto label_1d3898;
            case 0x1D389Cu: goto label_1d389c;
            case 0x1D38A0u: goto label_1d38a0;
            case 0x1D38A4u: goto label_1d38a4;
            case 0x1D38A8u: goto label_1d38a8;
            case 0x1D38ACu: goto label_1d38ac;
            case 0x1D38B0u: goto label_1d38b0;
            case 0x1D38B4u: goto label_1d38b4;
            case 0x1D38B8u: goto label_1d38b8;
            case 0x1D38BCu: goto label_1d38bc;
            case 0x1D38C0u: goto label_1d38c0;
            case 0x1D38C4u: goto label_1d38c4;
            case 0x1D38C8u: goto label_1d38c8;
            case 0x1D38CCu: goto label_1d38cc;
            case 0x1D38D0u: goto label_1d38d0;
            case 0x1D38D4u: goto label_1d38d4;
            case 0x1D38D8u: goto label_1d38d8;
            case 0x1D38DCu: goto label_1d38dc;
            case 0x1D38E0u: goto label_1d38e0;
            case 0x1D38E4u: goto label_1d38e4;
            case 0x1D38E8u: goto label_1d38e8;
            case 0x1D38ECu: goto label_1d38ec;
            case 0x1D38F0u: goto label_1d38f0;
            case 0x1D38F4u: goto label_1d38f4;
            case 0x1D38F8u: goto label_1d38f8;
            case 0x1D38FCu: goto label_1d38fc;
            case 0x1D3900u: goto label_1d3900;
            case 0x1D3904u: goto label_1d3904;
            case 0x1D3908u: goto label_1d3908;
            case 0x1D390Cu: goto label_1d390c;
            case 0x1D3910u: goto label_1d3910;
            case 0x1D3914u: goto label_1d3914;
            case 0x1D3918u: goto label_1d3918;
            case 0x1D391Cu: goto label_1d391c;
            case 0x1D3920u: goto label_1d3920;
            case 0x1D3924u: goto label_1d3924;
            case 0x1D3928u: goto label_1d3928;
            case 0x1D392Cu: goto label_1d392c;
            case 0x1D3930u: goto label_1d3930;
            case 0x1D3934u: goto label_1d3934;
            case 0x1D3938u: goto label_1d3938;
            case 0x1D393Cu: goto label_1d393c;
            case 0x1D3940u: goto label_1d3940;
            case 0x1D3944u: goto label_1d3944;
            case 0x1D3948u: goto label_1d3948;
            case 0x1D394Cu: goto label_1d394c;
            case 0x1D3950u: goto label_1d3950;
            case 0x1D3954u: goto label_1d3954;
            case 0x1D3958u: goto label_1d3958;
            case 0x1D395Cu: goto label_1d395c;
            case 0x1D3960u: goto label_1d3960;
            case 0x1D3964u: goto label_1d3964;
            case 0x1D3968u: goto label_1d3968;
            case 0x1D396Cu: goto label_1d396c;
            case 0x1D3970u: goto label_1d3970;
            case 0x1D3974u: goto label_1d3974;
            case 0x1D3978u: goto label_1d3978;
            case 0x1D397Cu: goto label_1d397c;
            case 0x1D3980u: goto label_1d3980;
            case 0x1D3984u: goto label_1d3984;
            case 0x1D3988u: goto label_1d3988;
            case 0x1D398Cu: goto label_1d398c;
            case 0x1D3990u: goto label_1d3990;
            case 0x1D3994u: goto label_1d3994;
            case 0x1D3998u: goto label_1d3998;
            case 0x1D399Cu: goto label_1d399c;
            case 0x1D39A0u: goto label_1d39a0;
            case 0x1D39A4u: goto label_1d39a4;
            case 0x1D39A8u: goto label_1d39a8;
            case 0x1D39ACu: goto label_1d39ac;
            case 0x1D39B0u: goto label_1d39b0;
            case 0x1D39B4u: goto label_1d39b4;
            case 0x1D39B8u: goto label_1d39b8;
            case 0x1D39BCu: goto label_1d39bc;
            case 0x1D39C0u: goto label_1d39c0;
            case 0x1D39C4u: goto label_1d39c4;
            case 0x1D39C8u: goto label_1d39c8;
            case 0x1D39CCu: goto label_1d39cc;
            case 0x1D39D0u: goto label_1d39d0;
            case 0x1D39D4u: goto label_1d39d4;
            case 0x1D39D8u: goto label_1d39d8;
            case 0x1D39DCu: goto label_1d39dc;
            case 0x1D39E0u: goto label_1d39e0;
            case 0x1D39E4u: goto label_1d39e4;
            case 0x1D39E8u: goto label_1d39e8;
            case 0x1D39ECu: goto label_1d39ec;
            case 0x1D39F0u: goto label_1d39f0;
            case 0x1D39F4u: goto label_1d39f4;
            case 0x1D39F8u: goto label_1d39f8;
            case 0x1D39FCu: goto label_1d39fc;
            case 0x1D3A00u: goto label_1d3a00;
            case 0x1D3A04u: goto label_1d3a04;
            case 0x1D3A08u: goto label_1d3a08;
            case 0x1D3A0Cu: goto label_1d3a0c;
            case 0x1D3A10u: goto label_1d3a10;
            case 0x1D3A14u: goto label_1d3a14;
            case 0x1D3A18u: goto label_1d3a18;
            case 0x1D3A1Cu: goto label_1d3a1c;
            case 0x1D3A20u: goto label_1d3a20;
            case 0x1D3A24u: goto label_1d3a24;
            case 0x1D3A28u: goto label_1d3a28;
            case 0x1D3A2Cu: goto label_1d3a2c;
            case 0x1D3A30u: goto label_1d3a30;
            case 0x1D3A34u: goto label_1d3a34;
            case 0x1D3A38u: goto label_1d3a38;
            case 0x1D3A3Cu: goto label_1d3a3c;
            case 0x1D3A40u: goto label_1d3a40;
            case 0x1D3A44u: goto label_1d3a44;
            case 0x1D3A48u: goto label_1d3a48;
            case 0x1D3A4Cu: goto label_1d3a4c;
            case 0x1D3A50u: goto label_1d3a50;
            case 0x1D3A54u: goto label_1d3a54;
            case 0x1D3A58u: goto label_1d3a58;
            case 0x1D3A5Cu: goto label_1d3a5c;
            case 0x1D3A60u: goto label_1d3a60;
            case 0x1D3A64u: goto label_1d3a64;
            case 0x1D3A68u: goto label_1d3a68;
            case 0x1D3A6Cu: goto label_1d3a6c;
            case 0x1D3A70u: goto label_1d3a70;
            case 0x1D3A74u: goto label_1d3a74;
            case 0x1D3A78u: goto label_1d3a78;
            case 0x1D3A7Cu: goto label_1d3a7c;
            case 0x1D3A80u: goto label_1d3a80;
            case 0x1D3A84u: goto label_1d3a84;
            case 0x1D3A88u: goto label_1d3a88;
            case 0x1D3A8Cu: goto label_1d3a8c;
            case 0x1D3A90u: goto label_1d3a90;
            case 0x1D3A94u: goto label_1d3a94;
            case 0x1D3A98u: goto label_1d3a98;
            case 0x1D3A9Cu: goto label_1d3a9c;
            case 0x1D3AA0u: goto label_1d3aa0;
            case 0x1D3AA4u: goto label_1d3aa4;
            case 0x1D3AA8u: goto label_1d3aa8;
            case 0x1D3AACu: goto label_1d3aac;
            case 0x1D3AB0u: goto label_1d3ab0;
            case 0x1D3AB4u: goto label_1d3ab4;
            case 0x1D3AB8u: goto label_1d3ab8;
            case 0x1D3ABCu: goto label_1d3abc;
            case 0x1D3AC0u: goto label_1d3ac0;
            case 0x1D3AC4u: goto label_1d3ac4;
            case 0x1D3AC8u: goto label_1d3ac8;
            case 0x1D3ACCu: goto label_1d3acc;
            case 0x1D3AD0u: goto label_1d3ad0;
            case 0x1D3AD4u: goto label_1d3ad4;
            case 0x1D3AD8u: goto label_1d3ad8;
            case 0x1D3ADCu: goto label_1d3adc;
            case 0x1D3AE0u: goto label_1d3ae0;
            case 0x1D3AE4u: goto label_1d3ae4;
            case 0x1D3AE8u: goto label_1d3ae8;
            case 0x1D3AECu: goto label_1d3aec;
            case 0x1D3AF0u: goto label_1d3af0;
            case 0x1D3AF4u: goto label_1d3af4;
            case 0x1D3AF8u: goto label_1d3af8;
            case 0x1D3AFCu: goto label_1d3afc;
            case 0x1D3B00u: goto label_1d3b00;
            case 0x1D3B04u: goto label_1d3b04;
            case 0x1D3B08u: goto label_1d3b08;
            case 0x1D3B0Cu: goto label_1d3b0c;
            case 0x1D3B10u: goto label_1d3b10;
            case 0x1D3B14u: goto label_1d3b14;
            case 0x1D3B18u: goto label_1d3b18;
            case 0x1D3B1Cu: goto label_1d3b1c;
            case 0x1D3B20u: goto label_1d3b20;
            case 0x1D3B24u: goto label_1d3b24;
            case 0x1D3B28u: goto label_1d3b28;
            case 0x1D3B2Cu: goto label_1d3b2c;
            case 0x1D3B30u: goto label_1d3b30;
            case 0x1D3B34u: goto label_1d3b34;
            case 0x1D3B38u: goto label_1d3b38;
            case 0x1D3B3Cu: goto label_1d3b3c;
            case 0x1D3B40u: goto label_1d3b40;
            case 0x1D3B44u: goto label_1d3b44;
            case 0x1D3B48u: goto label_1d3b48;
            case 0x1D3B4Cu: goto label_1d3b4c;
            case 0x1D3B50u: goto label_1d3b50;
            case 0x1D3B54u: goto label_1d3b54;
            case 0x1D3B58u: goto label_1d3b58;
            case 0x1D3B5Cu: goto label_1d3b5c;
            case 0x1D3B60u: goto label_1d3b60;
            case 0x1D3B64u: goto label_1d3b64;
            case 0x1D3B68u: goto label_1d3b68;
            case 0x1D3B6Cu: goto label_1d3b6c;
            case 0x1D3B70u: goto label_1d3b70;
            case 0x1D3B74u: goto label_1d3b74;
            case 0x1D3B78u: goto label_1d3b78;
            case 0x1D3B7Cu: goto label_1d3b7c;
            case 0x1D3B80u: goto label_1d3b80;
            case 0x1D3B84u: goto label_1d3b84;
            case 0x1D3B88u: goto label_1d3b88;
            case 0x1D3B8Cu: goto label_1d3b8c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D3A3Cu; }
            if (ctx->pc != 0x1D3A3Cu) { return; }
        }
    }
    ctx->pc = 0x1D3A3Cu;
label_1d3a3c:
    // 0x1d3a3c: 0x26730010
    ctx->pc = 0x1d3a3cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 16));
label_1d3a40:
    // 0x1d3a40: 0x8e64000c
    ctx->pc = 0x1d3a40u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1d3a44:
    // 0x1d3a44: 0x240303e7
    ctx->pc = 0x1d3a44u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 999));
label_1d3a48:
    // 0x1d3a48: 0x1483ffa7
label_1d3a4c:
    if (ctx->pc == 0x1D3A4Cu) {
        ctx->pc = 0x1D3A50u;
        goto label_1d3a50;
    }
    ctx->pc = 0x1D3A48u;
    {
        const bool branch_taken_0x1d3a48 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x1d3a48) {
            ctx->pc = 0x1D38E8u;
            goto label_1d38e8;
        }
    }
    ctx->pc = 0x1D3A50u;
label_1d3a50:
    // 0x1d3a50: 0xdfbf0050
    ctx->pc = 0x1d3a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1d3a54:
    // 0x1d3a54: 0x7bb40040
    ctx->pc = 0x1d3a54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d3a58:
    // 0x1d3a58: 0x7bb30030
    ctx->pc = 0x1d3a58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d3a5c:
    // 0x1d3a5c: 0x7bb20020
    ctx->pc = 0x1d3a5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d3a60:
    // 0x1d3a60: 0x7bb10010
    ctx->pc = 0x1d3a60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d3a64:
    // 0x1d3a64: 0x7bb00000
    ctx->pc = 0x1d3a64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3a68:
    // 0x1d3a68: 0x3e00008
label_1d3a6c:
    if (ctx->pc == 0x1D3A6Cu) {
        ctx->pc = 0x1D3A6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1D3A70u;
        goto label_1d3a70;
    }
    ctx->pc = 0x1D3A68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3A6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3790u: goto label_1d3790;
            case 0x1D3794u: goto label_1d3794;
            case 0x1D3798u: goto label_1d3798;
            case 0x1D379Cu: goto label_1d379c;
            case 0x1D37A0u: goto label_1d37a0;
            case 0x1D37A4u: goto label_1d37a4;
            case 0x1D37A8u: goto label_1d37a8;
            case 0x1D37ACu: goto label_1d37ac;
            case 0x1D37B0u: goto label_1d37b0;
            case 0x1D37B4u: goto label_1d37b4;
            case 0x1D37B8u: goto label_1d37b8;
            case 0x1D37BCu: goto label_1d37bc;
            case 0x1D37C0u: goto label_1d37c0;
            case 0x1D37C4u: goto label_1d37c4;
            case 0x1D37C8u: goto label_1d37c8;
            case 0x1D37CCu: goto label_1d37cc;
            case 0x1D37D0u: goto label_1d37d0;
            case 0x1D37D4u: goto label_1d37d4;
            case 0x1D37D8u: goto label_1d37d8;
            case 0x1D37DCu: goto label_1d37dc;
            case 0x1D37E0u: goto label_1d37e0;
            case 0x1D37E4u: goto label_1d37e4;
            case 0x1D37E8u: goto label_1d37e8;
            case 0x1D37ECu: goto label_1d37ec;
            case 0x1D37F0u: goto label_1d37f0;
            case 0x1D37F4u: goto label_1d37f4;
            case 0x1D37F8u: goto label_1d37f8;
            case 0x1D37FCu: goto label_1d37fc;
            case 0x1D3800u: goto label_1d3800;
            case 0x1D3804u: goto label_1d3804;
            case 0x1D3808u: goto label_1d3808;
            case 0x1D380Cu: goto label_1d380c;
            case 0x1D3810u: goto label_1d3810;
            case 0x1D3814u: goto label_1d3814;
            case 0x1D3818u: goto label_1d3818;
            case 0x1D381Cu: goto label_1d381c;
            case 0x1D3820u: goto label_1d3820;
            case 0x1D3824u: goto label_1d3824;
            case 0x1D3828u: goto label_1d3828;
            case 0x1D382Cu: goto label_1d382c;
            case 0x1D3830u: goto label_1d3830;
            case 0x1D3834u: goto label_1d3834;
            case 0x1D3838u: goto label_1d3838;
            case 0x1D383Cu: goto label_1d383c;
            case 0x1D3840u: goto label_1d3840;
            case 0x1D3844u: goto label_1d3844;
            case 0x1D3848u: goto label_1d3848;
            case 0x1D384Cu: goto label_1d384c;
            case 0x1D3850u: goto label_1d3850;
            case 0x1D3854u: goto label_1d3854;
            case 0x1D3858u: goto label_1d3858;
            case 0x1D385Cu: goto label_1d385c;
            case 0x1D3860u: goto label_1d3860;
            case 0x1D3864u: goto label_1d3864;
            case 0x1D3868u: goto label_1d3868;
            case 0x1D386Cu: goto label_1d386c;
            case 0x1D3870u: goto label_1d3870;
            case 0x1D3874u: goto label_1d3874;
            case 0x1D3878u: goto label_1d3878;
            case 0x1D387Cu: goto label_1d387c;
            case 0x1D3880u: goto label_1d3880;
            case 0x1D3884u: goto label_1d3884;
            case 0x1D3888u: goto label_1d3888;
            case 0x1D388Cu: goto label_1d388c;
            case 0x1D3890u: goto label_1d3890;
            case 0x1D3894u: goto label_1d3894;
            case 0x1D3898u: goto label_1d3898;
            case 0x1D389Cu: goto label_1d389c;
            case 0x1D38A0u: goto label_1d38a0;
            case 0x1D38A4u: goto label_1d38a4;
            case 0x1D38A8u: goto label_1d38a8;
            case 0x1D38ACu: goto label_1d38ac;
            case 0x1D38B0u: goto label_1d38b0;
            case 0x1D38B4u: goto label_1d38b4;
            case 0x1D38B8u: goto label_1d38b8;
            case 0x1D38BCu: goto label_1d38bc;
            case 0x1D38C0u: goto label_1d38c0;
            case 0x1D38C4u: goto label_1d38c4;
            case 0x1D38C8u: goto label_1d38c8;
            case 0x1D38CCu: goto label_1d38cc;
            case 0x1D38D0u: goto label_1d38d0;
            case 0x1D38D4u: goto label_1d38d4;
            case 0x1D38D8u: goto label_1d38d8;
            case 0x1D38DCu: goto label_1d38dc;
            case 0x1D38E0u: goto label_1d38e0;
            case 0x1D38E4u: goto label_1d38e4;
            case 0x1D38E8u: goto label_1d38e8;
            case 0x1D38ECu: goto label_1d38ec;
            case 0x1D38F0u: goto label_1d38f0;
            case 0x1D38F4u: goto label_1d38f4;
            case 0x1D38F8u: goto label_1d38f8;
            case 0x1D38FCu: goto label_1d38fc;
            case 0x1D3900u: goto label_1d3900;
            case 0x1D3904u: goto label_1d3904;
            case 0x1D3908u: goto label_1d3908;
            case 0x1D390Cu: goto label_1d390c;
            case 0x1D3910u: goto label_1d3910;
            case 0x1D3914u: goto label_1d3914;
            case 0x1D3918u: goto label_1d3918;
            case 0x1D391Cu: goto label_1d391c;
            case 0x1D3920u: goto label_1d3920;
            case 0x1D3924u: goto label_1d3924;
            case 0x1D3928u: goto label_1d3928;
            case 0x1D392Cu: goto label_1d392c;
            case 0x1D3930u: goto label_1d3930;
            case 0x1D3934u: goto label_1d3934;
            case 0x1D3938u: goto label_1d3938;
            case 0x1D393Cu: goto label_1d393c;
            case 0x1D3940u: goto label_1d3940;
            case 0x1D3944u: goto label_1d3944;
            case 0x1D3948u: goto label_1d3948;
            case 0x1D394Cu: goto label_1d394c;
            case 0x1D3950u: goto label_1d3950;
            case 0x1D3954u: goto label_1d3954;
            case 0x1D3958u: goto label_1d3958;
            case 0x1D395Cu: goto label_1d395c;
            case 0x1D3960u: goto label_1d3960;
            case 0x1D3964u: goto label_1d3964;
            case 0x1D3968u: goto label_1d3968;
            case 0x1D396Cu: goto label_1d396c;
            case 0x1D3970u: goto label_1d3970;
            case 0x1D3974u: goto label_1d3974;
            case 0x1D3978u: goto label_1d3978;
            case 0x1D397Cu: goto label_1d397c;
            case 0x1D3980u: goto label_1d3980;
            case 0x1D3984u: goto label_1d3984;
            case 0x1D3988u: goto label_1d3988;
            case 0x1D398Cu: goto label_1d398c;
            case 0x1D3990u: goto label_1d3990;
            case 0x1D3994u: goto label_1d3994;
            case 0x1D3998u: goto label_1d3998;
            case 0x1D399Cu: goto label_1d399c;
            case 0x1D39A0u: goto label_1d39a0;
            case 0x1D39A4u: goto label_1d39a4;
            case 0x1D39A8u: goto label_1d39a8;
            case 0x1D39ACu: goto label_1d39ac;
            case 0x1D39B0u: goto label_1d39b0;
            case 0x1D39B4u: goto label_1d39b4;
            case 0x1D39B8u: goto label_1d39b8;
            case 0x1D39BCu: goto label_1d39bc;
            case 0x1D39C0u: goto label_1d39c0;
            case 0x1D39C4u: goto label_1d39c4;
            case 0x1D39C8u: goto label_1d39c8;
            case 0x1D39CCu: goto label_1d39cc;
            case 0x1D39D0u: goto label_1d39d0;
            case 0x1D39D4u: goto label_1d39d4;
            case 0x1D39D8u: goto label_1d39d8;
            case 0x1D39DCu: goto label_1d39dc;
            case 0x1D39E0u: goto label_1d39e0;
            case 0x1D39E4u: goto label_1d39e4;
            case 0x1D39E8u: goto label_1d39e8;
            case 0x1D39ECu: goto label_1d39ec;
            case 0x1D39F0u: goto label_1d39f0;
            case 0x1D39F4u: goto label_1d39f4;
            case 0x1D39F8u: goto label_1d39f8;
            case 0x1D39FCu: goto label_1d39fc;
            case 0x1D3A00u: goto label_1d3a00;
            case 0x1D3A04u: goto label_1d3a04;
            case 0x1D3A08u: goto label_1d3a08;
            case 0x1D3A0Cu: goto label_1d3a0c;
            case 0x1D3A10u: goto label_1d3a10;
            case 0x1D3A14u: goto label_1d3a14;
            case 0x1D3A18u: goto label_1d3a18;
            case 0x1D3A1Cu: goto label_1d3a1c;
            case 0x1D3A20u: goto label_1d3a20;
            case 0x1D3A24u: goto label_1d3a24;
            case 0x1D3A28u: goto label_1d3a28;
            case 0x1D3A2Cu: goto label_1d3a2c;
            case 0x1D3A30u: goto label_1d3a30;
            case 0x1D3A34u: goto label_1d3a34;
            case 0x1D3A38u: goto label_1d3a38;
            case 0x1D3A3Cu: goto label_1d3a3c;
            case 0x1D3A40u: goto label_1d3a40;
            case 0x1D3A44u: goto label_1d3a44;
            case 0x1D3A48u: goto label_1d3a48;
            case 0x1D3A4Cu: goto label_1d3a4c;
            case 0x1D3A50u: goto label_1d3a50;
            case 0x1D3A54u: goto label_1d3a54;
            case 0x1D3A58u: goto label_1d3a58;
            case 0x1D3A5Cu: goto label_1d3a5c;
            case 0x1D3A60u: goto label_1d3a60;
            case 0x1D3A64u: goto label_1d3a64;
            case 0x1D3A68u: goto label_1d3a68;
            case 0x1D3A6Cu: goto label_1d3a6c;
            case 0x1D3A70u: goto label_1d3a70;
            case 0x1D3A74u: goto label_1d3a74;
            case 0x1D3A78u: goto label_1d3a78;
            case 0x1D3A7Cu: goto label_1d3a7c;
            case 0x1D3A80u: goto label_1d3a80;
            case 0x1D3A84u: goto label_1d3a84;
            case 0x1D3A88u: goto label_1d3a88;
            case 0x1D3A8Cu: goto label_1d3a8c;
            case 0x1D3A90u: goto label_1d3a90;
            case 0x1D3A94u: goto label_1d3a94;
            case 0x1D3A98u: goto label_1d3a98;
            case 0x1D3A9Cu: goto label_1d3a9c;
            case 0x1D3AA0u: goto label_1d3aa0;
            case 0x1D3AA4u: goto label_1d3aa4;
            case 0x1D3AA8u: goto label_1d3aa8;
            case 0x1D3AACu: goto label_1d3aac;
            case 0x1D3AB0u: goto label_1d3ab0;
            case 0x1D3AB4u: goto label_1d3ab4;
            case 0x1D3AB8u: goto label_1d3ab8;
            case 0x1D3ABCu: goto label_1d3abc;
            case 0x1D3AC0u: goto label_1d3ac0;
            case 0x1D3AC4u: goto label_1d3ac4;
            case 0x1D3AC8u: goto label_1d3ac8;
            case 0x1D3ACCu: goto label_1d3acc;
            case 0x1D3AD0u: goto label_1d3ad0;
            case 0x1D3AD4u: goto label_1d3ad4;
            case 0x1D3AD8u: goto label_1d3ad8;
            case 0x1D3ADCu: goto label_1d3adc;
            case 0x1D3AE0u: goto label_1d3ae0;
            case 0x1D3AE4u: goto label_1d3ae4;
            case 0x1D3AE8u: goto label_1d3ae8;
            case 0x1D3AECu: goto label_1d3aec;
            case 0x1D3AF0u: goto label_1d3af0;
            case 0x1D3AF4u: goto label_1d3af4;
            case 0x1D3AF8u: goto label_1d3af8;
            case 0x1D3AFCu: goto label_1d3afc;
            case 0x1D3B00u: goto label_1d3b00;
            case 0x1D3B04u: goto label_1d3b04;
            case 0x1D3B08u: goto label_1d3b08;
            case 0x1D3B0Cu: goto label_1d3b0c;
            case 0x1D3B10u: goto label_1d3b10;
            case 0x1D3B14u: goto label_1d3b14;
            case 0x1D3B18u: goto label_1d3b18;
            case 0x1D3B1Cu: goto label_1d3b1c;
            case 0x1D3B20u: goto label_1d3b20;
            case 0x1D3B24u: goto label_1d3b24;
            case 0x1D3B28u: goto label_1d3b28;
            case 0x1D3B2Cu: goto label_1d3b2c;
            case 0x1D3B30u: goto label_1d3b30;
            case 0x1D3B34u: goto label_1d3b34;
            case 0x1D3B38u: goto label_1d3b38;
            case 0x1D3B3Cu: goto label_1d3b3c;
            case 0x1D3B40u: goto label_1d3b40;
            case 0x1D3B44u: goto label_1d3b44;
            case 0x1D3B48u: goto label_1d3b48;
            case 0x1D3B4Cu: goto label_1d3b4c;
            case 0x1D3B50u: goto label_1d3b50;
            case 0x1D3B54u: goto label_1d3b54;
            case 0x1D3B58u: goto label_1d3b58;
            case 0x1D3B5Cu: goto label_1d3b5c;
            case 0x1D3B60u: goto label_1d3b60;
            case 0x1D3B64u: goto label_1d3b64;
            case 0x1D3B68u: goto label_1d3b68;
            case 0x1D3B6Cu: goto label_1d3b6c;
            case 0x1D3B70u: goto label_1d3b70;
            case 0x1D3B74u: goto label_1d3b74;
            case 0x1D3B78u: goto label_1d3b78;
            case 0x1D3B7Cu: goto label_1d3b7c;
            case 0x1D3B80u: goto label_1d3b80;
            case 0x1D3B84u: goto label_1d3b84;
            case 0x1D3B88u: goto label_1d3b88;
            case 0x1D3B8Cu: goto label_1d3b8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D3A70u;
label_1d3a70:
    // 0x1d3a70: 0x27bdff50
    ctx->pc = 0x1d3a70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
label_1d3a74:
    // 0x1d3a74: 0x240300ff
    ctx->pc = 0x1d3a74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 255));
label_1d3a78:
    // 0x1d3a78: 0xffbf0020
    ctx->pc = 0x1d3a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d3a7c:
    // 0x1d3a7c: 0x7fb10010
    ctx->pc = 0x1d3a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d3a80:
    // 0x1d3a80: 0x7fb00000
    ctx->pc = 0x1d3a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d3a84:
    // 0x1d3a84: 0x80882d
    ctx->pc = 0x1d3a84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d3a88:
    // 0x1d3a88: 0x90840c7c
    ctx->pc = 0x1d3a88u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3196)));
label_1d3a8c:
    // 0x1d3a8c: 0x10830014
label_1d3a90:
    if (ctx->pc == 0x1D3A90u) {
        ctx->pc = 0x1D3A94u;
        goto label_1d3a94;
    }
    ctx->pc = 0x1D3A8Cu;
    {
        const bool branch_taken_0x1d3a8c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1d3a8c) {
            ctx->pc = 0x1D3AE0u;
            goto label_1d3ae0;
        }
    }
    ctx->pc = 0x1D3A94u;
label_1d3a94:
    // 0x1d3a94: 0xc16d338
label_1d3a98:
    if (ctx->pc == 0x1D3A98u) {
        ctx->pc = 0x1D3A98u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 255));
        ctx->pc = 0x1D3A9Cu;
        goto label_1d3a9c;
    }
    ctx->pc = 0x1D3A94u;
    SET_GPR_U32(ctx, 31, 0x1D3A9Cu);
    ctx->pc = 0x1D3A98u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 255));
    ctx->pc = 0x5B4CE0u;
    {
        auto targetFn = runtime->lookupFunction(0x5B4CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3A9Cu; }
        if (ctx->pc != 0x1D3A9Cu) { return; }
    }
    ctx->pc = 0x1D3A9Cu;
label_1d3a9c:
    // 0x1d3a9c: 0x2863c
    ctx->pc = 0x1d3a9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 24));
label_1d3aa0:
    // 0x1d3aa0: 0x2403ffff
    ctx->pc = 0x1d3aa0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d3aa4:
    // 0x1d3aa4: 0x10863f
    ctx->pc = 0x1d3aa4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
label_1d3aa8:
    // 0x1d3aa8: 0x1203000d
label_1d3aac:
    if (ctx->pc == 0x1D3AACu) {
        ctx->pc = 0x1D3AB0u;
        goto label_1d3ab0;
    }
    ctx->pc = 0x1D3AA8u;
    {
        const bool branch_taken_0x1d3aa8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        if (branch_taken_0x1d3aa8) {
            ctx->pc = 0x1D3AE0u;
            goto label_1d3ae0;
        }
    }
    ctx->pc = 0x1D3AB0u;
label_1d3ab0:
    // 0x1d3ab0: 0x92240003
    ctx->pc = 0x1d3ab0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_1d3ab4:
    // 0x1d3ab4: 0xc1ad2b8
label_1d3ab8:
    if (ctx->pc == 0x1D3AB8u) {
        ctx->pc = 0x1D3AB8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D3ABCu;
        goto label_1d3abc;
    }
    ctx->pc = 0x1D3AB4u;
    SET_GPR_U32(ctx, 31, 0x1D3ABCu);
    ctx->pc = 0x1D3AB8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x6B4AE0u;
    {
        auto targetFn = runtime->lookupFunction(0x6B4AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3ABCu; }
        if (ctx->pc != 0x1D3ABCu) { return; }
    }
    ctx->pc = 0x1D3ABCu;
label_1d3abc:
    // 0x1d3abc: 0x3c050025
    ctx->pc = 0x1d3abcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
label_1d3ac0:
    // 0x1d3ac0: 0x200302d
    ctx->pc = 0x1d3ac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d3ac4:
    // 0x1d3ac4: 0x27a40030
    ctx->pc = 0x1d3ac4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
label_1d3ac8:
    // 0x1d3ac8: 0xc042a0c
label_1d3acc:
    if (ctx->pc == 0x1D3ACCu) {
        ctx->pc = 0x1D3ACCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 26184));
        ctx->pc = 0x1D3AD0u;
        goto label_1d3ad0;
    }
    ctx->pc = 0x1D3AC8u;
    SET_GPR_U32(ctx, 31, 0x1D3AD0u);
    ctx->pc = 0x1D3ACCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 26184));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3AD0u; }
    }
    if (ctx->pc != 0x1D3AD0u) { return; }
    ctx->pc = 0x1D3AD0u;
label_1d3ad0:
    // 0x1d3ad0: 0x92220003
    ctx->pc = 0x1d3ad0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_1d3ad4:
    // 0x1d3ad4: 0x27a40030
    ctx->pc = 0x1d3ad4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
label_1d3ad8:
    // 0x1d3ad8: 0xc074f70
label_1d3adc:
    if (ctx->pc == 0x1D3ADCu) {
        ctx->pc = 0x1D3ADCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 8));
        ctx->pc = 0x1D3AE0u;
        goto label_1d3ae0;
    }
    ctx->pc = 0x1D3AD8u;
    SET_GPR_U32(ctx, 31, 0x1D3AE0u);
    ctx->pc = 0x1D3ADCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 8));
    ctx->pc = 0x1D3DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3DC0_0x1d3dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3AE0u; }
    }
    if (ctx->pc != 0x1D3AE0u) { return; }
    ctx->pc = 0x1D3AE0u;
label_1d3ae0:
    // 0x1d3ae0: 0xdfbf0020
    ctx->pc = 0x1d3ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d3ae4:
    // 0x1d3ae4: 0x7bb10010
    ctx->pc = 0x1d3ae4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d3ae8:
    // 0x1d3ae8: 0x7bb00000
    ctx->pc = 0x1d3ae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3aec:
    // 0x1d3aec: 0x3e00008
label_1d3af0:
    if (ctx->pc == 0x1D3AF0u) {
        ctx->pc = 0x1D3AF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1D3AF4u;
        goto label_1d3af4;
    }
    ctx->pc = 0x1D3AECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3AF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3790u: goto label_1d3790;
            case 0x1D3794u: goto label_1d3794;
            case 0x1D3798u: goto label_1d3798;
            case 0x1D379Cu: goto label_1d379c;
            case 0x1D37A0u: goto label_1d37a0;
            case 0x1D37A4u: goto label_1d37a4;
            case 0x1D37A8u: goto label_1d37a8;
            case 0x1D37ACu: goto label_1d37ac;
            case 0x1D37B0u: goto label_1d37b0;
            case 0x1D37B4u: goto label_1d37b4;
            case 0x1D37B8u: goto label_1d37b8;
            case 0x1D37BCu: goto label_1d37bc;
            case 0x1D37C0u: goto label_1d37c0;
            case 0x1D37C4u: goto label_1d37c4;
            case 0x1D37C8u: goto label_1d37c8;
            case 0x1D37CCu: goto label_1d37cc;
            case 0x1D37D0u: goto label_1d37d0;
            case 0x1D37D4u: goto label_1d37d4;
            case 0x1D37D8u: goto label_1d37d8;
            case 0x1D37DCu: goto label_1d37dc;
            case 0x1D37E0u: goto label_1d37e0;
            case 0x1D37E4u: goto label_1d37e4;
            case 0x1D37E8u: goto label_1d37e8;
            case 0x1D37ECu: goto label_1d37ec;
            case 0x1D37F0u: goto label_1d37f0;
            case 0x1D37F4u: goto label_1d37f4;
            case 0x1D37F8u: goto label_1d37f8;
            case 0x1D37FCu: goto label_1d37fc;
            case 0x1D3800u: goto label_1d3800;
            case 0x1D3804u: goto label_1d3804;
            case 0x1D3808u: goto label_1d3808;
            case 0x1D380Cu: goto label_1d380c;
            case 0x1D3810u: goto label_1d3810;
            case 0x1D3814u: goto label_1d3814;
            case 0x1D3818u: goto label_1d3818;
            case 0x1D381Cu: goto label_1d381c;
            case 0x1D3820u: goto label_1d3820;
            case 0x1D3824u: goto label_1d3824;
            case 0x1D3828u: goto label_1d3828;
            case 0x1D382Cu: goto label_1d382c;
            case 0x1D3830u: goto label_1d3830;
            case 0x1D3834u: goto label_1d3834;
            case 0x1D3838u: goto label_1d3838;
            case 0x1D383Cu: goto label_1d383c;
            case 0x1D3840u: goto label_1d3840;
            case 0x1D3844u: goto label_1d3844;
            case 0x1D3848u: goto label_1d3848;
            case 0x1D384Cu: goto label_1d384c;
            case 0x1D3850u: goto label_1d3850;
            case 0x1D3854u: goto label_1d3854;
            case 0x1D3858u: goto label_1d3858;
            case 0x1D385Cu: goto label_1d385c;
            case 0x1D3860u: goto label_1d3860;
            case 0x1D3864u: goto label_1d3864;
            case 0x1D3868u: goto label_1d3868;
            case 0x1D386Cu: goto label_1d386c;
            case 0x1D3870u: goto label_1d3870;
            case 0x1D3874u: goto label_1d3874;
            case 0x1D3878u: goto label_1d3878;
            case 0x1D387Cu: goto label_1d387c;
            case 0x1D3880u: goto label_1d3880;
            case 0x1D3884u: goto label_1d3884;
            case 0x1D3888u: goto label_1d3888;
            case 0x1D388Cu: goto label_1d388c;
            case 0x1D3890u: goto label_1d3890;
            case 0x1D3894u: goto label_1d3894;
            case 0x1D3898u: goto label_1d3898;
            case 0x1D389Cu: goto label_1d389c;
            case 0x1D38A0u: goto label_1d38a0;
            case 0x1D38A4u: goto label_1d38a4;
            case 0x1D38A8u: goto label_1d38a8;
            case 0x1D38ACu: goto label_1d38ac;
            case 0x1D38B0u: goto label_1d38b0;
            case 0x1D38B4u: goto label_1d38b4;
            case 0x1D38B8u: goto label_1d38b8;
            case 0x1D38BCu: goto label_1d38bc;
            case 0x1D38C0u: goto label_1d38c0;
            case 0x1D38C4u: goto label_1d38c4;
            case 0x1D38C8u: goto label_1d38c8;
            case 0x1D38CCu: goto label_1d38cc;
            case 0x1D38D0u: goto label_1d38d0;
            case 0x1D38D4u: goto label_1d38d4;
            case 0x1D38D8u: goto label_1d38d8;
            case 0x1D38DCu: goto label_1d38dc;
            case 0x1D38E0u: goto label_1d38e0;
            case 0x1D38E4u: goto label_1d38e4;
            case 0x1D38E8u: goto label_1d38e8;
            case 0x1D38ECu: goto label_1d38ec;
            case 0x1D38F0u: goto label_1d38f0;
            case 0x1D38F4u: goto label_1d38f4;
            case 0x1D38F8u: goto label_1d38f8;
            case 0x1D38FCu: goto label_1d38fc;
            case 0x1D3900u: goto label_1d3900;
            case 0x1D3904u: goto label_1d3904;
            case 0x1D3908u: goto label_1d3908;
            case 0x1D390Cu: goto label_1d390c;
            case 0x1D3910u: goto label_1d3910;
            case 0x1D3914u: goto label_1d3914;
            case 0x1D3918u: goto label_1d3918;
            case 0x1D391Cu: goto label_1d391c;
            case 0x1D3920u: goto label_1d3920;
            case 0x1D3924u: goto label_1d3924;
            case 0x1D3928u: goto label_1d3928;
            case 0x1D392Cu: goto label_1d392c;
            case 0x1D3930u: goto label_1d3930;
            case 0x1D3934u: goto label_1d3934;
            case 0x1D3938u: goto label_1d3938;
            case 0x1D393Cu: goto label_1d393c;
            case 0x1D3940u: goto label_1d3940;
            case 0x1D3944u: goto label_1d3944;
            case 0x1D3948u: goto label_1d3948;
            case 0x1D394Cu: goto label_1d394c;
            case 0x1D3950u: goto label_1d3950;
            case 0x1D3954u: goto label_1d3954;
            case 0x1D3958u: goto label_1d3958;
            case 0x1D395Cu: goto label_1d395c;
            case 0x1D3960u: goto label_1d3960;
            case 0x1D3964u: goto label_1d3964;
            case 0x1D3968u: goto label_1d3968;
            case 0x1D396Cu: goto label_1d396c;
            case 0x1D3970u: goto label_1d3970;
            case 0x1D3974u: goto label_1d3974;
            case 0x1D3978u: goto label_1d3978;
            case 0x1D397Cu: goto label_1d397c;
            case 0x1D3980u: goto label_1d3980;
            case 0x1D3984u: goto label_1d3984;
            case 0x1D3988u: goto label_1d3988;
            case 0x1D398Cu: goto label_1d398c;
            case 0x1D3990u: goto label_1d3990;
            case 0x1D3994u: goto label_1d3994;
            case 0x1D3998u: goto label_1d3998;
            case 0x1D399Cu: goto label_1d399c;
            case 0x1D39A0u: goto label_1d39a0;
            case 0x1D39A4u: goto label_1d39a4;
            case 0x1D39A8u: goto label_1d39a8;
            case 0x1D39ACu: goto label_1d39ac;
            case 0x1D39B0u: goto label_1d39b0;
            case 0x1D39B4u: goto label_1d39b4;
            case 0x1D39B8u: goto label_1d39b8;
            case 0x1D39BCu: goto label_1d39bc;
            case 0x1D39C0u: goto label_1d39c0;
            case 0x1D39C4u: goto label_1d39c4;
            case 0x1D39C8u: goto label_1d39c8;
            case 0x1D39CCu: goto label_1d39cc;
            case 0x1D39D0u: goto label_1d39d0;
            case 0x1D39D4u: goto label_1d39d4;
            case 0x1D39D8u: goto label_1d39d8;
            case 0x1D39DCu: goto label_1d39dc;
            case 0x1D39E0u: goto label_1d39e0;
            case 0x1D39E4u: goto label_1d39e4;
            case 0x1D39E8u: goto label_1d39e8;
            case 0x1D39ECu: goto label_1d39ec;
            case 0x1D39F0u: goto label_1d39f0;
            case 0x1D39F4u: goto label_1d39f4;
            case 0x1D39F8u: goto label_1d39f8;
            case 0x1D39FCu: goto label_1d39fc;
            case 0x1D3A00u: goto label_1d3a00;
            case 0x1D3A04u: goto label_1d3a04;
            case 0x1D3A08u: goto label_1d3a08;
            case 0x1D3A0Cu: goto label_1d3a0c;
            case 0x1D3A10u: goto label_1d3a10;
            case 0x1D3A14u: goto label_1d3a14;
            case 0x1D3A18u: goto label_1d3a18;
            case 0x1D3A1Cu: goto label_1d3a1c;
            case 0x1D3A20u: goto label_1d3a20;
            case 0x1D3A24u: goto label_1d3a24;
            case 0x1D3A28u: goto label_1d3a28;
            case 0x1D3A2Cu: goto label_1d3a2c;
            case 0x1D3A30u: goto label_1d3a30;
            case 0x1D3A34u: goto label_1d3a34;
            case 0x1D3A38u: goto label_1d3a38;
            case 0x1D3A3Cu: goto label_1d3a3c;
            case 0x1D3A40u: goto label_1d3a40;
            case 0x1D3A44u: goto label_1d3a44;
            case 0x1D3A48u: goto label_1d3a48;
            case 0x1D3A4Cu: goto label_1d3a4c;
            case 0x1D3A50u: goto label_1d3a50;
            case 0x1D3A54u: goto label_1d3a54;
            case 0x1D3A58u: goto label_1d3a58;
            case 0x1D3A5Cu: goto label_1d3a5c;
            case 0x1D3A60u: goto label_1d3a60;
            case 0x1D3A64u: goto label_1d3a64;
            case 0x1D3A68u: goto label_1d3a68;
            case 0x1D3A6Cu: goto label_1d3a6c;
            case 0x1D3A70u: goto label_1d3a70;
            case 0x1D3A74u: goto label_1d3a74;
            case 0x1D3A78u: goto label_1d3a78;
            case 0x1D3A7Cu: goto label_1d3a7c;
            case 0x1D3A80u: goto label_1d3a80;
            case 0x1D3A84u: goto label_1d3a84;
            case 0x1D3A88u: goto label_1d3a88;
            case 0x1D3A8Cu: goto label_1d3a8c;
            case 0x1D3A90u: goto label_1d3a90;
            case 0x1D3A94u: goto label_1d3a94;
            case 0x1D3A98u: goto label_1d3a98;
            case 0x1D3A9Cu: goto label_1d3a9c;
            case 0x1D3AA0u: goto label_1d3aa0;
            case 0x1D3AA4u: goto label_1d3aa4;
            case 0x1D3AA8u: goto label_1d3aa8;
            case 0x1D3AACu: goto label_1d3aac;
            case 0x1D3AB0u: goto label_1d3ab0;
            case 0x1D3AB4u: goto label_1d3ab4;
            case 0x1D3AB8u: goto label_1d3ab8;
            case 0x1D3ABCu: goto label_1d3abc;
            case 0x1D3AC0u: goto label_1d3ac0;
            case 0x1D3AC4u: goto label_1d3ac4;
            case 0x1D3AC8u: goto label_1d3ac8;
            case 0x1D3ACCu: goto label_1d3acc;
            case 0x1D3AD0u: goto label_1d3ad0;
            case 0x1D3AD4u: goto label_1d3ad4;
            case 0x1D3AD8u: goto label_1d3ad8;
            case 0x1D3ADCu: goto label_1d3adc;
            case 0x1D3AE0u: goto label_1d3ae0;
            case 0x1D3AE4u: goto label_1d3ae4;
            case 0x1D3AE8u: goto label_1d3ae8;
            case 0x1D3AECu: goto label_1d3aec;
            case 0x1D3AF0u: goto label_1d3af0;
            case 0x1D3AF4u: goto label_1d3af4;
            case 0x1D3AF8u: goto label_1d3af8;
            case 0x1D3AFCu: goto label_1d3afc;
            case 0x1D3B00u: goto label_1d3b00;
            case 0x1D3B04u: goto label_1d3b04;
            case 0x1D3B08u: goto label_1d3b08;
            case 0x1D3B0Cu: goto label_1d3b0c;
            case 0x1D3B10u: goto label_1d3b10;
            case 0x1D3B14u: goto label_1d3b14;
            case 0x1D3B18u: goto label_1d3b18;
            case 0x1D3B1Cu: goto label_1d3b1c;
            case 0x1D3B20u: goto label_1d3b20;
            case 0x1D3B24u: goto label_1d3b24;
            case 0x1D3B28u: goto label_1d3b28;
            case 0x1D3B2Cu: goto label_1d3b2c;
            case 0x1D3B30u: goto label_1d3b30;
            case 0x1D3B34u: goto label_1d3b34;
            case 0x1D3B38u: goto label_1d3b38;
            case 0x1D3B3Cu: goto label_1d3b3c;
            case 0x1D3B40u: goto label_1d3b40;
            case 0x1D3B44u: goto label_1d3b44;
            case 0x1D3B48u: goto label_1d3b48;
            case 0x1D3B4Cu: goto label_1d3b4c;
            case 0x1D3B50u: goto label_1d3b50;
            case 0x1D3B54u: goto label_1d3b54;
            case 0x1D3B58u: goto label_1d3b58;
            case 0x1D3B5Cu: goto label_1d3b5c;
            case 0x1D3B60u: goto label_1d3b60;
            case 0x1D3B64u: goto label_1d3b64;
            case 0x1D3B68u: goto label_1d3b68;
            case 0x1D3B6Cu: goto label_1d3b6c;
            case 0x1D3B70u: goto label_1d3b70;
            case 0x1D3B74u: goto label_1d3b74;
            case 0x1D3B78u: goto label_1d3b78;
            case 0x1D3B7Cu: goto label_1d3b7c;
            case 0x1D3B80u: goto label_1d3b80;
            case 0x1D3B84u: goto label_1d3b84;
            case 0x1D3B88u: goto label_1d3b88;
            case 0x1D3B8Cu: goto label_1d3b8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D3AF4u;
label_1d3af4:
    // 0x1d3af4: 0x0
    ctx->pc = 0x1d3af4u;
    // NOP
label_1d3af8:
    // 0x1d3af8: 0x0
    ctx->pc = 0x1d3af8u;
    // NOP
label_1d3afc:
    // 0x1d3afc: 0x0
    ctx->pc = 0x1d3afcu;
    // NOP
label_1d3b00:
    // 0x1d3b00: 0x27bdff50
    ctx->pc = 0x1d3b00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
label_1d3b04:
    // 0x1d3b04: 0x240300ff
    ctx->pc = 0x1d3b04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 255));
label_1d3b08:
    // 0x1d3b08: 0xffbf0020
    ctx->pc = 0x1d3b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d3b0c:
    // 0x1d3b0c: 0x7fb10010
    ctx->pc = 0x1d3b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d3b10:
    // 0x1d3b10: 0x7fb00000
    ctx->pc = 0x1d3b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d3b14:
    // 0x1d3b14: 0x80882d
    ctx->pc = 0x1d3b14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d3b18:
    // 0x1d3b18: 0x90840c7c
    ctx->pc = 0x1d3b18u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3196)));
label_1d3b1c:
    // 0x1d3b1c: 0x10830014
label_1d3b20:
    if (ctx->pc == 0x1D3B20u) {
        ctx->pc = 0x1D3B24u;
        goto label_1d3b24;
    }
    ctx->pc = 0x1D3B1Cu;
    {
        const bool branch_taken_0x1d3b1c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1d3b1c) {
            ctx->pc = 0x1D3B70u;
            goto label_1d3b70;
        }
    }
    ctx->pc = 0x1D3B24u;
label_1d3b24:
    // 0x1d3b24: 0xc16d338
label_1d3b28:
    if (ctx->pc == 0x1D3B28u) {
        ctx->pc = 0x1D3B28u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 255));
        ctx->pc = 0x1D3B2Cu;
        goto label_1d3b2c;
    }
    ctx->pc = 0x1D3B24u;
    SET_GPR_U32(ctx, 31, 0x1D3B2Cu);
    ctx->pc = 0x1D3B28u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 255));
    ctx->pc = 0x5B4CE0u;
    {
        auto targetFn = runtime->lookupFunction(0x5B4CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3B2Cu; }
        if (ctx->pc != 0x1D3B2Cu) { return; }
    }
    ctx->pc = 0x1D3B2Cu;
label_1d3b2c:
    // 0x1d3b2c: 0x2863c
    ctx->pc = 0x1d3b2cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 24));
label_1d3b30:
    // 0x1d3b30: 0x2403ffff
    ctx->pc = 0x1d3b30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d3b34:
    // 0x1d3b34: 0x10863f
    ctx->pc = 0x1d3b34u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
label_1d3b38:
    // 0x1d3b38: 0x1203000d
label_1d3b3c:
    if (ctx->pc == 0x1D3B3Cu) {
        ctx->pc = 0x1D3B40u;
        goto label_1d3b40;
    }
    ctx->pc = 0x1D3B38u;
    {
        const bool branch_taken_0x1d3b38 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        if (branch_taken_0x1d3b38) {
            ctx->pc = 0x1D3B70u;
            goto label_1d3b70;
        }
    }
    ctx->pc = 0x1D3B40u;
label_1d3b40:
    // 0x1d3b40: 0x92240003
    ctx->pc = 0x1d3b40u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_1d3b44:
    // 0x1d3b44: 0xc1ad2b8
label_1d3b48:
    if (ctx->pc == 0x1D3B48u) {
        ctx->pc = 0x1D3B48u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D3B4Cu;
        goto label_1d3b4c;
    }
    ctx->pc = 0x1D3B44u;
    SET_GPR_U32(ctx, 31, 0x1D3B4Cu);
    ctx->pc = 0x1D3B48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x6B4AE0u;
    {
        auto targetFn = runtime->lookupFunction(0x6B4AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3B4Cu; }
        if (ctx->pc != 0x1D3B4Cu) { return; }
    }
    ctx->pc = 0x1D3B4Cu;
label_1d3b4c:
    // 0x1d3b4c: 0x3c050025
    ctx->pc = 0x1d3b4cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
label_1d3b50:
    // 0x1d3b50: 0x200302d
    ctx->pc = 0x1d3b50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d3b54:
    // 0x1d3b54: 0x27a40030
    ctx->pc = 0x1d3b54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
label_1d3b58:
    // 0x1d3b58: 0xc042a0c
label_1d3b5c:
    if (ctx->pc == 0x1D3B5Cu) {
        ctx->pc = 0x1D3B5Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 26184));
        ctx->pc = 0x1D3B60u;
        goto label_1d3b60;
    }
    ctx->pc = 0x1D3B58u;
    SET_GPR_U32(ctx, 31, 0x1D3B60u);
    ctx->pc = 0x1D3B5Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 26184));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3B60u; }
    }
    if (ctx->pc != 0x1D3B60u) { return; }
    ctx->pc = 0x1D3B60u;
label_1d3b60:
    // 0x1d3b60: 0x92220003
    ctx->pc = 0x1d3b60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_1d3b64:
    // 0x1d3b64: 0x27a40030
    ctx->pc = 0x1d3b64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
label_1d3b68:
    // 0x1d3b68: 0xc06b584
label_1d3b6c:
    if (ctx->pc == 0x1D3B6Cu) {
        ctx->pc = 0x1D3B6Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 8));
        ctx->pc = 0x1D3B70u;
        goto label_1d3b70;
    }
    ctx->pc = 0x1D3B68u;
    SET_GPR_U32(ctx, 31, 0x1D3B70u);
    ctx->pc = 0x1D3B6Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 8));
    ctx->pc = 0x1AD610u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD610_0x1ad610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3B70u; }
    }
    if (ctx->pc != 0x1D3B70u) { return; }
    ctx->pc = 0x1D3B70u;
label_1d3b70:
    // 0x1d3b70: 0xdfbf0020
    ctx->pc = 0x1d3b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d3b74:
    // 0x1d3b74: 0x7bb10010
    ctx->pc = 0x1d3b74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d3b78:
    // 0x1d3b78: 0x7bb00000
    ctx->pc = 0x1d3b78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3b7c:
    // 0x1d3b7c: 0x3e00008
label_1d3b80:
    if (ctx->pc == 0x1D3B80u) {
        ctx->pc = 0x1D3B80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1D3B84u;
        goto label_1d3b84;
    }
    ctx->pc = 0x1D3B7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3B80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3790u: goto label_1d3790;
            case 0x1D3794u: goto label_1d3794;
            case 0x1D3798u: goto label_1d3798;
            case 0x1D379Cu: goto label_1d379c;
            case 0x1D37A0u: goto label_1d37a0;
            case 0x1D37A4u: goto label_1d37a4;
            case 0x1D37A8u: goto label_1d37a8;
            case 0x1D37ACu: goto label_1d37ac;
            case 0x1D37B0u: goto label_1d37b0;
            case 0x1D37B4u: goto label_1d37b4;
            case 0x1D37B8u: goto label_1d37b8;
            case 0x1D37BCu: goto label_1d37bc;
            case 0x1D37C0u: goto label_1d37c0;
            case 0x1D37C4u: goto label_1d37c4;
            case 0x1D37C8u: goto label_1d37c8;
            case 0x1D37CCu: goto label_1d37cc;
            case 0x1D37D0u: goto label_1d37d0;
            case 0x1D37D4u: goto label_1d37d4;
            case 0x1D37D8u: goto label_1d37d8;
            case 0x1D37DCu: goto label_1d37dc;
            case 0x1D37E0u: goto label_1d37e0;
            case 0x1D37E4u: goto label_1d37e4;
            case 0x1D37E8u: goto label_1d37e8;
            case 0x1D37ECu: goto label_1d37ec;
            case 0x1D37F0u: goto label_1d37f0;
            case 0x1D37F4u: goto label_1d37f4;
            case 0x1D37F8u: goto label_1d37f8;
            case 0x1D37FCu: goto label_1d37fc;
            case 0x1D3800u: goto label_1d3800;
            case 0x1D3804u: goto label_1d3804;
            case 0x1D3808u: goto label_1d3808;
            case 0x1D380Cu: goto label_1d380c;
            case 0x1D3810u: goto label_1d3810;
            case 0x1D3814u: goto label_1d3814;
            case 0x1D3818u: goto label_1d3818;
            case 0x1D381Cu: goto label_1d381c;
            case 0x1D3820u: goto label_1d3820;
            case 0x1D3824u: goto label_1d3824;
            case 0x1D3828u: goto label_1d3828;
            case 0x1D382Cu: goto label_1d382c;
            case 0x1D3830u: goto label_1d3830;
            case 0x1D3834u: goto label_1d3834;
            case 0x1D3838u: goto label_1d3838;
            case 0x1D383Cu: goto label_1d383c;
            case 0x1D3840u: goto label_1d3840;
            case 0x1D3844u: goto label_1d3844;
            case 0x1D3848u: goto label_1d3848;
            case 0x1D384Cu: goto label_1d384c;
            case 0x1D3850u: goto label_1d3850;
            case 0x1D3854u: goto label_1d3854;
            case 0x1D3858u: goto label_1d3858;
            case 0x1D385Cu: goto label_1d385c;
            case 0x1D3860u: goto label_1d3860;
            case 0x1D3864u: goto label_1d3864;
            case 0x1D3868u: goto label_1d3868;
            case 0x1D386Cu: goto label_1d386c;
            case 0x1D3870u: goto label_1d3870;
            case 0x1D3874u: goto label_1d3874;
            case 0x1D3878u: goto label_1d3878;
            case 0x1D387Cu: goto label_1d387c;
            case 0x1D3880u: goto label_1d3880;
            case 0x1D3884u: goto label_1d3884;
            case 0x1D3888u: goto label_1d3888;
            case 0x1D388Cu: goto label_1d388c;
            case 0x1D3890u: goto label_1d3890;
            case 0x1D3894u: goto label_1d3894;
            case 0x1D3898u: goto label_1d3898;
            case 0x1D389Cu: goto label_1d389c;
            case 0x1D38A0u: goto label_1d38a0;
            case 0x1D38A4u: goto label_1d38a4;
            case 0x1D38A8u: goto label_1d38a8;
            case 0x1D38ACu: goto label_1d38ac;
            case 0x1D38B0u: goto label_1d38b0;
            case 0x1D38B4u: goto label_1d38b4;
            case 0x1D38B8u: goto label_1d38b8;
            case 0x1D38BCu: goto label_1d38bc;
            case 0x1D38C0u: goto label_1d38c0;
            case 0x1D38C4u: goto label_1d38c4;
            case 0x1D38C8u: goto label_1d38c8;
            case 0x1D38CCu: goto label_1d38cc;
            case 0x1D38D0u: goto label_1d38d0;
            case 0x1D38D4u: goto label_1d38d4;
            case 0x1D38D8u: goto label_1d38d8;
            case 0x1D38DCu: goto label_1d38dc;
            case 0x1D38E0u: goto label_1d38e0;
            case 0x1D38E4u: goto label_1d38e4;
            case 0x1D38E8u: goto label_1d38e8;
            case 0x1D38ECu: goto label_1d38ec;
            case 0x1D38F0u: goto label_1d38f0;
            case 0x1D38F4u: goto label_1d38f4;
            case 0x1D38F8u: goto label_1d38f8;
            case 0x1D38FCu: goto label_1d38fc;
            case 0x1D3900u: goto label_1d3900;
            case 0x1D3904u: goto label_1d3904;
            case 0x1D3908u: goto label_1d3908;
            case 0x1D390Cu: goto label_1d390c;
            case 0x1D3910u: goto label_1d3910;
            case 0x1D3914u: goto label_1d3914;
            case 0x1D3918u: goto label_1d3918;
            case 0x1D391Cu: goto label_1d391c;
            case 0x1D3920u: goto label_1d3920;
            case 0x1D3924u: goto label_1d3924;
            case 0x1D3928u: goto label_1d3928;
            case 0x1D392Cu: goto label_1d392c;
            case 0x1D3930u: goto label_1d3930;
            case 0x1D3934u: goto label_1d3934;
            case 0x1D3938u: goto label_1d3938;
            case 0x1D393Cu: goto label_1d393c;
            case 0x1D3940u: goto label_1d3940;
            case 0x1D3944u: goto label_1d3944;
            case 0x1D3948u: goto label_1d3948;
            case 0x1D394Cu: goto label_1d394c;
            case 0x1D3950u: goto label_1d3950;
            case 0x1D3954u: goto label_1d3954;
            case 0x1D3958u: goto label_1d3958;
            case 0x1D395Cu: goto label_1d395c;
            case 0x1D3960u: goto label_1d3960;
            case 0x1D3964u: goto label_1d3964;
            case 0x1D3968u: goto label_1d3968;
            case 0x1D396Cu: goto label_1d396c;
            case 0x1D3970u: goto label_1d3970;
            case 0x1D3974u: goto label_1d3974;
            case 0x1D3978u: goto label_1d3978;
            case 0x1D397Cu: goto label_1d397c;
            case 0x1D3980u: goto label_1d3980;
            case 0x1D3984u: goto label_1d3984;
            case 0x1D3988u: goto label_1d3988;
            case 0x1D398Cu: goto label_1d398c;
            case 0x1D3990u: goto label_1d3990;
            case 0x1D3994u: goto label_1d3994;
            case 0x1D3998u: goto label_1d3998;
            case 0x1D399Cu: goto label_1d399c;
            case 0x1D39A0u: goto label_1d39a0;
            case 0x1D39A4u: goto label_1d39a4;
            case 0x1D39A8u: goto label_1d39a8;
            case 0x1D39ACu: goto label_1d39ac;
            case 0x1D39B0u: goto label_1d39b0;
            case 0x1D39B4u: goto label_1d39b4;
            case 0x1D39B8u: goto label_1d39b8;
            case 0x1D39BCu: goto label_1d39bc;
            case 0x1D39C0u: goto label_1d39c0;
            case 0x1D39C4u: goto label_1d39c4;
            case 0x1D39C8u: goto label_1d39c8;
            case 0x1D39CCu: goto label_1d39cc;
            case 0x1D39D0u: goto label_1d39d0;
            case 0x1D39D4u: goto label_1d39d4;
            case 0x1D39D8u: goto label_1d39d8;
            case 0x1D39DCu: goto label_1d39dc;
            case 0x1D39E0u: goto label_1d39e0;
            case 0x1D39E4u: goto label_1d39e4;
            case 0x1D39E8u: goto label_1d39e8;
            case 0x1D39ECu: goto label_1d39ec;
            case 0x1D39F0u: goto label_1d39f0;
            case 0x1D39F4u: goto label_1d39f4;
            case 0x1D39F8u: goto label_1d39f8;
            case 0x1D39FCu: goto label_1d39fc;
            case 0x1D3A00u: goto label_1d3a00;
            case 0x1D3A04u: goto label_1d3a04;
            case 0x1D3A08u: goto label_1d3a08;
            case 0x1D3A0Cu: goto label_1d3a0c;
            case 0x1D3A10u: goto label_1d3a10;
            case 0x1D3A14u: goto label_1d3a14;
            case 0x1D3A18u: goto label_1d3a18;
            case 0x1D3A1Cu: goto label_1d3a1c;
            case 0x1D3A20u: goto label_1d3a20;
            case 0x1D3A24u: goto label_1d3a24;
            case 0x1D3A28u: goto label_1d3a28;
            case 0x1D3A2Cu: goto label_1d3a2c;
            case 0x1D3A30u: goto label_1d3a30;
            case 0x1D3A34u: goto label_1d3a34;
            case 0x1D3A38u: goto label_1d3a38;
            case 0x1D3A3Cu: goto label_1d3a3c;
            case 0x1D3A40u: goto label_1d3a40;
            case 0x1D3A44u: goto label_1d3a44;
            case 0x1D3A48u: goto label_1d3a48;
            case 0x1D3A4Cu: goto label_1d3a4c;
            case 0x1D3A50u: goto label_1d3a50;
            case 0x1D3A54u: goto label_1d3a54;
            case 0x1D3A58u: goto label_1d3a58;
            case 0x1D3A5Cu: goto label_1d3a5c;
            case 0x1D3A60u: goto label_1d3a60;
            case 0x1D3A64u: goto label_1d3a64;
            case 0x1D3A68u: goto label_1d3a68;
            case 0x1D3A6Cu: goto label_1d3a6c;
            case 0x1D3A70u: goto label_1d3a70;
            case 0x1D3A74u: goto label_1d3a74;
            case 0x1D3A78u: goto label_1d3a78;
            case 0x1D3A7Cu: goto label_1d3a7c;
            case 0x1D3A80u: goto label_1d3a80;
            case 0x1D3A84u: goto label_1d3a84;
            case 0x1D3A88u: goto label_1d3a88;
            case 0x1D3A8Cu: goto label_1d3a8c;
            case 0x1D3A90u: goto label_1d3a90;
            case 0x1D3A94u: goto label_1d3a94;
            case 0x1D3A98u: goto label_1d3a98;
            case 0x1D3A9Cu: goto label_1d3a9c;
            case 0x1D3AA0u: goto label_1d3aa0;
            case 0x1D3AA4u: goto label_1d3aa4;
            case 0x1D3AA8u: goto label_1d3aa8;
            case 0x1D3AACu: goto label_1d3aac;
            case 0x1D3AB0u: goto label_1d3ab0;
            case 0x1D3AB4u: goto label_1d3ab4;
            case 0x1D3AB8u: goto label_1d3ab8;
            case 0x1D3ABCu: goto label_1d3abc;
            case 0x1D3AC0u: goto label_1d3ac0;
            case 0x1D3AC4u: goto label_1d3ac4;
            case 0x1D3AC8u: goto label_1d3ac8;
            case 0x1D3ACCu: goto label_1d3acc;
            case 0x1D3AD0u: goto label_1d3ad0;
            case 0x1D3AD4u: goto label_1d3ad4;
            case 0x1D3AD8u: goto label_1d3ad8;
            case 0x1D3ADCu: goto label_1d3adc;
            case 0x1D3AE0u: goto label_1d3ae0;
            case 0x1D3AE4u: goto label_1d3ae4;
            case 0x1D3AE8u: goto label_1d3ae8;
            case 0x1D3AECu: goto label_1d3aec;
            case 0x1D3AF0u: goto label_1d3af0;
            case 0x1D3AF4u: goto label_1d3af4;
            case 0x1D3AF8u: goto label_1d3af8;
            case 0x1D3AFCu: goto label_1d3afc;
            case 0x1D3B00u: goto label_1d3b00;
            case 0x1D3B04u: goto label_1d3b04;
            case 0x1D3B08u: goto label_1d3b08;
            case 0x1D3B0Cu: goto label_1d3b0c;
            case 0x1D3B10u: goto label_1d3b10;
            case 0x1D3B14u: goto label_1d3b14;
            case 0x1D3B18u: goto label_1d3b18;
            case 0x1D3B1Cu: goto label_1d3b1c;
            case 0x1D3B20u: goto label_1d3b20;
            case 0x1D3B24u: goto label_1d3b24;
            case 0x1D3B28u: goto label_1d3b28;
            case 0x1D3B2Cu: goto label_1d3b2c;
            case 0x1D3B30u: goto label_1d3b30;
            case 0x1D3B34u: goto label_1d3b34;
            case 0x1D3B38u: goto label_1d3b38;
            case 0x1D3B3Cu: goto label_1d3b3c;
            case 0x1D3B40u: goto label_1d3b40;
            case 0x1D3B44u: goto label_1d3b44;
            case 0x1D3B48u: goto label_1d3b48;
            case 0x1D3B4Cu: goto label_1d3b4c;
            case 0x1D3B50u: goto label_1d3b50;
            case 0x1D3B54u: goto label_1d3b54;
            case 0x1D3B58u: goto label_1d3b58;
            case 0x1D3B5Cu: goto label_1d3b5c;
            case 0x1D3B60u: goto label_1d3b60;
            case 0x1D3B64u: goto label_1d3b64;
            case 0x1D3B68u: goto label_1d3b68;
            case 0x1D3B6Cu: goto label_1d3b6c;
            case 0x1D3B70u: goto label_1d3b70;
            case 0x1D3B74u: goto label_1d3b74;
            case 0x1D3B78u: goto label_1d3b78;
            case 0x1D3B7Cu: goto label_1d3b7c;
            case 0x1D3B80u: goto label_1d3b80;
            case 0x1D3B84u: goto label_1d3b84;
            case 0x1D3B88u: goto label_1d3b88;
            case 0x1D3B8Cu: goto label_1d3b8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D3B84u;
label_1d3b84:
    // 0x1d3b84: 0x0
    ctx->pc = 0x1d3b84u;
    // NOP
label_1d3b88:
    // 0x1d3b88: 0x0
    ctx->pc = 0x1d3b88u;
    // NOP
label_1d3b8c:
    // 0x1d3b8c: 0x0
    ctx->pc = 0x1d3b8cu;
    // NOP
}
