#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00135DC8
// Address: 0x135dc8 - 0x135ef0
void sub_00135DC8_0x135dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x135dc8u;

label_135dc8:
    // 0x135dc8: 0x27bdfff0
    ctx->pc = 0x135dc8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_135dcc:
    // 0x135dcc: 0xffb00000
    ctx->pc = 0x135dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_135dd0:
    // 0x135dd0: 0x14800007
label_135dd4:
    if (ctx->pc == 0x135DD4u) {
        ctx->pc = 0x135DD4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x135DD8u;
        goto label_135dd8;
    }
    ctx->pc = 0x135DD0u;
    {
        const bool branch_taken_0x135dd0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x135DD4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        if (branch_taken_0x135dd0) {
            ctx->pc = 0x135DF0u;
            goto label_135df0;
        }
    }
    ctx->pc = 0x135DD8u;
label_135dd8:
    // 0x135dd8: 0x3c040024
    ctx->pc = 0x135dd8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_135ddc:
    // 0x135ddc: 0xc04d480
label_135de0:
    if (ctx->pc == 0x135DE0u) {
        ctx->pc = 0x135DE0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949376));
        ctx->pc = 0x135DE4u;
        goto label_135de4;
    }
    ctx->pc = 0x135DDCu;
    SET_GPR_U32(ctx, 31, 0x135DE4u);
    ctx->pc = 0x135DE0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949376));
    ctx->pc = 0x135200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135200_0x135200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135DE4u; }
    }
    if (ctx->pc != 0x135DE4u) { return; }
    ctx->pc = 0x135DE4u;
label_135de4:
    // 0x135de4: 0x1000000e
label_135de8:
    if (ctx->pc == 0x135DE8u) {
        ctx->pc = 0x135DE8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x135DECu;
        goto label_135dec;
    }
    ctx->pc = 0x135DE4u;
    {
        const bool branch_taken_0x135de4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x135DE8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x135de4) {
            ctx->pc = 0x135E20u;
            goto label_135e20;
        }
    }
    ctx->pc = 0x135DECu;
label_135dec:
    // 0x135dec: 0x0
    ctx->pc = 0x135decu;
    // NOP
label_135df0:
    // 0x135df0: 0x8c820000
    ctx->pc = 0x135df0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_135df4:
    // 0x135df4: 0x8c420020
    ctx->pc = 0x135df4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_135df8:
    // 0x135df8: 0x50400005
label_135dfc:
    if (ctx->pc == 0x135DFCu) {
        ctx->pc = 0x135DFCu;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        ctx->pc = 0x135E00u;
        goto label_135e00;
    }
    ctx->pc = 0x135DF8u;
    {
        const bool branch_taken_0x135df8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x135df8) {
            ctx->pc = 0x135DFCu;
            SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
            ctx->pc = 0x135E10u;
            goto label_135e10;
        }
    }
    ctx->pc = 0x135E00u;
label_135e00:
    // 0x135e00: 0x40f809
