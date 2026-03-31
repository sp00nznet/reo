#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015CBC8
// Address: 0x15cbc8 - 0x15cc58
void sub_0015CBC8_0x15cbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15cbc8u;

    // 0x15cbc8: 0x27bdffe0
    ctx->pc = 0x15cbc8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15cbcc: 0xffb10008
    ctx->pc = 0x15cbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15cbd0: 0x80882d
    ctx->pc = 0x15cbd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cbd4: 0xffb00000
    ctx->pc = 0x15cbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15cbd8: 0xffbf0010
    ctx->pc = 0x15cbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15cbdc: 0x8e300040
    ctx->pc = 0x15cbdcu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x15cbe0: 0xc05ceca
    ctx->pc = 0x15CBE0u;
    SET_GPR_U32(ctx, 31, 0x15CBE8u);
    ctx->pc = 0x15CBE4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x173B28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00173B28_0x173b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CBE8u; }
    }
    if (ctx->pc != 0x15CBE8u) { return; }
    ctx->pc = 0x15CBE8u;
    // 0x15cbe8: 0x3c050016
    ctx->pc = 0x15cbe8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)22 << 16));
    // 0x15cbec: 0x200202d
    ctx->pc = 0x15cbecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cbf0: 0x24a5ec08
    ctx->pc = 0x15cbf0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294962184));
    // 0x15cbf4: 0x10400004
    ctx->pc = 0x15CBF4u;
    {
        const bool branch_taken_0x15cbf4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15CBF8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15cbf4) {
            ctx->pc = 0x15CC08u;
            goto label_15cc08;
        }
    }
    ctx->pc = 0x15CBFCu;
    // 0x15cbfc: 0x3c040024
    ctx->pc = 0x15cbfcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x15cc00: 0x10000009
    ctx->pc = 0x15CC00u;
    {
        const bool branch_taken_0x15cc00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15CC04u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294961376));
        if (branch_taken_0x15cc00) {
            ctx->pc = 0x15CC28u;
            goto label_15cc28;
        }
    }
    ctx->pc = 0x15CC08u;
label_15cc08:
    // 0x15cc08: 0xc05a730
    ctx->pc = 0x15CC08u;
    SET_GPR_U32(ctx, 31, 0x15CC10u);
    ctx->pc = 0x169CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169CC0_0x169cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CC10u; }
    }
    if (ctx->pc != 0x15CC10u) { return; }
    ctx->pc = 0x15CC10u;
    // 0x15cc10: 0x10400009
    ctx->pc = 0x15CC10u;
    {
        const bool branch_taken_0x15cc10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x15cc10) {
            ctx->pc = 0x15CC38u;
            goto label_15cc38;
        }
    }
    ctx->pc = 0x15CC18u;
    // 0x15cc18: 0xc057abc
    ctx->pc = 0x15CC18u;
    SET_GPR_U32(ctx, 31, 0x15CC20u);
    ctx->pc = 0x15CC1Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294966993));
    ctx->pc = 0x15EAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAF0_0x15eaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CC20u; }
    }
    if (ctx->pc != 0x15CC20u) { return; }
    ctx->pc = 0x15CC20u;
    // 0x15cc20: 0x3c040024
    ctx->pc = 0x15cc20u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x15cc24: 0x2484e918
    ctx->pc = 0x15cc24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294961432));
label_15cc28:
    // 0x15cc28: 0xc058dd4
    ctx->pc = 0x15CC28u;
    SET_GPR_U32(ctx, 31, 0x15CC30u);
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CC30u; }
    }
    if (ctx->pc != 0x15CC30u) { return; }
    ctx->pc = 0x15CC30u;
    // 0x15cc30: 0x10000004
    ctx->pc = 0x15CC30u;
    {
        const bool branch_taken_0x15cc30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15CC34u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x15cc30) {
            ctx->pc = 0x15CC44u;
            goto label_15cc44;
        }
    }
    ctx->pc = 0x15CC38u;
label_15cc38:
    // 0x15cc38: 0xc057230
    ctx->pc = 0x15CC38u;
    SET_GPR_U32(ctx, 31, 0x15CC40u);
    ctx->pc = 0x15CC3Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15C8C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C8C0_0x15c8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CC40u; }
    }
    if (ctx->pc != 0x15CC40u) { return; }
    ctx->pc = 0x15CC40u;
    // 0x15cc40: 0x102d
    ctx->pc = 0x15cc40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15cc44:
    // 0x15cc44: 0xdfb00000
    ctx->pc = 0x15cc44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cc48: 0xdfb10008
    ctx->pc = 0x15cc48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15cc4c: 0xdfbf0010
    ctx->pc = 0x15cc4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15cc50: 0x3e00008
    ctx->pc = 0x15CC50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CC54u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15CC08u: goto label_15cc08;
            case 0x15CC28u: goto label_15cc28;
            case 0x15CC38u: goto label_15cc38;
            case 0x15CC44u: goto label_15cc44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15CC58u;
}
