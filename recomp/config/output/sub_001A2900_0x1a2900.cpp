#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A2900
// Address: 0x1a2900 - 0x1a29d0
void sub_001A2900_0x1a2900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a2900u;

    // 0x1a2900: 0x27bdffd0
    ctx->pc = 0x1a2900u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a2904: 0x24020013
    ctx->pc = 0x1a2904u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 19));
    // 0x1a2908: 0xffbf0020
    ctx->pc = 0x1a2908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a290c: 0x302d
    ctx->pc = 0x1a290cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2910: 0x7fb10010
    ctx->pc = 0x1a2910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a2914: 0x7fb00000
    ctx->pc = 0x1a2914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a2918: 0xa0882d
    ctx->pc = 0x1a2918u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a291c: 0xa0a20000
    ctx->pc = 0x1a291cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a2920: 0x2490000c
    ctx->pc = 0x1a2920u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 12));
    // 0x1a2924: 0xa0a00001
    ctx->pc = 0x1a2924u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2928: 0x8c820004
    ctx->pc = 0x1a2928u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a292c: 0xa4a20002
    ctx->pc = 0x1a292cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a2930: 0x3c04002b
    ctx->pc = 0x1a2930u;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1a2934: 0x94a30002
    ctx->pc = 0x1a2934u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1a2938: 0x2484ffc0
    ctx->pc = 0x1a2938u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967232));
    // 0x1a293c: 0x31040
    ctx->pc = 0x1a293cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a2940: 0x431021
    ctx->pc = 0x1a2940u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a2944: 0xc06267c
    ctx->pc = 0x1A2944u;
    SET_GPR_U32(ctx, 31, 0x1A294Cu);
    ctx->pc = 0x1A2948u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 2), 2));
    ctx->pc = 0x1899F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001899F0_0x1899f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A294Cu; }
    }
    if (ctx->pc != 0x1A294Cu) { return; }
    ctx->pc = 0x1A294Cu;
    // 0x1a294c: 0x40282d
    ctx->pc = 0x1a294cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2950: 0x202d
    ctx->pc = 0x1a2950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2954: 0x1000000e
    ctx->pc = 0x1A2954u;
    {
        const bool branch_taken_0x1a2954 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A2958u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
        if (branch_taken_0x1a2954) {
            ctx->pc = 0x1A2990u;
            goto label_1a2990;
        }
    }
    ctx->pc = 0x1A295Cu;
label_1a295c:
    // 0x1a295c: 0x8e030000
    ctx->pc = 0x1a295cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a2960: 0x24840001
    ctx->pc = 0x1a2960u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a2964: 0xaca30000
    ctx->pc = 0x1a2964u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1a2968: 0x96030004
    ctx->pc = 0x1a2968u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a296c: 0xa4a30004
    ctx->pc = 0x1a296cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a2970: 0x96030006
    ctx->pc = 0x1a2970u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1a2974: 0xa4a30006
    ctx->pc = 0x1a2974u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a2978: 0x96030008
    ctx->pc = 0x1a2978u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a297c: 0xa4a30008
    ctx->pc = 0x1a297cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a2980: 0x9603000a
    ctx->pc = 0x1a2980u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1a2984: 0xa4a3000a
    ctx->pc = 0x1a2984u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a2988: 0x2610000c
    ctx->pc = 0x1a2988u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 12));
    // 0x1a298c: 0x24a5000c
    ctx->pc = 0x1a298cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 12));
label_1a2990:
    // 0x1a2990: 0x96230002
    ctx->pc = 0x1a2990u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1a2994: 0x83182a
    ctx->pc = 0x1a2994u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x1a2998: 0x1460fff0
    ctx->pc = 0x1A2998u;
    {
        const bool branch_taken_0x1a2998 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A299Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
        if (branch_taken_0x1a2998) {
            ctx->pc = 0x1A295Cu;
            goto label_1a295c;
        }
    }
    ctx->pc = 0x1A29A0u;
    // 0x1a29a0: 0x8e240004
    ctx->pc = 0x1a29a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a29a4: 0x8c23ffb0
    ctx->pc = 0x1a29a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294967216)));
    // 0x1a29a8: 0x831823
    ctx->pc = 0x1a29a8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a29ac: 0xae230004
    ctx->pc = 0x1a29acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1a29b0: 0xdfbf0020
    ctx->pc = 0x1a29b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a29b4: 0x7bb10010
    ctx->pc = 0x1a29b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a29b8: 0x7bb00000
    ctx->pc = 0x1a29b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a29bc: 0x3e00008
    ctx->pc = 0x1A29BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A29C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A295Cu: goto label_1a295c;
            case 0x1A2990u: goto label_1a2990;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A29C4u;
    // 0x1a29c4: 0x0
    ctx->pc = 0x1a29c4u;
    // NOP
    // 0x1a29c8: 0x0
    ctx->pc = 0x1a29c8u;
    // NOP
    // 0x1a29cc: 0x0
    ctx->pc = 0x1a29ccu;
    // NOP
}
