#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B4A20
// Address: 0x1b4a20 - 0x1b4a60
void sub_001B4A20_0x1b4a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b4a20u;

    // 0x1b4a20: 0x27bdfff0
    ctx->pc = 0x1b4a20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4a24: 0x3c040031
    ctx->pc = 0x1b4a24u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x1b4a28: 0xffbf0000
    ctx->pc = 0x1b4a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4a2c: 0x248451c0
    ctx->pc = 0x1b4a2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20928));
    // 0x1b4a30: 0x282d
    ctx->pc = 0x1b4a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4a34: 0xc041f1a
    ctx->pc = 0x1B4A34u;
    SET_GPR_U32(ctx, 31, 0x1B4A3Cu);
    ctx->pc = 0x1B4A38u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4496));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4A3Cu; }
    }
    if (ctx->pc != 0x1B4A3Cu) { return; }
    ctx->pc = 0x1B4A3Cu;
    // 0x1b4a3c: 0x3c04001b
    ctx->pc = 0x1b4a3cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)27 << 16));
    // 0x1b4a40: 0xc06be80
    ctx->pc = 0x1B4A40u;
    SET_GPR_U32(ctx, 31, 0x1B4A48u);
    ctx->pc = 0x1B4A44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17664));
    ctx->pc = 0x1AFA00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFA00_0x1afa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4A48u; }
    }
    if (ctx->pc != 0x1B4A48u) { return; }
    ctx->pc = 0x1B4A48u;
    // 0x1b4a48: 0xdfbf0000
    ctx->pc = 0x1b4a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4a4c: 0x3e00008
    ctx->pc = 0x1B4A4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4A50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B4A54u;
    // 0x1b4a54: 0x0
    ctx->pc = 0x1b4a54u;
    // NOP
    // 0x1b4a58: 0x0
    ctx->pc = 0x1b4a58u;
    // NOP
    // 0x1b4a5c: 0x0
    ctx->pc = 0x1b4a5cu;
    // NOP
}
