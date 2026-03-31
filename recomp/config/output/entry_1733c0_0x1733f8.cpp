#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1733c0
// Address: 0x1733c0 - 0x1733f8
void entry_1733c0_0x1733f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1733c0u;

    // 0x1733c0: 0x27bdfff0
    ctx->pc = 0x1733c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1733c4: 0xffb00000
    ctx->pc = 0x1733c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1733c8: 0xffbf0008
    ctx->pc = 0x1733c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1733cc: 0xc05cf04
    ctx->pc = 0x1733CCu;
    SET_GPR_U32(ctx, 31, 0x1733D4u);
    ctx->pc = 0x1733D0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x173C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00173C10_0x173c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1733D4u; }
    }
    if (ctx->pc != 0x1733D4u) { return; }
    ctx->pc = 0x1733D4u;
    // 0x1733d4: 0x54400004
    ctx->pc = 0x1733D4u;
    {
        const bool branch_taken_0x1733d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1733d4) {
            ctx->pc = 0x1733D8u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x1733E8u;
            goto label_1733e8;
        }
    }
    ctx->pc = 0x1733DCu;
    // 0x1733dc: 0x24030006
    ctx->pc = 0x1733dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1733e0: 0xae03004c
    ctx->pc = 0x1733e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x1733e4: 0xdfb00000
    ctx->pc = 0x1733e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1733e8:
    // 0x1733e8: 0xdfbf0008
    ctx->pc = 0x1733e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1733ec: 0x3e00008
    ctx->pc = 0x1733ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1733F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1733E8u: goto label_1733e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1733F4u;
    // 0x1733f4: 0x0
    ctx->pc = 0x1733f4u;
    // NOP
}
