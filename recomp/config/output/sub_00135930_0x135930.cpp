#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00135930
// Address: 0x135930 - 0x135a58
void sub_00135930_0x135930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x135930u;

label_135930:
    // 0x135930: 0x27bdfd70
    ctx->pc = 0x135930u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966640));
label_135934:
    // 0x135934: 0xffb10268
    ctx->pc = 0x135934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 17));
label_135938:
    // 0x135938: 0x80882d
    ctx->pc = 0x135938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13593c:
    // 0x13593c: 0xffb30278
    ctx->pc = 0x13593cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 19));
label_135940:
    // 0x135940: 0xa0982d
    ctx->pc = 0x135940u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_135944:
    // 0x135944: 0xffb40280
    ctx->pc = 0x135944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 20));
label_135948:
    // 0x135948: 0xc0a02d
    ctx->pc = 0x135948u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13594c:
    // 0x13594c: 0xffb00260
    ctx->pc = 0x13594cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_135950:
    // 0x135950: 0xffb20270
    ctx->pc = 0x135950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 18));
label_135954:
    // 0x135954: 0x16200004
label_135958:
    if (ctx->pc == 0x135958u) {
        ctx->pc = 0x135958u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 648), GPR_U64(ctx, 31));
        ctx->pc = 0x13595Cu;
        goto label_13595c;
    }
    ctx->pc = 0x135954u;
    {
        const bool branch_taken_0x135954 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x135958u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 648), GPR_U64(ctx, 31));
        if (branch_taken_0x135954) {
            ctx->pc = 0x135968u;
            goto label_135968;
        }
    }
    ctx->pc = 0x13595Cu;
label_13595c:
    // 0x13595c: 0x3c040024
    ctx->pc = 0x13595cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_135960:
    // 0x135960: 0x10000032
label_135964:
    if (ctx->pc == 0x135964u) {
        ctx->pc = 0x135964u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949024));
        ctx->pc = 0x135968u;
        goto label_135968;
    }
    ctx->pc = 0x135960u;
    {
        const bool branch_taken_0x135960 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x135964u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949024));
        if (branch_taken_0x135960) {
            ctx->pc = 0x135A2Cu;
            goto label_135a2c;
        }
    }
    ctx->pc = 0x135968u;
label_135968:
    // 0x135968: 0x27b20130
    ctx->pc = 0x135968u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 304));
label_13596c:
    // 0x13596c: 0x3a0202d
    ctx->pc = 0x13596cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_135970:
    // 0x135970: 0x240282d
    ctx->pc = 0x135970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_135974:
    // 0x135974: 0xc04d6b4
label_135978:
    if (ctx->pc == 0x135978u) {
        ctx->pc = 0x135978u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13597Cu;
        goto label_13597c;
    }
    ctx->pc = 0x135974u;
    SET_GPR_U32(ctx, 31, 0x13597Cu);
    ctx->pc = 0x135978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x135AD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135AD0_0x135ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13597Cu; }
    }
    if (ctx->pc != 0x13597Cu) { return; }
    ctx->pc = 0x13597Cu;
label_13597c:
    // 0x13597c: 0x83a20130
    ctx->pc = 0x13597cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_135980:
    // 0x135980: 0x14400003
label_135984:
    if (ctx->pc == 0x135984u) {
        ctx->pc = 0x135984u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        ctx->pc = 0x135988u;
        goto label_135988;
    }
    ctx->pc = 0x135980u;
    {
        const bool branch_taken_0x135980 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x135984u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x135980) {
            ctx->pc = 0x135990u;
            goto label_135990;
        }
    }
    ctx->pc = 0x135988u;
label_135988:
    // 0x135988: 0x10000028
label_13598c:
    if (ctx->pc == 0x13598Cu) {
        ctx->pc = 0x13598Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949024));
        ctx->pc = 0x135990u;
        goto label_135990;
    }
    ctx->pc = 0x135988u;
    {
        const bool branch_taken_0x135988 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13598Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949024));
        if (branch_taken_0x135988) {
            ctx->pc = 0x135A2Cu;
            goto label_135a2c;
        }
    }
    ctx->pc = 0x135990u;
label_135990:
    // 0x135990: 0xc04d696
