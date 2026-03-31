#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CC550
// Address: 0x1cc550 - 0x1cc5b0
void sub_001CC550_0x1cc550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1cc550u;

    // 0x1cc550: 0x27bdfff0
    ctx->pc = 0x1cc550u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc554: 0x3c030034
    ctx->pc = 0x1cc554u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x1cc558: 0xffbf0000
    ctx->pc = 0x1cc558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cc55c: 0x24630a40
    ctx->pc = 0x1cc55cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2624));
    // 0x1cc560: 0x3c010034
    ctx->pc = 0x1cc560u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1cc564: 0xac230a20
    ctx->pc = 0x1cc564u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2592), GPR_U32(ctx, 3));
    // 0x1cc568: 0x3c010034
    ctx->pc = 0x1cc568u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1cc56c: 0x8c240a20
    ctx->pc = 0x1cc56cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 2592)));
    // 0x1cc570: 0x10800009
    ctx->pc = 0x1CC570u;
    {
        const bool branch_taken_0x1cc570 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cc570) {
            ctx->pc = 0x1CC598u;
            goto label_1cc598;
        }
    }
    ctx->pc = 0x1CC578u;
    // 0x1cc578: 0x8c830000
    ctx->pc = 0x1cc578u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cc57c: 0x10600006
    ctx->pc = 0x1CC57Cu;
    {
        const bool branch_taken_0x1cc57c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cc57c) {
            ctx->pc = 0x1CC598u;
            goto label_1cc598;
        }
    }
    ctx->pc = 0x1CC584u;
    // 0x1cc584: 0x8c830084
    ctx->pc = 0x1cc584u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x1cc588: 0x10600003
    ctx->pc = 0x1CC588u;
    {
        const bool branch_taken_0x1cc588 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cc588) {
            ctx->pc = 0x1CC598u;
            goto label_1cc598;
        }
    }
    ctx->pc = 0x1CC590u;
    // 0x1cc590: 0xc07316c
    ctx->pc = 0x1CC590u;
    SET_GPR_U32(ctx, 31, 0x1CC598u);
    ctx->pc = 0x1CC5B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC5B0_0x1cc5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC598u; }
    }
    if (ctx->pc != 0x1CC598u) { return; }
    ctx->pc = 0x1CC598u;
label_1cc598:
    // 0x1cc598: 0xdfbf0000
    ctx->pc = 0x1cc598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc59c: 0x3e00008
    ctx->pc = 0x1CC59Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC5A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CC598u: goto label_1cc598;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CC5A4u;
    // 0x1cc5a4: 0x0
    ctx->pc = 0x1cc5a4u;
    // NOP
    // 0x1cc5a8: 0x0
    ctx->pc = 0x1cc5a8u;
    // NOP
    // 0x1cc5ac: 0x0
    ctx->pc = 0x1cc5acu;
    // NOP
}
