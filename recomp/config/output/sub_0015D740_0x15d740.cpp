#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015D740
// Address: 0x15d740 - 0x15d7a0
void sub_0015D740_0x15d740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15d740u;

    // 0x15d740: 0x27bdffe0
    ctx->pc = 0x15d740u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15d744: 0xffb10008
    ctx->pc = 0x15d744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15d748: 0x80882d
    ctx->pc = 0x15d748u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d74c: 0xffbf0018
    ctx->pc = 0x15d74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x15d750: 0xffb00000
    ctx->pc = 0x15d750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15d754: 0x263001e8
    ctx->pc = 0x15d754u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 488));
    // 0x15d758: 0xffb20010
    ctx->pc = 0x15d758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x15d75c: 0x2412001f
    ctx->pc = 0x15d75cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 31));
label_15d760:
    // 0x15d760: 0x8e050000
    ctx->pc = 0x15d760u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15d764: 0x50a00005
    ctx->pc = 0x15D764u;
    {
        const bool branch_taken_0x15d764 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x15d764) {
            ctx->pc = 0x15D768u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->pc = 0x15D77Cu;
            goto label_15d77c;
        }
    }
    ctx->pc = 0x15D76Cu;
    // 0x15d76c: 0xc0575ac
    ctx->pc = 0x15D76Cu;
    SET_GPR_U32(ctx, 31, 0x15D774u);
    ctx->pc = 0x15D770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15D6B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D6B0_0x15d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D774u; }
    }
    if (ctx->pc != 0x15D774u) { return; }
    ctx->pc = 0x15D774u;
    // 0x15d774: 0xae000000
    ctx->pc = 0x15d774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x15d778: 0x2652ffff
    ctx->pc = 0x15d778u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
label_15d77c:
    // 0x15d77c: 0x641fff8
    ctx->pc = 0x15D77Cu;
    {
        const bool branch_taken_0x15d77c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x15D780u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967292));
        if (branch_taken_0x15d77c) {
            ctx->pc = 0x15D760u;
            goto label_15d760;
        }
    }
    ctx->pc = 0x15D784u;
    // 0x15d784: 0xdfb00000
    ctx->pc = 0x15d784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d788: 0xdfb10008
    ctx->pc = 0x15d788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15d78c: 0xdfb20010
    ctx->pc = 0x15d78cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d790: 0xdfbf0018
    ctx->pc = 0x15d790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15d794: 0x3e00008
    ctx->pc = 0x15D794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D798u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D760u: goto label_15d760;
            case 0x15D77Cu: goto label_15d77c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D79Cu;
    // 0x15d79c: 0x0
    ctx->pc = 0x15d79cu;
    // NOP
}
