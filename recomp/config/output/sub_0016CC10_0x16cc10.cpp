#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016CC10
// Address: 0x16cc10 - 0x16cc98
void sub_0016CC10_0x16cc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16cc10u;

    // 0x16cc10: 0x27bdffe0
    ctx->pc = 0x16cc10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16cc14: 0xffb00000
    ctx->pc = 0x16cc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16cc18: 0x80802d
    ctx->pc = 0x16cc18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cc1c: 0xffb10008
    ctx->pc = 0x16cc1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16cc20: 0xffb20010
    ctx->pc = 0x16cc20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16cc24: 0xffbf0018
    ctx->pc = 0x16cc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x16cc28: 0x8e121b38
    ctx->pc = 0x16cc28u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 6968)));
    // 0x16cc2c: 0xc059d42
    ctx->pc = 0x16CC2Cu;
    SET_GPR_U32(ctx, 31, 0x16CC34u);
    ctx->pc = 0x16CC30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x167508u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167508_0x167508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CC34u; }
    }
    if (ctx->pc != 0x16CC34u) { return; }
    ctx->pc = 0x16CC34u;
    // 0x16cc34: 0x200202d
    ctx->pc = 0x16cc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cc38: 0x240282d
    ctx->pc = 0x16cc38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cc3c: 0xc059f48
    ctx->pc = 0x16CC3Cu;
    SET_GPR_U32(ctx, 31, 0x16CC44u);
    ctx->pc = 0x16CC40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x167D20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D20_0x167d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CC44u; }
    }
    if (ctx->pc != 0x16CC44u) { return; }
    ctx->pc = 0x16CC44u;
    // 0x16cc44: 0x200202d
    ctx->pc = 0x16cc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cc48: 0x8e030028
    ctx->pc = 0x16cc48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x16cc4c: 0x2228823
    ctx->pc = 0x16cc4cu;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x16cc50: 0x3c05ff00
    ctx->pc = 0x16cc50u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x16cc54: 0x102d
    ctx->pc = 0x16cc54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cc58: 0x223882a
    ctx->pc = 0x16cc58u;
    SET_GPR_U32(ctx, 17, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x16cc5c: 0x12200008
    ctx->pc = 0x16CC5Cu;
    {
        const bool branch_taken_0x16cc5c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x16CC60u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3868));
        if (branch_taken_0x16cc5c) {
            ctx->pc = 0x16CC80u;
            goto label_16cc80;
        }
    }
    ctx->pc = 0x16CC64u;
    // 0x16cc64: 0xdfb00000
    ctx->pc = 0x16cc64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16cc68: 0xdfb10008
    ctx->pc = 0x16cc68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16cc6c: 0xdfb20010
    ctx->pc = 0x16cc6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16cc70: 0xdfbf0018
    ctx->pc = 0x16cc70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16cc74: 0x805a704
    ctx->pc = 0x16CC74u;
    ctx->pc = 0x16CC78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x16CC7Cu;
    // 0x16cc7c: 0x0
    ctx->pc = 0x16cc7cu;
    // NOP
label_16cc80:
    // 0x16cc80: 0xdfb00000
    ctx->pc = 0x16cc80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16cc84: 0xdfb10008
    ctx->pc = 0x16cc84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16cc88: 0xdfb20010
    ctx->pc = 0x16cc88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16cc8c: 0xdfbf0018
    ctx->pc = 0x16cc8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16cc90: 0x3e00008
    ctx->pc = 0x16CC90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CC94u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16CC80u: goto label_16cc80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16CC98u;
}
