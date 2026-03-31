#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012BD90
// Address: 0x12bd90 - 0x12bee0
void sub_0012BD90_0x12bd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12bd90u;

label_12bd90:
    // 0x12bd90: 0x27bdfff0
    ctx->pc = 0x12bd90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_12bd94:
    // 0x12bd94: 0xffbf0000
    ctx->pc = 0x12bd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_12bd98:
    // 0x12bd98: 0xdfbf0000
    ctx->pc = 0x12bd98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12bd9c:
    // 0x12bd9c: 0x80505ba
label_12bda0:
    if (ctx->pc == 0x12BDA0u) {
        ctx->pc = 0x12BDA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12BDA4u;
        goto label_12bda4;
    }
    ctx->pc = 0x12BD9Cu;
    ctx->pc = 0x12BDA0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1416E8u;
    sub_001416E8_0x1416e8(rdram, ctx, runtime); return;
    ctx->pc = 0x12BDA4u;
label_12bda4:
    // 0x12bda4: 0x0
    ctx->pc = 0x12bda4u;
    // NOP
label_12bda8:
    // 0x12bda8: 0x3c030021
    ctx->pc = 0x12bda8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
label_12bdac:
    // 0x12bdac: 0x3e00008
label_12bdb0:
    if (ctx->pc == 0x12BDB0u) {
        ctx->pc = 0x12BDB0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 1152)));
        ctx->pc = 0x12BDB4u;
        goto label_12bdb4;
    }
    ctx->pc = 0x12BDACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BDB0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 1152)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12BD90u: goto label_12bd90;
            case 0x12BD94u: goto label_12bd94;
            case 0x12BD98u: goto label_12bd98;
            case 0x12BD9Cu: goto label_12bd9c;
            case 0x12BDA0u: goto label_12bda0;
            case 0x12BDA4u: goto label_12bda4;
            case 0x12BDA8u: goto label_12bda8;
            case 0x12BDACu: goto label_12bdac;
            case 0x12BDB0u: goto label_12bdb0;
            case 0x12BDB4u: goto label_12bdb4;
            case 0x12BDB8u: goto label_12bdb8;
            case 0x12BDBCu: goto label_12bdbc;
            case 0x12BDC0u: goto label_12bdc0;
            case 0x12BDC4u: goto label_12bdc4;
            case 0x12BDC8u: goto label_12bdc8;
            case 0x12BDCCu: goto label_12bdcc;
            case 0x12BDD0u: goto label_12bdd0;
            case 0x12BDD4u: goto label_12bdd4;
            case 0x12BDD8u: goto label_12bdd8;
            case 0x12BDDCu: goto label_12bddc;
            case 0x12BDE0u: goto label_12bde0;
            case 0x12BDE4u: goto label_12bde4;
            case 0x12BDE8u: goto label_12bde8;
            case 0x12BDECu: goto label_12bdec;
            case 0x12BDF0u: goto label_12bdf0;
            case 0x12BDF4u: goto label_12bdf4;
            case 0x12BDF8u: goto label_12bdf8;
            case 0x12BDFCu: goto label_12bdfc;
            case 0x12BE00u: goto label_12be00;
            case 0x12BE04u: goto label_12be04;
            case 0x12BE08u: goto label_12be08;
            case 0x12BE0Cu: goto label_12be0c;
            case 0x12BE10u: goto label_12be10;
            case 0x12BE14u: goto label_12be14;
            case 0x12BE18u: goto label_12be18;
            case 0x12BE1Cu: goto label_12be1c;
            case 0x12BE20u: goto label_12be20;
            case 0x12BE24u: goto label_12be24;
            case 0x12BE28u: goto label_12be28;
            case 0x12BE2Cu: goto label_12be2c;
            case 0x12BE30u: goto label_12be30;
            case 0x12BE34u: goto label_12be34;
            case 0x12BE38u: goto label_12be38;
            case 0x12BE3Cu: goto label_12be3c;
            case 0x12BE40u: goto label_12be40;
            case 0x12BE44u: goto label_12be44;
            case 0x12BE48u: goto label_12be48;
            case 0x12BE4Cu: goto label_12be4c;
            case 0x12BE50u: goto label_12be50;
            case 0x12BE54u: goto label_12be54;
            case 0x12BE58u: goto label_12be58;
            case 0x12BE5Cu: goto label_12be5c;
            case 0x12BE60u: goto label_12be60;
            case 0x12BE64u: goto label_12be64;
            case 0x12BE68u: goto label_12be68;
            case 0x12BE6Cu: goto label_12be6c;
            case 0x12BE70u: goto label_12be70;
            case 0x12BE74u: goto label_12be74;
            case 0x12BE78u: goto label_12be78;
            case 0x12BE7Cu: goto label_12be7c;
            case 0x12BE80u: goto label_12be80;
            case 0x12BE84u: goto label_12be84;
            case 0x12BE88u: goto label_12be88;
            case 0x12BE8Cu: goto label_12be8c;
            case 0x12BE90u: goto label_12be90;
            case 0x12BE94u: goto label_12be94;
            case 0x12BE98u: goto label_12be98;
            case 0x12BE9Cu: goto label_12be9c;
            case 0x12BEA0u: goto label_12bea0;
            case 0x12BEA4u: goto label_12bea4;
            case 0x12BEA8u: goto label_12bea8;
            case 0x12BEACu: goto label_12beac;
            case 0x12BEB0u: goto label_12beb0;
            case 0x12BEB4u: goto label_12beb4;
            case 0x12BEB8u: goto label_12beb8;
            case 0x12BEBCu: goto label_12bebc;
            case 0x12BEC0u: goto label_12bec0;
            case 0x12BEC4u: goto label_12bec4;
            case 0x12BEC8u: goto label_12bec8;
            case 0x12BECCu: goto label_12becc;
            case 0x12BED0u: goto label_12bed0;
            case 0x12BED4u: goto label_12bed4;
            case 0x12BED8u: goto label_12bed8;
            case 0x12BEDCu: goto label_12bedc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12BDB4u;
