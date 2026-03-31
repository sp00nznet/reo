#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00157D40
// Address: 0x157d40 - 0x157dc0
void sub_00157D40_0x157d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x157d40u;

label_157d40:
    // 0x157d40: 0x90860000
    ctx->pc = 0x157d40u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_157d44:
    // 0x157d44: 0x90820001
    ctx->pc = 0x157d44u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_157d48:
    // 0x157d48: 0x63200
    ctx->pc = 0x157d48u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_157d4c:
    // 0x157d4c: 0x90830002
    ctx->pc = 0x157d4cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_157d50:
    // 0x157d50: 0xc23025
    ctx->pc = 0x157d50u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_157d54:
    // 0x157d54: 0x90850003
    ctx->pc = 0x157d54u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_157d58:
    // 0x157d58: 0x63200
    ctx->pc = 0x157d58u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_157d5c:
    // 0x157d5c: 0xc33025
    ctx->pc = 0x157d5cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_157d60:
    // 0x157d60: 0x63200
    ctx->pc = 0x157d60u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_157d64:
    // 0x157d64: 0xc53025
    ctx->pc = 0x157d64u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_157d68:
    // 0x157d68: 0x24c3fe47
    ctx->pc = 0x157d68u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 4294966855));
label_157d6c:
    // 0x157d6c: 0x2c620007
    ctx->pc = 0x157d6cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 7));
label_157d70:
    // 0x157d70: 0x10400010
label_157d74:
    if (ctx->pc == 0x157D74u) {
        ctx->pc = 0x157D74u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 4294966848));
        ctx->pc = 0x157D78u;
        goto label_157d78;
    }
    ctx->pc = 0x157D70u;
    {
        const bool branch_taken_0x157d70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x157D74u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 4294966848));
        if (branch_taken_0x157d70) {
            ctx->pc = 0x157DB4u;
            goto label_157db4;
        }
    }
    ctx->pc = 0x157D78u;
label_157d78:
    // 0x157d78: 0x31080
    ctx->pc = 0x157d78u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_157d7c:
    // 0x157d7c: 0x3c030024
    ctx->pc = 0x157d7cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
label_157d80:
    // 0x157d80: 0x621821
    ctx->pc = 0x157d80u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_157d84:
    // 0x157d84: 0x8c63e550
    ctx->pc = 0x157d84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294960464)));
label_157d88:
    // 0x157d88: 0x600008
label_157d8c:
    if (ctx->pc == 0x157D8Cu) {
        ctx->pc = 0x157D90u;
        goto label_157d90;
    }
    ctx->pc = 0x157D88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x157D40u: goto label_157d40;
            case 0x157D44u: goto label_157d44;
            case 0x157D48u: goto label_157d48;
            case 0x157D4Cu: goto label_157d4c;
            case 0x157D50u: goto label_157d50;
            case 0x157D54u: goto label_157d54;
            case 0x157D58u: goto label_157d58;
            case 0x157D5Cu: goto label_157d5c;
            case 0x157D60u: goto label_157d60;
            case 0x157D64u: goto label_157d64;
            case 0x157D68u: goto label_157d68;
            case 0x157D6Cu: goto label_157d6c;
            case 0x157D70u: goto label_157d70;
            case 0x157D74u: goto label_157d74;
            case 0x157D78u: goto label_157d78;
            case 0x157D7Cu: goto label_157d7c;
            case 0x157D80u: goto label_157d80;
            case 0x157D84u: goto label_157d84;
            case 0x157D88u: goto label_157d88;
            case 0x157D8Cu: goto label_157d8c;
            case 0x157D90u: goto label_157d90;
            case 0x157D94u: goto label_157d94;
            case 0x157D98u: goto label_157d98;
            case 0x157D9Cu: goto label_157d9c;
            case 0x157DA0u: goto label_157da0;
            case 0x157DA4u: goto label_157da4;
            case 0x157DA8u: goto label_157da8;
            case 0x157DACu: goto label_157dac;
            case 0x157DB0u: goto label_157db0;
            case 0x157DB4u: goto label_157db4;
            case 0x157DB8u: goto label_157db8;
            case 0x157DBCu: goto label_157dbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x157D90u;
label_157d90:
    // 0x157d90: 0x3e00008