label_135994:
    if (ctx->pc == 0x135994u) {
        ctx->pc = 0x135998u;
        goto label_135998;
    }
    ctx->pc = 0x135990u;
    SET_GPR_U32(ctx, 31, 0x135998u);
    ctx->pc = 0x135A58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135A58_0x135a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135998u; }
    }
    if (ctx->pc != 0x135998u) { return; }
    ctx->pc = 0x135998u;
label_135998:
    // 0x135998: 0x40802d
    ctx->pc = 0x135998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13599c:
    // 0x13599c: 0x16000004
label_1359a0:
    if (ctx->pc == 0x1359A0u) {
        ctx->pc = 0x1359A0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1359A4u;
        goto label_1359a4;
    }
    ctx->pc = 0x13599Cu;
    {
        const bool branch_taken_0x13599c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1359A0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13599c) {
            ctx->pc = 0x1359B0u;
            goto label_1359b0;
        }
    }
    ctx->pc = 0x1359A4u;
label_1359a4:
    // 0x1359a4: 0x3c040024
    ctx->pc = 0x1359a4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_1359a8:
    // 0x1359a8: 0x10000020
label_1359ac:
    if (ctx->pc == 0x1359ACu) {
        ctx->pc = 0x1359ACu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949056));
        ctx->pc = 0x1359B0u;
        goto label_1359b0;
    }
    ctx->pc = 0x1359A8u;
    {
        const bool branch_taken_0x1359a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1359ACu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949056));
        if (branch_taken_0x1359a8) {
            ctx->pc = 0x135A2Cu;
            goto label_135a2c;
        }
    }
    ctx->pc = 0x1359B0u;
label_1359b0:
    // 0x1359b0: 0x3a0202d
    ctx->pc = 0x1359b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1359b4:
    // 0x1359b4: 0xc04d622
label_1359b8:
    if (ctx->pc == 0x1359B8u) {
        ctx->pc = 0x1359B8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1359BCu;
        goto label_1359bc;
    }
    ctx->pc = 0x1359B4u;
    SET_GPR_U32(ctx, 31, 0x1359BCu);
    ctx->pc = 0x1359B8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x135888u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135888_0x135888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1359BCu; }
    }
    if (ctx->pc != 0x1359BCu) { return; }
    ctx->pc = 0x1359BCu;
label_1359bc:
    // 0x1359bc: 0x14400006
label_1359c0:
    if (ctx->pc == 0x1359C0u) {
        ctx->pc = 0x1359C0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1359C4u;
        goto label_1359c4;
    }
    ctx->pc = 0x1359BCu;
    {
        const bool branch_taken_0x1359bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1359C0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x1359bc) {
            ctx->pc = 0x1359D8u;
            goto label_1359d8;
        }
    }
    ctx->pc = 0x1359C4u;
label_1359c4:
    // 0x1359c4: 0xc04d6b0
label_1359c8:
    if (ctx->pc == 0x1359C8u) {
        ctx->pc = 0x1359C8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1359CCu;
        goto label_1359cc;
    }
    ctx->pc = 0x1359C4u;
    SET_GPR_U32(ctx, 31, 0x1359CCu);
    ctx->pc = 0x1359C8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x135AC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135AC0_0x135ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1359CCu; }
    }
    if (ctx->pc != 0x1359CCu) { return; }
    ctx->pc = 0x1359CCu;
label_1359cc:
    // 0x1359cc: 0x3c040024
    ctx->pc = 0x1359ccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_1359d0:
    // 0x1359d0: 0x10000016
label_1359d4:
    if (ctx->pc == 0x1359D4u) {
        ctx->pc = 0x1359D4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949128));
        ctx->pc = 0x1359D8u;
        goto label_1359d8;
    }
    ctx->pc = 0x1359D0u;
    {
        const bool branch_taken_0x1359d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1359D4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949128));
        if (branch_taken_0x1359d0) {
            ctx->pc = 0x135A2Cu;
            goto label_135a2c;
        }
    }
    ctx->pc = 0x1359D8u;
label_1359d8:
    // 0x1359d8: 0x8c420010
    ctx->pc = 0x1359d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1359dc:
    // 0x1359dc: 0x10400006
