#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00135CF8
// Address: 0x135cf8 - 0x135d60
void sub_00135CF8_0x135cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x135cf8u;

label_135cf8:
    // 0x135cf8: 0x27bdfff0
    ctx->pc = 0x135cf8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_135cfc:
    // 0x135cfc: 0xffb00000
    ctx->pc = 0x135cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_135d00:
    // 0x135d00: 0x14800007
label_135d04:
    if (ctx->pc == 0x135D04u) {
        ctx->pc = 0x135D04u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x135D08u;
        goto label_135d08;
    }
    ctx->pc = 0x135D00u;
    {
        const bool branch_taken_0x135d00 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x135D04u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        if (branch_taken_0x135d00) {
            ctx->pc = 0x135D20u;
            goto label_135d20;
        }
    }
    ctx->pc = 0x135D08u;
label_135d08:
    // 0x135d08: 0x3c040024
    ctx->pc = 0x135d08u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_135d0c:
    // 0x135d0c: 0xc04d480
label_135d10:
    if (ctx->pc == 0x135D10u) {
        ctx->pc = 0x135D10u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949264));
        ctx->pc = 0x135D14u;
        goto label_135d14;
    }
    ctx->pc = 0x135D0Cu;
    SET_GPR_U32(ctx, 31, 0x135D14u);
    ctx->pc = 0x135D10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949264));
    ctx->pc = 0x135200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135200_0x135200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135D14u; }
    }
    if (ctx->pc != 0x135D14u) { return; }
    ctx->pc = 0x135D14u;
label_135d14:
    // 0x135d14: 0x1000000e
label_135d18:
    if (ctx->pc == 0x135D18u) {
        ctx->pc = 0x135D18u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x135D1Cu;
        goto label_135d1c;
    }
    ctx->pc = 0x135D14u;
    {
        const bool branch_taken_0x135d14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x135D18u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x135d14) {
            ctx->pc = 0x135D50u;
            goto label_135d50;
        }
    }
    ctx->pc = 0x135D1Cu;
label_135d1c:
    // 0x135d1c: 0x0
    ctx->pc = 0x135d1cu;
    // NOP
label_135d20:
    // 0x135d20: 0x8c820000
    ctx->pc = 0x135d20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_135d24:
    // 0x135d24: 0x8c42001c
    ctx->pc = 0x135d24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_135d28:
    // 0x135d28: 0x50400005
label_135d2c:
    if (ctx->pc == 0x135D2Cu) {
        ctx->pc = 0x135D2Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        ctx->pc = 0x135D30u;
        goto label_135d30;
    }
    ctx->pc = 0x135D28u;
    {
        const bool branch_taken_0x135d28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x135d28) {
            ctx->pc = 0x135D2Cu;
            SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
            ctx->pc = 0x135D40u;
            goto label_135d40;
        }
    }
    ctx->pc = 0x135D30u;
label_135d30:
    // 0x135d30: 0x40f809
label_135d34:
    if (ctx->pc == 0x135D34u) {
        ctx->pc = 0x135D34u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x135D38u;
        goto label_135d38;
    }
    ctx->pc = 0x135D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x135D38u);
        ctx->pc = 0x135D34u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135CF8u: goto label_135cf8;
            case 0x135CFCu: goto label_135cfc;
            case 0x135D00u: goto label_135d00;
            case 0x135D04u: goto label_135d04;
            case 0x135D08u: goto label_135d08;
            case 0x135D0Cu: goto label_135d0c;
            case 0x135D10u: goto label_135d10;
            case 0x135D14u: goto label_135d14;
            case 0x135D18u: goto label_135d18;
            case 0x135D1Cu: goto label_135d1c;
            case 0x135D20u: goto label_135d20;
            case 0x135D24u: goto label_135d24;
            case 0x135D28u: goto label_135d28;
            case 0x135D2Cu: goto label_135d2c;
            case 0x135D30u: goto label_135d30;
            case 0x135D34u: goto label_135d34;
            case 0x135D38u: goto label_135d38;
            case 0x135D3Cu: goto label_135d3c;
            case 0x135D40u: goto label_135d40;
            case 0x135D44u: goto label_135d44;
            case 0x135D48u: goto label_135d48;
            case 0x135D4Cu: goto label_135d4c;
            case 0x135D50u: goto label_135d50;
            case 0x135D54u: goto label_135d54;
            case 0x135D58u: goto label_135d58;
            case 0x135D5Cu: goto label_135d5c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x135D38u; }
            if (ctx->pc != 0x135D38u) { return; }
        }
    }
    ctx->pc = 0x135D38u;