label_135e04:
    if (ctx->pc == 0x135E04u) {
        ctx->pc = 0x135E04u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x135E08u;
        goto label_135e08;
    }
    ctx->pc = 0x135E00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x135E08u);
        ctx->pc = 0x135E04u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135DC8u: goto label_135dc8;
            case 0x135DCCu: goto label_135dcc;
            case 0x135DD0u: goto label_135dd0;
            case 0x135DD4u: goto label_135dd4;
            case 0x135DD8u: goto label_135dd8;
            case 0x135DDCu: goto label_135ddc;
            case 0x135DE0u: goto label_135de0;
            case 0x135DE4u: goto label_135de4;
            case 0x135DE8u: goto label_135de8;
            case 0x135DECu: goto label_135dec;
            case 0x135DF0u: goto label_135df0;
            case 0x135DF4u: goto label_135df4;
            case 0x135DF8u: goto label_135df8;
            case 0x135DFCu: goto label_135dfc;
            case 0x135E00u: goto label_135e00;
            case 0x135E04u: goto label_135e04;
            case 0x135E08u: goto label_135e08;
            case 0x135E0Cu: goto label_135e0c;
            case 0x135E10u: goto label_135e10;
            case 0x135E14u: goto label_135e14;
            case 0x135E18u: goto label_135e18;
            case 0x135E1Cu: goto label_135e1c;
            case 0x135E20u: goto label_135e20;
            case 0x135E24u: goto label_135e24;
            case 0x135E28u: goto label_135e28;
            case 0x135E2Cu: goto label_135e2c;
            case 0x135E30u: goto label_135e30;
            case 0x135E34u: goto label_135e34;
            case 0x135E38u: goto label_135e38;
            case 0x135E3Cu: goto label_135e3c;
            case 0x135E40u: goto label_135e40;
            case 0x135E44u: goto label_135e44;
            case 0x135E48u: goto label_135e48;
            case 0x135E4Cu: goto label_135e4c;
            case 0x135E50u: goto label_135e50;
            case 0x135E54u: goto label_135e54;
            case 0x135E58u: goto label_135e58;
            case 0x135E5Cu: goto label_135e5c;
            case 0x135E60u: goto label_135e60;
            case 0x135E64u: goto label_135e64;
            case 0x135E68u: goto label_135e68;
            case 0x135E6Cu: goto label_135e6c;
            case 0x135E70u: goto label_135e70;
            case 0x135E74u: goto label_135e74;
            case 0x135E78u: goto label_135e78;
            case 0x135E7Cu: goto label_135e7c;
            case 0x135E80u: goto label_135e80;
            case 0x135E84u: goto label_135e84;
            case 0x135E88u: goto label_135e88;
            case 0x135E8Cu: goto label_135e8c;
            case 0x135E90u: goto label_135e90;
            case 0x135E94u: goto label_135e94;
            case 0x135E98u: goto label_135e98;
            case 0x135E9Cu: goto label_135e9c;
            case 0x135EA0u: goto label_135ea0;
            case 0x135EA4u: goto label_135ea4;
            case 0x135EA8u: goto label_135ea8;
            case 0x135EACu: goto label_135eac;
            case 0x135EB0u: goto label_135eb0;
            case 0x135EB4u: goto label_135eb4;
            case 0x135EB8u: goto label_135eb8;
            case 0x135EBCu: goto label_135ebc;
            case 0x135EC0u: goto label_135ec0;
            case 0x135EC4u: goto label_135ec4;
            case 0x135EC8u: goto label_135ec8;
            case 0x135ECCu: goto label_135ecc;
            case 0x135ED0u: goto label_135ed0;
            case 0x135ED4u: goto label_135ed4;
            case 0x135ED8u: goto label_135ed8;
            case 0x135EDCu: goto label_135edc;
            case 0x135EE0u: goto label_135ee0;
            case 0x135EE4u: goto label_135ee4;
            case 0x135EE8u: goto label_135ee8;
            case 0x135EECu: goto label_135eec;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x135E08u; }
            if (ctx->pc != 0x135E08u) { return; }
        }
    }
    ctx->pc = 0x135E08u;
label_135e08:
    // 0x135e08: 0x10000004
label_135e0c:
    if (ctx->pc == 0x135E0Cu) {
        ctx->pc = 0x135E0Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x135E10u;
        goto label_135e10;
    }
    ctx->pc = 0x135E08u;
    {
        const bool branch_taken_0x135e08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x135E0Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x135e08) {
            ctx->pc = 0x135E1Cu;
            goto label_135e1c;
        }
    }
    ctx->pc = 0x135E10u;
label_135e10:
    // 0x135e10: 0x802d
    ctx->pc = 0x135e10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_135e14:
    // 0x135e14: 0xc04d480
label_135e18:
    if (ctx->pc == 0x135E18u) {
        ctx->pc = 0x135E18u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949408));
        ctx->pc = 0x135E1Cu;
        goto label_135e1c;
    }
    ctx->pc = 0x135E14u;
    SET_GPR_U32(ctx, 31, 0x135E1Cu);
    ctx->pc = 0x135E18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949408));
    ctx->pc = 0x135200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135200_0x135200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135E1Cu; }
    }
    if (ctx->pc != 0x135E1Cu) { return; }
    ctx->pc = 0x135E1Cu;
label_135e1c:
    // 0x135e1c: 0x200102d
    ctx->pc = 0x135e1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_135e20:
    // 0x135e20: 0xdfb00000
    ctx->pc = 0x135e20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_135e24:
    // 0x135e24: 0xdfbf0008
    ctx->pc = 0x135e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_135e28:
    // 0x135e28: 0x3e00008
