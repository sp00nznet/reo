#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B5DC0
// Address: 0x1b5dc0 - 0x1b5fb0
void sub_001B5DC0_0x1b5dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b5dc0u;

    // 0x1b5dc0: 0x3c01002c
    ctx->pc = 0x1b5dc0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b5dc4: 0x8c870084
    ctx->pc = 0x1b5dc4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x1b5dc8: 0x8c29ab10
    ctx->pc = 0x1b5dc8u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 1), 4294945552)));
    // 0x1b5dcc: 0x3c02002c
    ctx->pc = 0x1b5dccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x1b5dd0: 0x27bdfce0
    ctx->pc = 0x1b5dd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966496));
    // 0x1b5dd4: 0x2442aaf0
    ctx->pc = 0x1b5dd4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x1b5dd8: 0xc0182d
    ctx->pc = 0x1b5dd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5ddc: 0x2404fffc
    ctx->pc = 0x1b5ddcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1b5de0: 0x3c01002c
    ctx->pc = 0x1b5de0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b5de4: 0x8c28ab18
    ctx->pc = 0x1b5de4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 1), 4294945560)));
    // 0x1b5de8: 0xa94818
    ctx->pc = 0x1b5de8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)(uint32_t)result); }
    // 0x1b5dec: 0x3c01002c
    ctx->pc = 0x1b5decu;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b5df0: 0x8c2aaafc
    ctx->pc = 0x1b5df0u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 1), 4294945532)));
    // 0x1b5df4: 0x25450003
    ctx->pc = 0x1b5df4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 10), 3));
    // 0x1b5df8: 0xa42824
    ctx->pc = 0x1b5df8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1b5dfc: 0x71452818
    ctx->pc = 0x1b5dfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x1b5e00: 0x1092021
    ctx->pc = 0x1b5e00u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1b5e04: 0x14e00017
    ctx->pc = 0x1B5E04u;
    {
        const bool branch_taken_0x1b5e04 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B5E08u;
        SET_GPR_U32(ctx, 10, SRL32(GPR_U32(ctx, 5), 2));
        if (branch_taken_0x1b5e04) {
            ctx->pc = 0x1B5E64u;
            goto label_1b5e64;
        }
    }
    ctx->pc = 0x1B5E0Cu;
    // 0x1b5e0c: 0x10000010
    ctx->pc = 0x1B5E0Cu;
    {
        const bool branch_taken_0x1b5e0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B5E10u;
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b5e0c) {
            ctx->pc = 0x1B5E50u;
            goto label_1b5e50;
        }
    }
    ctx->pc = 0x1B5E14u;
label_1b5e14:
    // 0x1b5e14: 0x90890000
    ctx->pc = 0x1b5e14u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b5e18: 0x256b0001
    ctx->pc = 0x1b5e18u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 1));
    // 0x1b5e1c: 0x312500c0
    ctx->pc = 0x1b5e1cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 9), 192));
    // 0x1b5e20: 0x24840001
    ctx->pc = 0x1b5e20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b5e24: 0x53983
    ctx->pc = 0x1b5e24u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), 6));
    // 0x1b5e28: 0x31250030
    ctx->pc = 0x1b5e28u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 9), 48));
    // 0x1b5e2c: 0xe54025
    ctx->pc = 0x1b5e2cu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1b5e30: 0x3125000c
    ctx->pc = 0x1b5e30u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 9), 12));
    // 0x1b5e34: 0x53980
    ctx->pc = 0x1b5e34u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 5), 6));
    // 0x1b5e38: 0x31250003
    ctx->pc = 0x1b5e38u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 9), 3));
    // 0x1b5e3c: 0xe83825
    ctx->pc = 0x1b5e3cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1b5e40: 0x52b00
    ctx->pc = 0x1b5e40u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 12));
    // 0x1b5e44: 0xa72825
    ctx->pc = 0x1b5e44u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1b5e48: 0xa4c50000
    ctx->pc = 0x1b5e48u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x1b5e4c: 0x24c60002
    ctx->pc = 0x1b5e4cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
label_1b5e50:
    // 0x1b5e50: 0x16a282a
    ctx->pc = 0x1b5e50u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 11), GPR_S32(ctx, 10)));
    // 0x1b5e54: 0x14a0ffef
    ctx->pc = 0x1B5E54u;
    {
        const bool branch_taken_0x1b5e54 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b5e54) {
            ctx->pc = 0x1B5E14u;
            goto label_1b5e14;
        }
    }
    ctx->pc = 0x1B5E5Cu;
    // 0x1b5e5c: 0x10000050
    ctx->pc = 0x1B5E5Cu;
    {
        const bool branch_taken_0x1b5e5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B5E60u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
        if (branch_taken_0x1b5e5c) {
            ctx->pc = 0x1B5FA0u;
            goto label_1b5fa0;
        }
    }
    ctx->pc = 0x1B5E64u;
