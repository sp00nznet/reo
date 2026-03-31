#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018D9D0
// Address: 0x18d9d0 - 0x18dab0
void sub_0018D9D0_0x18d9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18d9d0u;

    // 0x18d9d0: 0x27bdf7c0
    ctx->pc = 0x18d9d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294965184));
    // 0x18d9d4: 0xffbf0030
    ctx->pc = 0x18d9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18d9d8: 0x7fb20020
    ctx->pc = 0x18d9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18d9dc: 0x7fb10010
    ctx->pc = 0x18d9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18d9e0: 0xa0902d
    ctx->pc = 0x18d9e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d9e4: 0x7fb00000
    ctx->pc = 0x18d9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18d9e8: 0x3c050024
    ctx->pc = 0x18d9e8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x18d9ec: 0x80802d
    ctx->pc = 0x18d9ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d9f0: 0xc0882d
    ctx->pc = 0x18d9f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d9f4: 0x27a40040
    ctx->pc = 0x18d9f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x18d9f8: 0xc042bf0
    ctx->pc = 0x18D9F8u;
    SET_GPR_U32(ctx, 31, 0x18DA00u);
    ctx->pc = 0x18D9FCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 7272));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DA00u; }
    }
    if (ctx->pc != 0x18DA00u) { return; }
    ctx->pc = 0x18DA00u;
    // 0x18da00: 0xc042c56
    ctx->pc = 0x18DA00u;
    SET_GPR_U32(ctx, 31, 0x18DA08u);
    ctx->pc = 0x18DA04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DA08u; }
    }
    if (ctx->pc != 0x18DA08u) { return; }
    ctx->pc = 0x18DA08u;
    // 0x18da08: 0x5d1021
    ctx->pc = 0x18da08u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x18da0c: 0x200282d
    ctx->pc = 0x18da0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18da10: 0x24500040
    ctx->pc = 0x18da10u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 64));
    // 0x18da14: 0xc042aee
    ctx->pc = 0x18DA14u;
    SET_GPR_U32(ctx, 31, 0x18DA1Cu);
    ctx->pc = 0x18DA18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ABB8_0x10abb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DA1Cu; }
    }
    if (ctx->pc != 0x18DA1Cu) { return; }
    ctx->pc = 0x18DA1Cu;
    // 0x18da1c: 0xc04336a
    ctx->pc = 0x18DA1Cu;
    SET_GPR_U32(ctx, 31, 0x18DA24u);
    ctx->pc = 0x18DA20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10CDA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CDA8_0x10cda8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DA24u; }
    }
    if (ctx->pc != 0x18DA24u) { return; }
    ctx->pc = 0x18DA24u;
    // 0x18da24: 0x3c050024
    ctx->pc = 0x18da24u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x18da28: 0x27a40040
    ctx->pc = 0x18da28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x18da2c: 0xc042aee
    ctx->pc = 0x18DA2Cu;
    SET_GPR_U32(ctx, 31, 0x18DA34u);
    ctx->pc = 0x18DA30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 7280));
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ABB8_0x10abb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DA34u; }
    }
    if (ctx->pc != 0x18DA34u) { return; }
    ctx->pc = 0x18DA34u;
    // 0x18da34: 0xc04af5e
    ctx->pc = 0x18DA34u;
    SET_GPR_U32(ctx, 31, 0x18DA3Cu);
    ctx->pc = 0x12BD78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BD78_0x12bd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DA3Cu; }
    }
    if (ctx->pc != 0x18DA3Cu) { return; }
    ctx->pc = 0x18DA3Cu;
    // 0x18da3c: 0x27a40040
    ctx->pc = 0x18da3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x18da40: 0xc04629c
    ctx->pc = 0x18DA40u;
    SET_GPR_U32(ctx, 31, 0x18DA48u);
    ctx->pc = 0x18DA44u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x118A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118A70_0x118a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DA48u; }
    }
    if (ctx->pc != 0x18DA48u) { return; }
    ctx->pc = 0x18DA48u;
    // 0x18da48: 0x4410005
    ctx->pc = 0x18DA48u;
    {
        const bool branch_taken_0x18da48 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x18DA4Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18da48) {
            ctx->pc = 0x18DA60u;
            goto label_18da60;
        }
    }
    ctx->pc = 0x18DA50u;
    // 0x18da50: 0xc04af64
    ctx->pc = 0x18DA50u;
    SET_GPR_U32(ctx, 31, 0x18DA58u);
    ctx->pc = 0x12BD90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BD90_0x12bd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DA58u; }
    }
    if (ctx->pc != 0x18DA58u) { return; }
    ctx->pc = 0x18DA58u;
    // 0x18da58: 0x1000000e
    ctx->pc = 0x18DA58u;
    {
        const bool branch_taken_0x18da58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18DA5Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18da58) {
            ctx->pc = 0x18DA94u;
            goto label_18da94;
        }
    }
    ctx->pc = 0x18DA60u;
label_18da60:
    // 0x18da60: 0x200202d
    ctx->pc = 0x18da60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18da64: 0x282d
    ctx->pc = 0x18da64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18da68: 0xc04639e
    ctx->pc = 0x18DA68u;
    SET_GPR_U32(ctx, 31, 0x18DA70u);
    ctx->pc = 0x18DA6Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x118E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118E78_0x118e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DA70u; }
    }
    if (ctx->pc != 0x18DA70u) { return; }
    ctx->pc = 0x18DA70u;
    // 0x18da70: 0x240282d
    ctx->pc = 0x18da70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18da74: 0x220302d
    ctx->pc = 0x18da74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18da78: 0xc0464c4
    ctx->pc = 0x18DA78u;
    SET_GPR_U32(ctx, 31, 0x18DA80u);
    ctx->pc = 0x18DA7Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x119310u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00119310_0x119310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DA80u; }
    }
    if (ctx->pc != 0x18DA80u) { return; }
    ctx->pc = 0x18DA80u;
    // 0x18da80: 0xc04633e
    ctx->pc = 0x18DA80u;
    SET_GPR_U32(ctx, 31, 0x18DA88u);
    ctx->pc = 0x18DA84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x118CF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118CF8_0x118cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DA88u; }
    }
    if (ctx->pc != 0x18DA88u) { return; }
    ctx->pc = 0x18DA88u;
    // 0x18da88: 0xc04af64
    ctx->pc = 0x18DA88u;
    SET_GPR_U32(ctx, 31, 0x18DA90u);
    ctx->pc = 0x12BD90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BD90_0x12bd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DA90u; }
    }
    if (ctx->pc != 0x18DA90u) { return; }
    ctx->pc = 0x18DA90u;
    // 0x18da90: 0x24020001
    ctx->pc = 0x18da90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_18da94:
    // 0x18da94: 0xdfbf0030
    ctx->pc = 0x18da94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18da98: 0x7bb20020
    ctx->pc = 0x18da98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18da9c: 0x7bb10010
    ctx->pc = 0x18da9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18daa0: 0x7bb00000
    ctx->pc = 0x18daa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18daa4: 0x3e00008
    ctx->pc = 0x18DAA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DAA8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 2112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18DA60u: goto label_18da60;
            case 0x18DA94u: goto label_18da94;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18DAACu;
    // 0x18daac: 0x0
    ctx->pc = 0x18daacu;
    // NOP
}
