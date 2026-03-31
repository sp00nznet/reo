#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A4D50
// Address: 0x1a4d50 - 0x1a4da0
void sub_001A4D50_0x1a4d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a4d50u;

    // 0x1a4d50: 0x27bdfff0
    ctx->pc = 0x1a4d50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a4d54: 0x24024d42
    ctx->pc = 0x1a4d54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 19778));
    // 0x1a4d58: 0xffbf0000
    ctx->pc = 0x1a4d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a4d5c: 0x94830000
    ctx->pc = 0x1a4d5cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a4d60: 0x10620006
    ctx->pc = 0x1A4D60u;
    {
        const bool branch_taken_0x1a4d60 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1a4d60) {
            ctx->pc = 0x1A4D7Cu;
            goto label_1a4d7c;
        }
    }
    ctx->pc = 0x1A4D68u;
    // 0x1a4d68: 0x3c040024
    ctx->pc = 0x1a4d68u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1a4d6c: 0xc0696a8
    ctx->pc = 0x1A4D6Cu;
    SET_GPR_U32(ctx, 31, 0x1A4D74u);
    ctx->pc = 0x1A4D70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7968));
    ctx->pc = 0x1A5AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5AA0_0x1a5aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4D74u; }
    }
    if (ctx->pc != 0x1A4D74u) { return; }
    ctx->pc = 0x1A4D74u;
    // 0x1a4d74: 0x10000006
    ctx->pc = 0x1A4D74u;
    {
        const bool branch_taken_0x1a4d74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A4D78u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a4d74) {
            ctx->pc = 0x1A4D90u;
            goto label_1a4d90;
        }
    }
    ctx->pc = 0x1A4D7Cu;
label_1a4d7c:
    // 0x1a4d7c: 0x9482000c
    ctx->pc = 0x1a4d7cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1a4d80: 0x9483000a
    ctx->pc = 0x1a4d80u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x1a4d84: 0x21400
    ctx->pc = 0x1a4d84u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a4d88: 0x621025
    ctx->pc = 0x1a4d88u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a4d8c: 0x821021
    ctx->pc = 0x1a4d8cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1a4d90:
    // 0x1a4d90: 0xdfbf0000
    ctx->pc = 0x1a4d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4d94: 0x3e00008
    ctx->pc = 0x1A4D94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4D98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A4D7Cu: goto label_1a4d7c;
            case 0x1A4D90u: goto label_1a4d90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A4D9Cu;
    // 0x1a4d9c: 0x0
    ctx->pc = 0x1a4d9cu;
    // NOP
}
