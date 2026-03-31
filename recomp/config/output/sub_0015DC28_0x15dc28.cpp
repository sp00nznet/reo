#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015DC28
// Address: 0x15dc28 - 0x15dcc0
void sub_0015DC28_0x15dc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15dc28u;

    // 0x15dc28: 0x27bdffd0
    ctx->pc = 0x15dc28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15dc2c: 0xffb20010
    ctx->pc = 0x15dc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x15dc30: 0xc0902d
    ctx->pc = 0x15dc30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dc34: 0xffb30018
    ctx->pc = 0x15dc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x15dc38: 0x249300bc
    ctx->pc = 0x15dc38u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 4), 188));
    // 0x15dc3c: 0xffb00000
    ctx->pc = 0x15dc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15dc40: 0xffb10008
    ctx->pc = 0x15dc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15dc44: 0xffb40020
    ctx->pc = 0x15dc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x15dc48: 0xffbf0028
    ctx->pc = 0x15dc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x15dc4c: 0x8ca20038
    ctx->pc = 0x15dc4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x15dc50: 0x8c9400d4
    ctx->pc = 0x15dc50u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x15dc54: 0x8c510004
    ctx->pc = 0x15dc54u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15dc58: 0xc057a4c
    ctx->pc = 0x15DC58u;
    SET_GPR_U32(ctx, 31, 0x15DC60u);
    ctx->pc = 0x15DC5Cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x15E930u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E930_0x15e930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DC60u; }
    }
    if (ctx->pc != 0x15DC60u) { return; }
    ctx->pc = 0x15DC60u;
    // 0x15dc60: 0x24030001
    ctx->pc = 0x15dc60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15dc64: 0x54430004
    ctx->pc = 0x15DC64u;
    {
        const bool branch_taken_0x15dc64 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x15dc64) {
            ctx->pc = 0x15DC68u;
            WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
            ctx->pc = 0x15DC78u;
            goto label_15dc78;
        }
    }
    ctx->pc = 0x15DC6Cu;
    // 0x15dc6c: 0x16930004
    ctx->pc = 0x15DC6Cu;
    {
        const bool branch_taken_0x15dc6c = (GPR_U32(ctx, 20) != GPR_U32(ctx, 19));
        if (branch_taken_0x15dc6c) {
            ctx->pc = 0x15DC80u;
            goto label_15dc80;
        }
    }
    ctx->pc = 0x15DC74u;
    // 0x15dc74: 0xae400044
    ctx->pc = 0x15dc74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
label_15dc78:
    // 0x15dc78: 0x10000009
    ctx->pc = 0x15DC78u;
    {
        const bool branch_taken_0x15dc78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15DC7Cu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
        if (branch_taken_0x15dc78) {
            ctx->pc = 0x15DCA0u;
            goto label_15dca0;
        }
    }
    ctx->pc = 0x15DC80u;
label_15dc80:
    // 0x15dc80: 0x12000005
    ctx->pc = 0x15DC80u;
    {
        const bool branch_taken_0x15dc80 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x15DC84u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 5));
        if (branch_taken_0x15dc80) {
            ctx->pc = 0x15DC98u;
            goto label_15dc98;
        }
    }
    ctx->pc = 0x15DC88u;
    // 0x15dc88: 0x54400004
    ctx->pc = 0x15DC88u;
    {
        const bool branch_taken_0x15dc88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x15dc88) {
            ctx->pc = 0x15DC8Cu;
            WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 17));
            ctx->pc = 0x15DC9Cu;
            goto label_15dc9c;
        }
    }
    ctx->pc = 0x15DC90u;
    // 0x15dc90: 0x26100004
    ctx->pc = 0x15dc90u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x15dc94: 0x2631fffc
    ctx->pc = 0x15dc94u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967292));
label_15dc98:
    // 0x15dc98: 0xae510044
    ctx->pc = 0x15dc98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 17));
label_15dc9c:
    // 0x15dc9c: 0xae500040
    ctx->pc = 0x15dc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 16));
label_15dca0:
    // 0x15dca0: 0xdfb00000
    ctx->pc = 0x15dca0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15dca4: 0xdfb10008
    ctx->pc = 0x15dca4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15dca8: 0xdfb20010
    ctx->pc = 0x15dca8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15dcac: 0xdfb30018
    ctx->pc = 0x15dcacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15dcb0: 0xdfb40020
    ctx->pc = 0x15dcb0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15dcb4: 0xdfbf0028
    ctx->pc = 0x15dcb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15dcb8: 0x3e00008
    ctx->pc = 0x15DCB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DCBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15DC78u: goto label_15dc78;
            case 0x15DC80u: goto label_15dc80;
            case 0x15DC98u: goto label_15dc98;
            case 0x15DC9Cu: goto label_15dc9c;
            case 0x15DCA0u: goto label_15dca0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15DCC0u;
}
