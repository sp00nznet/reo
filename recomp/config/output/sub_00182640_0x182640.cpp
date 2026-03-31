#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00182640
// Address: 0x182640 - 0x182688
void sub_00182640_0x182640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x182640u;

    // 0x182640: 0x80282d
    ctx->pc = 0x182640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182644: 0x302d
    ctx->pc = 0x182644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182648: 0x80a20000
    ctx->pc = 0x182648u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18264c: 0x1040000b
    ctx->pc = 0x18264Cu;
    {
        const bool branch_taken_0x18264c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x182650u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        if (branch_taken_0x18264c) {
            ctx->pc = 0x18267Cu;
            goto label_18267c;
        }
    }
    ctx->pc = 0x182654u;
    // 0x182654: 0x2407002f
    ctx->pc = 0x182654u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 47));
label_182658:
    // 0x182658: 0x31600
    ctx->pc = 0x182658u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 24));
    // 0x18265c: 0x24c30001
    ctx->pc = 0x18265cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 1));
    // 0x182660: 0x24a50001
    ctx->pc = 0x182660u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x182664: 0x21603
    ctx->pc = 0x182664u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x182668: 0x80a40000
    ctx->pc = 0x182668u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18266c: 0x471026
    ctx->pc = 0x18266cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x182670: 0x62300a
    ctx->pc = 0x182670u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 3));
    // 0x182674: 0x1480fff8
    ctx->pc = 0x182674u;
    {
        const bool branch_taken_0x182674 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x182678u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        if (branch_taken_0x182674) {
            ctx->pc = 0x182658u;
            goto label_182658;
        }
    }
    ctx->pc = 0x18267Cu;
label_18267c:
    // 0x18267c: 0x3e00008
    ctx->pc = 0x18267Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182680u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182658u: goto label_182658;
            case 0x18267Cu: goto label_18267c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x182684u;
    // 0x182684: 0x0
    ctx->pc = 0x182684u;
    // NOP
}
