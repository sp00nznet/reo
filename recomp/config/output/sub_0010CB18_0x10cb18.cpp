#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0010CB18
// Address: 0x10cb18 - 0x10cda8
void sub_0010CB18_0x10cb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10cb18u;

    // 0x10cb18: 0x27bdfff0
    ctx->pc = 0x10cb18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10cb1c: 0x3c030021
    ctx->pc = 0x10cb1cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x10cb20: 0xffbf0000
    ctx->pc = 0x10cb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10cb24: 0xa0102d
    ctx->pc = 0x10cb24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cb28: 0x80282d
    ctx->pc = 0x10cb28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cb2c: 0x8c6497f0
    ctx->pc = 0x10cb2cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4294940656)));
    // 0x10cb30: 0xdfbf0000
    ctx->pc = 0x10cb30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cb34: 0xc0382d
    ctx->pc = 0x10cb34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cb38: 0x40302d
    ctx->pc = 0x10cb38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cb3c: 0x8043238
    ctx->pc = 0x10CB3Cu;
    ctx->pc = 0x10CB40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x10C8E0u;
    entry_10c8e0_0x10cb18(rdram, ctx, runtime); return;
    ctx->pc = 0x10CB44u;
    // 0x10cb44: 0x0
    ctx->pc = 0x10cb44u;
    // NOP
label_10cb48:
    // 0x10cb48: 0x27bdffa0
    ctx->pc = 0x10cb48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x10cb4c: 0xffb50038
    ctx->pc = 0x10cb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x10cb50: 0xa0a82d
    ctx->pc = 0x10cb50u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cb54: 0xffb00010
    ctx->pc = 0x10cb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10cb58: 0xffb10018
    ctx->pc = 0x10cb58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x10cb5c: 0xffb40030
    ctx->pc = 0x10cb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x10cb60: 0xffb60040
    ctx->pc = 0x10cb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x10cb64: 0xffb70048
    ctx->pc = 0x10cb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x10cb68: 0xffbf0058
    ctx->pc = 0x10cb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x10cb6c: 0xafa40000
    ctx->pc = 0x10cb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10cb70: 0xafa00004
    ctx->pc = 0x10cb70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x10cb74: 0xffb20020
    ctx->pc = 0x10cb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10cb78: 0x2a0902d
    ctx->pc = 0x10cb78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cb7c: 0xffb30028
    ctx->pc = 0x10cb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x10cb80: 0xe0982d
    ctx->pc = 0x10cb80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cb84: 0xffbe0050
    ctx->pc = 0x10cb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x10cb88: 0xc0f02d
    ctx->pc = 0x10cb88u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cb8c: 0x0
    ctx->pc = 0x10cb8cu;
    // NOP
label_10cb90:
    // 0x10cb90: 0x82510000
    ctx->pc = 0x10cb90u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10cb94: 0x3c020023
    ctx->pc = 0x10cb94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x10cb98: 0x511021
    ctx->pc = 0x10cb98u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x10cb9c: 0x90427769
    ctx->pc = 0x10cb9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 30569)));
    // 0x10cba0: 0x30420008
    ctx->pc = 0x10cba0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
    // 0x10cba4: 0x0
    ctx->pc = 0x10cba4u;
    // NOP
    // 0x10cba8: 0x0
    ctx->pc = 0x10cba8u;
    // NOP
    // 0x10cbac: 0x1440fff8
    ctx->pc = 0x10CBACu;
    {
        const bool branch_taken_0x10cbac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10CBB0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x10cbac) {
            ctx->pc = 0x10CB90u;
            goto label_10cb90;
        }
    }
    ctx->pc = 0x10CBB4u;
    // 0x10cbb4: 0x2402002d
    ctx->pc = 0x10cbb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 45));
    // 0x10cbb8: 0x16220007
    ctx->pc = 0x10CBB8u;
    {
        const bool branch_taken_0x10cbb8 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x10CBBCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 43));
        if (branch_taken_0x10cbb8) {
            ctx->pc = 0x10CBD8u;
            goto label_10cbd8;
        }
    }
    ctx->pc = 0x10CBC0u;
    // 0x10cbc0: 0x24020001
    ctx->pc = 0x10cbc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x10cbc4: 0x82510000
    ctx->pc = 0x10cbc4u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10cbc8: 0x26520001
    ctx->pc = 0x10cbc8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x10cbcc: 0x10000006
    ctx->pc = 0x10CBCCu;
    {
        const bool branch_taken_0x10cbcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10CBD0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x10cbcc) {
            ctx->pc = 0x10CBE8u;
            goto label_10cbe8;
        }
    }
    ctx->pc = 0x10CBD4u;
    // 0x10cbd4: 0x0
    ctx->pc = 0x10cbd4u;
    // NOP
