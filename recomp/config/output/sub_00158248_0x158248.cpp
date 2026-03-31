#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00158248
// Address: 0x158248 - 0x158280
void sub_00158248_0x158248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x158248u;

label_158248:
    // 0x158248: 0x27bdfff0
    ctx->pc = 0x158248u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_15824c:
    // 0x15824c: 0xa0102d
    ctx->pc = 0x15824cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_158250:
    // 0x158250: 0xffbf0000
    ctx->pc = 0x158250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_158254:
    // 0x158254: 0x10400006
label_158258:
    if (ctx->pc == 0x158258u) {
        ctx->pc = 0x158258u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x15825Cu;
        goto label_15825c;
    }
    ctx->pc = 0x158254u;
    {
        const bool branch_taken_0x158254 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x158258u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x158254) {
            ctx->pc = 0x158270u;
            goto label_158270;
        }
    }
    ctx->pc = 0x15825Cu;
label_15825c:
    // 0x15825c: 0x8c820000
    ctx->pc = 0x15825cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_158260:
    // 0x158260: 0x50400004
label_158264:
    if (ctx->pc == 0x158264u) {
        ctx->pc = 0x158264u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x158268u;
        goto label_158268;
    }
    ctx->pc = 0x158260u;
    {
        const bool branch_taken_0x158260 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x158260) {
            ctx->pc = 0x158264u;
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x158274u;
            goto label_158274;
        }
    }
    ctx->pc = 0x158268u;
label_158268:
    // 0x158268: 0x40f809
label_15826c:
    if (ctx->pc == 0x15826Cu) {
        ctx->pc = 0x15826Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x158270u;
        goto label_158270;
    }
    ctx->pc = 0x158268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x158270u);
        ctx->pc = 0x15826Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x158248u: goto label_158248;
            case 0x15824Cu: goto label_15824c;
            case 0x158250u: goto label_158250;
            case 0x158254u: goto label_158254;
            case 0x158258u: goto label_158258;
            case 0x15825Cu: goto label_15825c;
            case 0x158260u: goto label_158260;
            case 0x158264u: goto label_158264;
            case 0x158268u: goto label_158268;
            case 0x15826Cu: goto label_15826c;
            case 0x158270u: goto label_158270;
            case 0x158274u: goto label_158274;
            case 0x158278u: goto label_158278;
            case 0x15827Cu: goto label_15827c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x158270u; }
            if (ctx->pc != 0x158270u) { return; }
        }
    }
    ctx->pc = 0x158270u;
label_158270:
    // 0x158270: 0xdfbf0000
    ctx->pc = 0x158270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_158274:
    // 0x158274: 0x3e00008
label_158278:
    if (ctx->pc == 0x158278u) {
        ctx->pc = 0x158278u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x15827Cu;
        goto label_15827c;
    }
    ctx->pc = 0x158274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158278u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x158248u: goto label_158248;
            case 0x15824Cu: goto label_15824c;
            case 0x158250u: goto label_158250;
            case 0x158254u: goto label_158254;
            case 0x158258u: goto label_158258;
            case 0x15825Cu: goto label_15825c;
            case 0x158260u: goto label_158260;
            case 0x158264u: goto label_158264;
            case 0x158268u: goto label_158268;
            case 0x15826Cu: goto label_15826c;
            case 0x158270u: goto label_158270;
            case 0x158274u: goto label_158274;
            case 0x158278u: goto label_158278;
            case 0x15827Cu: goto label_15827c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15827Cu;
label_15827c:
    // 0x15827c: 0x0
    ctx->pc = 0x15827cu;
    // NOP
}
