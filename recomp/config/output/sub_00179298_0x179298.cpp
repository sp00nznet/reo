#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00179298
// Address: 0x179298 - 0x1792e0
void sub_00179298_0x179298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x179298u;

    // 0x179298: 0x27bdfff0
    ctx->pc = 0x179298u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17929c: 0xffb00000
    ctx->pc = 0x17929cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1792a0: 0xffbf0008
    ctx->pc = 0x1792a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1792a4: 0xc05e4b8
    ctx->pc = 0x1792A4u;
    SET_GPR_U32(ctx, 31, 0x1792ACu);
    ctx->pc = 0x1792A8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1792E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001792E0_0x1792e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1792ACu; }
    }
    if (ctx->pc != 0x1792ACu) { return; }
    ctx->pc = 0x1792ACu;
    // 0x1792ac: 0x10400007
    ctx->pc = 0x1792ACu;
    {
        const bool branch_taken_0x1792ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1792B0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 107));
        if (branch_taken_0x1792ac) {
            ctx->pc = 0x1792CCu;
            goto label_1792cc;
        }
    }
    ctx->pc = 0x1792B4u;
    // 0x1792b4: 0x8e02000c
    ctx->pc = 0x1792b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1792b8: 0x10440003
    ctx->pc = 0x1792B8u;
    {
        const bool branch_taken_0x1792b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x1792BCu;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 110));
        if (branch_taken_0x1792b8) {
            ctx->pc = 0x1792C8u;
            goto label_1792c8;
        }
    }
    ctx->pc = 0x1792C0u;
    // 0x1792c0: 0x14600002
    ctx->pc = 0x1792C0u;
    {
        const bool branch_taken_0x1792c0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1792C4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1792c0) {
            ctx->pc = 0x1792CCu;
            goto label_1792cc;
        }
    }
    ctx->pc = 0x1792C8u;
label_1792c8:
    // 0x1792c8: 0x24020001
    ctx->pc = 0x1792c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1792cc:
    // 0x1792cc: 0xdfb00000
    ctx->pc = 0x1792ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1792d0: 0xdfbf0008
    ctx->pc = 0x1792d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1792d4: 0x3e00008
    ctx->pc = 0x1792D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1792D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1792C8u: goto label_1792c8;
            case 0x1792CCu: goto label_1792cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1792DCu;
    // 0x1792dc: 0x0
    ctx->pc = 0x1792dcu;
    // NOP
}
