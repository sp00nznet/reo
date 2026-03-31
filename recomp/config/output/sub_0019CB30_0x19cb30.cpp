#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0019CB30
// Address: 0x19cb30 - 0x19cd40
void sub_0019CB30_0x19cb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x19cb30u;

    // 0x19cb30: 0x30c2ffff
    ctx->pc = 0x19cb30u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 65535));
    // 0x19cb34: 0x27bdffd0
    ctx->pc = 0x19cb34u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19cb38: 0x2446ffff
    ctx->pc = 0x19cb38u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19cb3c: 0xffbf0020
    ctx->pc = 0x19cb3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19cb40: 0x610c0
    ctx->pc = 0x19cb40u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 3));
    // 0x19cb44: 0x7fb10010
    ctx->pc = 0x19cb44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19cb48: 0x461023
    ctx->pc = 0x19cb48u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x19cb4c: 0x3c03002a
    ctx->pc = 0x19cb4cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)42 << 16));
    // 0x19cb50: 0x240c0
    ctx->pc = 0x19cb50u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 2), 3));
    // 0x19cb54: 0x7fb00000
    ctx->pc = 0x19cb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19cb58: 0x24638680
    ctx->pc = 0x19cb58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294936192));
    // 0x19cb5c: 0x24060001
    ctx->pc = 0x19cb5cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19cb60: 0x688021
    ctx->pc = 0x19cb60u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x19cb64: 0x24020004
    ctx->pc = 0x19cb64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x19cb68: 0xa2060034
    ctx->pc = 0x19cb68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 6));
    // 0x19cb6c: 0xae070000
    ctx->pc = 0x19cb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x19cb70: 0x8c830000
    ctx->pc = 0x19cb70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19cb74: 0xae030004
    ctx->pc = 0x19cb74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x19cb78: 0x8c830004
    ctx->pc = 0x19cb78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x19cb7c: 0xa603001a
    ctx->pc = 0x19cb7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 3));
    // 0x19cb80: 0x8c830008
    ctx->pc = 0x19cb80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x19cb84: 0xa603001c
    ctx->pc = 0x19cb84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x19cb88: 0xa2000036
    ctx->pc = 0x19cb88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 54), (uint8_t)GPR_U32(ctx, 0));
    // 0x19cb8c: 0xae000024
    ctx->pc = 0x19cb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x19cb90: 0xae00002c
    ctx->pc = 0x19cb90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x19cb94: 0xa2000037
    ctx->pc = 0x19cb94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 55), (uint8_t)GPR_U32(ctx, 0));
    // 0x19cb98: 0xae050030
    ctx->pc = 0x19cb98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
    // 0x19cb9c: 0x8c830014
    ctx->pc = 0x19cb9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x19cba0: 0x1062001b
    ctx->pc = 0x19CBA0u;
    {
        const bool branch_taken_0x19cba0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x19CBA4u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19cba0) {
            ctx->pc = 0x19CC10u;
            goto label_19cc10;
        }
    }
    ctx->pc = 0x19CBA8u;
    // 0x19cba8: 0x24020003
    ctx->pc = 0x19cba8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x19cbac: 0x10620015
    ctx->pc = 0x19CBACu;
    {
        const bool branch_taken_0x19cbac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x19cbac) {
            ctx->pc = 0x19CC04u;
            goto label_19cc04;
        }
    }
    ctx->pc = 0x19CBB4u;
    // 0x19cbb4: 0x24020002
    ctx->pc = 0x19cbb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x19cbb8: 0x1062000f
    ctx->pc = 0x19CBB8u;
    {
        const bool branch_taken_0x19cbb8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x19cbb8) {
            ctx->pc = 0x19CBF8u;
            goto label_19cbf8;
        }
    }
    ctx->pc = 0x19CBC0u;
    // 0x19cbc0: 0x1066000a
    ctx->pc = 0x19CBC0u;
    {
        const bool branch_taken_0x19cbc0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 6));
        ctx->pc = 0x19CBC4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 19));
        if (branch_taken_0x19cbc0) {
            ctx->pc = 0x19CBECu;
            goto label_19cbec;
        }
    }
    ctx->pc = 0x19CBC8u;
    // 0x19cbc8: 0x10600004
    ctx->pc = 0x19CBC8u;
    {
        const bool branch_taken_0x19cbc8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x19CBCCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
        if (branch_taken_0x19cbc8) {
            ctx->pc = 0x19CBDCu;
            goto label_19cbdc;
        }
    }
    ctx->pc = 0x19CBD0u;
    // 0x19cbd0: 0x10000012
    ctx->pc = 0x19CBD0u;
    {
        const bool branch_taken_0x19cbd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19CBD4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
        if (branch_taken_0x19cbd0) {
            ctx->pc = 0x19CC1Cu;
            goto label_19cc1c;
        }
    }
    ctx->pc = 0x19CBD8u;
    // 0x19cbd8: 0x24020014
    ctx->pc = 0x19cbd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
