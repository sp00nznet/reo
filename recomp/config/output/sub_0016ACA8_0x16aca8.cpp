#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016ACA8
// Address: 0x16aca8 - 0x16ad80
void sub_0016ACA8_0x16aca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16aca8u;

label_16aca8:
    // 0x16aca8: 0x27bdffb0
    ctx->pc = 0x16aca8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_16acac:
    // 0x16acac: 0x24080008
    ctx->pc = 0x16acacu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 8));
label_16acb0:
    // 0x16acb0: 0xffb00010
    ctx->pc = 0x16acb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_16acb4:
    // 0x16acb4: 0xa0802d
    ctx->pc = 0x16acb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16acb8:
    // 0x16acb8: 0xffb10018
    ctx->pc = 0x16acb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_16acbc:
    // 0x16acbc: 0xe0882d
    ctx->pc = 0x16acbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_16acc0:
    // 0x16acc0: 0xffb30028
    ctx->pc = 0x16acc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_16acc4:
    // 0x16acc4: 0xc0982d
    ctx->pc = 0x16acc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16acc8:
    // 0x16acc8: 0xffb50038
    ctx->pc = 0x16acc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_16accc:
    // 0x16accc: 0x80a82d
    ctx->pc = 0x16acccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16acd0:
    // 0x16acd0: 0xffb20020
    ctx->pc = 0x16acd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_16acd4:
    // 0x16acd4: 0x200302d
    ctx->pc = 0x16acd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16acd8:
    // 0x16acd8: 0xffb40030
    ctx->pc = 0x16acd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_16acdc:
    // 0x16acdc: 0x3a0382d
    ctx->pc = 0x16acdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16ace0:
    // 0x16ace0: 0xffbf0040
    ctx->pc = 0x16ace0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_16ace4:
    // 0x16ace4: 0x24020001
    ctx->pc = 0x16ace4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_16ace8:
    // 0x16ace8: 0x8ea31b00
    ctx->pc = 0x16ace8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 6912)));
label_16acec:
    // 0x16acec: 0x1068001b
label_16acf0:
    if (ctx->pc == 0x16ACF0u) {
        ctx->pc = 0x16ACF0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16ACF4u;
        goto label_16acf4;
    }
    ctx->pc = 0x16ACECu;
    {
        const bool branch_taken_0x16acec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 8));
        ctx->pc = 0x16ACF0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16acec) {
            ctx->pc = 0x16AD5Cu;
            goto label_16ad5c;
        }
    }
    ctx->pc = 0x16ACF4u;
label_16acf4:
    // 0x16acf4: 0xc059bd8
label_16acf8:
    if (ctx->pc == 0x16ACF8u) {
        ctx->pc = 0x16ACFCu;
        goto label_16acfc;
    }
    ctx->pc = 0x16ACF4u;
    SET_GPR_U32(ctx, 31, 0x16ACFCu);
    ctx->pc = 0x166F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00166F60_0x166f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ACFCu; }
    }
    if (ctx->pc != 0x16ACFCu) { return; }
    ctx->pc = 0x16ACFCu;
label_16acfc:
    // 0x16acfc: 0x260282d
    ctx->pc = 0x16acfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16ad00:
    // 0x16ad00: 0x8fa30000
    ctx->pc = 0x16ad00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16ad04:
    // 0x16ad04: 0x220302d
    ctx->pc = 0x16ad04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16ad08:
    // 0x16ad08: 0x8fb20004
    ctx->pc = 0x16ad08u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_16ad0c:
    // 0x16ad0c: 0x24020001
    ctx->pc = 0x16ad0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_16ad10:
    // 0x16ad10: 0x60202d
    ctx->pc = 0x16ad10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_16ad14:
    // 0x16ad14: 0x8fb30008
    ctx->pc = 0x16ad14u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_16ad18:
    // 0x16ad18: 0x10600010
label_16ad1c:
    if (ctx->pc == 0x16AD1Cu) {
        ctx->pc = 0x16AD1Cu;
        SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->pc = 0x16AD20u;
        goto label_16ad20;
    }
    ctx->pc = 0x16AD18u;
    {
        const bool branch_taken_0x16ad18 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x16AD1Cu;
        SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 29), 12)));
        if (branch_taken_0x16ad18) {
            ctx->pc = 0x16AD5Cu;
            goto label_16ad5c;
        }
    }
    ctx->pc = 0x16AD20u;
