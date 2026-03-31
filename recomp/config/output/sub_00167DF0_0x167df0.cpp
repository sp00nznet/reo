#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00167DF0
// Address: 0x167df0 - 0x167e38
void sub_00167DF0_0x167df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x167df0u;

    // 0x167df0: 0x27bdfff0
    ctx->pc = 0x167df0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x167df4: 0x24050031
    ctx->pc = 0x167df4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 49));
    // 0x167df8: 0xffb00000
    ctx->pc = 0x167df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x167dfc: 0xffbf0008
    ctx->pc = 0x167dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x167e00: 0xc05d58a
    ctx->pc = 0x167E00u;
    SET_GPR_U32(ctx, 31, 0x167E08u);
    ctx->pc = 0x167E04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167E08u; }
    }
    if (ctx->pc != 0x167E08u) { return; }
    ctx->pc = 0x167E08u;
    // 0x167e08: 0x200202d
    ctx->pc = 0x167e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e0c: 0x14400005
    ctx->pc = 0x167E0Cu;
    {
        const bool branch_taken_0x167e0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x167E10u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 56));
        if (branch_taken_0x167e0c) {
            ctx->pc = 0x167E24u;
            goto label_167e24;
        }
    }
    ctx->pc = 0x167E14u;
    // 0x167e14: 0xc05d58a
    ctx->pc = 0x167E14u;
    SET_GPR_U32(ctx, 31, 0x167E1Cu);
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167E1Cu; }
    }
    if (ctx->pc != 0x167E1Cu) { return; }
    ctx->pc = 0x167E1Cu;
    // 0x167e1c: 0x10400003
    ctx->pc = 0x167E1Cu;
    {
        const bool branch_taken_0x167e1c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x167E20u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x167e1c) {
            ctx->pc = 0x167E2Cu;
            goto label_167e2c;
        }
    }
    ctx->pc = 0x167E24u;
label_167e24:
    // 0x167e24: 0x24020001
    ctx->pc = 0x167e24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x167e28: 0xdfb00000
    ctx->pc = 0x167e28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_167e2c:
    // 0x167e2c: 0xdfbf0008
    ctx->pc = 0x167e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x167e30: 0x3e00008
    ctx->pc = 0x167E30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167E34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167E24u: goto label_167e24;
            case 0x167E2Cu: goto label_167e2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x167E38u;
}
