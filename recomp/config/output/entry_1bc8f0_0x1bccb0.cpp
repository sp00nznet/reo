#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1bc8f0
// Address: 0x1bc8f0 - 0x1bccb0
void entry_1bc8f0_0x1bccb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1bc8f0u;

label_1bc8f0:
    // 0x1bc8f0: 0x27bdffe0
    ctx->pc = 0x1bc8f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1bc8f4:
    // 0x1bc8f4: 0xffbf0010
    ctx->pc = 0x1bc8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1bc8f8:
    // 0x1bc8f8: 0x7fb00000
    ctx->pc = 0x1bc8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1bc8fc:
    // 0x1bc8fc: 0x90860009
    ctx->pc = 0x1bc8fcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
label_1bc900:
    // 0x1bc900: 0x2cc1000d
    ctx->pc = 0x1bc900u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 6), 13));
label_1bc904:
    // 0x1bc904: 0x102000dc
label_1bc908:
    if (ctx->pc == 0x1BC908u) {
        ctx->pc = 0x1BC908u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BC90Cu;
        goto label_1bc90c;
    }
    ctx->pc = 0x1BC904u;
    {
        const bool branch_taken_0x1bc904 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BC908u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1bc904) {
            ctx->pc = 0x1BCC78u;
            goto label_1bcc78;
        }
    }
    ctx->pc = 0x1BC90Cu;
label_1bc90c:
    // 0x1bc90c: 0x3c050025
    ctx->pc = 0x1bc90cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
label_1bc910:
    // 0x1bc910: 0x61880
    ctx->pc = 0x1bc910u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
label_1bc914:
    // 0x1bc914: 0x24a502c0
    ctx->pc = 0x1bc914u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 704));
label_1bc918:
    // 0x1bc918: 0x651821
    ctx->pc = 0x1bc918u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1bc91c:
    // 0x1bc91c: 0x8c630000
    ctx->pc = 0x1bc91cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bc920:
    // 0x1bc920: 0x600008
label_1bc924:
    if (ctx->pc == 0x1BC924u) {
        ctx->pc = 0x1BC928u;
        goto label_1bc928;
    }
    ctx->pc = 0x1BC920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC8F0u: goto label_1bc8f0;
            case 0x1BC8F4u: goto label_1bc8f4;
            case 0x1BC8F8u: goto label_1bc8f8;
            case 0x1BC8FCu: goto label_1bc8fc;
            case 0x1BC900u: goto label_1bc900;
            case 0x1BC904u: goto label_1bc904;
            case 0x1BC908u: goto label_1bc908;
            case 0x1BC90Cu: goto label_1bc90c;
            case 0x1BC910u: goto label_1bc910;
            case 0x1BC914u: goto label_1bc914;
            case 0x1BC918u: goto label_1bc918;
            case 0x1BC91Cu: goto label_1bc91c;
            case 0x1BC920u: goto label_1bc920;
            case 0x1BC924u: goto label_1bc924;
            case 0x1BC928u: goto label_1bc928;
            case 0x1BC92Cu: goto label_1bc92c;
            case 0x1BC930u: goto label_1bc930;
            case 0x1BC934u: goto label_1bc934;
            case 0x1BC938u: goto label_1bc938;
            case 0x1BC93Cu: goto label_1bc93c;
            case 0x1BC940u: goto label_1bc940;
            case 0x1BC944u: goto label_1bc944;
            case 0x1BC948u: goto label_1bc948;
            case 0x1BC94Cu: goto label_1bc94c;
            case 0x1BC950u: goto label_1bc950;
            case 0x1BC954u: goto label_1bc954;
            case 0x1BC958u: goto label_1bc958;
            case 0x1BC95Cu: goto label_1bc95c;
            case 0x1BC960u: goto label_1bc960;
            case 0x1BC964u: goto label_1bc964;
            case 0x1BC968u: goto label_1bc968;
            case 0x1BC96Cu: goto label_1bc96c;
            case 0x1BC970u: goto label_1bc970;
            case 0x1BC974u: goto label_1bc974;
            case 0x1BC978u: goto label_1bc978;
            case 0x1BC97Cu: goto label_1bc97c;
            case 0x1BC980u: goto label_1bc980;
            case 0x1BC984u: goto label_1bc984;
            case 0x1BC988u: goto label_1bc988;
            case 0x1BC98Cu: goto label_1bc98c;
            case 0x1BC990u: goto label_1bc990;
            case 0x1BC994u: goto label_1bc994;
            case 0x1BC998u: goto label_1bc998;
            case 0x1BC99Cu: goto label_1bc99c;
            case 0x1BC9A0u: goto label_1bc9a0;
            case 0x1BC9A4u: goto label_1bc9a4;
            case 0x1BC9A8u: goto label_1bc9a8;
            case 0x1BC9ACu: goto label_1bc9ac;
            case 0x1BC9B0u: goto label_1bc9b0;
            case 0x1BC9B4u: goto label_1bc9b4;
            case 0x1BC9B8u: goto label_1bc9b8;
            case 0x1BC9BCu: goto label_1bc9bc;
            case 0x1BC9C0u: goto label_1bc9c0;
            case 0x1BC9C4u: goto label_1bc9c4;
            case 0x1BC9C8u: goto label_1bc9c8;
            case 0x1BC9CCu: goto label_1bc9cc;
            case 0x1BC9D0u: goto label_1bc9d0;
            case 0x1BC9D4u: goto label_1bc9d4;
            case 0x1BC9D8u: goto label_1bc9d8;
            case 0x1BC9DCu: goto label_1bc9dc;
            case 0x1BC9E0u: goto label_1bc9e0;
            case 0x1BC9E4u: goto label_1bc9e4;
            case 0x1BC9E8u: goto label_1bc9e8;
            case 0x1BC9ECu: goto label_1bc9ec;
            case 0x1BC9F0u: goto label_1bc9f0;
            case 0x1BC9F4u: goto label_1bc9f4;
            case 0x1BC9F8u: goto label_1bc9f8;
            case 0x1BC9FCu: goto label_1bc9fc;
            case 0x1BCA00u: goto label_1bca00;
            case 0x1BCA04u: goto label_1bca04;
            case 0x1BCA08u: goto label_1bca08;
            case 0x1BCA0Cu: goto label_1bca0c;
            case 0x1BCA10u: goto label_1bca10;
            case 0x1BCA14u: goto label_1bca14;
            case 0x1BCA18u: goto label_1bca18;
            case 0x1BCA1Cu: goto label_1bca1c;
            case 0x1BCA20u: goto label_1bca20;
            case 0x1BCA24u: goto label_1bca24;
            case 0x1BCA28u: goto label_1bca28;
            case 0x1BCA2Cu: goto label_1bca2c;
            case 0x1BCA30u: goto label_1bca30;
            case 0x1BCA34u: goto label_1bca34;
            case 0x1BCA38u: goto label_1bca38;
            case 0x1BCA3Cu: goto label_1bca3c;
            case 0x1BCA40u: goto label_1bca40;
            case 0x1BCA44u: goto label_1bca44;
            case 0x1BCA48u: goto label_1bca48;
            case 0x1BCA4Cu: goto label_1bca4c;
            case 0x1BCA50u: goto label_1bca50;
            case 0x1BCA54u: goto label_1bca54;
            case 0x1BCA58u: goto label_1bca58;
            case 0x1BCA5Cu: goto label_1bca5c;
            case 0x1BCA60u: goto label_1bca60;
            case 0x1BCA64u: goto label_1bca64;
            case 0x1BCA68u: goto label_1bca68;
            case 0x1BCA6Cu: goto label_1bca6c;
            case 0x1BCA70u: goto label_1bca70;
            case 0x1BCA74u: goto label_1bca74;
            case 0x1BCA78u: goto label_1bca78;
            case 0x1BCA7Cu: goto label_1bca7c;
            case 0x1BCA80u: goto label_1bca80;
            case 0x1BCA84u: goto label_1bca84;
            case 0x1BCA88u: goto label_1bca88;
            case 0x1BCA8Cu: goto label_1bca8c;
            case 0x1BCA90u: goto label_1bca90;
            case 0x1BCA94u: goto label_1bca94;
            case 0x1BCA98u: goto label_1bca98;
            case 0x1BCA9Cu: goto label_1bca9c;
            case 0x1BCAA0u: goto label_1bcaa0;
            case 0x1BCAA4u: goto label_1bcaa4;
            case 0x1BCAA8u: goto label_1bcaa8;
            case 0x1BCAACu: goto label_1bcaac;
            case 0x1BCAB0u: goto label_1bcab0;
            case 0x1BCAB4u: goto label_1bcab4;
            case 0x1BCAB8u: goto label_1bcab8;
            case 0x1BCABCu: goto label_1bcabc;
            case 0x1BCAC0u: goto label_1bcac0;
            case 0x1BCAC4u: goto label_1bcac4;
            case 0x1BCAC8u: goto label_1bcac8;
            case 0x1BCACCu: goto label_1bcacc;
            case 0x1BCAD0u: goto label_1bcad0;
            case 0x1BCAD4u: goto label_1bcad4;
            case 0x1BCAD8u: goto label_1bcad8;
            case 0x1BCADCu: goto label_1bcadc;
            case 0x1BCAE0u: goto label_1bcae0;
            case 0x1BCAE4u: goto label_1bcae4;
            case 0x1BCAE8u: goto label_1bcae8;
            case 0x1BCAECu: goto label_1bcaec;
            case 0x1BCAF0u: goto label_1bcaf0;
            case 0x1BCAF4u: goto label_1bcaf4;
            case 0x1BCAF8u: goto label_1bcaf8;
            case 0x1BCAFCu: goto label_1bcafc;
            case 0x1BCB00u: goto label_1bcb00;
            case 0x1BCB04u: goto label_1bcb04;
            case 0x1BCB08u: goto label_1bcb08;
            case 0x1BCB0Cu: goto label_1bcb0c;
            case 0x1BCB10u: goto label_1bcb10;
            case 0x1BCB14u: goto label_1bcb14;
            case 0x1BCB18u: goto label_1bcb18;
            case 0x1BCB1Cu: goto label_1bcb1c;
            case 0x1BCB20u: goto label_1bcb20;
            case 0x1BCB24u: goto label_1bcb24;
            case 0x1BCB28u: goto label_1bcb28;
            case 0x1BCB2Cu: goto label_1bcb2c;
            case 0x1BCB30u: goto label_1bcb30;
            case 0x1BCB34u: goto label_1bcb34;
            case 0x1BCB38u: goto label_1bcb38;
            case 0x1BCB3Cu: goto label_1bcb3c;
            case 0x1BCB40u: goto label_1bcb40;
            case 0x1BCB44u: goto label_1bcb44;
            case 0x1BCB48u: goto label_1bcb48;
            case 0x1BCB4Cu: goto label_1bcb4c;
            case 0x1BCB50u: goto label_1bcb50;
            case 0x1BCB54u: goto label_1bcb54;
            case 0x1BCB58u: goto label_1bcb58;
            case 0x1BCB5Cu: goto label_1bcb5c;
            case 0x1BCB60u: goto label_1bcb60;
            case 0x1BCB64u: goto label_1bcb64;
            case 0x1BCB68u: goto label_1bcb68;
            case 0x1BCB6Cu: goto label_1bcb6c;
            case 0x1BCB70u: goto label_1bcb70;
            case 0x1BCB74u: goto label_1bcb74;
            case 0x1BCB78u: goto label_1bcb78;
            case 0x1BCB7Cu: goto label_1bcb7c;
            case 0x1BCB80u: goto label_1bcb80;
            case 0x1BCB84u: goto label_1bcb84;
            case 0x1BCB88u: goto label_1bcb88;
            case 0x1BCB8Cu: goto label_1bcb8c;
            case 0x1BCB90u: goto label_1bcb90;
            case 0x1BCB94u: goto label_1bcb94;
            case 0x1BCB98u: goto label_1bcb98;
            case 0x1BCB9Cu: goto label_1bcb9c;
            case 0x1BCBA0u: goto label_1bcba0;
            case 0x1BCBA4u: goto label_1bcba4;
            case 0x1BCBA8u: goto label_1bcba8;
            case 0x1BCBACu: goto label_1bcbac;
            case 0x1BCBB0u: goto label_1bcbb0;
            case 0x1BCBB4u: goto label_1bcbb4;
            case 0x1BCBB8u: goto label_1bcbb8;
            case 0x1BCBBCu: goto label_1bcbbc;
            case 0x1BCBC0u: goto label_1bcbc0;
            case 0x1BCBC4u: goto label_1bcbc4;
            case 0x1BCBC8u: goto label_1bcbc8;
            case 0x1BCBCCu: goto label_1bcbcc;
            case 0x1BCBD0u: goto label_1bcbd0;
            case 0x1BCBD4u: goto label_1bcbd4;
            case 0x1BCBD8u: goto label_1bcbd8;
            case 0x1BCBDCu: goto label_1bcbdc;
            case 0x1BCBE0u: goto label_1bcbe0;
            case 0x1BCBE4u: goto label_1bcbe4;
            case 0x1BCBE8u: goto label_1bcbe8;
            case 0x1BCBECu: goto label_1bcbec;
            case 0x1BCBF0u: goto label_1bcbf0;
            case 0x1BCBF4u: goto label_1bcbf4;
            case 0x1BCBF8u: goto label_1bcbf8;
            case 0x1BCBFCu: goto label_1bcbfc;
            case 0x1BCC00u: goto label_1bcc00;
            case 0x1BCC04u: goto label_1bcc04;
            case 0x1BCC08u: goto label_1bcc08;
            case 0x1BCC0Cu: goto label_1bcc0c;
            case 0x1BCC10u: goto label_1bcc10;
            case 0x1BCC14u: goto label_1bcc14;
            case 0x1BCC18u: goto label_1bcc18;
            case 0x1BCC1Cu: goto label_1bcc1c;
            case 0x1BCC20u: goto label_1bcc20;
            case 0x1BCC24u: goto label_1bcc24;
            case 0x1BCC28u: goto label_1bcc28;
            case 0x1BCC2Cu: goto label_1bcc2c;
            case 0x1BCC30u: goto label_1bcc30;
            case 0x1BCC34u: goto label_1bcc34;
            case 0x1BCC38u: goto label_1bcc38;
            case 0x1BCC3Cu: goto label_1bcc3c;
            case 0x1BCC40u: goto label_1bcc40;
            case 0x1BCC44u: goto label_1bcc44;
            case 0x1BCC48u: goto label_1bcc48;
            case 0x1BCC4Cu: goto label_1bcc4c;
            case 0x1BCC50u: goto label_1bcc50;
            case 0x1BCC54u: goto label_1bcc54;
            case 0x1BCC58u: goto label_1bcc58;
            case 0x1BCC5Cu: goto label_1bcc5c;
            case 0x1BCC60u: goto label_1bcc60;
            case 0x1BCC64u: goto label_1bcc64;
            case 0x1BCC68u: goto label_1bcc68;
            case 0x1BCC6Cu: goto label_1bcc6c;
            case 0x1BCC70u: goto label_1bcc70;
            case 0x1BCC74u: goto label_1bcc74;
            case 0x1BCC78u: goto label_1bcc78;
            case 0x1BCC7Cu: goto label_1bcc7c;
            case 0x1BCC80u: goto label_1bcc80;
            case 0x1BCC84u: goto label_1bcc84;
            case 0x1BCC88u: goto label_1bcc88;
            case 0x1BCC8Cu: goto label_1bcc8c;
            case 0x1BCC90u: goto label_1bcc90;
            case 0x1BCC94u: goto label_1bcc94;
            case 0x1BCC98u: goto label_1bcc98;
            case 0x1BCC9Cu: goto label_1bcc9c;
            case 0x1BCCA0u: goto label_1bcca0;
            case 0x1BCCA4u: goto label_1bcca4;
            case 0x1BCCA8u: goto label_1bcca8;
            case 0x1BCCACu: goto label_1bccac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BC928u;
