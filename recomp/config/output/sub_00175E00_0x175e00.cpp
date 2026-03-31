#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00175E00
// Address: 0x175e00 - 0x175e50
void sub_00175E00_0x175e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x175e00u;

    // 0x175e00: 0x27bdfff0
    ctx->pc = 0x175e00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x175e04: 0xffb00000
    ctx->pc = 0x175e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175e08: 0xffbf0008
    ctx->pc = 0x175e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x175e0c: 0xc05d794
    ctx->pc = 0x175E0Cu;
    SET_GPR_U32(ctx, 31, 0x175E14u);
    ctx->pc = 0x175E10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175E50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175E50_0x175e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E14u; }
    }
    if (ctx->pc != 0x175E14u) { return; }
    ctx->pc = 0x175E14u;
    // 0x175e14: 0x200202d
    ctx->pc = 0x175e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175e18: 0xc05d58a
    ctx->pc = 0x175E18u;
    SET_GPR_U32(ctx, 31, 0x175E20u);
    ctx->pc = 0x175E1Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 71));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E20u; }
    }
    if (ctx->pc != 0x175E20u) { return; }
    ctx->pc = 0x175E20u;
    // 0x175e20: 0x24030001
    ctx->pc = 0x175e20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x175e24: 0x14430006
    ctx->pc = 0x175E24u;
    {
        const bool branch_taken_0x175e24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x175E28u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x175e24) {
            ctx->pc = 0x175E40u;
            goto label_175e40;
        }
    }
    ctx->pc = 0x175E2Cu;
    // 0x175e2c: 0xdfb00000
    ctx->pc = 0x175e2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175e30: 0xdfbf0008
    ctx->pc = 0x175e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175e34: 0x805da4c
    ctx->pc = 0x175E34u;
    ctx->pc = 0x175E38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x176930u;
    sub_00176930_0x176930(rdram, ctx, runtime); return;
    ctx->pc = 0x175E3Cu;
    // 0x175e3c: 0x0
    ctx->pc = 0x175e3cu;
    // NOP
label_175e40:
    // 0x175e40: 0xdfb00000
    ctx->pc = 0x175e40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175e44: 0xdfbf0008
    ctx->pc = 0x175e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175e48: 0x3e00008
    ctx->pc = 0x175E48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175E4Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175E40u: goto label_175e40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x175E50u;
}
