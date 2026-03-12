#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_003793B0
// Address: 0x3793b0 - 0x379420
void sub_003793B0_0x3793b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3793b0u;

    // 0x3793b0: 0x27bdfff0
    ctx->pc = 0x3793b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3793b4: 0x3c010032
    ctx->pc = 0x3793b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x3793b8: 0xffbf0000
    ctx->pc = 0x3793b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3793bc: 0x90234405
    ctx->pc = 0x3793bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17413)));
    // 0x3793c0: 0x10600014
    ctx->pc = 0x3793C0u;
    {
        const bool branch_taken_0x3793c0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x3793c0) {
            ctx->pc = 0x379414u;
            goto label_379414;
        }
    }
    ctx->pc = 0x3793C8u;
    // 0x3793c8: 0xc063594
    ctx->pc = 0x3793C8u;
    SET_GPR_U32(ctx, 31, 0x3793D0u);
    ctx->pc = 0x18D650u;
    {
        auto targetFn = runtime->lookupFunction(0x18D650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3793D0u; }
        if (ctx->pc != 0x3793D0u) { return; }
    }
    ctx->pc = 0x3793D0u;
    // 0x3793d0: 0xc06eabc
    ctx->pc = 0x3793D0u;
    SET_GPR_U32(ctx, 31, 0x3793D8u);
    ctx->pc = 0x3793D4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x1BAAF0u;
    {
        auto targetFn = runtime->lookupFunction(0x1BAAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3793D8u; }
        if (ctx->pc != 0x3793D8u) { return; }
    }
    ctx->pc = 0x3793D8u;
    // 0x3793d8: 0x3c010032
    ctx->pc = 0x3793d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x3793dc: 0xc06726c
    ctx->pc = 0x3793DCu;
    SET_GPR_U32(ctx, 31, 0x3793E4u);
    ctx->pc = 0x3793E0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17430)));
    ctx->pc = 0x19C9B0u;
    {
        auto targetFn = runtime->lookupFunction(0x19C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3793E4u; }
        if (ctx->pc != 0x3793E4u) { return; }
    }
    ctx->pc = 0x3793E4u;
    // 0x3793e4: 0x3c010032
    ctx->pc = 0x3793e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x3793e8: 0xa0204405
    ctx->pc = 0x3793e8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17413), (uint8_t)GPR_U32(ctx, 0));
    // 0x3793ec: 0x3c010032
    ctx->pc = 0x3793ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x3793f0: 0xa4204416
    ctx->pc = 0x3793f0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 17430), (uint16_t)GPR_U32(ctx, 0));
    // 0x3793f4: 0x3c010032
    ctx->pc = 0x3793f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x3793f8: 0xac204418
    ctx->pc = 0x3793f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17432), GPR_U32(ctx, 0));
    // 0x3793fc: 0x3c010032
    ctx->pc = 0x3793fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x379400: 0x902343c0
    ctx->pc = 0x379400u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17344)));
    // 0x379404: 0x10600003
    ctx->pc = 0x379404u;
    {
        const bool branch_taken_0x379404 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x379404) {
            ctx->pc = 0x379414u;
            goto label_379414;
        }
    }
    ctx->pc = 0x37940Cu;
    // 0x37940c: 0xc0ddecc
    ctx->pc = 0x37940Cu;
    SET_GPR_U32(ctx, 31, 0x379414u);
    ctx->pc = 0x377B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00377B30_0x377b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379414u; }
    }
    if (ctx->pc != 0x379414u) { return; }
    ctx->pc = 0x379414u;
label_379414:
    // 0x379414: 0xdfbf0000
    ctx->pc = 0x379414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379418: 0x3e00008
    ctx->pc = 0x379418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37941Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x379414u: goto label_379414;
            default: break;
        }
        return;
    }
    ctx->pc = 0x379420u;
}
