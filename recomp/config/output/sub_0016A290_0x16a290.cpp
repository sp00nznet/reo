#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016A290
// Address: 0x16a290 - 0x16a2f8
void sub_0016A290_0x16a290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16a290u;

    // 0x16a290: 0x27bdffc0
    ctx->pc = 0x16a290u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16a294: 0xffb00020
    ctx->pc = 0x16a294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x16a298: 0xc0802d
    ctx->pc = 0x16a298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a29c: 0xffb10028
    ctx->pc = 0x16a29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x16a2a0: 0x100882d
    ctx->pc = 0x16a2a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a2a4: 0xffb20030
    ctx->pc = 0x16a2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x16a2a8: 0xa0902d
    ctx->pc = 0x16a2a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a2ac: 0xffbf0038
    ctx->pc = 0x16a2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x16a2b0: 0x3a0302d
    ctx->pc = 0x16a2b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a2b4: 0xc059bfa
    ctx->pc = 0x16A2B4u;
    SET_GPR_U32(ctx, 31, 0x16A2BCu);
    ctx->pc = 0x16A2B8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 6900)));
    ctx->pc = 0x166FE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00166FE8_0x166fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A2BCu; }
    }
    if (ctx->pc != 0x16A2BCu) { return; }
    ctx->pc = 0x16A2BCu;
    // 0x16a2bc: 0x54400009
    ctx->pc = 0x16A2BCu;
    {
        const bool branch_taken_0x16a2bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16a2bc) {
            ctx->pc = 0x16A2C0u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->pc = 0x16A2E4u;
            goto label_16a2e4;
        }
    }
    ctx->pc = 0x16A2C4u;
    // 0x16a2c4: 0x8fa30004
    ctx->pc = 0x16a2c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x16a2c8: 0x8fa4000c
    ctx->pc = 0x16a2c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x16a2cc: 0x8fa50000
    ctx->pc = 0x16a2ccu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a2d0: 0x642021
    ctx->pc = 0x16a2d0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16a2d4: 0xae030000
    ctx->pc = 0x16a2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x16a2d8: 0xae450000
    ctx->pc = 0x16a2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x16a2dc: 0xae240000
    ctx->pc = 0x16a2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x16a2e0: 0xdfb00020
    ctx->pc = 0x16a2e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16a2e4:
    // 0x16a2e4: 0xdfb10028
    ctx->pc = 0x16a2e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16a2e8: 0xdfb20030
    ctx->pc = 0x16a2e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16a2ec: 0xdfbf0038
    ctx->pc = 0x16a2ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16a2f0: 0x3e00008
    ctx->pc = 0x16A2F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A2F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16A2E4u: goto label_16a2e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16A2F8u;
}
