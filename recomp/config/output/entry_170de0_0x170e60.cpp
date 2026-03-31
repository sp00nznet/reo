#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_170de0
// Address: 0x170de0 - 0x170e60
void entry_170de0_0x170e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x170de0u;

    // 0x170de0: 0x27bdffe0
    ctx->pc = 0x170de0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x170de4: 0xffb00000
    ctx->pc = 0x170de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170de8: 0x80802d
    ctx->pc = 0x170de8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170dec: 0xffb10008
    ctx->pc = 0x170decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x170df0: 0xa0882d
    ctx->pc = 0x170df0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170df4: 0xffbf0010
    ctx->pc = 0x170df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x170df8: 0xc045198
    ctx->pc = 0x170DF8u;
    SET_GPR_U32(ctx, 31, 0x170E00u);
    ctx->pc = 0x170DFCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170E00u; }
    }
    if (ctx->pc != 0x170E00u) { return; }
    ctx->pc = 0x170E00u;
    // 0x170e00: 0x8e030014
    ctx->pc = 0x170e00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x170e04: 0xde020048
    ctx->pc = 0x170e04u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x170e08: 0x711823
    ctx->pc = 0x170e08u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x170e0c: 0x51102f
    ctx->pc = 0x170e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 17));
    // 0x170e10: 0xae030014
    ctx->pc = 0x170e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x170e14: 0x461000a
    ctx->pc = 0x170E14u;
    {
        const bool branch_taken_0x170e14 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x170E18u;
        WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 2));
        if (branch_taken_0x170e14) {
            ctx->pc = 0x170E40u;
            goto label_170e40;
        }
    }
    ctx->pc = 0x170E1Cu;
    // 0x170e1c: 0x0
    ctx->pc = 0x170e1cu;
    // NOP
label_170e20:
    // 0x170e20: 0x0
    ctx->pc = 0x170e20u;
    // NOP
    // 0x170e24: 0x0
    ctx->pc = 0x170e24u;
    // NOP
    // 0x170e28: 0x0
    ctx->pc = 0x170e28u;
    // NOP
    // 0x170e2c: 0x0
    ctx->pc = 0x170e2cu;
    // NOP
    // 0x170e30: 0x0
    ctx->pc = 0x170e30u;
    // NOP
    // 0x170e34: 0x1000fffa
    ctx->pc = 0x170E34u;
    {
        const bool branch_taken_0x170e34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x170e34) {
            ctx->pc = 0x170E20u;
            goto label_170e20;
        }
    }
    ctx->pc = 0x170E3Cu;
    // 0x170e3c: 0x0
    ctx->pc = 0x170e3cu;
    // NOP
label_170e40:
    // 0x170e40: 0xc045190
    ctx->pc = 0x170E40u;
    SET_GPR_U32(ctx, 31, 0x170E48u);
    ctx->pc = 0x170E44u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->pc = 0x114640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114640_0x114640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170E48u; }
    }
    if (ctx->pc != 0x170E48u) { return; }
    ctx->pc = 0x170E48u;
    // 0x170e48: 0x220102d
    ctx->pc = 0x170e48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170e4c: 0xdfb00000
    ctx->pc = 0x170e4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170e50: 0xdfb10008
    ctx->pc = 0x170e50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x170e54: 0xdfbf0010
    ctx->pc = 0x170e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170e58: 0x3e00008
    ctx->pc = 0x170E58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170E5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170E20u: goto label_170e20;
            case 0x170E40u: goto label_170e40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x170E60u;
}
