#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_123898
// Address: 0x123898 - 0x123a18
void entry_123898_0x123a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x123898u;

label_123898:
    // 0x123898: 0x27bdffe0
    ctx->pc = 0x123898u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_12389c:
    // 0x12389c: 0x24020001
    ctx->pc = 0x12389cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1238a0:
    // 0x1238a0: 0xffb00000
    ctx->pc = 0x1238a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1238a4:
    // 0x1238a4: 0x80802d
    ctx->pc = 0x1238a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1238a8:
    // 0x1238a8: 0xffb10008
    ctx->pc = 0x1238a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1238ac:
    // 0x1238ac: 0x26110048
    ctx->pc = 0x1238acu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 72));
label_1238b0:
    // 0x1238b0: 0xffb20010
    ctx->pc = 0x1238b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1238b4:
    // 0x1238b4: 0xffbf0018
    ctx->pc = 0x1238b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1238b8:
    // 0x1238b8: 0x8e030004
    ctx->pc = 0x1238b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1238bc:
    // 0x1238bc: 0x14620046
label_1238c0:
    if (ctx->pc == 0x1238C0u) {
        ctx->pc = 0x1238C0u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1238C4u;
        goto label_1238c4;
    }
    ctx->pc = 0x1238BCu;
    {
        const bool branch_taken_0x1238bc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1238C0u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        if (branch_taken_0x1238bc) {
            ctx->pc = 0x1239D8u;
            goto label_1239d8;
        }
    }
    ctx->pc = 0x1238C4u;
label_1238c4:
    // 0x1238c4: 0xc04d3e6
label_1238c8:
    if (ctx->pc == 0x1238C8u) {
        ctx->pc = 0x1238C8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x1238CCu;
        goto label_1238cc;
    }
    ctx->pc = 0x1238C4u;
    SET_GPR_U32(ctx, 31, 0x1238CCu);
    ctx->pc = 0x1238C8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x134F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00134F98_0x134f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1238CCu; }
    }
    if (ctx->pc != 0x1238CCu) { return; }
    ctx->pc = 0x1238CCu;
label_1238cc:
    // 0x1238cc: 0x54400042
label_1238d0:
    if (ctx->pc == 0x1238D0u) {
        ctx->pc = 0x1238D0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1238D4u;
        goto label_1238d4;
    }
    ctx->pc = 0x1238CCu;
    {
        const bool branch_taken_0x1238cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1238cc) {
            ctx->pc = 0x1238D0u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x1239D8u;
            goto label_1239d8;
        }
    }
    ctx->pc = 0x1238D4u;
label_1238d4:
    // 0x1238d4: 0x8e04007c
    ctx->pc = 0x1238d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_1238d8:
    // 0x1238d8: 0x26050068
    ctx->pc = 0x1238d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 104));
label_1238dc:
    // 0x1238dc: 0x8e020078
    ctx->pc = 0x1238dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_1238e0:
    // 0x1238e0: 0x2606006c
    ctx->pc = 0x1238e0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 108));
label_1238e4:
    // 0x1238e4: 0x40f809
