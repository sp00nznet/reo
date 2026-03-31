#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00123020
// Address: 0x123020 - 0x1230b0
void sub_00123020_0x123020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x123020u;

label_123020:
    // 0x123020: 0x27bdffe0
    ctx->pc = 0x123020u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_123024:
    // 0x123024: 0xffb00000
    ctx->pc = 0x123024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_123028:
    // 0x123028: 0xa0802d
    ctx->pc = 0x123028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12302c:
    // 0x12302c: 0xffb10008
    ctx->pc = 0x12302cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_123030:
    // 0x123030: 0x80882d
    ctx->pc = 0x123030u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_123034:
    // 0x123034: 0xffbf0010
    ctx->pc = 0x123034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_123038:
    // 0x123038: 0x8e2200b0
    ctx->pc = 0x123038u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_12303c:
    // 0x12303c: 0x10400005
label_123040:
    if (ctx->pc == 0x123040u) {
        ctx->pc = 0x123040u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x123044u;
        goto label_123044;
    }
    ctx->pc = 0x12303Cu;
    {
        const bool branch_taken_0x12303c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x123040u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12303c) {
            ctx->pc = 0x123054u;
            goto label_123054;
        }
    }
    ctx->pc = 0x123044u;
label_123044:
    // 0x123044: 0x3c020021
    ctx->pc = 0x123044u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
label_123048:
    // 0x123048: 0x8c43b72c
    ctx->pc = 0x123048u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294948652)));
label_12304c:
    // 0x12304c: 0x60f809
label_123050:
    if (ctx->pc == 0x123050u) {
        ctx->pc = 0x123054u;
        goto label_123054;
    }
    ctx->pc = 0x12304Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x123054u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x123020u: goto label_123020;
            case 0x123024u: goto label_123024;
            case 0x123028u: goto label_123028;
            case 0x12302Cu: goto label_12302c;
            case 0x123030u: goto label_123030;
            case 0x123034u: goto label_123034;
            case 0x123038u: goto label_123038;
            case 0x12303Cu: goto label_12303c;
            case 0x123040u: goto label_123040;
            case 0x123044u: goto label_123044;
            case 0x123048u: goto label_123048;
            case 0x12304Cu: goto label_12304c;
            case 0x123050u: goto label_123050;
            case 0x123054u: goto label_123054;
            case 0x123058u: goto label_123058;
            case 0x12305Cu: goto label_12305c;
            case 0x123060u: goto label_123060;
            case 0x123064u: goto label_123064;
            case 0x123068u: goto label_123068;
            case 0x12306Cu: goto label_12306c;
            case 0x123070u: goto label_123070;
            case 0x123074u: goto label_123074;
            case 0x123078u: goto label_123078;
            case 0x12307Cu: goto label_12307c;
            case 0x123080u: goto label_123080;
            case 0x123084u: goto label_123084;
            case 0x123088u: goto label_123088;
            case 0x12308Cu: goto label_12308c;
            case 0x123090u: goto label_123090;
            case 0x123094u: goto label_123094;
            case 0x123098u: goto label_123098;
            case 0x12309Cu: goto label_12309c;
            case 0x1230A0u: goto label_1230a0;
            case 0x1230A4u: goto label_1230a4;
            case 0x1230A8u: goto label_1230a8;
            case 0x1230ACu: goto label_1230ac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x123054u; }
            if (ctx->pc != 0x123054u) { return; }
        }
    }
    ctx->pc = 0x123054u;
label_123054:
    // 0x123054: 0x24020060
    ctx->pc = 0x123054u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 96));
label_123058:
    // 0x123058: 0xae3000b4
    ctx->pc = 0x123058u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 16));
label_12305c:
    // 0x12305c: 0x202001a
    ctx->pc = 0x12305cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_123060:
    // 0x123060: 0x50400001
label_123064:
    if (ctx->pc == 0x123064u) {
        ctx->pc = 0x123064u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x123068u;
        goto label_123068;
    }
    ctx->pc = 0x123060u;
    {
        const bool branch_taken_0x123060 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x123060) {
            ctx->pc = 0x123064u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x123068u;
            goto label_123068;
        }
    }
    ctx->pc = 0x123068u;
label_123068:
    // 0x123068: 0xdfb00000
    ctx->pc = 0x123068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12306c:
    // 0x12306c: 0xdfbf0010
    ctx->pc = 0x12306cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_123070:
    // 0x123070: 0x1812
    ctx->pc = 0x123070u;
    SET_GPR_U32(ctx, 3, ctx->lo);
label_123074:
    // 0x123074: 0xae2300b8
    ctx->pc = 0x123074u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 3));
label_123078:
    // 0x123078: 0xdfb10008
    ctx->pc = 0x123078u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_12307c:
    // 0x12307c: 0x3e00008
