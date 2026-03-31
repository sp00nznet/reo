#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00114DF8
// Address: 0x114df8 - 0x114e70
void sub_00114DF8_0x114df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x114df8u;

    // 0x114df8: 0x27bdfff0
    ctx->pc = 0x114df8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x114dfc: 0x24020001
    ctx->pc = 0x114dfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x114e00: 0x14820003
    ctx->pc = 0x114E00u;
    {
        const bool branch_taken_0x114e00 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x114E04u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x114e00) {
            ctx->pc = 0x114E10u;
            goto label_114e10;
        }
    }
    ctx->pc = 0x114E08u;
    // 0x114e08: 0xc047742
    ctx->pc = 0x114E08u;
    SET_GPR_U32(ctx, 31, 0x114E10u);
    ctx->pc = 0x114E0Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11DD08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD08_0x11dd08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114E10u; }
    }
    if (ctx->pc != 0x114E10u) { return; }
    ctx->pc = 0x114E10u;
label_114e10:
    // 0x114e10: 0xdfbf0000
    ctx->pc = 0x114e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114e14: 0x102d
    ctx->pc = 0x114e14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114e18: 0x3e00008
    ctx->pc = 0x114E18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114E1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x114E10u: goto label_114e10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x114E20u;
    // 0x114e20: 0x27bdfff0
    ctx->pc = 0x114e20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x114e24: 0xffbf0000
    ctx->pc = 0x114e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x114e28: 0xc0413bc
    ctx->pc = 0x114E28u;
    SET_GPR_U32(ctx, 31, 0x114E30u);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114E30u; }
    }
    if (ctx->pc != 0x114E30u) { return; }
    ctx->pc = 0x114E30u;
    // 0x114e30: 0x24030005
    ctx->pc = 0x114e30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x114e34: 0xdfbf0000
    ctx->pc = 0x114e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114e38: 0xac430000
    ctx->pc = 0x114e38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x114e3c: 0x2402ffff
    ctx->pc = 0x114e3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x114e40: 0x3e00008
    ctx->pc = 0x114E40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114E44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x114E10u: goto label_114e10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x114E48u;
    // 0x114e48: 0x27bdfff0
    ctx->pc = 0x114e48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x114e4c: 0xffbf0000
    ctx->pc = 0x114e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x114e50: 0xc0413bc
    ctx->pc = 0x114E50u;
    SET_GPR_U32(ctx, 31, 0x114E58u);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114E58u; }
    }
    if (ctx->pc != 0x114E58u) { return; }
    ctx->pc = 0x114E58u;
    // 0x114e58: 0x24030005
    ctx->pc = 0x114e58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x114e5c: 0xdfbf0000
    ctx->pc = 0x114e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114e60: 0xac430000
    ctx->pc = 0x114e60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x114e64: 0x2402ffff
    ctx->pc = 0x114e64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x114e68: 0x3e00008
    ctx->pc = 0x114E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114E6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x114E10u: goto label_114e10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x114E70u;
}
