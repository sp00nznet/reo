#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_10b890
// Address: 0x10b890 - 0x10c7a8
void entry_10b890_0x10c7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10b890u;

label_10b890:
    // 0x10b890: 0x27bdff60
    ctx->pc = 0x10b890u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
label_10b894:
    // 0x10b894: 0x382d
    ctx->pc = 0x10b894u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10b898:
    // 0x10b898: 0xffb00050
    ctx->pc = 0x10b898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_10b89c:
    // 0x10b89c: 0x502d
    ctx->pc = 0x10b89cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10b8a0:
    // 0x10b8a0: 0xffb10058
    ctx->pc = 0x10b8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
label_10b8a4:
    // 0x10b8a4: 0xffb20060
    ctx->pc = 0x10b8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_10b8a8:
    // 0x10b8a8: 0xffb40070
    ctx->pc = 0x10b8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_10b8ac:
    // 0x10b8ac: 0xffb50078
    ctx->pc = 0x10b8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
label_10b8b0:
    // 0x10b8b0: 0xffb70088
    ctx->pc = 0x10b8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
label_10b8b4:
    // 0x10b8b4: 0xffbf0098
    ctx->pc = 0x10b8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
label_10b8b8:
    // 0x10b8b8: 0xafa60008
    ctx->pc = 0x10b8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
label_10b8bc:
    // 0x10b8bc: 0xafa0000c
    ctx->pc = 0x10b8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_10b8c0:
    // 0x10b8c0: 0xffb30068
    ctx->pc = 0x10b8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
label_10b8c4:
    // 0x10b8c4: 0x982d
    ctx->pc = 0x10b8c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10b8c8:
    // 0x10b8c8: 0xffb60080
    ctx->pc = 0x10b8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_10b8cc:
    // 0x10b8cc: 0xa0b02d
    ctx->pc = 0x10b8ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10b8d0:
    // 0x10b8d0: 0xffbe0090
    ctx->pc = 0x10b8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_10b8d4:
    // 0x10b8d4: 0x80f02d
    ctx->pc = 0x10b8d4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10b8d8:
    // 0x10b8d8: 0x82c30000
    ctx->pc = 0x10b8d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_10b8dc:
    // 0x10b8dc: 0x2c62002e
    ctx->pc = 0x10b8dcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 46));
label_10b8e0:
    // 0x10b8e0: 0x10400011
label_10b8e4:
    if (ctx->pc == 0x10B8E4u) {
        ctx->pc = 0x10B8E4u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->pc = 0x10B8E8u;
        goto label_10b8e8;
    }
    ctx->pc = 0x10B8E0u;
    {
        const bool branch_taken_0x10b8e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10B8E4u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        if (branch_taken_0x10b8e0) {
            ctx->pc = 0x10B928u;
            goto label_10b928;
        }
    }
    ctx->pc = 0x10B8E8u;
label_10b8e8:
    // 0x10b8e8: 0x31080
    ctx->pc = 0x10b8e8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_10b8ec:
    // 0x10b8ec: 0x3c030023
    ctx->pc = 0x10b8ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
label_10b8f0:
    // 0x10b8f0: 0x621821
    ctx->pc = 0x10b8f0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10b8f4:
    // 0x10b8f4: 0x8c637a50
    ctx->pc = 0x10b8f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 31312)));
label_10b8f8:
    // 0x10b8f8: 0x600008
label_10b8fc:
    if (ctx->pc == 0x10B8FCu) {
        ctx->pc = 0x10B900u;
        goto label_10b900;
    }
    ctx->pc = 0x10B8F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10B890u: goto label_10b890;
            case 0x10B894u: goto label_10b894;
            case 0x10B898u: goto label_10b898;
            case 0x10B89Cu: goto label_10b89c;
            case 0x10B8A0u: goto label_10b8a0;
            case 0x10B8A4u: goto label_10b8a4;
            case 0x10B8A8u: goto label_10b8a8;
            case 0x10B8ACu: goto label_10b8ac;
            case 0x10B8B0u: goto label_10b8b0;
            case 0x10B8B4u: goto label_10b8b4;
            case 0x10B8B8u: goto label_10b8b8;
            case 0x10B8BCu: goto label_10b8bc;
            case 0x10B8C0u: goto label_10b8c0;
            case 0x10B8C4u: goto label_10b8c4;
            case 0x10B8C8u: goto label_10b8c8;
            case 0x10B8CCu: goto label_10b8cc;
            case 0x10B8D0u: goto label_10b8d0;
            case 0x10B8D4u: goto label_10b8d4;
            case 0x10B8D8u: goto label_10b8d8;
            case 0x10B8DCu: goto label_10b8dc;
            case 0x10B8E0u: goto label_10b8e0;
            case 0x10B8E4u: goto label_10b8e4;
            case 0x10B8E8u: goto label_10b8e8;
            case 0x10B8ECu: goto label_10b8ec;
            case 0x10B8F0u: goto label_10b8f0;
            case 0x10B8F4u: goto label_10b8f4;
            case 0x10B8F8u: goto label_10b8f8;
            case 0x10B8FCu: goto label_10b8fc;
            case 0x10B900u: goto label_10b900;
            case 0x10B904u: goto label_10b904;
            case 0x10B908u: goto label_10b908;
            case 0x10B90Cu: goto label_10b90c;
            case 0x10B910u: goto label_10b910;
            case 0x10B914u: goto label_10b914;
            case 0x10B918u: goto label_10b918;
            case 0x10B91Cu: goto label_10b91c;
            case 0x10B920u: goto label_10b920;
            case 0x10B924u: goto label_10b924;
            case 0x10B928u: goto label_10b928;
            case 0x10B92Cu: goto label_10b92c;
            case 0x10B930u: goto label_10b930;
            case 0x10B934u: goto label_10b934;
            case 0x10B938u: goto label_10b938;
            case 0x10B93Cu: goto label_10b93c;
            case 0x10B940u: goto label_10b940;
            case 0x10B944u: goto label_10b944;
            case 0x10B948u: goto label_10b948;
            case 0x10B94Cu: goto label_10b94c;
            case 0x10B950u: goto label_10b950;
            case 0x10B954u: goto label_10b954;
            case 0x10B958u: goto label_10b958;
            case 0x10B95Cu: goto label_10b95c;
            case 0x10B960u: goto label_10b960;
            case 0x10B964u: goto label_10b964;
            case 0x10B968u: goto label_10b968;
            case 0x10B96Cu: goto label_10b96c;
            case 0x10B970u: goto label_10b970;
            case 0x10B974u: goto label_10b974;
            case 0x10B978u: goto label_10b978;
            case 0x10B97Cu: goto label_10b97c;
            case 0x10B980u: goto label_10b980;
            case 0x10B984u: goto label_10b984;
            case 0x10B988u: goto label_10b988;
            case 0x10B98Cu: goto label_10b98c;
            case 0x10B990u: goto label_10b990;
            case 0x10B994u: goto label_10b994;
            case 0x10B998u: goto label_10b998;
            case 0x10B99Cu: goto label_10b99c;
            case 0x10B9A0u: goto label_10b9a0;
            case 0x10B9A4u: goto label_10b9a4;
            case 0x10B9A8u: goto label_10b9a8;
            case 0x10B9ACu: goto label_10b9ac;
            case 0x10B9B0u: goto label_10b9b0;
            case 0x10B9B4u: goto label_10b9b4;
            case 0x10B9B8u: goto label_10b9b8;
            case 0x10B9BCu: goto label_10b9bc;
            case 0x10B9C0u: goto label_10b9c0;
            case 0x10B9C4u: goto label_10b9c4;
            case 0x10B9C8u: goto label_10b9c8;
            case 0x10B9CCu: goto label_10b9cc;
            case 0x10B9D0u: goto label_10b9d0;
            case 0x10B9D4u: goto label_10b9d4;
            case 0x10B9D8u: goto label_10b9d8;
            case 0x10B9DCu: goto label_10b9dc;
            case 0x10B9E0u: goto label_10b9e0;
            case 0x10B9E4u: goto label_10b9e4;
            case 0x10B9E8u: goto label_10b9e8;
            case 0x10B9ECu: goto label_10b9ec;
            case 0x10B9F0u: goto label_10b9f0;
            case 0x10B9F4u: goto label_10b9f4;
            case 0x10B9F8u: goto label_10b9f8;
            case 0x10B9FCu: goto label_10b9fc;
            case 0x10BA00u: goto label_10ba00;
            case 0x10BA04u: goto label_10ba04;
            case 0x10BA08u: goto label_10ba08;
            case 0x10BA0Cu: goto label_10ba0c;
            case 0x10BA10u: goto label_10ba10;
            case 0x10BA14u: goto label_10ba14;
            case 0x10BA18u: goto label_10ba18;
            case 0x10BA1Cu: goto label_10ba1c;
            case 0x10BA20u: goto label_10ba20;
            case 0x10BA24u: goto label_10ba24;
            case 0x10BA28u: goto label_10ba28;
            case 0x10BA2Cu: goto label_10ba2c;
            case 0x10BA30u: goto label_10ba30;
            case 0x10BA34u: goto label_10ba34;
            case 0x10BA38u: goto label_10ba38;
            case 0x10BA3Cu: goto label_10ba3c;
            case 0x10BA40u: goto label_10ba40;
            case 0x10BA44u: goto label_10ba44;
            case 0x10BA48u: goto label_10ba48;
            case 0x10BA4Cu: goto label_10ba4c;
            case 0x10BA50u: goto label_10ba50;
            case 0x10BA54u: goto label_10ba54;
            case 0x10BA58u: goto label_10ba58;
            case 0x10BA5Cu: goto label_10ba5c;
            case 0x10BA60u: goto label_10ba60;
            case 0x10BA64u: goto label_10ba64;
            case 0x10BA68u: goto label_10ba68;
            case 0x10BA6Cu: goto label_10ba6c;
            case 0x10BA70u: goto label_10ba70;
            case 0x10BA74u: goto label_10ba74;
            case 0x10BA78u: goto label_10ba78;
            case 0x10BA7Cu: goto label_10ba7c;
            case 0x10BA80u: goto label_10ba80;
            case 0x10BA84u: goto label_10ba84;
            case 0x10BA88u: goto label_10ba88;
            case 0x10BA8Cu: goto label_10ba8c;
            case 0x10BA90u: goto label_10ba90;
            case 0x10BA94u: goto label_10ba94;
            case 0x10BA98u: goto label_10ba98;
            case 0x10BA9Cu: goto label_10ba9c;
            case 0x10BAA0u: goto label_10baa0;
            case 0x10BAA4u: goto label_10baa4;
            case 0x10BAA8u: goto label_10baa8;
            case 0x10BAACu: goto label_10baac;
            case 0x10BAB0u: goto label_10bab0;
            case 0x10BAB4u: goto label_10bab4;
            case 0x10BAB8u: goto label_10bab8;
            case 0x10BABCu: goto label_10babc;
            case 0x10BAC0u: goto label_10bac0;
            case 0x10BAC4u: goto label_10bac4;
            case 0x10BAC8u: goto label_10bac8;
            case 0x10BACCu: goto label_10bacc;
            case 0x10BAD0u: goto label_10bad0;
            case 0x10BAD4u: goto label_10bad4;
            case 0x10BAD8u: goto label_10bad8;
            case 0x10BADCu: goto label_10badc;
            case 0x10BAE0u: goto label_10bae0;
            case 0x10BAE4u: goto label_10bae4;
            case 0x10BAE8u: goto label_10bae8;
            case 0x10BAECu: goto label_10baec;
            case 0x10BAF0u: goto label_10baf0;
            case 0x10BAF4u: goto label_10baf4;
            case 0x10BAF8u: goto label_10baf8;
            case 0x10BAFCu: goto label_10bafc;
            case 0x10BB00u: goto label_10bb00;
            case 0x10BB04u: goto label_10bb04;
            case 0x10BB08u: goto label_10bb08;
            case 0x10BB0Cu: goto label_10bb0c;
            case 0x10BB10u: goto label_10bb10;
            case 0x10BB14u: goto label_10bb14;
            case 0x10BB18u: goto label_10bb18;
            case 0x10BB1Cu: goto label_10bb1c;
            case 0x10BB20u: goto label_10bb20;
            case 0x10BB24u: goto label_10bb24;
            case 0x10BB28u: goto label_10bb28;
            case 0x10BB2Cu: goto label_10bb2c;
            case 0x10BB30u: goto label_10bb30;
            case 0x10BB34u: goto label_10bb34;
            case 0x10BB38u: goto label_10bb38;
            case 0x10BB3Cu: goto label_10bb3c;
            case 0x10BB40u: goto label_10bb40;
            case 0x10BB44u: goto label_10bb44;
            case 0x10BB48u: goto label_10bb48;
            case 0x10BB4Cu: goto label_10bb4c;
            case 0x10BB50u: goto label_10bb50;
            case 0x10BB54u: goto label_10bb54;
            case 0x10BB58u: goto label_10bb58;
            case 0x10BB5Cu: goto label_10bb5c;
            case 0x10BB60u: goto label_10bb60;
            case 0x10BB64u: goto label_10bb64;
            case 0x10BB68u: goto label_10bb68;
            case 0x10BB6Cu: goto label_10bb6c;
            case 0x10BB70u: goto label_10bb70;
            case 0x10BB74u: goto label_10bb74;
            case 0x10BB78u: goto label_10bb78;
            case 0x10BB7Cu: goto label_10bb7c;
            case 0x10BB80u: goto label_10bb80;
            case 0x10BB84u: goto label_10bb84;
            case 0x10BB88u: goto label_10bb88;
            case 0x10BB8Cu: goto label_10bb8c;
            case 0x10BB90u: goto label_10bb90;
            case 0x10BB94u: goto label_10bb94;
            case 0x10BB98u: goto label_10bb98;
            case 0x10BB9Cu: goto label_10bb9c;
            case 0x10BBA0u: goto label_10bba0;
            case 0x10BBA4u: goto label_10bba4;
            case 0x10BBA8u: goto label_10bba8;
            case 0x10BBACu: goto label_10bbac;
            case 0x10BBB0u: goto label_10bbb0;
            case 0x10BBB4u: goto label_10bbb4;
            case 0x10BBB8u: goto label_10bbb8;
            case 0x10BBBCu: goto label_10bbbc;
            case 0x10BBC0u: goto label_10bbc0;
            case 0x10BBC4u: goto label_10bbc4;
            case 0x10BBC8u: goto label_10bbc8;
            case 0x10BBCCu: goto label_10bbcc;
            case 0x10BBD0u: goto label_10bbd0;
            case 0x10BBD4u: goto label_10bbd4;
            case 0x10BBD8u: goto label_10bbd8;
            case 0x10BBDCu: goto label_10bbdc;
            case 0x10BBE0u: goto label_10bbe0;
            case 0x10BBE4u: goto label_10bbe4;
            case 0x10BBE8u: goto label_10bbe8;
            case 0x10BBECu: goto label_10bbec;
            case 0x10BBF0u: goto label_10bbf0;
            case 0x10BBF4u: goto label_10bbf4;
            case 0x10BBF8u: goto label_10bbf8;
            case 0x10BBFCu: goto label_10bbfc;
            case 0x10BC00u: goto label_10bc00;
            case 0x10BC04u: goto label_10bc04;
            case 0x10BC08u: goto label_10bc08;
            case 0x10BC0Cu: goto label_10bc0c;
            case 0x10BC10u: goto label_10bc10;
            case 0x10BC14u: goto label_10bc14;
            case 0x10BC18u: goto label_10bc18;
            case 0x10BC1Cu: goto label_10bc1c;
            case 0x10BC20u: goto label_10bc20;
            case 0x10BC24u: goto label_10bc24;
            case 0x10BC28u: goto label_10bc28;
            case 0x10BC2Cu: goto label_10bc2c;
            case 0x10BC30u: goto label_10bc30;
            case 0x10BC34u: goto label_10bc34;
            case 0x10BC38u: goto label_10bc38;
            case 0x10BC3Cu: goto label_10bc3c;
            case 0x10BC40u: goto label_10bc40;
            case 0x10BC44u: goto label_10bc44;
            case 0x10BC48u: goto label_10bc48;
            case 0x10BC4Cu: goto label_10bc4c;
            case 0x10BC50u: goto label_10bc50;
            case 0x10BC54u: goto label_10bc54;
            case 0x10BC58u: goto label_10bc58;
            case 0x10BC5Cu: goto label_10bc5c;
            case 0x10BC60u: goto label_10bc60;
            case 0x10BC64u: goto label_10bc64;
            case 0x10BC68u: goto label_10bc68;
            case 0x10BC6Cu: goto label_10bc6c;
            case 0x10BC70u: goto label_10bc70;
            case 0x10BC74u: goto label_10bc74;
            case 0x10BC78u: goto label_10bc78;
            case 0x10BC7Cu: goto label_10bc7c;
            case 0x10BC80u: goto label_10bc80;
            case 0x10BC84u: goto label_10bc84;
            case 0x10BC88u: goto label_10bc88;
            case 0x10BC8Cu: goto label_10bc8c;
            case 0x10BC90u: goto label_10bc90;
            case 0x10BC94u: goto label_10bc94;
            case 0x10BC98u: goto label_10bc98;
            case 0x10BC9Cu: goto label_10bc9c;
            case 0x10BCA0u: goto label_10bca0;
            case 0x10BCA4u: goto label_10bca4;
            case 0x10BCA8u: goto label_10bca8;
            case 0x10BCACu: goto label_10bcac;
            case 0x10BCB0u: goto label_10bcb0;
            case 0x10BCB4u: goto label_10bcb4;
            case 0x10BCB8u: goto label_10bcb8;
            case 0x10BCBCu: goto label_10bcbc;
            case 0x10BCC0u: goto label_10bcc0;
            case 0x10BCC4u: goto label_10bcc4;
            case 0x10BCC8u: goto label_10bcc8;
            case 0x10BCCCu: goto label_10bccc;
            case 0x10BCD0u: goto label_10bcd0;
            case 0x10BCD4u: goto label_10bcd4;
            case 0x10BCD8u: goto label_10bcd8;
            case 0x10BCDCu: goto label_10bcdc;
            case 0x10BCE0u: goto label_10bce0;
            case 0x10BCE4u: goto label_10bce4;
            case 0x10BCE8u: goto label_10bce8;
            case 0x10BCECu: goto label_10bcec;
            case 0x10BCF0u: goto label_10bcf0;
            case 0x10BCF4u: goto label_10bcf4;
            case 0x10BCF8u: goto label_10bcf8;
            case 0x10BCFCu: goto label_10bcfc;
            case 0x10BD00u: goto label_10bd00;
            case 0x10BD04u: goto label_10bd04;
            case 0x10BD08u: goto label_10bd08;
            case 0x10BD0Cu: goto label_10bd0c;
            case 0x10BD10u: goto label_10bd10;
            case 0x10BD14u: goto label_10bd14;
            case 0x10BD18u: goto label_10bd18;
            case 0x10BD1Cu: goto label_10bd1c;
            case 0x10BD20u: goto label_10bd20;
            case 0x10BD24u: goto label_10bd24;
            case 0x10BD28u: goto label_10bd28;
            case 0x10BD2Cu: goto label_10bd2c;
            case 0x10BD30u: goto label_10bd30;
            case 0x10BD34u: goto label_10bd34;
            case 0x10BD38u: goto label_10bd38;
            case 0x10BD3Cu: goto label_10bd3c;
            case 0x10BD40u: goto label_10bd40;
            case 0x10BD44u: goto label_10bd44;
            case 0x10BD48u: goto label_10bd48;
            case 0x10BD4Cu: goto label_10bd4c;
            case 0x10BD50u: goto label_10bd50;
            case 0x10BD54u: goto label_10bd54;
            case 0x10BD58u: goto label_10bd58;
            case 0x10BD5Cu: goto label_10bd5c;
            case 0x10BD60u: goto label_10bd60;
            case 0x10BD64u: goto label_10bd64;
            case 0x10BD68u: goto label_10bd68;
            case 0x10BD6Cu: goto label_10bd6c;
            case 0x10BD70u: goto label_10bd70;
            case 0x10BD74u: goto label_10bd74;
            case 0x10BD78u: goto label_10bd78;
            case 0x10BD7Cu: goto label_10bd7c;
            case 0x10BD80u: goto label_10bd80;
            case 0x10BD84u: goto label_10bd84;
            case 0x10BD88u: goto label_10bd88;
            case 0x10BD8Cu: goto label_10bd8c;
            case 0x10BD90u: goto label_10bd90;
            case 0x10BD94u: goto label_10bd94;
            case 0x10BD98u: goto label_10bd98;
            case 0x10BD9Cu: goto label_10bd9c;
            case 0x10BDA0u: goto label_10bda0;
            case 0x10BDA4u: goto label_10bda4;
            case 0x10BDA8u: goto label_10bda8;
            case 0x10BDACu: goto label_10bdac;
            case 0x10BDB0u: goto label_10bdb0;
            case 0x10BDB4u: goto label_10bdb4;
            case 0x10BDB8u: goto label_10bdb8;
            case 0x10BDBCu: goto label_10bdbc;
            case 0x10BDC0u: goto label_10bdc0;
            case 0x10BDC4u: goto label_10bdc4;
            case 0x10BDC8u: goto label_10bdc8;
            case 0x10BDCCu: goto label_10bdcc;
            case 0x10BDD0u: goto label_10bdd0;
            case 0x10BDD4u: goto label_10bdd4;
            case 0x10BDD8u: goto label_10bdd8;
            case 0x10BDDCu: goto label_10bddc;
            case 0x10BDE0u: goto label_10bde0;
            case 0x10BDE4u: goto label_10bde4;
            case 0x10BDE8u: goto label_10bde8;
            case 0x10BDECu: goto label_10bdec;
            case 0x10BDF0u: goto label_10bdf0;
            case 0x10BDF4u: goto label_10bdf4;
            case 0x10BDF8u: goto label_10bdf8;
            case 0x10BDFCu: goto label_10bdfc;
            case 0x10BE00u: goto label_10be00;
            case 0x10BE04u: goto label_10be04;
            case 0x10BE08u: goto label_10be08;
            case 0x10BE0Cu: goto label_10be0c;
            case 0x10BE10u: goto label_10be10;
            case 0x10BE14u: goto label_10be14;
            case 0x10BE18u: goto label_10be18;
            case 0x10BE1Cu: goto label_10be1c;
            case 0x10BE20u: goto label_10be20;
            case 0x10BE24u: goto label_10be24;
            case 0x10BE28u: goto label_10be28;
            case 0x10BE2Cu: goto label_10be2c;
            case 0x10BE30u: goto label_10be30;
            case 0x10BE34u: goto label_10be34;
            case 0x10BE38u: goto label_10be38;
            case 0x10BE3Cu: goto label_10be3c;
            case 0x10BE40u: goto label_10be40;
            case 0x10BE44u: goto label_10be44;
            case 0x10BE48u: goto label_10be48;
            case 0x10BE4Cu: goto label_10be4c;
            case 0x10BE50u: goto label_10be50;
            case 0x10BE54u: goto label_10be54;
            case 0x10BE58u: goto label_10be58;
            case 0x10BE5Cu: goto label_10be5c;
            case 0x10BE60u: goto label_10be60;
            case 0x10BE64u: goto label_10be64;
            case 0x10BE68u: goto label_10be68;
            case 0x10BE6Cu: goto label_10be6c;
            case 0x10BE70u: goto label_10be70;
            case 0x10BE74u: goto label_10be74;
            case 0x10BE78u: goto label_10be78;
            case 0x10BE7Cu: goto label_10be7c;
            case 0x10BE80u: goto label_10be80;
            case 0x10BE84u: goto label_10be84;
            case 0x10BE88u: goto label_10be88;
            case 0x10BE8Cu: goto label_10be8c;
            case 0x10BE90u: goto label_10be90;
            case 0x10BE94u: goto label_10be94;
            case 0x10BE98u: goto label_10be98;
            case 0x10BE9Cu: goto label_10be9c;
            case 0x10BEA0u: goto label_10bea0;
            case 0x10BEA4u: goto label_10bea4;
            case 0x10BEA8u: goto label_10bea8;
            case 0x10BEACu: goto label_10beac;
            case 0x10BEB0u: goto label_10beb0;
            case 0x10BEB4u: goto label_10beb4;
            case 0x10BEB8u: goto label_10beb8;
            case 0x10BEBCu: goto label_10bebc;
            case 0x10BEC0u: goto label_10bec0;
            case 0x10BEC4u: goto label_10bec4;
            case 0x10BEC8u: goto label_10bec8;
            case 0x10BECCu: goto label_10becc;
            case 0x10BED0u: goto label_10bed0;
            case 0x10BED4u: goto label_10bed4;
            case 0x10BED8u: goto label_10bed8;
            case 0x10BEDCu: goto label_10bedc;
            case 0x10BEE0u: goto label_10bee0;
            case 0x10BEE4u: goto label_10bee4;
            case 0x10BEE8u: goto label_10bee8;
            case 0x10BEECu: goto label_10beec;
            case 0x10BEF0u: goto label_10bef0;
            case 0x10BEF4u: goto label_10bef4;
            case 0x10BEF8u: goto label_10bef8;
            case 0x10BEFCu: goto label_10befc;
            case 0x10BF00u: goto label_10bf00;
            case 0x10BF04u: goto label_10bf04;
            case 0x10BF08u: goto label_10bf08;
            case 0x10BF0Cu: goto label_10bf0c;
            case 0x10BF10u: goto label_10bf10;
            case 0x10BF14u: goto label_10bf14;
            case 0x10BF18u: goto label_10bf18;
            case 0x10BF1Cu: goto label_10bf1c;
            case 0x10BF20u: goto label_10bf20;
            case 0x10BF24u: goto label_10bf24;
            case 0x10BF28u: goto label_10bf28;
            case 0x10BF2Cu: goto label_10bf2c;
            case 0x10BF30u: goto label_10bf30;
            case 0x10BF34u: goto label_10bf34;
            case 0x10BF38u: goto label_10bf38;
            case 0x10BF3Cu: goto label_10bf3c;
            case 0x10BF40u: goto label_10bf40;
            case 0x10BF44u: goto label_10bf44;
            case 0x10BF48u: goto label_10bf48;
            case 0x10BF4Cu: goto label_10bf4c;
            case 0x10BF50u: goto label_10bf50;
            case 0x10BF54u: goto label_10bf54;
            case 0x10BF58u: goto label_10bf58;
            case 0x10BF5Cu: goto label_10bf5c;
            case 0x10BF60u: goto label_10bf60;
            case 0x10BF64u: goto label_10bf64;
            case 0x10BF68u: goto label_10bf68;
            case 0x10BF6Cu: goto label_10bf6c;
            case 0x10BF70u: goto label_10bf70;
            case 0x10BF74u: goto label_10bf74;
            case 0x10BF78u: goto label_10bf78;
            case 0x10BF7Cu: goto label_10bf7c;
            case 0x10BF80u: goto label_10bf80;
            case 0x10BF84u: goto label_10bf84;
            case 0x10BF88u: goto label_10bf88;
            case 0x10BF8Cu: goto label_10bf8c;
            case 0x10BF90u: goto label_10bf90;
            case 0x10BF94u: goto label_10bf94;
            case 0x10BF98u: goto label_10bf98;
            case 0x10BF9Cu: goto label_10bf9c;
            case 0x10BFA0u: goto label_10bfa0;
            case 0x10BFA4u: goto label_10bfa4;
            case 0x10BFA8u: goto label_10bfa8;
            case 0x10BFACu: goto label_10bfac;
            case 0x10BFB0u: goto label_10bfb0;
            case 0x10BFB4u: goto label_10bfb4;
            case 0x10BFB8u: goto label_10bfb8;
            case 0x10BFBCu: goto label_10bfbc;
            case 0x10BFC0u: goto label_10bfc0;
            case 0x10BFC4u: goto label_10bfc4;
            case 0x10BFC8u: goto label_10bfc8;
            case 0x10BFCCu: goto label_10bfcc;
            case 0x10BFD0u: goto label_10bfd0;
            case 0x10BFD4u: goto label_10bfd4;
            case 0x10BFD8u: goto label_10bfd8;
            case 0x10BFDCu: goto label_10bfdc;
            case 0x10BFE0u: goto label_10bfe0;
            case 0x10BFE4u: goto label_10bfe4;
            case 0x10BFE8u: goto label_10bfe8;
            case 0x10BFECu: goto label_10bfec;
            case 0x10BFF0u: goto label_10bff0;
            case 0x10BFF4u: goto label_10bff4;
            case 0x10BFF8u: goto label_10bff8;
            case 0x10BFFCu: goto label_10bffc;
            case 0x10C000u: goto label_10c000;
            case 0x10C004u: goto label_10c004;
            case 0x10C008u: goto label_10c008;
            case 0x10C00Cu: goto label_10c00c;
            case 0x10C010u: goto label_10c010;
            case 0x10C014u: goto label_10c014;
            case 0x10C018u: goto label_10c018;
            case 0x10C01Cu: goto label_10c01c;
            case 0x10C020u: goto label_10c020;
            case 0x10C024u: goto label_10c024;
            case 0x10C028u: goto label_10c028;
            case 0x10C02Cu: goto label_10c02c;
            case 0x10C030u: goto label_10c030;
            case 0x10C034u: goto label_10c034;
            case 0x10C038u: goto label_10c038;
            case 0x10C03Cu: goto label_10c03c;
            case 0x10C040u: goto label_10c040;
            case 0x10C044u: goto label_10c044;
            case 0x10C048u: goto label_10c048;
            case 0x10C04Cu: goto label_10c04c;
            case 0x10C050u: goto label_10c050;
            case 0x10C054u: goto label_10c054;
            case 0x10C058u: goto label_10c058;
            case 0x10C05Cu: goto label_10c05c;
            case 0x10C060u: goto label_10c060;
            case 0x10C064u: goto label_10c064;
            case 0x10C068u: goto label_10c068;
            case 0x10C06Cu: goto label_10c06c;
            case 0x10C070u: goto label_10c070;
            case 0x10C074u: goto label_10c074;
            case 0x10C078u: goto label_10c078;
            case 0x10C07Cu: goto label_10c07c;
            case 0x10C080u: goto label_10c080;
            case 0x10C084u: goto label_10c084;
            case 0x10C088u: goto label_10c088;
            case 0x10C08Cu: goto label_10c08c;
            case 0x10C090u: goto label_10c090;
            case 0x10C094u: goto label_10c094;
            case 0x10C098u: goto label_10c098;
            case 0x10C09Cu: goto label_10c09c;
            case 0x10C0A0u: goto label_10c0a0;
            case 0x10C0A4u: goto label_10c0a4;
            case 0x10C0A8u: goto label_10c0a8;
            case 0x10C0ACu: goto label_10c0ac;
            case 0x10C0B0u: goto label_10c0b0;
            case 0x10C0B4u: goto label_10c0b4;
            case 0x10C0B8u: goto label_10c0b8;
            case 0x10C0BCu: goto label_10c0bc;
            case 0x10C0C0u: goto label_10c0c0;
            case 0x10C0C4u: goto label_10c0c4;
            case 0x10C0C8u: goto label_10c0c8;
            case 0x10C0CCu: goto label_10c0cc;
            case 0x10C0D0u: goto label_10c0d0;
            case 0x10C0D4u: goto label_10c0d4;
            case 0x10C0D8u: goto label_10c0d8;
            case 0x10C0DCu: goto label_10c0dc;
            case 0x10C0E0u: goto label_10c0e0;
            case 0x10C0E4u: goto label_10c0e4;
            case 0x10C0E8u: goto label_10c0e8;
            case 0x10C0ECu: goto label_10c0ec;
            case 0x10C0F0u: goto label_10c0f0;
            case 0x10C0F4u: goto label_10c0f4;
            case 0x10C0F8u: goto label_10c0f8;
            case 0x10C0FCu: goto label_10c0fc;
            case 0x10C100u: goto label_10c100;
            case 0x10C104u: goto label_10c104;
            case 0x10C108u: goto label_10c108;
            case 0x10C10Cu: goto label_10c10c;
            case 0x10C110u: goto label_10c110;
            case 0x10C114u: goto label_10c114;
            case 0x10C118u: goto label_10c118;
            case 0x10C11Cu: goto label_10c11c;
            case 0x10C120u: goto label_10c120;
            case 0x10C124u: goto label_10c124;
            case 0x10C128u: goto label_10c128;
            case 0x10C12Cu: goto label_10c12c;
            case 0x10C130u: goto label_10c130;
            case 0x10C134u: goto label_10c134;
            case 0x10C138u: goto label_10c138;
            case 0x10C13Cu: goto label_10c13c;
            case 0x10C140u: goto label_10c140;
            case 0x10C144u: goto label_10c144;
            case 0x10C148u: goto label_10c148;
            case 0x10C14Cu: goto label_10c14c;
            case 0x10C150u: goto label_10c150;
            case 0x10C154u: goto label_10c154;
            case 0x10C158u: goto label_10c158;
            case 0x10C15Cu: goto label_10c15c;
            case 0x10C160u: goto label_10c160;
            case 0x10C164u: goto label_10c164;
            case 0x10C168u: goto label_10c168;
            case 0x10C16Cu: goto label_10c16c;
            case 0x10C170u: goto label_10c170;
            case 0x10C174u: goto label_10c174;
            case 0x10C178u: goto label_10c178;
            case 0x10C17Cu: goto label_10c17c;
            case 0x10C180u: goto label_10c180;
            case 0x10C184u: goto label_10c184;
            case 0x10C188u: goto label_10c188;
            case 0x10C18Cu: goto label_10c18c;
            case 0x10C190u: goto label_10c190;
            case 0x10C194u: goto label_10c194;
            case 0x10C198u: goto label_10c198;
            case 0x10C19Cu: goto label_10c19c;
            case 0x10C1A0u: goto label_10c1a0;
            case 0x10C1A4u: goto label_10c1a4;
            case 0x10C1A8u: goto label_10c1a8;
            case 0x10C1ACu: goto label_10c1ac;
            case 0x10C1B0u: goto label_10c1b0;
            case 0x10C1B4u: goto label_10c1b4;
            case 0x10C1B8u: goto label_10c1b8;
            case 0x10C1BCu: goto label_10c1bc;
            case 0x10C1C0u: goto label_10c1c0;
            case 0x10C1C4u: goto label_10c1c4;
            case 0x10C1C8u: goto label_10c1c8;
            case 0x10C1CCu: goto label_10c1cc;
            case 0x10C1D0u: goto label_10c1d0;
            case 0x10C1D4u: goto label_10c1d4;
            case 0x10C1D8u: goto label_10c1d8;
            case 0x10C1DCu: goto label_10c1dc;
            case 0x10C1E0u: goto label_10c1e0;
            case 0x10C1E4u: goto label_10c1e4;
            case 0x10C1E8u: goto label_10c1e8;
            case 0x10C1ECu: goto label_10c1ec;
            case 0x10C1F0u: goto label_10c1f0;
            case 0x10C1F4u: goto label_10c1f4;
            case 0x10C1F8u: goto label_10c1f8;
            case 0x10C1FCu: goto label_10c1fc;
            case 0x10C200u: goto label_10c200;
            case 0x10C204u: goto label_10c204;
            case 0x10C208u: goto label_10c208;
            case 0x10C20Cu: goto label_10c20c;
            case 0x10C210u: goto label_10c210;
            case 0x10C214u: goto label_10c214;
            case 0x10C218u: goto label_10c218;
            case 0x10C21Cu: goto label_10c21c;
            case 0x10C220u: goto label_10c220;
            case 0x10C224u: goto label_10c224;
            case 0x10C228u: goto label_10c228;
            case 0x10C22Cu: goto label_10c22c;
            case 0x10C230u: goto label_10c230;
            case 0x10C234u: goto label_10c234;
            case 0x10C238u: goto label_10c238;
            case 0x10C23Cu: goto label_10c23c;
            case 0x10C240u: goto label_10c240;
            case 0x10C244u: goto label_10c244;
            case 0x10C248u: goto label_10c248;
            case 0x10C24Cu: goto label_10c24c;
            case 0x10C250u: goto label_10c250;
            case 0x10C254u: goto label_10c254;
            case 0x10C258u: goto label_10c258;
            case 0x10C25Cu: goto label_10c25c;
            case 0x10C260u: goto label_10c260;
            case 0x10C264u: goto label_10c264;
            case 0x10C268u: goto label_10c268;
            case 0x10C26Cu: goto label_10c26c;
            case 0x10C270u: goto label_10c270;
            case 0x10C274u: goto label_10c274;
            case 0x10C278u: goto label_10c278;
            case 0x10C27Cu: goto label_10c27c;
            case 0x10C280u: goto label_10c280;
            case 0x10C284u: goto label_10c284;
            case 0x10C288u: goto label_10c288;
            case 0x10C28Cu: goto label_10c28c;
            case 0x10C290u: goto label_10c290;
            case 0x10C294u: goto label_10c294;
            case 0x10C298u: goto label_10c298;
            case 0x10C29Cu: goto label_10c29c;
            case 0x10C2A0u: goto label_10c2a0;
            case 0x10C2A4u: goto label_10c2a4;
            case 0x10C2A8u: goto label_10c2a8;
            case 0x10C2ACu: goto label_10c2ac;
            case 0x10C2B0u: goto label_10c2b0;
            case 0x10C2B4u: goto label_10c2b4;
            case 0x10C2B8u: goto label_10c2b8;
            case 0x10C2BCu: goto label_10c2bc;
            case 0x10C2C0u: goto label_10c2c0;
            case 0x10C2C4u: goto label_10c2c4;
            case 0x10C2C8u: goto label_10c2c8;
            case 0x10C2CCu: goto label_10c2cc;
            case 0x10C2D0u: goto label_10c2d0;
            case 0x10C2D4u: goto label_10c2d4;
            case 0x10C2D8u: goto label_10c2d8;
            case 0x10C2DCu: goto label_10c2dc;
            case 0x10C2E0u: goto label_10c2e0;
            case 0x10C2E4u: goto label_10c2e4;
            case 0x10C2E8u: goto label_10c2e8;
            case 0x10C2ECu: goto label_10c2ec;
            case 0x10C2F0u: goto label_10c2f0;
            case 0x10C2F4u: goto label_10c2f4;
            case 0x10C2F8u: goto label_10c2f8;
            case 0x10C2FCu: goto label_10c2fc;
            case 0x10C300u: goto label_10c300;
            case 0x10C304u: goto label_10c304;
            case 0x10C308u: goto label_10c308;
            case 0x10C30Cu: goto label_10c30c;
            case 0x10C310u: goto label_10c310;
            case 0x10C314u: goto label_10c314;
            case 0x10C318u: goto label_10c318;
            case 0x10C31Cu: goto label_10c31c;
            case 0x10C320u: goto label_10c320;
            case 0x10C324u: goto label_10c324;
            case 0x10C328u: goto label_10c328;
            case 0x10C32Cu: goto label_10c32c;
            case 0x10C330u: goto label_10c330;
            case 0x10C334u: goto label_10c334;
            case 0x10C338u: goto label_10c338;
            case 0x10C33Cu: goto label_10c33c;
            case 0x10C340u: goto label_10c340;
            case 0x10C344u: goto label_10c344;
            case 0x10C348u: goto label_10c348;
            case 0x10C34Cu: goto label_10c34c;
            case 0x10C350u: goto label_10c350;
            case 0x10C354u: goto label_10c354;
            case 0x10C358u: goto label_10c358;
            case 0x10C35Cu: goto label_10c35c;
            case 0x10C360u: goto label_10c360;
            case 0x10C364u: goto label_10c364;
            case 0x10C368u: goto label_10c368;
            case 0x10C36Cu: goto label_10c36c;
            case 0x10C370u: goto label_10c370;
            case 0x10C374u: goto label_10c374;
            case 0x10C378u: goto label_10c378;
            case 0x10C37Cu: goto label_10c37c;
            case 0x10C380u: goto label_10c380;
            case 0x10C384u: goto label_10c384;
            case 0x10C388u: goto label_10c388;
            case 0x10C38Cu: goto label_10c38c;
            case 0x10C390u: goto label_10c390;
            case 0x10C394u: goto label_10c394;
            case 0x10C398u: goto label_10c398;
            case 0x10C39Cu: goto label_10c39c;
            case 0x10C3A0u: goto label_10c3a0;
            case 0x10C3A4u: goto label_10c3a4;
            case 0x10C3A8u: goto label_10c3a8;
            case 0x10C3ACu: goto label_10c3ac;
            case 0x10C3B0u: goto label_10c3b0;
            case 0x10C3B4u: goto label_10c3b4;
            case 0x10C3B8u: goto label_10c3b8;
            case 0x10C3BCu: goto label_10c3bc;
            case 0x10C3C0u: goto label_10c3c0;
            case 0x10C3C4u: goto label_10c3c4;
            case 0x10C3C8u: goto label_10c3c8;
            case 0x10C3CCu: goto label_10c3cc;
            case 0x10C3D0u: goto label_10c3d0;
            case 0x10C3D4u: goto label_10c3d4;
            case 0x10C3D8u: goto label_10c3d8;
            case 0x10C3DCu: goto label_10c3dc;
            case 0x10C3E0u: goto label_10c3e0;
            case 0x10C3E4u: goto label_10c3e4;
            case 0x10C3E8u: goto label_10c3e8;
            case 0x10C3ECu: goto label_10c3ec;
            case 0x10C3F0u: goto label_10c3f0;
            case 0x10C3F4u: goto label_10c3f4;
            case 0x10C3F8u: goto label_10c3f8;
            case 0x10C3FCu: goto label_10c3fc;
            case 0x10C400u: goto label_10c400;
            case 0x10C404u: goto label_10c404;
            case 0x10C408u: goto label_10c408;
            case 0x10C40Cu: goto label_10c40c;
            case 0x10C410u: goto label_10c410;
            case 0x10C414u: goto label_10c414;
            case 0x10C418u: goto label_10c418;
            case 0x10C41Cu: goto label_10c41c;
            case 0x10C420u: goto label_10c420;
            case 0x10C424u: goto label_10c424;
            case 0x10C428u: goto label_10c428;
            case 0x10C42Cu: goto label_10c42c;
            case 0x10C430u: goto label_10c430;
            case 0x10C434u: goto label_10c434;
            case 0x10C438u: goto label_10c438;
            case 0x10C43Cu: goto label_10c43c;
            case 0x10C440u: goto label_10c440;
            case 0x10C444u: goto label_10c444;
            case 0x10C448u: goto label_10c448;
            case 0x10C44Cu: goto label_10c44c;
            case 0x10C450u: goto label_10c450;
            case 0x10C454u: goto label_10c454;
            case 0x10C458u: goto label_10c458;
            case 0x10C45Cu: goto label_10c45c;
            case 0x10C460u: goto label_10c460;
            case 0x10C464u: goto label_10c464;
            case 0x10C468u: goto label_10c468;
            case 0x10C46Cu: goto label_10c46c;
            case 0x10C470u: goto label_10c470;
            case 0x10C474u: goto label_10c474;
            case 0x10C478u: goto label_10c478;
            case 0x10C47Cu: goto label_10c47c;
            case 0x10C480u: goto label_10c480;
            case 0x10C484u: goto label_10c484;
            case 0x10C488u: goto label_10c488;
            case 0x10C48Cu: goto label_10c48c;
            case 0x10C490u: goto label_10c490;
            case 0x10C494u: goto label_10c494;
            case 0x10C498u: goto label_10c498;
            case 0x10C49Cu: goto label_10c49c;
            case 0x10C4A0u: goto label_10c4a0;
            case 0x10C4A4u: goto label_10c4a4;
            case 0x10C4A8u: goto label_10c4a8;
            case 0x10C4ACu: goto label_10c4ac;
            case 0x10C4B0u: goto label_10c4b0;
            case 0x10C4B4u: goto label_10c4b4;
            case 0x10C4B8u: goto label_10c4b8;
            case 0x10C4BCu: goto label_10c4bc;
            case 0x10C4C0u: goto label_10c4c0;
            case 0x10C4C4u: goto label_10c4c4;
            case 0x10C4C8u: goto label_10c4c8;
            case 0x10C4CCu: goto label_10c4cc;
            case 0x10C4D0u: goto label_10c4d0;
            case 0x10C4D4u: goto label_10c4d4;
            case 0x10C4D8u: goto label_10c4d8;
            case 0x10C4DCu: goto label_10c4dc;
            case 0x10C4E0u: goto label_10c4e0;
            case 0x10C4E4u: goto label_10c4e4;
            case 0x10C4E8u: goto label_10c4e8;
            case 0x10C4ECu: goto label_10c4ec;
            case 0x10C4F0u: goto label_10c4f0;
            case 0x10C4F4u: goto label_10c4f4;
            case 0x10C4F8u: goto label_10c4f8;
            case 0x10C4FCu: goto label_10c4fc;
            case 0x10C500u: goto label_10c500;
            case 0x10C504u: goto label_10c504;
            case 0x10C508u: goto label_10c508;
            case 0x10C50Cu: goto label_10c50c;
            case 0x10C510u: goto label_10c510;
            case 0x10C514u: goto label_10c514;
            case 0x10C518u: goto label_10c518;
            case 0x10C51Cu: goto label_10c51c;
            case 0x10C520u: goto label_10c520;
            case 0x10C524u: goto label_10c524;
            case 0x10C528u: goto label_10c528;
            case 0x10C52Cu: goto label_10c52c;
            case 0x10C530u: goto label_10c530;
            case 0x10C534u: goto label_10c534;
            case 0x10C538u: goto label_10c538;
            case 0x10C53Cu: goto label_10c53c;
            case 0x10C540u: goto label_10c540;
            case 0x10C544u: goto label_10c544;
            case 0x10C548u: goto label_10c548;
            case 0x10C54Cu: goto label_10c54c;
            case 0x10C550u: goto label_10c550;
            case 0x10C554u: goto label_10c554;
            case 0x10C558u: goto label_10c558;
            case 0x10C55Cu: goto label_10c55c;
            case 0x10C560u: goto label_10c560;
            case 0x10C564u: goto label_10c564;
            case 0x10C568u: goto label_10c568;
            case 0x10C56Cu: goto label_10c56c;
            case 0x10C570u: goto label_10c570;
            case 0x10C574u: goto label_10c574;
            case 0x10C578u: goto label_10c578;
            case 0x10C57Cu: goto label_10c57c;
            case 0x10C580u: goto label_10c580;
            case 0x10C584u: goto label_10c584;
            case 0x10C588u: goto label_10c588;
            case 0x10C58Cu: goto label_10c58c;
            case 0x10C590u: goto label_10c590;
            case 0x10C594u: goto label_10c594;
            case 0x10C598u: goto label_10c598;
            case 0x10C59Cu: goto label_10c59c;
            case 0x10C5A0u: goto label_10c5a0;
            case 0x10C5A4u: goto label_10c5a4;
            case 0x10C5A8u: goto label_10c5a8;
            case 0x10C5ACu: goto label_10c5ac;
            case 0x10C5B0u: goto label_10c5b0;
            case 0x10C5B4u: goto label_10c5b4;
            case 0x10C5B8u: goto label_10c5b8;
            case 0x10C5BCu: goto label_10c5bc;
            case 0x10C5C0u: goto label_10c5c0;
            case 0x10C5C4u: goto label_10c5c4;
            case 0x10C5C8u: goto label_10c5c8;
            case 0x10C5CCu: goto label_10c5cc;
            case 0x10C5D0u: goto label_10c5d0;
            case 0x10C5D4u: goto label_10c5d4;
            case 0x10C5D8u: goto label_10c5d8;
            case 0x10C5DCu: goto label_10c5dc;
            case 0x10C5E0u: goto label_10c5e0;
            case 0x10C5E4u: goto label_10c5e4;
            case 0x10C5E8u: goto label_10c5e8;
            case 0x10C5ECu: goto label_10c5ec;
            case 0x10C5F0u: goto label_10c5f0;
            case 0x10C5F4u: goto label_10c5f4;
            case 0x10C5F8u: goto label_10c5f8;
            case 0x10C5FCu: goto label_10c5fc;
            case 0x10C600u: goto label_10c600;
            case 0x10C604u: goto label_10c604;
            case 0x10C608u: goto label_10c608;
            case 0x10C60Cu: goto label_10c60c;
            case 0x10C610u: goto label_10c610;
            case 0x10C614u: goto label_10c614;
            case 0x10C618u: goto label_10c618;
            case 0x10C61Cu: goto label_10c61c;
            case 0x10C620u: goto label_10c620;
            case 0x10C624u: goto label_10c624;
            case 0x10C628u: goto label_10c628;
            case 0x10C62Cu: goto label_10c62c;
            case 0x10C630u: goto label_10c630;
            case 0x10C634u: goto label_10c634;
            case 0x10C638u: goto label_10c638;
            case 0x10C63Cu: goto label_10c63c;
            case 0x10C640u: goto label_10c640;
            case 0x10C644u: goto label_10c644;
            case 0x10C648u: goto label_10c648;
            case 0x10C64Cu: goto label_10c64c;
            case 0x10C650u: goto label_10c650;
            case 0x10C654u: goto label_10c654;
            case 0x10C658u: goto label_10c658;
            case 0x10C65Cu: goto label_10c65c;
            case 0x10C660u: goto label_10c660;
            case 0x10C664u: goto label_10c664;
            case 0x10C668u: goto label_10c668;
            case 0x10C66Cu: goto label_10c66c;
            case 0x10C670u: goto label_10c670;
            case 0x10C674u: goto label_10c674;
            case 0x10C678u: goto label_10c678;
            case 0x10C67Cu: goto label_10c67c;
            case 0x10C680u: goto label_10c680;
            case 0x10C684u: goto label_10c684;
            case 0x10C688u: goto label_10c688;
            case 0x10C68Cu: goto label_10c68c;
            case 0x10C690u: goto label_10c690;
            case 0x10C694u: goto label_10c694;
            case 0x10C698u: goto label_10c698;
            case 0x10C69Cu: goto label_10c69c;
            case 0x10C6A0u: goto label_10c6a0;
            case 0x10C6A4u: goto label_10c6a4;
            case 0x10C6A8u: goto label_10c6a8;
            case 0x10C6ACu: goto label_10c6ac;
            case 0x10C6B0u: goto label_10c6b0;
            case 0x10C6B4u: goto label_10c6b4;
            case 0x10C6B8u: goto label_10c6b8;
            case 0x10C6BCu: goto label_10c6bc;
            case 0x10C6C0u: goto label_10c6c0;
            case 0x10C6C4u: goto label_10c6c4;
            case 0x10C6C8u: goto label_10c6c8;
            case 0x10C6CCu: goto label_10c6cc;
            case 0x10C6D0u: goto label_10c6d0;
            case 0x10C6D4u: goto label_10c6d4;
            case 0x10C6D8u: goto label_10c6d8;
            case 0x10C6DCu: goto label_10c6dc;
            case 0x10C6E0u: goto label_10c6e0;
            case 0x10C6E4u: goto label_10c6e4;
            case 0x10C6E8u: goto label_10c6e8;
            case 0x10C6ECu: goto label_10c6ec;
            case 0x10C6F0u: goto label_10c6f0;
            case 0x10C6F4u: goto label_10c6f4;
            case 0x10C6F8u: goto label_10c6f8;
            case 0x10C6FCu: goto label_10c6fc;
            case 0x10C700u: goto label_10c700;
            case 0x10C704u: goto label_10c704;
            case 0x10C708u: goto label_10c708;
            case 0x10C70Cu: goto label_10c70c;
            case 0x10C710u: goto label_10c710;
            case 0x10C714u: goto label_10c714;
            case 0x10C718u: goto label_10c718;
            case 0x10C71Cu: goto label_10c71c;
            case 0x10C720u: goto label_10c720;
            case 0x10C724u: goto label_10c724;
            case 0x10C728u: goto label_10c728;
            case 0x10C72Cu: goto label_10c72c;
            case 0x10C730u: goto label_10c730;
            case 0x10C734u: goto label_10c734;
            case 0x10C738u: goto label_10c738;
            case 0x10C73Cu: goto label_10c73c;
            case 0x10C740u: goto label_10c740;
            case 0x10C744u: goto label_10c744;
            case 0x10C748u: goto label_10c748;
            case 0x10C74Cu: goto label_10c74c;
            case 0x10C750u: goto label_10c750;
            case 0x10C754u: goto label_10c754;
            case 0x10C758u: goto label_10c758;
            case 0x10C75Cu: goto label_10c75c;
            case 0x10C760u: goto label_10c760;
            case 0x10C764u: goto label_10c764;
            case 0x10C768u: goto label_10c768;
            case 0x10C76Cu: goto label_10c76c;
            case 0x10C770u: goto label_10c770;
            case 0x10C774u: goto label_10c774;
            case 0x10C778u: goto label_10c778;
            case 0x10C77Cu: goto label_10c77c;
            case 0x10C780u: goto label_10c780;
            case 0x10C784u: goto label_10c784;
            case 0x10C788u: goto label_10c788;
            case 0x10C78Cu: goto label_10c78c;
            case 0x10C790u: goto label_10c790;
            case 0x10C794u: goto label_10c794;
            case 0x10C798u: goto label_10c798;
            case 0x10C79Cu: goto label_10c79c;
            case 0x10C7A0u: goto label_10c7a0;
            case 0x10C7A4u: goto label_10c7a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10B900u;
