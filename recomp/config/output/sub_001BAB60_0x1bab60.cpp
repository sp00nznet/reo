#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BAB60
// Address: 0x1bab60 - 0x1babc0
void sub_001BAB60_0x1bab60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1bab60u;

    // 0x1bab60: 0x27bdfff0
    ctx->pc = 0x1bab60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bab64: 0x3c010031
    ctx->pc = 0x1bab64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1bab68: 0xffbf0000
    ctx->pc = 0x1bab68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bab6c: 0x8c236598
    ctx->pc = 0x1bab6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 26008)));
    // 0x1bab70: 0x1060000d
    ctx->pc = 0x1BAB70u;
    {
        const bool branch_taken_0x1bab70 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bab70) {
            ctx->pc = 0x1BABA8u;
            goto label_1baba8;
        }
    }
    ctx->pc = 0x1BAB78u;
    // 0x1bab78: 0xc06b92c
    ctx->pc = 0x1BAB78u;
    SET_GPR_U32(ctx, 31, 0x1BAB80u);
    ctx->pc = 0x1AE4B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE4B0_0x1ae4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAB80u; }
    }
    if (ctx->pc != 0x1BAB80u) { return; }
    ctx->pc = 0x1BAB80u;
    // 0x1bab80: 0xc06ce18
    ctx->pc = 0x1BAB80u;
    SET_GPR_U32(ctx, 31, 0x1BAB88u);
    ctx->pc = 0x1B3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3860_0x1b3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAB88u; }
    }
    if (ctx->pc != 0x1BAB88u) { return; }
    ctx->pc = 0x1BAB88u;
    // 0x1bab88: 0xc0686d8
    ctx->pc = 0x1BAB88u;
    SET_GPR_U32(ctx, 31, 0x1BAB90u);
    ctx->pc = 0x1A1B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B60_0x1a1b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAB90u; }
    }
    if (ctx->pc != 0x1BAB90u) { return; }
    ctx->pc = 0x1BAB90u;
    // 0x1bab90: 0xc06ec58
    ctx->pc = 0x1BAB90u;
    SET_GPR_U32(ctx, 31, 0x1BAB98u);
    ctx->pc = 0x1BB160u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB160_0x1bb160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAB98u; }
    }
    if (ctx->pc != 0x1BAB98u) { return; }
    ctx->pc = 0x1BAB98u;
    // 0x1bab98: 0xc06b3e8
    ctx->pc = 0x1BAB98u;
    SET_GPR_U32(ctx, 31, 0x1BABA0u);
    ctx->pc = 0x1ACFA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001ACFA0_0x1acfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BABA0u; }
    }
    if (ctx->pc != 0x1BABA0u) { return; }
    ctx->pc = 0x1BABA0u;
    // 0x1baba0: 0xc07307c
    ctx->pc = 0x1BABA0u;
    SET_GPR_U32(ctx, 31, 0x1BABA8u);
    ctx->pc = 0x1CC1F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC1F0_0x1cc1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BABA8u; }
    }
    if (ctx->pc != 0x1BABA8u) { return; }
    ctx->pc = 0x1BABA8u;
label_1baba8:
    // 0x1baba8: 0xdfbf0000
    ctx->pc = 0x1baba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1babac: 0x3e00008
    ctx->pc = 0x1BABACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BABB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BABA8u: goto label_1baba8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BABB4u;
    // 0x1babb4: 0x0
    ctx->pc = 0x1babb4u;
    // NOP
    // 0x1babb8: 0x0
    ctx->pc = 0x1babb8u;
    // NOP
    // 0x1babbc: 0x0
    ctx->pc = 0x1babbcu;
    // NOP
}
