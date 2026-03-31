#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CEA50
// Address: 0x1cea50 - 0x1ceab0
void sub_001CEA50_0x1cea50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1cea50u;

    // 0x1cea50: 0x27bdffd0
    ctx->pc = 0x1cea50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cea54: 0xffbf0020
    ctx->pc = 0x1cea54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cea58: 0x7fb10010
    ctx->pc = 0x1cea58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cea5c: 0x7fb00000
    ctx->pc = 0x1cea5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cea60: 0x80882d
    ctx->pc = 0x1cea60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea64: 0x10000009
    ctx->pc = 0x1CEA64u;
    {
        const bool branch_taken_0x1cea64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CEA68u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cea64) {
            ctx->pc = 0x1CEA8Cu;
            goto label_1cea8c;
        }
    }
    ctx->pc = 0x1CEA6Cu;
label_1cea6c:
    // 0x1cea6c: 0x86240000
    ctx->pc = 0x1cea6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cea70: 0x2403ffff
    ctx->pc = 0x1cea70u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cea74: 0x10830008
    ctx->pc = 0x1CEA74u;
    {
        const bool branch_taken_0x1cea74 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CEA78u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1cea74) {
            ctx->pc = 0x1CEA98u;
            goto label_1cea98;
        }
    }
    ctx->pc = 0x1CEA7Cu;
    // 0x1cea7c: 0xc073420
    ctx->pc = 0x1CEA7Cu;
    SET_GPR_U32(ctx, 31, 0x1CEA84u);
    ctx->pc = 0x1CD080u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD080_0x1cd080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEA84u; }
    }
    if (ctx->pc != 0x1CEA84u) { return; }
    ctx->pc = 0x1CEA84u;
    // 0x1cea84: 0x26310002
    ctx->pc = 0x1cea84u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 2));
    // 0x1cea88: 0x26100001
    ctx->pc = 0x1cea88u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1cea8c:
    // 0x1cea8c: 0x2a030006
    ctx->pc = 0x1cea8cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 6));
    // 0x1cea90: 0x1460fff6
    ctx->pc = 0x1CEA90u;
    {
        const bool branch_taken_0x1cea90 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1cea90) {
            ctx->pc = 0x1CEA6Cu;
            goto label_1cea6c;
        }
    }
    ctx->pc = 0x1CEA98u;
label_1cea98:
    // 0x1cea98: 0xdfbf0020
    ctx->pc = 0x1cea98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cea9c: 0x7bb10010
    ctx->pc = 0x1cea9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ceaa0: 0x7bb00000
    ctx->pc = 0x1ceaa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ceaa4: 0x3e00008
    ctx->pc = 0x1CEAA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEAA8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CEA6Cu: goto label_1cea6c;
            case 0x1CEA8Cu: goto label_1cea8c;
            case 0x1CEA98u: goto label_1cea98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CEAACu;
    // 0x1ceaac: 0x0
    ctx->pc = 0x1ceaacu;
    // NOP
}