label_19cbdc:
    // 0x19cbdc: 0xae020020
    ctx->pc = 0x19cbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x19cbe0: 0x1000000d
    ctx->pc = 0x19CBE0u;
    {
        const bool branch_taken_0x19cbe0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19CBE4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        if (branch_taken_0x19cbe0) {
            ctx->pc = 0x19CC18u;
            goto label_19cc18;
        }
    }
    ctx->pc = 0x19CBE8u;
    // 0x19cbe8: 0x24020013
    ctx->pc = 0x19cbe8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 19));
label_19cbec:
    // 0x19cbec: 0xae020020
    ctx->pc = 0x19cbecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x19cbf0: 0x10000009
    ctx->pc = 0x19CBF0u;
    {
        const bool branch_taken_0x19cbf0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19CBF4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
        if (branch_taken_0x19cbf0) {
            ctx->pc = 0x19CC18u;
            goto label_19cc18;
        }
    }
    ctx->pc = 0x19CBF8u;
label_19cbf8:
    // 0x19cbf8: 0xae020020
    ctx->pc = 0x19cbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x19cbfc: 0x10000006
    ctx->pc = 0x19CBFCu;
    {
        const bool branch_taken_0x19cbfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19CC00u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x19cbfc) {
            ctx->pc = 0x19CC18u;
            goto label_19cc18;
        }
    }
    ctx->pc = 0x19CC04u;
label_19cc04:
    // 0x19cc04: 0xae060020
    ctx->pc = 0x19cc04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 6));
    // 0x19cc08: 0x10000003
    ctx->pc = 0x19CC08u;
    {
        const bool branch_taken_0x19cc08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19CC0Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x19cc08) {
            ctx->pc = 0x19CC18u;
            goto label_19cc18;
        }
    }
    ctx->pc = 0x19CC10u;
label_19cc10:
    // 0x19cc10: 0xae000020
    ctx->pc = 0x19cc10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x19cc14: 0xae02000c
    ctx->pc = 0x19cc14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_19cc18:
    // 0x19cc18: 0x8e250004
    ctx->pc = 0x19cc18u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_19cc1c:
    // 0x19cc1c: 0x24020020
    ctx->pc = 0x19cc1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x19cc20: 0x10a20015
    ctx->pc = 0x19CC20u;
    {
        const bool branch_taken_0x19cc20 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x19cc20) {
            ctx->pc = 0x19CC78u;
            goto label_19cc78;
        }
    }
    ctx->pc = 0x19CC28u;
    // 0x19cc28: 0x24020040
    ctx->pc = 0x19cc28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
    // 0x19cc2c: 0x10a20012
    ctx->pc = 0x19CC2Cu;
    {
        const bool branch_taken_0x19cc2c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x19cc2c) {
            ctx->pc = 0x19CC78u;
            goto label_19cc78;
        }
    }
    ctx->pc = 0x19CC34u;
    // 0x19cc34: 0x24020080
    ctx->pc = 0x19cc34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
    // 0x19cc38: 0x10a2000f
    ctx->pc = 0x19CC38u;
    {
        const bool branch_taken_0x19cc38 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x19cc38) {
            ctx->pc = 0x19CC78u;
            goto label_19cc78;
        }
    }
    ctx->pc = 0x19CC40u;
    // 0x19cc40: 0x24020100
    ctx->pc = 0x19cc40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 256));
    // 0x19cc44: 0x10a2000c
    ctx->pc = 0x19CC44u;
    {
        const bool branch_taken_0x19cc44 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x19cc44) {
            ctx->pc = 0x19CC78u;
            goto label_19cc78;
        }
    }
    ctx->pc = 0x19CC4Cu;
    // 0x19cc4c: 0x24020200
    ctx->pc = 0x19cc4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 512));
    // 0x19cc50: 0x10a20009
    ctx->pc = 0x19CC50u;
    {
        const bool branch_taken_0x19cc50 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x19cc50) {
            ctx->pc = 0x19CC78u;
            goto label_19cc78;
        }
    }
    ctx->pc = 0x19CC58u;
    // 0x19cc58: 0x24020400
    ctx->pc = 0x19cc58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1024));
    // 0x19cc5c: 0x10a20006
    ctx->pc = 0x19CC5Cu;
    {
        const bool branch_taken_0x19cc5c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x19cc5c) {
            ctx->pc = 0x19CC78u;
            goto label_19cc78;
        }
    }
    ctx->pc = 0x19CC64u;
    // 0x19cc64: 0x3c040024
    ctx->pc = 0x19cc64u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x19cc68: 0xc0682b4
    ctx->pc = 0x19CC68u;
    SET_GPR_U32(ctx, 31, 0x19CC70u);
    ctx->pc = 0x19CC6Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7456));
    ctx->pc = 0x1A0AD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0AD0_0x1a0ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CC70u; }
    }
    if (ctx->pc != 0x19CC70u) { return; }
    ctx->pc = 0x19CC70u;
    // 0x19cc70: 0x1000002b
    ctx->pc = 0x19CC70u;
    {
        const bool branch_taken_0x19cc70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19CC74u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19cc70) {
            ctx->pc = 0x19CD20u;
            goto label_19cd20;
        }
    }
    ctx->pc = 0x19CC78u;