label_10cbd8:
    // 0x10cbd8: 0x16220003
    ctx->pc = 0x10CBD8u;
    {
        const bool branch_taken_0x10cbd8 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x10cbd8) {
            ctx->pc = 0x10CBE8u;
            goto label_10cbe8;
        }
    }
    ctx->pc = 0x10CBE0u;
    // 0x10cbe0: 0x82510000
    ctx->pc = 0x10cbe0u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10cbe4: 0x26520001
    ctx->pc = 0x10cbe4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_10cbe8:
    // 0x10cbe8: 0x12600003
    ctx->pc = 0x10CBE8u;
    {
        const bool branch_taken_0x10cbe8 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x10CBECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x10cbe8) {
            ctx->pc = 0x10CBF8u;
            goto label_10cbf8;
        }
    }
    ctx->pc = 0x10CBF0u;
    // 0x10cbf0: 0x1662000c
    ctx->pc = 0x10CBF0u;
    {
        const bool branch_taken_0x10cbf0 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        if (branch_taken_0x10cbf0) {
            ctx->pc = 0x10CC24u;
            goto label_10cc24;
        }
    }
    ctx->pc = 0x10CBF8u;
label_10cbf8:
    // 0x10cbf8: 0x24020030
    ctx->pc = 0x10cbf8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
    // 0x10cbfc: 0x16220009
    ctx->pc = 0x10CBFCu;
    {
        const bool branch_taken_0x10cbfc = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x10CC00u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 120));
        if (branch_taken_0x10cbfc) {
            ctx->pc = 0x10CC24u;
            goto label_10cc24;
        }
    }
    ctx->pc = 0x10CC04u;
    // 0x10cc04: 0x82430000
    ctx->pc = 0x10cc04u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10cc08: 0x10620003
    ctx->pc = 0x10CC08u;
    {
        const bool branch_taken_0x10cc08 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x10CC0Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 88));
        if (branch_taken_0x10cc08) {
            ctx->pc = 0x10CC18u;
            goto label_10cc18;
        }
    }
    ctx->pc = 0x10CC10u;
    // 0x10cc10: 0x14620004
    ctx->pc = 0x10CC10u;
    {
        const bool branch_taken_0x10cc10 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x10cc10) {
            ctx->pc = 0x10CC24u;
            goto label_10cc24;
        }
    }
    ctx->pc = 0x10CC18u;
label_10cc18:
    // 0x10cc18: 0x82510001
    ctx->pc = 0x10cc18u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x10cc1c: 0x26520002
    ctx->pc = 0x10cc1cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 2));
    // 0x10cc20: 0x24130010
    ctx->pc = 0x10cc20u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 16));
