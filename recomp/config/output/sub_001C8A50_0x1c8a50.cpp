#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C8A50
// Address: 0x1c8a50 - 0x1c8a90
void sub_001C8A50_0x1c8a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c8a50u;

    // 0x1c8a50: 0x3e00008
    ctx->pc = 0x1C8A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8A54u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8A58u;
    // 0x1c8a58: 0x0
    ctx->pc = 0x1c8a58u;
    // NOP
    // 0x1c8a5c: 0x0
    ctx->pc = 0x1c8a5cu;
    // NOP
    // 0x1c8a60: 0x27bdffe0
    ctx->pc = 0x1c8a60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c8a64: 0x24060001
    ctx->pc = 0x1c8a64u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8a68: 0xffbf0000
    ctx->pc = 0x1c8a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c8a6c: 0xa3a5001f
    ctx->pc = 0x1c8a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 5));
    // 0x1c8a70: 0xc072258
    ctx->pc = 0x1C8A70u;
    SET_GPR_U32(ctx, 31, 0x1C8A78u);
    ctx->pc = 0x1C8A74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 31));
    ctx->pc = 0x1C8960u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8960_0x1c8960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8A78u; }
    }
    if (ctx->pc != 0x1C8A78u) { return; }
    ctx->pc = 0x1C8A78u;
    // 0x1c8a78: 0xdfbf0000
    ctx->pc = 0x1c8a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8a7c: 0x3e00008
    ctx->pc = 0x1C8A7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8A80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8A84u;
    // 0x1c8a84: 0x0
    ctx->pc = 0x1c8a84u;
    // NOP
    // 0x1c8a88: 0x0
    ctx->pc = 0x1c8a88u;
    // NOP
    // 0x1c8a8c: 0x0
    ctx->pc = 0x1c8a8cu;
    // NOP
}
