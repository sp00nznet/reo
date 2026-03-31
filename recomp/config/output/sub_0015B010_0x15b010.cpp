#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015B010
// Address: 0x15b010 - 0x15b078
void sub_0015B010_0x15b010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15b010u;

label_15b010:
    // 0x15b010: 0x27bdffd0
    ctx->pc = 0x15b010u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_15b014:
    // 0x15b014: 0xffb00010
    ctx->pc = 0x15b014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_15b018:
    // 0x15b018: 0x80802d
    ctx->pc = 0x15b018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15b01c:
    // 0x15b01c: 0xffb10018
    ctx->pc = 0x15b01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_15b020:
    // 0x15b020: 0x2cb10001
    ctx->pc = 0x15b020u;
    SET_GPR_U32(ctx, 17, SLTU32(GPR_U32(ctx, 5), 1));
label_15b024:
    // 0x15b024: 0xffbf0020
    ctx->pc = 0x15b024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_15b028:
    // 0x15b028: 0x8e030000
    ctx->pc = 0x15b028u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15b02c:
    // 0x15b02c: 0x8c620018
    ctx->pc = 0x15b02cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_15b030:
    // 0x15b030: 0x40f809
label_15b034:
    if (ctx->pc == 0x15B034u) {
        ctx->pc = 0x15B034u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15B038u;
        goto label_15b038;
    }
    ctx->pc = 0x15B030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15B038u);
        ctx->pc = 0x15B034u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15B010u: goto label_15b010;
            case 0x15B014u: goto label_15b014;
            case 0x15B018u: goto label_15b018;
            case 0x15B01Cu: goto label_15b01c;
            case 0x15B020u: goto label_15b020;
            case 0x15B024u: goto label_15b024;
            case 0x15B028u: goto label_15b028;
            case 0x15B02Cu: goto label_15b02c;
            case 0x15B030u: goto label_15b030;
            case 0x15B034u: goto label_15b034;
            case 0x15B038u: goto label_15b038;
            case 0x15B03Cu: goto label_15b03c;
            case 0x15B040u: goto label_15b040;
            case 0x15B044u: goto label_15b044;
            case 0x15B048u: goto label_15b048;
            case 0x15B04Cu: goto label_15b04c;
            case 0x15B050u: goto label_15b050;
            case 0x15B054u: goto label_15b054;
            case 0x15B058u: goto label_15b058;
            case 0x15B05Cu: goto label_15b05c;
            case 0x15B060u: goto label_15b060;
            case 0x15B064u: goto label_15b064;
            case 0x15B068u: goto label_15b068;
            case 0x15B06Cu: goto label_15b06c;
            case 0x15B070u: goto label_15b070;
            case 0x15B074u: goto label_15b074;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15B038u; }
            if (ctx->pc != 0x15B038u) { return; }
        }
    }
    ctx->pc = 0x15B038u;
label_15b038:
    // 0x15b038: 0x8e030000
    ctx->pc = 0x15b038u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15b03c:
    // 0x15b03c: 0x200202d
    ctx->pc = 0x15b03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15b040:
    // 0x15b040: 0x220282d
    ctx->pc = 0x15b040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15b044:
    // 0x15b044: 0x8c620020
    ctx->pc = 0x15b044u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_15b048:
    // 0x15b048: 0x40f809
label_15b04c:
    if (ctx->pc == 0x15B04Cu) {
        ctx->pc = 0x15B04Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15B050u;
        goto label_15b050;
    }
    ctx->pc = 0x15B048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15B050u);
        ctx->pc = 0x15B04Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15B010u: goto label_15b010;
            case 0x15B014u: goto label_15b014;
            case 0x15B018u: goto label_15b018;
            case 0x15B01Cu: goto label_15b01c;
            case 0x15B020u: goto label_15b020;
            case 0x15B024u: goto label_15b024;
            case 0x15B028u: goto label_15b028;
            case 0x15B02Cu: goto label_15b02c;
            case 0x15B030u: goto label_15b030;
            case 0x15B034u: goto label_15b034;
            case 0x15B038u: goto label_15b038;
            case 0x15B03Cu: goto label_15b03c;
            case 0x15B040u: goto label_15b040;
            case 0x15B044u: goto label_15b044;
            case 0x15B048u: goto label_15b048;
            case 0x15B04Cu: goto label_15b04c;
            case 0x15B050u: goto label_15b050;
            case 0x15B054u: goto label_15b054;
            case 0x15B058u: goto label_15b058;
            case 0x15B05Cu: goto label_15b05c;
            case 0x15B060u: goto label_15b060;
            case 0x15B064u: goto label_15b064;
            case 0x15B068u: goto label_15b068;
            case 0x15B06Cu: goto label_15b06c;
            case 0x15B070u: goto label_15b070;
            case 0x15B074u: goto label_15b074;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15B050u; }
            if (ctx->pc != 0x15B050u) { return; }
        }
    }
    ctx->pc = 0x15B050u;
