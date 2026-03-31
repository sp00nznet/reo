#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00111828
// Address: 0x111828 - 0x111888
void sub_00111828_0x111828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x111828u;

    // 0x111828: 0x8c830000
    ctx->pc = 0x111828u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11182c: 0x3c04007f
    ctx->pc = 0x11182cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)127 << 16));
    // 0x111830: 0x3484ffff
    ctx->pc = 0x111830u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x111834: 0xa0302d
    ctx->pc = 0x111834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111838: 0x315c2
    ctx->pc = 0x111838u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 23));
    // 0x11183c: 0x32fc2
    ctx->pc = 0x11183cu;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 3), 31));
    // 0x111840: 0x304200ff
    ctx->pc = 0x111840u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x111844: 0x641824
    ctx->pc = 0x111844u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x111848: 0xacc50004
    ctx->pc = 0x111848u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x11184c: 0x2445ff81
    ctx->pc = 0x11184cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294967169));
    // 0x111850: 0x14400005
    ctx->pc = 0x111850u;
    {
        const bool branch_taken_0x111850 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x111854u;
        SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 7));
        if (branch_taken_0x111850) {
            ctx->pc = 0x111868u;
            goto label_111868;
        }
    }
    ctx->pc = 0x111858u;
    // 0x111858: 0x24020002
    ctx->pc = 0x111858u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x11185c: 0x3e00008
    ctx->pc = 0x11185Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111860u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x111868u: goto label_111868;
            default: break;
        }
        return;
    }
    ctx->pc = 0x111864u;
    // 0x111864: 0x0
    ctx->pc = 0x111864u;
    // NOP
label_111868:
    // 0x111868: 0x3c024000
    ctx->pc = 0x111868u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x11186c: 0x24030003
    ctx->pc = 0x11186cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x111870: 0x821025
    ctx->pc = 0x111870u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x111874: 0xacc50008
    ctx->pc = 0x111874u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    // 0x111878: 0xacc30000
    ctx->pc = 0x111878u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x11187c: 0x3e00008
    ctx->pc = 0x11187Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111880u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x111868u: goto label_111868;
            default: break;
        }
        return;
    }
    ctx->pc = 0x111884u;
    // 0x111884: 0x0
    ctx->pc = 0x111884u;
    // NOP
}