label_1bc928:
    // 0x1bc928: 0xc06c280
label_1bc92c:
    if (ctx->pc == 0x1BC92Cu) {
        ctx->pc = 0x1BC930u;
        goto label_1bc930;
    }
    ctx->pc = 0x1BC928u;
    SET_GPR_U32(ctx, 31, 0x1BC930u);
    ctx->pc = 0x1B0A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0A00_0x1b0a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC930u; }
    }
    if (ctx->pc != 0x1BC930u) { return; }
    ctx->pc = 0x1BC930u;
label_1bc930:
    // 0x1bc930: 0x2263c
    ctx->pc = 0x1bc930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
label_1bc934:
    // 0x1bc934: 0x2403ffff
    ctx->pc = 0x1bc934u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1bc938:
    // 0x1bc938: 0x4263f
    ctx->pc = 0x1bc938u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_1bc93c:
    // 0x1bc93c: 0x108300ce
label_1bc940:
    if (ctx->pc == 0x1BC940u) {
        ctx->pc = 0x1BC944u;
        goto label_1bc944;
    }
    ctx->pc = 0x1BC93Cu;
    {
        const bool branch_taken_0x1bc93c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1bc93c) {
            ctx->pc = 0x1BCC78u;
            goto label_1bcc78;
        }
    }
    ctx->pc = 0x1BC944u;
label_1bc944:
    // 0x1bc944: 0x92030009
    ctx->pc = 0x1bc944u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_1bc948:
    // 0x1bc948: 0x24630001
    ctx->pc = 0x1bc948u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_1bc94c:
    // 0x1bc94c: 0x100000ca
label_1bc950:
    if (ctx->pc == 0x1BC950u) {
        ctx->pc = 0x1BC950u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1BC954u;
        goto label_1bc954;
    }
    ctx->pc = 0x1BC94Cu;
    {
        const bool branch_taken_0x1bc94c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BC950u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1bc94c) {
            ctx->pc = 0x1BCC78u;
            goto label_1bcc78;
        }
    }
    ctx->pc = 0x1BC954u;
label_1bc954:
    // 0x1bc954: 0xc06f34c
label_1bc958:
    if (ctx->pc == 0x1BC958u) {
        ctx->pc = 0x1BC95Cu;
        goto label_1bc95c;
    }
    ctx->pc = 0x1BC954u;
    SET_GPR_U32(ctx, 31, 0x1BC95Cu);
    ctx->pc = 0x1BCD30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BCD30_0x1bcd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC95Cu; }
    }
    if (ctx->pc != 0x1BC95Cu) { return; }
    ctx->pc = 0x1BC95Cu;
label_1bc95c:
    // 0x1bc95c: 0x144000c6
label_1bc960:
    if (ctx->pc == 0x1BC960u) {
        ctx->pc = 0x1BC964u;
        goto label_1bc964;
    }
    ctx->pc = 0x1BC95Cu;
    {
        const bool branch_taken_0x1bc95c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1bc95c) {
            ctx->pc = 0x1BCC78u;
            goto label_1bcc78;
        }
    }
    ctx->pc = 0x1BC964u;
label_1bc964:
    // 0x1bc964: 0x92030009
    ctx->pc = 0x1bc964u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_1bc968:
    // 0x1bc968: 0x24630001
    ctx->pc = 0x1bc968u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_1bc96c:
    // 0x1bc96c: 0x100000c2
