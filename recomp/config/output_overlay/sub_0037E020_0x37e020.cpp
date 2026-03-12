#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0037E020
// Address: 0x37e020 - 0x37e0c0
void sub_0037E020_0x37e020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x37e020u;

    // 0x37e020: 0x3c060032
    ctx->pc = 0x37e020u;
    SET_GPR_U32(ctx, 6, ((uint32_t)50 << 16));
    // 0x37e024: 0x502d
    ctx->pc = 0x37e024u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e028: 0x3009ffff
    ctx->pc = 0x37e028u;
    SET_GPR_U32(ctx, 9, AND32(GPR_U32(ctx, 0), 65535));
    // 0x37e02c: 0x602d
    ctx->pc = 0x37e02cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e030: 0x24c6fb60
    ctx->pc = 0x37e030u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294966112));
    // 0x37e034: 0x10000019
    ctx->pc = 0x37E034u;
    {
        const bool branch_taken_0x37e034 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37E038u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x37e034) {
            ctx->pc = 0x37E09Cu;
            goto label_37e09c;
        }
    }
    ctx->pc = 0x37E03Cu;
label_37e03c:
    // 0x37e03c: 0x9047069c
    ctx->pc = 0x37e03cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1692)));
    // 0x37e040: 0x14e00003
    ctx->pc = 0x37E040u;
    {
        const bool branch_taken_0x37e040 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x37E044u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
        if (branch_taken_0x37e040) {
            ctx->pc = 0x37E050u;
            goto label_37e050;
        }
    }
    ctx->pc = 0x37E048u;
    // 0x37e048: 0x1000001b
    ctx->pc = 0x37E048u;
    {
        const bool branch_taken_0x37e048 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37E04Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37e048) {
            ctx->pc = 0x37E0B8u;
            goto label_37e0b8;
        }
    }
    ctx->pc = 0x37E050u;
label_37e050:
    // 0x37e050: 0x582d
    ctx->pc = 0x37e050u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e054: 0x304affff
    ctx->pc = 0x37e054u;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 2), 65535));
    // 0x37e058: 0xc10c0
    ctx->pc = 0x37e058u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 12), 3));
    // 0x37e05c: 0x1000000b
    ctx->pc = 0x37E05Cu;
    {
        const bool branch_taken_0x37e05c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37E060u;
        SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x37e05c) {
            ctx->pc = 0x37E08Cu;
            goto label_37e08c;
        }
    }
    ctx->pc = 0x37E064u;
label_37e064:
    // 0x37e064: 0x3162001f
    ctx->pc = 0x37e064u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 11), 31));
    // 0x37e068: 0x32880
    ctx->pc = 0x37e068u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 2));
    // 0x37e06c: 0x441804
    ctx->pc = 0x37e06cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x37e070: 0x1051021
    ctx->pc = 0x37e070u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x37e074: 0x8c42051c
    ctx->pc = 0x37e074u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1308)));
    // 0x37e078: 0x431024
    ctx->pc = 0x37e078u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37e07c: 0x10400002
    ctx->pc = 0x37E07Cu;
    {
        const bool branch_taken_0x37e07c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x37E080u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 9), 1));
        if (branch_taken_0x37e07c) {
            ctx->pc = 0x37E088u;
            goto label_37e088;
        }
    }
    ctx->pc = 0x37E084u;
    // 0x37e084: 0x3049ffff
    ctx->pc = 0x37e084u;
    SET_GPR_U32(ctx, 9, AND32(GPR_U32(ctx, 2), 65535));
label_37e088:
    // 0x37e088: 0x256b0001
    ctx->pc = 0x37e088u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 1));
label_37e08c:
    // 0x37e08c: 0x167102a
    ctx->pc = 0x37e08cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 11), GPR_S32(ctx, 7)));
    // 0x37e090: 0x1440fff4
    ctx->pc = 0x37E090u;
    {
        const bool branch_taken_0x37e090 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37E094u;
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), 5));
        if (branch_taken_0x37e090) {
            ctx->pc = 0x37E064u;
            goto label_37e064;
        }
    }
    ctx->pc = 0x37E098u;
    // 0x37e098: 0x258c0001
    ctx->pc = 0x37e098u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 1));
label_37e09c:
    // 0x37e09c: 0x29820005
    ctx->pc = 0x37e09cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 12), 5));
    // 0x37e0a0: 0x1440ffe6
    ctx->pc = 0x37E0A0u;
    {
        const bool branch_taken_0x37e0a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37E0A4u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
        if (branch_taken_0x37e0a0) {
            ctx->pc = 0x37E03Cu;
            goto label_37e03c;
        }
    }
    ctx->pc = 0x37E0A8u;
    // 0x37e0a8: 0x3123ffff
    ctx->pc = 0x37e0a8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 9), 65535));
    // 0x37e0ac: 0x3142ffff
    ctx->pc = 0x37e0acu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 10), 65535));
    // 0x37e0b0: 0x621026
    ctx->pc = 0x37e0b0u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37e0b4: 0x2c420001
    ctx->pc = 0x37e0b4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_37e0b8:
    // 0x37e0b8: 0x3e00008
    ctx->pc = 0x37E0B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37E03Cu: goto label_37e03c;
            case 0x37E050u: goto label_37e050;
            case 0x37E064u: goto label_37e064;
            case 0x37E088u: goto label_37e088;
            case 0x37E08Cu: goto label_37e08c;
            case 0x37E09Cu: goto label_37e09c;
            case 0x37E0B8u: goto label_37e0b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37E0C0u;
}