label_135e2c:
    if (ctx->pc == 0x135E2Cu) {
        ctx->pc = 0x135E2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x135E30u;
        goto label_135e30;
    }
    ctx->pc = 0x135E28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135E2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135DC8u: goto label_135dc8;
            case 0x135DCCu: goto label_135dcc;
            case 0x135DD0u: goto label_135dd0;
            case 0x135DD4u: goto label_135dd4;
            case 0x135DD8u: goto label_135dd8;
            case 0x135DDCu: goto label_135ddc;
            case 0x135DE0u: goto label_135de0;
            case 0x135DE4u: goto label_135de4;
            case 0x135DE8u: goto label_135de8;
            case 0x135DECu: goto label_135dec;
            case 0x135DF0u: goto label_135df0;
            case 0x135DF4u: goto label_135df4;
            case 0x135DF8u: goto label_135df8;
            case 0x135DFCu: goto label_135dfc;
            case 0x135E00u: goto label_135e00;
            case 0x135E04u: goto label_135e04;
            case 0x135E08u: goto label_135e08;
            case 0x135E0Cu: goto label_135e0c;
            case 0x135E10u: goto label_135e10;
            case 0x135E14u: goto label_135e14;
            case 0x135E18u: goto label_135e18;
            case 0x135E1Cu: goto label_135e1c;
            case 0x135E20u: goto label_135e20;
            case 0x135E24u: goto label_135e24;
            case 0x135E28u: goto label_135e28;
            case 0x135E2Cu: goto label_135e2c;
            case 0x135E30u: goto label_135e30;
            case 0x135E34u: goto label_135e34;
            case 0x135E38u: goto label_135e38;
            case 0x135E3Cu: goto label_135e3c;
            case 0x135E40u: goto label_135e40;
            case 0x135E44u: goto label_135e44;
            case 0x135E48u: goto label_135e48;
            case 0x135E4Cu: goto label_135e4c;
            case 0x135E50u: goto label_135e50;
            case 0x135E54u: goto label_135e54;
            case 0x135E58u: goto label_135e58;
            case 0x135E5Cu: goto label_135e5c;
            case 0x135E60u: goto label_135e60;
            case 0x135E64u: goto label_135e64;
            case 0x135E68u: goto label_135e68;
            case 0x135E6Cu: goto label_135e6c;
            case 0x135E70u: goto label_135e70;
            case 0x135E74u: goto label_135e74;
            case 0x135E78u: goto label_135e78;
            case 0x135E7Cu: goto label_135e7c;
            case 0x135E80u: goto label_135e80;
            case 0x135E84u: goto label_135e84;
            case 0x135E88u: goto label_135e88;
            case 0x135E8Cu: goto label_135e8c;
            case 0x135E90u: goto label_135e90;
            case 0x135E94u: goto label_135e94;
            case 0x135E98u: goto label_135e98;
            case 0x135E9Cu: goto label_135e9c;
            case 0x135EA0u: goto label_135ea0;
            case 0x135EA4u: goto label_135ea4;
            case 0x135EA8u: goto label_135ea8;
            case 0x135EACu: goto label_135eac;
            case 0x135EB0u: goto label_135eb0;
            case 0x135EB4u: goto label_135eb4;
            case 0x135EB8u: goto label_135eb8;
            case 0x135EBCu: goto label_135ebc;
            case 0x135EC0u: goto label_135ec0;
            case 0x135EC4u: goto label_135ec4;
            case 0x135EC8u: goto label_135ec8;
            case 0x135ECCu: goto label_135ecc;
            case 0x135ED0u: goto label_135ed0;
            case 0x135ED4u: goto label_135ed4;
            case 0x135ED8u: goto label_135ed8;
            case 0x135EDCu: goto label_135edc;
            case 0x135EE0u: goto label_135ee0;
            case 0x135EE4u: goto label_135ee4;
            case 0x135EE8u: goto label_135ee8;
            case 0x135EECu: goto label_135eec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x135E30u;
label_135e30:
    // 0x135e30: 0x27bdfff0
    ctx->pc = 0x135e30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_135e34:
    // 0x135e34: 0xffb00000
    ctx->pc = 0x135e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_135e38:
    // 0x135e38: 0x802d
    ctx->pc = 0x135e38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_135e3c:
    // 0x135e3c: 0x14800006
label_135e40:
    if (ctx->pc == 0x135E40u) {
        ctx->pc = 0x135E40u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x135E44u;
        goto label_135e44;
    }
    ctx->pc = 0x135E3Cu;
    {
        const bool branch_taken_0x135e3c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x135E40u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        if (branch_taken_0x135e3c) {
            ctx->pc = 0x135E58u;
            goto label_135e58;
        }
    }
    ctx->pc = 0x135E44u;
label_135e44:
    // 0x135e44: 0x3c040024
    ctx->pc = 0x135e44u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_135e48:
    // 0x135e48: 0xc04d480
