#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0014FF50
// Address: 0x14ff50 - 0x150000
void sub_0014FF50_0x14ff50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x14ff50u;

    // 0x14ff50: 0x8c830004
    ctx->pc = 0x14ff50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14ff54: 0x8c850008
    ctx->pc = 0x14ff54u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14ff58: 0x28620000
    ctx->pc = 0x14ff58u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 0));
    // 0x14ff5c: 0x2466000f
    ctx->pc = 0x14ff5cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 15));
    // 0x14ff60: 0xc2180b
    ctx->pc = 0x14ff60u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 6));
    // 0x14ff64: 0x28a20000
    ctx->pc = 0x14ff64u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 0));
    // 0x14ff68: 0x24a7001f
    ctx->pc = 0x14ff68u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 5), 31));
    // 0x14ff6c: 0x31903
    ctx->pc = 0x14ff6cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x14ff70: 0xe2280b
    ctx->pc = 0x14ff70u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 7));
    // 0x14ff74: 0x8c840000
    ctx->pc = 0x14ff74u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14ff78: 0x1860001e
    ctx->pc = 0x14FF78u;
    {
        const bool branch_taken_0x14ff78 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x14FF7Cu;
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
        if (branch_taken_0x14ff78) {
            ctx->pc = 0x14FFF4u;
            goto label_14fff4;
        }
    }
    ctx->pc = 0x14FF80u;
    // 0x14ff80: 0x56280
    ctx->pc = 0x14ff80u;
    SET_GPR_U32(ctx, 12, SLL32(GPR_U32(ctx, 5), 10));
    // 0x14ff84: 0x55ac0
    ctx->pc = 0x14ff84u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 5), 11));
label_14ff88:
    // 0x14ff88: 0x24880003
    ctx->pc = 0x14ff88u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 4), 3));
    // 0x14ff8c: 0x502d
    ctx->pc = 0x14ff8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ff90: 0x10c1021
    ctx->pc = 0x14ff90u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x14ff94: 0x18a00014
    ctx->pc = 0x14FF94u;
    {
        const bool branch_taken_0x14ff94 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x14FF98u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x14ff94) {
            ctx->pc = 0x14FFE8u;
            goto label_14ffe8;
        }
    }
    ctx->pc = 0x14FF9Cu;
    // 0x14ff9c: 0x482d
    ctx->pc = 0x14ff9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14ffa0:
    // 0x14ffa0: 0x2406000f
    ctx->pc = 0x14ffa0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 15));
    // 0x14ffa4: 0x0
    ctx->pc = 0x14ffa4u;
    // NOP
label_14ffa8:
    // 0x14ffa8: 0x90e20000
    ctx->pc = 0x14ffa8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14ffac: 0x24e70004
    ctx->pc = 0x14ffacu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
    // 0x14ffb0: 0x24c6ffff
    ctx->pc = 0x14ffb0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x14ffb4: 0x21042
    ctx->pc = 0x14ffb4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x14ffb8: 0x24420001
    ctx->pc = 0x14ffb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x14ffbc: 0xa1020000
    ctx->pc = 0x14ffbcu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x14ffc0: 0x4c1fff9
    ctx->pc = 0x14FFC0u;
    {
        const bool branch_taken_0x14ffc0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x14FFC4u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4));
        if (branch_taken_0x14ffc0) {
            ctx->pc = 0x14FFA8u;
            goto label_14ffa8;
        }
    }
    ctx->pc = 0x14FFC8u;
    // 0x14ffc8: 0x25290001
    ctx->pc = 0x14ffc8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x14ffcc: 0x29220010
    ctx->pc = 0x14ffccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 16));
    // 0x14ffd0: 0x5440fff5
    ctx->pc = 0x14FFD0u;
    {
        const bool branch_taken_0x14ffd0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x14ffd0) {
            ctx->pc = 0x14FFD4u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 15));
            ctx->pc = 0x14FFA8u;
            goto label_14ffa8;
        }
    }
    ctx->pc = 0x14FFD8u;
    // 0x14ffd8: 0x254a0001
    ctx->pc = 0x14ffd8u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x14ffdc: 0x145102a
    ctx->pc = 0x14ffdcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), GPR_S32(ctx, 5)));
    // 0x14ffe0: 0x5440ffef
    ctx->pc = 0x14FFE0u;
    {
        const bool branch_taken_0x14ffe0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x14ffe0) {
            ctx->pc = 0x14FFE4u;
            SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x14FFA0u;
            goto label_14ffa0;
        }
    }
    ctx->pc = 0x14FFE8u;
label_14ffe8:
    // 0x14ffe8: 0x2463ffff
    ctx->pc = 0x14ffe8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14ffec: 0x1460ffe6
    ctx->pc = 0x14FFECu;
    {
        const bool branch_taken_0x14ffec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x14FFF0u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
        if (branch_taken_0x14ffec) {
            ctx->pc = 0x14FF88u;
            goto label_14ff88;
        }
    }
    ctx->pc = 0x14FFF4u;
label_14fff4:
    // 0x14fff4: 0x3e00008
    ctx->pc = 0x14FFF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14FF88u: goto label_14ff88;
            case 0x14FFA0u: goto label_14ffa0;
            case 0x14FFA8u: goto label_14ffa8;
            case 0x14FFE8u: goto label_14ffe8;
            case 0x14FFF4u: goto label_14fff4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14FFFCu;
    // 0x14fffc: 0x0
    ctx->pc = 0x14fffcu;
    // NOP
}
