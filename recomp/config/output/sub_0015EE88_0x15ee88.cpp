#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015EE88
// Address: 0x15ee88 - 0x15efb8
void sub_0015EE88_0x15ee88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15ee88u;

    // 0x15ee88: 0x27bdfff0
    ctx->pc = 0x15ee88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15ee8c: 0xffbf0000
    ctx->pc = 0x15ee8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15ee90: 0xc05ce9c
    ctx->pc = 0x15EE90u;
    SET_GPR_U32(ctx, 31, 0x15EE98u);
    ctx->pc = 0x15EE94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    ctx->pc = 0x173A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00173A70_0x173a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EE98u; }
    }
    if (ctx->pc != 0x15EE98u) { return; }
    ctx->pc = 0x15EE98u;
    // 0x15ee98: 0x10400007
    ctx->pc = 0x15EE98u;
    {
        const bool branch_taken_0x15ee98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15EE9Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294966989));
        if (branch_taken_0x15ee98) {
            ctx->pc = 0x15EEB8u;
            goto label_15eeb8;
        }
    }
    ctx->pc = 0x15EEA0u;
    // 0x15eea0: 0xc057abc
    ctx->pc = 0x15EEA0u;
    SET_GPR_U32(ctx, 31, 0x15EEA8u);
    ctx->pc = 0x15EAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAF0_0x15eaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EEA8u; }
    }
    if (ctx->pc != 0x15EEA8u) { return; }
    ctx->pc = 0x15EEA8u;
    // 0x15eea8: 0x3c040024
    ctx->pc = 0x15eea8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x15eeac: 0xc058dd4
    ctx->pc = 0x15EEACu;
    SET_GPR_U32(ctx, 31, 0x15EEB4u);
    ctx->pc = 0x15EEB0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963216));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EEB4u; }
    }
    if (ctx->pc != 0x15EEB4u) { return; }
    ctx->pc = 0x15EEB4u;
    // 0x15eeb4: 0x2402fecd
    ctx->pc = 0x15eeb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294966989));
label_15eeb8:
    // 0x15eeb8: 0xdfbf0000
    ctx->pc = 0x15eeb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15eebc: 0x3e00008
    ctx->pc = 0x15EEBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EEC0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15EEB8u: goto label_15eeb8;
            case 0x15EF48u: goto label_15ef48;
            case 0x15EF90u: goto label_15ef90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15EEC4u;
    // 0x15eec4: 0x0
    ctx->pc = 0x15eec4u;
    // NOP
    // 0x15eec8: 0x27bdffc0
    ctx->pc = 0x15eec8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15eecc: 0xffb00020
    ctx->pc = 0x15eeccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x15eed0: 0xc0802d
    ctx->pc = 0x15eed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eed4: 0xffb10028
    ctx->pc = 0x15eed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x15eed8: 0xe0882d
    ctx->pc = 0x15eed8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eedc: 0xffb20030
    ctx->pc = 0x15eedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x15eee0: 0xa0902d
    ctx->pc = 0x15eee0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eee4: 0xffbf0038
    ctx->pc = 0x15eee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x15eee8: 0x3a0282d
    ctx->pc = 0x15eee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eeec: 0xc05cf8e
    ctx->pc = 0x15EEECu;
    SET_GPR_U32(ctx, 31, 0x15EEF4u);
    ctx->pc = 0x15EEF0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    ctx->pc = 0x173E38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00173E38_0x173e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EEF4u; }
    }
    if (ctx->pc != 0x15EEF4u) { return; }
    ctx->pc = 0x15EEF4u;
    // 0x15eef4: 0x8fa40000
    ctx->pc = 0x15eef4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15eef8: 0x8fa20004
    ctx->pc = 0x15eef8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x15eefc: 0x8fa30014
    ctx->pc = 0x15eefcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x15ef00: 0xae020000
    ctx->pc = 0x15ef00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x15ef04: 0xae440000
    ctx->pc = 0x15ef04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x15ef08: 0xae230000
    ctx->pc = 0x15ef08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x15ef0c: 0xdfb00020
    ctx->pc = 0x15ef0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15ef10: 0xdfb10028
    ctx->pc = 0x15ef10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15ef14: 0xdfb20030
    ctx->pc = 0x15ef14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15ef18: 0xdfbf0038
    ctx->pc = 0x15ef18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15ef1c: 0x3e00008
    ctx->pc = 0x15EF1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EF20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15EEB8u: goto label_15eeb8;
            case 0x15EF48u: goto label_15ef48;
            case 0x15EF90u: goto label_15ef90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15EF24u;
    // 0x15ef24: 0x0
    ctx->pc = 0x15ef24u;
    // NOP
    // 0x15ef28: 0x27bdfff0
    ctx->pc = 0x15ef28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15ef2c: 0xffbf0000
    ctx->pc = 0x15ef2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15ef30: 0x4a00005
    ctx->pc = 0x15EF30u;
    {
        const bool branch_taken_0x15ef30 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x15EF34u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 64)));
        if (branch_taken_0x15ef30) {
            ctx->pc = 0x15EF48u;
            goto label_15ef48;
        }
    }
    ctx->pc = 0x15EF38u;
    // 0x15ef38: 0xdfbf0000
    ctx->pc = 0x15ef38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ef3c: 0x805cfaa
    ctx->pc = 0x15EF3Cu;
    ctx->pc = 0x15EF40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x173EA8u;
    sub_00173EA8_0x173ea8(rdram, ctx, runtime); return;
    ctx->pc = 0x15EF44u;
    // 0x15ef44: 0x0
    ctx->pc = 0x15ef44u;
    // NOP
