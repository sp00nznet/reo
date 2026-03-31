#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17e5e8
// Address: 0x17e5e8 - 0x17e628
void entry_17e5e8_0x17e628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17e5e8u;

    // 0x17e5e8: 0x27bdfff0
    ctx->pc = 0x17e5e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17e5ec: 0x10800003
    ctx->pc = 0x17E5ECu;
    {
        const bool branch_taken_0x17e5ec = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x17E5F0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x17e5ec) {
            ctx->pc = 0x17E5FCu;
            goto label_17e5fc;
        }
    }
    ctx->pc = 0x17E5F4u;
    // 0x17e5f4: 0x4a10004
    ctx->pc = 0x17E5F4u;
    {
        const bool branch_taken_0x17e5f4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x17E5F8u;
        SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
        if (branch_taken_0x17e5f4) {
            ctx->pc = 0x17E608u;
            goto label_17e608;
        }
    }
    ctx->pc = 0x17E5FCu;
label_17e5fc:
    // 0x17e5fc: 0x10000007
    ctx->pc = 0x17E5FCu;
    {
        const bool branch_taken_0x17e5fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17E600u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17e5fc) {
            ctx->pc = 0x17E61Cu;
            goto label_17e61c;
        }
    }
    ctx->pc = 0x17E604u;
    // 0x17e604: 0x0
    ctx->pc = 0x17e604u;
    // NOP
label_17e608:
    // 0x17e608: 0x24840013
    ctx->pc = 0x17e608u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19));
    // 0x17e60c: 0x24a51548
    ctx->pc = 0x17e60cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 5448));
    // 0x17e610: 0xc042d10
    ctx->pc = 0x17E610u;
    SET_GPR_U32(ctx, 31, 0x17E618u);
    ctx->pc = 0x17E614u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x10B440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B440_0x10b440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E618u; }
    }
    if (ctx->pc != 0x17E618u) { return; }
    ctx->pc = 0x17E618u;
    // 0x17e618: 0x2c420001
    ctx->pc = 0x17e618u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_17e61c:
    // 0x17e61c: 0xdfbf0000
    ctx->pc = 0x17e61cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e620: 0x3e00008
    ctx->pc = 0x17E620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E624u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E5FCu: goto label_17e5fc;
            case 0x17E608u: goto label_17e608;
            case 0x17E61Cu: goto label_17e61c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17E628u;
}
