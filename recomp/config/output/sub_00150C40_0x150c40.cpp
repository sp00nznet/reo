#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00150C40
// Address: 0x150c40 - 0x150e00
void sub_00150C40_0x150c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x150c40u;

label_150c40:
    // 0x150c40: 0x27bdffb0
    ctx->pc = 0x150c40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_150c44:
    // 0x150c44: 0xffb10028
    ctx->pc = 0x150c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_150c48:
    // 0x150c48: 0xa0882d
    ctx->pc = 0x150c48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_150c4c:
    // 0x150c4c: 0xffb20030
    ctx->pc = 0x150c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_150c50:
    // 0x150c50: 0x80902d
    ctx->pc = 0x150c50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_150c54:
    // 0x150c54: 0xffb30038
    ctx->pc = 0x150c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_150c58:
    // 0x150c58: 0x27b30010
    ctx->pc = 0x150c58u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 16));
label_150c5c:
    // 0x150c5c: 0xffb00020
    ctx->pc = 0x150c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_150c60:
    // 0x150c60: 0x1000005a
label_150c64:
    if (ctx->pc == 0x150C64u) {
        ctx->pc = 0x150C64u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->pc = 0x150C68u;
        goto label_150c68;
    }
    ctx->pc = 0x150C60u;
    {
        const bool branch_taken_0x150c60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x150C64u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        if (branch_taken_0x150c60) {
            ctx->pc = 0x150DCCu;
            goto label_150dcc;
        }
    }
    ctx->pc = 0x150C68u;
label_150c68:
    // 0x150c68: 0x3c067fff
    ctx->pc = 0x150c68u;
    SET_GPR_U32(ctx, 6, ((uint32_t)32767 << 16));
label_150c6c:
    // 0x150c6c: 0x220202d
    ctx->pc = 0x150c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_150c70:
    // 0x150c70: 0x24050001
    ctx->pc = 0x150c70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_150c74:
    // 0x150c74: 0x8c620018
    ctx->pc = 0x150c74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_150c78:
    // 0x150c78: 0x34c6ffff
    ctx->pc = 0x150c78u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
label_150c7c:
    // 0x150c7c: 0x40f809
label_150c80:
    if (ctx->pc == 0x150C80u) {
        ctx->pc = 0x150C80u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x150C84u;
        goto label_150c84;
    }
    ctx->pc = 0x150C7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x150C84u);
        ctx->pc = 0x150C80u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x150C40u: goto label_150c40;
            case 0x150C44u: goto label_150c44;
            case 0x150C48u: goto label_150c48;
            case 0x150C4Cu: goto label_150c4c;
            case 0x150C50u: goto label_150c50;
            case 0x150C54u: goto label_150c54;
            case 0x150C58u: goto label_150c58;
            case 0x150C5Cu: goto label_150c5c;
            case 0x150C60u: goto label_150c60;
            case 0x150C64u: goto label_150c64;
            case 0x150C68u: goto label_150c68;
            case 0x150C6Cu: goto label_150c6c;
            case 0x150C70u: goto label_150c70;
            case 0x150C74u: goto label_150c74;
            case 0x150C78u: goto label_150c78;
            case 0x150C7Cu: goto label_150c7c;
            case 0x150C80u: goto label_150c80;
            case 0x150C84u: goto label_150c84;
            case 0x150C88u: goto label_150c88;
            case 0x150C8Cu: goto label_150c8c;
            case 0x150C90u: goto label_150c90;
            case 0x150C94u: goto label_150c94;
            case 0x150C98u: goto label_150c98;
            case 0x150C9Cu: goto label_150c9c;
            case 0x150CA0u: goto label_150ca0;
            case 0x150CA4u: goto label_150ca4;
            case 0x150CA8u: goto label_150ca8;
            case 0x150CACu: goto label_150cac;
            case 0x150CB0u: goto label_150cb0;
            case 0x150CB4u: goto label_150cb4;
            case 0x150CB8u: goto label_150cb8;
            case 0x150CBCu: goto label_150cbc;
            case 0x150CC0u: goto label_150cc0;
            case 0x150CC4u: goto label_150cc4;
            case 0x150CC8u: goto label_150cc8;
            case 0x150CCCu: goto label_150ccc;
            case 0x150CD0u: goto label_150cd0;
            case 0x150CD4u: goto label_150cd4;
            case 0x150CD8u: goto label_150cd8;
            case 0x150CDCu: goto label_150cdc;
            case 0x150CE0u: goto label_150ce0;
            case 0x150CE4u: goto label_150ce4;
            case 0x150CE8u: goto label_150ce8;
            case 0x150CECu: goto label_150cec;
            case 0x150CF0u: goto label_150cf0;
            case 0x150CF4u: goto label_150cf4;
            case 0x150CF8u: goto label_150cf8;
            case 0x150CFCu: goto label_150cfc;
            case 0x150D00u: goto label_150d00;
            case 0x150D04u: goto label_150d04;
            case 0x150D08u: goto label_150d08;
            case 0x150D0Cu: goto label_150d0c;
            case 0x150D10u: goto label_150d10;
            case 0x150D14u: goto label_150d14;
            case 0x150D18u: goto label_150d18;
            case 0x150D1Cu: goto label_150d1c;
            case 0x150D20u: goto label_150d20;
            case 0x150D24u: goto label_150d24;
            case 0x150D28u: goto label_150d28;
            case 0x150D2Cu: goto label_150d2c;
            case 0x150D30u: goto label_150d30;
            case 0x150D34u: goto label_150d34;
            case 0x150D38u: goto label_150d38;
            case 0x150D3Cu: goto label_150d3c;
            case 0x150D40u: goto label_150d40;
            case 0x150D44u: goto label_150d44;
            case 0x150D48u: goto label_150d48;
            case 0x150D4Cu: goto label_150d4c;
            case 0x150D50u: goto label_150d50;
            case 0x150D54u: goto label_150d54;
            case 0x150D58u: goto label_150d58;
            case 0x150D5Cu: goto label_150d5c;
            case 0x150D60u: goto label_150d60;
            case 0x150D64u: goto label_150d64;
            case 0x150D68u: goto label_150d68;
            case 0x150D6Cu: goto label_150d6c;
            case 0x150D70u: goto label_150d70;
            case 0x150D74u: goto label_150d74;
            case 0x150D78u: goto label_150d78;
            case 0x150D7Cu: goto label_150d7c;
            case 0x150D80u: goto label_150d80;
            case 0x150D84u: goto label_150d84;
            case 0x150D88u: goto label_150d88;
            case 0x150D8Cu: goto label_150d8c;
            case 0x150D90u: goto label_150d90;
            case 0x150D94u: goto label_150d94;
            case 0x150D98u: goto label_150d98;
            case 0x150D9Cu: goto label_150d9c;
            case 0x150DA0u: goto label_150da0;
            case 0x150DA4u: goto label_150da4;
            case 0x150DA8u: goto label_150da8;
            case 0x150DACu: goto label_150dac;
            case 0x150DB0u: goto label_150db0;
            case 0x150DB4u: goto label_150db4;
            case 0x150DB8u: goto label_150db8;
            case 0x150DBCu: goto label_150dbc;
            case 0x150DC0u: goto label_150dc0;
            case 0x150DC4u: goto label_150dc4;
            case 0x150DC8u: goto label_150dc8;
            case 0x150DCCu: goto label_150dcc;
            case 0x150DD0u: goto label_150dd0;
            case 0x150DD4u: goto label_150dd4;
            case 0x150DD8u: goto label_150dd8;
            case 0x150DDCu: goto label_150ddc;
            case 0x150DE0u: goto label_150de0;
            case 0x150DE4u: goto label_150de4;
            case 0x150DE8u: goto label_150de8;
            case 0x150DECu: goto label_150dec;
            case 0x150DF0u: goto label_150df0;
            case 0x150DF4u: goto label_150df4;
            case 0x150DF8u: goto label_150df8;
            case 0x150DFCu: goto label_150dfc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x150C84u; }
            if (ctx->pc != 0x150C84u) { return; }
        }
    }
    ctx->pc = 0x150C84u;
