#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_12cce0
// Address: 0x12cce0 - 0x12cfd8
void entry_12cce0_0x12cfd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12cce0u;

label_12cce0:
    // 0x12cce0: 0x27bdffb0
    ctx->pc = 0x12cce0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_12cce4:
    // 0x12cce4: 0x24061000
    ctx->pc = 0x12cce4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4096));
label_12cce8:
    // 0x12cce8: 0xffb30038
    ctx->pc = 0x12cce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_12ccec:
    // 0x12ccec: 0x80982d
    ctx->pc = 0x12ccecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12ccf0:
    // 0x12ccf0: 0xffb00020
    ctx->pc = 0x12ccf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_12ccf4:
    // 0x12ccf4: 0x24050001
    ctx->pc = 0x12ccf4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_12ccf8:
    // 0x12ccf8: 0xffb10028
    ctx->pc = 0x12ccf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_12ccfc:
    // 0x12ccfc: 0x3a0382d
    ctx->pc = 0x12ccfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12cd00:
    // 0x12cd00: 0xffb20030
    ctx->pc = 0x12cd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_12cd04:
    // 0x12cd04: 0xffbf0040
    ctx->pc = 0x12cd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_12cd08:
    // 0x12cd08: 0x8e710008
    ctx->pc = 0x12cd08u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_12cd0c:
    // 0x12cd0c: 0x8e700004
    ctx->pc = 0x12cd0cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_12cd10:
    // 0x12cd10: 0x8e220000
    ctx->pc = 0x12cd10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12cd14:
    // 0x12cd14: 0x8c430018
    ctx->pc = 0x12cd14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_12cd18:
    // 0x12cd18: 0x60f809
label_12cd1c:
    if (ctx->pc == 0x12CD1Cu) {
        ctx->pc = 0x12CD1Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12CD20u;
        goto label_12cd20;
    }
    ctx->pc = 0x12CD18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12CD20u);
        ctx->pc = 0x12CD1Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12CCE0u: goto label_12cce0;
            case 0x12CCE4u: goto label_12cce4;
            case 0x12CCE8u: goto label_12cce8;
            case 0x12CCECu: goto label_12ccec;
            case 0x12CCF0u: goto label_12ccf0;
            case 0x12CCF4u: goto label_12ccf4;
            case 0x12CCF8u: goto label_12ccf8;
            case 0x12CCFCu: goto label_12ccfc;
            case 0x12CD00u: goto label_12cd00;
            case 0x12CD04u: goto label_12cd04;
            case 0x12CD08u: goto label_12cd08;
            case 0x12CD0Cu: goto label_12cd0c;
            case 0x12CD10u: goto label_12cd10;
            case 0x12CD14u: goto label_12cd14;
            case 0x12CD18u: goto label_12cd18;
            case 0x12CD1Cu: goto label_12cd1c;
            case 0x12CD20u: goto label_12cd20;
            case 0x12CD24u: goto label_12cd24;
            case 0x12CD28u: goto label_12cd28;
            case 0x12CD2Cu: goto label_12cd2c;
            case 0x12CD30u: goto label_12cd30;
            case 0x12CD34u: goto label_12cd34;
            case 0x12CD38u: goto label_12cd38;
            case 0x12CD3Cu: goto label_12cd3c;
            case 0x12CD40u: goto label_12cd40;
            case 0x12CD44u: goto label_12cd44;
            case 0x12CD48u: goto label_12cd48;
            case 0x12CD4Cu: goto label_12cd4c;
            case 0x12CD50u: goto label_12cd50;
            case 0x12CD54u: goto label_12cd54;
            case 0x12CD58u: goto label_12cd58;
            case 0x12CD5Cu: goto label_12cd5c;
            case 0x12CD60u: goto label_12cd60;
            case 0x12CD64u: goto label_12cd64;
            case 0x12CD68u: goto label_12cd68;
            case 0x12CD6Cu: goto label_12cd6c;
            case 0x12CD70u: goto label_12cd70;
            case 0x12CD74u: goto label_12cd74;
            case 0x12CD78u: goto label_12cd78;
            case 0x12CD7Cu: goto label_12cd7c;
            case 0x12CD80u: goto label_12cd80;
            case 0x12CD84u: goto label_12cd84;
            case 0x12CD88u: goto label_12cd88;
            case 0x12CD8Cu: goto label_12cd8c;
            case 0x12CD90u: goto label_12cd90;
            case 0x12CD94u: goto label_12cd94;
            case 0x12CD98u: goto label_12cd98;
            case 0x12CD9Cu: goto label_12cd9c;
            case 0x12CDA0u: goto label_12cda0;
            case 0x12CDA4u: goto label_12cda4;
            case 0x12CDA8u: goto label_12cda8;
            case 0x12CDACu: goto label_12cdac;
            case 0x12CDB0u: goto label_12cdb0;
            case 0x12CDB4u: goto label_12cdb4;
            case 0x12CDB8u: goto label_12cdb8;
            case 0x12CDBCu: goto label_12cdbc;
            case 0x12CDC0u: goto label_12cdc0;
            case 0x12CDC4u: goto label_12cdc4;
            case 0x12CDC8u: goto label_12cdc8;
            case 0x12CDCCu: goto label_12cdcc;
            case 0x12CDD0u: goto label_12cdd0;
            case 0x12CDD4u: goto label_12cdd4;
            case 0x12CDD8u: goto label_12cdd8;
            case 0x12CDDCu: goto label_12cddc;
            case 0x12CDE0u: goto label_12cde0;
            case 0x12CDE4u: goto label_12cde4;
            case 0x12CDE8u: goto label_12cde8;
            case 0x12CDECu: goto label_12cdec;
            case 0x12CDF0u: goto label_12cdf0;
            case 0x12CDF4u: goto label_12cdf4;
            case 0x12CDF8u: goto label_12cdf8;
            case 0x12CDFCu: goto label_12cdfc;
            case 0x12CE00u: goto label_12ce00;
            case 0x12CE04u: goto label_12ce04;
            case 0x12CE08u: goto label_12ce08;
            case 0x12CE0Cu: goto label_12ce0c;
            case 0x12CE10u: goto label_12ce10;
            case 0x12CE14u: goto label_12ce14;
            case 0x12CE18u: goto label_12ce18;
            case 0x12CE1Cu: goto label_12ce1c;
            case 0x12CE20u: goto label_12ce20;
            case 0x12CE24u: goto label_12ce24;
            case 0x12CE28u: goto label_12ce28;
            case 0x12CE2Cu: goto label_12ce2c;
            case 0x12CE30u: goto label_12ce30;
            case 0x12CE34u: goto label_12ce34;
            case 0x12CE38u: goto label_12ce38;
            case 0x12CE3Cu: goto label_12ce3c;
            case 0x12CE40u: goto label_12ce40;
            case 0x12CE44u: goto label_12ce44;
            case 0x12CE48u: goto label_12ce48;
            case 0x12CE4Cu: goto label_12ce4c;
            case 0x12CE50u: goto label_12ce50;
            case 0x12CE54u: goto label_12ce54;
            case 0x12CE58u: goto label_12ce58;
            case 0x12CE5Cu: goto label_12ce5c;
            case 0x12CE60u: goto label_12ce60;
            case 0x12CE64u: goto label_12ce64;
            case 0x12CE68u: goto label_12ce68;
            case 0x12CE6Cu: goto label_12ce6c;
            case 0x12CE70u: goto label_12ce70;
            case 0x12CE74u: goto label_12ce74;
            case 0x12CE78u: goto label_12ce78;
            case 0x12CE7Cu: goto label_12ce7c;
            case 0x12CE80u: goto label_12ce80;
            case 0x12CE84u: goto label_12ce84;
            case 0x12CE88u: goto label_12ce88;
            case 0x12CE8Cu: goto label_12ce8c;
            case 0x12CE90u: goto label_12ce90;
            case 0x12CE94u: goto label_12ce94;
            case 0x12CE98u: goto label_12ce98;
            case 0x12CE9Cu: goto label_12ce9c;
            case 0x12CEA0u: goto label_12cea0;
            case 0x12CEA4u: goto label_12cea4;
            case 0x12CEA8u: goto label_12cea8;
            case 0x12CEACu: goto label_12ceac;
            case 0x12CEB0u: goto label_12ceb0;
            case 0x12CEB4u: goto label_12ceb4;
            case 0x12CEB8u: goto label_12ceb8;
            case 0x12CEBCu: goto label_12cebc;
            case 0x12CEC0u: goto label_12cec0;
            case 0x12CEC4u: goto label_12cec4;
            case 0x12CEC8u: goto label_12cec8;
            case 0x12CECCu: goto label_12cecc;
            case 0x12CED0u: goto label_12ced0;
            case 0x12CED4u: goto label_12ced4;
            case 0x12CED8u: goto label_12ced8;
            case 0x12CEDCu: goto label_12cedc;
            case 0x12CEE0u: goto label_12cee0;
            case 0x12CEE4u: goto label_12cee4;
            case 0x12CEE8u: goto label_12cee8;
            case 0x12CEECu: goto label_12ceec;
            case 0x12CEF0u: goto label_12cef0;
            case 0x12CEF4u: goto label_12cef4;
            case 0x12CEF8u: goto label_12cef8;
            case 0x12CEFCu: goto label_12cefc;
            case 0x12CF00u: goto label_12cf00;
            case 0x12CF04u: goto label_12cf04;
            case 0x12CF08u: goto label_12cf08;
            case 0x12CF0Cu: goto label_12cf0c;
            case 0x12CF10u: goto label_12cf10;
            case 0x12CF14u: goto label_12cf14;
            case 0x12CF18u: goto label_12cf18;
            case 0x12CF1Cu: goto label_12cf1c;
            case 0x12CF20u: goto label_12cf20;
            case 0x12CF24u: goto label_12cf24;
            case 0x12CF28u: goto label_12cf28;
            case 0x12CF2Cu: goto label_12cf2c;
            case 0x12CF30u: goto label_12cf30;
            case 0x12CF34u: goto label_12cf34;
            case 0x12CF38u: goto label_12cf38;
            case 0x12CF3Cu: goto label_12cf3c;
            case 0x12CF40u: goto label_12cf40;
            case 0x12CF44u: goto label_12cf44;
            case 0x12CF48u: goto label_12cf48;
            case 0x12CF4Cu: goto label_12cf4c;
            case 0x12CF50u: goto label_12cf50;
            case 0x12CF54u: goto label_12cf54;
            case 0x12CF58u: goto label_12cf58;
            case 0x12CF5Cu: goto label_12cf5c;
            case 0x12CF60u: goto label_12cf60;
            case 0x12CF64u: goto label_12cf64;
            case 0x12CF68u: goto label_12cf68;
            case 0x12CF6Cu: goto label_12cf6c;
            case 0x12CF70u: goto label_12cf70;
            case 0x12CF74u: goto label_12cf74;
            case 0x12CF78u: goto label_12cf78;
            case 0x12CF7Cu: goto label_12cf7c;
            case 0x12CF80u: goto label_12cf80;
            case 0x12CF84u: goto label_12cf84;
            case 0x12CF88u: goto label_12cf88;
            case 0x12CF8Cu: goto label_12cf8c;
            case 0x12CF90u: goto label_12cf90;
            case 0x12CF94u: goto label_12cf94;
            case 0x12CF98u: goto label_12cf98;
            case 0x12CF9Cu: goto label_12cf9c;
            case 0x12CFA0u: goto label_12cfa0;
            case 0x12CFA4u: goto label_12cfa4;
            case 0x12CFA8u: goto label_12cfa8;
            case 0x12CFACu: goto label_12cfac;
            case 0x12CFB0u: goto label_12cfb0;
            case 0x12CFB4u: goto label_12cfb4;
            case 0x12CFB8u: goto label_12cfb8;
            case 0x12CFBCu: goto label_12cfbc;
            case 0x12CFC0u: goto label_12cfc0;
            case 0x12CFC4u: goto label_12cfc4;
            case 0x12CFC8u: goto label_12cfc8;
            case 0x12CFCCu: goto label_12cfcc;
            case 0x12CFD0u: goto label_12cfd0;
            case 0x12CFD4u: goto label_12cfd4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12CD20u; }
            if (ctx->pc != 0x12CD20u) { return; }
        }
    }
    ctx->pc = 0x12CD20u;
label_12cd20:
    // 0x12cd20: 0x8fa60004
    ctx->pc = 0x12cd20u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_12cd24:
    // 0x12cd24: 0x28c20010
    ctx->pc = 0x12cd24u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 16));
label_12cd28:
    // 0x12cd28: 0x5440000b
label_12cd2c:
    if (ctx->pc == 0x12CD2Cu) {
        ctx->pc = 0x12CD2Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x12CD30u;
        goto label_12cd30;
    }
    ctx->pc = 0x12CD28u;
    {
        const bool branch_taken_0x12cd28 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x12cd28) {
            ctx->pc = 0x12CD2Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x12CD58u;
            goto label_12cd58;
        }
    }
    ctx->pc = 0x12CD30u;
label_12cd30:
    // 0x12cd30: 0x8fa50000
    ctx->pc = 0x12cd30u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12cd34:
    // 0x12cd34: 0xc049336
label_12cd38:
    if (ctx->pc == 0x12CD38u) {
        ctx->pc = 0x12CD38u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12CD3Cu;
        goto label_12cd3c;
    }
    ctx->pc = 0x12CD34u;
    SET_GPR_U32(ctx, 31, 0x12CD3Cu);
    ctx->pc = 0x12CD38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x124CD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00124CD8_0x124cd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CD3Cu; }
    }
    if (ctx->pc != 0x12CD3Cu) { return; }
    ctx->pc = 0x12CD3Cu;
label_12cd3c:
    // 0x12cd3c: 0x40902d
    ctx->pc = 0x12cd3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12cd40:
    // 0x12cd40: 0x12400004
label_12cd44:
    if (ctx->pc == 0x12CD44u) {
        ctx->pc = 0x12CD44u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x12CD48u;
        goto label_12cd48;
    }
    ctx->pc = 0x12CD40u;
    {
        const bool branch_taken_0x12cd40 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CD44u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x12cd40) {
            ctx->pc = 0x12CD54u;
            goto label_12cd54;
        }
    }
    ctx->pc = 0x12CD48u;