label_135e4c:
    if (ctx->pc == 0x135E4Cu) {
        ctx->pc = 0x135E4Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949432));
        ctx->pc = 0x135E50u;
        goto label_135e50;
    }
    ctx->pc = 0x135E48u;
    SET_GPR_U32(ctx, 31, 0x135E50u);
    ctx->pc = 0x135E4Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949432));
    ctx->pc = 0x135200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135200_0x135200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135E50u; }
    }
    if (ctx->pc != 0x135E50u) { return; }
    ctx->pc = 0x135E50u;
label_135e50:
    // 0x135e50: 0x1000000c
label_135e54:
    if (ctx->pc == 0x135E54u) {
        ctx->pc = 0x135E54u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x135E58u;
        goto label_135e58;
    }
    ctx->pc = 0x135E50u;
    {
        const bool branch_taken_0x135e50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x135E54u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x135e50) {
            ctx->pc = 0x135E84u;
            goto label_135e84;
        }
    }
    ctx->pc = 0x135E58u;
label_135e58:
    // 0x135e58: 0x8c820000
    ctx->pc = 0x135e58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_135e5c:
    // 0x135e5c: 0x8c420024
    ctx->pc = 0x135e5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_135e60:
    // 0x135e60: 0x50400005
label_135e64:
    if (ctx->pc == 0x135E64u) {
        ctx->pc = 0x135E64u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        ctx->pc = 0x135E68u;
        goto label_135e68;
    }
    ctx->pc = 0x135E60u;
    {
        const bool branch_taken_0x135e60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x135e60) {
            ctx->pc = 0x135E64u;
            SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
            ctx->pc = 0x135E78u;
            goto label_135e78;
        }
    }
    ctx->pc = 0x135E68u;
label_135e68:
    // 0x135e68: 0x40f809
label_135e6c:
    if (ctx->pc == 0x135E6Cu) {
        ctx->pc = 0x135E6Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x135E70u;
        goto label_135e70;
    }
    ctx->pc = 0x135E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x135E70u);
        ctx->pc = 0x135E6Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135DC8u: goto label_135dc8;
            case 0x135DCCu: goto label_135dcc;
            case 0x135DD0u: goto label_135dd0;
            case 0x135DD4u: goto label_135dd4;
            case 0x135DD8u: goto label_135dd8;
            case 0x135DDCu: goto label_135ddc;
            case 0x135DE0u: goto label_135de0;
            case 0x135DE4u: goto label_135de4;
            case 0x135DE8u: goto label_135de8;
            case 0x135DECu: goto label_135dec;
            case 0x135DF0u: goto label_135df0;
            case 0x135DF4u: goto label_135df4;
            case 0x135DF8u: goto label_135df8;
            case 0x135DFCu: goto label_135dfc;
            case 0x135E00u: goto label_135e00;
            case 0x135E04u: goto label_135e04;
            case 0x135E08u: goto label_135e08;
            case 0x135E0Cu: goto label_135e0c;
            case 0x135E10u: goto label_135e10;
            case 0x135E14u: goto label_135e14;
            case 0x135E18u: goto label_135e18;
            case 0x135E1Cu: goto label_135e1c;
            case 0x135E20u: goto label_135e20;
            case 0x135E24u: goto label_135e24;
            case 0x135E28u: goto label_135e28;
            case 0x135E2Cu: goto label_135e2c;
            case 0x135E30u: goto label_135e30;
            case 0x135E34u: goto label_135e34;
            case 0x135E38u: goto label_135e38;
            case 0x135E3Cu: goto label_135e3c;
            case 0x135E40u: goto label_135e40;
            case 0x135E44u: goto label_135e44;
            case 0x135E48u: goto label_135e48;
            case 0x135E4Cu: goto label_135e4c;
            case 0x135E50u: goto label_135e50;
            case 0x135E54u: goto label_135e54;
            case 0x135E58u: goto label_135e58;
            case 0x135E5Cu: goto label_135e5c;
            case 0x135E60u: goto label_135e60;
            case 0x135E64u: goto label_135e64;
            case 0x135E68u: goto label_135e68;
            case 0x135E6Cu: goto label_135e6c;
            case 0x135E70u: goto label_135e70;
            case 0x135E74u: goto label_135e74;
            case 0x135E78u: goto label_135e78;
            case 0x135E7Cu: goto label_135e7c;
            case 0x135E80u: goto label_135e80;
            case 0x135E84u: goto label_135e84;
            case 0x135E88u: goto label_135e88;
            case 0x135E8Cu: goto label_135e8c;
            case 0x135E90u: goto label_135e90;
            case 0x135E94u: goto label_135e94;
            case 0x135E98u: goto label_135e98;
            case 0x135E9Cu: goto label_135e9c;
            case 0x135EA0u: goto label_135ea0;
            case 0x135EA4u: goto label_135ea4;
            case 0x135EA8u: goto label_135ea8;
            case 0x135EACu: goto label_135eac;
            case 0x135EB0u: goto label_135eb0;
            case 0x135EB4u: goto label_135eb4;
            case 0x135EB8u: goto label_135eb8;
            case 0x135EBCu: goto label_135ebc;
            case 0x135EC0u: goto label_135ec0;
            case 0x135EC4u: goto label_135ec4;
            case 0x135EC8u: goto label_135ec8;
            case 0x135ECCu: goto label_135ecc;
            case 0x135ED0u: goto label_135ed0;
            case 0x135ED4u: goto label_135ed4;
            case 0x135ED8u: goto label_135ed8;
            case 0x135EDCu: goto label_135edc;
            case 0x135EE0u: goto label_135ee0;
            case 0x135EE4u: goto label_135ee4;
            case 0x135EE8u: goto label_135ee8;
            case 0x135EECu: goto label_135eec;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x135E70u; }
            if (ctx->pc != 0x135E70u) { return; }
        }
    }
    ctx->pc = 0x135E70u;
