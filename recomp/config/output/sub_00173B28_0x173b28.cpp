#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00173B28
// Address: 0x173b28 - 0x173b80
void sub_00173B28_0x173b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x173b28u;

    // 0x173b28: 0x27bdfff0
    ctx->pc = 0x173b28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x173b2c: 0xffb00000
    ctx->pc = 0x173b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x173b30: 0xffbf0008
    ctx->pc = 0x173b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x173b34: 0xc05a78c
    ctx->pc = 0x173B34u;
    SET_GPR_U32(ctx, 31, 0x173B3Cu);
    ctx->pc = 0x173B38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173B3Cu; }
    }
    if (ctx->pc != 0x173B3Cu) { return; }
    ctx->pc = 0x173B3Cu;
    // 0x173b3c: 0x3c05ff00
    ctx->pc = 0x173b3cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x173b40: 0x200202d
    ctx->pc = 0x173b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173b44: 0x10400006
    ctx->pc = 0x173B44u;
    {
        const bool branch_taken_0x173b44 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x173B48u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 307));
        if (branch_taken_0x173b44) {
            ctx->pc = 0x173B60u;
            goto label_173b60;
        }
    }
    ctx->pc = 0x173B4Cu;
    // 0x173b4c: 0xdfb00000
    ctx->pc = 0x173b4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173b50: 0x202d
    ctx->pc = 0x173b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173b54: 0xdfbf0008
    ctx->pc = 0x173b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173b58: 0x805a704
    ctx->pc = 0x173B58u;
    ctx->pc = 0x173B5Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x173B60u;
label_173b60:
    // 0x173b60: 0xc05cee0
    ctx->pc = 0x173B60u;
    SET_GPR_U32(ctx, 31, 0x173B68u);
    ctx->pc = 0x173B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00173B80_0x173b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173B68u; }
    }
    if (ctx->pc != 0x173B68u) { return; }
    ctx->pc = 0x173B68u;
    // 0x173b68: 0x24030001
    ctx->pc = 0x173b68u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x173b6c: 0xae030044
    ctx->pc = 0x173b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x173b70: 0xdfb00000
    ctx->pc = 0x173b70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173b74: 0xdfbf0008
    ctx->pc = 0x173b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173b78: 0x3e00008
    ctx->pc = 0x173B78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173B7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173B60u: goto label_173b60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173B80u;
}
