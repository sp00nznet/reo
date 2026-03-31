#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00168820
// Address: 0x168820 - 0x168888
void sub_00168820_0x168820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x168820u;

    // 0x168820: 0x27bdffe0
    ctx->pc = 0x168820u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x168824: 0xffb10008
    ctx->pc = 0x168824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x168828: 0xa0882d
    ctx->pc = 0x168828u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16882c: 0x2a220004
    ctx->pc = 0x16882cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
    // 0x168830: 0xffb00000
    ctx->pc = 0x168830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x168834: 0xffb20010
    ctx->pc = 0x168834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x168838: 0xc0902d
    ctx->pc = 0x168838u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16883c: 0xffbf0018
    ctx->pc = 0x16883cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x168840: 0x1440000a
    ctx->pc = 0x168840u;
    {
        const bool branch_taken_0x168840 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x168844u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x168840) {
            ctx->pc = 0x16886Cu;
            goto label_16886c;
        }
    }
    ctx->pc = 0x168848u;
label_168848:
    // 0x168848: 0xc055f4a
    ctx->pc = 0x168848u;
    SET_GPR_U32(ctx, 31, 0x168850u);
    ctx->pc = 0x16884Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x157D28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00157D28_0x157d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168850u; }
    }
    if (ctx->pc != 0x168850u) { return; }
    ctx->pc = 0x168850u;
    // 0x168850: 0x14520003
    ctx->pc = 0x168850u;
    {
        const bool branch_taken_0x168850 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        ctx->pc = 0x168854u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
        if (branch_taken_0x168850) {
            ctx->pc = 0x168860u;
            goto label_168860;
        }
    }
    ctx->pc = 0x168858u;
    // 0x168858: 0x10000005
    ctx->pc = 0x168858u;
    {
        const bool branch_taken_0x168858 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16885Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x168858) {
            ctx->pc = 0x168870u;
            goto label_168870;
        }
    }
    ctx->pc = 0x168860u;
label_168860:
    // 0x168860: 0x2a220004
    ctx->pc = 0x168860u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
    // 0x168864: 0x1040fff8
    ctx->pc = 0x168864u;
    {
        const bool branch_taken_0x168864 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x168868u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x168864) {
            ctx->pc = 0x168848u;
            goto label_168848;
        }
    }
    ctx->pc = 0x16886Cu;
label_16886c:
    // 0x16886c: 0x102d
    ctx->pc = 0x16886cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_168870:
    // 0x168870: 0xdfb00000
    ctx->pc = 0x168870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168874: 0xdfb10008
    ctx->pc = 0x168874u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x168878: 0xdfb20010
    ctx->pc = 0x168878u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16887c: 0xdfbf0018
    ctx->pc = 0x16887cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x168880: 0x3e00008
    ctx->pc = 0x168880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168884u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x168848u: goto label_168848;
            case 0x168860u: goto label_168860;
            case 0x16886Cu: goto label_16886c;
            case 0x168870u: goto label_168870;
            default: break;
        }
        return;
    }
    ctx->pc = 0x168888u;
}