label_150c84:
    // 0x150c84: 0x24020010
    ctx->pc = 0x150c84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
label_150c88:
    // 0x150c88: 0x12020027
label_150c8c:
    if (ctx->pc == 0x150C8Cu) {
        ctx->pc = 0x150C8Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x150C90u;
        goto label_150c90;
    }
    ctx->pc = 0x150C88u;
    {
        const bool branch_taken_0x150c88 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x150C8Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x150c88) {
            ctx->pc = 0x150D28u;
            goto label_150d28;
        }
    }
    ctx->pc = 0x150C90u;
label_150c90:
    // 0x150c90: 0x2e020011
    ctx->pc = 0x150c90u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 17));
label_150c94:
    // 0x150c94: 0x10400008
label_150c98:
    if (ctx->pc == 0x150C98u) {
        ctx->pc = 0x150C98u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x150C9Cu;
        goto label_150c9c;
    }
    ctx->pc = 0x150C94u;
    {
        const bool branch_taken_0x150c94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x150C98u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
        if (branch_taken_0x150c94) {
            ctx->pc = 0x150CB8u;
            goto label_150cb8;
        }
    }
    ctx->pc = 0x150C9Cu;
label_150c9c:
    // 0x150c9c: 0x24020004
    ctx->pc = 0x150c9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_150ca0:
    // 0x150ca0: 0x1202002b
label_150ca4:
    if (ctx->pc == 0x150CA4u) {
        ctx->pc = 0x150CA4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x150CA8u;
        goto label_150ca8;
    }
    ctx->pc = 0x150CA0u;
    {
        const bool branch_taken_0x150ca0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x150CA4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x150ca0) {
            ctx->pc = 0x150D50u;
            goto label_150d50;
        }
    }
    ctx->pc = 0x150CA8u;
label_150ca8:
    // 0x150ca8: 0x12020025
label_150cac:
    if (ctx->pc == 0x150CACu) {
        ctx->pc = 0x150CACu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x150CB0u;
        goto label_150cb0;
    }
    ctx->pc = 0x150CA8u;
    {
        const bool branch_taken_0x150ca8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x150CACu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x150ca8) {
            ctx->pc = 0x150D40u;
            goto label_150d40;
        }
    }
    ctx->pc = 0x150CB0u;
label_150cb0:
    // 0x150cb0: 0x1000002b
label_150cb4:
    if (ctx->pc == 0x150CB4u) {
        ctx->pc = 0x150CB8u;
        goto label_150cb8;
    }
    ctx->pc = 0x150CB0u;
    {
        const bool branch_taken_0x150cb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x150cb0) {
            ctx->pc = 0x150D60u;
            goto label_150d60;
        }
    }
    ctx->pc = 0x150CB8u;
label_150cb8:
    // 0x150cb8: 0x1202000d
label_150cbc:
    if (ctx->pc == 0x150CBCu) {
        ctx->pc = 0x150CBCu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 65));
        ctx->pc = 0x150CC0u;
        goto label_150cc0;
    }
    ctx->pc = 0x150CB8u;
    {
        const bool branch_taken_0x150cb8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x150CBCu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 65));
        if (branch_taken_0x150cb8) {
            ctx->pc = 0x150CF0u;
            goto label_150cf0;
        }
    }
    ctx->pc = 0x150CC0u;
label_150cc0:
    // 0x150cc0: 0x10400007
label_150cc4:
    if (ctx->pc == 0x150CC4u) {
        ctx->pc = 0x150CC4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x150CC8u;
        goto label_150cc8;
    }
    ctx->pc = 0x150CC0u;
    {
        const bool branch_taken_0x150cc0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x150CC4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
        if (branch_taken_0x150cc0) {
            ctx->pc = 0x150CE0u;
            goto label_150ce0;
        }
    }
    ctx->pc = 0x150CC8u;
label_150cc8:
    // 0x150cc8: 0x24020020
    ctx->pc = 0x150cc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
label_150ccc:
    // 0x150ccc: 0x12020012
