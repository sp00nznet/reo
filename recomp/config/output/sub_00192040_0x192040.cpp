#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00192040
// Address: 0x192040 - 0x1920a0
void sub_00192040_0x192040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x192040u;

    // 0x192040: 0x27bdff90
    ctx->pc = 0x192040u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x192044: 0x3c027000
    ctx->pc = 0x192044u;
    SET_GPR_U32(ctx, 2, ((uint32_t)28672 << 16));
    // 0x192048: 0xffbf0020
    ctx->pc = 0x192048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19204c: 0x34463f40
    ctx->pc = 0x19204cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 16192));
    // 0x192050: 0x7fb10010
    ctx->pc = 0x192050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x192054: 0x7fb00000
    ctx->pc = 0x192054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x192058: 0x80882d
    ctx->pc = 0x192058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19205c: 0xa0802d
    ctx->pc = 0x19205cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192060: 0x27a40030
    ctx->pc = 0x192060u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x192064: 0xc0644a0
    ctx->pc = 0x192064u;
    SET_GPR_U32(ctx, 31, 0x19206Cu);
    ctx->pc = 0x192068u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 14080));
    ctx->pc = 0x191280u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00191280_0x191280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19206Cu; }
    }
    if (ctx->pc != 0x19206Cu) { return; }
    ctx->pc = 0x19206Cu;
    // 0x19206c: 0x3c050029
    ctx->pc = 0x19206cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)41 << 16));
    // 0x192070: 0x27a40030
    ctx->pc = 0x192070u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x192074: 0xc0644c0
    ctx->pc = 0x192074u;
    SET_GPR_U32(ctx, 31, 0x19207Cu);
    ctx->pc = 0x192078u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 19840));
    ctx->pc = 0x191300u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00191300_0x191300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19207Cu; }
    }
    if (ctx->pc != 0x19207Cu) { return; }
    ctx->pc = 0x19207Cu;
    // 0x19207c: 0x220202d
    ctx->pc = 0x19207cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192080: 0x200282d
    ctx->pc = 0x192080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192084: 0xc0646ac
    ctx->pc = 0x192084u;
    SET_GPR_U32(ctx, 31, 0x19208Cu);
    ctx->pc = 0x192088u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x191AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00191AB0_0x191ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19208Cu; }
    }
    if (ctx->pc != 0x19208Cu) { return; }
    ctx->pc = 0x19208Cu;
    // 0x19208c: 0xdfbf0020
    ctx->pc = 0x19208cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192090: 0x7bb10010
    ctx->pc = 0x192090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192094: 0x7bb00000
    ctx->pc = 0x192094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192098: 0x3e00008
    ctx->pc = 0x192098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19209Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1920A0u;
}
