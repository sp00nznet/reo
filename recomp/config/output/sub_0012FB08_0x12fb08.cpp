#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012FB08
// Address: 0x12fb08 - 0x12fb88
void sub_0012FB08_0x12fb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12fb08u;

    // 0x12fb08: 0x3e00008
    ctx->pc = 0x12FB08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FB0Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12FB40u: goto label_12fb40;
            case 0x12FB60u: goto label_12fb60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12FB10u;
    // 0x12fb10: 0x3e00008
    ctx->pc = 0x12FB10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FB14u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12FB40u: goto label_12fb40;
            case 0x12FB60u: goto label_12fb60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12FB18u;
    // 0x12fb18: 0x27bdfff0
    ctx->pc = 0x12fb18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12fb1c: 0xffb00000
    ctx->pc = 0x12fb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12fb20: 0x80802d
    ctx->pc = 0x12fb20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fb24: 0xffbf0008
    ctx->pc = 0x12fb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12fb28: 0xae050044
    ctx->pc = 0x12fb28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 5));
    // 0x12fb2c: 0x8e020080
    ctx->pc = 0x12fb2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x12fb30: 0x10400003
    ctx->pc = 0x12FB30u;
    {
        const bool branch_taken_0x12fb30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12FB34u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12fb30) {
            ctx->pc = 0x12FB40u;
            goto label_12fb40;
        }
    }
    ctx->pc = 0x12FB38u;
    // 0x12fb38: 0xc04b8c8
    ctx->pc = 0x12FB38u;
    SET_GPR_U32(ctx, 31, 0x12FB40u);
    ctx->pc = 0x12E320u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E320_0x12e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FB40u; }
    }
    if (ctx->pc != 0x12FB40u) { return; }
    ctx->pc = 0x12FB40u;
label_12fb40:
    // 0x12fb40: 0xc04b8a0
    ctx->pc = 0x12FB40u;
    SET_GPR_U32(ctx, 31, 0x12FB48u);
    ctx->pc = 0x12FB44u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->pc = 0x12E280u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E280_0x12e280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FB48u; }
    }
    if (ctx->pc != 0x12FB48u) { return; }
    ctx->pc = 0x12FB48u;
    // 0x12fb48: 0x8e030084
    ctx->pc = 0x12fb48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x12fb4c: 0xae020080
    ctx->pc = 0x12fb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x12fb50: 0x10600003
    ctx->pc = 0x12FB50u;
    {
        const bool branch_taken_0x12fb50 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x12FB54u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12fb50) {
            ctx->pc = 0x12FB60u;
            goto label_12fb60;
        }
    }
    ctx->pc = 0x12FB58u;
    // 0x12fb58: 0xc04b8c8
    ctx->pc = 0x12FB58u;
    SET_GPR_U32(ctx, 31, 0x12FB60u);
    ctx->pc = 0x12E320u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E320_0x12e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FB60u; }
    }
    if (ctx->pc != 0x12FB60u) { return; }
    ctx->pc = 0x12FB60u;
label_12fb60:
    // 0x12fb60: 0xc04b8a0
    ctx->pc = 0x12FB60u;
    SET_GPR_U32(ctx, 31, 0x12FB68u);
    ctx->pc = 0x12FB64u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->pc = 0x12E280u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E280_0x12e280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FB68u; }
    }
    if (ctx->pc != 0x12FB68u) { return; }
    ctx->pc = 0x12FB68u;
    // 0x12fb68: 0xae020084
    ctx->pc = 0x12fb68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
    // 0x12fb6c: 0xdfbf0008
    ctx->pc = 0x12fb6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12fb70: 0xdfb00000
    ctx->pc = 0x12fb70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12fb74: 0x3e00008
    ctx->pc = 0x12FB74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FB78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12FB40u: goto label_12fb40;
            case 0x12FB60u: goto label_12fb60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12FB7Cu;
    // 0x12fb7c: 0x0
    ctx->pc = 0x12fb7cu;
    // NOP
    // 0x12fb80: 0x3e00008
    ctx->pc = 0x12FB80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FB84u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12FB40u: goto label_12fb40;
            case 0x12FB60u: goto label_12fb60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12FB88u;
}
