#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B39B0
// Address: 0x1b39b0 - 0x1b3b10
void sub_001B39B0_0x1b39b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b39b0u;

    // 0x1b39b0: 0x27bdffa0
    ctx->pc = 0x1b39b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b39b4: 0x3c010032
    ctx->pc = 0x1b39b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b39b8: 0xffbf0050
    ctx->pc = 0x1b39b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1b39bc: 0x7fb40040
    ctx->pc = 0x1b39bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b39c0: 0x7fb30030
    ctx->pc = 0x1b39c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b39c4: 0x7fb20020
    ctx->pc = 0x1b39c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b39c8: 0x7fb10010
    ctx->pc = 0x1b39c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b39cc: 0x7fb00000
    ctx->pc = 0x1b39ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b39d0: 0x94234414
    ctx->pc = 0x1b39d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17428)));
    // 0x1b39d4: 0x3c10002c
    ctx->pc = 0x1b39d4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)44 << 16));
    // 0x1b39d8: 0x10600044
    ctx->pc = 0x1B39D8u;
    {
        const bool branch_taken_0x1b39d8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B39DCu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294945248));
        if (branch_taken_0x1b39d8) {
            ctx->pc = 0x1B3AECu;
            goto label_1b3aec;
        }
    }
    ctx->pc = 0x1B39E0u;
    // 0x1b39e0: 0x8e030044
    ctx->pc = 0x1b39e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1b39e4: 0x10600041
    ctx->pc = 0x1B39E4u;
    {
        const bool branch_taken_0x1b39e4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b39e4) {
            ctx->pc = 0x1B3AECu;
            goto label_1b3aec;
        }
    }
    ctx->pc = 0x1B39ECu;
    // 0x1b39ec: 0x8e0a0000
    ctx->pc = 0x1b39ecu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b39f0: 0x80a02d
    ctx->pc = 0x1b39f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b39f4: 0x8e060008
    ctx->pc = 0x1b39f4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b39f8: 0x8e05000c
    ctx->pc = 0x1b39f8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b39fc: 0x8e040004
    ctx->pc = 0x1b39fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b3a00: 0xca9018
    ctx->pc = 0x1b3a00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)(uint32_t)result); }
    // 0x1b3a04: 0x70a48818
    ctx->pc = 0x1b3a04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x1b3a08: 0x10000029
    ctx->pc = 0x1B3A08u;
    {
        const bool branch_taken_0x1b3a08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B3A0Cu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b3a08) {
            ctx->pc = 0x1B3AB0u;
            goto label_1b3ab0;
        }
    }
    ctx->pc = 0x1B3A10u;
label_1b3a10:
    // 0x1b3a10: 0x2404000a
    ctx->pc = 0x1b3a10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b3a14: 0x14a40008
    ctx->pc = 0x1B3A14u;
    {
        const bool branch_taken_0x1b3a14 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 4));
        ctx->pc = 0x1B3A18u;
        SET_GPR_U32(ctx, 4, SLTU32(GPR_U32(ctx, 18), 640));
        if (branch_taken_0x1b3a14) {
            ctx->pc = 0x1B3A38u;
            goto label_1b3a38;
        }
    }
    ctx->pc = 0x1B3A1Cu;
    // 0x1b3a1c: 0x8e040018
    ctx->pc = 0x1b3a1cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1b3a20: 0x14800002
    ctx->pc = 0x1B3A20u;
    {
        const bool branch_taken_0x1b3a20 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B3A24u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b3a20) {
            ctx->pc = 0x1B3A2Cu;
            goto label_1b3a2c;
        }
    }
    ctx->pc = 0x1B3A28u;
    // 0x1b3a28: 0x902d
    ctx->pc = 0x1b3a28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b3a2c:
    // 0x1b3a2c: 0x8e040004
    ctx->pc = 0x1b3a2cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b3a30: 0x1000001f
    ctx->pc = 0x1B3A30u;
    {
        const bool branch_taken_0x1b3a30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B3A34u;
        SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        if (branch_taken_0x1b3a30) {
            ctx->pc = 0x1B3AB0u;
            goto label_1b3ab0;
        }
    }
    ctx->pc = 0x1B3A38u;
label_1b3a38:
    // 0x1b3a38: 0x14800006
    ctx->pc = 0x1B3A38u;
    {
        const bool branch_taken_0x1b3a38 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b3a38) {
            ctx->pc = 0x1B3A54u;
            goto label_1b3a54;
        }
    }
    ctx->pc = 0x1B3A40u;
    // 0x1b3a40: 0x8e040004
    ctx->pc = 0x1b3a40u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b3a44: 0x2248821
    ctx->pc = 0x1b3a44u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1b3a48: 0x2e2101c0
    ctx->pc = 0x1b3a48u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 17), 448));
    // 0x1b3a4c: 0x1020001b
    ctx->pc = 0x1B3A4Cu;
    {
        const bool branch_taken_0x1b3a4c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B3A50u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b3a4c) {
            ctx->pc = 0x1B3ABCu;
            goto label_1b3abc;
        }
    }
    ctx->pc = 0x1B3A54u;
