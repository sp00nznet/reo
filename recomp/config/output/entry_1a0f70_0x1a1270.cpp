#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1a0f70
// Address: 0x1a0f70 - 0x1a1270
void entry_1a0f70_0x1a1270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a0f70u;

    // 0x1a0f70: 0x27bdffb0
    ctx->pc = 0x1a0f70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a0f74: 0xffbf0040
    ctx->pc = 0x1a0f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a0f78: 0x7fb30030
    ctx->pc = 0x1a0f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a0f7c: 0x7fb20020
    ctx->pc = 0x1a0f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a0f80: 0x80982d
    ctx->pc = 0x1a0f80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0f84: 0x7fb10010
    ctx->pc = 0x1a0f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a0f88: 0xa0902d
    ctx->pc = 0x1a0f88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0f8c: 0x7fb00000
    ctx->pc = 0x1a0f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a0f90: 0x8c830018
    ctx->pc = 0x1a0f90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1a0f94: 0xa31021
    ctx->pc = 0x1a0f94u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a0f98: 0x2463ffff
    ctx->pc = 0x1a0f98u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a0f9c: 0x2442ffff
    ctx->pc = 0x1a0f9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a0fa0: 0x601827
    ctx->pc = 0x1a0fa0u;
    SET_GPR_U32(ctx, 3, NOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
    // 0x1a0fa4: 0xc068580
    ctx->pc = 0x1A0FA4u;
    SET_GPR_U32(ctx, 31, 0x1A0FACu);
    ctx->pc = 0x1A0FA8u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x1A1600u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1600_0x1a1600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0FACu; }
    }
    if (ctx->pc != 0x1A0FACu) { return; }
    ctx->pc = 0x1A0FACu;
    // 0x1a0fac: 0x40882d
    ctx->pc = 0x1a0facu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0fb0: 0x3407ffff
    ctx->pc = 0x1a0fb0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1a0fb4: 0x16270003
    ctx->pc = 0x1A0FB4u;
    {
        const bool branch_taken_0x1a0fb4 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 7));
        if (branch_taken_0x1a0fb4) {
            ctx->pc = 0x1A0FC4u;
            goto label_1a0fc4;
        }
    }
    ctx->pc = 0x1A0FBCu;
    // 0x1a0fbc: 0x100000a5
    ctx->pc = 0x1A0FBCu;
    {
        const bool branch_taken_0x1a0fbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A0FC0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a0fbc) {
            ctx->pc = 0x1A1254u;
            goto label_1a1254;
        }
    }
    ctx->pc = 0x1A0FC4u;
label_1a0fc4:
    // 0x1a0fc4: 0x8e620024
    ctx->pc = 0x1a0fc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1a0fc8: 0x14470006
    ctx->pc = 0x1A0FC8u;
    {
        const bool branch_taken_0x1a0fc8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 7));
        ctx->pc = 0x1A0FCCu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 4));
        if (branch_taken_0x1a0fc8) {
            ctx->pc = 0x1A0FE4u;
            goto label_1a0fe4;
        }
    }
    ctx->pc = 0x1A0FD0u;
    // 0x1a0fd0: 0x260202d
    ctx->pc = 0x1a0fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0fd4: 0xc068384
    ctx->pc = 0x1A0FD4u;
    SET_GPR_U32(ctx, 31, 0x1A0FDCu);
    ctx->pc = 0x1A0FD8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0E10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0E10_0x1a0e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0FDCu; }
    }
    if (ctx->pc != 0x1A0FDCu) { return; }
    ctx->pc = 0x1A0FDCu;
    // 0x1a0fdc: 0x1000009e
    ctx->pc = 0x1A0FDCu;
    {
        const bool branch_taken_0x1a0fdc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A0FE0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x1a0fdc) {
            ctx->pc = 0x1A1258u;
            goto label_1a1258;
        }
    }
    ctx->pc = 0x1A0FE4u;
