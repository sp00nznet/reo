#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_150670
// Address: 0x150670 - 0x1506c0
void entry_150670_0x1506c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x150670u;

    // 0x150670: 0x27bdfff0
    ctx->pc = 0x150670u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x150674: 0x80102d
    ctx->pc = 0x150674u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150678: 0xffb00000
    ctx->pc = 0x150678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15067c: 0xa0802d
    ctx->pc = 0x15067cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150680: 0xffbf0008
    ctx->pc = 0x150680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x150684: 0x14400006
    ctx->pc = 0x150684u;
    {
        const bool branch_taken_0x150684 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x150688u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4));
        if (branch_taken_0x150684) {
            ctx->pc = 0x1506A0u;
            goto label_1506a0;
        }
    }
    ctx->pc = 0x15068Cu;
    // 0x15068c: 0x3c040023
    ctx->pc = 0x15068cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x150690: 0xc0541b0
    ctx->pc = 0x150690u;
    SET_GPR_U32(ctx, 31, 0x150698u);
    ctx->pc = 0x150694u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957144));
    ctx->pc = 0x1506C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001506C0_0x1506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150698u; }
    }
    if (ctx->pc != 0x150698u) { return; }
    ctx->pc = 0x150698u;
    // 0x150698: 0x10000004
    ctx->pc = 0x150698u;
    {
        const bool branch_taken_0x150698 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15069Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x150698) {
            ctx->pc = 0x1506ACu;
            goto label_1506ac;
        }
    }
    ctx->pc = 0x1506A0u;
label_1506a0:
    // 0x1506a0: 0xc0541b0
    ctx->pc = 0x1506A0u;
    SET_GPR_U32(ctx, 31, 0x1506A8u);
    ctx->pc = 0x1506C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001506C0_0x1506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1506A8u; }
    }
    if (ctx->pc != 0x1506A8u) { return; }
    ctx->pc = 0x1506A8u;
    // 0x1506a8: 0x200102d
    ctx->pc = 0x1506a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1506ac:
    // 0x1506ac: 0xdfb00000
    ctx->pc = 0x1506acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1506b0: 0xdfbf0008
    ctx->pc = 0x1506b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1506b4: 0x3e00008
    ctx->pc = 0x1506B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1506B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1506A0u: goto label_1506a0;
            case 0x1506ACu: goto label_1506ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1506BCu;
    // 0x1506bc: 0x0
    ctx->pc = 0x1506bcu;
    // NOP
}