label_157d94:
    if (ctx->pc == 0x157D94u) {
        ctx->pc = 0x157D94u;
        SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
        ctx->pc = 0x157D98u;
        goto label_157d98;
    }
    ctx->pc = 0x157D90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157D94u;
        SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x157D40u: goto label_157d40;
            case 0x157D44u: goto label_157d44;
            case 0x157D48u: goto label_157d48;
            case 0x157D4Cu: goto label_157d4c;
            case 0x157D50u: goto label_157d50;
            case 0x157D54u: goto label_157d54;
            case 0x157D58u: goto label_157d58;
            case 0x157D5Cu: goto label_157d5c;
            case 0x157D60u: goto label_157d60;
            case 0x157D64u: goto label_157d64;
            case 0x157D68u: goto label_157d68;
            case 0x157D6Cu: goto label_157d6c;
            case 0x157D70u: goto label_157d70;
            case 0x157D74u: goto label_157d74;
            case 0x157D78u: goto label_157d78;
            case 0x157D7Cu: goto label_157d7c;
            case 0x157D80u: goto label_157d80;
            case 0x157D84u: goto label_157d84;
            case 0x157D88u: goto label_157d88;
            case 0x157D8Cu: goto label_157d8c;
            case 0x157D90u: goto label_157d90;
            case 0x157D94u: goto label_157d94;
            case 0x157D98u: goto label_157d98;
            case 0x157D9Cu: goto label_157d9c;
            case 0x157DA0u: goto label_157da0;
            case 0x157DA4u: goto label_157da4;
            case 0x157DA8u: goto label_157da8;
            case 0x157DACu: goto label_157dac;
            case 0x157DB0u: goto label_157db0;
            case 0x157DB4u: goto label_157db4;
            case 0x157DB8u: goto label_157db8;
            case 0x157DBCu: goto label_157dbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x157D98u;
label_157d98:
    // 0x157d98: 0x3e00008
label_157d9c:
    if (ctx->pc == 0x157D9Cu) {
        ctx->pc = 0x157D9Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
        ctx->pc = 0x157DA0u;
        goto label_157da0;
    }
    ctx->pc = 0x157D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157D9Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x157D40u: goto label_157d40;
            case 0x157D44u: goto label_157d44;
            case 0x157D48u: goto label_157d48;
            case 0x157D4Cu: goto label_157d4c;
            case 0x157D50u: goto label_157d50;
            case 0x157D54u: goto label_157d54;
            case 0x157D58u: goto label_157d58;
            case 0x157D5Cu: goto label_157d5c;
            case 0x157D60u: goto label_157d60;
            case 0x157D64u: goto label_157d64;
            case 0x157D68u: goto label_157d68;
            case 0x157D6Cu: goto label_157d6c;
            case 0x157D70u: goto label_157d70;
            case 0x157D74u: goto label_157d74;
            case 0x157D78u: goto label_157d78;
            case 0x157D7Cu: goto label_157d7c;
            case 0x157D80u: goto label_157d80;
            case 0x157D84u: goto label_157d84;
            case 0x157D88u: goto label_157d88;
            case 0x157D8Cu: goto label_157d8c;
            case 0x157D90u: goto label_157d90;
            case 0x157D94u: goto label_157d94;
            case 0x157D98u: goto label_157d98;
            case 0x157D9Cu: goto label_157d9c;
            case 0x157DA0u: goto label_157da0;
            case 0x157DA4u: goto label_157da4;
            case 0x157DA8u: goto label_157da8;
            case 0x157DACu: goto label_157dac;
            case 0x157DB0u: goto label_157db0;
            case 0x157DB4u: goto label_157db4;
            case 0x157DB8u: goto label_157db8;
            case 0x157DBCu: goto label_157dbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x157DA0u;
label_157da0:
    // 0x157da0: 0x3e00008
label_157da4:
    if (ctx->pc == 0x157DA4u) {
        ctx->pc = 0x157DA4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)8 << 16));
        ctx->pc = 0x157DA8u;
        goto label_157da8;
    }
    ctx->pc = 0x157DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157DA4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)8 << 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x157D40u: goto label_157d40;
            case 0x157D44u: goto label_157d44;
            case 0x157D48u: goto label_157d48;
            case 0x157D4Cu: goto label_157d4c;
            case 0x157D50u: goto label_157d50;
            case 0x157D54u: goto label_157d54;
            case 0x157D58u: goto label_157d58;
            case 0x157D5Cu: goto label_157d5c;
            case 0x157D60u: goto label_157d60;
            case 0x157D64u: goto label_157d64;
            case 0x157D68u: goto label_157d68;
            case 0x157D6Cu: goto label_157d6c;
            case 0x157D70u: goto label_157d70;
            case 0x157D74u: goto label_157d74;
            case 0x157D78u: goto label_157d78;
            case 0x157D7Cu: goto label_157d7c;
            case 0x157D80u: goto label_157d80;
            case 0x157D84u: goto label_157d84;
            case 0x157D88u: goto label_157d88;
            case 0x157D8Cu: goto label_157d8c;
            case 0x157D90u: goto label_157d90;
            case 0x157D94u: goto label_157d94;
            case 0x157D98u: goto label_157d98;
            case 0x157D9Cu: goto label_157d9c;
            case 0x157DA0u: goto label_157da0;
            case 0x157DA4u: goto label_157da4;
            case 0x157DA8u: goto label_157da8;
            case 0x157DACu: goto label_157dac;
            case 0x157DB0u: goto label_157db0;
            case 0x157DB4u: goto label_157db4;
            case 0x157DB8u: goto label_157db8;
            case 0x157DBCu: goto label_157dbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x157DA8u;
