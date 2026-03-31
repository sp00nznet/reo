#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015EA00
// Address: 0x15ea00 - 0x15eaf0
void sub_0015EA00_0x15ea00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15ea00u;

    // 0x15ea00: 0x27bdffe0
    ctx->pc = 0x15ea00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15ea04: 0xffb00000
    ctx->pc = 0x15ea04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15ea08: 0xffb10008
    ctx->pc = 0x15ea08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15ea0c: 0xffb20010
    ctx->pc = 0x15ea0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x15ea10: 0xffbf0018
    ctx->pc = 0x15ea10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x15ea14: 0xc05799e
    ctx->pc = 0x15EA14u;
    SET_GPR_U32(ctx, 31, 0x15EA1Cu);
    ctx->pc = 0x15E678u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E678_0x15e678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA1Cu; }
    }
    if (ctx->pc != 0x15EA1Cu) { return; }
    ctx->pc = 0x15EA1Cu;
    // 0x15ea1c: 0x3c030023
    ctx->pc = 0x15ea1cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x15ea20: 0x40202d
    ctx->pc = 0x15ea20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ea24: 0x2463de50
    ctx->pc = 0x15ea24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294958672));
    // 0x15ea28: 0x8c620000
    ctx->pc = 0x15ea28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15ea2c: 0x2442ffff
    ctx->pc = 0x15ea2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15ea30: 0x14400029
    ctx->pc = 0x15EA30u;
    {
        const bool branch_taken_0x15ea30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x15EA34u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x15ea30) {
            ctx->pc = 0x15EAD8u;
            goto label_15ead8;
        }
    }
    ctx->pc = 0x15EA38u;
    // 0x15ea38: 0x24900068
    ctx->pc = 0x15ea38u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 104));
    // 0x15ea3c: 0x24120001
    ctx->pc = 0x15ea3cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ea40: 0x24110007
    ctx->pc = 0x15ea40u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 7));
    // 0x15ea44: 0x0
    ctx->pc = 0x15ea44u;
    // NOP
label_15ea48:
    // 0x15ea48: 0x8e020004
    ctx->pc = 0x15ea48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15ea4c: 0x54520004
    ctx->pc = 0x15EA4Cu;
    {
        const bool branch_taken_0x15ea4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x15ea4c) {
            ctx->pc = 0x15EA50u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->pc = 0x15EA60u;
            goto label_15ea60;
        }
    }
    ctx->pc = 0x15EA54u;
    // 0x15ea54: 0xc057474
    ctx->pc = 0x15EA54u;
    SET_GPR_U32(ctx, 31, 0x15EA5Cu);
    ctx->pc = 0x15EA58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15D1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D1D0_0x15d1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA5Cu; }
    }
    if (ctx->pc != 0x15EA5Cu) { return; }
    ctx->pc = 0x15EA5Cu;
    // 0x15ea5c: 0x2631ffff
    ctx->pc = 0x15ea5cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
