#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0037BCA0
// Address: 0x37bca0 - 0x37bfb0
void sub_0037BCA0_0x37bca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x37bca0u;

label_37bca0:
    // 0x37bca0: 0x30a200ff
    ctx->pc = 0x37bca0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 255));
label_37bca4:
    // 0x37bca4: 0x27bdfff0
    ctx->pc = 0x37bca4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_37bca8:
    // 0x37bca8: 0x2c410010
    ctx->pc = 0x37bca8u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), 16));
label_37bcac:
    // 0x37bcac: 0x102000bc
label_37bcb0:
    if (ctx->pc == 0x37BCB0u) {
        ctx->pc = 0x37BCB0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x37BCB4u;
        goto label_37bcb4;
    }
    ctx->pc = 0x37BCACu;
    {
        const bool branch_taken_0x37bcac = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x37BCB0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x37bcac) {
            ctx->pc = 0x37BFA0u;
            goto label_37bfa0;
        }
    }
    ctx->pc = 0x37BCB4u;
label_37bcb4:
    // 0x37bcb4: 0x3c030039
    ctx->pc = 0x37bcb4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)57 << 16));
label_37bcb8:
    // 0x37bcb8: 0x21080
    ctx->pc = 0x37bcb8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_37bcbc:
    // 0x37bcbc: 0x2463cce0
    ctx->pc = 0x37bcbcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294954208));
label_37bcc0:
    // 0x37bcc0: 0x431021
    ctx->pc = 0x37bcc0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37bcc4:
    // 0x37bcc4: 0x8c420000
    ctx->pc = 0x37bcc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_37bcc8:
    // 0x37bcc8: 0x400008