label_1bc970:
    if (ctx->pc == 0x1BC970u) {
        ctx->pc = 0x1BC970u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1BC974u;
        goto label_1bc974;
    }
    ctx->pc = 0x1BC96Cu;
    {
        const bool branch_taken_0x1bc96c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BC970u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1bc96c) {
            ctx->pc = 0x1BCC78u;
            goto label_1bcc78;
        }
    }
    ctx->pc = 0x1BC974u;
label_1bc974:
    // 0x1bc974: 0x202d
    ctx->pc = 0x1bc974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc978:
    // 0x1bc978: 0xc070980
label_1bc97c:
    if (ctx->pc == 0x1BC97Cu) {
        ctx->pc = 0x1BC97Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BC980u;
        goto label_1bc980;
    }
    ctx->pc = 0x1BC978u;
    SET_GPR_U32(ctx, 31, 0x1BC980u);
    ctx->pc = 0x1BC97Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C2600u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C2600_0x1c2600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC980u; }
    }
    if (ctx->pc != 0x1BC980u) { return; }
    ctx->pc = 0x1BC980u;
label_1bc980:
    // 0x1bc980: 0x24030004
    ctx->pc = 0x1bc980u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
label_1bc984:
    // 0x1bc984: 0x100000bc
label_1bc988:
    if (ctx->pc == 0x1BC988u) {
        ctx->pc = 0x1BC988u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1BC98Cu;
        goto label_1bc98c;
    }
    ctx->pc = 0x1BC984u;
    {
        const bool branch_taken_0x1bc984 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BC988u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1bc984) {
            ctx->pc = 0x1BCC78u;
            goto label_1bcc78;
        }
    }
    ctx->pc = 0x1BC98Cu;
label_1bc98c:
    // 0x1bc98c: 0x24c30001
    ctx->pc = 0x1bc98cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 1));
label_1bc990:
    // 0x1bc990: 0x100000b9
label_1bc994:
    if (ctx->pc == 0x1BC994u) {
        ctx->pc = 0x1BC994u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1BC998u;
        goto label_1bc998;
    }
    ctx->pc = 0x1BC990u;
    {
        const bool branch_taken_0x1bc990 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BC994u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1bc990) {
            ctx->pc = 0x1BCC78u;
            goto label_1bcc78;
        }
    }
    ctx->pc = 0x1BC998u;
label_1bc998:
    // 0x1bc998: 0xc070a50
label_1bc99c:
    if (ctx->pc == 0x1BC99Cu) {
        ctx->pc = 0x1BC9A0u;
        goto label_1bc9a0;
    }
    ctx->pc = 0x1BC998u;
    SET_GPR_U32(ctx, 31, 0x1BC9A0u);
    ctx->pc = 0x1C2940u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C2940_0x1c2940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC9A0u; }
    }
    if (ctx->pc != 0x1BC9A0u) { return; }
    ctx->pc = 0x1BC9A0u;
label_1bc9a0:
    // 0x1bc9a0: 0x144000b5
label_1bc9a4:
    if (ctx->pc == 0x1BC9A4u) {
        ctx->pc = 0x1BC9A8u;
        goto label_1bc9a8;
    }
    ctx->pc = 0x1BC9A0u;
    {
        const bool branch_taken_0x1bc9a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1bc9a0) {
            ctx->pc = 0x1BCC78u;
            goto label_1bcc78;
        }
    }
    ctx->pc = 0x1BC9A8u;
label_1bc9a8:
    // 0x1bc9a8: 0x24020080
    ctx->pc = 0x1bc9a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
label_1bc9ac:
    // 0x1bc9ac: 0x24040008
    ctx->pc = 0x1bc9acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
label_1bc9b0:
    // 0x1bc9b0: 0xc06f074
label_1bc9b4:
    if (ctx->pc == 0x1BC9B4u) {
        ctx->pc = 0x1BC9B4u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1BC9B8u;
        goto label_1bc9b8;
    }
    ctx->pc = 0x1BC9B0u;
    SET_GPR_U32(ctx, 31, 0x1BC9B8u);
    ctx->pc = 0x1BC9B4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1BC1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC1D0_0x1bc1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC9B8u; }
    }
    if (ctx->pc != 0x1BC9B8u) { return; }
    ctx->pc = 0x1BC9B8u;
label_1bc9b8:
    // 0x1bc9b8: 0x92030009
    ctx->pc = 0x1bc9b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_1bc9bc:
    // 0x1bc9bc: 0x24630001
    ctx->pc = 0x1bc9bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_1bc9c0:
    // 0x1bc9c0: 0x100000ad
label_1bc9c4:
    if (ctx->pc == 0x1BC9C4u) {
        ctx->pc = 0x1BC9C4u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1BC9C8u;
        goto label_1bc9c8;
    }
    ctx->pc = 0x1BC9C0u;
    {
        const bool branch_taken_0x1bc9c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BC9C4u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1bc9c0) {
            ctx->pc = 0x1BCC78u;
            goto label_1bcc78;
        }
    }
    ctx->pc = 0x1BC9C8u;
label_1bc9c8:
    // 0x1bc9c8: 0xc06f1e0
label_1bc9cc:
    if (ctx->pc == 0x1BC9CCu) {
        ctx->pc = 0x1BC9D0u;
        goto label_1bc9d0;
    }
    ctx->pc = 0x1BC9C8u;
    SET_GPR_U32(ctx, 31, 0x1BC9D0u);
    ctx->pc = 0x1BC780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC780_0x1bc780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC9D0u; }
    }
    if (ctx->pc != 0x1BC9D0u) { return; }
    ctx->pc = 0x1BC9D0u;
label_1bc9d0:
    // 0x1bc9d0: 0xc06f220
label_1bc9d4:
    if (ctx->pc == 0x1BC9D4u) {
        ctx->pc = 0x1BC9D8u;
        goto label_1bc9d8;
    }
    ctx->pc = 0x1BC9D0u;
    SET_GPR_U32(ctx, 31, 0x1BC9D8u);
    ctx->pc = 0x1BC880u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC880_0x1bc880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC9D8u; }
    }
    if (ctx->pc != 0x1BC9D8u) { return; }
    ctx->pc = 0x1BC9D8u;
label_1bc9d8:
    // 0x1bc9d8: 0x3c010032
    ctx->pc = 0x1bc9d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
label_1bc9dc:
    // 0x1bc9dc: 0x24040008
    ctx->pc = 0x1bc9dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
label_1bc9e0:
    // 0x1bc9e0: 0xac2044d8
    ctx->pc = 0x1bc9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17624), GPR_U32(ctx, 0));
label_1bc9e4:
    // 0x1bc9e4: 0x92020009
    ctx->pc = 0x1bc9e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_1bc9e8:
    // 0x1bc9e8: 0x24420001
    ctx->pc = 0x1bc9e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1bc9ec:
    // 0x1bc9ec: 0xc06f074
label_1bc9f0:
    if (ctx->pc == 0x1BC9F0u) {
        ctx->pc = 0x1BC9F0u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1BC9F4u;
        goto label_1bc9f4;
    }
    ctx->pc = 0x1BC9ECu;
    SET_GPR_U32(ctx, 31, 0x1BC9F4u);
    ctx->pc = 0x1BC9F0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1BC1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC1D0_0x1bc1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC9F4u; }
    }
    if (ctx->pc != 0x1BC9F4u) { return; }
    ctx->pc = 0x1BC9F4u;
label_1bc9f4:
    // 0x1bc9f4: 0x100000a1
label_1bc9f8:
    if (ctx->pc == 0x1BC9F8u) {
        ctx->pc = 0x1BC9F8u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
        ctx->pc = 0x1BC9FCu;
        goto label_1bc9fc;
    }
    ctx->pc = 0x1BC9F4u;
    {
        const bool branch_taken_0x1bc9f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BC9F8u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
        if (branch_taken_0x1bc9f4) {
            ctx->pc = 0x1BCC7Cu;
            goto label_1bcc7c;
        }
    }
    ctx->pc = 0x1BC9FCu;
label_1bc9fc:
    // 0x1bc9fc: 0xc075328
label_1bca00:
    if (ctx->pc == 0x1BCA00u) {
        ctx->pc = 0x1BCA04u;
        goto label_1bca04;
    }
    ctx->pc = 0x1BC9FCu;
    SET_GPR_U32(ctx, 31, 0x1BCA04u);
    ctx->pc = 0x1D4CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4CA0_0x1d4ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCA04u; }
    }
    if (ctx->pc != 0x1BCA04u) { return; }
    ctx->pc = 0x1BCA04u;
label_1bca04:
    // 0x1bca04: 0x1440009c
label_1bca08:
    if (ctx->pc == 0x1BCA08u) {
        ctx->pc = 0x1BCA0Cu;
        goto label_1bca0c;
    }
    ctx->pc = 0x1BCA04u;
    {
        const bool branch_taken_0x1bca04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1bca04) {
            ctx->pc = 0x1BCC78u;
            goto label_1bcc78;
        }
    }
    ctx->pc = 0x1BCA0Cu;
label_1bca0c:
    // 0x1bca0c: 0x92030009
    ctx->pc = 0x1bca0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_1bca10:
    // 0x1bca10: 0x24630001
    ctx->pc = 0x1bca10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_1bca14:
    // 0x1bca14: 0x10000098
label_1bca18:
    if (ctx->pc == 0x1BCA18u) {
        ctx->pc = 0x1BCA18u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1BCA1Cu;
        goto label_1bca1c;
    }
    ctx->pc = 0x1BCA14u;
    {
        const bool branch_taken_0x1bca14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BCA18u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1bca14) {
            ctx->pc = 0x1BCC78u;
            goto label_1bcc78;
        }
    }
    ctx->pc = 0x1BCA1Cu;
