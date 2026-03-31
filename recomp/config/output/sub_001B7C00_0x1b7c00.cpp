#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B7C00
// Address: 0x1b7c00 - 0x1b7c90
void sub_001B7C00_0x1b7c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b7c00u;

    // 0x1b7c00: 0x1000001e
    ctx->pc = 0x1B7C00u;
    {
        const bool branch_taken_0x1b7c00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B7C04u;
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x1b7c00) {
            ctx->pc = 0x1B7C7Cu;
            goto label_1b7c7c;
        }
    }
    ctx->pc = 0x1B7C08u;
label_1b7c08:
    // 0x1b7c08: 0x90870000
    ctx->pc = 0x1b7c08u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b7c0c: 0x28e30080
    ctx->pc = 0x1b7c0cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 7), 128));
    // 0x1b7c10: 0x14600004
    ctx->pc = 0x1B7C10u;
    {
        const bool branch_taken_0x1b7c10 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B7C14u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 7), 224));
        if (branch_taken_0x1b7c10) {
            ctx->pc = 0x1B7C24u;
            goto label_1b7c24;
        }
    }
    ctx->pc = 0x1B7C18u;
    // 0x1b7c18: 0x28e100a0
    ctx->pc = 0x1b7c18u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 7), 160));
    // 0x1b7c1c: 0x14200006
    ctx->pc = 0x1B7C1Cu;
    {
        const bool branch_taken_0x1b7c1c = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b7c1c) {
            ctx->pc = 0x1B7C38u;
            goto label_1b7c38;
        }
    }
    ctx->pc = 0x1B7C24u;
label_1b7c24:
    // 0x1b7c24: 0x1460000a
    ctx->pc = 0x1B7C24u;
    {
        const bool branch_taken_0x1b7c24 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b7c24) {
            ctx->pc = 0x1B7C50u;
            goto label_1b7c50;
        }
    }
    ctx->pc = 0x1B7C2Cu;
    // 0x1b7c2c: 0x28e10100
    ctx->pc = 0x1b7c2cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 7), 256));
    // 0x1b7c30: 0x10200007
    ctx->pc = 0x1B7C30u;
    {
        const bool branch_taken_0x1b7c30 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b7c30) {
            ctx->pc = 0x1B7C50u;
            goto label_1b7c50;
        }
    }
    ctx->pc = 0x1B7C38u;
label_1b7c38:
    // 0x1b7c38: 0xa0a60000
    ctx->pc = 0x1b7c38u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x1b7c3c: 0x90830001
    ctx->pc = 0x1b7c3cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1b7c40: 0xa0a30001
    ctx->pc = 0x1b7c40u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b7c44: 0x24840002
    ctx->pc = 0x1b7c44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
    // 0x1b7c48: 0x1000000b
    ctx->pc = 0x1B7C48u;
    {
        const bool branch_taken_0x1b7c48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B7C4Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
        if (branch_taken_0x1b7c48) {
            ctx->pc = 0x1B7C78u;
            goto label_1b7c78;
        }
    }
    ctx->pc = 0x1B7C50u;
label_1b7c50:
    // 0x1b7c50: 0x3c010023
    ctx->pc = 0x1b7c50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1b7c54: 0x63040
    ctx->pc = 0x1b7c54u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 1));
    // 0x1b7c58: 0x8c2347e8
    ctx->pc = 0x1b7c58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 18408)));
    // 0x1b7c5c: 0x24840001
    ctx->pc = 0x1b7c5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b7c60: 0x663021
    ctx->pc = 0x1b7c60u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1b7c64: 0x90c30000
    ctx->pc = 0x1b7c64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b7c68: 0xa0a30000
    ctx->pc = 0x1b7c68u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b7c6c: 0x90c30001
    ctx->pc = 0x1b7c6cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x1b7c70: 0xa0a30001
    ctx->pc = 0x1b7c70u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b7c74: 0x24a50002
    ctx->pc = 0x1b7c74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
label_1b7c78:
    // 0x1b7c78: 0x90860000
    ctx->pc = 0x1b7c78u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1b7c7c:
    // 0x1b7c7c: 0x14c0ffe2
    ctx->pc = 0x1B7C7Cu;
    {
        const bool branch_taken_0x1b7c7c = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b7c7c) {
            ctx->pc = 0x1B7C08u;
            goto label_1b7c08;
        }
    }
    ctx->pc = 0x1B7C84u;
    // 0x1b7c84: 0x3e00008
    ctx->pc = 0x1B7C84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7C88u;
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B7C08u: goto label_1b7c08;
            case 0x1B7C24u: goto label_1b7c24;
            case 0x1B7C38u: goto label_1b7c38;
            case 0x1B7C50u: goto label_1b7c50;
            case 0x1B7C78u: goto label_1b7c78;
            case 0x1B7C7Cu: goto label_1b7c7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B7C8Cu;
    // 0x1b7c8c: 0x0
    ctx->pc = 0x1b7c8cu;
    // NOP
}