label_1359e0:
    if (ctx->pc == 0x1359E0u) {
        ctx->pc = 0x1359E0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1359E4u;
        goto label_1359e4;
    }
    ctx->pc = 0x1359DCu;
    {
        const bool branch_taken_0x1359dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1359E0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1359dc) {
            ctx->pc = 0x1359F8u;
            goto label_1359f8;
        }
    }
    ctx->pc = 0x1359E4u;
label_1359e4:
    // 0x1359e4: 0x240202d
    ctx->pc = 0x1359e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1359e8:
    // 0x1359e8: 0x40f809
label_1359ec:
    if (ctx->pc == 0x1359ECu) {
        ctx->pc = 0x1359ECu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1359F0u;
        goto label_1359f0;
    }
    ctx->pc = 0x1359E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1359F0u);
        ctx->pc = 0x1359ECu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135930u: goto label_135930;
            case 0x135934u: goto label_135934;
            case 0x135938u: goto label_135938;
            case 0x13593Cu: goto label_13593c;
            case 0x135940u: goto label_135940;
            case 0x135944u: goto label_135944;
            case 0x135948u: goto label_135948;
            case 0x13594Cu: goto label_13594c;
            case 0x135950u: goto label_135950;
            case 0x135954u: goto label_135954;
            case 0x135958u: goto label_135958;
            case 0x13595Cu: goto label_13595c;
            case 0x135960u: goto label_135960;
            case 0x135964u: goto label_135964;
            case 0x135968u: goto label_135968;
            case 0x13596Cu: goto label_13596c;
            case 0x135970u: goto label_135970;
            case 0x135974u: goto label_135974;
            case 0x135978u: goto label_135978;
            case 0x13597Cu: goto label_13597c;
            case 0x135980u: goto label_135980;
            case 0x135984u: goto label_135984;
            case 0x135988u: goto label_135988;
            case 0x13598Cu: goto label_13598c;
            case 0x135990u: goto label_135990;
            case 0x135994u: goto label_135994;
            case 0x135998u: goto label_135998;
            case 0x13599Cu: goto label_13599c;
            case 0x1359A0u: goto label_1359a0;
            case 0x1359A4u: goto label_1359a4;
            case 0x1359A8u: goto label_1359a8;
            case 0x1359ACu: goto label_1359ac;
            case 0x1359B0u: goto label_1359b0;
            case 0x1359B4u: goto label_1359b4;
            case 0x1359B8u: goto label_1359b8;
            case 0x1359BCu: goto label_1359bc;
            case 0x1359C0u: goto label_1359c0;
            case 0x1359C4u: goto label_1359c4;
            case 0x1359C8u: goto label_1359c8;
            case 0x1359CCu: goto label_1359cc;
            case 0x1359D0u: goto label_1359d0;
            case 0x1359D4u: goto label_1359d4;
            case 0x1359D8u: goto label_1359d8;
            case 0x1359DCu: goto label_1359dc;
            case 0x1359E0u: goto label_1359e0;
            case 0x1359E4u: goto label_1359e4;
            case 0x1359E8u: goto label_1359e8;
            case 0x1359ECu: goto label_1359ec;
            case 0x1359F0u: goto label_1359f0;
            case 0x1359F4u: goto label_1359f4;
            case 0x1359F8u: goto label_1359f8;
            case 0x1359FCu: goto label_1359fc;
            case 0x135A00u: goto label_135a00;
            case 0x135A04u: goto label_135a04;
            case 0x135A08u: goto label_135a08;
            case 0x135A0Cu: goto label_135a0c;
            case 0x135A10u: goto label_135a10;
            case 0x135A14u: goto label_135a14;
            case 0x135A18u: goto label_135a18;
            case 0x135A1Cu: goto label_135a1c;
            case 0x135A20u: goto label_135a20;
            case 0x135A24u: goto label_135a24;
            case 0x135A28u: goto label_135a28;
            case 0x135A2Cu: goto label_135a2c;
            case 0x135A30u: goto label_135a30;
            case 0x135A34u: goto label_135a34;
            case 0x135A38u: goto label_135a38;
            case 0x135A3Cu: goto label_135a3c;
            case 0x135A40u: goto label_135a40;
            case 0x135A44u: goto label_135a44;
            case 0x135A48u: goto label_135a48;
            case 0x135A4Cu: goto label_135a4c;
            case 0x135A50u: goto label_135a50;
            case 0x135A54u: goto label_135a54;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1359F0u; }
            if (ctx->pc != 0x1359F0u) { return; }
        }
    }
    ctx->pc = 0x1359F0u;
