#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00158030
// Address: 0x158030 - 0x1580c0
void sub_00158030_0x158030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x158030u;

label_158030:
    // 0x158030: 0x27bdffe0
    ctx->pc = 0x158030u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_158034:
    // 0x158034: 0xffb00000
    ctx->pc = 0x158034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_158038:
    // 0x158038: 0x80802d
    ctx->pc = 0x158038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15803c:
    // 0x15803c: 0xffb10008
    ctx->pc = 0x15803cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_158040:
    // 0x158040: 0xffbf0010
    ctx->pc = 0x158040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_158044:
    // 0x158044: 0xc056008
label_158048:
    if (ctx->pc == 0x158048u) {
        ctx->pc = 0x158048u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15804Cu;
        goto label_15804c;
    }
    ctx->pc = 0x158044u;
    SET_GPR_U32(ctx, 31, 0x15804Cu);
    ctx->pc = 0x158048u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x158020u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00158020_0x158020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15804Cu; }
    }
    if (ctx->pc != 0x15804Cu) { return; }
    ctx->pc = 0x15804Cu;
label_15804c:
    // 0x15804c: 0x3c040024
    ctx->pc = 0x15804cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_158050:
    // 0x158050: 0x3c030026
    ctx->pc = 0x158050u;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
label_158054:
    // 0x158054: 0x9086e5a8
    ctx->pc = 0x158054u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294960552)));
label_158058:
    // 0x158058: 0x24634c60
    ctx->pc = 0x158058u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 19552));
label_15805c:
    // 0x15805c: 0x24050004
    ctx->pc = 0x15805cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
label_158060:
    // 0x158060: 0xac620000
    ctx->pc = 0x158060u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_158064:
    // 0x158064: 0x10c50008
label_158068:
    if (ctx->pc == 0x158068u) {
        ctx->pc = 0x158068u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15806Cu;
        goto label_15806c;
    }
    ctx->pc = 0x158064u;
    {
        const bool branch_taken_0x158064 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 5));
        ctx->pc = 0x158068u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x158064) {
            ctx->pc = 0x158088u;
            goto label_158088;
        }
    }
    ctx->pc = 0x15806Cu;
label_15806c:
    // 0x15806c: 0x0
    ctx->pc = 0x15806cu;
    // NOP
label_158070:
    // 0x158070: 0x2401ffff
    ctx->pc = 0x158070u;
    SET_GPR_S32(ctx, 1, ADD32(GPR_U32(ctx, 0), 4294967295));
label_158074:
    // 0x158074: 0x20f809
label_158078:
    if (ctx->pc == 0x158078u) {
        ctx->pc = 0x15807Cu;
        goto label_15807c;
    }
    ctx->pc = 0x158074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 31, 0x15807Cu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x158030u: goto label_158030;
            case 0x158034u: goto label_158034;
            case 0x158038u: goto label_158038;
            case 0x15803Cu: goto label_15803c;
            case 0x158040u: goto label_158040;
            case 0x158044u: goto label_158044;
            case 0x158048u: goto label_158048;
            case 0x15804Cu: goto label_15804c;
            case 0x158050u: goto label_158050;
            case 0x158054u: goto label_158054;
            case 0x158058u: goto label_158058;
            case 0x15805Cu: goto label_15805c;
            case 0x158060u: goto label_158060;
            case 0x158064u: goto label_158064;
            case 0x158068u: goto label_158068;
            case 0x15806Cu: goto label_15806c;
            case 0x158070u: goto label_158070;
            case 0x158074u: goto label_158074;
            case 0x158078u: goto label_158078;
            case 0x15807Cu: goto label_15807c;
            case 0x158080u: goto label_158080;
            case 0x158084u: goto label_158084;
            case 0x158088u: goto label_158088;
            case 0x15808Cu: goto label_15808c;
            case 0x158090u: goto label_158090;
            case 0x158094u: goto label_158094;
            case 0x158098u: goto label_158098;
            case 0x15809Cu: goto label_15809c;
            case 0x1580A0u: goto label_1580a0;
            case 0x1580A4u: goto label_1580a4;
            case 0x1580A8u: goto label_1580a8;
            case 0x1580ACu: goto label_1580ac;
            case 0x1580B0u: goto label_1580b0;
            case 0x1580B4u: goto label_1580b4;
            case 0x1580B8u: goto label_1580b8;
            case 0x1580BCu: goto label_1580bc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15807Cu; }
            if (ctx->pc != 0x15807Cu) { return; }
        }
    }
    ctx->pc = 0x15807Cu;
label_15807c:
    // 0x15807c: 0x1000fffc