label_37bccc:
    if (ctx->pc == 0x37BCCCu) {
        ctx->pc = 0x37BCD0u;
        goto label_37bcd0;
    }
    ctx->pc = 0x37BCC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37BCA0u: goto label_37bca0;
            case 0x37BCA4u: goto label_37bca4;
            case 0x37BCA8u: goto label_37bca8;
            case 0x37BCACu: goto label_37bcac;
            case 0x37BCB0u: goto label_37bcb0;
            case 0x37BCB4u: goto label_37bcb4;
            case 0x37BCB8u: goto label_37bcb8;
            case 0x37BCBCu: goto label_37bcbc;
            case 0x37BCC0u: goto label_37bcc0;
            case 0x37BCC4u: goto label_37bcc4;
            case 0x37BCC8u: goto label_37bcc8;
            case 0x37BCCCu: goto label_37bccc;
            case 0x37BCD0u: goto label_37bcd0;
            case 0x37BCD4u: goto label_37bcd4;
            case 0x37BCD8u: goto label_37bcd8;
            case 0x37BCDCu: goto label_37bcdc;
            case 0x37BCE0u: goto label_37bce0;
            case 0x37BCE4u: goto label_37bce4;
            case 0x37BCE8u: goto label_37bce8;
            case 0x37BCECu: goto label_37bcec;
            case 0x37BCF0u: goto label_37bcf0;
            case 0x37BCF4u: goto label_37bcf4;
            case 0x37BCF8u: goto label_37bcf8;
            case 0x37BCFCu: goto label_37bcfc;
            case 0x37BD00u: goto label_37bd00;
            case 0x37BD04u: goto label_37bd04;
            case 0x37BD08u: goto label_37bd08;
            case 0x37BD0Cu: goto label_37bd0c;
            case 0x37BD10u: goto label_37bd10;
            case 0x37BD14u: goto label_37bd14;
            case 0x37BD18u: goto label_37bd18;
            case 0x37BD1Cu: goto label_37bd1c;
            case 0x37BD20u: goto label_37bd20;
            case 0x37BD24u: goto label_37bd24;
            case 0x37BD28u: goto label_37bd28;
            case 0x37BD2Cu: goto label_37bd2c;
            case 0x37BD30u: goto label_37bd30;
            case 0x37BD34u: goto label_37bd34;
            case 0x37BD38u: goto label_37bd38;
            case 0x37BD3Cu: goto label_37bd3c;
            case 0x37BD40u: goto label_37bd40;
            case 0x37BD44u: goto label_37bd44;
            case 0x37BD48u: goto label_37bd48;
            case 0x37BD4Cu: goto label_37bd4c;
            case 0x37BD50u: goto label_37bd50;
            case 0x37BD54u: goto label_37bd54;
            case 0x37BD58u: goto label_37bd58;
            case 0x37BD5Cu: goto label_37bd5c;
            case 0x37BD60u: goto label_37bd60;
            case 0x37BD64u: goto label_37bd64;
            case 0x37BD68u: goto label_37bd68;
            case 0x37BD6Cu: goto label_37bd6c;
            case 0x37BD70u: goto label_37bd70;
            case 0x37BD74u: goto label_37bd74;
            case 0x37BD78u: goto label_37bd78;
            case 0x37BD7Cu: goto label_37bd7c;
            case 0x37BD80u: goto label_37bd80;
            case 0x37BD84u: goto label_37bd84;
            case 0x37BD88u: goto label_37bd88;
            case 0x37BD8Cu: goto label_37bd8c;
            case 0x37BD90u: goto label_37bd90;
            case 0x37BD94u: goto label_37bd94;
            case 0x37BD98u: goto label_37bd98;
            case 0x37BD9Cu: goto label_37bd9c;
            case 0x37BDA0u: goto label_37bda0;
            case 0x37BDA4u: goto label_37bda4;
            case 0x37BDA8u: goto label_37bda8;
            case 0x37BDACu: goto label_37bdac;
            case 0x37BDB0u: goto label_37bdb0;
            case 0x37BDB4u: goto label_37bdb4;
            case 0x37BDB8u: goto label_37bdb8;
            case 0x37BDBCu: goto label_37bdbc;
            case 0x37BDC0u: goto label_37bdc0;
            case 0x37BDC4u: goto label_37bdc4;
            case 0x37BDC8u: goto label_37bdc8;
            case 0x37BDCCu: goto label_37bdcc;
            case 0x37BDD0u: goto label_37bdd0;
            case 0x37BDD4u: goto label_37bdd4;
            case 0x37BDD8u: goto label_37bdd8;
            case 0x37BDDCu: goto label_37bddc;
            case 0x37BDE0u: goto label_37bde0;
            case 0x37BDE4u: goto label_37bde4;
            case 0x37BDE8u: goto label_37bde8;
            case 0x37BDECu: goto label_37bdec;
            case 0x37BDF0u: goto label_37bdf0;
            case 0x37BDF4u: goto label_37bdf4;
            case 0x37BDF8u: goto label_37bdf8;
            case 0x37BDFCu: goto label_37bdfc;
            case 0x37BE00u: goto label_37be00;
            case 0x37BE04u: goto label_37be04;
            case 0x37BE08u: goto label_37be08;
            case 0x37BE0Cu: goto label_37be0c;
            case 0x37BE10u: goto label_37be10;
            case 0x37BE14u: goto label_37be14;
            case 0x37BE18u: goto label_37be18;
            case 0x37BE1Cu: goto label_37be1c;
            case 0x37BE20u: goto label_37be20;
            case 0x37BE24u: goto label_37be24;
            case 0x37BE28u: goto label_37be28;
            case 0x37BE2Cu: goto label_37be2c;
            case 0x37BE30u: goto label_37be30;
            case 0x37BE34u: goto label_37be34;
            case 0x37BE38u: goto label_37be38;
            case 0x37BE3Cu: goto label_37be3c;
            case 0x37BE40u: goto label_37be40;
            case 0x37BE44u: goto label_37be44;
            case 0x37BE48u: goto label_37be48;
            case 0x37BE4Cu: goto label_37be4c;
            case 0x37BE50u: goto label_37be50;
            case 0x37BE54u: goto label_37be54;
            case 0x37BE58u: goto label_37be58;
            case 0x37BE5Cu: goto label_37be5c;
            case 0x37BE60u: goto label_37be60;
            case 0x37BE64u: goto label_37be64;
            case 0x37BE68u: goto label_37be68;
            case 0x37BE6Cu: goto label_37be6c;
            case 0x37BE70u: goto label_37be70;
            case 0x37BE74u: goto label_37be74;
            case 0x37BE78u: goto label_37be78;
            case 0x37BE7Cu: goto label_37be7c;
            case 0x37BE80u: goto label_37be80;
            case 0x37BE84u: goto label_37be84;
            case 0x37BE88u: goto label_37be88;
            case 0x37BE8Cu: goto label_37be8c;
            case 0x37BE90u: goto label_37be90;
            case 0x37BE94u: goto label_37be94;
            case 0x37BE98u: goto label_37be98;
            case 0x37BE9Cu: goto label_37be9c;
            case 0x37BEA0u: goto label_37bea0;
            case 0x37BEA4u: goto label_37bea4;
            case 0x37BEA8u: goto label_37bea8;
            case 0x37BEACu: goto label_37beac;
            case 0x37BEB0u: goto label_37beb0;
            case 0x37BEB4u: goto label_37beb4;
            case 0x37BEB8u: goto label_37beb8;
            case 0x37BEBCu: goto label_37bebc;
            case 0x37BEC0u: goto label_37bec0;
            case 0x37BEC4u: goto label_37bec4;
            case 0x37BEC8u: goto label_37bec8;
            case 0x37BECCu: goto label_37becc;
            case 0x37BED0u: goto label_37bed0;
            case 0x37BED4u: goto label_37bed4;
            case 0x37BED8u: goto label_37bed8;
            case 0x37BEDCu: goto label_37bedc;
            case 0x37BEE0u: goto label_37bee0;
            case 0x37BEE4u: goto label_37bee4;
            case 0x37BEE8u: goto label_37bee8;
            case 0x37BEECu: goto label_37beec;
            case 0x37BEF0u: goto label_37bef0;
            case 0x37BEF4u: goto label_37bef4;
            case 0x37BEF8u: goto label_37bef8;
            case 0x37BEFCu: goto label_37befc;
            case 0x37BF00u: goto label_37bf00;
            case 0x37BF04u: goto label_37bf04;
            case 0x37BF08u: goto label_37bf08;
            case 0x37BF0Cu: goto label_37bf0c;
            case 0x37BF10u: goto label_37bf10;
            case 0x37BF14u: goto label_37bf14;
            case 0x37BF18u: goto label_37bf18;
            case 0x37BF1Cu: goto label_37bf1c;
            case 0x37BF20u: goto label_37bf20;
            case 0x37BF24u: goto label_37bf24;
            case 0x37BF28u: goto label_37bf28;
            case 0x37BF2Cu: goto label_37bf2c;
            case 0x37BF30u: goto label_37bf30;
            case 0x37BF34u: goto label_37bf34;
            case 0x37BF38u: goto label_37bf38;
            case 0x37BF3Cu: goto label_37bf3c;
            case 0x37BF40u: goto label_37bf40;
            case 0x37BF44u: goto label_37bf44;
            case 0x37BF48u: goto label_37bf48;
            case 0x37BF4Cu: goto label_37bf4c;
            case 0x37BF50u: goto label_37bf50;
            case 0x37BF54u: goto label_37bf54;
            case 0x37BF58u: goto label_37bf58;
            case 0x37BF5Cu: goto label_37bf5c;
            case 0x37BF60u: goto label_37bf60;
            case 0x37BF64u: goto label_37bf64;
            case 0x37BF68u: goto label_37bf68;
            case 0x37BF6Cu: goto label_37bf6c;
            case 0x37BF70u: goto label_37bf70;
            case 0x37BF74u: goto label_37bf74;
            case 0x37BF78u: goto label_37bf78;
            case 0x37BF7Cu: goto label_37bf7c;
            case 0x37BF80u: goto label_37bf80;
            case 0x37BF84u: goto label_37bf84;
            case 0x37BF88u: goto label_37bf88;
            case 0x37BF8Cu: goto label_37bf8c;
            case 0x37BF90u: goto label_37bf90;
            case 0x37BF94u: goto label_37bf94;
            case 0x37BF98u: goto label_37bf98;
            case 0x37BF9Cu: goto label_37bf9c;
            case 0x37BFA0u: goto label_37bfa0;
            case 0x37BFA4u: goto label_37bfa4;
            case 0x37BFA8u: goto label_37bfa8;
            case 0x37BFACu: goto label_37bfac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37BCD0u;
label_37bcd0:
    // 0x37bcd0: 0x100000b4
label_37bcd4:
    if (ctx->pc == 0x37BCD4u) {
        ctx->pc = 0x37BCD4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x37BCD8u;
        goto label_37bcd8;
    }
    ctx->pc = 0x37BCD0u;
    {
        const bool branch_taken_0x37bcd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37BCD4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x37bcd0) {
            ctx->pc = 0x37BFA4u;
            goto label_37bfa4;
        }
    }
    ctx->pc = 0x37BCD8u;
