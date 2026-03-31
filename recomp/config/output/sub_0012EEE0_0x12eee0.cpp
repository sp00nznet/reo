#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012EEE0
// Address: 0x12eee0 - 0x12ef90
void sub_0012EEE0_0x12eee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12eee0u;

label_12eee0:
    // 0x12eee0: 0x27bdffd0
    ctx->pc = 0x12eee0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_12eee4:
    // 0x12eee4: 0xffb00000
    ctx->pc = 0x12eee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_12eee8:
    // 0x12eee8: 0x80802d
    ctx->pc = 0x12eee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12eeec:
    // 0x12eeec: 0xffb20010
    ctx->pc = 0x12eeecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_12eef0:
    // 0x12eef0: 0x24120012
    ctx->pc = 0x12eef0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 18));
label_12eef4:
    // 0x12eef4: 0xffb30018
    ctx->pc = 0x12eef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_12eef8:
    // 0x12eef8: 0x982d
    ctx->pc = 0x12eef8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12eefc:
    // 0x12eefc: 0xffb10008
    ctx->pc = 0x12eefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_12ef00:
    // 0x12ef00: 0xffbf0020
    ctx->pc = 0x12ef00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_12ef04:
    // 0x12ef04: 0x8e11000c
    ctx->pc = 0x12ef04u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_12ef08:
    // 0x12ef08: 0x8e230000
    ctx->pc = 0x12ef08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12ef0c:
    // 0x12ef0c: 0x220202d
    ctx->pc = 0x12ef0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12ef10:
    // 0x12ef10: 0x8c620024
    ctx->pc = 0x12ef10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_12ef14:
    // 0x12ef14: 0x40f809
label_12ef18:
    if (ctx->pc == 0x12EF18u) {
        ctx->pc = 0x12EF18u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12EF1Cu;
        goto label_12ef1c;
    }
    ctx->pc = 0x12EF14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12EF1Cu);
        ctx->pc = 0x12EF18u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12EEE0u: goto label_12eee0;
            case 0x12EEE4u: goto label_12eee4;
            case 0x12EEE8u: goto label_12eee8;
            case 0x12EEECu: goto label_12eeec;
            case 0x12EEF0u: goto label_12eef0;
            case 0x12EEF4u: goto label_12eef4;
            case 0x12EEF8u: goto label_12eef8;
            case 0x12EEFCu: goto label_12eefc;
            case 0x12EF00u: goto label_12ef00;
            case 0x12EF04u: goto label_12ef04;
            case 0x12EF08u: goto label_12ef08;
            case 0x12EF0Cu: goto label_12ef0c;
            case 0x12EF10u: goto label_12ef10;
            case 0x12EF14u: goto label_12ef14;
            case 0x12EF18u: goto label_12ef18;
            case 0x12EF1Cu: goto label_12ef1c;
            case 0x12EF20u: goto label_12ef20;
            case 0x12EF24u: goto label_12ef24;
            case 0x12EF28u: goto label_12ef28;
            case 0x12EF2Cu: goto label_12ef2c;
            case 0x12EF30u: goto label_12ef30;
            case 0x12EF34u: goto label_12ef34;
            case 0x12EF38u: goto label_12ef38;
            case 0x12EF3Cu: goto label_12ef3c;
            case 0x12EF40u: goto label_12ef40;
            case 0x12EF44u: goto label_12ef44;
            case 0x12EF48u: goto label_12ef48;
            case 0x12EF4Cu: goto label_12ef4c;
            case 0x12EF50u: goto label_12ef50;
            case 0x12EF54u: goto label_12ef54;
            case 0x12EF58u: goto label_12ef58;
            case 0x12EF5Cu: goto label_12ef5c;
            case 0x12EF60u: goto label_12ef60;
            case 0x12EF64u: goto label_12ef64;
            case 0x12EF68u: goto label_12ef68;
            case 0x12EF6Cu: goto label_12ef6c;
            case 0x12EF70u: goto label_12ef70;
            case 0x12EF74u: goto label_12ef74;
            case 0x12EF78u: goto label_12ef78;
            case 0x12EF7Cu: goto label_12ef7c;
            case 0x12EF80u: goto label_12ef80;
            case 0x12EF84u: goto label_12ef84;
            case 0x12EF88u: goto label_12ef88;
            case 0x12EF8Cu: goto label_12ef8c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12EF1Cu; }
            if (ctx->pc != 0x12EF1Cu) { return; }
        }
    }
    ctx->pc = 0x12EF1Cu;
