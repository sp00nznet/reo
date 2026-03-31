#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00172FF8
// Address: 0x172ff8 - 0x1730b0
void sub_00172FF8_0x172ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x172ff8u;

label_172ff8:
    // 0x172ff8: 0x27bdffe0
    ctx->pc = 0x172ff8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_172ffc:
    // 0x172ffc: 0xffb00000
    ctx->pc = 0x172ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_173000:
    // 0x173000: 0xffb10008
    ctx->pc = 0x173000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_173004:
    // 0x173004: 0x80882d
    ctx->pc = 0x173004u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_173008:
    // 0x173008: 0xffb20010
    ctx->pc = 0x173008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_17300c:
    // 0x17300c: 0xffbf0018
    ctx->pc = 0x17300cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_173010:
    // 0x173010: 0x8e221b38
    ctx->pc = 0x173010u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 6968)));
label_173014:
    // 0x173014: 0x280c0
    ctx->pc = 0x173014u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 2), 3));
label_173018:
    // 0x173018: 0x2028023
    ctx->pc = 0x173018u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_17301c:
    // 0x17301c: 0x108080
    ctx->pc = 0x17301cu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 2));
label_173020:
    // 0x173020: 0x2028021
    ctx->pc = 0x173020u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_173024:
    // 0x173024: 0x108080
    ctx->pc = 0x173024u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 2));
label_173028:
    // 0x173028: 0x2308021
    ctx->pc = 0x173028u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_17302c:
    // 0x17302c: 0x26101150
    ctx->pc = 0x17302cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4432));
label_173030:
    // 0x173030: 0x8e040004
    ctx->pc = 0x173030u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_173034:
    // 0x173034: 0x8c830000
    ctx->pc = 0x173034u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_173038:
    // 0x173038: 0x8c620024
    ctx->pc = 0x173038u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_17303c:
    // 0x17303c: 0x40f809
label_173040:
    if (ctx->pc == 0x173040u) {
        ctx->pc = 0x173040u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x173044u;
        goto label_173044;
    }
    ctx->pc = 0x17303Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x173044u);
        ctx->pc = 0x173040u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172FF8u: goto label_172ff8;
            case 0x172FFCu: goto label_172ffc;
            case 0x173000u: goto label_173000;
            case 0x173004u: goto label_173004;
            case 0x173008u: goto label_173008;
            case 0x17300Cu: goto label_17300c;
            case 0x173010u: goto label_173010;
            case 0x173014u: goto label_173014;
            case 0x173018u: goto label_173018;
            case 0x17301Cu: goto label_17301c;
            case 0x173020u: goto label_173020;
            case 0x173024u: goto label_173024;
            case 0x173028u: goto label_173028;
            case 0x17302Cu: goto label_17302c;
            case 0x173030u: goto label_173030;
            case 0x173034u: goto label_173034;
            case 0x173038u: goto label_173038;
            case 0x17303Cu: goto label_17303c;
            case 0x173040u: goto label_173040;
            case 0x173044u: goto label_173044;
            case 0x173048u: goto label_173048;
            case 0x17304Cu: goto label_17304c;
            case 0x173050u: goto label_173050;
            case 0x173054u: goto label_173054;
            case 0x173058u: goto label_173058;
            case 0x17305Cu: goto label_17305c;
            case 0x173060u: goto label_173060;
            case 0x173064u: goto label_173064;
            case 0x173068u: goto label_173068;
            case 0x17306Cu: goto label_17306c;
            case 0x173070u: goto label_173070;
            case 0x173074u: goto label_173074;
            case 0x173078u: goto label_173078;
            case 0x17307Cu: goto label_17307c;
            case 0x173080u: goto label_173080;
            case 0x173084u: goto label_173084;
            case 0x173088u: goto label_173088;
            case 0x17308Cu: goto label_17308c;
            case 0x173090u: goto label_173090;
            case 0x173094u: goto label_173094;
            case 0x173098u: goto label_173098;
            case 0x17309Cu: goto label_17309c;
            case 0x1730A0u: goto label_1730a0;
            case 0x1730A4u: goto label_1730a4;
            case 0x1730A8u: goto label_1730a8;
            case 0x1730ACu: goto label_1730ac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x173044u; }
            if (ctx->pc != 0x173044u) { return; }
        }
    }
    ctx->pc = 0x173044u;
label_173044:
    // 0x173044: 0x220202d
    ctx->pc = 0x173044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_173048:
    // 0x173048: 0x8e06000c
    ctx->pc = 0x173048u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_17304c:
    // 0x17304c: 0x40902d
    ctx->pc = 0x17304cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173050:
    // 0x173050: 0x24030064
    ctx->pc = 0x173050u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 100));
label_173054:
    // 0x173054: 0x24050046
    ctx->pc = 0x173054u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 70));
label_173058:
    // 0x173058: 0x61080
    ctx->pc = 0x173058u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
label_17305c:
    // 0x17305c: 0x50600001
