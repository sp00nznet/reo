#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00107900
// Address: 0x107900 - 0x107938
void sub_00107900_0x107900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x107900u;

    // 0x107900: 0x27bdfff0
    ctx->pc = 0x107900u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x107904: 0x102d
    ctx->pc = 0x107904u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107908: 0x3a0182d
    ctx->pc = 0x107908u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10790c: 0x10c00007
    ctx->pc = 0x10790Cu;
    {
        const bool branch_taken_0x10790c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x107910u;
        if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 5));
        if (branch_taken_0x10790c) {
            ctx->pc = 0x10792Cu;
            goto label_10792c;
        }
    }
    ctx->pc = 0x107914u;
    // 0x107914: 0x10e00005
    ctx->pc = 0x107914u;
    {
        const bool branch_taken_0x107914 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x107918u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x107914) {
            ctx->pc = 0x10792Cu;
            goto label_10792c;
        }
    }
    ctx->pc = 0x10791Cu;
    // 0x10791c: 0x90c20000
    ctx->pc = 0x10791cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x107920: 0xac620000
    ctx->pc = 0x107920u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x107924: 0x90c20000
    ctx->pc = 0x107924u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x107928: 0x2102b
    ctx->pc = 0x107928u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_10792c:
    // 0x10792c: 0x3e00008
    ctx->pc = 0x10792Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107930u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10792Cu: goto label_10792c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x107934u;
    // 0x107934: 0x0
    ctx->pc = 0x107934u;
    // NOP
}