label_12cd48:
    // 0x12cd48: 0x52102a
    ctx->pc = 0x12cd48u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 18)));
label_12cd4c:
    // 0x12cd4c: 0x1040000a
label_12cd50:
    if (ctx->pc == 0x12CD50u) {
        ctx->pc = 0x12CD54u;
        goto label_12cd54;
    }
    ctx->pc = 0x12CD4Cu;
    {
        const bool branch_taken_0x12cd4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x12cd4c) {
            ctx->pc = 0x12CD78u;
            goto label_12cd78;
        }
    }
    ctx->pc = 0x12CD54u;
label_12cd54:
    // 0x12cd54: 0x8e230000
    ctx->pc = 0x12cd54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12cd58:
    // 0x12cd58: 0x220202d
    ctx->pc = 0x12cd58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12cd5c:
    // 0x12cd5c: 0x24050001
    ctx->pc = 0x12cd5cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_12cd60:
    // 0x12cd60: 0x8c62001c
    ctx->pc = 0x12cd60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_12cd64:
    // 0x12cd64: 0x40f809
label_12cd68:
    if (ctx->pc == 0x12CD68u) {
        ctx->pc = 0x12CD68u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12CD6Cu;
        goto label_12cd6c;
    }
    ctx->pc = 0x12CD64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12CD6Cu);
        ctx->pc = 0x12CD68u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12CCE0u: goto label_12cce0;
            case 0x12CCE4u: goto label_12cce4;
            case 0x12CCE8u: goto label_12cce8;
            case 0x12CCECu: goto label_12ccec;
            case 0x12CCF0u: goto label_12ccf0;
            case 0x12CCF4u: goto label_12ccf4;
            case 0x12CCF8u: goto label_12ccf8;
            case 0x12CCFCu: goto label_12ccfc;
            case 0x12CD00u: goto label_12cd00;
            case 0x12CD04u: goto label_12cd04;
            case 0x12CD08u: goto label_12cd08;
            case 0x12CD0Cu: goto label_12cd0c;
            case 0x12CD10u: goto label_12cd10;
            case 0x12CD14u: goto label_12cd14;
            case 0x12CD18u: goto label_12cd18;
            case 0x12CD1Cu: goto label_12cd1c;
            case 0x12CD20u: goto label_12cd20;
            case 0x12CD24u: goto label_12cd24;
            case 0x12CD28u: goto label_12cd28;
            case 0x12CD2Cu: goto label_12cd2c;
            case 0x12CD30u: goto label_12cd30;
            case 0x12CD34u: goto label_12cd34;
            case 0x12CD38u: goto label_12cd38;
            case 0x12CD3Cu: goto label_12cd3c;
            case 0x12CD40u: goto label_12cd40;
            case 0x12CD44u: goto label_12cd44;
            case 0x12CD48u: goto label_12cd48;
            case 0x12CD4Cu: goto label_12cd4c;
            case 0x12CD50u: goto label_12cd50;
            case 0x12CD54u: goto label_12cd54;
            case 0x12CD58u: goto label_12cd58;
            case 0x12CD5Cu: goto label_12cd5c;
            case 0x12CD60u: goto label_12cd60;
            case 0x12CD64u: goto label_12cd64;
            case 0x12CD68u: goto label_12cd68;
            case 0x12CD6Cu: goto label_12cd6c;
            case 0x12CD70u: goto label_12cd70;
            case 0x12CD74u: goto label_12cd74;
            case 0x12CD78u: goto label_12cd78;
            case 0x12CD7Cu: goto label_12cd7c;
            case 0x12CD80u: goto label_12cd80;
            case 0x12CD84u: goto label_12cd84;
            case 0x12CD88u: goto label_12cd88;
            case 0x12CD8Cu: goto label_12cd8c;
            case 0x12CD90u: goto label_12cd90;
            case 0x12CD94u: goto label_12cd94;
            case 0x12CD98u: goto label_12cd98;
            case 0x12CD9Cu: goto label_12cd9c;
            case 0x12CDA0u: goto label_12cda0;
            case 0x12CDA4u: goto label_12cda4;
            case 0x12CDA8u: goto label_12cda8;
            case 0x12CDACu: goto label_12cdac;
            case 0x12CDB0u: goto label_12cdb0;
            case 0x12CDB4u: goto label_12cdb4;
            case 0x12CDB8u: goto label_12cdb8;
            case 0x12CDBCu: goto label_12cdbc;
            case 0x12CDC0u: goto label_12cdc0;
            case 0x12CDC4u: goto label_12cdc4;
            case 0x12CDC8u: goto label_12cdc8;
            case 0x12CDCCu: goto label_12cdcc;
            case 0x12CDD0u: goto label_12cdd0;
            case 0x12CDD4u: goto label_12cdd4;
            case 0x12CDD8u: goto label_12cdd8;
            case 0x12CDDCu: goto label_12cddc;
            case 0x12CDE0u: goto label_12cde0;
            case 0x12CDE4u: goto label_12cde4;
            case 0x12CDE8u: goto label_12cde8;
            case 0x12CDECu: goto label_12cdec;
            case 0x12CDF0u: goto label_12cdf0;
            case 0x12CDF4u: goto label_12cdf4;
            case 0x12CDF8u: goto label_12cdf8;
            case 0x12CDFCu: goto label_12cdfc;
            case 0x12CE00u: goto label_12ce00;
            case 0x12CE04u: goto label_12ce04;
            case 0x12CE08u: goto label_12ce08;
            case 0x12CE0Cu: goto label_12ce0c;
            case 0x12CE10u: goto label_12ce10;
            case 0x12CE14u: goto label_12ce14;
            case 0x12CE18u: goto label_12ce18;
            case 0x12CE1Cu: goto label_12ce1c;
            case 0x12CE20u: goto label_12ce20;
            case 0x12CE24u: goto label_12ce24;
            case 0x12CE28u: goto label_12ce28;
            case 0x12CE2Cu: goto label_12ce2c;
            case 0x12CE30u: goto label_12ce30;
            case 0x12CE34u: goto label_12ce34;
            case 0x12CE38u: goto label_12ce38;
            case 0x12CE3Cu: goto label_12ce3c;
            case 0x12CE40u: goto label_12ce40;
            case 0x12CE44u: goto label_12ce44;
            case 0x12CE48u: goto label_12ce48;
            case 0x12CE4Cu: goto label_12ce4c;
            case 0x12CE50u: goto label_12ce50;
            case 0x12CE54u: goto label_12ce54;
            case 0x12CE58u: goto label_12ce58;
            case 0x12CE5Cu: goto label_12ce5c;
            case 0x12CE60u: goto label_12ce60;
            case 0x12CE64u: goto label_12ce64;
            case 0x12CE68u: goto label_12ce68;
            case 0x12CE6Cu: goto label_12ce6c;
            case 0x12CE70u: goto label_12ce70;
            case 0x12CE74u: goto label_12ce74;
            case 0x12CE78u: goto label_12ce78;
            case 0x12CE7Cu: goto label_12ce7c;
            case 0x12CE80u: goto label_12ce80;
            case 0x12CE84u: goto label_12ce84;
            case 0x12CE88u: goto label_12ce88;
            case 0x12CE8Cu: goto label_12ce8c;
            case 0x12CE90u: goto label_12ce90;
            case 0x12CE94u: goto label_12ce94;
            case 0x12CE98u: goto label_12ce98;
            case 0x12CE9Cu: goto label_12ce9c;
            case 0x12CEA0u: goto label_12cea0;
            case 0x12CEA4u: goto label_12cea4;
            case 0x12CEA8u: goto label_12cea8;
            case 0x12CEACu: goto label_12ceac;
            case 0x12CEB0u: goto label_12ceb0;
            case 0x12CEB4u: goto label_12ceb4;
            case 0x12CEB8u: goto label_12ceb8;
            case 0x12CEBCu: goto label_12cebc;
            case 0x12CEC0u: goto label_12cec0;
            case 0x12CEC4u: goto label_12cec4;
            case 0x12CEC8u: goto label_12cec8;
            case 0x12CECCu: goto label_12cecc;
            case 0x12CED0u: goto label_12ced0;
            case 0x12CED4u: goto label_12ced4;
            case 0x12CED8u: goto label_12ced8;
            case 0x12CEDCu: goto label_12cedc;
            case 0x12CEE0u: goto label_12cee0;
            case 0x12CEE4u: goto label_12cee4;
            case 0x12CEE8u: goto label_12cee8;
            case 0x12CEECu: goto label_12ceec;
            case 0x12CEF0u: goto label_12cef0;
            case 0x12CEF4u: goto label_12cef4;
            case 0x12CEF8u: goto label_12cef8;
            case 0x12CEFCu: goto label_12cefc;
            case 0x12CF00u: goto label_12cf00;
            case 0x12CF04u: goto label_12cf04;
            case 0x12CF08u: goto label_12cf08;
            case 0x12CF0Cu: goto label_12cf0c;
            case 0x12CF10u: goto label_12cf10;
            case 0x12CF14u: goto label_12cf14;
            case 0x12CF18u: goto label_12cf18;
            case 0x12CF1Cu: goto label_12cf1c;
            case 0x12CF20u: goto label_12cf20;
            case 0x12CF24u: goto label_12cf24;
            case 0x12CF28u: goto label_12cf28;
            case 0x12CF2Cu: goto label_12cf2c;
            case 0x12CF30u: goto label_12cf30;
            case 0x12CF34u: goto label_12cf34;
            case 0x12CF38u: goto label_12cf38;
            case 0x12CF3Cu: goto label_12cf3c;
            case 0x12CF40u: goto label_12cf40;
            case 0x12CF44u: goto label_12cf44;
            case 0x12CF48u: goto label_12cf48;
            case 0x12CF4Cu: goto label_12cf4c;
            case 0x12CF50u: goto label_12cf50;
            case 0x12CF54u: goto label_12cf54;
            case 0x12CF58u: goto label_12cf58;
            case 0x12CF5Cu: goto label_12cf5c;
            case 0x12CF60u: goto label_12cf60;
            case 0x12CF64u: goto label_12cf64;
            case 0x12CF68u: goto label_12cf68;
            case 0x12CF6Cu: goto label_12cf6c;
            case 0x12CF70u: goto label_12cf70;
            case 0x12CF74u: goto label_12cf74;
            case 0x12CF78u: goto label_12cf78;
            case 0x12CF7Cu: goto label_12cf7c;
            case 0x12CF80u: goto label_12cf80;
            case 0x12CF84u: goto label_12cf84;
            case 0x12CF88u: goto label_12cf88;
            case 0x12CF8Cu: goto label_12cf8c;
            case 0x12CF90u: goto label_12cf90;
            case 0x12CF94u: goto label_12cf94;
            case 0x12CF98u: goto label_12cf98;
            case 0x12CF9Cu: goto label_12cf9c;
            case 0x12CFA0u: goto label_12cfa0;
            case 0x12CFA4u: goto label_12cfa4;
            case 0x12CFA8u: goto label_12cfa8;
            case 0x12CFACu: goto label_12cfac;
            case 0x12CFB0u: goto label_12cfb0;
            case 0x12CFB4u: goto label_12cfb4;
            case 0x12CFB8u: goto label_12cfb8;
            case 0x12CFBCu: goto label_12cfbc;
            case 0x12CFC0u: goto label_12cfc0;
            case 0x12CFC4u: goto label_12cfc4;
            case 0x12CFC8u: goto label_12cfc8;
            case 0x12CFCCu: goto label_12cfcc;
            case 0x12CFD0u: goto label_12cfd0;
            case 0x12CFD4u: goto label_12cfd4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12CD6Cu; }
            if (ctx->pc != 0x12CD6Cu) { return; }
        }
    }
    ctx->pc = 0x12CD6Cu;
label_12cd6c:
    // 0x12cd6c: 0x1000004c
label_12cd70:
    if (ctx->pc == 0x12CD70u) {
        ctx->pc = 0x12CD70u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x12CD74u;
        goto label_12cd74;
    }
    ctx->pc = 0x12CD6Cu;
    {
        const bool branch_taken_0x12cd6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CD70u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x12cd6c) {
            ctx->pc = 0x12CEA0u;
            goto label_12cea0;
        }
    }
    ctx->pc = 0x12CD74u;
label_12cd74:
    // 0x12cd74: 0x0
    ctx->pc = 0x12cd74u;
    // NOP
label_12cd78:
    // 0x12cd78: 0x643000f
label_12cd7c:
    if (ctx->pc == 0x12CD7Cu) {
        ctx->pc = 0x12CD7Cu;
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 18));
        ctx->pc = 0x12CD80u;
        goto label_12cd80;
    }
    ctx->pc = 0x12CD78u;
    {
        const bool branch_taken_0x12cd78 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x12cd78) {
            ctx->pc = 0x12CD7Cu;
            WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 18));
            ctx->pc = 0x12CDB8u;
            goto label_12cdb8;
        }
    }
    ctx->pc = 0x12CD80u;
label_12cd80:
    // 0x12cd80: 0x8e230000
    ctx->pc = 0x12cd80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12cd84:
    // 0x12cd84: 0x220202d
    ctx->pc = 0x12cd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12cd88:
    // 0x12cd88: 0x24050001
    ctx->pc = 0x12cd88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_12cd8c:
    // 0x12cd8c: 0x8c62001c
    ctx->pc = 0x12cd8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_12cd90:
    // 0x12cd90: 0x40f809