label_37bcd8:
    // 0x37bcd8: 0x94840002
    ctx->pc = 0x37bcd8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_37bcdc:
    // 0x37bcdc: 0x3c03004c
    ctx->pc = 0x37bcdcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)76 << 16));
label_37bce0:
    // 0x37bce0: 0x2463aa50
    ctx->pc = 0x37bce0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294945360));
label_37bce4:
    // 0x37bce4: 0x3c01004c
    ctx->pc = 0x37bce4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
label_37bce8:
    // 0x37bce8: 0x9022aded
    ctx->pc = 0x37bce8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946285)));
label_37bcec:
    // 0x37bcec: 0x641821
    ctx->pc = 0x37bcecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_37bcf0:
    // 0x37bcf0: 0x90630000
    ctx->pc = 0x37bcf0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_37bcf4:
    // 0x37bcf4: 0x24420001
    ctx->pc = 0x37bcf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_37bcf8:
    // 0x37bcf8: 0x146200aa
label_37bcfc:
    if (ctx->pc == 0x37BCFCu) {
        ctx->pc = 0x37BCFCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37BD00u;
        goto label_37bd00;
    }
    ctx->pc = 0x37BCF8u;
    {
        const bool branch_taken_0x37bcf8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x37BCFCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37bcf8) {
            ctx->pc = 0x37BFA4u;
            goto label_37bfa4;
        }
    }
    ctx->pc = 0x37BD00u;
label_37bd00:
    // 0x37bd00: 0x100000a8
label_37bd04:
    if (ctx->pc == 0x37BD04u) {
        ctx->pc = 0x37BD04u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x37BD08u;
        goto label_37bd08;
    }
    ctx->pc = 0x37BD00u;
    {
        const bool branch_taken_0x37bd00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37BD04u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x37bd00) {
            ctx->pc = 0x37BFA4u;
            goto label_37bfa4;
        }
    }
    ctx->pc = 0x37BD08u;
label_37bd08:
    // 0x37bd08: 0x94830002
    ctx->pc = 0x37bd08u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_37bd0c:
    // 0x37bd0c: 0x3c05004c
    ctx->pc = 0x37bd0cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)76 << 16));
label_37bd10:
    // 0x37bd10: 0x24020001
    ctx->pc = 0x37bd10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_37bd14:
    // 0x37bd14: 0x24a59c00
    ctx->pc = 0x37bd14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941696));
label_37bd18:
    // 0x37bd18: 0x32143
    ctx->pc = 0x37bd18u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 5));
label_37bd1c:
    // 0x37bd1c: 0x3063001f
    ctx->pc = 0x37bd1cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 31));
label_37bd20:
    // 0x37bd20: 0x43080
    ctx->pc = 0x37bd20u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 4), 2));
label_37bd24:
    // 0x37bd24: 0x622004
    ctx->pc = 0x37bd24u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_37bd28:
    // 0x37bd28: 0xa61821
    ctx->pc = 0x37bd28u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_37bd2c:
    // 0x37bd2c: 0x8c630000
    ctx->pc = 0x37bd2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_37bd30:
    // 0x37bd30: 0x641824
    ctx->pc = 0x37bd30u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_37bd34:
    // 0x37bd34: 0x1060009a
label_37bd38:
    if (ctx->pc == 0x37BD38u) {
        ctx->pc = 0x37BD3Cu;
        goto label_37bd3c;
    }
    ctx->pc = 0x37BD34u;
    {
        const bool branch_taken_0x37bd34 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x37bd34) {
            ctx->pc = 0x37BFA0u;
            goto label_37bfa0;
        }
    }
    ctx->pc = 0x37BD3Cu;
label_37bd3c:
    // 0x37bd3c: 0x1000009a
label_37bd40:
    if (ctx->pc == 0x37BD40u) {
        ctx->pc = 0x37BD40u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x37BD44u;
        goto label_37bd44;
    }
    ctx->pc = 0x37BD3Cu;
    {
        const bool branch_taken_0x37bd3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37BD40u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x37bd3c) {
            ctx->pc = 0x37BFA8u;
            goto label_37bfa8;
        }
    }
    ctx->pc = 0x37BD44u;
label_37bd44:
    // 0x37bd44: 0x94840002
    ctx->pc = 0x37bd44u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_37bd48:
    // 0x37bd48: 0x3c03004c
    ctx->pc = 0x37bd48u;
    SET_GPR_U32(ctx, 3, ((uint32_t)76 << 16));
label_37bd4c:
    // 0x37bd4c: 0x24639a80
    ctx->pc = 0x37bd4cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294941312));
label_37bd50:
    // 0x37bd50: 0x24020001
    ctx->pc = 0x37bd50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_37bd54:
    // 0x37bd54: 0x3085001f
    ctx->pc = 0x37bd54u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 4), 31));
label_37bd58:
    // 0x37bd58: 0x42143
    ctx->pc = 0x37bd58u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
label_37bd5c:
    // 0x37bd5c: 0xa22804
    ctx->pc = 0x37bd5cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
label_37bd60:
    // 0x37bd60: 0x42080
    ctx->pc = 0x37bd60u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
label_37bd64:
    // 0x37bd64: 0x641821
    ctx->pc = 0x37bd64u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_37bd68:
    // 0x37bd68: 0x8c630000
    ctx->pc = 0x37bd68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_37bd6c:
    // 0x37bd6c: 0xa31824
    ctx->pc = 0x37bd6cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_37bd70:
    // 0x37bd70: 0x1060008b
label_37bd74:
    if (ctx->pc == 0x37BD74u) {
        ctx->pc = 0x37BD78u;
        goto label_37bd78;
    }
    ctx->pc = 0x37BD70u;
    {
        const bool branch_taken_0x37bd70 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x37bd70) {
            ctx->pc = 0x37BFA0u;
            goto label_37bfa0;
        }
    }
    ctx->pc = 0x37BD78u;
label_37bd78:
    // 0x37bd78: 0x1000008a
label_37bd7c:
    if (ctx->pc == 0x37BD7Cu) {
        ctx->pc = 0x37BD80u;
        goto label_37bd80;
    }
    ctx->pc = 0x37BD78u;
    {
        const bool branch_taken_0x37bd78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x37bd78) {
            ctx->pc = 0x37BFA4u;
            goto label_37bfa4;
        }
    }
    ctx->pc = 0x37BD80u;
label_37bd80:
    // 0x37bd80: 0xc15c26c
