#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00162D20
// Address: 0x162d20 - 0x162de8
void sub_00162D20_0x162d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x162d20u;

label_162d20:
    // 0x162d20: 0x27bdfff0
    ctx->pc = 0x162d20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_162d24:
    // 0x162d24: 0xffb00000
    ctx->pc = 0x162d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_162d28:
    // 0x162d28: 0xffbf0008
    ctx->pc = 0x162d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_162d2c:
    // 0x162d2c: 0xc058d04
label_162d30:
    if (ctx->pc == 0x162D30u) {
        ctx->pc = 0x162D34u;
        goto label_162d34;
    }
    ctx->pc = 0x162D2Cu;
    SET_GPR_U32(ctx, 31, 0x162D34u);
    ctx->pc = 0x163410u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163410_0x163410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162D34u; }
    }
    if (ctx->pc != 0x162D34u) { return; }
    ctx->pc = 0x162D34u;
label_162d34:
    // 0x162d34: 0xc058d08
label_162d38:
    if (ctx->pc == 0x162D38u) {
        ctx->pc = 0x162D38u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162D3Cu;
        goto label_162d3c;
    }
    ctx->pc = 0x162D34u;
    SET_GPR_U32(ctx, 31, 0x162D3Cu);
    ctx->pc = 0x162D38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x163420u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163420_0x163420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162D3Cu; }
    }
    if (ctx->pc != 0x162D3Cu) { return; }
    ctx->pc = 0x162D3Cu;
label_162d3c:
    // 0x162d3c: 0x40182d
    ctx->pc = 0x162d3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_162d40:
    // 0x162d40: 0x5060000d
label_162d44:
    if (ctx->pc == 0x162D44u) {
        ctx->pc = 0x162D44u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x162D48u;
        goto label_162d48;
    }
    ctx->pc = 0x162D40u;
    {
        const bool branch_taken_0x162d40 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x162d40) {
            ctx->pc = 0x162D44u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x162D78u;
            goto label_162d78;
        }
    }
    ctx->pc = 0x162D48u;
label_162d48:
    // 0x162d48: 0x8e020004
    ctx->pc = 0x162d48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_162d4c:
    // 0x162d4c: 0x5440000a
label_162d50:
    if (ctx->pc == 0x162D50u) {
        ctx->pc = 0x162D50u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x162D54u;
        goto label_162d54;
    }
    ctx->pc = 0x162D4Cu;
    {
        const bool branch_taken_0x162d4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x162d4c) {
            ctx->pc = 0x162D50u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x162D78u;
            goto label_162d78;
        }
    }
    ctx->pc = 0x162D54u;
label_162d54:
    // 0x162d54: 0x8c630000
    ctx->pc = 0x162d54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_162d58:
    // 0x162d58: 0x50600005
label_162d5c:
    if (ctx->pc == 0x162D5Cu) {
        ctx->pc = 0x162D5Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x162D60u;
        goto label_162d60;
    }
    ctx->pc = 0x162D58u;
    {
        const bool branch_taken_0x162d58 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x162d58) {
            ctx->pc = 0x162D5Cu;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
            ctx->pc = 0x162D70u;
            goto label_162d70;
        }
    }
    ctx->pc = 0x162D60u;
label_162d60:
    // 0x162d60: 0x60f809
label_162d64:
    if (ctx->pc == 0x162D64u) {
        ctx->pc = 0x162D68u;
        goto label_162d68;
    }
    ctx->pc = 0x162D60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x162D68u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162D20u: goto label_162d20;
            case 0x162D24u: goto label_162d24;
            case 0x162D28u: goto label_162d28;
            case 0x162D2Cu: goto label_162d2c;
            case 0x162D30u: goto label_162d30;
            case 0x162D34u: goto label_162d34;
            case 0x162D38u: goto label_162d38;
            case 0x162D3Cu: goto label_162d3c;
            case 0x162D40u: goto label_162d40;
            case 0x162D44u: goto label_162d44;
            case 0x162D48u: goto label_162d48;
            case 0x162D4Cu: goto label_162d4c;
            case 0x162D50u: goto label_162d50;
            case 0x162D54u: goto label_162d54;
            case 0x162D58u: goto label_162d58;
            case 0x162D5Cu: goto label_162d5c;
            case 0x162D60u: goto label_162d60;
            case 0x162D64u: goto label_162d64;
            case 0x162D68u: goto label_162d68;
            case 0x162D6Cu: goto label_162d6c;
            case 0x162D70u: goto label_162d70;
            case 0x162D74u: goto label_162d74;
            case 0x162D78u: goto label_162d78;
            case 0x162D7Cu: goto label_162d7c;
            case 0x162D80u: goto label_162d80;
            case 0x162D84u: goto label_162d84;
            case 0x162D88u: goto label_162d88;
            case 0x162D8Cu: goto label_162d8c;
            case 0x162D90u: goto label_162d90;
            case 0x162D94u: goto label_162d94;
            case 0x162D98u: goto label_162d98;
            case 0x162D9Cu: goto label_162d9c;
            case 0x162DA0u: goto label_162da0;
            case 0x162DA4u: goto label_162da4;
            case 0x162DA8u: goto label_162da8;
            case 0x162DACu: goto label_162dac;
            case 0x162DB0u: goto label_162db0;
            case 0x162DB4u: goto label_162db4;
            case 0x162DB8u: goto label_162db8;
            case 0x162DBCu: goto label_162dbc;
            case 0x162DC0u: goto label_162dc0;
            case 0x162DC4u: goto label_162dc4;
            case 0x162DC8u: goto label_162dc8;
            case 0x162DCCu: goto label_162dcc;
            case 0x162DD0u: goto label_162dd0;
            case 0x162DD4u: goto label_162dd4;
            case 0x162DD8u: goto label_162dd8;
            case 0x162DDCu: goto label_162ddc;
            case 0x162DE0u: goto label_162de0;
            case 0x162DE4u: goto label_162de4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x162D68u; }
            if (ctx->pc != 0x162D68u) { return; }
        }
    }
    ctx->pc = 0x162D68u;
