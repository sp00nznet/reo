#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012CB58
// Address: 0x12cb58 - 0x12cbb8
void sub_0012CB58_0x12cb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12cb58u;

    // 0x12cb58: 0x27bdfff0
    ctx->pc = 0x12cb58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12cb5c: 0xffb00000
    ctx->pc = 0x12cb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12cb60: 0x80802d
    ctx->pc = 0x12cb60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb64: 0x12000010
    ctx->pc = 0x12CB64u;
    {
        const bool branch_taken_0x12cb64 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CB68u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        if (branch_taken_0x12cb64) {
            ctx->pc = 0x12CBA8u;
            goto label_12cba8;
        }
    }
    ctx->pc = 0x12CB6Cu;
    // 0x12cb6c: 0x8e020004
    ctx->pc = 0x12cb6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12cb70: 0x10400003
    ctx->pc = 0x12CB70u;
    {
        const bool branch_taken_0x12cb70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CB74u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12cb70) {
            ctx->pc = 0x12CB80u;
            goto label_12cb80;
        }
    }
    ctx->pc = 0x12CB78u;
    // 0x12cb78: 0xc049268
    ctx->pc = 0x12CB78u;
    SET_GPR_U32(ctx, 31, 0x12CB80u);
    ctx->pc = 0x12CB7Cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x1249A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001249A0_0x1249a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CB80u; }
    }
    if (ctx->pc != 0x12CB80u) { return; }
    ctx->pc = 0x12CB80u;
label_12cb80:
    // 0x12cb80: 0xc049938
    ctx->pc = 0x12CB80u;
    SET_GPR_U32(ctx, 31, 0x12CB88u);
    ctx->pc = 0x1264E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001264E0_0x1264e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CB88u; }
    }
    if (ctx->pc != 0x12CB88u) { return; }
    ctx->pc = 0x12CB88u;
    // 0x12cb88: 0x200202d
    ctx->pc = 0x12cb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb8c: 0x282d
    ctx->pc = 0x12cb8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb90: 0xc041f1a
    ctx->pc = 0x12CB90u;
    SET_GPR_U32(ctx, 31, 0x12CB98u);
    ctx->pc = 0x12CB94u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 156));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CB98u; }
    }
    if (ctx->pc != 0x12CB98u) { return; }
    ctx->pc = 0x12CB98u;
    // 0x12cb98: 0xdfb00000
    ctx->pc = 0x12cb98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12cb9c: 0xdfbf0008
    ctx->pc = 0x12cb9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12cba0: 0x804993e
    ctx->pc = 0x12CBA0u;
    ctx->pc = 0x12CBA4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1264F8u;
    sub_001264F8_0x1264f8(rdram, ctx, runtime); return;
    ctx->pc = 0x12CBA8u;
label_12cba8:
    // 0x12cba8: 0xdfb00000
    ctx->pc = 0x12cba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12cbac: 0xdfbf0008
    ctx->pc = 0x12cbacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12cbb0: 0x3e00008
    ctx->pc = 0x12CBB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CBB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12CB80u: goto label_12cb80;
            case 0x12CBA8u: goto label_12cba8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12CBB8u;
}
