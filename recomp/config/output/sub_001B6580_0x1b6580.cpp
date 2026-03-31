#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B6580
// Address: 0x1b6580 - 0x1b65b0
void sub_001B6580_0x1b6580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b6580u;

    // 0x1b6580: 0x27bdfff0
    ctx->pc = 0x1b6580u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b6584: 0x14a00005
    ctx->pc = 0x1B6584u;
    {
        const bool branch_taken_0x1b6584 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B6588u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x1b6584) {
            ctx->pc = 0x1B659Cu;
            goto label_1b659c;
        }
    }
    ctx->pc = 0x1B658Cu;
    // 0x1b658c: 0xc06d96c
    ctx->pc = 0x1B658Cu;
    SET_GPR_U32(ctx, 31, 0x1B6594u);
    ctx->pc = 0x1B65B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B65B0_0x1b65b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6594u; }
    }
    if (ctx->pc != 0x1B6594u) { return; }
    ctx->pc = 0x1B6594u;
    // 0x1b6594: 0x10000004
    ctx->pc = 0x1B6594u;
    {
        const bool branch_taken_0x1b6594 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B6598u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1b6594) {
            ctx->pc = 0x1B65A8u;
            goto label_1b65a8;
        }
    }
    ctx->pc = 0x1B659Cu;
label_1b659c:
    // 0x1b659c: 0xc06d99c
    ctx->pc = 0x1B659Cu;
    SET_GPR_U32(ctx, 31, 0x1B65A4u);
    ctx->pc = 0x1B6670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6670_0x1b6670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B65A4u; }
    }
    if (ctx->pc != 0x1B65A4u) { return; }
    ctx->pc = 0x1B65A4u;
    // 0x1b65a4: 0xdfbf0000
    ctx->pc = 0x1b65a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b65a8:
    // 0x1b65a8: 0x3e00008
    ctx->pc = 0x1B65A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B65ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B659Cu: goto label_1b659c;
            case 0x1B65A8u: goto label_1b65a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B65B0u;
}
