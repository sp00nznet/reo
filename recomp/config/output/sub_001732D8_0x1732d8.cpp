#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001732D8
// Address: 0x1732d8 - 0x173330
void sub_001732D8_0x1732d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1732d8u;

    // 0x1732d8: 0x27bdfff0
    ctx->pc = 0x1732d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1732dc: 0x80282d
    ctx->pc = 0x1732dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1732e0: 0xffbf0000
    ctx->pc = 0x1732e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1732e4: 0x24030004
    ctx->pc = 0x1732e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1732e8: 0x8ca20048
    ctx->pc = 0x1732e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x1732ec: 0x14430008
    ctx->pc = 0x1732ECu;
    {
        const bool branch_taken_0x1732ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1732F0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 5), 2380));
        if (branch_taken_0x1732ec) {
            ctx->pc = 0x173310u;
            goto label_173310;
        }
    }
    ctx->pc = 0x1732F4u;
    // 0x1732f4: 0x8ca20050
    ctx->pc = 0x1732f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x1732f8: 0x24030001
    ctx->pc = 0x1732f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1732fc: 0x10430009
    ctx->pc = 0x1732FCu;
    {
        const bool branch_taken_0x1732fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x173300u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1732fc) {
            ctx->pc = 0x173324u;
            goto label_173324;
        }
    }
    ctx->pc = 0x173304u;
    // 0x173304: 0x8cc20018
    ctx->pc = 0x173304u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x173308: 0x14430003
    ctx->pc = 0x173308u;
    {
        const bool branch_taken_0x173308 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x173308) {
            ctx->pc = 0x173318u;
            goto label_173318;
        }
    }
    ctx->pc = 0x173310u;
label_173310:
    // 0x173310: 0x10000004
    ctx->pc = 0x173310u;
    {
        const bool branch_taken_0x173310 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x173314u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x173310) {
            ctx->pc = 0x173324u;
            goto label_173324;
        }
    }
    ctx->pc = 0x173318u;
label_173318:
    // 0x173318: 0xc05d800
    ctx->pc = 0x173318u;
    SET_GPR_U32(ctx, 31, 0x173320u);
    ctx->pc = 0x176000u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00176000_0x176000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173320u; }
    }
    if (ctx->pc != 0x173320u) { return; }
    ctx->pc = 0x173320u;
    // 0x173320: 0x2102b
    ctx->pc = 0x173320u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_173324:
    // 0x173324: 0xdfbf0000
    ctx->pc = 0x173324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173328: 0x3e00008
    ctx->pc = 0x173328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17332Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173310u: goto label_173310;
            case 0x173318u: goto label_173318;
            case 0x173324u: goto label_173324;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173330u;
}