label_1238e8:
    if (ctx->pc == 0x1238E8u) {
        ctx->pc = 0x1238E8u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x1238ECu;
        goto label_1238ec;
    }
    ctx->pc = 0x1238E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1238ECu);
        ctx->pc = 0x1238E8u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x123898u: goto label_123898;
            case 0x12389Cu: goto label_12389c;
            case 0x1238A0u: goto label_1238a0;
            case 0x1238A4u: goto label_1238a4;
            case 0x1238A8u: goto label_1238a8;
            case 0x1238ACu: goto label_1238ac;
            case 0x1238B0u: goto label_1238b0;
            case 0x1238B4u: goto label_1238b4;
            case 0x1238B8u: goto label_1238b8;
            case 0x1238BCu: goto label_1238bc;
            case 0x1238C0u: goto label_1238c0;
            case 0x1238C4u: goto label_1238c4;
            case 0x1238C8u: goto label_1238c8;
            case 0x1238CCu: goto label_1238cc;
            case 0x1238D0u: goto label_1238d0;
            case 0x1238D4u: goto label_1238d4;
            case 0x1238D8u: goto label_1238d8;
            case 0x1238DCu: goto label_1238dc;
            case 0x1238E0u: goto label_1238e0;
            case 0x1238E4u: goto label_1238e4;
            case 0x1238E8u: goto label_1238e8;
            case 0x1238ECu: goto label_1238ec;
            case 0x1238F0u: goto label_1238f0;
            case 0x1238F4u: goto label_1238f4;
            case 0x1238F8u: goto label_1238f8;
            case 0x1238FCu: goto label_1238fc;
            case 0x123900u: goto label_123900;
            case 0x123904u: goto label_123904;
            case 0x123908u: goto label_123908;
            case 0x12390Cu: goto label_12390c;
            case 0x123910u: goto label_123910;
            case 0x123914u: goto label_123914;
            case 0x123918u: goto label_123918;
            case 0x12391Cu: goto label_12391c;
            case 0x123920u: goto label_123920;
            case 0x123924u: goto label_123924;
            case 0x123928u: goto label_123928;
            case 0x12392Cu: goto label_12392c;
            case 0x123930u: goto label_123930;
            case 0x123934u: goto label_123934;
            case 0x123938u: goto label_123938;
            case 0x12393Cu: goto label_12393c;
            case 0x123940u: goto label_123940;
            case 0x123944u: goto label_123944;
            case 0x123948u: goto label_123948;
            case 0x12394Cu: goto label_12394c;
            case 0x123950u: goto label_123950;
            case 0x123954u: goto label_123954;
            case 0x123958u: goto label_123958;
            case 0x12395Cu: goto label_12395c;
            case 0x123960u: goto label_123960;
            case 0x123964u: goto label_123964;
            case 0x123968u: goto label_123968;
            case 0x12396Cu: goto label_12396c;
            case 0x123970u: goto label_123970;
            case 0x123974u: goto label_123974;
            case 0x123978u: goto label_123978;
            case 0x12397Cu: goto label_12397c;
            case 0x123980u: goto label_123980;
            case 0x123984u: goto label_123984;
            case 0x123988u: goto label_123988;
            case 0x12398Cu: goto label_12398c;
            case 0x123990u: goto label_123990;
            case 0x123994u: goto label_123994;
            case 0x123998u: goto label_123998;
            case 0x12399Cu: goto label_12399c;
            case 0x1239A0u: goto label_1239a0;
            case 0x1239A4u: goto label_1239a4;
            case 0x1239A8u: goto label_1239a8;
            case 0x1239ACu: goto label_1239ac;
            case 0x1239B0u: goto label_1239b0;
            case 0x1239B4u: goto label_1239b4;
            case 0x1239B8u: goto label_1239b8;
            case 0x1239BCu: goto label_1239bc;
            case 0x1239C0u: goto label_1239c0;
            case 0x1239C4u: goto label_1239c4;
            case 0x1239C8u: goto label_1239c8;
            case 0x1239CCu: goto label_1239cc;
            case 0x1239D0u: goto label_1239d0;
            case 0x1239D4u: goto label_1239d4;
            case 0x1239D8u: goto label_1239d8;
            case 0x1239DCu: goto label_1239dc;
            case 0x1239E0u: goto label_1239e0;
            case 0x1239E4u: goto label_1239e4;
            case 0x1239E8u: goto label_1239e8;
            case 0x1239ECu: goto label_1239ec;
            case 0x1239F0u: goto label_1239f0;
            case 0x1239F4u: goto label_1239f4;
            case 0x1239F8u: goto label_1239f8;
            case 0x1239FCu: goto label_1239fc;
            case 0x123A00u: goto label_123a00;
            case 0x123A04u: goto label_123a04;
            case 0x123A08u: goto label_123a08;
            case 0x123A0Cu: goto label_123a0c;
            case 0x123A10u: goto label_123a10;
            case 0x123A14u: goto label_123a14;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1238ECu; }
            if (ctx->pc != 0x1238ECu) { return; }
        }
    }
    ctx->pc = 0x1238ECu;