label_10cc24:
    // 0x10cc24: 0x56600006
    ctx->pc = 0x10CC24u;
    {
        const bool branch_taken_0x10cc24 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        if (branch_taken_0x10cc24) {
            ctx->pc = 0x10CC28u;
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x10CC40u;
            goto label_10cc40;
        }
    }
    ctx->pc = 0x10CC2Cu;
    // 0x10cc2c: 0x2403000a
    ctx->pc = 0x10cc2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x10cc30: 0x24130008
    ctx->pc = 0x10cc30u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 8));
    // 0x10cc34: 0x3a220030
    ctx->pc = 0x10cc34u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 17), 48));
    // 0x10cc38: 0x62980b
    ctx->pc = 0x10cc38u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 3));
    // 0x10cc3c: 0x260802d
    ctx->pc = 0x10cc3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10cc40:
    // 0x10cc40: 0x2404ffff
    ctx->pc = 0x10cc40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10cc44: 0x200282d
    ctx->pc = 0x10cc44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc48: 0xc044210
    ctx->pc = 0x10CC48u;
    SET_GPR_U32(ctx, 31, 0x10CC50u);
    ctx->pc = 0x10CC4Cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x110840u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00110840_0x110840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CC50u; }
    }
    if (ctx->pc != 0x10CC50u) { return; }
    ctx->pc = 0x10CC50u;
    // 0x10cc50: 0x2404ffff
    ctx->pc = 0x10cc50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10cc54: 0x200282d
    ctx->pc = 0x10cc54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc58: 0x802d
    ctx->pc = 0x10cc58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc5c: 0xc044370
    ctx->pc = 0x10CC5Cu;
    SET_GPR_U32(ctx, 31, 0x10CC64u);
    ctx->pc = 0x10CC60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x110DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00110DC0_0x110dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CC64u; }
    }
    if (ctx->pc != 0x10CC64u) { return; }
    ctx->pc = 0x10CC64u;
    // 0x10cc64: 0x2b03c
    ctx->pc = 0x10cc64u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10cc68: 0x16b03f
    ctx->pc = 0x10cc68u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x10cc6c: 0x10000016
    ctx->pc = 0x10CC6Cu;
    {
        const bool branch_taken_0x10cc6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10CC70u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10cc6c) {
            ctx->pc = 0x10CCC8u;
            goto label_10ccc8;
        }
    }
    ctx->pc = 0x10CC74u;
    // 0x10cc74: 0x0
    ctx->pc = 0x10cc74u;
    // NOP
label_10cc78:
    // 0x10cc78: 0x233102a
    ctx->pc = 0x10cc78u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 19)));
    // 0x10cc7c: 0x10400022
    ctx->pc = 0x10CC7Cu;
    {
        const bool branch_taken_0x10cc7c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x10cc7c) {
            ctx->pc = 0x10CD08u;
            goto label_10cd08;
        }
    }
    ctx->pc = 0x10CC84u;
    // 0x10cc84: 0x6000008
    ctx->pc = 0x10CC84u;
    {
        const bool branch_taken_0x10cc84 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x10CC88u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        if (branch_taken_0x10cc84) {
            ctx->pc = 0x10CCA8u;
            goto label_10cca8;
        }
    }
    ctx->pc = 0x10CC8Cu;
    // 0x10cc8c: 0x5440000c
    ctx->pc = 0x10CC8Cu;
    {
        const bool branch_taken_0x10cc8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x10cc8c) {
            ctx->pc = 0x10CC90u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->pc = 0x10CCC0u;
            goto label_10ccc0;
        }
    }
    ctx->pc = 0x10CC94u;
    // 0x10cc94: 0x14b40006
    ctx->pc = 0x10CC94u;
    {
        const bool branch_taken_0x10cc94 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 20));
        ctx->pc = 0x10CC98u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10cc94) {
            ctx->pc = 0x10CCB0u;
            goto label_10ccb0;
        }
    }
    ctx->pc = 0x10CC9Cu;
    // 0x10cc9c: 0x2d1102a
    ctx->pc = 0x10cc9cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 22), GPR_S32(ctx, 17)));
    // 0x10cca0: 0x10400003
    ctx->pc = 0x10CCA0u;
    {
        const bool branch_taken_0x10cca0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x10cca0) {
            ctx->pc = 0x10CCB0u;
            goto label_10ccb0;
        }
    }
    ctx->pc = 0x10CCA8u;
label_10cca8:
    // 0x10cca8: 0x10000005
    ctx->pc = 0x10CCA8u;
    {
        const bool branch_taken_0x10cca8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10CCACu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x10cca8) {
            ctx->pc = 0x10CCC0u;
            goto label_10ccc0;
        }
    }
    ctx->pc = 0x10CCB0u;