label_15b050:
    // 0x15b050: 0x8fa20004
    ctx->pc = 0x15b050u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_15b054:
    // 0x15b054: 0xdfb00010
    ctx->pc = 0x15b054u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15b058:
    // 0x15b058: 0xdfb10018
    ctx->pc = 0x15b058u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_15b05c:
    // 0x15b05c: 0xdfbf0020
    ctx->pc = 0x15b05cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15b060:
    // 0x15b060: 0x3e00008
label_15b064:
    if (ctx->pc == 0x15B064u) {
        ctx->pc = 0x15B064u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x15B068u;
        goto label_15b068;
    }
    ctx->pc = 0x15B060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B064u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15B010u: goto label_15b010;
            case 0x15B014u: goto label_15b014;
            case 0x15B018u: goto label_15b018;
            case 0x15B01Cu: goto label_15b01c;
            case 0x15B020u: goto label_15b020;
            case 0x15B024u: goto label_15b024;
            case 0x15B028u: goto label_15b028;
            case 0x15B02Cu: goto label_15b02c;
            case 0x15B030u: goto label_15b030;
            case 0x15B034u: goto label_15b034;
            case 0x15B038u: goto label_15b038;
            case 0x15B03Cu: goto label_15b03c;
            case 0x15B040u: goto label_15b040;
            case 0x15B044u: goto label_15b044;
            case 0x15B048u: goto label_15b048;
            case 0x15B04Cu: goto label_15b04c;
            case 0x15B050u: goto label_15b050;
            case 0x15B054u: goto label_15b054;
            case 0x15B058u: goto label_15b058;
            case 0x15B05Cu: goto label_15b05c;
            case 0x15B060u: goto label_15b060;
            case 0x15B064u: goto label_15b064;
            case 0x15B068u: goto label_15b068;
            case 0x15B06Cu: goto label_15b06c;
            case 0x15B070u: goto label_15b070;
            case 0x15B074u: goto label_15b074;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15B068u;
label_15b068:
    // 0x15b068: 0x3c020024
    ctx->pc = 0x15b068u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
label_15b06c:
    // 0x15b06c: 0x3e00008
label_15b070:
    if (ctx->pc == 0x15B070u) {
        ctx->pc = 0x15B070u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294960576));
        ctx->pc = 0x15B074u;
        goto label_15b074;
    }
    ctx->pc = 0x15B06Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B070u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294960576));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15B010u: goto label_15b010;
            case 0x15B014u: goto label_15b014;
            case 0x15B018u: goto label_15b018;
            case 0x15B01Cu: goto label_15b01c;
            case 0x15B020u: goto label_15b020;
            case 0x15B024u: goto label_15b024;
            case 0x15B028u: goto label_15b028;
            case 0x15B02Cu: goto label_15b02c;
            case 0x15B030u: goto label_15b030;
            case 0x15B034u: goto label_15b034;
            case 0x15B038u: goto label_15b038;
            case 0x15B03Cu: goto label_15b03c;
            case 0x15B040u: goto label_15b040;
            case 0x15B044u: goto label_15b044;
            case 0x15B048u: goto label_15b048;
            case 0x15B04Cu: goto label_15b04c;
            case 0x15B050u: goto label_15b050;
            case 0x15B054u: goto label_15b054;
            case 0x15B058u: goto label_15b058;
            case 0x15B05Cu: goto label_15b05c;
            case 0x15B060u: goto label_15b060;
            case 0x15B064u: goto label_15b064;
            case 0x15B068u: goto label_15b068;
            case 0x15B06Cu: goto label_15b06c;
            case 0x15B070u: goto label_15b070;
            case 0x15B074u: goto label_15b074;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15B074u;
label_15b074:
    // 0x15b074: 0x0
    ctx->pc = 0x15b074u;
    // NOP
}
