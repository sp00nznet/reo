#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0019EC50
// Address: 0x19ec50 - 0x19ec90
void sub_0019EC50_0x19ec50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x19ec50u;

    // 0x19ec50: 0x3c01002a
    ctx->pc = 0x19ec50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19ec54: 0x10000007
    ctx->pc = 0x19EC54u;
    {
        const bool branch_taken_0x19ec54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19EC58u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294950608)));
        if (branch_taken_0x19ec54) {
            ctx->pc = 0x19EC74u;
            goto label_19ec74;
        }
    }
    ctx->pc = 0x19EC5Cu;
label_19ec5c:
    // 0x19ec5c: 0x8c430008
    ctx->pc = 0x19ec5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x19ec60: 0x14640003
    ctx->pc = 0x19EC60u;
    {
        const bool branch_taken_0x19ec60 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x19ec60) {
            ctx->pc = 0x19EC70u;
            goto label_19ec70;
        }
    }
    ctx->pc = 0x19EC68u;
    // 0x19ec68: 0x10000005
    ctx->pc = 0x19EC68u;
    {
        const bool branch_taken_0x19ec68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x19ec68) {
            ctx->pc = 0x19EC80u;
            goto label_19ec80;
        }
    }
    ctx->pc = 0x19EC70u;
label_19ec70:
    // 0x19ec70: 0x8c420004
    ctx->pc = 0x19ec70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_19ec74:
    // 0x19ec74: 0x1440fff9
    ctx->pc = 0x19EC74u;
    {
        const bool branch_taken_0x19ec74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x19ec74) {
            ctx->pc = 0x19EC5Cu;
            goto label_19ec5c;
        }
    }
    ctx->pc = 0x19EC7Cu;
    // 0x19ec7c: 0x102d
    ctx->pc = 0x19ec7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ec80:
    // 0x19ec80: 0x3e00008
    ctx->pc = 0x19EC80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19EC5Cu: goto label_19ec5c;
            case 0x19EC70u: goto label_19ec70;
            case 0x19EC74u: goto label_19ec74;
            case 0x19EC80u: goto label_19ec80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19EC88u;
    // 0x19ec88: 0x0
    ctx->pc = 0x19ec88u;
    // NOP
    // 0x19ec8c: 0x0
    ctx->pc = 0x19ec8cu;
    // NOP
}