label_37bd84:
    if (ctx->pc == 0x37BD84u) {
        ctx->pc = 0x37BD84u;
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->pc = 0x37BD88u;
        goto label_37bd88;
    }
    ctx->pc = 0x37BD80u;
    SET_GPR_U32(ctx, 31, 0x37BD88u);
    ctx->pc = 0x37BD84u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    ctx->pc = 0x5709B0u;
    {
        auto targetFn = runtime->lookupFunction(0x5709B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BD88u; }
        if (ctx->pc != 0x37BD88u) { return; }
    }
    ctx->pc = 0x37BD88u;
label_37bd88:
    // 0x37bd88: 0x10400085
label_37bd8c:
    if (ctx->pc == 0x37BD8Cu) {
        ctx->pc = 0x37BD90u;
        goto label_37bd90;
    }
    ctx->pc = 0x37BD88u;
    {
        const bool branch_taken_0x37bd88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x37bd88) {
            ctx->pc = 0x37BFA0u;
            goto label_37bfa0;
        }
    }
    ctx->pc = 0x37BD90u;
label_37bd90:
    // 0x37bd90: 0x10000084
label_37bd94:
    if (ctx->pc == 0x37BD94u) {
        ctx->pc = 0x37BD94u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x37BD98u;
        goto label_37bd98;
    }
    ctx->pc = 0x37BD90u;
    {
        const bool branch_taken_0x37bd90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37BD94u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x37bd90) {
            ctx->pc = 0x37BFA4u;
            goto label_37bfa4;
        }
    }
    ctx->pc = 0x37BD98u;
label_37bd98:
    // 0x37bd98: 0x3c01004c
    ctx->pc = 0x37bd98u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
label_37bd9c:
    // 0x37bd9c: 0x94820002
    ctx->pc = 0x37bd9cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_37bda0:
    // 0x37bda0: 0x9423ac50
    ctx->pc = 0x37bda0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294945872)));
label_37bda4:
    // 0x37bda4: 0x1462007e
label_37bda8:
    if (ctx->pc == 0x37BDA8u) {
        ctx->pc = 0x37BDA8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x37BDACu;
        goto label_37bdac;
    }
    ctx->pc = 0x37BDA4u;
    {
        const bool branch_taken_0x37bda4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x37BDA8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x37bda4) {
            ctx->pc = 0x37BFA0u;
            goto label_37bfa0;
        }
    }
    ctx->pc = 0x37BDACu;
label_37bdac:
    // 0x37bdac: 0x1000007d
label_37bdb0:
    if (ctx->pc == 0x37BDB0u) {
        ctx->pc = 0x37BDB4u;
        goto label_37bdb4;
    }
    ctx->pc = 0x37BDACu;
    {
        const bool branch_taken_0x37bdac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x37bdac) {
            ctx->pc = 0x37BFA4u;
            goto label_37bfa4;
        }
    }
    ctx->pc = 0x37BDB4u;
label_37bdb4:
    // 0x37bdb4: 0x94820002
    ctx->pc = 0x37bdb4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_37bdb8:
    // 0x37bdb8: 0x3c03004c
    ctx->pc = 0x37bdb8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)76 << 16));
label_37bdbc:
    // 0x37bdbc: 0x3c01004c
    ctx->pc = 0x37bdbcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
label_37bdc0:
    // 0x37bdc0: 0x2463aa50
    ctx->pc = 0x37bdc0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294945360));
label_37bdc4:
    // 0x37bdc4: 0x9025aded
    ctx->pc = 0x37bdc4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946285)));
label_37bdc8:
    // 0x37bdc8: 0x621021
    ctx->pc = 0x37bdc8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_37bdcc:
    // 0x37bdcc: 0x90420000
    ctx->pc = 0x37bdccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_37bdd0:
    // 0x37bdd0: 0x24a50001
    ctx->pc = 0x37bdd0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_37bdd4:
    // 0x37bdd4: 0x14450072
label_37bdd8:
    if (ctx->pc == 0x37BDD8u) {
        ctx->pc = 0x37BDDCu;
        goto label_37bddc;
    }
    ctx->pc = 0x37BDD4u;
    {
        const bool branch_taken_0x37bdd4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        if (branch_taken_0x37bdd4) {
            ctx->pc = 0x37BFA0u;
            goto label_37bfa0;
        }
    }
    ctx->pc = 0x37BDDCu;
label_37bddc:
    // 0x37bddc: 0x94820004
    ctx->pc = 0x37bddcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_37bde0:
    // 0x37bde0: 0x621021
    ctx->pc = 0x37bde0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_37bde4:
    // 0x37bde4: 0x90420000
    ctx->pc = 0x37bde4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_37bde8:
    // 0x37bde8: 0x1445006d
label_37bdec:
    if (ctx->pc == 0x37BDECu) {
        ctx->pc = 0x37BDECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x37BDF0u;
        goto label_37bdf0;
    }
    ctx->pc = 0x37BDE8u;
    {
        const bool branch_taken_0x37bde8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        ctx->pc = 0x37BDECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x37bde8) {
            ctx->pc = 0x37BFA0u;
            goto label_37bfa0;
        }
    }
    ctx->pc = 0x37BDF0u;
label_37bdf0:
    // 0x37bdf0: 0x1000006c
label_37bdf4:
    if (ctx->pc == 0x37BDF4u) {
        ctx->pc = 0x37BDF8u;
        goto label_37bdf8;
    }
    ctx->pc = 0x37BDF0u;
    {
        const bool branch_taken_0x37bdf0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x37bdf0) {
            ctx->pc = 0x37BFA4u;
            goto label_37bfa4;
        }
    }
    ctx->pc = 0x37BDF8u;
label_37bdf8:
    // 0x37bdf8: 0x3c01004c
    ctx->pc = 0x37bdf8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
label_37bdfc:
    // 0x37bdfc: 0x24020003
    ctx->pc = 0x37bdfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_37be00:
    // 0x37be00: 0x9023ae8a
    ctx->pc = 0x37be00u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946442)));
label_37be04:
    // 0x37be04: 0x14620066
label_37be08:
    if (ctx->pc == 0x37BE08u) {
        ctx->pc = 0x37BE08u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x37BE0Cu;
        goto label_37be0c;
    }
    ctx->pc = 0x37BE04u;
    {
        const bool branch_taken_0x37be04 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x37BE08u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x37be04) {
            ctx->pc = 0x37BFA0u;
            goto label_37bfa0;
        }
    }
    ctx->pc = 0x37BE0Cu;
label_37be0c:
    // 0x37be0c: 0x10000065