label_19cc78:
    // 0x19cc78: 0xc0676b0
    ctx->pc = 0x19CC78u;
    SET_GPR_U32(ctx, 31, 0x19CC80u);
    ctx->pc = 0x19CC7Cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    ctx->pc = 0x19DAC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019DAC0_0x19dac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CC80u; }
    }
    if (ctx->pc != 0x19CC80u) { return; }
    ctx->pc = 0x19CC80u;
    // 0x19cc80: 0xa6020016
    ctx->pc = 0x19cc80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x19cc84: 0x8e250008
    ctx->pc = 0x19cc84u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x19cc88: 0x24020020
    ctx->pc = 0x19cc88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x19cc8c: 0x10a20015
    ctx->pc = 0x19CC8Cu;
    {
        const bool branch_taken_0x19cc8c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x19cc8c) {
            ctx->pc = 0x19CCE4u;
            goto label_19cce4;
        }
    }
    ctx->pc = 0x19CC94u;
    // 0x19cc94: 0x24020040
    ctx->pc = 0x19cc94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
    // 0x19cc98: 0x10a20012
    ctx->pc = 0x19CC98u;
    {
        const bool branch_taken_0x19cc98 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x19cc98) {
            ctx->pc = 0x19CCE4u;
            goto label_19cce4;
        }
    }
    ctx->pc = 0x19CCA0u;
    // 0x19cca0: 0x24020080
    ctx->pc = 0x19cca0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
    // 0x19cca4: 0x10a2000f
    ctx->pc = 0x19CCA4u;
    {
        const bool branch_taken_0x19cca4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x19cca4) {
            ctx->pc = 0x19CCE4u;
            goto label_19cce4;
        }
    }
    ctx->pc = 0x19CCACu;
    // 0x19ccac: 0x24020100
    ctx->pc = 0x19ccacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 256));
    // 0x19ccb0: 0x10a2000c
    ctx->pc = 0x19CCB0u;
    {
        const bool branch_taken_0x19ccb0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x19ccb0) {
            ctx->pc = 0x19CCE4u;
            goto label_19cce4;
        }
    }
    ctx->pc = 0x19CCB8u;
    // 0x19ccb8: 0x24020200
    ctx->pc = 0x19ccb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 512));
    // 0x19ccbc: 0x10a20009
    ctx->pc = 0x19CCBCu;
    {
        const bool branch_taken_0x19ccbc = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x19ccbc) {
            ctx->pc = 0x19CCE4u;
            goto label_19cce4;
        }
    }
    ctx->pc = 0x19CCC4u;
    // 0x19ccc4: 0x24020400
    ctx->pc = 0x19ccc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1024));
    // 0x19ccc8: 0x10a20006
    ctx->pc = 0x19CCC8u;
    {
        const bool branch_taken_0x19ccc8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x19ccc8) {
            ctx->pc = 0x19CCE4u;
            goto label_19cce4;
        }
    }
    ctx->pc = 0x19CCD0u;
    // 0x19ccd0: 0x3c040024
    ctx->pc = 0x19ccd0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x19ccd4: 0xc0682b4
    ctx->pc = 0x19CCD4u;
    SET_GPR_U32(ctx, 31, 0x19CCDCu);
    ctx->pc = 0x19CCD8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7520));
    ctx->pc = 0x1A0AD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0AD0_0x1a0ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CCDCu; }
    }
    if (ctx->pc != 0x19CCDCu) { return; }
    ctx->pc = 0x19CCDCu;
    // 0x19ccdc: 0x10000010
    ctx->pc = 0x19CCDCu;
    {
        const bool branch_taken_0x19ccdc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19CCE0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19ccdc) {
            ctx->pc = 0x19CD20u;
            goto label_19cd20;
        }
    }
    ctx->pc = 0x19CCE4u;
