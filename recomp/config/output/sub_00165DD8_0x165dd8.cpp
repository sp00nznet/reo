#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00165DD8
// Address: 0x165dd8 - 0x165ef0
void sub_00165DD8_0x165dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x165dd8u;

    // 0x165dd8: 0x27bdfff0
    ctx->pc = 0x165dd8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x165ddc: 0xffbf0000
    ctx->pc = 0x165ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165de0: 0x8c821b74
    ctx->pc = 0x165de0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 7028)));
    // 0x165de4: 0xc04c78e
    ctx->pc = 0x165DE4u;
    SET_GPR_U32(ctx, 31, 0x165DECu);
    ctx->pc = 0x165DE8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x131E38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00131E38_0x131e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165DECu; }
    }
    if (ctx->pc != 0x165DECu) { return; }
    ctx->pc = 0x165DECu;
    // 0x165dec: 0x102d
    ctx->pc = 0x165decu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165df0: 0xdfbf0000
    ctx->pc = 0x165df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165df4: 0x3e00008
    ctx->pc = 0x165DF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165DF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x165E50u: goto label_165e50;
            case 0x165E54u: goto label_165e54;
            case 0x165E68u: goto label_165e68;
            case 0x165ED0u: goto label_165ed0;
            case 0x165ED4u: goto label_165ed4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x165DFCu;
    // 0x165dfc: 0x0
    ctx->pc = 0x165dfcu;
    // NOP
    // 0x165e00: 0x27bdffb0
    ctx->pc = 0x165e00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x165e04: 0xa0182d
    ctx->pc = 0x165e04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165e08: 0xffb40040
    ctx->pc = 0x165e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x165e0c: 0x80a02d
    ctx->pc = 0x165e0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165e10: 0xffb00020
    ctx->pc = 0x165e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x165e14: 0x24020001
    ctx->pc = 0x165e14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x165e18: 0xffb10028
    ctx->pc = 0x165e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x165e1c: 0xffb20030
    ctx->pc = 0x165e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x165e20: 0xffb30038
    ctx->pc = 0x165e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x165e24: 0xffbf0048
    ctx->pc = 0x165e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x165e28: 0x8e931b74
    ctx->pc = 0x165e28u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 20), 7028)));
    // 0x165e2c: 0x10620009
    ctx->pc = 0x165E2Cu;
    {
        const bool branch_taken_0x165e2c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x165E30u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 19), 0)));
        if (branch_taken_0x165e2c) {
            ctx->pc = 0x165E54u;
            goto label_165e54;
        }
    }
    ctx->pc = 0x165E34u;
    // 0x165e34: 0x50600006
    ctx->pc = 0x165E34u;
    {
        const bool branch_taken_0x165e34 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x165e34) {
            ctx->pc = 0x165E38u;
            WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
            ctx->pc = 0x165E50u;
            goto label_165e50;
        }
    }
    ctx->pc = 0x165E3Cu;
    // 0x165e3c: 0x24020002
    ctx->pc = 0x165e3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x165e40: 0x10620009
    ctx->pc = 0x165E40u;
    {
        const bool branch_taken_0x165e40 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x165E44u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x165e40) {
            ctx->pc = 0x165E68u;
            goto label_165e68;
        }
    }
    ctx->pc = 0x165E48u;
    // 0x165e48: 0x10000022
    ctx->pc = 0x165E48u;
    {
        const bool branch_taken_0x165e48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x165E4Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x165e48) {
            ctx->pc = 0x165ED4u;
            goto label_165ed4;
        }
    }
    ctx->pc = 0x165E50u;
label_165e50:
    // 0x165e50: 0x282d
    ctx->pc = 0x165e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165e54:
    // 0x165e54: 0xc0597d0
    ctx->pc = 0x165E54u;
    SET_GPR_U32(ctx, 31, 0x165E5Cu);
    ctx->pc = 0x165F40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00165F40_0x165f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165E5Cu; }
    }
    if (ctx->pc != 0x165E5Cu) { return; }
    ctx->pc = 0x165E5Cu;
    // 0x165e5c: 0x1000001c
    ctx->pc = 0x165E5Cu;
    {
        const bool branch_taken_0x165e5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x165E60u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x165e5c) {
            ctx->pc = 0x165ED0u;
            goto label_165ed0;
        }
    }
    ctx->pc = 0x165E64u;
    // 0x165e64: 0x0
    ctx->pc = 0x165e64u;
    // NOP