label_1238ec:
    // 0x1238ec: 0x8e240018
    ctx->pc = 0x1238ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1238f0:
    // 0x1238f0: 0x8e290020
    ctx->pc = 0x1238f0u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1238f4:
    // 0x1238f4: 0x24060002
    ctx->pc = 0x1238f4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
label_1238f8:
    // 0x1238f8: 0x8e230024
    ctx->pc = 0x1238f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1238fc:
    // 0x1238fc: 0x894023
    ctx->pc = 0x1238fcu;
    SET_GPR_U32(ctx, 8, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_123900:
    // 0x123900: 0x8204000e
    ctx->pc = 0x123900u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_123904:
    // 0x123904: 0x68102a
    ctx->pc = 0x123904u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 8)));
label_123908:
    // 0x123908: 0x8e250004
    ctx->pc = 0x123908u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12390c:
    // 0x12390c: 0x62400b
    ctx->pc = 0x12390cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 8, GPR_U32(ctx, 3));
label_123910:
    // 0x123910: 0x91840
    ctx->pc = 0x123910u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 9), 1));
label_123914:
    // 0x123914: 0x8e2b0014
    ctx->pc = 0x123914u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_123918:
    // 0x123918: 0xa8102a
    ctx->pc = 0x123918u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 8)));
label_12391c:
    // 0x12391c: 0xa2400b
    ctx->pc = 0x12391cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 8, GPR_U32(ctx, 5));
label_123920:
    // 0x123920: 0x1635021
    ctx->pc = 0x123920u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_123924:
    // 0x123924: 0x14860018
label_123928:
    if (ctx->pc == 0x123928u) {
        ctx->pc = 0x123928u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x12392Cu;
        goto label_12392c;
    }
    ctx->pc = 0x123924u;
    {
        const bool branch_taken_0x123924 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 6));
        ctx->pc = 0x123928u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        if (branch_taken_0x123924) {
            ctx->pc = 0x123988u;
            goto label_123988;
        }
    }
    ctx->pc = 0x12392Cu;
label_12392c:
    // 0x12392c: 0x8e22001c
    ctx->pc = 0x12392cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_123930:
    // 0x123930: 0x382d
    ctx->pc = 0x123930u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123934:
    // 0x123934: 0x491021
    ctx->pc = 0x123934u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_123938:
    // 0x123938: 0x21040
    ctx->pc = 0x123938u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_12393c:
    // 0x12393c: 0x1900001f
label_123940:
    if (ctx->pc == 0x123940u) {
        ctx->pc = 0x123940u;
        SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->pc = 0x123944u;
        goto label_123944;
    }
    ctx->pc = 0x12393Cu;
    {
        const bool branch_taken_0x12393c = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x123940u;
        SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        if (branch_taken_0x12393c) {
            ctx->pc = 0x1239BCu;
            goto label_1239bc;
        }
    }
    ctx->pc = 0x123944u;
label_123944:
    // 0x123944: 0x240302d
    ctx->pc = 0x123944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_123948:
    // 0x123948: 0x90c20000
    ctx->pc = 0x123948u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_12394c:
    // 0x12394c: 0x71840
    ctx->pc = 0x12394cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 1));
label_123950:
    // 0x123950: 0x6a2021
    ctx->pc = 0x123950u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_123954:
    // 0x123954: 0x691821
    ctx->pc = 0x123954u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_123958:
    // 0x123958: 0x21200
    ctx->pc = 0x123958u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
label_12395c:
    // 0x12395c: 0x24e70001
    ctx->pc = 0x12395cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_123960:
    // 0x123960: 0xa4820000
    ctx->pc = 0x123960u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_123964:
    // 0x123964: 0xe8282a
    ctx->pc = 0x123964u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 8)));