label_150cd0:
    if (ctx->pc == 0x150CD0u) {
        ctx->pc = 0x150CD0u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x150CD4u;
        goto label_150cd4;
    }
    ctx->pc = 0x150CCCu;
    {
        const bool branch_taken_0x150ccc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x150CD0u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x150ccc) {
            ctx->pc = 0x150D18u;
            goto label_150d18;
        }
    }
    ctx->pc = 0x150CD4u;
label_150cd4:
    // 0x150cd4: 0x10000022
label_150cd8:
    if (ctx->pc == 0x150CD8u) {
        ctx->pc = 0x150CDCu;
        goto label_150cdc;
    }
    ctx->pc = 0x150CD4u;
    {
        const bool branch_taken_0x150cd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x150cd4) {
            ctx->pc = 0x150D60u;
            goto label_150d60;
        }
    }
    ctx->pc = 0x150CDCu;
label_150cdc:
    // 0x150cdc: 0x0
    ctx->pc = 0x150cdcu;
    // NOP
label_150ce0:
    // 0x150ce0: 0x12020009
label_150ce4:
    if (ctx->pc == 0x150CE4u) {
        ctx->pc = 0x150CE4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x150CE8u;
        goto label_150ce8;
    }
    ctx->pc = 0x150CE0u;
    {
        const bool branch_taken_0x150ce0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x150CE4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x150ce0) {
            ctx->pc = 0x150D08u;
            goto label_150d08;
        }
    }
    ctx->pc = 0x150CE8u;
label_150ce8:
    // 0x150ce8: 0x1000001d
label_150cec:
    if (ctx->pc == 0x150CECu) {
        ctx->pc = 0x150CF0u;
        goto label_150cf0;
    }
    ctx->pc = 0x150CE8u;
    {
        const bool branch_taken_0x150ce8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x150ce8) {
            ctx->pc = 0x150D60u;
            goto label_150d60;
        }
    }
    ctx->pc = 0x150CF0u;
label_150cf0:
    // 0x150cf0: 0x8fa50000
    ctx->pc = 0x150cf0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_150cf4:
    // 0x150cf4: 0xc05444e
label_150cf8:
    if (ctx->pc == 0x150CF8u) {
        ctx->pc = 0x150CF8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x150CFCu;
        goto label_150cfc;
    }
    ctx->pc = 0x150CF4u;
    SET_GPR_U32(ctx, 31, 0x150CFCu);
    ctx->pc = 0x150CF8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x151138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00151138_0x151138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150CFCu; }
    }
    if (ctx->pc != 0x150CFCu) { return; }
    ctx->pc = 0x150CFCu;
label_150cfc:
    // 0x150cfc: 0x10000018
label_150d00:
    if (ctx->pc == 0x150D00u) {
        ctx->pc = 0x150D00u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x150D04u;
        goto label_150d04;
    }
    ctx->pc = 0x150CFCu;
    {
        const bool branch_taken_0x150cfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x150D00u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x150cfc) {
            ctx->pc = 0x150D60u;
            goto label_150d60;
        }
    }
    ctx->pc = 0x150D04u;
label_150d04:
    // 0x150d04: 0x0
    ctx->pc = 0x150d04u;
    // NOP
label_150d08:
    // 0x150d08: 0xc05461e
label_150d0c:
    if (ctx->pc == 0x150D0Cu) {
        ctx->pc = 0x150D0Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x150D10u;
        goto label_150d10;
    }
    ctx->pc = 0x150D08u;
    SET_GPR_U32(ctx, 31, 0x150D10u);
    ctx->pc = 0x150D0Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x151878u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00151878_0x151878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150D10u; }
    }
    if (ctx->pc != 0x150D10u) { return; }
    ctx->pc = 0x150D10u;
label_150d10:
    // 0x150d10: 0x10000013
label_150d14:
    if (ctx->pc == 0x150D14u) {
        ctx->pc = 0x150D14u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x150D18u;
        goto label_150d18;
    }
    ctx->pc = 0x150D10u;
    {
        const bool branch_taken_0x150d10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x150D14u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x150d10) {
            ctx->pc = 0x150D60u;
            goto label_150d60;
        }
    }
    ctx->pc = 0x150D18u;
label_150d18:
    // 0x150d18: 0xc05465c
label_150d1c:
    if (ctx->pc == 0x150D1Cu) {
        ctx->pc = 0x150D1Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x150D20u;
        goto label_150d20;
    }
    ctx->pc = 0x150D18u;
    SET_GPR_U32(ctx, 31, 0x150D20u);
    ctx->pc = 0x150D1Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x151970u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00151970_0x151970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150D20u; }
    }
    if (ctx->pc != 0x150D20u) { return; }
    ctx->pc = 0x150D20u;
label_150d20:
    // 0x150d20: 0x1000000f
label_150d24:
    if (ctx->pc == 0x150D24u) {
        ctx->pc = 0x150D24u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x150D28u;
        goto label_150d28;
    }
    ctx->pc = 0x150D20u;
    {
        const bool branch_taken_0x150d20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x150D24u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x150d20) {
            ctx->pc = 0x150D60u;
            goto label_150d60;
        }
    }
    ctx->pc = 0x150D28u;
label_150d28:
    // 0x150d28: 0x8fa50000
    ctx->pc = 0x150d28u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_150d2c:
    // 0x150d2c: 0xc054730
label_150d30:
    if (ctx->pc == 0x150D30u) {
        ctx->pc = 0x150D30u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x150D34u;
        goto label_150d34;
    }
    ctx->pc = 0x150D2Cu;
    SET_GPR_U32(ctx, 31, 0x150D34u);
    ctx->pc = 0x150D30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x151CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00151CC0_0x151cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150D34u; }
    }
    if (ctx->pc != 0x150D34u) { return; }
    ctx->pc = 0x150D34u;
label_150d34:
    // 0x150d34: 0x1000000a
label_150d38:
    if (ctx->pc == 0x150D38u) {
        ctx->pc = 0x150D38u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x150D3Cu;
        goto label_150d3c;
    }
    ctx->pc = 0x150D34u;
    {
        const bool branch_taken_0x150d34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x150D38u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x150d34) {
            ctx->pc = 0x150D60u;
            goto label_150d60;
        }
    }
    ctx->pc = 0x150D3Cu;
