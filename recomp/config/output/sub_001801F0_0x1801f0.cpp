#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001801F0
// Address: 0x1801f0 - 0x180250
void sub_001801F0_0x1801f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1801f0u;

label_1801f0:
    // 0x1801f0: 0x27bdffd0
    ctx->pc = 0x1801f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_1801f4:
    // 0x1801f4: 0xffbf0020
    ctx->pc = 0x1801f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1801f8:
    // 0x1801f8: 0x7fb10010
    ctx->pc = 0x1801f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1801fc:
    // 0x1801fc: 0xa0882d
    ctx->pc = 0x1801fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_180200:
    // 0x180200: 0x7fb00000
    ctx->pc = 0x180200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_180204:
    // 0x180204: 0x91082b
    ctx->pc = 0x180204u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_180208:
    // 0x180208: 0x10200009
label_18020c:
    if (ctx->pc == 0x18020Cu) {
        ctx->pc = 0x18020Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x180210u;
        goto label_180210;
    }
    ctx->pc = 0x180208u;
    {
        const bool branch_taken_0x180208 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x18020Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x180208) {
            ctx->pc = 0x180230u;
            goto label_180230;
        }
    }
    ctx->pc = 0x180210u;
label_180210:
    // 0x180210: 0x8e020000
    ctx->pc = 0x180210u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_180214:
    // 0x180214: 0x40f809
label_180218:
    if (ctx->pc == 0x180218u) {
        ctx->pc = 0x18021Cu;
        goto label_18021c;
    }
    ctx->pc = 0x180214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18021Cu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1801F0u: goto label_1801f0;
            case 0x1801F4u: goto label_1801f4;
            case 0x1801F8u: goto label_1801f8;
            case 0x1801FCu: goto label_1801fc;
            case 0x180200u: goto label_180200;
            case 0x180204u: goto label_180204;
            case 0x180208u: goto label_180208;
            case 0x18020Cu: goto label_18020c;
            case 0x180210u: goto label_180210;
            case 0x180214u: goto label_180214;
            case 0x180218u: goto label_180218;
            case 0x18021Cu: goto label_18021c;
            case 0x180220u: goto label_180220;
            case 0x180224u: goto label_180224;
            case 0x180228u: goto label_180228;
            case 0x18022Cu: goto label_18022c;
            case 0x180230u: goto label_180230;
            case 0x180234u: goto label_180234;
            case 0x180238u: goto label_180238;
            case 0x18023Cu: goto label_18023c;
            case 0x180240u: goto label_180240;
            case 0x180244u: goto label_180244;
            case 0x180248u: goto label_180248;
            case 0x18024Cu: goto label_18024c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18021Cu; }
            if (ctx->pc != 0x18021Cu) { return; }
        }
    }
    ctx->pc = 0x18021Cu;
label_18021c:
    // 0x18021c: 0x26100004
    ctx->pc = 0x18021cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
label_180220:
    // 0x180220: 0x211182b
    ctx->pc = 0x180220u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_180224:
    // 0x180224: 0x0
    ctx->pc = 0x180224u;
    // NOP
label_180228:
    // 0x180228: 0x1460fff9
label_18022c:
    if (ctx->pc == 0x18022Cu) {
        ctx->pc = 0x180230u;
        goto label_180230;
    }
    ctx->pc = 0x180228u;
    {
        const bool branch_taken_0x180228 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x180228) {
            ctx->pc = 0x180210u;
            goto label_180210;
        }
    }
    ctx->pc = 0x180230u;
label_180230:
    // 0x180230: 0xdfbf0020
    ctx->pc = 0x180230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_180234:
    // 0x180234: 0x7bb10010
    ctx->pc = 0x180234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_180238:
    // 0x180238: 0x7bb00000
    ctx->pc = 0x180238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18023c:
    // 0x18023c: 0x3e00008
label_180240:
    if (ctx->pc == 0x180240u) {
        ctx->pc = 0x180240u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x180244u;
        goto label_180244;
    }
    ctx->pc = 0x18023Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180240u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1801F0u: goto label_1801f0;
            case 0x1801F4u: goto label_1801f4;
            case 0x1801F8u: goto label_1801f8;
            case 0x1801FCu: goto label_1801fc;
            case 0x180200u: goto label_180200;
            case 0x180204u: goto label_180204;
            case 0x180208u: goto label_180208;
            case 0x18020Cu: goto label_18020c;
            case 0x180210u: goto label_180210;
            case 0x180214u: goto label_180214;
            case 0x180218u: goto label_180218;
            case 0x18021Cu: goto label_18021c;
            case 0x180220u: goto label_180220;
            case 0x180224u: goto label_180224;
            case 0x180228u: goto label_180228;
            case 0x18022Cu: goto label_18022c;
            case 0x180230u: goto label_180230;
            case 0x180234u: goto label_180234;
            case 0x180238u: goto label_180238;
            case 0x18023Cu: goto label_18023c;
            case 0x180240u: goto label_180240;
            case 0x180244u: goto label_180244;
            case 0x180248u: goto label_180248;
            case 0x18024Cu: goto label_18024c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x180244u;
label_180244:
    // 0x180244: 0x0
    ctx->pc = 0x180244u;
    // NOP
label_180248:
    // 0x180248: 0x0
    ctx->pc = 0x180248u;
    // NOP
label_18024c:
    // 0x18024c: 0x0
    ctx->pc = 0x18024cu;
    // NOP
}
