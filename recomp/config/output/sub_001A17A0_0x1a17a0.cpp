#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A17A0
// Address: 0x1a17a0 - 0x1a1820
void sub_001A17A0_0x1a17a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a17a0u;

    // 0x1a17a0: 0x8c860008
    ctx->pc = 0x1a17a0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a17a4: 0x51900
    ctx->pc = 0x1a17a4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 4));
    // 0x1a17a8: 0x3405ffff
    ctx->pc = 0x1a17a8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1a17ac: 0xc33821
    ctx->pc = 0x1a17acu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a17b0: 0x94e3000c
    ctx->pc = 0x1a17b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1a17b4: 0x10650006
    ctx->pc = 0x1A17B4u;
    {
        const bool branch_taken_0x1a17b4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 5));
        if (branch_taken_0x1a17b4) {
            ctx->pc = 0x1A17D0u;
            goto label_1a17d0;
        }
    }
    ctx->pc = 0x1A17BCu;
    // 0x1a17bc: 0x94e5000e
    ctx->pc = 0x1a17bcu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 14)));
    // 0x1a17c0: 0x31900
    ctx->pc = 0x1a17c0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a17c4: 0xc31821
    ctx->pc = 0x1a17c4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a17c8: 0x10000008
    ctx->pc = 0x1A17C8u;
    {
        const bool branch_taken_0x1a17c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A17CCu;
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 5));
        if (branch_taken_0x1a17c8) {
            ctx->pc = 0x1A17ECu;
            goto label_1a17ec;
        }
    }
    ctx->pc = 0x1A17D0u;
label_1a17d0:
    // 0x1a17d0: 0x94e3000e
    ctx->pc = 0x1a17d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 14)));
    // 0x1a17d4: 0xac830024
    ctx->pc = 0x1a17d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x1a17d8: 0x8c830024
    ctx->pc = 0x1a17d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1a17dc: 0x14650003
    ctx->pc = 0x1A17DCu;
    {
        const bool branch_taken_0x1a17dc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 5));
        if (branch_taken_0x1a17dc) {
            ctx->pc = 0x1A17ECu;
            goto label_1a17ec;
        }
    }
    ctx->pc = 0x1A17E4u;
    // 0x1a17e4: 0x8c830014
    ctx->pc = 0x1a17e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1a17e8: 0xac830010
    ctx->pc = 0x1a17e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_1a17ec:
    // 0x1a17ec: 0x94e5000e
    ctx->pc = 0x1a17ecu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 14)));
    // 0x1a17f0: 0x3403ffff
    ctx->pc = 0x1a17f0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1a17f4: 0x10a30006
    ctx->pc = 0x1A17F4u;
    {
        const bool branch_taken_0x1a17f4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x1a17f4) {
            ctx->pc = 0x1A1810u;
            goto label_1a1810;
        }
    }
    ctx->pc = 0x1A17FCu;
    // 0x1a17fc: 0x8c830008
    ctx->pc = 0x1a17fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a1800: 0x52900
    ctx->pc = 0x1a1800u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 4));
    // 0x1a1804: 0x94e6000c
    ctx->pc = 0x1a1804u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1a1808: 0x651821
    ctx->pc = 0x1a1808u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a180c: 0xa466000c
    ctx->pc = 0x1a180cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 6));
label_1a1810:
    // 0x1a1810: 0x3e00008
    ctx->pc = 0x1A1810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A17D0u: goto label_1a17d0;
            case 0x1A17ECu: goto label_1a17ec;
            case 0x1A1810u: goto label_1a1810;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A1818u;
    // 0x1a1818: 0x0
    ctx->pc = 0x1a1818u;
    // NOP
    // 0x1a181c: 0x0
    ctx->pc = 0x1a181cu;
    // NOP
}