label_12bdb4:
    // 0x12bdb4: 0x0
    ctx->pc = 0x12bdb4u;
    // NOP
label_12bdb8:
    // 0x12bdb8: 0x27bdffe0
    ctx->pc = 0x12bdb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_12bdbc:
    // 0x12bdbc: 0x3c020021
    ctx->pc = 0x12bdbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
label_12bdc0:
    // 0x12bdc0: 0xffb10008
    ctx->pc = 0x12bdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_12bdc4:
    // 0x12bdc4: 0x80882d
    ctx->pc = 0x12bdc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12bdc8:
    // 0x12bdc8: 0xffb20010
    ctx->pc = 0x12bdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_12bdcc:
    // 0x12bdcc: 0x3c120021
    ctx->pc = 0x12bdccu;
    SET_GPR_U32(ctx, 18, ((uint32_t)33 << 16));
label_12bdd0:
    // 0x12bdd0: 0xffb00000
    ctx->pc = 0x12bdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_12bdd4:
    // 0x12bdd4: 0x2442f3c4
    ctx->pc = 0x12bdd4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294964164));
label_12bdd8:
    // 0x12bdd8: 0xffbf0018
    ctx->pc = 0x12bdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_12bddc:
    // 0x12bddc: 0x2645055c
    ctx->pc = 0x12bddcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 1372));
label_12bde0:
    // 0x12bde0: 0x8c430000
    ctx->pc = 0x12bde0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12bde4:
    // 0x12bde4: 0x24630001
    ctx->pc = 0x12bde4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_12bde8:
    // 0x12bde8: 0xac430000
    ctx->pc = 0x12bde8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_12bdec:
    // 0x12bdec: 0x8ca40000
    ctx->pc = 0x12bdecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_12bdf0:
    // 0x12bdf0: 0x1480002d
