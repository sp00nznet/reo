#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013CBB0
// Address: 0x13cbb0 - 0x13ccb8
void sub_0013CBB0_0x13cbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13cbb0u;

label_13cbb0:
    // 0x13cbb0: 0x27bdffd0
    ctx->pc = 0x13cbb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_13cbb4:
    // 0x13cbb4: 0xffb10018
    ctx->pc = 0x13cbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_13cbb8:
    // 0x13cbb8: 0x80882d
    ctx->pc = 0x13cbb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13cbbc:
    // 0x13cbbc: 0xffb00010
    ctx->pc = 0x13cbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_13cbc0:
    // 0x13cbc0: 0xffb20020
    ctx->pc = 0x13cbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_13cbc4:
    // 0x13cbc4: 0x16200006
label_13cbc8:
    if (ctx->pc == 0x13CBC8u) {
        ctx->pc = 0x13CBC8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->pc = 0x13CBCCu;
        goto label_13cbcc;
    }
    ctx->pc = 0x13CBC4u;
    {
        const bool branch_taken_0x13cbc4 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x13CBC8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        if (branch_taken_0x13cbc4) {
            ctx->pc = 0x13CBE0u;
            goto label_13cbe0;
        }
    }
    ctx->pc = 0x13CBCCu;
label_13cbcc:
    // 0x13cbcc: 0x3c040024
    ctx->pc = 0x13cbccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_13cbd0:
    // 0x13cbd0: 0xc04f53e
label_13cbd4:
    if (ctx->pc == 0x13CBD4u) {
        ctx->pc = 0x13CBD4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955784));
        ctx->pc = 0x13CBD8u;
        goto label_13cbd8;
    }
    ctx->pc = 0x13CBD0u;
    SET_GPR_U32(ctx, 31, 0x13CBD8u);
    ctx->pc = 0x13CBD4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955784));
    ctx->pc = 0x13D4F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D4F8_0x13d4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CBD8u; }
    }
    if (ctx->pc != 0x13CBD8u) { return; }
    ctx->pc = 0x13CBD8u;
label_13cbd8:
    // 0x13cbd8: 0x10000031
label_13cbdc:
    if (ctx->pc == 0x13CBDCu) {
        ctx->pc = 0x13CBDCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13CBE0u;
        goto label_13cbe0;
    }
    ctx->pc = 0x13CBD8u;
    {
        const bool branch_taken_0x13cbd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13CBDCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13cbd8) {
            ctx->pc = 0x13CCA0u;
            goto label_13cca0;
        }
    }
    ctx->pc = 0x13CBE0u;
label_13cbe0:
    // 0x13cbe0: 0xc04f526
label_13cbe4:
    if (ctx->pc == 0x13CBE4u) {
        ctx->pc = 0x13CBE4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13CBE8u;
        goto label_13cbe8;
    }
    ctx->pc = 0x13CBE0u;
    SET_GPR_U32(ctx, 31, 0x13CBE8u);
    ctx->pc = 0x13CBE4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13D498u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D498_0x13d498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CBE8u; }
    }
    if (ctx->pc != 0x13CBE8u) { return; }
    ctx->pc = 0x13CBE8u;
label_13cbe8:
    // 0x13cbe8: 0xc04f2d4
label_13cbec:
    if (ctx->pc == 0x13CBECu) {
        ctx->pc = 0x13CBF0u;
        goto label_13cbf0;
    }
    ctx->pc = 0x13CBE8u;
    SET_GPR_U32(ctx, 31, 0x13CBF0u);
    ctx->pc = 0x13CB50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CB50_0x13cb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CBF0u; }
    }
    if (ctx->pc != 0x13CBF0u) { return; }
    ctx->pc = 0x13CBF0u;
label_13cbf0:
    // 0x13cbf0: 0x40902d
    ctx->pc = 0x13cbf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13cbf4:
    // 0x13cbf4: 0x56400006
label_13cbf8:
    if (ctx->pc == 0x13CBF8u) {
        ctx->pc = 0x13CBF8u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x13CBFCu;
        goto label_13cbfc;
    }
    ctx->pc = 0x13CBF4u;
    {
        const bool branch_taken_0x13cbf4 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x13cbf4) {
            ctx->pc = 0x13CBF8u;
            WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x13CC10u;
            goto label_13cc10;
        }
    }
    ctx->pc = 0x13CBFCu;
label_13cbfc:
    // 0x13cbfc: 0x3c040024
    ctx->pc = 0x13cbfcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_13cc00:
    // 0x13cc00: 0xc04f53e