label_165e68:
    // 0x165e68: 0xc0595ba
    ctx->pc = 0x165E68u;
    SET_GPR_U32(ctx, 31, 0x165E70u);
    ctx->pc = 0x165E6Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1656E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001656E8_0x1656e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165E70u; }
    }
    if (ctx->pc != 0x165E70u) { return; }
    ctx->pc = 0x165E70u;
    // 0x165e70: 0x10400017
    ctx->pc = 0x165E70u;
    {
        const bool branch_taken_0x165e70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x165E74u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x165e70) {
            ctx->pc = 0x165ED0u;
            goto label_165ed0;
        }
    }
    ctx->pc = 0x165E78u;
    // 0x165e78: 0xc04c93e
    ctx->pc = 0x165E78u;
    SET_GPR_U32(ctx, 31, 0x165E80u);
    ctx->pc = 0x165E7Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1324F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001324F8_0x1324f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165E80u; }
    }
    if (ctx->pc != 0x165E80u) { return; }
    ctx->pc = 0x165E80u;
    // 0x165e80: 0x280202d
    ctx->pc = 0x165e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165e84: 0x40882d
    ctx->pc = 0x165e84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165e88: 0x27a50010
    ctx->pc = 0x165e88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    // 0x165e8c: 0xc0597f2
    ctx->pc = 0x165E8Cu;
    SET_GPR_U32(ctx, 31, 0x165E94u);
    ctx->pc = 0x165E90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x165FC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00165FC8_0x165fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165E94u; }
    }
    if (ctx->pc != 0x165E94u) { return; }
    ctx->pc = 0x165E94u;
    // 0x165e94: 0x8e620030
    ctx->pc = 0x165e94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x165e98: 0x8fb00010
    ctx->pc = 0x165e98u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165e9c: 0x240202d
    ctx->pc = 0x165e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165ea0: 0x2028021
    ctx->pc = 0x165ea0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x165ea4: 0xc04cc16
    ctx->pc = 0x165EA4u;
    SET_GPR_U32(ctx, 31, 0x165EACu);
    ctx->pc = 0x165EA8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x133058u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00133058_0x133058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165EACu; }
    }
    if (ctx->pc != 0x165EACu) { return; }
    ctx->pc = 0x165EACu;
    // 0x165eac: 0x26840f60
    ctx->pc = 0x165eacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 3936));
    // 0x165eb0: 0x2028023
    ctx->pc = 0x165eb0u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x165eb4: 0x8fa20010
    ctx->pc = 0x165eb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165eb8: 0xae700030
    ctx->pc = 0x165eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 16));
    // 0x165ebc: 0x3a0282d
    ctx->pc = 0x165ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165ec0: 0xffa20000
    ctx->pc = 0x165ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x165ec4: 0xc05df96
    ctx->pc = 0x165EC4u;
    SET_GPR_U32(ctx, 31, 0x165ECCu);
    ctx->pc = 0x165EC8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    ctx->pc = 0x177E58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177E58_0x177e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165ECCu; }
    }
    if (ctx->pc != 0x165ECCu) { return; }
    ctx->pc = 0x165ECCu;
    // 0x165ecc: 0xdfb00020
    ctx->pc = 0x165eccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_165ed0:
    // 0x165ed0: 0x102d
    ctx->pc = 0x165ed0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165ed4:
    // 0x165ed4: 0xdfb10028
    ctx->pc = 0x165ed4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x165ed8: 0xdfb20030
    ctx->pc = 0x165ed8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165edc: 0xdfb30038
    ctx->pc = 0x165edcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165ee0: 0xdfb40040
    ctx->pc = 0x165ee0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x165ee4: 0xdfbf0048
    ctx->pc = 0x165ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x165ee8: 0x3e00008
    ctx->pc = 0x165EE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165EECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x165E50u: goto label_165e50;
            case 0x165E54u: goto label_165e54;
            case 0x165E68u: goto label_165e68;
            case 0x165ED0u: goto label_165ed0;
            case 0x165ED4u: goto label_165ed4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x165EF0u;
}