label_123968:
    // 0x123968: 0x90c20001
    ctx->pc = 0x123968u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_12396c:
    // 0x12396c: 0x24c60002
    ctx->pc = 0x12396cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
label_123970:
    // 0x123970: 0x21200
    ctx->pc = 0x123970u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
label_123974:
    // 0x123974: 0x14a0fff4
label_123978:
    if (ctx->pc == 0x123978u) {
        ctx->pc = 0x123978u;
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x12397Cu;
        goto label_12397c;
    }
    ctx->pc = 0x123974u;
    {
        const bool branch_taken_0x123974 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x123978u;
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x123974) {
            ctx->pc = 0x123948u;
            goto label_123948;
        }
    }
    ctx->pc = 0x12397Cu;
label_12397c:
    // 0x12397c: 0x1000000f
label_123980:
    if (ctx->pc == 0x123980u) {
        ctx->pc = 0x123980u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x123984u;
        goto label_123984;
    }
    ctx->pc = 0x12397Cu;
    {
        const bool branch_taken_0x12397c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x123980u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        if (branch_taken_0x12397c) {
            ctx->pc = 0x1239BCu;
            goto label_1239bc;
        }
    }
    ctx->pc = 0x123984u;
label_123984:
    // 0x123984: 0x0
    ctx->pc = 0x123984u;
    // NOP
label_123988:
    // 0x123988: 0x1900000c
label_12398c:
    if (ctx->pc == 0x12398Cu) {
        ctx->pc = 0x12398Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x123990u;
        goto label_123990;
    }
    ctx->pc = 0x123988u;
    {
        const bool branch_taken_0x123988 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x12398Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x123988) {
            ctx->pc = 0x1239BCu;
            goto label_1239bc;
        }
    }
    ctx->pc = 0x123990u;
label_123990:
    // 0x123990: 0x140282d
    ctx->pc = 0x123990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_123994:
    // 0x123994: 0x0
    ctx->pc = 0x123994u;
    // NOP
label_123998:
    // 0x123998: 0x2471021
    ctx->pc = 0x123998u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
label_12399c:
    // 0x12399c: 0x24e70001
    ctx->pc = 0x12399cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_1239a0:
    // 0x1239a0: 0x90430000
    ctx->pc = 0x1239a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1239a4:
    // 0x1239a4: 0xe8202a
    ctx->pc = 0x1239a4u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 8)));
label_1239a8:
    // 0x1239a8: 0x31a00
    ctx->pc = 0x1239a8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
label_1239ac:
    // 0x1239ac: 0xa4a30000
    ctx->pc = 0x1239acu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_1239b0:
    // 0x1239b0: 0x1480fff9
label_1239b4:
    if (ctx->pc == 0x1239B4u) {
        ctx->pc = 0x1239B4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x1239B8u;
        goto label_1239b8;
    }
    ctx->pc = 0x1239B0u;
    {
        const bool branch_taken_0x1239b0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1239B4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
        if (branch_taken_0x1239b0) {
            ctx->pc = 0x123998u;
            goto label_123998;
        }
    }
    ctx->pc = 0x1239B8u;
label_1239b8:
    // 0x1239b8: 0x9203000e
    ctx->pc = 0x1239b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1239bc:
    // 0x1239bc: 0x31600
    ctx->pc = 0x1239bcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 24));
label_1239c0:
    // 0x1239c0: 0x24030002
    ctx->pc = 0x1239c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_1239c4:
    // 0x1239c4: 0x21603
    ctx->pc = 0x1239c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_1239c8:
    // 0x1239c8: 0xae030004
    ctx->pc = 0x1239c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1239cc:
    // 0x1239cc: 0x1021018
    ctx->pc = 0x1239ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_1239d0:
    // 0x1239d0: 0xae080090
    ctx->pc = 0x1239d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 8));