label_150d3c:
    // 0x150d3c: 0x0
    ctx->pc = 0x150d3cu;
    // NOP
label_150d40:
    // 0x150d40: 0xc05531e
label_150d44:
    if (ctx->pc == 0x150D44u) {
        ctx->pc = 0x150D44u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x150D48u;
        goto label_150d48;
    }
    ctx->pc = 0x150D40u;
    SET_GPR_U32(ctx, 31, 0x150D48u);
    ctx->pc = 0x150D44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x154C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00154C78_0x154c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150D48u; }
    }
    if (ctx->pc != 0x150D48u) { return; }
    ctx->pc = 0x150D48u;
label_150d48:
    // 0x150d48: 0x10000005
label_150d4c:
    if (ctx->pc == 0x150D4Cu) {
        ctx->pc = 0x150D4Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x150D50u;
        goto label_150d50;
    }
    ctx->pc = 0x150D48u;
    {
        const bool branch_taken_0x150d48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x150D4Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x150d48) {
            ctx->pc = 0x150D60u;
            goto label_150d60;
        }
    }
    ctx->pc = 0x150D50u;
label_150d50:
    // 0x150d50: 0x8fa50000
    ctx->pc = 0x150d50u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_150d54:
    // 0x150d54: 0xc05546a
label_150d58:
    if (ctx->pc == 0x150D58u) {
        ctx->pc = 0x150D58u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x150D5Cu;
        goto label_150d5c;
    }
    ctx->pc = 0x150D54u;
    SET_GPR_U32(ctx, 31, 0x150D5Cu);
    ctx->pc = 0x150D58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1551A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001551A8_0x1551a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150D5Cu; }
    }
    if (ctx->pc != 0x150D5Cu) { return; }
    ctx->pc = 0x150D5Cu;
label_150d5c:
    // 0x150d5c: 0x40182d
    ctx->pc = 0x150d5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_150d60:
    // 0x150d60: 0x14600009
label_150d64:
    if (ctx->pc == 0x150D64u) {
        ctx->pc = 0x150D64u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x150D68u;
        goto label_150d68;
    }
    ctx->pc = 0x150D60u;
    {
        const bool branch_taken_0x150d60 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x150D64u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x150d60) {
            ctx->pc = 0x150D88u;
            goto label_150d88;
        }
    }
    ctx->pc = 0x150D68u;
label_150d68:
    // 0x150d68: 0x8e230000
    ctx->pc = 0x150d68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_150d6c:
    // 0x150d6c: 0x220202d
    ctx->pc = 0x150d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_150d70:
    // 0x150d70: 0x24050001
    ctx->pc = 0x150d70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_150d74:
    // 0x150d74: 0x8c62001c
    ctx->pc = 0x150d74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_150d78:
    // 0x150d78: 0x40f809
label_150d7c:
    if (ctx->pc == 0x150D7Cu) {
        ctx->pc = 0x150D7Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x150D80u;
        goto label_150d80;
    }
    ctx->pc = 0x150D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x150D80u);
        ctx->pc = 0x150D7Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x150C40u: goto label_150c40;
            case 0x150C44u: goto label_150c44;
            case 0x150C48u: goto label_150c48;
            case 0x150C4Cu: goto label_150c4c;
            case 0x150C50u: goto label_150c50;
            case 0x150C54u: goto label_150c54;
            case 0x150C58u: goto label_150c58;
            case 0x150C5Cu: goto label_150c5c;
            case 0x150C60u: goto label_150c60;
            case 0x150C64u: goto label_150c64;
            case 0x150C68u: goto label_150c68;
            case 0x150C6Cu: goto label_150c6c;
            case 0x150C70u: goto label_150c70;
            case 0x150C74u: goto label_150c74;
            case 0x150C78u: goto label_150c78;
            case 0x150C7Cu: goto label_150c7c;
            case 0x150C80u: goto label_150c80;
            case 0x150C84u: goto label_150c84;
            case 0x150C88u: goto label_150c88;
            case 0x150C8Cu: goto label_150c8c;
            case 0x150C90u: goto label_150c90;
            case 0x150C94u: goto label_150c94;
            case 0x150C98u: goto label_150c98;
            case 0x150C9Cu: goto label_150c9c;
            case 0x150CA0u: goto label_150ca0;
            case 0x150CA4u: goto label_150ca4;
            case 0x150CA8u: goto label_150ca8;
            case 0x150CACu: goto label_150cac;
            case 0x150CB0u: goto label_150cb0;
            case 0x150CB4u: goto label_150cb4;
            case 0x150CB8u: goto label_150cb8;
            case 0x150CBCu: goto label_150cbc;
            case 0x150CC0u: goto label_150cc0;
            case 0x150CC4u: goto label_150cc4;
            case 0x150CC8u: goto label_150cc8;
            case 0x150CCCu: goto label_150ccc;
            case 0x150CD0u: goto label_150cd0;
            case 0x150CD4u: goto label_150cd4;
            case 0x150CD8u: goto label_150cd8;
            case 0x150CDCu: goto label_150cdc;
            case 0x150CE0u: goto label_150ce0;
            case 0x150CE4u: goto label_150ce4;
            case 0x150CE8u: goto label_150ce8;
            case 0x150CECu: goto label_150cec;
            case 0x150CF0u: goto label_150cf0;
            case 0x150CF4u: goto label_150cf4;
            case 0x150CF8u: goto label_150cf8;
            case 0x150CFCu: goto label_150cfc;
            case 0x150D00u: goto label_150d00;
            case 0x150D04u: goto label_150d04;
            case 0x150D08u: goto label_150d08;
            case 0x150D0Cu: goto label_150d0c;
            case 0x150D10u: goto label_150d10;
            case 0x150D14u: goto label_150d14;
            case 0x150D18u: goto label_150d18;
            case 0x150D1Cu: goto label_150d1c;
            case 0x150D20u: goto label_150d20;
            case 0x150D24u: goto label_150d24;
            case 0x150D28u: goto label_150d28;
            case 0x150D2Cu: goto label_150d2c;
            case 0x150D30u: goto label_150d30;
            case 0x150D34u: goto label_150d34;
            case 0x150D38u: goto label_150d38;
            case 0x150D3Cu: goto label_150d3c;
            case 0x150D40u: goto label_150d40;
            case 0x150D44u: goto label_150d44;
            case 0x150D48u: goto label_150d48;
            case 0x150D4Cu: goto label_150d4c;
            case 0x150D50u: goto label_150d50;
            case 0x150D54u: goto label_150d54;
            case 0x150D58u: goto label_150d58;
            case 0x150D5Cu: goto label_150d5c;
            case 0x150D60u: goto label_150d60;
            case 0x150D64u: goto label_150d64;
            case 0x150D68u: goto label_150d68;
            case 0x150D6Cu: goto label_150d6c;
            case 0x150D70u: goto label_150d70;
            case 0x150D74u: goto label_150d74;
            case 0x150D78u: goto label_150d78;
            case 0x150D7Cu: goto label_150d7c;
            case 0x150D80u: goto label_150d80;
            case 0x150D84u: goto label_150d84;
            case 0x150D88u: goto label_150d88;
            case 0x150D8Cu: goto label_150d8c;
            case 0x150D90u: goto label_150d90;
            case 0x150D94u: goto label_150d94;
            case 0x150D98u: goto label_150d98;
            case 0x150D9Cu: goto label_150d9c;
            case 0x150DA0u: goto label_150da0;
            case 0x150DA4u: goto label_150da4;
            case 0x150DA8u: goto label_150da8;
            case 0x150DACu: goto label_150dac;
            case 0x150DB0u: goto label_150db0;
            case 0x150DB4u: goto label_150db4;
            case 0x150DB8u: goto label_150db8;
            case 0x150DBCu: goto label_150dbc;
            case 0x150DC0u: goto label_150dc0;
            case 0x150DC4u: goto label_150dc4;
            case 0x150DC8u: goto label_150dc8;
            case 0x150DCCu: goto label_150dcc;
            case 0x150DD0u: goto label_150dd0;
            case 0x150DD4u: goto label_150dd4;
            case 0x150DD8u: goto label_150dd8;
            case 0x150DDCu: goto label_150ddc;
            case 0x150DE0u: goto label_150de0;
            case 0x150DE4u: goto label_150de4;
            case 0x150DE8u: goto label_150de8;
            case 0x150DECu: goto label_150dec;
            case 0x150DF0u: goto label_150df0;
            case 0x150DF4u: goto label_150df4;
            case 0x150DF8u: goto label_150df8;
            case 0x150DFCu: goto label_150dfc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x150D80u; }
            if (ctx->pc != 0x150D80u) { return; }
        }
    }
    ctx->pc = 0x150D80u;
