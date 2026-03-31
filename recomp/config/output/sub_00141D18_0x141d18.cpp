#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00141D18
// Address: 0x141d18 - 0x141df0
void sub_00141D18_0x141d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x141d18u;

label_141d18:
    // 0x141d18: 0x27bdffe0
    ctx->pc = 0x141d18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_141d1c:
    // 0x141d1c: 0xffb00000
    ctx->pc = 0x141d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_141d20:
    // 0x141d20: 0x80802d
    ctx->pc = 0x141d20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_141d24:
    // 0x141d24: 0xffb10008
    ctx->pc = 0x141d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_141d28:
    // 0x141d28: 0xa0882d
    ctx->pc = 0x141d28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_141d2c:
    // 0x141d2c: 0xffb20010
    ctx->pc = 0x141d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_141d30:
    // 0x141d30: 0xffbf0018
    ctx->pc = 0x141d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_141d34:
    // 0x141d34: 0xc0505b4
label_141d38:
    if (ctx->pc == 0x141D38u) {
        ctx->pc = 0x141D38u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x141D3Cu;
        goto label_141d3c;
    }
    ctx->pc = 0x141D34u;
    SET_GPR_U32(ctx, 31, 0x141D3Cu);
    ctx->pc = 0x141D38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1416D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001416D0_0x1416d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141D3Cu; }
    }
    if (ctx->pc != 0x141D3Cu) { return; }
    ctx->pc = 0x141D3Cu;
label_141d3c:
    // 0x141d3c: 0x3c020026
    ctx->pc = 0x141d3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
label_141d40:
    // 0x141d40: 0x1080c0
    ctx->pc = 0x141d40u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 3));
label_141d44:
    // 0x141d44: 0x244249a0
    ctx->pc = 0x141d44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18848));
label_141d48:
    // 0x141d48: 0xdfbf0018
    ctx->pc = 0x141d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_141d4c:
    // 0x141d4c: 0x501821
    ctx->pc = 0x141d4cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_141d50:
    // 0x141d50: 0x2028021
    ctx->pc = 0x141d50u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_141d54:
    // 0x141d54: 0xae110000
    ctx->pc = 0x141d54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_141d58:
    // 0x141d58: 0xac720004
    ctx->pc = 0x141d58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
label_141d5c:
    // 0x141d5c: 0xdfb00000
    ctx->pc = 0x141d5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_141d60:
    // 0x141d60: 0xdfb10008
    ctx->pc = 0x141d60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_141d64:
    // 0x141d64: 0xdfb20010
    ctx->pc = 0x141d64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_141d68:
    // 0x141d68: 0x80505ba
label_141d6c:
    if (ctx->pc == 0x141D6Cu) {
        ctx->pc = 0x141D6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x141D70u;
        goto label_141d70;
    }
    ctx->pc = 0x141D68u;
    ctx->pc = 0x141D6Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1416E8u;
    sub_001416E8_0x1416e8(rdram, ctx, runtime); return;
    ctx->pc = 0x141D70u;
label_141d70:
    // 0x141d70: 0x27bdfff0
    ctx->pc = 0x141d70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_141d74:
    // 0x141d74: 0x3c020026
    ctx->pc = 0x141d74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
label_141d78:
    // 0x141d78: 0x244249a0
    ctx->pc = 0x141d78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18848));
label_141d7c:
    // 0x141d7c: 0x420c0
    ctx->pc = 0x141d7cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 3));
label_141d80:
    // 0x141d80: 0xffbf0000
    ctx->pc = 0x141d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_141d84:
    // 0x141d84: 0x441821
    ctx->pc = 0x141d84u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_141d88:
    // 0x141d88: 0x822021
    ctx->pc = 0x141d88u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_141d8c:
    // 0x141d8c: 0x8c820000
    ctx->pc = 0x141d8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_141d90:
    // 0x141d90: 0x50400004
label_141d94:
    if (ctx->pc == 0x141D94u) {
        ctx->pc = 0x141D94u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x141D98u;
        goto label_141d98;
    }
    ctx->pc = 0x141D90u;
    {
        const bool branch_taken_0x141d90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x141d90) {
            ctx->pc = 0x141D94u;
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x141DA4u;
            goto label_141da4;
        }
    }
    ctx->pc = 0x141D98u;
label_141d98:
    // 0x141d98: 0x40f809