label_1bca1c:
    // 0x1bca1c: 0x9202000a
    ctx->pc = 0x1bca1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
label_1bca20:
    // 0x1bca20: 0x2442ffff
    ctx->pc = 0x1bca20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_1bca24:
    // 0x1bca24: 0xa202000a
    ctx->pc = 0x1bca24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 2));
label_1bca28:
    // 0x1bca28: 0x304200ff
    ctx->pc = 0x1bca28u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
label_1bca2c:
    // 0x1bca2c: 0x1040000e
label_1bca30:
    if (ctx->pc == 0x1BCA30u) {
        ctx->pc = 0x1BCA34u;
        goto label_1bca34;
    }
    ctx->pc = 0x1BCA2Cu;
    {
        const bool branch_taken_0x1bca2c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bca2c) {
            ctx->pc = 0x1BCA68u;
            goto label_1bca68;
        }
    }
    ctx->pc = 0x1BCA34u;
label_1bca34:
    // 0x1bca34: 0x9203000a
    ctx->pc = 0x1bca34u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
label_1bca38:
    // 0x1bca38: 0x24020014
    ctx->pc = 0x1bca38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
label_1bca3c:
    // 0x1bca3c: 0x14620004
label_1bca40:
    if (ctx->pc == 0x1BCA40u) {
        ctx->pc = 0x1BCA40u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1BCA44u;
        goto label_1bca44;
    }
    ctx->pc = 0x1BCA3Cu;
    {
        const bool branch_taken_0x1bca3c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1BCA40u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1bca3c) {
            ctx->pc = 0x1BCA50u;
            goto label_1bca50;
        }
    }
    ctx->pc = 0x1BCA44u;
label_1bca44:
    // 0x1bca44: 0xc06f074
label_1bca48:
    if (ctx->pc == 0x1BCA48u) {
        ctx->pc = 0x1BCA48u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x1BCA4Cu;
        goto label_1bca4c;
    }
    ctx->pc = 0x1BCA44u;
    SET_GPR_U32(ctx, 31, 0x1BCA4Cu);
    ctx->pc = 0x1BCA48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x1BC1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC1D0_0x1bc1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCA4Cu; }
    }
    if (ctx->pc != 0x1BCA4Cu) { return; }
    ctx->pc = 0x1BCA4Cu;
label_1bca4c:
    // 0x1bca4c: 0x24040001
    ctx->pc = 0x1bca4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_1bca50:
    // 0x1bca50: 0xc06f1ec
label_1bca54:
    if (ctx->pc == 0x1BCA54u) {
        ctx->pc = 0x1BCA58u;
        goto label_1bca58;
    }
    ctx->pc = 0x1BCA50u;
    SET_GPR_U32(ctx, 31, 0x1BCA58u);
    ctx->pc = 0x1BC7B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC7B0_0x1bc7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCA58u; }
    }
    if (ctx->pc != 0x1BCA58u) { return; }
    ctx->pc = 0x1BCA58u;
label_1bca58:
    // 0x1bca58: 0xc06edb8
label_1bca5c:
    if (ctx->pc == 0x1BCA5Cu) {
        ctx->pc = 0x1BCA60u;
        goto label_1bca60;
    }
    ctx->pc = 0x1BCA58u;
    SET_GPR_U32(ctx, 31, 0x1BCA60u);
    ctx->pc = 0x1BB6E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB6E0_0x1bb6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCA60u; }
    }
    if (ctx->pc != 0x1BCA60u) { return; }
    ctx->pc = 0x1BCA60u;
label_1bca60:
    // 0x1bca60: 0x10000085
label_1bca64:
    if (ctx->pc == 0x1BCA64u) {
        ctx->pc = 0x1BCA68u;
        goto label_1bca68;
    }
    ctx->pc = 0x1BCA60u;
    {
        const bool branch_taken_0x1bca60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bca60) {
            ctx->pc = 0x1BCC78u;
            goto label_1bcc78;
        }
    }
    ctx->pc = 0x1BCA68u;
label_1bca68:
    // 0x1bca68: 0x92030009
    ctx->pc = 0x1bca68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_1bca6c:
    // 0x1bca6c: 0x24020080
    ctx->pc = 0x1bca6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
label_1bca70:
    // 0x1bca70: 0x24040008
    ctx->pc = 0x1bca70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
label_1bca74:
    // 0x1bca74: 0x24630001
    ctx->pc = 0x1bca74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_1bca78:
    // 0x1bca78: 0xa2030009
    ctx->pc = 0x1bca78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 3));
label_1bca7c:
    // 0x1bca7c: 0xc06f074
label_1bca80:
    if (ctx->pc == 0x1BCA80u) {
        ctx->pc = 0x1BCA80u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1BCA84u;
        goto label_1bca84;
    }
    ctx->pc = 0x1BCA7Cu;
    SET_GPR_U32(ctx, 31, 0x1BCA84u);
    ctx->pc = 0x1BCA80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1BC1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC1D0_0x1bc1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCA84u; }
    }
    if (ctx->pc != 0x1BCA84u) { return; }
    ctx->pc = 0x1BCA84u;
label_1bca84:
    // 0x1bca84: 0x1000007c
label_1bca88:
    if (ctx->pc == 0x1BCA88u) {
        ctx->pc = 0x1BCA8Cu;
        goto label_1bca8c;
    }
    ctx->pc = 0x1BCA84u;
    {
        const bool branch_taken_0x1bca84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bca84) {
            ctx->pc = 0x1BCC78u;
            goto label_1bcc78;
        }
    }
    ctx->pc = 0x1BCA8Cu;
label_1bca8c:
    // 0x1bca8c: 0x9202000a
    ctx->pc = 0x1bca8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
label_1bca90:
    // 0x1bca90: 0x2442ffff
    ctx->pc = 0x1bca90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_1bca94:
    // 0x1bca94: 0xa202000a
    ctx->pc = 0x1bca94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 2));
label_1bca98:
    // 0x1bca98: 0x304200ff
    ctx->pc = 0x1bca98u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
label_1bca9c:
    // 0x1bca9c: 0x1040000e
label_1bcaa0:
    if (ctx->pc == 0x1BCAA0u) {
        ctx->pc = 0x1BCAA4u;
        goto label_1bcaa4;
    }
    ctx->pc = 0x1BCA9Cu;
    {
        const bool branch_taken_0x1bca9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bca9c) {
            ctx->pc = 0x1BCAD8u;
            goto label_1bcad8;
        }
    }
    ctx->pc = 0x1BCAA4u;
label_1bcaa4:
    // 0x1bcaa4: 0x9203000a
    ctx->pc = 0x1bcaa4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
label_1bcaa8:
    // 0x1bcaa8: 0x24020014
    ctx->pc = 0x1bcaa8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
label_1bcaac:
    // 0x1bcaac: 0x14620004
label_1bcab0:
    if (ctx->pc == 0x1BCAB0u) {
        ctx->pc = 0x1BCAB0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1BCAB4u;
        goto label_1bcab4;
    }
    ctx->pc = 0x1BCAACu;
    {
        const bool branch_taken_0x1bcaac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1BCAB0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1bcaac) {
            ctx->pc = 0x1BCAC0u;
            goto label_1bcac0;
        }
    }
    ctx->pc = 0x1BCAB4u;
label_1bcab4:
    // 0x1bcab4: 0xc06f074
label_1bcab8:
    if (ctx->pc == 0x1BCAB8u) {
        ctx->pc = 0x1BCAB8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x1BCABCu;
        goto label_1bcabc;
    }
    ctx->pc = 0x1BCAB4u;
    SET_GPR_U32(ctx, 31, 0x1BCABCu);
    ctx->pc = 0x1BCAB8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x1BC1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC1D0_0x1bc1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCABCu; }
    }
    if (ctx->pc != 0x1BCABCu) { return; }
    ctx->pc = 0x1BCABCu;
label_1bcabc:
    // 0x1bcabc: 0x24040002
    ctx->pc = 0x1bcabcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_1bcac0:
    // 0x1bcac0: 0xc06f1ec
label_1bcac4:
    if (ctx->pc == 0x1BCAC4u) {
        ctx->pc = 0x1BCAC8u;
        goto label_1bcac8;
    }
    ctx->pc = 0x1BCAC0u;
    SET_GPR_U32(ctx, 31, 0x1BCAC8u);
    ctx->pc = 0x1BC7B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC7B0_0x1bc7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCAC8u; }
    }
    if (ctx->pc != 0x1BCAC8u) { return; }
    ctx->pc = 0x1BCAC8u;
label_1bcac8:
    // 0x1bcac8: 0xc06edb8
label_1bcacc:
    if (ctx->pc == 0x1BCACCu) {
        ctx->pc = 0x1BCAD0u;
        goto label_1bcad0;
    }
    ctx->pc = 0x1BCAC8u;
    SET_GPR_U32(ctx, 31, 0x1BCAD0u);
    ctx->pc = 0x1BB6E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB6E0_0x1bb6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCAD0u; }
    }
    if (ctx->pc != 0x1BCAD0u) { return; }
    ctx->pc = 0x1BCAD0u;
label_1bcad0:
    // 0x1bcad0: 0x10000069
label_1bcad4:
    if (ctx->pc == 0x1BCAD4u) {
        ctx->pc = 0x1BCAD8u;
        goto label_1bcad8;
    }
    ctx->pc = 0x1BCAD0u;
    {
        const bool branch_taken_0x1bcad0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bcad0) {
            ctx->pc = 0x1BCC78u;
            goto label_1bcc78;
        }
    }
    ctx->pc = 0x1BCAD8u;
