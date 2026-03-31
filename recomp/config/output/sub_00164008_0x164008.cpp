#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00164008
// Address: 0x164008 - 0x164038
void sub_00164008_0x164008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x164008u;

label_164008:
    // 0x164008: 0x27bdfff0
    ctx->pc = 0x164008u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_16400c:
    // 0x16400c: 0xffbf0000
    ctx->pc = 0x16400cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_164010:
    // 0x164010: 0xc05799e
label_164014:
    if (ctx->pc == 0x164014u) {
        ctx->pc = 0x164018u;
        goto label_164018;
    }
    ctx->pc = 0x164010u;
    SET_GPR_U32(ctx, 31, 0x164018u);
    ctx->pc = 0x15E678u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E678_0x15e678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164018u; }
    }
    if (ctx->pc != 0x164018u) { return; }
    ctx->pc = 0x164018u;
label_164018:
    // 0x164018: 0x8c430048
    ctx->pc = 0x164018u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_16401c:
    // 0x16401c: 0x10600003
label_164020:
    if (ctx->pc == 0x164020u) {
        ctx->pc = 0x164020u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 76)));
        ctx->pc = 0x164024u;
        goto label_164024;
    }
    ctx->pc = 0x16401Cu;
    {
        const bool branch_taken_0x16401c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x164020u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 76)));
        if (branch_taken_0x16401c) {
            ctx->pc = 0x16402Cu;
            goto label_16402c;
        }
    }
    ctx->pc = 0x164024u;
label_164024:
    // 0x164024: 0x60f809
label_164028:
    if (ctx->pc == 0x164028u) {
        ctx->pc = 0x16402Cu;
        goto label_16402c;
    }
    ctx->pc = 0x164024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16402Cu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x164008u: goto label_164008;
            case 0x16400Cu: goto label_16400c;
            case 0x164010u: goto label_164010;
            case 0x164014u: goto label_164014;
            case 0x164018u: goto label_164018;
            case 0x16401Cu: goto label_16401c;
            case 0x164020u: goto label_164020;
            case 0x164024u: goto label_164024;
            case 0x164028u: goto label_164028;
            case 0x16402Cu: goto label_16402c;
            case 0x164030u: goto label_164030;
            case 0x164034u: goto label_164034;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16402Cu; }
            if (ctx->pc != 0x16402Cu) { return; }
        }
    }
    ctx->pc = 0x16402Cu;
label_16402c:
    // 0x16402c: 0xdfbf0000
    ctx->pc = 0x16402cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_164030:
    // 0x164030: 0x3e00008
label_164034:
    if (ctx->pc == 0x164034u) {
        ctx->pc = 0x164034u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x164038u;
        goto label_fallthrough_0x164030;
    }
    ctx->pc = 0x164030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164034u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x164008u: goto label_164008;
            case 0x16400Cu: goto label_16400c;
            case 0x164010u: goto label_164010;
            case 0x164014u: goto label_164014;
            case 0x164018u: goto label_164018;
            case 0x16401Cu: goto label_16401c;
            case 0x164020u: goto label_164020;
            case 0x164024u: goto label_164024;
            case 0x164028u: goto label_164028;
            case 0x16402Cu: goto label_16402c;
            case 0x164030u: goto label_164030;
            case 0x164034u: goto label_164034;
            default: break;
        }
        return;
    }
label_fallthrough_0x164030:
    ctx->pc = 0x164038u;
}
