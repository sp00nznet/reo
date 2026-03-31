#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00132BC8
// Address: 0x132bc8 - 0x132c08
void sub_00132BC8_0x132bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x132bc8u;

    // 0x132bc8: 0x3e00008
    ctx->pc = 0x132BC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132BCCu;
        WRITE8(ADD32(GPR_U32(ctx, 4), 109), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132BF0u: goto label_132bf0;
            case 0x132BFCu: goto label_132bfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x132BD0u;
    // 0x132bd0: 0x27bdfff0
    ctx->pc = 0x132bd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x132bd4: 0x14800006
    ctx->pc = 0x132BD4u;
    {
        const bool branch_taken_0x132bd4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x132BD8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x132bd4) {
            ctx->pc = 0x132BF0u;
            goto label_132bf0;
        }
    }
    ctx->pc = 0x132BDCu;
    // 0x132bdc: 0x3c040024
    ctx->pc = 0x132bdcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x132be0: 0xc04a034
    ctx->pc = 0x132BE0u;
    SET_GPR_U32(ctx, 31, 0x132BE8u);
    ctx->pc = 0x132BE4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947632));
    ctx->pc = 0x1280D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001280D0_0x1280d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132BE8u; }
    }
    if (ctx->pc != 0x132BE8u) { return; }
    ctx->pc = 0x132BE8u;
    // 0x132be8: 0x10000004
    ctx->pc = 0x132BE8u;
    {
        const bool branch_taken_0x132be8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x132BECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x132be8) {
            ctx->pc = 0x132BFCu;
            goto label_132bfc;
        }
    }
    ctx->pc = 0x132BF0u;
label_132bf0:
    // 0x132bf0: 0x80820001
    ctx->pc = 0x132bf0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x132bf4: 0x38420005
    ctx->pc = 0x132bf4u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 5));
    // 0x132bf8: 0x2c420001
    ctx->pc = 0x132bf8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_132bfc:
    // 0x132bfc: 0xdfbf0000
    ctx->pc = 0x132bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132c00: 0x3e00008
    ctx->pc = 0x132C00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132C04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132BF0u: goto label_132bf0;
            case 0x132BFCu: goto label_132bfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x132C08u;
}
