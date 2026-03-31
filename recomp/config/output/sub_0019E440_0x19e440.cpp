#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0019E440
// Address: 0x19e440 - 0x19e490
void sub_0019E440_0x19e440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x19e440u;

    // 0x19e440: 0x27bdfff0
    ctx->pc = 0x19e440u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19e444: 0x24020001
    ctx->pc = 0x19e444u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e448: 0x11020009
    ctx->pc = 0x19E448u;
    {
        const bool branch_taken_0x19e448 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 2));
        ctx->pc = 0x19E44Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x19e448) {
            ctx->pc = 0x19E470u;
            goto label_19e470;
        }
    }
    ctx->pc = 0x19E450u;
    // 0x19e450: 0x11000003
    ctx->pc = 0x19E450u;
    {
        const bool branch_taken_0x19e450 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        if (branch_taken_0x19e450) {
            ctx->pc = 0x19E460u;
            goto label_19e460;
        }
    }
    ctx->pc = 0x19E458u;
    // 0x19e458: 0x10000008
    ctx->pc = 0x19E458u;
    {
        const bool branch_taken_0x19e458 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19E45Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x19e458) {
            ctx->pc = 0x19E47Cu;
            goto label_19e47c;
        }
    }
    ctx->pc = 0x19E460u;
label_19e460:
    // 0x19e460: 0xc067924
    ctx->pc = 0x19E460u;
    SET_GPR_U32(ctx, 31, 0x19E468u);
    ctx->pc = 0x19E490u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E490_0x19e490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E468u; }
    }
    if (ctx->pc != 0x19E468u) { return; }
    ctx->pc = 0x19E468u;
    // 0x19e468: 0x10000004
    ctx->pc = 0x19E468u;
    {
        const bool branch_taken_0x19e468 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19E46Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19e468) {
            ctx->pc = 0x19E47Cu;
            goto label_19e47c;
        }
    }
    ctx->pc = 0x19E470u;
label_19e470:
    // 0x19e470: 0xc0679f4
    ctx->pc = 0x19E470u;
    SET_GPR_U32(ctx, 31, 0x19E478u);
    ctx->pc = 0x19E7D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E7D0_0x19e7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E478u; }
    }
    if (ctx->pc != 0x19E478u) { return; }
    ctx->pc = 0x19E478u;
    // 0x19e478: 0x102d
    ctx->pc = 0x19e478u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e47c:
    // 0x19e47c: 0xdfbf0000
    ctx->pc = 0x19e47cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e480: 0x3e00008
    ctx->pc = 0x19E480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E484u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19E460u: goto label_19e460;
            case 0x19E470u: goto label_19e470;
            case 0x19E47Cu: goto label_19e47c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19E488u;
    // 0x19e488: 0x0
    ctx->pc = 0x19e488u;
    // NOP
    // 0x19e48c: 0x0
    ctx->pc = 0x19e48cu;
    // NOP
}