label_1bcad8:
    // 0x1bcad8: 0x92030009
    ctx->pc = 0x1bcad8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_1bcadc:
    // 0x1bcadc: 0x24020080
    ctx->pc = 0x1bcadcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
label_1bcae0:
    // 0x1bcae0: 0x24040008
    ctx->pc = 0x1bcae0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
label_1bcae4:
    // 0x1bcae4: 0x24630001
    ctx->pc = 0x1bcae4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_1bcae8:
    // 0x1bcae8: 0xa2030009
    ctx->pc = 0x1bcae8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 3));
label_1bcaec:
    // 0x1bcaec: 0xc06f074
label_1bcaf0:
    if (ctx->pc == 0x1BCAF0u) {
        ctx->pc = 0x1BCAF0u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1BCAF4u;
        goto label_1bcaf4;
    }
    ctx->pc = 0x1BCAECu;
    SET_GPR_U32(ctx, 31, 0x1BCAF4u);
    ctx->pc = 0x1BCAF0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1BC1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC1D0_0x1bc1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCAF4u; }
    }
    if (ctx->pc != 0x1BCAF4u) { return; }
    ctx->pc = 0x1BCAF4u;
label_1bcaf4:
    // 0x1bcaf4: 0x10000060
label_1bcaf8:
    if (ctx->pc == 0x1BCAF8u) {
        ctx->pc = 0x1BCAFCu;
        goto label_1bcafc;
    }
    ctx->pc = 0x1BCAF4u;
    {
        const bool branch_taken_0x1bcaf4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bcaf4) {
            ctx->pc = 0x1BCC78u;
            goto label_1bcc78;
        }
    }
    ctx->pc = 0x1BCAFCu;
label_1bcafc:
    // 0x1bcafc: 0x9202000a
    ctx->pc = 0x1bcafcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
label_1bcb00:
    // 0x1bcb00: 0x2442ffff
    ctx->pc = 0x1bcb00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_1bcb04:
    // 0x1bcb04: 0xa202000a
    ctx->pc = 0x1bcb04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 2));
label_1bcb08:
    // 0x1bcb08: 0x304200ff
    ctx->pc = 0x1bcb08u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
label_1bcb0c:
    // 0x1bcb0c: 0x1040000e
label_1bcb10:
    if (ctx->pc == 0x1BCB10u) {
        ctx->pc = 0x1BCB14u;
        goto label_1bcb14;
    }
    ctx->pc = 0x1BCB0Cu;
    {
        const bool branch_taken_0x1bcb0c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bcb0c) {
            ctx->pc = 0x1BCB48u;
            goto label_1bcb48;
        }
    }
    ctx->pc = 0x1BCB14u;
label_1bcb14:
    // 0x1bcb14: 0x9203000a
    ctx->pc = 0x1bcb14u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
label_1bcb18:
    // 0x1bcb18: 0x24020014
    ctx->pc = 0x1bcb18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
label_1bcb1c:
    // 0x1bcb1c: 0x14620004
label_1bcb20:
    if (ctx->pc == 0x1BCB20u) {
        ctx->pc = 0x1BCB20u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1BCB24u;
        goto label_1bcb24;
    }
    ctx->pc = 0x1BCB1Cu;
    {
        const bool branch_taken_0x1bcb1c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1BCB20u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1bcb1c) {
            ctx->pc = 0x1BCB30u;
            goto label_1bcb30;
        }
    }
    ctx->pc = 0x1BCB24u;
label_1bcb24:
    // 0x1bcb24: 0xc06f074
label_1bcb28:
    if (ctx->pc == 0x1BCB28u) {
        ctx->pc = 0x1BCB28u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x1BCB2Cu;
        goto label_1bcb2c;
    }
    ctx->pc = 0x1BCB24u;
    SET_GPR_U32(ctx, 31, 0x1BCB2Cu);
    ctx->pc = 0x1BCB28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x1BC1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC1D0_0x1bc1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCB2Cu; }
    }
    if (ctx->pc != 0x1BCB2Cu) { return; }
    ctx->pc = 0x1BCB2Cu;
label_1bcb2c:
    // 0x1bcb2c: 0x24040004
    ctx->pc = 0x1bcb2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
label_1bcb30:
    // 0x1bcb30: 0xc06f1ec
label_1bcb34:
    if (ctx->pc == 0x1BCB34u) {
        ctx->pc = 0x1BCB38u;
        goto label_1bcb38;
    }
    ctx->pc = 0x1BCB30u;
    SET_GPR_U32(ctx, 31, 0x1BCB38u);
    ctx->pc = 0x1BC7B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC7B0_0x1bc7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCB38u; }
    }
    if (ctx->pc != 0x1BCB38u) { return; }
    ctx->pc = 0x1BCB38u;
label_1bcb38:
    // 0x1bcb38: 0xc06edb8
label_1bcb3c:
    if (ctx->pc == 0x1BCB3Cu) {
        ctx->pc = 0x1BCB40u;
        goto label_1bcb40;
    }
    ctx->pc = 0x1BCB38u;
    SET_GPR_U32(ctx, 31, 0x1BCB40u);
    ctx->pc = 0x1BB6E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB6E0_0x1bb6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCB40u; }
    }
    if (ctx->pc != 0x1BCB40u) { return; }
    ctx->pc = 0x1BCB40u;
label_1bcb40:
    // 0x1bcb40: 0x1000004d
label_1bcb44:
    if (ctx->pc == 0x1BCB44u) {
        ctx->pc = 0x1BCB48u;
        goto label_1bcb48;
    }
    ctx->pc = 0x1BCB40u;
    {
        const bool branch_taken_0x1bcb40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bcb40) {
            ctx->pc = 0x1BCC78u;
            goto label_1bcc78;
        }
    }
    ctx->pc = 0x1BCB48u;
label_1bcb48:
    // 0x1bcb48: 0x92030009
    ctx->pc = 0x1bcb48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_1bcb4c:
    // 0x1bcb4c: 0x24020080
    ctx->pc = 0x1bcb4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
label_1bcb50:
    // 0x1bcb50: 0x24040008
    ctx->pc = 0x1bcb50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
label_1bcb54:
    // 0x1bcb54: 0x24630001
    ctx->pc = 0x1bcb54u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_1bcb58:
    // 0x1bcb58: 0xa2030009
    ctx->pc = 0x1bcb58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 3));
label_1bcb5c:
    // 0x1bcb5c: 0xc06f074
label_1bcb60:
    if (ctx->pc == 0x1BCB60u) {
        ctx->pc = 0x1BCB60u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1BCB64u;
        goto label_1bcb64;
    }
    ctx->pc = 0x1BCB5Cu;
    SET_GPR_U32(ctx, 31, 0x1BCB64u);
    ctx->pc = 0x1BCB60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1BC1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC1D0_0x1bc1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCB64u; }
    }
    if (ctx->pc != 0x1BCB64u) { return; }
    ctx->pc = 0x1BCB64u;
label_1bcb64:
    // 0x1bcb64: 0x10000044
label_1bcb68:
    if (ctx->pc == 0x1BCB68u) {
        ctx->pc = 0x1BCB6Cu;
        goto label_1bcb6c;
    }
    ctx->pc = 0x1BCB64u;
    {
        const bool branch_taken_0x1bcb64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bcb64) {
            ctx->pc = 0x1BCC78u;
            goto label_1bcc78;
        }
    }
    ctx->pc = 0x1BCB6Cu;
label_1bcb6c:
    // 0x1bcb6c: 0x9202000a
    ctx->pc = 0x1bcb6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
label_1bcb70:
    // 0x1bcb70: 0x2442ffff
    ctx->pc = 0x1bcb70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_1bcb74:
    // 0x1bcb74: 0xa202000a
    ctx->pc = 0x1bcb74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 2));
label_1bcb78:
    // 0x1bcb78: 0x304200ff
    ctx->pc = 0x1bcb78u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
label_1bcb7c:
    // 0x1bcb7c: 0x1040000e
label_1bcb80:
    if (ctx->pc == 0x1BCB80u) {
        ctx->pc = 0x1BCB84u;
        goto label_1bcb84;
    }
    ctx->pc = 0x1BCB7Cu;
    {
        const bool branch_taken_0x1bcb7c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bcb7c) {
            ctx->pc = 0x1BCBB8u;
            goto label_1bcbb8;
        }
    }
    ctx->pc = 0x1BCB84u;
label_1bcb84:
    // 0x1bcb84: 0x9203000a
    ctx->pc = 0x1bcb84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
label_1bcb88:
    // 0x1bcb88: 0x24020014
    ctx->pc = 0x1bcb88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
label_1bcb8c:
    // 0x1bcb8c: 0x14620004
label_1bcb90:
    if (ctx->pc == 0x1BCB90u) {
        ctx->pc = 0x1BCB90u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1BCB94u;
        goto label_1bcb94;
    }
    ctx->pc = 0x1BCB8Cu;
    {
        const bool branch_taken_0x1bcb8c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1BCB90u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x1bcb8c) {
            ctx->pc = 0x1BCBA0u;
            goto label_1bcba0;
        }
    }
    ctx->pc = 0x1BCB94u;
label_1bcb94:
    // 0x1bcb94: 0xc06f074
label_1bcb98:
    if (ctx->pc == 0x1BCB98u) {
        ctx->pc = 0x1BCB98u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x1BCB9Cu;
        goto label_1bcb9c;
    }
    ctx->pc = 0x1BCB94u;
    SET_GPR_U32(ctx, 31, 0x1BCB9Cu);
    ctx->pc = 0x1BCB98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x1BC1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC1D0_0x1bc1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCB9Cu; }
    }
    if (ctx->pc != 0x1BCB9Cu) { return; }
    ctx->pc = 0x1BCB9Cu;