label_1359f0:
    // 0x1359f0: 0x10000007
label_1359f4:
    if (ctx->pc == 0x1359F4u) {
        ctx->pc = 0x1359F4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x1359F8u;
        goto label_1359f8;
    }
    ctx->pc = 0x1359F0u;
    {
        const bool branch_taken_0x1359f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1359F4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x1359f0) {
            ctx->pc = 0x135A10u;
            goto label_135a10;
        }
    }
    ctx->pc = 0x1359F8u;
label_1359f8:
    // 0x1359f8: 0xc04d6b0
label_1359fc:
    if (ctx->pc == 0x1359FCu) {
        ctx->pc = 0x1359FCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x135A00u;
        goto label_135a00;
    }
    ctx->pc = 0x1359F8u;
    SET_GPR_U32(ctx, 31, 0x135A00u);
    ctx->pc = 0x1359FCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x135AC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135AC0_0x135ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135A00u; }
    }
    if (ctx->pc != 0x135A00u) { return; }
    ctx->pc = 0x135A00u;
label_135a00:
    // 0x135a00: 0x3c040024
    ctx->pc = 0x135a00u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_135a04:
    // 0x135a04: 0x10000009
label_135a08:
    if (ctx->pc == 0x135A08u) {
        ctx->pc = 0x135A08u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949160));
        ctx->pc = 0x135A0Cu;
        goto label_135a0c;
    }
    ctx->pc = 0x135A04u;
    {
        const bool branch_taken_0x135a04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x135A08u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949160));
        if (branch_taken_0x135a04) {
            ctx->pc = 0x135A2Cu;
            goto label_135a2c;
        }
    }
    ctx->pc = 0x135A0Cu;
label_135a0c:
    // 0x135a0c: 0x0
    ctx->pc = 0x135a0cu;
    // NOP
label_135a10:
    // 0x135a10: 0x8e020004
    ctx->pc = 0x135a10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_135a14:
    // 0x135a14: 0x54400008
label_135a18:
    if (ctx->pc == 0x135A18u) {
        ctx->pc = 0x135A18u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x135A1Cu;
        goto label_135a1c;
    }
    ctx->pc = 0x135A14u;
    {
        const bool branch_taken_0x135a14 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x135a14) {
            ctx->pc = 0x135A18u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x135A38u;
            goto label_135a38;
        }
    }
    ctx->pc = 0x135A1Cu;
label_135a1c:
    // 0x135a1c: 0xc04d6b0
label_135a20:
    if (ctx->pc == 0x135A20u) {
        ctx->pc = 0x135A20u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x135A24u;
        goto label_135a24;
    }
    ctx->pc = 0x135A1Cu;
    SET_GPR_U32(ctx, 31, 0x135A24u);
    ctx->pc = 0x135A20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x135AC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135AC0_0x135ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135A24u; }
    }
    if (ctx->pc != 0x135A24u) { return; }
    ctx->pc = 0x135A24u;
label_135a24:
    // 0x135a24: 0x3c040024
    ctx->pc = 0x135a24u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_135a28:
    // 0x135a28: 0x2484b940
    ctx->pc = 0x135a28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949184));
label_135a2c:
    // 0x135a2c: 0xc04d480
label_135a30:
    if (ctx->pc == 0x135A30u) {
        ctx->pc = 0x135A34u;
        goto label_135a34;
    }
    ctx->pc = 0x135A2Cu;
    SET_GPR_U32(ctx, 31, 0x135A34u);
    ctx->pc = 0x135200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135200_0x135200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135A34u; }
    }
    if (ctx->pc != 0x135A34u) { return; }
    ctx->pc = 0x135A34u;
label_135a34:
    // 0x135a34: 0x102d
    ctx->pc = 0x135a34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_135a38:
    // 0x135a38: 0xdfb00260
    ctx->pc = 0x135a38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_135a3c:
    // 0x135a3c: 0xdfb10268
    ctx->pc = 0x135a3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 616)));
label_135a40:
    // 0x135a40: 0xdfb20270
    ctx->pc = 0x135a40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_135a44:
    // 0x135a44: 0xdfb30278
    ctx->pc = 0x135a44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 632)));
