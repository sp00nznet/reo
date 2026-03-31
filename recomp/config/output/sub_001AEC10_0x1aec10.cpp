#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AEC10
// Address: 0x1aec10 - 0x1aec50
void sub_001AEC10_0x1aec10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1aec10u;

    // 0x1aec10: 0x27bdfff0
    ctx->pc = 0x1aec10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aec14: 0x3c04002c
    ctx->pc = 0x1aec14u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x1aec18: 0xffbf0000
    ctx->pc = 0x1aec18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aec1c: 0x24848e50
    ctx->pc = 0x1aec1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294938192));
    // 0x1aec20: 0x282d
    ctx->pc = 0x1aec20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aec24: 0xc041f1a
    ctx->pc = 0x1AEC24u;
    SET_GPR_U32(ctx, 31, 0x1AEC2Cu);
    ctx->pc = 0x1AEC28u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC2Cu; }
    }
    if (ctx->pc != 0x1AEC2Cu) { return; }
    ctx->pc = 0x1AEC2Cu;
    // 0x1aec2c: 0x3c01002c
    ctx->pc = 0x1aec2cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1aec30: 0xac208dd8
    ctx->pc = 0x1aec30u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938072), GPR_U32(ctx, 0));
    // 0x1aec34: 0x3c01002c
    ctx->pc = 0x1aec34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1aec38: 0xac208de0
    ctx->pc = 0x1aec38u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938080), GPR_U32(ctx, 0));
    // 0x1aec3c: 0xdfbf0000
    ctx->pc = 0x1aec3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aec40: 0x3e00008
    ctx->pc = 0x1AEC40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEC44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AEC48u;
    // 0x1aec48: 0x0
    ctx->pc = 0x1aec48u;
    // NOP
    // 0x1aec4c: 0x0
    ctx->pc = 0x1aec4cu;
    // NOP
}