label_13cc04:
    if (ctx->pc == 0x13CC04u) {
        ctx->pc = 0x13CC04u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955832));
        ctx->pc = 0x13CC08u;
        goto label_13cc08;
    }
    ctx->pc = 0x13CC00u;
    SET_GPR_U32(ctx, 31, 0x13CC08u);
    ctx->pc = 0x13CC04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955832));
    ctx->pc = 0x13D4F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D4F8_0x13d4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CC08u; }
    }
    if (ctx->pc != 0x13CC08u) { return; }
    ctx->pc = 0x13CC08u;
label_13cc08:
    // 0x13cc08: 0x10000022
label_13cc0c:
    if (ctx->pc == 0x13CC0Cu) {
        ctx->pc = 0x13CC10u;
        goto label_13cc10;
    }
    ctx->pc = 0x13CC08u;
    {
        const bool branch_taken_0x13cc08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x13cc08) {
            ctx->pc = 0x13CC94u;
            goto label_13cc94;
        }
    }
    ctx->pc = 0x13CC10u;
label_13cc10:
    // 0x13cc10: 0x220202d
    ctx->pc = 0x13cc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13cc14:
    // 0x13cc14: 0xae510008
    ctx->pc = 0x13cc14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 17));
label_13cc18:
    // 0x13cc18: 0x8e230000
    ctx->pc = 0x13cc18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13cc1c:
    // 0x13cc1c: 0x8c620024
    ctx->pc = 0x13cc1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_13cc20:
    // 0x13cc20: 0x40f809
label_13cc24:
    if (ctx->pc == 0x13CC24u) {
        ctx->pc = 0x13CC24u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13CC28u;
        goto label_13cc28;
    }
    ctx->pc = 0x13CC20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13CC28u);
        ctx->pc = 0x13CC24u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13CBB0u: goto label_13cbb0;
            case 0x13CBB4u: goto label_13cbb4;
            case 0x13CBB8u: goto label_13cbb8;
            case 0x13CBBCu: goto label_13cbbc;
            case 0x13CBC0u: goto label_13cbc0;
            case 0x13CBC4u: goto label_13cbc4;
            case 0x13CBC8u: goto label_13cbc8;
            case 0x13CBCCu: goto label_13cbcc;
            case 0x13CBD0u: goto label_13cbd0;
            case 0x13CBD4u: goto label_13cbd4;
            case 0x13CBD8u: goto label_13cbd8;
            case 0x13CBDCu: goto label_13cbdc;
            case 0x13CBE0u: goto label_13cbe0;
            case 0x13CBE4u: goto label_13cbe4;
            case 0x13CBE8u: goto label_13cbe8;
            case 0x13CBECu: goto label_13cbec;
            case 0x13CBF0u: goto label_13cbf0;
            case 0x13CBF4u: goto label_13cbf4;
            case 0x13CBF8u: goto label_13cbf8;
            case 0x13CBFCu: goto label_13cbfc;
            case 0x13CC00u: goto label_13cc00;
            case 0x13CC04u: goto label_13cc04;
            case 0x13CC08u: goto label_13cc08;
            case 0x13CC0Cu: goto label_13cc0c;
            case 0x13CC10u: goto label_13cc10;
            case 0x13CC14u: goto label_13cc14;
            case 0x13CC18u: goto label_13cc18;
            case 0x13CC1Cu: goto label_13cc1c;
            case 0x13CC20u: goto label_13cc20;
            case 0x13CC24u: goto label_13cc24;
            case 0x13CC28u: goto label_13cc28;
            case 0x13CC2Cu: goto label_13cc2c;
            case 0x13CC30u: goto label_13cc30;
            case 0x13CC34u: goto label_13cc34;
            case 0x13CC38u: goto label_13cc38;
            case 0x13CC3Cu: goto label_13cc3c;
            case 0x13CC40u: goto label_13cc40;
            case 0x13CC44u: goto label_13cc44;
            case 0x13CC48u: goto label_13cc48;
            case 0x13CC4Cu: goto label_13cc4c;
            case 0x13CC50u: goto label_13cc50;
            case 0x13CC54u: goto label_13cc54;
            case 0x13CC58u: goto label_13cc58;
            case 0x13CC5Cu: goto label_13cc5c;
            case 0x13CC60u: goto label_13cc60;
            case 0x13CC64u: goto label_13cc64;
            case 0x13CC68u: goto label_13cc68;
            case 0x13CC6Cu: goto label_13cc6c;
            case 0x13CC70u: goto label_13cc70;
            case 0x13CC74u: goto label_13cc74;
            case 0x13CC78u: goto label_13cc78;
            case 0x13CC7Cu: goto label_13cc7c;
            case 0x13CC80u: goto label_13cc80;
            case 0x13CC84u: goto label_13cc84;
            case 0x13CC88u: goto label_13cc88;
            case 0x13CC8Cu: goto label_13cc8c;
            case 0x13CC90u: goto label_13cc90;
            case 0x13CC94u: goto label_13cc94;
            case 0x13CC98u: goto label_13cc98;
            case 0x13CC9Cu: goto label_13cc9c;
            case 0x13CCA0u: goto label_13cca0;
            case 0x13CCA4u: goto label_13cca4;
            case 0x13CCA8u: goto label_13cca8;
            case 0x13CCACu: goto label_13ccac;
            case 0x13CCB0u: goto label_13ccb0;
            case 0x13CCB4u: goto label_13ccb4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13CC28u; }
            if (ctx->pc != 0x13CC28u) { return; }
        }
    }
    ctx->pc = 0x13CC28u;