label_1a0fe4:
    // 0x1a0fe4: 0x8e64000c
    ctx->pc = 0x1a0fe4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1a0fe8: 0x8e620008
    ctx->pc = 0x1a0fe8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a0fec: 0x10800076
    ctx->pc = 0x1A0FECu;
    {
        const bool branch_taken_0x1a0fec = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A0FF0u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x1a0fec) {
            ctx->pc = 0x1A11C8u;
            goto label_1a11c8;
        }
    }
    ctx->pc = 0x1A0FF4u;
    // 0x1a0ff4: 0x10000028
    ctx->pc = 0x1A0FF4u;
    {
        const bool branch_taken_0x1a0ff4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A0FF8u;
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
        if (branch_taken_0x1a0ff4) {
            ctx->pc = 0x1A1098u;
            goto label_1a1098;
        }
    }
    ctx->pc = 0x1A0FFCu;
label_1a0ffc:
    // 0x1a0ffc: 0x8c660000
    ctx->pc = 0x1a0ffcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a1000: 0x3084ffff
    ctx->pc = 0x1a1000u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x1a1004: 0x8c650004
    ctx->pc = 0x1a1004u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a1008: 0x42100
    ctx->pc = 0x1a1008u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
    // 0x1a100c: 0x444821
    ctx->pc = 0x1a100cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a1010: 0x8e680018
    ctx->pc = 0x1a1010u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1a1014: 0x8d230000
    ctx->pc = 0x1a1014u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1a1018: 0xc52821
    ctx->pc = 0x1a1018u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1a101c: 0x2504ffff
    ctx->pc = 0x1a101cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1a1020: 0x1052821
    ctx->pc = 0x1a1020u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1a1024: 0x802027
    ctx->pc = 0x1a1024u;
    SET_GPR_U32(ctx, 4, NOR32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
    // 0x1a1028: 0x24a5ffff
    ctx->pc = 0x1a1028u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1a102c: 0x854024
    ctx->pc = 0x1a102cu;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a1030: 0x681823
    ctx->pc = 0x1a1030u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1a1034: 0x70082b
    ctx->pc = 0x1a1034u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a1038: 0x14200015
    ctx->pc = 0x1A1038u;
    {
        const bool branch_taken_0x1a1038 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A103Cu;
        SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 17), 4));
        if (branch_taken_0x1a1038) {
            ctx->pc = 0x1A1090u;
            goto label_1a1090;
        }
    }
    ctx->pc = 0x1A1040u;
    // 0x1a1040: 0x260202d
    ctx->pc = 0x1a1040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1044: 0xc21021
    ctx->pc = 0x1a1044u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1a1048: 0x220282d
    ctx->pc = 0x1a1048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a104c: 0xa440000a
    ctx->pc = 0x1a104cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a1050: 0x8e620008
    ctx->pc = 0x1a1050u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a1054: 0xc21021
    ctx->pc = 0x1a1054u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1a1058: 0xac520004
    ctx->pc = 0x1a1058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
    // 0x1a105c: 0x8e620008
    ctx->pc = 0x1a105cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a1060: 0x8e630018
    ctx->pc = 0x1a1060u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1a1064: 0xc21021
    ctx->pc = 0x1a1064u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1a1068: 0xa4430008
    ctx->pc = 0x1a1068u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a106c: 0x8e620008
    ctx->pc = 0x1a106cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a1070: 0x461021
    ctx->pc = 0x1a1070u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a1074: 0xac480000
    ctx->pc = 0x1a1074u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x1a1078: 0x8e62001c
    ctx->pc = 0x1a1078u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1a107c: 0x521021
    ctx->pc = 0x1a107cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1a1080: 0xc06859c
    ctx->pc = 0x1A1080u;
    SET_GPR_U32(ctx, 31, 0x1A1088u);
    ctx->pc = 0x1A1084u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x1A1670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1670_0x1a1670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1088u; }
    }
    if (ctx->pc != 0x1A1088u) { return; }
    ctx->pc = 0x1A1088u;
    // 0x1a1088: 0x10000072
    ctx->pc = 0x1A1088u;
    {
        const bool branch_taken_0x1a1088 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A108Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x1a1088) {
            ctx->pc = 0x1A1254u;
            goto label_1a1254;
        }
    }
    ctx->pc = 0x1A1090u;
