#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018DAB0
// Address: 0x18dab0 - 0x18db80
void sub_0018DAB0_0x18dab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18dab0u;

    // 0x18dab0: 0x27bdf7d0
    ctx->pc = 0x18dab0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294965200));
    // 0x18dab4: 0x3c050024
    ctx->pc = 0x18dab4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x18dab8: 0xffbf0020
    ctx->pc = 0x18dab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18dabc: 0x24a51c68
    ctx->pc = 0x18dabcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 7272));
    // 0x18dac0: 0x7fb10010
    ctx->pc = 0x18dac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18dac4: 0x7fb00000
    ctx->pc = 0x18dac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18dac8: 0x80802d
    ctx->pc = 0x18dac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dacc: 0xc042bf0
    ctx->pc = 0x18DACCu;
    SET_GPR_U32(ctx, 31, 0x18DAD4u);
    ctx->pc = 0x18DAD0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DAD4u; }
    }
    if (ctx->pc != 0x18DAD4u) { return; }
    ctx->pc = 0x18DAD4u;
    // 0x18dad4: 0xc042c56
    ctx->pc = 0x18DAD4u;
    SET_GPR_U32(ctx, 31, 0x18DADCu);
    ctx->pc = 0x18DAD8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DADCu; }
    }
    if (ctx->pc != 0x18DADCu) { return; }
    ctx->pc = 0x18DADCu;
    // 0x18dadc: 0x5d1021
    ctx->pc = 0x18dadcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x18dae0: 0x200282d
    ctx->pc = 0x18dae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dae4: 0x24500030
    ctx->pc = 0x18dae4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 48));
    // 0x18dae8: 0xc042aee
    ctx->pc = 0x18DAE8u;
    SET_GPR_U32(ctx, 31, 0x18DAF0u);
    ctx->pc = 0x18DAECu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ABB8_0x10abb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DAF0u; }
    }
    if (ctx->pc != 0x18DAF0u) { return; }
    ctx->pc = 0x18DAF0u;
    // 0x18daf0: 0xc04336a
    ctx->pc = 0x18DAF0u;
    SET_GPR_U32(ctx, 31, 0x18DAF8u);
    ctx->pc = 0x18DAF4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10CDA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CDA8_0x10cda8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DAF8u; }
    }
    if (ctx->pc != 0x18DAF8u) { return; }
    ctx->pc = 0x18DAF8u;
    // 0x18daf8: 0x3c050024
    ctx->pc = 0x18daf8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x18dafc: 0x27a40030
    ctx->pc = 0x18dafcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x18db00: 0xc042aee
    ctx->pc = 0x18DB00u;
    SET_GPR_U32(ctx, 31, 0x18DB08u);
    ctx->pc = 0x18DB04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 7280));
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ABB8_0x10abb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DB08u; }
    }
    if (ctx->pc != 0x18DB08u) { return; }
    ctx->pc = 0x18DB08u;
    // 0x18db08: 0xc0635d8
    ctx->pc = 0x18DB08u;
    SET_GPR_U32(ctx, 31, 0x18DB10u);
    ctx->pc = 0x18DB0Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x18D760u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018D760_0x18d760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DB10u; }
    }
    if (ctx->pc != 0x18DB10u) { return; }
    ctx->pc = 0x18DB10u;
    // 0x18db10: 0xc04af5e
    ctx->pc = 0x18DB10u;
    SET_GPR_U32(ctx, 31, 0x18DB18u);
    ctx->pc = 0x12BD78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BD78_0x12bd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DB18u; }
    }
    if (ctx->pc != 0x18DB18u) { return; }
    ctx->pc = 0x18DB18u;
    // 0x18db18: 0x27a40030
    ctx->pc = 0x18db18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x18db1c: 0xc04629c
    ctx->pc = 0x18DB1Cu;
    SET_GPR_U32(ctx, 31, 0x18DB24u);
    ctx->pc = 0x18DB20u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x118A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118A70_0x118a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DB24u; }
    }
    if (ctx->pc != 0x18DB24u) { return; }
    ctx->pc = 0x18DB24u;
    // 0x18db24: 0x4410005
    ctx->pc = 0x18DB24u;
    {
        const bool branch_taken_0x18db24 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x18DB28u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18db24) {
            ctx->pc = 0x18DB3Cu;
            goto label_18db3c;
        }
    }
    ctx->pc = 0x18DB2Cu;
    // 0x18db2c: 0xc04af64
    ctx->pc = 0x18DB2Cu;
    SET_GPR_U32(ctx, 31, 0x18DB34u);
    ctx->pc = 0x12BD90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BD90_0x12bd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DB34u; }
    }
    if (ctx->pc != 0x18DB34u) { return; }
    ctx->pc = 0x18DB34u;
    // 0x18db34: 0x1000000b
    ctx->pc = 0x18DB34u;
    {
        const bool branch_taken_0x18db34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18DB38u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18db34) {
            ctx->pc = 0x18DB64u;
            goto label_18db64;
        }
    }
    ctx->pc = 0x18DB3Cu;
label_18db3c:
    // 0x18db3c: 0x220202d
    ctx->pc = 0x18db3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18db40: 0x282d
    ctx->pc = 0x18db40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18db44: 0xc04639e
    ctx->pc = 0x18DB44u;
    SET_GPR_U32(ctx, 31, 0x18DB4Cu);
    ctx->pc = 0x18DB48u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x118E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118E78_0x118e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DB4Cu; }
    }
    if (ctx->pc != 0x18DB4Cu) { return; }
    ctx->pc = 0x18DB4Cu;
    // 0x18db4c: 0x40802d
    ctx->pc = 0x18db4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18db50: 0xc04633e
    ctx->pc = 0x18DB50u;
    SET_GPR_U32(ctx, 31, 0x18DB58u);
    ctx->pc = 0x18DB54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x118CF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118CF8_0x118cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DB58u; }
    }
    if (ctx->pc != 0x18DB58u) { return; }
    ctx->pc = 0x18DB58u;
    // 0x18db58: 0xc04af64
    ctx->pc = 0x18DB58u;
    SET_GPR_U32(ctx, 31, 0x18DB60u);
    ctx->pc = 0x12BD90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BD90_0x12bd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DB60u; }
    }
    if (ctx->pc != 0x18DB60u) { return; }
    ctx->pc = 0x18DB60u;
    // 0x18db60: 0x200102d
    ctx->pc = 0x18db60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18db64:
    // 0x18db64: 0xdfbf0020
    ctx->pc = 0x18db64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18db68: 0x7bb10010
    ctx->pc = 0x18db68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18db6c: 0x7bb00000
    ctx->pc = 0x18db6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18db70: 0x3e00008
    ctx->pc = 0x18DB70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DB74u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 2096));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18DB3Cu: goto label_18db3c;
            case 0x18DB64u: goto label_18db64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18DB78u;
    // 0x18db78: 0x0
    ctx->pc = 0x18db78u;
    // NOP
    // 0x18db7c: 0x0
    ctx->pc = 0x18db7cu;
    // NOP
}
