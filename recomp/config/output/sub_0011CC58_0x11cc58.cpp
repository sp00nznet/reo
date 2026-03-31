#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011CC58
// Address: 0x11cc58 - 0x11cca8
void sub_0011CC58_0x11cc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11cc58u;

    // 0x11cc58: 0x27bdfff0
    ctx->pc = 0x11cc58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11cc5c: 0xffbf0000
    ctx->pc = 0x11cc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11cc60: 0xc04528c
    ctx->pc = 0x11CC60u;
    SET_GPR_U32(ctx, 31, 0x11CC68u);
    ctx->pc = 0x11CC64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x114A30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114A30_0x114a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CC68u; }
    }
    if (ctx->pc != 0x11CC68u) { return; }
    ctx->pc = 0x11CC68u;
    // 0x11cc68: 0x3c030004
    ctx->pc = 0x11cc68u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4 << 16));
    // 0x11cc6c: 0x431024
    ctx->pc = 0x11cc6cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11cc70: 0x1040000a
    ctx->pc = 0x11CC70u;
    {
        const bool branch_taken_0x11cc70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11CC74u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11cc70) {
            ctx->pc = 0x11CC9Cu;
            goto label_11cc9c;
        }
    }
    ctx->pc = 0x11CC78u;
    // 0x11cc78: 0xc0452a8
    ctx->pc = 0x11CC78u;
    SET_GPR_U32(ctx, 31, 0x11CC80u);
    ctx->pc = 0x114AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114AA0_0x114aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CC80u; }
    }
    if (ctx->pc != 0x11CC80u) { return; }
    ctx->pc = 0x11CC80u;
    // 0x11cc80: 0x24040001
    ctx->pc = 0x11cc80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11cc84: 0xc047df4
    ctx->pc = 0x11CC84u;
    SET_GPR_U32(ctx, 31, 0x11CC8Cu);
    ctx->pc = 0x11CC88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x11F7D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011F7D0_0x11f7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CC8Cu; }
    }
    if (ctx->pc != 0x11CC8Cu) { return; }
    ctx->pc = 0x11CC8Cu;
    // 0x11cc8c: 0x202d
    ctx->pc = 0x11cc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cc90: 0xc047df4
    ctx->pc = 0x11CC90u;
    SET_GPR_U32(ctx, 31, 0x11CC98u);
    ctx->pc = 0x11CC94u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x11F7D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011F7D0_0x11f7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CC98u; }
    }
    if (ctx->pc != 0x11CC98u) { return; }
    ctx->pc = 0x11CC98u;
    // 0x11cc98: 0x24020001
    ctx->pc = 0x11cc98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_11cc9c:
    // 0x11cc9c: 0xdfbf0000
    ctx->pc = 0x11cc9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11cca0: 0x3e00008
    ctx->pc = 0x11CCA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CCA4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CC9Cu: goto label_11cc9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11CCA8u;
}
