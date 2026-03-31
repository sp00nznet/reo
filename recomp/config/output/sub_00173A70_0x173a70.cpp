#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00173A70
// Address: 0x173a70 - 0x173af0
void sub_00173A70_0x173a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x173a70u;

    // 0x173a70: 0x27bdfff0
    ctx->pc = 0x173a70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x173a74: 0xffb00000
    ctx->pc = 0x173a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x173a78: 0xffbf0008
    ctx->pc = 0x173a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x173a7c: 0xc05a78c
    ctx->pc = 0x173A7Cu;
    SET_GPR_U32(ctx, 31, 0x173A84u);
    ctx->pc = 0x173A80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173A84u; }
    }
    if (ctx->pc != 0x173A84u) { return; }
    ctx->pc = 0x173A84u;
    // 0x173a84: 0x3c05ff00
    ctx->pc = 0x173a84u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x173a88: 0x200202d
    ctx->pc = 0x173a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173a8c: 0x10400006
    ctx->pc = 0x173A8Cu;
    {
        const bool branch_taken_0x173a8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x173A90u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 306));
        if (branch_taken_0x173a8c) {
            ctx->pc = 0x173AA8u;
            goto label_173aa8;
        }
    }
    ctx->pc = 0x173A94u;
    // 0x173a94: 0xdfb00000
    ctx->pc = 0x173a94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173a98: 0x202d
    ctx->pc = 0x173a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173a9c: 0xdfbf0008
    ctx->pc = 0x173a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173aa0: 0x805a704
    ctx->pc = 0x173AA0u;
    ctx->pc = 0x173AA4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x173AA8u;
label_173aa8:
    // 0x173aa8: 0xc05d58a
    ctx->pc = 0x173AA8u;
    SET_GPR_U32(ctx, 31, 0x173AB0u);
    ctx->pc = 0x173AACu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 47));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173AB0u; }
    }
    if (ctx->pc != 0x173AB0u) { return; }
    ctx->pc = 0x173AB0u;
    // 0x173ab0: 0x24030001
    ctx->pc = 0x173ab0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x173ab4: 0x14430006
    ctx->pc = 0x173AB4u;
    {
        const bool branch_taken_0x173ab4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x173AB8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x173ab4) {
            ctx->pc = 0x173AD0u;
            goto label_173ad0;
        }
    }
    ctx->pc = 0x173ABCu;
    // 0x173abc: 0xc05c8b0
    ctx->pc = 0x173ABCu;
    SET_GPR_U32(ctx, 31, 0x173AC4u);
    ctx->pc = 0x1722C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001722C0_0x1722c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173AC4u; }
    }
    if (ctx->pc != 0x173AC4u) { return; }
    ctx->pc = 0x173AC4u;
    // 0x173ac4: 0x10000005
    ctx->pc = 0x173AC4u;
    {
        const bool branch_taken_0x173ac4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x173AC8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x173ac4) {
            ctx->pc = 0x173ADCu;
            goto label_173adc;
        }
    }
    ctx->pc = 0x173ACCu;
    // 0x173acc: 0x0
    ctx->pc = 0x173accu;
    // NOP
label_173ad0:
    // 0x173ad0: 0xc05cebc
    ctx->pc = 0x173AD0u;
    SET_GPR_U32(ctx, 31, 0x173AD8u);
    ctx->pc = 0x173AF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00173AF0_0x173af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173AD8u; }
    }
    if (ctx->pc != 0x173AD8u) { return; }
    ctx->pc = 0x173AD8u;
    // 0x173ad8: 0x24030001
    ctx->pc = 0x173ad8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_173adc:
    // 0x173adc: 0xdfbf0008
    ctx->pc = 0x173adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173ae0: 0xae030044
    ctx->pc = 0x173ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x173ae4: 0xdfb00000
    ctx->pc = 0x173ae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173ae8: 0x3e00008
    ctx->pc = 0x173AE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173AECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173AA8u: goto label_173aa8;
            case 0x173AD0u: goto label_173ad0;
            case 0x173ADCu: goto label_173adc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173AF0u;
}
