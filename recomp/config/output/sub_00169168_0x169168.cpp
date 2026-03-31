#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00169168
// Address: 0x169168 - 0x1691a8
void sub_00169168_0x169168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x169168u;

    // 0x169168: 0x27bdfff0
    ctx->pc = 0x169168u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16916c: 0xffb00000
    ctx->pc = 0x16916cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x169170: 0xffbf0008
    ctx->pc = 0x169170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x169174: 0xc05a4b8
    ctx->pc = 0x169174u;
    SET_GPR_U32(ctx, 31, 0x16917Cu);
    ctx->pc = 0x169178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1692E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001692E0_0x1692e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16917Cu; }
    }
    if (ctx->pc != 0x16917Cu) { return; }
    ctx->pc = 0x16917Cu;
    // 0x16917c: 0x40202d
    ctx->pc = 0x16917cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169180: 0x10400005
    ctx->pc = 0x169180u;
    {
        const bool branch_taken_0x169180 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x169184u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 120));
        if (branch_taken_0x169180) {
            ctx->pc = 0x169198u;
            goto label_169198;
        }
    }
    ctx->pc = 0x169188u;
    // 0x169188: 0xdfb00000
    ctx->pc = 0x169188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16918c: 0xdfbf0008
    ctx->pc = 0x16918cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x169190: 0x805a46a
    ctx->pc = 0x169190u;
    ctx->pc = 0x169194u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1691A8u;
    sub_001691A8_0x1691a8(rdram, ctx, runtime); return;
    ctx->pc = 0x169198u;
label_169198:
    // 0x169198: 0xdfb00000
    ctx->pc = 0x169198u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16919c: 0xdfbf0008
    ctx->pc = 0x16919cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1691a0: 0x3e00008
    ctx->pc = 0x1691A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1691A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169198u: goto label_169198;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1691A8u;
}
