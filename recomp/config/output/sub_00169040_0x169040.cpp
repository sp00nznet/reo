#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00169040
// Address: 0x169040 - 0x169068
void sub_00169040_0x169040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x169040u;

    // 0x169040: 0x27bdfff0
    ctx->pc = 0x169040u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x169044: 0xffbf0000
    ctx->pc = 0x169044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169048: 0xc05a41a
    ctx->pc = 0x169048u;
    SET_GPR_U32(ctx, 31, 0x169050u);
    ctx->pc = 0x169068u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169068_0x169068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169050u; }
    }
    if (ctx->pc != 0x169050u) { return; }
    ctx->pc = 0x169050u;
    // 0x169050: 0x384201bf
    ctx->pc = 0x169050u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 447));
    // 0x169054: 0xdfbf0000
    ctx->pc = 0x169054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169058: 0x2c420001
    ctx->pc = 0x169058u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x16905c: 0x3e00008
    ctx->pc = 0x16905Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169060u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169064u;
    // 0x169064: 0x0
    ctx->pc = 0x169064u;
    // NOP
}