label_135e70:
    // 0x135e70: 0x10000003
label_135e74:
    if (ctx->pc == 0x135E74u) {
        ctx->pc = 0x135E74u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x135E78u;
        goto label_135e78;
    }
    ctx->pc = 0x135E70u;
    {
        const bool branch_taken_0x135e70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x135E74u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x135e70) {
            ctx->pc = 0x135E80u;
            goto label_135e80;
        }
    }
    ctx->pc = 0x135E78u;
label_135e78:
    // 0x135e78: 0xc04d480
label_135e7c:
    if (ctx->pc == 0x135E7Cu) {
        ctx->pc = 0x135E7Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949464));
        ctx->pc = 0x135E80u;
        goto label_135e80;
    }
    ctx->pc = 0x135E78u;
    SET_GPR_U32(ctx, 31, 0x135E80u);
    ctx->pc = 0x135E7Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949464));
    ctx->pc = 0x135200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135200_0x135200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135E80u; }
    }
    if (ctx->pc != 0x135E80u) { return; }
    ctx->pc = 0x135E80u;
label_135e80:
    // 0x135e80: 0x200102d
    ctx->pc = 0x135e80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_135e84:
    // 0x135e84: 0xdfb00000
    ctx->pc = 0x135e84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_135e88:
    // 0x135e88: 0xdfbf0008
    ctx->pc = 0x135e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_135e8c:
    // 0x135e8c: 0x3e00008