label_141d9c:
    if (ctx->pc == 0x141D9Cu) {
        ctx->pc = 0x141D9Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->pc = 0x141DA0u;
        goto label_141da0;
    }
    ctx->pc = 0x141D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x141DA0u);
        ctx->pc = 0x141D9Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x141D18u: goto label_141d18;
            case 0x141D1Cu: goto label_141d1c;
            case 0x141D20u: goto label_141d20;
            case 0x141D24u: goto label_141d24;
            case 0x141D28u: goto label_141d28;
            case 0x141D2Cu: goto label_141d2c;
            case 0x141D30u: goto label_141d30;
            case 0x141D34u: goto label_141d34;
            case 0x141D38u: goto label_141d38;
            case 0x141D3Cu: goto label_141d3c;
            case 0x141D40u: goto label_141d40;
            case 0x141D44u: goto label_141d44;
            case 0x141D48u: goto label_141d48;
            case 0x141D4Cu: goto label_141d4c;
            case 0x141D50u: goto label_141d50;
            case 0x141D54u: goto label_141d54;
            case 0x141D58u: goto label_141d58;
            case 0x141D5Cu: goto label_141d5c;
            case 0x141D60u: goto label_141d60;
            case 0x141D64u: goto label_141d64;
            case 0x141D68u: goto label_141d68;
            case 0x141D6Cu: goto label_141d6c;
            case 0x141D70u: goto label_141d70;
            case 0x141D74u: goto label_141d74;
            case 0x141D78u: goto label_141d78;
            case 0x141D7Cu: goto label_141d7c;
            case 0x141D80u: goto label_141d80;
            case 0x141D84u: goto label_141d84;
            case 0x141D88u: goto label_141d88;
            case 0x141D8Cu: goto label_141d8c;
            case 0x141D90u: goto label_141d90;
            case 0x141D94u: goto label_141d94;
            case 0x141D98u: goto label_141d98;
            case 0x141D9Cu: goto label_141d9c;
            case 0x141DA0u: goto label_141da0;
            case 0x141DA4u: goto label_141da4;
            case 0x141DA8u: goto label_141da8;
            case 0x141DACu: goto label_141dac;
            case 0x141DB0u: goto label_141db0;
            case 0x141DB4u: goto label_141db4;
            case 0x141DB8u: goto label_141db8;
            case 0x141DBCu: goto label_141dbc;
            case 0x141DC0u: goto label_141dc0;
            case 0x141DC4u: goto label_141dc4;
            case 0x141DC8u: goto label_141dc8;
            case 0x141DCCu: goto label_141dcc;
            case 0x141DD0u: goto label_141dd0;
            case 0x141DD4u: goto label_141dd4;
            case 0x141DD8u: goto label_141dd8;
            case 0x141DDCu: goto label_141ddc;
            case 0x141DE0u: goto label_141de0;
            case 0x141DE4u: goto label_141de4;
            case 0x141DE8u: goto label_141de8;
            case 0x141DECu: goto label_141dec;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x141DA0u; }
            if (ctx->pc != 0x141DA0u) { return; }
        }
    }
    ctx->pc = 0x141DA0u;
label_141da0:
    // 0x141da0: 0xdfbf0000
    ctx->pc = 0x141da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_141da4:
    // 0x141da4: 0x3e00008
