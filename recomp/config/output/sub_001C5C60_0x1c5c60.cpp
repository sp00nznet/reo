#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C5C60
// Address: 0x1c5c60 - 0x1c5cb0
void sub_001C5C60_0x1c5c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c5c60u;

    // 0x1c5c60: 0x27bdfbe0
    ctx->pc = 0x1c5c60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966240));
    // 0x1c5c64: 0xffbf0010
    ctx->pc = 0x1c5c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c5c68: 0x7fb00000
    ctx->pc = 0x1c5c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c5c6c: 0x80802d
    ctx->pc = 0x1c5c6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5c70: 0x27a40020
    ctx->pc = 0x1c5c70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c5c74: 0xc07172c
    ctx->pc = 0x1C5C74u;
    SET_GPR_U32(ctx, 31, 0x1C5C7Cu);
    ctx->pc = 0x1C5C78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C5CB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5CB0_0x1c5cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5C7Cu; }
    }
    if (ctx->pc != 0x1C5C7Cu) { return; }
    ctx->pc = 0x1C5C7Cu;
    // 0x1c5c7c: 0x92050008
    ctx->pc = 0x1c5c7cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c5c80: 0xc07175c
    ctx->pc = 0x1C5C80u;
    SET_GPR_U32(ctx, 31, 0x1C5C88u);
    ctx->pc = 0x1C5C84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1C5D70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5D70_0x1c5d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5C88u; }
    }
    if (ctx->pc != 0x1C5C88u) { return; }
    ctx->pc = 0x1C5C88u;
    // 0x1c5c88: 0x200202d
    ctx->pc = 0x1c5c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5c8c: 0xc071738
    ctx->pc = 0x1C5C8Cu;
    SET_GPR_U32(ctx, 31, 0x1C5C94u);
    ctx->pc = 0x1C5C90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1C5CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5CE0_0x1c5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5C94u; }
    }
    if (ctx->pc != 0x1C5C94u) { return; }
    ctx->pc = 0x1C5C94u;
    // 0x1c5c94: 0xdfbf0010
    ctx->pc = 0x1c5c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5c98: 0x7bb00000
    ctx->pc = 0x1c5c98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5c9c: 0x3e00008
    ctx->pc = 0x1C5C9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5CA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 1056));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5CA4u;
    // 0x1c5ca4: 0x0
    ctx->pc = 0x1c5ca4u;
    // NOP
    // 0x1c5ca8: 0x0
    ctx->pc = 0x1c5ca8u;
    // NOP
    // 0x1c5cac: 0x0
    ctx->pc = 0x1c5cacu;
    // NOP
}
