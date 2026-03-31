#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00160C90
// Address: 0x160c90 - 0x160d48
void sub_00160C90_0x160c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x160c90u;

    // 0x160c90: 0x27bdffc0
    ctx->pc = 0x160c90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x160c94: 0x80402d
    ctx->pc = 0x160c94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160c98: 0xffb00020
    ctx->pc = 0x160c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x160c9c: 0xa0802d
    ctx->pc = 0x160c9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160ca0: 0xffb10028
    ctx->pc = 0x160ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x160ca4: 0x24030003
    ctx->pc = 0x160ca4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x160ca8: 0xffbf0030
    ctx->pc = 0x160ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x160cac: 0x26040004
    ctx->pc = 0x160cacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4));
    // 0x160cb0: 0x8d11000c
    ctx->pc = 0x160cb0u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x160cb4: 0x8d090008
    ctx->pc = 0x160cb4u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x160cb8: 0x8d020004
    ctx->pc = 0x160cb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x160cbc: 0x220302d
    ctx->pc = 0x160cbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160cc0: 0x220382d
    ctx->pc = 0x160cc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160cc4: 0x120282d
    ctx->pc = 0x160cc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160cc8: 0xae090044
    ctx->pc = 0x160cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 9));
    // 0x160ccc: 0x10430006
    ctx->pc = 0x160CCCu;
    {
        const bool branch_taken_0x160ccc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x160CD0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 17));
        if (branch_taken_0x160ccc) {
            ctx->pc = 0x160CE8u;
            goto label_160ce8;
        }
    }
    ctx->pc = 0x160CD4u;
    // 0x160cd4: 0x8d050000
    ctx->pc = 0x160cd4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x160cd8: 0xc058356
    ctx->pc = 0x160CD8u;
    SET_GPR_U32(ctx, 31, 0x160CE0u);
    ctx->pc = 0x160CDCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160D58_0x160d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160CE0u; }
    }
    if (ctx->pc != 0x160CE0u) { return; }
    ctx->pc = 0x160CE0u;
    // 0x160ce0: 0x10000014
    ctx->pc = 0x160CE0u;
    {
        const bool branch_taken_0x160ce0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x160CE4u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x160ce0) {
            ctx->pc = 0x160D34u;
            goto label_160d34;
        }
    }
    ctx->pc = 0x160CE8u;
label_160ce8:
    // 0x160ce8: 0x8d040000
    ctx->pc = 0x160ce8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x160cec: 0xc05785c
    ctx->pc = 0x160CECu;
    SET_GPR_U32(ctx, 31, 0x160CF4u);
    ctx->pc = 0x160CF0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15E170u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E170_0x15e170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160CF4u; }
    }
    if (ctx->pc != 0x160CF4u) { return; }
    ctx->pc = 0x160CF4u;
    // 0x160cf4: 0x26040004
    ctx->pc = 0x160cf4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4));
    // 0x160cf8: 0x8fa50000
    ctx->pc = 0x160cf8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160cfc: 0x220382d
    ctx->pc = 0x160cfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160d00: 0xc058356
    ctx->pc = 0x160D00u;
    SET_GPR_U32(ctx, 31, 0x160D08u);
    ctx->pc = 0x160D04u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->pc = 0x160D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160D58_0x160d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160D08u; }
    }
    if (ctx->pc != 0x160D08u) { return; }
    ctx->pc = 0x160D08u;
    // 0x160d08: 0x26040014
    ctx->pc = 0x160d08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 20));
    // 0x160d0c: 0x8fa50004
    ctx->pc = 0x160d0cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x160d10: 0x220382d
    ctx->pc = 0x160d10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160d14: 0xc058356
    ctx->pc = 0x160D14u;
    SET_GPR_U32(ctx, 31, 0x160D1Cu);
    ctx->pc = 0x160D18u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x160D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160D58_0x160d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160D1Cu; }
    }
    if (ctx->pc != 0x160D1Cu) { return; }
    ctx->pc = 0x160D1Cu;
    // 0x160d1c: 0x26040024
    ctx->pc = 0x160d1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 36));
    // 0x160d20: 0x8fa50008
    ctx->pc = 0x160d20u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x160d24: 0x220382d
    ctx->pc = 0x160d24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160d28: 0xc058356
    ctx->pc = 0x160D28u;
    SET_GPR_U32(ctx, 31, 0x160D30u);
    ctx->pc = 0x160D2Cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->pc = 0x160D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160D58_0x160d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160D30u; }
    }
    if (ctx->pc != 0x160D30u) { return; }
    ctx->pc = 0x160D30u;
    // 0x160d30: 0xdfb00020
    ctx->pc = 0x160d30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_160d34:
    // 0x160d34: 0xdfb10028
    ctx->pc = 0x160d34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x160d38: 0xdfbf0030
    ctx->pc = 0x160d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x160d3c: 0x3e00008
    ctx->pc = 0x160D3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160D40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160CE8u: goto label_160ce8;
            case 0x160D34u: goto label_160d34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x160D44u;
    // 0x160d44: 0x0
    ctx->pc = 0x160d44u;
    // NOP
}