label_1bcb9c:
    // 0x1bcb9c: 0x24040005
    ctx->pc = 0x1bcb9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
label_1bcba0:
    // 0x1bcba0: 0xc06f1ec
label_1bcba4:
    if (ctx->pc == 0x1BCBA4u) {
        ctx->pc = 0x1BCBA8u;
        goto label_1bcba8;
    }
    ctx->pc = 0x1BCBA0u;
    SET_GPR_U32(ctx, 31, 0x1BCBA8u);
    ctx->pc = 0x1BC7B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC7B0_0x1bc7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCBA8u; }
    }
    if (ctx->pc != 0x1BCBA8u) { return; }
    ctx->pc = 0x1BCBA8u;
label_1bcba8:
    // 0x1bcba8: 0xc06edb8
label_1bcbac:
    if (ctx->pc == 0x1BCBACu) {
        ctx->pc = 0x1BCBB0u;
        goto label_1bcbb0;
    }
    ctx->pc = 0x1BCBA8u;
    SET_GPR_U32(ctx, 31, 0x1BCBB0u);
    ctx->pc = 0x1BB6E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB6E0_0x1bb6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCBB0u; }
    }
    if (ctx->pc != 0x1BCBB0u) { return; }
    ctx->pc = 0x1BCBB0u;
label_1bcbb0:
    // 0x1bcbb0: 0x10000031
label_1bcbb4:
    if (ctx->pc == 0x1BCBB4u) {
        ctx->pc = 0x1BCBB8u;
        goto label_1bcbb8;
    }
    ctx->pc = 0x1BCBB0u;
    {
        const bool branch_taken_0x1bcbb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bcbb0) {
            ctx->pc = 0x1BCC78u;
            goto label_1bcc78;
        }
    }
    ctx->pc = 0x1BCBB8u;
label_1bcbb8:
    // 0x1bcbb8: 0x92030009
    ctx->pc = 0x1bcbb8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_1bcbbc:
    // 0x1bcbbc: 0x24020080
    ctx->pc = 0x1bcbbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
label_1bcbc0:
    // 0x1bcbc0: 0x24040008
    ctx->pc = 0x1bcbc0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
label_1bcbc4:
    // 0x1bcbc4: 0x24630001
    ctx->pc = 0x1bcbc4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_1bcbc8:
    // 0x1bcbc8: 0xa2030009
    ctx->pc = 0x1bcbc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 3));
label_1bcbcc:
    // 0x1bcbcc: 0xc06f074
label_1bcbd0:
    if (ctx->pc == 0x1BCBD0u) {
        ctx->pc = 0x1BCBD0u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1BCBD4u;
        goto label_1bcbd4;
    }
    ctx->pc = 0x1BCBCCu;
    SET_GPR_U32(ctx, 31, 0x1BCBD4u);
    ctx->pc = 0x1BCBD0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1BC1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC1D0_0x1bc1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCBD4u; }
    }
    if (ctx->pc != 0x1BCBD4u) { return; }
    ctx->pc = 0x1BCBD4u;
label_1bcbd4:
    // 0x1bcbd4: 0x10000028
label_1bcbd8:
    if (ctx->pc == 0x1BCBD8u) {
        ctx->pc = 0x1BCBDCu;
        goto label_1bcbdc;
    }
    ctx->pc = 0x1BCBD4u;
    {
        const bool branch_taken_0x1bcbd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bcbd4) {
            ctx->pc = 0x1BCC78u;
            goto label_1bcc78;
        }
    }
    ctx->pc = 0x1BCBDCu;
label_1bcbdc:
    // 0x1bcbdc: 0x9203000a
    ctx->pc = 0x1bcbdcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
label_1bcbe0:
    // 0x1bcbe0: 0x2463ffff
    ctx->pc = 0x1bcbe0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
label_1bcbe4:
    // 0x1bcbe4: 0xa203000a
    ctx->pc = 0x1bcbe4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 3));
label_1bcbe8:
    // 0x1bcbe8: 0x306300ff
    ctx->pc = 0x1bcbe8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 255));
label_1bcbec:
    // 0x1bcbec: 0x1060000e
label_1bcbf0:
    if (ctx->pc == 0x1BCBF0u) {
        ctx->pc = 0x1BCBF4u;
        goto label_1bcbf4;
    }
    ctx->pc = 0x1BCBECu;
    {
        const bool branch_taken_0x1bcbec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bcbec) {
            ctx->pc = 0x1BCC28u;
            goto label_1bcc28;
        }
    }
    ctx->pc = 0x1BCBF4u;
label_1bcbf4:
    // 0x1bcbf4: 0x9203000a
    ctx->pc = 0x1bcbf4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
label_1bcbf8:
    // 0x1bcbf8: 0x24020014
    ctx->pc = 0x1bcbf8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
label_1bcbfc:
    // 0x1bcbfc: 0x14620004
label_1bcc00:
    if (ctx->pc == 0x1BCC00u) {
        ctx->pc = 0x1BCC00u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1BCC04u;
        goto label_1bcc04;
    }
    ctx->pc = 0x1BCBFCu;
    {
        const bool branch_taken_0x1bcbfc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1BCC00u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1bcbfc) {
            ctx->pc = 0x1BCC10u;
            goto label_1bcc10;
        }
    }
    ctx->pc = 0x1BCC04u;
label_1bcc04:
    // 0x1bcc04: 0xc06f074
label_1bcc08:
    if (ctx->pc == 0x1BCC08u) {
        ctx->pc = 0x1BCC08u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x1BCC0Cu;
        goto label_1bcc0c;
    }
    ctx->pc = 0x1BCC04u;
    SET_GPR_U32(ctx, 31, 0x1BCC0Cu);
    ctx->pc = 0x1BCC08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x1BC1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC1D0_0x1bc1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC0Cu; }
    }
    if (ctx->pc != 0x1BCC0Cu) { return; }
    ctx->pc = 0x1BCC0Cu;
label_1bcc0c:
    // 0x1bcc0c: 0x24040003
    ctx->pc = 0x1bcc0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
label_1bcc10:
    // 0x1bcc10: 0xc06f1ec
label_1bcc14:
    if (ctx->pc == 0x1BCC14u) {
        ctx->pc = 0x1BCC18u;
        goto label_1bcc18;
    }
    ctx->pc = 0x1BCC10u;
    SET_GPR_U32(ctx, 31, 0x1BCC18u);
    ctx->pc = 0x1BC7B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC7B0_0x1bc7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC18u; }
    }
    if (ctx->pc != 0x1BCC18u) { return; }
    ctx->pc = 0x1BCC18u;
label_1bcc18:
    // 0x1bcc18: 0xc06edb8
label_1bcc1c:
    if (ctx->pc == 0x1BCC1Cu) {
        ctx->pc = 0x1BCC20u;
        goto label_1bcc20;
    }
    ctx->pc = 0x1BCC18u;
    SET_GPR_U32(ctx, 31, 0x1BCC20u);
    ctx->pc = 0x1BB6E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB6E0_0x1bb6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC20u; }
    }
    if (ctx->pc != 0x1BCC20u) { return; }
    ctx->pc = 0x1BCC20u;
label_1bcc20:
    // 0x1bcc20: 0x10000015
label_1bcc24:
    if (ctx->pc == 0x1BCC24u) {
        ctx->pc = 0x1BCC28u;
        goto label_1bcc28;
    }
    ctx->pc = 0x1BCC20u;
    {
        const bool branch_taken_0x1bcc20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bcc20) {
            ctx->pc = 0x1BCC78u;
            goto label_1bcc78;
        }
    }
    ctx->pc = 0x1BCC28u;
label_1bcc28:
    // 0x1bcc28: 0x92030009
    ctx->pc = 0x1bcc28u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_1bcc2c:
    // 0x1bcc2c: 0x24630001
    ctx->pc = 0x1bcc2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_1bcc30:
    // 0x1bcc30: 0x10000011
label_1bcc34:
    if (ctx->pc == 0x1BCC34u) {
        ctx->pc = 0x1BCC34u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1BCC38u;
        goto label_1bcc38;
    }
    ctx->pc = 0x1BCC30u;
    {
        const bool branch_taken_0x1bcc30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BCC34u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1bcc30) {
            ctx->pc = 0x1BCC78u;
            goto label_1bcc78;
        }
    }
    ctx->pc = 0x1BCC38u;
label_1bcc38:
    // 0x1bcc38: 0x3c010032
    ctx->pc = 0x1bcc38u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
label_1bcc3c:
    // 0x1bcc3c: 0x8c2244d8
    ctx->pc = 0x1bcc3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 17624)));
label_1bcc40:
    // 0x1bcc40: 0x14400005
label_1bcc44:
    if (ctx->pc == 0x1BCC44u) {
        ctx->pc = 0x1BCC48u;
        goto label_1bcc48;
    }
    ctx->pc = 0x1BCC40u;
    {
        const bool branch_taken_0x1bcc40 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1bcc40) {
            ctx->pc = 0x1BCC58u;
            goto label_1bcc58;
        }
    }
    ctx->pc = 0x1BCC48u;
label_1bcc48:
    // 0x1bcc48: 0xc06f22c
label_1bcc4c:
    if (ctx->pc == 0x1BCC4Cu) {
        ctx->pc = 0x1BCC50u;
        goto label_1bcc50;
    }
    ctx->pc = 0x1BCC48u;
    SET_GPR_U32(ctx, 31, 0x1BCC50u);
    ctx->pc = 0x1BC8B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC8B0_0x1bc8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC50u; }
    }
    if (ctx->pc != 0x1BCC50u) { return; }
    ctx->pc = 0x1BCC50u;