label_1b5e64:
    // 0x1b5e64: 0x502d
    ctx->pc = 0x1b5e64u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5e68: 0xa2880
    ctx->pc = 0x1b5e68u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 10), 2));
label_1b5e6c:
    // 0x1b5e6c: 0x682d
    ctx->pc = 0x1b5e6cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5e70: 0xaa2821
    ctx->pc = 0x1b5e70u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x1b5e74: 0x52880
    ctx->pc = 0x1b5e74u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b5e78: 0xbd2821
    ctx->pc = 0x1b5e78u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x1b5e7c: 0x24ac0190
    ctx->pc = 0x1b5e7cu;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 5), 400));
label_1b5e80:
    // 0x1b5e80: 0x90890000
    ctx->pc = 0x1b5e80u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b5e84: 0x18d5821
    ctx->pc = 0x1b5e84u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x1b5e88: 0x25ad0004
    ctx->pc = 0x1b5e88u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 4));
    // 0x1b5e8c: 0x29a50014
    ctx->pc = 0x1b5e8cu;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 13), 20));
    // 0x1b5e90: 0x312700c0
    ctx->pc = 0x1b5e90u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 9), 192));
    // 0x1b5e94: 0x24840001
    ctx->pc = 0x1b5e94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b5e98: 0x74183
    ctx->pc = 0x1b5e98u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 7), 6));
    // 0x1b5e9c: 0x31270030
    ctx->pc = 0x1b5e9cu;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 9), 48));
    // 0x1b5ea0: 0xa1680000
    ctx->pc = 0x1b5ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x1b5ea4: 0x73903
    ctx->pc = 0x1b5ea4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 4));
    // 0x1b5ea8: 0xa1670001
    ctx->pc = 0x1b5ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x1b5eac: 0x3127000c
    ctx->pc = 0x1b5eacu;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 9), 12));
    // 0x1b5eb0: 0x74083
    ctx->pc = 0x1b5eb0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 7), 2));
    // 0x1b5eb4: 0x31270003
    ctx->pc = 0x1b5eb4u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 9), 3));
    // 0x1b5eb8: 0xa1680002
    ctx->pc = 0x1b5eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 2), (uint8_t)GPR_U32(ctx, 8));
    // 0x1b5ebc: 0x14a0fff0
    ctx->pc = 0x1B5EBCu;
    {
        const bool branch_taken_0x1b5ebc = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B5EC0u;
        WRITE8(ADD32(GPR_U32(ctx, 11), 3), (uint8_t)GPR_U32(ctx, 7));
        if (branch_taken_0x1b5ebc) {
            ctx->pc = 0x1B5E80u;
            goto label_1b5e80;
        }
    }
    ctx->pc = 0x1B5EC4u;
    // 0x1b5ec4: 0x254a0001
    ctx->pc = 0x1b5ec4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x1b5ec8: 0x29450014
    ctx->pc = 0x1b5ec8u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 10), 20));
    // 0x1b5ecc: 0x14a0ffe7
    ctx->pc = 0x1B5ECCu;
    {
        const bool branch_taken_0x1b5ecc = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B5ED0u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 10), 2));
        if (branch_taken_0x1b5ecc) {
            ctx->pc = 0x1B5E6Cu;
            goto label_1b5e6c;
        }
    }
    ctx->pc = 0x1B5ED4u;
    // 0x1b5ed4: 0x402d
    ctx->pc = 0x1b5ed4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5ed8: 0x82080
    ctx->pc = 0x1b5ed8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 8), 2));
label_1b5edc:
    // 0x1b5edc: 0x24070013
    ctx->pc = 0x1b5edcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 19));
    // 0x1b5ee0: 0x882821
    ctx->pc = 0x1b5ee0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1b5ee4: 0xe82023
    ctx->pc = 0x1b5ee4u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1b5ee8: 0x52880
    ctx->pc = 0x1b5ee8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b5eec: 0x9d2021
    ctx->pc = 0x1b5eecu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x1b5ef0: 0xbd2821
    ctx->pc = 0x1b5ef0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x1b5ef4: 0x24890000
    ctx->pc = 0x1b5ef4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 4), 0));
    // 0x1b5ef8: 0x24aa0190
    ctx->pc = 0x1b5ef8u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 5), 400));