label_37be10:
    if (ctx->pc == 0x37BE10u) {
        ctx->pc = 0x37BE14u;
        goto label_37be14;
    }
    ctx->pc = 0x37BE0Cu;
    {
        const bool branch_taken_0x37be0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x37be0c) {
            ctx->pc = 0x37BFA4u;
            goto label_37bfa4;
        }
    }
    ctx->pc = 0x37BE14u;
label_37be14:
    // 0x37be14: 0x94820002
    ctx->pc = 0x37be14u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_37be18:
    // 0x37be18: 0x3c03004c
    ctx->pc = 0x37be18u;
    SET_GPR_U32(ctx, 3, ((uint32_t)76 << 16));
label_37be1c:
    // 0x37be1c: 0x3c01004c
    ctx->pc = 0x37be1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
label_37be20:
    // 0x37be20: 0x2463aa50
    ctx->pc = 0x37be20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294945360));
label_37be24:
    // 0x37be24: 0x9025aded
    ctx->pc = 0x37be24u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946285)));
label_37be28:
    // 0x37be28: 0x621021
    ctx->pc = 0x37be28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_37be2c:
    // 0x37be2c: 0x90420000
    ctx->pc = 0x37be2cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_37be30:
    // 0x37be30: 0x24a50001
    ctx->pc = 0x37be30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_37be34:
    // 0x37be34: 0x10450007
label_37be38:
    if (ctx->pc == 0x37BE38u) {
        ctx->pc = 0x37BE38u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x37BE3Cu;
        goto label_37be3c;
    }
    ctx->pc = 0x37BE34u;
    {
        const bool branch_taken_0x37be34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        ctx->pc = 0x37BE38u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x37be34) {
            ctx->pc = 0x37BE54u;
            goto label_37be54;
        }
    }
    ctx->pc = 0x37BE3Cu;
label_37be3c:
    // 0x37be3c: 0x94820004
    ctx->pc = 0x37be3cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_37be40:
    // 0x37be40: 0x621021
    ctx->pc = 0x37be40u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_37be44:
    // 0x37be44: 0x90420000
    ctx->pc = 0x37be44u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_37be48:
    // 0x37be48: 0x14450055
label_37be4c:
    if (ctx->pc == 0x37BE4Cu) {
        ctx->pc = 0x37BE50u;
        goto label_37be50;
    }
    ctx->pc = 0x37BE48u;
    {
        const bool branch_taken_0x37be48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        if (branch_taken_0x37be48) {
            ctx->pc = 0x37BFA0u;
            goto label_37bfa0;
        }
    }
    ctx->pc = 0x37BE50u;
label_37be50:
    // 0x37be50: 0x24020001
    ctx->pc = 0x37be50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_37be54:
    // 0x37be54: 0x10000053
label_37be58:
    if (ctx->pc == 0x37BE58u) {
        ctx->pc = 0x37BE5Cu;
        goto label_37be5c;
    }
    ctx->pc = 0x37BE54u;
    {
        const bool branch_taken_0x37be54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x37be54) {
            ctx->pc = 0x37BFA4u;
            goto label_37bfa4;
        }
    }
    ctx->pc = 0x37BE5Cu;
label_37be5c:
    // 0x37be5c: 0x94830002
    ctx->pc = 0x37be5cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_37be60:
    // 0x37be60: 0x3c05004c
    ctx->pc = 0x37be60u;
    SET_GPR_U32(ctx, 5, ((uint32_t)76 << 16));
label_37be64:
    // 0x37be64: 0x24a59a80
    ctx->pc = 0x37be64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941312));
label_37be68:
    // 0x37be68: 0x24020001
    ctx->pc = 0x37be68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_37be6c:
    // 0x37be6c: 0x3066001f
    ctx->pc = 0x37be6cu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 3), 31));
label_37be70:
    // 0x37be70: 0x31943
    ctx->pc = 0x37be70u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_37be74:
    // 0x37be74: 0xc23004
    ctx->pc = 0x37be74u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
label_37be78:
    // 0x37be78: 0x31880
    ctx->pc = 0x37be78u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_37be7c:
    // 0x37be7c: 0xa31821
    ctx->pc = 0x37be7cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_37be80:
    // 0x37be80: 0x8c630000
    ctx->pc = 0x37be80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_37be84:
    // 0x37be84: 0xc31824
    ctx->pc = 0x37be84u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_37be88:
    // 0x37be88: 0x10600045
label_37be8c:
    if (ctx->pc == 0x37BE8Cu) {
        ctx->pc = 0x37BE90u;
        goto label_37be90;
    }
    ctx->pc = 0x37BE88u;
    {
        const bool branch_taken_0x37be88 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x37be88) {
            ctx->pc = 0x37BFA0u;
            goto label_37bfa0;
        }
    }
    ctx->pc = 0x37BE90u;
label_37be90:
    // 0x37be90: 0x94830004
    ctx->pc = 0x37be90u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_37be94:
    // 0x37be94: 0x3064001f
    ctx->pc = 0x37be94u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 3), 31));
label_37be98:
    // 0x37be98: 0x31943
    ctx->pc = 0x37be98u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_37be9c:
    // 0x37be9c: 0x822004
    ctx->pc = 0x37be9cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_37bea0:
    // 0x37bea0: 0x31880
    ctx->pc = 0x37bea0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_37bea4:
    // 0x37bea4: 0xa31821
    ctx->pc = 0x37bea4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_37bea8:
    // 0x37bea8: 0x8c630000
    ctx->pc = 0x37bea8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_37beac:
    // 0x37beac: 0x831824
    ctx->pc = 0x37beacu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_37beb0:
    // 0x37beb0: 0x1060003b
label_37beb4:
    if (ctx->pc == 0x37BEB4u) {
        ctx->pc = 0x37BEB8u;
        goto label_37beb8;
    }
    ctx->pc = 0x37BEB0u;
    {
        const bool branch_taken_0x37beb0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x37beb0) {
            ctx->pc = 0x37BFA0u;
            goto label_37bfa0;
        }
    }
    ctx->pc = 0x37BEB8u;
label_37beb8:
    // 0x37beb8: 0x1000003a
label_37bebc:
    if (ctx->pc == 0x37BEBCu) {
        ctx->pc = 0x37BEC0u;
        goto label_37bec0;
    }
    ctx->pc = 0x37BEB8u;
    {
        const bool branch_taken_0x37beb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x37beb8) {
            ctx->pc = 0x37BFA4u;
            goto label_37bfa4;
        }
    }
    ctx->pc = 0x37BEC0u;
