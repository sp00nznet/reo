#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001ADF50
// Address: 0x1adf50 - 0x1adfd0
void sub_001ADF50_0x1adf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1adf50u;

    // 0x1adf50: 0x27bdffd0
    ctx->pc = 0x1adf50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1adf54: 0x41840
    ctx->pc = 0x1adf54u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1adf58: 0xffbf0020
    ctx->pc = 0x1adf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1adf5c: 0x3c02002c
    ctx->pc = 0x1adf5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x1adf60: 0x7fb10010
    ctx->pc = 0x1adf60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1adf64: 0x641821
    ctx->pc = 0x1adf64u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1adf68: 0x7fb00000
    ctx->pc = 0x1adf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1adf6c: 0x24428d74
    ctx->pc = 0x1adf6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937972));
    // 0x1adf70: 0x380c0
    ctx->pc = 0x1adf70u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1adf74: 0x501021
    ctx->pc = 0x1adf74u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1adf78: 0x8c450000
    ctx->pc = 0x1adf78u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1adf7c: 0xc06b7f4
    ctx->pc = 0x1ADF7Cu;
    SET_GPR_U32(ctx, 31, 0x1ADF84u);
    ctx->pc = 0x1ADF80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ADFD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001ADFD0_0x1adfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADF84u; }
    }
    if (ctx->pc != 0x1ADF84u) { return; }
    ctx->pc = 0x1ADF84u;
    // 0x1adf84: 0x3c02002c
    ctx->pc = 0x1adf84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x1adf88: 0x111880
    ctx->pc = 0x1adf88u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x1adf8c: 0x24428d70
    ctx->pc = 0x1adf8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937968));
    // 0x1adf90: 0x502021
    ctx->pc = 0x1adf90u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1adf94: 0x3c02002c
    ctx->pc = 0x1adf94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x1adf98: 0xa0800000
    ctx->pc = 0x1adf98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1adf9c: 0x24428dc8
    ctx->pc = 0x1adf9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294938056));
    // 0x1adfa0: 0x431021
    ctx->pc = 0x1adfa0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1adfa4: 0x8c440000
    ctx->pc = 0x1adfa4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1adfa8: 0xc04cb94
    ctx->pc = 0x1ADFA8u;
    SET_GPR_U32(ctx, 31, 0x1ADFB0u);
    ctx->pc = 0x1ADFACu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x132E50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E50_0x132e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADFB0u; }
    }
    if (ctx->pc != 0x1ADFB0u) { return; }
    ctx->pc = 0x1ADFB0u;
    // 0x1adfb0: 0xdfbf0020
    ctx->pc = 0x1adfb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1adfb4: 0x102d
    ctx->pc = 0x1adfb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adfb8: 0x7bb10010
    ctx->pc = 0x1adfb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adfbc: 0x7bb00000
    ctx->pc = 0x1adfbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adfc0: 0x3e00008
    ctx->pc = 0x1ADFC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADFC4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ADFC8u;
    // 0x1adfc8: 0x0
    ctx->pc = 0x1adfc8u;
    // NOP
    // 0x1adfcc: 0x0
    ctx->pc = 0x1adfccu;
    // NOP
}