label_13cc28:
    // 0x13cc28: 0x8e230000
    ctx->pc = 0x13cc28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13cc2c:
    // 0x13cc2c: 0x40802d
    ctx->pc = 0x13cc2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13cc30:
    // 0x13cc30: 0x220202d
    ctx->pc = 0x13cc30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13cc34:
    // 0x13cc34: 0x8c620024
    ctx->pc = 0x13cc34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_13cc38:
    // 0x13cc38: 0x40f809
label_13cc3c:
    if (ctx->pc == 0x13CC3Cu) {
        ctx->pc = 0x13CC3Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x13CC40u;
        goto label_13cc40;
    }
    ctx->pc = 0x13CC38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13CC40u);
        ctx->pc = 0x13CC3Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13CBB0u: goto label_13cbb0;
            case 0x13CBB4u: goto label_13cbb4;
            case 0x13CBB8u: goto label_13cbb8;
            case 0x13CBBCu: goto label_13cbbc;
            case 0x13CBC0u: goto label_13cbc0;
            case 0x13CBC4u: goto label_13cbc4;
            case 0x13CBC8u: goto label_13cbc8;
            case 0x13CBCCu: goto label_13cbcc;
            case 0x13CBD0u: goto label_13cbd0;
            case 0x13CBD4u: goto label_13cbd4;
            case 0x13CBD8u: goto label_13cbd8;
            case 0x13CBDCu: goto label_13cbdc;
            case 0x13CBE0u: goto label_13cbe0;
            case 0x13CBE4u: goto label_13cbe4;
            case 0x13CBE8u: goto label_13cbe8;
            case 0x13CBECu: goto label_13cbec;
            case 0x13CBF0u: goto label_13cbf0;
            case 0x13CBF4u: goto label_13cbf4;
            case 0x13CBF8u: goto label_13cbf8;
            case 0x13CBFCu: goto label_13cbfc;
            case 0x13CC00u: goto label_13cc00;
            case 0x13CC04u: goto label_13cc04;
            case 0x13CC08u: goto label_13cc08;
            case 0x13CC0Cu: goto label_13cc0c;
            case 0x13CC10u: goto label_13cc10;
            case 0x13CC14u: goto label_13cc14;
            case 0x13CC18u: goto label_13cc18;
            case 0x13CC1Cu: goto label_13cc1c;
            case 0x13CC20u: goto label_13cc20;
            case 0x13CC24u: goto label_13cc24;
            case 0x13CC28u: goto label_13cc28;
            case 0x13CC2Cu: goto label_13cc2c;
            case 0x13CC30u: goto label_13cc30;
            case 0x13CC34u: goto label_13cc34;
            case 0x13CC38u: goto label_13cc38;
            case 0x13CC3Cu: goto label_13cc3c;
            case 0x13CC40u: goto label_13cc40;
            case 0x13CC44u: goto label_13cc44;
            case 0x13CC48u: goto label_13cc48;
            case 0x13CC4Cu: goto label_13cc4c;
            case 0x13CC50u: goto label_13cc50;
            case 0x13CC54u: goto label_13cc54;
            case 0x13CC58u: goto label_13cc58;
            case 0x13CC5Cu: goto label_13cc5c;
            case 0x13CC60u: goto label_13cc60;
            case 0x13CC64u: goto label_13cc64;
            case 0x13CC68u: goto label_13cc68;
            case 0x13CC6Cu: goto label_13cc6c;
            case 0x13CC70u: goto label_13cc70;
            case 0x13CC74u: goto label_13cc74;
            case 0x13CC78u: goto label_13cc78;
            case 0x13CC7Cu: goto label_13cc7c;
            case 0x13CC80u: goto label_13cc80;
            case 0x13CC84u: goto label_13cc84;
            case 0x13CC88u: goto label_13cc88;
            case 0x13CC8Cu: goto label_13cc8c;
            case 0x13CC90u: goto label_13cc90;
            case 0x13CC94u: goto label_13cc94;
            case 0x13CC98u: goto label_13cc98;
            case 0x13CC9Cu: goto label_13cc9c;
            case 0x13CCA0u: goto label_13cca0;
            case 0x13CCA4u: goto label_13cca4;
            case 0x13CCA8u: goto label_13cca8;
            case 0x13CCACu: goto label_13ccac;
            case 0x13CCB0u: goto label_13ccb0;
            case 0x13CCB4u: goto label_13ccb4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13CC40u; }
            if (ctx->pc != 0x13CC40u) { return; }
        }
    }
    ctx->pc = 0x13CC40u;
