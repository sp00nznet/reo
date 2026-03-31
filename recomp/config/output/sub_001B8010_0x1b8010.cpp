#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B8010
// Address: 0x1b8010 - 0x1b80b0
void sub_001B8010_0x1b8010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b8010u;

label_1b8010:
    // 0x1b8010: 0x27bdffd0
    ctx->pc = 0x1b8010u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b8014:
    // 0x1b8014: 0xffbf0020
    ctx->pc = 0x1b8014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b8018:
    // 0x1b8018: 0x7fb10010
    ctx->pc = 0x1b8018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b801c:
    // 0x1b801c: 0x7fb00000
    ctx->pc = 0x1b801cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b8020:
    // 0x1b8020: 0x882d
    ctx->pc = 0x1b8020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8024:
    // 0x1b8024: 0x3c100031
    ctx->pc = 0x1b8024u;
    SET_GPR_U32(ctx, 16, ((uint32_t)49 << 16));
label_1b8028:
    // 0x1b8028: 0x26106350
    ctx->pc = 0x1b8028u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 25424));
label_1b802c:
    // 0x1b802c: 0x2a21000c
    ctx->pc = 0x1b802cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 17), 12));
label_1b8030:
    // 0x1b8030: 0x10200015
label_1b8034:
    if (ctx->pc == 0x1B8034u) {
        ctx->pc = 0x1B8038u;
        goto label_1b8038;
    }
    ctx->pc = 0x1B8030u;
    {
        const bool branch_taken_0x1b8030 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b8030) {
            ctx->pc = 0x1B8088u;
            goto label_1b8088;
        }
    }
    ctx->pc = 0x1B8038u;
label_1b8038:
    // 0x1b8038: 0x86030000
    ctx->pc = 0x1b8038u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1b803c:
    // 0x1b803c: 0x24020010
    ctx->pc = 0x1b803cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
label_1b8040:
    // 0x1b8040: 0x10620008
label_1b8044:
    if (ctx->pc == 0x1B8044u) {
        ctx->pc = 0x1B8044u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B8048u;
        goto label_1b8048;
    }
    ctx->pc = 0x1B8040u;
    {
        const bool branch_taken_0x1b8040 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1B8044u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1b8040) {
            ctx->pc = 0x1B8064u;
            goto label_1b8064;
        }
    }
    ctx->pc = 0x1B8048u;
label_1b8048:
    // 0x1b8048: 0x10620006
label_1b804c:
    if (ctx->pc == 0x1B804Cu) {
        ctx->pc = 0x1B8050u;
        goto label_1b8050;
    }
    ctx->pc = 0x1B8048u;
    {
        const bool branch_taken_0x1b8048 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1b8048) {
            ctx->pc = 0x1B8064u;
            goto label_1b8064;
        }
    }
    ctx->pc = 0x1B8050u;
label_1b8050:
    // 0x1b8050: 0x24020008
    ctx->pc = 0x1b8050u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
label_1b8054:
    // 0x1b8054: 0x10620003
label_1b8058:
    if (ctx->pc == 0x1B8058u) {
        ctx->pc = 0x1B805Cu;
        goto label_1b805c;
    }
    ctx->pc = 0x1B8054u;
    {
        const bool branch_taken_0x1b8054 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1b8054) {
            ctx->pc = 0x1B8064u;
            goto label_1b8064;
        }
    }
    ctx->pc = 0x1B805Cu;
label_1b805c:
    // 0x1b805c: 0x10000007
label_1b8060:
    if (ctx->pc == 0x1B8060u) {
        ctx->pc = 0x1B8060u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B8064u;
        goto label_1b8064;
    }
    ctx->pc = 0x1B805Cu;
    {
        const bool branch_taken_0x1b805c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B8060u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b805c) {
            ctx->pc = 0x1B807Cu;
            goto label_1b807c;
        }
    }
    ctx->pc = 0x1B8064u;
label_1b8064:
    // 0x1b8064: 0x8e020014
    ctx->pc = 0x1b8064u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1b8068:
    // 0x1b8068: 0x10400003
label_1b806c:
    if (ctx->pc == 0x1B806Cu) {
        ctx->pc = 0x1B8070u;
        goto label_1b8070;
    }
    ctx->pc = 0x1B8068u;
    {
        const bool branch_taken_0x1b8068 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b8068) {
            ctx->pc = 0x1B8078u;
            goto label_1b8078;
        }
    }
    ctx->pc = 0x1B8070u;
label_1b8070:
    // 0x1b8070: 0x40f809
