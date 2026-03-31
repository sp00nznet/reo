#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00189800
// Address: 0x189800 - 0x189880
void sub_00189800_0x189800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x189800u;

    // 0x189800: 0x2402c000
    ctx->pc = 0x189800u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x189804: 0x24030002
    ctx->pc = 0x189804u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x189808: 0x421024
    ctx->pc = 0x189808u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 2)));
    // 0x18980c: 0x3c06ffff
    ctx->pc = 0x18980cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)65535 << 16));
    // 0x189810: 0x34c63fff
    ctx->pc = 0x189810u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 16383));
    // 0x189814: 0x431025
    ctx->pc = 0x189814u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189818: 0x34078000
    ctx->pc = 0x189818u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 0), 32768));
    // 0x18981c: 0x461024
    ctx->pc = 0x18981cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x189820: 0x3c03ff00
    ctx->pc = 0x189820u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65280 << 16));
    // 0x189824: 0x3463ffff
    ctx->pc = 0x189824u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x189828: 0x471025
    ctx->pc = 0x189828u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x18982c: 0x3c060003
    ctx->pc = 0x18982cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)3 << 16));
    // 0x189830: 0x431024
    ctx->pc = 0x189830u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189834: 0xa0382d
    ctx->pc = 0x189834u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189838: 0x461025
    ctx->pc = 0x189838u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x18983c: 0x2408ffff
    ctx->pc = 0x18983cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x189840: 0x84438
    ctx->pc = 0x189840u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x189844: 0x350800ff
    ctx->pc = 0x189844u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), 255));
    // 0x189848: 0x84438
    ctx->pc = 0x189848u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x18984c: 0x3508ffff
    ctx->pc = 0x18984cu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), 65535));
    // 0x189850: 0x27bdffe0
    ctx->pc = 0x189850u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x189854: 0x481024
    ctx->pc = 0x189854u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189858: 0x3c050100
    ctx->pc = 0x189858u;
    SET_GPR_U32(ctx, 5, ((uint32_t)256 << 16));
    // 0x18985c: 0x3a0302d
    ctx->pc = 0x18985cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189860: 0xffbf0010
    ctx->pc = 0x189860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x189864: 0xc0625ba
    ctx->pc = 0x189864u;
    SET_GPR_U32(ctx, 31, 0x18986Cu);
    ctx->pc = 0x189868u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->pc = 0x1896E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001896E8_0x1896e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18986Cu; }
    }
    if (ctx->pc != 0x18986Cu) { return; }
    ctx->pc = 0x18986Cu;
    // 0x18986c: 0x4430001
    ctx->pc = 0x18986Cu;
    {
        const bool branch_taken_0x18986c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x18986c) {
            ctx->pc = 0x189870u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x189874u;
            goto label_189874;
        }
    }
    ctx->pc = 0x189874u;
label_189874:
    // 0x189874: 0xdfbf0010
    ctx->pc = 0x189874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189878: 0x3e00008
    ctx->pc = 0x189878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18987Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189874u: goto label_189874;
            default: break;
        }
        return;
    }
    ctx->pc = 0x189880u;
}