label_10b900:
    // 0x10b900: 0x24020001
    ctx->pc = 0x10b900u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_10b904:
    // 0x10b904: 0xafa2000c
    ctx->pc = 0x10b904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_10b908:
    // 0x10b908: 0x26d60001
    ctx->pc = 0x10b908u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
label_10b90c:
    // 0x10b90c: 0x82c20000
    ctx->pc = 0x10b90cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_10b910:
    // 0x10b910: 0x14400005
label_10b914:
    if (ctx->pc == 0x10B914u) {
        ctx->pc = 0x10B914u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->pc = 0x10B918u;
        goto label_10b918;
    }
    ctx->pc = 0x10B910u;
    {
        const bool branch_taken_0x10b910 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10B914u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        if (branch_taken_0x10b910) {
            ctx->pc = 0x10B928u;
            goto label_10b928;
        }
    }
    ctx->pc = 0x10B918u;
label_10b918:
    // 0x10b918: 0x1000038b
label_10b91c:
    if (ctx->pc == 0x10B91Cu) {
        ctx->pc = 0x10B91Cu;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10B920u;
        goto label_10b920;
    }
    ctx->pc = 0x10B918u;
    {
        const bool branch_taken_0x10b918 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10B91Cu;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10b918) {
            ctx->pc = 0x10C748u;
            goto label_10c748;
        }
    }
    ctx->pc = 0x10B920u;
label_10b920:
    // 0x10b920: 0x1000ffed
label_10b924:
    if (ctx->pc == 0x10B924u) {
        ctx->pc = 0x10B924u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
        ctx->pc = 0x10B928u;
        goto label_10b928;
    }
    ctx->pc = 0x10B920u;
    {
        const bool branch_taken_0x10b920 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10B924u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
        if (branch_taken_0x10b920) {
            ctx->pc = 0x10B8D8u;
            goto label_10b8d8;
        }
    }
    ctx->pc = 0x10B928u;
label_10b928:
    // 0x10b928: 0x41600
    ctx->pc = 0x10b928u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 24));
label_10b92c:
    // 0x10b92c: 0x24030030
    ctx->pc = 0x10b92cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
label_10b930:
    // 0x10b930: 0x21603
    ctx->pc = 0x10b930u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_10b934:
    // 0x10b934: 0x1443000b
label_10b938:
    if (ctx->pc == 0x10B938u) {
        ctx->pc = 0x10B938u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 24));
        ctx->pc = 0x10B93Cu;
        goto label_10b93c;
    }
    ctx->pc = 0x10B934u;
    {
        const bool branch_taken_0x10b934 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x10B938u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 24));
        if (branch_taken_0x10b934) {
            ctx->pc = 0x10B964u;
            goto label_10b964;
        }
    }
    ctx->pc = 0x10B93Cu;
label_10b93c:
    // 0x10b93c: 0x240a0001
    ctx->pc = 0x10b93cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 1));
label_10b940:
    // 0x10b940: 0x26d60001
    ctx->pc = 0x10b940u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
label_10b944:
    // 0x10b944: 0x82c20000
    ctx->pc = 0x10b944u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_10b948:
    // 0x10b948: 0x0
    ctx->pc = 0x10b948u;
    // NOP
label_10b94c:
    // 0x10b94c: 0x0
    ctx->pc = 0x10b94cu;
    // NOP
label_10b950:
    // 0x10b950: 0x0
    ctx->pc = 0x10b950u;
    // NOP
label_10b954:
    // 0x10b954: 0x1043fffa
label_10b958:
    if (ctx->pc == 0x10B958u) {
        ctx->pc = 0x10B958u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->pc = 0x10B95Cu;
        goto label_10b95c;
    }
    ctx->pc = 0x10B954u;
    {
        const bool branch_taken_0x10b954 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x10B958u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        if (branch_taken_0x10b954) {
            ctx->pc = 0x10B940u;
            goto label_10b940;
        }
    }
    ctx->pc = 0x10B95Cu;
label_10b95c:
    // 0x10b95c: 0x1040037a
label_10b960:
    if (ctx->pc == 0x10B960u) {
        ctx->pc = 0x10B960u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 24));
        ctx->pc = 0x10B964u;
        goto label_10b964;
    }
    ctx->pc = 0x10B95Cu;
    {
        const bool branch_taken_0x10b95c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10B960u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 24));
        if (branch_taken_0x10b95c) {
            ctx->pc = 0x10C748u;
            goto label_10c748;
        }
    }
    ctx->pc = 0x10B964u;
label_10b964:
    // 0x10b964: 0xafb60018
    ctx->pc = 0x10b964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 22));
label_10b968:
    // 0x10b968: 0x22603
    ctx->pc = 0x10b968u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
label_10b96c:
    // 0x10b96c: 0x882d
    ctx->pc = 0x10b96cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10b970:
    // 0x10b970: 0x28820030
    ctx->pc = 0x10b970u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 48));
label_10b974:
    // 0x10b974: 0xafa00020
    ctx->pc = 0x10b974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_10b978:
    // 0x10b978: 0x402d
    ctx->pc = 0x10b978u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10b97c:
    // 0x10b97c: 0x10000017
label_10b980:
    if (ctx->pc == 0x10B980u) {
        ctx->pc = 0x10B980u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10B984u;
        goto label_10b984;
    }
    ctx->pc = 0x10B97Cu;
    {
        const bool branch_taken_0x10b97c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10B980u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10b97c) {
            ctx->pc = 0x10B9DCu;
            goto label_10b9dc;
        }
    }
    ctx->pc = 0x10B984u;
label_10b984:
    // 0x10b984: 0x0
    ctx->pc = 0x10b984u;
    // NOP
label_10b988:
    // 0x10b988: 0x10400009
label_10b98c:
    if (ctx->pc == 0x10B98Cu) {
        ctx->pc = 0x10B98Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 16));
        ctx->pc = 0x10B990u;
        goto label_10b990;
    }
    ctx->pc = 0x10B988u;
    {
        const bool branch_taken_0x10b988 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10B98Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 16));
        if (branch_taken_0x10b988) {
            ctx->pc = 0x10B9B0u;
            goto label_10b9b0;
        }
    }
    ctx->pc = 0x10B990u;
label_10b990:
    // 0x10b990: 0x8fa30020
    ctx->pc = 0x10b990u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_10b994:
    // 0x10b994: 0x31080
    ctx->pc = 0x10b994u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_10b998:
    // 0x10b998: 0x431021
    ctx->pc = 0x10b998u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10b99c:
    // 0x10b99c: 0x21040
    ctx->pc = 0x10b99cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_10b9a0:
    // 0x10b9a0: 0x441021
    ctx->pc = 0x10b9a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_10b9a4:
    // 0x10b9a4: 0x2442ffd0
    ctx->pc = 0x10b9a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967248));
label_10b9a8:
    // 0x10b9a8: 0x10000008
label_10b9ac:
    if (ctx->pc == 0x10B9ACu) {
        ctx->pc = 0x10B9ACu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->pc = 0x10B9B0u;
        goto label_10b9b0;
    }
    ctx->pc = 0x10B9A8u;
    {
        const bool branch_taken_0x10b9a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10B9ACu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        if (branch_taken_0x10b9a8) {
            ctx->pc = 0x10B9CCu;
            goto label_10b9cc;
        }
    }
    ctx->pc = 0x10B9B0u;
label_10b9b0:
    // 0x10b9b0: 0x50400007
label_10b9b4:
    if (ctx->pc == 0x10B9B4u) {
        ctx->pc = 0x10B9B4u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
        ctx->pc = 0x10B9B8u;
        goto label_10b9b8;
    }
    ctx->pc = 0x10B9B0u;
    {
        const bool branch_taken_0x10b9b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x10b9b0) {
            ctx->pc = 0x10B9B4u;
            SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
            ctx->pc = 0x10B9D0u;
            goto label_10b9d0;
        }
    }
    ctx->pc = 0x10B9B8u;
label_10b9b8:
    // 0x10b9b8: 0x1110b8
    ctx->pc = 0x10b9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << 2);
label_10b9bc:
    // 0x10b9bc: 0x51102d
    ctx->pc = 0x10b9bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 17));
label_10b9c0:
    // 0x10b9c0: 0x21078
    ctx->pc = 0x10b9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
label_10b9c4:
    // 0x10b9c4: 0x82102d
    ctx->pc = 0x10b9c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
label_10b9c8:
    // 0x10b9c8: 0x6451ffd0
    ctx->pc = 0x10b9c8u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 2) + (int64_t)4294967248);
label_10b9cc:
    // 0x10b9cc: 0x26d60001
    ctx->pc = 0x10b9ccu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
label_10b9d0:
    // 0x10b9d0: 0x26520001
    ctx->pc = 0x10b9d0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_10b9d4:
    // 0x10b9d4: 0x82c40000
    ctx->pc = 0x10b9d4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_10b9d8:
    // 0x10b9d8: 0x28820030
    ctx->pc = 0x10b9d8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 48));
label_10b9dc:
    // 0x10b9dc: 0x14400005
label_10b9e0:
    if (ctx->pc == 0x10B9E0u) {
        ctx->pc = 0x10B9E0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 46));
        ctx->pc = 0x10B9E4u;
        goto label_10b9e4;
    }
    ctx->pc = 0x10B9DCu;
    {
        const bool branch_taken_0x10b9dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10B9E0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 46));
        if (branch_taken_0x10b9dc) {
            ctx->pc = 0x10B9F4u;
            goto label_10b9f4;
        }
    }
    ctx->pc = 0x10B9E4u;
label_10b9e4:
    // 0x10b9e4: 0x2882003a
    ctx->pc = 0x10b9e4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 58));
label_10b9e8:
    // 0x10b9e8: 0x1440ffe7
label_10b9ec:
    if (ctx->pc == 0x10B9ECu) {
        ctx->pc = 0x10B9ECu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 9));
        ctx->pc = 0x10B9F0u;
        goto label_10b9f0;
    }
    ctx->pc = 0x10B9E8u;
    {
        const bool branch_taken_0x10b9e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10B9ECu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 9));
        if (branch_taken_0x10b9e8) {
            ctx->pc = 0x10B988u;
            goto label_10b988;
        }
    }
    ctx->pc = 0x10B9F0u;
label_10b9f0:
    // 0x10b9f0: 0x2402002e
    ctx->pc = 0x10b9f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 46));
label_10b9f4:
    // 0x10b9f4: 0x14820051
label_10b9f8:
    if (ctx->pc == 0x10B9F8u) {
        ctx->pc = 0x10B9F8u;
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10B9FCu;
        goto label_10b9fc;
    }
    ctx->pc = 0x10B9F4u;
    {
        const bool branch_taken_0x10b9f4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x10B9F8u;
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10b9f4) {
            ctx->pc = 0x10BB3Cu;
            goto label_10bb3c;
        }
    }
    ctx->pc = 0x10B9FCu;
label_10b9fc:
    // 0x10b9fc: 0x26d60001
    ctx->pc = 0x10b9fcu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
label_10ba00:
    // 0x10ba00: 0x16400015
label_10ba04:
    if (ctx->pc == 0x10BA04u) {
        ctx->pc = 0x10BA04u;
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->pc = 0x10BA08u;
        goto label_10ba08;
    }
    ctx->pc = 0x10BA00u;
    {
        const bool branch_taken_0x10ba00 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x10BA04u;
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        if (branch_taken_0x10ba00) {
            ctx->pc = 0x10BA58u;
            goto label_10ba58;
        }
    }
    ctx->pc = 0x10BA08u;
label_10ba08:
    // 0x10ba08: 0x24020030
    ctx->pc = 0x10ba08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
label_10ba0c:
    // 0x10ba0c: 0x5482000a
label_10ba10:
    if (ctx->pc == 0x10BA10u) {
        ctx->pc = 0x10BA10u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967247));
        ctx->pc = 0x10BA14u;
        goto label_10ba14;
    }
    ctx->pc = 0x10BA0Cu;
    {
        const bool branch_taken_0x10ba0c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x10ba0c) {
            ctx->pc = 0x10BA10u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967247));
            ctx->pc = 0x10BA38u;
            goto label_10ba38;
        }
    }
    ctx->pc = 0x10BA14u;
label_10ba14:
    // 0x10ba14: 0x0
    ctx->pc = 0x10ba14u;
    // NOP
label_10ba18:
    // 0x10ba18: 0x26d60001
    ctx->pc = 0x10ba18u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
label_10ba1c:
    // 0x10ba1c: 0x82c40000
    ctx->pc = 0x10ba1cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_10ba20:
    // 0x10ba20: 0x0
    ctx->pc = 0x10ba20u;
    // NOP
label_10ba24:
    // 0x10ba24: 0x0
    ctx->pc = 0x10ba24u;
    // NOP
