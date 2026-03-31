#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00150E08
// Address: 0x150e08 - 0x150ed0
void sub_00150E08_0x150e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x150e08u;

    // 0x150e08: 0x80502d
    ctx->pc = 0x150e08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150e0c: 0x24080001
    ctx->pc = 0x150e0cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x150e10: 0x8d440050
    ctx->pc = 0x150e10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 10), 80)));
    // 0x150e14: 0x8d430004
    ctx->pc = 0x150e14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x150e18: 0x8d420054
    ctx->pc = 0x150e18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 10), 84)));
    // 0x150e1c: 0x42300
    ctx->pc = 0x150e1cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 12));
    // 0x150e20: 0x8d460008
    ctx->pc = 0x150e20u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x150e24: 0x832025
    ctx->pc = 0x150e24u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x150e28: 0x21300
    ctx->pc = 0x150e28u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 12));
    // 0x150e2c: 0x2483000f
    ctx->pc = 0x150e2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 15));
    // 0x150e30: 0x463025
    ctx->pc = 0x150e30u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x150e34: 0x8d470048
    ctx->pc = 0x150e34u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 10), 72)));
    // 0x150e38: 0x24c5000f
    ctx->pc = 0x150e38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 15));
    // 0x150e3c: 0x31902
    ctx->pc = 0x150e3cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 4));
    // 0x150e40: 0x52902
    ctx->pc = 0x150e40u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 4));
    // 0x150e44: 0xad4302cc
    ctx->pc = 0x150e44u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 716), GPR_U32(ctx, 3));
    // 0x150e48: 0xad4402c4
    ctx->pc = 0x150e48u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 708), GPR_U32(ctx, 4));
    // 0x150e4c: 0x14e80004
    ctx->pc = 0x150E4Cu;
    {
        const bool branch_taken_0x150e4c = (GPR_U32(ctx, 7) != GPR_U32(ctx, 8));
        ctx->pc = 0x150E50u;
        WRITE32(ADD32(GPR_U32(ctx, 10), 712), GPR_U32(ctx, 6));
        if (branch_taken_0x150e4c) {
            ctx->pc = 0x150E60u;
            goto label_150e60;
        }
    }
    ctx->pc = 0x150E54u;
    // 0x150e54: 0x1000000c
    ctx->pc = 0x150E54u;
    {
        const bool branch_taken_0x150e54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x150E58u;
        WRITE32(ADD32(GPR_U32(ctx, 10), 720), GPR_U32(ctx, 5));
        if (branch_taken_0x150e54) {
            ctx->pc = 0x150E88u;
            goto label_150e88;
        }
    }
    ctx->pc = 0x150E5Cu;
    // 0x150e5c: 0x0
    ctx->pc = 0x150e5cu;
    // NOP
label_150e60:
    // 0x150e60: 0x8d430118
    ctx->pc = 0x150e60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 10), 280)));
    // 0x150e64: 0x24020003
    ctx->pc = 0x150e64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x150e68: 0x14620005
    ctx->pc = 0x150E68u;
    {
        const bool branch_taken_0x150e68 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x150E6Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 31));
        if (branch_taken_0x150e68) {
            ctx->pc = 0x150E80u;
            goto label_150e80;
        }
    }
    ctx->pc = 0x150E70u;
    // 0x150e70: 0x21142
    ctx->pc = 0x150e70u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 5));
    // 0x150e74: 0x10000003
    ctx->pc = 0x150E74u;
    {
        const bool branch_taken_0x150e74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x150E78u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x150e74) {
            ctx->pc = 0x150E84u;
            goto label_150e84;
        }
    }
    ctx->pc = 0x150E7Cu;
    // 0x150e7c: 0x0
    ctx->pc = 0x150e7cu;
    // NOP
label_150e80:
    // 0x150e80: 0x21142
    ctx->pc = 0x150e80u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 5));
label_150e84:
    // 0x150e84: 0xad4202d0
    ctx->pc = 0x150e84u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 720), GPR_U32(ctx, 2));
label_150e88:
    // 0x150e88: 0x8d4602cc
    ctx->pc = 0x150e88u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 10), 716)));
    // 0x150e8c: 0x8d4702d0
    ctx->pc = 0x150e8cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 10), 720)));
    // 0x150e90: 0x8d43004c
    ctx->pc = 0x150e90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 10), 76)));
    // 0x150e94: 0x63100
    ctx->pc = 0x150e94u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 4));
    // 0x150e98: 0x73900
    ctx->pc = 0x150e98u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 4));
    // 0x150e9c: 0xc0282d
    ctx->pc = 0x150e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150ea0: 0x38690001
    ctx->pc = 0x150ea0u;
    SET_GPR_U32(ctx, 9, XOR32(GPR_U32(ctx, 3), 1));
    // 0x150ea4: 0x38630003
    ctx->pc = 0x150ea4u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 3));
    // 0x150ea8: 0xe0102d
    ctx->pc = 0x150ea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150eac: 0x64043
    ctx->pc = 0x150eacu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 6), 1));
    // 0x150eb0: 0x72043
    ctx->pc = 0x150eb0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 7), 1));
    // 0x150eb4: 0x103280b
    ctx->pc = 0x150eb4u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 8));
    // 0x150eb8: 0x89100a
    ctx->pc = 0x150eb8u;
    if (GPR_U32(ctx, 9) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x150ebc: 0xad450418
    ctx->pc = 0x150ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 1048), GPR_U32(ctx, 5));
    // 0x150ec0: 0xad42041c
    ctx->pc = 0x150ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 1052), GPR_U32(ctx, 2));
    // 0x150ec4: 0xad460410
    ctx->pc = 0x150ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 1040), GPR_U32(ctx, 6));
    // 0x150ec8: 0x3e00008
    ctx->pc = 0x150EC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150ECCu;
        WRITE32(ADD32(GPR_U32(ctx, 10), 1044), GPR_U32(ctx, 7));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x150E60u: goto label_150e60;
            case 0x150E80u: goto label_150e80;
            case 0x150E84u: goto label_150e84;
            case 0x150E88u: goto label_150e88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x150ED0u;
}
