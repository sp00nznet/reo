#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BB1D0
// Address: 0x1bb1d0 - 0x1bb230
void sub_001BB1D0_0x1bb1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1bb1d0u;

    // 0x1bb1d0: 0x27bdfff0
    ctx->pc = 0x1bb1d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb1d4: 0xffbf0000
    ctx->pc = 0x1bb1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb1d8: 0xc06b1c8
    ctx->pc = 0x1BB1D8u;
    SET_GPR_U32(ctx, 31, 0x1BB1E0u);
    ctx->pc = 0x1AC720u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AC720_0x1ac720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB1E0u; }
    }
    if (ctx->pc != 0x1BB1E0u) { return; }
    ctx->pc = 0x1BB1E0u;
    // 0x1bb1e0: 0xc06b194
    ctx->pc = 0x1BB1E0u;
    SET_GPR_U32(ctx, 31, 0x1BB1E8u);
    ctx->pc = 0x1AC650u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AC650_0x1ac650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB1E8u; }
    }
    if (ctx->pc != 0x1BB1E8u) { return; }
    ctx->pc = 0x1BB1E8u;
    // 0x1bb1e8: 0xc06e1f0
    ctx->pc = 0x1BB1E8u;
    SET_GPR_U32(ctx, 31, 0x1BB1F0u);
    ctx->pc = 0x1BB1ECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B87C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B87C0_0x1b87c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB1F0u; }
    }
    if (ctx->pc != 0x1BB1F0u) { return; }
    ctx->pc = 0x1BB1F0u;
    // 0x1bb1f0: 0xc06ec8c
    ctx->pc = 0x1BB1F0u;
    SET_GPR_U32(ctx, 31, 0x1BB1F8u);
    ctx->pc = 0x1BB230u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB230_0x1bb230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB1F8u; }
    }
    if (ctx->pc != 0x1BB1F8u) { return; }
    ctx->pc = 0x1BB1F8u;
    // 0x1bb1f8: 0xc06d2a0
    ctx->pc = 0x1BB1F8u;
    SET_GPR_U32(ctx, 31, 0x1BB200u);
    ctx->pc = 0x1B4A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4A80_0x1b4a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB200u; }
    }
    if (ctx->pc != 0x1BB200u) { return; }
    ctx->pc = 0x1BB200u;
    // 0x1bb200: 0xc06ce1c
    ctx->pc = 0x1BB200u;
    SET_GPR_U32(ctx, 31, 0x1BB208u);
    ctx->pc = 0x1BB204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B3870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3870_0x1b3870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB208u; }
    }
    if (ctx->pc != 0x1BB208u) { return; }
    ctx->pc = 0x1BB208u;
    // 0x1bb208: 0xc06ce18
    ctx->pc = 0x1BB208u;
    SET_GPR_U32(ctx, 31, 0x1BB210u);
    ctx->pc = 0x1B3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3860_0x1b3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB210u; }
    }
    if (ctx->pc != 0x1BB210u) { return; }
    ctx->pc = 0x1BB210u;
    // 0x1bb210: 0xc06efdc
    ctx->pc = 0x1BB210u;
    SET_GPR_U32(ctx, 31, 0x1BB218u);
    ctx->pc = 0x1BBF70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBF70_0x1bbf70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB218u; }
    }
    if (ctx->pc != 0x1BB218u) { return; }
    ctx->pc = 0x1BB218u;
    // 0x1bb218: 0xdfbf0000
    ctx->pc = 0x1bb218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb21c: 0x3e00008
    ctx->pc = 0x1BB21Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB220u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BB224u;
    // 0x1bb224: 0x0
    ctx->pc = 0x1bb224u;
    // NOP
    // 0x1bb228: 0x0
    ctx->pc = 0x1bb228u;
    // NOP
    // 0x1bb22c: 0x0
    ctx->pc = 0x1bb22cu;
    // NOP
}