label_16ad20:
    // 0x16ad20: 0xc05ab60
label_16ad24:
    if (ctx->pc == 0x16AD24u) {
        ctx->pc = 0x16AD28u;
        goto label_16ad28;
    }
    ctx->pc = 0x16AD20u;
    SET_GPR_U32(ctx, 31, 0x16AD28u);
    ctx->pc = 0x16AD80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016AD80_0x16ad80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD28u; }
    }
    if (ctx->pc != 0x16AD28u) { return; }
    ctx->pc = 0x16AD28u;
label_16ad28:
    // 0x16ad28: 0x40882d
    ctx->pc = 0x16ad28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ad2c:
    // 0x16ad2c: 0x24020001
    ctx->pc = 0x16ad2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_16ad30:
    // 0x16ad30: 0x5622000a
label_16ad34:
    if (ctx->pc == 0x16AD34u) {
        ctx->pc = 0x16AD34u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16AD38u;
        goto label_16ad38;
    }
    ctx->pc = 0x16AD30u;
    {
        const bool branch_taken_0x16ad30 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x16ad30) {
            ctx->pc = 0x16AD34u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x16AD5Cu;
            goto label_16ad5c;
        }
    }
    ctx->pc = 0x16AD38u;
label_16ad38:
    // 0x16ad38: 0x12400003
label_16ad3c:
    if (ctx->pc == 0x16AD3Cu) {
        ctx->pc = 0x16AD3Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16AD40u;
        goto label_16ad40;
    }
    ctx->pc = 0x16AD38u;
    {
        const bool branch_taken_0x16ad38 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x16AD3Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16ad38) {
            ctx->pc = 0x16AD48u;
            goto label_16ad48;
        }
    }
    ctx->pc = 0x16AD40u;
label_16ad40:
    // 0x16ad40: 0x240f809
label_16ad44:
    if (ctx->pc == 0x16AD44u) {
        ctx->pc = 0x16AD44u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16AD48u;
        goto label_16ad48;
    }
    ctx->pc = 0x16AD40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x16AD48u);
        ctx->pc = 0x16AD44u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16ACA8u: goto label_16aca8;
            case 0x16ACACu: goto label_16acac;
            case 0x16ACB0u: goto label_16acb0;
            case 0x16ACB4u: goto label_16acb4;
            case 0x16ACB8u: goto label_16acb8;
            case 0x16ACBCu: goto label_16acbc;
            case 0x16ACC0u: goto label_16acc0;
            case 0x16ACC4u: goto label_16acc4;
            case 0x16ACC8u: goto label_16acc8;
            case 0x16ACCCu: goto label_16accc;
            case 0x16ACD0u: goto label_16acd0;
            case 0x16ACD4u: goto label_16acd4;
            case 0x16ACD8u: goto label_16acd8;
            case 0x16ACDCu: goto label_16acdc;
            case 0x16ACE0u: goto label_16ace0;
            case 0x16ACE4u: goto label_16ace4;
            case 0x16ACE8u: goto label_16ace8;
            case 0x16ACECu: goto label_16acec;
            case 0x16ACF0u: goto label_16acf0;
            case 0x16ACF4u: goto label_16acf4;
            case 0x16ACF8u: goto label_16acf8;
            case 0x16ACFCu: goto label_16acfc;
            case 0x16AD00u: goto label_16ad00;
            case 0x16AD04u: goto label_16ad04;
            case 0x16AD08u: goto label_16ad08;
            case 0x16AD0Cu: goto label_16ad0c;
            case 0x16AD10u: goto label_16ad10;
            case 0x16AD14u: goto label_16ad14;
            case 0x16AD18u: goto label_16ad18;
            case 0x16AD1Cu: goto label_16ad1c;
            case 0x16AD20u: goto label_16ad20;
            case 0x16AD24u: goto label_16ad24;
            case 0x16AD28u: goto label_16ad28;
            case 0x16AD2Cu: goto label_16ad2c;
            case 0x16AD30u: goto label_16ad30;
            case 0x16AD34u: goto label_16ad34;
            case 0x16AD38u: goto label_16ad38;
            case 0x16AD3Cu: goto label_16ad3c;
            case 0x16AD40u: goto label_16ad40;
            case 0x16AD44u: goto label_16ad44;
            case 0x16AD48u: goto label_16ad48;
            case 0x16AD4Cu: goto label_16ad4c;
            case 0x16AD50u: goto label_16ad50;
            case 0x16AD54u: goto label_16ad54;
            case 0x16AD58u: goto label_16ad58;
            case 0x16AD5Cu: goto label_16ad5c;
            case 0x16AD60u: goto label_16ad60;
            case 0x16AD64u: goto label_16ad64;
            case 0x16AD68u: goto label_16ad68;
            case 0x16AD6Cu: goto label_16ad6c;
            case 0x16AD70u: goto label_16ad70;
            case 0x16AD74u: goto label_16ad74;
            case 0x16AD78u: goto label_16ad78;
            case 0x16AD7Cu: goto label_16ad7c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16AD48u; }
            if (ctx->pc != 0x16AD48u) { return; }
        }
    }
    ctx->pc = 0x16AD48u;
