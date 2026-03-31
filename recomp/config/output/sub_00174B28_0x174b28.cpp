#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00174B28
// Address: 0x174b28 - 0x174bb8
void sub_00174B28_0x174b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x174b28u;

    // 0x174b28: 0x27bdfff0
    ctx->pc = 0x174b28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x174b2c: 0xffbf0000
    ctx->pc = 0x174b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x174b30: 0xc05df24
    ctx->pc = 0x174B30u;
    SET_GPR_U32(ctx, 31, 0x174B38u);
    ctx->pc = 0x174B34u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x177C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177C90_0x177c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174B38u; }
    }
    if (ctx->pc != 0x174B38u) { return; }
    ctx->pc = 0x174B38u;
    // 0x174b38: 0xdfbf0000
    ctx->pc = 0x174b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174b3c: 0x2102b
    ctx->pc = 0x174b3cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x174b40: 0x3e00008
    ctx->pc = 0x174B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174B44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174B90u: goto label_174b90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174B48u;
    // 0x174b48: 0x27bdffe0
    ctx->pc = 0x174b48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x174b4c: 0xffb00000
    ctx->pc = 0x174b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174b50: 0xa0802d
    ctx->pc = 0x174b50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174b54: 0xffb10008
    ctx->pc = 0x174b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x174b58: 0x80882d
    ctx->pc = 0x174b58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174b5c: 0xffbf0010
    ctx->pc = 0x174b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x174b60: 0xc05a78c
    ctx->pc = 0x174B60u;
    SET_GPR_U32(ctx, 31, 0x174B68u);
    ctx->pc = 0x174B64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174B68u; }
    }
    if (ctx->pc != 0x174B68u) { return; }
    ctx->pc = 0x174B68u;
    // 0x174b68: 0x3c05ff00
    ctx->pc = 0x174b68u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x174b6c: 0x10400008
    ctx->pc = 0x174B6Cu;
    {
        const bool branch_taken_0x174b6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x174B70u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x174b6c) {
            ctx->pc = 0x174B90u;
            goto label_174b90;
        }
    }
    ctx->pc = 0x174B74u;
    // 0x174b74: 0xdfb00000
    ctx->pc = 0x174b74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174b78: 0x34a50155
    ctx->pc = 0x174b78u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 341));
    // 0x174b7c: 0xdfb10008
    ctx->pc = 0x174b7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174b80: 0xdfbf0010
    ctx->pc = 0x174b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174b84: 0x805a704
    ctx->pc = 0x174B84u;
    ctx->pc = 0x174B88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x174B8Cu;
    // 0x174b8c: 0x0
    ctx->pc = 0x174b8cu;
    // NOP
label_174b90:
    // 0x174b90: 0x8e242ab0
    ctx->pc = 0x174b90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 10928)));
    // 0x174b94: 0xc05d2ee
    ctx->pc = 0x174B94u;
    SET_GPR_U32(ctx, 31, 0x174B9Cu);
    ctx->pc = 0x174B98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174BB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00174BB8_0x174bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174B9Cu; }
    }
    if (ctx->pc != 0x174B9Cu) { return; }
    ctx->pc = 0x174B9Cu;
    // 0x174b9c: 0x102d
    ctx->pc = 0x174b9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174ba0: 0xdfb00000
    ctx->pc = 0x174ba0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174ba4: 0xdfb10008
    ctx->pc = 0x174ba4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174ba8: 0xdfbf0010
    ctx->pc = 0x174ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174bac: 0x3e00008
    ctx->pc = 0x174BACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174BB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174B90u: goto label_174b90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174BB4u;
    // 0x174bb4: 0x0
    ctx->pc = 0x174bb4u;
    // NOP
}
