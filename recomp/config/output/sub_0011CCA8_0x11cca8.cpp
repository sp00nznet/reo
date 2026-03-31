#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011CCA8
// Address: 0x11cca8 - 0x11cea0
void sub_0011CCA8_0x11cca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11cca8u;

    // 0x11cca8: 0x27bdff80
    ctx->pc = 0x11cca8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11ccac: 0x3c020024
    ctx->pc = 0x11ccacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x11ccb0: 0xffb10060
    ctx->pc = 0x11ccb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x11ccb4: 0xffb00050
    ctx->pc = 0x11ccb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x11ccb8: 0xffbf0070
    ctx->pc = 0x11ccb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x11ccbc: 0x80802d
    ctx->pc = 0x11ccbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ccc0: 0x82030000
    ctx->pc = 0x11ccc0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11ccc4: 0x1060000b
    ctx->pc = 0x11CCC4u;
    {
        const bool branch_taken_0x11ccc4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x11CCC8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294937504));
        if (branch_taken_0x11ccc4) {
            ctx->pc = 0x11CCF4u;
            goto label_11ccf4;
        }
    }
    ctx->pc = 0x11CCCCu;
    // 0x11cccc: 0x2603fff5
    ctx->pc = 0x11ccccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 4294967285));
label_11ccd0:
    // 0x11ccd0: 0x24840001
    ctx->pc = 0x11ccd0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x11ccd4: 0x80820000
    ctx->pc = 0x11ccd4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11ccd8: 0x0
    ctx->pc = 0x11ccd8u;
    // NOP
    // 0x11ccdc: 0x0
    ctx->pc = 0x11ccdcu;
    // NOP
    // 0x11cce0: 0x0
    ctx->pc = 0x11cce0u;
    // NOP
    // 0x11cce4: 0x1440fffa
    ctx->pc = 0x11CCE4u;
    {
        const bool branch_taken_0x11cce4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x11cce4) {
            ctx->pc = 0x11CCD0u;
            goto label_11ccd0;
        }
    }
    ctx->pc = 0x11CCECu;
    // 0x11ccec: 0x10000003
    ctx->pc = 0x11CCECu;
    {
        const bool branch_taken_0x11ccec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11CCF0u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        if (branch_taken_0x11ccec) {
            ctx->pc = 0x11CCFCu;
            goto label_11ccfc;
        }
    }
    ctx->pc = 0x11CCF4u;
label_11ccf4:
    // 0x11ccf4: 0x2603fff5
    ctx->pc = 0x11ccf4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 4294967285));
    // 0x11ccf8: 0x831023
    ctx->pc = 0x11ccf8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_11ccfc:
    // 0x11ccfc: 0x2c420051
    ctx->pc = 0x11ccfcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 81));
    // 0x11cd00: 0x14400006
    ctx->pc = 0x11CD00u;
    {
        const bool branch_taken_0x11cd00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x11CD04u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x11cd00) {
            ctx->pc = 0x11CD1Cu;
            goto label_11cd1c;
        }
    }
    ctx->pc = 0x11CD08u;
    // 0x11cd08: 0x200282d
    ctx->pc = 0x11cd08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cd0c: 0xc045a12
    ctx->pc = 0x11CD0Cu;
    SET_GPR_U32(ctx, 31, 0x11CD14u);
    ctx->pc = 0x11CD10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937520));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CD14u; }
    }
    if (ctx->pc != 0x11CD14u) { return; }
    ctx->pc = 0x11CD14u;
    // 0x11cd14: 0x10000023
    ctx->pc = 0x11CD14u;
    {
        const bool branch_taken_0x11cd14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11CD18u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11cd14) {
            ctx->pc = 0x11CDA4u;
            goto label_11cda4;
        }
    }
    ctx->pc = 0x11CD1Cu;
