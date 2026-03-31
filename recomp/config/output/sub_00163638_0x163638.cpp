#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00163638
// Address: 0x163638 - 0x163690
void sub_00163638_0x163638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x163638u;

    // 0x163638: 0x27bdfff0
    ctx->pc = 0x163638u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16363c: 0x3c020027
    ctx->pc = 0x16363cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x163640: 0xffbf0000
    ctx->pc = 0x163640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x163644: 0x24040005
    ctx->pc = 0x163644u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    // 0x163648: 0x8c45074c
    ctx->pc = 0x163648u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 1868)));
    // 0x16364c: 0xdfbf0000
    ctx->pc = 0x16364cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163650: 0x80506f8
    ctx->pc = 0x163650u;
    ctx->pc = 0x163654u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x141BE0u;
    sub_00141BE0_0x141be0(rdram, ctx, runtime); return;
    ctx->pc = 0x163658u;
    // 0x163658: 0x27bdfff0
    ctx->pc = 0x163658u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16365c: 0xffbf0000
    ctx->pc = 0x16365cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x163660: 0xc0505c0
    ctx->pc = 0x163660u;
    SET_GPR_U32(ctx, 31, 0x163668u);
    ctx->pc = 0x141700u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00141700_0x141700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163668u; }
    }
    if (ctx->pc != 0x163668u) { return; }
    ctx->pc = 0x163668u;
    // 0x163668: 0xdfbf0000
    ctx->pc = 0x163668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16366c: 0x24020001
    ctx->pc = 0x16366cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x163670: 0x3e00008
    ctx->pc = 0x163670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163674u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x163678u;
    // 0x163678: 0x27bdfff0
    ctx->pc = 0x163678u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16367c: 0xffbf0000
    ctx->pc = 0x16367cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x163680: 0xdfbf0000
    ctx->pc = 0x163680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163684: 0x80505de
    ctx->pc = 0x163684u;
    ctx->pc = 0x163688u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x141778u;
    sub_00141778_0x141778(rdram, ctx, runtime); return;
    ctx->pc = 0x16368Cu;
    // 0x16368c: 0x0
    ctx->pc = 0x16368cu;
    // NOP
}