label_12ef1c:
    // 0x12ef1c: 0x200202d
    ctx->pc = 0x12ef1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12ef20:
    // 0x12ef20: 0x52001a
    ctx->pc = 0x12ef20u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_12ef24:
    // 0x12ef24: 0x52400001
label_12ef28:
    if (ctx->pc == 0x12EF28u) {
        ctx->pc = 0x12EF28u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x12EF2Cu;
        goto label_12ef2c;
    }
    ctx->pc = 0x12EF24u;
    {
        const bool branch_taken_0x12ef24 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x12ef24) {
            ctx->pc = 0x12EF28u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x12EF2Cu;
            goto label_12ef2c;
        }
    }
    ctx->pc = 0x12EF2Cu;
label_12ef2c:
    // 0x12ef2c: 0x8e030058
    ctx->pc = 0x12ef2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_12ef30:
    // 0x12ef30: 0x1012
    ctx->pc = 0x12ef30u;
    SET_GPR_U32(ctx, 2, ctx->lo);
label_12ef34:
    // 0x12ef34: 0x43001a
    ctx->pc = 0x12ef34u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_12ef38:
    // 0x12ef38: 0x1012
    ctx->pc = 0x12ef38u;
    SET_GPR_U32(ctx, 2, ctx->lo);
label_12ef3c:
    // 0x12ef3c: 0x1840000d
label_12ef40:
    if (ctx->pc == 0x12EF40u) {
        ctx->pc = 0x12EF40u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12EF44u;
        goto label_12ef44;
    }
    ctx->pc = 0x12EF3Cu;
    {
        const bool branch_taken_0x12ef3c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12EF40u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12ef3c) {
            ctx->pc = 0x12EF74u;
            goto label_12ef74;
        }
    }
    ctx->pc = 0x12EF44u;
label_12ef44:
    // 0x12ef44: 0xc04bafc
label_12ef48:
    if (ctx->pc == 0x12EF48u) {
        ctx->pc = 0x12EF4Cu;
        goto label_12ef4c;
    }
    ctx->pc = 0x12EF44u;
    SET_GPR_U32(ctx, 31, 0x12EF4Cu);
    ctx->pc = 0x12EBF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012EBF0_0x12ebf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EF4Cu; }
    }
    if (ctx->pc != 0x12EF4Cu) { return; }
    ctx->pc = 0x12EF4Cu;
label_12ef4c:
    // 0x12ef4c: 0x10400009
label_12ef50:
    if (ctx->pc == 0x12EF50u) {
        ctx->pc = 0x12EF50u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12EF54u;
        goto label_12ef54;
    }
    ctx->pc = 0x12EF4Cu;
    {
        const bool branch_taken_0x12ef4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12EF50u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12ef4c) {
            ctx->pc = 0x12EF74u;
            goto label_12ef74;
        }
    }
    ctx->pc = 0x12EF54u;
label_12ef54:
    // 0x12ef54: 0xc04bb6c
label_12ef58:
    if (ctx->pc == 0x12EF58u) {
        ctx->pc = 0x12EF58u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12EF5Cu;
        goto label_12ef5c;
    }
    ctx->pc = 0x12EF54u;
    SET_GPR_U32(ctx, 31, 0x12EF5Cu);
    ctx->pc = 0x12EF58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12EDB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012EDB0_0x12edb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EF5Cu; }
    }
    if (ctx->pc != 0x12EF5Cu) { return; }
    ctx->pc = 0x12EF5Cu;
label_12ef5c:
    // 0x12ef5c: 0x8e030030
    ctx->pc = 0x12ef5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_12ef60:
    // 0x12ef60: 0x8e04003c
    ctx->pc = 0x12ef60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_12ef64:
    // 0x12ef64: 0x64182a
    ctx->pc = 0x12ef64u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
