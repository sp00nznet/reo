#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018BF40
// Address: 0x18bf40 - 0x18c000
void sub_0018BF40_0x18bf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18bf40u;

    // 0x18bf40: 0x3c080029
    ctx->pc = 0x18bf40u;
    SET_GPR_U32(ctx, 8, ((uint32_t)41 << 16));
    // 0x18bf44: 0xac800038
    ctx->pc = 0x18bf44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x18bf48: 0x182d
    ctx->pc = 0x18bf48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bf4c: 0x10000024
    ctx->pc = 0x18BF4Cu;
    {
        const bool branch_taken_0x18bf4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18BF50u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 17216));
        if (branch_taken_0x18bf4c) {
            ctx->pc = 0x18BFE0u;
            goto label_18bfe0;
        }
    }
    ctx->pc = 0x18BF54u;
label_18bf54:
    // 0x18bf54: 0x32880
    ctx->pc = 0x18bf54u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 2));
    // 0x18bf58: 0x90c60060
    ctx->pc = 0x18bf58u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x18bf5c: 0x852821
    ctx->pc = 0x18bf5cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18bf60: 0x24a70080
    ctx->pc = 0x18bf60u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 5), 128));
    // 0x18bf64: 0xaca00080
    ctx->pc = 0x18bf64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 0));
    // 0x18bf68: 0x628c0
    ctx->pc = 0x18bf68u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 3));
    // 0x18bf6c: 0xa62821
    ctx->pc = 0x18bf6cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x18bf70: 0x52840
    ctx->pc = 0x18bf70u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
    // 0x18bf74: 0xa62821
    ctx->pc = 0x18bf74u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x18bf78: 0x52880
    ctx->pc = 0x18bf78u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x18bf7c: 0x1054821
    ctx->pc = 0x18bf7cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x18bf80: 0x8d250044
    ctx->pc = 0x18bf80u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 9), 68)));
    // 0x18bf84: 0x10a00015
    ctx->pc = 0x18BF84u;
    {
        const bool branch_taken_0x18bf84 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x18bf84) {
            ctx->pc = 0x18BFDCu;
            goto label_18bfdc;
        }
    }
    ctx->pc = 0x18BF8Cu;
    // 0x18bf8c: 0xace50000
    ctx->pc = 0x18bf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x18bf90: 0x8c870038
    ctx->pc = 0x18bf90u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x18bf94: 0x10000007
    ctx->pc = 0x18BF94u;
    {
        const bool branch_taken_0x18bf94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18BF98u;
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18bf94) {
            ctx->pc = 0x18BFB4u;
            goto label_18bfb4;
        }
    }
    ctx->pc = 0x18BF9Cu;
label_18bf9c:
    // 0x18bf9c: 0x8d250044
    ctx->pc = 0x18bf9cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 9), 68)));
    // 0x18bfa0: 0x863021
    ctx->pc = 0x18bfa0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x18bfa4: 0x8cc60100
    ctx->pc = 0x18bfa4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 6), 256)));
    // 0x18bfa8: 0x10c5000c
    ctx->pc = 0x18BFA8u;
    {
        const bool branch_taken_0x18bfa8 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 5));
        if (branch_taken_0x18bfa8) {
            ctx->pc = 0x18BFDCu;
            goto label_18bfdc;
        }
    }
    ctx->pc = 0x18BFB0u;
    // 0x18bfb0: 0x254a0001
    ctx->pc = 0x18bfb0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
label_18bfb4:
    // 0x18bfb4: 0x147282a
    ctx->pc = 0x18bfb4u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 10), GPR_S32(ctx, 7)));
    // 0x18bfb8: 0x14a0fff8
    ctx->pc = 0x18BFB8u;
    {
        const bool branch_taken_0x18bfb8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x18BFBCu;
        SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 10), 2));
        if (branch_taken_0x18bfb8) {
            ctx->pc = 0x18BF9Cu;
            goto label_18bf9c;
        }
    }
    ctx->pc = 0x18BFC0u;
    // 0x18bfc0: 0x8c850038
    ctx->pc = 0x18bfc0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x18bfc4: 0x8d270044
    ctx->pc = 0x18bfc4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 9), 68)));
    // 0x18bfc8: 0x24a60001
    ctx->pc = 0x18bfc8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 5), 1));
    // 0x18bfcc: 0x52880
    ctx->pc = 0x18bfccu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x18bfd0: 0xac860038
    ctx->pc = 0x18bfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 6));
    // 0x18bfd4: 0x852821
    ctx->pc = 0x18bfd4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18bfd8: 0xaca70100
    ctx->pc = 0x18bfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 256), GPR_U32(ctx, 7));
label_18bfdc:
    // 0x18bfdc: 0x24630001
    ctx->pc = 0x18bfdcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_18bfe0:
    // 0x18bfe0: 0x8c850034
    ctx->pc = 0x18bfe0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x18bfe4: 0x65282a
    ctx->pc = 0x18bfe4u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 5)));
    // 0x18bfe8: 0x14a0ffda
    ctx->pc = 0x18BFE8u;
    {
        const bool branch_taken_0x18bfe8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x18BFECu;
        SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        if (branch_taken_0x18bfe8) {
            ctx->pc = 0x18BF54u;
            goto label_18bf54;
        }
    }
    ctx->pc = 0x18BFF0u;
    // 0x18bff0: 0x3e00008
    ctx->pc = 0x18BFF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18BF54u: goto label_18bf54;
            case 0x18BF9Cu: goto label_18bf9c;
            case 0x18BFB4u: goto label_18bfb4;
            case 0x18BFDCu: goto label_18bfdc;
            case 0x18BFE0u: goto label_18bfe0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18BFF8u;
    // 0x18bff8: 0x0
    ctx->pc = 0x18bff8u;
    // NOP
    // 0x18bffc: 0x0
    ctx->pc = 0x18bffcu;
    // NOP
}