label_10ccb0:
    // 0x10ccb0: 0xc043ea8
    ctx->pc = 0x10CCB0u;
    SET_GPR_U32(ctx, 31, 0x10CCB8u);
    ctx->pc = 0x10CCB4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10FAA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010FAA0_0x10faa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CCB8u; }
    }
    if (ctx->pc != 0x10CCB8u) { return; }
    ctx->pc = 0x10CCB8u;
    // 0x10ccb8: 0x24100001
    ctx->pc = 0x10ccb8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ccbc: 0x222282d
    ctx->pc = 0x10ccbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
label_10ccc0:
    // 0x10ccc0: 0x82510000
    ctx->pc = 0x10ccc0u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10ccc4: 0x26520001
    ctx->pc = 0x10ccc4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_10ccc8:
    // 0x10ccc8: 0x3c040023
    ctx->pc = 0x10ccc8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x10cccc: 0x912021
    ctx->pc = 0x10ccccu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x10ccd0: 0x90847769
    ctx->pc = 0x10ccd0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 30569)));
    // 0x10ccd4: 0x30820004
    ctx->pc = 0x10ccd4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 4));
    // 0x10ccd8: 0x10400003
    ctx->pc = 0x10CCD8u;
    {
        const bool branch_taken_0x10ccd8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10CCDCu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 3));
        if (branch_taken_0x10ccd8) {
            ctx->pc = 0x10CCE8u;
            goto label_10cce8;
        }
    }
    ctx->pc = 0x10CCE0u;
    // 0x10cce0: 0x1000ffe5
    ctx->pc = 0x10CCE0u;
    {
        const bool branch_taken_0x10cce0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10CCE4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967248));
        if (branch_taken_0x10cce0) {
            ctx->pc = 0x10CC78u;
            goto label_10cc78;
        }
    }
    ctx->pc = 0x10CCE8u;
label_10cce8:
    // 0x10cce8: 0x10400007
    ctx->pc = 0x10CCE8u;
    {
        const bool branch_taken_0x10cce8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10CCECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 4294967241));
        if (branch_taken_0x10cce8) {
            ctx->pc = 0x10CD08u;
            goto label_10cd08;
        }
    }
    ctx->pc = 0x10CCF0u;
    // 0x10ccf0: 0x2623ffa9
    ctx->pc = 0x10ccf0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 4294967209));
    // 0x10ccf4: 0x30840001
    ctx->pc = 0x10ccf4u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 1));
    // 0x10ccf8: 0x40882d
    ctx->pc = 0x10ccf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ccfc: 0x1000ffde
    ctx->pc = 0x10CCFCu;
    {
        const bool branch_taken_0x10ccfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10CD00u;
        if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 3));
        if (branch_taken_0x10ccfc) {
            ctx->pc = 0x10CC78u;
            goto label_10cc78;
        }
    }
    ctx->pc = 0x10CD04u;
    // 0x10cd04: 0x0
    ctx->pc = 0x10cd04u;
    // NOP
label_10cd08:
    // 0x10cd08: 0x6010007
    ctx->pc = 0x10CD08u;
    {
        const bool branch_taken_0x10cd08 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x10CD0Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x10cd08) {
            ctx->pc = 0x10CD28u;
            goto label_10cd28;
        }
    }
    ctx->pc = 0x10CD10u;
    // 0x10cd10: 0x8fa30000
    ctx->pc = 0x10cd10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cd14: 0x24020022
    ctx->pc = 0x10cd14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 34));
    // 0x10cd18: 0x2405ffff
    ctx->pc = 0x10cd18u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10cd1c: 0x10000004
    ctx->pc = 0x10CD1Cu;
    {
        const bool branch_taken_0x10cd1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10CD20u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x10cd1c) {
            ctx->pc = 0x10CD30u;
            goto label_10cd30;
        }
    }
    ctx->pc = 0x10CD24u;
    // 0x10cd24: 0x0
    ctx->pc = 0x10cd24u;
    // NOP