label_37bec0:
    // 0x37bec0: 0x94830002
    ctx->pc = 0x37bec0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_37bec4:
    // 0x37bec4: 0x3c06004c
    ctx->pc = 0x37bec4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)76 << 16));
label_37bec8:
    // 0x37bec8: 0x24020001
    ctx->pc = 0x37bec8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_37becc:
    // 0x37becc: 0x24c69c00
    ctx->pc = 0x37beccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294941696));
label_37bed0:
    // 0x37bed0: 0x32943
    ctx->pc = 0x37bed0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 5));
label_37bed4:
    // 0x37bed4: 0x3063001f
    ctx->pc = 0x37bed4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 31));
label_37bed8:
    // 0x37bed8: 0x53880
    ctx->pc = 0x37bed8u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 5), 2));
label_37bedc:
    // 0x37bedc: 0x622804
    ctx->pc = 0x37bedcu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_37bee0:
    // 0x37bee0: 0xc71821
    ctx->pc = 0x37bee0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_37bee4:
    // 0x37bee4: 0x8c630000
    ctx->pc = 0x37bee4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_37bee8:
    // 0x37bee8: 0x651824
    ctx->pc = 0x37bee8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_37beec:
    // 0x37beec: 0x1060002c
label_37bef0:
    if (ctx->pc == 0x37BEF0u) {
        ctx->pc = 0x37BEF4u;
        goto label_37bef4;
    }
    ctx->pc = 0x37BEECu;
    {
        const bool branch_taken_0x37beec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x37beec) {
            ctx->pc = 0x37BFA0u;
            goto label_37bfa0;
        }
    }
    ctx->pc = 0x37BEF4u;
label_37bef4:
    // 0x37bef4: 0x94830004
    ctx->pc = 0x37bef4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_37bef8:
    // 0x37bef8: 0x32143
    ctx->pc = 0x37bef8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 5));
label_37befc:
    // 0x37befc: 0x3063001f
    ctx->pc = 0x37befcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 31));
label_37bf00:
    // 0x37bf00: 0x42880
    ctx->pc = 0x37bf00u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 2));
label_37bf04:
    // 0x37bf04: 0x622004
    ctx->pc = 0x37bf04u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_37bf08:
    // 0x37bf08: 0xc51821
    ctx->pc = 0x37bf08u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_37bf0c:
    // 0x37bf0c: 0x8c630000
    ctx->pc = 0x37bf0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_37bf10:
    // 0x37bf10: 0x641824
    ctx->pc = 0x37bf10u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_37bf14:
    // 0x37bf14: 0x10600022
label_37bf18:
    if (ctx->pc == 0x37BF18u) {
        ctx->pc = 0x37BF1Cu;
        goto label_37bf1c;
    }
    ctx->pc = 0x37BF14u;
    {
        const bool branch_taken_0x37bf14 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x37bf14) {
            ctx->pc = 0x37BFA0u;
            goto label_37bfa0;
        }
    }
    ctx->pc = 0x37BF1Cu;
label_37bf1c:
    // 0x37bf1c: 0x10000021
label_37bf20:
    if (ctx->pc == 0x37BF20u) {
        ctx->pc = 0x37BF24u;
        goto label_37bf24;
    }
    ctx->pc = 0x37BF1Cu;
    {
        const bool branch_taken_0x37bf1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x37bf1c) {
            ctx->pc = 0x37BFA4u;
            goto label_37bfa4;
        }
    }
    ctx->pc = 0x37BF24u;
label_37bf24:
    // 0x37bf24: 0x3c01004c
    ctx->pc = 0x37bf24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
label_37bf28:
    // 0x37bf28: 0x3c02004a
    ctx->pc = 0x37bf28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
label_37bf2c:
    // 0x37bf2c: 0x9024aded
    ctx->pc = 0x37bf2cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946285)));
label_37bf30:
    // 0x37bf30: 0x24425c30
    ctx->pc = 0x37bf30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23600));
label_37bf34:
    // 0x37bf34: 0x282d
    ctx->pc = 0x37bf34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37bf38:
    // 0x37bf38: 0x41900
    ctx->pc = 0x37bf38u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
label_37bf3c:
    // 0x37bf3c: 0x642023
    ctx->pc = 0x37bf3cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_37bf40:
    // 0x37bf40: 0x418c0
    ctx->pc = 0x37bf40u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
label_37bf44:
    // 0x37bf44: 0x831821
    ctx->pc = 0x37bf44u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_37bf48:
    // 0x37bf48: 0x31940
    ctx->pc = 0x37bf48u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
label_37bf4c:
    // 0x37bf4c: 0xc199820
label_37bf50:
    if (ctx->pc == 0x37BF50u) {
        ctx->pc = 0x37BF50u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x37BF54u;
        goto label_37bf54;
    }
    ctx->pc = 0x37BF4Cu;
    SET_GPR_U32(ctx, 31, 0x37BF54u);
    ctx->pc = 0x37BF50u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x666080u;
    {
        auto targetFn = runtime->lookupFunction(0x666080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BF54u; }
        if (ctx->pc != 0x37BF54u) { return; }
    }
    ctx->pc = 0x37BF54u;
label_37bf54:
    // 0x37bf54: 0x1440000e
label_37bf58:
    if (ctx->pc == 0x37BF58u) {
        ctx->pc = 0x37BF58u;
        SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
        ctx->pc = 0x37BF5Cu;
        goto label_37bf5c;
    }
    ctx->pc = 0x37BF54u;
    {
        const bool branch_taken_0x37bf54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37BF58u;
        SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
        if (branch_taken_0x37bf54) {
            ctx->pc = 0x37BF90u;
            goto label_37bf90;
        }
    }
    ctx->pc = 0x37BF5Cu;
label_37bf5c:
    // 0x37bf5c: 0x3c02004a
    ctx->pc = 0x37bf5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
label_37bf60:
    // 0x37bf60: 0x9024aded
    ctx->pc = 0x37bf60u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946285)));
label_37bf64:
    // 0x37bf64: 0x244267d0
    ctx->pc = 0x37bf64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 26576));
label_37bf68:
    // 0x37bf68: 0x41900
    ctx->pc = 0x37bf68u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
label_37bf6c:
    // 0x37bf6c: 0x642023
    ctx->pc = 0x37bf6cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_37bf70:
    // 0x37bf70: 0x418c0
    ctx->pc = 0x37bf70u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
label_37bf74:
    // 0x37bf74: 0x831821
    ctx->pc = 0x37bf74u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_37bf78:
    // 0x37bf78: 0x31940
    ctx->pc = 0x37bf78u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