label_16ad48:
    // 0x16ad48: 0x12600003
label_16ad4c:
    if (ctx->pc == 0x16AD4Cu) {
        ctx->pc = 0x16AD4Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16AD50u;
        goto label_16ad50;
    }
    ctx->pc = 0x16AD48u;
    {
        const bool branch_taken_0x16ad48 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x16AD4Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16ad48) {
            ctx->pc = 0x16AD58u;
            goto label_16ad58;
        }
    }
    ctx->pc = 0x16AD50u;
label_16ad50:
    // 0x16ad50: 0x260f809
label_16ad54:
    if (ctx->pc == 0x16AD54u) {
        ctx->pc = 0x16AD54u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16AD58u;
        goto label_16ad58;
    }
    ctx->pc = 0x16AD50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x16AD58u);
        ctx->pc = 0x16AD54u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16ACA8u: goto label_16aca8;
            case 0x16ACACu: goto label_16acac;
            case 0x16ACB0u: goto label_16acb0;
            case 0x16ACB4u: goto label_16acb4;
            case 0x16ACB8u: goto label_16acb8;
            case 0x16ACBCu: goto label_16acbc;
            case 0x16ACC0u: goto label_16acc0;
            case 0x16ACC4u: goto label_16acc4;
            case 0x16ACC8u: goto label_16acc8;
            case 0x16ACCCu: goto label_16accc;
            case 0x16ACD0u: goto label_16acd0;
            case 0x16ACD4u: goto label_16acd4;
            case 0x16ACD8u: goto label_16acd8;
            case 0x16ACDCu: goto label_16acdc;
            case 0x16ACE0u: goto label_16ace0;
            case 0x16ACE4u: goto label_16ace4;
            case 0x16ACE8u: goto label_16ace8;
            case 0x16ACECu: goto label_16acec;
            case 0x16ACF0u: goto label_16acf0;
            case 0x16ACF4u: goto label_16acf4;
            case 0x16ACF8u: goto label_16acf8;
            case 0x16ACFCu: goto label_16acfc;
            case 0x16AD00u: goto label_16ad00;
            case 0x16AD04u: goto label_16ad04;
            case 0x16AD08u: goto label_16ad08;
            case 0x16AD0Cu: goto label_16ad0c;
            case 0x16AD10u: goto label_16ad10;
            case 0x16AD14u: goto label_16ad14;
            case 0x16AD18u: goto label_16ad18;
            case 0x16AD1Cu: goto label_16ad1c;
            case 0x16AD20u: goto label_16ad20;
            case 0x16AD24u: goto label_16ad24;
            case 0x16AD28u: goto label_16ad28;
            case 0x16AD2Cu: goto label_16ad2c;
            case 0x16AD30u: goto label_16ad30;
            case 0x16AD34u: goto label_16ad34;
            case 0x16AD38u: goto label_16ad38;
            case 0x16AD3Cu: goto label_16ad3c;
            case 0x16AD40u: goto label_16ad40;
            case 0x16AD44u: goto label_16ad44;
            case 0x16AD48u: goto label_16ad48;
            case 0x16AD4Cu: goto label_16ad4c;
            case 0x16AD50u: goto label_16ad50;
            case 0x16AD54u: goto label_16ad54;
            case 0x16AD58u: goto label_16ad58;
            case 0x16AD5Cu: goto label_16ad5c;
            case 0x16AD60u: goto label_16ad60;
            case 0x16AD64u: goto label_16ad64;
            case 0x16AD68u: goto label_16ad68;
            case 0x16AD6Cu: goto label_16ad6c;
            case 0x16AD70u: goto label_16ad70;
            case 0x16AD74u: goto label_16ad74;
            case 0x16AD78u: goto label_16ad78;
            case 0x16AD7Cu: goto label_16ad7c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16AD58u; }
            if (ctx->pc != 0x16AD58u) { return; }
        }
    }
    ctx->pc = 0x16AD58u;
