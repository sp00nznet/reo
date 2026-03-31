#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C1C20
// Address: 0x1c1c20 - 0x1c1c70
void sub_001C1C20_0x1c1c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c1c20u;

    // 0x1c1c20: 0x27bdffd0
    ctx->pc = 0x1c1c20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c1c24: 0xffb00000
    ctx->pc = 0x1c1c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c1c28: 0xffb10010
    ctx->pc = 0x1c1c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1c1c2c: 0xffbf0020
    ctx->pc = 0x1c1c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c1c30: 0xc0705ca
    ctx->pc = 0x1C1C30u;
    SET_GPR_U32(ctx, 31, 0x1C1C38u);
    ctx->pc = 0x1C1C34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C1728u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1728_0x1c1728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1C38u; }
    }
    if (ctx->pc != 0x1C1C38u) { return; }
    ctx->pc = 0x1C1C38u;
    // 0x1c1c38: 0xc0705f8
    ctx->pc = 0x1C1C38u;
    SET_GPR_U32(ctx, 31, 0x1C1C40u);
    ctx->pc = 0x1C1C3Cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C17E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C17E0_0x1c17e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1C40u; }
    }
    if (ctx->pc != 0x1C1C40u) { return; }
    ctx->pc = 0x1C1C40u;
    // 0x1c1c40: 0x2403003c
    ctx->pc = 0x1c1c40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 60));
    // 0x1c1c44: 0x200202d
    ctx->pc = 0x1c1c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1c48: 0x431018
    ctx->pc = 0x1c1c48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x1c1c4c: 0xdfbf0020
    ctx->pc = 0x1c1c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1c50: 0xdfb00000
    ctx->pc = 0x1c1c50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1c54: 0x2442fde4
    ctx->pc = 0x1c1c54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966756));
    // 0x1c1c58: 0x2222821
    ctx->pc = 0x1c1c58u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1c1c5c: 0xdfb10010
    ctx->pc = 0x1c1c5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1c60: 0x80706e2
    ctx->pc = 0x1C1C60u;
    ctx->pc = 0x1C1C64u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1C1B88u;
    entry_1c1b88_0x1c1c20(rdram, ctx, runtime); return;
    ctx->pc = 0x1C1C68u;
    // 0x1c1c68: 0x0
    ctx->pc = 0x1c1c68u;
    // NOP
    // 0x1c1c6c: 0x0
    ctx->pc = 0x1c1c6cu;
    // NOP
}