label_173060:
    if (ctx->pc == 0x173060u) {
        ctx->pc = 0x173060u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x173064u;
        goto label_173064;
    }
    ctx->pc = 0x17305Cu;
    {
        const bool branch_taken_0x17305c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x17305c) {
            ctx->pc = 0x173060u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x173064u;
            goto label_173064;
        }
    }
    ctx->pc = 0x173064u;
label_173064:
    // 0x173064: 0x461021
    ctx->pc = 0x173064u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_173068:
    // 0x173068: 0x21100
    ctx->pc = 0x173068u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_17306c:
    // 0x17306c: 0x43001a
    ctx->pc = 0x17306cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_173070:
    // 0x173070: 0x1012
    ctx->pc = 0x173070u;
    SET_GPR_U32(ctx, 2, ctx->lo);
label_173074:
    // 0x173074: 0x242102a
    ctx->pc = 0x173074u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
label_173078:
    // 0x173078: 0x50400007
label_17307c:
    if (ctx->pc == 0x17307Cu) {
        ctx->pc = 0x17307Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x173080u;
        goto label_173080;
    }
    ctx->pc = 0x173078u;
    {
        const bool branch_taken_0x173078 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x173078) {
            ctx->pc = 0x17307Cu;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x173098u;
            goto label_173098;
        }
    }
    ctx->pc = 0x173080u;
label_173080:
    // 0x173080: 0xc05d58a
label_173084:
    if (ctx->pc == 0x173084u) {
        ctx->pc = 0x173088u;
        goto label_173088;
    }
    ctx->pc = 0x173080u;
    SET_GPR_U32(ctx, 31, 0x173088u);
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173088u; }
    }
    if (ctx->pc != 0x173088u) { return; }
    ctx->pc = 0x173088u;
label_173088:
    // 0x173088: 0x242182a
    ctx->pc = 0x173088u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
label_17308c:
    // 0x17308c: 0x14600002
label_173090:
    if (ctx->pc == 0x173090u) {
        ctx->pc = 0x173090u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173094u;
        goto label_173094;
    }
    ctx->pc = 0x17308Cu;
    {
        const bool branch_taken_0x17308c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x173090u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17308c) {
            ctx->pc = 0x173098u;
            goto label_173098;
        }
    }
    ctx->pc = 0x173094u;
label_173094:
    // 0x173094: 0x24020001
    ctx->pc = 0x173094u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_173098:
    // 0x173098: 0xdfb00000
    ctx->pc = 0x173098u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17309c:
    // 0x17309c: 0xdfb10008
    ctx->pc = 0x17309cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1730a0:
    // 0x1730a0: 0xdfb20010
    ctx->pc = 0x1730a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1730a4:
    // 0x1730a4: 0xdfbf0018
    ctx->pc = 0x1730a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1730a8:
    // 0x1730a8: 0x3e00008
label_1730ac:
    if (ctx->pc == 0x1730ACu) {
        ctx->pc = 0x1730ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1730B0u;
        goto label_fallthrough_0x1730a8;
    }
    ctx->pc = 0x1730A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1730ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172FF8u: goto label_172ff8;
            case 0x172FFCu: goto label_172ffc;
            case 0x173000u: goto label_173000;
            case 0x173004u: goto label_173004;
            case 0x173008u: goto label_173008;
            case 0x17300Cu: goto label_17300c;
            case 0x173010u: goto label_173010;
            case 0x173014u: goto label_173014;
            case 0x173018u: goto label_173018;
            case 0x17301Cu: goto label_17301c;
            case 0x173020u: goto label_173020;
            case 0x173024u: goto label_173024;
            case 0x173028u: goto label_173028;
            case 0x17302Cu: goto label_17302c;
            case 0x173030u: goto label_173030;
            case 0x173034u: goto label_173034;
            case 0x173038u: goto label_173038;
            case 0x17303Cu: goto label_17303c;
            case 0x173040u: goto label_173040;
            case 0x173044u: goto label_173044;
            case 0x173048u: goto label_173048;
            case 0x17304Cu: goto label_17304c;
            case 0x173050u: goto label_173050;
            case 0x173054u: goto label_173054;
            case 0x173058u: goto label_173058;
            case 0x17305Cu: goto label_17305c;
            case 0x173060u: goto label_173060;
            case 0x173064u: goto label_173064;
            case 0x173068u: goto label_173068;
            case 0x17306Cu: goto label_17306c;
            case 0x173070u: goto label_173070;
            case 0x173074u: goto label_173074;
            case 0x173078u: goto label_173078;
            case 0x17307Cu: goto label_17307c;
            case 0x173080u: goto label_173080;
            case 0x173084u: goto label_173084;
            case 0x173088u: goto label_173088;
            case 0x17308Cu: goto label_17308c;
            case 0x173090u: goto label_173090;
            case 0x173094u: goto label_173094;
            case 0x173098u: goto label_173098;
            case 0x17309Cu: goto label_17309c;
            case 0x1730A0u: goto label_1730a0;
            case 0x1730A4u: goto label_1730a4;
            case 0x1730A8u: goto label_1730a8;
            case 0x1730ACu: goto label_1730ac;
            default: break;
        }
        return;
    }
label_fallthrough_0x1730a8:
    ctx->pc = 0x1730B0u;
}