label_150d80:
    // 0x150d80: 0x10000018
label_150d84:
    if (ctx->pc == 0x150D84u) {
        ctx->pc = 0x150D84u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x150D88u;
        goto label_150d88;
    }
    ctx->pc = 0x150D80u;
    {
        const bool branch_taken_0x150d80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x150D84u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x150d80) {
            ctx->pc = 0x150DE4u;
            goto label_150de4;
        }
    }
    ctx->pc = 0x150D88u;
label_150d88:
    // 0x150d88: 0x3a0202d
    ctx->pc = 0x150d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_150d8c:
    // 0x150d8c: 0x3a0302d
    ctx->pc = 0x150d8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_150d90:
    // 0x150d90: 0x260382d
    ctx->pc = 0x150d90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_150d94:
    // 0x150d94: 0xc0501f8
label_150d98:
    if (ctx->pc == 0x150D98u) {
        ctx->pc = 0x150D98u;
        SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->pc = 0x150D9Cu;
        goto label_150d9c;
    }
    ctx->pc = 0x150D94u;
    SET_GPR_U32(ctx, 31, 0x150D9Cu);
    ctx->pc = 0x150D98u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->pc = 0x1407E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001407E0_0x1407e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150D9Cu; }
    }
    if (ctx->pc != 0x150D9Cu) { return; }
    ctx->pc = 0x150D9Cu;
label_150d9c:
    // 0x150d9c: 0x8e230000
    ctx->pc = 0x150d9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_150da0:
    // 0x150da0: 0x220202d
    ctx->pc = 0x150da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_150da4:
    // 0x150da4: 0x282d
    ctx->pc = 0x150da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_150da8:
    // 0x150da8: 0x8c620020
    ctx->pc = 0x150da8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_150dac:
    // 0x150dac: 0x40f809