label_1b8074:
    if (ctx->pc == 0x1B8074u) {
        ctx->pc = 0x1B8078u;
        goto label_1b8078;
    }
    ctx->pc = 0x1B8070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B8078u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B8010u: goto label_1b8010;
            case 0x1B8014u: goto label_1b8014;
            case 0x1B8018u: goto label_1b8018;
            case 0x1B801Cu: goto label_1b801c;
            case 0x1B8020u: goto label_1b8020;
            case 0x1B8024u: goto label_1b8024;
            case 0x1B8028u: goto label_1b8028;
            case 0x1B802Cu: goto label_1b802c;
            case 0x1B8030u: goto label_1b8030;
            case 0x1B8034u: goto label_1b8034;
            case 0x1B8038u: goto label_1b8038;
            case 0x1B803Cu: goto label_1b803c;
            case 0x1B8040u: goto label_1b8040;
            case 0x1B8044u: goto label_1b8044;
            case 0x1B8048u: goto label_1b8048;
            case 0x1B804Cu: goto label_1b804c;
            case 0x1B8050u: goto label_1b8050;
            case 0x1B8054u: goto label_1b8054;
            case 0x1B8058u: goto label_1b8058;
            case 0x1B805Cu: goto label_1b805c;
            case 0x1B8060u: goto label_1b8060;
            case 0x1B8064u: goto label_1b8064;
            case 0x1B8068u: goto label_1b8068;
            case 0x1B806Cu: goto label_1b806c;
            case 0x1B8070u: goto label_1b8070;
            case 0x1B8074u: goto label_1b8074;
            case 0x1B8078u: goto label_1b8078;
            case 0x1B807Cu: goto label_1b807c;
            case 0x1B8080u: goto label_1b8080;
            case 0x1B8084u: goto label_1b8084;
            case 0x1B8088u: goto label_1b8088;
            case 0x1B808Cu: goto label_1b808c;
            case 0x1B8090u: goto label_1b8090;
            case 0x1B8094u: goto label_1b8094;
            case 0x1B8098u: goto label_1b8098;
            case 0x1B809Cu: goto label_1b809c;
            case 0x1B80A0u: goto label_1b80a0;
            case 0x1B80A4u: goto label_1b80a4;
            case 0x1B80A8u: goto label_1b80a8;
            case 0x1B80ACu: goto label_1b80ac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B8078u; }
            if (ctx->pc != 0x1B8078u) { return; }
        }
    }
    ctx->pc = 0x1B8078u;
label_1b8078:
    // 0x1b8078: 0x200202d
    ctx->pc = 0x1b8078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b807c:
    // 0x1b807c: 0x282d
    ctx->pc = 0x1b807cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8080:
    // 0x1b8080: 0xc041f1a
label_1b8084:
    if (ctx->pc == 0x1B8084u) {
        ctx->pc = 0x1B8084u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x1B8088u;
        goto label_1b8088;
    }
    ctx->pc = 0x1B8080u;
    SET_GPR_U32(ctx, 31, 0x1B8088u);
    ctx->pc = 0x1B8084u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8088u; }
    }
    if (ctx->pc != 0x1B8088u) { return; }
    ctx->pc = 0x1B8088u;
label_1b8088:
    // 0x1b8088: 0x26310001
    ctx->pc = 0x1b8088u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1b808c:
    // 0x1b808c: 0x2a230010
    ctx->pc = 0x1b808cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), 16));
label_1b8090:
    // 0x1b8090: 0x1460ffe6
label_1b8094:
    if (ctx->pc == 0x1B8094u) {
        ctx->pc = 0x1B8094u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x1B8098u;
        goto label_1b8098;
    }
    ctx->pc = 0x1B8090u;
    {
        const bool branch_taken_0x1b8090 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B8094u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 32));
        if (branch_taken_0x1b8090) {
            ctx->pc = 0x1B802Cu;
            goto label_1b802c;
        }
    }
    ctx->pc = 0x1B8098u;
label_1b8098:
    // 0x1b8098: 0xdfbf0020
    ctx->pc = 0x1b8098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b809c:
    // 0x1b809c: 0x7bb10010
    ctx->pc = 0x1b809cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b80a0:
    // 0x1b80a0: 0x7bb00000
    ctx->pc = 0x1b80a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b80a4:
    // 0x1b80a4: 0x3e00008
label_1b80a8:
    if (ctx->pc == 0x1B80A8u) {
        ctx->pc = 0x1B80A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1B80ACu;
        goto label_1b80ac;
    }
    ctx->pc = 0x1B80A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B80A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B8010u: goto label_1b8010;
            case 0x1B8014u: goto label_1b8014;
            case 0x1B8018u: goto label_1b8018;
            case 0x1B801Cu: goto label_1b801c;
            case 0x1B8020u: goto label_1b8020;
            case 0x1B8024u: goto label_1b8024;
            case 0x1B8028u: goto label_1b8028;
            case 0x1B802Cu: goto label_1b802c;
            case 0x1B8030u: goto label_1b8030;
            case 0x1B8034u: goto label_1b8034;
            case 0x1B8038u: goto label_1b8038;
            case 0x1B803Cu: goto label_1b803c;
            case 0x1B8040u: goto label_1b8040;
            case 0x1B8044u: goto label_1b8044;
            case 0x1B8048u: goto label_1b8048;
            case 0x1B804Cu: goto label_1b804c;
            case 0x1B8050u: goto label_1b8050;
            case 0x1B8054u: goto label_1b8054;
            case 0x1B8058u: goto label_1b8058;
            case 0x1B805Cu: goto label_1b805c;
            case 0x1B8060u: goto label_1b8060;
            case 0x1B8064u: goto label_1b8064;
            case 0x1B8068u: goto label_1b8068;
            case 0x1B806Cu: goto label_1b806c;
            case 0x1B8070u: goto label_1b8070;
            case 0x1B8074u: goto label_1b8074;
            case 0x1B8078u: goto label_1b8078;
            case 0x1B807Cu: goto label_1b807c;
            case 0x1B8080u: goto label_1b8080;
            case 0x1B8084u: goto label_1b8084;
            case 0x1B8088u: goto label_1b8088;
            case 0x1B808Cu: goto label_1b808c;
            case 0x1B8090u: goto label_1b8090;
            case 0x1B8094u: goto label_1b8094;
            case 0x1B8098u: goto label_1b8098;
            case 0x1B809Cu: goto label_1b809c;
            case 0x1B80A0u: goto label_1b80a0;
            case 0x1B80A4u: goto label_1b80a4;
            case 0x1B80A8u: goto label_1b80a8;
            case 0x1B80ACu: goto label_1b80ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B80ACu;
label_1b80ac:
    // 0x1b80ac: 0x0
    ctx->pc = 0x1b80acu;
    // NOP
}
