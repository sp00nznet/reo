#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A2BE0
// Address: 0x1a2be0 - 0x1a2c10
void sub_001A2BE0_0x1a2be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a2be0u;

    // 0x1a2be0: 0x27bdfff0
    ctx->pc = 0x1a2be0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a2be4: 0x3c01002b
    ctx->pc = 0x1a2be4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a2be8: 0xffbf0000
    ctx->pc = 0x1a2be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a2bec: 0xc068b04
    ctx->pc = 0x1A2BECu;
    SET_GPR_U32(ctx, 31, 0x1A2BF4u);
    ctx->pc = 0x1A2BF0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294967256), GPR_U32(ctx, 0));
    ctx->pc = 0x1A2C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2C10_0x1a2c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2BF4u; }
    }
    if (ctx->pc != 0x1A2BF4u) { return; }
    ctx->pc = 0x1A2BF4u;
    // 0x1a2bf4: 0x3c01002b
    ctx->pc = 0x1a2bf4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a2bf8: 0xdfbf0000
    ctx->pc = 0x1a2bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2bfc: 0x8c22ffd8
    ctx->pc = 0x1a2bfcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294967256)));
    // 0x1a2c00: 0x3e00008
    ctx->pc = 0x1A2C00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2C04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A2C08u;
    // 0x1a2c08: 0x0
    ctx->pc = 0x1a2c08u;
    // NOP
    // 0x1a2c0c: 0x0
    ctx->pc = 0x1a2c0cu;
    // NOP
}
