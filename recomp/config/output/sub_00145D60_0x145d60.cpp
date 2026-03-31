#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00145D60
// Address: 0x145d60 - 0x145e28
void sub_00145D60_0x145d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x145d60u;

    // 0x145d60: 0x27bdffd0
    ctx->pc = 0x145d60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x145d64: 0x2405000a
    ctx->pc = 0x145d64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    // 0x145d68: 0xffb00000
    ctx->pc = 0x145d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x145d6c: 0xffb10010
    ctx->pc = 0x145d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x145d70: 0xffbf0020
    ctx->pc = 0x145d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x145d74: 0xc05167a
    ctx->pc = 0x145D74u;
    SET_GPR_U32(ctx, 31, 0x145D7Cu);
    ctx->pc = 0x145D78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1459E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001459E8_0x1459e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D7Cu; }
    }
    if (ctx->pc != 0x145D7Cu) { return; }
    ctx->pc = 0x145D7Cu;
    // 0x145d7c: 0x40882d
    ctx->pc = 0x145d7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145d80: 0x200202d
    ctx->pc = 0x145d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145d84: 0xc05167a
    ctx->pc = 0x145D84u;
    SET_GPR_U32(ctx, 31, 0x145D8Cu);
    ctx->pc = 0x145D88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x1459E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001459E8_0x1459e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D8Cu; }
    }
    if (ctx->pc != 0x145D8Cu) { return; }
    ctx->pc = 0x145D8Cu;
    // 0x145d8c: 0xae020168
    ctx->pc = 0x145d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 2));
    // 0x145d90: 0x200202d
    ctx->pc = 0x145d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145d94: 0xc05167a
    ctx->pc = 0x145D94u;
    SET_GPR_U32(ctx, 31, 0x145D9Cu);
    ctx->pc = 0x145D98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x1459E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001459E8_0x1459e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D9Cu; }
    }
    if (ctx->pc != 0x145D9Cu) { return; }
    ctx->pc = 0x145D9Cu;
    // 0x145d9c: 0x8e030168
    ctx->pc = 0x145d9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x145da0: 0x2462fffe
    ctx->pc = 0x145da0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x145da4: 0x2c420002
    ctx->pc = 0x145da4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x145da8: 0x10400009
    ctx->pc = 0x145DA8u;
    {
        const bool branch_taken_0x145da8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x145DACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x145da8) {
            ctx->pc = 0x145DD0u;
            goto label_145dd0;
        }
    }
    ctx->pc = 0x145DB0u;
    // 0x145db0: 0xc05167a
    ctx->pc = 0x145DB0u;
    SET_GPR_U32(ctx, 31, 0x145DB8u);
    ctx->pc = 0x145DB4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1459E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001459E8_0x1459e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145DB8u; }
    }
    if (ctx->pc != 0x145DB8u) { return; }
    ctx->pc = 0x145DB8u;
    // 0x145db8: 0xae02016c
    ctx->pc = 0x145db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 2));
    // 0x145dbc: 0x200202d
    ctx->pc = 0x145dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145dc0: 0xc05167a
    ctx->pc = 0x145DC0u;
    SET_GPR_U32(ctx, 31, 0x145DC8u);
    ctx->pc = 0x145DC4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x1459E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001459E8_0x1459e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145DC8u; }
    }
    if (ctx->pc != 0x145DC8u) { return; }
    ctx->pc = 0x145DC8u;
    // 0x145dc8: 0xae020170
    ctx->pc = 0x145dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 2));
    // 0x145dcc: 0x8e030168
    ctx->pc = 0x145dccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 360)));
label_145dd0:
    // 0x145dd0: 0x24020003
    ctx->pc = 0x145dd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x145dd4: 0x14620008
    ctx->pc = 0x145DD4u;
    {
        const bool branch_taken_0x145dd4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x145DD8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x145dd4) {
            ctx->pc = 0x145DF8u;
            goto label_145df8;
        }
    }
    ctx->pc = 0x145DDCu;
    // 0x145ddc: 0xc05167a
    ctx->pc = 0x145DDCu;
    SET_GPR_U32(ctx, 31, 0x145DE4u);
    ctx->pc = 0x145DE0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1459E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001459E8_0x1459e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145DE4u; }
    }
    if (ctx->pc != 0x145DE4u) { return; }
    ctx->pc = 0x145DE4u;
    // 0x145de4: 0xae020174
    ctx->pc = 0x145de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
    // 0x145de8: 0x200202d
    ctx->pc = 0x145de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145dec: 0xc05167a
    ctx->pc = 0x145DECu;
    SET_GPR_U32(ctx, 31, 0x145DF4u);
    ctx->pc = 0x145DF0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x1459E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001459E8_0x1459e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145DF4u; }
    }
    if (ctx->pc != 0x145DF4u) { return; }
    ctx->pc = 0x145DF4u;
    // 0x145df4: 0xae020178
    ctx->pc = 0x145df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 2));
label_145df8:
    // 0x145df8: 0xc051850
    ctx->pc = 0x145DF8u;
    SET_GPR_U32(ctx, 31, 0x145E00u);
    ctx->pc = 0x145DFCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x146140u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00146140_0x146140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145E00u; }
    }
    if (ctx->pc != 0x145E00u) { return; }
    ctx->pc = 0x145E00u;
    // 0x145e00: 0xc05178a
    ctx->pc = 0x145E00u;
    SET_GPR_U32(ctx, 31, 0x145E08u);
    ctx->pc = 0x145E04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145E28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00145E28_0x145e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145E08u; }
    }
    if (ctx->pc != 0x145E08u) { return; }
    ctx->pc = 0x145E08u;
    // 0x145e08: 0x200202d
    ctx->pc = 0x145e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145e0c: 0x220282d
    ctx->pc = 0x145e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145e10: 0xdfbf0020
    ctx->pc = 0x145e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145e14: 0xdfb10010
    ctx->pc = 0x145e14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145e18: 0xdfb00000
    ctx->pc = 0x145e18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145e1c: 0x8051862
    ctx->pc = 0x145E1Cu;
    ctx->pc = 0x145E20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x146188u;
    entry_146188_0x146200(rdram, ctx, runtime); return;
    ctx->pc = 0x145E24u;
    // 0x145e24: 0x0
    ctx->pc = 0x145e24u;
    // NOP
}
