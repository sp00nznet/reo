#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A6030
// Address: 0x1a6030 - 0x1a6090
void sub_001A6030_0x1a6030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a6030u;

    // 0x1a6030: 0x27bdfff0
    ctx->pc = 0x1a6030u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a6034: 0x3c04002b
    ctx->pc = 0x1a6034u;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1a6038: 0xffbf0000
    ctx->pc = 0x1a6038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a603c: 0x24840a30
    ctx->pc = 0x1a603cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2608));
    // 0x1a6040: 0xc068608
    ctx->pc = 0x1A6040u;
    SET_GPR_U32(ctx, 31, 0x1A6048u);
    ctx->pc = 0x1A6044u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 36));
    ctx->pc = 0x1A1820u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1820_0x1a1820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6048u; }
    }
    if (ctx->pc != 0x1A6048u) { return; }
    ctx->pc = 0x1A6048u;
    // 0x1a6048: 0x3c04002b
    ctx->pc = 0x1a6048u;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1a604c: 0x24050020
    ctx->pc = 0x1a604cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a6050: 0xc068608
    ctx->pc = 0x1A6050u;
    SET_GPR_U32(ctx, 31, 0x1A6058u);
    ctx->pc = 0x1A6054u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2528));
    ctx->pc = 0x1A1820u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1820_0x1a1820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6058u; }
    }
    if (ctx->pc != 0x1A6058u) { return; }
    ctx->pc = 0x1A6058u;
    // 0x1a6058: 0x3c04002b
    ctx->pc = 0x1a6058u;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1a605c: 0x24050020
    ctx->pc = 0x1a605cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a6060: 0xc068608
    ctx->pc = 0x1A6060u;
    SET_GPR_U32(ctx, 31, 0x1A6068u);
    ctx->pc = 0x1A6064u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2496));
    ctx->pc = 0x1A1820u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1820_0x1a1820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6068u; }
    }
    if (ctx->pc != 0x1A6068u) { return; }
    ctx->pc = 0x1A6068u;
    // 0x1a6068: 0x3c04002b
    ctx->pc = 0x1a6068u;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1a606c: 0x24050020
    ctx->pc = 0x1a606cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a6070: 0xc068608
    ctx->pc = 0x1A6070u;
    SET_GPR_U32(ctx, 31, 0x1A6078u);
    ctx->pc = 0x1A6074u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2464));
    ctx->pc = 0x1A1820u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1820_0x1a1820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6078u; }
    }
    if (ctx->pc != 0x1A6078u) { return; }
    ctx->pc = 0x1A6078u;
    // 0x1a6078: 0xdfbf0000
    ctx->pc = 0x1a6078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a607c: 0x3e00008
    ctx->pc = 0x1A607Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6080u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6084u;
    // 0x1a6084: 0x0
    ctx->pc = 0x1a6084u;
    // NOP
    // 0x1a6088: 0x0
    ctx->pc = 0x1a6088u;
    // NOP
    // 0x1a608c: 0x0
    ctx->pc = 0x1a608cu;
    // NOP
}