label_162d68:
    // 0x162d68: 0x8e020004
    ctx->pc = 0x162d68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_162d6c:
    // 0x162d6c: 0x24420001
    ctx->pc = 0x162d6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_162d70:
    // 0x162d70: 0xae020004
    ctx->pc = 0x162d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_162d74:
    // 0x162d74: 0xdfb00000
    ctx->pc = 0x162d74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_162d78:
    // 0x162d78: 0xdfbf0008
    ctx->pc = 0x162d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_162d7c:
    // 0x162d7c: 0x3e00008
label_162d80:
    if (ctx->pc == 0x162D80u) {
        ctx->pc = 0x162D80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x162D84u;
        goto label_162d84;
    }
    ctx->pc = 0x162D7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162D80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162D20u: goto label_162d20;
            case 0x162D24u: goto label_162d24;
            case 0x162D28u: goto label_162d28;
            case 0x162D2Cu: goto label_162d2c;
            case 0x162D30u: goto label_162d30;
            case 0x162D34u: goto label_162d34;
            case 0x162D38u: goto label_162d38;
            case 0x162D3Cu: goto label_162d3c;
            case 0x162D40u: goto label_162d40;
            case 0x162D44u: goto label_162d44;
            case 0x162D48u: goto label_162d48;
            case 0x162D4Cu: goto label_162d4c;
            case 0x162D50u: goto label_162d50;
            case 0x162D54u: goto label_162d54;
            case 0x162D58u: goto label_162d58;
            case 0x162D5Cu: goto label_162d5c;
            case 0x162D60u: goto label_162d60;
            case 0x162D64u: goto label_162d64;
            case 0x162D68u: goto label_162d68;
            case 0x162D6Cu: goto label_162d6c;
            case 0x162D70u: goto label_162d70;
            case 0x162D74u: goto label_162d74;
            case 0x162D78u: goto label_162d78;
            case 0x162D7Cu: goto label_162d7c;
            case 0x162D80u: goto label_162d80;
            case 0x162D84u: goto label_162d84;
            case 0x162D88u: goto label_162d88;
            case 0x162D8Cu: goto label_162d8c;
            case 0x162D90u: goto label_162d90;
            case 0x162D94u: goto label_162d94;
            case 0x162D98u: goto label_162d98;
            case 0x162D9Cu: goto label_162d9c;
            case 0x162DA0u: goto label_162da0;
            case 0x162DA4u: goto label_162da4;
            case 0x162DA8u: goto label_162da8;
            case 0x162DACu: goto label_162dac;
            case 0x162DB0u: goto label_162db0;
            case 0x162DB4u: goto label_162db4;
            case 0x162DB8u: goto label_162db8;
            case 0x162DBCu: goto label_162dbc;
            case 0x162DC0u: goto label_162dc0;
            case 0x162DC4u: goto label_162dc4;
            case 0x162DC8u: goto label_162dc8;
            case 0x162DCCu: goto label_162dcc;
            case 0x162DD0u: goto label_162dd0;
            case 0x162DD4u: goto label_162dd4;
            case 0x162DD8u: goto label_162dd8;
            case 0x162DDCu: goto label_162ddc;
            case 0x162DE0u: goto label_162de0;
            case 0x162DE4u: goto label_162de4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x162D84u;
label_162d84:
    // 0x162d84: 0x0
    ctx->pc = 0x162d84u;
    // NOP
