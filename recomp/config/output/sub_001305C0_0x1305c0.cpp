#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001305C0
// Address: 0x1305c0 - 0x130608
void sub_001305C0_0x1305c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1305c0u;

    // 0x1305c0: 0x80382d
    ctx->pc = 0x1305c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1305c4: 0x512c0
    ctx->pc = 0x1305c4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 11));
    // 0x1305c8: 0x8ce60010
    ctx->pc = 0x1305c8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1305cc: 0xace50054
    ctx->pc = 0x1305ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 84), GPR_U32(ctx, 5));
    // 0x1305d0: 0x24c407ff
    ctx->pc = 0x1305d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 6), 2047));
    // 0x1305d4: 0x28c30000
    ctx->pc = 0x1305d4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), 0));
    // 0x1305d8: 0xc0282d
    ctx->pc = 0x1305d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1305dc: 0xc2102a
    ctx->pc = 0x1305dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 2)));
    // 0x1305e0: 0x10400007
    ctx->pc = 0x1305E0u;
    {
        const bool branch_taken_0x1305e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1305E4u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 4));
        if (branch_taken_0x1305e0) {
            ctx->pc = 0x130600u;
            goto label_130600;
        }
    }
    ctx->pc = 0x1305E8u;
    // 0x1305e8: 0x51ac3
    ctx->pc = 0x1305e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 11));
    // 0x1305ec: 0x312c0
    ctx->pc = 0x1305ecu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 11));
    // 0x1305f0: 0xc21023
    ctx->pc = 0x1305f0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1305f4: 0x2102a
    ctx->pc = 0x1305f4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 2)));
    // 0x1305f8: 0x621821
    ctx->pc = 0x1305f8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1305fc: 0xace30054
    ctx->pc = 0x1305fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 84), GPR_U32(ctx, 3));
label_130600:
    // 0x130600: 0x3e00008
    ctx->pc = 0x130600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130604u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 84)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130600u: goto label_130600;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130608u;
}
