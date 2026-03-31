#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00178E10
// Address: 0x178e10 - 0x178e58
void sub_00178E10_0x178e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x178e10u;

    // 0x178e10: 0x27bdfff0
    ctx->pc = 0x178e10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x178e14: 0x2405000f
    ctx->pc = 0x178e14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    // 0x178e18: 0xffb00000
    ctx->pc = 0x178e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178e1c: 0xffbf0008
    ctx->pc = 0x178e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x178e20: 0xc05d58a
    ctx->pc = 0x178E20u;
    SET_GPR_U32(ctx, 31, 0x178E28u);
    ctx->pc = 0x178E24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178E28u; }
    }
    if (ctx->pc != 0x178E28u) { return; }
    ctx->pc = 0x178E28u;
    // 0x178e28: 0x14400003
    ctx->pc = 0x178E28u;
    {
        const bool branch_taken_0x178e28 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x178E2Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x178e28) {
            ctx->pc = 0x178E38u;
            goto label_178e38;
        }
    }
    ctx->pc = 0x178E30u;
    // 0x178e30: 0x10000004
    ctx->pc = 0x178E30u;
    {
        const bool branch_taken_0x178e30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x178E34u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x178e30) {
            ctx->pc = 0x178E44u;
            goto label_178e44;
        }
    }
    ctx->pc = 0x178E38u;
label_178e38:
    // 0x178e38: 0xc05dcea
    ctx->pc = 0x178E38u;
    SET_GPR_U32(ctx, 31, 0x178E40u);
    ctx->pc = 0x1773A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001773A8_0x1773a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178E40u; }
    }
    if (ctx->pc != 0x178E40u) { return; }
    ctx->pc = 0x178E40u;
    // 0x178e40: 0x2102b
    ctx->pc = 0x178e40u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_178e44:
    // 0x178e44: 0xdfb00000
    ctx->pc = 0x178e44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178e48: 0xdfbf0008
    ctx->pc = 0x178e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178e4c: 0x3e00008
    ctx->pc = 0x178E4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178E50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178E38u: goto label_178e38;
            case 0x178E44u: goto label_178e44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178E54u;
    // 0x178e54: 0x0
    ctx->pc = 0x178e54u;
    // NOP
}