label_1239d4:
    // 0x1239d4: 0xae020094
    ctx->pc = 0x1239d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_1239d8:
    // 0x1239d8: 0x24020002
    ctx->pc = 0x1239d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_1239dc:
    // 0x1239dc: 0x54620009
label_1239e0:
    if (ctx->pc == 0x1239E0u) {
        ctx->pc = 0x1239E0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1239E4u;
        goto label_1239e4;
    }
    ctx->pc = 0x1239DCu;
    {
        const bool branch_taken_0x1239dc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1239dc) {
            ctx->pc = 0x1239E0u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x123A04u;
            goto label_123a04;
        }
    }
    ctx->pc = 0x1239E4u;
label_1239e4:
    // 0x1239e4: 0x8e030080
    ctx->pc = 0x1239e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_1239e8:
    // 0x1239e8: 0x8e040084
    ctx->pc = 0x1239e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1239ec:
    // 0x1239ec: 0x8e050094
    ctx->pc = 0x1239ecu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1239f0:
    // 0x1239f0: 0x60f809
label_1239f4:
    if (ctx->pc == 0x1239F4u) {
        ctx->pc = 0x1239F4u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = 0x1239F8u;
        goto label_1239f8;
    }
    ctx->pc = 0x1239F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1239F8u);
        ctx->pc = 0x1239F4u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x123898u: goto label_123898;
            case 0x12389Cu: goto label_12389c;
            case 0x1238A0u: goto label_1238a0;
            case 0x1238A4u: goto label_1238a4;
            case 0x1238A8u: goto label_1238a8;
            case 0x1238ACu: goto label_1238ac;
            case 0x1238B0u: goto label_1238b0;
            case 0x1238B4u: goto label_1238b4;
            case 0x1238B8u: goto label_1238b8;
            case 0x1238BCu: goto label_1238bc;
            case 0x1238C0u: goto label_1238c0;
            case 0x1238C4u: goto label_1238c4;
            case 0x1238C8u: goto label_1238c8;
            case 0x1238CCu: goto label_1238cc;
            case 0x1238D0u: goto label_1238d0;
            case 0x1238D4u: goto label_1238d4;
            case 0x1238D8u: goto label_1238d8;
            case 0x1238DCu: goto label_1238dc;
            case 0x1238E0u: goto label_1238e0;
            case 0x1238E4u: goto label_1238e4;
            case 0x1238E8u: goto label_1238e8;
            case 0x1238ECu: goto label_1238ec;
            case 0x1238F0u: goto label_1238f0;
            case 0x1238F4u: goto label_1238f4;
            case 0x1238F8u: goto label_1238f8;
            case 0x1238FCu: goto label_1238fc;
            case 0x123900u: goto label_123900;
            case 0x123904u: goto label_123904;
            case 0x123908u: goto label_123908;
            case 0x12390Cu: goto label_12390c;
            case 0x123910u: goto label_123910;
            case 0x123914u: goto label_123914;
            case 0x123918u: goto label_123918;
            case 0x12391Cu: goto label_12391c;
            case 0x123920u: goto label_123920;
            case 0x123924u: goto label_123924;
            case 0x123928u: goto label_123928;
            case 0x12392Cu: goto label_12392c;
            case 0x123930u: goto label_123930;
            case 0x123934u: goto label_123934;
            case 0x123938u: goto label_123938;
            case 0x12393Cu: goto label_12393c;
            case 0x123940u: goto label_123940;
            case 0x123944u: goto label_123944;
            case 0x123948u: goto label_123948;
            case 0x12394Cu: goto label_12394c;
            case 0x123950u: goto label_123950;
            case 0x123954u: goto label_123954;
            case 0x123958u: goto label_123958;
            case 0x12395Cu: goto label_12395c;
            case 0x123960u: goto label_123960;
            case 0x123964u: goto label_123964;
            case 0x123968u: goto label_123968;
            case 0x12396Cu: goto label_12396c;
            case 0x123970u: goto label_123970;
            case 0x123974u: goto label_123974;
            case 0x123978u: goto label_123978;
            case 0x12397Cu: goto label_12397c;
            case 0x123980u: goto label_123980;
            case 0x123984u: goto label_123984;
            case 0x123988u: goto label_123988;
            case 0x12398Cu: goto label_12398c;
            case 0x123990u: goto label_123990;
            case 0x123994u: goto label_123994;
            case 0x123998u: goto label_123998;
            case 0x12399Cu: goto label_12399c;
            case 0x1239A0u: goto label_1239a0;
            case 0x1239A4u: goto label_1239a4;
            case 0x1239A8u: goto label_1239a8;
            case 0x1239ACu: goto label_1239ac;
            case 0x1239B0u: goto label_1239b0;
            case 0x1239B4u: goto label_1239b4;
            case 0x1239B8u: goto label_1239b8;
            case 0x1239BCu: goto label_1239bc;
            case 0x1239C0u: goto label_1239c0;
            case 0x1239C4u: goto label_1239c4;
            case 0x1239C8u: goto label_1239c8;
            case 0x1239CCu: goto label_1239cc;
            case 0x1239D0u: goto label_1239d0;
            case 0x1239D4u: goto label_1239d4;
            case 0x1239D8u: goto label_1239d8;
            case 0x1239DCu: goto label_1239dc;
            case 0x1239E0u: goto label_1239e0;
            case 0x1239E4u: goto label_1239e4;
            case 0x1239E8u: goto label_1239e8;
            case 0x1239ECu: goto label_1239ec;
            case 0x1239F0u: goto label_1239f0;
            case 0x1239F4u: goto label_1239f4;
            case 0x1239F8u: goto label_1239f8;
            case 0x1239FCu: goto label_1239fc;
            case 0x123A00u: goto label_123a00;
            case 0x123A04u: goto label_123a04;
            case 0x123A08u: goto label_123a08;
            case 0x123A0Cu: goto label_123a0c;
            case 0x123A10u: goto label_123a10;
            case 0x123A14u: goto label_123a14;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1239F8u; }
            if (ctx->pc != 0x1239F8u) { return; }
        }
    }
    ctx->pc = 0x1239F8u;