label_1b5efc:
    // 0x1b5efc: 0x1472821
    ctx->pc = 0x1b5efcu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x1b5f00: 0x72080
    ctx->pc = 0x1b5f00u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 7), 2));
    // 0x1b5f04: 0x90a50000
    ctx->pc = 0x1b5f04u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b5f08: 0x872021
    ctx->pc = 0x1b5f08u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1b5f0c: 0x42080
    ctx->pc = 0x1b5f0cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1b5f10: 0x24e7ffff
    ctx->pc = 0x1b5f10u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1b5f14: 0x1242021
    ctx->pc = 0x1b5f14u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1b5f18: 0x4e1fff8
    ctx->pc = 0x1B5F18u;
    {
        const bool branch_taken_0x1b5f18 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1B5F1Cu;
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
        if (branch_taken_0x1b5f18) {
            ctx->pc = 0x1B5EFCu;
            goto label_1b5efc;
        }
    }
    ctx->pc = 0x1B5F20u;
    // 0x1b5f20: 0x25080001
    ctx->pc = 0x1b5f20u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x1b5f24: 0x29040014
    ctx->pc = 0x1b5f24u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 8), 20));
    // 0x1b5f28: 0x1480ffec
    ctx->pc = 0x1B5F28u;
    {
        const bool branch_taken_0x1b5f28 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B5F2Cu;
        SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 8), 2));
        if (branch_taken_0x1b5f28) {
            ctx->pc = 0x1B5EDCu;
            goto label_1b5edc;
        }
    }
    ctx->pc = 0x1B5F30u;
    // 0x1b5f30: 0x582d
    ctx->pc = 0x1b5f30u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5f34: 0xb2080
    ctx->pc = 0x1b5f34u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 11), 2));
label_1b5f38:
    // 0x1b5f38: 0x502d
    ctx->pc = 0x1b5f38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5f3c: 0x8b2021
    ctx->pc = 0x1b5f3cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x1b5f40: 0x42080
    ctx->pc = 0x1b5f40u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1b5f44: 0x9d2021
    ctx->pc = 0x1b5f44u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x1b5f48: 0x248c0000
    ctx->pc = 0x1b5f48u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 4), 0));
label_1b5f4c:
    // 0x1b5f4c: 0x18a2821
    ctx->pc = 0x1b5f4cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x1b5f50: 0x90a90001
    ctx->pc = 0x1b5f50u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1b5f54: 0x254a0004
    ctx->pc = 0x1b5f54u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4));
    // 0x1b5f58: 0x90a70002
    ctx->pc = 0x1b5f58u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1b5f5c: 0x29440014
    ctx->pc = 0x1b5f5cu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 10), 20));
    // 0x1b5f60: 0x90a80000
    ctx->pc = 0x1b5f60u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b5f64: 0x94900
    ctx->pc = 0x1b5f64u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 4));
    // 0x1b5f68: 0x73a00
    ctx->pc = 0x1b5f68u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x1b5f6c: 0x90a50003
    ctx->pc = 0x1b5f6cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x1b5f70: 0x1094025
    ctx->pc = 0x1b5f70u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1b5f74: 0xe83825
    ctx->pc = 0x1b5f74u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1b5f78: 0x52b00
    ctx->pc = 0x1b5f78u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 12));
    // 0x1b5f7c: 0xa72825
    ctx->pc = 0x1b5f7cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1b5f80: 0xa4c50000
    ctx->pc = 0x1b5f80u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x1b5f84: 0x1480fff1
    ctx->pc = 0x1B5F84u;
    {
        const bool branch_taken_0x1b5f84 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B5F88u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x1b5f84) {
            ctx->pc = 0x1B5F4Cu;
            goto label_1b5f4c;
        }
    }
    ctx->pc = 0x1B5F8Cu;
    // 0x1b5f8c: 0x256b0001
    ctx->pc = 0x1b5f8cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 1));
    // 0x1b5f90: 0x29640014
    ctx->pc = 0x1b5f90u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 11), 20));
    // 0x1b5f94: 0x1480ffe8
    ctx->pc = 0x1B5F94u;
    {
        const bool branch_taken_0x1b5f94 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B5F98u;
        SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 11), 2));
        if (branch_taken_0x1b5f94) {
            ctx->pc = 0x1B5F38u;
            goto label_1b5f38;
        }
    }
    ctx->pc = 0x1B5F9Cu;
    // 0x1b5f9c: 0x8c420018
    ctx->pc = 0x1b5f9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1b5fa0:
    // 0x1b5fa0: 0x621021
    ctx->pc = 0x1b5fa0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b5fa4: 0x3e00008
    ctx->pc = 0x1B5FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5FA8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 800));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B5E14u: goto label_1b5e14;
            case 0x1B5E50u: goto label_1b5e50;
            case 0x1B5E64u: goto label_1b5e64;
            case 0x1B5E6Cu: goto label_1b5e6c;
            case 0x1B5E80u: goto label_1b5e80;
            case 0x1B5EDCu: goto label_1b5edc;
            case 0x1B5EFCu: goto label_1b5efc;
            case 0x1B5F38u: goto label_1b5f38;
            case 0x1B5F4Cu: goto label_1b5f4c;
            case 0x1B5FA0u: goto label_1b5fa0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B5FACu;
    // 0x1b5fac: 0x0
    ctx->pc = 0x1b5facu;
    // NOP
}