label_11cd1c:
    // 0x11cd1c: 0xc045c20
    ctx->pc = 0x11CD1Cu;
    SET_GPR_U32(ctx, 31, 0x11CD24u);
    ctx->pc = 0x11CD20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x117080u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00117080_0x117080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CD24u; }
    }
    if (ctx->pc != 0x11CD24u) { return; }
    ctx->pc = 0x11CD24u;
    // 0x11cd24: 0xc045c88
    ctx->pc = 0x11CD24u;
    SET_GPR_U32(ctx, 31, 0x11CD2Cu);
    ctx->pc = 0x117220u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00117220_0x117220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CD2Cu; }
    }
    if (ctx->pc != 0x11CD2Cu) { return; }
    ctx->pc = 0x11CD2Cu;
    // 0x11cd2c: 0x82220000
    ctx->pc = 0x11cd2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11cd30: 0x3a0182d
    ctx->pc = 0x11cd30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cd34: 0x1040000b
    ctx->pc = 0x11CD34u;
    {
        const bool branch_taken_0x11cd34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11CD38u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        if (branch_taken_0x11cd34) {
            ctx->pc = 0x11CD64u;
            goto label_11cd64;
        }
    }
    ctx->pc = 0x11CD3Cu;
    // 0x11cd3c: 0x92050000
    ctx->pc = 0x11cd3cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_11cd40:
    // 0x11cd40: 0xa0640000
    ctx->pc = 0x11cd40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x11cd44: 0x26310001
    ctx->pc = 0x11cd44u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x11cd48: 0x24630001
    ctx->pc = 0x11cd48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x11cd4c: 0x92240000
    ctx->pc = 0x11cd4cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11cd50: 0x82220000
    ctx->pc = 0x11cd50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11cd54: 0x1440fffa
    ctx->pc = 0x11CD54u;
    {
        const bool branch_taken_0x11cd54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x11cd54) {
            ctx->pc = 0x11CD40u;
            goto label_11cd40;
        }
    }
    ctx->pc = 0x11CD5Cu;
    // 0x11cd5c: 0x10000003
    ctx->pc = 0x11CD5Cu;
    {
        const bool branch_taken_0x11cd5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11CD60u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11cd5c) {
            ctx->pc = 0x11CD6Cu;
            goto label_11cd6c;
        }
    }
    ctx->pc = 0x11CD64u;
label_11cd64:
    // 0x11cd64: 0x92050000
    ctx->pc = 0x11cd64u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11cd68: 0xa0202d
    ctx->pc = 0x11cd68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11cd6c:
    // 0x11cd6c: 0x5080000a
    ctx->pc = 0x11CD6Cu;
    {
        const bool branch_taken_0x11cd6c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x11cd6c) {
            ctx->pc = 0x11CD70u;
            WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x11CD98u;
            goto label_11cd98;
        }
    }
    ctx->pc = 0x11CD74u;
    // 0x11cd74: 0x0
    ctx->pc = 0x11cd74u;
    // NOP
label_11cd78:
    // 0x11cd78: 0xa0640000
    ctx->pc = 0x11cd78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x11cd7c: 0x26100001
    ctx->pc = 0x11cd7cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x11cd80: 0x24630001
    ctx->pc = 0x11cd80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x11cd84: 0x82020000
    ctx->pc = 0x11cd84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11cd88: 0x40202d
    ctx->pc = 0x11cd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cd8c: 0x1440fffa
    ctx->pc = 0x11CD8Cu;
    {
        const bool branch_taken_0x11cd8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x11cd8c) {
            ctx->pc = 0x11CD78u;
            goto label_11cd78;
        }
    }
    ctx->pc = 0x11CD94u;
    // 0x11cd94: 0xa0600000
    ctx->pc = 0x11cd94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_11cd98:
    // 0x11cd98: 0x3a0202d
    ctx->pc = 0x11cd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cd9c: 0xc0472b6
    ctx->pc = 0x11CD9Cu;
    SET_GPR_U32(ctx, 31, 0x11CDA4u);
    ctx->pc = 0x11CDA0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11CAD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011CAD8_0x11cad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CDA4u; }
    }
    if (ctx->pc != 0x11CDA4u) { return; }
    ctx->pc = 0x11CDA4u;