label_135d38:
    // 0x135d38: 0x10000004
label_135d3c:
    if (ctx->pc == 0x135D3Cu) {
        ctx->pc = 0x135D3Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x135D40u;
        goto label_135d40;
    }
    ctx->pc = 0x135D38u;
    {
        const bool branch_taken_0x135d38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x135D3Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x135d38) {
            ctx->pc = 0x135D4Cu;
            goto label_135d4c;
        }
    }
    ctx->pc = 0x135D40u;
label_135d40:
    // 0x135d40: 0x802d
    ctx->pc = 0x135d40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_135d44:
    // 0x135d44: 0xc04d480
label_135d48:
    if (ctx->pc == 0x135D48u) {
        ctx->pc = 0x135D48u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949296));
        ctx->pc = 0x135D4Cu;
        goto label_135d4c;
    }
    ctx->pc = 0x135D44u;
    SET_GPR_U32(ctx, 31, 0x135D4Cu);
    ctx->pc = 0x135D48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949296));
    ctx->pc = 0x135200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135200_0x135200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135D4Cu; }
    }
    if (ctx->pc != 0x135D4Cu) { return; }
    ctx->pc = 0x135D4Cu;
label_135d4c:
    // 0x135d4c: 0x200102d
    ctx->pc = 0x135d4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_135d50:
    // 0x135d50: 0xdfb00000
    ctx->pc = 0x135d50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_135d54:
    // 0x135d54: 0xdfbf0008
    ctx->pc = 0x135d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_135d58:
    // 0x135d58: 0x3e00008
label_135d5c:
    if (ctx->pc == 0x135D5Cu) {
        ctx->pc = 0x135D5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x135D60u;
        goto label_fallthrough_0x135d58;
    }
    ctx->pc = 0x135D58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135D5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135CF8u: goto label_135cf8;
            case 0x135CFCu: goto label_135cfc;
            case 0x135D00u: goto label_135d00;
            case 0x135D04u: goto label_135d04;
            case 0x135D08u: goto label_135d08;
            case 0x135D0Cu: goto label_135d0c;
            case 0x135D10u: goto label_135d10;
            case 0x135D14u: goto label_135d14;
            case 0x135D18u: goto label_135d18;
            case 0x135D1Cu: goto label_135d1c;
            case 0x135D20u: goto label_135d20;
            case 0x135D24u: goto label_135d24;
            case 0x135D28u: goto label_135d28;
            case 0x135D2Cu: goto label_135d2c;
            case 0x135D30u: goto label_135d30;
            case 0x135D34u: goto label_135d34;
            case 0x135D38u: goto label_135d38;
            case 0x135D3Cu: goto label_135d3c;
            case 0x135D40u: goto label_135d40;
            case 0x135D44u: goto label_135d44;
            case 0x135D48u: goto label_135d48;
            case 0x135D4Cu: goto label_135d4c;
            case 0x135D50u: goto label_135d50;
            case 0x135D54u: goto label_135d54;
            case 0x135D58u: goto label_135d58;
            case 0x135D5Cu: goto label_135d5c;
            default: break;
        }
        return;
    }
label_fallthrough_0x135d58:
    ctx->pc = 0x135D60u;
}