label_12bdf4:
    if (ctx->pc == 0x12BDF4u) {
        ctx->pc = 0x12BDF4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
        ctx->pc = 0x12BDF8u;
        goto label_12bdf8;
    }
    ctx->pc = 0x12BDF0u;
    {
        const bool branch_taken_0x12bdf0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x12BDF4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
        if (branch_taken_0x12bdf0) {
            ctx->pc = 0x12BEA8u;
            goto label_12bea8;
        }
    }
    ctx->pc = 0x12BDF8u;
label_12bdf8:
    // 0x12bdf8: 0x3c020021
    ctx->pc = 0x12bdf8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
label_12bdfc:
    // 0x12bdfc: 0x24100001
    ctx->pc = 0x12bdfcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_12be00:
    // 0x12be00: 0x8c430454
    ctx->pc = 0x12be00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 1108)));
label_12be04:
    // 0x12be04: 0xacb00000
    ctx->pc = 0x12be04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
label_12be08:
    // 0x12be08: 0x18600022
label_12be0c:
    if (ctx->pc == 0x12BE0Cu) {
        ctx->pc = 0x12BE0Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
        ctx->pc = 0x12BE10u;
        goto label_12be10;
    }
    ctx->pc = 0x12BE08u;
    {
        const bool branch_taken_0x12be08 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x12BE0Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
        if (branch_taken_0x12be08) {
            ctx->pc = 0x12BE94u;
            goto label_12be94;
        }
    }
    ctx->pc = 0x12BE10u;
label_12be10:
    // 0x12be10: 0x24420488
    ctx->pc = 0x12be10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1160));
label_12be14:
    // 0x12be14: 0x8c430000
    ctx->pc = 0x12be14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12be18:
    // 0x12be18: 0x10700004
label_12be1c:
    if (ctx->pc == 0x12BE1Cu) {
        ctx->pc = 0x12BE1Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
        ctx->pc = 0x12BE20u;
        goto label_12be20;
    }
    ctx->pc = 0x12BE18u;
    {
        const bool branch_taken_0x12be18 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 16));
        ctx->pc = 0x12BE1Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
        if (branch_taken_0x12be18) {
            ctx->pc = 0x12BE2Cu;
            goto label_12be2c;
        }
    }
    ctx->pc = 0x12BE20u;
label_12be20:
    // 0x12be20: 0x244204e0
    ctx->pc = 0x12be20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1248));
label_12be24:
    // 0x12be24: 0xc04ac0e
label_12be28:
    if (ctx->pc == 0x12BE28u) {
        ctx->pc = 0x12BE28u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x12BE2Cu;
        goto label_12be2c;
    }
    ctx->pc = 0x12BE24u;
    SET_GPR_U32(ctx, 31, 0x12BE2Cu);
    ctx->pc = 0x12BE28u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x12B038u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B038_0x12b038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BE2Cu; }
    }
    if (ctx->pc != 0x12BE2Cu) { return; }
    ctx->pc = 0x12BE2Cu;
label_12be2c:
    // 0x12be2c: 0x3c020021
    ctx->pc = 0x12be2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
label_12be30:
    // 0x12be30: 0x24420490
    ctx->pc = 0x12be30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1168));
label_12be34:
    // 0x12be34: 0x8c430000
    ctx->pc = 0x12be34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12be38:
    // 0x12be38: 0x10700004
label_12be3c:
    if (ctx->pc == 0x12BE3Cu) {
        ctx->pc = 0x12BE3Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
        ctx->pc = 0x12BE40u;
        goto label_12be40;
    }
    ctx->pc = 0x12BE38u;
    {
        const bool branch_taken_0x12be38 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 16));
        ctx->pc = 0x12BE3Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
        if (branch_taken_0x12be38) {
            ctx->pc = 0x12BE4Cu;
            goto label_12be4c;
        }
    }
    ctx->pc = 0x12BE40u;
label_12be40:
    // 0x12be40: 0x244204e4
    ctx->pc = 0x12be40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1252));
label_12be44:
    // 0x12be44: 0xc04ac0e
