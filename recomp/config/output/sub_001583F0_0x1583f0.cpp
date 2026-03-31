#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001583F0
// Address: 0x1583f0 - 0x158428
void sub_001583F0_0x1583f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1583f0u;

    // 0x1583f0: 0x27bdfff0
    ctx->pc = 0x1583f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1583f4: 0xffbf0000
    ctx->pc = 0x1583f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1583f8: 0xc05610a
    ctx->pc = 0x1583F8u;
    SET_GPR_U32(ctx, 31, 0x158400u);
    ctx->pc = 0x158428u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00158428_0x158428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158400u; }
    }
    if (ctx->pc != 0x158400u) { return; }
    ctx->pc = 0x158400u;
    // 0x158400: 0x40182d
    ctx->pc = 0x158400u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158404: 0x10600004
    ctx->pc = 0x158404u;
    {
        const bool branch_taken_0x158404 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x158408u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x158404) {
            ctx->pc = 0x158418u;
            goto label_158418;
        }
    }
    ctx->pc = 0x15840Cu;
    // 0x15840c: 0xdfbf0000
    ctx->pc = 0x15840cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158410: 0x8056120
    ctx->pc = 0x158410u;
    ctx->pc = 0x158414u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x158480u;
    entry_158480_0x158500(rdram, ctx, runtime); return;
    ctx->pc = 0x158418u;
label_158418:
    // 0x158418: 0xdfbf0000
    ctx->pc = 0x158418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15841c: 0x3e00008
    ctx->pc = 0x15841Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158420u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x158418u: goto label_158418;
            default: break;
        }
        return;
    }
    ctx->pc = 0x158424u;
    // 0x158424: 0x0
    ctx->pc = 0x158424u;
    // NOP
}
