#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A2840
// Address: 0x1a2840 - 0x1a2900
void sub_001A2840_0x1a2840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a2840u;

    // 0x1a2840: 0x27bdffd0
    ctx->pc = 0x1a2840u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a2844: 0x24020012
    ctx->pc = 0x1a2844u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 18));
    // 0x1a2848: 0xffbf0020
    ctx->pc = 0x1a2848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a284c: 0x302d
    ctx->pc = 0x1a284cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2850: 0x7fb10010
    ctx->pc = 0x1a2850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a2854: 0x7fb00000
    ctx->pc = 0x1a2854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a2858: 0xa0882d
    ctx->pc = 0x1a2858u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a285c: 0xa0a20000
    ctx->pc = 0x1a285cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a2860: 0x2490000c
    ctx->pc = 0x1a2860u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 12));
    // 0x1a2864: 0xa0a00001
    ctx->pc = 0x1a2864u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2868: 0x8c820004
    ctx->pc = 0x1a2868u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a286c: 0xa4a20002
    ctx->pc = 0x1a286cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a2870: 0x3c04002b
    ctx->pc = 0x1a2870u;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1a2874: 0x94a20002
    ctx->pc = 0x1a2874u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1a2878: 0x2484ffc0
    ctx->pc = 0x1a2878u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967232));
    // 0x1a287c: 0xc06267c
    ctx->pc = 0x1A287Cu;
    SET_GPR_U32(ctx, 31, 0x1A2884u);
    ctx->pc = 0x1A2880u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 2), 3));
    ctx->pc = 0x1899F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001899F0_0x1899f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2884u; }
    }
    if (ctx->pc != 0x1A2884u) { return; }
    ctx->pc = 0x1A2884u;
    // 0x1a2884: 0x40282d
    ctx->pc = 0x1a2884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2888: 0x202d
    ctx->pc = 0x1a2888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a288c: 0x1000000c
    ctx->pc = 0x1A288Cu;
    {
        const bool branch_taken_0x1a288c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A2890u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
        if (branch_taken_0x1a288c) {
            ctx->pc = 0x1A28C0u;
            goto label_1a28c0;
        }
    }
    ctx->pc = 0x1A2894u;
label_1a2894:
    // 0x1a2894: 0x96030000
    ctx->pc = 0x1a2894u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a2898: 0x24840001
    ctx->pc = 0x1a2898u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a289c: 0xa4a30000
    ctx->pc = 0x1a289cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a28a0: 0x96030002
    ctx->pc = 0x1a28a0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1a28a4: 0xa4a30002
    ctx->pc = 0x1a28a4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a28a8: 0x96030004
    ctx->pc = 0x1a28a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a28ac: 0xa4a30004
    ctx->pc = 0x1a28acu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a28b0: 0x96030006
    ctx->pc = 0x1a28b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1a28b4: 0xa4a30006
    ctx->pc = 0x1a28b4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a28b8: 0x26100008
    ctx->pc = 0x1a28b8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8));
    // 0x1a28bc: 0x24a50008
    ctx->pc = 0x1a28bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
label_1a28c0:
    // 0x1a28c0: 0x96230002
    ctx->pc = 0x1a28c0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1a28c4: 0x83182a
    ctx->pc = 0x1a28c4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x1a28c8: 0x1460fff2
    ctx->pc = 0x1A28C8u;
    {
        const bool branch_taken_0x1a28c8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A28CCu;
        SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
        if (branch_taken_0x1a28c8) {
            ctx->pc = 0x1A2894u;
            goto label_1a2894;
        }
    }
    ctx->pc = 0x1A28D0u;
    // 0x1a28d0: 0x8e240004
    ctx->pc = 0x1a28d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a28d4: 0x8c23ffb0
    ctx->pc = 0x1a28d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294967216)));
    // 0x1a28d8: 0x831823
    ctx->pc = 0x1a28d8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a28dc: 0xae230004
    ctx->pc = 0x1a28dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1a28e0: 0xdfbf0020
    ctx->pc = 0x1a28e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a28e4: 0x7bb10010
    ctx->pc = 0x1a28e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a28e8: 0x7bb00000
    ctx->pc = 0x1a28e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a28ec: 0x3e00008
    ctx->pc = 0x1A28ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A28F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A2894u: goto label_1a2894;
            case 0x1A28C0u: goto label_1a28c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A28F4u;
    // 0x1a28f4: 0x0
    ctx->pc = 0x1a28f4u;
    // NOP
    // 0x1a28f8: 0x0
    ctx->pc = 0x1a28f8u;
    // NOP
    // 0x1a28fc: 0x0
    ctx->pc = 0x1a28fcu;
    // NOP
}
