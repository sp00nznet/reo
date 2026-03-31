#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1a5e80
// Address: 0x1a5e80 - 0x1a5eb0
void entry_1a5e80_0x1a5eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a5e80u;

    // 0x1a5e80: 0x27bdfff0
    ctx->pc = 0x1a5e80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a5e84: 0xffbf0000
    ctx->pc = 0x1a5e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a5e88: 0xc06980c
    ctx->pc = 0x1A5E88u;
    SET_GPR_U32(ctx, 31, 0x1A5E90u);
    ctx->pc = 0x1A6030u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6030_0x1a6030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5E90u; }
    }
    if (ctx->pc != 0x1A5E90u) { return; }
    ctx->pc = 0x1A5E90u;
    // 0x1a5e90: 0xc0699c8
    ctx->pc = 0x1A5E90u;
    SET_GPR_U32(ctx, 31, 0x1A5E98u);
    ctx->pc = 0x1A6720u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6720_0x1a6720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5E98u; }
    }
    if (ctx->pc != 0x1A5E98u) { return; }
    ctx->pc = 0x1A5E98u;
    // 0x1a5e98: 0xdfbf0000
    ctx->pc = 0x1a5e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5e9c: 0x3e00008
    ctx->pc = 0x1A5E9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5EA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A5EA4u;
    // 0x1a5ea4: 0x0
    ctx->pc = 0x1a5ea4u;
    // NOP
    // 0x1a5ea8: 0x0
    ctx->pc = 0x1a5ea8u;
    // NOP
    // 0x1a5eac: 0x0
    ctx->pc = 0x1a5eacu;
    // NOP
}
