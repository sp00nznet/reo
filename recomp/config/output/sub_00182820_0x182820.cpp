#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00182820
// Address: 0x182820 - 0x1828e8
void sub_00182820_0x182820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x182820u;

    // 0x182820: 0x3c020028
    ctx->pc = 0x182820u;
    SET_GPR_U32(ctx, 2, ((uint32_t)40 << 16));
    // 0x182824: 0x3c030024
    ctx->pc = 0x182824u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x182828: 0x24425b48
    ctx->pc = 0x182828u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23368));
    // 0x18282c: 0x246317c8
    ctx->pc = 0x18282cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 6088));
    // 0x182830: 0x24420808
    ctx->pc = 0x182830u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2056));
    // 0x182834: 0x2405ffff
    ctx->pc = 0x182834u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x182838: 0x24060001
    ctx->pc = 0x182838u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18283c: 0x24040001
    ctx->pc = 0x18283cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_182840:
    // 0x182840: 0xac45fff8
    ctx->pc = 0x182840u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 5));
    // 0x182844: 0x2484ffff
    ctx->pc = 0x182844u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x182848: 0xac45fffc
    ctx->pc = 0x182848u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 5));
    // 0x18284c: 0xac40008c
    ctx->pc = 0x18284cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 0));
    // 0x182850: 0xac460080
    ctx->pc = 0x182850u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 6));
    // 0x182854: 0xac400084
    ctx->pc = 0x182854u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
    // 0x182858: 0xac400088
    ctx->pc = 0x182858u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 0));
    // 0x18285c: 0x80670000
    ctx->pc = 0x18285cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x182860: 0x80680001
    ctx->pc = 0x182860u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x182864: 0xa0470000
    ctx->pc = 0x182864u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x182868: 0xa0480001
    ctx->pc = 0x182868u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x18286c: 0x481fff4
    ctx->pc = 0x18286Cu;
    {
        const bool branch_taken_0x18286c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x182870u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2200));
        if (branch_taken_0x18286c) {
            ctx->pc = 0x182840u;
            goto label_182840;
        }
    }
    ctx->pc = 0x182874u;
    // 0x182874: 0x3e00008
    ctx->pc = 0x182874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182878u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182840u: goto label_182840;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18287Cu;
    // 0x18287c: 0x0
    ctx->pc = 0x18287cu;
    // NOP
    // 0x182880: 0x24020898
    ctx->pc = 0x182880u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2200));
    // 0x182884: 0x3c060028
    ctx->pc = 0x182884u;
    SET_GPR_U32(ctx, 6, ((uint32_t)40 << 16));
    // 0x182888: 0x822018
    ctx->pc = 0x182888u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x18288c: 0x24c65b48
    ctx->pc = 0x18288cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 23368));
    // 0x182890: 0x240bffff
    ctx->pc = 0x182890u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x182894: 0x24c70004
    ctx->pc = 0x182894u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 6), 4));
    // 0x182898: 0x24ca0808
    ctx->pc = 0x182898u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 6), 2056));
    // 0x18289c: 0x3c0c0024
    ctx->pc = 0x18289cu;
    SET_GPR_U32(ctx, 12, ((uint32_t)36 << 16));
    // 0x1828a0: 0x24830890
    ctx->pc = 0x1828a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 2192));
    // 0x1828a4: 0x24850800
    ctx->pc = 0x1828a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 2048));
    // 0x1828a8: 0xa74821
    ctx->pc = 0x1828a8u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1828ac: 0xa62821
    ctx->pc = 0x1828acu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1828b0: 0x664021
    ctx->pc = 0x1828b0u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1828b4: 0x671821
    ctx->pc = 0x1828b4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1828b8: 0x8a2021
    ctx->pc = 0x1828b8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1828bc: 0xac600000
    ctx->pc = 0x1828bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1828c0: 0xacab0000
    ctx->pc = 0x1828c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x1828c4: 0xad2b0000
    ctx->pc = 0x1828c4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
    // 0x1828c8: 0xad000000
    ctx->pc = 0x1828c8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x1828cc: 0x258717c8
    ctx->pc = 0x1828ccu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 12), 6088));
    // 0x1828d0: 0x80e30000
    ctx->pc = 0x1828d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1828d4: 0x80e50001
    ctx->pc = 0x1828d4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x1828d8: 0xa0830000
    ctx->pc = 0x1828d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1828dc: 0xa0850001
    ctx->pc = 0x1828dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x1828e0: 0x3e00008
    ctx->pc = 0x1828E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1828E4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182840u: goto label_182840;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1828E8u;
}
