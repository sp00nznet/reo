#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018C680
// Address: 0x18c680 - 0x18c6e0
void sub_0018C680_0x18c680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18c680u;

    // 0x18c680: 0x3c037000
    ctx->pc = 0x18c680u;
    SET_GPR_U32(ctx, 3, ((uint32_t)28672 << 16));
    // 0x18c684: 0x6493c
    ctx->pc = 0x18c684u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) << (32 + 4));
    // 0x18c688: 0xc31024
    ctx->pc = 0x18c688u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x18c68c: 0x9493e
    ctx->pc = 0x18c68cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 4));
    // 0x18c690: 0x14430002
    ctx->pc = 0x18C690u;
    {
        const bool branch_taken_0x18c690 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x18C694u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18c690) {
            ctx->pc = 0x18C69Cu;
            goto label_18c69c;
        }
    }
    ctx->pc = 0x18C698u;
    // 0x18c698: 0x3c088000
    ctx->pc = 0x18c698u;
    SET_GPR_U32(ctx, 8, ((uint32_t)32768 << 16));
label_18c69c:
    // 0x18c69c: 0x3c063000
    ctx->pc = 0x18c69cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)12288 << 16));
    // 0x18c6a0: 0x7c800000
    ctx->pc = 0x18c6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 0));
    // 0x18c6a4: 0xa62821
    ctx->pc = 0x18c6a4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x18c6a8: 0x1281825
    ctx->pc = 0x18c6a8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x18c6ac: 0xac850000
    ctx->pc = 0x18c6acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x18c6b0: 0x24020001
    ctx->pc = 0x18c6b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c6b4: 0x14e20005
    ctx->pc = 0x18C6B4u;
    {
        const bool branch_taken_0x18c6b4 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        ctx->pc = 0x18C6B8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x18c6b4) {
            ctx->pc = 0x18C6CCu;
            goto label_18c6cc;
        }
    }
    ctx->pc = 0x18C6BCu;
    // 0x18c6bc: 0x8c830000
    ctx->pc = 0x18c6bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18c6c0: 0x3c028000
    ctx->pc = 0x18c6c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x18c6c4: 0x621025
    ctx->pc = 0x18c6c4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18c6c8: 0xac820000
    ctx->pc = 0x18c6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_18c6cc:
    // 0x18c6cc: 0x3e00008
    ctx->pc = 0x18C6CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C6D0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18C69Cu: goto label_18c69c;
            case 0x18C6CCu: goto label_18c6cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18C6D4u;
    // 0x18c6d4: 0x0
    ctx->pc = 0x18c6d4u;
    // NOP
    // 0x18c6d8: 0x0
    ctx->pc = 0x18c6d8u;
    // NOP
    // 0x18c6dc: 0x0
    ctx->pc = 0x18c6dcu;
    // NOP
}
