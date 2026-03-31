#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00132C08
// Address: 0x132c08 - 0x132cf0
void sub_00132C08_0x132c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x132c08u;

label_132c08:
    // 0x132c08: 0x27bdffd0
    ctx->pc = 0x132c08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x132c0c: 0xffb30018
    ctx->pc = 0x132c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x132c10: 0x3c130022
    ctx->pc = 0x132c10u;
    SET_GPR_U32(ctx, 19, ((uint32_t)34 << 16));
    // 0x132c14: 0xffb10008
    ctx->pc = 0x132c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x132c18: 0xffb00000
    ctx->pc = 0x132c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x132c1c: 0xffb20010
    ctx->pc = 0x132c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x132c20: 0xffbf0020
    ctx->pc = 0x132c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x132c24: 0xc049938
    ctx->pc = 0x132C24u;
    SET_GPR_U32(ctx, 31, 0x132C2Cu);
    ctx->pc = 0x132C28u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 19), 4294948692));
    ctx->pc = 0x1264E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001264E0_0x1264e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132C2Cu; }
    }
    if (ctx->pc != 0x132C2Cu) { return; }
    ctx->pc = 0x132C2Cu;
    // 0x132c2c: 0x8e220000
    ctx->pc = 0x132c2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x132c30: 0x10400007
    ctx->pc = 0x132C30u;
    {
        const bool branch_taken_0x132c30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x132C34u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x132c30) {
            ctx->pc = 0x132C50u;
            goto label_132c50;
        }
    }
    ctx->pc = 0x132C38u;
    // 0x132c38: 0xdfb10008
    ctx->pc = 0x132c38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x132c3c: 0xdfb20010
    ctx->pc = 0x132c3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132c40: 0xdfb30018
    ctx->pc = 0x132c40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x132c44: 0xdfbf0020
    ctx->pc = 0x132c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x132c48: 0x804993e
    ctx->pc = 0x132C48u;
    ctx->pc = 0x132C4Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1264F8u;
    sub_001264F8_0x1264f8(rdram, ctx, runtime); return;
    ctx->pc = 0x132C50u;
label_132c50:
    // 0x132c50: 0x24020001
    ctx->pc = 0x132c50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x132c54: 0x24120001
    ctx->pc = 0x132c54u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x132c58: 0xc04993e
    ctx->pc = 0x132C58u;
    SET_GPR_U32(ctx, 31, 0x132C60u);
    ctx->pc = 0x132C5Cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1264F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001264F8_0x1264f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132C60u; }
    }
    if (ctx->pc != 0x132C60u) { return; }
    ctx->pc = 0x132C60u;
    // 0x132c60: 0xc049938
    ctx->pc = 0x132C60u;
    SET_GPR_U32(ctx, 31, 0x132C68u);
    ctx->pc = 0x1264E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001264E0_0x1264e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132C68u; }
    }
    if (ctx->pc != 0x132C68u) { return; }
    ctx->pc = 0x132C68u;
    // 0x132c68: 0xc04b59e
    ctx->pc = 0x132C68u;
    SET_GPR_U32(ctx, 31, 0x132C70u);
    ctx->pc = 0x12D678u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D678_0x12d678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132C70u; }
    }
    if (ctx->pc != 0x132C70u) { return; }
    ctx->pc = 0x132C70u;
    // 0x132c70: 0x24020002
    ctx->pc = 0x132c70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x132c74: 0x3c030021
    ctx->pc = 0x132c74u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x132c78: 0xae220000
    ctx->pc = 0x132c78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x132c7c: 0x2470f3c8
    ctx->pc = 0x132c7cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 4294964168));
    // 0x132c80: 0x2411000f
    ctx->pc = 0x132c80u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 15));
    // 0x132c84: 0x0
    ctx->pc = 0x132c84u;
    // NOP
label_132c88:
    // 0x132c88: 0x82020000
    ctx->pc = 0x132c88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x132c8c: 0x54520004
    ctx->pc = 0x132C8Cu;
    {
        const bool branch_taken_0x132c8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x132c8c) {
            ctx->pc = 0x132C90u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->pc = 0x132CA0u;
            goto label_132ca0;
        }
    }
    ctx->pc = 0x132C94u;
    // 0x132c94: 0xc04d316
    ctx->pc = 0x132C94u;
    SET_GPR_U32(ctx, 31, 0x132C9Cu);
    ctx->pc = 0x132C98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x134C58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00134C58_0x134c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132C9Cu; }
    }
    if (ctx->pc != 0x132C9Cu) { return; }
    ctx->pc = 0x132C9Cu;
    // 0x132c9c: 0x2631ffff
    ctx->pc = 0x132c9cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
label_132ca0:
    // 0x132ca0: 0x621fff9
    ctx->pc = 0x132CA0u;
    {
        const bool branch_taken_0x132ca0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x132CA4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 196));
        if (branch_taken_0x132ca0) {
            ctx->pc = 0x132C88u;
            goto label_132c88;
        }
    }
    ctx->pc = 0x132CA8u;
    // 0x132ca8: 0x2670b754
    ctx->pc = 0x132ca8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 4294948692));
    // 0x132cac: 0x24020003
    ctx->pc = 0x132cacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x132cb0: 0xc04b1e6
    ctx->pc = 0x132CB0u;
    SET_GPR_U32(ctx, 31, 0x132CB8u);
    ctx->pc = 0x132CB4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x12C798u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C798_0x12c798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132CB8u; }
    }
    if (ctx->pc != 0x132CB8u) { return; }
    ctx->pc = 0x132CB8u;
    // 0x132cb8: 0xae000000
    ctx->pc = 0x132cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x132cbc: 0xdfb10008
    ctx->pc = 0x132cbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x132cc0: 0xdfb00000
    ctx->pc = 0x132cc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132cc4: 0xdfb20010
    ctx->pc = 0x132cc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132cc8: 0xdfb30018
    ctx->pc = 0x132cc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x132ccc: 0xdfbf0020
    ctx->pc = 0x132cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x132cd0: 0x804993e
    ctx->pc = 0x132CD0u;
    ctx->pc = 0x132CD4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1264F8u;
    sub_001264F8_0x1264f8(rdram, ctx, runtime); return;
    ctx->pc = 0x132CD8u;
    // 0x132cd8: 0x27bdfff0
    ctx->pc = 0x132cd8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x132cdc: 0xffbf0000
    ctx->pc = 0x132cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x132ce0: 0xdfbf0000
    ctx->pc = 0x132ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132ce4: 0x804cb02
    ctx->pc = 0x132CE4u;
    ctx->pc = 0x132CE8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x132C08u;
    goto label_132c08;
    ctx->pc = 0x132CECu;
    // 0x132cec: 0x0
    ctx->pc = 0x132cecu;
    // NOP
}
