#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001793F8
// Address: 0x1793f8 - 0x179468
void sub_001793F8_0x1793f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1793f8u;

    // 0x1793f8: 0x27bdffe0
    ctx->pc = 0x1793f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1793fc: 0xffb10008
    ctx->pc = 0x1793fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x179400: 0x30b100ff
    ctx->pc = 0x179400u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 5), 255));
    // 0x179404: 0xffb20010
    ctx->pc = 0x179404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x179408: 0xc0902d
    ctx->pc = 0x179408u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17940c: 0xffb00000
    ctx->pc = 0x17940cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x179410: 0xffbf0018
    ctx->pc = 0x179410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x179414: 0xae400000
    ctx->pc = 0x179414u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x179418: 0xc05e4a6
    ctx->pc = 0x179418u;
    SET_GPR_U32(ctx, 31, 0x179420u);
    ctx->pc = 0x17941Cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->pc = 0x179298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00179298_0x179298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179420u; }
    }
    if (ctx->pc != 0x179420u) { return; }
    ctx->pc = 0x179420u;
    // 0x179420: 0x220282d
    ctx->pc = 0x179420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179424: 0x10400009
    ctx->pc = 0x179424u;
    {
        const bool branch_taken_0x179424 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x179428u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x179424) {
            ctx->pc = 0x17944Cu;
            goto label_17944c;
        }
    }
    ctx->pc = 0x17942Cu;
    // 0x17942c: 0xc05e54e
    ctx->pc = 0x17942Cu;
    SET_GPR_U32(ctx, 31, 0x179434u);
    ctx->pc = 0x179538u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00179538_0x179538(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179434u; }
    }
    if (ctx->pc != 0x179434u) { return; }
    ctx->pc = 0x179434u;
    // 0x179434: 0x10400004
    ctx->pc = 0x179434u;
    {
        const bool branch_taken_0x179434 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x179438u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x179434) {
            ctx->pc = 0x179448u;
            goto label_179448;
        }
    }
    ctx->pc = 0x17943Cu;
    // 0x17943c: 0x10000003
    ctx->pc = 0x17943Cu;
    {
        const bool branch_taken_0x17943c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x179440u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x17943c) {
            ctx->pc = 0x17944Cu;
            goto label_17944c;
        }
    }
    ctx->pc = 0x179444u;
    // 0x179444: 0x0
    ctx->pc = 0x179444u;
    // NOP
label_179448:
    // 0x179448: 0xae400000
    ctx->pc = 0x179448u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_17944c:
    // 0x17944c: 0xdfb00000
    ctx->pc = 0x17944cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179450: 0xdfb10008
    ctx->pc = 0x179450u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x179454: 0xdfb20010
    ctx->pc = 0x179454u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179458: 0xdfbf0018
    ctx->pc = 0x179458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17945c: 0x3e00008
    ctx->pc = 0x17945Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179460u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x179448u: goto label_179448;
            case 0x17944Cu: goto label_17944c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x179464u;
    // 0x179464: 0x0
    ctx->pc = 0x179464u;
    // NOP
}
