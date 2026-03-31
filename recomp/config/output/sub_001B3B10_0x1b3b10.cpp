#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B3B10
// Address: 0x1b3b10 - 0x1b3b40
void sub_001B3B10_0x1b3b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b3b10u;

    // 0x1b3b10: 0x3c010032
    ctx->pc = 0x1b3b10u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b3b14: 0x94234414
    ctx->pc = 0x1b3b14u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17428)));
    // 0x1b3b18: 0x10600004
    ctx->pc = 0x1B3B18u;
    {
        const bool branch_taken_0x1b3b18 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B3B1Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
        if (branch_taken_0x1b3b18) {
            ctx->pc = 0x1B3B2Cu;
            goto label_1b3b2c;
        }
    }
    ctx->pc = 0x1B3B20u;
    // 0x1b3b20: 0xac24a9e0
    ctx->pc = 0x1b3b20u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945248), GPR_U32(ctx, 4));
    // 0x1b3b24: 0x3c01002c
    ctx->pc = 0x1b3b24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b3b28: 0xac25a9e4
    ctx->pc = 0x1b3b28u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945252), GPR_U32(ctx, 5));
label_1b3b2c:
    // 0x1b3b2c: 0x3e00008
    ctx->pc = 0x1B3B2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B3B2Cu: goto label_1b3b2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B3B34u;
    // 0x1b3b34: 0x0
    ctx->pc = 0x1b3b34u;
    // NOP
    // 0x1b3b38: 0x0
    ctx->pc = 0x1b3b38u;
    // NOP
    // 0x1b3b3c: 0x0
    ctx->pc = 0x1b3b3cu;
    // NOP
}