label_12ef68:
    // 0x12ef68: 0x1460ffe7
label_12ef6c:
    if (ctx->pc == 0x12EF6Cu) {
        ctx->pc = 0x12EF6Cu;
        SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->pc = 0x12EF70u;
        goto label_12ef70;
    }
    ctx->pc = 0x12EF68u;
    {
        const bool branch_taken_0x12ef68 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x12EF6Cu;
        SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        if (branch_taken_0x12ef68) {
            ctx->pc = 0x12EF08u;
            goto label_12ef08;
        }
    }
    ctx->pc = 0x12EF70u;
label_12ef70:
    // 0x12ef70: 0x260102d
    ctx->pc = 0x12ef70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12ef74:
    // 0x12ef74: 0xdfb00000
    ctx->pc = 0x12ef74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12ef78:
    // 0x12ef78: 0xdfb10008
    ctx->pc = 0x12ef78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_12ef7c:
    // 0x12ef7c: 0xdfb20010
    ctx->pc = 0x12ef7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12ef80:
    // 0x12ef80: 0xdfb30018
    ctx->pc = 0x12ef80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_12ef84:
    // 0x12ef84: 0xdfbf0020
    ctx->pc = 0x12ef84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12ef88:
    // 0x12ef88: 0x3e00008
label_12ef8c:
    if (ctx->pc == 0x12EF8Cu) {
        ctx->pc = 0x12EF8Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x12EF90u;
        goto label_fallthrough_0x12ef88;
    }
    ctx->pc = 0x12EF88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EF8Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12EEE0u: goto label_12eee0;
            case 0x12EEE4u: goto label_12eee4;
            case 0x12EEE8u: goto label_12eee8;
            case 0x12EEECu: goto label_12eeec;
            case 0x12EEF0u: goto label_12eef0;
            case 0x12EEF4u: goto label_12eef4;
            case 0x12EEF8u: goto label_12eef8;
            case 0x12EEFCu: goto label_12eefc;
            case 0x12EF00u: goto label_12ef00;
            case 0x12EF04u: goto label_12ef04;
            case 0x12EF08u: goto label_12ef08;
            case 0x12EF0Cu: goto label_12ef0c;
            case 0x12EF10u: goto label_12ef10;
            case 0x12EF14u: goto label_12ef14;
            case 0x12EF18u: goto label_12ef18;
            case 0x12EF1Cu: goto label_12ef1c;
            case 0x12EF20u: goto label_12ef20;
            case 0x12EF24u: goto label_12ef24;
            case 0x12EF28u: goto label_12ef28;
            case 0x12EF2Cu: goto label_12ef2c;
            case 0x12EF30u: goto label_12ef30;
            case 0x12EF34u: goto label_12ef34;
            case 0x12EF38u: goto label_12ef38;
            case 0x12EF3Cu: goto label_12ef3c;
            case 0x12EF40u: goto label_12ef40;
            case 0x12EF44u: goto label_12ef44;
            case 0x12EF48u: goto label_12ef48;
            case 0x12EF4Cu: goto label_12ef4c;
            case 0x12EF50u: goto label_12ef50;
            case 0x12EF54u: goto label_12ef54;
            case 0x12EF58u: goto label_12ef58;
            case 0x12EF5Cu: goto label_12ef5c;
            case 0x12EF60u: goto label_12ef60;
            case 0x12EF64u: goto label_12ef64;
            case 0x12EF68u: goto label_12ef68;
            case 0x12EF6Cu: goto label_12ef6c;
            case 0x12EF70u: goto label_12ef70;
            case 0x12EF74u: goto label_12ef74;
            case 0x12EF78u: goto label_12ef78;
            case 0x12EF7Cu: goto label_12ef7c;
            case 0x12EF80u: goto label_12ef80;
            case 0x12EF84u: goto label_12ef84;
            case 0x12EF88u: goto label_12ef88;
            case 0x12EF8Cu: goto label_12ef8c;
            default: break;
        }
        return;
    }
label_fallthrough_0x12ef88:
    ctx->pc = 0x12EF90u;
}
