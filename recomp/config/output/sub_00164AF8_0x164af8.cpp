#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00164AF8
// Address: 0x164af8 - 0x164b70
void sub_00164AF8_0x164af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x164af8u;

label_164af8:
    // 0x164af8: 0x27bdffd0
    ctx->pc = 0x164af8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_164afc:
    // 0x164afc: 0xffb20020
    ctx->pc = 0x164afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_164b00:
    // 0x164b00: 0xa0902d
    ctx->pc = 0x164b00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_164b04:
    // 0x164b04: 0xffb00010
    ctx->pc = 0x164b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_164b08:
    // 0x164b08: 0x80802d
    ctx->pc = 0x164b08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_164b0c:
    // 0x164b0c: 0xffb10018
    ctx->pc = 0x164b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_164b10:
    // 0x164b10: 0x3a0282d
    ctx->pc = 0x164b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_164b14:
    // 0x164b14: 0xffbf0028
    ctx->pc = 0x164b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_164b18:
    // 0x164b18: 0x27a60004
    ctx->pc = 0x164b18u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
label_164b1c:
    // 0x164b1c: 0xae400000
    ctx->pc = 0x164b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_164b20:
    // 0x164b20: 0xc05955e
label_164b24:
    if (ctx->pc == 0x164B24u) {
        ctx->pc = 0x164B24u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 7028)));
        ctx->pc = 0x164B28u;
        goto label_164b28;
    }
    ctx->pc = 0x164B20u;
    SET_GPR_U32(ctx, 31, 0x164B28u);
    ctx->pc = 0x164B24u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 7028)));
    ctx->pc = 0x165578u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00165578_0x165578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164B28u; }
    }
    if (ctx->pc != 0x164B28u) { return; }
    ctx->pc = 0x164B28u;
label_164b28:
    // 0x164b28: 0x27a70008
    ctx->pc = 0x164b28u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 8));
label_164b2c:
    // 0x164b2c: 0x1440000a
label_164b30:
    if (ctx->pc == 0x164B30u) {
        ctx->pc = 0x164B30u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x164B34u;
        goto label_164b34;
    }
    ctx->pc = 0x164B2Cu;
    {
        const bool branch_taken_0x164b2c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x164B30u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x164b2c) {
            ctx->pc = 0x164B58u;
            goto label_164b58;
        }
    }
    ctx->pc = 0x164B34u;
label_164b34:
    // 0x164b34: 0x8fa20004
    ctx->pc = 0x164b34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_164b38:
    // 0x164b38: 0x8fa50000
    ctx->pc = 0x164b38u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_164b3c:
    // 0x164b3c: 0x8e23003c
    ctx->pc = 0x164b3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_164b40:
    // 0x164b40: 0x40302d
    ctx->pc = 0x164b40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_164b44:
    // 0x164b44: 0x60f809
label_164b48:
    if (ctx->pc == 0x164B48u) {
        ctx->pc = 0x164B48u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x164B4Cu;
        goto label_164b4c;
    }
    ctx->pc = 0x164B44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x164B4Cu);
        ctx->pc = 0x164B48u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x164AF8u: goto label_164af8;
            case 0x164AFCu: goto label_164afc;
            case 0x164B00u: goto label_164b00;
            case 0x164B04u: goto label_164b04;
            case 0x164B08u: goto label_164b08;
            case 0x164B0Cu: goto label_164b0c;
            case 0x164B10u: goto label_164b10;
            case 0x164B14u: goto label_164b14;
            case 0x164B18u: goto label_164b18;
            case 0x164B1Cu: goto label_164b1c;
            case 0x164B20u: goto label_164b20;
            case 0x164B24u: goto label_164b24;
            case 0x164B28u: goto label_164b28;
            case 0x164B2Cu: goto label_164b2c;
            case 0x164B30u: goto label_164b30;
            case 0x164B34u: goto label_164b34;
            case 0x164B38u: goto label_164b38;
            case 0x164B3Cu: goto label_164b3c;
            case 0x164B40u: goto label_164b40;
            case 0x164B44u: goto label_164b44;
            case 0x164B48u: goto label_164b48;
            case 0x164B4Cu: goto label_164b4c;
            case 0x164B50u: goto label_164b50;
            case 0x164B54u: goto label_164b54;
            case 0x164B58u: goto label_164b58;
            case 0x164B5Cu: goto label_164b5c;
            case 0x164B60u: goto label_164b60;
            case 0x164B64u: goto label_164b64;
            case 0x164B68u: goto label_164b68;
            case 0x164B6Cu: goto label_164b6c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x164B4Cu; }
            if (ctx->pc != 0x164B4Cu) { return; }
        }
    }
    ctx->pc = 0x164B4Cu;
label_164b4c:
    // 0x164b4c: 0x200202d
    ctx->pc = 0x164b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_164b50:
    // 0x164b50: 0xc059570
label_164b54:
    if (ctx->pc == 0x164B54u) {
        ctx->pc = 0x164B54u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->pc = 0x164B58u;
        goto label_164b58;
    }
    ctx->pc = 0x164B50u;
    SET_GPR_U32(ctx, 31, 0x164B58u);
    ctx->pc = 0x164B54u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x1655C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001655C0_0x1655c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164B58u; }
    }
    if (ctx->pc != 0x164B58u) { return; }
    ctx->pc = 0x164B58u;
label_164b58:
    // 0x164b58: 0xdfb00010
    ctx->pc = 0x164b58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_164b5c:
    // 0x164b5c: 0xdfb10018
    ctx->pc = 0x164b5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_164b60:
    // 0x164b60: 0xdfb20020
    ctx->pc = 0x164b60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_164b64:
    // 0x164b64: 0xdfbf0028
    ctx->pc = 0x164b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_164b68:
    // 0x164b68: 0x3e00008
label_164b6c:
    if (ctx->pc == 0x164B6Cu) {
        ctx->pc = 0x164B6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x164B70u;
        goto label_fallthrough_0x164b68;
    }
    ctx->pc = 0x164B68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164B6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x164AF8u: goto label_164af8;
            case 0x164AFCu: goto label_164afc;
            case 0x164B00u: goto label_164b00;
            case 0x164B04u: goto label_164b04;
            case 0x164B08u: goto label_164b08;
            case 0x164B0Cu: goto label_164b0c;
            case 0x164B10u: goto label_164b10;
            case 0x164B14u: goto label_164b14;
            case 0x164B18u: goto label_164b18;
            case 0x164B1Cu: goto label_164b1c;
            case 0x164B20u: goto label_164b20;
            case 0x164B24u: goto label_164b24;
            case 0x164B28u: goto label_164b28;
            case 0x164B2Cu: goto label_164b2c;
            case 0x164B30u: goto label_164b30;
            case 0x164B34u: goto label_164b34;
            case 0x164B38u: goto label_164b38;
            case 0x164B3Cu: goto label_164b3c;
            case 0x164B40u: goto label_164b40;
            case 0x164B44u: goto label_164b44;
            case 0x164B48u: goto label_164b48;
            case 0x164B4Cu: goto label_164b4c;
            case 0x164B50u: goto label_164b50;
            case 0x164B54u: goto label_164b54;
            case 0x164B58u: goto label_164b58;
            case 0x164B5Cu: goto label_164b5c;
            case 0x164B60u: goto label_164b60;
            case 0x164B64u: goto label_164b64;
            case 0x164B68u: goto label_164b68;
            case 0x164B6Cu: goto label_164b6c;
            default: break;
        }
        return;
    }
label_fallthrough_0x164b68:
    ctx->pc = 0x164B70u;
}