label_13cc40:
    // 0x13cc40: 0x2403000a
    ctx->pc = 0x13cc40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
label_13cc44:
    // 0x13cc44: 0x2028021
    ctx->pc = 0x13cc44u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_13cc48:
    // 0x13cc48: 0x2404000f
    ctx->pc = 0x13cc48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 15));
label_13cc4c:
    // 0x13cc4c: 0x1010c0
    ctx->pc = 0x13cc4cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 3));
label_13cc50:
    // 0x13cc50: 0xae500018
    ctx->pc = 0x13cc50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 16));
label_13cc54:
    // 0x13cc54: 0x43001a
    ctx->pc = 0x13cc54u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_13cc58:
    // 0x13cc58: 0x50600001
label_13cc5c:
    if (ctx->pc == 0x13CC5Cu) {
        ctx->pc = 0x13CC5Cu;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x13CC60u;
        goto label_13cc60;
    }
    ctx->pc = 0x13CC58u;
    {
        const bool branch_taken_0x13cc58 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x13cc58) {
            ctx->pc = 0x13CC5Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x13CC60u;
            goto label_13cc60;
        }
    }
    ctx->pc = 0x13CC60u;
label_13cc60:
    // 0x13cc60: 0x26430230
    ctx->pc = 0x13cc60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 18), 560));
label_13cc64:
    // 0x13cc64: 0x1012
    ctx->pc = 0x13cc64u;
    SET_GPR_U32(ctx, 2, ctx->lo);
label_13cc68:
    // 0x13cc68: 0xae420014
    ctx->pc = 0x13cc68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_13cc6c:
    // 0x13cc6c: 0x0
    ctx->pc = 0x13cc6cu;
    // NOP
label_13cc70:
    // 0x13cc70: 0x2484ffff
    ctx->pc = 0x13cc70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
label_13cc74:
    // 0x13cc74: 0xac600000
    ctx->pc = 0x13cc74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_13cc78:
    // 0x13cc78: 0x0
    ctx->pc = 0x13cc78u;
    // NOP
label_13cc7c:
    // 0x13cc7c: 0x0
    ctx->pc = 0x13cc7cu;
    // NOP
label_13cc80:
    // 0x13cc80: 0x0
    ctx->pc = 0x13cc80u;
    // NOP
label_13cc84:
    // 0x13cc84: 0x481fffa
label_13cc88:
    if (ctx->pc == 0x13CC88u) {
        ctx->pc = 0x13CC88u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->pc = 0x13CC8Cu;
        goto label_13cc8c;
    }
    ctx->pc = 0x13CC84u;
    {
        const bool branch_taken_0x13cc84 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x13CC88u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967264));
        if (branch_taken_0x13cc84) {
            ctx->pc = 0x13CC70u;
            goto label_13cc70;
        }
    }
    ctx->pc = 0x13CC8Cu;
label_13cc8c:
    // 0x13cc8c: 0x24020001
    ctx->pc = 0x13cc8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_13cc90:
    // 0x13cc90: 0xa2420000
    ctx->pc = 0x13cc90u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
label_13cc94:
    // 0x13cc94: 0xc04f52e
label_13cc98:
    if (ctx->pc == 0x13CC98u) {
        ctx->pc = 0x13CC98u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13CC9Cu;
        goto label_13cc9c;
    }
    ctx->pc = 0x13CC94u;
    SET_GPR_U32(ctx, 31, 0x13CC9Cu);
    ctx->pc = 0x13CC98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13D4B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D4B8_0x13d4b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CC9Cu; }
    }
    if (ctx->pc != 0x13CC9Cu) { return; }
    ctx->pc = 0x13CC9Cu;