label_19cce4:
    // 0x19cce4: 0xc0676b0
    ctx->pc = 0x19CCE4u;
    SET_GPR_U32(ctx, 31, 0x19CCECu);
    ctx->pc = 0x19CCE8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->pc = 0x19DAC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019DAC0_0x19dac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CCECu; }
    }
    if (ctx->pc != 0x19CCECu) { return; }
    ctx->pc = 0x19CCECu;
    // 0x19ccec: 0xa6020018
    ctx->pc = 0x19ccecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x19ccf0: 0xc0676ec
    ctx->pc = 0x19CCF0u;
    SET_GPR_U32(ctx, 31, 0x19CCF8u);
    ctx->pc = 0x19CCF4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19DBB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019DBB0_0x19dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CCF8u; }
    }
    if (ctx->pc != 0x19CCF8u) { return; }
    ctx->pc = 0x19CCF8u;
    // 0x19ccf8: 0xa6020010
    ctx->pc = 0x19ccf8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x19ccfc: 0x24020020
    ctx->pc = 0x19ccfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x19cd00: 0xa6020012
    ctx->pc = 0x19cd00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x19cd04: 0x8606001c
    ctx->pc = 0x19cd04u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x19cd08: 0x8e070030
    ctx->pc = 0x19cd08u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19cd0c: 0x8e040020
    ctx->pc = 0x19cd0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x19cd10: 0xc0676c4
    ctx->pc = 0x19CD10u;
    SET_GPR_U32(ctx, 31, 0x19CD18u);
    ctx->pc = 0x19CD14u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    ctx->pc = 0x19DB10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019DB10_0x19db10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CD18u; }
    }
    if (ctx->pc != 0x19CD18u) { return; }
    ctx->pc = 0x19CD18u;
    // 0x19cd18: 0xae020008
    ctx->pc = 0x19cd18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x19cd1c: 0x24020001
    ctx->pc = 0x19cd1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_19cd20:
    // 0x19cd20: 0xdfbf0020
    ctx->pc = 0x19cd20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19cd24: 0x7bb10010
    ctx->pc = 0x19cd24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19cd28: 0x7bb00000
    ctx->pc = 0x19cd28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cd2c: 0x3e00008
    ctx->pc = 0x19CD2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CD30u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19CBDCu: goto label_19cbdc;
            case 0x19CBECu: goto label_19cbec;
            case 0x19CBF8u: goto label_19cbf8;
            case 0x19CC04u: goto label_19cc04;
            case 0x19CC10u: goto label_19cc10;
            case 0x19CC18u: goto label_19cc18;
            case 0x19CC1Cu: goto label_19cc1c;
            case 0x19CC78u: goto label_19cc78;
            case 0x19CCE4u: goto label_19cce4;
            case 0x19CD20u: goto label_19cd20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19CD34u;
    // 0x19cd34: 0x0
    ctx->pc = 0x19cd34u;
    // NOP
    // 0x19cd38: 0x0
    ctx->pc = 0x19cd38u;
    // NOP
    // 0x19cd3c: 0x0
    ctx->pc = 0x19cd3cu;
    // NOP
}