label_12cd94:
    if (ctx->pc == 0x12CD94u) {
        ctx->pc = 0x12CD94u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12CD98u;
        goto label_12cd98;
    }
    ctx->pc = 0x12CD90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12CD98u);
        ctx->pc = 0x12CD94u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12CCE0u: goto label_12cce0;
            case 0x12CCE4u: goto label_12cce4;
            case 0x12CCE8u: goto label_12cce8;
            case 0x12CCECu: goto label_12ccec;
            case 0x12CCF0u: goto label_12ccf0;
            case 0x12CCF4u: goto label_12ccf4;
            case 0x12CCF8u: goto label_12ccf8;
            case 0x12CCFCu: goto label_12ccfc;
            case 0x12CD00u: goto label_12cd00;
            case 0x12CD04u: goto label_12cd04;
            case 0x12CD08u: goto label_12cd08;
            case 0x12CD0Cu: goto label_12cd0c;
            case 0x12CD10u: goto label_12cd10;
            case 0x12CD14u: goto label_12cd14;
            case 0x12CD18u: goto label_12cd18;
            case 0x12CD1Cu: goto label_12cd1c;
            case 0x12CD20u: goto label_12cd20;
            case 0x12CD24u: goto label_12cd24;
            case 0x12CD28u: goto label_12cd28;
            case 0x12CD2Cu: goto label_12cd2c;
            case 0x12CD30u: goto label_12cd30;
            case 0x12CD34u: goto label_12cd34;
            case 0x12CD38u: goto label_12cd38;
            case 0x12CD3Cu: goto label_12cd3c;
            case 0x12CD40u: goto label_12cd40;
            case 0x12CD44u: goto label_12cd44;
            case 0x12CD48u: goto label_12cd48;
            case 0x12CD4Cu: goto label_12cd4c;
            case 0x12CD50u: goto label_12cd50;
            case 0x12CD54u: goto label_12cd54;
            case 0x12CD58u: goto label_12cd58;
            case 0x12CD5Cu: goto label_12cd5c;
            case 0x12CD60u: goto label_12cd60;
            case 0x12CD64u: goto label_12cd64;
            case 0x12CD68u: goto label_12cd68;
            case 0x12CD6Cu: goto label_12cd6c;
            case 0x12CD70u: goto label_12cd70;
            case 0x12CD74u: goto label_12cd74;
            case 0x12CD78u: goto label_12cd78;
            case 0x12CD7Cu: goto label_12cd7c;
            case 0x12CD80u: goto label_12cd80;
            case 0x12CD84u: goto label_12cd84;
            case 0x12CD88u: goto label_12cd88;
            case 0x12CD8Cu: goto label_12cd8c;
            case 0x12CD90u: goto label_12cd90;
            case 0x12CD94u: goto label_12cd94;
            case 0x12CD98u: goto label_12cd98;
            case 0x12CD9Cu: goto label_12cd9c;
            case 0x12CDA0u: goto label_12cda0;
            case 0x12CDA4u: goto label_12cda4;
            case 0x12CDA8u: goto label_12cda8;
            case 0x12CDACu: goto label_12cdac;
            case 0x12CDB0u: goto label_12cdb0;
            case 0x12CDB4u: goto label_12cdb4;
            case 0x12CDB8u: goto label_12cdb8;
            case 0x12CDBCu: goto label_12cdbc;
            case 0x12CDC0u: goto label_12cdc0;
            case 0x12CDC4u: goto label_12cdc4;
            case 0x12CDC8u: goto label_12cdc8;
            case 0x12CDCCu: goto label_12cdcc;
            case 0x12CDD0u: goto label_12cdd0;
            case 0x12CDD4u: goto label_12cdd4;
            case 0x12CDD8u: goto label_12cdd8;
            case 0x12CDDCu: goto label_12cddc;
            case 0x12CDE0u: goto label_12cde0;
            case 0x12CDE4u: goto label_12cde4;
            case 0x12CDE8u: goto label_12cde8;
            case 0x12CDECu: goto label_12cdec;
            case 0x12CDF0u: goto label_12cdf0;
            case 0x12CDF4u: goto label_12cdf4;
            case 0x12CDF8u: goto label_12cdf8;
            case 0x12CDFCu: goto label_12cdfc;
            case 0x12CE00u: goto label_12ce00;
            case 0x12CE04u: goto label_12ce04;
            case 0x12CE08u: goto label_12ce08;
            case 0x12CE0Cu: goto label_12ce0c;
            case 0x12CE10u: goto label_12ce10;
            case 0x12CE14u: goto label_12ce14;
            case 0x12CE18u: goto label_12ce18;
            case 0x12CE1Cu: goto label_12ce1c;
            case 0x12CE20u: goto label_12ce20;
            case 0x12CE24u: goto label_12ce24;
            case 0x12CE28u: goto label_12ce28;
            case 0x12CE2Cu: goto label_12ce2c;
            case 0x12CE30u: goto label_12ce30;
            case 0x12CE34u: goto label_12ce34;
            case 0x12CE38u: goto label_12ce38;
            case 0x12CE3Cu: goto label_12ce3c;
            case 0x12CE40u: goto label_12ce40;
            case 0x12CE44u: goto label_12ce44;
            case 0x12CE48u: goto label_12ce48;
            case 0x12CE4Cu: goto label_12ce4c;
            case 0x12CE50u: goto label_12ce50;
            case 0x12CE54u: goto label_12ce54;
            case 0x12CE58u: goto label_12ce58;
            case 0x12CE5Cu: goto label_12ce5c;
            case 0x12CE60u: goto label_12ce60;
            case 0x12CE64u: goto label_12ce64;
            case 0x12CE68u: goto label_12ce68;
            case 0x12CE6Cu: goto label_12ce6c;
            case 0x12CE70u: goto label_12ce70;
            case 0x12CE74u: goto label_12ce74;
            case 0x12CE78u: goto label_12ce78;
            case 0x12CE7Cu: goto label_12ce7c;
            case 0x12CE80u: goto label_12ce80;
            case 0x12CE84u: goto label_12ce84;
            case 0x12CE88u: goto label_12ce88;
            case 0x12CE8Cu: goto label_12ce8c;
            case 0x12CE90u: goto label_12ce90;
            case 0x12CE94u: goto label_12ce94;
            case 0x12CE98u: goto label_12ce98;
            case 0x12CE9Cu: goto label_12ce9c;
            case 0x12CEA0u: goto label_12cea0;
            case 0x12CEA4u: goto label_12cea4;
            case 0x12CEA8u: goto label_12cea8;
            case 0x12CEACu: goto label_12ceac;
            case 0x12CEB0u: goto label_12ceb0;
            case 0x12CEB4u: goto label_12ceb4;
            case 0x12CEB8u: goto label_12ceb8;
            case 0x12CEBCu: goto label_12cebc;
            case 0x12CEC0u: goto label_12cec0;
            case 0x12CEC4u: goto label_12cec4;
            case 0x12CEC8u: goto label_12cec8;
            case 0x12CECCu: goto label_12cecc;
            case 0x12CED0u: goto label_12ced0;
            case 0x12CED4u: goto label_12ced4;
            case 0x12CED8u: goto label_12ced8;
            case 0x12CEDCu: goto label_12cedc;
            case 0x12CEE0u: goto label_12cee0;
            case 0x12CEE4u: goto label_12cee4;
            case 0x12CEE8u: goto label_12cee8;
            case 0x12CEECu: goto label_12ceec;
            case 0x12CEF0u: goto label_12cef0;
            case 0x12CEF4u: goto label_12cef4;
            case 0x12CEF8u: goto label_12cef8;
            case 0x12CEFCu: goto label_12cefc;
            case 0x12CF00u: goto label_12cf00;
            case 0x12CF04u: goto label_12cf04;
            case 0x12CF08u: goto label_12cf08;
            case 0x12CF0Cu: goto label_12cf0c;
            case 0x12CF10u: goto label_12cf10;
            case 0x12CF14u: goto label_12cf14;
            case 0x12CF18u: goto label_12cf18;
            case 0x12CF1Cu: goto label_12cf1c;
            case 0x12CF20u: goto label_12cf20;
            case 0x12CF24u: goto label_12cf24;
            case 0x12CF28u: goto label_12cf28;
            case 0x12CF2Cu: goto label_12cf2c;
            case 0x12CF30u: goto label_12cf30;
            case 0x12CF34u: goto label_12cf34;
            case 0x12CF38u: goto label_12cf38;
            case 0x12CF3Cu: goto label_12cf3c;
            case 0x12CF40u: goto label_12cf40;
            case 0x12CF44u: goto label_12cf44;
            case 0x12CF48u: goto label_12cf48;
            case 0x12CF4Cu: goto label_12cf4c;
            case 0x12CF50u: goto label_12cf50;
            case 0x12CF54u: goto label_12cf54;
            case 0x12CF58u: goto label_12cf58;
            case 0x12CF5Cu: goto label_12cf5c;
            case 0x12CF60u: goto label_12cf60;
            case 0x12CF64u: goto label_12cf64;
            case 0x12CF68u: goto label_12cf68;
            case 0x12CF6Cu: goto label_12cf6c;
            case 0x12CF70u: goto label_12cf70;
            case 0x12CF74u: goto label_12cf74;
            case 0x12CF78u: goto label_12cf78;
            case 0x12CF7Cu: goto label_12cf7c;
            case 0x12CF80u: goto label_12cf80;
            case 0x12CF84u: goto label_12cf84;
            case 0x12CF88u: goto label_12cf88;
            case 0x12CF8Cu: goto label_12cf8c;
            case 0x12CF90u: goto label_12cf90;
            case 0x12CF94u: goto label_12cf94;
            case 0x12CF98u: goto label_12cf98;
            case 0x12CF9Cu: goto label_12cf9c;
            case 0x12CFA0u: goto label_12cfa0;
            case 0x12CFA4u: goto label_12cfa4;
            case 0x12CFA8u: goto label_12cfa8;
            case 0x12CFACu: goto label_12cfac;
            case 0x12CFB0u: goto label_12cfb0;
            case 0x12CFB4u: goto label_12cfb4;
            case 0x12CFB8u: goto label_12cfb8;
            case 0x12CFBCu: goto label_12cfbc;
            case 0x12CFC0u: goto label_12cfc0;
            case 0x12CFC4u: goto label_12cfc4;
            case 0x12CFC8u: goto label_12cfc8;
            case 0x12CFCCu: goto label_12cfcc;
            case 0x12CFD0u: goto label_12cfd0;
            case 0x12CFD4u: goto label_12cfd4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12CD98u; }
            if (ctx->pc != 0x12CD98u) { return; }
        }
    }
    ctx->pc = 0x12CD98u;
label_12cd98:
    // 0x12cd98: 0x3c040024
    ctx->pc = 0x12cd98u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_12cd9c:
    // 0x12cd9c: 0x3c050024
    ctx->pc = 0x12cd9cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
label_12cda0:
    // 0x12cda0: 0x2484ad50
    ctx->pc = 0x12cda0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946128));
label_12cda4:
    // 0x12cda4: 0xc04a04a
label_12cda8:
    if (ctx->pc == 0x12CDA8u) {
        ctx->pc = 0x12CDA8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294946160));
        ctx->pc = 0x12CDACu;
        goto label_12cdac;
    }
    ctx->pc = 0x12CDA4u;
    SET_GPR_U32(ctx, 31, 0x12CDACu);
    ctx->pc = 0x12CDA8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294946160));
    ctx->pc = 0x128128u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00128128_0x128128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CDACu; }
    }
    if (ctx->pc != 0x12CDACu) { return; }
    ctx->pc = 0x12CDACu;
label_12cdac:
    // 0x12cdac: 0x1000003a
label_12cdb0:
    if (ctx->pc == 0x12CDB0u) {
        ctx->pc = 0x12CDB0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x12CDB4u;
        goto label_12cdb4;
    }
    ctx->pc = 0x12CDACu;
    {
        const bool branch_taken_0x12cdac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CDB0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x12cdac) {
            ctx->pc = 0x12CE98u;
            goto label_12ce98;
        }
    }
    ctx->pc = 0x12CDB4u;
label_12cdb4:
    // 0x12cdb4: 0x0
    ctx->pc = 0x12cdb4u;
    // NOP
label_12cdb8:
    // 0x12cdb8: 0xc04939a
label_12cdbc:
    if (ctx->pc == 0x12CDBCu) {
        ctx->pc = 0x12CDBCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12CDC0u;
        goto label_12cdc0;
    }
    ctx->pc = 0x12CDB8u;
    SET_GPR_U32(ctx, 31, 0x12CDC0u);
    ctx->pc = 0x12CDBCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x124E68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00124E68_0x124e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CDC0u; }
    }
    if (ctx->pc != 0x12CDC0u) { return; }
    ctx->pc = 0x12CDC0u;
label_12cdc0:
    // 0x12cdc0: 0x24030004
    ctx->pc = 0x12cdc0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
label_12cdc4:
    // 0x12cdc4: 0x14430002
label_12cdc8:
    if (ctx->pc == 0x12CDC8u) {
        ctx->pc = 0x12CDC8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x12CDCCu;
        goto label_12cdcc;
    }
    ctx->pc = 0x12CDC4u;
    {
        const bool branch_taken_0x12cdc4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x12CDC8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x12cdc4) {
            ctx->pc = 0x12CDD0u;
            goto label_12cdd0;
        }
    }
    ctx->pc = 0x12CDCCu;
label_12cdcc:
    // 0x12cdcc: 0xa2620003
    ctx->pc = 0x12cdccu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 2));
label_12cdd0:
    // 0x12cdd0: 0xc04939a
label_12cdd4:
    if (ctx->pc == 0x12CDD4u) {
        ctx->pc = 0x12CDD4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12CDD8u;
        goto label_12cdd8;
    }
    ctx->pc = 0x12CDD0u;
    SET_GPR_U32(ctx, 31, 0x12CDD8u);
    ctx->pc = 0x12CDD4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x124E68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00124E68_0x124e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CDD8u; }
    }
    if (ctx->pc != 0x12CDD8u) { return; }
    ctx->pc = 0x12CDD8u;
label_12cdd8:
    // 0x12cdd8: 0x24030002
    ctx->pc = 0x12cdd8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_12cddc:
    // 0x12cddc: 0x14430007
label_12cde0:
    if (ctx->pc == 0x12CDE0u) {
        ctx->pc = 0x12CDE0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x12CDE4u;
        goto label_12cde4;
    }
    ctx->pc = 0x12CDDCu;
    {
        const bool branch_taken_0x12cddc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x12CDE0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 64));
        if (branch_taken_0x12cddc) {
            ctx->pc = 0x12CDFCu;
            goto label_12cdfc;
        }
    }
    ctx->pc = 0x12CDE4u;