label_10ba28:
    // 0x10ba28: 0x0
    ctx->pc = 0x10ba28u;
    // NOP
label_10ba2c:
    // 0x10ba2c: 0x1082fffa
label_10ba30:
    if (ctx->pc == 0x10BA30u) {
        ctx->pc = 0x10BA30u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
        ctx->pc = 0x10BA34u;
        goto label_10ba34;
    }
    ctx->pc = 0x10BA2Cu;
    {
        const bool branch_taken_0x10ba2c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x10BA30u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
        if (branch_taken_0x10ba2c) {
            ctx->pc = 0x10BA18u;
            goto label_10ba18;
        }
    }
    ctx->pc = 0x10BA34u;
label_10ba34:
    // 0x10ba34: 0x2482ffcf
    ctx->pc = 0x10ba34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967247));
label_10ba38:
    // 0x10ba38: 0x2c420009
    ctx->pc = 0x10ba38u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 9));
label_10ba3c:
    // 0x10ba3c: 0x10400040
label_10ba40:
    if (ctx->pc == 0x10BA40u) {
        ctx->pc = 0x10BA40u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 101));
        ctx->pc = 0x10BA44u;
        goto label_10ba44;
    }
    ctx->pc = 0x10BA3Cu;
    {
        const bool branch_taken_0x10ba3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BA40u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 101));
        if (branch_taken_0x10ba3c) {
            ctx->pc = 0x10BB40u;
            goto label_10bb40;
        }
    }
    ctx->pc = 0x10BA44u;
label_10ba44:
    // 0x10ba44: 0xe0402d
    ctx->pc = 0x10ba44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_10ba48:
    // 0x10ba48: 0x382d
    ctx->pc = 0x10ba48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10ba4c:
    // 0x10ba4c: 0x2486ffd0
    ctx->pc = 0x10ba4cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 4294967248));
label_10ba50:
    // 0x10ba50: 0x10000005
label_10ba54:
    if (ctx->pc == 0x10BA54u) {
        ctx->pc = 0x10BA54u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 22));
        ctx->pc = 0x10BA58u;
        goto label_10ba58;
    }
    ctx->pc = 0x10BA50u;
    {
        const bool branch_taken_0x10ba50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BA54u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 22));
        if (branch_taken_0x10ba50) {
            ctx->pc = 0x10BA68u;
            goto label_10ba68;
        }
    }
    ctx->pc = 0x10BA58u;
label_10ba58:
    // 0x10ba58: 0x2486ffd0
    ctx->pc = 0x10ba58u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 4294967248));
label_10ba5c:
    // 0x10ba5c: 0x2cc2000a
    ctx->pc = 0x10ba5cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), 10));
label_10ba60:
    // 0x10ba60: 0x10400037
label_10ba64:
    if (ctx->pc == 0x10BA64u) {
        ctx->pc = 0x10BA64u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 101));
        ctx->pc = 0x10BA68u;
        goto label_10ba68;
    }
    ctx->pc = 0x10BA60u;
    {
        const bool branch_taken_0x10ba60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BA64u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 101));
        if (branch_taken_0x10ba60) {
            ctx->pc = 0x10BB40u;
            goto label_10bb40;
        }
    }
    ctx->pc = 0x10BA68u;
label_10ba68:
    // 0x10ba68: 0x10c0002d
label_10ba6c:
    if (ctx->pc == 0x10BA6Cu) {
        ctx->pc = 0x10BA6Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
        ctx->pc = 0x10BA70u;
        goto label_10ba70;
    }
    ctx->pc = 0x10BA68u;
    {
        const bool branch_taken_0x10ba68 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BA6Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
        if (branch_taken_0x10ba68) {
            ctx->pc = 0x10BB20u;
            goto label_10bb20;
        }
    }
    ctx->pc = 0x10BA70u;
label_10ba70:
    // 0x10ba70: 0x24040001
    ctx->pc = 0x10ba70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_10ba74:
    // 0x10ba74: 0x87102a
    ctx->pc = 0x10ba74u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 7)));
label_10ba78:
    // 0x10ba78: 0x10400016
label_10ba7c:
    if (ctx->pc == 0x10BA7Cu) {
        ctx->pc = 0x10BA7Cu;
        SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->pc = 0x10BA80u;
        goto label_10ba80;
    }
    ctx->pc = 0x10BA78u;
    {
        const bool branch_taken_0x10ba78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BA7Cu;
        SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        if (branch_taken_0x10ba78) {
            ctx->pc = 0x10BAD4u;
            goto label_10bad4;
        }
    }
    ctx->pc = 0x10BA80u;
label_10ba80:
    // 0x10ba80: 0x24e4ffff
    ctx->pc = 0x10ba80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 7), 4294967295));
label_10ba84:
    // 0x10ba84: 0x240102d
    ctx->pc = 0x10ba84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10ba88:
    // 0x10ba88: 0x28420009
    ctx->pc = 0x10ba88u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 9));
label_10ba8c:
    // 0x10ba8c: 0x10400008
label_10ba90:
    if (ctx->pc == 0x10BA90u) {
        ctx->pc = 0x10BA90u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x10BA94u;
        goto label_10ba94;
    }
    ctx->pc = 0x10BA8Cu;
    {
        const bool branch_taken_0x10ba8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BA90u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x10ba8c) {
            ctx->pc = 0x10BAB0u;
            goto label_10bab0;
        }
    }
    ctx->pc = 0x10BA94u;
label_10ba94:
    // 0x10ba94: 0x8fa30020
    ctx->pc = 0x10ba94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_10ba98:
    // 0x10ba98: 0x31080
    ctx->pc = 0x10ba98u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_10ba9c:
    // 0x10ba9c: 0x431021
    ctx->pc = 0x10ba9cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10baa0:
    // 0x10baa0: 0x21040
    ctx->pc = 0x10baa0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_10baa4:
    // 0x10baa4: 0x10000008
label_10baa8:
    if (ctx->pc == 0x10BAA8u) {
        ctx->pc = 0x10BAA8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->pc = 0x10BAACu;
        goto label_10baac;
    }
    ctx->pc = 0x10BAA4u;
    {
        const bool branch_taken_0x10baa4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BAA8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        if (branch_taken_0x10baa4) {
            ctx->pc = 0x10BAC8u;
            goto label_10bac8;
        }
    }
    ctx->pc = 0x10BAACu;
label_10baac:
    // 0x10baac: 0x0
    ctx->pc = 0x10baacu;
    // NOP
label_10bab0:
    // 0x10bab0: 0x2a420011
    ctx->pc = 0x10bab0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 17));
label_10bab4:
    // 0x10bab4: 0x50400005
label_10bab8:
    if (ctx->pc == 0x10BAB8u) {
        ctx->pc = 0x10BAB8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->pc = 0x10BABCu;
        goto label_10babc;
    }
    ctx->pc = 0x10BAB4u;
    {
        const bool branch_taken_0x10bab4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x10bab4) {
            ctx->pc = 0x10BAB8u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->pc = 0x10BACCu;
            goto label_10bacc;
        }
    }
    ctx->pc = 0x10BABCu;
label_10babc:
    // 0x10babc: 0x1110b8
    ctx->pc = 0x10babcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << 2);
label_10bac0:
    // 0x10bac0: 0x51102d
    ctx->pc = 0x10bac0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 17));
label_10bac4:
    // 0x10bac4: 0x28878
    ctx->pc = 0x10bac4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << 1);
label_10bac8:
    // 0x10bac8: 0x2484ffff
    ctx->pc = 0x10bac8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
label_10bacc:
    // 0x10bacc: 0x1480ffee
label_10bad0:
    if (ctx->pc == 0x10BAD0u) {
        ctx->pc = 0x10BAD0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10BAD4u;
        goto label_10bad4;
    }
    ctx->pc = 0x10BACCu;
    {
        const bool branch_taken_0x10bacc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x10BAD0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10bacc) {
            ctx->pc = 0x10BA88u;
            goto label_10ba88;
        }
    }
    ctx->pc = 0x10BAD4u;
label_10bad4:
    // 0x10bad4: 0x240102d
    ctx->pc = 0x10bad4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10bad8:
    // 0x10bad8: 0x28420009
    ctx->pc = 0x10bad8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 9));
label_10badc:
    // 0x10badc: 0x10400008
label_10bae0:
    if (ctx->pc == 0x10BAE0u) {
        ctx->pc = 0x10BAE0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x10BAE4u;
        goto label_10bae4;
    }
    ctx->pc = 0x10BADCu;
    {
        const bool branch_taken_0x10badc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BAE0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x10badc) {
            ctx->pc = 0x10BB00u;
            goto label_10bb00;
        }
    }
    ctx->pc = 0x10BAE4u;
label_10bae4:
    // 0x10bae4: 0x8fa40020
    ctx->pc = 0x10bae4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_10bae8:
    // 0x10bae8: 0x41080
    ctx->pc = 0x10bae8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
label_10baec:
    // 0x10baec: 0x441021
    ctx->pc = 0x10baecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_10baf0:
    // 0x10baf0: 0x21040
    ctx->pc = 0x10baf0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_10baf4:
    // 0x10baf4: 0x461021
    ctx->pc = 0x10baf4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_10baf8:
    // 0x10baf8: 0x10000008
label_10bafc:
    if (ctx->pc == 0x10BAFCu) {
        ctx->pc = 0x10BAFCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->pc = 0x10BB00u;
        goto label_10bb00;
    }
    ctx->pc = 0x10BAF8u;
    {
        const bool branch_taken_0x10baf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BAFCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        if (branch_taken_0x10baf8) {
            ctx->pc = 0x10BB1Cu;
            goto label_10bb1c;
        }
    }
    ctx->pc = 0x10BB00u;
label_10bb00:
    // 0x10bb00: 0x2a420011
    ctx->pc = 0x10bb00u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 17));
label_10bb04:
    // 0x10bb04: 0x10400006
label_10bb08:
    if (ctx->pc == 0x10BB08u) {
        ctx->pc = 0x10BB08u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10BB0Cu;
        goto label_10bb0c;
    }
    ctx->pc = 0x10BB04u;
    {
        const bool branch_taken_0x10bb04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BB08u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10bb04) {
            ctx->pc = 0x10BB20u;
            goto label_10bb20;
        }
    }
    ctx->pc = 0x10BB0Cu;
label_10bb0c:
    // 0x10bb0c: 0x1110b8
    ctx->pc = 0x10bb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << 2);
label_10bb10:
    // 0x10bb10: 0x51102d
    ctx->pc = 0x10bb10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 17));
label_10bb14:
    // 0x10bb14: 0x21078
    ctx->pc = 0x10bb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
label_10bb18:
    // 0x10bb18: 0xc2882d
    ctx->pc = 0x10bb18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 2));
label_10bb1c:
    // 0x10bb1c: 0x382d
    ctx->pc = 0x10bb1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10bb20:
    // 0x10bb20: 0x26d60001
    ctx->pc = 0x10bb20u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
label_10bb24:
    // 0x10bb24: 0x82c40000
    ctx->pc = 0x10bb24u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_10bb28:
    // 0x10bb28: 0x2482ffd0
    ctx->pc = 0x10bb28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967248));
label_10bb2c:
    // 0x10bb2c: 0x40302d
    ctx->pc = 0x10bb2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10bb30:
    // 0x10bb30: 0x2cc3000a
    ctx->pc = 0x10bb30u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 6), 10));
label_10bb34:
    // 0x10bb34: 0x1460ffcc
label_10bb38:
    if (ctx->pc == 0x10BB38u) {
        ctx->pc = 0x10BB3Cu;
        goto label_10bb3c;
    }
    ctx->pc = 0x10BB34u;
    {
        const bool branch_taken_0x10bb34 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x10bb34) {
            ctx->pc = 0x10BA68u;
            goto label_10ba68;
        }
    }
    ctx->pc = 0x10BB3Cu;
label_10bb3c:
    // 0x10bb3c: 0x24020065
    ctx->pc = 0x10bb3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 101));
label_10bb40:
    // 0x10bb40: 0x10820004
label_10bb44:
    if (ctx->pc == 0x10BB44u) {
        ctx->pc = 0x10BB44u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
        ctx->pc = 0x10BB48u;
        goto label_10bb48;
    }
    ctx->pc = 0x10BB40u;
    {
        const bool branch_taken_0x10bb40 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x10BB44u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
        if (branch_taken_0x10bb40) {
            ctx->pc = 0x10BB54u;
            goto label_10bb54;
        }
    }
    ctx->pc = 0x10BB48u;
label_10bb48:
    // 0x10bb48: 0x24020045
    ctx->pc = 0x10bb48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 69));
label_10bb4c:
    // 0x10bb4c: 0x14820047
label_10bb50:
    if (ctx->pc == 0x10BB50u) {
        ctx->pc = 0x10BB54u;
        goto label_10bb54;
    }
    ctx->pc = 0x10BB4Cu;
    {
        const bool branch_taken_0x10bb4c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x10bb4c) {
            ctx->pc = 0x10BC6Cu;
            goto label_10bc6c;
        }
    }
    ctx->pc = 0x10BB54u;
label_10bb54:
    // 0x10bb54: 0x56400006
label_10bb58:
    if (ctx->pc == 0x10BB58u) {
        ctx->pc = 0x10BB58u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10BB5Cu;
        goto label_10bb5c;
    }
    ctx->pc = 0x10BB54u;
    {
        const bool branch_taken_0x10bb54 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x10bb54) {
            ctx->pc = 0x10BB58u;
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x10BB70u;
            goto label_10bb70;
        }
    }
    ctx->pc = 0x10BB5Cu;
label_10bb5c:
    // 0x10bb5c: 0x54e00004
label_10bb60:
    if (ctx->pc == 0x10BB60u) {
        ctx->pc = 0x10BB60u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10BB64u;
        goto label_10bb64;
    }
    ctx->pc = 0x10BB5Cu;
    {
        const bool branch_taken_0x10bb5c = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        if (branch_taken_0x10bb5c) {
            ctx->pc = 0x10BB60u;
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x10BB70u;
            goto label_10bb70;
        }
    }
    ctx->pc = 0x10BB64u;
label_10bb64:
    // 0x10bb64: 0x514002f8
label_10bb68:
    if (ctx->pc == 0x10BB68u) {
        ctx->pc = 0x10BB68u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10BB6Cu;
        goto label_10bb6c;
    }
    ctx->pc = 0x10BB64u;
    {
        const bool branch_taken_0x10bb64 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 0));
        if (branch_taken_0x10bb64) {
            ctx->pc = 0x10BB68u;
            SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x10C748u;
            goto label_10c748;
        }
    }
    ctx->pc = 0x10BB6Cu;
label_10bb6c:
    // 0x10bb6c: 0x2c0282d
    ctx->pc = 0x10bb6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_10bb70:
    // 0x10bb70: 0x26d60001
    ctx->pc = 0x10bb70u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
label_10bb74:
    // 0x10bb74: 0x82c40000
    ctx->pc = 0x10bb74u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_10bb78:
    // 0x10bb78: 0x2402002b
    ctx->pc = 0x10bb78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 43));
label_10bb7c:
    // 0x10bb7c: 0x10820005
label_10bb80:
    if (ctx->pc == 0x10BB80u) {
        ctx->pc = 0x10BB80u;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10BB84u;
        goto label_10bb84;
    }
    ctx->pc = 0x10BB7Cu;
    {
        const bool branch_taken_0x10bb7c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x10BB80u;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10bb7c) {
            ctx->pc = 0x10BB94u;
            goto label_10bb94;
        }
    }
    ctx->pc = 0x10BB84u;
label_10bb84:
    // 0x10bb84: 0x2402002d
    ctx->pc = 0x10bb84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 45));
label_10bb88:
    // 0x10bb88: 0x14820005
label_10bb8c:
    if (ctx->pc == 0x10BB8Cu) {
        ctx->pc = 0x10BB8Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->pc = 0x10BB90u;
        goto label_10bb90;
    }
    ctx->pc = 0x10BB88u;
    {
        const bool branch_taken_0x10bb88 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x10BB8Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967248));
        if (branch_taken_0x10bb88) {
            ctx->pc = 0x10BBA0u;
            goto label_10bba0;
        }
    }
    ctx->pc = 0x10BB90u;
label_10bb90:
    // 0x10bb90: 0x24090001
    ctx->pc = 0x10bb90u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
label_10bb94:
    // 0x10bb94: 0x26d60001
    ctx->pc = 0x10bb94u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
label_10bb98:
    // 0x10bb98: 0x82c40000
    ctx->pc = 0x10bb98u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_10bb9c:
    // 0x10bb9c: 0x2482ffd0
    ctx->pc = 0x10bb9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967248));
label_10bba0:
    // 0x10bba0: 0x2c42000a
    ctx->pc = 0x10bba0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 10));
label_10bba4:
    // 0x10bba4: 0x50400031
label_10bba8:
    if (ctx->pc == 0x10BBA8u) {
        ctx->pc = 0x10BBA8u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10BBACu;
        goto label_10bbac;
    }
    ctx->pc = 0x10BBA4u;
    {
        const bool branch_taken_0x10bba4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x10bba4) {
            ctx->pc = 0x10BBA8u;
            SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x10BC6Cu;
            goto label_10bc6c;
        }
    }
    ctx->pc = 0x10BBACu;
label_10bbac:
    // 0x10bbac: 0x24020030
    ctx->pc = 0x10bbacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
label_10bbb0:
    // 0x10bbb0: 0x5482000b
label_10bbb4:
    if (ctx->pc == 0x10BBB4u) {
        ctx->pc = 0x10BBB4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967247));
        ctx->pc = 0x10BBB8u;
        goto label_10bbb8;
    }
    ctx->pc = 0x10BBB0u;
    {
        const bool branch_taken_0x10bbb0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x10bbb0) {
            ctx->pc = 0x10BBB4u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967247));
            ctx->pc = 0x10BBE0u;
            goto label_10bbe0;
        }
    }
    ctx->pc = 0x10BBB8u;
label_10bbb8:
    // 0x10bbb8: 0x26d60001
    ctx->pc = 0x10bbb8u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
label_10bbbc:
    // 0x10bbbc: 0x0
    ctx->pc = 0x10bbbcu;
    // NOP
label_10bbc0:
    // 0x10bbc0: 0x82c40000
    ctx->pc = 0x10bbc0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_10bbc4:
    // 0x10bbc4: 0x0
    ctx->pc = 0x10bbc4u;
    // NOP
label_10bbc8:
    // 0x10bbc8: 0x0
    ctx->pc = 0x10bbc8u;
    // NOP
label_10bbcc:
    // 0x10bbcc: 0x0
    ctx->pc = 0x10bbccu;
    // NOP
label_10bbd0:
    // 0x10bbd0: 0x0
    ctx->pc = 0x10bbd0u;
    // NOP
label_10bbd4:
    // 0x10bbd4: 0x5082fffa
label_10bbd8:
    if (ctx->pc == 0x10BBD8u) {
        ctx->pc = 0x10BBD8u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
        ctx->pc = 0x10BBDCu;
        goto label_10bbdc;
    }
    ctx->pc = 0x10BBD4u;
    {
        const bool branch_taken_0x10bbd4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x10bbd4) {
            ctx->pc = 0x10BBD8u;
            SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
            ctx->pc = 0x10BBC0u;
            goto label_10bbc0;
        }
    }
    ctx->pc = 0x10BBDCu;
label_10bbdc:
    // 0x10bbdc: 0x2482ffcf
    ctx->pc = 0x10bbdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967247));
label_10bbe0:
    // 0x10bbe0: 0x2c420009
    ctx->pc = 0x10bbe0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 9));
label_10bbe4:
    // 0x10bbe4: 0x50400021
label_10bbe8:
    if (ctx->pc == 0x10BBE8u) {
        ctx->pc = 0x10BBE8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
        ctx->pc = 0x10BBECu;
        goto label_10bbec;
    }
    ctx->pc = 0x10BBE4u;
    {
        const bool branch_taken_0x10bbe4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x10bbe4) {
            ctx->pc = 0x10BBE8u;
            WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
            ctx->pc = 0x10BC6Cu;
            goto label_10bc6c;
        }
    }
    ctx->pc = 0x10BBECu;
label_10bbec:
    // 0x10bbec: 0x2484ffd0
    ctx->pc = 0x10bbecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967248));
label_10bbf0:
    // 0x10bbf0: 0x2c0302d
    ctx->pc = 0x10bbf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_10bbf4:
    // 0x10bbf4: 0xffa40010
    ctx->pc = 0x10bbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
label_10bbf8:
    // 0x10bbf8: 0x26d60001
    ctx->pc = 0x10bbf8u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
label_10bbfc:
    // 0x10bbfc: 0x82c40000
    ctx->pc = 0x10bbfcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_10bc00:
    // 0x10bc00: 0x28820030
    ctx->pc = 0x10bc00u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 48));
label_10bc04:
    // 0x10bc04: 0x54400010
label_10bc08:
    if (ctx->pc == 0x10BC08u) {
        ctx->pc = 0x10BC08u;
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x10BC0Cu;
        goto label_10bc0c;
    }
    ctx->pc = 0x10BC04u;
    {
        const bool branch_taken_0x10bc04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x10bc04) {
            ctx->pc = 0x10BC08u;
            SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x10BC48u;
            goto label_10bc48;
        }
    }
    ctx->pc = 0x10BC0Cu;
label_10bc0c:
    // 0x10bc0c: 0x2882003a
    ctx->pc = 0x10bc0cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 58));
label_10bc10:
    // 0x10bc10: 0x5040000d
label_10bc14:
    if (ctx->pc == 0x10BC14u) {
        ctx->pc = 0x10BC14u;
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x10BC18u;
        goto label_10bc18;
    }
    ctx->pc = 0x10BC10u;
    {
        const bool branch_taken_0x10bc10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x10bc10) {
            ctx->pc = 0x10BC14u;
            SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x10BC48u;
            goto label_10bc48;
        }
    }
    ctx->pc = 0x10BC18u;
label_10bc18:
    // 0x10bc18: 0xdfa30010
    ctx->pc = 0x10bc18u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10bc1c:
    // 0x10bc1c: 0x26d60001
    ctx->pc = 0x10bc1cu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
label_10bc20:
    // 0x10bc20: 0x310b8
    ctx->pc = 0x10bc20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 2);
label_10bc24:
    // 0x10bc24: 0x43102d
    ctx->pc = 0x10bc24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
label_10bc28:
    // 0x10bc28: 0x21078
    ctx->pc = 0x10bc28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
label_10bc2c:
    // 0x10bc2c: 0x82102d
    ctx->pc = 0x10bc2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
label_10bc30:
    // 0x10bc30: 0x82c40000
    ctx->pc = 0x10bc30u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_10bc34:
    // 0x10bc34: 0x6442ffd0
    ctx->pc = 0x10bc34u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)4294967248);
label_10bc38:
    // 0x10bc38: 0x28830030
    ctx->pc = 0x10bc38u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 48));
label_10bc3c:
    // 0x10bc3c: 0x1060fff3
label_10bc40:
    if (ctx->pc == 0x10BC40u) {
        ctx->pc = 0x10BC40u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->pc = 0x10BC44u;
        goto label_10bc44;
    }
    ctx->pc = 0x10BC3Cu;
    {
        const bool branch_taken_0x10bc3c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BC40u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        if (branch_taken_0x10bc3c) {
            ctx->pc = 0x10BC0Cu;
            goto label_10bc0c;
        }
    }
    ctx->pc = 0x10BC44u;
label_10bc44:
    // 0x10bc44: 0xdfa40010
    ctx->pc = 0x10bc44u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10bc48:
    // 0x10bc48: 0x2c61023
    ctx->pc = 0x10bc48u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
label_10bc4c:
    // 0x10bc4c: 0x3c030098
    ctx->pc = 0x10bc4cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)152 << 16));
label_10bc50:
    // 0x10bc50: 0x3463967f
    ctx->pc = 0x10bc50u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 38527));
label_10bc54:
    // 0x10bc54: 0x28420009
    ctx->pc = 0x10bc54u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 9));
label_10bc58:
    // 0x10bc58: 0x62200a
    ctx->pc = 0x10bc58u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
label_10bc5c:
    // 0x10bc5c: 0x11200003
label_10bc60:
    if (ctx->pc == 0x10BC60u) {
        ctx->pc = 0x10BC60u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
        ctx->pc = 0x10BC64u;
        goto label_10bc64;
    }
    ctx->pc = 0x10BC5Cu;
    {
        const bool branch_taken_0x10bc5c = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BC60u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
        if (branch_taken_0x10bc5c) {
            ctx->pc = 0x10BC6Cu;
            goto label_10bc6c;
        }
    }
    ctx->pc = 0x10BC64u;
label_10bc64:
    // 0x10bc64: 0x4202f
    ctx->pc = 0x10bc64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) - GPR_U64(ctx, 4));
label_10bc68:
    // 0x10bc68: 0xffa40010
    ctx->pc = 0x10bc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
label_10bc6c:
    // 0x10bc6c: 0x16400008
label_10bc70:
    if (ctx->pc == 0x10BC70u) {
        ctx->pc = 0x10BC70u;
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x10BC74u;
        goto label_10bc74;
    }
    ctx->pc = 0x10BC6Cu;
    {
        const bool branch_taken_0x10bc6c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x10BC70u;
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x10bc6c) {
            ctx->pc = 0x10BC90u;
            goto label_10bc90;
        }
    }
    ctx->pc = 0x10BC74u;
label_10bc74:
    // 0x10bc74: 0x14e002b5
label_10bc78:
    if (ctx->pc == 0x10BC78u) {
        ctx->pc = 0x10BC78u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->pc = 0x10BC7Cu;
        goto label_10bc7c;
    }
    ctx->pc = 0x10BC74u;
    {
        const bool branch_taken_0x10bc74 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x10BC78u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x10bc74) {
            ctx->pc = 0x10C74Cu;
            goto label_10c74c;
        }
    }
    ctx->pc = 0x10BC7Cu;
label_10bc7c:
    // 0x10bc7c: 0x154002b3
label_10bc80:
    if (ctx->pc == 0x10BC80u) {
        ctx->pc = 0x10BC84u;
        goto label_10bc84;
    }
    ctx->pc = 0x10BC7Cu;
    {
        const bool branch_taken_0x10bc7c = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        if (branch_taken_0x10bc7c) {
            ctx->pc = 0x10C74Cu;
            goto label_10c74c;
        }
    }
    ctx->pc = 0x10BC84u;
label_10bc84:
    // 0x10bc84: 0x100002b0
label_10bc88:
    if (ctx->pc == 0x10BC88u) {
        ctx->pc = 0x10BC88u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10BC8Cu;
        goto label_10bc8c;
    }
    ctx->pc = 0x10BC84u;
    {
        const bool branch_taken_0x10bc84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BC88u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10bc84) {
            ctx->pc = 0x10C748u;
            goto label_10c748;
        }
    }
    ctx->pc = 0x10BC8Cu;
label_10bc8c:
    // 0x10bc8c: 0x0
    ctx->pc = 0x10bc8cu;
    // NOP
label_10bc90:
    // 0x10bc90: 0x24140010
    ctx->pc = 0x10bc90u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 16));
label_10bc94:
    // 0x10bc94: 0x8fa40020
    ctx->pc = 0x10bc94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_10bc98:
    // 0x10bc98: 0x257b80a
    ctx->pc = 0x10bc98u;
    if (GPR_U32(ctx, 23) == 0) SET_GPR_U32(ctx, 23, GPR_U32(ctx, 18));
label_10bc9c:
    // 0x10bc9c: 0x48102f
    ctx->pc = 0x10bc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 8));
label_10bca0:
    // 0x10bca0: 0xffa20010
    ctx->pc = 0x10bca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_10bca4:
    // 0x10bca4: 0x2a420011
    ctx->pc = 0x10bca4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 17));
label_10bca8:
    // 0x10bca8: 0x242a00b
    ctx->pc = 0x10bca8u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 18));
label_10bcac:
    // 0x10bcac: 0xdfa30010
    ctx->pc = 0x10bcacu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10bcb0:
    // 0x10bcb0: 0x3183c
    ctx->pc = 0x10bcb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_10bcb4:
    // 0x10bcb4: 0x3183f
    ctx->pc = 0x10bcb4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_10bcb8:
    // 0x10bcb8: 0xc0448ba
label_10bcbc:
    if (ctx->pc == 0x10BCBCu) {
        ctx->pc = 0x10BCBCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
        ctx->pc = 0x10BCC0u;
        goto label_10bcc0;
    }
    ctx->pc = 0x10BCB8u;
    SET_GPR_U32(ctx, 31, 0x10BCC0u);
    ctx->pc = 0x10BCBCu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BCC0u; }
    }
    if (ctx->pc != 0x10BCC0u) { return; }
    ctx->pc = 0x10BCC0u;
label_10bcc0:
    // 0x10bcc0: 0x40202d
    ctx->pc = 0x10bcc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10bcc4:
    // 0x10bcc4: 0x8fa20020
    ctx->pc = 0x10bcc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_10bcc8:
    // 0x10bcc8: 0x4410006
label_10bccc:
    if (ctx->pc == 0x10BCCCu) {
        ctx->pc = 0x10BCCCu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->pc = 0x10BCD0u;
        goto label_10bcd0;
    }
    ctx->pc = 0x10BCC8u;
    {
        const bool branch_taken_0x10bcc8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10BCCCu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        if (branch_taken_0x10bcc8) {
            ctx->pc = 0x10BCE4u;
            goto label_10bce4;
        }
    }
    ctx->pc = 0x10BCD0u;
label_10bcd0:
    // 0x10bcd0: 0x340583e0
    ctx->pc = 0x10bcd0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 33760));
label_10bcd4:
    // 0x10bcd4: 0x52bfc
    ctx->pc = 0x10bcd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_10bcd8:
    // 0x10bcd8: 0xc04473c
label_10bcdc:
    if (ctx->pc == 0x10BCDCu) {
        ctx->pc = 0x10BCE0u;
        goto label_10bce0;
    }
    ctx->pc = 0x10BCD8u;
    SET_GPR_U32(ctx, 31, 0x10BCE0u);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BCE0u; }
    }
    if (ctx->pc != 0x10BCE0u) { return; }
    ctx->pc = 0x10BCE0u;
label_10bce0:
    // 0x10bce0: 0x40202d
    ctx->pc = 0x10bce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10bce4:
    // 0x10bce4: 0x2a82000a
    ctx->pc = 0x10bce4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 10));
label_10bce8:
    // 0x10bce8: 0x80982d
    ctx->pc = 0x10bce8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10bcec:
    // 0x10bcec: 0x1440001d
label_10bcf0:
    if (ctx->pc == 0x10BCF0u) {
        ctx->pc = 0x10BCF0u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->pc = 0x10BCF4u;
        goto label_10bcf4;
    }
    ctx->pc = 0x10BCECu;
    {
        const bool branch_taken_0x10bcec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10BCF0u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        if (branch_taken_0x10bcec) {
            ctx->pc = 0x10BD64u;
            goto label_10bd64;
        }
    }
    ctx->pc = 0x10BCF4u;
label_10bcf4:
    // 0x10bcf4: 0x1410c0
    ctx->pc = 0x10bcf4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 3));
label_10bcf8:
    // 0x10bcf8: 0x80282d
    ctx->pc = 0x10bcf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10bcfc:
    // 0x10bcfc: 0x3c040023
    ctx->pc = 0x10bcfcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
label_10bd00:
    // 0x10bd00: 0x822021
    ctx->pc = 0x10bd00u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10bd04:
    // 0x10bd04: 0xdc8478e0
    ctx->pc = 0x10bd04u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 30944)));
label_10bd08:
    // 0x10bd08: 0xc04476c
label_10bd0c:
    if (ctx->pc == 0x10BD0Cu) {
        ctx->pc = 0x10BD10u;
        goto label_10bd10;
    }
    ctx->pc = 0x10BD08u;
    SET_GPR_U32(ctx, 31, 0x10BD10u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BD10u; }
    }
    if (ctx->pc != 0x10BD10u) { return; }
    ctx->pc = 0x10BD10u;
label_10bd10:
    // 0x10bd10: 0x40982d
    ctx->pc = 0x10bd10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10bd14:
    // 0x10bd14: 0x6220006
label_10bd18:
    if (ctx->pc == 0x10BD18u) {
        ctx->pc = 0x10BD18u;
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) >> 1);
        ctx->pc = 0x10BD1Cu;
        goto label_10bd1c;
    }
    ctx->pc = 0x10BD14u;
    {
        const bool branch_taken_0x10bd14 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x10bd14) {
            ctx->pc = 0x10BD18u;
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) >> 1);
            ctx->pc = 0x10BD30u;
            goto label_10bd30;
        }
    }
    ctx->pc = 0x10BD1Cu;
label_10bd1c:
    // 0x10bd1c: 0xc0444ca
label_10bd20:
    if (ctx->pc == 0x10BD20u) {
        ctx->pc = 0x10BD20u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10BD24u;
        goto label_10bd24;
    }
    ctx->pc = 0x10BD1Cu;
    SET_GPR_U32(ctx, 31, 0x10BD24u);
    ctx->pc = 0x10BD20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111328u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111328_0x111328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BD24u; }
    }
    if (ctx->pc != 0x10BD24u) { return; }
    ctx->pc = 0x10BD24u;
