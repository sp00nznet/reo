#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B05B0
// Address: 0x1b05b0 - 0x1b06a0
void sub_001B05B0_0x1b05b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b05b0u;

    // 0x1b05b0: 0x27bdffe0
    ctx->pc = 0x1b05b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b05b4: 0xffbf0000
    ctx->pc = 0x1b05b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b05b8: 0xc073494
    ctx->pc = 0x1B05B8u;
    SET_GPR_U32(ctx, 31, 0x1B05C0u);
    ctx->pc = 0x1B05BCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CD250u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD250_0x1cd250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B05C0u; }
    }
    if (ctx->pc != 0x1B05C0u) { return; }
    ctx->pc = 0x1B05C0u;
    // 0x1b05c0: 0xafa2001c
    ctx->pc = 0x1b05c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x1b05c4: 0x8fa3001c
    ctx->pc = 0x1b05c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1b05c8: 0x10600012
    ctx->pc = 0x1B05C8u;
    {
        const bool branch_taken_0x1b05c8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B05CCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1b05c8) {
            ctx->pc = 0x1B0614u;
            goto label_1b0614;
        }
    }
    ctx->pc = 0x1B05D0u;
    // 0x1b05d0: 0xc06bc78
    ctx->pc = 0x1B05D0u;
    SET_GPR_U32(ctx, 31, 0x1B05D8u);
    ctx->pc = 0x1B05D4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x1AF1E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF1E0_0x1af1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B05D8u; }
    }
    if (ctx->pc != 0x1B05D8u) { return; }
    ctx->pc = 0x1B05D8u;
    // 0x1b05d8: 0x24040063
    ctx->pc = 0x1b05d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 99));
    // 0x1b05dc: 0xc06bde0
    ctx->pc = 0x1B05DCu;
    SET_GPR_U32(ctx, 31, 0x1B05E4u);
    ctx->pc = 0x1B05E0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)1 << 16));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B05E4u; }
    }
    if (ctx->pc != 0x1B05E4u) { return; }
    ctx->pc = 0x1B05E4u;
    // 0x1b05e4: 0x2404006c
    ctx->pc = 0x1b05e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 108));
    // 0x1b05e8: 0xc06bde0
    ctx->pc = 0x1B05E8u;
    SET_GPR_U32(ctx, 31, 0x1B05F0u);
    ctx->pc = 0x1B05ECu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B05F0u; }
    }
    if (ctx->pc != 0x1B05F0u) { return; }
    ctx->pc = 0x1B05F0u;
    // 0x1b05f0: 0x24040001
    ctx->pc = 0x1b05f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b05f4: 0xc0675c8
    ctx->pc = 0x1B05F4u;
    SET_GPR_U32(ctx, 31, 0x1B05FCu);
    ctx->pc = 0x1B05F8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 28));
    ctx->pc = 0x19D720u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D720_0x19d720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B05FCu; }
    }
    if (ctx->pc != 0x1B05FCu) { return; }
    ctx->pc = 0x1B05FCu;
    // 0x1b05fc: 0x8fa5001c
    ctx->pc = 0x1b05fcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1b0600: 0xc06bde0
    ctx->pc = 0x1B0600u;
    SET_GPR_U32(ctx, 31, 0x1B0608u);
    ctx->pc = 0x1B0604u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0608u; }
    }
    if (ctx->pc != 0x1B0608u) { return; }
    ctx->pc = 0x1B0608u;
    // 0x1b0608: 0x3c040023
    ctx->pc = 0x1b0608u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x1b060c: 0xc06ae18
    ctx->pc = 0x1B060Cu;
    SET_GPR_U32(ctx, 31, 0x1B0614u);
    ctx->pc = 0x1B0610u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17312));
    ctx->pc = 0x1AB860u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB860_0x1ab860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0614u; }
    }
    if (ctx->pc != 0x1B0614u) { return; }
    ctx->pc = 0x1B0614u;
