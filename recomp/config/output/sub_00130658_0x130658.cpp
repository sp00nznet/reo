#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00130658
// Address: 0x130658 - 0x130698
void sub_00130658_0x130658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x130658u;

    // 0x130658: 0x27bdfff0
    ctx->pc = 0x130658u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13065c: 0xffb00000
    ctx->pc = 0x13065cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130660: 0xffbf0008
    ctx->pc = 0x130660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x130664: 0xc049938
    ctx->pc = 0x130664u;
    SET_GPR_U32(ctx, 31, 0x13066Cu);
    ctx->pc = 0x130668u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1264E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001264E0_0x1264e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13066Cu; }
    }
    if (ctx->pc != 0x13066Cu) { return; }
    ctx->pc = 0x13066Cu;
    // 0x13066c: 0xc04c188
    ctx->pc = 0x13066Cu;
    SET_GPR_U32(ctx, 31, 0x130674u);
    ctx->pc = 0x130670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130620u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130620_0x130620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130674u; }
    }
    if (ctx->pc != 0x130674u) { return; }
    ctx->pc = 0x130674u;
    // 0x130674: 0x3c02000f
    ctx->pc = 0x130674u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15 << 16));
    // 0x130678: 0x3442ffff
    ctx->pc = 0x130678u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x13067c: 0xc04993e
    ctx->pc = 0x13067Cu;
    SET_GPR_U32(ctx, 31, 0x130684u);
    ctx->pc = 0x130680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    ctx->pc = 0x1264F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001264F8_0x1264f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130684u; }
    }
    if (ctx->pc != 0x130684u) { return; }
    ctx->pc = 0x130684u;
    // 0x130684: 0x24020001
    ctx->pc = 0x130684u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x130688: 0xdfb00000
    ctx->pc = 0x130688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13068c: 0xdfbf0008
    ctx->pc = 0x13068cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130690: 0x3e00008
    ctx->pc = 0x130690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130694u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x130698u;
}