label_162d88:
    // 0x162d88: 0x27bdfff0
    ctx->pc = 0x162d88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_162d8c:
    // 0x162d8c: 0xffb00000
    ctx->pc = 0x162d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_162d90:
    // 0x162d90: 0xffbf0008
    ctx->pc = 0x162d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_162d94:
    // 0x162d94: 0xc058d04
label_162d98:
    if (ctx->pc == 0x162D98u) {
        ctx->pc = 0x162D9Cu;
        goto label_162d9c;
    }
    ctx->pc = 0x162D94u;
    SET_GPR_U32(ctx, 31, 0x162D9Cu);
    ctx->pc = 0x163410u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163410_0x163410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162D9Cu; }
    }
    if (ctx->pc != 0x162D9Cu) { return; }
    ctx->pc = 0x162D9Cu;
label_162d9c:
    // 0x162d9c: 0xc058d08
label_162da0:
    if (ctx->pc == 0x162DA0u) {
        ctx->pc = 0x162DA0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162DA4u;
        goto label_162da4;
    }
    ctx->pc = 0x162D9Cu;
    SET_GPR_U32(ctx, 31, 0x162DA4u);
    ctx->pc = 0x162DA0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x163420u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163420_0x163420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162DA4u; }
    }
    if (ctx->pc != 0x162DA4u) { return; }
    ctx->pc = 0x162DA4u;
label_162da4:
    // 0x162da4: 0x40202d
    ctx->pc = 0x162da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_162da8:
    // 0x162da8: 0x5080000c
label_162dac:
    if (ctx->pc == 0x162DACu) {
        ctx->pc = 0x162DACu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x162DB0u;
        goto label_162db0;
    }
    ctx->pc = 0x162DA8u;
    {
        const bool branch_taken_0x162da8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x162da8) {
            ctx->pc = 0x162DACu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x162DDCu;
            goto label_162ddc;
        }
    }
    ctx->pc = 0x162DB0u;
label_162db0:
    // 0x162db0: 0x8e020004
    ctx->pc = 0x162db0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_162db4:
    // 0x162db4: 0x10400008
label_162db8:
    if (ctx->pc == 0x162DB8u) {
        ctx->pc = 0x162DB8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x162DBCu;
        goto label_162dbc;
    }
    ctx->pc = 0x162DB4u;
    {
        const bool branch_taken_0x162db4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x162DB8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x162db4) {
            ctx->pc = 0x162DD8u;
            goto label_162dd8;
        }
    }
    ctx->pc = 0x162DBCu;
label_162dbc:
    // 0x162dbc: 0x14600006
label_162dc0:
    if (ctx->pc == 0x162DC0u) {
        ctx->pc = 0x162DC0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x162DC4u;
        goto label_162dc4;
    }
    ctx->pc = 0x162DBCu;
    {
        const bool branch_taken_0x162dbc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x162DC0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x162dbc) {
            ctx->pc = 0x162DD8u;
            goto label_162dd8;
        }
    }
    ctx->pc = 0x162DC4u;
label_162dc4:
    // 0x162dc4: 0x8c820004
    ctx->pc = 0x162dc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_162dc8:
    // 0x162dc8: 0x50400004
label_162dcc:
    if (ctx->pc == 0x162DCCu) {
        ctx->pc = 0x162DCCu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x162DD0u;
        goto label_162dd0;
    }
    ctx->pc = 0x162DC8u;
    {
        const bool branch_taken_0x162dc8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x162dc8) {
            ctx->pc = 0x162DCCu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x162DDCu;
            goto label_162ddc;
        }
    }
    ctx->pc = 0x162DD0u;
label_162dd0:
    // 0x162dd0: 0x40f809
