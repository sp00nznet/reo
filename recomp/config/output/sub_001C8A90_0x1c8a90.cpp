#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C8A90
// Address: 0x1c8a90 - 0x1c8ac0
void sub_001C8A90_0x1c8a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c8a90u;

    // 0x1c8a90: 0x27bdffe0
    ctx->pc = 0x1c8a90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c8a94: 0x24060001
    ctx->pc = 0x1c8a94u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8a98: 0xffbf0000
    ctx->pc = 0x1c8a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c8a9c: 0xc072274
    ctx->pc = 0x1C8A9Cu;
    SET_GPR_U32(ctx, 31, 0x1C8AA4u);
    ctx->pc = 0x1C8AA0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 31));
    ctx->pc = 0x1C89D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C89D0_0x1c89d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8AA4u; }
    }
    if (ctx->pc != 0x1C8AA4u) { return; }
    ctx->pc = 0x1C8AA4u;
    // 0x1c8aa4: 0x93a2001f
    ctx->pc = 0x1c8aa4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 31)));
    // 0x1c8aa8: 0xdfbf0000
    ctx->pc = 0x1c8aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8aac: 0x3e00008
    ctx->pc = 0x1C8AACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8AB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8AB4u;
    // 0x1c8ab4: 0x0
    ctx->pc = 0x1c8ab4u;
    // NOP
    // 0x1c8ab8: 0x0
    ctx->pc = 0x1c8ab8u;
    // NOP
    // 0x1c8abc: 0x0
    ctx->pc = 0x1c8abcu;
    // NOP
}
