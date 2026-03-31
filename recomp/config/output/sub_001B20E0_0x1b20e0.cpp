#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B20E0
// Address: 0x1b20e0 - 0x1b2120
void sub_001B20E0_0x1b20e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b20e0u;

    // 0x1b20e0: 0x27bdfff0
    ctx->pc = 0x1b20e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b20e4: 0xffbf0000
    ctx->pc = 0x1b20e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b20e8: 0xc06c758
    ctx->pc = 0x1B20E8u;
    SET_GPR_U32(ctx, 31, 0x1B20F0u);
    ctx->pc = 0x1B1D60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1D60_0x1b1d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B20F0u; }
    }
    if (ctx->pc != 0x1B20F0u) { return; }
    ctx->pc = 0x1B20F0u;
    // 0x1b20f0: 0xc06c768
    ctx->pc = 0x1B20F0u;
    SET_GPR_U32(ctx, 31, 0x1B20F8u);
    ctx->pc = 0x1B1DA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1DA0_0x1b1da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B20F8u; }
    }
    if (ctx->pc != 0x1B20F8u) { return; }
    ctx->pc = 0x1B20F8u;
    // 0x1b20f8: 0xc06c7b0
    ctx->pc = 0x1B20F8u;
    SET_GPR_U32(ctx, 31, 0x1B2100u);
    ctx->pc = 0x1B1EC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1EC0_0x1b1ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2100u; }
    }
    if (ctx->pc != 0x1B2100u) { return; }
    ctx->pc = 0x1B2100u;
    // 0x1b2100: 0xc06c7c4
    ctx->pc = 0x1B2100u;
    SET_GPR_U32(ctx, 31, 0x1B2108u);
    ctx->pc = 0x1B1F10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1F10_0x1b1f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2108u; }
    }
    if (ctx->pc != 0x1B2108u) { return; }
    ctx->pc = 0x1B2108u;
    // 0x1b2108: 0xc06c808
    ctx->pc = 0x1B2108u;
    SET_GPR_U32(ctx, 31, 0x1B2110u);
    ctx->pc = 0x1B2020u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2020_0x1b2020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2110u; }
    }
    if (ctx->pc != 0x1B2110u) { return; }
    ctx->pc = 0x1B2110u;
    // 0x1b2110: 0xdfbf0000
    ctx->pc = 0x1b2110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2114: 0x3e00008
    ctx->pc = 0x1B2114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2118u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B211Cu;
    // 0x1b211c: 0x0
    ctx->pc = 0x1b211cu;
    // NOP
}
