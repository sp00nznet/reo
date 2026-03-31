#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00172AC8
// Address: 0x172ac8 - 0x172b68
void sub_00172AC8_0x172ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x172ac8u;

    // 0x172ac8: 0x27bdffe0
    ctx->pc = 0x172ac8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x172acc: 0x24020003
    ctx->pc = 0x172accu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x172ad0: 0xffb00000
    ctx->pc = 0x172ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x172ad4: 0x80802d
    ctx->pc = 0x172ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172ad8: 0xffb10008
    ctx->pc = 0x172ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x172adc: 0xffbf0010
    ctx->pc = 0x172adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x172ae0: 0x8e03004c
    ctx->pc = 0x172ae0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x172ae4: 0x10620012
    ctx->pc = 0x172AE4u;
    {
        const bool branch_taken_0x172ae4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x172AE8u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 72)));
        if (branch_taken_0x172ae4) {
            ctx->pc = 0x172B30u;
            goto label_172b30;
        }
    }
    ctx->pc = 0x172AECu;
    // 0x172aec: 0x28620004
    ctx->pc = 0x172aecu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4));
    // 0x172af0: 0x10400007
    ctx->pc = 0x172AF0u;
    {
        const bool branch_taken_0x172af0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x172AF4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x172af0) {
            ctx->pc = 0x172B10u;
            goto label_172b10;
        }
    }
    ctx->pc = 0x172AF8u;
    // 0x172af8: 0x24020002
    ctx->pc = 0x172af8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x172afc: 0x1062000a
    ctx->pc = 0x172AFCu;
    {
        const bool branch_taken_0x172afc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x172B00u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x172afc) {
            ctx->pc = 0x172B28u;
            goto label_172b28;
        }
    }
    ctx->pc = 0x172B04u;
    // 0x172b04: 0x10000014
    ctx->pc = 0x172B04u;
    {
        const bool branch_taken_0x172b04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x172B08u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x172b04) {
            ctx->pc = 0x172B58u;
            goto label_172b58;
        }
    }
    ctx->pc = 0x172B0Cu;
    // 0x172b0c: 0x0
    ctx->pc = 0x172b0cu;
    // NOP
label_172b10:
    // 0x172b10: 0x10620009
    ctx->pc = 0x172B10u;
    {
        const bool branch_taken_0x172b10 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x172B14u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x172b10) {
            ctx->pc = 0x172B38u;
            goto label_172b38;
        }
    }
    ctx->pc = 0x172B18u;
    // 0x172b18: 0x10620007
    ctx->pc = 0x172B18u;
    {
        const bool branch_taken_0x172b18 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x172B1Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x172b18) {
            ctx->pc = 0x172B38u;
            goto label_172b38;
        }
    }
    ctx->pc = 0x172B20u;
    // 0x172b20: 0x1000000d
    ctx->pc = 0x172B20u;
    {
        const bool branch_taken_0x172b20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x172B24u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x172b20) {
            ctx->pc = 0x172B58u;
            goto label_172b58;
        }
    }
    ctx->pc = 0x172B28u;
label_172b28:
    // 0x172b28: 0x10000009
    ctx->pc = 0x172B28u;
    {
        const bool branch_taken_0x172b28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x172B2Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x172b28) {
            ctx->pc = 0x172B50u;
            goto label_172b50;
        }
    }
    ctx->pc = 0x172B30u;
label_172b30:
    // 0x172b30: 0x10000007
    ctx->pc = 0x172B30u;
    {
        const bool branch_taken_0x172b30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x172B34u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x172b30) {
            ctx->pc = 0x172B50u;
            goto label_172b50;
        }
    }
    ctx->pc = 0x172B38u;
label_172b38:
    // 0x172b38: 0xc05caf8
    ctx->pc = 0x172B38u;
    SET_GPR_U32(ctx, 31, 0x172B40u);
    ctx->pc = 0x172B3Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x172BE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00172BE0_0x172be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172B40u; }
    }
    if (ctx->pc != 0x172B40u) { return; }
    ctx->pc = 0x172B40u;
    // 0x172b40: 0x10400003
    ctx->pc = 0x172B40u;
    {
        const bool branch_taken_0x172b40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x172B44u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x172b40) {
            ctx->pc = 0x172B50u;
            goto label_172b50;
        }
    }
    ctx->pc = 0x172B48u;
    // 0x172b48: 0xc05cec0
    ctx->pc = 0x172B48u;
    SET_GPR_U32(ctx, 31, 0x172B50u);
    ctx->pc = 0x172B4Cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x173B00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00173B00_0x173b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172B50u; }
    }
    if (ctx->pc != 0x172B50u) { return; }
    ctx->pc = 0x172B50u;
label_172b50:
    // 0x172b50: 0x220102d
    ctx->pc = 0x172b50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172b54: 0xdfb00000
    ctx->pc = 0x172b54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_172b58:
    // 0x172b58: 0xdfb10008
    ctx->pc = 0x172b58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x172b5c: 0xdfbf0010
    ctx->pc = 0x172b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172b60: 0x3e00008
    ctx->pc = 0x172B60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172B64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172B10u: goto label_172b10;
            case 0x172B28u: goto label_172b28;
            case 0x172B30u: goto label_172b30;
            case 0x172B38u: goto label_172b38;
            case 0x172B50u: goto label_172b50;
            case 0x172B58u: goto label_172b58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172B68u;
}