label_10cd28:
    // 0x10cd28: 0x5102f
    ctx->pc = 0x10cd28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 5));
    // 0x10cd2c: 0x43280b
    ctx->pc = 0x10cd2cu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
label_10cd30:
    // 0x10cd30: 0x13c00003
    ctx->pc = 0x10CD30u;
    {
        const bool branch_taken_0x10cd30 = (GPR_U32(ctx, 30) == GPR_U32(ctx, 0));
        ctx->pc = 0x10CD34u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 4294967295));
        if (branch_taken_0x10cd30) {
            ctx->pc = 0x10CD40u;
            goto label_10cd40;
        }
    }
    ctx->pc = 0x10CD38u;
    // 0x10cd38: 0x50a80b
    ctx->pc = 0x10cd38u;
    if (GPR_U32(ctx, 16) != 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 2));
    // 0x10cd3c: 0xafd50000
    ctx->pc = 0x10cd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 21));
label_10cd40:
    // 0x10cd40: 0xdfb00010
    ctx->pc = 0x10cd40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10cd44: 0xa0102d
    ctx->pc = 0x10cd44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cd48: 0xdfb10018
    ctx->pc = 0x10cd48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10cd4c: 0xdfb20020
    ctx->pc = 0x10cd4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10cd50: 0xdfb30028
    ctx->pc = 0x10cd50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10cd54: 0xdfb40030
    ctx->pc = 0x10cd54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10cd58: 0xdfb50038
    ctx->pc = 0x10cd58u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x10cd5c: 0xdfb60040
    ctx->pc = 0x10cd5cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10cd60: 0xdfb70048
    ctx->pc = 0x10cd60u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x10cd64: 0xdfbe0050
    ctx->pc = 0x10cd64u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10cd68: 0xdfbf0058
    ctx->pc = 0x10cd68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x10cd6c: 0x3e00008
    ctx->pc = 0x10CD6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CD70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10CB48u: goto label_10cb48;
            case 0x10CB90u: goto label_10cb90;
            case 0x10CBD8u: goto label_10cbd8;
            case 0x10CBE8u: goto label_10cbe8;
            case 0x10CBF8u: goto label_10cbf8;
            case 0x10CC18u: goto label_10cc18;
            case 0x10CC24u: goto label_10cc24;
            case 0x10CC40u: goto label_10cc40;
            case 0x10CC78u: goto label_10cc78;
            case 0x10CCA8u: goto label_10cca8;
            case 0x10CCB0u: goto label_10ccb0;
            case 0x10CCC0u: goto label_10ccc0;
            case 0x10CCC8u: goto label_10ccc8;
            case 0x10CCE8u: goto label_10cce8;
            case 0x10CD08u: goto label_10cd08;
            case 0x10CD28u: goto label_10cd28;
            case 0x10CD30u: goto label_10cd30;
            case 0x10CD40u: goto label_10cd40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10CD74u;
    // 0x10cd74: 0x0
    ctx->pc = 0x10cd74u;
    // NOP
    // 0x10cd78: 0x27bdfff0
    ctx->pc = 0x10cd78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10cd7c: 0x3c030021
    ctx->pc = 0x10cd7cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x10cd80: 0xffbf0000
    ctx->pc = 0x10cd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10cd84: 0xa0102d
    ctx->pc = 0x10cd84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cd88: 0x80282d
    ctx->pc = 0x10cd88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cd8c: 0x8c6497f0
    ctx->pc = 0x10cd8cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4294940656)));
    // 0x10cd90: 0xdfbf0000
    ctx->pc = 0x10cd90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cd94: 0xc0382d
    ctx->pc = 0x10cd94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cd98: 0x40302d
    ctx->pc = 0x10cd98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cd9c: 0x80432d2
    ctx->pc = 0x10CD9Cu;
    ctx->pc = 0x10CDA0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x10CB48u;
    goto label_10cb48;
    ctx->pc = 0x10CDA4u;
    // 0x10cda4: 0x0
    ctx->pc = 0x10cda4u;
    // NOP
}