label_12cde4:
    // 0x12cde4: 0x8fa60004
    ctx->pc = 0x12cde4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_12cde8:
    // 0x12cde8: 0x8fa50000
    ctx->pc = 0x12cde8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12cdec:
    // 0x12cdec: 0x26640058
    ctx->pc = 0x12cdecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 88));
label_12cdf0:
    // 0x12cdf0: 0x28c20041
    ctx->pc = 0x12cdf0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 65));
label_12cdf4:
    // 0x12cdf4: 0xc041eac
label_12cdf8:
    if (ctx->pc == 0x12CDF8u) {
        ctx->pc = 0x12CDF8u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 3));
        ctx->pc = 0x12CDFCu;
        goto label_12cdfc;
    }
    ctx->pc = 0x12CDF4u;
    SET_GPR_U32(ctx, 31, 0x12CDFCu);
    ctx->pc = 0x12CDF8u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 3));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CDFCu; }
    }
    if (ctx->pc != 0x12CDFCu) { return; }
    ctx->pc = 0x12CDFCu;
label_12cdfc:
    // 0x12cdfc: 0xc04939a
label_12ce00:
    if (ctx->pc == 0x12CE00u) {
        ctx->pc = 0x12CE00u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12CE04u;
        goto label_12ce04;
    }
    ctx->pc = 0x12CDFCu;
    SET_GPR_U32(ctx, 31, 0x12CE04u);
    ctx->pc = 0x12CE00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x124E68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00124E68_0x124e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CE04u; }
    }
    if (ctx->pc != 0x12CE04u) { return; }
    ctx->pc = 0x12CE04u;
label_12ce04:
    // 0x12ce04: 0x40182d
    ctx->pc = 0x12ce04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12ce08:
    // 0x12ce08: 0x2462fff6
    ctx->pc = 0x12ce08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967286));
label_12ce0c:
    // 0x12ce0c: 0x2c420002
    ctx->pc = 0x12ce0cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
label_12ce10:
    // 0x12ce10: 0x54400007
label_12ce14:
    if (ctx->pc == 0x12CE14u) {
        ctx->pc = 0x12CE14u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x12CE18u;
        goto label_12ce18;
    }
    ctx->pc = 0x12CE10u;
    {
        const bool branch_taken_0x12ce10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x12ce10) {
            ctx->pc = 0x12CE14u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x12CE30u;
            goto label_12ce30;
        }
    }
    ctx->pc = 0x12CE18u;
label_12ce18:
    // 0x12ce18: 0x24020014
    ctx->pc = 0x12ce18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
label_12ce1c:
    // 0x12ce1c: 0x10620003
label_12ce20:
    if (ctx->pc == 0x12CE20u) {
        ctx->pc = 0x12CE20u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x12CE24u;
        goto label_12ce24;
    }
    ctx->pc = 0x12CE1Cu;
    {
        const bool branch_taken_0x12ce1c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x12CE20u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
        if (branch_taken_0x12ce1c) {
            ctx->pc = 0x12CE2Cu;
            goto label_12ce2c;
        }
    }
    ctx->pc = 0x12CE24u;
label_12ce24:
    // 0x12ce24: 0x5462000a
label_12ce28:
    if (ctx->pc == 0x12CE28u) {
        ctx->pc = 0x12CE28u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12CE2Cu;
        goto label_12ce2c;
    }
    ctx->pc = 0x12CE24u;
    {
        const bool branch_taken_0x12ce24 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x12ce24) {
            ctx->pc = 0x12CE28u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 16));
            ctx->pc = 0x12CE50u;
            goto label_12ce50;
        }
    }
    ctx->pc = 0x12CE2Cu;
label_12ce2c:
    // 0x12ce2c: 0x8e230000
    ctx->pc = 0x12ce2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12ce30:
    // 0x12ce30: 0x220202d
    ctx->pc = 0x12ce30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12ce34:
    // 0x12ce34: 0x24050001
    ctx->pc = 0x12ce34u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_12ce38:
    // 0x12ce38: 0x8c62001c
    ctx->pc = 0x12ce38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_12ce3c:
    // 0x12ce3c: 0x40f809
label_12ce40:
    if (ctx->pc == 0x12CE40u) {
        ctx->pc = 0x12CE40u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12CE44u;
        goto label_12ce44;
    }
    ctx->pc = 0x12CE3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12CE44u);
        ctx->pc = 0x12CE40u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12CCE0u: goto label_12cce0;
            case 0x12CCE4u: goto label_12cce4;
            case 0x12CCE8u: goto label_12cce8;
            case 0x12CCECu: goto label_12ccec;
            case 0x12CCF0u: goto label_12ccf0;
            case 0x12CCF4u: goto label_12ccf4;
            case 0x12CCF8u: goto label_12ccf8;
            case 0x12CCFCu: goto label_12ccfc;
            case 0x12CD00u: goto label_12cd00;
            case 0x12CD04u: goto label_12cd04;
            case 0x12CD08u: goto label_12cd08;
            case 0x12CD0Cu: goto label_12cd0c;
            case 0x12CD10u: goto label_12cd10;
            case 0x12CD14u: goto label_12cd14;
            case 0x12CD18u: goto label_12cd18;
            case 0x12CD1Cu: goto label_12cd1c;
            case 0x12CD20u: goto label_12cd20;
            case 0x12CD24u: goto label_12cd24;
            case 0x12CD28u: goto label_12cd28;
            case 0x12CD2Cu: goto label_12cd2c;
            case 0x12CD30u: goto label_12cd30;
            case 0x12CD34u: goto label_12cd34;
            case 0x12CD38u: goto label_12cd38;
            case 0x12CD3Cu: goto label_12cd3c;
            case 0x12CD40u: goto label_12cd40;
            case 0x12CD44u: goto label_12cd44;
            case 0x12CD48u: goto label_12cd48;
            case 0x12CD4Cu: goto label_12cd4c;
            case 0x12CD50u: goto label_12cd50;
            case 0x12CD54u: goto label_12cd54;
            case 0x12CD58u: goto label_12cd58;
            case 0x12CD5Cu: goto label_12cd5c;
            case 0x12CD60u: goto label_12cd60;
            case 0x12CD64u: goto label_12cd64;
            case 0x12CD68u: goto label_12cd68;
            case 0x12CD6Cu: goto label_12cd6c;
            case 0x12CD70u: goto label_12cd70;
            case 0x12CD74u: goto label_12cd74;
            case 0x12CD78u: goto label_12cd78;
            case 0x12CD7Cu: goto label_12cd7c;
            case 0x12CD80u: goto label_12cd80;
            case 0x12CD84u: goto label_12cd84;
            case 0x12CD88u: goto label_12cd88;
            case 0x12CD8Cu: goto label_12cd8c;
            case 0x12CD90u: goto label_12cd90;
            case 0x12CD94u: goto label_12cd94;
            case 0x12CD98u: goto label_12cd98;
            case 0x12CD9Cu: goto label_12cd9c;
            case 0x12CDA0u: goto label_12cda0;
            case 0x12CDA4u: goto label_12cda4;
            case 0x12CDA8u: goto label_12cda8;
            case 0x12CDACu: goto label_12cdac;
            case 0x12CDB0u: goto label_12cdb0;
            case 0x12CDB4u: goto label_12cdb4;
            case 0x12CDB8u: goto label_12cdb8;
            case 0x12CDBCu: goto label_12cdbc;
            case 0x12CDC0u: goto label_12cdc0;
            case 0x12CDC4u: goto label_12cdc4;
            case 0x12CDC8u: goto label_12cdc8;
            case 0x12CDCCu: goto label_12cdcc;
            case 0x12CDD0u: goto label_12cdd0;
            case 0x12CDD4u: goto label_12cdd4;
            case 0x12CDD8u: goto label_12cdd8;
            case 0x12CDDCu: goto label_12cddc;
            case 0x12CDE0u: goto label_12cde0;
            case 0x12CDE4u: goto label_12cde4;
            case 0x12CDE8u: goto label_12cde8;
            case 0x12CDECu: goto label_12cdec;
            case 0x12CDF0u: goto label_12cdf0;
            case 0x12CDF4u: goto label_12cdf4;
            case 0x12CDF8u: goto label_12cdf8;
            case 0x12CDFCu: goto label_12cdfc;
            case 0x12CE00u: goto label_12ce00;
            case 0x12CE04u: goto label_12ce04;
            case 0x12CE08u: goto label_12ce08;
            case 0x12CE0Cu: goto label_12ce0c;
            case 0x12CE10u: goto label_12ce10;
            case 0x12CE14u: goto label_12ce14;
            case 0x12CE18u: goto label_12ce18;
            case 0x12CE1Cu: goto label_12ce1c;
            case 0x12CE20u: goto label_12ce20;
            case 0x12CE24u: goto label_12ce24;
            case 0x12CE28u: goto label_12ce28;
            case 0x12CE2Cu: goto label_12ce2c;
            case 0x12CE30u: goto label_12ce30;
            case 0x12CE34u: goto label_12ce34;
            case 0x12CE38u: goto label_12ce38;
            case 0x12CE3Cu: goto label_12ce3c;
            case 0x12CE40u: goto label_12ce40;
            case 0x12CE44u: goto label_12ce44;
            case 0x12CE48u: goto label_12ce48;
            case 0x12CE4Cu: goto label_12ce4c;
            case 0x12CE50u: goto label_12ce50;
            case 0x12CE54u: goto label_12ce54;
            case 0x12CE58u: goto label_12ce58;
            case 0x12CE5Cu: goto label_12ce5c;
            case 0x12CE60u: goto label_12ce60;
            case 0x12CE64u: goto label_12ce64;
            case 0x12CE68u: goto label_12ce68;
            case 0x12CE6Cu: goto label_12ce6c;
            case 0x12CE70u: goto label_12ce70;
            case 0x12CE74u: goto label_12ce74;
            case 0x12CE78u: goto label_12ce78;
            case 0x12CE7Cu: goto label_12ce7c;
            case 0x12CE80u: goto label_12ce80;
            case 0x12CE84u: goto label_12ce84;
            case 0x12CE88u: goto label_12ce88;
            case 0x12CE8Cu: goto label_12ce8c;
            case 0x12CE90u: goto label_12ce90;
            case 0x12CE94u: goto label_12ce94;
            case 0x12CE98u: goto label_12ce98;
            case 0x12CE9Cu: goto label_12ce9c;
            case 0x12CEA0u: goto label_12cea0;
            case 0x12CEA4u: goto label_12cea4;
            case 0x12CEA8u: goto label_12cea8;
            case 0x12CEACu: goto label_12ceac;
            case 0x12CEB0u: goto label_12ceb0;
            case 0x12CEB4u: goto label_12ceb4;
            case 0x12CEB8u: goto label_12ceb8;
            case 0x12CEBCu: goto label_12cebc;
            case 0x12CEC0u: goto label_12cec0;
            case 0x12CEC4u: goto label_12cec4;
            case 0x12CEC8u: goto label_12cec8;
            case 0x12CECCu: goto label_12cecc;
            case 0x12CED0u: goto label_12ced0;
            case 0x12CED4u: goto label_12ced4;
            case 0x12CED8u: goto label_12ced8;
            case 0x12CEDCu: goto label_12cedc;
            case 0x12CEE0u: goto label_12cee0;
            case 0x12CEE4u: goto label_12cee4;
            case 0x12CEE8u: goto label_12cee8;
            case 0x12CEECu: goto label_12ceec;
            case 0x12CEF0u: goto label_12cef0;
            case 0x12CEF4u: goto label_12cef4;
            case 0x12CEF8u: goto label_12cef8;
            case 0x12CEFCu: goto label_12cefc;
            case 0x12CF00u: goto label_12cf00;
            case 0x12CF04u: goto label_12cf04;
            case 0x12CF08u: goto label_12cf08;
            case 0x12CF0Cu: goto label_12cf0c;
            case 0x12CF10u: goto label_12cf10;
            case 0x12CF14u: goto label_12cf14;
            case 0x12CF18u: goto label_12cf18;
            case 0x12CF1Cu: goto label_12cf1c;
            case 0x12CF20u: goto label_12cf20;
            case 0x12CF24u: goto label_12cf24;
            case 0x12CF28u: goto label_12cf28;
            case 0x12CF2Cu: goto label_12cf2c;
            case 0x12CF30u: goto label_12cf30;
            case 0x12CF34u: goto label_12cf34;
            case 0x12CF38u: goto label_12cf38;
            case 0x12CF3Cu: goto label_12cf3c;
            case 0x12CF40u: goto label_12cf40;
            case 0x12CF44u: goto label_12cf44;
            case 0x12CF48u: goto label_12cf48;
            case 0x12CF4Cu: goto label_12cf4c;
            case 0x12CF50u: goto label_12cf50;
            case 0x12CF54u: goto label_12cf54;
            case 0x12CF58u: goto label_12cf58;
            case 0x12CF5Cu: goto label_12cf5c;
            case 0x12CF60u: goto label_12cf60;
            case 0x12CF64u: goto label_12cf64;
            case 0x12CF68u: goto label_12cf68;
            case 0x12CF6Cu: goto label_12cf6c;
            case 0x12CF70u: goto label_12cf70;
            case 0x12CF74u: goto label_12cf74;
            case 0x12CF78u: goto label_12cf78;
            case 0x12CF7Cu: goto label_12cf7c;
            case 0x12CF80u: goto label_12cf80;
            case 0x12CF84u: goto label_12cf84;
            case 0x12CF88u: goto label_12cf88;
            case 0x12CF8Cu: goto label_12cf8c;
            case 0x12CF90u: goto label_12cf90;
            case 0x12CF94u: goto label_12cf94;
            case 0x12CF98u: goto label_12cf98;
            case 0x12CF9Cu: goto label_12cf9c;
            case 0x12CFA0u: goto label_12cfa0;
            case 0x12CFA4u: goto label_12cfa4;
            case 0x12CFA8u: goto label_12cfa8;
            case 0x12CFACu: goto label_12cfac;
            case 0x12CFB0u: goto label_12cfb0;
            case 0x12CFB4u: goto label_12cfb4;
            case 0x12CFB8u: goto label_12cfb8;
            case 0x12CFBCu: goto label_12cfbc;
            case 0x12CFC0u: goto label_12cfc0;
            case 0x12CFC4u: goto label_12cfc4;
            case 0x12CFC8u: goto label_12cfc8;
            case 0x12CFCCu: goto label_12cfcc;
            case 0x12CFD0u: goto label_12cfd0;
            case 0x12CFD4u: goto label_12cfd4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12CE44u; }
            if (ctx->pc != 0x12CE44u) { return; }
        }
    }
    ctx->pc = 0x12CE44u;