label_157da8:
    // 0x157da8: 0x3e00008
label_157dac:
    if (ctx->pc == 0x157DACu) {
        ctx->pc = 0x157DACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)4 << 16));
        ctx->pc = 0x157DB0u;
        goto label_157db0;
    }
    ctx->pc = 0x157DA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157DACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)4 << 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x157D40u: goto label_157d40;
            case 0x157D44u: goto label_157d44;
            case 0x157D48u: goto label_157d48;
            case 0x157D4Cu: goto label_157d4c;
            case 0x157D50u: goto label_157d50;
            case 0x157D54u: goto label_157d54;
            case 0x157D58u: goto label_157d58;
            case 0x157D5Cu: goto label_157d5c;
            case 0x157D60u: goto label_157d60;
            case 0x157D64u: goto label_157d64;
            case 0x157D68u: goto label_157d68;
            case 0x157D6Cu: goto label_157d6c;
            case 0x157D70u: goto label_157d70;
            case 0x157D74u: goto label_157d74;
            case 0x157D78u: goto label_157d78;
            case 0x157D7Cu: goto label_157d7c;
            case 0x157D80u: goto label_157d80;
            case 0x157D84u: goto label_157d84;
            case 0x157D88u: goto label_157d88;
            case 0x157D8Cu: goto label_157d8c;
            case 0x157D90u: goto label_157d90;
            case 0x157D94u: goto label_157d94;
            case 0x157D98u: goto label_157d98;
            case 0x157D9Cu: goto label_157d9c;
            case 0x157DA0u: goto label_157da0;
            case 0x157DA4u: goto label_157da4;
            case 0x157DA8u: goto label_157da8;
            case 0x157DACu: goto label_157dac;
            case 0x157DB0u: goto label_157db0;
            case 0x157DB4u: goto label_157db4;
            case 0x157DB8u: goto label_157db8;
            case 0x157DBCu: goto label_157dbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x157DB0u;
label_157db0:
    // 0x157db0: 0x24c2fe40
    ctx->pc = 0x157db0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 4294966848));
label_157db4:
    // 0x157db4: 0x2c420030
    ctx->pc = 0x157db4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 48));
label_157db8:
    // 0x157db8: 0x3e00008
label_157dbc:
    if (ctx->pc == 0x157DBCu) {
        ctx->pc = 0x157DBCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 18));
        ctx->pc = 0x157DC0u;
        goto label_fallthrough_0x157db8;
    }
    ctx->pc = 0x157DB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157DBCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 18));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x157D40u: goto label_157d40;
            case 0x157D44u: goto label_157d44;
            case 0x157D48u: goto label_157d48;
            case 0x157D4Cu: goto label_157d4c;
            case 0x157D50u: goto label_157d50;
            case 0x157D54u: goto label_157d54;
            case 0x157D58u: goto label_157d58;
            case 0x157D5Cu: goto label_157d5c;
            case 0x157D60u: goto label_157d60;
            case 0x157D64u: goto label_157d64;
            case 0x157D68u: goto label_157d68;
            case 0x157D6Cu: goto label_157d6c;
            case 0x157D70u: goto label_157d70;
            case 0x157D74u: goto label_157d74;
            case 0x157D78u: goto label_157d78;
            case 0x157D7Cu: goto label_157d7c;
            case 0x157D80u: goto label_157d80;
            case 0x157D84u: goto label_157d84;
            case 0x157D88u: goto label_157d88;
            case 0x157D8Cu: goto label_157d8c;
            case 0x157D90u: goto label_157d90;
            case 0x157D94u: goto label_157d94;
            case 0x157D98u: goto label_157d98;
            case 0x157D9Cu: goto label_157d9c;
            case 0x157DA0u: goto label_157da0;
            case 0x157DA4u: goto label_157da4;
            case 0x157DA8u: goto label_157da8;
            case 0x157DACu: goto label_157dac;
            case 0x157DB0u: goto label_157db0;
            case 0x157DB4u: goto label_157db4;
            case 0x157DB8u: goto label_157db8;
            case 0x157DBCu: goto label_157dbc;
            default: break;
        }
        return;
    }
label_fallthrough_0x157db8:
    ctx->pc = 0x157DC0u;
}
