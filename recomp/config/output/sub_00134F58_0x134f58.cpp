#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00134F58
// Address: 0x134f58 - 0x134f98
void sub_00134F58_0x134f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x134f58u;

    // 0x134f58: 0x27bdfff0
    ctx->pc = 0x134f58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x134f5c: 0x80102d
    ctx->pc = 0x134f5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134f60: 0x10400007
    ctx->pc = 0x134F60u;
    {
        const bool branch_taken_0x134f60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x134F64u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x134f60) {
            ctx->pc = 0x134F80u;
            goto label_134f80;
        }
    }
    ctx->pc = 0x134F68u;
    // 0x134f68: 0xdfbf0000
    ctx->pc = 0x134f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134f6c: 0x282d
    ctx->pc = 0x134f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134f70: 0x2406003c
    ctx->pc = 0x134f70u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 60));
    // 0x134f74: 0xac400000
    ctx->pc = 0x134f74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x134f78: 0x8041f1a
    ctx->pc = 0x134F78u;
    ctx->pc = 0x134F7Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x107C68u;
    sub_00107C68_0x107c68(rdram, ctx, runtime); return;
    ctx->pc = 0x134F80u;
label_134f80:
    // 0x134f80: 0xdfbf0000
    ctx->pc = 0x134f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134f84: 0x3e00008
    ctx->pc = 0x134F84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134F88u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x134F80u: goto label_134f80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x134F8Cu;
    // 0x134f8c: 0x0
    ctx->pc = 0x134f8cu;
    // NOP
    // 0x134f90: 0x3e00008
    ctx->pc = 0x134F90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134F94u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x134F80u: goto label_134f80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x134F98u;
}