label_158080:
    if (ctx->pc == 0x158080u) {
        ctx->pc = 0x158084u;
        goto label_158084;
    }
    ctx->pc = 0x15807Cu;
    {
        const bool branch_taken_0x15807c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x15807c) {
            ctx->pc = 0x158070u;
            goto label_158070;
        }
    }
    ctx->pc = 0x158084u;
label_158084:
    // 0x158084: 0x0
    ctx->pc = 0x158084u;
    // NOP
label_158088:
    // 0x158088: 0xc056030
label_15808c:
    if (ctx->pc == 0x15808Cu) {
        ctx->pc = 0x15808Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x158090u;
        goto label_158090;
    }
    ctx->pc = 0x158088u;
    SET_GPR_U32(ctx, 31, 0x158090u);
    ctx->pc = 0x15808Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1580C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001580C0_0x1580c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158090u; }
    }
    if (ctx->pc != 0x158090u) { return; }
    ctx->pc = 0x158090u;
label_158090:
    // 0x158090: 0x54400007
label_158094:
    if (ctx->pc == 0x158094u) {
        ctx->pc = 0x158094u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x158098u;
        goto label_158098;
    }
    ctx->pc = 0x158090u;
    {
        const bool branch_taken_0x158090 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x158090) {
            ctx->pc = 0x158094u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x1580B0u;
            goto label_1580b0;
        }
    }
    ctx->pc = 0x158098u;
label_158098:
    // 0x158098: 0xc0558e6
label_15809c:
    if (ctx->pc == 0x15809Cu) {
        ctx->pc = 0x1580A0u;
        goto label_1580a0;
    }
    ctx->pc = 0x158098u;
    SET_GPR_U32(ctx, 31, 0x1580A0u);
    ctx->pc = 0x156398u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00156398_0x156398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1580A0u; }
    }
    if (ctx->pc != 0x1580A0u) { return; }
    ctx->pc = 0x1580A0u;
label_1580a0:
    // 0x1580a0: 0xc055f70
label_1580a4:
    if (ctx->pc == 0x1580A4u) {
        ctx->pc = 0x1580A8u;
        goto label_1580a8;
    }
    ctx->pc = 0x1580A0u;
    SET_GPR_U32(ctx, 31, 0x1580A8u);
    ctx->pc = 0x157DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00157DC0_0x157dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1580A8u; }
    }
    if (ctx->pc != 0x1580A8u) { return; }
    ctx->pc = 0x1580A8u;
label_1580a8:
    // 0x1580a8: 0x102d
    ctx->pc = 0x1580a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1580ac:
    // 0x1580ac: 0xdfb00000
    ctx->pc = 0x1580acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1580b0:
    // 0x1580b0: 0xdfb10008
    ctx->pc = 0x1580b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1580b4:
    // 0x1580b4: 0xdfbf0010
    ctx->pc = 0x1580b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1580b8:
    // 0x1580b8: 0x3e00008
label_1580bc:
    if (ctx->pc == 0x1580BCu) {
        ctx->pc = 0x1580BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1580C0u;
        goto label_fallthrough_0x1580b8;
    }
    ctx->pc = 0x1580B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1580BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x158030u: goto label_158030;
            case 0x158034u: goto label_158034;
            case 0x158038u: goto label_158038;
            case 0x15803Cu: goto label_15803c;
            case 0x158040u: goto label_158040;
            case 0x158044u: goto label_158044;
            case 0x158048u: goto label_158048;
            case 0x15804Cu: goto label_15804c;
            case 0x158050u: goto label_158050;
            case 0x158054u: goto label_158054;
            case 0x158058u: goto label_158058;
            case 0x15805Cu: goto label_15805c;
            case 0x158060u: goto label_158060;
            case 0x158064u: goto label_158064;
            case 0x158068u: goto label_158068;
            case 0x15806Cu: goto label_15806c;
            case 0x158070u: goto label_158070;
            case 0x158074u: goto label_158074;
            case 0x158078u: goto label_158078;
            case 0x15807Cu: goto label_15807c;
            case 0x158080u: goto label_158080;
            case 0x158084u: goto label_158084;
            case 0x158088u: goto label_158088;
            case 0x15808Cu: goto label_15808c;
            case 0x158090u: goto label_158090;
            case 0x158094u: goto label_158094;
            case 0x158098u: goto label_158098;
            case 0x15809Cu: goto label_15809c;
            case 0x1580A0u: goto label_1580a0;
            case 0x1580A4u: goto label_1580a4;
            case 0x1580A8u: goto label_1580a8;
            case 0x1580ACu: goto label_1580ac;
            case 0x1580B0u: goto label_1580b0;
            case 0x1580B4u: goto label_1580b4;
            case 0x1580B8u: goto label_1580b8;
            case 0x1580BCu: goto label_1580bc;
            default: break;
        }
        return;
    }
label_fallthrough_0x1580b8:
    ctx->pc = 0x1580C0u;
}