label_135e90:
    if (ctx->pc == 0x135E90u) {
        ctx->pc = 0x135E90u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x135E94u;
        goto label_135e94;
    }
    ctx->pc = 0x135E8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135E90u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135DC8u: goto label_135dc8;
            case 0x135DCCu: goto label_135dcc;
            case 0x135DD0u: goto label_135dd0;
            case 0x135DD4u: goto label_135dd4;
            case 0x135DD8u: goto label_135dd8;
            case 0x135DDCu: goto label_135ddc;
            case 0x135DE0u: goto label_135de0;
            case 0x135DE4u: goto label_135de4;
            case 0x135DE8u: goto label_135de8;
            case 0x135DECu: goto label_135dec;
            case 0x135DF0u: goto label_135df0;
            case 0x135DF4u: goto label_135df4;
            case 0x135DF8u: goto label_135df8;
            case 0x135DFCu: goto label_135dfc;
            case 0x135E00u: goto label_135e00;
            case 0x135E04u: goto label_135e04;
            case 0x135E08u: goto label_135e08;
            case 0x135E0Cu: goto label_135e0c;
            case 0x135E10u: goto label_135e10;
            case 0x135E14u: goto label_135e14;
            case 0x135E18u: goto label_135e18;
            case 0x135E1Cu: goto label_135e1c;
            case 0x135E20u: goto label_135e20;
            case 0x135E24u: goto label_135e24;
            case 0x135E28u: goto label_135e28;
            case 0x135E2Cu: goto label_135e2c;
            case 0x135E30u: goto label_135e30;
            case 0x135E34u: goto label_135e34;
            case 0x135E38u: goto label_135e38;
            case 0x135E3Cu: goto label_135e3c;
            case 0x135E40u: goto label_135e40;
            case 0x135E44u: goto label_135e44;
            case 0x135E48u: goto label_135e48;
            case 0x135E4Cu: goto label_135e4c;
            case 0x135E50u: goto label_135e50;
            case 0x135E54u: goto label_135e54;
            case 0x135E58u: goto label_135e58;
            case 0x135E5Cu: goto label_135e5c;
            case 0x135E60u: goto label_135e60;
            case 0x135E64u: goto label_135e64;
            case 0x135E68u: goto label_135e68;
            case 0x135E6Cu: goto label_135e6c;
            case 0x135E70u: goto label_135e70;
            case 0x135E74u: goto label_135e74;
            case 0x135E78u: goto label_135e78;
            case 0x135E7Cu: goto label_135e7c;
            case 0x135E80u: goto label_135e80;
            case 0x135E84u: goto label_135e84;
            case 0x135E88u: goto label_135e88;
            case 0x135E8Cu: goto label_135e8c;
            case 0x135E90u: goto label_135e90;
            case 0x135E94u: goto label_135e94;
            case 0x135E98u: goto label_135e98;
            case 0x135E9Cu: goto label_135e9c;
            case 0x135EA0u: goto label_135ea0;
            case 0x135EA4u: goto label_135ea4;
            case 0x135EA8u: goto label_135ea8;
            case 0x135EACu: goto label_135eac;
            case 0x135EB0u: goto label_135eb0;
            case 0x135EB4u: goto label_135eb4;
            case 0x135EB8u: goto label_135eb8;
            case 0x135EBCu: goto label_135ebc;
            case 0x135EC0u: goto label_135ec0;
            case 0x135EC4u: goto label_135ec4;
            case 0x135EC8u: goto label_135ec8;
            case 0x135ECCu: goto label_135ecc;
            case 0x135ED0u: goto label_135ed0;
            case 0x135ED4u: goto label_135ed4;
            case 0x135ED8u: goto label_135ed8;
            case 0x135EDCu: goto label_135edc;
            case 0x135EE0u: goto label_135ee0;
            case 0x135EE4u: goto label_135ee4;
            case 0x135EE8u: goto label_135ee8;
            case 0x135EECu: goto label_135eec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x135E94u;
label_135e94:
    // 0x135e94: 0x0
    ctx->pc = 0x135e94u;
    // NOP
label_135e98:
    // 0x135e98: 0x27bdfff0
    ctx->pc = 0x135e98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_135e9c:
    // 0x135e9c: 0x14800006
label_135ea0:
    if (ctx->pc == 0x135EA0u) {
        ctx->pc = 0x135EA0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x135EA4u;
        goto label_135ea4;
    }
    ctx->pc = 0x135E9Cu;
    {
        const bool branch_taken_0x135e9c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x135EA0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x135e9c) {
            ctx->pc = 0x135EB8u;
            goto label_135eb8;
        }
    }
    ctx->pc = 0x135EA4u;
label_135ea4:
    // 0x135ea4: 0x3c040024
    ctx->pc = 0x135ea4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_135ea8:
    // 0x135ea8: 0xdfbf0000
    ctx->pc = 0x135ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_135eac:
    // 0x135eac: 0x2484ba70
    ctx->pc = 0x135eacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949488));
label_135eb0:
    // 0x135eb0: 0x804d480
label_135eb4:
    if (ctx->pc == 0x135EB4u) {
        ctx->pc = 0x135EB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x135EB8u;
        goto label_135eb8;
    }
    ctx->pc = 0x135EB0u;
    ctx->pc = 0x135EB4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x135200u;
    sub_00135200_0x135200(rdram, ctx, runtime); return;
    ctx->pc = 0x135EB8u;
label_135eb8:
    // 0x135eb8: 0x8c820000
    ctx->pc = 0x135eb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_135ebc:
    // 0x135ebc: 0x8c420028
    ctx->pc = 0x135ebcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_135ec0:
    // 0x135ec0: 0x50400007
label_135ec4:
    if (ctx->pc == 0x135EC4u) {
        ctx->pc = 0x135EC4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        ctx->pc = 0x135EC8u;
        goto label_135ec8;
    }
    ctx->pc = 0x135EC0u;
    {
        const bool branch_taken_0x135ec0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x135ec0) {
            ctx->pc = 0x135EC4u;
            SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
            ctx->pc = 0x135EE0u;
            goto label_135ee0;
        }
    }
    ctx->pc = 0x135EC8u;
label_135ec8:
    // 0x135ec8: 0x40f809