label_37bf7c:
    // 0x37bf7c: 0x431021
    ctx->pc = 0x37bf7cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37bf80:
    // 0x37bf80: 0x8c420000
    ctx->pc = 0x37bf80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_37bf84:
    // 0x37bf84: 0x30420080
    ctx->pc = 0x37bf84u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 128));
label_37bf88:
    // 0x37bf88: 0x10400003
label_37bf8c:
    if (ctx->pc == 0x37BF8Cu) {
        ctx->pc = 0x37BF8Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x37BF90u;
        goto label_37bf90;
    }
    ctx->pc = 0x37BF88u;
    {
        const bool branch_taken_0x37bf88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x37BF8Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x37bf88) {
            ctx->pc = 0x37BF98u;
            goto label_37bf98;
        }
    }
    ctx->pc = 0x37BF90u;
label_37bf90:
    // 0x37bf90: 0x10000004
label_37bf94:
    if (ctx->pc == 0x37BF94u) {
        ctx->pc = 0x37BF94u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37BF98u;
        goto label_37bf98;
    }
    ctx->pc = 0x37BF90u;
    {
        const bool branch_taken_0x37bf90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37BF94u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37bf90) {
            ctx->pc = 0x37BFA4u;
            goto label_37bfa4;
        }
    }
    ctx->pc = 0x37BF98u;
label_37bf98:
    // 0x37bf98: 0x10000002
label_37bf9c:
    if (ctx->pc == 0x37BF9Cu) {
        ctx->pc = 0x37BFA0u;
        goto label_37bfa0;
    }
    ctx->pc = 0x37BF98u;
    {
        const bool branch_taken_0x37bf98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x37bf98) {
            ctx->pc = 0x37BFA4u;
            goto label_37bfa4;
        }
    }
    ctx->pc = 0x37BFA0u;
label_37bfa0:
    // 0x37bfa0: 0x102d
    ctx->pc = 0x37bfa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37bfa4:
    // 0x37bfa4: 0xdfbf0000
    ctx->pc = 0x37bfa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_37bfa8:
    // 0x37bfa8: 0x3e00008