label_1a1090:
    // 0x1a1090: 0x120182d
    ctx->pc = 0x1a1090u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1094: 0x9464000e
    ctx->pc = 0x1a1094u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_1a1098:
    // 0x1a1098: 0x1487ffd8
    ctx->pc = 0x1A1098u;
    {
        const bool branch_taken_0x1a1098 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 7));
        if (branch_taken_0x1a1098) {
            ctx->pc = 0x1A0FFCu;
            goto label_1a0ffc;
        }
    }
    ctx->pc = 0x1A10A0u;
    // 0x1a10a0: 0x8c660000
    ctx->pc = 0x1a10a0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a10a4: 0x8c650004
    ctx->pc = 0x1a10a4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a10a8: 0x8e670018
    ctx->pc = 0x1a10a8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1a10ac: 0x8e630010
    ctx->pc = 0x1a10acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1a10b0: 0xc52821
    ctx->pc = 0x1a10b0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1a10b4: 0x24e4ffff
    ctx->pc = 0x1a10b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1a10b8: 0xe52821
    ctx->pc = 0x1a10b8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1a10bc: 0x802027
    ctx->pc = 0x1a10bcu;
    SET_GPR_U32(ctx, 4, NOR32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
    // 0x1a10c0: 0x24a5ffff
    ctx->pc = 0x1a10c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1a10c4: 0x853024
    ctx->pc = 0x1a10c4u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a10c8: 0x661823
    ctx->pc = 0x1a10c8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a10cc: 0x70082b
    ctx->pc = 0x1a10ccu;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a10d0: 0x1420005e
    ctx->pc = 0x1A10D0u;
    {
        const bool branch_taken_0x1a10d0 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A10D4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a10d0) {
            ctx->pc = 0x1A124Cu;
            goto label_1a124c;
        }
    }
    ctx->pc = 0x1A10D8u;
    // 0x1a10d8: 0x113900
    ctx->pc = 0x1a10d8u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 17), 4));
    // 0x1a10dc: 0x260202d
    ctx->pc = 0x1a10dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a10e0: 0xe21021
    ctx->pc = 0x1a10e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a10e4: 0x220282d
    ctx->pc = 0x1a10e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a10e8: 0xa440000a
    ctx->pc = 0x1a10e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a10ec: 0x8e620008
    ctx->pc = 0x1a10ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a10f0: 0xe21021
    ctx->pc = 0x1a10f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a10f4: 0xac520004
    ctx->pc = 0x1a10f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
    // 0x1a10f8: 0x8e620008
    ctx->pc = 0x1a10f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a10fc: 0x8e630018
    ctx->pc = 0x1a10fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1a1100: 0xe21021
    ctx->pc = 0x1a1100u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a1104: 0xa4430008
    ctx->pc = 0x1a1104u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a1108: 0x8e620008
    ctx->pc = 0x1a1108u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a110c: 0x471021
    ctx->pc = 0x1a110cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1a1110: 0xac460000
    ctx->pc = 0x1a1110u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1a1114: 0x8e62001c
    ctx->pc = 0x1a1114u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1a1118: 0x521021
    ctx->pc = 0x1a1118u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1a111c: 0xc06859c
    ctx->pc = 0x1A111Cu;
    SET_GPR_U32(ctx, 31, 0x1A1124u);
    ctx->pc = 0x1A1120u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x1A1670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1670_0x1a1670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1124u; }
    }
    if (ctx->pc != 0x1A1124u) { return; }
    ctx->pc = 0x1A1124u;
    // 0x1a1124: 0x1000004b
    ctx->pc = 0x1A1124u;
    {
        const bool branch_taken_0x1a1124 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A1128u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x1a1124) {
            ctx->pc = 0x1A1254u;
            goto label_1a1254;
        }
    }
    ctx->pc = 0x1A112Cu;