label_13cc9c:
    // 0x13cc9c: 0x240102d
    ctx->pc = 0x13cc9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13cca0:
    // 0x13cca0: 0xdfb00010
    ctx->pc = 0x13cca0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13cca4:
    // 0x13cca4: 0xdfb10018
    ctx->pc = 0x13cca4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_13cca8:
    // 0x13cca8: 0xdfb20020
    ctx->pc = 0x13cca8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13ccac:
    // 0x13ccac: 0xdfbf0028
    ctx->pc = 0x13ccacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_13ccb0:
    // 0x13ccb0: 0x3e00008
label_13ccb4:
    if (ctx->pc == 0x13CCB4u) {
        ctx->pc = 0x13CCB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x13CCB8u;
        goto label_fallthrough_0x13ccb0;
    }
    ctx->pc = 0x13CCB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CCB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13CBB0u: goto label_13cbb0;
            case 0x13CBB4u: goto label_13cbb4;
            case 0x13CBB8u: goto label_13cbb8;
            case 0x13CBBCu: goto label_13cbbc;
            case 0x13CBC0u: goto label_13cbc0;
            case 0x13CBC4u: goto label_13cbc4;
            case 0x13CBC8u: goto label_13cbc8;
            case 0x13CBCCu: goto label_13cbcc;
            case 0x13CBD0u: goto label_13cbd0;
            case 0x13CBD4u: goto label_13cbd4;
            case 0x13CBD8u: goto label_13cbd8;
            case 0x13CBDCu: goto label_13cbdc;
            case 0x13CBE0u: goto label_13cbe0;
            case 0x13CBE4u: goto label_13cbe4;
            case 0x13CBE8u: goto label_13cbe8;
            case 0x13CBECu: goto label_13cbec;
            case 0x13CBF0u: goto label_13cbf0;
            case 0x13CBF4u: goto label_13cbf4;
            case 0x13CBF8u: goto label_13cbf8;
            case 0x13CBFCu: goto label_13cbfc;
            case 0x13CC00u: goto label_13cc00;
            case 0x13CC04u: goto label_13cc04;
            case 0x13CC08u: goto label_13cc08;
            case 0x13CC0Cu: goto label_13cc0c;
            case 0x13CC10u: goto label_13cc10;
            case 0x13CC14u: goto label_13cc14;
            case 0x13CC18u: goto label_13cc18;
            case 0x13CC1Cu: goto label_13cc1c;
            case 0x13CC20u: goto label_13cc20;
            case 0x13CC24u: goto label_13cc24;
            case 0x13CC28u: goto label_13cc28;
            case 0x13CC2Cu: goto label_13cc2c;
            case 0x13CC30u: goto label_13cc30;
            case 0x13CC34u: goto label_13cc34;
            case 0x13CC38u: goto label_13cc38;
            case 0x13CC3Cu: goto label_13cc3c;
            case 0x13CC40u: goto label_13cc40;
            case 0x13CC44u: goto label_13cc44;
            case 0x13CC48u: goto label_13cc48;
            case 0x13CC4Cu: goto label_13cc4c;
            case 0x13CC50u: goto label_13cc50;
            case 0x13CC54u: goto label_13cc54;
            case 0x13CC58u: goto label_13cc58;
            case 0x13CC5Cu: goto label_13cc5c;
            case 0x13CC60u: goto label_13cc60;
            case 0x13CC64u: goto label_13cc64;
            case 0x13CC68u: goto label_13cc68;
            case 0x13CC6Cu: goto label_13cc6c;
            case 0x13CC70u: goto label_13cc70;
            case 0x13CC74u: goto label_13cc74;
            case 0x13CC78u: goto label_13cc78;
            case 0x13CC7Cu: goto label_13cc7c;
            case 0x13CC80u: goto label_13cc80;
            case 0x13CC84u: goto label_13cc84;
            case 0x13CC88u: goto label_13cc88;
            case 0x13CC8Cu: goto label_13cc8c;
            case 0x13CC90u: goto label_13cc90;
            case 0x13CC94u: goto label_13cc94;
            case 0x13CC98u: goto label_13cc98;
            case 0x13CC9Cu: goto label_13cc9c;
            case 0x13CCA0u: goto label_13cca0;
            case 0x13CCA4u: goto label_13cca4;
            case 0x13CCA8u: goto label_13cca8;
            case 0x13CCACu: goto label_13ccac;
            case 0x13CCB0u: goto label_13ccb0;
            case 0x13CCB4u: goto label_13ccb4;
            default: break;
        }
        return;
    }
label_fallthrough_0x13ccb0:
    ctx->pc = 0x13CCB8u;
}
