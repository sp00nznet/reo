#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00179B38
// Address: 0x179b38 - 0x179c30
void sub_00179B38_0x179b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x179b38u;

    // 0x179b38: 0x27bdffe0
    ctx->pc = 0x179b38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x179b3c: 0xffb00000
    ctx->pc = 0x179b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x179b40: 0x80802d
    ctx->pc = 0x179b40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179b44: 0xffb10008
    ctx->pc = 0x179b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x179b48: 0xffb20010
    ctx->pc = 0x179b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x179b4c: 0xa0902d
    ctx->pc = 0x179b4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179b50: 0xffbf0018
    ctx->pc = 0x179b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x179b54: 0x8e020004
    ctx->pc = 0x179b54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x179b58: 0xc05e4a6
    ctx->pc = 0x179B58u;
    SET_GPR_U32(ctx, 31, 0x179B60u);
    ctx->pc = 0x179B5Cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 176));
    ctx->pc = 0x179298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00179298_0x179298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179B60u; }
    }
    if (ctx->pc != 0x179B60u) { return; }
    ctx->pc = 0x179B60u;
    // 0x179b60: 0x50400009
    ctx->pc = 0x179B60u;
    {
        const bool branch_taken_0x179b60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x179b60) {
            ctx->pc = 0x179B64u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x179B88u;
            goto label_179b88;
        }
    }
    ctx->pc = 0x179B68u;
    // 0x179b68: 0x8e03000c
    ctx->pc = 0x179b68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x179b6c: 0x2863006e
    ctx->pc = 0x179b6cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 110));
    // 0x179b70: 0x14600004
    ctx->pc = 0x179B70u;
    {
        const bool branch_taken_0x179b70 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x179B74u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x179b70) {
            ctx->pc = 0x179B84u;
            goto label_179b84;
        }
    }
    ctx->pc = 0x179B78u;
    // 0x179b78: 0x8e230004
    ctx->pc = 0x179b78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x179b7c: 0x24020001
    ctx->pc = 0x179b7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x179b80: 0xae430000
    ctx->pc = 0x179b80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_179b84:
    // 0x179b84: 0xdfb00000
    ctx->pc = 0x179b84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_179b88:
    // 0x179b88: 0xdfb10008
    ctx->pc = 0x179b88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x179b8c: 0xdfb20010
    ctx->pc = 0x179b8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179b90: 0xdfbf0018
    ctx->pc = 0x179b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x179b94: 0x3e00008
    ctx->pc = 0x179B94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179B98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x179B84u: goto label_179b84;
            case 0x179B88u: goto label_179b88;
            case 0x179BD8u: goto label_179bd8;
            case 0x179C20u: goto label_179c20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x179B9Cu;
    // 0x179b9c: 0x0
    ctx->pc = 0x179b9cu;
    // NOP
    // 0x179ba0: 0x27bdffe0
    ctx->pc = 0x179ba0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x179ba4: 0xffb00000
    ctx->pc = 0x179ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x179ba8: 0xffb10008
    ctx->pc = 0x179ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x179bac: 0xa0882d
    ctx->pc = 0x179bacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179bb0: 0xffbf0010
    ctx->pc = 0x179bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x179bb4: 0x8c820004
    ctx->pc = 0x179bb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x179bb8: 0xc05e4a6
    ctx->pc = 0x179BB8u;
    SET_GPR_U32(ctx, 31, 0x179BC0u);
    ctx->pc = 0x179BBCu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 176));
    ctx->pc = 0x179298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00179298_0x179298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179BC0u; }
    }
    if (ctx->pc != 0x179BC0u) { return; }
    ctx->pc = 0x179BC0u;
    // 0x179bc0: 0x50400005
    ctx->pc = 0x179BC0u;
    {
        const bool branch_taken_0x179bc0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x179bc0) {
            ctx->pc = 0x179BC4u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x179BD8u;
            goto label_179bd8;
        }
    }
    ctx->pc = 0x179BC8u;
    // 0x179bc8: 0x8e030008
    ctx->pc = 0x179bc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x179bcc: 0x24020001
    ctx->pc = 0x179bccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x179bd0: 0xae230000
    ctx->pc = 0x179bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x179bd4: 0xdfb00000
    ctx->pc = 0x179bd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_179bd8:
    // 0x179bd8: 0xdfb10008
    ctx->pc = 0x179bd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x179bdc: 0xdfbf0010
    ctx->pc = 0x179bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179be0: 0x3e00008
    ctx->pc = 0x179BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179BE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x179B84u: goto label_179b84;
            case 0x179B88u: goto label_179b88;
            case 0x179BD8u: goto label_179bd8;
            case 0x179C20u: goto label_179c20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x179BE8u;
    // 0x179be8: 0x27bdffe0
    ctx->pc = 0x179be8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x179bec: 0xffb00000
    ctx->pc = 0x179becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x179bf0: 0xffb10008
    ctx->pc = 0x179bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x179bf4: 0xa0882d
    ctx->pc = 0x179bf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179bf8: 0xffbf0010
    ctx->pc = 0x179bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x179bfc: 0x8c820004
    ctx->pc = 0x179bfcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x179c00: 0xc05e4a6
    ctx->pc = 0x179C00u;
    SET_GPR_U32(ctx, 31, 0x179C08u);
    ctx->pc = 0x179C04u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 176));
    ctx->pc = 0x179298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00179298_0x179298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179C08u; }
    }
    if (ctx->pc != 0x179C08u) { return; }
    ctx->pc = 0x179C08u;
    // 0x179c08: 0x50400005
    ctx->pc = 0x179C08u;
    {
        const bool branch_taken_0x179c08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x179c08) {
            ctx->pc = 0x179C0Cu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x179C20u;
            goto label_179c20;
        }
    }
    ctx->pc = 0x179C10u;
    // 0x179c10: 0x8e03000c
    ctx->pc = 0x179c10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x179c14: 0x24020001
    ctx->pc = 0x179c14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x179c18: 0xae230000
    ctx->pc = 0x179c18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x179c1c: 0xdfb00000
    ctx->pc = 0x179c1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_179c20:
    // 0x179c20: 0xdfb10008
    ctx->pc = 0x179c20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x179c24: 0xdfbf0010
    ctx->pc = 0x179c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179c28: 0x3e00008
    ctx->pc = 0x179C28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179C2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x179B84u: goto label_179b84;
            case 0x179B88u: goto label_179b88;
            case 0x179BD8u: goto label_179bd8;
            case 0x179C20u: goto label_179c20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x179C30u;
}