label_1bcc50:
    // 0x1bcc50: 0x10000012
label_1bcc54:
    if (ctx->pc == 0x1BCC54u) {
        ctx->pc = 0x1BCC54u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1BCC58u;
        goto label_1bcc58;
    }
    ctx->pc = 0x1BCC50u;
    {
        const bool branch_taken_0x1bcc50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BCC54u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1bcc50) {
            ctx->pc = 0x1BCC9Cu;
            goto label_1bcc9c;
        }
    }
    ctx->pc = 0x1BCC58u;
label_1bcc58:
    // 0x1bcc58: 0xc06eb08
label_1bcc5c:
    if (ctx->pc == 0x1BCC5Cu) {
        ctx->pc = 0x1BCC60u;
        goto label_1bcc60;
    }
    ctx->pc = 0x1BCC58u;
    SET_GPR_U32(ctx, 31, 0x1BCC60u);
    ctx->pc = 0x1BAC20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BAC20_0x1bac20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC60u; }
    }
    if (ctx->pc != 0x1BCC60u) { return; }
    ctx->pc = 0x1BCC60u;
label_1bcc60:
    // 0x1bcc60: 0xc06f0ac
label_1bcc64:
    if (ctx->pc == 0x1BCC64u) {
        ctx->pc = 0x1BCC68u;
        goto label_1bcc68;
    }
    ctx->pc = 0x1BCC60u;
    SET_GPR_U32(ctx, 31, 0x1BCC68u);
    ctx->pc = 0x1BC2B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC2B0_0x1bc2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC68u; }
    }
    if (ctx->pc != 0x1BCC68u) { return; }
    ctx->pc = 0x1BCC68u;
label_1bcc68:
    // 0x1bcc68: 0xc06e05c
label_1bcc6c:
    if (ctx->pc == 0x1BCC6Cu) {
        ctx->pc = 0x1BCC70u;
        goto label_1bcc70;
    }
    ctx->pc = 0x1BCC68u;
    SET_GPR_U32(ctx, 31, 0x1BCC70u);
    ctx->pc = 0x1B8170u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8170_0x1b8170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC70u; }
    }
    if (ctx->pc != 0x1BCC70u) { return; }
    ctx->pc = 0x1BCC70u;
label_1bcc70:
    // 0x1bcc70: 0xc06dfec
label_1bcc74:
    if (ctx->pc == 0x1BCC74u) {
        ctx->pc = 0x1BCC74u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BCC78u;
        goto label_1bcc78;
    }
    ctx->pc = 0x1BCC70u;
    SET_GPR_U32(ctx, 31, 0x1BCC78u);
    ctx->pc = 0x1BCC74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B7FB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7FB0_0x1b7fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC78u; }
    }
    if (ctx->pc != 0x1BCC78u) { return; }
    ctx->pc = 0x1BCC78u;
label_1bcc78:
    // 0x1bcc78: 0x92040009
    ctx->pc = 0x1bcc78u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_1bcc7c:
    // 0x1bcc7c: 0x28830007
    ctx->pc = 0x1bcc7cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 7));
label_1bcc80:
    // 0x1bcc80: 0x14600005
label_1bcc84:
    if (ctx->pc == 0x1BCC84u) {
        ctx->pc = 0x1BCC84u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 12));
        ctx->pc = 0x1BCC88u;
        goto label_1bcc88;
    }
    ctx->pc = 0x1BCC80u;
    {
        const bool branch_taken_0x1bcc80 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1BCC84u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 12));
        if (branch_taken_0x1bcc80) {
            ctx->pc = 0x1BCC98u;
            goto label_1bcc98;
        }
    }
    ctx->pc = 0x1BCC88u;
label_1bcc88:
    // 0x1bcc88: 0x10200003
label_1bcc8c:
    if (ctx->pc == 0x1BCC8Cu) {
        ctx->pc = 0x1BCC90u;
        goto label_1bcc90;
    }
    ctx->pc = 0x1BCC88u;
    {
        const bool branch_taken_0x1bcc88 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bcc88) {
            ctx->pc = 0x1BCC98u;
            goto label_1bcc98;
        }
    }
    ctx->pc = 0x1BCC90u;
label_1bcc90:
    // 0x1bcc90: 0xc06f22c
label_1bcc94:
    if (ctx->pc == 0x1BCC94u) {
        ctx->pc = 0x1BCC98u;
        goto label_1bcc98;
    }
    ctx->pc = 0x1BCC90u;
    SET_GPR_U32(ctx, 31, 0x1BCC98u);
    ctx->pc = 0x1BC8B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC8B0_0x1bc8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC98u; }
    }
    if (ctx->pc != 0x1BCC98u) { return; }
    ctx->pc = 0x1BCC98u;
label_1bcc98:
    // 0x1bcc98: 0xdfbf0010
    ctx->pc = 0x1bcc98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bcc9c:
    // 0x1bcc9c: 0x7bb00000
    ctx->pc = 0x1bcc9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1bcca0:
    // 0x1bcca0: 0x3e00008
