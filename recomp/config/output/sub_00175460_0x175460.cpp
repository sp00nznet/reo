#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00175460
// Address: 0x175460 - 0x1754b0
void sub_00175460_0x175460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x175460u;

    // 0x175460: 0x27bdffe0
    ctx->pc = 0x175460u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x175464: 0xffb00000
    ctx->pc = 0x175464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175468: 0xa0802d
    ctx->pc = 0x175468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17546c: 0xffb10008
    ctx->pc = 0x17546cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x175470: 0xc0882d
    ctx->pc = 0x175470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175474: 0xffb20010
    ctx->pc = 0x175474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x175478: 0xffbf0018
    ctx->pc = 0x175478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17547c: 0xc05d540
    ctx->pc = 0x17547Cu;
    SET_GPR_U32(ctx, 31, 0x175484u);
    ctx->pc = 0x175480u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175500u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175500_0x175500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175484u; }
    }
    if (ctx->pc != 0x175484u) { return; }
    ctx->pc = 0x175484u;
    // 0x175484: 0x10400003
    ctx->pc = 0x175484u;
    {
        const bool branch_taken_0x175484 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x175488u;
        SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x175484) {
            ctx->pc = 0x175494u;
            goto label_175494;
        }
    }
    ctx->pc = 0x17548Cu;
    // 0x17548c: 0x2121021
    ctx->pc = 0x17548cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x175490: 0xac5109a0
    ctx->pc = 0x175490u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2464), GPR_U32(ctx, 17));
label_175494:
    // 0x175494: 0xdfb00000
    ctx->pc = 0x175494u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175498: 0xdfb10008
    ctx->pc = 0x175498u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17549c: 0xdfb20010
    ctx->pc = 0x17549cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1754a0: 0xdfbf0018
    ctx->pc = 0x1754a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1754a4: 0x3e00008
    ctx->pc = 0x1754A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1754A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175494u: goto label_175494;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1754ACu;
    // 0x1754ac: 0x0
    ctx->pc = 0x1754acu;
    // NOP
}