label_10bd24:
    // 0x10bd24: 0x10000009
label_10bd28:
    if (ctx->pc == 0x10BD28u) {
        ctx->pc = 0x10BD2Cu;
        goto label_10bd2c;
    }
    ctx->pc = 0x10BD24u;
    {
        const bool branch_taken_0x10bd24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x10bd24) {
            ctx->pc = 0x10BD4Cu;
            goto label_10bd4c;
        }
    }
    ctx->pc = 0x10BD2Cu;
label_10bd2c:
    // 0x10bd2c: 0x0
    ctx->pc = 0x10bd2cu;
    // NOP
label_10bd30:
    // 0x10bd30: 0x32240001
    ctx->pc = 0x10bd30u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 17), 1));
label_10bd34:
    // 0x10bd34: 0xc0444ca
label_10bd38:
    if (ctx->pc == 0x10BD38u) {
        ctx->pc = 0x10BD38u;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->pc = 0x10BD3Cu;
        goto label_10bd3c;
    }
    ctx->pc = 0x10BD34u;
    SET_GPR_U32(ctx, 31, 0x10BD3Cu);
    ctx->pc = 0x10BD38u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->pc = 0x111328u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111328_0x111328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BD3Cu; }
    }
    if (ctx->pc != 0x10BD3Cu) { return; }
    ctx->pc = 0x10BD3Cu;
label_10bd3c:
    // 0x10bd3c: 0x40202d
    ctx->pc = 0x10bd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10bd40:
    // 0x10bd40: 0x80282d
    ctx->pc = 0x10bd40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10bd44:
    // 0x10bd44: 0xc04473c
label_10bd48:
    if (ctx->pc == 0x10BD48u) {
        ctx->pc = 0x10BD4Cu;
        goto label_10bd4c;
    }
    ctx->pc = 0x10BD44u;
    SET_GPR_U32(ctx, 31, 0x10BD4Cu);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BD4Cu; }
    }
    if (ctx->pc != 0x10BD4Cu) { return; }
    ctx->pc = 0x10BD4Cu;
label_10bd4c:
    // 0x10bd4c: 0x260202d
    ctx->pc = 0x10bd4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10bd50:
    // 0x10bd50: 0x40282d
    ctx->pc = 0x10bd50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10bd54:
    // 0x10bd54: 0xc04473c
label_10bd58:
    if (ctx->pc == 0x10BD58u) {
        ctx->pc = 0x10BD5Cu;
        goto label_10bd5c;
    }
    ctx->pc = 0x10BD54u;
    SET_GPR_U32(ctx, 31, 0x10BD5Cu);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BD5Cu; }
    }
    if (ctx->pc != 0x10BD5Cu) { return; }
    ctx->pc = 0x10BD5Cu;
label_10bd5c:
    // 0x10bd5c: 0x40982d
    ctx->pc = 0x10bd5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10bd60:
    // 0x10bd60: 0x2541023
    ctx->pc = 0x10bd60u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_10bd64:
    // 0x10bd64: 0x2028021
    ctx->pc = 0x10bd64u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_10bd68:
    // 0x10bd68: 0x1a000055
label_10bd6c:
    if (ctx->pc == 0x10BD6Cu) {
        ctx->pc = 0x10BD6Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->pc = 0x10BD70u;
        goto label_10bd70;
    }
    ctx->pc = 0x10BD68u;
    {
        const bool branch_taken_0x10bd68 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x10BD6Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        if (branch_taken_0x10bd68) {
            ctx->pc = 0x10BEC0u;
            goto label_10bec0;
        }
    }
    ctx->pc = 0x10BD70u;
label_10bd70:
    // 0x10bd70: 0x3204000f
    ctx->pc = 0x10bd70u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 16), 15));
label_10bd74:
    // 0x10bd74: 0x10800008
label_10bd78:
    if (ctx->pc == 0x10BD78u) {
        ctx->pc = 0x10BD78u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 3));
        ctx->pc = 0x10BD7Cu;
        goto label_10bd7c;
    }
    ctx->pc = 0x10BD74u;
    {
        const bool branch_taken_0x10bd74 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BD78u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 3));
        if (branch_taken_0x10bd74) {
            ctx->pc = 0x10BD98u;
            goto label_10bd98;
        }
    }
    ctx->pc = 0x10BD7Cu;
label_10bd7c:
    // 0x10bd7c: 0x260282d
    ctx->pc = 0x10bd7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10bd80:
    // 0x10bd80: 0x3c040023
    ctx->pc = 0x10bd80u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
label_10bd84:
    // 0x10bd84: 0x822021
    ctx->pc = 0x10bd84u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10bd88:
    // 0x10bd88: 0xdc847928
    ctx->pc = 0x10bd88u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 31016)));
label_10bd8c:
    // 0x10bd8c: 0xc04476c
label_10bd90:
    if (ctx->pc == 0x10BD90u) {
        ctx->pc = 0x10BD94u;
        goto label_10bd94;
    }
    ctx->pc = 0x10BD8Cu;
    SET_GPR_U32(ctx, 31, 0x10BD94u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BD94u; }
    }
    if (ctx->pc != 0x10BD94u) { return; }
    ctx->pc = 0x10BD94u;
label_10bd94:
    // 0x10bd94: 0x40982d
    ctx->pc = 0x10bd94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10bd98:
    // 0x10bd98: 0x2402fff0
    ctx->pc = 0x10bd98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967280));
label_10bd9c:
    // 0x10bd9c: 0x2028024
    ctx->pc = 0x10bd9cu;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_10bda0:
    // 0x10bda0: 0x120000a1
label_10bda4:
    if (ctx->pc == 0x10BDA4u) {
        ctx->pc = 0x10BDA4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 309));
        ctx->pc = 0x10BDA8u;
        goto label_10bda8;
    }
    ctx->pc = 0x10BDA0u;
    {
        const bool branch_taken_0x10bda0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BDA4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 309));
        if (branch_taken_0x10bda0) {
            ctx->pc = 0x10C028u;
            goto label_10c028;
        }
    }
    ctx->pc = 0x10BDA8u;
label_10bda8:
    // 0x10bda8: 0x5440000b
label_10bdac:
    if (ctx->pc == 0x10BDACu) {
        ctx->pc = 0x10BDACu;
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
        ctx->pc = 0x10BDB0u;
        goto label_10bdb0;
    }
    ctx->pc = 0x10BDA8u;
    {
        const bool branch_taken_0x10bda8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x10bda8) {
            ctx->pc = 0x10BDACu;
            SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
            ctx->pc = 0x10BDD8u;
            goto label_10bdd8;
        }
    }
    ctx->pc = 0x10BDB0u;
label_10bdb0:
    // 0x10bdb0: 0x24020022
    ctx->pc = 0x10bdb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 34));
label_10bdb4:
    // 0x10bdb4: 0x3c030023
    ctx->pc = 0x10bdb4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
label_10bdb8:
    // 0x10bdb8: 0xafc20000
    ctx->pc = 0x10bdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_10bdbc:
    // 0x10bdbc: 0xdc737a40
    ctx->pc = 0x10bdbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 3), 31296)));
label_10bdc0:
    // 0x10bdc0: 0x8fa30038
    ctx->pc = 0x10bdc0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_10bdc4:
    // 0x10bdc4: 0x10600261
label_10bdc8:
    if (ctx->pc == 0x10BDC8u) {
        ctx->pc = 0x10BDC8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->pc = 0x10BDCCu;
        goto label_10bdcc;
    }
    ctx->pc = 0x10BDC4u;
    {
        const bool branch_taken_0x10bdc4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BDC8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x10bdc4) {
            ctx->pc = 0x10C74Cu;
            goto label_10c74c;
        }
    }
    ctx->pc = 0x10BDCCu;
label_10bdcc:
    // 0x10bdcc: 0x10000250
label_10bdd0:
    if (ctx->pc == 0x10BDD0u) {
        ctx->pc = 0x10BDD0u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x10BDD4u;
        goto label_10bdd4;
    }
    ctx->pc = 0x10BDCCu;
    {
        const bool branch_taken_0x10bdcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BDD0u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x10bdcc) {
            ctx->pc = 0x10C710u;
            goto label_10c710;
        }
    }
    ctx->pc = 0x10BDD4u;
label_10bdd4:
    // 0x10bdd4: 0x0
    ctx->pc = 0x10bdd4u;
    // NOP
label_10bdd8:
    // 0x10bdd8: 0x12000093
label_10bddc:
    if (ctx->pc == 0x10BDDCu) {
        ctx->pc = 0x10BDDCu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 2));
        ctx->pc = 0x10BDE0u;
        goto label_10bde0;
    }
    ctx->pc = 0x10BDD8u;
    {
        const bool branch_taken_0x10bdd8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BDDCu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 2));
        if (branch_taken_0x10bdd8) {
            ctx->pc = 0x10C028u;
            goto label_10c028;
        }
    }
    ctx->pc = 0x10BDE0u;
label_10bde0:
    // 0x10bde0: 0x14400011
label_10bde4:
    if (ctx->pc == 0x10BDE4u) {
        ctx->pc = 0x10BDE4u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10BDE8u;
        goto label_10bde8;
    }
    ctx->pc = 0x10BDE0u;
    {
        const bool branch_taken_0x10bde0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10BDE4u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10bde0) {
            ctx->pc = 0x10BE28u;
            goto label_10be28;
        }
    }
    ctx->pc = 0x10BDE8u;
label_10bde8:
    // 0x10bde8: 0x3c150023
    ctx->pc = 0x10bde8u;
    SET_GPR_U32(ctx, 21, ((uint32_t)35 << 16));
label_10bdec:
    // 0x10bdec: 0x26b179f0
    ctx->pc = 0x10bdecu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 21), 31216));
label_10bdf0:
    // 0x10bdf0: 0x32020001
    ctx->pc = 0x10bdf0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 1));
label_10bdf4:
    // 0x10bdf4: 0x10400006
label_10bdf8:
    if (ctx->pc == 0x10BDF8u) {
        ctx->pc = 0x10BDF8u;
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
        ctx->pc = 0x10BDFCu;
        goto label_10bdfc;
    }
    ctx->pc = 0x10BDF4u;
    {
        const bool branch_taken_0x10bdf4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BDF8u;
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
        if (branch_taken_0x10bdf4) {
            ctx->pc = 0x10BE10u;
            goto label_10be10;
        }
    }
    ctx->pc = 0x10BDFCu;
label_10bdfc:
    // 0x10bdfc: 0xde240000
    ctx->pc = 0x10bdfcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_10be00:
    // 0x10be00: 0x260282d
    ctx->pc = 0x10be00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10be04:
    // 0x10be04: 0xc04476c
label_10be08:
    if (ctx->pc == 0x10BE08u) {
        ctx->pc = 0x10BE0Cu;
        goto label_10be0c;
    }
    ctx->pc = 0x10BE04u;
    SET_GPR_U32(ctx, 31, 0x10BE0Cu);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BE0Cu; }
    }
    if (ctx->pc != 0x10BE0Cu) { return; }
    ctx->pc = 0x10BE0Cu;
label_10be0c:
    // 0x10be0c: 0x40982d
    ctx->pc = 0x10be0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10be10:
    // 0x10be10: 0x26310008
    ctx->pc = 0x10be10u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
label_10be14:
    // 0x10be14: 0x2a020002
    ctx->pc = 0x10be14u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 2));
label_10be18:
    // 0x10be18: 0x1040fff5
label_10be1c:
    if (ctx->pc == 0x10BE1Cu) {
        ctx->pc = 0x10BE1Cu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x10BE20u;
        goto label_10be20;
    }
    ctx->pc = 0x10BE18u;
    {
        const bool branch_taken_0x10be18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BE1Cu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        if (branch_taken_0x10be18) {
            ctx->pc = 0x10BDF0u;
            goto label_10bdf0;
        }
    }
    ctx->pc = 0x10BE20u;
label_10be20:
    // 0x10be20: 0x10000003
label_10be24:
    if (ctx->pc == 0x10BE24u) {
        ctx->pc = 0x10BE24u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 31216));
        ctx->pc = 0x10BE28u;
        goto label_10be28;
    }
    ctx->pc = 0x10BE20u;
    {
        const bool branch_taken_0x10be20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BE24u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 31216));
        if (branch_taken_0x10be20) {
            ctx->pc = 0x10BE30u;
            goto label_10be30;
        }
    }
    ctx->pc = 0x10BE28u;
label_10be28:
    // 0x10be28: 0x3c150023
    ctx->pc = 0x10be28u;
    SET_GPR_U32(ctx, 21, ((uint32_t)35 << 16));
label_10be2c:
    // 0x10be2c: 0x26a479f0
    ctx->pc = 0x10be2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 31216));
label_10be30:
    // 0x10be30: 0x13283f
    ctx->pc = 0x10be30u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 19) >> (32 + 0));
label_10be34:
    // 0x10be34: 0x3c02fcb0
    ctx->pc = 0x10be34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)64688 << 16));
label_10be38:
    // 0x10be38: 0x1418c0
    ctx->pc = 0x10be38u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 3));
label_10be3c:
    // 0x10be3c: 0x641821
    ctx->pc = 0x10be3cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10be40:
    // 0x10be40: 0xa22821
    ctx->pc = 0x10be40u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_10be44:
    // 0x10be44: 0x3c10ffff
    ctx->pc = 0x10be44u;
    SET_GPR_U32(ctx, 16, ((uint32_t)65535 << 16));
label_10be48:
    // 0x10be48: 0x10803e
    ctx->pc = 0x10be48u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
label_10be4c:
    // 0x10be4c: 0xdc640000
    ctx->pc = 0x10be4cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_10be50:
    // 0x10be50: 0x2709824
    ctx->pc = 0x10be50u;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_10be54:
    // 0x10be54: 0x5283c
    ctx->pc = 0x10be54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_10be58:
    // 0x10be58: 0xc04476c
label_10be5c:
    if (ctx->pc == 0x10BE5Cu) {
        ctx->pc = 0x10BE5Cu;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->pc = 0x10BE60u;
        goto label_10be60;
    }
    ctx->pc = 0x10BE58u;
    SET_GPR_U32(ctx, 31, 0x10BE60u);
    ctx->pc = 0x10BE5Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BE60u; }
    }
    if (ctx->pc != 0x10BE60u) { return; }
    ctx->pc = 0x10BE60u;
label_10be60:
    // 0x10be60: 0x3c037ff0
    ctx->pc = 0x10be60u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32752 << 16));
label_10be64:
    // 0x10be64: 0x40982d
    ctx->pc = 0x10be64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10be68:
    // 0x10be68: 0x3c027ca0
    ctx->pc = 0x10be68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)31904 << 16));
label_10be6c:
    // 0x10be6c: 0x13203f
    ctx->pc = 0x10be6cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 19) >> (32 + 0));
label_10be70:
    // 0x10be70: 0x838824
    ctx->pc = 0x10be70u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_10be74:
    // 0x10be74: 0x51102b
    ctx->pc = 0x10be74u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_10be78:
    // 0x10be78: 0x1440ffce
label_10be7c:
    if (ctx->pc == 0x10BE7Cu) {
        ctx->pc = 0x10BE7Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 34));
        ctx->pc = 0x10BE80u;
        goto label_10be80;
    }
    ctx->pc = 0x10BE78u;
    {
        const bool branch_taken_0x10be78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10BE7Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 34));
        if (branch_taken_0x10be78) {
            ctx->pc = 0x10BDB4u;
            goto label_10bdb4;
        }
    }
    ctx->pc = 0x10BE80u;
label_10be80:
    // 0x10be80: 0x3c027c90
    ctx->pc = 0x10be80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)31888 << 16));
label_10be84:
    // 0x10be84: 0x51102b
    ctx->pc = 0x10be84u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_10be88:
    // 0x10be88: 0x10400007
label_10be8c:
    if (ctx->pc == 0x10BE8Cu) {
        ctx->pc = 0x10BE8Cu;
        SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->pc = 0x10BE90u;
        goto label_10be90;
    }
    ctx->pc = 0x10BE88u;
    {
        const bool branch_taken_0x10be88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BE8Cu;
        SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        if (branch_taken_0x10be88) {
            ctx->pc = 0x10BEA8u;
            goto label_10bea8;
        }
    }
    ctx->pc = 0x10BE90u;
label_10be90:
    // 0x10be90: 0x3c027fef
    ctx->pc = 0x10be90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32751 << 16));
label_10be94:
    // 0x10be94: 0x3442ffff
    ctx->pc = 0x10be94u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_10be98:
    // 0x10be98: 0x2103c
    ctx->pc = 0x10be98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_10be9c:
    // 0x10be9c: 0x2629825
    ctx->pc = 0x10be9cu;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_10bea0:
    // 0x10bea0: 0x10000061
label_10bea4:
    if (ctx->pc == 0x10BEA4u) {
        ctx->pc = 0x10BEA4u;
        SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->pc = 0x10BEA8u;
        goto label_10bea8;
    }
    ctx->pc = 0x10BEA0u;
    {
        const bool branch_taken_0x10bea0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BEA4u;
        SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        if (branch_taken_0x10bea0) {
            ctx->pc = 0x10C028u;
            goto label_10c028;
        }
    }
    ctx->pc = 0x10BEA8u;
label_10bea8:
    // 0x10bea8: 0x3c020350
    ctx->pc = 0x10bea8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)848 << 16));
label_10beac:
    // 0x10beac: 0x441021
    ctx->pc = 0x10beacu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_10beb0:
    // 0x10beb0: 0x2103c
    ctx->pc = 0x10beb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_10beb4:
    // 0x10beb4: 0x1000005c
label_10beb8:
    if (ctx->pc == 0x10BEB8u) {
        ctx->pc = 0x10BEB8u;
        SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->pc = 0x10BEBCu;
        goto label_10bebc;
    }
    ctx->pc = 0x10BEB4u;
    {
        const bool branch_taken_0x10beb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BEB8u;
        SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        if (branch_taken_0x10beb4) {
            ctx->pc = 0x10C028u;
            goto label_10c028;
        }
    }
    ctx->pc = 0x10BEBCu;
label_10bebc:
    // 0x10bebc: 0x0
    ctx->pc = 0x10bebcu;
    // NOP
label_10bec0:
    // 0x10bec0: 0x601005a
label_10bec4:
    if (ctx->pc == 0x10BEC4u) {
        ctx->pc = 0x10BEC4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->pc = 0x10BEC8u;
        goto label_10bec8;
    }
    ctx->pc = 0x10BEC0u;
    {
        const bool branch_taken_0x10bec0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x10BEC4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 24)));
        if (branch_taken_0x10bec0) {
            ctx->pc = 0x10C02Cu;
            goto label_10c02c;
        }
    }
    ctx->pc = 0x10BEC8u;
label_10bec8:
    // 0x10bec8: 0x108023
    ctx->pc = 0x10bec8u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_10becc:
    // 0x10becc: 0x3204000f
    ctx->pc = 0x10beccu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 16), 15));
label_10bed0:
    // 0x10bed0: 0x10800008
label_10bed4:
    if (ctx->pc == 0x10BED4u) {
        ctx->pc = 0x10BED4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 3));
        ctx->pc = 0x10BED8u;
        goto label_10bed8;
    }
    ctx->pc = 0x10BED0u;
    {
        const bool branch_taken_0x10bed0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BED4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 3));
        if (branch_taken_0x10bed0) {
            ctx->pc = 0x10BEF4u;
            goto label_10bef4;
        }
    }
    ctx->pc = 0x10BED8u;
label_10bed8:
    // 0x10bed8: 0x260202d
    ctx->pc = 0x10bed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10bedc:
    // 0x10bedc: 0x3c050023
    ctx->pc = 0x10bedcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
label_10bee0:
    // 0x10bee0: 0xa22821
    ctx->pc = 0x10bee0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_10bee4:
    // 0x10bee4: 0xdca57928
    ctx->pc = 0x10bee4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 31016)));
label_10bee8:
    // 0x10bee8: 0xc04480e
label_10beec:
    if (ctx->pc == 0x10BEECu) {
        ctx->pc = 0x10BEF0u;
        goto label_10bef0;
    }
    ctx->pc = 0x10BEE8u;
    SET_GPR_U32(ctx, 31, 0x10BEF0u);
    ctx->pc = 0x112038u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112038_0x112038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BEF0u; }
    }
    if (ctx->pc != 0x10BEF0u) { return; }
    ctx->pc = 0x10BEF0u;
label_10bef0:
    // 0x10bef0: 0x40982d
    ctx->pc = 0x10bef0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10bef4:
    // 0x10bef4: 0x2402fff0
    ctx->pc = 0x10bef4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967280));
label_10bef8:
    // 0x10bef8: 0x2028024
    ctx->pc = 0x10bef8u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_10befc:
    // 0x10befc: 0x1200004a
label_10bf00:
    if (ctx->pc == 0x10BF00u) {
        ctx->pc = 0x10BF00u;
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
        ctx->pc = 0x10BF04u;
        goto label_10bf04;
    }
    ctx->pc = 0x10BEFCu;
    {
        const bool branch_taken_0x10befc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BF00u;
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
        if (branch_taken_0x10befc) {
            ctx->pc = 0x10C028u;
            goto label_10c028;
        }
    }
    ctx->pc = 0x10BF04u;
label_10bf04:
    // 0x10bf04: 0x2a020020
    ctx->pc = 0x10bf04u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 32));
label_10bf08:
    // 0x10bf08: 0x10400036
label_10bf0c:
    if (ctx->pc == 0x10BF0Cu) {
        ctx->pc = 0x10BF0Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 34));
        ctx->pc = 0x10BF10u;
        goto label_10bf10;
    }
    ctx->pc = 0x10BF08u;
    {
        const bool branch_taken_0x10bf08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BF0Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 34));
        if (branch_taken_0x10bf08) {
            ctx->pc = 0x10BFE4u;
            goto label_10bfe4;
        }
    }
    ctx->pc = 0x10BF10u;
label_10bf10:
    // 0x10bf10: 0x2a020002
    ctx->pc = 0x10bf10u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 2));
label_10bf14:
    // 0x10bf14: 0x14400012
label_10bf18:
    if (ctx->pc == 0x10BF18u) {
        ctx->pc = 0x10BF18u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10BF1Cu;
        goto label_10bf1c;
    }
    ctx->pc = 0x10BF14u;
    {
        const bool branch_taken_0x10bf14 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10BF18u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10bf14) {
            ctx->pc = 0x10BF60u;
            goto label_10bf60;
        }
    }
    ctx->pc = 0x10BF1Cu;
label_10bf1c:
    // 0x10bf1c: 0x3c150023
    ctx->pc = 0x10bf1cu;
    SET_GPR_U32(ctx, 21, ((uint32_t)35 << 16));
label_10bf20:
    // 0x10bf20: 0x26b17a18
    ctx->pc = 0x10bf20u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 21), 31256));
label_10bf24:
    // 0x10bf24: 0x0
    ctx->pc = 0x10bf24u;
    // NOP
label_10bf28:
    // 0x10bf28: 0x32020001
    ctx->pc = 0x10bf28u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 1));
label_10bf2c:
    // 0x10bf2c: 0x10400006
label_10bf30:
    if (ctx->pc == 0x10BF30u) {
        ctx->pc = 0x10BF30u;
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
        ctx->pc = 0x10BF34u;
        goto label_10bf34;
    }
    ctx->pc = 0x10BF2Cu;
    {
        const bool branch_taken_0x10bf2c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BF30u;
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
        if (branch_taken_0x10bf2c) {
            ctx->pc = 0x10BF48u;
            goto label_10bf48;
        }
    }
    ctx->pc = 0x10BF34u;
label_10bf34:
    // 0x10bf34: 0xde240000
    ctx->pc = 0x10bf34u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_10bf38:
    // 0x10bf38: 0x260282d
    ctx->pc = 0x10bf38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10bf3c:
    // 0x10bf3c: 0xc04476c
label_10bf40:
    if (ctx->pc == 0x10BF40u) {
        ctx->pc = 0x10BF44u;
        goto label_10bf44;
    }
    ctx->pc = 0x10BF3Cu;
    SET_GPR_U32(ctx, 31, 0x10BF44u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BF44u; }
    }
    if (ctx->pc != 0x10BF44u) { return; }
    ctx->pc = 0x10BF44u;
label_10bf44:
    // 0x10bf44: 0x40982d
    ctx->pc = 0x10bf44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10bf48:
    // 0x10bf48: 0x26310008
    ctx->pc = 0x10bf48u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
label_10bf4c:
    // 0x10bf4c: 0x2a020002
    ctx->pc = 0x10bf4cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 2));
label_10bf50:
    // 0x10bf50: 0x1040fff5
label_10bf54:
    if (ctx->pc == 0x10BF54u) {
        ctx->pc = 0x10BF54u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x10BF58u;
        goto label_10bf58;
    }
    ctx->pc = 0x10BF50u;
    {
        const bool branch_taken_0x10bf50 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BF54u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        if (branch_taken_0x10bf50) {
            ctx->pc = 0x10BF28u;
            goto label_10bf28;
        }
    }
    ctx->pc = 0x10BF58u;
label_10bf58:
    // 0x10bf58: 0x10000003
label_10bf5c:
    if (ctx->pc == 0x10BF5Cu) {
        ctx->pc = 0x10BF5Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 31256));
        ctx->pc = 0x10BF60u;
        goto label_10bf60;
    }
    ctx->pc = 0x10BF58u;
    {
        const bool branch_taken_0x10bf58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BF5Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 31256));
        if (branch_taken_0x10bf58) {
            ctx->pc = 0x10BF68u;
            goto label_10bf68;
        }
    }
    ctx->pc = 0x10BF60u;
label_10bf60:
    // 0x10bf60: 0x3c150023
    ctx->pc = 0x10bf60u;
    SET_GPR_U32(ctx, 21, ((uint32_t)35 << 16));
label_10bf64:
    // 0x10bf64: 0x26a27a18
    ctx->pc = 0x10bf64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 31256));
label_10bf68:
    // 0x10bf68: 0x1418c0
    ctx->pc = 0x10bf68u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 3));
label_10bf6c:
    // 0x10bf6c: 0x621821
    ctx->pc = 0x10bf6cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10bf70:
    // 0x10bf70: 0x260282d
    ctx->pc = 0x10bf70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10bf74:
    // 0x10bf74: 0xdc700000
    ctx->pc = 0x10bf74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_10bf78:
    // 0x10bf78: 0x882d
    ctx->pc = 0x10bf78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10bf7c:
    // 0x10bf7c: 0x260a02d
    ctx->pc = 0x10bf7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10bf80:
    // 0x10bf80: 0x200202d
    ctx->pc = 0x10bf80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10bf84:
    // 0x10bf84: 0xc04476c
label_10bf88:
    if (ctx->pc == 0x10BF88u) {
        ctx->pc = 0x10BF8Cu;
        goto label_10bf8c;
    }
    ctx->pc = 0x10BF84u;
    SET_GPR_U32(ctx, 31, 0x10BF8Cu);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BF8Cu; }
    }
    if (ctx->pc != 0x10BF8Cu) { return; }
    ctx->pc = 0x10BF8Cu;
label_10bf8c:
    // 0x10bf8c: 0x220282d
    ctx->pc = 0x10bf8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10bf90:
    // 0x10bf90: 0x40202d
    ctx->pc = 0x10bf90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10bf94:
    // 0x10bf94: 0x40982d
    ctx->pc = 0x10bf94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10bf98:
    // 0x10bf98: 0xc0448a6
label_10bf9c:
    if (ctx->pc == 0x10BF9Cu) {
        ctx->pc = 0x10BFA0u;
        goto label_10bfa0;
    }
    ctx->pc = 0x10BF98u;
    SET_GPR_U32(ctx, 31, 0x10BFA0u);
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BFA0u; }
    }
    if (ctx->pc != 0x10BFA0u) { return; }
    ctx->pc = 0x10BFA0u;
label_10bfa0:
    // 0x10bfa0: 0x14400022
label_10bfa4:
    if (ctx->pc == 0x10BFA4u) {
        ctx->pc = 0x10BFA4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->pc = 0x10BFA8u;
        goto label_10bfa8;
    }
    ctx->pc = 0x10BFA0u;
    {
        const bool branch_taken_0x10bfa0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10BFA4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 24)));
        if (branch_taken_0x10bfa0) {
            ctx->pc = 0x10C02Cu;
            goto label_10c02c;
        }
    }
    ctx->pc = 0x10BFA8u;
label_10bfa8:
    // 0x10bfa8: 0x280202d
    ctx->pc = 0x10bfa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10bfac:
    // 0x10bfac: 0x80282d
    ctx->pc = 0x10bfacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10bfb0:
    // 0x10bfb0: 0xc04473c
label_10bfb4:
    if (ctx->pc == 0x10BFB4u) {
        ctx->pc = 0x10BFB8u;
        goto label_10bfb8;
    }
    ctx->pc = 0x10BFB0u;
    SET_GPR_U32(ctx, 31, 0x10BFB8u);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BFB8u; }
    }
    if (ctx->pc != 0x10BFB8u) { return; }
    ctx->pc = 0x10BFB8u;
label_10bfb8:
    // 0x10bfb8: 0x200202d
    ctx->pc = 0x10bfb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10bfbc:
    // 0x10bfbc: 0x40282d
    ctx->pc = 0x10bfbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10bfc0:
    // 0x10bfc0: 0xc04476c
label_10bfc4:
    if (ctx->pc == 0x10BFC4u) {
        ctx->pc = 0x10BFC8u;
        goto label_10bfc8;
    }
    ctx->pc = 0x10BFC0u;
    SET_GPR_U32(ctx, 31, 0x10BFC8u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BFC8u; }
    }
    if (ctx->pc != 0x10BFC8u) { return; }
    ctx->pc = 0x10BFC8u;
label_10bfc8:
    // 0x10bfc8: 0x220282d
    ctx->pc = 0x10bfc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10bfcc:
    // 0x10bfcc: 0x40202d
    ctx->pc = 0x10bfccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10bfd0:
    // 0x10bfd0: 0xc0448a6
label_10bfd4:
    if (ctx->pc == 0x10BFD4u) {
        ctx->pc = 0x10BFD8u;
        goto label_10bfd8;
    }
    ctx->pc = 0x10BFD0u;
    SET_GPR_U32(ctx, 31, 0x10BFD8u);
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BFD8u; }
    }
    if (ctx->pc != 0x10BFD8u) { return; }
    ctx->pc = 0x10BFD8u;
label_10bfd8:
    // 0x10bfd8: 0x14400013
label_10bfdc:
    if (ctx->pc == 0x10BFDCu) {
        ctx->pc = 0x10BFDCu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x10BFE0u;
        goto label_10bfe0;
    }
    ctx->pc = 0x10BFD8u;
    {
        const bool branch_taken_0x10bfd8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10BFDCu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x10bfd8) {
            ctx->pc = 0x10C028u;
            goto label_10c028;
        }
    }
    ctx->pc = 0x10BFE0u;
label_10bfe0:
    // 0x10bfe0: 0x24020022
    ctx->pc = 0x10bfe0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 34));
label_10bfe4:
    // 0x10bfe4: 0x982d
    ctx->pc = 0x10bfe4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10bfe8:
    // 0x10bfe8: 0xafc20000
    ctx->pc = 0x10bfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_10bfec:
    // 0x10bfec: 0x8fa40038
    ctx->pc = 0x10bfecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_10bff0:
    // 0x10bff0: 0x108001d6
label_10bff4:
    if (ctx->pc == 0x10BFF4u) {
        ctx->pc = 0x10BFF4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->pc = 0x10BFF8u;
        goto label_10bff8;
    }
    ctx->pc = 0x10BFF0u;
    {
        const bool branch_taken_0x10bff0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BFF4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x10bff0) {
            ctx->pc = 0x10C74Cu;
            goto label_10c74c;
        }
    }
    ctx->pc = 0x10BFF8u;
label_10bff8:
    // 0x10bff8: 0x100001c5
label_10bffc:
    if (ctx->pc == 0x10BFFCu) {
        ctx->pc = 0x10BFFCu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x10C000u;
        goto label_10c000;
    }
    ctx->pc = 0x10BFF8u;
    {
        const bool branch_taken_0x10bff8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BFFCu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x10bff8) {
            ctx->pc = 0x10C710u;
            goto label_10c710;
        }
    }
    ctx->pc = 0x10C000u;
label_10c000:
    // 0x10c000: 0x260202d
    ctx->pc = 0x10c000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10c004:
    // 0x10c004: 0xc042238
label_10c008:
    if (ctx->pc == 0x10C008u) {
        ctx->pc = 0x10C00Cu;
        goto label_10c00c;
    }
    ctx->pc = 0x10C004u;
    SET_GPR_U32(ctx, 31, 0x10C00Cu);
    ctx->pc = 0x1088E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001088E0_0x1088e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C00Cu; }
    }
    if (ctx->pc != 0x10C00Cu) { return; }
    ctx->pc = 0x10C00Cu;