label_12be48:
    if (ctx->pc == 0x12BE48u) {
        ctx->pc = 0x12BE48u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x12BE4Cu;
        goto label_12be4c;
    }
    ctx->pc = 0x12BE44u;
    SET_GPR_U32(ctx, 31, 0x12BE4Cu);
    ctx->pc = 0x12BE48u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x12B038u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B038_0x12b038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BE4Cu; }
    }
    if (ctx->pc != 0x12BE4Cu) { return; }
    ctx->pc = 0x12BE4Cu;
label_12be4c:
    // 0x12be4c: 0xc04ad4c
label_12be50:
    if (ctx->pc == 0x12BE50u) {
        ctx->pc = 0x12BE54u;
        goto label_12be54;
    }
    ctx->pc = 0x12BE4Cu;
    SET_GPR_U32(ctx, 31, 0x12BE54u);
    ctx->pc = 0x12B530u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B530_0x12b530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BE54u; }
    }
    if (ctx->pc != 0x12BE54u) { return; }
    ctx->pc = 0x12BE54u;
label_12be54:
    // 0x12be54: 0x40202d
    ctx->pc = 0x12be54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12be58:
    // 0x12be58: 0x1490000a
label_12be5c:
    if (ctx->pc == 0x12BE5Cu) {
        ctx->pc = 0x12BE5Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
        ctx->pc = 0x12BE60u;
        goto label_12be60;
    }
    ctx->pc = 0x12BE58u;
    {
        const bool branch_taken_0x12be58 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 16));
        ctx->pc = 0x12BE5Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
        if (branch_taken_0x12be58) {
            ctx->pc = 0x12BE84u;
            goto label_12be84;
        }
    }
    ctx->pc = 0x12BE60u;
label_12be60:
    // 0x12be60: 0x3c020021
    ctx->pc = 0x12be60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
label_12be64:
    // 0x12be64: 0x2442048c
    ctx->pc = 0x12be64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1164));
label_12be68:
    // 0x12be68: 0x8c430000
    ctx->pc = 0x12be68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12be6c:
    // 0x12be6c: 0x10640004
label_12be70:
    if (ctx->pc == 0x12BE70u) {
        ctx->pc = 0x12BE70u;
        SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
        ctx->pc = 0x12BE74u;
        goto label_12be74;
    }
    ctx->pc = 0x12BE6Cu;
    {
        const bool branch_taken_0x12be6c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        ctx->pc = 0x12BE70u;
        SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
        if (branch_taken_0x12be6c) {
            ctx->pc = 0x12BE80u;
            goto label_12be80;
        }
    }
    ctx->pc = 0x12BE74u;
label_12be74:
    // 0x12be74: 0x244204dc
    ctx->pc = 0x12be74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1244));
label_12be78:
    // 0x12be78: 0xc04ac0e
label_12be7c:
    if (ctx->pc == 0x12BE7Cu) {
        ctx->pc = 0x12BE7Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x12BE80u;
        goto label_12be80;
    }
    ctx->pc = 0x12BE78u;
    SET_GPR_U32(ctx, 31, 0x12BE80u);
    ctx->pc = 0x12BE7Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x12B038u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B038_0x12b038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BE80u; }
    }
    if (ctx->pc != 0x12BE80u) { return; }
    ctx->pc = 0x12BE80u;
label_12be80:
    // 0x12be80: 0x3c030021
    ctx->pc = 0x12be80u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
label_12be84:
    // 0x12be84: 0x246304d0
    ctx->pc = 0x12be84u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1232));
label_12be88:
    // 0x12be88: 0xdc620000
    ctx->pc = 0x12be88u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_12be8c:
    // 0x12be8c: 0x64420001
    ctx->pc = 0x12be8cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)1);
label_12be90:
    // 0x12be90: 0xfc620000
    ctx->pc = 0x12be90u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_12be94:
    // 0x12be94: 0xc0507e4
label_12be98:
    if (ctx->pc == 0x12BE98u) {
        ctx->pc = 0x12BE9Cu;
        goto label_12be9c;
    }
    ctx->pc = 0x12BE94u;
    SET_GPR_U32(ctx, 31, 0x12BE9Cu);
    ctx->pc = 0x141F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00141F90_0x141f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BE9Cu; }
    }
    if (ctx->pc != 0x12BE9Cu) { return; }
    ctx->pc = 0x12BE9Cu;
