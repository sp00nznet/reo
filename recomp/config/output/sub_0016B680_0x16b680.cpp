#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016B680
// Address: 0x16b680 - 0x16b738
void sub_0016B680_0x16b680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16b680u;

    // 0x16b680: 0x27bdfff0
    ctx->pc = 0x16b680u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16b684: 0xffb00000
    ctx->pc = 0x16b684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16b688: 0xffbf0008
    ctx->pc = 0x16b688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16b68c: 0xc05aee6
    ctx->pc = 0x16B68Cu;
    SET_GPR_U32(ctx, 31, 0x16B694u);
    ctx->pc = 0x16B690u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16BB98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016BB98_0x16bb98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B694u; }
    }
    if (ctx->pc != 0x16B694u) { return; }
    ctx->pc = 0x16B694u;
    // 0x16b694: 0x40282d
    ctx->pc = 0x16b694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b698: 0x10a00022
    ctx->pc = 0x16B698u;
    {
        const bool branch_taken_0x16b698 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x16B69Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
        if (branch_taken_0x16b698) {
            ctx->pc = 0x16B724u;
            goto label_16b724;
        }
    }
    ctx->pc = 0x16B6A0u;
    // 0x16b6a0: 0x8e061aec
    ctx->pc = 0x16b6a0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 6892)));
    // 0x16b6a4: 0x3442ffff
    ctx->pc = 0x16b6a4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x16b6a8: 0x26070cc0
    ctx->pc = 0x16b6a8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 3264));
    // 0x16b6ac: 0x8cc30010
    ctx->pc = 0x16b6acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x16b6b0: 0x1062001c
    ctx->pc = 0x16B6B0u;
    {
        const bool branch_taken_0x16b6b0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x16B6B4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 2316));
        if (branch_taken_0x16b6b0) {
            ctx->pc = 0x16B724u;
            goto label_16b724;
        }
    }
    ctx->pc = 0x16B6B8u;
    // 0x16b6b8: 0x8ca20018
    ctx->pc = 0x16b6b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x16b6bc: 0x621023
    ctx->pc = 0x16b6bcu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16b6c0: 0xace20118
    ctx->pc = 0x16b6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 280), GPR_U32(ctx, 2));
    // 0x16b6c4: 0x8ca30000
    ctx->pc = 0x16b6c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16b6c8: 0x14600017
    ctx->pc = 0x16B6C8u;
    {
        const bool branch_taken_0x16b6c8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x16B6CCu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x16b6c8) {
            ctx->pc = 0x16B728u;
            goto label_16b728;
        }
    }
    ctx->pc = 0x16B6D0u;
    // 0x16b6d0: 0x8c830018
    ctx->pc = 0x16b6d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x16b6d4: 0x31040
    ctx->pc = 0x16b6d4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x16b6d8: 0x431021
    ctx->pc = 0x16b6d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16b6dc: 0x210c0
    ctx->pc = 0x16b6dcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x16b6e0: 0x431021
    ctx->pc = 0x16b6e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16b6e4: 0x21040
    ctx->pc = 0x16b6e4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x16b6e8: 0xaca20004
    ctx->pc = 0x16b6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x16b6ec: 0x8c83001c
    ctx->pc = 0x16b6ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x16b6f0: 0xaca30008
    ctx->pc = 0x16b6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x16b6f4: 0x8cc20004
    ctx->pc = 0x16b6f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x16b6f8: 0xaca2000c
    ctx->pc = 0x16b6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x16b6fc: 0x8cc30008
    ctx->pc = 0x16b6fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x16b700: 0xaca30010
    ctx->pc = 0x16b700u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x16b704: 0x8ce20114
    ctx->pc = 0x16b704u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 276)));
    // 0x16b708: 0xaca20014
    ctx->pc = 0x16b708u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
    // 0x16b70c: 0x8cc3000c
    ctx->pc = 0x16b70cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x16b710: 0xaca30018
    ctx->pc = 0x16b710u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x16b714: 0x8cc20020
    ctx->pc = 0x16b714u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x16b718: 0xaca2001c
    ctx->pc = 0x16b718u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x16b71c: 0x8cc30024
    ctx->pc = 0x16b71cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x16b720: 0xaca30020
    ctx->pc = 0x16b720u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 3));
label_16b724:
    // 0x16b724: 0xdfb00000
    ctx->pc = 0x16b724u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16b728:
    // 0x16b728: 0xdfbf0008
    ctx->pc = 0x16b728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b72c: 0x3e00008
    ctx->pc = 0x16B72Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B730u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16B724u: goto label_16b724;
            case 0x16B728u: goto label_16b728;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16B734u;
    // 0x16b734: 0x0
    ctx->pc = 0x16b734u;
    // NOP
}
