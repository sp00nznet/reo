#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00164540
// Address: 0x164540 - 0x164580
void sub_00164540_0x164540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x164540u;

    // 0x164540: 0x27bdfff0
    ctx->pc = 0x164540u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x164544: 0x10800004
    ctx->pc = 0x164544u;
    {
        const bool branch_taken_0x164544 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x164548u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x164544) {
            ctx->pc = 0x164558u;
            goto label_164558;
        }
    }
    ctx->pc = 0x16454Cu;
    // 0x16454c: 0xdfbf0000
    ctx->pc = 0x16454cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164550: 0x804c386
    ctx->pc = 0x164550u;
    ctx->pc = 0x164554u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x130E18u;
    sub_00130E18_0x130e18(rdram, ctx, runtime); return;
    ctx->pc = 0x164558u;
label_164558:
    // 0x164558: 0xdfbf0000
    ctx->pc = 0x164558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16455c: 0x3e00008
    ctx->pc = 0x16455Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164560u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x164558u: goto label_164558;
            default: break;
        }
        return;
    }
    ctx->pc = 0x164564u;
    // 0x164564: 0x0
    ctx->pc = 0x164564u;
    // NOP
    // 0x164568: 0x27bdfff0
    ctx->pc = 0x164568u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16456c: 0xffbf0000
    ctx->pc = 0x16456cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x164570: 0xdfbf0000
    ctx->pc = 0x164570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164574: 0x804c37e
    ctx->pc = 0x164574u;
    ctx->pc = 0x164578u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x130DF8u;
    entry_130df8_0x130e18(rdram, ctx, runtime); return;
    ctx->pc = 0x16457Cu;
    // 0x16457c: 0x0
    ctx->pc = 0x16457cu;
    // NOP
}