label_141da8:
    if (ctx->pc == 0x141DA8u) {
        ctx->pc = 0x141DA8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x141DACu;
        goto label_141dac;
    }
    ctx->pc = 0x141DA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141DA8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x141D18u: goto label_141d18;
            case 0x141D1Cu: goto label_141d1c;
            case 0x141D20u: goto label_141d20;
            case 0x141D24u: goto label_141d24;
            case 0x141D28u: goto label_141d28;
            case 0x141D2Cu: goto label_141d2c;
            case 0x141D30u: goto label_141d30;
            case 0x141D34u: goto label_141d34;
            case 0x141D38u: goto label_141d38;
            case 0x141D3Cu: goto label_141d3c;
            case 0x141D40u: goto label_141d40;
            case 0x141D44u: goto label_141d44;
            case 0x141D48u: goto label_141d48;
            case 0x141D4Cu: goto label_141d4c;
            case 0x141D50u: goto label_141d50;
            case 0x141D54u: goto label_141d54;
            case 0x141D58u: goto label_141d58;
            case 0x141D5Cu: goto label_141d5c;
            case 0x141D60u: goto label_141d60;
            case 0x141D64u: goto label_141d64;
            case 0x141D68u: goto label_141d68;
            case 0x141D6Cu: goto label_141d6c;
            case 0x141D70u: goto label_141d70;
            case 0x141D74u: goto label_141d74;
            case 0x141D78u: goto label_141d78;
            case 0x141D7Cu: goto label_141d7c;
            case 0x141D80u: goto label_141d80;
            case 0x141D84u: goto label_141d84;
            case 0x141D88u: goto label_141d88;
            case 0x141D8Cu: goto label_141d8c;
            case 0x141D90u: goto label_141d90;
            case 0x141D94u: goto label_141d94;
            case 0x141D98u: goto label_141d98;
            case 0x141D9Cu: goto label_141d9c;
            case 0x141DA0u: goto label_141da0;
            case 0x141DA4u: goto label_141da4;
            case 0x141DA8u: goto label_141da8;
            case 0x141DACu: goto label_141dac;
            case 0x141DB0u: goto label_141db0;
            case 0x141DB4u: goto label_141db4;
            case 0x141DB8u: goto label_141db8;
            case 0x141DBCu: goto label_141dbc;
            case 0x141DC0u: goto label_141dc0;
            case 0x141DC4u: goto label_141dc4;
            case 0x141DC8u: goto label_141dc8;
            case 0x141DCCu: goto label_141dcc;
            case 0x141DD0u: goto label_141dd0;
            case 0x141DD4u: goto label_141dd4;
            case 0x141DD8u: goto label_141dd8;
            case 0x141DDCu: goto label_141ddc;
            case 0x141DE0u: goto label_141de0;
            case 0x141DE4u: goto label_141de4;
            case 0x141DE8u: goto label_141de8;
            case 0x141DECu: goto label_141dec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x141DACu;
label_141dac:
    // 0x141dac: 0x0
    ctx->pc = 0x141dacu;
    // NOP
label_141db0:
    // 0x141db0: 0x27bdffe0
    ctx->pc = 0x141db0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_141db4:
    // 0x141db4: 0xffb00000
    ctx->pc = 0x141db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_141db8:
    // 0x141db8: 0xa0802d
    ctx->pc = 0x141db8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_141dbc:
    // 0x141dbc: 0xffb10008
    ctx->pc = 0x141dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_141dc0:
    // 0x141dc0: 0xffbf0010
    ctx->pc = 0x141dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_141dc4:
    // 0x141dc4: 0xc0505b4
label_141dc8:
    if (ctx->pc == 0x141DC8u) {
        ctx->pc = 0x141DC8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x141DCCu;
        goto label_141dcc;
    }
    ctx->pc = 0x141DC4u;
    SET_GPR_U32(ctx, 31, 0x141DCCu);
    ctx->pc = 0x141DC8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1416D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001416D0_0x1416d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141DCCu; }
    }
    if (ctx->pc != 0x141DCCu) { return; }
    ctx->pc = 0x141DCCu;
label_141dcc:
    // 0x141dcc: 0x3c020026
    ctx->pc = 0x141dccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
label_141dd0:
    // 0x141dd0: 0xdfbf0010
    ctx->pc = 0x141dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_141dd4:
    // 0x141dd4: 0x244249f0
    ctx->pc = 0x141dd4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18928));
label_141dd8:
    // 0x141dd8: 0xac500004
    ctx->pc = 0x141dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
label_141ddc:
    // 0x141ddc: 0xac510000
    ctx->pc = 0x141ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_141de0:
    // 0x141de0: 0xdfb00000
    ctx->pc = 0x141de0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_141de4:
    // 0x141de4: 0xdfb10008
    ctx->pc = 0x141de4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_141de8:
    // 0x141de8: 0x80505ba
label_141dec:
    if (ctx->pc == 0x141DECu) {
        ctx->pc = 0x141DECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x141DF0u;
        goto label_fallthrough_0x141de8;
    }
    ctx->pc = 0x141DE8u;
    ctx->pc = 0x141DECu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1416E8u;
    sub_001416E8_0x1416e8(rdram, ctx, runtime); return;
label_fallthrough_0x141de8:
    ctx->pc = 0x141DF0u;
}
