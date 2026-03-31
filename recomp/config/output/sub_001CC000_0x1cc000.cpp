#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CC000
// Address: 0x1cc000 - 0x1cc060
void sub_001CC000_0x1cc000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1cc000u;

    // 0x1cc000: 0x27bdfff0
    ctx->pc = 0x1cc000u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc004: 0x3c010034
    ctx->pc = 0x1cc004u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1cc008: 0xffbf0000
    ctx->pc = 0x1cc008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cc00c: 0x8c23d9f8
    ctx->pc = 0x1cc00cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294957560)));
    // 0x1cc010: 0x1460000f
    ctx->pc = 0x1CC010u;
    {
        const bool branch_taken_0x1cc010 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1cc010) {
            ctx->pc = 0x1CC050u;
            goto label_1cc050;
        }
    }
    ctx->pc = 0x1CC018u;
    // 0x1cc018: 0x3c010034
    ctx->pc = 0x1cc018u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1cc01c: 0x8c23da00
    ctx->pc = 0x1cc01cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294957568)));
    // 0x1cc020: 0x10600003
    ctx->pc = 0x1CC020u;
    {
        const bool branch_taken_0x1cc020 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cc020) {
            ctx->pc = 0x1CC030u;
            goto label_1cc030;
        }
    }
    ctx->pc = 0x1CC028u;
    // 0x1cc028: 0x1000000a
    ctx->pc = 0x1CC028u;
    {
        const bool branch_taken_0x1cc028 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CC02Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1cc028) {
            ctx->pc = 0x1CC054u;
            goto label_1cc054;
        }
    }
    ctx->pc = 0x1CC030u;
label_1cc030:
    // 0x1cc030: 0xc072f78
    ctx->pc = 0x1CC030u;
    SET_GPR_U32(ctx, 31, 0x1CC038u);
    ctx->pc = 0x1CBDE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CBDE0_0x1cbde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC038u; }
    }
    if (ctx->pc != 0x1CC038u) { return; }
    ctx->pc = 0x1CC038u;
    // 0x1cc038: 0x3c010034
    ctx->pc = 0x1cc038u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1cc03c: 0xc077436
    ctx->pc = 0x1CC03Cu;
    SET_GPR_U32(ctx, 31, 0x1CC044u);
    ctx->pc = 0x1CC040u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294952944)));
    ctx->pc = 0x1DD0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD0D8_0x1dd0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC044u; }
    }
    if (ctx->pc != 0x1CC044u) { return; }
    ctx->pc = 0x1CC044u;
    // 0x1cc044: 0x3c010034
    ctx->pc = 0x1cc044u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1cc048: 0xc072f7c
    ctx->pc = 0x1CC048u;
    SET_GPR_U32(ctx, 31, 0x1CC050u);
    ctx->pc = 0x1CC04Cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294957560), GPR_U32(ctx, 2));
    ctx->pc = 0x1CBDF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CBDF0_0x1cbdf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC050u; }
    }
    if (ctx->pc != 0x1CC050u) { return; }
    ctx->pc = 0x1CC050u;
label_1cc050:
    // 0x1cc050: 0xdfbf0000
    ctx->pc = 0x1cc050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cc054:
    // 0x1cc054: 0x3e00008
    ctx->pc = 0x1CC054u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC058u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CC030u: goto label_1cc030;
            case 0x1CC050u: goto label_1cc050;
            case 0x1CC054u: goto label_1cc054;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CC05Cu;
    // 0x1cc05c: 0x0
    ctx->pc = 0x1cc05cu;
    // NOP
}