label_10c00c:
    // 0x10c00c: 0x260282d
    ctx->pc = 0x10c00cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10c010:
    // 0x10c010: 0x40202d
    ctx->pc = 0x10c010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c014:
    // 0x10c014: 0xc04473c
label_10c018:
    if (ctx->pc == 0x10C018u) {
        ctx->pc = 0x10C01Cu;
        goto label_10c01c;
    }
    ctx->pc = 0x10C014u;
    SET_GPR_U32(ctx, 31, 0x10C01Cu);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C01Cu; }
    }
    if (ctx->pc != 0x10C01Cu) { return; }
    ctx->pc = 0x10C01Cu;
label_10c01c:
    // 0x10c01c: 0x100001bb
label_10c020:
    if (ctx->pc == 0x10C020u) {
        ctx->pc = 0x10C020u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10C024u;
        goto label_10c024;
    }
    ctx->pc = 0x10C01Cu;
    {
        const bool branch_taken_0x10c01c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10C020u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10c01c) {
            ctx->pc = 0x10C70Cu;
            goto label_10c70c;
        }
    }
    ctx->pc = 0x10C024u;
label_10c024:
    // 0x10c024: 0x0
    ctx->pc = 0x10c024u;
    // NOP
label_10c028:
    // 0x10c028: 0x8fa50018
    ctx->pc = 0x10c028u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_10c02c:
    // 0x10c02c: 0x2e0302d
    ctx->pc = 0x10c02cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_10c030:
    // 0x10c030: 0x8fa80020
    ctx->pc = 0x10c030u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_10c034:
    // 0x10c034: 0x240382d
    ctx->pc = 0x10c034u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10c038:
    // 0x10c038: 0xc041ff6
label_10c03c:
    if (ctx->pc == 0x10C03Cu) {
        ctx->pc = 0x10C03Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10C040u;
        goto label_10c040;
    }
    ctx->pc = 0x10C038u;
    SET_GPR_U32(ctx, 31, 0x10C040u);
    ctx->pc = 0x10C03Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107FD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107FD8_0x107fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C040u; }
    }
    if (ctx->pc != 0x10C040u) { return; }
    ctx->pc = 0x10C040u;
label_10c040:
    // 0x10c040: 0xafa20038
    ctx->pc = 0x10c040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_10c044:
    // 0x10c044: 0x2442000c
    ctx->pc = 0x10c044u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12));
label_10c048:
    // 0x10c048: 0x1000013a
label_10c04c:
    if (ctx->pc == 0x10C04Cu) {
        ctx->pc = 0x10C04Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x10C050u;
        goto label_10c050;
    }
    ctx->pc = 0x10C048u;
    {
        const bool branch_taken_0x10c048 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10C04Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        if (branch_taken_0x10c048) {
            ctx->pc = 0x10C534u;
            goto label_10c534;
        }
    }
    ctx->pc = 0x10C050u;
label_10c050:
    // 0x10c050: 0x3c0202d
    ctx->pc = 0x10c050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_10c054:
    // 0x10c054: 0xc042164
label_10c058:
    if (ctx->pc == 0x10C058u) {
        ctx->pc = 0x10C058u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x10C05Cu;
        goto label_10c05c;
    }
    ctx->pc = 0x10C054u;
    SET_GPR_U32(ctx, 31, 0x10C05Cu);
    ctx->pc = 0x10C058u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x108590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108590_0x108590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C05Cu; }
    }
    if (ctx->pc != 0x10C05Cu) { return; }
    ctx->pc = 0x10C05Cu;
label_10c05c:
    // 0x10c05c: 0x8fa5003c
    ctx->pc = 0x10c05cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_10c060:
    // 0x10c060: 0x40202d
    ctx->pc = 0x10c060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c064:
    // 0x10c064: 0xc0421ba
label_10c068:
    if (ctx->pc == 0x10C068u) {
        ctx->pc = 0x10C068u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->pc = 0x10C06Cu;
        goto label_10c06c;
    }
    ctx->pc = 0x10C064u;
    SET_GPR_U32(ctx, 31, 0x10C06Cu);
    ctx->pc = 0x10C068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    ctx->pc = 0x1086E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001086E8_0x1086e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C06Cu; }
    }
    if (ctx->pc != 0x10C06Cu) { return; }
    ctx->pc = 0x10C06Cu;
label_10c06c:
    // 0x10c06c: 0x184001a8
label_10c070:
    if (ctx->pc == 0x10C070u) {
        ctx->pc = 0x10C070u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x10C074u;
        goto label_10c074;
    }
    ctx->pc = 0x10C06Cu;
    {
        const bool branch_taken_0x10c06c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10C070u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x10c06c) {
            ctx->pc = 0x10C710u;
            goto label_10c710;
        }
    }
    ctx->pc = 0x10C074u;
label_10c074:
    // 0x10c074: 0x1000001d
label_10c078:
    if (ctx->pc == 0x10C078u) {
        ctx->pc = 0x10C07Cu;
        goto label_10c07c;
    }
    ctx->pc = 0x10C074u;
    {
        const bool branch_taken_0x10c074 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x10c074) {
            ctx->pc = 0x10C0ECu;
            goto label_10c0ec;
        }
    }
    ctx->pc = 0x10C07Cu;
label_10c07c:
    // 0x10c07c: 0x0
    ctx->pc = 0x10c07cu;
    // NOP
label_10c080:
    // 0x10c080: 0x14800043
label_10c084:
    if (ctx->pc == 0x10C084u) {
        ctx->pc = 0x10C084u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x10C088u;
        goto label_10c088;
    }
    ctx->pc = 0x10C080u;
    {
        const bool branch_taken_0x10c080 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x10C084u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 60)));
        if (branch_taken_0x10c080) {
            ctx->pc = 0x10C190u;
            goto label_10c190;
        }
    }
    ctx->pc = 0x10C088u;
label_10c088:
    // 0x10c088: 0x12a00013
label_10c08c:
    if (ctx->pc == 0x10C08Cu) {
        ctx->pc = 0x10C090u;
        goto label_10c090;
    }
    ctx->pc = 0x10C088u;
    {
        const bool branch_taken_0x10c088 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        if (branch_taken_0x10c088) {
            ctx->pc = 0x10C0D8u;
            goto label_10c0d8;
        }
    }
    ctx->pc = 0x10C090u;
label_10c090:
    // 0x10c090: 0x2403ffff
    ctx->pc = 0x10c090u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_10c094:
    // 0x10c094: 0x31b3a
    ctx->pc = 0x10c094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 12);
label_10c098:
    // 0x10c098: 0x2631024
    ctx->pc = 0x10c098u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_10c09c:
    // 0x10c09c: 0x14430024
label_10c0a0:
    if (ctx->pc == 0x10C0A0u) {
        ctx->pc = 0x10C0A0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)32752 << 16));
        ctx->pc = 0x10C0A4u;
        goto label_10c0a4;
    }
    ctx->pc = 0x10C09Cu;
    {
        const bool branch_taken_0x10c09c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x10C0A0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)32752 << 16));
        if (branch_taken_0x10c09c) {
            ctx->pc = 0x10C130u;
            goto label_10c130;
        }
    }
    ctx->pc = 0x10C0A4u;
label_10c0a4:
    // 0x10c0a4: 0x13103f
    ctx->pc = 0x10c0a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 19) >> (32 + 0));
label_10c0a8:
    // 0x10c0a8: 0x431024
    ctx->pc = 0x10c0a8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10c0ac:
    // 0x10c0ac: 0x3c03ffff
    ctx->pc = 0x10c0acu;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
label_10c0b0:
    // 0x10c0b0: 0x3183e
    ctx->pc = 0x10c0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_10c0b4:
    // 0x10c0b4: 0x3c040010
    ctx->pc = 0x10c0b4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)16 << 16));
label_10c0b8:
    // 0x10c0b8: 0x2639824
    ctx->pc = 0x10c0b8u;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_10c0bc:
    // 0x10c0bc: 0x44102d
    ctx->pc = 0x10c0bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
label_10c0c0:
    // 0x10c0c0: 0x2403ffff
    ctx->pc = 0x10c0c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_10c0c4:
    // 0x10c0c4: 0x3183c
    ctx->pc = 0x10c0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_10c0c8:
    // 0x10c0c8: 0x2103c
    ctx->pc = 0x10c0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_10c0cc:
    // 0x10c0cc: 0x2629825
    ctx->pc = 0x10c0ccu;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_10c0d0:
    // 0x10c0d0: 0x1000018e
label_10c0d4:
    if (ctx->pc == 0x10C0D4u) {
        ctx->pc = 0x10C0D4u;
        SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->pc = 0x10C0D8u;
        goto label_10c0d8;
    }
    ctx->pc = 0x10C0D0u;
    {
        const bool branch_taken_0x10c0d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10C0D4u;
        SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        if (branch_taken_0x10c0d0) {
            ctx->pc = 0x10C70Cu;
            goto label_10c70c;
        }
    }
    ctx->pc = 0x10C0D8u;
label_10c0d8:
    // 0x10c0d8: 0x2402ffff
    ctx->pc = 0x10c0d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_10c0dc:
    // 0x10c0dc: 0x2133a
    ctx->pc = 0x10c0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
label_10c0e0:
    // 0x10c0e0: 0x2621024
    ctx->pc = 0x10c0e0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_10c0e4:
    // 0x10c0e4: 0x14400012
label_10c0e8:
    if (ctx->pc == 0x10C0E8u) {
        ctx->pc = 0x10C0ECu;
        goto label_10c0ec;
    }
    ctx->pc = 0x10C0E4u;
    {
        const bool branch_taken_0x10c0e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x10c0e4) {
            ctx->pc = 0x10C130u;
            goto label_10c130;
        }
    }
    ctx->pc = 0x10C0ECu;
label_10c0ec:
    // 0x10c0ec: 0x13103f
    ctx->pc = 0x10c0ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 19) >> (32 + 0));
label_10c0f0:
    // 0x10c0f0: 0x3c037ff0
    ctx->pc = 0x10c0f0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32752 << 16));
label_10c0f4:
    // 0x10c0f4: 0x431024
    ctx->pc = 0x10c0f4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10c0f8:
    // 0x10c0f8: 0x2403ffff
    ctx->pc = 0x10c0f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_10c0fc:
    // 0x10c0fc: 0x31b3c
    ctx->pc = 0x10c0fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
label_10c100:
    // 0x10c100: 0x31b3a
    ctx->pc = 0x10c100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 12);
label_10c104:
    // 0x10c104: 0x3c04fff0
    ctx->pc = 0x10c104u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65520 << 16));
label_10c108:
    // 0x10c108: 0x3c05ffff
    ctx->pc = 0x10c108u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65535 << 16));
label_10c10c:
    // 0x10c10c: 0x5283e
    ctx->pc = 0x10c10cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_10c110:
    // 0x10c110: 0x441021
    ctx->pc = 0x10c110u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_10c114:
    // 0x10c114: 0x2659824
    ctx->pc = 0x10c114u;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_10c118:
    // 0x10c118: 0x2103c
    ctx->pc = 0x10c118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_10c11c:
    // 0x10c11c: 0x621825
    ctx->pc = 0x10c11cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10c120:
    // 0x10c120: 0x2639825
    ctx->pc = 0x10c120u;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_10c124:
    // 0x10c124: 0x10000179
label_10c128:
    if (ctx->pc == 0x10C128u) {
        ctx->pc = 0x10C128u;
        SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->pc = 0x10C12Cu;
        goto label_10c12c;
    }
    ctx->pc = 0x10C124u;
    {
        const bool branch_taken_0x10c124 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10C128u;
        SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        if (branch_taken_0x10c124) {
            ctx->pc = 0x10C70Cu;
            goto label_10c70c;
        }
    }
    ctx->pc = 0x10C12Cu;
label_10c12c:
    // 0x10c12c: 0x0
    ctx->pc = 0x10c12cu;
    // NOP
label_10c130:
    // 0x10c130: 0x13103c
    ctx->pc = 0x10c130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
label_10c134:
    // 0x10c134: 0x2103f
    ctx->pc = 0x10c134u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_10c138:
    // 0x10c138: 0x30420001
    ctx->pc = 0x10c138u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_10c13c:
    // 0x10c13c: 0x10400174
label_10c140:
    if (ctx->pc == 0x10C140u) {
        ctx->pc = 0x10C140u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x10C144u;
        goto label_10c144;
    }
    ctx->pc = 0x10C13Cu;
    {
        const bool branch_taken_0x10c13c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10C140u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x10c13c) {
            ctx->pc = 0x10C710u;
            goto label_10c710;
        }
    }
    ctx->pc = 0x10C144u;
label_10c144:
    // 0x10c144: 0x16a0ffae
label_10c148:
    if (ctx->pc == 0x10C148u) {
        ctx->pc = 0x10C14Cu;
        goto label_10c14c;
    }
    ctx->pc = 0x10C144u;
    {
        const bool branch_taken_0x10c144 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        if (branch_taken_0x10c144) {
            ctx->pc = 0x10C000u;
            goto label_10c000;
        }
    }
    ctx->pc = 0x10C14Cu;
label_10c14c:
    // 0x10c14c: 0x260202d
    ctx->pc = 0x10c14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10c150:
    // 0x10c150: 0xc042238
label_10c154:
    if (ctx->pc == 0x10C154u) {
        ctx->pc = 0x10C158u;
        goto label_10c158;
    }
    ctx->pc = 0x10C150u;
    SET_GPR_U32(ctx, 31, 0x10C158u);
    ctx->pc = 0x1088E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001088E0_0x1088e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C158u; }
    }
    if (ctx->pc != 0x10C158u) { return; }
    ctx->pc = 0x10C158u;
label_10c158:
    // 0x10c158: 0x260202d
    ctx->pc = 0x10c158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10c15c:
    // 0x10c15c: 0x40282d
    ctx->pc = 0x10c15cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c160:
    // 0x10c160: 0xc044752
label_10c164:
    if (ctx->pc == 0x10C164u) {
        ctx->pc = 0x10C168u;
        goto label_10c168;
    }
    ctx->pc = 0x10C160u;
    SET_GPR_U32(ctx, 31, 0x10C168u);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C168u; }
    }
    if (ctx->pc != 0x10C168u) { return; }
    ctx->pc = 0x10C168u;
label_10c168:
    // 0x10c168: 0x282d
    ctx->pc = 0x10c168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10c16c:
    // 0x10c16c: 0x40202d
    ctx->pc = 0x10c16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c170:
    // 0x10c170: 0x40982d
    ctx->pc = 0x10c170u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c174:
    // 0x10c174: 0xc0448a6
label_10c178:
    if (ctx->pc == 0x10C178u) {
        ctx->pc = 0x10C17Cu;
        goto label_10c17c;
    }
    ctx->pc = 0x10C174u;
    SET_GPR_U32(ctx, 31, 0x10C17Cu);
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C17Cu; }
    }
    if (ctx->pc != 0x10C17Cu) { return; }
    ctx->pc = 0x10C17Cu;
label_10c17c:
    // 0x10c17c: 0x1040ff98
label_10c180:
    if (ctx->pc == 0x10C180u) {
        ctx->pc = 0x10C180u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x10C184u;
        goto label_10c184;
    }
    ctx->pc = 0x10C17Cu;
    {
        const bool branch_taken_0x10c17c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10C180u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x10c17c) {
            ctx->pc = 0x10BFE0u;
            goto label_10bfe0;
        }
    }
    ctx->pc = 0x10C184u;
label_10c184:
    // 0x10c184: 0x10000162
label_10c188:
    if (ctx->pc == 0x10C188u) {
        ctx->pc = 0x10C18Cu;
        goto label_10c18c;
    }
    ctx->pc = 0x10C184u;
    {
        const bool branch_taken_0x10c184 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x10c184) {
            ctx->pc = 0x10C710u;
            goto label_10c710;
        }
    }
    ctx->pc = 0x10C18Cu;
label_10c18c:
    // 0x10c18c: 0x0
    ctx->pc = 0x10c18cu;
    // NOP
label_10c190:
    // 0x10c190: 0xc042334
label_10c194:
    if (ctx->pc == 0x10C194u) {
        ctx->pc = 0x10C194u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x10C198u;
        goto label_10c198;
    }
    ctx->pc = 0x10C190u;
    SET_GPR_U32(ctx, 31, 0x10C198u);
    ctx->pc = 0x10C194u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->pc = 0x108CD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108CD0_0x108cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C198u; }
    }
    if (ctx->pc != 0x10C198u) { return; }
    ctx->pc = 0x10C198u;
label_10c198:
    // 0x10c198: 0x34058000
    ctx->pc = 0x10c198u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32768));
label_10c19c:
    // 0x10c19c: 0x52bfc
    ctx->pc = 0x10c19cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_10c1a0:
    // 0x10c1a0: 0x40802d
    ctx->pc = 0x10c1a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c1a4:
    // 0x10c1a4: 0x200202d
    ctx->pc = 0x10c1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10c1a8:
    // 0x10c1a8: 0xc0448a6
label_10c1ac:
    if (ctx->pc == 0x10C1ACu) {
        ctx->pc = 0x10C1B0u;
        goto label_10c1b0;
    }
    ctx->pc = 0x10C1A8u;
    SET_GPR_U32(ctx, 31, 0x10C1B0u);
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C1B0u; }
    }
    if (ctx->pc != 0x10C1B0u) { return; }
    ctx->pc = 0x10C1B0u;
label_10c1b0:
    // 0x10c1b0: 0x1c40002f
label_10c1b4:
    if (ctx->pc == 0x10C1B4u) {
        ctx->pc = 0x10C1B8u;
        goto label_10c1b8;
    }
    ctx->pc = 0x10C1B0u;
    {
        const bool branch_taken_0x10c1b0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x10c1b0) {
            ctx->pc = 0x10C270u;
            goto label_10c270;
        }
    }
    ctx->pc = 0x10C1B8u;
label_10c1b8:
    // 0x10c1b8: 0x12a00007
label_10c1bc:
    if (ctx->pc == 0x10C1BCu) {
        ctx->pc = 0x10C1C0u;
        goto label_10c1c0;
    }
    ctx->pc = 0x10C1B8u;
    {
        const bool branch_taken_0x10c1b8 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        if (branch_taken_0x10c1b8) {
            ctx->pc = 0x10C1D8u;
            goto label_10c1d8;
        }
    }
    ctx->pc = 0x10C1C0u;
label_10c1c0:
    // 0x10c1c0: 0x3410ffc0
    ctx->pc = 0x10c1c0u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 0), 65472));
label_10c1c4:
    // 0x10c1c4: 0x1083bc
    ctx->pc = 0x10c1c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
label_10c1c8:
    // 0x10c1c8: 0x200882d
    ctx->pc = 0x10c1c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10c1cc:
    // 0x10c1cc: 0x1000003c
label_10c1d0:
    if (ctx->pc == 0x10C1D0u) {
        ctx->pc = 0x10C1D4u;
        goto label_10c1d4;
    }
    ctx->pc = 0x10C1CCu;
    {
        const bool branch_taken_0x10c1cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x10c1cc) {
            ctx->pc = 0x10C2C0u;
            goto label_10c2c0;
        }
    }
    ctx->pc = 0x10C1D4u;
label_10c1d4:
    // 0x10c1d4: 0x0
    ctx->pc = 0x10c1d4u;
    // NOP
label_10c1d8:
    // 0x10c1d8: 0x2402ffff
    ctx->pc = 0x10c1d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_10c1dc:
    // 0x10c1dc: 0x2133a
    ctx->pc = 0x10c1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
label_10c1e0:
    // 0x10c1e0: 0x2621024
    ctx->pc = 0x10c1e0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_10c1e4:
    // 0x10c1e4: 0x1040000a
label_10c1e8:
    if (ctx->pc == 0x10C1E8u) {
        ctx->pc = 0x10C1E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x10C1ECu;
        goto label_10c1ec;
    }
    ctx->pc = 0x10C1E4u;
    {
        const bool branch_taken_0x10c1e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10C1E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x10c1e4) {
            ctx->pc = 0x10C210u;
            goto label_10c210;
        }
    }
    ctx->pc = 0x10C1ECu;
label_10c1ec:
    // 0x10c1ec: 0x1262ff7d
label_10c1f0:
    if (ctx->pc == 0x10C1F0u) {
        ctx->pc = 0x10C1F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 34));
        ctx->pc = 0x10C1F4u;
        goto label_10c1f4;
    }
    ctx->pc = 0x10C1ECu;
    {
        const bool branch_taken_0x10c1ec = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x10C1F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 34));
        if (branch_taken_0x10c1ec) {
            ctx->pc = 0x10BFE4u;
            goto label_10bfe4;
        }
    }
    ctx->pc = 0x10C1F4u;
label_10c1f4:
    // 0x10c1f4: 0x3410ffc0
    ctx->pc = 0x10c1f4u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 0), 65472));
label_10c1f8:
    // 0x10c1f8: 0x1083bc
    ctx->pc = 0x10c1f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
label_10c1fc:
    // 0x10c1fc: 0x3411bff0
    ctx->pc = 0x10c1fcu;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 0), 49136));
label_10c200:
    // 0x10c200: 0x118c3c
    ctx->pc = 0x10c200u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 16));
label_10c204:
    // 0x10c204: 0x1000002e
label_10c208:
    if (ctx->pc == 0x10C208u) {
        ctx->pc = 0x10C20Cu;
        goto label_10c20c;
    }
    ctx->pc = 0x10C204u;
    {
        const bool branch_taken_0x10c204 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x10c204) {
            ctx->pc = 0x10C2C0u;
            goto label_10c2c0;
        }
    }
    ctx->pc = 0x10C20Cu;
label_10c20c:
    // 0x10c20c: 0x0
    ctx->pc = 0x10c20cu;
    // NOP
label_10c210:
    // 0x10c210: 0x3405ffc0
    ctx->pc = 0x10c210u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65472));
label_10c214:
    // 0x10c214: 0x52bbc
    ctx->pc = 0x10c214u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_10c218:
    // 0x10c218: 0x200202d
    ctx->pc = 0x10c218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10c21c:
    // 0x10c21c: 0xc0448a6
label_10c220:
    if (ctx->pc == 0x10C220u) {
        ctx->pc = 0x10C224u;
        goto label_10c224;
    }
    ctx->pc = 0x10C21Cu;
    SET_GPR_U32(ctx, 31, 0x10C224u);
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C224u; }
    }
    if (ctx->pc != 0x10C224u) { return; }
    ctx->pc = 0x10C224u;
label_10c224:
    // 0x10c224: 0x4410006
label_10c228:
    if (ctx->pc == 0x10C228u) {
        ctx->pc = 0x10C22Cu;
        goto label_10c22c;
    }
    ctx->pc = 0x10C224u;
    {
        const bool branch_taken_0x10c224 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x10c224) {
            ctx->pc = 0x10C240u;
            goto label_10c240;
        }
    }
    ctx->pc = 0x10C22Cu;
label_10c22c:
    // 0x10c22c: 0x3410ff80
    ctx->pc = 0x10c22cu;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 0), 65408));
label_10c230:
    // 0x10c230: 0x1083bc
    ctx->pc = 0x10c230u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
label_10c234:
    // 0x10c234: 0x10000008
label_10c238:
    if (ctx->pc == 0x10C238u) {
        ctx->pc = 0x10C23Cu;
        goto label_10c23c;
    }
    ctx->pc = 0x10C234u;
    {
        const bool branch_taken_0x10c234 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x10c234) {
            ctx->pc = 0x10C258u;
            goto label_10c258;
        }
    }
    ctx->pc = 0x10C23Cu;
label_10c23c:
    // 0x10c23c: 0x0
    ctx->pc = 0x10c23cu;
    // NOP
label_10c240:
    // 0x10c240: 0x3405ff80
    ctx->pc = 0x10c240u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65408));
label_10c244:
    // 0x10c244: 0x52bbc
    ctx->pc = 0x10c244u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_10c248:
    // 0x10c248: 0x200202d
    ctx->pc = 0x10c248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10c24c:
    // 0x10c24c: 0xc04476c
label_10c250:
    if (ctx->pc == 0x10C250u) {
        ctx->pc = 0x10C254u;
        goto label_10c254;
    }
    ctx->pc = 0x10C24Cu;
    SET_GPR_U32(ctx, 31, 0x10C254u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C254u; }
    }
    if (ctx->pc != 0x10C254u) { return; }
    ctx->pc = 0x10C254u;
label_10c254:
    // 0x10c254: 0x40802d
    ctx->pc = 0x10c254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c258:
    // 0x10c258: 0x202d
    ctx->pc = 0x10c258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10c25c:
    // 0x10c25c: 0x200282d
    ctx->pc = 0x10c25cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10c260:
    // 0x10c260: 0xc044752
label_10c264:
    if (ctx->pc == 0x10C264u) {
        ctx->pc = 0x10C268u;
        goto label_10c268;
    }
    ctx->pc = 0x10C260u;
    SET_GPR_U32(ctx, 31, 0x10C268u);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C268u; }
    }
    if (ctx->pc != 0x10C268u) { return; }
    ctx->pc = 0x10C268u;
label_10c268:
    // 0x10c268: 0x10000014
label_10c26c:
    if (ctx->pc == 0x10C26Cu) {
        ctx->pc = 0x10C270u;
        goto label_10c270;
    }
    ctx->pc = 0x10C268u;
    {
        const bool branch_taken_0x10c268 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x10c268) {
            ctx->pc = 0x10C2BCu;
            goto label_10c2bc;
        }
    }
    ctx->pc = 0x10C270u;
label_10c270:
    // 0x10c270: 0x3412ff80
    ctx->pc = 0x10c270u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 0), 65408));
label_10c274:
    // 0x10c274: 0x1293bc
    ctx->pc = 0x10c274u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 14));
label_10c278:
    // 0x10c278: 0x200202d
    ctx->pc = 0x10c278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10c27c:
    // 0x10c27c: 0x240282d
    ctx->pc = 0x10c27cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10c280:
    // 0x10c280: 0xc04476c
label_10c284:
    if (ctx->pc == 0x10C284u) {
        ctx->pc = 0x10C288u;
        goto label_10c288;
    }
    ctx->pc = 0x10C280u;
    SET_GPR_U32(ctx, 31, 0x10C288u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C288u; }
    }
    if (ctx->pc != 0x10C288u) { return; }
    ctx->pc = 0x10C288u;
label_10c288:
    // 0x10c288: 0x40802d
    ctx->pc = 0x10c288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c28c:
    // 0x10c28c: 0x40882d
    ctx->pc = 0x10c28cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c290:
    // 0x10c290: 0x16a00006
label_10c294:
    if (ctx->pc == 0x10C294u) {
        ctx->pc = 0x10C298u;
        goto label_10c298;
    }
    ctx->pc = 0x10C290u;
    {
        const bool branch_taken_0x10c290 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        if (branch_taken_0x10c290) {
            ctx->pc = 0x10C2ACu;
            goto label_10c2ac;
        }
    }
    ctx->pc = 0x10C298u;
label_10c298:
    // 0x10c298: 0x202d
    ctx->pc = 0x10c298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10c29c:
    // 0x10c29c: 0x200282d
    ctx->pc = 0x10c29cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10c2a0:
    // 0x10c2a0: 0xc044752
label_10c2a4:
    if (ctx->pc == 0x10C2A4u) {
        ctx->pc = 0x10C2A8u;
        goto label_10c2a8;
    }
    ctx->pc = 0x10C2A0u;
    SET_GPR_U32(ctx, 31, 0x10C2A8u);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C2A8u; }
    }
    if (ctx->pc != 0x10C2A8u) { return; }
    ctx->pc = 0x10C2A8u;
label_10c2a8:
    // 0x10c2a8: 0x40882d
    ctx->pc = 0x10c2a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c2ac:
    // 0x10c2ac: 0x220202d
    ctx->pc = 0x10c2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10c2b0:
    // 0x10c2b0: 0x240282d
    ctx->pc = 0x10c2b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10c2b4:
    // 0x10c2b4: 0xc04473c
label_10c2b8:
    if (ctx->pc == 0x10C2B8u) {
        ctx->pc = 0x10C2BCu;
        goto label_10c2bc;
    }
    ctx->pc = 0x10C2B4u;
    SET_GPR_U32(ctx, 31, 0x10C2BCu);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C2BCu; }
    }
    if (ctx->pc != 0x10C2BCu) { return; }
    ctx->pc = 0x10C2BCu;
label_10c2bc:
    // 0x10c2bc: 0x40882d
    ctx->pc = 0x10c2bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c2c0:
    // 0x10c2c0: 0x13183f
    ctx->pc = 0x10c2c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 19) >> (32 + 0));
label_10c2c4:
    // 0x10c2c4: 0x3c177ff0
    ctx->pc = 0x10c2c4u;
    SET_GPR_U32(ctx, 23, ((uint32_t)32752 << 16));
label_10c2c8:
    // 0x10c2c8: 0x772024
    ctx->pc = 0x10c2c8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_10c2cc:
    // 0x10c2cc: 0x3c027fe0
    ctx->pc = 0x10c2ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32736 << 16));
label_10c2d0:
    // 0x10c2d0: 0x14820031
label_10c2d4:
    if (ctx->pc == 0x10C2D4u) {
        ctx->pc = 0x10C2D4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
        ctx->pc = 0x10C2D8u;
        goto label_10c2d8;
    }
    ctx->pc = 0x10C2D0u;
    {
        const bool branch_taken_0x10c2d0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x10C2D4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
        if (branch_taken_0x10c2d0) {
            ctx->pc = 0x10C398u;
            goto label_10c398;
        }
    }
    ctx->pc = 0x10C2D8u;
label_10c2d8:
    // 0x10c2d8: 0x3c02fcb0
    ctx->pc = 0x10c2d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)64688 << 16));
label_10c2dc:
    // 0x10c2dc: 0x3c12ffff
    ctx->pc = 0x10c2dcu;
    SET_GPR_U32(ctx, 18, ((uint32_t)65535 << 16));
label_10c2e0:
    // 0x10c2e0: 0x12903e
    ctx->pc = 0x10c2e0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
label_10c2e4:
    // 0x10c2e4: 0x621021
    ctx->pc = 0x10c2e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10c2e8:
    // 0x10c2e8: 0x260a02d
    ctx->pc = 0x10c2e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10c2ec:
    // 0x10c2ec: 0x2103c
    ctx->pc = 0x10c2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_10c2f0:
    // 0x10c2f0: 0x2729824
    ctx->pc = 0x10c2f0u;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_10c2f4:
    // 0x10c2f4: 0x2629825
    ctx->pc = 0x10c2f4u;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_10c2f8:
    // 0x10c2f8: 0x260202d
    ctx->pc = 0x10c2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10c2fc:
    // 0x10c2fc: 0xc042238
label_10c300:
    if (ctx->pc == 0x10C300u) {
        ctx->pc = 0x10C304u;
        goto label_10c304;
    }
    ctx->pc = 0x10C2FCu;
    SET_GPR_U32(ctx, 31, 0x10C304u);
    ctx->pc = 0x1088E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001088E0_0x1088e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C304u; }
    }
    if (ctx->pc != 0x10C304u) { return; }
    ctx->pc = 0x10C304u;
label_10c304:
    // 0x10c304: 0x220202d
    ctx->pc = 0x10c304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10c308:
    // 0x10c308: 0x40282d
    ctx->pc = 0x10c308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c30c:
    // 0x10c30c: 0xc04476c
label_10c310:
    if (ctx->pc == 0x10C310u) {
        ctx->pc = 0x10C314u;
        goto label_10c314;
    }
    ctx->pc = 0x10C30Cu;
    SET_GPR_U32(ctx, 31, 0x10C314u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C314u; }
    }
    if (ctx->pc != 0x10C314u) { return; }
    ctx->pc = 0x10C314u;
label_10c314:
    // 0x10c314: 0x260282d
    ctx->pc = 0x10c314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10c318:
    // 0x10c318: 0x40202d
    ctx->pc = 0x10c318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c31c:
    // 0x10c31c: 0xc04473c
label_10c320:
    if (ctx->pc == 0x10C320u) {
        ctx->pc = 0x10C324u;
        goto label_10c324;
    }
    ctx->pc = 0x10C31Cu;
    SET_GPR_U32(ctx, 31, 0x10C324u);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C324u; }
    }
    if (ctx->pc != 0x10C324u) { return; }
    ctx->pc = 0x10C324u;
label_10c324:
    // 0x10c324: 0x3c037c9f
    ctx->pc = 0x10c324u;
    SET_GPR_U32(ctx, 3, ((uint32_t)31903 << 16));
label_10c328:
    // 0x10c328: 0x40982d
    ctx->pc = 0x10c328u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c32c:
    // 0x10c32c: 0x3463ffff
    ctx->pc = 0x10c32cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
label_10c330:
    // 0x10c330: 0x13203f
    ctx->pc = 0x10c330u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 19) >> (32 + 0));
label_10c334:
    // 0x10c334: 0x971024
    ctx->pc = 0x10c334u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
label_10c338:
    // 0x10c338: 0x62182b
    ctx->pc = 0x10c338u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10c33c:
    // 0x10c33c: 0x10600010
