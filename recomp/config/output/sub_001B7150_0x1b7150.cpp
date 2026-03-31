#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B7150
// Address: 0x1b7150 - 0x1b71d0
void sub_001B7150_0x1b7150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b7150u;

    // 0x1b7150: 0x27bdffc0
    ctx->pc = 0x1b7150u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b7154: 0xffbf0030
    ctx->pc = 0x1b7154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b7158: 0x7fb10020
    ctx->pc = 0x1b7158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b715c: 0x7fb00010
    ctx->pc = 0x1b715cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b7160: 0x80882d
    ctx->pc = 0x1b7160u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7164: 0x10000010
    ctx->pc = 0x1B7164u;
    {
        const bool branch_taken_0x1b7164 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B7168u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b7164) {
            ctx->pc = 0x1B71A8u;
            goto label_1b71a8;
        }
    }
    ctx->pc = 0x1B716Cu;
label_1b716c:
    // 0x1b716c: 0x103180
    ctx->pc = 0x1b716cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 16), 6));
    // 0x1b7170: 0xffa20000
    ctx->pc = 0x1b7170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1b7174: 0xa0202d
    ctx->pc = 0x1b7174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7178: 0x8e230034
    ctx->pc = 0x1b7178u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1b717c: 0x24070001
    ctx->pc = 0x1b717cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7180: 0x8e220058
    ctx->pc = 0x1b7180u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1b7184: 0x402d
    ctx->pc = 0x1b7184u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7188: 0x482d
    ctx->pc = 0x1b7188u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b718c: 0x502d
    ctx->pc = 0x1b718cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7190: 0x240b0008
    ctx->pc = 0x1b7190u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b7194: 0x662821
    ctx->pc = 0x1b7194u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1b7198: 0xc06dbf4
    ctx->pc = 0x1B7198u;
    SET_GPR_U32(ctx, 31, 0x1B71A0u);
    ctx->pc = 0x1B719Cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->pc = 0x1B6FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6FD0_0x1b6fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B71A0u; }
    }
    if (ctx->pc != 0x1B71A0u) { return; }
    ctx->pc = 0x1B71A0u;
    // 0x1b71a0: 0x40282d
    ctx->pc = 0x1b71a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b71a4: 0x26100001
    ctx->pc = 0x1b71a4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1b71a8:
    // 0x1b71a8: 0x8e220024
    ctx->pc = 0x1b71a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1b71ac: 0x202102b
    ctx->pc = 0x1b71acu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1b71b0: 0x1440ffee
    ctx->pc = 0x1B71B0u;
    {
        const bool branch_taken_0x1b71b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B71B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1b71b0) {
            ctx->pc = 0x1B716Cu;
            goto label_1b716c;
        }
    }
    ctx->pc = 0x1B71B8u;
    // 0x1b71b8: 0xdfbf0030
    ctx->pc = 0x1b71b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b71bc: 0xa0102d
    ctx->pc = 0x1b71bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b71c0: 0x7bb10020
    ctx->pc = 0x1b71c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b71c4: 0x7bb00010
    ctx->pc = 0x1b71c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b71c8: 0x3e00008
    ctx->pc = 0x1B71C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B71CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B716Cu: goto label_1b716c;
            case 0x1B71A8u: goto label_1b71a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B71D0u;
}