label_12ce44:
    // 0x12ce44: 0x10000014
label_12ce48:
    if (ctx->pc == 0x12CE48u) {
        ctx->pc = 0x12CE48u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x12CE4Cu;
        goto label_12ce4c;
    }
    ctx->pc = 0x12CE44u;
    {
        const bool branch_taken_0x12ce44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CE48u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x12ce44) {
            ctx->pc = 0x12CE98u;
            goto label_12ce98;
        }
    }
    ctx->pc = 0x12CE4Cu;
label_12ce4c:
    // 0x12ce4c: 0x0
    ctx->pc = 0x12ce4cu;
    // NOP
label_12ce50:
    // 0x12ce50: 0x3a0202d
    ctx->pc = 0x12ce50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12ce54:
    // 0x12ce54: 0x3a0302d
    ctx->pc = 0x12ce54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12ce58:
    // 0x12ce58: 0x240282d
    ctx->pc = 0x12ce58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12ce5c:
    // 0x12ce5c: 0xc0501f8
label_12ce60:
    if (ctx->pc == 0x12CE60u) {
        ctx->pc = 0x12CE60u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12CE64u;
        goto label_12ce64;
    }
    ctx->pc = 0x12CE5Cu;
    SET_GPR_U32(ctx, 31, 0x12CE64u);
    ctx->pc = 0x12CE60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1407E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001407E0_0x1407e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CE64u; }
    }
    if (ctx->pc != 0x12CE64u) { return; }
    ctx->pc = 0x12CE64u;
label_12ce64:
    // 0x12ce64: 0x8e230000
    ctx->pc = 0x12ce64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12ce68:
    // 0x12ce68: 0x220202d
    ctx->pc = 0x12ce68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12ce6c:
    // 0x12ce6c: 0x282d
    ctx->pc = 0x12ce6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12ce70:
    // 0x12ce70: 0x8c620020
    ctx->pc = 0x12ce70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_12ce74:
    // 0x12ce74: 0x40f809
label_12ce78:
    if (ctx->pc == 0x12CE78u) {
        ctx->pc = 0x12CE78u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12CE7Cu;
        goto label_12ce7c;
    }
    ctx->pc = 0x12CE74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12CE7Cu);
        ctx->pc = 0x12CE78u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12CCE0u: goto label_12cce0;
            case 0x12CCE4u: goto label_12cce4;
            case 0x12CCE8u: goto label_12cce8;
            case 0x12CCECu: goto label_12ccec;
            case 0x12CCF0u: goto label_12ccf0;
            case 0x12CCF4u: goto label_12ccf4;
            case 0x12CCF8u: goto label_12ccf8;
            case 0x12CCFCu: goto label_12ccfc;
            case 0x12CD00u: goto label_12cd00;
            case 0x12CD04u: goto label_12cd04;
            case 0x12CD08u: goto label_12cd08;
            case 0x12CD0Cu: goto label_12cd0c;
            case 0x12CD10u: goto label_12cd10;
            case 0x12CD14u: goto label_12cd14;
            case 0x12CD18u: goto label_12cd18;
            case 0x12CD1Cu: goto label_12cd1c;
            case 0x12CD20u: goto label_12cd20;
            case 0x12CD24u: goto label_12cd24;
            case 0x12CD28u: goto label_12cd28;
            case 0x12CD2Cu: goto label_12cd2c;
            case 0x12CD30u: goto label_12cd30;
            case 0x12CD34u: goto label_12cd34;
            case 0x12CD38u: goto label_12cd38;
            case 0x12CD3Cu: goto label_12cd3c;
            case 0x12CD40u: goto label_12cd40;
            case 0x12CD44u: goto label_12cd44;
            case 0x12CD48u: goto label_12cd48;
            case 0x12CD4Cu: goto label_12cd4c;
            case 0x12CD50u: goto label_12cd50;
            case 0x12CD54u: goto label_12cd54;
            case 0x12CD58u: goto label_12cd58;
            case 0x12CD5Cu: goto label_12cd5c;
            case 0x12CD60u: goto label_12cd60;
            case 0x12CD64u: goto label_12cd64;
            case 0x12CD68u: goto label_12cd68;
            case 0x12CD6Cu: goto label_12cd6c;
            case 0x12CD70u: goto label_12cd70;
            case 0x12CD74u: goto label_12cd74;
            case 0x12CD78u: goto label_12cd78;
            case 0x12CD7Cu: goto label_12cd7c;
            case 0x12CD80u: goto label_12cd80;
            case 0x12CD84u: goto label_12cd84;
            case 0x12CD88u: goto label_12cd88;
            case 0x12CD8Cu: goto label_12cd8c;
            case 0x12CD90u: goto label_12cd90;
            case 0x12CD94u: goto label_12cd94;
            case 0x12CD98u: goto label_12cd98;
            case 0x12CD9Cu: goto label_12cd9c;
            case 0x12CDA0u: goto label_12cda0;
            case 0x12CDA4u: goto label_12cda4;
            case 0x12CDA8u: goto label_12cda8;
            case 0x12CDACu: goto label_12cdac;
            case 0x12CDB0u: goto label_12cdb0;
            case 0x12CDB4u: goto label_12cdb4;
            case 0x12CDB8u: goto label_12cdb8;
            case 0x12CDBCu: goto label_12cdbc;
            case 0x12CDC0u: goto label_12cdc0;
            case 0x12CDC4u: goto label_12cdc4;
            case 0x12CDC8u: goto label_12cdc8;
            case 0x12CDCCu: goto label_12cdcc;
            case 0x12CDD0u: goto label_12cdd0;
            case 0x12CDD4u: goto label_12cdd4;
            case 0x12CDD8u: goto label_12cdd8;
            case 0x12CDDCu: goto label_12cddc;
            case 0x12CDE0u: goto label_12cde0;
            case 0x12CDE4u: goto label_12cde4;
            case 0x12CDE8u: goto label_12cde8;
            case 0x12CDECu: goto label_12cdec;
            case 0x12CDF0u: goto label_12cdf0;
            case 0x12CDF4u: goto label_12cdf4;
            case 0x12CDF8u: goto label_12cdf8;
            case 0x12CDFCu: goto label_12cdfc;
            case 0x12CE00u: goto label_12ce00;
            case 0x12CE04u: goto label_12ce04;
            case 0x12CE08u: goto label_12ce08;
            case 0x12CE0Cu: goto label_12ce0c;
            case 0x12CE10u: goto label_12ce10;
            case 0x12CE14u: goto label_12ce14;
            case 0x12CE18u: goto label_12ce18;
            case 0x12CE1Cu: goto label_12ce1c;
            case 0x12CE20u: goto label_12ce20;
            case 0x12CE24u: goto label_12ce24;
            case 0x12CE28u: goto label_12ce28;
            case 0x12CE2Cu: goto label_12ce2c;
            case 0x12CE30u: goto label_12ce30;
            case 0x12CE34u: goto label_12ce34;
            case 0x12CE38u: goto label_12ce38;
            case 0x12CE3Cu: goto label_12ce3c;
            case 0x12CE40u: goto label_12ce40;
            case 0x12CE44u: goto label_12ce44;
            case 0x12CE48u: goto label_12ce48;
            case 0x12CE4Cu: goto label_12ce4c;
            case 0x12CE50u: goto label_12ce50;
            case 0x12CE54u: goto label_12ce54;
            case 0x12CE58u: goto label_12ce58;
            case 0x12CE5Cu: goto label_12ce5c;
            case 0x12CE60u: goto label_12ce60;
            case 0x12CE64u: goto label_12ce64;
            case 0x12CE68u: goto label_12ce68;
            case 0x12CE6Cu: goto label_12ce6c;
            case 0x12CE70u: goto label_12ce70;
            case 0x12CE74u: goto label_12ce74;
            case 0x12CE78u: goto label_12ce78;
            case 0x12CE7Cu: goto label_12ce7c;
            case 0x12CE80u: goto label_12ce80;
            case 0x12CE84u: goto label_12ce84;
            case 0x12CE88u: goto label_12ce88;
            case 0x12CE8Cu: goto label_12ce8c;
            case 0x12CE90u: goto label_12ce90;
            case 0x12CE94u: goto label_12ce94;
            case 0x12CE98u: goto label_12ce98;
            case 0x12CE9Cu: goto label_12ce9c;
            case 0x12CEA0u: goto label_12cea0;
            case 0x12CEA4u: goto label_12cea4;
            case 0x12CEA8u: goto label_12cea8;
            case 0x12CEACu: goto label_12ceac;
            case 0x12CEB0u: goto label_12ceb0;
            case 0x12CEB4u: goto label_12ceb4;
            case 0x12CEB8u: goto label_12ceb8;
            case 0x12CEBCu: goto label_12cebc;
            case 0x12CEC0u: goto label_12cec0;
            case 0x12CEC4u: goto label_12cec4;
            case 0x12CEC8u: goto label_12cec8;
            case 0x12CECCu: goto label_12cecc;
            case 0x12CED0u: goto label_12ced0;
            case 0x12CED4u: goto label_12ced4;
            case 0x12CED8u: goto label_12ced8;
            case 0x12CEDCu: goto label_12cedc;
            case 0x12CEE0u: goto label_12cee0;
            case 0x12CEE4u: goto label_12cee4;
            case 0x12CEE8u: goto label_12cee8;
            case 0x12CEECu: goto label_12ceec;
            case 0x12CEF0u: goto label_12cef0;
            case 0x12CEF4u: goto label_12cef4;
            case 0x12CEF8u: goto label_12cef8;
            case 0x12CEFCu: goto label_12cefc;
            case 0x12CF00u: goto label_12cf00;
            case 0x12CF04u: goto label_12cf04;
            case 0x12CF08u: goto label_12cf08;
            case 0x12CF0Cu: goto label_12cf0c;
            case 0x12CF10u: goto label_12cf10;
            case 0x12CF14u: goto label_12cf14;
            case 0x12CF18u: goto label_12cf18;
            case 0x12CF1Cu: goto label_12cf1c;
            case 0x12CF20u: goto label_12cf20;
            case 0x12CF24u: goto label_12cf24;
            case 0x12CF28u: goto label_12cf28;
            case 0x12CF2Cu: goto label_12cf2c;
            case 0x12CF30u: goto label_12cf30;
            case 0x12CF34u: goto label_12cf34;
            case 0x12CF38u: goto label_12cf38;
            case 0x12CF3Cu: goto label_12cf3c;
            case 0x12CF40u: goto label_12cf40;
            case 0x12CF44u: goto label_12cf44;
            case 0x12CF48u: goto label_12cf48;
            case 0x12CF4Cu: goto label_12cf4c;
            case 0x12CF50u: goto label_12cf50;
            case 0x12CF54u: goto label_12cf54;
            case 0x12CF58u: goto label_12cf58;
            case 0x12CF5Cu: goto label_12cf5c;
            case 0x12CF60u: goto label_12cf60;
            case 0x12CF64u: goto label_12cf64;
            case 0x12CF68u: goto label_12cf68;
            case 0x12CF6Cu: goto label_12cf6c;
            case 0x12CF70u: goto label_12cf70;
            case 0x12CF74u: goto label_12cf74;
            case 0x12CF78u: goto label_12cf78;
            case 0x12CF7Cu: goto label_12cf7c;
            case 0x12CF80u: goto label_12cf80;
            case 0x12CF84u: goto label_12cf84;
            case 0x12CF88u: goto label_12cf88;
            case 0x12CF8Cu: goto label_12cf8c;
            case 0x12CF90u: goto label_12cf90;
            case 0x12CF94u: goto label_12cf94;
            case 0x12CF98u: goto label_12cf98;
            case 0x12CF9Cu: goto label_12cf9c;
            case 0x12CFA0u: goto label_12cfa0;
            case 0x12CFA4u: goto label_12cfa4;
            case 0x12CFA8u: goto label_12cfa8;
            case 0x12CFACu: goto label_12cfac;
            case 0x12CFB0u: goto label_12cfb0;
            case 0x12CFB4u: goto label_12cfb4;
            case 0x12CFB8u: goto label_12cfb8;
            case 0x12CFBCu: goto label_12cfbc;
            case 0x12CFC0u: goto label_12cfc0;
            case 0x12CFC4u: goto label_12cfc4;
            case 0x12CFC8u: goto label_12cfc8;
            case 0x12CFCCu: goto label_12cfcc;
            case 0x12CFD0u: goto label_12cfd0;
            case 0x12CFD4u: goto label_12cfd4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12CE7Cu; }
            if (ctx->pc != 0x12CE7Cu) { return; }
        }
    }
    ctx->pc = 0x12CE7Cu;
label_12ce7c:
    // 0x12ce7c: 0x8e230000
    ctx->pc = 0x12ce7cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12ce80:
    // 0x12ce80: 0x220202d
    ctx->pc = 0x12ce80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12ce84:
    // 0x12ce84: 0x200302d
    ctx->pc = 0x12ce84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12ce88:
    // 0x12ce88: 0x8c62001c
    ctx->pc = 0x12ce88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_12ce8c:
    // 0x12ce8c: 0x40f809