label_15ef48:
    // 0x15ef48: 0xdfbf0000
    ctx->pc = 0x15ef48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ef4c: 0x3e00008
    ctx->pc = 0x15EF4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EF50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15EEB8u: goto label_15eeb8;
            case 0x15EF48u: goto label_15ef48;
            case 0x15EF90u: goto label_15ef90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15EF54u;
    // 0x15ef54: 0x0
    ctx->pc = 0x15ef54u;
    // NOP
    // 0x15ef58: 0x27bdfff0
    ctx->pc = 0x15ef58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15ef5c: 0xffbf0000
    ctx->pc = 0x15ef5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15ef60: 0xc05c81e
    ctx->pc = 0x15EF60u;
    SET_GPR_U32(ctx, 31, 0x15EF68u);
    ctx->pc = 0x15EF64u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    ctx->pc = 0x172078u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00172078_0x172078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EF68u; }
    }
    if (ctx->pc != 0x15EF68u) { return; }
    ctx->pc = 0x15EF68u;
    // 0x15ef68: 0x24040001
    ctx->pc = 0x15ef68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ef6c: 0x10400008
    ctx->pc = 0x15EF6Cu;
    {
        const bool branch_taken_0x15ef6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15EF70u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15ef6c) {
            ctx->pc = 0x15EF90u;
            goto label_15ef90;
        }
    }
    ctx->pc = 0x15EF74u;
    // 0x15ef74: 0x10440006
    ctx->pc = 0x15EF74u;
    {
        const bool branch_taken_0x15ef74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x15EF78u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x15ef74) {
            ctx->pc = 0x15EF90u;
            goto label_15ef90;
        }
    }
    ctx->pc = 0x15EF7Cu;
    // 0x15ef7c: 0x3c040024
    ctx->pc = 0x15ef7cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x15ef80: 0x40282d
    ctx->pc = 0x15ef80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ef84: 0xc058dd4
    ctx->pc = 0x15EF84u;
    SET_GPR_U32(ctx, 31, 0x15EF8Cu);
    ctx->pc = 0x15EF88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963248));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EF8Cu; }
    }
    if (ctx->pc != 0x15EF8Cu) { return; }
    ctx->pc = 0x15EF8Cu;
    // 0x15ef8c: 0x182d
    ctx->pc = 0x15ef8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ef90:
    // 0x15ef90: 0xdfbf0000
    ctx->pc = 0x15ef90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ef94: 0x60102d
    ctx->pc = 0x15ef94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ef98: 0x3e00008
    ctx->pc = 0x15EF98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EF9Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15EEB8u: goto label_15eeb8;
            case 0x15EF48u: goto label_15ef48;
            case 0x15EF90u: goto label_15ef90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15EFA0u;
    // 0x15efa0: 0x27bdfff0
    ctx->pc = 0x15efa0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15efa4: 0xffbf0000
    ctx->pc = 0x15efa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15efa8: 0x8c840040
    ctx->pc = 0x15efa8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x15efac: 0xdfbf0000
    ctx->pc = 0x15efacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15efb0: 0x805cfca
    ctx->pc = 0x15EFB0u;
    ctx->pc = 0x15EFB4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x173F28u;
    sub_00173F28_0x173f28(rdram, ctx, runtime); return;
    ctx->pc = 0x15EFB8u;
}