label_123080:
    if (ctx->pc == 0x123080u) {
        ctx->pc = 0x123080u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x123084u;
        goto label_123084;
    }
    ctx->pc = 0x12307Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123080u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x123020u: goto label_123020;
            case 0x123024u: goto label_123024;
            case 0x123028u: goto label_123028;
            case 0x12302Cu: goto label_12302c;
            case 0x123030u: goto label_123030;
            case 0x123034u: goto label_123034;
            case 0x123038u: goto label_123038;
            case 0x12303Cu: goto label_12303c;
            case 0x123040u: goto label_123040;
            case 0x123044u: goto label_123044;
            case 0x123048u: goto label_123048;
            case 0x12304Cu: goto label_12304c;
            case 0x123050u: goto label_123050;
            case 0x123054u: goto label_123054;
            case 0x123058u: goto label_123058;
            case 0x12305Cu: goto label_12305c;
            case 0x123060u: goto label_123060;
            case 0x123064u: goto label_123064;
            case 0x123068u: goto label_123068;
            case 0x12306Cu: goto label_12306c;
            case 0x123070u: goto label_123070;
            case 0x123074u: goto label_123074;
            case 0x123078u: goto label_123078;
            case 0x12307Cu: goto label_12307c;
            case 0x123080u: goto label_123080;
            case 0x123084u: goto label_123084;
            case 0x123088u: goto label_123088;
            case 0x12308Cu: goto label_12308c;
            case 0x123090u: goto label_123090;
            case 0x123094u: goto label_123094;
            case 0x123098u: goto label_123098;
            case 0x12309Cu: goto label_12309c;
            case 0x1230A0u: goto label_1230a0;
            case 0x1230A4u: goto label_1230a4;
            case 0x1230A8u: goto label_1230a8;
            case 0x1230ACu: goto label_1230ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x123084u;
label_123084:
    // 0x123084: 0x0
    ctx->pc = 0x123084u;
    // NOP
label_123088:
    // 0x123088: 0x27bdfff0
    ctx->pc = 0x123088u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_12308c:
    // 0x12308c: 0x3c020021
    ctx->pc = 0x12308cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
label_123090:
    // 0x123090: 0xffbf0000
    ctx->pc = 0x123090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_123094:
    // 0x123094: 0x8c43b734
    ctx->pc = 0x123094u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_123098:
    // 0x123098: 0x60f809
label_12309c:
    if (ctx->pc == 0x12309Cu) {
        ctx->pc = 0x1230A0u;
        goto label_1230a0;
    }
    ctx->pc = 0x123098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1230A0u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x123020u: goto label_123020;
            case 0x123024u: goto label_123024;
            case 0x123028u: goto label_123028;
            case 0x12302Cu: goto label_12302c;
            case 0x123030u: goto label_123030;
            case 0x123034u: goto label_123034;
            case 0x123038u: goto label_123038;
            case 0x12303Cu: goto label_12303c;
            case 0x123040u: goto label_123040;
            case 0x123044u: goto label_123044;
            case 0x123048u: goto label_123048;
            case 0x12304Cu: goto label_12304c;
            case 0x123050u: goto label_123050;
            case 0x123054u: goto label_123054;
            case 0x123058u: goto label_123058;
            case 0x12305Cu: goto label_12305c;
            case 0x123060u: goto label_123060;
            case 0x123064u: goto label_123064;
            case 0x123068u: goto label_123068;
            case 0x12306Cu: goto label_12306c;
            case 0x123070u: goto label_123070;
            case 0x123074u: goto label_123074;
            case 0x123078u: goto label_123078;
            case 0x12307Cu: goto label_12307c;
            case 0x123080u: goto label_123080;
            case 0x123084u: goto label_123084;
            case 0x123088u: goto label_123088;
            case 0x12308Cu: goto label_12308c;
            case 0x123090u: goto label_123090;
            case 0x123094u: goto label_123094;
            case 0x123098u: goto label_123098;
            case 0x12309Cu: goto label_12309c;
            case 0x1230A0u: goto label_1230a0;
            case 0x1230A4u: goto label_1230a4;
            case 0x1230A8u: goto label_1230a8;
            case 0x1230ACu: goto label_1230ac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1230A0u; }
            if (ctx->pc != 0x1230A0u) { return; }
        }
    }
    ctx->pc = 0x1230A0u;
label_1230a0:
    // 0x1230a0: 0xdfbf0000
    ctx->pc = 0x1230a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1230a4:
    // 0x1230a4: 0x3e00008
label_1230a8:
    if (ctx->pc == 0x1230A8u) {
        ctx->pc = 0x1230A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1230ACu;
        goto label_1230ac;
    }
    ctx->pc = 0x1230A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1230A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x123020u: goto label_123020;
            case 0x123024u: goto label_123024;
            case 0x123028u: goto label_123028;
            case 0x12302Cu: goto label_12302c;
            case 0x123030u: goto label_123030;
            case 0x123034u: goto label_123034;
            case 0x123038u: goto label_123038;
            case 0x12303Cu: goto label_12303c;
            case 0x123040u: goto label_123040;
            case 0x123044u: goto label_123044;
            case 0x123048u: goto label_123048;
            case 0x12304Cu: goto label_12304c;
            case 0x123050u: goto label_123050;
            case 0x123054u: goto label_123054;
            case 0x123058u: goto label_123058;
            case 0x12305Cu: goto label_12305c;
            case 0x123060u: goto label_123060;
            case 0x123064u: goto label_123064;
            case 0x123068u: goto label_123068;
            case 0x12306Cu: goto label_12306c;
            case 0x123070u: goto label_123070;
            case 0x123074u: goto label_123074;
            case 0x123078u: goto label_123078;
            case 0x12307Cu: goto label_12307c;
            case 0x123080u: goto label_123080;
            case 0x123084u: goto label_123084;
            case 0x123088u: goto label_123088;
            case 0x12308Cu: goto label_12308c;
            case 0x123090u: goto label_123090;
            case 0x123094u: goto label_123094;
            case 0x123098u: goto label_123098;
            case 0x12309Cu: goto label_12309c;
            case 0x1230A0u: goto label_1230a0;
            case 0x1230A4u: goto label_1230a4;
            case 0x1230A8u: goto label_1230a8;
            case 0x1230ACu: goto label_1230ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1230ACu;
label_1230ac:
    // 0x1230ac: 0x0
    ctx->pc = 0x1230acu;
    // NOP
}