label_1239f8:
    // 0x1239f8: 0x24020003
    ctx->pc = 0x1239f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_1239fc:
    // 0x1239fc: 0xae020004
    ctx->pc = 0x1239fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_123a00:
    // 0x123a00: 0xdfb00000
    ctx->pc = 0x123a00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_123a04:
    // 0x123a04: 0xdfb10008
    ctx->pc = 0x123a04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_123a08:
    // 0x123a08: 0xdfb20010
    ctx->pc = 0x123a08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_123a0c:
    // 0x123a0c: 0xdfbf0018
    ctx->pc = 0x123a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_123a10:
    // 0x123a10: 0x3e00008
label_123a14:
    if (ctx->pc == 0x123A14u) {
        ctx->pc = 0x123A14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x123A18u;
        goto label_fallthrough_0x123a10;
    }
    ctx->pc = 0x123A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123A14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x123898u: goto label_123898;
            case 0x12389Cu: goto label_12389c;
            case 0x1238A0u: goto label_1238a0;
            case 0x1238A4u: goto label_1238a4;
            case 0x1238A8u: goto label_1238a8;
            case 0x1238ACu: goto label_1238ac;
            case 0x1238B0u: goto label_1238b0;
            case 0x1238B4u: goto label_1238b4;
            case 0x1238B8u: goto label_1238b8;
            case 0x1238BCu: goto label_1238bc;
            case 0x1238C0u: goto label_1238c0;
            case 0x1238C4u: goto label_1238c4;
            case 0x1238C8u: goto label_1238c8;
            case 0x1238CCu: goto label_1238cc;
            case 0x1238D0u: goto label_1238d0;
            case 0x1238D4u: goto label_1238d4;
            case 0x1238D8u: goto label_1238d8;
            case 0x1238DCu: goto label_1238dc;
            case 0x1238E0u: goto label_1238e0;
            case 0x1238E4u: goto label_1238e4;
            case 0x1238E8u: goto label_1238e8;
            case 0x1238ECu: goto label_1238ec;
            case 0x1238F0u: goto label_1238f0;
            case 0x1238F4u: goto label_1238f4;
            case 0x1238F8u: goto label_1238f8;
            case 0x1238FCu: goto label_1238fc;
            case 0x123900u: goto label_123900;
            case 0x123904u: goto label_123904;
            case 0x123908u: goto label_123908;
            case 0x12390Cu: goto label_12390c;
            case 0x123910u: goto label_123910;
            case 0x123914u: goto label_123914;
            case 0x123918u: goto label_123918;
            case 0x12391Cu: goto label_12391c;
            case 0x123920u: goto label_123920;
            case 0x123924u: goto label_123924;
            case 0x123928u: goto label_123928;
            case 0x12392Cu: goto label_12392c;
            case 0x123930u: goto label_123930;
            case 0x123934u: goto label_123934;
            case 0x123938u: goto label_123938;
            case 0x12393Cu: goto label_12393c;
            case 0x123940u: goto label_123940;
            case 0x123944u: goto label_123944;
            case 0x123948u: goto label_123948;
            case 0x12394Cu: goto label_12394c;
            case 0x123950u: goto label_123950;
            case 0x123954u: goto label_123954;
            case 0x123958u: goto label_123958;
            case 0x12395Cu: goto label_12395c;
            case 0x123960u: goto label_123960;
            case 0x123964u: goto label_123964;
            case 0x123968u: goto label_123968;
            case 0x12396Cu: goto label_12396c;
            case 0x123970u: goto label_123970;
            case 0x123974u: goto label_123974;
            case 0x123978u: goto label_123978;
            case 0x12397Cu: goto label_12397c;
            case 0x123980u: goto label_123980;
            case 0x123984u: goto label_123984;
            case 0x123988u: goto label_123988;
            case 0x12398Cu: goto label_12398c;
            case 0x123990u: goto label_123990;
            case 0x123994u: goto label_123994;
            case 0x123998u: goto label_123998;
            case 0x12399Cu: goto label_12399c;
            case 0x1239A0u: goto label_1239a0;
            case 0x1239A4u: goto label_1239a4;
            case 0x1239A8u: goto label_1239a8;
            case 0x1239ACu: goto label_1239ac;
            case 0x1239B0u: goto label_1239b0;
            case 0x1239B4u: goto label_1239b4;
            case 0x1239B8u: goto label_1239b8;
            case 0x1239BCu: goto label_1239bc;
            case 0x1239C0u: goto label_1239c0;
            case 0x1239C4u: goto label_1239c4;
            case 0x1239C8u: goto label_1239c8;
            case 0x1239CCu: goto label_1239cc;
            case 0x1239D0u: goto label_1239d0;
            case 0x1239D4u: goto label_1239d4;
            case 0x1239D8u: goto label_1239d8;
            case 0x1239DCu: goto label_1239dc;
            case 0x1239E0u: goto label_1239e0;
            case 0x1239E4u: goto label_1239e4;
            case 0x1239E8u: goto label_1239e8;
            case 0x1239ECu: goto label_1239ec;
            case 0x1239F0u: goto label_1239f0;
            case 0x1239F4u: goto label_1239f4;
            case 0x1239F8u: goto label_1239f8;
            case 0x1239FCu: goto label_1239fc;
            case 0x123A00u: goto label_123a00;
            case 0x123A04u: goto label_123a04;
            case 0x123A08u: goto label_123a08;
            case 0x123A0Cu: goto label_123a0c;
            case 0x123A10u: goto label_123a10;
            case 0x123A14u: goto label_123a14;
            default: break;
        }
        return;
    }
label_fallthrough_0x123a10:
    ctx->pc = 0x123A18u;
}