label_12be9c:
    // 0x12be9c: 0x2643055c
    ctx->pc = 0x12be9cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 18), 1372));
label_12bea0:
    // 0x12bea0: 0xac600000
    ctx->pc = 0x12bea0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_12bea4:
    // 0x12bea4: 0x3c020021
    ctx->pc = 0x12bea4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
label_12bea8:
    // 0x12bea8: 0x8c420560
    ctx->pc = 0x12bea8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1376)));
label_12beac:
    // 0x12beac: 0x50400006
label_12beb0:
    if (ctx->pc == 0x12BEB0u) {
        ctx->pc = 0x12BEB0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12BEB4u;
        goto label_12beb4;
    }
    ctx->pc = 0x12BEACu;
    {
        const bool branch_taken_0x12beac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x12beac) {
            ctx->pc = 0x12BEB0u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x12BEC8u;
            goto label_12bec8;
        }
    }
    ctx->pc = 0x12BEB4u;
label_12beb4:
    // 0x12beb4: 0x40f809
label_12beb8:
    if (ctx->pc == 0x12BEB8u) {
        ctx->pc = 0x12BEB8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12BEBCu;
        goto label_12bebc;
    }
    ctx->pc = 0x12BEB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12BEBCu);
        ctx->pc = 0x12BEB8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12BD90u: goto label_12bd90;
            case 0x12BD94u: goto label_12bd94;
            case 0x12BD98u: goto label_12bd98;
            case 0x12BD9Cu: goto label_12bd9c;
            case 0x12BDA0u: goto label_12bda0;
            case 0x12BDA4u: goto label_12bda4;
            case 0x12BDA8u: goto label_12bda8;
            case 0x12BDACu: goto label_12bdac;
            case 0x12BDB0u: goto label_12bdb0;
            case 0x12BDB4u: goto label_12bdb4;
            case 0x12BDB8u: goto label_12bdb8;
            case 0x12BDBCu: goto label_12bdbc;
            case 0x12BDC0u: goto label_12bdc0;
            case 0x12BDC4u: goto label_12bdc4;
            case 0x12BDC8u: goto label_12bdc8;
            case 0x12BDCCu: goto label_12bdcc;
            case 0x12BDD0u: goto label_12bdd0;
            case 0x12BDD4u: goto label_12bdd4;
            case 0x12BDD8u: goto label_12bdd8;
            case 0x12BDDCu: goto label_12bddc;
            case 0x12BDE0u: goto label_12bde0;
            case 0x12BDE4u: goto label_12bde4;
            case 0x12BDE8u: goto label_12bde8;
            case 0x12BDECu: goto label_12bdec;
            case 0x12BDF0u: goto label_12bdf0;
            case 0x12BDF4u: goto label_12bdf4;
            case 0x12BDF8u: goto label_12bdf8;
            case 0x12BDFCu: goto label_12bdfc;
            case 0x12BE00u: goto label_12be00;
            case 0x12BE04u: goto label_12be04;
            case 0x12BE08u: goto label_12be08;
            case 0x12BE0Cu: goto label_12be0c;
            case 0x12BE10u: goto label_12be10;
            case 0x12BE14u: goto label_12be14;
            case 0x12BE18u: goto label_12be18;
            case 0x12BE1Cu: goto label_12be1c;
            case 0x12BE20u: goto label_12be20;
            case 0x12BE24u: goto label_12be24;
            case 0x12BE28u: goto label_12be28;
            case 0x12BE2Cu: goto label_12be2c;
            case 0x12BE30u: goto label_12be30;
            case 0x12BE34u: goto label_12be34;
            case 0x12BE38u: goto label_12be38;
            case 0x12BE3Cu: goto label_12be3c;
            case 0x12BE40u: goto label_12be40;
            case 0x12BE44u: goto label_12be44;
            case 0x12BE48u: goto label_12be48;
            case 0x12BE4Cu: goto label_12be4c;
            case 0x12BE50u: goto label_12be50;
            case 0x12BE54u: goto label_12be54;
            case 0x12BE58u: goto label_12be58;
            case 0x12BE5Cu: goto label_12be5c;
            case 0x12BE60u: goto label_12be60;
            case 0x12BE64u: goto label_12be64;
            case 0x12BE68u: goto label_12be68;
            case 0x12BE6Cu: goto label_12be6c;
            case 0x12BE70u: goto label_12be70;
            case 0x12BE74u: goto label_12be74;
            case 0x12BE78u: goto label_12be78;
            case 0x12BE7Cu: goto label_12be7c;
            case 0x12BE80u: goto label_12be80;
            case 0x12BE84u: goto label_12be84;
            case 0x12BE88u: goto label_12be88;
            case 0x12BE8Cu: goto label_12be8c;
            case 0x12BE90u: goto label_12be90;
            case 0x12BE94u: goto label_12be94;
            case 0x12BE98u: goto label_12be98;
            case 0x12BE9Cu: goto label_12be9c;
            case 0x12BEA0u: goto label_12bea0;
            case 0x12BEA4u: goto label_12bea4;
            case 0x12BEA8u: goto label_12bea8;
            case 0x12BEACu: goto label_12beac;
            case 0x12BEB0u: goto label_12beb0;
            case 0x12BEB4u: goto label_12beb4;
            case 0x12BEB8u: goto label_12beb8;
            case 0x12BEBCu: goto label_12bebc;
            case 0x12BEC0u: goto label_12bec0;
            case 0x12BEC4u: goto label_12bec4;
            case 0x12BEC8u: goto label_12bec8;
            case 0x12BECCu: goto label_12becc;
            case 0x12BED0u: goto label_12bed0;
            case 0x12BED4u: goto label_12bed4;
            case 0x12BED8u: goto label_12bed8;
            case 0x12BEDCu: goto label_12bedc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12BEBCu; }
            if (ctx->pc != 0x12BEBCu) { return; }
        }
    }
    ctx->pc = 0x12BEBCu;
