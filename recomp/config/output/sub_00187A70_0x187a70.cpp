#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00187A70
// Address: 0x187a70 - 0x187ad0
void sub_00187A70_0x187a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x187a70u;

    // 0x187a70: 0x27bdffe0
    ctx->pc = 0x187a70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x187a74: 0xffb00000
    ctx->pc = 0x187a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x187a78: 0xffb10008
    ctx->pc = 0x187a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x187a7c: 0xffbf0010
    ctx->pc = 0x187a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x187a80: 0xc061e90
    ctx->pc = 0x187A80u;
    SET_GPR_U32(ctx, 31, 0x187A88u);
    ctx->pc = 0x187A84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x187A40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00187A40_0x187a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187A88u; }
    }
    if (ctx->pc != 0x187A88u) { return; }
    ctx->pc = 0x187A88u;
    // 0x187a88: 0x1018c0
    ctx->pc = 0x187a88u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 3));
    // 0x187a8c: 0x3c040029
    ctx->pc = 0x187a8cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)41 << 16));
    // 0x187a90: 0x701823
    ctx->pc = 0x187a90u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x187a94: 0x2491b8c8
    ctx->pc = 0x187a94u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 4), 4294949064));
    // 0x187a98: 0x10400007
    ctx->pc = 0x187A98u;
    {
        const bool branch_taken_0x187a98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x187A9Cu;
        SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x187a98) {
            ctx->pc = 0x187AB8u;
            goto label_187ab8;
        }
    }
    ctx->pc = 0x187AA0u;
    // 0x187aa0: 0x2301021
    ctx->pc = 0x187aa0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x187aa4: 0xc062342
    ctx->pc = 0x187AA4u;
    SET_GPR_U32(ctx, 31, 0x187AACu);
    ctx->pc = 0x187AA8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->pc = 0x188D08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00188D08_0x188d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187AACu; }
    }
    if (ctx->pc != 0x187AACu) { return; }
    ctx->pc = 0x187AACu;
    // 0x187aac: 0x2111821
    ctx->pc = 0x187aacu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x187ab0: 0xac600000
    ctx->pc = 0x187ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x187ab4: 0x24020001
    ctx->pc = 0x187ab4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_187ab8:
    // 0x187ab8: 0xdfb00000
    ctx->pc = 0x187ab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187abc: 0xdfb10008
    ctx->pc = 0x187abcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x187ac0: 0xdfbf0010
    ctx->pc = 0x187ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187ac4: 0x3e00008
    ctx->pc = 0x187AC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187AC8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187AB8u: goto label_187ab8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x187ACCu;
    // 0x187acc: 0x0
    ctx->pc = 0x187accu;
    // NOP
}
