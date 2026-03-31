#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_106a10
// Address: 0x106a10 - 0x106aa0
void entry_106a10_0x106aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x106a10u;

    // 0x106a10: 0x27bdffd0
    ctx->pc = 0x106a10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x106a14: 0xffb00000
    ctx->pc = 0x106a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x106a18: 0xc0802d
    ctx->pc = 0x106a18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a1c: 0xffb10008
    ctx->pc = 0x106a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x106a20: 0x80882d
    ctx->pc = 0x106a20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a24: 0xffb20010
    ctx->pc = 0x106a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x106a28: 0xa0902d
    ctx->pc = 0x106a28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a2c: 0xffb30018
    ctx->pc = 0x106a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x106a30: 0x200202d
    ctx->pc = 0x106a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a34: 0x12000010
    ctx->pc = 0x106A34u;
    {
        const bool branch_taken_0x106a34 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x106A38u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        if (branch_taken_0x106a34) {
            ctx->pc = 0x106A78u;
            goto label_106a78;
        }
    }
    ctx->pc = 0x106A3Cu;
    // 0x106a3c: 0x3c130023
    ctx->pc = 0x106a3cu;
    SET_GPR_U32(ctx, 19, ((uint32_t)35 << 16));
    // 0x106a40: 0xc042b9e
    ctx->pc = 0x106A40u;
    SET_GPR_U32(ctx, 31, 0x106A48u);
    ctx->pc = 0x106A44u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 30992));
    ctx->pc = 0x10AE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AE78_0x10ae78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106A48u; }
    }
    if (ctx->pc != 0x106A48u) { return; }
    ctx->pc = 0x106A48u;
    // 0x106a48: 0x3c050023
    ctx->pc = 0x106a48u;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
    // 0x106a4c: 0x24a57900
    ctx->pc = 0x106a4cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 30976));
    // 0x106a50: 0x10400005
    ctx->pc = 0x106A50u;
    {
        const bool branch_taken_0x106a50 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x106A54u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x106a50) {
            ctx->pc = 0x106A68u;
            goto label_106a68;
        }
    }
    ctx->pc = 0x106A58u;
    // 0x106a58: 0xc042b9e
    ctx->pc = 0x106A58u;
    SET_GPR_U32(ctx, 31, 0x106A60u);
    ctx->pc = 0x10AE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AE78_0x10ae78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106A60u; }
    }
    if (ctx->pc != 0x106A60u) { return; }
    ctx->pc = 0x106A60u;
    // 0x106a60: 0x14400007
    ctx->pc = 0x106A60u;
    {
        const bool branch_taken_0x106a60 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x106A64u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x106a60) {
            ctx->pc = 0x106A80u;
            goto label_106a80;
        }
    }
    ctx->pc = 0x106A68u;
label_106a68:
    // 0x106a68: 0xae300034
    ctx->pc = 0x106a68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
    // 0x106a6c: 0x10000003
    ctx->pc = 0x106A6Cu;
    {
        const bool branch_taken_0x106a6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x106A70u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 18));
        if (branch_taken_0x106a6c) {
            ctx->pc = 0x106A7Cu;
            goto label_106a7c;
        }
    }
    ctx->pc = 0x106A74u;
    // 0x106a74: 0x0
    ctx->pc = 0x106a74u;
    // NOP
label_106a78:
    // 0x106a78: 0x3c130023
    ctx->pc = 0x106a78u;
    SET_GPR_U32(ctx, 19, ((uint32_t)35 << 16));
label_106a7c:
    // 0x106a7c: 0x26627910
    ctx->pc = 0x106a7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 30992));
label_106a80:
    // 0x106a80: 0xdfb00000
    ctx->pc = 0x106a80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106a84: 0xdfb10008
    ctx->pc = 0x106a84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x106a88: 0xdfb20010
    ctx->pc = 0x106a88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106a8c: 0xdfb30018
    ctx->pc = 0x106a8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x106a90: 0xdfbf0020
    ctx->pc = 0x106a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106a94: 0x3e00008
    ctx->pc = 0x106A94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106A98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x106A68u: goto label_106a68;
            case 0x106A78u: goto label_106a78;
            case 0x106A7Cu: goto label_106a7c;
            case 0x106A80u: goto label_106a80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x106A9Cu;
    // 0x106a9c: 0x0
    ctx->pc = 0x106a9cu;
    // NOP
}