label_15ea60:
    // 0x15ea60: 0x621fff9
    ctx->pc = 0x15EA60u;
    {
        const bool branch_taken_0x15ea60 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x15EA64u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 528));
        if (branch_taken_0x15ea60) {
            ctx->pc = 0x15EA48u;
            goto label_15ea48;
        }
    }
    ctx->pc = 0x15EA68u;
    // 0x15ea68: 0xc058d66
    ctx->pc = 0x15EA68u;
    SET_GPR_U32(ctx, 31, 0x15EA70u);
    ctx->pc = 0x163598u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163598_0x163598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA70u; }
    }
    if (ctx->pc != 0x15EA70u) { return; }
    ctx->pc = 0x15EA70u;
    // 0x15ea70: 0xc058d8e
    ctx->pc = 0x15EA70u;
    SET_GPR_U32(ctx, 31, 0x15EA78u);
    ctx->pc = 0x163638u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163638_0x163638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA78u; }
    }
    if (ctx->pc != 0x15EA78u) { return; }
    ctx->pc = 0x15EA78u;
    // 0x15ea78: 0xc058d7a
    ctx->pc = 0x15EA78u;
    SET_GPR_U32(ctx, 31, 0x15EA80u);
    ctx->pc = 0x1635E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001635E8_0x1635e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA80u; }
    }
    if (ctx->pc != 0x15EA80u) { return; }
    ctx->pc = 0x15EA80u;
    // 0x15ea80: 0xc0582d0
    ctx->pc = 0x15EA80u;
    SET_GPR_U32(ctx, 31, 0x15EA88u);
    ctx->pc = 0x160B40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B40_0x160b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA88u; }
    }
    if (ctx->pc != 0x15EA88u) { return; }
    ctx->pc = 0x15EA88u;
    // 0x15ea88: 0xc04f586
    ctx->pc = 0x15EA88u;
    SET_GPR_U32(ctx, 31, 0x15EA90u);
    ctx->pc = 0x13D618u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D618_0x13d618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA90u; }
    }
    if (ctx->pc != 0x15EA90u) { return; }
    ctx->pc = 0x15EA90u;
    // 0x15ea90: 0xc057afa
    ctx->pc = 0x15EA90u;
    SET_GPR_U32(ctx, 31, 0x15EA98u);
    ctx->pc = 0x15EBE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EBE8_0x15ebe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA98u; }
    }
    if (ctx->pc != 0x15EA98u) { return; }
    ctx->pc = 0x15EA98u;
    // 0x15ea98: 0xc04a8e2
    ctx->pc = 0x15EA98u;
    SET_GPR_U32(ctx, 31, 0x15EAA0u);
    ctx->pc = 0x12A388u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A388_0x12a388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EAA0u; }
    }
    if (ctx->pc != 0x15EAA0u) { return; }
    ctx->pc = 0x15EAA0u;
    // 0x15eaa0: 0xc059106
    ctx->pc = 0x15EAA0u;
    SET_GPR_U32(ctx, 31, 0x15EAA8u);
    ctx->pc = 0x164418u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00164418_0x164418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EAA8u; }
    }
    if (ctx->pc != 0x15EAA8u) { return; }
    ctx->pc = 0x15EAA8u;
    // 0x15eaa8: 0xc05001c
    ctx->pc = 0x15EAA8u;
    SET_GPR_U32(ctx, 31, 0x15EAB0u);
    ctx->pc = 0x140070u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00140070_0x140070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EAB0u; }
    }
    if (ctx->pc != 0x15EAB0u) { return; }
    ctx->pc = 0x15EAB0u;
    // 0x15eab0: 0xc04fcc4
    ctx->pc = 0x15EAB0u;
    SET_GPR_U32(ctx, 31, 0x15EAB8u);
    ctx->pc = 0x13F310u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F310_0x13f310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EAB8u; }
    }
    if (ctx->pc != 0x15EAB8u) { return; }
    ctx->pc = 0x15EAB8u;
    // 0x15eab8: 0xc04fe16
    ctx->pc = 0x15EAB8u;
    SET_GPR_U32(ctx, 31, 0x15EAC0u);
    ctx->pc = 0x13F858u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F858_0x13f858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EAC0u; }
    }
    if (ctx->pc != 0x15EAC0u) { return; }
    ctx->pc = 0x15EAC0u;
    // 0x15eac0: 0xdfb00000
    ctx->pc = 0x15eac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15eac4: 0xdfb10008
    ctx->pc = 0x15eac4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15eac8: 0xdfb20010
    ctx->pc = 0x15eac8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15eacc: 0xdfbf0018
    ctx->pc = 0x15eaccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15ead0: 0x8058d30
    ctx->pc = 0x15EAD0u;
    ctx->pc = 0x15EAD4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1634C0u;
    entry_1634c0_0x163558(rdram, ctx, runtime); return;
    ctx->pc = 0x15EAD8u;
label_15ead8:
    // 0x15ead8: 0xdfb00000
    ctx->pc = 0x15ead8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15eadc: 0xdfb10008
    ctx->pc = 0x15eadcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15eae0: 0xdfb20010
    ctx->pc = 0x15eae0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15eae4: 0xdfbf0018
    ctx->pc = 0x15eae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15eae8: 0x3e00008
    ctx->pc = 0x15EAE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EAECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15EA48u: goto label_15ea48;
            case 0x15EA60u: goto label_15ea60;
            case 0x15EAD8u: goto label_15ead8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15EAF0u;
}