label_1b3a54:
    // 0x1b3a54: 0x8e06004c
    ctx->pc = 0x1b3a54u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1b3a58: 0x8e040048
    ctx->pc = 0x1b3a58u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1b3a5c: 0xc4082b
    ctx->pc = 0x1b3a5cu;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1b3a60: 0x10200011
    ctx->pc = 0x1B3A60u;
    {
        const bool branch_taken_0x1b3a60 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B3A64u;
        SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 5), 16));
        if (branch_taken_0x1b3a60) {
            ctx->pc = 0x1B3AA8u;
            goto label_1b3aa8;
        }
    }
    ctx->pc = 0x1B3A68u;
    // 0x1b3a68: 0x1480000f
    ctx->pc = 0x1B3A68u;
    {
        const bool branch_taken_0x1b3a68 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b3a68) {
            ctx->pc = 0x1B3AA8u;
            goto label_1b3aa8;
        }
    }
    ctx->pc = 0x1B3A70u;
    // 0x1b3a70: 0x24040020
    ctx->pc = 0x1b3a70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b3a74: 0x10a4000c
    ctx->pc = 0x1B3A74u;
    {
        const bool branch_taken_0x1b3a74 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 4));
        if (branch_taken_0x1b3a74) {
            ctx->pc = 0x1B3AA8u;
            goto label_1b3aa8;
        }
    }
    ctx->pc = 0x1B3A7Cu;
    // 0x1b3a7c: 0x8e090010
    ctx->pc = 0x1b3a7cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1b3a80: 0x60202d
    ctx->pc = 0x1b3a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3a84: 0x8e0b0004
    ctx->pc = 0x1b3a84u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b3a88: 0x240382d
    ctx->pc = 0x1b3a88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3a8c: 0x8e060014
    ctx->pc = 0x1b3a8cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1b3a90: 0xc06ced0
    ctx->pc = 0x1B3A90u;
    SET_GPR_U32(ctx, 31, 0x1B3A98u);
    ctx->pc = 0x1B3A94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B3B40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3B40_0x1b3b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3A98u; }
    }
    if (ctx->pc != 0x1B3A98u) { return; }
    ctx->pc = 0x1B3A98u;
    // 0x1b3a98: 0x8e04004c
    ctx->pc = 0x1b3a98u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1b3a9c: 0x40182d
    ctx->pc = 0x1b3a9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3aa0: 0x24840001
    ctx->pc = 0x1b3aa0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b3aa4: 0xae04004c
    ctx->pc = 0x1b3aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 4));
label_1b3aa8:
    // 0x1b3aa8: 0x8e0a0000
    ctx->pc = 0x1b3aa8u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b3aac: 0x24a9021
    ctx->pc = 0x1b3aacu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 10)));
label_1b3ab0:
    // 0x1b3ab0: 0x82850000
    ctx->pc = 0x1b3ab0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1b3ab4: 0x14a0ffd6
    ctx->pc = 0x1B3AB4u;
    {
        const bool branch_taken_0x1b3ab4 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B3AB8u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        if (branch_taken_0x1b3ab4) {
            ctx->pc = 0x1B3A10u;
            goto label_1b3a10;
        }
    }
    ctx->pc = 0x1B3ABCu;
label_1b3abc:
    // 0x1b3abc: 0x24a001b
    ctx->pc = 0x1b3abcu;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 18) / divisor; ctx->hi = GPR_U32(ctx, 10) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,18); } }
    // 0x1b3ac0: 0x0
    ctx->pc = 0x1b3ac0u;
    // NOP
    // 0x1b3ac4: 0x0
    ctx->pc = 0x1b3ac4u;
    // NOP
    // 0x1b3ac8: 0x2012
    ctx->pc = 0x1b3ac8u;
    SET_GPR_U32(ctx, 4, ctx->lo);
    // 0x1b3acc: 0xae040008
    ctx->pc = 0x1b3accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x1b3ad0: 0x8e040004
    ctx->pc = 0x1b3ad0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b3ad4: 0x224001b
    ctx->pc = 0x1b3ad4u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 17) / divisor; ctx->hi = GPR_U32(ctx, 4) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,17); } }
    // 0x1b3ad8: 0x0
    ctx->pc = 0x1b3ad8u;
    // NOP
    // 0x1b3adc: 0x0
    ctx->pc = 0x1b3adcu;
    // NOP
    // 0x1b3ae0: 0x2012
    ctx->pc = 0x1b3ae0u;
    SET_GPR_U32(ctx, 4, ctx->lo);
    // 0x1b3ae4: 0xae04000c
    ctx->pc = 0x1b3ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x1b3ae8: 0xae030044
    ctx->pc = 0x1b3ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
label_1b3aec:
    // 0x1b3aec: 0xdfbf0050
    ctx->pc = 0x1b3aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3af0: 0x7bb40040
    ctx->pc = 0x1b3af0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b3af4: 0x7bb30030
    ctx->pc = 0x1b3af4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3af8: 0x7bb20020
    ctx->pc = 0x1b3af8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3afc: 0x7bb10010
    ctx->pc = 0x1b3afcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3b00: 0x7bb00000
    ctx->pc = 0x1b3b00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3b04: 0x3e00008
    ctx->pc = 0x1B3B04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3B08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B3A10u: goto label_1b3a10;
            case 0x1B3A2Cu: goto label_1b3a2c;
            case 0x1B3A38u: goto label_1b3a38;
            case 0x1B3A54u: goto label_1b3a54;
            case 0x1B3AA8u: goto label_1b3aa8;
            case 0x1B3AB0u: goto label_1b3ab0;
            case 0x1B3ABCu: goto label_1b3abc;
            case 0x1B3AECu: goto label_1b3aec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B3B0Cu;
    // 0x1b3b0c: 0x0
    ctx->pc = 0x1b3b0cu;
    // NOP
}
