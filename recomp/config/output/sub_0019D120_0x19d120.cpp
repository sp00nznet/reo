#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0019D120
// Address: 0x19d120 - 0x19d170
void sub_0019D120_0x19d120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x19d120u;

    // 0x19d120: 0x3c03002a
    ctx->pc = 0x19d120u;
    SET_GPR_U32(ctx, 3, ((uint32_t)42 << 16));
    // 0x19d124: 0x202d
    ctx->pc = 0x19d124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d128: 0x10000008
    ctx->pc = 0x19D128u;
    {
        const bool branch_taken_0x19d128 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D12Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294936192));
        if (branch_taken_0x19d128) {
            ctx->pc = 0x19D14Cu;
            goto label_19d14c;
        }
    }
    ctx->pc = 0x19D130u;
label_19d130:
    // 0x19d130: 0x441023
    ctx->pc = 0x19d130u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19d134: 0x210c0
    ctx->pc = 0x19d134u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x19d138: 0x621021
    ctx->pc = 0x19d138u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19d13c: 0x80420034
    ctx->pc = 0x19d13cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x19d140: 0x10400006
    ctx->pc = 0x19D140u;
    {
        const bool branch_taken_0x19d140 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D144u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x19d140) {
            ctx->pc = 0x19D15Cu;
            goto label_19d15c;
        }
    }
    ctx->pc = 0x19D148u;
    // 0x19d148: 0x24840001
    ctx->pc = 0x19d148u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_19d14c:
    // 0x19d14c: 0x28820100
    ctx->pc = 0x19d14cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 256));
    // 0x19d150: 0x1440fff7
    ctx->pc = 0x19D150u;
    {
        const bool branch_taken_0x19d150 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19D154u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 3));
        if (branch_taken_0x19d150) {
            ctx->pc = 0x19D130u;
            goto label_19d130;
        }
    }
    ctx->pc = 0x19D158u;
    // 0x19d158: 0x24820001
    ctx->pc = 0x19d158u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
label_19d15c:
    // 0x19d15c: 0x3e00008
    ctx->pc = 0x19D15Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19D130u: goto label_19d130;
            case 0x19D14Cu: goto label_19d14c;
            case 0x19D15Cu: goto label_19d15c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19D164u;
    // 0x19d164: 0x0
    ctx->pc = 0x19d164u;
    // NOP
    // 0x19d168: 0x0
    ctx->pc = 0x19d168u;
    // NOP
    // 0x19d16c: 0x0
    ctx->pc = 0x19d16cu;
    // NOP
}
