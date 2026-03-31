#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015FB20
// Address: 0x15fb20 - 0x15fbb0
void sub_0015FB20_0x15fb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15fb20u;

    // 0x15fb20: 0x27bdfff0
    ctx->pc = 0x15fb20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15fb24: 0xffb00000
    ctx->pc = 0x15fb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15fb28: 0xffbf0008
    ctx->pc = 0x15fb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x15fb2c: 0xc057ff0
    ctx->pc = 0x15FB2Cu;
    SET_GPR_U32(ctx, 31, 0x15FB34u);
    ctx->pc = 0x15FB30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FB34u; }
    }
    if (ctx->pc != 0x15FB34u) { return; }
    ctx->pc = 0x15FB34u;
    // 0x15fb34: 0x54400005
    ctx->pc = 0x15FB34u;
    {
        const bool branch_taken_0x15fb34 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x15fb34) {
            ctx->pc = 0x15FB38u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->pc = 0x15FB4Cu;
            goto label_15fb4c;
        }
    }
    ctx->pc = 0x15FB3Cu;
    // 0x15fb3c: 0x3c040024
    ctx->pc = 0x15fb3cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x15fb40: 0xc058dd4
    ctx->pc = 0x15FB40u;
    SET_GPR_U32(ctx, 31, 0x15FB48u);
    ctx->pc = 0x15FB44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963928));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FB48u; }
    }
    if (ctx->pc != 0x15FB48u) { return; }
    ctx->pc = 0x15FB48u;
    // 0x15fb48: 0x102d
    ctx->pc = 0x15fb48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15fb4c:
    // 0x15fb4c: 0xdfb00000
    ctx->pc = 0x15fb4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15fb50: 0xdfbf0008
    ctx->pc = 0x15fb50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15fb54: 0x3e00008
    ctx->pc = 0x15FB54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FB58u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15FB4Cu: goto label_15fb4c;
            case 0x15FBA0u: goto label_15fba0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15FB5Cu;
    // 0x15fb5c: 0x0
    ctx->pc = 0x15fb5cu;
    // NOP
    // 0x15fb60: 0x27bdfff0
    ctx->pc = 0x15fb60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15fb64: 0xffb00000
    ctx->pc = 0x15fb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15fb68: 0xffbf0008
    ctx->pc = 0x15fb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x15fb6c: 0xc057ff0
    ctx->pc = 0x15FB6Cu;
    SET_GPR_U32(ctx, 31, 0x15FB74u);
    ctx->pc = 0x15FB70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FB74u; }
    }
    if (ctx->pc != 0x15FB74u) { return; }
    ctx->pc = 0x15FB74u;
    // 0x15fb74: 0x1440000a
    ctx->pc = 0x15FB74u;
    {
        const bool branch_taken_0x15fb74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x15FB78u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15fb74) {
            ctx->pc = 0x15FBA0u;
            goto label_15fba0;
        }
    }
    ctx->pc = 0x15FB7Cu;
    // 0x15fb7c: 0x3c040024
    ctx->pc = 0x15fb7cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x15fb80: 0xc058dd4
    ctx->pc = 0x15FB80u;
    SET_GPR_U32(ctx, 31, 0x15FB88u);
    ctx->pc = 0x15FB84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963976));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FB88u; }
    }
    if (ctx->pc != 0x15FB88u) { return; }
    ctx->pc = 0x15FB88u;
    // 0x15fb88: 0x102d
    ctx->pc = 0x15fb88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fb8c: 0xdfb00000
    ctx->pc = 0x15fb8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15fb90: 0xdfbf0008
    ctx->pc = 0x15fb90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15fb94: 0x3e00008
    ctx->pc = 0x15FB94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FB98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15FB4Cu: goto label_15fb4c;
            case 0x15FBA0u: goto label_15fba0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15FB9Cu;
    // 0x15fb9c: 0x0
    ctx->pc = 0x15fb9cu;
    // NOP
label_15fba0:
    // 0x15fba0: 0xdfb00000
    ctx->pc = 0x15fba0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15fba4: 0xdfbf0008
    ctx->pc = 0x15fba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15fba8: 0x8057ff8
    ctx->pc = 0x15FBA8u;
    ctx->pc = 0x15FBACu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x15FFE0u;
    entry_15ffe0_0x160710(rdram, ctx, runtime); return;
    ctx->pc = 0x15FBB0u;
}