label_16ad58:
    // 0x16ad58: 0x220102d
    ctx->pc = 0x16ad58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16ad5c:
    // 0x16ad5c: 0xdfb00010
    ctx->pc = 0x16ad5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16ad60:
    // 0x16ad60: 0xdfb10018
    ctx->pc = 0x16ad60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_16ad64:
    // 0x16ad64: 0xdfb20020
    ctx->pc = 0x16ad64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16ad68:
    // 0x16ad68: 0xdfb30028
    ctx->pc = 0x16ad68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_16ad6c:
    // 0x16ad6c: 0xdfb40030
    ctx->pc = 0x16ad6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16ad70:
    // 0x16ad70: 0xdfb50038
    ctx->pc = 0x16ad70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_16ad74:
    // 0x16ad74: 0xdfbf0040
    ctx->pc = 0x16ad74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16ad78:
    // 0x16ad78: 0x3e00008
label_16ad7c:
    if (ctx->pc == 0x16AD7Cu) {
        ctx->pc = 0x16AD7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x16AD80u;
        goto label_fallthrough_0x16ad78;
    }
    ctx->pc = 0x16AD78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AD7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16ACA8u: goto label_16aca8;
            case 0x16ACACu: goto label_16acac;
            case 0x16ACB0u: goto label_16acb0;
            case 0x16ACB4u: goto label_16acb4;
            case 0x16ACB8u: goto label_16acb8;
            case 0x16ACBCu: goto label_16acbc;
            case 0x16ACC0u: goto label_16acc0;
            case 0x16ACC4u: goto label_16acc4;
            case 0x16ACC8u: goto label_16acc8;
            case 0x16ACCCu: goto label_16accc;
            case 0x16ACD0u: goto label_16acd0;
            case 0x16ACD4u: goto label_16acd4;
            case 0x16ACD8u: goto label_16acd8;
            case 0x16ACDCu: goto label_16acdc;
            case 0x16ACE0u: goto label_16ace0;
            case 0x16ACE4u: goto label_16ace4;
            case 0x16ACE8u: goto label_16ace8;
            case 0x16ACECu: goto label_16acec;
            case 0x16ACF0u: goto label_16acf0;
            case 0x16ACF4u: goto label_16acf4;
            case 0x16ACF8u: goto label_16acf8;
            case 0x16ACFCu: goto label_16acfc;
            case 0x16AD00u: goto label_16ad00;
            case 0x16AD04u: goto label_16ad04;
            case 0x16AD08u: goto label_16ad08;
            case 0x16AD0Cu: goto label_16ad0c;
            case 0x16AD10u: goto label_16ad10;
            case 0x16AD14u: goto label_16ad14;
            case 0x16AD18u: goto label_16ad18;
            case 0x16AD1Cu: goto label_16ad1c;
            case 0x16AD20u: goto label_16ad20;
            case 0x16AD24u: goto label_16ad24;
            case 0x16AD28u: goto label_16ad28;
            case 0x16AD2Cu: goto label_16ad2c;
            case 0x16AD30u: goto label_16ad30;
            case 0x16AD34u: goto label_16ad34;
            case 0x16AD38u: goto label_16ad38;
            case 0x16AD3Cu: goto label_16ad3c;
            case 0x16AD40u: goto label_16ad40;
            case 0x16AD44u: goto label_16ad44;
            case 0x16AD48u: goto label_16ad48;
            case 0x16AD4Cu: goto label_16ad4c;
            case 0x16AD50u: goto label_16ad50;
            case 0x16AD54u: goto label_16ad54;
            case 0x16AD58u: goto label_16ad58;
            case 0x16AD5Cu: goto label_16ad5c;
            case 0x16AD60u: goto label_16ad60;
            case 0x16AD64u: goto label_16ad64;
            case 0x16AD68u: goto label_16ad68;
            case 0x16AD6Cu: goto label_16ad6c;
            case 0x16AD70u: goto label_16ad70;
            case 0x16AD74u: goto label_16ad74;
            case 0x16AD78u: goto label_16ad78;
            case 0x16AD7Cu: goto label_16ad7c;
            default: break;
        }
        return;
    }
label_fallthrough_0x16ad78:
    ctx->pc = 0x16AD80u;
}
