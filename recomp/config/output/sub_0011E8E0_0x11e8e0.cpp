#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011E8E0
// Address: 0x11e8e0 - 0x11e928
void sub_0011E8E0_0x11e8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11e8e0u;

    // 0x11e8e0: 0x27bdffd0
    ctx->pc = 0x11e8e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11e8e4: 0xffb10010
    ctx->pc = 0x11e8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11e8e8: 0xffb00000
    ctx->pc = 0x11e8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11e8ec: 0xffbf0020
    ctx->pc = 0x11e8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11e8f0: 0xc047598
    ctx->pc = 0x11E8F0u;
    SET_GPR_U32(ctx, 31, 0x11E8F8u);
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E8F8u; }
    }
    if (ctx->pc != 0x11E8F8u) { return; }
    ctx->pc = 0x11E8F8u;
    // 0x11e8f8: 0xc047a1c
    ctx->pc = 0x11E8F8u;
    SET_GPR_U32(ctx, 31, 0x11E900u);
    ctx->pc = 0x11E8FCu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E870_0x11e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E900u; }
    }
    if (ctx->pc != 0x11E900u) { return; }
    ctx->pc = 0x11E900u;
    // 0x11e900: 0x12000003
    ctx->pc = 0x11E900u;
    {
        const bool branch_taken_0x11e900 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x11E904u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11e900) {
            ctx->pc = 0x11E910u;
            goto label_11e910;
        }
    }
    ctx->pc = 0x11E908u;
    // 0x11e908: 0xc0475ae
    ctx->pc = 0x11E908u;
    SET_GPR_U32(ctx, 31, 0x11E910u);
    ctx->pc = 0x11D6B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D6B8_0x11d6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E910u; }
    }
    if (ctx->pc != 0x11E910u) { return; }
    ctx->pc = 0x11E910u;
label_11e910:
    // 0x11e910: 0x220102d
    ctx->pc = 0x11e910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e914: 0xdfbf0020
    ctx->pc = 0x11e914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e918: 0xdfb10010
    ctx->pc = 0x11e918u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11e91c: 0xdfb00000
    ctx->pc = 0x11e91cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e920: 0x3e00008
    ctx->pc = 0x11E920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E924u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11E910u: goto label_11e910;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11E928u;
}