label_12ce90:
    if (ctx->pc == 0x12CE90u) {
        ctx->pc = 0x12CE90u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x12CE94u;
        goto label_12ce94;
    }
    ctx->pc = 0x12CE8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12CE94u);
        ctx->pc = 0x12CE90u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12CCE0u: goto label_12cce0;
            case 0x12CCE4u: goto label_12cce4;
            case 0x12CCE8u: goto label_12cce8;
            case 0x12CCECu: goto label_12ccec;
            case 0x12CCF0u: goto label_12ccf0;
            case 0x12CCF4u: goto label_12ccf4;
            case 0x12CCF8u: goto label_12ccf8;
            case 0x12CCFCu: goto label_12ccfc;
            case 0x12CD00u: goto label_12cd00;
            case 0x12CD04u: goto label_12cd04;
            case 0x12CD08u: goto label_12cd08;
            case 0x12CD0Cu: goto label_12cd0c;
            case 0x12CD10u: goto label_12cd10;
            case 0x12CD14u: goto label_12cd14;
            case 0x12CD18u: goto label_12cd18;
            case 0x12CD1Cu: goto label_12cd1c;
            case 0x12CD20u: goto label_12cd20;
            case 0x12CD24u: goto label_12cd24;
            case 0x12CD28u: goto label_12cd28;
            case 0x12CD2Cu: goto label_12cd2c;
            case 0x12CD30u: goto label_12cd30;
            case 0x12CD34u: goto label_12cd34;
            case 0x12CD38u: goto label_12cd38;
            case 0x12CD3Cu: goto label_12cd3c;
            case 0x12CD40u: goto label_12cd40;
            case 0x12CD44u: goto label_12cd44;
            case 0x12CD48u: goto label_12cd48;
            case 0x12CD4Cu: goto label_12cd4c;
            case 0x12CD50u: goto label_12cd50;
            case 0x12CD54u: goto label_12cd54;
            case 0x12CD58u: goto label_12cd58;
            case 0x12CD5Cu: goto label_12cd5c;
            case 0x12CD60u: goto label_12cd60;
            case 0x12CD64u: goto label_12cd64;
            case 0x12CD68u: goto label_12cd68;
            case 0x12CD6Cu: goto label_12cd6c;
            case 0x12CD70u: goto label_12cd70;
            case 0x12CD74u: goto label_12cd74;
            case 0x12CD78u: goto label_12cd78;
            case 0x12CD7Cu: goto label_12cd7c;
            case 0x12CD80u: goto label_12cd80;
            case 0x12CD84u: goto label_12cd84;
            case 0x12CD88u: goto label_12cd88;
            case 0x12CD8Cu: goto label_12cd8c;
            case 0x12CD90u: goto label_12cd90;
            case 0x12CD94u: goto label_12cd94;
            case 0x12CD98u: goto label_12cd98;
            case 0x12CD9Cu: goto label_12cd9c;
            case 0x12CDA0u: goto label_12cda0;
            case 0x12CDA4u: goto label_12cda4;
            case 0x12CDA8u: goto label_12cda8;
            case 0x12CDACu: goto label_12cdac;
            case 0x12CDB0u: goto label_12cdb0;
            case 0x12CDB4u: goto label_12cdb4;
            case 0x12CDB8u: goto label_12cdb8;
            case 0x12CDBCu: goto label_12cdbc;
            case 0x12CDC0u: goto label_12cdc0;
            case 0x12CDC4u: goto label_12cdc4;
            case 0x12CDC8u: goto label_12cdc8;
            case 0x12CDCCu: goto label_12cdcc;
            case 0x12CDD0u: goto label_12cdd0;
            case 0x12CDD4u: goto label_12cdd4;
            case 0x12CDD8u: goto label_12cdd8;
            case 0x12CDDCu: goto label_12cddc;
            case 0x12CDE0u: goto label_12cde0;
            case 0x12CDE4u: goto label_12cde4;
            case 0x12CDE8u: goto label_12cde8;
            case 0x12CDECu: goto label_12cdec;
            case 0x12CDF0u: goto label_12cdf0;
            case 0x12CDF4u: goto label_12cdf4;
            case 0x12CDF8u: goto label_12cdf8;
            case 0x12CDFCu: goto label_12cdfc;
            case 0x12CE00u: goto label_12ce00;
            case 0x12CE04u: goto label_12ce04;
            case 0x12CE08u: goto label_12ce08;
            case 0x12CE0Cu: goto label_12ce0c;
            case 0x12CE10u: goto label_12ce10;
            case 0x12CE14u: goto label_12ce14;
            case 0x12CE18u: goto label_12ce18;
            case 0x12CE1Cu: goto label_12ce1c;
            case 0x12CE20u: goto label_12ce20;
            case 0x12CE24u: goto label_12ce24;
            case 0x12CE28u: goto label_12ce28;
            case 0x12CE2Cu: goto label_12ce2c;
            case 0x12CE30u: goto label_12ce30;
            case 0x12CE34u: goto label_12ce34;
            case 0x12CE38u: goto label_12ce38;
            case 0x12CE3Cu: goto label_12ce3c;
            case 0x12CE40u: goto label_12ce40;
            case 0x12CE44u: goto label_12ce44;
            case 0x12CE48u: goto label_12ce48;
            case 0x12CE4Cu: goto label_12ce4c;
            case 0x12CE50u: goto label_12ce50;
            case 0x12CE54u: goto label_12ce54;
            case 0x12CE58u: goto label_12ce58;
            case 0x12CE5Cu: goto label_12ce5c;
            case 0x12CE60u: goto label_12ce60;
            case 0x12CE64u: goto label_12ce64;
            case 0x12CE68u: goto label_12ce68;
            case 0x12CE6Cu: goto label_12ce6c;
            case 0x12CE70u: goto label_12ce70;
            case 0x12CE74u: goto label_12ce74;
            case 0x12CE78u: goto label_12ce78;
            case 0x12CE7Cu: goto label_12ce7c;
            case 0x12CE80u: goto label_12ce80;
            case 0x12CE84u: goto label_12ce84;
            case 0x12CE88u: goto label_12ce88;
            case 0x12CE8Cu: goto label_12ce8c;
            case 0x12CE90u: goto label_12ce90;
            case 0x12CE94u: goto label_12ce94;
            case 0x12CE98u: goto label_12ce98;
            case 0x12CE9Cu: goto label_12ce9c;
            case 0x12CEA0u: goto label_12cea0;
            case 0x12CEA4u: goto label_12cea4;
            case 0x12CEA8u: goto label_12cea8;
            case 0x12CEACu: goto label_12ceac;
            case 0x12CEB0u: goto label_12ceb0;
            case 0x12CEB4u: goto label_12ceb4;
            case 0x12CEB8u: goto label_12ceb8;
            case 0x12CEBCu: goto label_12cebc;
            case 0x12CEC0u: goto label_12cec0;
            case 0x12CEC4u: goto label_12cec4;
            case 0x12CEC8u: goto label_12cec8;
            case 0x12CECCu: goto label_12cecc;
            case 0x12CED0u: goto label_12ced0;
            case 0x12CED4u: goto label_12ced4;
            case 0x12CED8u: goto label_12ced8;
            case 0x12CEDCu: goto label_12cedc;
            case 0x12CEE0u: goto label_12cee0;
            case 0x12CEE4u: goto label_12cee4;
            case 0x12CEE8u: goto label_12cee8;
            case 0x12CEECu: goto label_12ceec;
            case 0x12CEF0u: goto label_12cef0;
            case 0x12CEF4u: goto label_12cef4;
            case 0x12CEF8u: goto label_12cef8;
            case 0x12CEFCu: goto label_12cefc;
            case 0x12CF00u: goto label_12cf00;
            case 0x12CF04u: goto label_12cf04;
            case 0x12CF08u: goto label_12cf08;
            case 0x12CF0Cu: goto label_12cf0c;
            case 0x12CF10u: goto label_12cf10;
            case 0x12CF14u: goto label_12cf14;
            case 0x12CF18u: goto label_12cf18;
            case 0x12CF1Cu: goto label_12cf1c;
            case 0x12CF20u: goto label_12cf20;
            case 0x12CF24u: goto label_12cf24;
            case 0x12CF28u: goto label_12cf28;
            case 0x12CF2Cu: goto label_12cf2c;
            case 0x12CF30u: goto label_12cf30;
            case 0x12CF34u: goto label_12cf34;
            case 0x12CF38u: goto label_12cf38;
            case 0x12CF3Cu: goto label_12cf3c;
            case 0x12CF40u: goto label_12cf40;
            case 0x12CF44u: goto label_12cf44;
            case 0x12CF48u: goto label_12cf48;
            case 0x12CF4Cu: goto label_12cf4c;
            case 0x12CF50u: goto label_12cf50;
            case 0x12CF54u: goto label_12cf54;
            case 0x12CF58u: goto label_12cf58;
            case 0x12CF5Cu: goto label_12cf5c;
            case 0x12CF60u: goto label_12cf60;
            case 0x12CF64u: goto label_12cf64;
            case 0x12CF68u: goto label_12cf68;
            case 0x12CF6Cu: goto label_12cf6c;
            case 0x12CF70u: goto label_12cf70;
            case 0x12CF74u: goto label_12cf74;
            case 0x12CF78u: goto label_12cf78;
            case 0x12CF7Cu: goto label_12cf7c;
            case 0x12CF80u: goto label_12cf80;
            case 0x12CF84u: goto label_12cf84;
            case 0x12CF88u: goto label_12cf88;
            case 0x12CF8Cu: goto label_12cf8c;
            case 0x12CF90u: goto label_12cf90;
            case 0x12CF94u: goto label_12cf94;
            case 0x12CF98u: goto label_12cf98;
            case 0x12CF9Cu: goto label_12cf9c;
            case 0x12CFA0u: goto label_12cfa0;
            case 0x12CFA4u: goto label_12cfa4;
            case 0x12CFA8u: goto label_12cfa8;
            case 0x12CFACu: goto label_12cfac;
            case 0x12CFB0u: goto label_12cfb0;
            case 0x12CFB4u: goto label_12cfb4;
            case 0x12CFB8u: goto label_12cfb8;
            case 0x12CFBCu: goto label_12cfbc;
            case 0x12CFC0u: goto label_12cfc0;
            case 0x12CFC4u: goto label_12cfc4;
            case 0x12CFC8u: goto label_12cfc8;
            case 0x12CFCCu: goto label_12cfcc;
            case 0x12CFD0u: goto label_12cfd0;
            case 0x12CFD4u: goto label_12cfd4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12CE94u; }
            if (ctx->pc != 0x12CE94u) { return; }
        }
    }
    ctx->pc = 0x12CE94u;
label_12ce94:
    // 0x12ce94: 0x24020002
    ctx->pc = 0x12ce94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_12ce98:
    // 0x12ce98: 0xa2620001
    ctx->pc = 0x12ce98u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
label_12ce9c:
    // 0x12ce9c: 0xdfb00020
    ctx->pc = 0x12ce9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12cea0:
    // 0x12cea0: 0xdfb10028
    ctx->pc = 0x12cea0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_12cea4:
    // 0x12cea4: 0xdfb20030
    ctx->pc = 0x12cea4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_12cea8:
    // 0x12cea8: 0xdfb30038
    ctx->pc = 0x12cea8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_12ceac:
    // 0x12ceac: 0xdfbf0040
    ctx->pc = 0x12ceacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_12ceb0:
    // 0x12ceb0: 0x3e00008