label_162dd4:
    if (ctx->pc == 0x162DD4u) {
        ctx->pc = 0x162DD8u;
        goto label_162dd8;
    }
    ctx->pc = 0x162DD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x162DD8u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162D20u: goto label_162d20;
            case 0x162D24u: goto label_162d24;
            case 0x162D28u: goto label_162d28;
            case 0x162D2Cu: goto label_162d2c;
            case 0x162D30u: goto label_162d30;
            case 0x162D34u: goto label_162d34;
            case 0x162D38u: goto label_162d38;
            case 0x162D3Cu: goto label_162d3c;
            case 0x162D40u: goto label_162d40;
            case 0x162D44u: goto label_162d44;
            case 0x162D48u: goto label_162d48;
            case 0x162D4Cu: goto label_162d4c;
            case 0x162D50u: goto label_162d50;
            case 0x162D54u: goto label_162d54;
            case 0x162D58u: goto label_162d58;
            case 0x162D5Cu: goto label_162d5c;
            case 0x162D60u: goto label_162d60;
            case 0x162D64u: goto label_162d64;
            case 0x162D68u: goto label_162d68;
            case 0x162D6Cu: goto label_162d6c;
            case 0x162D70u: goto label_162d70;
            case 0x162D74u: goto label_162d74;
            case 0x162D78u: goto label_162d78;
            case 0x162D7Cu: goto label_162d7c;
            case 0x162D80u: goto label_162d80;
            case 0x162D84u: goto label_162d84;
            case 0x162D88u: goto label_162d88;
            case 0x162D8Cu: goto label_162d8c;
            case 0x162D90u: goto label_162d90;
            case 0x162D94u: goto label_162d94;
            case 0x162D98u: goto label_162d98;
            case 0x162D9Cu: goto label_162d9c;
            case 0x162DA0u: goto label_162da0;
            case 0x162DA4u: goto label_162da4;
            case 0x162DA8u: goto label_162da8;
            case 0x162DACu: goto label_162dac;
            case 0x162DB0u: goto label_162db0;
            case 0x162DB4u: goto label_162db4;
            case 0x162DB8u: goto label_162db8;
            case 0x162DBCu: goto label_162dbc;
            case 0x162DC0u: goto label_162dc0;
            case 0x162DC4u: goto label_162dc4;
            case 0x162DC8u: goto label_162dc8;
            case 0x162DCCu: goto label_162dcc;
            case 0x162DD0u: goto label_162dd0;
            case 0x162DD4u: goto label_162dd4;
            case 0x162DD8u: goto label_162dd8;
            case 0x162DDCu: goto label_162ddc;
            case 0x162DE0u: goto label_162de0;
            case 0x162DE4u: goto label_162de4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x162DD8u; }
            if (ctx->pc != 0x162DD8u) { return; }
        }
    }
    ctx->pc = 0x162DD8u;
label_162dd8:
    // 0x162dd8: 0xdfb00000
    ctx->pc = 0x162dd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_162ddc:
    // 0x162ddc: 0xdfbf0008
    ctx->pc = 0x162ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_162de0:
    // 0x162de0: 0x3e00008
label_162de4:
    if (ctx->pc == 0x162DE4u) {
        ctx->pc = 0x162DE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x162DE8u;
        goto label_fallthrough_0x162de0;
    }
    ctx->pc = 0x162DE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162DE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162D20u: goto label_162d20;
            case 0x162D24u: goto label_162d24;
            case 0x162D28u: goto label_162d28;
            case 0x162D2Cu: goto label_162d2c;
            case 0x162D30u: goto label_162d30;
            case 0x162D34u: goto label_162d34;
            case 0x162D38u: goto label_162d38;
            case 0x162D3Cu: goto label_162d3c;
            case 0x162D40u: goto label_162d40;
            case 0x162D44u: goto label_162d44;
            case 0x162D48u: goto label_162d48;
            case 0x162D4Cu: goto label_162d4c;
            case 0x162D50u: goto label_162d50;
            case 0x162D54u: goto label_162d54;
            case 0x162D58u: goto label_162d58;
            case 0x162D5Cu: goto label_162d5c;
            case 0x162D60u: goto label_162d60;
            case 0x162D64u: goto label_162d64;
            case 0x162D68u: goto label_162d68;
            case 0x162D6Cu: goto label_162d6c;
            case 0x162D70u: goto label_162d70;
            case 0x162D74u: goto label_162d74;
            case 0x162D78u: goto label_162d78;
            case 0x162D7Cu: goto label_162d7c;
            case 0x162D80u: goto label_162d80;
            case 0x162D84u: goto label_162d84;
            case 0x162D88u: goto label_162d88;
            case 0x162D8Cu: goto label_162d8c;
            case 0x162D90u: goto label_162d90;
            case 0x162D94u: goto label_162d94;
            case 0x162D98u: goto label_162d98;
            case 0x162D9Cu: goto label_162d9c;
            case 0x162DA0u: goto label_162da0;
            case 0x162DA4u: goto label_162da4;
            case 0x162DA8u: goto label_162da8;
            case 0x162DACu: goto label_162dac;
            case 0x162DB0u: goto label_162db0;
            case 0x162DB4u: goto label_162db4;
            case 0x162DB8u: goto label_162db8;
            case 0x162DBCu: goto label_162dbc;
            case 0x162DC0u: goto label_162dc0;
            case 0x162DC4u: goto label_162dc4;
            case 0x162DC8u: goto label_162dc8;
            case 0x162DCCu: goto label_162dcc;
            case 0x162DD0u: goto label_162dd0;
            case 0x162DD4u: goto label_162dd4;
            case 0x162DD8u: goto label_162dd8;
            case 0x162DDCu: goto label_162ddc;
            case 0x162DE0u: goto label_162de0;
            case 0x162DE4u: goto label_162de4;
            default: break;
        }
        return;
    }
label_fallthrough_0x162de0:
    ctx->pc = 0x162DE8u;
}