label_12bebc:
    // 0x12bebc: 0x10000003
label_12bec0:
    if (ctx->pc == 0x12BEC0u) {
        ctx->pc = 0x12BEC0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x12BEC4u;
        goto label_12bec4;
    }
    ctx->pc = 0x12BEBCu;
    {
        const bool branch_taken_0x12bebc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12BEC0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x12bebc) {
            ctx->pc = 0x12BECCu;
            goto label_12becc;
        }
    }
    ctx->pc = 0x12BEC4u;
label_12bec4:
    // 0x12bec4: 0x0
    ctx->pc = 0x12bec4u;
    // NOP
label_12bec8:
    // 0x12bec8: 0xdfb00000
    ctx->pc = 0x12bec8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12becc:
    // 0x12becc: 0xdfb10008
    ctx->pc = 0x12beccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_12bed0:
    // 0x12bed0: 0xdfb20010
    ctx->pc = 0x12bed0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12bed4:
    // 0x12bed4: 0xdfbf0018
    ctx->pc = 0x12bed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_12bed8:
    // 0x12bed8: 0x3e00008
label_12bedc:
    if (ctx->pc == 0x12BEDCu) {
        ctx->pc = 0x12BEDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x12BEE0u;
        goto label_fallthrough_0x12bed8;
    }
    ctx->pc = 0x12BED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BEDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12BD90u: goto label_12bd90;
            case 0x12BD94u: goto label_12bd94;
            case 0x12BD98u: goto label_12bd98;
            case 0x12BD9Cu: goto label_12bd9c;
            case 0x12BDA0u: goto label_12bda0;
            case 0x12BDA4u: goto label_12bda4;
            case 0x12BDA8u: goto label_12bda8;
            case 0x12BDACu: goto label_12bdac;
            case 0x12BDB0u: goto label_12bdb0;
            case 0x12BDB4u: goto label_12bdb4;
            case 0x12BDB8u: goto label_12bdb8;
            case 0x12BDBCu: goto label_12bdbc;
            case 0x12BDC0u: goto label_12bdc0;
            case 0x12BDC4u: goto label_12bdc4;
            case 0x12BDC8u: goto label_12bdc8;
            case 0x12BDCCu: goto label_12bdcc;
            case 0x12BDD0u: goto label_12bdd0;
            case 0x12BDD4u: goto label_12bdd4;
            case 0x12BDD8u: goto label_12bdd8;
            case 0x12BDDCu: goto label_12bddc;
            case 0x12BDE0u: goto label_12bde0;
            case 0x12BDE4u: goto label_12bde4;
            case 0x12BDE8u: goto label_12bde8;
            case 0x12BDECu: goto label_12bdec;
            case 0x12BDF0u: goto label_12bdf0;
            case 0x12BDF4u: goto label_12bdf4;
            case 0x12BDF8u: goto label_12bdf8;
            case 0x12BDFCu: goto label_12bdfc;
            case 0x12BE00u: goto label_12be00;
            case 0x12BE04u: goto label_12be04;
            case 0x12BE08u: goto label_12be08;
            case 0x12BE0Cu: goto label_12be0c;
            case 0x12BE10u: goto label_12be10;
            case 0x12BE14u: goto label_12be14;
            case 0x12BE18u: goto label_12be18;
            case 0x12BE1Cu: goto label_12be1c;
            case 0x12BE20u: goto label_12be20;
            case 0x12BE24u: goto label_12be24;
            case 0x12BE28u: goto label_12be28;
            case 0x12BE2Cu: goto label_12be2c;
            case 0x12BE30u: goto label_12be30;
            case 0x12BE34u: goto label_12be34;
            case 0x12BE38u: goto label_12be38;
            case 0x12BE3Cu: goto label_12be3c;
            case 0x12BE40u: goto label_12be40;
            case 0x12BE44u: goto label_12be44;
            case 0x12BE48u: goto label_12be48;
            case 0x12BE4Cu: goto label_12be4c;
            case 0x12BE50u: goto label_12be50;
            case 0x12BE54u: goto label_12be54;
            case 0x12BE58u: goto label_12be58;
            case 0x12BE5Cu: goto label_12be5c;
            case 0x12BE60u: goto label_12be60;
            case 0x12BE64u: goto label_12be64;
            case 0x12BE68u: goto label_12be68;
            case 0x12BE6Cu: goto label_12be6c;
            case 0x12BE70u: goto label_12be70;
            case 0x12BE74u: goto label_12be74;
            case 0x12BE78u: goto label_12be78;
            case 0x12BE7Cu: goto label_12be7c;
            case 0x12BE80u: goto label_12be80;
            case 0x12BE84u: goto label_12be84;
            case 0x12BE88u: goto label_12be88;
            case 0x12BE8Cu: goto label_12be8c;
            case 0x12BE90u: goto label_12be90;
            case 0x12BE94u: goto label_12be94;
            case 0x12BE98u: goto label_12be98;
            case 0x12BE9Cu: goto label_12be9c;
            case 0x12BEA0u: goto label_12bea0;
            case 0x12BEA4u: goto label_12bea4;
            case 0x12BEA8u: goto label_12bea8;
            case 0x12BEACu: goto label_12beac;
            case 0x12BEB0u: goto label_12beb0;
            case 0x12BEB4u: goto label_12beb4;
            case 0x12BEB8u: goto label_12beb8;
            case 0x12BEBCu: goto label_12bebc;
            case 0x12BEC0u: goto label_12bec0;
            case 0x12BEC4u: goto label_12bec4;
            case 0x12BEC8u: goto label_12bec8;
            case 0x12BECCu: goto label_12becc;
            case 0x12BED0u: goto label_12bed0;
            case 0x12BED4u: goto label_12bed4;
            case 0x12BED8u: goto label_12bed8;
            case 0x12BEDCu: goto label_12bedc;
            default: break;
        }
        return;
    }
label_fallthrough_0x12bed8:
    ctx->pc = 0x12BEE0u;
}