label_1b0614:
    // 0x1b0614: 0xdfbf0000
    ctx->pc = 0x1b0614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0618: 0x3e00008
    ctx->pc = 0x1B0618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B061Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B0614u: goto label_1b0614;
            case 0x1B064Cu: goto label_1b064c;
            case 0x1B0688u: goto label_1b0688;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B0620u;
    // 0x1b0620: 0x27bdfff0
    ctx->pc = 0x1b0620u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b0624: 0x24040001
    ctx->pc = 0x1b0624u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0628: 0xffbf0000
    ctx->pc = 0x1b0628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b062c: 0x3c01002c
    ctx->pc = 0x1b062cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b0630: 0xac248df8
    ctx->pc = 0x1b0630u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938104), GPR_U32(ctx, 4));
    // 0x1b0634: 0x3c01002c
    ctx->pc = 0x1b0634u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b0638: 0x8c238df0
    ctx->pc = 0x1b0638u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294938096)));
    // 0x1b063c: 0x14600003
    ctx->pc = 0x1B063Cu;
    {
        const bool branch_taken_0x1b063c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B0640u;
        SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
        if (branch_taken_0x1b063c) {
            ctx->pc = 0x1B064Cu;
            goto label_1b064c;
        }
    }
    ctx->pc = 0x1B0644u;
    // 0x1b0644: 0xc072e30
    ctx->pc = 0x1B0644u;
    SET_GPR_U32(ctx, 31, 0x1B064Cu);
    ctx->pc = 0x1B0648u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938096), GPR_U32(ctx, 4));
    ctx->pc = 0x1CB8C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CB8C0_0x1cb8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B064Cu; }
    }
    if (ctx->pc != 0x1B064Cu) { return; }
    ctx->pc = 0x1B064Cu;
label_1b064c:
    // 0x1b064c: 0xdfbf0000
    ctx->pc = 0x1b064cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0650: 0x3e00008
    ctx->pc = 0x1B0650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0654u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B0614u: goto label_1b0614;
            case 0x1B064Cu: goto label_1b064c;
            case 0x1B0688u: goto label_1b0688;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B0658u;
    // 0x1b0658: 0x0
    ctx->pc = 0x1b0658u;
    // NOP
    // 0x1b065c: 0x0
    ctx->pc = 0x1b065cu;
    // NOP
    // 0x1b0660: 0x27bdfff0
    ctx->pc = 0x1b0660u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b0664: 0x3c01002c
    ctx->pc = 0x1b0664u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b0668: 0xffbf0000
    ctx->pc = 0x1b0668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b066c: 0xac208df8
    ctx->pc = 0x1b066cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938104), GPR_U32(ctx, 0));
    // 0x1b0670: 0x3c01002c
    ctx->pc = 0x1b0670u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b0674: 0x8c238df0
    ctx->pc = 0x1b0674u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294938096)));
    // 0x1b0678: 0x10600003
    ctx->pc = 0x1B0678u;
    {
        const bool branch_taken_0x1b0678 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B067Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
        if (branch_taken_0x1b0678) {
            ctx->pc = 0x1B0688u;
            goto label_1b0688;
        }
    }
    ctx->pc = 0x1B0680u;
    // 0x1b0680: 0xc072e3c
    ctx->pc = 0x1B0680u;
    SET_GPR_U32(ctx, 31, 0x1B0688u);
    ctx->pc = 0x1B0684u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938096), GPR_U32(ctx, 0));
    ctx->pc = 0x1CB8F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CB8F0_0x1cb8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0688u; }
    }
    if (ctx->pc != 0x1B0688u) { return; }
    ctx->pc = 0x1B0688u;
label_1b0688:
    // 0x1b0688: 0xdfbf0000
    ctx->pc = 0x1b0688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b068c: 0x3e00008
    ctx->pc = 0x1B068Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0690u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B0614u: goto label_1b0614;
            case 0x1B064Cu: goto label_1b064c;
            case 0x1B0688u: goto label_1b0688;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B0694u;
    // 0x1b0694: 0x0
    ctx->pc = 0x1b0694u;
    // NOP
    // 0x1b0698: 0x0
    ctx->pc = 0x1b0698u;
    // NOP
    // 0x1b069c: 0x0
    ctx->pc = 0x1b069cu;
    // NOP
}