label_11cda4:
    // 0x11cda4: 0xdfbf0070
    ctx->pc = 0x11cda4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11cda8: 0xdfb10060
    ctx->pc = 0x11cda8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11cdac: 0xdfb00050
    ctx->pc = 0x11cdacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11cdb0: 0x3e00008
    ctx->pc = 0x11CDB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CDB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CCD0u: goto label_11ccd0;
            case 0x11CCF4u: goto label_11ccf4;
            case 0x11CCFCu: goto label_11ccfc;
            case 0x11CD1Cu: goto label_11cd1c;
            case 0x11CD40u: goto label_11cd40;
            case 0x11CD64u: goto label_11cd64;
            case 0x11CD6Cu: goto label_11cd6c;
            case 0x11CD78u: goto label_11cd78;
            case 0x11CD98u: goto label_11cd98;
            case 0x11CDA4u: goto label_11cda4;
            case 0x11CE40u: goto label_11ce40;
            case 0x11CE78u: goto label_11ce78;
            case 0x11CE8Cu: goto label_11ce8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11CDB8u;
    // 0x11cdb8: 0x27bdffd0
    ctx->pc = 0x11cdb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11cdbc: 0x3c020021
    ctx->pc = 0x11cdbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x11cdc0: 0xffb00000
    ctx->pc = 0x11cdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11cdc4: 0xffb10010
    ctx->pc = 0x11cdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11cdc8: 0x3c100012
    ctx->pc = 0x11cdc8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)18 << 16));
    // 0x11cdcc: 0x2610d300
    ctx->pc = 0x11cdccu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294955776));
    // 0x11cdd0: 0x80882d
    ctx->pc = 0x11cdd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cdd4: 0xac51a138
    ctx->pc = 0x11cdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943032), GPR_U32(ctx, 17));
    // 0x11cdd8: 0x200282d
    ctx->pc = 0x11cdd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cddc: 0xffbf0020
    ctx->pc = 0x11cddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11cde0: 0xc0450b4
    ctx->pc = 0x11CDE0u;
    SET_GPR_U32(ctx, 31, 0x11CDE8u);
    ctx->pc = 0x11CDE4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1142D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001142D0_0x1142d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CDE8u; }
    }
    if (ctx->pc != 0x11CDE8u) { return; }
    ctx->pc = 0x11CDE8u;
    // 0x11cde8: 0x200282d
    ctx->pc = 0x11cde8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cdec: 0xc0450b4
    ctx->pc = 0x11CDECu;
    SET_GPR_U32(ctx, 31, 0x11CDF4u);
    ctx->pc = 0x11CDF0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1142D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001142D0_0x1142d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CDF4u; }
    }
    if (ctx->pc != 0x11CDF4u) { return; }
    ctx->pc = 0x11CDF4u;
    // 0x11cdf4: 0x200282d
    ctx->pc = 0x11cdf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cdf8: 0xc0450b4
    ctx->pc = 0x11CDF8u;
    SET_GPR_U32(ctx, 31, 0x11CE00u);
    ctx->pc = 0x11CDFCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x1142D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001142D0_0x1142d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CE00u; }
    }
    if (ctx->pc != 0x11CE00u) { return; }
    ctx->pc = 0x11CE00u;
    // 0x11ce00: 0x220102d
    ctx->pc = 0x11ce00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ce04: 0xdfbf0020
    ctx->pc = 0x11ce04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ce08: 0xdfb10010
    ctx->pc = 0x11ce08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ce0c: 0xdfb00000
    ctx->pc = 0x11ce0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ce10: 0x3e00008
    ctx->pc = 0x11CE10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CE14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CCD0u: goto label_11ccd0;
            case 0x11CCF4u: goto label_11ccf4;
            case 0x11CCFCu: goto label_11ccfc;
            case 0x11CD1Cu: goto label_11cd1c;
            case 0x11CD40u: goto label_11cd40;
            case 0x11CD64u: goto label_11cd64;
            case 0x11CD6Cu: goto label_11cd6c;
            case 0x11CD78u: goto label_11cd78;
            case 0x11CD98u: goto label_11cd98;
            case 0x11CDA4u: goto label_11cda4;
            case 0x11CE40u: goto label_11ce40;
            case 0x11CE78u: goto label_11ce78;
            case 0x11CE8Cu: goto label_11ce8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11CE18u;
    // 0x11ce18: 0x80302d
    ctx->pc = 0x11ce18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ce1c: 0x27bdffe0
    ctx->pc = 0x11ce1cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11ce20: 0x24c4ffff
    ctx->pc = 0x11ce20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11ce24: 0xffbf0010
    ctx->pc = 0x11ce24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11ce28: 0x2c82000d
    ctx->pc = 0x11ce28u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 13));
    // 0x11ce2c: 0x14400004
    ctx->pc = 0x11CE2Cu;
    {
        const bool branch_taken_0x11ce2c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x11CE30u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x11ce2c) {
            ctx->pc = 0x11CE40u;
            goto label_11ce40;
        }
    }
    ctx->pc = 0x11CE34u;
    // 0x11ce34: 0x3c02ffff
    ctx->pc = 0x11ce34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x11ce38: 0x10000014
    ctx->pc = 0x11CE38u;
    {
        const bool branch_taken_0x11ce38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11CE3Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
        if (branch_taken_0x11ce38) {
            ctx->pc = 0x11CE8Cu;
            goto label_11ce8c;
        }
    }
    ctx->pc = 0x11CE40u;