label_135ecc:
    if (ctx->pc == 0x135ECCu) {
        ctx->pc = 0x135ECCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x135ED0u;
        goto label_135ed0;
    }
    ctx->pc = 0x135EC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x135ED0u);
        ctx->pc = 0x135ECCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135DC8u: goto label_135dc8;
            case 0x135DCCu: goto label_135dcc;
            case 0x135DD0u: goto label_135dd0;
            case 0x135DD4u: goto label_135dd4;
            case 0x135DD8u: goto label_135dd8;
            case 0x135DDCu: goto label_135ddc;
            case 0x135DE0u: goto label_135de0;
            case 0x135DE4u: goto label_135de4;
            case 0x135DE8u: goto label_135de8;
            case 0x135DECu: goto label_135dec;
            case 0x135DF0u: goto label_135df0;
            case 0x135DF4u: goto label_135df4;
            case 0x135DF8u: goto label_135df8;
            case 0x135DFCu: goto label_135dfc;
            case 0x135E00u: goto label_135e00;
            case 0x135E04u: goto label_135e04;
            case 0x135E08u: goto label_135e08;
            case 0x135E0Cu: goto label_135e0c;
            case 0x135E10u: goto label_135e10;
            case 0x135E14u: goto label_135e14;
            case 0x135E18u: goto label_135e18;
            case 0x135E1Cu: goto label_135e1c;
            case 0x135E20u: goto label_135e20;
            case 0x135E24u: goto label_135e24;
            case 0x135E28u: goto label_135e28;
            case 0x135E2Cu: goto label_135e2c;
            case 0x135E30u: goto label_135e30;
            case 0x135E34u: goto label_135e34;
            case 0x135E38u: goto label_135e38;
            case 0x135E3Cu: goto label_135e3c;
            case 0x135E40u: goto label_135e40;
            case 0x135E44u: goto label_135e44;
            case 0x135E48u: goto label_135e48;
            case 0x135E4Cu: goto label_135e4c;
            case 0x135E50u: goto label_135e50;
            case 0x135E54u: goto label_135e54;
            case 0x135E58u: goto label_135e58;
            case 0x135E5Cu: goto label_135e5c;
            case 0x135E60u: goto label_135e60;
            case 0x135E64u: goto label_135e64;
            case 0x135E68u: goto label_135e68;
            case 0x135E6Cu: goto label_135e6c;
            case 0x135E70u: goto label_135e70;
            case 0x135E74u: goto label_135e74;
            case 0x135E78u: goto label_135e78;
            case 0x135E7Cu: goto label_135e7c;
            case 0x135E80u: goto label_135e80;
            case 0x135E84u: goto label_135e84;
            case 0x135E88u: goto label_135e88;
            case 0x135E8Cu: goto label_135e8c;
            case 0x135E90u: goto label_135e90;
            case 0x135E94u: goto label_135e94;
            case 0x135E98u: goto label_135e98;
            case 0x135E9Cu: goto label_135e9c;
            case 0x135EA0u: goto label_135ea0;
            case 0x135EA4u: goto label_135ea4;
            case 0x135EA8u: goto label_135ea8;
            case 0x135EACu: goto label_135eac;
            case 0x135EB0u: goto label_135eb0;
            case 0x135EB4u: goto label_135eb4;
            case 0x135EB8u: goto label_135eb8;
            case 0x135EBCu: goto label_135ebc;
            case 0x135EC0u: goto label_135ec0;
            case 0x135EC4u: goto label_135ec4;
            case 0x135EC8u: goto label_135ec8;
            case 0x135ECCu: goto label_135ecc;
            case 0x135ED0u: goto label_135ed0;
            case 0x135ED4u: goto label_135ed4;
            case 0x135ED8u: goto label_135ed8;
            case 0x135EDCu: goto label_135edc;
            case 0x135EE0u: goto label_135ee0;
            case 0x135EE4u: goto label_135ee4;
            case 0x135EE8u: goto label_135ee8;
            case 0x135EECu: goto label_135eec;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x135ED0u; }
            if (ctx->pc != 0x135ED0u) { return; }
        }
    }
    ctx->pc = 0x135ED0u;
label_135ed0:
    // 0x135ed0: 0xdfbf0000
    ctx->pc = 0x135ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_135ed4:
    // 0x135ed4: 0x3e00008
