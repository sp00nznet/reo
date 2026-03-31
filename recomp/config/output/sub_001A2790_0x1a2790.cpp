#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A2790
// Address: 0x1a2790 - 0x1a2840
void sub_001A2790_0x1a2790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a2790u;

    // 0x1a2790: 0x27bdffd0
    ctx->pc = 0x1a2790u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a2794: 0x24020011
    ctx->pc = 0x1a2794u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 17));
    // 0x1a2798: 0xffbf0020
    ctx->pc = 0x1a2798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a279c: 0x302d
    ctx->pc = 0x1a279cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a27a0: 0x7fb10010
    ctx->pc = 0x1a27a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a27a4: 0x7fb00000
    ctx->pc = 0x1a27a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a27a8: 0xa0882d
    ctx->pc = 0x1a27a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a27ac: 0xa0a20000
    ctx->pc = 0x1a27acu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a27b0: 0x2490000c
    ctx->pc = 0x1a27b0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 12));
    // 0x1a27b4: 0xa0a00001
    ctx->pc = 0x1a27b4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a27b8: 0x8c820004
    ctx->pc = 0x1a27b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a27bc: 0xa4a20002
    ctx->pc = 0x1a27bcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a27c0: 0x3c04002b
    ctx->pc = 0x1a27c0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1a27c4: 0x94a20002
    ctx->pc = 0x1a27c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1a27c8: 0x2484ffc0
    ctx->pc = 0x1a27c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967232));
    // 0x1a27cc: 0xc06267c
    ctx->pc = 0x1A27CCu;
    SET_GPR_U32(ctx, 31, 0x1A27D4u);
    ctx->pc = 0x1A27D0u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 2), 2));
    ctx->pc = 0x1899F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001899F0_0x1899f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A27D4u; }
    }
    if (ctx->pc != 0x1A27D4u) { return; }
    ctx->pc = 0x1A27D4u;
    // 0x1a27d4: 0x40282d
    ctx->pc = 0x1a27d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a27d8: 0x202d
    ctx->pc = 0x1a27d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a27dc: 0x10000008
    ctx->pc = 0x1A27DCu;
    {
        const bool branch_taken_0x1a27dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A27E0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
        if (branch_taken_0x1a27dc) {
            ctx->pc = 0x1A2800u;
            goto label_1a2800;
        }
    }
    ctx->pc = 0x1A27E4u;
label_1a27e4:
    // 0x1a27e4: 0x96030000
    ctx->pc = 0x1a27e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a27e8: 0x24840001
    ctx->pc = 0x1a27e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a27ec: 0xa4a30000
    ctx->pc = 0x1a27ecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a27f0: 0x96030002
    ctx->pc = 0x1a27f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1a27f4: 0xa4a30002
    ctx->pc = 0x1a27f4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a27f8: 0x26100004
    ctx->pc = 0x1a27f8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x1a27fc: 0x24a50004
    ctx->pc = 0x1a27fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
label_1a2800:
    // 0x1a2800: 0x96230002
    ctx->pc = 0x1a2800u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1a2804: 0x83182a
    ctx->pc = 0x1a2804u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x1a2808: 0x1460fff6
    ctx->pc = 0x1A2808u;
    {
        const bool branch_taken_0x1a2808 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A280Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
        if (branch_taken_0x1a2808) {
            ctx->pc = 0x1A27E4u;
            goto label_1a27e4;
        }
    }
    ctx->pc = 0x1A2810u;
    // 0x1a2810: 0x8e240004
    ctx->pc = 0x1a2810u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a2814: 0x8c23ffb0
    ctx->pc = 0x1a2814u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294967216)));
    // 0x1a2818: 0x831823
    ctx->pc = 0x1a2818u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a281c: 0xae230004
    ctx->pc = 0x1a281cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1a2820: 0xdfbf0020
    ctx->pc = 0x1a2820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a2824: 0x7bb10010
    ctx->pc = 0x1a2824u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2828: 0x7bb00000
    ctx->pc = 0x1a2828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a282c: 0x3e00008
    ctx->pc = 0x1A282Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2830u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A27E4u: goto label_1a27e4;
            case 0x1A2800u: goto label_1a2800;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A2834u;
    // 0x1a2834: 0x0
    ctx->pc = 0x1a2834u;
    // NOP
    // 0x1a2838: 0x0
    ctx->pc = 0x1a2838u;
    // NOP
    // 0x1a283c: 0x0
    ctx->pc = 0x1a283cu;
    // NOP
}
