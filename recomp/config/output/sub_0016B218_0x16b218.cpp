#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016B218
// Address: 0x16b218 - 0x16b268
void sub_0016B218_0x16b218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16b218u;

    // 0x16b218: 0x27bdfff0
    ctx->pc = 0x16b218u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16b21c: 0x3c030008
    ctx->pc = 0x16b21cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)8 << 16));
    // 0x16b220: 0xffb00000
    ctx->pc = 0x16b220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16b224: 0x80802d
    ctx->pc = 0x16b224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b228: 0xffbf0008
    ctx->pc = 0x16b228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16b22c: 0x14a3000a
    ctx->pc = 0x16B22Cu;
    {
        const bool branch_taken_0x16b22c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        ctx->pc = 0x16B230u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16b22c) {
            ctx->pc = 0x16B258u;
            goto label_16b258;
        }
    }
    ctx->pc = 0x16B234u;
    // 0x16b234: 0xc059f74
    ctx->pc = 0x16B234u;
    SET_GPR_U32(ctx, 31, 0x16B23Cu);
    ctx->pc = 0x167DD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167DD0_0x167dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B23Cu; }
    }
    if (ctx->pc != 0x16B23Cu) { return; }
    ctx->pc = 0x16B23Cu;
    // 0x16b23c: 0x14400005
    ctx->pc = 0x16B23Cu;
    {
        const bool branch_taken_0x16b23c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16B240u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16b23c) {
            ctx->pc = 0x16B254u;
            goto label_16b254;
        }
    }
    ctx->pc = 0x16B244u;
    // 0x16b244: 0xc059f7c
    ctx->pc = 0x16B244u;
    SET_GPR_U32(ctx, 31, 0x16B24Cu);
    ctx->pc = 0x167DF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167DF0_0x167df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B24Cu; }
    }
    if (ctx->pc != 0x16B24Cu) { return; }
    ctx->pc = 0x16B24Cu;
    // 0x16b24c: 0x50400002
    ctx->pc = 0x16B24Cu;
    {
        const bool branch_taken_0x16b24c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x16b24c) {
            ctx->pc = 0x16B250u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x16B258u;
            goto label_16b258;
        }
    }
    ctx->pc = 0x16B254u;
label_16b254:
    // 0x16b254: 0x102d
    ctx->pc = 0x16b254u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16b258:
    // 0x16b258: 0xdfb00000
    ctx->pc = 0x16b258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b25c: 0xdfbf0008
    ctx->pc = 0x16b25cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b260: 0x3e00008
    ctx->pc = 0x16B260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B264u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16B254u: goto label_16b254;
            case 0x16B258u: goto label_16b258;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16B268u;
}