label_10c340:
    if (ctx->pc == 0x10C340u) {
        ctx->pc = 0x10C340u;
        SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->pc = 0x10C344u;
        goto label_10c344;
    }
    ctx->pc = 0x10C33Cu;
    {
        const bool branch_taken_0x10c33c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x10C340u;
        SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        if (branch_taken_0x10c33c) {
            ctx->pc = 0x10C380u;
            goto label_10c380;
        }
    }
    ctx->pc = 0x10C344u;
label_10c344:
    // 0x10c344: 0x3c027fef
    ctx->pc = 0x10c344u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32751 << 16));
label_10c348:
    // 0x10c348: 0x3442ffff
    ctx->pc = 0x10c348u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_10c34c:
    // 0x10c34c: 0x21438
    ctx->pc = 0x10c34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_10c350:
    // 0x10c350: 0x3442ffff
    ctx->pc = 0x10c350u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_10c354:
    // 0x10c354: 0x21438
    ctx->pc = 0x10c354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_10c358:
    // 0x10c358: 0x3442ffff
    ctx->pc = 0x10c358u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_10c35c:
    // 0x10c35c: 0x1282fe95
label_10c360:
    if (ctx->pc == 0x10C360u) {
        ctx->pc = 0x10C360u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 34));
        ctx->pc = 0x10C364u;
        goto label_10c364;
    }
    ctx->pc = 0x10C35Cu;
    {
        const bool branch_taken_0x10c35c = (GPR_U32(ctx, 20) == GPR_U32(ctx, 2));
        ctx->pc = 0x10C360u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 34));
        if (branch_taken_0x10c35c) {
            ctx->pc = 0x10BDB4u;
            goto label_10bdb4;
        }
    }
    ctx->pc = 0x10C364u;
label_10c364:
    // 0x10c364: 0x3c027fef
    ctx->pc = 0x10c364u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32751 << 16));
label_10c368:
    // 0x10c368: 0x3442ffff
    ctx->pc = 0x10c368u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_10c36c:
    // 0x10c36c: 0x2103c
    ctx->pc = 0x10c36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_10c370:
    // 0x10c370: 0x2629825
    ctx->pc = 0x10c370u;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_10c374:
    // 0x10c374: 0x10000063
label_10c378:
    if (ctx->pc == 0x10C378u) {
        ctx->pc = 0x10C378u;
        SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->pc = 0x10C37Cu;
        goto label_10c37c;
    }
    ctx->pc = 0x10C374u;
    {
        const bool branch_taken_0x10c374 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10C378u;
        SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        if (branch_taken_0x10c374) {
            ctx->pc = 0x10C504u;
            goto label_10c504;
        }
    }
    ctx->pc = 0x10C37Cu;
label_10c37c:
    // 0x10c37c: 0x0
    ctx->pc = 0x10c37cu;
    // NOP
label_10c380:
    // 0x10c380: 0x3c020350
    ctx->pc = 0x10c380u;
    SET_GPR_U32(ctx, 2, ((uint32_t)848 << 16));
label_10c384:
    // 0x10c384: 0x441021
    ctx->pc = 0x10c384u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_10c388:
    // 0x10c388: 0x2103c
    ctx->pc = 0x10c388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_10c38c:
    // 0x10c38c: 0x1000002c
label_10c390:
    if (ctx->pc == 0x10C390u) {
        ctx->pc = 0x10C390u;
        SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->pc = 0x10C394u;
        goto label_10c394;
    }
    ctx->pc = 0x10C38Cu;
    {
        const bool branch_taken_0x10c38c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10C390u;
        SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        if (branch_taken_0x10c38c) {
            ctx->pc = 0x10C440u;
            goto label_10c440;
        }
    }
    ctx->pc = 0x10C394u;
label_10c394:
    // 0x10c394: 0x0
    ctx->pc = 0x10c394u;
    // NOP
label_10c398:
    // 0x10c398: 0x8fa30020
    ctx->pc = 0x10c398u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_10c39c:
    // 0x10c39c: 0x3c020340
    ctx->pc = 0x10c39cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)832 << 16));
label_10c3a0:
    // 0x10c3a0: 0x43102b
    ctx->pc = 0x10c3a0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10c3a4:
    // 0x10c3a4: 0x1440001a
label_10c3a8:
    if (ctx->pc == 0x10C3A8u) {
        ctx->pc = 0x10C3ACu;
        goto label_10c3ac;
    }
    ctx->pc = 0x10C3A4u;
    {
        const bool branch_taken_0x10c3a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x10c3a4) {
            ctx->pc = 0x10C410u;
            goto label_10c410;
        }
    }
    ctx->pc = 0x10C3ACu;
label_10c3ac:
    // 0x10c3ac: 0x3405ffc0
    ctx->pc = 0x10c3acu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65472));
label_10c3b0:
    // 0x10c3b0: 0x52bbc
    ctx->pc = 0x10c3b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_10c3b4:
    // 0x10c3b4: 0x200202d
    ctx->pc = 0x10c3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10c3b8:
    // 0x10c3b8: 0xc0448a6
label_10c3bc:
    if (ctx->pc == 0x10C3BCu) {
        ctx->pc = 0x10C3C0u;
        goto label_10c3c0;
    }
    ctx->pc = 0x10C3B8u;
    SET_GPR_U32(ctx, 31, 0x10C3C0u);
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C3C0u; }
    }
    if (ctx->pc != 0x10C3C0u) { return; }
    ctx->pc = 0x10C3C0u;
label_10c3c0:
    // 0x10c3c0: 0x4400013
label_10c3c4:
    if (ctx->pc == 0x10C3C4u) {
        ctx->pc = 0x10C3C8u;
        goto label_10c3c8;
    }
    ctx->pc = 0x10C3C0u;
    {
        const bool branch_taken_0x10c3c0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10c3c0) {
            ctx->pc = 0x10C410u;
            goto label_10c410;
        }
    }
    ctx->pc = 0x10C3C8u;
label_10c3c8:
    // 0x10c3c8: 0x3405ff80
    ctx->pc = 0x10c3c8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65408));
label_10c3cc:
    // 0x10c3cc: 0x52bbc
    ctx->pc = 0x10c3ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_10c3d0:
    // 0x10c3d0: 0x200202d
    ctx->pc = 0x10c3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10c3d4:
    // 0x10c3d4: 0xc04473c
label_10c3d8:
    if (ctx->pc == 0x10C3D8u) {
        ctx->pc = 0x10C3DCu;
        goto label_10c3dc;
    }
    ctx->pc = 0x10C3D4u;
    SET_GPR_U32(ctx, 31, 0x10C3DCu);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C3DCu; }
    }
    if (ctx->pc != 0x10C3DCu) { return; }
    ctx->pc = 0x10C3DCu;
label_10c3dc:
    // 0x10c3dc: 0x40202d
    ctx->pc = 0x10c3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c3e0:
    // 0x10c3e0: 0xc0448e8
label_10c3e4:
    if (ctx->pc == 0x10C3E4u) {
        ctx->pc = 0x10C3E8u;
        goto label_10c3e8;
    }
    ctx->pc = 0x10C3E0u;
    SET_GPR_U32(ctx, 31, 0x10C3E8u);
    ctx->pc = 0x1123A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001123A0_0x1123a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C3E8u; }
    }
    if (ctx->pc != 0x10C3E8u) { return; }
    ctx->pc = 0x10C3E8u;
label_10c3e8:
    // 0x10c3e8: 0xc0448ba
label_10c3ec:
    if (ctx->pc == 0x10C3ECu) {
        ctx->pc = 0x10C3ECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10C3F0u;
        goto label_10c3f0;
    }
    ctx->pc = 0x10C3E8u;
    SET_GPR_U32(ctx, 31, 0x10C3F0u);
    ctx->pc = 0x10C3ECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C3F0u; }
    }
    if (ctx->pc != 0x10C3F0u) { return; }
    ctx->pc = 0x10C3F0u;
label_10c3f0:
    // 0x10c3f0: 0x40882d
    ctx->pc = 0x10c3f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c3f4:
    // 0x10c3f4: 0x16a00006
label_10c3f8:
    if (ctx->pc == 0x10C3F8u) {
        ctx->pc = 0x10C3FCu;
        goto label_10c3fc;
    }
    ctx->pc = 0x10C3F4u;
    {
        const bool branch_taken_0x10c3f4 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        if (branch_taken_0x10c3f4) {
            ctx->pc = 0x10C410u;
            goto label_10c410;
        }
    }
    ctx->pc = 0x10C3FCu;
label_10c3fc:
    // 0x10c3fc: 0x220282d
    ctx->pc = 0x10c3fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10c400:
    // 0x10c400: 0x202d
    ctx->pc = 0x10c400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10c404:
    // 0x10c404: 0xc044752
label_10c408:
    if (ctx->pc == 0x10C408u) {
        ctx->pc = 0x10C40Cu;
        goto label_10c40c;
    }
    ctx->pc = 0x10C404u;
    SET_GPR_U32(ctx, 31, 0x10C40Cu);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C40Cu; }
    }
    if (ctx->pc != 0x10C40Cu) { return; }
    ctx->pc = 0x10C40Cu;
label_10c40c:
    // 0x10c40c: 0x40882d
    ctx->pc = 0x10c40cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c410:
    // 0x10c410: 0x260202d
    ctx->pc = 0x10c410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10c414:
    // 0x10c414: 0xc042238
label_10c418:
    if (ctx->pc == 0x10C418u) {
        ctx->pc = 0x10C41Cu;
        goto label_10c41c;
    }
    ctx->pc = 0x10C414u;
    SET_GPR_U32(ctx, 31, 0x10C41Cu);
    ctx->pc = 0x1088E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001088E0_0x1088e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C41Cu; }
    }
    if (ctx->pc != 0x10C41Cu) { return; }
    ctx->pc = 0x10C41Cu;
label_10c41c:
    // 0x10c41c: 0x220202d
    ctx->pc = 0x10c41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10c420:
    // 0x10c420: 0x40282d
    ctx->pc = 0x10c420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c424:
    // 0x10c424: 0xc04476c
label_10c428:
    if (ctx->pc == 0x10C428u) {
        ctx->pc = 0x10C42Cu;
        goto label_10c42c;
    }
    ctx->pc = 0x10C424u;
    SET_GPR_U32(ctx, 31, 0x10C42Cu);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C42Cu; }
    }
    if (ctx->pc != 0x10C42Cu) { return; }
    ctx->pc = 0x10C42Cu;
label_10c42c:
    // 0x10c42c: 0x260282d
    ctx->pc = 0x10c42cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10c430:
    // 0x10c430: 0x40202d
    ctx->pc = 0x10c430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c434:
    // 0x10c434: 0xc04473c
label_10c438:
    if (ctx->pc == 0x10C438u) {
        ctx->pc = 0x10C43Cu;
        goto label_10c43c;
    }
    ctx->pc = 0x10C434u;
    SET_GPR_U32(ctx, 31, 0x10C43Cu);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C43Cu; }
    }
    if (ctx->pc != 0x10C43Cu) { return; }
    ctx->pc = 0x10C43Cu;
label_10c43c:
    // 0x10c43c: 0x40982d
    ctx->pc = 0x10c43cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c440:
    // 0x10c440: 0x8fa40020
    ctx->pc = 0x10c440u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_10c444:
    // 0x10c444: 0x3c037ff0
    ctx->pc = 0x10c444u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32752 << 16));
label_10c448:
    // 0x10c448: 0x4103c
    ctx->pc = 0x10c448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
label_10c44c:
    // 0x10c44c: 0x13203f
    ctx->pc = 0x10c44cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 19) >> (32 + 0));
label_10c450:
    // 0x10c450: 0x2103e
    ctx->pc = 0x10c450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_10c454:
    // 0x10c454: 0x838824
    ctx->pc = 0x10c454u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_10c458:
    // 0x10c458: 0x1451002b
label_10c45c:
    if (ctx->pc == 0x10C45Cu) {
        ctx->pc = 0x10C45Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x10C460u;
        goto label_10c460;
    }
    ctx->pc = 0x10C458u;
    {
        const bool branch_taken_0x10c458 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        ctx->pc = 0x10C45Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x10c458) {
            ctx->pc = 0x10C508u;
            goto label_10c508;
        }
    }
    ctx->pc = 0x10C460u;
label_10c460:
    // 0x10c460: 0x200202d
    ctx->pc = 0x10c460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10c464:
    // 0x10c464: 0xc044574
label_10c468:
    if (ctx->pc == 0x10C468u) {
        ctx->pc = 0x10C46Cu;
        goto label_10c46c;
    }
    ctx->pc = 0x10C464u;
    SET_GPR_U32(ctx, 31, 0x10C46Cu);
    ctx->pc = 0x1115D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001115D0_0x1115d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C46Cu; }
    }
    if (ctx->pc != 0x10C46Cu) { return; }
    ctx->pc = 0x10C46Cu;
label_10c46c:
    // 0x10c46c: 0xc0444ca
label_10c470:
    if (ctx->pc == 0x10C470u) {
        ctx->pc = 0x10C470u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10C474u;
        goto label_10c474;
    }
    ctx->pc = 0x10C46Cu;
    SET_GPR_U32(ctx, 31, 0x10C474u);
    ctx->pc = 0x10C470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111328u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111328_0x111328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C474u; }
    }
    if (ctx->pc != 0x10C474u) { return; }
    ctx->pc = 0x10C474u;
label_10c474:
    // 0x10c474: 0x200202d
    ctx->pc = 0x10c474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10c478:
    // 0x10c478: 0x40282d
    ctx->pc = 0x10c478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c47c:
    // 0x10c47c: 0xc044752
label_10c480:
    if (ctx->pc == 0x10C480u) {
        ctx->pc = 0x10C484u;
        goto label_10c484;
    }
    ctx->pc = 0x10C47Cu;
    SET_GPR_U32(ctx, 31, 0x10C484u);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C484u; }
    }
    if (ctx->pc != 0x10C484u) { return; }
    ctx->pc = 0x10C484u;
label_10c484:
    // 0x10c484: 0x40802d
    ctx->pc = 0x10c484u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c488:
    // 0x10c488: 0x16a00006
label_10c48c:
    if (ctx->pc == 0x10C48Cu) {
        ctx->pc = 0x10C490u;
        goto label_10c490;
    }
    ctx->pc = 0x10C488u;
    {
        const bool branch_taken_0x10c488 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        if (branch_taken_0x10c488) {
            ctx->pc = 0x10C4A4u;
            goto label_10c4a4;
        }
    }
    ctx->pc = 0x10C490u;
label_10c490:
    // 0x10c490: 0x2402ffff
    ctx->pc = 0x10c490u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_10c494:
    // 0x10c494: 0x2133a
    ctx->pc = 0x10c494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
label_10c498:
    // 0x10c498: 0x2621024
    ctx->pc = 0x10c498u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_10c49c:
    // 0x10c49c: 0x10400012
label_10c4a0:
    if (ctx->pc == 0x10C4A0u) {
        ctx->pc = 0x10C4A4u;
        goto label_10c4a4;
    }
    ctx->pc = 0x10C49Cu;
    {
        const bool branch_taken_0x10c49c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x10c49c) {
            ctx->pc = 0x10C4E8u;
            goto label_10c4e8;
        }
    }
    ctx->pc = 0x10C4A4u;
label_10c4a4:
    // 0x10c4a4: 0x3c010023
    ctx->pc = 0x10c4a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
label_10c4a8:
    // 0x10c4a8: 0xdc257b08
    ctx->pc = 0x10c4a8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 31496)));
label_10c4ac:
    // 0x10c4ac: 0x200202d
    ctx->pc = 0x10c4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10c4b0:
    // 0x10c4b0: 0xc0448a6
label_10c4b4:
    if (ctx->pc == 0x10C4B4u) {
        ctx->pc = 0x10C4B8u;
        goto label_10c4b8;
    }
    ctx->pc = 0x10C4B0u;
    SET_GPR_U32(ctx, 31, 0x10C4B8u);
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C4B8u; }
    }
    if (ctx->pc != 0x10C4B8u) { return; }
    ctx->pc = 0x10C4B8u;
label_10c4b8:
    // 0x10c4b8: 0x4400095
label_10c4bc:
    if (ctx->pc == 0x10C4BCu) {
        ctx->pc = 0x10C4BCu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x10C4C0u;
        goto label_10c4c0;
    }
    ctx->pc = 0x10C4B8u;
    {
        const bool branch_taken_0x10c4b8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x10C4BCu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x10c4b8) {
            ctx->pc = 0x10C710u;
            goto label_10c710;
        }
    }
    ctx->pc = 0x10C4C0u;
label_10c4c0:
    // 0x10c4c0: 0x3c010023
    ctx->pc = 0x10c4c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
label_10c4c4:
    // 0x10c4c4: 0xdc257b10
    ctx->pc = 0x10c4c4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 31504)));
label_10c4c8:
    // 0x10c4c8: 0x200202d
    ctx->pc = 0x10c4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10c4cc:
    // 0x10c4cc: 0xc0448a6
label_10c4d0:
    if (ctx->pc == 0x10C4D0u) {
        ctx->pc = 0x10C4D4u;
        goto label_10c4d4;
    }
    ctx->pc = 0x10C4CCu;
    SET_GPR_U32(ctx, 31, 0x10C4D4u);
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C4D4u; }
    }
    if (ctx->pc != 0x10C4D4u) { return; }
    ctx->pc = 0x10C4D4u;
label_10c4d4:
    // 0x10c4d4: 0x1c40008e
label_10c4d8:
    if (ctx->pc == 0x10C4D8u) {
        ctx->pc = 0x10C4D8u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x10C4DCu;
        goto label_10c4dc;
    }
    ctx->pc = 0x10C4D4u;
    {
        const bool branch_taken_0x10c4d4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x10C4D8u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x10c4d4) {
            ctx->pc = 0x10C710u;
            goto label_10c710;
        }
    }
    ctx->pc = 0x10C4DCu;
label_10c4dc:
    // 0x10c4dc: 0x1000000a
label_10c4e0:
    if (ctx->pc == 0x10C4E0u) {
        ctx->pc = 0x10C4E4u;
        goto label_10c4e4;
    }
    ctx->pc = 0x10C4DCu;
    {
        const bool branch_taken_0x10c4dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x10c4dc) {
            ctx->pc = 0x10C508u;
            goto label_10c508;
        }
    }
    ctx->pc = 0x10C4E4u;
label_10c4e4:
    // 0x10c4e4: 0x0
    ctx->pc = 0x10c4e4u;
    // NOP
label_10c4e8:
    // 0x10c4e8: 0x3c010023
    ctx->pc = 0x10c4e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
label_10c4ec:
    // 0x10c4ec: 0xdc257b18
    ctx->pc = 0x10c4ecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 31512)));
label_10c4f0:
    // 0x10c4f0: 0x200202d
    ctx->pc = 0x10c4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10c4f4:
    // 0x10c4f4: 0xc0448a6
label_10c4f8:
    if (ctx->pc == 0x10C4F8u) {
        ctx->pc = 0x10C4FCu;
        goto label_10c4fc;
    }
    ctx->pc = 0x10C4F4u;
    SET_GPR_U32(ctx, 31, 0x10C4FCu);
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C4FCu; }
    }
    if (ctx->pc != 0x10C4FCu) { return; }
    ctx->pc = 0x10C4FCu;
label_10c4fc:
    // 0x10c4fc: 0x4400084
label_10c500:
    if (ctx->pc == 0x10C500u) {
        ctx->pc = 0x10C500u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x10C504u;
        goto label_10c504;
    }
    ctx->pc = 0x10C4FCu;
    {
        const bool branch_taken_0x10c4fc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x10C500u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x10c4fc) {
            ctx->pc = 0x10C710u;
            goto label_10c710;
        }
    }
    ctx->pc = 0x10C504u;
label_10c504:
    // 0x10c504: 0x8fa50030
    ctx->pc = 0x10c504u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_10c508:
    // 0x10c508: 0xc041fa8
label_10c50c:
    if (ctx->pc == 0x10C50Cu) {
        ctx->pc = 0x10C50Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10C510u;
        goto label_10c510;
    }
    ctx->pc = 0x10C508u;
    SET_GPR_U32(ctx, 31, 0x10C510u);
    ctx->pc = 0x10C50Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107EA0_0x107ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C510u; }
    }
    if (ctx->pc != 0x10C510u) { return; }
    ctx->pc = 0x10C510u;
label_10c510:
    // 0x10c510: 0x3c0202d
    ctx->pc = 0x10c510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_10c514:
    // 0x10c514: 0xc041fa8
label_10c518:
    if (ctx->pc == 0x10C518u) {
        ctx->pc = 0x10C518u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->pc = 0x10C51Cu;
        goto label_10c51c;
    }
    ctx->pc = 0x10C514u;
    SET_GPR_U32(ctx, 31, 0x10C51Cu);
    ctx->pc = 0x10C518u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 52)));
    ctx->pc = 0x107EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107EA0_0x107ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C51Cu; }
    }
    if (ctx->pc != 0x10C51Cu) { return; }
    ctx->pc = 0x10C51Cu;
label_10c51c:
    // 0x10c51c: 0x3c0202d
    ctx->pc = 0x10c51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_10c520:
    // 0x10c520: 0xc041fa8
label_10c524:
    if (ctx->pc == 0x10C524u) {
        ctx->pc = 0x10C524u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x10C528u;
        goto label_10c528;
    }
    ctx->pc = 0x10C520u;
    SET_GPR_U32(ctx, 31, 0x10C528u);
    ctx->pc = 0x10C524u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 60)));
    ctx->pc = 0x107EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107EA0_0x107ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C528u; }
    }
    if (ctx->pc != 0x10C528u) { return; }
    ctx->pc = 0x10C528u;
label_10c528:
    // 0x10c528: 0x3c0202d
    ctx->pc = 0x10c528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_10c52c:
    // 0x10c52c: 0xc041fa8
label_10c530:
    if (ctx->pc == 0x10C530u) {
        ctx->pc = 0x10C530u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x10C534u;
        goto label_10c534;
    }
    ctx->pc = 0x10C52Cu;
    SET_GPR_U32(ctx, 31, 0x10C534u);
    ctx->pc = 0x10C530u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->pc = 0x107EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107EA0_0x107ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C534u; }
    }
    if (ctx->pc != 0x10C534u) { return; }
    ctx->pc = 0x10C534u;
label_10c534:
    // 0x10c534: 0x8fa20038
    ctx->pc = 0x10c534u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_10c538:
    // 0x10c538: 0x3c0202d
    ctx->pc = 0x10c538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_10c53c:
    // 0x10c53c: 0xc041f7e
label_10c540:
    if (ctx->pc == 0x10C540u) {
        ctx->pc = 0x10C540u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x10C544u;
        goto label_10c544;
    }
    ctx->pc = 0x10C53Cu;
    SET_GPR_U32(ctx, 31, 0x10C544u);
    ctx->pc = 0x10C540u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->pc = 0x107DF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107DF8_0x107df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C544u; }
    }
    if (ctx->pc != 0x10C544u) { return; }
    ctx->pc = 0x10C544u;
label_10c544:
    // 0x10c544: 0xafa20034
    ctx->pc = 0x10c544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_10c548:
    // 0x10c548: 0x2444000c
    ctx->pc = 0x10c548u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 12));
label_10c54c:
    // 0x10c54c: 0x8fa30038
    ctx->pc = 0x10c54cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_10c550:
    // 0x10c550: 0x8fa50044
    ctx->pc = 0x10c550u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10c554:
    // 0x10c554: 0x8c660010
    ctx->pc = 0x10c554u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_10c558:
    // 0x10c558: 0x63080
    ctx->pc = 0x10c558u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
label_10c55c:
    // 0x10c55c: 0xc041eac
label_10c560:
    if (ctx->pc == 0x10C560u) {
        ctx->pc = 0x10C560u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
        ctx->pc = 0x10C564u;
        goto label_10c564;
    }
    ctx->pc = 0x10C55Cu;
    SET_GPR_U32(ctx, 31, 0x10C564u);
    ctx->pc = 0x10C560u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C564u; }
    }
    if (ctx->pc != 0x10C564u) { return; }
    ctx->pc = 0x10C564u;
label_10c564:
    // 0x10c564: 0x3c0202d
    ctx->pc = 0x10c564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_10c568:
    // 0x10c568: 0x260282d
    ctx->pc = 0x10c568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10c56c:
    // 0x10c56c: 0x3a0302d
    ctx->pc = 0x10c56cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_10c570:
    // 0x10c570: 0xc0422d2
label_10c574:
    if (ctx->pc == 0x10C574u) {
        ctx->pc = 0x10C574u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 4));
        ctx->pc = 0x10C578u;
        goto label_10c578;
    }
    ctx->pc = 0x10C570u;
    SET_GPR_U32(ctx, 31, 0x10C578u);
    ctx->pc = 0x10C574u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x108B48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108B48_0x108b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C578u; }
    }
    if (ctx->pc != 0x10C578u) { return; }
    ctx->pc = 0x10C578u;
label_10c578:
    // 0x10c578: 0x3c0202d
    ctx->pc = 0x10c578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_10c57c:
    // 0x10c57c: 0x24050001
    ctx->pc = 0x10c57cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_10c580:
    // 0x10c580: 0xc042092
label_10c584:
    if (ctx->pc == 0x10C584u) {
        ctx->pc = 0x10C584u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->pc = 0x10C588u;
        goto label_10c588;
    }
    ctx->pc = 0x10C580u;
    SET_GPR_U32(ctx, 31, 0x10C588u);
    ctx->pc = 0x10C584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->pc = 0x108248u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108248_0x108248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C588u; }
    }
    if (ctx->pc != 0x10C588u) { return; }
    ctx->pc = 0x10C588u;
label_10c588:
    // 0x10c588: 0xdfa40010
    ctx->pc = 0x10c588u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10c58c:
    // 0x10c58c: 0x4800006
label_10c590:
    if (ctx->pc == 0x10C590u) {
        ctx->pc = 0x10C590u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->pc = 0x10C594u;
        goto label_10c594;
    }
    ctx->pc = 0x10C58Cu;
    {
        const bool branch_taken_0x10c58c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x10C590u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        if (branch_taken_0x10c58c) {
            ctx->pc = 0x10C5A8u;
            goto label_10c5a8;
        }
    }
    ctx->pc = 0x10C594u;
label_10c594:
    // 0x10c594: 0x8fb10048
    ctx->pc = 0x10c594u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10c598:
    // 0x10c598: 0x302d
    ctx->pc = 0x10c598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10c59c:
    // 0x10c59c: 0x902d
    ctx->pc = 0x10c59cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10c5a0:
    // 0x10c5a0: 0x10000006
label_10c5a4:
    if (ctx->pc == 0x10C5A4u) {
        ctx->pc = 0x10C5A4u;
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10C5A8u;
        goto label_10c5a8;
    }
    ctx->pc = 0x10C5A0u;
    {
        const bool branch_taken_0x10c5a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10C5A4u;
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10c5a0) {
            ctx->pc = 0x10C5BCu;
            goto label_10c5bc;
        }
    }
    ctx->pc = 0x10C5A8u;
label_10c5a8:
    // 0x10c5a8: 0x8fa20048
    ctx->pc = 0x10c5a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_10c5ac:
    // 0x10c5ac: 0xb82d
    ctx->pc = 0x10c5acu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10c5b0:
    // 0x10c5b0: 0x882d
    ctx->pc = 0x10c5b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10c5b4:
    // 0x10c5b4: 0x29023
    ctx->pc = 0x10c5b4u;
    SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_10c5b8:
    // 0x10c5b8: 0x240302d
    ctx->pc = 0x10c5b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10c5bc:
    // 0x10c5bc: 0x8fa20000
    ctx->pc = 0x10c5bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_10c5c0:
    // 0x10c5c0: 0x4420002
label_10c5c4:
    if (ctx->pc == 0x10C5C4u) {
        ctx->pc = 0x10C5C4u;
        SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->pc = 0x10C5C8u;
        goto label_10c5c8;
    }
    ctx->pc = 0x10C5C0u;
    {
        const bool branch_taken_0x10c5c0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10c5c0) {
            ctx->pc = 0x10C5C4u;
            SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
            ctx->pc = 0x10C5CCu;
            goto label_10c5cc;
        }
    }
    ctx->pc = 0x10C5C8u;
label_10c5c8:
    // 0x10c5c8: 0x2429021
    ctx->pc = 0x10c5c8u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_10c5cc:
    // 0x10c5cc: 0x8fa50004
    ctx->pc = 0x10c5ccu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_10c5d0:
    // 0x10c5d0: 0x24540433
    ctx->pc = 0x10c5d0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 1075));
label_10c5d4:
    // 0x10c5d4: 0x451021
    ctx->pc = 0x10c5d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_10c5d8:
    // 0x10c5d8: 0x2444ffff
    ctx->pc = 0x10c5d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294967295));
label_10c5dc:
    // 0x10c5dc: 0x2883fc02
    ctx->pc = 0x10c5dcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 4294966274));
label_10c5e0:
    // 0x10c5e0: 0x14600003
label_10c5e4:
    if (ctx->pc == 0x10C5E4u) {
        ctx->pc = 0x10C5E4u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10C5E8u;
        goto label_10c5e8;
    }
    ctx->pc = 0x10C5E0u;
    {
        const bool branch_taken_0x10c5e0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x10C5E4u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10c5e0) {
            ctx->pc = 0x10C5F0u;
            goto label_10c5f0;
        }
    }
    ctx->pc = 0x10C5E8u;
label_10c5e8:
    // 0x10c5e8: 0x24020036
    ctx->pc = 0x10c5e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 54));
label_10c5ec:
    // 0x10c5ec: 0x45a023
    ctx->pc = 0x10c5ecu;
    SET_GPR_U32(ctx, 20, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_10c5f0:
    // 0x10c5f0: 0x2342021
    ctx->pc = 0x10c5f0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_10c5f4:
    // 0x10c5f4: 0x2549021
    ctx->pc = 0x10c5f4u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_10c5f8:
    // 0x10c5f8: 0x244182a
    ctx->pc = 0x10c5f8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 4)));
label_10c5fc:
    // 0x10c5fc: 0x80882d
    ctx->pc = 0x10c5fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10c600:
    // 0x10c600: 0x243200b
    ctx->pc = 0x10c600u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 18));
label_10c604:
    // 0x10c604: 0x2a4102a
    ctx->pc = 0x10c604u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 4)));
label_10c608:
    // 0x10c608: 0x2a2200b
    ctx->pc = 0x10c608u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 21));
label_10c60c:
    // 0x10c60c: 0x18800004
label_10c610:
    if (ctx->pc == 0x10C610u) {
        ctx->pc = 0x10C614u;
        goto label_10c614;
    }
    ctx->pc = 0x10C60Cu;
    {
        const bool branch_taken_0x10c60c = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x10c60c) {
            ctx->pc = 0x10C620u;
            goto label_10c620;
        }
    }
    ctx->pc = 0x10C614u;
label_10c614:
    // 0x10c614: 0x2a4a823
    ctx->pc = 0x10c614u;
    SET_GPR_U32(ctx, 21, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_10c618:
    // 0x10c618: 0x2449023
    ctx->pc = 0x10c618u;
    SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_10c61c:
    // 0x10c61c: 0x2248823
    ctx->pc = 0x10c61cu;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_10c620:
    // 0x10c620: 0x18c0000d
label_10c624:
    if (ctx->pc == 0x10C624u) {
        ctx->pc = 0x10C624u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x10C628u;
        goto label_10c628;
    }
    ctx->pc = 0x10C620u;
    {
        const bool branch_taken_0x10c620 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x10C624u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 60)));
        if (branch_taken_0x10c620) {
            ctx->pc = 0x10C658u;
            goto label_10c658;
        }
    }
    ctx->pc = 0x10C628u;
label_10c628:
    // 0x10c628: 0xc042124
label_10c62c:
    if (ctx->pc == 0x10C62Cu) {
        ctx->pc = 0x10C62Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10C630u;
        goto label_10c630;
    }
    ctx->pc = 0x10C628u;
    SET_GPR_U32(ctx, 31, 0x10C630u);
    ctx->pc = 0x10C62Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x108490u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108490_0x108490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C630u; }
    }
    if (ctx->pc != 0x10C630u) { return; }
    ctx->pc = 0x10C630u;
label_10c630:
    // 0x10c630: 0x3c0202d
    ctx->pc = 0x10c630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_10c634:
    // 0x10c634: 0x8fa60030
    ctx->pc = 0x10c634u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_10c638:
    // 0x10c638: 0x40282d
    ctx->pc = 0x10c638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c63c:
    // 0x10c63c: 0xc0420a0
label_10c640:
    if (ctx->pc == 0x10C640u) {
        ctx->pc = 0x10C640u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->pc = 0x10C644u;
        goto label_10c644;
    }
    ctx->pc = 0x10C63Cu;
    SET_GPR_U32(ctx, 31, 0x10C644u);
    ctx->pc = 0x10C640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    ctx->pc = 0x108280u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108280_0x108280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C644u; }
    }
    if (ctx->pc != 0x10C644u) { return; }
    ctx->pc = 0x10C644u;
