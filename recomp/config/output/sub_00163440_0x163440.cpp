#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00163440
// Address: 0x163440 - 0x163480
void sub_00163440_0x163440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x163440u;

    // 0x163440: 0x27bdfff0
    ctx->pc = 0x163440u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x163444: 0xffb00000
    ctx->pc = 0x163444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x163448: 0xffbf0008
    ctx->pc = 0x163448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16344c: 0xc058d08
    ctx->pc = 0x16344Cu;
    SET_GPR_U32(ctx, 31, 0x163454u);
    ctx->pc = 0x163450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x163420u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163420_0x163420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163454u; }
    }
    if (ctx->pc != 0x163454u) { return; }
    ctx->pc = 0x163454u;
    // 0x163454: 0x10400006
    ctx->pc = 0x163454u;
    {
        const bool branch_taken_0x163454 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x163458u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x163454) {
            ctx->pc = 0x163470u;
            goto label_163470;
        }
    }
    ctx->pc = 0x16345Cu;
    // 0x16345c: 0x8e030000
    ctx->pc = 0x16345cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x163460: 0x14640003
    ctx->pc = 0x163460u;
    {
        const bool branch_taken_0x163460 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x163464u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x163460) {
            ctx->pc = 0x163470u;
            goto label_163470;
        }
    }
    ctx->pc = 0x163468u;
    // 0x163468: 0x8e020014
    ctx->pc = 0x163468u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x16346c: 0x2102b
    ctx->pc = 0x16346cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_163470:
    // 0x163470: 0xdfb00000
    ctx->pc = 0x163470u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163474: 0xdfbf0008
    ctx->pc = 0x163474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x163478: 0x3e00008
    ctx->pc = 0x163478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16347Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163470u: goto label_163470;
            default: break;
        }
        return;
    }
    ctx->pc = 0x163480u;
}