label_1bcca4:
    if (ctx->pc == 0x1BCCA4u) {
        ctx->pc = 0x1BCCA4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1BCCA8u;
        goto label_1bcca8;
    }
    ctx->pc = 0x1BCCA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCCA4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC8F0u: goto label_1bc8f0;
            case 0x1BC8F4u: goto label_1bc8f4;
            case 0x1BC8F8u: goto label_1bc8f8;
            case 0x1BC8FCu: goto label_1bc8fc;
            case 0x1BC900u: goto label_1bc900;
            case 0x1BC904u: goto label_1bc904;
            case 0x1BC908u: goto label_1bc908;
            case 0x1BC90Cu: goto label_1bc90c;
            case 0x1BC910u: goto label_1bc910;
            case 0x1BC914u: goto label_1bc914;
            case 0x1BC918u: goto label_1bc918;
            case 0x1BC91Cu: goto label_1bc91c;
            case 0x1BC920u: goto label_1bc920;
            case 0x1BC924u: goto label_1bc924;
            case 0x1BC928u: goto label_1bc928;
            case 0x1BC92Cu: goto label_1bc92c;
            case 0x1BC930u: goto label_1bc930;
            case 0x1BC934u: goto label_1bc934;
            case 0x1BC938u: goto label_1bc938;
            case 0x1BC93Cu: goto label_1bc93c;
            case 0x1BC940u: goto label_1bc940;
            case 0x1BC944u: goto label_1bc944;
            case 0x1BC948u: goto label_1bc948;
            case 0x1BC94Cu: goto label_1bc94c;
            case 0x1BC950u: goto label_1bc950;
            case 0x1BC954u: goto label_1bc954;
            case 0x1BC958u: goto label_1bc958;
            case 0x1BC95Cu: goto label_1bc95c;
            case 0x1BC960u: goto label_1bc960;
            case 0x1BC964u: goto label_1bc964;
            case 0x1BC968u: goto label_1bc968;
            case 0x1BC96Cu: goto label_1bc96c;
            case 0x1BC970u: goto label_1bc970;
            case 0x1BC974u: goto label_1bc974;
            case 0x1BC978u: goto label_1bc978;
            case 0x1BC97Cu: goto label_1bc97c;
            case 0x1BC980u: goto label_1bc980;
            case 0x1BC984u: goto label_1bc984;
            case 0x1BC988u: goto label_1bc988;
            case 0x1BC98Cu: goto label_1bc98c;
            case 0x1BC990u: goto label_1bc990;
            case 0x1BC994u: goto label_1bc994;
            case 0x1BC998u: goto label_1bc998;
            case 0x1BC99Cu: goto label_1bc99c;
            case 0x1BC9A0u: goto label_1bc9a0;
            case 0x1BC9A4u: goto label_1bc9a4;
            case 0x1BC9A8u: goto label_1bc9a8;
            case 0x1BC9ACu: goto label_1bc9ac;
            case 0x1BC9B0u: goto label_1bc9b0;
            case 0x1BC9B4u: goto label_1bc9b4;
            case 0x1BC9B8u: goto label_1bc9b8;
            case 0x1BC9BCu: goto label_1bc9bc;
            case 0x1BC9C0u: goto label_1bc9c0;
            case 0x1BC9C4u: goto label_1bc9c4;
            case 0x1BC9C8u: goto label_1bc9c8;
            case 0x1BC9CCu: goto label_1bc9cc;
            case 0x1BC9D0u: goto label_1bc9d0;
            case 0x1BC9D4u: goto label_1bc9d4;
            case 0x1BC9D8u: goto label_1bc9d8;
            case 0x1BC9DCu: goto label_1bc9dc;
            case 0x1BC9E0u: goto label_1bc9e0;
            case 0x1BC9E4u: goto label_1bc9e4;
            case 0x1BC9E8u: goto label_1bc9e8;
            case 0x1BC9ECu: goto label_1bc9ec;
            case 0x1BC9F0u: goto label_1bc9f0;
            case 0x1BC9F4u: goto label_1bc9f4;
            case 0x1BC9F8u: goto label_1bc9f8;
            case 0x1BC9FCu: goto label_1bc9fc;
            case 0x1BCA00u: goto label_1bca00;
            case 0x1BCA04u: goto label_1bca04;
            case 0x1BCA08u: goto label_1bca08;
            case 0x1BCA0Cu: goto label_1bca0c;
            case 0x1BCA10u: goto label_1bca10;
            case 0x1BCA14u: goto label_1bca14;
            case 0x1BCA18u: goto label_1bca18;
            case 0x1BCA1Cu: goto label_1bca1c;
            case 0x1BCA20u: goto label_1bca20;
            case 0x1BCA24u: goto label_1bca24;
            case 0x1BCA28u: goto label_1bca28;
            case 0x1BCA2Cu: goto label_1bca2c;
            case 0x1BCA30u: goto label_1bca30;
            case 0x1BCA34u: goto label_1bca34;
            case 0x1BCA38u: goto label_1bca38;
            case 0x1BCA3Cu: goto label_1bca3c;
            case 0x1BCA40u: goto label_1bca40;
            case 0x1BCA44u: goto label_1bca44;
            case 0x1BCA48u: goto label_1bca48;
            case 0x1BCA4Cu: goto label_1bca4c;
            case 0x1BCA50u: goto label_1bca50;
            case 0x1BCA54u: goto label_1bca54;
            case 0x1BCA58u: goto label_1bca58;
            case 0x1BCA5Cu: goto label_1bca5c;
            case 0x1BCA60u: goto label_1bca60;
            case 0x1BCA64u: goto label_1bca64;
            case 0x1BCA68u: goto label_1bca68;
            case 0x1BCA6Cu: goto label_1bca6c;
            case 0x1BCA70u: goto label_1bca70;
            case 0x1BCA74u: goto label_1bca74;
            case 0x1BCA78u: goto label_1bca78;
            case 0x1BCA7Cu: goto label_1bca7c;
            case 0x1BCA80u: goto label_1bca80;
            case 0x1BCA84u: goto label_1bca84;
            case 0x1BCA88u: goto label_1bca88;
            case 0x1BCA8Cu: goto label_1bca8c;
            case 0x1BCA90u: goto label_1bca90;
            case 0x1BCA94u: goto label_1bca94;
            case 0x1BCA98u: goto label_1bca98;
            case 0x1BCA9Cu: goto label_1bca9c;
            case 0x1BCAA0u: goto label_1bcaa0;
            case 0x1BCAA4u: goto label_1bcaa4;
            case 0x1BCAA8u: goto label_1bcaa8;
            case 0x1BCAACu: goto label_1bcaac;
            case 0x1BCAB0u: goto label_1bcab0;
            case 0x1BCAB4u: goto label_1bcab4;
            case 0x1BCAB8u: goto label_1bcab8;
            case 0x1BCABCu: goto label_1bcabc;
            case 0x1BCAC0u: goto label_1bcac0;
            case 0x1BCAC4u: goto label_1bcac4;
            case 0x1BCAC8u: goto label_1bcac8;
            case 0x1BCACCu: goto label_1bcacc;
            case 0x1BCAD0u: goto label_1bcad0;
            case 0x1BCAD4u: goto label_1bcad4;
            case 0x1BCAD8u: goto label_1bcad8;
            case 0x1BCADCu: goto label_1bcadc;
            case 0x1BCAE0u: goto label_1bcae0;
            case 0x1BCAE4u: goto label_1bcae4;
            case 0x1BCAE8u: goto label_1bcae8;
            case 0x1BCAECu: goto label_1bcaec;
            case 0x1BCAF0u: goto label_1bcaf0;
            case 0x1BCAF4u: goto label_1bcaf4;
            case 0x1BCAF8u: goto label_1bcaf8;
            case 0x1BCAFCu: goto label_1bcafc;
            case 0x1BCB00u: goto label_1bcb00;
            case 0x1BCB04u: goto label_1bcb04;
            case 0x1BCB08u: goto label_1bcb08;
            case 0x1BCB0Cu: goto label_1bcb0c;
            case 0x1BCB10u: goto label_1bcb10;
            case 0x1BCB14u: goto label_1bcb14;
            case 0x1BCB18u: goto label_1bcb18;
            case 0x1BCB1Cu: goto label_1bcb1c;
            case 0x1BCB20u: goto label_1bcb20;
            case 0x1BCB24u: goto label_1bcb24;
            case 0x1BCB28u: goto label_1bcb28;
            case 0x1BCB2Cu: goto label_1bcb2c;
            case 0x1BCB30u: goto label_1bcb30;
            case 0x1BCB34u: goto label_1bcb34;
            case 0x1BCB38u: goto label_1bcb38;
            case 0x1BCB3Cu: goto label_1bcb3c;
            case 0x1BCB40u: goto label_1bcb40;
            case 0x1BCB44u: goto label_1bcb44;
            case 0x1BCB48u: goto label_1bcb48;
            case 0x1BCB4Cu: goto label_1bcb4c;
            case 0x1BCB50u: goto label_1bcb50;
            case 0x1BCB54u: goto label_1bcb54;
            case 0x1BCB58u: goto label_1bcb58;
            case 0x1BCB5Cu: goto label_1bcb5c;
            case 0x1BCB60u: goto label_1bcb60;
            case 0x1BCB64u: goto label_1bcb64;
            case 0x1BCB68u: goto label_1bcb68;
            case 0x1BCB6Cu: goto label_1bcb6c;
            case 0x1BCB70u: goto label_1bcb70;
            case 0x1BCB74u: goto label_1bcb74;
            case 0x1BCB78u: goto label_1bcb78;
            case 0x1BCB7Cu: goto label_1bcb7c;
            case 0x1BCB80u: goto label_1bcb80;
            case 0x1BCB84u: goto label_1bcb84;
            case 0x1BCB88u: goto label_1bcb88;
            case 0x1BCB8Cu: goto label_1bcb8c;
            case 0x1BCB90u: goto label_1bcb90;
            case 0x1BCB94u: goto label_1bcb94;
            case 0x1BCB98u: goto label_1bcb98;
            case 0x1BCB9Cu: goto label_1bcb9c;
            case 0x1BCBA0u: goto label_1bcba0;
            case 0x1BCBA4u: goto label_1bcba4;
            case 0x1BCBA8u: goto label_1bcba8;
            case 0x1BCBACu: goto label_1bcbac;
            case 0x1BCBB0u: goto label_1bcbb0;
            case 0x1BCBB4u: goto label_1bcbb4;
            case 0x1BCBB8u: goto label_1bcbb8;
            case 0x1BCBBCu: goto label_1bcbbc;
            case 0x1BCBC0u: goto label_1bcbc0;
            case 0x1BCBC4u: goto label_1bcbc4;
            case 0x1BCBC8u: goto label_1bcbc8;
            case 0x1BCBCCu: goto label_1bcbcc;
            case 0x1BCBD0u: goto label_1bcbd0;
            case 0x1BCBD4u: goto label_1bcbd4;
            case 0x1BCBD8u: goto label_1bcbd8;
            case 0x1BCBDCu: goto label_1bcbdc;
            case 0x1BCBE0u: goto label_1bcbe0;
            case 0x1BCBE4u: goto label_1bcbe4;
            case 0x1BCBE8u: goto label_1bcbe8;
            case 0x1BCBECu: goto label_1bcbec;
            case 0x1BCBF0u: goto label_1bcbf0;
            case 0x1BCBF4u: goto label_1bcbf4;
            case 0x1BCBF8u: goto label_1bcbf8;
            case 0x1BCBFCu: goto label_1bcbfc;
            case 0x1BCC00u: goto label_1bcc00;
            case 0x1BCC04u: goto label_1bcc04;
            case 0x1BCC08u: goto label_1bcc08;
            case 0x1BCC0Cu: goto label_1bcc0c;
            case 0x1BCC10u: goto label_1bcc10;
            case 0x1BCC14u: goto label_1bcc14;
            case 0x1BCC18u: goto label_1bcc18;
            case 0x1BCC1Cu: goto label_1bcc1c;
            case 0x1BCC20u: goto label_1bcc20;
            case 0x1BCC24u: goto label_1bcc24;
            case 0x1BCC28u: goto label_1bcc28;
            case 0x1BCC2Cu: goto label_1bcc2c;
            case 0x1BCC30u: goto label_1bcc30;
            case 0x1BCC34u: goto label_1bcc34;
            case 0x1BCC38u: goto label_1bcc38;
            case 0x1BCC3Cu: goto label_1bcc3c;
            case 0x1BCC40u: goto label_1bcc40;
            case 0x1BCC44u: goto label_1bcc44;
            case 0x1BCC48u: goto label_1bcc48;
            case 0x1BCC4Cu: goto label_1bcc4c;
            case 0x1BCC50u: goto label_1bcc50;
            case 0x1BCC54u: goto label_1bcc54;
            case 0x1BCC58u: goto label_1bcc58;
            case 0x1BCC5Cu: goto label_1bcc5c;
            case 0x1BCC60u: goto label_1bcc60;
            case 0x1BCC64u: goto label_1bcc64;
            case 0x1BCC68u: goto label_1bcc68;
            case 0x1BCC6Cu: goto label_1bcc6c;
            case 0x1BCC70u: goto label_1bcc70;
            case 0x1BCC74u: goto label_1bcc74;
            case 0x1BCC78u: goto label_1bcc78;
            case 0x1BCC7Cu: goto label_1bcc7c;
            case 0x1BCC80u: goto label_1bcc80;
            case 0x1BCC84u: goto label_1bcc84;
            case 0x1BCC88u: goto label_1bcc88;
            case 0x1BCC8Cu: goto label_1bcc8c;
            case 0x1BCC90u: goto label_1bcc90;
            case 0x1BCC94u: goto label_1bcc94;
            case 0x1BCC98u: goto label_1bcc98;
            case 0x1BCC9Cu: goto label_1bcc9c;
            case 0x1BCCA0u: goto label_1bcca0;
            case 0x1BCCA4u: goto label_1bcca4;
            case 0x1BCCA8u: goto label_1bcca8;
            case 0x1BCCACu: goto label_1bccac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BCCA8u;
label_1bcca8:
    // 0x1bcca8: 0x0
    ctx->pc = 0x1bcca8u;
    // NOP
label_1bccac:
    // 0x1bccac: 0x0
    ctx->pc = 0x1bccacu;
    // NOP
}
