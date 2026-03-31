#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012BF10
// Address: 0x12bf10 - 0x12bf98
void sub_0012BF10_0x12bf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12bf10u;

    // 0x12bf10: 0x27bdfff0
    ctx->pc = 0x12bf10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12bf14: 0x3c020021
    ctx->pc = 0x12bf14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x12bf18: 0xffb00000
    ctx->pc = 0x12bf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12bf1c: 0x245004ec
    ctx->pc = 0x12bf1cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 1260));
    // 0x12bf20: 0xffbf0008
    ctx->pc = 0x12bf20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12bf24: 0xc04ac3c
    ctx->pc = 0x12BF24u;
    SET_GPR_U32(ctx, 31, 0x12BF2Cu);
    ctx->pc = 0x12BF28u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x12B0F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B0F0_0x12b0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BF2Cu; }
    }
    if (ctx->pc != 0x12BF2Cu) { return; }
    ctx->pc = 0x12BF2Cu;
    // 0x12bf2c: 0x8e030000
    ctx->pc = 0x12bf2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12bf30: 0x14430003
    ctx->pc = 0x12BF30u;
    {
        const bool branch_taken_0x12bf30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x12bf30) {
            ctx->pc = 0x12BF40u;
            goto label_12bf40;
        }
    }
    ctx->pc = 0x12BF38u;
    // 0x12bf38: 0xc04ac22
    ctx->pc = 0x12BF38u;
    SET_GPR_U32(ctx, 31, 0x12BF40u);
    ctx->pc = 0x12BF3Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x12B088u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B088_0x12b088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BF40u; }
    }
    if (ctx->pc != 0x12BF40u) { return; }
    ctx->pc = 0x12BF40u;
label_12bf40:
    // 0x12bf40: 0xc04ad4c
    ctx->pc = 0x12BF40u;
    SET_GPR_U32(ctx, 31, 0x12BF48u);
    ctx->pc = 0x12B530u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B530_0x12b530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BF48u; }
    }
    if (ctx->pc != 0x12BF48u) { return; }
    ctx->pc = 0x12BF48u;
    // 0x12bf48: 0x3c030021
    ctx->pc = 0x12bf48u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x12bf4c: 0x24040001
    ctx->pc = 0x12bf4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x12bf50: 0x1444000d
    ctx->pc = 0x12BF50u;
    {
        const bool branch_taken_0x12bf50 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x12BF54u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 1264));
        if (branch_taken_0x12bf50) {
            ctx->pc = 0x12BF88u;
            goto label_12bf88;
        }
    }
    ctx->pc = 0x12BF58u;
    // 0x12bf58: 0x8e040000
    ctx->pc = 0x12bf58u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12bf5c: 0xc04ac3c
    ctx->pc = 0x12BF5Cu;
    SET_GPR_U32(ctx, 31, 0x12BF64u);
    ctx->pc = 0x12B0F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B0F0_0x12b0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BF64u; }
    }
    if (ctx->pc != 0x12BF64u) { return; }
    ctx->pc = 0x12BF64u;
    // 0x12bf64: 0x8e030000
    ctx->pc = 0x12bf64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12bf68: 0x54430008
    ctx->pc = 0x12BF68u;
    {
        const bool branch_taken_0x12bf68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x12bf68) {
            ctx->pc = 0x12BF6Cu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x12BF8Cu;
            goto label_12bf8c;
        }
    }
    ctx->pc = 0x12BF70u;
    // 0x12bf70: 0x8e040000
    ctx->pc = 0x12bf70u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12bf74: 0xdfbf0008
    ctx->pc = 0x12bf74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12bf78: 0xdfb00000
    ctx->pc = 0x12bf78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bf7c: 0x804ac22
    ctx->pc = 0x12BF7Cu;
    ctx->pc = 0x12BF80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12B088u;
    sub_0012B088_0x12b088(rdram, ctx, runtime); return;
    ctx->pc = 0x12BF84u;
    // 0x12bf84: 0x0
    ctx->pc = 0x12bf84u;
    // NOP
label_12bf88:
    // 0x12bf88: 0xdfb00000
    ctx->pc = 0x12bf88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12bf8c:
    // 0x12bf8c: 0xdfbf0008
    ctx->pc = 0x12bf8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12bf90: 0x3e00008
    ctx->pc = 0x12BF90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BF94u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12BF40u: goto label_12bf40;
            case 0x12BF88u: goto label_12bf88;
            case 0x12BF8Cu: goto label_12bf8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12BF98u;
}