label_135a48:
    // 0x135a48: 0xdfb40280
    ctx->pc = 0x135a48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_135a4c:
    // 0x135a4c: 0xdfbf0288
    ctx->pc = 0x135a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 648)));
label_135a50:
    // 0x135a50: 0x3e00008
label_135a54:
    if (ctx->pc == 0x135A54u) {
        ctx->pc = 0x135A54u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = 0x135A58u;
        goto label_fallthrough_0x135a50;
    }
    ctx->pc = 0x135A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135A54u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135930u: goto label_135930;
            case 0x135934u: goto label_135934;
            case 0x135938u: goto label_135938;
            case 0x13593Cu: goto label_13593c;
            case 0x135940u: goto label_135940;
            case 0x135944u: goto label_135944;
            case 0x135948u: goto label_135948;
            case 0x13594Cu: goto label_13594c;
            case 0x135950u: goto label_135950;
            case 0x135954u: goto label_135954;
            case 0x135958u: goto label_135958;
            case 0x13595Cu: goto label_13595c;
            case 0x135960u: goto label_135960;
            case 0x135964u: goto label_135964;
            case 0x135968u: goto label_135968;
            case 0x13596Cu: goto label_13596c;
            case 0x135970u: goto label_135970;
            case 0x135974u: goto label_135974;
            case 0x135978u: goto label_135978;
            case 0x13597Cu: goto label_13597c;
            case 0x135980u: goto label_135980;
            case 0x135984u: goto label_135984;
            case 0x135988u: goto label_135988;
            case 0x13598Cu: goto label_13598c;
            case 0x135990u: goto label_135990;
            case 0x135994u: goto label_135994;
            case 0x135998u: goto label_135998;
            case 0x13599Cu: goto label_13599c;
            case 0x1359A0u: goto label_1359a0;
            case 0x1359A4u: goto label_1359a4;
            case 0x1359A8u: goto label_1359a8;
            case 0x1359ACu: goto label_1359ac;
            case 0x1359B0u: goto label_1359b0;
            case 0x1359B4u: goto label_1359b4;
            case 0x1359B8u: goto label_1359b8;
            case 0x1359BCu: goto label_1359bc;
            case 0x1359C0u: goto label_1359c0;
            case 0x1359C4u: goto label_1359c4;
            case 0x1359C8u: goto label_1359c8;
            case 0x1359CCu: goto label_1359cc;
            case 0x1359D0u: goto label_1359d0;
            case 0x1359D4u: goto label_1359d4;
            case 0x1359D8u: goto label_1359d8;
            case 0x1359DCu: goto label_1359dc;
            case 0x1359E0u: goto label_1359e0;
            case 0x1359E4u: goto label_1359e4;
            case 0x1359E8u: goto label_1359e8;
            case 0x1359ECu: goto label_1359ec;
            case 0x1359F0u: goto label_1359f0;
            case 0x1359F4u: goto label_1359f4;
            case 0x1359F8u: goto label_1359f8;
            case 0x1359FCu: goto label_1359fc;
            case 0x135A00u: goto label_135a00;
            case 0x135A04u: goto label_135a04;
            case 0x135A08u: goto label_135a08;
            case 0x135A0Cu: goto label_135a0c;
            case 0x135A10u: goto label_135a10;
            case 0x135A14u: goto label_135a14;
            case 0x135A18u: goto label_135a18;
            case 0x135A1Cu: goto label_135a1c;
            case 0x135A20u: goto label_135a20;
            case 0x135A24u: goto label_135a24;
            case 0x135A28u: goto label_135a28;
            case 0x135A2Cu: goto label_135a2c;
            case 0x135A30u: goto label_135a30;
            case 0x135A34u: goto label_135a34;
            case 0x135A38u: goto label_135a38;
            case 0x135A3Cu: goto label_135a3c;
            case 0x135A40u: goto label_135a40;
            case 0x135A44u: goto label_135a44;
            case 0x135A48u: goto label_135a48;
            case 0x135A4Cu: goto label_135a4c;
            case 0x135A50u: goto label_135a50;
            case 0x135A54u: goto label_135a54;
            default: break;
        }
        return;
    }
label_fallthrough_0x135a50:
    ctx->pc = 0x135A58u;
}