label_12ceb4:
    if (ctx->pc == 0x12CEB4u) {
        ctx->pc = 0x12CEB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x12CEB8u;
        goto label_12ceb8;
    }
    ctx->pc = 0x12CEB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CEB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12CCE0u: goto label_12cce0;
            case 0x12CCE4u: goto label_12cce4;
            case 0x12CCE8u: goto label_12cce8;
            case 0x12CCECu: goto label_12ccec;
            case 0x12CCF0u: goto label_12ccf0;
            case 0x12CCF4u: goto label_12ccf4;
            case 0x12CCF8u: goto label_12ccf8;
            case 0x12CCFCu: goto label_12ccfc;
            case 0x12CD00u: goto label_12cd00;
            case 0x12CD04u: goto label_12cd04;
            case 0x12CD08u: goto label_12cd08;
            case 0x12CD0Cu: goto label_12cd0c;
            case 0x12CD10u: goto label_12cd10;
            case 0x12CD14u: goto label_12cd14;
            case 0x12CD18u: goto label_12cd18;
            case 0x12CD1Cu: goto label_12cd1c;
            case 0x12CD20u: goto label_12cd20;
            case 0x12CD24u: goto label_12cd24;
            case 0x12CD28u: goto label_12cd28;
            case 0x12CD2Cu: goto label_12cd2c;
            case 0x12CD30u: goto label_12cd30;
            case 0x12CD34u: goto label_12cd34;
            case 0x12CD38u: goto label_12cd38;
            case 0x12CD3Cu: goto label_12cd3c;
            case 0x12CD40u: goto label_12cd40;
            case 0x12CD44u: goto label_12cd44;
            case 0x12CD48u: goto label_12cd48;
            case 0x12CD4Cu: goto label_12cd4c;
            case 0x12CD50u: goto label_12cd50;
            case 0x12CD54u: goto label_12cd54;
            case 0x12CD58u: goto label_12cd58;
            case 0x12CD5Cu: goto label_12cd5c;
            case 0x12CD60u: goto label_12cd60;
            case 0x12CD64u: goto label_12cd64;
            case 0x12CD68u: goto label_12cd68;
            case 0x12CD6Cu: goto label_12cd6c;
            case 0x12CD70u: goto label_12cd70;
            case 0x12CD74u: goto label_12cd74;
            case 0x12CD78u: goto label_12cd78;
            case 0x12CD7Cu: goto label_12cd7c;
            case 0x12CD80u: goto label_12cd80;
            case 0x12CD84u: goto label_12cd84;
            case 0x12CD88u: goto label_12cd88;
            case 0x12CD8Cu: goto label_12cd8c;
            case 0x12CD90u: goto label_12cd90;
            case 0x12CD94u: goto label_12cd94;
            case 0x12CD98u: goto label_12cd98;
            case 0x12CD9Cu: goto label_12cd9c;
            case 0x12CDA0u: goto label_12cda0;
            case 0x12CDA4u: goto label_12cda4;
            case 0x12CDA8u: goto label_12cda8;
            case 0x12CDACu: goto label_12cdac;
            case 0x12CDB0u: goto label_12cdb0;
            case 0x12CDB4u: goto label_12cdb4;
            case 0x12CDB8u: goto label_12cdb8;
            case 0x12CDBCu: goto label_12cdbc;
            case 0x12CDC0u: goto label_12cdc0;
            case 0x12CDC4u: goto label_12cdc4;
            case 0x12CDC8u: goto label_12cdc8;
            case 0x12CDCCu: goto label_12cdcc;
            case 0x12CDD0u: goto label_12cdd0;
            case 0x12CDD4u: goto label_12cdd4;
            case 0x12CDD8u: goto label_12cdd8;
            case 0x12CDDCu: goto label_12cddc;
            case 0x12CDE0u: goto label_12cde0;
            case 0x12CDE4u: goto label_12cde4;
            case 0x12CDE8u: goto label_12cde8;
            case 0x12CDECu: goto label_12cdec;
            case 0x12CDF0u: goto label_12cdf0;
            case 0x12CDF4u: goto label_12cdf4;
            case 0x12CDF8u: goto label_12cdf8;
            case 0x12CDFCu: goto label_12cdfc;
            case 0x12CE00u: goto label_12ce00;
            case 0x12CE04u: goto label_12ce04;
            case 0x12CE08u: goto label_12ce08;
            case 0x12CE0Cu: goto label_12ce0c;
            case 0x12CE10u: goto label_12ce10;
            case 0x12CE14u: goto label_12ce14;
            case 0x12CE18u: goto label_12ce18;
            case 0x12CE1Cu: goto label_12ce1c;
            case 0x12CE20u: goto label_12ce20;
            case 0x12CE24u: goto label_12ce24;
            case 0x12CE28u: goto label_12ce28;
            case 0x12CE2Cu: goto label_12ce2c;
            case 0x12CE30u: goto label_12ce30;
            case 0x12CE34u: goto label_12ce34;
            case 0x12CE38u: goto label_12ce38;
            case 0x12CE3Cu: goto label_12ce3c;
            case 0x12CE40u: goto label_12ce40;
            case 0x12CE44u: goto label_12ce44;
            case 0x12CE48u: goto label_12ce48;
            case 0x12CE4Cu: goto label_12ce4c;
            case 0x12CE50u: goto label_12ce50;
            case 0x12CE54u: goto label_12ce54;
            case 0x12CE58u: goto label_12ce58;
            case 0x12CE5Cu: goto label_12ce5c;
            case 0x12CE60u: goto label_12ce60;
            case 0x12CE64u: goto label_12ce64;
            case 0x12CE68u: goto label_12ce68;
            case 0x12CE6Cu: goto label_12ce6c;
            case 0x12CE70u: goto label_12ce70;
            case 0x12CE74u: goto label_12ce74;
            case 0x12CE78u: goto label_12ce78;
            case 0x12CE7Cu: goto label_12ce7c;
            case 0x12CE80u: goto label_12ce80;
            case 0x12CE84u: goto label_12ce84;
            case 0x12CE88u: goto label_12ce88;
            case 0x12CE8Cu: goto label_12ce8c;
            case 0x12CE90u: goto label_12ce90;
            case 0x12CE94u: goto label_12ce94;
            case 0x12CE98u: goto label_12ce98;
            case 0x12CE9Cu: goto label_12ce9c;
            case 0x12CEA0u: goto label_12cea0;
            case 0x12CEA4u: goto label_12cea4;
            case 0x12CEA8u: goto label_12cea8;
            case 0x12CEACu: goto label_12ceac;
            case 0x12CEB0u: goto label_12ceb0;
            case 0x12CEB4u: goto label_12ceb4;
            case 0x12CEB8u: goto label_12ceb8;
            case 0x12CEBCu: goto label_12cebc;
            case 0x12CEC0u: goto label_12cec0;
            case 0x12CEC4u: goto label_12cec4;
            case 0x12CEC8u: goto label_12cec8;
            case 0x12CECCu: goto label_12cecc;
            case 0x12CED0u: goto label_12ced0;
            case 0x12CED4u: goto label_12ced4;
            case 0x12CED8u: goto label_12ced8;
            case 0x12CEDCu: goto label_12cedc;
            case 0x12CEE0u: goto label_12cee0;
            case 0x12CEE4u: goto label_12cee4;
            case 0x12CEE8u: goto label_12cee8;
            case 0x12CEECu: goto label_12ceec;
            case 0x12CEF0u: goto label_12cef0;
            case 0x12CEF4u: goto label_12cef4;
            case 0x12CEF8u: goto label_12cef8;
            case 0x12CEFCu: goto label_12cefc;
            case 0x12CF00u: goto label_12cf00;
            case 0x12CF04u: goto label_12cf04;
            case 0x12CF08u: goto label_12cf08;
            case 0x12CF0Cu: goto label_12cf0c;
            case 0x12CF10u: goto label_12cf10;
            case 0x12CF14u: goto label_12cf14;
            case 0x12CF18u: goto label_12cf18;
            case 0x12CF1Cu: goto label_12cf1c;
            case 0x12CF20u: goto label_12cf20;
            case 0x12CF24u: goto label_12cf24;
            case 0x12CF28u: goto label_12cf28;
            case 0x12CF2Cu: goto label_12cf2c;
            case 0x12CF30u: goto label_12cf30;
            case 0x12CF34u: goto label_12cf34;
            case 0x12CF38u: goto label_12cf38;
            case 0x12CF3Cu: goto label_12cf3c;
            case 0x12CF40u: goto label_12cf40;
            case 0x12CF44u: goto label_12cf44;
            case 0x12CF48u: goto label_12cf48;
            case 0x12CF4Cu: goto label_12cf4c;
            case 0x12CF50u: goto label_12cf50;
            case 0x12CF54u: goto label_12cf54;
            case 0x12CF58u: goto label_12cf58;
            case 0x12CF5Cu: goto label_12cf5c;
            case 0x12CF60u: goto label_12cf60;
            case 0x12CF64u: goto label_12cf64;
            case 0x12CF68u: goto label_12cf68;
            case 0x12CF6Cu: goto label_12cf6c;
            case 0x12CF70u: goto label_12cf70;
            case 0x12CF74u: goto label_12cf74;
            case 0x12CF78u: goto label_12cf78;
            case 0x12CF7Cu: goto label_12cf7c;
            case 0x12CF80u: goto label_12cf80;
            case 0x12CF84u: goto label_12cf84;
            case 0x12CF88u: goto label_12cf88;
            case 0x12CF8Cu: goto label_12cf8c;
            case 0x12CF90u: goto label_12cf90;
            case 0x12CF94u: goto label_12cf94;
            case 0x12CF98u: goto label_12cf98;
            case 0x12CF9Cu: goto label_12cf9c;
            case 0x12CFA0u: goto label_12cfa0;
            case 0x12CFA4u: goto label_12cfa4;
            case 0x12CFA8u: goto label_12cfa8;
            case 0x12CFACu: goto label_12cfac;
            case 0x12CFB0u: goto label_12cfb0;
            case 0x12CFB4u: goto label_12cfb4;
            case 0x12CFB8u: goto label_12cfb8;
            case 0x12CFBCu: goto label_12cfbc;
            case 0x12CFC0u: goto label_12cfc0;
            case 0x12CFC4u: goto label_12cfc4;
            case 0x12CFC8u: goto label_12cfc8;
            case 0x12CFCCu: goto label_12cfcc;
            case 0x12CFD0u: goto label_12cfd0;
            case 0x12CFD4u: goto label_12cfd4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12CEB8u;
label_12ceb8:
    // 0x12ceb8: 0x27bdffb0
    ctx->pc = 0x12ceb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_12cebc:
    // 0x12cebc: 0xffb00000
    ctx->pc = 0x12cebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_12cec0:
    // 0x12cec0: 0xffb10008
    ctx->pc = 0x12cec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_12cec4:
    // 0x12cec4: 0xffb20010
    ctx->pc = 0x12cec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_12cec8:
    // 0x12cec8: 0x80902d
    ctx->pc = 0x12cec8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12cecc:
    // 0x12cecc: 0xffb30018
    ctx->pc = 0x12ceccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_12ced0:
    // 0x12ced0: 0x982d
    ctx->pc = 0x12ced0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12ced4:
    // 0x12ced4: 0xffb50028
    ctx->pc = 0x12ced4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_12ced8:
    // 0x12ced8: 0xe0a82d
    ctx->pc = 0x12ced8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_12cedc:
    // 0x12cedc: 0xffb60030
    ctx->pc = 0x12cedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_12cee0:
    // 0x12cee0: 0xa0b02d
    ctx->pc = 0x12cee0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12cee4:
    // 0x12cee4: 0xffb70038
    ctx->pc = 0x12cee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_12cee8:
    // 0x12cee8: 0xc0b82d
    ctx->pc = 0x12cee8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_12ceec:
    // 0x12ceec: 0xffb40020
    ctx->pc = 0x12ceecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_12cef0:
    // 0x12cef0: 0x2651001c
    ctx->pc = 0x12cef0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 28));
label_12cef4:
    // 0x12cef4: 0xffbf0040
    ctx->pc = 0x12cef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_12cef8:
    // 0x12cef8: 0x2650000c
    ctx->pc = 0x12cef8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 12));
label_12cefc:
    // 0x12cefc: 0x10000008
label_12cf00:
    if (ctx->pc == 0x12CF00u) {
        ctx->pc = 0x12CF00u;
        SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->pc = 0x12CF04u;
        goto label_12cf04;
    }
    ctx->pc = 0x12CEFCu;
    {
        const bool branch_taken_0x12cefc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CF00u;
        SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 18), 12)));
        if (branch_taken_0x12cefc) {
            ctx->pc = 0x12CF20u;
            goto label_12cf20;
        }
    }
    ctx->pc = 0x12CF04u;
label_12cf04:
    // 0x12cf04: 0x0
    ctx->pc = 0x12cf04u;
    // NOP
label_12cf08:
    // 0x12cf08: 0x8e020000
    ctx->pc = 0x12cf08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12cf0c:
    // 0x12cf0c: 0x26100004
    ctx->pc = 0x12cf0cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
label_12cf10:
    // 0x12cf10: 0x8c430000
    ctx->pc = 0x12cf10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12cf14:
    // 0x12cf14: 0x8c680018
    ctx->pc = 0x12cf14u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_12cf18:
    // 0x12cf18: 0x100f809
