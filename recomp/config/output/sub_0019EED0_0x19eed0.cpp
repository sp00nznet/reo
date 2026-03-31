#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0019EED0
// Address: 0x19eed0 - 0x19ef00
void sub_0019EED0_0x19eed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x19eed0u;

    // 0x19eed0: 0x27bdfff0
    ctx->pc = 0x19eed0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19eed4: 0xffbf0000
    ctx->pc = 0x19eed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19eed8: 0xc067b14
    ctx->pc = 0x19EED8u;
    SET_GPR_U32(ctx, 31, 0x19EEE0u);
    ctx->pc = 0x19EC50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019EC50_0x19ec50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EEE0u; }
    }
    if (ctx->pc != 0x19EEE0u) { return; }
    ctx->pc = 0x19EEE0u;
    // 0x19eee0: 0x10400003
    ctx->pc = 0x19EEE0u;
    {
        const bool branch_taken_0x19eee0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19EEE4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19eee0) {
            ctx->pc = 0x19EEF0u;
            goto label_19eef0;
        }
    }
    ctx->pc = 0x19EEE8u;
    // 0x19eee8: 0xc067adc
    ctx->pc = 0x19EEE8u;
    SET_GPR_U32(ctx, 31, 0x19EEF0u);
    ctx->pc = 0x19EB70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019EB70_0x19eb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EEF0u; }
    }
    if (ctx->pc != 0x19EEF0u) { return; }
    ctx->pc = 0x19EEF0u;
label_19eef0:
    // 0x19eef0: 0xdfbf0000
    ctx->pc = 0x19eef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19eef4: 0x24020001
    ctx->pc = 0x19eef4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19eef8: 0x3e00008
    ctx->pc = 0x19EEF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EEFCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19EEF0u: goto label_19eef0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19EF00u;
}