label_1a112c:
    // 0x1a112c: 0x8e690018
    ctx->pc = 0x1a112cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1a1130: 0x42900
    ctx->pc = 0x1a1130u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 4));
    // 0x1a1134: 0x454021
    ctx->pc = 0x1a1134u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a1138: 0x8c640000
    ctx->pc = 0x1a1138u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a113c: 0x8d070000
    ctx->pc = 0x1a113cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1a1140: 0x8d060004
    ctx->pc = 0x1a1140u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1a1144: 0x2525ffff
    ctx->pc = 0x1a1144u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x1a1148: 0xa02827
    ctx->pc = 0x1a1148u;
    SET_GPR_U32(ctx, 5, NOR32(GPR_U32(ctx, 5), GPR_U32(ctx, 0)));
    // 0x1a114c: 0xe63021
    ctx->pc = 0x1a114cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1a1150: 0x1263021
    ctx->pc = 0x1a1150u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x1a1154: 0x24c6ffff
    ctx->pc = 0x1a1154u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1a1158: 0xa62824
    ctx->pc = 0x1a1158u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1a115c: 0x852023
    ctx->pc = 0x1a115cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a1160: 0x90082b
    ctx->pc = 0x1a1160u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a1164: 0x14200017
    ctx->pc = 0x1A1164u;
    {
        const bool branch_taken_0x1a1164 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A1168u;
        SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 17), 4));
        if (branch_taken_0x1a1164) {
            ctx->pc = 0x1A11C4u;
            goto label_1a11c4;
        }
    }
    ctx->pc = 0x1A116Cu;
    // 0x1a116c: 0x260202d
    ctx->pc = 0x1a116cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1170: 0xe21021
    ctx->pc = 0x1a1170u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a1174: 0x220282d
    ctx->pc = 0x1a1174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1178: 0xa440000a
    ctx->pc = 0x1a1178u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a117c: 0x8e620008
    ctx->pc = 0x1a117cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a1180: 0xe21021
    ctx->pc = 0x1a1180u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a1184: 0xac520004
    ctx->pc = 0x1a1184u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
    // 0x1a1188: 0x8e620008
    ctx->pc = 0x1a1188u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a118c: 0x8e660018
    ctx->pc = 0x1a118cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1a1190: 0xe21021
    ctx->pc = 0x1a1190u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a1194: 0xa4460008
    ctx->pc = 0x1a1194u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 6));
    // 0x1a1198: 0x8c630000
    ctx->pc = 0x1a1198u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a119c: 0x8e620008
    ctx->pc = 0x1a119cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a11a0: 0x701823
    ctx->pc = 0x1a11a0u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a11a4: 0x471021
    ctx->pc = 0x1a11a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1a11a8: 0xac430000
    ctx->pc = 0x1a11a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a11ac: 0x8e62001c
    ctx->pc = 0x1a11acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1a11b0: 0x521021
    ctx->pc = 0x1a11b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1a11b4: 0xc06859c
    ctx->pc = 0x1A11B4u;
    SET_GPR_U32(ctx, 31, 0x1A11BCu);
    ctx->pc = 0x1A11B8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x1A1670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1670_0x1a1670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A11BCu; }
    }
    if (ctx->pc != 0x1A11BCu) { return; }
    ctx->pc = 0x1A11BCu;
    // 0x1a11bc: 0x10000025
    ctx->pc = 0x1A11BCu;
    {
        const bool branch_taken_0x1a11bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A11C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x1a11bc) {
            ctx->pc = 0x1A1254u;
            goto label_1a1254;
        }
    }
    ctx->pc = 0x1A11C4u;
