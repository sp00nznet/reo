#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BABC0
// Address: 0x1babc0 - 0x1bac20
void sub_001BABC0_0x1babc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1babc0u;

    // 0x1babc0: 0x27bdfff0
    ctx->pc = 0x1babc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1babc4: 0x3c010031
    ctx->pc = 0x1babc4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1babc8: 0xffbf0000
    ctx->pc = 0x1babc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1babcc: 0x8c236598
    ctx->pc = 0x1babccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 26008)));
    // 0x1babd0: 0x1060000d
    ctx->pc = 0x1BABD0u;
    {
        const bool branch_taken_0x1babd0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1babd0) {
            ctx->pc = 0x1BAC08u;
            goto label_1bac08;
        }
    }
    ctx->pc = 0x1BABD8u;
    // 0x1babd8: 0xc06bc10
    ctx->pc = 0x1BABD8u;
    SET_GPR_U32(ctx, 31, 0x1BABE0u);
    ctx->pc = 0x1AF040u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF040_0x1af040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BABE0u; }
    }
    if (ctx->pc != 0x1BABE0u) { return; }
    ctx->pc = 0x1BABE0u;
    // 0x1babe0: 0xc06ec70
    ctx->pc = 0x1BABE0u;
    SET_GPR_U32(ctx, 31, 0x1BABE8u);
    ctx->pc = 0x1BB1C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB1C0_0x1bb1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BABE8u; }
    }
    if (ctx->pc != 0x1BABE8u) { return; }
    ctx->pc = 0x1BABE8u;
    // 0x1babe8: 0xc06d7ec
    ctx->pc = 0x1BABE8u;
    SET_GPR_U32(ctx, 31, 0x1BABF0u);
    ctx->pc = 0x1B5FB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5FB0_0x1b5fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BABF0u; }
    }
    if (ctx->pc != 0x1BABF0u) { return; }
    ctx->pc = 0x1BABF0u;
    // 0x1babf0: 0xc06ce20
    ctx->pc = 0x1BABF0u;
    SET_GPR_U32(ctx, 31, 0x1BABF8u);
    ctx->pc = 0x1B3880u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3880_0x1b3880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BABF8u; }
    }
    if (ctx->pc != 0x1BABF8u) { return; }
    ctx->pc = 0x1BABF8u;
    // 0x1babf8: 0xc06f03c
    ctx->pc = 0x1BABF8u;
    SET_GPR_U32(ctx, 31, 0x1BAC00u);
    ctx->pc = 0x1BC0F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC0F0_0x1bc0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAC00u; }
    }
    if (ctx->pc != 0x1BAC00u) { return; }
    ctx->pc = 0x1BAC00u;
    // 0x1bac00: 0xc06bc20
    ctx->pc = 0x1BAC00u;
    SET_GPR_U32(ctx, 31, 0x1BAC08u);
    ctx->pc = 0x1AF080u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF080_0x1af080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAC08u; }
    }
    if (ctx->pc != 0x1BAC08u) { return; }
    ctx->pc = 0x1BAC08u;
label_1bac08:
    // 0x1bac08: 0xdfbf0000
    ctx->pc = 0x1bac08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bac0c: 0x3e00008
    ctx->pc = 0x1BAC0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAC10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BAC08u: goto label_1bac08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BAC14u;
    // 0x1bac14: 0x0
    ctx->pc = 0x1bac14u;
    // NOP
    // 0x1bac18: 0x0
    ctx->pc = 0x1bac18u;
    // NOP
    // 0x1bac1c: 0x0
    ctx->pc = 0x1bac1cu;
    // NOP
}
