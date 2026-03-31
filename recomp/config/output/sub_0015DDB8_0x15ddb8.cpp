#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015DDB8
// Address: 0x15ddb8 - 0x15de60
void sub_0015DDB8_0x15ddb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15ddb8u;

    // 0x15ddb8: 0x27bdffe0
    ctx->pc = 0x15ddb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15ddbc: 0xffb10008
    ctx->pc = 0x15ddbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15ddc0: 0x882d
    ctx->pc = 0x15ddc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ddc4: 0xffb20010
    ctx->pc = 0x15ddc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x15ddc8: 0xffb00000
    ctx->pc = 0x15ddc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15ddcc: 0xffbf0018
    ctx->pc = 0x15ddccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x15ddd0: 0x8ca3003c
    ctx->pc = 0x15ddd0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x15ddd4: 0x2c620003
    ctx->pc = 0x15ddd4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 3));
    // 0x15ddd8: 0x10400005
    ctx->pc = 0x15DDD8u;
    {
        const bool branch_taken_0x15ddd8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15DDDCu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15ddd8) {
            ctx->pc = 0x15DDF0u;
            goto label_15ddf0;
        }
    }
    ctx->pc = 0x15DDE0u;
    // 0x15dde0: 0x5460000d
    ctx->pc = 0x15DDE0u;
    {
        const bool branch_taken_0x15dde0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x15dde0) {
            ctx->pc = 0x15DDE4u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 2));
            ctx->pc = 0x15DE18u;
            goto label_15de18;
        }
    }
    ctx->pc = 0x15DDE8u;
    // 0x15dde8: 0x10000009
    ctx->pc = 0x15DDE8u;
    {
        const bool branch_taken_0x15dde8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15DDECu;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x15dde8) {
            ctx->pc = 0x15DE10u;
            goto label_15de10;
        }
    }
    ctx->pc = 0x15DDF0u;
label_15ddf0:
    // 0x15ddf0: 0x24020003
    ctx->pc = 0x15ddf0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x15ddf4: 0x14620006
    ctx->pc = 0x15DDF4u;
    {
        const bool branch_taken_0x15ddf4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x15DDF8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x15ddf4) {
            ctx->pc = 0x15DE10u;
            goto label_15de10;
        }
    }
    ctx->pc = 0x15DDFCu;
    // 0x15ddfc: 0x8ca20044
    ctx->pc = 0x15ddfcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x15de00: 0x14400005
    ctx->pc = 0x15DE00u;
    {
        const bool branch_taken_0x15de00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x15de00) {
            ctx->pc = 0x15DE18u;
            goto label_15de18;
        }
    }
    ctx->pc = 0x15DE08u;
    // 0x15de08: 0x10000003
    ctx->pc = 0x15DE08u;
    {
        const bool branch_taken_0x15de08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15DE0Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x15de08) {
            ctx->pc = 0x15DE18u;
            goto label_15de18;
        }
    }
    ctx->pc = 0x15DE10u;
label_15de10:
    // 0x15de10: 0xc058dd4
    ctx->pc = 0x15DE10u;
    SET_GPR_U32(ctx, 31, 0x15DE18u);
    ctx->pc = 0x15DE14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962376));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DE18u; }
    }
    if (ctx->pc != 0x15DE18u) { return; }
    ctx->pc = 0x15DE18u;
label_15de18:
    // 0x15de18: 0xc057a4c
    ctx->pc = 0x15DE18u;
    SET_GPR_U32(ctx, 31, 0x15DE20u);
    ctx->pc = 0x15E930u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E930_0x15e930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DE20u; }
    }
    if (ctx->pc != 0x15DE20u) { return; }
    ctx->pc = 0x15DE20u;
    // 0x15de20: 0x40802d
    ctx->pc = 0x15de20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15de24: 0x24020001
    ctx->pc = 0x15de24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15de28: 0x56020007
    ctx->pc = 0x15DE28u;
    {
        const bool branch_taken_0x15de28 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        if (branch_taken_0x15de28) {
            ctx->pc = 0x15DE2Cu;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x15DE48u;
            goto label_15de48;
        }
    }
    ctx->pc = 0x15DE30u;
    // 0x15de30: 0xc058830
    ctx->pc = 0x15DE30u;
    SET_GPR_U32(ctx, 31, 0x15DE38u);
    ctx->pc = 0x15DE34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1620C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001620C0_0x1620c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DE38u; }
    }
    if (ctx->pc != 0x15DE38u) { return; }
    ctx->pc = 0x15DE38u;
    // 0x15de38: 0x24030002
    ctx->pc = 0x15de38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x15de3c: 0x501026
    ctx->pc = 0x15de3cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x15de40: 0x62880a
    ctx->pc = 0x15de40u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 3));
    // 0x15de44: 0x220102d
    ctx->pc = 0x15de44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15de48:
    // 0x15de48: 0xdfb00000
    ctx->pc = 0x15de48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15de4c: 0xdfb10008
    ctx->pc = 0x15de4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15de50: 0xdfb20010
    ctx->pc = 0x15de50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15de54: 0xdfbf0018
    ctx->pc = 0x15de54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15de58: 0x3e00008
    ctx->pc = 0x15DE58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DE5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15DDF0u: goto label_15ddf0;
            case 0x15DE10u: goto label_15de10;
            case 0x15DE18u: goto label_15de18;
            case 0x15DE48u: goto label_15de48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15DE60u;
}