label_10c644:
    // 0x10c644: 0x3c0202d
    ctx->pc = 0x10c644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_10c648:
    // 0x10c648: 0x8fa50030
    ctx->pc = 0x10c648u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_10c64c:
    // 0x10c64c: 0xc041fa8
label_10c650:
    if (ctx->pc == 0x10C650u) {
        ctx->pc = 0x10C650u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10C654u;
        goto label_10c654;
    }
    ctx->pc = 0x10C64Cu;
    SET_GPR_U32(ctx, 31, 0x10C654u);
    ctx->pc = 0x10C650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107EA0_0x107ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C654u; }
    }
    if (ctx->pc != 0x10C654u) { return; }
    ctx->pc = 0x10C654u;
label_10c654:
    // 0x10c654: 0xafb00030
    ctx->pc = 0x10c654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
label_10c658:
    // 0x10c658: 0x1a400005
label_10c65c:
    if (ctx->pc == 0x10C65Cu) {
        ctx->pc = 0x10C65Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x10C660u;
        goto label_10c660;
    }
    ctx->pc = 0x10C658u;
    {
        const bool branch_taken_0x10c658 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x10C65Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x10c658) {
            ctx->pc = 0x10C670u;
            goto label_10c670;
        }
    }
    ctx->pc = 0x10C660u;
label_10c660:
    // 0x10c660: 0x240302d
    ctx->pc = 0x10c660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10c664:
    // 0x10c664: 0xc042164
label_10c668:
    if (ctx->pc == 0x10C668u) {
        ctx->pc = 0x10C668u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10C66Cu;
        goto label_10c66c;
    }
    ctx->pc = 0x10C664u;
    SET_GPR_U32(ctx, 31, 0x10C66Cu);
    ctx->pc = 0x10C668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x108590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108590_0x108590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C66Cu; }
    }
    if (ctx->pc != 0x10C66Cu) { return; }
    ctx->pc = 0x10C66Cu;
label_10c66c:
    // 0x10c66c: 0xafa20030
    ctx->pc = 0x10c66cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_10c670:
    // 0x10c670: 0x1ae00005
label_10c674:
    if (ctx->pc == 0x10C674u) {
        ctx->pc = 0x10C674u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->pc = 0x10C678u;
        goto label_10c678;
    }
    ctx->pc = 0x10C670u;
    {
        const bool branch_taken_0x10c670 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x10C674u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 52)));
        if (branch_taken_0x10c670) {
            ctx->pc = 0x10C688u;
            goto label_10c688;
        }
    }
    ctx->pc = 0x10C678u;
label_10c678:
    // 0x10c678: 0x2e0302d
    ctx->pc = 0x10c678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_10c67c:
    // 0x10c67c: 0xc042124
label_10c680:
    if (ctx->pc == 0x10C680u) {
        ctx->pc = 0x10C680u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10C684u;
        goto label_10c684;
    }
    ctx->pc = 0x10C67Cu;
    SET_GPR_U32(ctx, 31, 0x10C684u);
    ctx->pc = 0x10C680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x108490u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108490_0x108490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C684u; }
    }
    if (ctx->pc != 0x10C684u) { return; }
    ctx->pc = 0x10C684u;
label_10c684:
    // 0x10c684: 0xafa20034
    ctx->pc = 0x10c684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_10c688:
    // 0x10c688: 0x1a200005
label_10c68c:
    if (ctx->pc == 0x10C68Cu) {
        ctx->pc = 0x10C68Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->pc = 0x10C690u;
        goto label_10c690;
    }
    ctx->pc = 0x10C688u;
    {
        const bool branch_taken_0x10c688 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x10C68Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 52)));
        if (branch_taken_0x10c688) {
            ctx->pc = 0x10C6A0u;
            goto label_10c6a0;
        }
    }
    ctx->pc = 0x10C690u;
label_10c690:
    // 0x10c690: 0x220302d
    ctx->pc = 0x10c690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10c694:
    // 0x10c694: 0xc042164
label_10c698:
    if (ctx->pc == 0x10C698u) {
        ctx->pc = 0x10C698u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10C69Cu;
        goto label_10c69c;
    }
    ctx->pc = 0x10C694u;
    SET_GPR_U32(ctx, 31, 0x10C69Cu);
    ctx->pc = 0x10C698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x108590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108590_0x108590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C69Cu; }
    }
    if (ctx->pc != 0x10C69Cu) { return; }
    ctx->pc = 0x10C69Cu;
label_10c69c:
    // 0x10c69c: 0xafa20034
    ctx->pc = 0x10c69cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_10c6a0:
    // 0x10c6a0: 0x1aa00007
label_10c6a4:
    if (ctx->pc == 0x10C6A4u) {
        ctx->pc = 0x10C6A4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x10C6A8u;
        goto label_10c6a8;
    }
    ctx->pc = 0x10C6A0u;
    {
        const bool branch_taken_0x10c6a0 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x10C6A4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x10c6a0) {
            ctx->pc = 0x10C6C0u;
            goto label_10c6c0;
        }
    }
    ctx->pc = 0x10C6A8u;
label_10c6a8:
    // 0x10c6a8: 0x8fa5003c
    ctx->pc = 0x10c6a8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_10c6ac:
    // 0x10c6ac: 0x2a0302d
    ctx->pc = 0x10c6acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_10c6b0:
    // 0x10c6b0: 0xc042164
label_10c6b4:
    if (ctx->pc == 0x10C6B4u) {
        ctx->pc = 0x10C6B4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10C6B8u;
        goto label_10c6b8;
    }
    ctx->pc = 0x10C6B0u;
    SET_GPR_U32(ctx, 31, 0x10C6B8u);
    ctx->pc = 0x10C6B4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x108590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108590_0x108590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C6B8u; }
    }
    if (ctx->pc != 0x10C6B8u) { return; }
    ctx->pc = 0x10C6B8u;
label_10c6b8:
    // 0x10c6b8: 0xafa2003c
    ctx->pc = 0x10c6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_10c6bc:
    // 0x10c6bc: 0x8fa50030
    ctx->pc = 0x10c6bcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_10c6c0:
    // 0x10c6c0: 0x3c0202d
    ctx->pc = 0x10c6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_10c6c4:
    // 0x10c6c4: 0xc0421d4
label_10c6c8:
    if (ctx->pc == 0x10C6C8u) {
        ctx->pc = 0x10C6C8u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->pc = 0x10C6CCu;
        goto label_10c6cc;
    }
    ctx->pc = 0x10C6C4u;
    SET_GPR_U32(ctx, 31, 0x10C6CCu);
    ctx->pc = 0x10C6C8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 52)));
    ctx->pc = 0x108750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108750_0x108750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C6CCu; }
    }
    if (ctx->pc != 0x10C6CCu) { return; }
    ctx->pc = 0x10C6CCu;
label_10c6cc:
    // 0x10c6cc: 0xafa20040
    ctx->pc = 0x10c6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_10c6d0:
    // 0x10c6d0: 0x40202d
    ctx->pc = 0x10c6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c6d4:
    // 0x10c6d4: 0x8fa5003c
    ctx->pc = 0x10c6d4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_10c6d8:
    // 0x10c6d8: 0x8c55000c
    ctx->pc = 0x10c6d8u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_10c6dc:
    // 0x10c6dc: 0xc0421ba
label_10c6e0:
    if (ctx->pc == 0x10C6E0u) {
        ctx->pc = 0x10C6E0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x10C6E4u;
        goto label_10c6e4;
    }
    ctx->pc = 0x10C6DCu;
    SET_GPR_U32(ctx, 31, 0x10C6E4u);
    ctx->pc = 0x10C6E0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x1086E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001086E8_0x1086e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C6E4u; }
    }
    if (ctx->pc != 0x10C6E4u) { return; }
    ctx->pc = 0x10C6E4u;
label_10c6e4:
    // 0x10c6e4: 0x40202d
    ctx->pc = 0x10c6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c6e8:
    // 0x10c6e8: 0x481fe65
label_10c6ec:
    if (ctx->pc == 0x10C6ECu) {
        ctx->pc = 0x10C6F0u;
        goto label_10c6f0;
    }
    ctx->pc = 0x10C6E8u;
    {
        const bool branch_taken_0x10c6e8 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x10c6e8) {
            ctx->pc = 0x10C080u;
            goto label_10c080;
        }
    }
    ctx->pc = 0x10C6F0u;
label_10c6f0:
    // 0x10c6f0: 0x16a00007
label_10c6f4:
    if (ctx->pc == 0x10C6F4u) {
        ctx->pc = 0x10C6F4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x10C6F8u;
        goto label_10c6f8;
    }
    ctx->pc = 0x10C6F0u;
    {
        const bool branch_taken_0x10c6f0 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        ctx->pc = 0x10C6F4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x10c6f0) {
            ctx->pc = 0x10C710u;
            goto label_10c710;
        }
    }
    ctx->pc = 0x10C6F8u;
label_10c6f8:
    // 0x10c6f8: 0x2402ffff
    ctx->pc = 0x10c6f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_10c6fc:
    // 0x10c6fc: 0x2133a
    ctx->pc = 0x10c6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
label_10c700:
    // 0x10c700: 0x2621024
    ctx->pc = 0x10c700u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_10c704:
    // 0x10c704: 0x1040fe52
label_10c708:
    if (ctx->pc == 0x10C708u) {
        ctx->pc = 0x10C708u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x10C70Cu;
        goto label_10c70c;
    }
    ctx->pc = 0x10C704u;
    {
        const bool branch_taken_0x10c704 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10C708u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x10c704) {
            ctx->pc = 0x10C050u;
            goto label_10c050;
        }
    }
    ctx->pc = 0x10C70Cu;
label_10c70c:
    // 0x10c70c: 0x8fa50030
    ctx->pc = 0x10c70cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_10c710:
    // 0x10c710: 0xc041fa8
label_10c714:
    if (ctx->pc == 0x10C714u) {
        ctx->pc = 0x10C714u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10C718u;
        goto label_10c718;
    }
    ctx->pc = 0x10C710u;
    SET_GPR_U32(ctx, 31, 0x10C718u);
    ctx->pc = 0x10C714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107EA0_0x107ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C718u; }
    }
    if (ctx->pc != 0x10C718u) { return; }
    ctx->pc = 0x10C718u;
label_10c718:
    // 0x10c718: 0x3c0202d
    ctx->pc = 0x10c718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_10c71c:
    // 0x10c71c: 0xc041fa8
label_10c720:
    if (ctx->pc == 0x10C720u) {
        ctx->pc = 0x10C720u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->pc = 0x10C724u;
        goto label_10c724;
    }
    ctx->pc = 0x10C71Cu;
    SET_GPR_U32(ctx, 31, 0x10C724u);
    ctx->pc = 0x10C720u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 52)));
    ctx->pc = 0x107EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107EA0_0x107ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C724u; }
    }
    if (ctx->pc != 0x10C724u) { return; }
    ctx->pc = 0x10C724u;
label_10c724:
    // 0x10c724: 0x3c0202d
    ctx->pc = 0x10c724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_10c728:
    // 0x10c728: 0xc041fa8
label_10c72c:
    if (ctx->pc == 0x10C72Cu) {
        ctx->pc = 0x10C72Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x10C730u;
        goto label_10c730;
    }
    ctx->pc = 0x10C728u;
    SET_GPR_U32(ctx, 31, 0x10C730u);
    ctx->pc = 0x10C72Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 60)));
    ctx->pc = 0x107EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107EA0_0x107ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C730u; }
    }
    if (ctx->pc != 0x10C730u) { return; }
    ctx->pc = 0x10C730u;
label_10c730:
    // 0x10c730: 0x3c0202d
    ctx->pc = 0x10c730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_10c734:
    // 0x10c734: 0xc041fa8
label_10c738:
    if (ctx->pc == 0x10C738u) {
        ctx->pc = 0x10C738u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->pc = 0x10C73Cu;
        goto label_10c73c;
    }
    ctx->pc = 0x10C734u;
    SET_GPR_U32(ctx, 31, 0x10C73Cu);
    ctx->pc = 0x10C738u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->pc = 0x107EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107EA0_0x107ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C73Cu; }
    }
    if (ctx->pc != 0x10C73Cu) { return; }
    ctx->pc = 0x10C73Cu;
label_10c73c:
    // 0x10c73c: 0x3c0202d
    ctx->pc = 0x10c73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_10c740:
    // 0x10c740: 0xc041fa8
label_10c744:
    if (ctx->pc == 0x10C744u) {
        ctx->pc = 0x10C744u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x10C748u;
        goto label_10c748;
    }
    ctx->pc = 0x10C740u;
    SET_GPR_U32(ctx, 31, 0x10C748u);
    ctx->pc = 0x10C744u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->pc = 0x107EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107EA0_0x107ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C748u; }
    }
    if (ctx->pc != 0x10C748u) { return; }
    ctx->pc = 0x10C748u;
label_10c748:
    // 0x10c748: 0x8fa30008
    ctx->pc = 0x10c748u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_10c74c:
    // 0x10c74c: 0x54600001
label_10c750:
    if (ctx->pc == 0x10C750u) {
        ctx->pc = 0x10C750u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 22));
        ctx->pc = 0x10C754u;
        goto label_10c754;
    }
    ctx->pc = 0x10C74Cu;
    {
        const bool branch_taken_0x10c74c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x10c74c) {
            ctx->pc = 0x10C750u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 22));
            ctx->pc = 0x10C754u;
            goto label_10c754;
        }
    }
    ctx->pc = 0x10C754u;
label_10c754:
    // 0x10c754: 0x8fa4000c
    ctx->pc = 0x10c754u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_10c758:
    // 0x10c758: 0x260102d
    ctx->pc = 0x10c758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10c75c:
    // 0x10c75c: 0x10800006
label_10c760:
    if (ctx->pc == 0x10C760u) {
        ctx->pc = 0x10C760u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x10C764u;
        goto label_10c764;
    }
    ctx->pc = 0x10C75Cu;
    {
        const bool branch_taken_0x10c75c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x10C760u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x10c75c) {
            ctx->pc = 0x10C778u;
            goto label_10c778;
        }
    }
    ctx->pc = 0x10C764u;
label_10c764:
    // 0x10c764: 0x40282d
    ctx->pc = 0x10c764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c768:
    // 0x10c768: 0x202d
    ctx->pc = 0x10c768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10c76c:
    // 0x10c76c: 0xc044752
label_10c770:
    if (ctx->pc == 0x10C770u) {
        ctx->pc = 0x10C774u;
        goto label_10c774;
    }
    ctx->pc = 0x10C76Cu;
    SET_GPR_U32(ctx, 31, 0x10C774u);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C774u; }
    }
    if (ctx->pc != 0x10C774u) { return; }
    ctx->pc = 0x10C774u;
label_10c774:
    // 0x10c774: 0xdfb00050
    ctx->pc = 0x10c774u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_10c778:
    // 0x10c778: 0xdfb10058
    ctx->pc = 0x10c778u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_10c77c:
    // 0x10c77c: 0xdfb20060
    ctx->pc = 0x10c77cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_10c780:
    // 0x10c780: 0xdfb30068
    ctx->pc = 0x10c780u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_10c784:
    // 0x10c784: 0xdfb40070
    ctx->pc = 0x10c784u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_10c788:
    // 0x10c788: 0xdfb50078
    ctx->pc = 0x10c788u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_10c78c:
    // 0x10c78c: 0xdfb60080
    ctx->pc = 0x10c78cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_10c790:
    // 0x10c790: 0xdfb70088
    ctx->pc = 0x10c790u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_10c794:
    // 0x10c794: 0xdfbe0090
    ctx->pc = 0x10c794u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_10c798:
    // 0x10c798: 0xdfbf0098
    ctx->pc = 0x10c798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_10c79c:
    // 0x10c79c: 0x3e00008
