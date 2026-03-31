#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C8B20
// Address: 0x1c8b20 - 0x1c8b50
void sub_001C8B20_0x1c8b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c8b20u;

    // 0x1c8b20: 0x27bdffe0
    ctx->pc = 0x1c8b20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c8b24: 0x24060002
    ctx->pc = 0x1c8b24u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8b28: 0xffbf0000
    ctx->pc = 0x1c8b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c8b2c: 0xc072274
    ctx->pc = 0x1C8B2Cu;
    SET_GPR_U32(ctx, 31, 0x1C8B34u);
    ctx->pc = 0x1C8B30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 30));
    ctx->pc = 0x1C89D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C89D0_0x1c89d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8B34u; }
    }
    if (ctx->pc != 0x1C8B34u) { return; }
    ctx->pc = 0x1C8B34u;
    // 0x1c8b34: 0x97a2001e
    ctx->pc = 0x1c8b34u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 30)));
    // 0x1c8b38: 0xdfbf0000
    ctx->pc = 0x1c8b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8b3c: 0x3e00008
    ctx->pc = 0x1C8B3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8B40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8B44u;
    // 0x1c8b44: 0x0
    ctx->pc = 0x1c8b44u;
    // NOP
    // 0x1c8b48: 0x0
    ctx->pc = 0x1c8b48u;
    // NOP
    // 0x1c8b4c: 0x0
    ctx->pc = 0x1c8b4cu;
    // NOP
}
