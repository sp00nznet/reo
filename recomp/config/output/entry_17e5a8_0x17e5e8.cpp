#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17e5a8
// Address: 0x17e5a8 - 0x17e5e8
void entry_17e5a8_0x17e5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17e5a8u;

    // 0x17e5a8: 0x27bdfff0
    ctx->pc = 0x17e5a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17e5ac: 0x10800003
    ctx->pc = 0x17E5ACu;
    {
        const bool branch_taken_0x17e5ac = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x17E5B0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x17e5ac) {
            ctx->pc = 0x17E5BCu;
            goto label_17e5bc;
        }
    }
    ctx->pc = 0x17E5B4u;
    // 0x17e5b4: 0x4a10004
    ctx->pc = 0x17E5B4u;
    {
        const bool branch_taken_0x17e5b4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x17E5B8u;
        SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
        if (branch_taken_0x17e5b4) {
            ctx->pc = 0x17E5C8u;
            goto label_17e5c8;
        }
    }
    ctx->pc = 0x17E5BCu;
label_17e5bc:
    // 0x17e5bc: 0x10000007
    ctx->pc = 0x17E5BCu;
    {
        const bool branch_taken_0x17e5bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17E5C0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17e5bc) {
            ctx->pc = 0x17E5DCu;
            goto label_17e5dc;
        }
    }
    ctx->pc = 0x17E5C4u;
    // 0x17e5c4: 0x0
    ctx->pc = 0x17e5c4u;
    // NOP
label_17e5c8:
    // 0x17e5c8: 0x24840012
    ctx->pc = 0x17e5c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18));
    // 0x17e5cc: 0x24a51530
    ctx->pc = 0x17e5ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 5424));
    // 0x17e5d0: 0xc042d10
    ctx->pc = 0x17E5D0u;
    SET_GPR_U32(ctx, 31, 0x17E5D8u);
    ctx->pc = 0x17E5D4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x10B440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B440_0x10b440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E5D8u; }
    }
    if (ctx->pc != 0x17E5D8u) { return; }
    ctx->pc = 0x17E5D8u;
    // 0x17e5d8: 0x2c420001
    ctx->pc = 0x17e5d8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_17e5dc:
    // 0x17e5dc: 0xdfbf0000
    ctx->pc = 0x17e5dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e5e0: 0x3e00008
    ctx->pc = 0x17E5E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E5E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E5BCu: goto label_17e5bc;
            case 0x17E5C8u: goto label_17e5c8;
            case 0x17E5DCu: goto label_17e5dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17E5E8u;
}
