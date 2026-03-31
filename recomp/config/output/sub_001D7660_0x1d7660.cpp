#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D7660
// Address: 0x1d7660 - 0x1d7690
void sub_001D7660_0x1d7660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d7660u;

    // 0x1d7660: 0x27bdfff0
    ctx->pc = 0x1d7660u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7664: 0xffbf0000
    ctx->pc = 0x1d7664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d7668: 0xc076384
    ctx->pc = 0x1D7668u;
    SET_GPR_U32(ctx, 31, 0x1D7670u);
    ctx->pc = 0x1D8E10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8E10_0x1d8e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7670u; }
    }
    if (ctx->pc != 0x1D7670u) { return; }
    ctx->pc = 0x1D7670u;
    // 0x1d7670: 0xdfbf0000
    ctx->pc = 0x1d7670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7674: 0x2143c
    ctx->pc = 0x1d7674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d7678: 0x2143f
    ctx->pc = 0x1d7678u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d767c: 0x3e00008
    ctx->pc = 0x1D767Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7680u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7684u;
    // 0x1d7684: 0x0
    ctx->pc = 0x1d7684u;
    // NOP
    // 0x1d7688: 0x0
    ctx->pc = 0x1d7688u;
    // NOP
    // 0x1d768c: 0x0
    ctx->pc = 0x1d768cu;
    // NOP
}