label_11ce40:
    // 0x11ce40: 0x3c020021
    ctx->pc = 0x11ce40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x11ce44: 0x61880
    ctx->pc = 0x11ce44u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
    // 0x11ce48: 0x2442a140
    ctx->pc = 0x11ce48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294943040));
    // 0x11ce4c: 0x2c840003
    ctx->pc = 0x11ce4cu;
    SET_GPR_U32(ctx, 4, SLTU32(GPR_U32(ctx, 4), 3));
    // 0x11ce50: 0x621821
    ctx->pc = 0x11ce50u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11ce54: 0x8c700000
    ctx->pc = 0x11ce54u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11ce58: 0x10800007
    ctx->pc = 0x11CE58u;
    {
        const bool branch_taken_0x11ce58 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x11CE5Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        if (branch_taken_0x11ce58) {
            ctx->pc = 0x11CE78u;
            goto label_11ce78;
        }
    }
    ctx->pc = 0x11CE60u;
    // 0x11ce60: 0x3c050012
    ctx->pc = 0x11ce60u;
    SET_GPR_U32(ctx, 5, ((uint32_t)18 << 16));
    // 0x11ce64: 0xc0202d
    ctx->pc = 0x11ce64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ce68: 0xc0450b4
    ctx->pc = 0x11CE68u;
    SET_GPR_U32(ctx, 31, 0x11CE70u);
    ctx->pc = 0x11CE6Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294956352));
    ctx->pc = 0x1142D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001142D0_0x1142d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CE70u; }
    }
    if (ctx->pc != 0x11CE70u) { return; }
    ctx->pc = 0x11CE70u;
    // 0x11ce70: 0x10000006
    ctx->pc = 0x11CE70u;
    {
        const bool branch_taken_0x11ce70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11CE74u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11ce70) {
            ctx->pc = 0x11CE8Cu;
            goto label_11ce8c;
        }
    }
    ctx->pc = 0x11CE78u;
label_11ce78:
    // 0x11ce78: 0x3c050012
    ctx->pc = 0x11ce78u;
    SET_GPR_U32(ctx, 5, ((uint32_t)18 << 16));
    // 0x11ce7c: 0xc0202d
    ctx->pc = 0x11ce7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ce80: 0xc0450b8
    ctx->pc = 0x11CE80u;
    SET_GPR_U32(ctx, 31, 0x11CE88u);
    ctx->pc = 0x11CE84u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294956352));
    ctx->pc = 0x1142E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001142E0_0x1142e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CE88u; }
    }
    if (ctx->pc != 0x11CE88u) { return; }
    ctx->pc = 0x11CE88u;
    // 0x11ce88: 0x200102d
    ctx->pc = 0x11ce88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11ce8c:
    // 0x11ce8c: 0xdfbf0010
    ctx->pc = 0x11ce8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ce90: 0xdfb00000
    ctx->pc = 0x11ce90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ce94: 0x3e00008
    ctx->pc = 0x11CE94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CE98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CCD0u: goto label_11ccd0;
            case 0x11CCF4u: goto label_11ccf4;
            case 0x11CCFCu: goto label_11ccfc;
            case 0x11CD1Cu: goto label_11cd1c;
            case 0x11CD40u: goto label_11cd40;
            case 0x11CD64u: goto label_11cd64;
            case 0x11CD6Cu: goto label_11cd6c;
            case 0x11CD78u: goto label_11cd78;
            case 0x11CD98u: goto label_11cd98;
            case 0x11CDA4u: goto label_11cda4;
            case 0x11CE40u: goto label_11ce40;
            case 0x11CE78u: goto label_11ce78;
            case 0x11CE8Cu: goto label_11ce8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11CE9Cu;
    // 0x11ce9c: 0x0
    ctx->pc = 0x11ce9cu;
    // NOP
}