label_10c7a0:
    if (ctx->pc == 0x10C7A0u) {
        ctx->pc = 0x10C7A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x10C7A4u;
        goto label_10c7a4;
    }
    ctx->pc = 0x10C79Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C7A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10B890u: goto label_10b890;
            case 0x10B894u: goto label_10b894;
            case 0x10B898u: goto label_10b898;
            case 0x10B89Cu: goto label_10b89c;
            case 0x10B8A0u: goto label_10b8a0;
            case 0x10B8A4u: goto label_10b8a4;
            case 0x10B8A8u: goto label_10b8a8;
            case 0x10B8ACu: goto label_10b8ac;
            case 0x10B8B0u: goto label_10b8b0;
            case 0x10B8B4u: goto label_10b8b4;
            case 0x10B8B8u: goto label_10b8b8;
            case 0x10B8BCu: goto label_10b8bc;
            case 0x10B8C0u: goto label_10b8c0;
            case 0x10B8C4u: goto label_10b8c4;
            case 0x10B8C8u: goto label_10b8c8;
            case 0x10B8CCu: goto label_10b8cc;
            case 0x10B8D0u: goto label_10b8d0;
            case 0x10B8D4u: goto label_10b8d4;
            case 0x10B8D8u: goto label_10b8d8;
            case 0x10B8DCu: goto label_10b8dc;
            case 0x10B8E0u: goto label_10b8e0;
            case 0x10B8E4u: goto label_10b8e4;
            case 0x10B8E8u: goto label_10b8e8;
            case 0x10B8ECu: goto label_10b8ec;
            case 0x10B8F0u: goto label_10b8f0;
            case 0x10B8F4u: goto label_10b8f4;
            case 0x10B8F8u: goto label_10b8f8;
            case 0x10B8FCu: goto label_10b8fc;
            case 0x10B900u: goto label_10b900;
            case 0x10B904u: goto label_10b904;
            case 0x10B908u: goto label_10b908;
            case 0x10B90Cu: goto label_10b90c;
            case 0x10B910u: goto label_10b910;
            case 0x10B914u: goto label_10b914;
            case 0x10B918u: goto label_10b918;
            case 0x10B91Cu: goto label_10b91c;
            case 0x10B920u: goto label_10b920;
            case 0x10B924u: goto label_10b924;
            case 0x10B928u: goto label_10b928;
            case 0x10B92Cu: goto label_10b92c;
            case 0x10B930u: goto label_10b930;
            case 0x10B934u: goto label_10b934;
            case 0x10B938u: goto label_10b938;
            case 0x10B93Cu: goto label_10b93c;
            case 0x10B940u: goto label_10b940;
            case 0x10B944u: goto label_10b944;
            case 0x10B948u: goto label_10b948;
            case 0x10B94Cu: goto label_10b94c;
            case 0x10B950u: goto label_10b950;
            case 0x10B954u: goto label_10b954;
            case 0x10B958u: goto label_10b958;
            case 0x10B95Cu: goto label_10b95c;
            case 0x10B960u: goto label_10b960;
            case 0x10B964u: goto label_10b964;
            case 0x10B968u: goto label_10b968;
            case 0x10B96Cu: goto label_10b96c;
            case 0x10B970u: goto label_10b970;
            case 0x10B974u: goto label_10b974;
            case 0x10B978u: goto label_10b978;
            case 0x10B97Cu: goto label_10b97c;
            case 0x10B980u: goto label_10b980;
            case 0x10B984u: goto label_10b984;
            case 0x10B988u: goto label_10b988;
            case 0x10B98Cu: goto label_10b98c;
            case 0x10B990u: goto label_10b990;
            case 0x10B994u: goto label_10b994;
            case 0x10B998u: goto label_10b998;
            case 0x10B99Cu: goto label_10b99c;
            case 0x10B9A0u: goto label_10b9a0;
            case 0x10B9A4u: goto label_10b9a4;
            case 0x10B9A8u: goto label_10b9a8;
            case 0x10B9ACu: goto label_10b9ac;
            case 0x10B9B0u: goto label_10b9b0;
            case 0x10B9B4u: goto label_10b9b4;
            case 0x10B9B8u: goto label_10b9b8;
            case 0x10B9BCu: goto label_10b9bc;
            case 0x10B9C0u: goto label_10b9c0;
            case 0x10B9C4u: goto label_10b9c4;
            case 0x10B9C8u: goto label_10b9c8;
            case 0x10B9CCu: goto label_10b9cc;
            case 0x10B9D0u: goto label_10b9d0;
            case 0x10B9D4u: goto label_10b9d4;
            case 0x10B9D8u: goto label_10b9d8;
            case 0x10B9DCu: goto label_10b9dc;
            case 0x10B9E0u: goto label_10b9e0;
            case 0x10B9E4u: goto label_10b9e4;
            case 0x10B9E8u: goto label_10b9e8;
            case 0x10B9ECu: goto label_10b9ec;
            case 0x10B9F0u: goto label_10b9f0;
            case 0x10B9F4u: goto label_10b9f4;
            case 0x10B9F8u: goto label_10b9f8;
            case 0x10B9FCu: goto label_10b9fc;
            case 0x10BA00u: goto label_10ba00;
            case 0x10BA04u: goto label_10ba04;
            case 0x10BA08u: goto label_10ba08;
            case 0x10BA0Cu: goto label_10ba0c;
            case 0x10BA10u: goto label_10ba10;
            case 0x10BA14u: goto label_10ba14;
            case 0x10BA18u: goto label_10ba18;
            case 0x10BA1Cu: goto label_10ba1c;
            case 0x10BA20u: goto label_10ba20;
            case 0x10BA24u: goto label_10ba24;
            case 0x10BA28u: goto label_10ba28;
            case 0x10BA2Cu: goto label_10ba2c;
            case 0x10BA30u: goto label_10ba30;
            case 0x10BA34u: goto label_10ba34;
            case 0x10BA38u: goto label_10ba38;
            case 0x10BA3Cu: goto label_10ba3c;
            case 0x10BA40u: goto label_10ba40;
            case 0x10BA44u: goto label_10ba44;
            case 0x10BA48u: goto label_10ba48;
            case 0x10BA4Cu: goto label_10ba4c;
            case 0x10BA50u: goto label_10ba50;
            case 0x10BA54u: goto label_10ba54;
            case 0x10BA58u: goto label_10ba58;
            case 0x10BA5Cu: goto label_10ba5c;
            case 0x10BA60u: goto label_10ba60;
            case 0x10BA64u: goto label_10ba64;
            case 0x10BA68u: goto label_10ba68;
            case 0x10BA6Cu: goto label_10ba6c;
            case 0x10BA70u: goto label_10ba70;
            case 0x10BA74u: goto label_10ba74;
            case 0x10BA78u: goto label_10ba78;
            case 0x10BA7Cu: goto label_10ba7c;
            case 0x10BA80u: goto label_10ba80;
            case 0x10BA84u: goto label_10ba84;
            case 0x10BA88u: goto label_10ba88;
            case 0x10BA8Cu: goto label_10ba8c;
            case 0x10BA90u: goto label_10ba90;
            case 0x10BA94u: goto label_10ba94;
            case 0x10BA98u: goto label_10ba98;
            case 0x10BA9Cu: goto label_10ba9c;
            case 0x10BAA0u: goto label_10baa0;
            case 0x10BAA4u: goto label_10baa4;
            case 0x10BAA8u: goto label_10baa8;
            case 0x10BAACu: goto label_10baac;
            case 0x10BAB0u: goto label_10bab0;
            case 0x10BAB4u: goto label_10bab4;
            case 0x10BAB8u: goto label_10bab8;
            case 0x10BABCu: goto label_10babc;
            case 0x10BAC0u: goto label_10bac0;
            case 0x10BAC4u: goto label_10bac4;
            case 0x10BAC8u: goto label_10bac8;
            case 0x10BACCu: goto label_10bacc;
            case 0x10BAD0u: goto label_10bad0;
            case 0x10BAD4u: goto label_10bad4;
            case 0x10BAD8u: goto label_10bad8;
            case 0x10BADCu: goto label_10badc;
            case 0x10BAE0u: goto label_10bae0;
            case 0x10BAE4u: goto label_10bae4;
            case 0x10BAE8u: goto label_10bae8;
            case 0x10BAECu: goto label_10baec;
            case 0x10BAF0u: goto label_10baf0;
            case 0x10BAF4u: goto label_10baf4;
            case 0x10BAF8u: goto label_10baf8;
            case 0x10BAFCu: goto label_10bafc;
            case 0x10BB00u: goto label_10bb00;
            case 0x10BB04u: goto label_10bb04;
            case 0x10BB08u: goto label_10bb08;
            case 0x10BB0Cu: goto label_10bb0c;
            case 0x10BB10u: goto label_10bb10;
            case 0x10BB14u: goto label_10bb14;
            case 0x10BB18u: goto label_10bb18;
            case 0x10BB1Cu: goto label_10bb1c;
            case 0x10BB20u: goto label_10bb20;
            case 0x10BB24u: goto label_10bb24;
            case 0x10BB28u: goto label_10bb28;
            case 0x10BB2Cu: goto label_10bb2c;
            case 0x10BB30u: goto label_10bb30;
            case 0x10BB34u: goto label_10bb34;
            case 0x10BB38u: goto label_10bb38;
            case 0x10BB3Cu: goto label_10bb3c;
            case 0x10BB40u: goto label_10bb40;
            case 0x10BB44u: goto label_10bb44;
            case 0x10BB48u: goto label_10bb48;
            case 0x10BB4Cu: goto label_10bb4c;
            case 0x10BB50u: goto label_10bb50;
            case 0x10BB54u: goto label_10bb54;
            case 0x10BB58u: goto label_10bb58;
            case 0x10BB5Cu: goto label_10bb5c;
            case 0x10BB60u: goto label_10bb60;
            case 0x10BB64u: goto label_10bb64;
            case 0x10BB68u: goto label_10bb68;
            case 0x10BB6Cu: goto label_10bb6c;
            case 0x10BB70u: goto label_10bb70;
            case 0x10BB74u: goto label_10bb74;
            case 0x10BB78u: goto label_10bb78;
            case 0x10BB7Cu: goto label_10bb7c;
            case 0x10BB80u: goto label_10bb80;
            case 0x10BB84u: goto label_10bb84;
            case 0x10BB88u: goto label_10bb88;
            case 0x10BB8Cu: goto label_10bb8c;
            case 0x10BB90u: goto label_10bb90;
            case 0x10BB94u: goto label_10bb94;
            case 0x10BB98u: goto label_10bb98;
            case 0x10BB9Cu: goto label_10bb9c;
            case 0x10BBA0u: goto label_10bba0;
            case 0x10BBA4u: goto label_10bba4;
            case 0x10BBA8u: goto label_10bba8;
            case 0x10BBACu: goto label_10bbac;
            case 0x10BBB0u: goto label_10bbb0;
            case 0x10BBB4u: goto label_10bbb4;
            case 0x10BBB8u: goto label_10bbb8;
            case 0x10BBBCu: goto label_10bbbc;
            case 0x10BBC0u: goto label_10bbc0;
            case 0x10BBC4u: goto label_10bbc4;
            case 0x10BBC8u: goto label_10bbc8;
            case 0x10BBCCu: goto label_10bbcc;
            case 0x10BBD0u: goto label_10bbd0;
            case 0x10BBD4u: goto label_10bbd4;
            case 0x10BBD8u: goto label_10bbd8;
            case 0x10BBDCu: goto label_10bbdc;
            case 0x10BBE0u: goto label_10bbe0;
            case 0x10BBE4u: goto label_10bbe4;
            case 0x10BBE8u: goto label_10bbe8;
            case 0x10BBECu: goto label_10bbec;
            case 0x10BBF0u: goto label_10bbf0;
            case 0x10BBF4u: goto label_10bbf4;
            case 0x10BBF8u: goto label_10bbf8;
            case 0x10BBFCu: goto label_10bbfc;
            case 0x10BC00u: goto label_10bc00;
            case 0x10BC04u: goto label_10bc04;
            case 0x10BC08u: goto label_10bc08;
            case 0x10BC0Cu: goto label_10bc0c;
            case 0x10BC10u: goto label_10bc10;
            case 0x10BC14u: goto label_10bc14;
            case 0x10BC18u: goto label_10bc18;
            case 0x10BC1Cu: goto label_10bc1c;
            case 0x10BC20u: goto label_10bc20;
            case 0x10BC24u: goto label_10bc24;
            case 0x10BC28u: goto label_10bc28;
            case 0x10BC2Cu: goto label_10bc2c;
            case 0x10BC30u: goto label_10bc30;
            case 0x10BC34u: goto label_10bc34;
            case 0x10BC38u: goto label_10bc38;
            case 0x10BC3Cu: goto label_10bc3c;
            case 0x10BC40u: goto label_10bc40;
            case 0x10BC44u: goto label_10bc44;
            case 0x10BC48u: goto label_10bc48;
            case 0x10BC4Cu: goto label_10bc4c;
            case 0x10BC50u: goto label_10bc50;
            case 0x10BC54u: goto label_10bc54;
            case 0x10BC58u: goto label_10bc58;
            case 0x10BC5Cu: goto label_10bc5c;
            case 0x10BC60u: goto label_10bc60;
            case 0x10BC64u: goto label_10bc64;
            case 0x10BC68u: goto label_10bc68;
            case 0x10BC6Cu: goto label_10bc6c;
            case 0x10BC70u: goto label_10bc70;
            case 0x10BC74u: goto label_10bc74;
            case 0x10BC78u: goto label_10bc78;
            case 0x10BC7Cu: goto label_10bc7c;
            case 0x10BC80u: goto label_10bc80;
            case 0x10BC84u: goto label_10bc84;
            case 0x10BC88u: goto label_10bc88;
            case 0x10BC8Cu: goto label_10bc8c;
            case 0x10BC90u: goto label_10bc90;
            case 0x10BC94u: goto label_10bc94;
            case 0x10BC98u: goto label_10bc98;
            case 0x10BC9Cu: goto label_10bc9c;
            case 0x10BCA0u: goto label_10bca0;
            case 0x10BCA4u: goto label_10bca4;
            case 0x10BCA8u: goto label_10bca8;
            case 0x10BCACu: goto label_10bcac;
            case 0x10BCB0u: goto label_10bcb0;
            case 0x10BCB4u: goto label_10bcb4;
            case 0x10BCB8u: goto label_10bcb8;
            case 0x10BCBCu: goto label_10bcbc;
            case 0x10BCC0u: goto label_10bcc0;
            case 0x10BCC4u: goto label_10bcc4;
            case 0x10BCC8u: goto label_10bcc8;
            case 0x10BCCCu: goto label_10bccc;
            case 0x10BCD0u: goto label_10bcd0;
            case 0x10BCD4u: goto label_10bcd4;
            case 0x10BCD8u: goto label_10bcd8;
            case 0x10BCDCu: goto label_10bcdc;
            case 0x10BCE0u: goto label_10bce0;
            case 0x10BCE4u: goto label_10bce4;
            case 0x10BCE8u: goto label_10bce8;
            case 0x10BCECu: goto label_10bcec;
            case 0x10BCF0u: goto label_10bcf0;
            case 0x10BCF4u: goto label_10bcf4;
            case 0x10BCF8u: goto label_10bcf8;
            case 0x10BCFCu: goto label_10bcfc;
            case 0x10BD00u: goto label_10bd00;
            case 0x10BD04u: goto label_10bd04;
            case 0x10BD08u: goto label_10bd08;
            case 0x10BD0Cu: goto label_10bd0c;
            case 0x10BD10u: goto label_10bd10;
            case 0x10BD14u: goto label_10bd14;
            case 0x10BD18u: goto label_10bd18;
            case 0x10BD1Cu: goto label_10bd1c;
            case 0x10BD20u: goto label_10bd20;
            case 0x10BD24u: goto label_10bd24;
            case 0x10BD28u: goto label_10bd28;
            case 0x10BD2Cu: goto label_10bd2c;
            case 0x10BD30u: goto label_10bd30;
            case 0x10BD34u: goto label_10bd34;
            case 0x10BD38u: goto label_10bd38;
            case 0x10BD3Cu: goto label_10bd3c;
            case 0x10BD40u: goto label_10bd40;
            case 0x10BD44u: goto label_10bd44;
            case 0x10BD48u: goto label_10bd48;
            case 0x10BD4Cu: goto label_10bd4c;
            case 0x10BD50u: goto label_10bd50;
            case 0x10BD54u: goto label_10bd54;
            case 0x10BD58u: goto label_10bd58;
            case 0x10BD5Cu: goto label_10bd5c;
            case 0x10BD60u: goto label_10bd60;
            case 0x10BD64u: goto label_10bd64;
            case 0x10BD68u: goto label_10bd68;
            case 0x10BD6Cu: goto label_10bd6c;
            case 0x10BD70u: goto label_10bd70;
            case 0x10BD74u: goto label_10bd74;
            case 0x10BD78u: goto label_10bd78;
            case 0x10BD7Cu: goto label_10bd7c;
            case 0x10BD80u: goto label_10bd80;
            case 0x10BD84u: goto label_10bd84;
            case 0x10BD88u: goto label_10bd88;
            case 0x10BD8Cu: goto label_10bd8c;
            case 0x10BD90u: goto label_10bd90;
            case 0x10BD94u: goto label_10bd94;
            case 0x10BD98u: goto label_10bd98;
            case 0x10BD9Cu: goto label_10bd9c;
            case 0x10BDA0u: goto label_10bda0;
            case 0x10BDA4u: goto label_10bda4;
            case 0x10BDA8u: goto label_10bda8;
            case 0x10BDACu: goto label_10bdac;
            case 0x10BDB0u: goto label_10bdb0;
            case 0x10BDB4u: goto label_10bdb4;
            case 0x10BDB8u: goto label_10bdb8;
            case 0x10BDBCu: goto label_10bdbc;
            case 0x10BDC0u: goto label_10bdc0;
            case 0x10BDC4u: goto label_10bdc4;
            case 0x10BDC8u: goto label_10bdc8;
            case 0x10BDCCu: goto label_10bdcc;
            case 0x10BDD0u: goto label_10bdd0;
            case 0x10BDD4u: goto label_10bdd4;
            case 0x10BDD8u: goto label_10bdd8;
            case 0x10BDDCu: goto label_10bddc;
            case 0x10BDE0u: goto label_10bde0;
            case 0x10BDE4u: goto label_10bde4;
            case 0x10BDE8u: goto label_10bde8;
            case 0x10BDECu: goto label_10bdec;
            case 0x10BDF0u: goto label_10bdf0;
            case 0x10BDF4u: goto label_10bdf4;
            case 0x10BDF8u: goto label_10bdf8;
            case 0x10BDFCu: goto label_10bdfc;
            case 0x10BE00u: goto label_10be00;
            case 0x10BE04u: goto label_10be04;
            case 0x10BE08u: goto label_10be08;
            case 0x10BE0Cu: goto label_10be0c;
            case 0x10BE10u: goto label_10be10;
            case 0x10BE14u: goto label_10be14;
            case 0x10BE18u: goto label_10be18;
            case 0x10BE1Cu: goto label_10be1c;
            case 0x10BE20u: goto label_10be20;
            case 0x10BE24u: goto label_10be24;
            case 0x10BE28u: goto label_10be28;
            case 0x10BE2Cu: goto label_10be2c;
            case 0x10BE30u: goto label_10be30;
            case 0x10BE34u: goto label_10be34;
            case 0x10BE38u: goto label_10be38;
            case 0x10BE3Cu: goto label_10be3c;
            case 0x10BE40u: goto label_10be40;
            case 0x10BE44u: goto label_10be44;
            case 0x10BE48u: goto label_10be48;
            case 0x10BE4Cu: goto label_10be4c;
            case 0x10BE50u: goto label_10be50;
            case 0x10BE54u: goto label_10be54;
            case 0x10BE58u: goto label_10be58;
            case 0x10BE5Cu: goto label_10be5c;
            case 0x10BE60u: goto label_10be60;
            case 0x10BE64u: goto label_10be64;
            case 0x10BE68u: goto label_10be68;
            case 0x10BE6Cu: goto label_10be6c;
            case 0x10BE70u: goto label_10be70;
            case 0x10BE74u: goto label_10be74;
            case 0x10BE78u: goto label_10be78;
            case 0x10BE7Cu: goto label_10be7c;
            case 0x10BE80u: goto label_10be80;
            case 0x10BE84u: goto label_10be84;
            case 0x10BE88u: goto label_10be88;
            case 0x10BE8Cu: goto label_10be8c;
            case 0x10BE90u: goto label_10be90;
            case 0x10BE94u: goto label_10be94;
            case 0x10BE98u: goto label_10be98;
            case 0x10BE9Cu: goto label_10be9c;
            case 0x10BEA0u: goto label_10bea0;
            case 0x10BEA4u: goto label_10bea4;
            case 0x10BEA8u: goto label_10bea8;
            case 0x10BEACu: goto label_10beac;
            case 0x10BEB0u: goto label_10beb0;
            case 0x10BEB4u: goto label_10beb4;
            case 0x10BEB8u: goto label_10beb8;
            case 0x10BEBCu: goto label_10bebc;
            case 0x10BEC0u: goto label_10bec0;
            case 0x10BEC4u: goto label_10bec4;
            case 0x10BEC8u: goto label_10bec8;
            case 0x10BECCu: goto label_10becc;
            case 0x10BED0u: goto label_10bed0;
            case 0x10BED4u: goto label_10bed4;
            case 0x10BED8u: goto label_10bed8;
            case 0x10BEDCu: goto label_10bedc;
            case 0x10BEE0u: goto label_10bee0;
            case 0x10BEE4u: goto label_10bee4;
            case 0x10BEE8u: goto label_10bee8;
            case 0x10BEECu: goto label_10beec;
            case 0x10BEF0u: goto label_10bef0;
            case 0x10BEF4u: goto label_10bef4;
            case 0x10BEF8u: goto label_10bef8;
            case 0x10BEFCu: goto label_10befc;
            case 0x10BF00u: goto label_10bf00;
            case 0x10BF04u: goto label_10bf04;
            case 0x10BF08u: goto label_10bf08;
            case 0x10BF0Cu: goto label_10bf0c;
            case 0x10BF10u: goto label_10bf10;
            case 0x10BF14u: goto label_10bf14;
            case 0x10BF18u: goto label_10bf18;
            case 0x10BF1Cu: goto label_10bf1c;
            case 0x10BF20u: goto label_10bf20;
            case 0x10BF24u: goto label_10bf24;
            case 0x10BF28u: goto label_10bf28;
            case 0x10BF2Cu: goto label_10bf2c;
            case 0x10BF30u: goto label_10bf30;
            case 0x10BF34u: goto label_10bf34;
            case 0x10BF38u: goto label_10bf38;
            case 0x10BF3Cu: goto label_10bf3c;
            case 0x10BF40u: goto label_10bf40;
            case 0x10BF44u: goto label_10bf44;
            case 0x10BF48u: goto label_10bf48;
            case 0x10BF4Cu: goto label_10bf4c;
            case 0x10BF50u: goto label_10bf50;
            case 0x10BF54u: goto label_10bf54;
            case 0x10BF58u: goto label_10bf58;
            case 0x10BF5Cu: goto label_10bf5c;
            case 0x10BF60u: goto label_10bf60;
            case 0x10BF64u: goto label_10bf64;
            case 0x10BF68u: goto label_10bf68;
            case 0x10BF6Cu: goto label_10bf6c;
            case 0x10BF70u: goto label_10bf70;
            case 0x10BF74u: goto label_10bf74;
            case 0x10BF78u: goto label_10bf78;
            case 0x10BF7Cu: goto label_10bf7c;
            case 0x10BF80u: goto label_10bf80;
            case 0x10BF84u: goto label_10bf84;
            case 0x10BF88u: goto label_10bf88;
            case 0x10BF8Cu: goto label_10bf8c;
            case 0x10BF90u: goto label_10bf90;
            case 0x10BF94u: goto label_10bf94;
            case 0x10BF98u: goto label_10bf98;
            case 0x10BF9Cu: goto label_10bf9c;
            case 0x10BFA0u: goto label_10bfa0;
            case 0x10BFA4u: goto label_10bfa4;
            case 0x10BFA8u: goto label_10bfa8;
            case 0x10BFACu: goto label_10bfac;
            case 0x10BFB0u: goto label_10bfb0;
            case 0x10BFB4u: goto label_10bfb4;
            case 0x10BFB8u: goto label_10bfb8;
            case 0x10BFBCu: goto label_10bfbc;
            case 0x10BFC0u: goto label_10bfc0;
            case 0x10BFC4u: goto label_10bfc4;
            case 0x10BFC8u: goto label_10bfc8;
            case 0x10BFCCu: goto label_10bfcc;
            case 0x10BFD0u: goto label_10bfd0;
            case 0x10BFD4u: goto label_10bfd4;
            case 0x10BFD8u: goto label_10bfd8;
            case 0x10BFDCu: goto label_10bfdc;
            case 0x10BFE0u: goto label_10bfe0;
            case 0x10BFE4u: goto label_10bfe4;
            case 0x10BFE8u: goto label_10bfe8;
            case 0x10BFECu: goto label_10bfec;
            case 0x10BFF0u: goto label_10bff0;
            case 0x10BFF4u: goto label_10bff4;
            case 0x10BFF8u: goto label_10bff8;
            case 0x10BFFCu: goto label_10bffc;
            case 0x10C000u: goto label_10c000;
            case 0x10C004u: goto label_10c004;
            case 0x10C008u: goto label_10c008;
            case 0x10C00Cu: goto label_10c00c;
            case 0x10C010u: goto label_10c010;
            case 0x10C014u: goto label_10c014;
            case 0x10C018u: goto label_10c018;
            case 0x10C01Cu: goto label_10c01c;
            case 0x10C020u: goto label_10c020;
            case 0x10C024u: goto label_10c024;
            case 0x10C028u: goto label_10c028;
            case 0x10C02Cu: goto label_10c02c;
            case 0x10C030u: goto label_10c030;
            case 0x10C034u: goto label_10c034;
            case 0x10C038u: goto label_10c038;
            case 0x10C03Cu: goto label_10c03c;
            case 0x10C040u: goto label_10c040;
            case 0x10C044u: goto label_10c044;
            case 0x10C048u: goto label_10c048;
            case 0x10C04Cu: goto label_10c04c;
            case 0x10C050u: goto label_10c050;
            case 0x10C054u: goto label_10c054;
            case 0x10C058u: goto label_10c058;
            case 0x10C05Cu: goto label_10c05c;
            case 0x10C060u: goto label_10c060;
            case 0x10C064u: goto label_10c064;
            case 0x10C068u: goto label_10c068;
            case 0x10C06Cu: goto label_10c06c;
            case 0x10C070u: goto label_10c070;
            case 0x10C074u: goto label_10c074;
            case 0x10C078u: goto label_10c078;
            case 0x10C07Cu: goto label_10c07c;
            case 0x10C080u: goto label_10c080;
            case 0x10C084u: goto label_10c084;
            case 0x10C088u: goto label_10c088;
            case 0x10C08Cu: goto label_10c08c;
            case 0x10C090u: goto label_10c090;
            case 0x10C094u: goto label_10c094;
            case 0x10C098u: goto label_10c098;
            case 0x10C09Cu: goto label_10c09c;
            case 0x10C0A0u: goto label_10c0a0;
            case 0x10C0A4u: goto label_10c0a4;
            case 0x10C0A8u: goto label_10c0a8;
            case 0x10C0ACu: goto label_10c0ac;
            case 0x10C0B0u: goto label_10c0b0;
            case 0x10C0B4u: goto label_10c0b4;
            case 0x10C0B8u: goto label_10c0b8;
            case 0x10C0BCu: goto label_10c0bc;
            case 0x10C0C0u: goto label_10c0c0;
            case 0x10C0C4u: goto label_10c0c4;
            case 0x10C0C8u: goto label_10c0c8;
            case 0x10C0CCu: goto label_10c0cc;
            case 0x10C0D0u: goto label_10c0d0;
            case 0x10C0D4u: goto label_10c0d4;
            case 0x10C0D8u: goto label_10c0d8;
            case 0x10C0DCu: goto label_10c0dc;
            case 0x10C0E0u: goto label_10c0e0;
            case 0x10C0E4u: goto label_10c0e4;
            case 0x10C0E8u: goto label_10c0e8;
            case 0x10C0ECu: goto label_10c0ec;
            case 0x10C0F0u: goto label_10c0f0;
            case 0x10C0F4u: goto label_10c0f4;
            case 0x10C0F8u: goto label_10c0f8;
            case 0x10C0FCu: goto label_10c0fc;
            case 0x10C100u: goto label_10c100;
            case 0x10C104u: goto label_10c104;
            case 0x10C108u: goto label_10c108;
            case 0x10C10Cu: goto label_10c10c;
            case 0x10C110u: goto label_10c110;
            case 0x10C114u: goto label_10c114;
            case 0x10C118u: goto label_10c118;
            case 0x10C11Cu: goto label_10c11c;
            case 0x10C120u: goto label_10c120;
            case 0x10C124u: goto label_10c124;
            case 0x10C128u: goto label_10c128;
            case 0x10C12Cu: goto label_10c12c;
            case 0x10C130u: goto label_10c130;
            case 0x10C134u: goto label_10c134;
            case 0x10C138u: goto label_10c138;
            case 0x10C13Cu: goto label_10c13c;
            case 0x10C140u: goto label_10c140;
            case 0x10C144u: goto label_10c144;
            case 0x10C148u: goto label_10c148;
            case 0x10C14Cu: goto label_10c14c;
            case 0x10C150u: goto label_10c150;
            case 0x10C154u: goto label_10c154;
            case 0x10C158u: goto label_10c158;
            case 0x10C15Cu: goto label_10c15c;
            case 0x10C160u: goto label_10c160;
            case 0x10C164u: goto label_10c164;
            case 0x10C168u: goto label_10c168;
            case 0x10C16Cu: goto label_10c16c;
            case 0x10C170u: goto label_10c170;
            case 0x10C174u: goto label_10c174;
            case 0x10C178u: goto label_10c178;
            case 0x10C17Cu: goto label_10c17c;
            case 0x10C180u: goto label_10c180;
            case 0x10C184u: goto label_10c184;
            case 0x10C188u: goto label_10c188;
            case 0x10C18Cu: goto label_10c18c;
            case 0x10C190u: goto label_10c190;
            case 0x10C194u: goto label_10c194;
            case 0x10C198u: goto label_10c198;
            case 0x10C19Cu: goto label_10c19c;
            case 0x10C1A0u: goto label_10c1a0;
            case 0x10C1A4u: goto label_10c1a4;
            case 0x10C1A8u: goto label_10c1a8;
            case 0x10C1ACu: goto label_10c1ac;
            case 0x10C1B0u: goto label_10c1b0;
            case 0x10C1B4u: goto label_10c1b4;
            case 0x10C1B8u: goto label_10c1b8;
            case 0x10C1BCu: goto label_10c1bc;
            case 0x10C1C0u: goto label_10c1c0;
            case 0x10C1C4u: goto label_10c1c4;
            case 0x10C1C8u: goto label_10c1c8;
            case 0x10C1CCu: goto label_10c1cc;
            case 0x10C1D0u: goto label_10c1d0;
            case 0x10C1D4u: goto label_10c1d4;
            case 0x10C1D8u: goto label_10c1d8;
            case 0x10C1DCu: goto label_10c1dc;
            case 0x10C1E0u: goto label_10c1e0;
            case 0x10C1E4u: goto label_10c1e4;
            case 0x10C1E8u: goto label_10c1e8;
            case 0x10C1ECu: goto label_10c1ec;
            case 0x10C1F0u: goto label_10c1f0;
            case 0x10C1F4u: goto label_10c1f4;
            case 0x10C1F8u: goto label_10c1f8;
            case 0x10C1FCu: goto label_10c1fc;
            case 0x10C200u: goto label_10c200;
            case 0x10C204u: goto label_10c204;
            case 0x10C208u: goto label_10c208;
            case 0x10C20Cu: goto label_10c20c;
            case 0x10C210u: goto label_10c210;
            case 0x10C214u: goto label_10c214;
            case 0x10C218u: goto label_10c218;
            case 0x10C21Cu: goto label_10c21c;
            case 0x10C220u: goto label_10c220;
            case 0x10C224u: goto label_10c224;
            case 0x10C228u: goto label_10c228;
            case 0x10C22Cu: goto label_10c22c;
            case 0x10C230u: goto label_10c230;
            case 0x10C234u: goto label_10c234;
            case 0x10C238u: goto label_10c238;
            case 0x10C23Cu: goto label_10c23c;
            case 0x10C240u: goto label_10c240;
            case 0x10C244u: goto label_10c244;
            case 0x10C248u: goto label_10c248;
            case 0x10C24Cu: goto label_10c24c;
            case 0x10C250u: goto label_10c250;
            case 0x10C254u: goto label_10c254;
            case 0x10C258u: goto label_10c258;
            case 0x10C25Cu: goto label_10c25c;
            case 0x10C260u: goto label_10c260;
            case 0x10C264u: goto label_10c264;
            case 0x10C268u: goto label_10c268;
            case 0x10C26Cu: goto label_10c26c;
            case 0x10C270u: goto label_10c270;
            case 0x10C274u: goto label_10c274;
            case 0x10C278u: goto label_10c278;
            case 0x10C27Cu: goto label_10c27c;
            case 0x10C280u: goto label_10c280;
            case 0x10C284u: goto label_10c284;
            case 0x10C288u: goto label_10c288;
            case 0x10C28Cu: goto label_10c28c;
            case 0x10C290u: goto label_10c290;
            case 0x10C294u: goto label_10c294;
            case 0x10C298u: goto label_10c298;
            case 0x10C29Cu: goto label_10c29c;
            case 0x10C2A0u: goto label_10c2a0;
            case 0x10C2A4u: goto label_10c2a4;
            case 0x10C2A8u: goto label_10c2a8;
            case 0x10C2ACu: goto label_10c2ac;
            case 0x10C2B0u: goto label_10c2b0;
            case 0x10C2B4u: goto label_10c2b4;
            case 0x10C2B8u: goto label_10c2b8;
            case 0x10C2BCu: goto label_10c2bc;
            case 0x10C2C0u: goto label_10c2c0;
            case 0x10C2C4u: goto label_10c2c4;
            case 0x10C2C8u: goto label_10c2c8;
            case 0x10C2CCu: goto label_10c2cc;
            case 0x10C2D0u: goto label_10c2d0;
            case 0x10C2D4u: goto label_10c2d4;
            case 0x10C2D8u: goto label_10c2d8;
            case 0x10C2DCu: goto label_10c2dc;
            case 0x10C2E0u: goto label_10c2e0;
            case 0x10C2E4u: goto label_10c2e4;
            case 0x10C2E8u: goto label_10c2e8;
            case 0x10C2ECu: goto label_10c2ec;
            case 0x10C2F0u: goto label_10c2f0;
            case 0x10C2F4u: goto label_10c2f4;
            case 0x10C2F8u: goto label_10c2f8;
            case 0x10C2FCu: goto label_10c2fc;
            case 0x10C300u: goto label_10c300;
            case 0x10C304u: goto label_10c304;
            case 0x10C308u: goto label_10c308;
            case 0x10C30Cu: goto label_10c30c;
            case 0x10C310u: goto label_10c310;
            case 0x10C314u: goto label_10c314;
            case 0x10C318u: goto label_10c318;
            case 0x10C31Cu: goto label_10c31c;
            case 0x10C320u: goto label_10c320;
            case 0x10C324u: goto label_10c324;
            case 0x10C328u: goto label_10c328;
            case 0x10C32Cu: goto label_10c32c;
            case 0x10C330u: goto label_10c330;
            case 0x10C334u: goto label_10c334;
            case 0x10C338u: goto label_10c338;
            case 0x10C33Cu: goto label_10c33c;
            case 0x10C340u: goto label_10c340;
            case 0x10C344u: goto label_10c344;
            case 0x10C348u: goto label_10c348;
            case 0x10C34Cu: goto label_10c34c;
            case 0x10C350u: goto label_10c350;
            case 0x10C354u: goto label_10c354;
            case 0x10C358u: goto label_10c358;
            case 0x10C35Cu: goto label_10c35c;
            case 0x10C360u: goto label_10c360;
            case 0x10C364u: goto label_10c364;
            case 0x10C368u: goto label_10c368;
            case 0x10C36Cu: goto label_10c36c;
            case 0x10C370u: goto label_10c370;
            case 0x10C374u: goto label_10c374;
            case 0x10C378u: goto label_10c378;
            case 0x10C37Cu: goto label_10c37c;
            case 0x10C380u: goto label_10c380;
            case 0x10C384u: goto label_10c384;
            case 0x10C388u: goto label_10c388;
            case 0x10C38Cu: goto label_10c38c;
            case 0x10C390u: goto label_10c390;
            case 0x10C394u: goto label_10c394;
            case 0x10C398u: goto label_10c398;
            case 0x10C39Cu: goto label_10c39c;
            case 0x10C3A0u: goto label_10c3a0;
            case 0x10C3A4u: goto label_10c3a4;
            case 0x10C3A8u: goto label_10c3a8;
            case 0x10C3ACu: goto label_10c3ac;
            case 0x10C3B0u: goto label_10c3b0;
            case 0x10C3B4u: goto label_10c3b4;
            case 0x10C3B8u: goto label_10c3b8;
            case 0x10C3BCu: goto label_10c3bc;
            case 0x10C3C0u: goto label_10c3c0;
            case 0x10C3C4u: goto label_10c3c4;
            case 0x10C3C8u: goto label_10c3c8;
            case 0x10C3CCu: goto label_10c3cc;
            case 0x10C3D0u: goto label_10c3d0;
            case 0x10C3D4u: goto label_10c3d4;
            case 0x10C3D8u: goto label_10c3d8;
            case 0x10C3DCu: goto label_10c3dc;
            case 0x10C3E0u: goto label_10c3e0;
            case 0x10C3E4u: goto label_10c3e4;
            case 0x10C3E8u: goto label_10c3e8;
            case 0x10C3ECu: goto label_10c3ec;
            case 0x10C3F0u: goto label_10c3f0;
            case 0x10C3F4u: goto label_10c3f4;
            case 0x10C3F8u: goto label_10c3f8;
            case 0x10C3FCu: goto label_10c3fc;
            case 0x10C400u: goto label_10c400;
            case 0x10C404u: goto label_10c404;
            case 0x10C408u: goto label_10c408;
            case 0x10C40Cu: goto label_10c40c;
            case 0x10C410u: goto label_10c410;
            case 0x10C414u: goto label_10c414;
            case 0x10C418u: goto label_10c418;
            case 0x10C41Cu: goto label_10c41c;
            case 0x10C420u: goto label_10c420;
            case 0x10C424u: goto label_10c424;
            case 0x10C428u: goto label_10c428;
            case 0x10C42Cu: goto label_10c42c;
            case 0x10C430u: goto label_10c430;
            case 0x10C434u: goto label_10c434;
            case 0x10C438u: goto label_10c438;
            case 0x10C43Cu: goto label_10c43c;
            case 0x10C440u: goto label_10c440;
            case 0x10C444u: goto label_10c444;
            case 0x10C448u: goto label_10c448;
            case 0x10C44Cu: goto label_10c44c;
            case 0x10C450u: goto label_10c450;
            case 0x10C454u: goto label_10c454;
            case 0x10C458u: goto label_10c458;
            case 0x10C45Cu: goto label_10c45c;
            case 0x10C460u: goto label_10c460;
            case 0x10C464u: goto label_10c464;
            case 0x10C468u: goto label_10c468;
            case 0x10C46Cu: goto label_10c46c;
            case 0x10C470u: goto label_10c470;
            case 0x10C474u: goto label_10c474;
            case 0x10C478u: goto label_10c478;
            case 0x10C47Cu: goto label_10c47c;
            case 0x10C480u: goto label_10c480;
            case 0x10C484u: goto label_10c484;
            case 0x10C488u: goto label_10c488;
            case 0x10C48Cu: goto label_10c48c;
            case 0x10C490u: goto label_10c490;
            case 0x10C494u: goto label_10c494;
            case 0x10C498u: goto label_10c498;
            case 0x10C49Cu: goto label_10c49c;
            case 0x10C4A0u: goto label_10c4a0;
            case 0x10C4A4u: goto label_10c4a4;
            case 0x10C4A8u: goto label_10c4a8;
            case 0x10C4ACu: goto label_10c4ac;
            case 0x10C4B0u: goto label_10c4b0;
            case 0x10C4B4u: goto label_10c4b4;
            case 0x10C4B8u: goto label_10c4b8;
            case 0x10C4BCu: goto label_10c4bc;
            case 0x10C4C0u: goto label_10c4c0;
            case 0x10C4C4u: goto label_10c4c4;
            case 0x10C4C8u: goto label_10c4c8;
            case 0x10C4CCu: goto label_10c4cc;
            case 0x10C4D0u: goto label_10c4d0;
            case 0x10C4D4u: goto label_10c4d4;
            case 0x10C4D8u: goto label_10c4d8;
            case 0x10C4DCu: goto label_10c4dc;
            case 0x10C4E0u: goto label_10c4e0;
            case 0x10C4E4u: goto label_10c4e4;
            case 0x10C4E8u: goto label_10c4e8;
            case 0x10C4ECu: goto label_10c4ec;
            case 0x10C4F0u: goto label_10c4f0;
            case 0x10C4F4u: goto label_10c4f4;
            case 0x10C4F8u: goto label_10c4f8;
            case 0x10C4FCu: goto label_10c4fc;
            case 0x10C500u: goto label_10c500;
            case 0x10C504u: goto label_10c504;
            case 0x10C508u: goto label_10c508;
            case 0x10C50Cu: goto label_10c50c;
            case 0x10C510u: goto label_10c510;
            case 0x10C514u: goto label_10c514;
            case 0x10C518u: goto label_10c518;
            case 0x10C51Cu: goto label_10c51c;
            case 0x10C520u: goto label_10c520;
            case 0x10C524u: goto label_10c524;
            case 0x10C528u: goto label_10c528;
            case 0x10C52Cu: goto label_10c52c;
            case 0x10C530u: goto label_10c530;
            case 0x10C534u: goto label_10c534;
            case 0x10C538u: goto label_10c538;
            case 0x10C53Cu: goto label_10c53c;
            case 0x10C540u: goto label_10c540;
            case 0x10C544u: goto label_10c544;
            case 0x10C548u: goto label_10c548;
            case 0x10C54Cu: goto label_10c54c;
            case 0x10C550u: goto label_10c550;
            case 0x10C554u: goto label_10c554;
            case 0x10C558u: goto label_10c558;
            case 0x10C55Cu: goto label_10c55c;
            case 0x10C560u: goto label_10c560;
            case 0x10C564u: goto label_10c564;
            case 0x10C568u: goto label_10c568;
            case 0x10C56Cu: goto label_10c56c;
            case 0x10C570u: goto label_10c570;
            case 0x10C574u: goto label_10c574;
            case 0x10C578u: goto label_10c578;
            case 0x10C57Cu: goto label_10c57c;
            case 0x10C580u: goto label_10c580;
            case 0x10C584u: goto label_10c584;
            case 0x10C588u: goto label_10c588;
            case 0x10C58Cu: goto label_10c58c;
            case 0x10C590u: goto label_10c590;
            case 0x10C594u: goto label_10c594;
            case 0x10C598u: goto label_10c598;
            case 0x10C59Cu: goto label_10c59c;
            case 0x10C5A0u: goto label_10c5a0;
            case 0x10C5A4u: goto label_10c5a4;
            case 0x10C5A8u: goto label_10c5a8;
            case 0x10C5ACu: goto label_10c5ac;
            case 0x10C5B0u: goto label_10c5b0;
            case 0x10C5B4u: goto label_10c5b4;
            case 0x10C5B8u: goto label_10c5b8;
            case 0x10C5BCu: goto label_10c5bc;
            case 0x10C5C0u: goto label_10c5c0;
            case 0x10C5C4u: goto label_10c5c4;
            case 0x10C5C8u: goto label_10c5c8;
            case 0x10C5CCu: goto label_10c5cc;
            case 0x10C5D0u: goto label_10c5d0;
            case 0x10C5D4u: goto label_10c5d4;
            case 0x10C5D8u: goto label_10c5d8;
            case 0x10C5DCu: goto label_10c5dc;
            case 0x10C5E0u: goto label_10c5e0;
            case 0x10C5E4u: goto label_10c5e4;
            case 0x10C5E8u: goto label_10c5e8;
            case 0x10C5ECu: goto label_10c5ec;
            case 0x10C5F0u: goto label_10c5f0;
            case 0x10C5F4u: goto label_10c5f4;
            case 0x10C5F8u: goto label_10c5f8;
            case 0x10C5FCu: goto label_10c5fc;
            case 0x10C600u: goto label_10c600;
            case 0x10C604u: goto label_10c604;
            case 0x10C608u: goto label_10c608;
            case 0x10C60Cu: goto label_10c60c;
            case 0x10C610u: goto label_10c610;
            case 0x10C614u: goto label_10c614;
            case 0x10C618u: goto label_10c618;
            case 0x10C61Cu: goto label_10c61c;
            case 0x10C620u: goto label_10c620;
            case 0x10C624u: goto label_10c624;
            case 0x10C628u: goto label_10c628;
            case 0x10C62Cu: goto label_10c62c;
            case 0x10C630u: goto label_10c630;
            case 0x10C634u: goto label_10c634;
            case 0x10C638u: goto label_10c638;
            case 0x10C63Cu: goto label_10c63c;
            case 0x10C640u: goto label_10c640;
            case 0x10C644u: goto label_10c644;
            case 0x10C648u: goto label_10c648;
            case 0x10C64Cu: goto label_10c64c;
            case 0x10C650u: goto label_10c650;
            case 0x10C654u: goto label_10c654;
            case 0x10C658u: goto label_10c658;
            case 0x10C65Cu: goto label_10c65c;
            case 0x10C660u: goto label_10c660;
            case 0x10C664u: goto label_10c664;
            case 0x10C668u: goto label_10c668;
            case 0x10C66Cu: goto label_10c66c;
            case 0x10C670u: goto label_10c670;
            case 0x10C674u: goto label_10c674;
            case 0x10C678u: goto label_10c678;
            case 0x10C67Cu: goto label_10c67c;
            case 0x10C680u: goto label_10c680;
            case 0x10C684u: goto label_10c684;
            case 0x10C688u: goto label_10c688;
            case 0x10C68Cu: goto label_10c68c;
            case 0x10C690u: goto label_10c690;
            case 0x10C694u: goto label_10c694;
            case 0x10C698u: goto label_10c698;
            case 0x10C69Cu: goto label_10c69c;
            case 0x10C6A0u: goto label_10c6a0;
            case 0x10C6A4u: goto label_10c6a4;
            case 0x10C6A8u: goto label_10c6a8;
            case 0x10C6ACu: goto label_10c6ac;
            case 0x10C6B0u: goto label_10c6b0;
            case 0x10C6B4u: goto label_10c6b4;
            case 0x10C6B8u: goto label_10c6b8;
            case 0x10C6BCu: goto label_10c6bc;
            case 0x10C6C0u: goto label_10c6c0;
            case 0x10C6C4u: goto label_10c6c4;
            case 0x10C6C8u: goto label_10c6c8;
            case 0x10C6CCu: goto label_10c6cc;
            case 0x10C6D0u: goto label_10c6d0;
            case 0x10C6D4u: goto label_10c6d4;
            case 0x10C6D8u: goto label_10c6d8;
            case 0x10C6DCu: goto label_10c6dc;
            case 0x10C6E0u: goto label_10c6e0;
            case 0x10C6E4u: goto label_10c6e4;
            case 0x10C6E8u: goto label_10c6e8;
            case 0x10C6ECu: goto label_10c6ec;
            case 0x10C6F0u: goto label_10c6f0;
            case 0x10C6F4u: goto label_10c6f4;
            case 0x10C6F8u: goto label_10c6f8;
            case 0x10C6FCu: goto label_10c6fc;
            case 0x10C700u: goto label_10c700;
            case 0x10C704u: goto label_10c704;
            case 0x10C708u: goto label_10c708;
            case 0x10C70Cu: goto label_10c70c;
            case 0x10C710u: goto label_10c710;
            case 0x10C714u: goto label_10c714;
            case 0x10C718u: goto label_10c718;
            case 0x10C71Cu: goto label_10c71c;
            case 0x10C720u: goto label_10c720;
            case 0x10C724u: goto label_10c724;
            case 0x10C728u: goto label_10c728;
            case 0x10C72Cu: goto label_10c72c;
            case 0x10C730u: goto label_10c730;
            case 0x10C734u: goto label_10c734;
            case 0x10C738u: goto label_10c738;
            case 0x10C73Cu: goto label_10c73c;
            case 0x10C740u: goto label_10c740;
            case 0x10C744u: goto label_10c744;
            case 0x10C748u: goto label_10c748;
            case 0x10C74Cu: goto label_10c74c;
            case 0x10C750u: goto label_10c750;
            case 0x10C754u: goto label_10c754;
            case 0x10C758u: goto label_10c758;
            case 0x10C75Cu: goto label_10c75c;
            case 0x10C760u: goto label_10c760;
            case 0x10C764u: goto label_10c764;
            case 0x10C768u: goto label_10c768;
            case 0x10C76Cu: goto label_10c76c;
            case 0x10C770u: goto label_10c770;
            case 0x10C774u: goto label_10c774;
            case 0x10C778u: goto label_10c778;
            case 0x10C77Cu: goto label_10c77c;
            case 0x10C780u: goto label_10c780;
            case 0x10C784u: goto label_10c784;
            case 0x10C788u: goto label_10c788;
            case 0x10C78Cu: goto label_10c78c;
            case 0x10C790u: goto label_10c790;
            case 0x10C794u: goto label_10c794;
            case 0x10C798u: goto label_10c798;
            case 0x10C79Cu: goto label_10c79c;
            case 0x10C7A0u: goto label_10c7a0;
            case 0x10C7A4u: goto label_10c7a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10C7A4u;
label_10c7a4:
    // 0x10c7a4: 0x0
    ctx->pc = 0x10c7a4u;
    // NOP
}
