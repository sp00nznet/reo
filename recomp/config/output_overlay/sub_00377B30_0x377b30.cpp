#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00377B30
// Address: 0x377b30 - 0x377be0
void sub_00377B30_0x377b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x377b30u;

    // 0x377b30: 0x27bdfff0
    ctx->pc = 0x377b30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x377b34: 0x3c010032
    ctx->pc = 0x377b34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x377b38: 0xffbf0000
    ctx->pc = 0x377b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x377b3c: 0x90234405
    ctx->pc = 0x377b3cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17413)));
    // 0x377b40: 0x14600010
    ctx->pc = 0x377B40u;
    {
        const bool branch_taken_0x377b40 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x377B44u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        if (branch_taken_0x377b40) {
            ctx->pc = 0x377B84u;
            goto label_377b84;
        }
    }
    ctx->pc = 0x377B48u;
    // 0x377b48: 0x8c23f9bc
    ctx->pc = 0x377b48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294965692)));
    // 0x377b4c: 0x310c0
    ctx->pc = 0x377b4cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 3));
    // 0x377b50: 0x3c010032
    ctx->pc = 0x377b50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x377b54: 0x431023
    ctx->pc = 0x377b54u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x377b58: 0x211c0
    ctx->pc = 0x377b58u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 7));
    // 0x377b5c: 0xac224418
    ctx->pc = 0x377b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17432), GPR_U32(ctx, 2));
    // 0x377b60: 0x3c010032
    ctx->pc = 0x377b60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x377b64: 0xc067238
    ctx->pc = 0x377B64u;
    SET_GPR_U32(ctx, 31, 0x377B6Cu);
    ctx->pc = 0x377B68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 17432)));
    ctx->pc = 0x19C8E0u;
    {
        auto targetFn = runtime->lookupFunction(0x19C8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377B6Cu; }
        if (ctx->pc != 0x377B6Cu) { return; }
    }
    ctx->pc = 0x377B6Cu;
    // 0x377b6c: 0x3c010032
    ctx->pc = 0x377b6cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x377b70: 0xa4224416
    ctx->pc = 0x377b70u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 17430), (uint16_t)GPR_U32(ctx, 2));
    // 0x377b74: 0x24020001
    ctx->pc = 0x377b74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x377b78: 0x3c010032
    ctx->pc = 0x377b78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x377b7c: 0xc0ddef8
    ctx->pc = 0x377B7Cu;
    SET_GPR_U32(ctx, 31, 0x377B84u);
    ctx->pc = 0x377B80u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17413), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x377BE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00377BE0_0x377be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377B84u; }
    }
    if (ctx->pc != 0x377B84u) { return; }
    ctx->pc = 0x377B84u;
label_377b84:
    // 0x377b84: 0xdfbf0000
    ctx->pc = 0x377b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377b88: 0x3e00008
    ctx->pc = 0x377B88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377B8Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x377B84u: goto label_377b84;
            case 0x377BC8u: goto label_377bc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x377B90u;
    // 0x377b90: 0x27bdfff0
    ctx->pc = 0x377b90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x377b94: 0x3c010032
    ctx->pc = 0x377b94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x377b98: 0xffbf0000
    ctx->pc = 0x377b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x377b9c: 0x90234405
    ctx->pc = 0x377b9cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17413)));
    // 0x377ba0: 0x10600009
    ctx->pc = 0x377BA0u;
    {
        const bool branch_taken_0x377ba0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x377BA4u;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x377ba0) {
            ctx->pc = 0x377BC8u;
            goto label_377bc8;
        }
    }
    ctx->pc = 0x377BA8u;
    // 0x377ba8: 0xc06726c
    ctx->pc = 0x377BA8u;
    SET_GPR_U32(ctx, 31, 0x377BB0u);
    ctx->pc = 0x377BACu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17430)));
    ctx->pc = 0x19C9B0u;
    {
        auto targetFn = runtime->lookupFunction(0x19C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377BB0u; }
        if (ctx->pc != 0x377BB0u) { return; }
    }
    ctx->pc = 0x377BB0u;
    // 0x377bb0: 0x3c010032
    ctx->pc = 0x377bb0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x377bb4: 0xa0204405
    ctx->pc = 0x377bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17413), (uint8_t)GPR_U32(ctx, 0));
    // 0x377bb8: 0x3c010032
    ctx->pc = 0x377bb8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x377bbc: 0xa4204416
    ctx->pc = 0x377bbcu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 17430), (uint16_t)GPR_U32(ctx, 0));
    // 0x377bc0: 0x3c010032
    ctx->pc = 0x377bc0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x377bc4: 0xac204418
    ctx->pc = 0x377bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17432), GPR_U32(ctx, 0));
label_377bc8:
    // 0x377bc8: 0xdfbf0000
    ctx->pc = 0x377bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377bcc: 0x3e00008
    ctx->pc = 0x377BCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377BD0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x377B84u: goto label_377b84;
            case 0x377BC8u: goto label_377bc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x377BD4u;
    // 0x377bd4: 0x0
    ctx->pc = 0x377bd4u;
    // NOP
    // 0x377bd8: 0x0
    ctx->pc = 0x377bd8u;
    // NOP
    // 0x377bdc: 0x0
    ctx->pc = 0x377bdcu;
    // NOP
}
