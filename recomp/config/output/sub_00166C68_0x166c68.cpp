#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00166C68
// Address: 0x166c68 - 0x166cb8
void sub_00166C68_0x166c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x166c68u;

    // 0x166c68: 0x710c0
    ctx->pc = 0x166c68u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 3));
    // 0x166c6c: 0x27bdfff0
    ctx->pc = 0x166c6cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x166c70: 0x471023
    ctx->pc = 0x166c70u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x166c74: 0xffb00000
    ctx->pc = 0x166c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x166c78: 0x21080
    ctx->pc = 0x166c78u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x166c7c: 0x24050003
    ctx->pc = 0x166c7cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x166c80: 0x471021
    ctx->pc = 0x166c80u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x166c84: 0x24060001
    ctx->pc = 0x166c84u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x166c88: 0x21080
    ctx->pc = 0x166c88u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x166c8c: 0xffbf0008
    ctx->pc = 0x166c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x166c90: 0x828021
    ctx->pc = 0x166c90u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x166c94: 0x200202d
    ctx->pc = 0x166c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166c98: 0xc059b2e
    ctx->pc = 0x166C98u;
    SET_GPR_U32(ctx, 31, 0x166CA0u);
    ctx->pc = 0x166C9Cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
    ctx->pc = 0x166CB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00166CB8_0x166cb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166CA0u; }
    }
    if (ctx->pc != 0x166CA0u) { return; }
    ctx->pc = 0x166CA0u;
    // 0x166ca0: 0x200202d
    ctx->pc = 0x166ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166ca4: 0xdfbf0008
    ctx->pc = 0x166ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x166ca8: 0xdfb00000
    ctx->pc = 0x166ca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166cac: 0x8059b36
    ctx->pc = 0x166CACu;
    ctx->pc = 0x166CB0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x166CD8u;
    entry_166cd8_0x166d08(rdram, ctx, runtime); return;
    ctx->pc = 0x166CB4u;
    // 0x166cb4: 0x0
    ctx->pc = 0x166cb4u;
    // NOP
}