label_150db0:
    if (ctx->pc == 0x150DB0u) {
        ctx->pc = 0x150DB0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x150DB4u;
        goto label_150db4;
    }
    ctx->pc = 0x150DACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x150DB4u);
        ctx->pc = 0x150DB0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x150C40u: goto label_150c40;
            case 0x150C44u: goto label_150c44;
            case 0x150C48u: goto label_150c48;
            case 0x150C4Cu: goto label_150c4c;
            case 0x150C50u: goto label_150c50;
            case 0x150C54u: goto label_150c54;
            case 0x150C58u: goto label_150c58;
            case 0x150C5Cu: goto label_150c5c;
            case 0x150C60u: goto label_150c60;
            case 0x150C64u: goto label_150c64;
            case 0x150C68u: goto label_150c68;
            case 0x150C6Cu: goto label_150c6c;
            case 0x150C70u: goto label_150c70;
            case 0x150C74u: goto label_150c74;
            case 0x150C78u: goto label_150c78;
            case 0x150C7Cu: goto label_150c7c;
            case 0x150C80u: goto label_150c80;
            case 0x150C84u: goto label_150c84;
            case 0x150C88u: goto label_150c88;
            case 0x150C8Cu: goto label_150c8c;
            case 0x150C90u: goto label_150c90;
            case 0x150C94u: goto label_150c94;
            case 0x150C98u: goto label_150c98;
            case 0x150C9Cu: goto label_150c9c;
            case 0x150CA0u: goto label_150ca0;
            case 0x150CA4u: goto label_150ca4;
            case 0x150CA8u: goto label_150ca8;
            case 0x150CACu: goto label_150cac;
            case 0x150CB0u: goto label_150cb0;
            case 0x150CB4u: goto label_150cb4;
            case 0x150CB8u: goto label_150cb8;
            case 0x150CBCu: goto label_150cbc;
            case 0x150CC0u: goto label_150cc0;
            case 0x150CC4u: goto label_150cc4;
            case 0x150CC8u: goto label_150cc8;
            case 0x150CCCu: goto label_150ccc;
            case 0x150CD0u: goto label_150cd0;
            case 0x150CD4u: goto label_150cd4;
            case 0x150CD8u: goto label_150cd8;
            case 0x150CDCu: goto label_150cdc;
            case 0x150CE0u: goto label_150ce0;
            case 0x150CE4u: goto label_150ce4;
            case 0x150CE8u: goto label_150ce8;
            case 0x150CECu: goto label_150cec;
            case 0x150CF0u: goto label_150cf0;
            case 0x150CF4u: goto label_150cf4;
            case 0x150CF8u: goto label_150cf8;
            case 0x150CFCu: goto label_150cfc;
            case 0x150D00u: goto label_150d00;
            case 0x150D04u: goto label_150d04;
            case 0x150D08u: goto label_150d08;
            case 0x150D0Cu: goto label_150d0c;
            case 0x150D10u: goto label_150d10;
            case 0x150D14u: goto label_150d14;
            case 0x150D18u: goto label_150d18;
            case 0x150D1Cu: goto label_150d1c;
            case 0x150D20u: goto label_150d20;
            case 0x150D24u: goto label_150d24;
            case 0x150D28u: goto label_150d28;
            case 0x150D2Cu: goto label_150d2c;
            case 0x150D30u: goto label_150d30;
            case 0x150D34u: goto label_150d34;
            case 0x150D38u: goto label_150d38;
            case 0x150D3Cu: goto label_150d3c;
            case 0x150D40u: goto label_150d40;
            case 0x150D44u: goto label_150d44;
            case 0x150D48u: goto label_150d48;
            case 0x150D4Cu: goto label_150d4c;
            case 0x150D50u: goto label_150d50;
            case 0x150D54u: goto label_150d54;
            case 0x150D58u: goto label_150d58;
            case 0x150D5Cu: goto label_150d5c;
            case 0x150D60u: goto label_150d60;
            case 0x150D64u: goto label_150d64;
            case 0x150D68u: goto label_150d68;
            case 0x150D6Cu: goto label_150d6c;
            case 0x150D70u: goto label_150d70;
            case 0x150D74u: goto label_150d74;
            case 0x150D78u: goto label_150d78;
            case 0x150D7Cu: goto label_150d7c;
            case 0x150D80u: goto label_150d80;
            case 0x150D84u: goto label_150d84;
            case 0x150D88u: goto label_150d88;
            case 0x150D8Cu: goto label_150d8c;
            case 0x150D90u: goto label_150d90;
            case 0x150D94u: goto label_150d94;
            case 0x150D98u: goto label_150d98;
            case 0x150D9Cu: goto label_150d9c;
            case 0x150DA0u: goto label_150da0;
            case 0x150DA4u: goto label_150da4;
            case 0x150DA8u: goto label_150da8;
            case 0x150DACu: goto label_150dac;
            case 0x150DB0u: goto label_150db0;
            case 0x150DB4u: goto label_150db4;
            case 0x150DB8u: goto label_150db8;
            case 0x150DBCu: goto label_150dbc;
            case 0x150DC0u: goto label_150dc0;
            case 0x150DC4u: goto label_150dc4;
            case 0x150DC8u: goto label_150dc8;
            case 0x150DCCu: goto label_150dcc;
            case 0x150DD0u: goto label_150dd0;
            case 0x150DD4u: goto label_150dd4;
            case 0x150DD8u: goto label_150dd8;
            case 0x150DDCu: goto label_150ddc;
            case 0x150DE0u: goto label_150de0;
            case 0x150DE4u: goto label_150de4;
            case 0x150DE8u: goto label_150de8;
            case 0x150DECu: goto label_150dec;
            case 0x150DF0u: goto label_150df0;
            case 0x150DF4u: goto label_150df4;
            case 0x150DF8u: goto label_150df8;
            case 0x150DFCu: goto label_150dfc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x150DB4u; }
            if (ctx->pc != 0x150DB4u) { return; }
        }
    }
    ctx->pc = 0x150DB4u;
label_150db4:
    // 0x150db4: 0x8e230000
    ctx->pc = 0x150db4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_150db8:
    // 0x150db8: 0x220202d
    ctx->pc = 0x150db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_150dbc:
    // 0x150dbc: 0x24050001
    ctx->pc = 0x150dbcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_150dc0:
    // 0x150dc0: 0x8c62001c
    ctx->pc = 0x150dc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_150dc4:
    // 0x150dc4: 0x40f809
