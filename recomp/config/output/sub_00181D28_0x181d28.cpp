#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00181D28
// Address: 0x181d28 - 0x181dc8
void sub_00181D28_0x181d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x181d28u;

    // 0x181d28: 0x27bdffe0
    ctx->pc = 0x181d28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x181d2c: 0x3c020028
    ctx->pc = 0x181d2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)40 << 16));
    // 0x181d30: 0xffb20010
    ctx->pc = 0x181d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x181d34: 0x24529500
    ctx->pc = 0x181d34u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294939904));
    // 0x181d38: 0x8e430004
    ctx->pc = 0x181d38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x181d3c: 0x2402ffff
    ctx->pc = 0x181d3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x181d40: 0xffb00000
    ctx->pc = 0x181d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x181d44: 0xc0802d
    ctx->pc = 0x181d44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181d48: 0xffb10008
    ctx->pc = 0x181d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x181d4c: 0xa0882d
    ctx->pc = 0x181d4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181d50: 0x10600017
    ctx->pc = 0x181D50u;
    {
        const bool branch_taken_0x181d50 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x181D54u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        if (branch_taken_0x181d50) {
            ctx->pc = 0x181DB0u;
            goto label_181db0;
        }
    }
    ctx->pc = 0x181D58u;
    // 0x181d58: 0x56200001
    ctx->pc = 0x181D58u;
    {
        const bool branch_taken_0x181d58 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x181d58) {
            ctx->pc = 0x181D5Cu;
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
            ctx->pc = 0x181D60u;
            goto label_181d60;
        }
    }
    ctx->pc = 0x181D60u;
label_181d60:
    // 0x181d60: 0x14800005
    ctx->pc = 0x181D60u;
    {
        const bool branch_taken_0x181d60 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x181D64u;
        SET_GPR_U32(ctx, 2, ((uint32_t)40 << 16));
        if (branch_taken_0x181d60) {
            ctx->pc = 0x181D78u;
            goto label_181d78;
        }
    }
    ctx->pc = 0x181D68u;
    // 0x181d68: 0xc045198
    ctx->pc = 0x181D68u;
    SET_GPR_U32(ctx, 31, 0x181D70u);
    ctx->pc = 0x181D6Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294941224)));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181D70u; }
    }
    if (ctx->pc != 0x181D70u) { return; }
    ctx->pc = 0x181D70u;
    // 0x181d70: 0x10000005
    ctx->pc = 0x181D70u;
    {
        const bool branch_taken_0x181d70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x181d70) {
            ctx->pc = 0x181D88u;
            goto label_181d88;
        }
    }
    ctx->pc = 0x181D78u;
label_181d78:
    // 0x181d78: 0xc04519c
    ctx->pc = 0x181D78u;
    SET_GPR_U32(ctx, 31, 0x181D80u);
    ctx->pc = 0x181D7Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294941224)));
    ctx->pc = 0x114670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114670_0x114670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181D80u; }
    }
    if (ctx->pc != 0x181D80u) { return; }
    ctx->pc = 0x181D80u;
    // 0x181d80: 0x440000b
    ctx->pc = 0x181D80u;
    {
        const bool branch_taken_0x181d80 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x181D84u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x181d80) {
            ctx->pc = 0x181DB0u;
            goto label_181db0;
        }
    }
    ctx->pc = 0x181D88u;
label_181d88:
    // 0x181d88: 0x12000003
    ctx->pc = 0x181D88u;
    {
        const bool branch_taken_0x181d88 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x181d88) {
            ctx->pc = 0x181D98u;
            goto label_181d98;
        }
    }
    ctx->pc = 0x181D90u;
    // 0x181d90: 0x8e420008
    ctx->pc = 0x181d90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x181d94: 0xae020000
    ctx->pc = 0x181d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_181d98:
    // 0x181d98: 0x52200004
    ctx->pc = 0x181D98u;
    {
        const bool branch_taken_0x181d98 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x181d98) {
            ctx->pc = 0x181D9Cu;
            WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
            ctx->pc = 0x181DACu;
            goto label_181dac;
        }
    }
    ctx->pc = 0x181DA0u;
    // 0x181da0: 0x8e420004
    ctx->pc = 0x181da0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x181da4: 0xae220000
    ctx->pc = 0x181da4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x181da8: 0xae400004
    ctx->pc = 0x181da8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_181dac:
    // 0x181dac: 0x24020001
    ctx->pc = 0x181dacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_181db0:
    // 0x181db0: 0xdfb00000
    ctx->pc = 0x181db0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181db4: 0xdfb10008
    ctx->pc = 0x181db4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x181db8: 0xdfb20010
    ctx->pc = 0x181db8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181dbc: 0xdfbf0018
    ctx->pc = 0x181dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x181dc0: 0x3e00008
    ctx->pc = 0x181DC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181DC4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x181D60u: goto label_181d60;
            case 0x181D78u: goto label_181d78;
            case 0x181D88u: goto label_181d88;
            case 0x181D98u: goto label_181d98;
            case 0x181DACu: goto label_181dac;
            case 0x181DB0u: goto label_181db0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x181DC8u;
}