label_135ed8:
    if (ctx->pc == 0x135ED8u) {
        ctx->pc = 0x135ED8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x135EDCu;
        goto label_135edc;
    }
    ctx->pc = 0x135ED4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135ED8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135DC8u: goto label_135dc8;
            case 0x135DCCu: goto label_135dcc;
            case 0x135DD0u: goto label_135dd0;
            case 0x135DD4u: goto label_135dd4;
            case 0x135DD8u: goto label_135dd8;
            case 0x135DDCu: goto label_135ddc;
            case 0x135DE0u: goto label_135de0;
            case 0x135DE4u: goto label_135de4;
            case 0x135DE8u: goto label_135de8;
            case 0x135DECu: goto label_135dec;
            case 0x135DF0u: goto label_135df0;
            case 0x135DF4u: goto label_135df4;
            case 0x135DF8u: goto label_135df8;
            case 0x135DFCu: goto label_135dfc;
            case 0x135E00u: goto label_135e00;
            case 0x135E04u: goto label_135e04;
            case 0x135E08u: goto label_135e08;
            case 0x135E0Cu: goto label_135e0c;
            case 0x135E10u: goto label_135e10;
            case 0x135E14u: goto label_135e14;
            case 0x135E18u: goto label_135e18;
            case 0x135E1Cu: goto label_135e1c;
            case 0x135E20u: goto label_135e20;
            case 0x135E24u: goto label_135e24;
            case 0x135E28u: goto label_135e28;
            case 0x135E2Cu: goto label_135e2c;
            case 0x135E30u: goto label_135e30;
            case 0x135E34u: goto label_135e34;
            case 0x135E38u: goto label_135e38;
            case 0x135E3Cu: goto label_135e3c;
            case 0x135E40u: goto label_135e40;
            case 0x135E44u: goto label_135e44;
            case 0x135E48u: goto label_135e48;
            case 0x135E4Cu: goto label_135e4c;
            case 0x135E50u: goto label_135e50;
            case 0x135E54u: goto label_135e54;
            case 0x135E58u: goto label_135e58;
            case 0x135E5Cu: goto label_135e5c;
            case 0x135E60u: goto label_135e60;
            case 0x135E64u: goto label_135e64;
            case 0x135E68u: goto label_135e68;
            case 0x135E6Cu: goto label_135e6c;
            case 0x135E70u: goto label_135e70;
            case 0x135E74u: goto label_135e74;
            case 0x135E78u: goto label_135e78;
            case 0x135E7Cu: goto label_135e7c;
            case 0x135E80u: goto label_135e80;
            case 0x135E84u: goto label_135e84;
            case 0x135E88u: goto label_135e88;
            case 0x135E8Cu: goto label_135e8c;
            case 0x135E90u: goto label_135e90;
            case 0x135E94u: goto label_135e94;
            case 0x135E98u: goto label_135e98;
            case 0x135E9Cu: goto label_135e9c;
            case 0x135EA0u: goto label_135ea0;
            case 0x135EA4u: goto label_135ea4;
            case 0x135EA8u: goto label_135ea8;
            case 0x135EACu: goto label_135eac;
            case 0x135EB0u: goto label_135eb0;
            case 0x135EB4u: goto label_135eb4;
            case 0x135EB8u: goto label_135eb8;
            case 0x135EBCu: goto label_135ebc;
            case 0x135EC0u: goto label_135ec0;
            case 0x135EC4u: goto label_135ec4;
            case 0x135EC8u: goto label_135ec8;
            case 0x135ECCu: goto label_135ecc;
            case 0x135ED0u: goto label_135ed0;
            case 0x135ED4u: goto label_135ed4;
            case 0x135ED8u: goto label_135ed8;
            case 0x135EDCu: goto label_135edc;
            case 0x135EE0u: goto label_135ee0;
            case 0x135EE4u: goto label_135ee4;
            case 0x135EE8u: goto label_135ee8;
            case 0x135EECu: goto label_135eec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x135EDCu;
label_135edc:
    // 0x135edc: 0x0
    ctx->pc = 0x135edcu;
    // NOP
label_135ee0:
    // 0x135ee0: 0xdfbf0000
    ctx->pc = 0x135ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_135ee4:
    // 0x135ee4: 0x2484ba90
    ctx->pc = 0x135ee4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949520));
label_135ee8:
    // 0x135ee8: 0x804d480
label_135eec:
    if (ctx->pc == 0x135EECu) {
        ctx->pc = 0x135EECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x135EF0u;
        goto label_fallthrough_0x135ee8;
    }
    ctx->pc = 0x135EE8u;
    ctx->pc = 0x135EECu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x135200u;
    sub_00135200_0x135200(rdram, ctx, runtime); return;
label_fallthrough_0x135ee8:
    ctx->pc = 0x135EF0u;
}