label_150dc8:
    if (ctx->pc == 0x150DC8u) {
        ctx->pc = 0x150DC8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x150DCCu;
        goto label_150dcc;
    }
    ctx->pc = 0x150DC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x150DCCu);
        ctx->pc = 0x150DC8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x150C40u: goto label_150c40;
            case 0x150C44u: goto label_150c44;
            case 0x150C48u: goto label_150c48;
            case 0x150C4Cu: goto label_150c4c;
            case 0x150C50u: goto label_150c50;
            case 0x150C54u: goto label_150c54;
            case 0x150C58u: goto label_150c58;
            case 0x150C5Cu: goto label_150c5c;
            case 0x150C60u: goto label_150c60;
            case 0x150C64u: goto label_150c64;
            case 0x150C68u: goto label_150c68;
            case 0x150C6Cu: goto label_150c6c;
            case 0x150C70u: goto label_150c70;
            case 0x150C74u: goto label_150c74;
            case 0x150C78u: goto label_150c78;
            case 0x150C7Cu: goto label_150c7c;
            case 0x150C80u: goto label_150c80;
            case 0x150C84u: goto label_150c84;
            case 0x150C88u: goto label_150c88;
            case 0x150C8Cu: goto label_150c8c;
            case 0x150C90u: goto label_150c90;
            case 0x150C94u: goto label_150c94;
            case 0x150C98u: goto label_150c98;
            case 0x150C9Cu: goto label_150c9c;
            case 0x150CA0u: goto label_150ca0;
            case 0x150CA4u: goto label_150ca4;
            case 0x150CA8u: goto label_150ca8;
            case 0x150CACu: goto label_150cac;
            case 0x150CB0u: goto label_150cb0;
            case 0x150CB4u: goto label_150cb4;
            case 0x150CB8u: goto label_150cb8;
            case 0x150CBCu: goto label_150cbc;
            case 0x150CC0u: goto label_150cc0;
            case 0x150CC4u: goto label_150cc4;
            case 0x150CC8u: goto label_150cc8;
            case 0x150CCCu: goto label_150ccc;
            case 0x150CD0u: goto label_150cd0;
            case 0x150CD4u: goto label_150cd4;
            case 0x150CD8u: goto label_150cd8;
            case 0x150CDCu: goto label_150cdc;
            case 0x150CE0u: goto label_150ce0;
            case 0x150CE4u: goto label_150ce4;
            case 0x150CE8u: goto label_150ce8;
            case 0x150CECu: goto label_150cec;
            case 0x150CF0u: goto label_150cf0;
            case 0x150CF4u: goto label_150cf4;
            case 0x150CF8u: goto label_150cf8;
            case 0x150CFCu: goto label_150cfc;
            case 0x150D00u: goto label_150d00;
            case 0x150D04u: goto label_150d04;
            case 0x150D08u: goto label_150d08;
            case 0x150D0Cu: goto label_150d0c;
            case 0x150D10u: goto label_150d10;
            case 0x150D14u: goto label_150d14;
            case 0x150D18u: goto label_150d18;
            case 0x150D1Cu: goto label_150d1c;
            case 0x150D20u: goto label_150d20;
            case 0x150D24u: goto label_150d24;
            case 0x150D28u: goto label_150d28;
            case 0x150D2Cu: goto label_150d2c;
            case 0x150D30u: goto label_150d30;
            case 0x150D34u: goto label_150d34;
            case 0x150D38u: goto label_150d38;
            case 0x150D3Cu: goto label_150d3c;
            case 0x150D40u: goto label_150d40;
            case 0x150D44u: goto label_150d44;
            case 0x150D48u: goto label_150d48;
            case 0x150D4Cu: goto label_150d4c;
            case 0x150D50u: goto label_150d50;
            case 0x150D54u: goto label_150d54;
            case 0x150D58u: goto label_150d58;
            case 0x150D5Cu: goto label_150d5c;
            case 0x150D60u: goto label_150d60;
            case 0x150D64u: goto label_150d64;
            case 0x150D68u: goto label_150d68;
            case 0x150D6Cu: goto label_150d6c;
            case 0x150D70u: goto label_150d70;
            case 0x150D74u: goto label_150d74;
            case 0x150D78u: goto label_150d78;
            case 0x150D7Cu: goto label_150d7c;
            case 0x150D80u: goto label_150d80;
            case 0x150D84u: goto label_150d84;
            case 0x150D88u: goto label_150d88;
            case 0x150D8Cu: goto label_150d8c;
            case 0x150D90u: goto label_150d90;
            case 0x150D94u: goto label_150d94;
            case 0x150D98u: goto label_150d98;
            case 0x150D9Cu: goto label_150d9c;
            case 0x150DA0u: goto label_150da0;
            case 0x150DA4u: goto label_150da4;
            case 0x150DA8u: goto label_150da8;
            case 0x150DACu: goto label_150dac;
            case 0x150DB0u: goto label_150db0;
            case 0x150DB4u: goto label_150db4;
            case 0x150DB8u: goto label_150db8;
            case 0x150DBCu: goto label_150dbc;
            case 0x150DC0u: goto label_150dc0;
            case 0x150DC4u: goto label_150dc4;
            case 0x150DC8u: goto label_150dc8;
            case 0x150DCCu: goto label_150dcc;
            case 0x150DD0u: goto label_150dd0;
            case 0x150DD4u: goto label_150dd4;
            case 0x150DD8u: goto label_150dd8;
            case 0x150DDCu: goto label_150ddc;
            case 0x150DE0u: goto label_150de0;
            case 0x150DE4u: goto label_150de4;
            case 0x150DE8u: goto label_150de8;
            case 0x150DECu: goto label_150dec;
            case 0x150DF0u: goto label_150df0;
            case 0x150DF4u: goto label_150df4;
            case 0x150DF8u: goto label_150df8;
            case 0x150DFCu: goto label_150dfc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x150DCCu; }
            if (ctx->pc != 0x150DCCu) { return; }
        }
    }
    ctx->pc = 0x150DCCu;
label_150dcc:
    // 0x150dcc: 0xc056b7a
label_150dd0:
    if (ctx->pc == 0x150DD0u) {
        ctx->pc = 0x150DD0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x150DD4u;
        goto label_150dd4;
    }
    ctx->pc = 0x150DCCu;
    SET_GPR_U32(ctx, 31, 0x150DD4u);
    ctx->pc = 0x150DD0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15ADE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ADE8_0x15ade8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150DD4u; }
    }
    if (ctx->pc != 0x150DD4u) { return; }
    ctx->pc = 0x150DD4u;
label_150dd4:
    // 0x150dd4: 0x40802d
    ctx->pc = 0x150dd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_150dd8:
    // 0x150dd8: 0x5600ffa3
label_150ddc:
    if (ctx->pc == 0x150DDCu) {
        ctx->pc = 0x150DDCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x150DE0u;
        goto label_150de0;
    }
    ctx->pc = 0x150DD8u;
    {
        const bool branch_taken_0x150dd8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x150dd8) {
            ctx->pc = 0x150DDCu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x150C68u;
            goto label_150c68;
        }
    }
    ctx->pc = 0x150DE0u;
label_150de0:
    // 0x150de0: 0xdfb00020
    ctx->pc = 0x150de0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_150de4:
    // 0x150de4: 0xdfb10028
    ctx->pc = 0x150de4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_150de8:
    // 0x150de8: 0xdfb20030
    ctx->pc = 0x150de8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_150dec:
    // 0x150dec: 0xdfb30038
    ctx->pc = 0x150decu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_150df0:
    // 0x150df0: 0xdfbf0040
    ctx->pc = 0x150df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_150df4:
    // 0x150df4: 0x3e00008