label_1a11c4:
    // 0x1a11c4: 0x100182d
    ctx->pc = 0x1a11c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1a11c8:
    // 0x1a11c8: 0x9465000e
    ctx->pc = 0x1a11c8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x1a11cc: 0x3404ffff
    ctx->pc = 0x1a11ccu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1a11d0: 0x14a4ffd6
    ctx->pc = 0x1A11D0u;
    {
        const bool branch_taken_0x1a11d0 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 4));
        ctx->pc = 0x1A11D4u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 5), 65535));
        if (branch_taken_0x1a11d0) {
            ctx->pc = 0x1A112Cu;
            goto label_1a112c;
        }
    }
    ctx->pc = 0x1A11D8u;
    // 0x1a11d8: 0x8c650000
    ctx->pc = 0x1a11d8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a11dc: 0x8e640010
    ctx->pc = 0x1a11dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1a11e0: 0xa42023
    ctx->pc = 0x1a11e0u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1a11e4: 0x90082b
    ctx->pc = 0x1a11e4u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a11e8: 0x14200017
    ctx->pc = 0x1A11E8u;
    {
        const bool branch_taken_0x1a11e8 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A11ECu;
        SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 17), 4));
        if (branch_taken_0x1a11e8) {
            ctx->pc = 0x1A1248u;
            goto label_1a1248;
        }
    }
    ctx->pc = 0x1A11F0u;
    // 0x1a11f0: 0x260202d
    ctx->pc = 0x1a11f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a11f4: 0xe21021
    ctx->pc = 0x1a11f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a11f8: 0x220282d
    ctx->pc = 0x1a11f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a11fc: 0xa440000a
    ctx->pc = 0x1a11fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a1200: 0x8e620008
    ctx->pc = 0x1a1200u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a1204: 0xe21021
    ctx->pc = 0x1a1204u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a1208: 0xac520004
    ctx->pc = 0x1a1208u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
    // 0x1a120c: 0x8e620008
    ctx->pc = 0x1a120cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a1210: 0x8e660018
    ctx->pc = 0x1a1210u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1a1214: 0xe21021
    ctx->pc = 0x1a1214u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a1218: 0xa4460008
    ctx->pc = 0x1a1218u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 6));
    // 0x1a121c: 0x8c630000
    ctx->pc = 0x1a121cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a1220: 0x8e620008
    ctx->pc = 0x1a1220u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a1224: 0x701823
    ctx->pc = 0x1a1224u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a1228: 0x471021
    ctx->pc = 0x1a1228u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1a122c: 0xac430000
    ctx->pc = 0x1a122cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a1230: 0x8e62001c
    ctx->pc = 0x1a1230u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1a1234: 0x521021
    ctx->pc = 0x1a1234u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1a1238: 0xc06859c
    ctx->pc = 0x1A1238u;
    SET_GPR_U32(ctx, 31, 0x1A1240u);
    ctx->pc = 0x1A123Cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x1A1670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1670_0x1a1670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1240u; }
    }
    if (ctx->pc != 0x1A1240u) { return; }
    ctx->pc = 0x1A1240u;
    // 0x1a1240: 0x10000004
    ctx->pc = 0x1A1240u;
    {
        const bool branch_taken_0x1a1240 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A1244u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x1a1240) {
            ctx->pc = 0x1A1254u;
            goto label_1a1254;
        }
    }
    ctx->pc = 0x1A1248u;
label_1a1248:
    // 0x1a1248: 0x260202d
    ctx->pc = 0x1a1248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a124c:
    // 0x1a124c: 0xc068384
    ctx->pc = 0x1A124Cu;
    SET_GPR_U32(ctx, 31, 0x1A1254u);
    ctx->pc = 0x1A1250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0E10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0E10_0x1a0e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1254u; }
    }
    if (ctx->pc != 0x1A1254u) { return; }
    ctx->pc = 0x1A1254u;
label_1a1254:
    // 0x1a1254: 0xdfbf0040
    ctx->pc = 0x1a1254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a1258:
    // 0x1a1258: 0x7bb30030
    ctx->pc = 0x1a1258u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a125c: 0x7bb20020
    ctx->pc = 0x1a125cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1260: 0x7bb10010
    ctx->pc = 0x1a1260u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1264: 0x7bb00000
    ctx->pc = 0x1a1264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1268: 0x3e00008
    ctx->pc = 0x1A1268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A126Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0FC4u: goto label_1a0fc4;
            case 0x1A0FE4u: goto label_1a0fe4;
            case 0x1A0FFCu: goto label_1a0ffc;
            case 0x1A1090u: goto label_1a1090;
            case 0x1A1098u: goto label_1a1098;
            case 0x1A112Cu: goto label_1a112c;
            case 0x1A11C4u: goto label_1a11c4;
            case 0x1A11C8u: goto label_1a11c8;
            case 0x1A1248u: goto label_1a1248;
            case 0x1A124Cu: goto label_1a124c;
            case 0x1A1254u: goto label_1a1254;
            case 0x1A1258u: goto label_1a1258;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A1270u;
}