label_12cf1c:
    if (ctx->pc == 0x12CF1Cu) {
        ctx->pc = 0x12CF1Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12CF20u;
        goto label_12cf20;
    }
    ctx->pc = 0x12CF18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x12CF20u);
        ctx->pc = 0x12CF1Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12CCE0u: goto label_12cce0;
            case 0x12CCE4u: goto label_12cce4;
            case 0x12CCE8u: goto label_12cce8;
            case 0x12CCECu: goto label_12ccec;
            case 0x12CCF0u: goto label_12ccf0;
            case 0x12CCF4u: goto label_12ccf4;
            case 0x12CCF8u: goto label_12ccf8;
            case 0x12CCFCu: goto label_12ccfc;
            case 0x12CD00u: goto label_12cd00;
            case 0x12CD04u: goto label_12cd04;
            case 0x12CD08u: goto label_12cd08;
            case 0x12CD0Cu: goto label_12cd0c;
            case 0x12CD10u: goto label_12cd10;
            case 0x12CD14u: goto label_12cd14;
            case 0x12CD18u: goto label_12cd18;
            case 0x12CD1Cu: goto label_12cd1c;
            case 0x12CD20u: goto label_12cd20;
            case 0x12CD24u: goto label_12cd24;
            case 0x12CD28u: goto label_12cd28;
            case 0x12CD2Cu: goto label_12cd2c;
            case 0x12CD30u: goto label_12cd30;
            case 0x12CD34u: goto label_12cd34;
            case 0x12CD38u: goto label_12cd38;
            case 0x12CD3Cu: goto label_12cd3c;
            case 0x12CD40u: goto label_12cd40;
            case 0x12CD44u: goto label_12cd44;
            case 0x12CD48u: goto label_12cd48;
            case 0x12CD4Cu: goto label_12cd4c;
            case 0x12CD50u: goto label_12cd50;
            case 0x12CD54u: goto label_12cd54;
            case 0x12CD58u: goto label_12cd58;
            case 0x12CD5Cu: goto label_12cd5c;
            case 0x12CD60u: goto label_12cd60;
            case 0x12CD64u: goto label_12cd64;
            case 0x12CD68u: goto label_12cd68;
            case 0x12CD6Cu: goto label_12cd6c;
            case 0x12CD70u: goto label_12cd70;
            case 0x12CD74u: goto label_12cd74;
            case 0x12CD78u: goto label_12cd78;
            case 0x12CD7Cu: goto label_12cd7c;
            case 0x12CD80u: goto label_12cd80;
            case 0x12CD84u: goto label_12cd84;
            case 0x12CD88u: goto label_12cd88;
            case 0x12CD8Cu: goto label_12cd8c;
            case 0x12CD90u: goto label_12cd90;
            case 0x12CD94u: goto label_12cd94;
            case 0x12CD98u: goto label_12cd98;
            case 0x12CD9Cu: goto label_12cd9c;
            case 0x12CDA0u: goto label_12cda0;
            case 0x12CDA4u: goto label_12cda4;
            case 0x12CDA8u: goto label_12cda8;
            case 0x12CDACu: goto label_12cdac;
            case 0x12CDB0u: goto label_12cdb0;
            case 0x12CDB4u: goto label_12cdb4;
            case 0x12CDB8u: goto label_12cdb8;
            case 0x12CDBCu: goto label_12cdbc;
            case 0x12CDC0u: goto label_12cdc0;
            case 0x12CDC4u: goto label_12cdc4;
            case 0x12CDC8u: goto label_12cdc8;
            case 0x12CDCCu: goto label_12cdcc;
            case 0x12CDD0u: goto label_12cdd0;
            case 0x12CDD4u: goto label_12cdd4;
            case 0x12CDD8u: goto label_12cdd8;
            case 0x12CDDCu: goto label_12cddc;
            case 0x12CDE0u: goto label_12cde0;
            case 0x12CDE4u: goto label_12cde4;
            case 0x12CDE8u: goto label_12cde8;
            case 0x12CDECu: goto label_12cdec;
            case 0x12CDF0u: goto label_12cdf0;
            case 0x12CDF4u: goto label_12cdf4;
            case 0x12CDF8u: goto label_12cdf8;
            case 0x12CDFCu: goto label_12cdfc;
            case 0x12CE00u: goto label_12ce00;
            case 0x12CE04u: goto label_12ce04;
            case 0x12CE08u: goto label_12ce08;
            case 0x12CE0Cu: goto label_12ce0c;
            case 0x12CE10u: goto label_12ce10;
            case 0x12CE14u: goto label_12ce14;
            case 0x12CE18u: goto label_12ce18;
            case 0x12CE1Cu: goto label_12ce1c;
            case 0x12CE20u: goto label_12ce20;
            case 0x12CE24u: goto label_12ce24;
            case 0x12CE28u: goto label_12ce28;
            case 0x12CE2Cu: goto label_12ce2c;
            case 0x12CE30u: goto label_12ce30;
            case 0x12CE34u: goto label_12ce34;
            case 0x12CE38u: goto label_12ce38;
            case 0x12CE3Cu: goto label_12ce3c;
            case 0x12CE40u: goto label_12ce40;
            case 0x12CE44u: goto label_12ce44;
            case 0x12CE48u: goto label_12ce48;
            case 0x12CE4Cu: goto label_12ce4c;
            case 0x12CE50u: goto label_12ce50;
            case 0x12CE54u: goto label_12ce54;
            case 0x12CE58u: goto label_12ce58;
            case 0x12CE5Cu: goto label_12ce5c;
            case 0x12CE60u: goto label_12ce60;
            case 0x12CE64u: goto label_12ce64;
            case 0x12CE68u: goto label_12ce68;
            case 0x12CE6Cu: goto label_12ce6c;
            case 0x12CE70u: goto label_12ce70;
            case 0x12CE74u: goto label_12ce74;
            case 0x12CE78u: goto label_12ce78;
            case 0x12CE7Cu: goto label_12ce7c;
            case 0x12CE80u: goto label_12ce80;
            case 0x12CE84u: goto label_12ce84;
            case 0x12CE88u: goto label_12ce88;
            case 0x12CE8Cu: goto label_12ce8c;
            case 0x12CE90u: goto label_12ce90;
            case 0x12CE94u: goto label_12ce94;
            case 0x12CE98u: goto label_12ce98;
            case 0x12CE9Cu: goto label_12ce9c;
            case 0x12CEA0u: goto label_12cea0;
            case 0x12CEA4u: goto label_12cea4;
            case 0x12CEA8u: goto label_12cea8;
            case 0x12CEACu: goto label_12ceac;
            case 0x12CEB0u: goto label_12ceb0;
            case 0x12CEB4u: goto label_12ceb4;
            case 0x12CEB8u: goto label_12ceb8;
            case 0x12CEBCu: goto label_12cebc;
            case 0x12CEC0u: goto label_12cec0;
            case 0x12CEC4u: goto label_12cec4;
            case 0x12CEC8u: goto label_12cec8;
            case 0x12CECCu: goto label_12cecc;
            case 0x12CED0u: goto label_12ced0;
            case 0x12CED4u: goto label_12ced4;
            case 0x12CED8u: goto label_12ced8;
            case 0x12CEDCu: goto label_12cedc;
            case 0x12CEE0u: goto label_12cee0;
            case 0x12CEE4u: goto label_12cee4;
            case 0x12CEE8u: goto label_12cee8;
            case 0x12CEECu: goto label_12ceec;
            case 0x12CEF0u: goto label_12cef0;
            case 0x12CEF4u: goto label_12cef4;
            case 0x12CEF8u: goto label_12cef8;
            case 0x12CEFCu: goto label_12cefc;
            case 0x12CF00u: goto label_12cf00;
            case 0x12CF04u: goto label_12cf04;
            case 0x12CF08u: goto label_12cf08;
            case 0x12CF0Cu: goto label_12cf0c;
            case 0x12CF10u: goto label_12cf10;
            case 0x12CF14u: goto label_12cf14;
            case 0x12CF18u: goto label_12cf18;
            case 0x12CF1Cu: goto label_12cf1c;
            case 0x12CF20u: goto label_12cf20;
            case 0x12CF24u: goto label_12cf24;
            case 0x12CF28u: goto label_12cf28;
            case 0x12CF2Cu: goto label_12cf2c;
            case 0x12CF30u: goto label_12cf30;
            case 0x12CF34u: goto label_12cf34;
            case 0x12CF38u: goto label_12cf38;
            case 0x12CF3Cu: goto label_12cf3c;
            case 0x12CF40u: goto label_12cf40;
            case 0x12CF44u: goto label_12cf44;
            case 0x12CF48u: goto label_12cf48;
            case 0x12CF4Cu: goto label_12cf4c;
            case 0x12CF50u: goto label_12cf50;
            case 0x12CF54u: goto label_12cf54;
            case 0x12CF58u: goto label_12cf58;
            case 0x12CF5Cu: goto label_12cf5c;
            case 0x12CF60u: goto label_12cf60;
            case 0x12CF64u: goto label_12cf64;
            case 0x12CF68u: goto label_12cf68;
            case 0x12CF6Cu: goto label_12cf6c;
            case 0x12CF70u: goto label_12cf70;
            case 0x12CF74u: goto label_12cf74;
            case 0x12CF78u: goto label_12cf78;
            case 0x12CF7Cu: goto label_12cf7c;
            case 0x12CF80u: goto label_12cf80;
            case 0x12CF84u: goto label_12cf84;
            case 0x12CF88u: goto label_12cf88;
            case 0x12CF8Cu: goto label_12cf8c;
            case 0x12CF90u: goto label_12cf90;
            case 0x12CF94u: goto label_12cf94;
            case 0x12CF98u: goto label_12cf98;
            case 0x12CF9Cu: goto label_12cf9c;
            case 0x12CFA0u: goto label_12cfa0;
            case 0x12CFA4u: goto label_12cfa4;
            case 0x12CFA8u: goto label_12cfa8;
            case 0x12CFACu: goto label_12cfac;
            case 0x12CFB0u: goto label_12cfb0;
            case 0x12CFB4u: goto label_12cfb4;
            case 0x12CFB8u: goto label_12cfb8;
            case 0x12CFBCu: goto label_12cfbc;
            case 0x12CFC0u: goto label_12cfc0;
            case 0x12CFC4u: goto label_12cfc4;
            case 0x12CFC8u: goto label_12cfc8;
            case 0x12CFCCu: goto label_12cfcc;
            case 0x12CFD0u: goto label_12cfd0;
            case 0x12CFD4u: goto label_12cfd4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12CF20u; }
            if (ctx->pc != 0x12CF20u) { return; }
        }
    }
    ctx->pc = 0x12CF20u;
label_12cf20:
    // 0x12cf20: 0xc04939e
label_12cf24:
    if (ctx->pc == 0x12CF24u) {
        ctx->pc = 0x12CF24u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x12CF28u;
        goto label_12cf28;
    }
    ctx->pc = 0x12CF20u;
    SET_GPR_U32(ctx, 31, 0x12CF28u);
    ctx->pc = 0x12CF24u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->pc = 0x124E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00124E78_0x124e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CF28u; }
    }
    if (ctx->pc != 0x12CF28u) { return; }
    ctx->pc = 0x12CF28u;
label_12cf28:
    // 0x12cf28: 0x282d
    ctx->pc = 0x12cf28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12cf2c:
    // 0x12cf2c: 0x262102a
    ctx->pc = 0x12cf2cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 2)));
label_12cf30:
    // 0x12cf30: 0x26730001
    ctx->pc = 0x12cf30u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_12cf34:
    // 0x12cf34: 0x220382d
    ctx->pc = 0x12cf34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12cf38:
    // 0x12cf38: 0x26310008
    ctx->pc = 0x12cf38u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
label_12cf3c:
    // 0x12cf3c: 0x1440fff2
label_12cf40:
    if (ctx->pc == 0x12CF40u) {
        ctx->pc = 0x12CF40u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16384));
        ctx->pc = 0x12CF44u;
        goto label_12cf44;
    }
    ctx->pc = 0x12CF3Cu;
    {
        const bool branch_taken_0x12cf3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12CF40u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16384));
        if (branch_taken_0x12cf3c) {
            ctx->pc = 0x12CF08u;
            goto label_12cf08;
        }
    }
    ctx->pc = 0x12CF44u;
label_12cf44:
    // 0x12cf44: 0xc04ffee
label_12cf48:
    if (ctx->pc == 0x12CF48u) {
        ctx->pc = 0x12CF48u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12CF4Cu;
        goto label_12cf4c;
    }
    ctx->pc = 0x12CF44u;
    SET_GPR_U32(ctx, 31, 0x12CF4Cu);
    ctx->pc = 0x12CF48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13FFB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013FFB8_0x13ffb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CF4Cu; }
    }
    if (ctx->pc != 0x12CF4Cu) { return; }
    ctx->pc = 0x12CF4Cu;
label_12cf4c:
    // 0x12cf4c: 0x8e43001c
    ctx->pc = 0x12cf4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_12cf50:
    // 0x12cf50: 0x621823
    ctx->pc = 0x12cf50u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_12cf54:
    // 0x12cf54: 0x317c2
    ctx->pc = 0x12cf54u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 31));
label_12cf58:
    // 0x12cf58: 0x621821
    ctx->pc = 0x12cf58u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_12cf5c:
    // 0x12cf5c: 0x31843
    ctx->pc = 0x12cf5cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_12cf60:
    // 0x12cf60: 0xaec30000
    ctx->pc = 0x12cf60u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_12cf64:
    // 0x12cf64: 0x8e420020
    ctx->pc = 0x12cf64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_12cf68:
    // 0x12cf68: 0x8e440038
    ctx->pc = 0x12cf68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_12cf6c:
    // 0x12cf6c: 0x21fc2
    ctx->pc = 0x12cf6cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
label_12cf70:
    // 0x12cf70: 0x431021
    ctx->pc = 0x12cf70u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_12cf74:
    // 0x12cf74: 0x21043
    ctx->pc = 0x12cf74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_12cf78:
    // 0x12cf78: 0x44182a
    ctx->pc = 0x12cf78u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
label_12cf7c:
    // 0x12cf7c: 0x43200b
    ctx->pc = 0x12cf7cu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
label_12cf80:
    // 0x12cf80: 0xaee40000
    ctx->pc = 0x12cf80u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 4));
label_12cf84:
    // 0x12cf84: 0x8e43003c
    ctx->pc = 0x12cf84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_12cf88:
    // 0x12cf88: 0x4620005
label_12cf8c:
    if (ctx->pc == 0x12CF8Cu) {
        ctx->pc = 0x12CF8Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)8191 << 16));
        ctx->pc = 0x12CF90u;
        goto label_12cf90;
    }
    ctx->pc = 0x12CF88u;
    {
        const bool branch_taken_0x12cf88 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x12cf88) {
            ctx->pc = 0x12CF8Cu;
            SET_GPR_U32(ctx, 2, ((uint32_t)8191 << 16));
            ctx->pc = 0x12CFA0u;
            goto label_12cfa0;
        }
    }
    ctx->pc = 0x12CF90u;
label_12cf90:
    // 0x12cf90: 0x8e420040
    ctx->pc = 0x12cf90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_12cf94:
    // 0x12cf94: 0x10000003
label_12cf98:
    if (ctx->pc == 0x12CF98u) {
        ctx->pc = 0x12CF98u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x12CF9Cu;
        goto label_12cf9c;
    }
    ctx->pc = 0x12CF94u;
    {
        const bool branch_taken_0x12cf94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CF98u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x12cf94) {
            ctx->pc = 0x12CFA4u;
            goto label_12cfa4;
        }
    }
    ctx->pc = 0x12CF9Cu;
label_12cf9c:
    // 0x12cf9c: 0x0
    ctx->pc = 0x12cf9cu;
    // NOP
label_12cfa0:
    // 0x12cfa0: 0x3442ffff
    ctx->pc = 0x12cfa0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_12cfa4:
    // 0x12cfa4: 0xaea20000
    ctx->pc = 0x12cfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_12cfa8:
    // 0x12cfa8: 0x8e440004
    ctx->pc = 0x12cfa8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_12cfac:
    // 0x12cfac: 0xdfb00000
    ctx->pc = 0x12cfacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12cfb0:
    // 0x12cfb0: 0xdfb10008
    ctx->pc = 0x12cfb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_12cfb4:
    // 0x12cfb4: 0xdfb20010
    ctx->pc = 0x12cfb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12cfb8:
    // 0x12cfb8: 0xdfb30018
    ctx->pc = 0x12cfb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_12cfbc:
    // 0x12cfbc: 0xdfb40020
    ctx->pc = 0x12cfbcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12cfc0:
    // 0x12cfc0: 0xdfb50028
    ctx->pc = 0x12cfc0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_12cfc4:
    // 0x12cfc4: 0xdfb60030
    ctx->pc = 0x12cfc4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_12cfc8:
    // 0x12cfc8: 0xdfb70038
    ctx->pc = 0x12cfc8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_12cfcc:
    // 0x12cfcc: 0xdfbf0040
    ctx->pc = 0x12cfccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_12cfd0:
    // 0x12cfd0: 0x8049398
label_12cfd4:
    if (ctx->pc == 0x12CFD4u) {
        ctx->pc = 0x12CFD4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x12CFD8u;
        goto label_fallthrough_0x12cfd0;
    }
    ctx->pc = 0x12CFD0u;
    ctx->pc = 0x12CFD4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x124E60u;
    entry_124e60_0x124e68(rdram, ctx, runtime); return;
label_fallthrough_0x12cfd0:
    ctx->pc = 0x12CFD8u;
}