label_150df8:
    if (ctx->pc == 0x150DF8u) {
        ctx->pc = 0x150DF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x150DFCu;
        goto label_150dfc;
    }
    ctx->pc = 0x150DF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150DF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x150C40u: goto label_150c40;
            case 0x150C44u: goto label_150c44;
            case 0x150C48u: goto label_150c48;
            case 0x150C4Cu: goto label_150c4c;
            case 0x150C50u: goto label_150c50;
            case 0x150C54u: goto label_150c54;
            case 0x150C58u: goto label_150c58;
            case 0x150C5Cu: goto label_150c5c;
            case 0x150C60u: goto label_150c60;
            case 0x150C64u: goto label_150c64;
            case 0x150C68u: goto label_150c68;
            case 0x150C6Cu: goto label_150c6c;
            case 0x150C70u: goto label_150c70;
            case 0x150C74u: goto label_150c74;
            case 0x150C78u: goto label_150c78;
            case 0x150C7Cu: goto label_150c7c;
            case 0x150C80u: goto label_150c80;
            case 0x150C84u: goto label_150c84;
            case 0x150C88u: goto label_150c88;
            case 0x150C8Cu: goto label_150c8c;
            case 0x150C90u: goto label_150c90;
            case 0x150C94u: goto label_150c94;
            case 0x150C98u: goto label_150c98;
            case 0x150C9Cu: goto label_150c9c;
            case 0x150CA0u: goto label_150ca0;
            case 0x150CA4u: goto label_150ca4;
            case 0x150CA8u: goto label_150ca8;
            case 0x150CACu: goto label_150cac;
            case 0x150CB0u: goto label_150cb0;
            case 0x150CB4u: goto label_150cb4;
            case 0x150CB8u: goto label_150cb8;
            case 0x150CBCu: goto label_150cbc;
            case 0x150CC0u: goto label_150cc0;
            case 0x150CC4u: goto label_150cc4;
            case 0x150CC8u: goto label_150cc8;
            case 0x150CCCu: goto label_150ccc;
            case 0x150CD0u: goto label_150cd0;
            case 0x150CD4u: goto label_150cd4;
            case 0x150CD8u: goto label_150cd8;
            case 0x150CDCu: goto label_150cdc;
            case 0x150CE0u: goto label_150ce0;
            case 0x150CE4u: goto label_150ce4;
            case 0x150CE8u: goto label_150ce8;
            case 0x150CECu: goto label_150cec;
            case 0x150CF0u: goto label_150cf0;
            case 0x150CF4u: goto label_150cf4;
            case 0x150CF8u: goto label_150cf8;
            case 0x150CFCu: goto label_150cfc;
            case 0x150D00u: goto label_150d00;
            case 0x150D04u: goto label_150d04;
            case 0x150D08u: goto label_150d08;
            case 0x150D0Cu: goto label_150d0c;
            case 0x150D10u: goto label_150d10;
            case 0x150D14u: goto label_150d14;
            case 0x150D18u: goto label_150d18;
            case 0x150D1Cu: goto label_150d1c;
            case 0x150D20u: goto label_150d20;
            case 0x150D24u: goto label_150d24;
            case 0x150D28u: goto label_150d28;
            case 0x150D2Cu: goto label_150d2c;
            case 0x150D30u: goto label_150d30;
            case 0x150D34u: goto label_150d34;
            case 0x150D38u: goto label_150d38;
            case 0x150D3Cu: goto label_150d3c;
            case 0x150D40u: goto label_150d40;
            case 0x150D44u: goto label_150d44;
            case 0x150D48u: goto label_150d48;
            case 0x150D4Cu: goto label_150d4c;
            case 0x150D50u: goto label_150d50;
            case 0x150D54u: goto label_150d54;
            case 0x150D58u: goto label_150d58;
            case 0x150D5Cu: goto label_150d5c;
            case 0x150D60u: goto label_150d60;
            case 0x150D64u: goto label_150d64;
            case 0x150D68u: goto label_150d68;
            case 0x150D6Cu: goto label_150d6c;
            case 0x150D70u: goto label_150d70;
            case 0x150D74u: goto label_150d74;
            case 0x150D78u: goto label_150d78;
            case 0x150D7Cu: goto label_150d7c;
            case 0x150D80u: goto label_150d80;
            case 0x150D84u: goto label_150d84;
            case 0x150D88u: goto label_150d88;
            case 0x150D8Cu: goto label_150d8c;
            case 0x150D90u: goto label_150d90;
            case 0x150D94u: goto label_150d94;
            case 0x150D98u: goto label_150d98;
            case 0x150D9Cu: goto label_150d9c;
            case 0x150DA0u: goto label_150da0;
            case 0x150DA4u: goto label_150da4;
            case 0x150DA8u: goto label_150da8;
            case 0x150DACu: goto label_150dac;
            case 0x150DB0u: goto label_150db0;
            case 0x150DB4u: goto label_150db4;
            case 0x150DB8u: goto label_150db8;
            case 0x150DBCu: goto label_150dbc;
            case 0x150DC0u: goto label_150dc0;
            case 0x150DC4u: goto label_150dc4;
            case 0x150DC8u: goto label_150dc8;
            case 0x150DCCu: goto label_150dcc;
            case 0x150DD0u: goto label_150dd0;
            case 0x150DD4u: goto label_150dd4;
            case 0x150DD8u: goto label_150dd8;
            case 0x150DDCu: goto label_150ddc;
            case 0x150DE0u: goto label_150de0;
            case 0x150DE4u: goto label_150de4;
            case 0x150DE8u: goto label_150de8;
            case 0x150DECu: goto label_150dec;
            case 0x150DF0u: goto label_150df0;
            case 0x150DF4u: goto label_150df4;
            case 0x150DF8u: goto label_150df8;
            case 0x150DFCu: goto label_150dfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x150DFCu;
label_150dfc:
    // 0x150dfc: 0x0
    ctx->pc = 0x150dfcu;
    // NOP
}