label_37bfac:
    if (ctx->pc == 0x37BFACu) {
        ctx->pc = 0x37BFACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x37BFB0u;
        goto label_fallthrough_0x37bfa8;
    }
    ctx->pc = 0x37BFA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37BFACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37BCA0u: goto label_37bca0;
            case 0x37BCA4u: goto label_37bca4;
            case 0x37BCA8u: goto label_37bca8;
            case 0x37BCACu: goto label_37bcac;
            case 0x37BCB0u: goto label_37bcb0;
            case 0x37BCB4u: goto label_37bcb4;
            case 0x37BCB8u: goto label_37bcb8;
            case 0x37BCBCu: goto label_37bcbc;
            case 0x37BCC0u: goto label_37bcc0;
            case 0x37BCC4u: goto label_37bcc4;
            case 0x37BCC8u: goto label_37bcc8;
            case 0x37BCCCu: goto label_37bccc;
            case 0x37BCD0u: goto label_37bcd0;
            case 0x37BCD4u: goto label_37bcd4;
            case 0x37BCD8u: goto label_37bcd8;
            case 0x37BCDCu: goto label_37bcdc;
            case 0x37BCE0u: goto label_37bce0;
            case 0x37BCE4u: goto label_37bce4;
            case 0x37BCE8u: goto label_37bce8;
            case 0x37BCECu: goto label_37bcec;
            case 0x37BCF0u: goto label_37bcf0;
            case 0x37BCF4u: goto label_37bcf4;
            case 0x37BCF8u: goto label_37bcf8;
            case 0x37BCFCu: goto label_37bcfc;
            case 0x37BD00u: goto label_37bd00;
            case 0x37BD04u: goto label_37bd04;
            case 0x37BD08u: goto label_37bd08;
            case 0x37BD0Cu: goto label_37bd0c;
            case 0x37BD10u: goto label_37bd10;
            case 0x37BD14u: goto label_37bd14;
            case 0x37BD18u: goto label_37bd18;
            case 0x37BD1Cu: goto label_37bd1c;
            case 0x37BD20u: goto label_37bd20;
            case 0x37BD24u: goto label_37bd24;
            case 0x37BD28u: goto label_37bd28;
            case 0x37BD2Cu: goto label_37bd2c;
            case 0x37BD30u: goto label_37bd30;
            case 0x37BD34u: goto label_37bd34;
            case 0x37BD38u: goto label_37bd38;
            case 0x37BD3Cu: goto label_37bd3c;
            case 0x37BD40u: goto label_37bd40;
            case 0x37BD44u: goto label_37bd44;
            case 0x37BD48u: goto label_37bd48;
            case 0x37BD4Cu: goto label_37bd4c;
            case 0x37BD50u: goto label_37bd50;
            case 0x37BD54u: goto label_37bd54;
            case 0x37BD58u: goto label_37bd58;
            case 0x37BD5Cu: goto label_37bd5c;
            case 0x37BD60u: goto label_37bd60;
            case 0x37BD64u: goto label_37bd64;
            case 0x37BD68u: goto label_37bd68;
            case 0x37BD6Cu: goto label_37bd6c;
            case 0x37BD70u: goto label_37bd70;
            case 0x37BD74u: goto label_37bd74;
            case 0x37BD78u: goto label_37bd78;
            case 0x37BD7Cu: goto label_37bd7c;
            case 0x37BD80u: goto label_37bd80;
            case 0x37BD84u: goto label_37bd84;
            case 0x37BD88u: goto label_37bd88;
            case 0x37BD8Cu: goto label_37bd8c;
            case 0x37BD90u: goto label_37bd90;
            case 0x37BD94u: goto label_37bd94;
            case 0x37BD98u: goto label_37bd98;
            case 0x37BD9Cu: goto label_37bd9c;
            case 0x37BDA0u: goto label_37bda0;
            case 0x37BDA4u: goto label_37bda4;
            case 0x37BDA8u: goto label_37bda8;
            case 0x37BDACu: goto label_37bdac;
            case 0x37BDB0u: goto label_37bdb0;
            case 0x37BDB4u: goto label_37bdb4;
            case 0x37BDB8u: goto label_37bdb8;
            case 0x37BDBCu: goto label_37bdbc;
            case 0x37BDC0u: goto label_37bdc0;
            case 0x37BDC4u: goto label_37bdc4;
            case 0x37BDC8u: goto label_37bdc8;
            case 0x37BDCCu: goto label_37bdcc;
            case 0x37BDD0u: goto label_37bdd0;
            case 0x37BDD4u: goto label_37bdd4;
            case 0x37BDD8u: goto label_37bdd8;
            case 0x37BDDCu: goto label_37bddc;
            case 0x37BDE0u: goto label_37bde0;
            case 0x37BDE4u: goto label_37bde4;
            case 0x37BDE8u: goto label_37bde8;
            case 0x37BDECu: goto label_37bdec;
            case 0x37BDF0u: goto label_37bdf0;
            case 0x37BDF4u: goto label_37bdf4;
            case 0x37BDF8u: goto label_37bdf8;
            case 0x37BDFCu: goto label_37bdfc;
            case 0x37BE00u: goto label_37be00;
            case 0x37BE04u: goto label_37be04;
            case 0x37BE08u: goto label_37be08;
            case 0x37BE0Cu: goto label_37be0c;
            case 0x37BE10u: goto label_37be10;
            case 0x37BE14u: goto label_37be14;
            case 0x37BE18u: goto label_37be18;
            case 0x37BE1Cu: goto label_37be1c;
            case 0x37BE20u: goto label_37be20;
            case 0x37BE24u: goto label_37be24;
            case 0x37BE28u: goto label_37be28;
            case 0x37BE2Cu: goto label_37be2c;
            case 0x37BE30u: goto label_37be30;
            case 0x37BE34u: goto label_37be34;
            case 0x37BE38u: goto label_37be38;
            case 0x37BE3Cu: goto label_37be3c;
            case 0x37BE40u: goto label_37be40;
            case 0x37BE44u: goto label_37be44;
            case 0x37BE48u: goto label_37be48;
            case 0x37BE4Cu: goto label_37be4c;
            case 0x37BE50u: goto label_37be50;
            case 0x37BE54u: goto label_37be54;
            case 0x37BE58u: goto label_37be58;
            case 0x37BE5Cu: goto label_37be5c;
            case 0x37BE60u: goto label_37be60;
            case 0x37BE64u: goto label_37be64;
            case 0x37BE68u: goto label_37be68;
            case 0x37BE6Cu: goto label_37be6c;
            case 0x37BE70u: goto label_37be70;
            case 0x37BE74u: goto label_37be74;
            case 0x37BE78u: goto label_37be78;
            case 0x37BE7Cu: goto label_37be7c;
            case 0x37BE80u: goto label_37be80;
            case 0x37BE84u: goto label_37be84;
            case 0x37BE88u: goto label_37be88;
            case 0x37BE8Cu: goto label_37be8c;
            case 0x37BE90u: goto label_37be90;
            case 0x37BE94u: goto label_37be94;
            case 0x37BE98u: goto label_37be98;
            case 0x37BE9Cu: goto label_37be9c;
            case 0x37BEA0u: goto label_37bea0;
            case 0x37BEA4u: goto label_37bea4;
            case 0x37BEA8u: goto label_37bea8;
            case 0x37BEACu: goto label_37beac;
            case 0x37BEB0u: goto label_37beb0;
            case 0x37BEB4u: goto label_37beb4;
            case 0x37BEB8u: goto label_37beb8;
            case 0x37BEBCu: goto label_37bebc;
            case 0x37BEC0u: goto label_37bec0;
            case 0x37BEC4u: goto label_37bec4;
            case 0x37BEC8u: goto label_37bec8;
            case 0x37BECCu: goto label_37becc;
            case 0x37BED0u: goto label_37bed0;
            case 0x37BED4u: goto label_37bed4;
            case 0x37BED8u: goto label_37bed8;
            case 0x37BEDCu: goto label_37bedc;
            case 0x37BEE0u: goto label_37bee0;
            case 0x37BEE4u: goto label_37bee4;
            case 0x37BEE8u: goto label_37bee8;
            case 0x37BEECu: goto label_37beec;
            case 0x37BEF0u: goto label_37bef0;
            case 0x37BEF4u: goto label_37bef4;
            case 0x37BEF8u: goto label_37bef8;
            case 0x37BEFCu: goto label_37befc;
            case 0x37BF00u: goto label_37bf00;
            case 0x37BF04u: goto label_37bf04;
            case 0x37BF08u: goto label_37bf08;
            case 0x37BF0Cu: goto label_37bf0c;
            case 0x37BF10u: goto label_37bf10;
            case 0x37BF14u: goto label_37bf14;
            case 0x37BF18u: goto label_37bf18;
            case 0x37BF1Cu: goto label_37bf1c;
            case 0x37BF20u: goto label_37bf20;
            case 0x37BF24u: goto label_37bf24;
            case 0x37BF28u: goto label_37bf28;
            case 0x37BF2Cu: goto label_37bf2c;
            case 0x37BF30u: goto label_37bf30;
            case 0x37BF34u: goto label_37bf34;
            case 0x37BF38u: goto label_37bf38;
            case 0x37BF3Cu: goto label_37bf3c;
            case 0x37BF40u: goto label_37bf40;
            case 0x37BF44u: goto label_37bf44;
            case 0x37BF48u: goto label_37bf48;
            case 0x37BF4Cu: goto label_37bf4c;
            case 0x37BF50u: goto label_37bf50;
            case 0x37BF54u: goto label_37bf54;
            case 0x37BF58u: goto label_37bf58;
            case 0x37BF5Cu: goto label_37bf5c;
            case 0x37BF60u: goto label_37bf60;
            case 0x37BF64u: goto label_37bf64;
            case 0x37BF68u: goto label_37bf68;
            case 0x37BF6Cu: goto label_37bf6c;
            case 0x37BF70u: goto label_37bf70;
            case 0x37BF74u: goto label_37bf74;
            case 0x37BF78u: goto label_37bf78;
            case 0x37BF7Cu: goto label_37bf7c;
            case 0x37BF80u: goto label_37bf80;
            case 0x37BF84u: goto label_37bf84;
            case 0x37BF88u: goto label_37bf88;
            case 0x37BF8Cu: goto label_37bf8c;
            case 0x37BF90u: goto label_37bf90;
            case 0x37BF94u: goto label_37bf94;
            case 0x37BF98u: goto label_37bf98;
            case 0x37BF9Cu: goto label_37bf9c;
            case 0x37BFA0u: goto label_37bfa0;
            case 0x37BFA4u: goto label_37bfa4;
            case 0x37BFA8u: goto label_37bfa8;
            case 0x37BFACu: goto label_37bfac;
            default: break;
        }
        return;
    }
label_fallthrough_0x37bfa8:
    ctx->pc = 0x37BFB0u;
}
