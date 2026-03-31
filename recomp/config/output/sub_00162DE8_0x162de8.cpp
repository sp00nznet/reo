#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00162DE8
// Address: 0x162de8 - 0x162e50
void sub_00162DE8_0x162de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x162de8u;

label_162de8:
    // 0x162de8: 0x27bdffe0
    ctx->pc = 0x162de8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_162dec:
    // 0x162dec: 0xffb00000
    ctx->pc = 0x162decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_162df0:
    // 0x162df0: 0x80802d
    ctx->pc = 0x162df0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_162df4:
    // 0x162df4: 0xffb10008
    ctx->pc = 0x162df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_162df8:
    // 0x162df8: 0xa0882d
    ctx->pc = 0x162df8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_162dfc:
    // 0x162dfc: 0xffb20010
    ctx->pc = 0x162dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_162e00:
    // 0x162e00: 0xffbf0018
    ctx->pc = 0x162e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_162e04:
    // 0x162e04: 0xc058d08
label_162e08:
    if (ctx->pc == 0x162E08u) {
        ctx->pc = 0x162E08u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162E0Cu;
        goto label_162e0c;
    }
    ctx->pc = 0x162E04u;
    SET_GPR_U32(ctx, 31, 0x162E0Cu);
    ctx->pc = 0x162E08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x163420u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163420_0x163420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162E0Cu; }
    }
    if (ctx->pc != 0x162E0Cu) { return; }
    ctx->pc = 0x162E0Cu;
label_162e0c:
    // 0x162e0c: 0x10400008
label_162e10:
    if (ctx->pc == 0x162E10u) {
        ctx->pc = 0x162E10u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162E14u;
        goto label_162e14;
    }
    ctx->pc = 0x162E0Cu;
    {
        const bool branch_taken_0x162e0c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x162E10u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x162e0c) {
            ctx->pc = 0x162E30u;
            goto label_162e30;
        }
    }
    ctx->pc = 0x162E14u;
label_162e14:
    // 0x162e14: 0x8c420008
    ctx->pc = 0x162e14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_162e18:
    // 0x162e18: 0x10400005
label_162e1c:
    if (ctx->pc == 0x162E1Cu) {
        ctx->pc = 0x162E1Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162E20u;
        goto label_162e20;
    }
    ctx->pc = 0x162E18u;
    {
        const bool branch_taken_0x162e18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x162E1Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x162e18) {
            ctx->pc = 0x162E30u;
            goto label_162e30;
        }
    }
    ctx->pc = 0x162E20u;
label_162e20:
    // 0x162e20: 0x220282d
    ctx->pc = 0x162e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_162e24:
    // 0x162e24: 0x40f809
label_162e28:
    if (ctx->pc == 0x162E28u) {
        ctx->pc = 0x162E28u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162E2Cu;
        goto label_162e2c;
    }
    ctx->pc = 0x162E24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x162E2Cu);
        ctx->pc = 0x162E28u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162DE8u: goto label_162de8;
            case 0x162DECu: goto label_162dec;
            case 0x162DF0u: goto label_162df0;
            case 0x162DF4u: goto label_162df4;
            case 0x162DF8u: goto label_162df8;
            case 0x162DFCu: goto label_162dfc;
            case 0x162E00u: goto label_162e00;
            case 0x162E04u: goto label_162e04;
            case 0x162E08u: goto label_162e08;
            case 0x162E0Cu: goto label_162e0c;
            case 0x162E10u: goto label_162e10;
            case 0x162E14u: goto label_162e14;
            case 0x162E18u: goto label_162e18;
            case 0x162E1Cu: goto label_162e1c;
            case 0x162E20u: goto label_162e20;
            case 0x162E24u: goto label_162e24;
            case 0x162E28u: goto label_162e28;
            case 0x162E2Cu: goto label_162e2c;
            case 0x162E30u: goto label_162e30;
            case 0x162E34u: goto label_162e34;
            case 0x162E38u: goto label_162e38;
            case 0x162E3Cu: goto label_162e3c;
            case 0x162E40u: goto label_162e40;
            case 0x162E44u: goto label_162e44;
            case 0x162E48u: goto label_162e48;
            case 0x162E4Cu: goto label_162e4c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x162E2Cu; }
            if (ctx->pc != 0x162E2Cu) { return; }
        }
    }
    ctx->pc = 0x162E2Cu;
label_162e2c:
    // 0x162e2c: 0x40182d
    ctx->pc = 0x162e2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_162e30:
    // 0x162e30: 0xdfb00000
    ctx->pc = 0x162e30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_162e34:
    // 0x162e34: 0x60102d
    ctx->pc = 0x162e34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_162e38:
    // 0x162e38: 0xdfb10008
    ctx->pc = 0x162e38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_162e3c:
    // 0x162e3c: 0xdfb20010
    ctx->pc = 0x162e3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_162e40:
    // 0x162e40: 0xdfbf0018
    ctx->pc = 0x162e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_162e44:
    // 0x162e44: 0x3e00008
label_162e48:
    if (ctx->pc == 0x162E48u) {
        ctx->pc = 0x162E48u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x162E4Cu;
        goto label_162e4c;
    }
    ctx->pc = 0x162E44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162E48u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162DE8u: goto label_162de8;
            case 0x162DECu: goto label_162dec;
            case 0x162DF0u: goto label_162df0;
            case 0x162DF4u: goto label_162df4;
            case 0x162DF8u: goto label_162df8;
            case 0x162DFCu: goto label_162dfc;
            case 0x162E00u: goto label_162e00;
            case 0x162E04u: goto label_162e04;
            case 0x162E08u: goto label_162e08;
            case 0x162E0Cu: goto label_162e0c;
            case 0x162E10u: goto label_162e10;
            case 0x162E14u: goto label_162e14;
            case 0x162E18u: goto label_162e18;
            case 0x162E1Cu: goto label_162e1c;
            case 0x162E20u: goto label_162e20;
            case 0x162E24u: goto label_162e24;
            case 0x162E28u: goto label_162e28;
            case 0x162E2Cu: goto label_162e2c;
            case 0x162E30u: goto label_162e30;
            case 0x162E34u: goto label_162e34;
            case 0x162E38u: goto label_162e38;
            case 0x162E3Cu: goto label_162e3c;
            case 0x162E40u: goto label_162e40;
            case 0x162E44u: goto label_162e44;
            case 0x162E48u: goto label_162e48;
            case 0x162E4Cu: goto label_162e4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x162E4Cu;
label_162e4c:
    // 0x162e4c: 0x0
    ctx->pc = 0x162e4cu;
    // NOP
}
