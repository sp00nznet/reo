#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C8620
// Address: 0x1c8620 - 0x1c8660
void sub_001C8620_0x1c8620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c8620u;

    // 0x1c8620: 0x27bdfff0
    ctx->pc = 0x1c8620u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8624: 0x24020003
    ctx->pc = 0x1c8624u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c8628: 0xffbf0000
    ctx->pc = 0x1c8628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c862c: 0x8c830000
    ctx->pc = 0x1c862cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c8630: 0x10620003
    ctx->pc = 0x1C8630u;
    {
        const bool branch_taken_0x1c8630 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C8634u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c8630) {
            ctx->pc = 0x1C8640u;
            goto label_1c8640;
        }
    }
    ctx->pc = 0x1C8638u;
    // 0x1c8638: 0x10000006
    ctx->pc = 0x1C8638u;
    {
        const bool branch_taken_0x1c8638 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C863Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1c8638) {
            ctx->pc = 0x1C8654u;
            goto label_1c8654;
        }
    }
    ctx->pc = 0x1C8640u;
label_1c8640:
    // 0x1c8640: 0x8cc5000c
    ctx->pc = 0x1c8640u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1c8644: 0xc071b44
    ctx->pc = 0x1C8644u;
    SET_GPR_U32(ctx, 31, 0x1C864Cu);
    ctx->pc = 0x1C8648u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    ctx->pc = 0x1C6D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6D10_0x1c6d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C864Cu; }
    }
    if (ctx->pc != 0x1C864Cu) { return; }
    ctx->pc = 0x1C864Cu;
    // 0x1c864c: 0x24020001
    ctx->pc = 0x1c864cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8650: 0xdfbf0000
    ctx->pc = 0x1c8650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c8654:
    // 0x1c8654: 0x3e00008
    ctx->pc = 0x1C8654u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8658u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C8640u: goto label_1c8640;
            case 0x1C8654u: goto label_1c8654;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C865Cu;
    // 0x1c865c: 0x0
    ctx->pc = 0x1c865cu;
    // NOP
}
