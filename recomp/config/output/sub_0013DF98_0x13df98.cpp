#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013DF98
// Address: 0x13df98 - 0x13e598
void sub_0013DF98_0x13df98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13df98u;

    // 0x13df98: 0x3e00008
    ctx->pc = 0x13DF98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DF9Cu;
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13DFA8u: goto label_13dfa8;
            case 0x13DFC8u: goto label_13dfc8;
            case 0x13DFD8u: goto label_13dfd8;
            case 0x13DFF4u: goto label_13dff4;
            case 0x13E040u: goto label_13e040;
            case 0x13E08Cu: goto label_13e08c;
            case 0x13E0C4u: goto label_13e0c4;
            case 0x13E0FCu: goto label_13e0fc;
            case 0x13E138u: goto label_13e138;
            case 0x13E170u: goto label_13e170;
            case 0x13E1B8u: goto label_13e1b8;
            case 0x13E1F0u: goto label_13e1f0;
            case 0x13E234u: goto label_13e234;
            case 0x13E24Cu: goto label_13e24c;
            case 0x13E288u: goto label_13e288;
            case 0x13E294u: goto label_13e294;
            case 0x13E2A4u: goto label_13e2a4;
            case 0x13E2A8u: goto label_13e2a8;
            case 0x13E380u: goto label_13e380;
            case 0x13E3A0u: goto label_13e3a0;
            case 0x13E400u: goto label_13e400;
            case 0x13E420u: goto label_13e420;
            case 0x13E4A8u: goto label_13e4a8;
            case 0x13E4C8u: goto label_13e4c8;
            case 0x13E4E0u: goto label_13e4e0;
            case 0x13E4E8u: goto label_13e4e8;
            case 0x13E52Cu: goto label_13e52c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13DFA0u;
    // 0x13dfa0: 0x54a00009
    ctx->pc = 0x13DFA0u;
    {
        const bool branch_taken_0x13dfa0 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x13dfa0) {
            ctx->pc = 0x13DFA4u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->pc = 0x13DFC8u;
            goto label_13dfc8;
        }
    }
    ctx->pc = 0x13DFA8u;
label_13dfa8:
    // 0x13dfa8: 0x0
    ctx->pc = 0x13dfa8u;
    // NOP
    // 0x13dfac: 0x0
    ctx->pc = 0x13dfacu;
    // NOP
    // 0x13dfb0: 0x0
    ctx->pc = 0x13dfb0u;
    // NOP
    // 0x13dfb4: 0x0
    ctx->pc = 0x13dfb4u;
    // NOP
    // 0x13dfb8: 0x0
    ctx->pc = 0x13dfb8u;
    // NOP
    // 0x13dfbc: 0x1000fffa
    ctx->pc = 0x13DFBCu;
    {
        const bool branch_taken_0x13dfbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x13dfbc) {
            ctx->pc = 0x13DFA8u;
            goto label_13dfa8;
        }
    }
    ctx->pc = 0x13DFC4u;
    // 0x13dfc4: 0x0
    ctx->pc = 0x13dfc4u;
    // NOP
label_13dfc8:
    // 0x13dfc8: 0x18a0000a
    ctx->pc = 0x13DFC8u;
    {
        const bool branch_taken_0x13dfc8 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x13dfc8) {
            ctx->pc = 0x13DFF4u;
            goto label_13dff4;
        }
    }
    ctx->pc = 0x13DFD0u;
    // 0x13dfd0: 0x24a5ffff
    ctx->pc = 0x13dfd0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x13dfd4: 0x0
    ctx->pc = 0x13dfd4u;
    // NOP
label_13dfd8:
    // 0x13dfd8: 0x0
    ctx->pc = 0x13dfd8u;
    // NOP
    // 0x13dfdc: 0x0
    ctx->pc = 0x13dfdcu;
    // NOP
    // 0x13dfe0: 0x0
    ctx->pc = 0x13dfe0u;
    // NOP
    // 0x13dfe4: 0x0
    ctx->pc = 0x13dfe4u;
    // NOP
    // 0x13dfe8: 0x0
    ctx->pc = 0x13dfe8u;
    // NOP
    // 0x13dfec: 0x54a0fffa
    ctx->pc = 0x13DFECu;
    {
        const bool branch_taken_0x13dfec = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x13dfec) {
            ctx->pc = 0x13DFF0u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->pc = 0x13DFD8u;
            goto label_13dfd8;
        }
    }
    ctx->pc = 0x13DFF4u;
label_13dff4:
    // 0x13dff4: 0x3e00008
    ctx->pc = 0x13DFF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13DFA8u: goto label_13dfa8;
            case 0x13DFC8u: goto label_13dfc8;
            case 0x13DFD8u: goto label_13dfd8;
            case 0x13DFF4u: goto label_13dff4;
            case 0x13E040u: goto label_13e040;
            case 0x13E08Cu: goto label_13e08c;
            case 0x13E0C4u: goto label_13e0c4;
            case 0x13E0FCu: goto label_13e0fc;
            case 0x13E138u: goto label_13e138;
            case 0x13E170u: goto label_13e170;
            case 0x13E1B8u: goto label_13e1b8;
            case 0x13E1F0u: goto label_13e1f0;
            case 0x13E234u: goto label_13e234;
            case 0x13E24Cu: goto label_13e24c;
            case 0x13E288u: goto label_13e288;
            case 0x13E294u: goto label_13e294;
            case 0x13E2A4u: goto label_13e2a4;
            case 0x13E2A8u: goto label_13e2a8;
            case 0x13E380u: goto label_13e380;
            case 0x13E3A0u: goto label_13e3a0;
            case 0x13E400u: goto label_13e400;
            case 0x13E420u: goto label_13e420;
            case 0x13E4A8u: goto label_13e4a8;
            case 0x13E4C8u: goto label_13e4c8;
            case 0x13E4E0u: goto label_13e4e0;
            case 0x13E4E8u: goto label_13e4e8;
            case 0x13E52Cu: goto label_13e52c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13DFFCu;
    // 0x13dffc: 0x0
    ctx->pc = 0x13dffcu;
    // NOP
    // 0x13e000: 0x27bdfff0
    ctx->pc = 0x13e000u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13e004: 0x3c020022
    ctx->pc = 0x13e004u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13e008: 0xffb00000
    ctx->pc = 0x13e008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13e00c: 0xa0802d
    ctx->pc = 0x13e00cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e010: 0x24423880
    ctx->pc = 0x13e010u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14464));
    // 0x13e014: 0x260d0010
    ctx->pc = 0x13e014u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 16), 16));
    // 0x13e018: 0x3c030022
    ctx->pc = 0x13e018u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x13e01c: 0xffb10008
    ctx->pc = 0x13e01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13e020: 0x40382d
    ctx->pc = 0x13e020u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e024: 0x502d
    ctx->pc = 0x13e024u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e028: 0x24710498
    ctx->pc = 0x13e028u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 1176));
    // 0x13e02c: 0x782d
    ctx->pc = 0x13e02cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e030: 0x24190001
    ctx->pc = 0x13e030u;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e034: 0x24180002
    ctx->pc = 0x13e034u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 0), 2));
    // 0x13e038: 0x244e0008
    ctx->pc = 0x13e038u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 2), 8));
    // 0x13e03c: 0x1a0302d
    ctx->pc = 0x13e03cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_13e040:
    // 0x13e040: 0x80e20000
    ctx->pc = 0x13e040u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13e044: 0x54590093
    ctx->pc = 0x13E044u;
    {
        const bool branch_taken_0x13e044 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 25));
        if (branch_taken_0x13e044) {
            ctx->pc = 0x13E048u;
            SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 15), 1));
            ctx->pc = 0x13E294u;
            goto label_13e294;
        }
    }
    ctx->pc = 0x13E04Cu;
    // 0x13e04c: 0x24080080
    ctx->pc = 0x13e04cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 128));
    // 0x13e050: 0x51480095
    ctx->pc = 0x13E050u;
    {
        const bool branch_taken_0x13e050 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 8));
        if (branch_taken_0x13e050) {
            ctx->pc = 0x13E054u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 10));
            ctx->pc = 0x13E2A8u;
            goto label_13e2a8;
        }
    }
    ctx->pc = 0x13E058u;
    // 0x13e058: 0x80e30053
    ctx->pc = 0x13e058u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 83)));
    // 0x13e05c: 0x80e20052
    ctx->pc = 0x13e05cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 82)));
    // 0x13e060: 0x1062000a
    ctx->pc = 0x13E060u;
    {
        const bool branch_taken_0x13e060 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x13E064u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x13e060) {
            ctx->pc = 0x13E08Cu;
            goto label_13e08c;
        }
    }
    ctx->pc = 0x13E068u;
    // 0x13e068: 0x8ce30020
    ctx->pc = 0x13e068u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x13e06c: 0xa4c20000
    ctx->pc = 0x13e06cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x13e070: 0x254a0001
    ctx->pc = 0x13e070u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x13e074: 0xacc30004
    ctx->pc = 0x13e074u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x13e078: 0x80e20053
    ctx->pc = 0x13e078u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 83)));
    // 0x13e07c: 0xacc20008
    ctx->pc = 0x13e07cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x13e080: 0x24c60010
    ctx->pc = 0x13e080u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 16));
    // 0x13e084: 0x90e20053
    ctx->pc = 0x13e084u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 83)));
    // 0x13e088: 0xa0e20052
    ctx->pc = 0x13e088u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 82), (uint8_t)GPR_U32(ctx, 2));
label_13e08c:
    // 0x13e08c: 0x11480085
    ctx->pc = 0x13E08Cu;
    {
        const bool branch_taken_0x13e08c = (GPR_U32(ctx, 10) == GPR_U32(ctx, 8));
        ctx->pc = 0x13E090u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 256));
        if (branch_taken_0x13e08c) {
            ctx->pc = 0x13E2A4u;
            goto label_13e2a4;
        }
    }
    ctx->pc = 0x13E094u;
    // 0x13e094: 0x94e30024
    ctx->pc = 0x13e094u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x13e098: 0x1462000a
    ctx->pc = 0x13E098u;
    {
        const bool branch_taken_0x13e098 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x13e098) {
            ctx->pc = 0x13E0C4u;
            goto label_13e0c4;
        }
    }
    ctx->pc = 0x13E0A0u;
    // 0x13e0a0: 0x8ce20020
    ctx->pc = 0x13e0a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x13e0a4: 0x254a0001
    ctx->pc = 0x13e0a4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x13e0a8: 0xa4d80000
    ctx->pc = 0x13e0a8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 24));
    // 0x13e0ac: 0xacc20004
    ctx->pc = 0x13e0acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x13e0b0: 0x80e30024
    ctx->pc = 0x13e0b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x13e0b4: 0xacc30008
    ctx->pc = 0x13e0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x13e0b8: 0x24c60010
    ctx->pc = 0x13e0b8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 16));
    // 0x13e0bc: 0x90e20024
    ctx->pc = 0x13e0bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x13e0c0: 0xa0e20025
    ctx->pc = 0x13e0c0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 37), (uint8_t)GPR_U32(ctx, 2));
label_13e0c4:
    // 0x13e0c4: 0x51480078
    ctx->pc = 0x13E0C4u;
    {
        const bool branch_taken_0x13e0c4 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 8));
        if (branch_taken_0x13e0c4) {
            ctx->pc = 0x13E0C8u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 10));
            ctx->pc = 0x13E2A8u;
            goto label_13e2a8;
        }
    }
    ctx->pc = 0x13E0CCu;
    // 0x13e0cc: 0x8ce30048
    ctx->pc = 0x13e0ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x13e0d0: 0x8ce2004c
    ctx->pc = 0x13e0d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 76)));
    // 0x13e0d4: 0x10620009
    ctx->pc = 0x13E0D4u;
    {
        const bool branch_taken_0x13e0d4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x13E0D8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x13e0d4) {
            ctx->pc = 0x13E0FCu;
            goto label_13e0fc;
        }
    }
    ctx->pc = 0x13E0DCu;
    // 0x13e0dc: 0xacc30008
    ctx->pc = 0x13e0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x13e0e0: 0x8ce40020
    ctx->pc = 0x13e0e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x13e0e4: 0x254a0001
    ctx->pc = 0x13e0e4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x13e0e8: 0x8ce30048
    ctx->pc = 0x13e0e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x13e0ec: 0xa4c20000
    ctx->pc = 0x13e0ecu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x13e0f0: 0xace3004c
    ctx->pc = 0x13e0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 3));
    // 0x13e0f4: 0xacc40004
    ctx->pc = 0x13e0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x13e0f8: 0x24c60010
    ctx->pc = 0x13e0f8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 16));
label_13e0fc:
    // 0x13e0fc: 0x5148006a
    ctx->pc = 0x13E0FCu;
    {
        const bool branch_taken_0x13e0fc = (GPR_U32(ctx, 10) == GPR_U32(ctx, 8));
        if (branch_taken_0x13e0fc) {
            ctx->pc = 0x13E100u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 10));
            ctx->pc = 0x13E2A8u;
            goto label_13e2a8;
        }
    }
    ctx->pc = 0x13E104u;
    // 0x13e104: 0x80e30026
    ctx->pc = 0x13e104u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 38)));
    // 0x13e108: 0x80e20027
    ctx->pc = 0x13e108u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 39)));
    // 0x13e10c: 0x1062000a
    ctx->pc = 0x13E10Cu;
    {
        const bool branch_taken_0x13e10c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x13E110u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x13e10c) {
            ctx->pc = 0x13E138u;
            goto label_13e138;
        }
    }
    ctx->pc = 0x13E114u;
    // 0x13e114: 0x8ce30020
    ctx->pc = 0x13e114u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x13e118: 0xa4c20000
    ctx->pc = 0x13e118u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x13e11c: 0x254a0001
    ctx->pc = 0x13e11cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x13e120: 0xacc30004
    ctx->pc = 0x13e120u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x13e124: 0x80e20026
    ctx->pc = 0x13e124u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 38)));
    // 0x13e128: 0xacc20008
    ctx->pc = 0x13e128u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x13e12c: 0x24c60010
    ctx->pc = 0x13e12cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 16));
    // 0x13e130: 0x90e20026
    ctx->pc = 0x13e130u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 38)));
    // 0x13e134: 0xa0e20027
    ctx->pc = 0x13e134u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 39), (uint8_t)GPR_U32(ctx, 2));
label_13e138:
    // 0x13e138: 0x5148005b
    ctx->pc = 0x13E138u;
    {
        const bool branch_taken_0x13e138 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 8));
        if (branch_taken_0x13e138) {
            ctx->pc = 0x13E13Cu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 10));
            ctx->pc = 0x13E2A8u;
            goto label_13e2a8;
        }
    }
    ctx->pc = 0x13E140u;
    // 0x13e140: 0x8ce30028
    ctx->pc = 0x13e140u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x13e144: 0x8ce2002c
    ctx->pc = 0x13e144u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x13e148: 0x10620009
    ctx->pc = 0x13E148u;
    {
        const bool branch_taken_0x13e148 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x13E14Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x13e148) {
            ctx->pc = 0x13E170u;
            goto label_13e170;
        }
    }
    ctx->pc = 0x13E150u;
    // 0x13e150: 0xacc30008
    ctx->pc = 0x13e150u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x13e154: 0x8ce40020
    ctx->pc = 0x13e154u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x13e158: 0x254a0001
    ctx->pc = 0x13e158u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x13e15c: 0x8ce30028
    ctx->pc = 0x13e15cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x13e160: 0xa4c20000
    ctx->pc = 0x13e160u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x13e164: 0xace3002c
    ctx->pc = 0x13e164u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 3));
    // 0x13e168: 0xacc40004
    ctx->pc = 0x13e168u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x13e16c: 0x24c60010
    ctx->pc = 0x13e16cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 16));
label_13e170:
    // 0x13e170: 0x5148004d
    ctx->pc = 0x13E170u;
    {
        const bool branch_taken_0x13e170 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 8));
        if (branch_taken_0x13e170) {
            ctx->pc = 0x13E174u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 10));
            ctx->pc = 0x13E2A8u;
            goto label_13e2a8;
        }
    }
    ctx->pc = 0x13E178u;
    // 0x13e178: 0x8ce30030
    ctx->pc = 0x13e178u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x13e17c: 0x8ce20034
    ctx->pc = 0x13e17cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x13e180: 0x1062000d
    ctx->pc = 0x13E180u;
    {
        const bool branch_taken_0x13e180 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x13E184u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x13e180) {
            ctx->pc = 0x13E1B8u;
            goto label_13e1b8;
        }
    }
    ctx->pc = 0x13E188u;
    // 0x13e188: 0x8ce50020
    ctx->pc = 0x13e188u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x13e18c: 0x2221023
    ctx->pc = 0x13e18cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x13e190: 0x24040005
    ctx->pc = 0x13e190u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    // 0x13e194: 0x8c430000
    ctx->pc = 0x13e194u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13e198: 0x254a0001
    ctx->pc = 0x13e198u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x13e19c: 0xacc00008
    ctx->pc = 0x13e19cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x13e1a0: 0xacc3000c
    ctx->pc = 0x13e1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x13e1a4: 0xa4c40000
    ctx->pc = 0x13e1a4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x13e1a8: 0x8ce20030
    ctx->pc = 0x13e1a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x13e1ac: 0xacc50004
    ctx->pc = 0x13e1acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x13e1b0: 0x24c60010
    ctx->pc = 0x13e1b0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 16));
    // 0x13e1b4: 0xace20034
    ctx->pc = 0x13e1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 2));
label_13e1b8:
    // 0x13e1b8: 0x1148003a
    ctx->pc = 0x13E1B8u;
    {
        const bool branch_taken_0x13e1b8 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 8));
        ctx->pc = 0x13E1BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 127));
        if (branch_taken_0x13e1b8) {
            ctx->pc = 0x13E2A4u;
            goto label_13e2a4;
        }
    }
    ctx->pc = 0x13E1C0u;
    // 0x13e1c0: 0x51420039
    ctx->pc = 0x13E1C0u;
    {
        const bool branch_taken_0x13e1c0 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 2));
        if (branch_taken_0x13e1c0) {
            ctx->pc = 0x13E1C4u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 10));
            ctx->pc = 0x13E2A8u;
            goto label_13e2a8;
        }
    }
    ctx->pc = 0x13E1C8u;
    // 0x13e1c8: 0x80e20026
    ctx->pc = 0x13e1c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 38)));
    // 0x13e1cc: 0x582d
    ctx->pc = 0x13e1ccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e1d0: 0x1840001e
    ctx->pc = 0x13E1D0u;
    {
        const bool branch_taken_0x13e1d0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x13E1D4u;
        SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 38)));
        if (branch_taken_0x13e1d0) {
            ctx->pc = 0x13E24Cu;
            goto label_13e24c;
        }
    }
    ctx->pc = 0x13E1D8u;
    // 0x13e1d8: 0xa1100
    ctx->pc = 0x13e1d8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 10), 4));
    // 0x13e1dc: 0x240c0009
    ctx->pc = 0x13e1dcu;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 9));
    // 0x13e1e0: 0x4d2021
    ctx->pc = 0x13e1e0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x13e1e4: 0x24e80040
    ctx->pc = 0x13e1e4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 7), 64));
    // 0x13e1e8: 0x25c50030
    ctx->pc = 0x13e1e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 14), 48));
    // 0x13e1ec: 0x0
    ctx->pc = 0x13e1ecu;
    // NOP
label_13e1f0:
    // 0x13e1f0: 0x8ca30000
    ctx->pc = 0x13e1f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13e1f4: 0x8d020000
    ctx->pc = 0x13e1f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x13e1f8: 0x1062000e
    ctx->pc = 0x13E1F8u;
    {
        const bool branch_taken_0x13e1f8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x13E1FCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 24));
        if (branch_taken_0x13e1f8) {
            ctx->pc = 0x13E234u;
            goto label_13e234;
        }
    }
    ctx->pc = 0x13E200u;
    // 0x13e200: 0xac8b0008
    ctx->pc = 0x13e200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 11));
    // 0x13e204: 0x24c60010
    ctx->pc = 0x13e204u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 16));
    // 0x13e208: 0x8ce30020
    ctx->pc = 0x13e208u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x13e20c: 0x254a0001
    ctx->pc = 0x13e20cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x13e210: 0x8ca20000
    ctx->pc = 0x13e210u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13e214: 0xa48c0000
    ctx->pc = 0x13e214u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 12));
    // 0x13e218: 0xac82000c
    ctx->pc = 0x13e218u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x13e21c: 0xac830004
    ctx->pc = 0x13e21cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x13e220: 0x24840010
    ctx->pc = 0x13e220u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16));
    // 0x13e224: 0x8ca20000
    ctx->pc = 0x13e224u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13e228: 0xad020000
    ctx->pc = 0x13e228u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x13e22c: 0x90e90026
    ctx->pc = 0x13e22cu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 38)));
    // 0x13e230: 0x91600
    ctx->pc = 0x13e230u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 24));
label_13e234:
    // 0x13e234: 0x256b0001
    ctx->pc = 0x13e234u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 1));
    // 0x13e238: 0x21603
    ctx->pc = 0x13e238u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x13e23c: 0x25080004
    ctx->pc = 0x13e23cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4));
    // 0x13e240: 0x162102a
    ctx->pc = 0x13e240u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 11), GPR_S32(ctx, 2)));
    // 0x13e244: 0x1440ffea
    ctx->pc = 0x13E244u;
    {
        const bool branch_taken_0x13e244 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13E248u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
        if (branch_taken_0x13e244) {
            ctx->pc = 0x13E1F0u;
            goto label_13e1f0;
        }
    }
    ctx->pc = 0x13E24Cu;
label_13e24c:
    // 0x13e24c: 0x24040080
    ctx->pc = 0x13e24cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 128));
    // 0x13e250: 0x51440015
    ctx->pc = 0x13E250u;
    {
        const bool branch_taken_0x13e250 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 4));
        if (branch_taken_0x13e250) {
            ctx->pc = 0x13E254u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 10));
            ctx->pc = 0x13E2A8u;
            goto label_13e2a8;
        }
    }
    ctx->pc = 0x13E258u;
    // 0x13e258: 0x94e20024
    ctx->pc = 0x13e258u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x13e25c: 0x1459000a
    ctx->pc = 0x13E25Cu;
    {
        const bool branch_taken_0x13e25c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 25));
        if (branch_taken_0x13e25c) {
            ctx->pc = 0x13E288u;
            goto label_13e288;
        }
    }
    ctx->pc = 0x13E264u;
    // 0x13e264: 0x8ce20020
    ctx->pc = 0x13e264u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x13e268: 0x254a0001
    ctx->pc = 0x13e268u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x13e26c: 0xa4d80000
    ctx->pc = 0x13e26cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 24));
    // 0x13e270: 0xacc20004
    ctx->pc = 0x13e270u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x13e274: 0x80e30024
    ctx->pc = 0x13e274u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x13e278: 0xacc30008
    ctx->pc = 0x13e278u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x13e27c: 0x24c60010
    ctx->pc = 0x13e27cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 16));
    // 0x13e280: 0x90e20024
    ctx->pc = 0x13e280u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x13e284: 0xa0e20025
    ctx->pc = 0x13e284u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 37), (uint8_t)GPR_U32(ctx, 2));
label_13e288:
    // 0x13e288: 0x51440007
    ctx->pc = 0x13E288u;
    {
        const bool branch_taken_0x13e288 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 4));
        if (branch_taken_0x13e288) {
            ctx->pc = 0x13E28Cu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 10));
            ctx->pc = 0x13E2A8u;
            goto label_13e2a8;
        }
    }
    ctx->pc = 0x13E290u;
    // 0x13e290: 0x25ef0001
    ctx->pc = 0x13e290u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 15), 1));
label_13e294:
    // 0x13e294: 0x25ce0060
    ctx->pc = 0x13e294u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 96));
    // 0x13e298: 0x29e20010
    ctx->pc = 0x13e298u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 15), 16));
    // 0x13e29c: 0x1440ff68
    ctx->pc = 0x13E29Cu;
    {
        const bool branch_taken_0x13e29c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13E2A0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 96));
        if (branch_taken_0x13e29c) {
            ctx->pc = 0x13E040u;
            goto label_13e040;
        }
    }
    ctx->pc = 0x13E2A4u;
label_13e2a4:
    // 0x13e2a4: 0xae0a0000
    ctx->pc = 0x13e2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 10));
label_13e2a8:
    // 0x13e2a8: 0xdfb10008
    ctx->pc = 0x13e2a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13e2ac: 0xdfb00000
    ctx->pc = 0x13e2acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e2b0: 0x3e00008
    ctx->pc = 0x13E2B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E2B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13DFA8u: goto label_13dfa8;
            case 0x13DFC8u: goto label_13dfc8;
            case 0x13DFD8u: goto label_13dfd8;
            case 0x13DFF4u: goto label_13dff4;
            case 0x13E040u: goto label_13e040;
            case 0x13E08Cu: goto label_13e08c;
            case 0x13E0C4u: goto label_13e0c4;
            case 0x13E0FCu: goto label_13e0fc;
            case 0x13E138u: goto label_13e138;
            case 0x13E170u: goto label_13e170;
            case 0x13E1B8u: goto label_13e1b8;
            case 0x13E1F0u: goto label_13e1f0;
            case 0x13E234u: goto label_13e234;
            case 0x13E24Cu: goto label_13e24c;
            case 0x13E288u: goto label_13e288;
            case 0x13E294u: goto label_13e294;
            case 0x13E2A4u: goto label_13e2a4;
            case 0x13E2A8u: goto label_13e2a8;
            case 0x13E380u: goto label_13e380;
            case 0x13E3A0u: goto label_13e3a0;
            case 0x13E400u: goto label_13e400;
            case 0x13E420u: goto label_13e420;
            case 0x13E4A8u: goto label_13e4a8;
            case 0x13E4C8u: goto label_13e4c8;
            case 0x13E4E0u: goto label_13e4e0;
            case 0x13E4E8u: goto label_13e4e8;
            case 0x13E52Cu: goto label_13e52c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13E2B8u;
    // 0x13e2b8: 0x27bdffa0
    ctx->pc = 0x13e2b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13e2bc: 0x3c020022
    ctx->pc = 0x13e2bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13e2c0: 0xffb70048
    ctx->pc = 0x13e2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x13e2c4: 0x3c170022
    ctx->pc = 0x13e2c4u;
    SET_GPR_U32(ctx, 23, ((uint32_t)34 << 16));
    // 0x13e2c8: 0xffb00010
    ctx->pc = 0x13e2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x13e2cc: 0x24420490
    ctx->pc = 0x13e2ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1168));
    // 0x13e2d0: 0xffb10018
    ctx->pc = 0x13e2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x13e2d4: 0xffb20020
    ctx->pc = 0x13e2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x13e2d8: 0xffb30028
    ctx->pc = 0x13e2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x13e2dc: 0xffb40030
    ctx->pc = 0x13e2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x13e2e0: 0xffb50038
    ctx->pc = 0x13e2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x13e2e4: 0xffb60040
    ctx->pc = 0x13e2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x13e2e8: 0xffbf0050
    ctx->pc = 0x13e2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x13e2ec: 0x8ee3146c
    ctx->pc = 0x13e2ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 23), 5228)));
    // 0x13e2f0: 0x8c440000
    ctx->pc = 0x13e2f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13e2f4: 0x5460008d
    ctx->pc = 0x13E2F4u;
    {
        const bool branch_taken_0x13e2f4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x13e2f4) {
            ctx->pc = 0x13E2F8u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 23), 5228));
            ctx->pc = 0x13E52Cu;
            goto label_13e52c;
        }
    }
    ctx->pc = 0x13E2FCu;
    // 0x13e2fc: 0x3c100022
    ctx->pc = 0x13e2fcu;
    SET_GPR_U32(ctx, 16, ((uint32_t)34 << 16));
    // 0x13e300: 0x3c130022
    ctx->pc = 0x13e300u;
    SET_GPR_U32(ctx, 19, ((uint32_t)34 << 16));
    // 0x13e304: 0xc0503a2
    ctx->pc = 0x13E304u;
    SET_GPR_U32(ctx, 31, 0x13E30Cu);
    ctx->pc = 0x13E308u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16008));
    ctx->pc = 0x140E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00140E88_0x140e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E30Cu; }
    }
    if (ctx->pc != 0x13E30Cu) { return; }
    ctx->pc = 0x13E30Cu;
    // 0x13e30c: 0xc0504a0
    ctx->pc = 0x13E30Cu;
    SET_GPR_U32(ctx, 31, 0x13E314u);
    ctx->pc = 0x13E310u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 19), 5236));
    ctx->pc = 0x141280u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00141280_0x141280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E314u; }
    }
    if (ctx->pc != 0x13E314u) { return; }
    ctx->pc = 0x13E314u;
    // 0x13e314: 0xc04e4be
    ctx->pc = 0x13E314u;
    SET_GPR_U32(ctx, 31, 0x13E31Cu);
    ctx->pc = 0x13E318u;
    SET_GPR_U32(ctx, 20, ((uint32_t)34 << 16));
    ctx->pc = 0x1392F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001392F8_0x1392f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E31Cu; }
    }
    if (ctx->pc != 0x13E31Cu) { return; }
    ctx->pc = 0x13E31Cu;
    // 0x13e31c: 0xc04f966
    ctx->pc = 0x13E31Cu;
    SET_GPR_U32(ctx, 31, 0x13E324u);
    ctx->pc = 0x13E320u;
    SET_GPR_U32(ctx, 18, ((uint32_t)34 << 16));
    ctx->pc = 0x13E598u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E598_0x13e598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E324u; }
    }
    if (ctx->pc != 0x13E324u) { return; }
    ctx->pc = 0x13E324u;
    // 0x13e324: 0xc04f6d2
    ctx->pc = 0x13E324u;
    SET_GPR_U32(ctx, 31, 0x13E32Cu);
    ctx->pc = 0x13DB48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DB48_0x13db48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E32Cu; }
    }
    if (ctx->pc != 0x13E32Cu) { return; }
    ctx->pc = 0x13E32Cu;
    // 0x13e32c: 0x200202d
    ctx->pc = 0x13e32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e330: 0x282d
    ctx->pc = 0x13e330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e334: 0xc041f1a
    ctx->pc = 0x13E334u;
    SET_GPR_U32(ctx, 31, 0x13E33Cu);
    ctx->pc = 0x13E338u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2256));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E33Cu; }
    }
    if (ctx->pc != 0x13E33Cu) { return; }
    ctx->pc = 0x13E33Cu;
    // 0x13e33c: 0x24040880
    ctx->pc = 0x13e33cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2176));
    // 0x13e340: 0x8e230000
    ctx->pc = 0x13e340u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13e344: 0x26100040
    ctx->pc = 0x13e344u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 64));
    // 0x13e348: 0x2402ffc0
    ctx->pc = 0x13e348u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x13e34c: 0x2028024
    ctx->pc = 0x13e34cu;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x13e350: 0xae843e84
    ctx->pc = 0x13e350u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16004), GPR_U32(ctx, 4));
    // 0x13e354: 0x14600012
    ctx->pc = 0x13E354u;
    {
        const bool branch_taken_0x13e354 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x13E358u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 5232), GPR_U32(ctx, 16));
        if (branch_taken_0x13e354) {
            ctx->pc = 0x13E3A0u;
            goto label_13e3a0;
        }
    }
    ctx->pc = 0x13E35Cu;
    // 0x13e35c: 0xc046e2c
    ctx->pc = 0x13E35Cu;
    SET_GPR_U32(ctx, 31, 0x13E364u);
    ctx->pc = 0x13E360u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2256));
    ctx->pc = 0x11B8B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011B8B0_0x11b8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E364u; }
    }
    if (ctx->pc != 0x13E364u) { return; }
    ctx->pc = 0x13E364u;
    // 0x13e364: 0x1440000e
    ctx->pc = 0x13E364u;
    {
        const bool branch_taken_0x13e364 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13E368u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x13e364) {
            ctx->pc = 0x13E3A0u;
            goto label_13e3a0;
        }
    }
    ctx->pc = 0x13E36Cu;
    // 0x13e36c: 0x3c040024
    ctx->pc = 0x13e36cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13e370: 0x240508d0
    ctx->pc = 0x13e370u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2256));
    // 0x13e374: 0xc045a12
    ctx->pc = 0x13E374u;
    SET_GPR_U32(ctx, 31, 0x13E37Cu);
    ctx->pc = 0x13E378u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294956800));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E37Cu; }
    }
    if (ctx->pc != 0x13E37Cu) { return; }
    ctx->pc = 0x13E37Cu;
    // 0x13e37c: 0x0
    ctx->pc = 0x13e37cu;
    // NOP
label_13e380:
    // 0x13e380: 0x0
    ctx->pc = 0x13e380u;
    // NOP
    // 0x13e384: 0x0
    ctx->pc = 0x13e384u;
    // NOP
    // 0x13e388: 0x0
    ctx->pc = 0x13e388u;
    // NOP
    // 0x13e38c: 0x0
    ctx->pc = 0x13e38cu;
    // NOP
    // 0x13e390: 0x0
    ctx->pc = 0x13e390u;
    // NOP
    // 0x13e394: 0x1000fffa
    ctx->pc = 0x13E394u;
    {
        const bool branch_taken_0x13e394 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x13e394) {
            ctx->pc = 0x13E380u;
            goto label_13e380;
        }
    }
    ctx->pc = 0x13E39Cu;
    // 0x13e39c: 0x0
    ctx->pc = 0x13e39cu;
    // NOP
label_13e3a0:
    // 0x13e3a0: 0x26701474
    ctx->pc = 0x13e3a0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 5236));
    // 0x13e3a4: 0x3c160024
    ctx->pc = 0x13e3a4u;
    SET_GPR_U32(ctx, 22, ((uint32_t)36 << 16));
    // 0x13e3a8: 0x8e060000
    ctx->pc = 0x13e3a8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13e3ac: 0x26c4d5c8
    ctx->pc = 0x13e3acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 22), 4294956488));
    // 0x13e3b0: 0xc045a12
    ctx->pc = 0x13E3B0u;
    SET_GPR_U32(ctx, 31, 0x13E3B8u);
    ctx->pc = 0x13E3B4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2256));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E3B8u; }
    }
    if (ctx->pc != 0x13E3B8u) { return; }
    ctx->pc = 0x13E3B8u;
    // 0x13e3b8: 0x3c080022
    ctx->pc = 0x13e3b8u;
    SET_GPR_U32(ctx, 8, ((uint32_t)34 << 16));
    // 0x13e3bc: 0x8e020000
    ctx->pc = 0x13e3bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13e3c0: 0x3c100022
    ctx->pc = 0x13e3c0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)34 << 16));
    // 0x13e3c4: 0x2403ffc0
    ctx->pc = 0x13e3c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x13e3c8: 0x8e451470
    ctx->pc = 0x13e3c8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 5232)));
    // 0x13e3cc: 0x24420040
    ctx->pc = 0x13e3ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 64));
    // 0x13e3d0: 0x8e873e84
    ctx->pc = 0x13e3d0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 20), 16004)));
    // 0x13e3d4: 0x431024
    ctx->pc = 0x13e3d4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13e3d8: 0x24040001
    ctx->pc = 0x13e3d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e3dc: 0x40302d
    ctx->pc = 0x13e3dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e3e0: 0xc04e3de
    ctx->pc = 0x13E3E0u;
    SET_GPR_U32(ctx, 31, 0x13E3E8u);
    ctx->pc = 0x13E3E4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 5240), GPR_U32(ctx, 2));
    ctx->pc = 0x138F78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138F78_0x138f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E3E8u; }
    }
    if (ctx->pc != 0x13E3E8u) { return; }
    ctx->pc = 0x13E3E8u;
    // 0x13e3e8: 0x1440000d
    ctx->pc = 0x13E3E8u;
    {
        const bool branch_taken_0x13e3e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13E3ECu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16000), GPR_U32(ctx, 2));
        if (branch_taken_0x13e3e8) {
            ctx->pc = 0x13E420u;
            goto label_13e420;
        }
    }
    ctx->pc = 0x13E3F0u;
    // 0x13e3f0: 0x3c040024
    ctx->pc = 0x13e3f0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13e3f4: 0xc045a12
    ctx->pc = 0x13E3F4u;
    SET_GPR_U32(ctx, 31, 0x13E3FCu);
    ctx->pc = 0x13E3F8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294956872));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E3FCu; }
    }
    if (ctx->pc != 0x13E3FCu) { return; }
    ctx->pc = 0x13E3FCu;
    // 0x13e3fc: 0x0
    ctx->pc = 0x13e3fcu;
    // NOP
label_13e400:
    // 0x13e400: 0x0
    ctx->pc = 0x13e400u;
    // NOP
    // 0x13e404: 0x0
    ctx->pc = 0x13e404u;
    // NOP
    // 0x13e408: 0x0
    ctx->pc = 0x13e408u;
    // NOP
    // 0x13e40c: 0x0
    ctx->pc = 0x13e40cu;
    // NOP
    // 0x13e410: 0x0
    ctx->pc = 0x13e410u;
    // NOP
    // 0x13e414: 0x1000fffa
    ctx->pc = 0x13E414u;
    {
        const bool branch_taken_0x13e414 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x13e414) {
            ctx->pc = 0x13E400u;
            goto label_13e400;
        }
    }
    ctx->pc = 0x13E41Cu;
    // 0x13e41c: 0x0
    ctx->pc = 0x13e41cu;
    // NOP
label_13e420:
    // 0x13e420: 0x26103e80
    ctx->pc = 0x13e420u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16000));
    // 0x13e424: 0x3c050014
    ctx->pc = 0x13e424u;
    SET_GPR_U32(ctx, 5, ((uint32_t)20 << 16));
    // 0x13e428: 0x8e040000
    ctx->pc = 0x13e428u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13e42c: 0x24a5dfa0
    ctx->pc = 0x13e42cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294959008));
    // 0x13e430: 0x302d
    ctx->pc = 0x13e430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e434: 0xc04e45e
    ctx->pc = 0x13E434u;
    SET_GPR_U32(ctx, 31, 0x13E43Cu);
    ctx->pc = 0x13E438u;
    SET_GPR_U32(ctx, 17, ((uint32_t)34 << 16));
    ctx->pc = 0x139178u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00139178_0x139178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E43Cu; }
    }
    if (ctx->pc != 0x13E43Cu) { return; }
    ctx->pc = 0x13E43Cu;
    // 0x13e43c: 0x3c050014
    ctx->pc = 0x13e43cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)20 << 16));
    // 0x13e440: 0x8e040000
    ctx->pc = 0x13e440u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13e444: 0x24a5e000
    ctx->pc = 0x13e444u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294959104));
    // 0x13e448: 0x302d
    ctx->pc = 0x13e448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e44c: 0xc04e462
    ctx->pc = 0x13E44Cu;
    SET_GPR_U32(ctx, 31, 0x13E454u);
    ctx->pc = 0x13E450u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 17), 5204));
    ctx->pc = 0x139188u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00139188_0x139188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E454u; }
    }
    if (ctx->pc != 0x13E454u) { return; }
    ctx->pc = 0x13E454u;
    // 0x13e454: 0x8e820000
    ctx->pc = 0x13e454u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x13e458: 0x14400021
    ctx->pc = 0x13E458u;
    {
        const bool branch_taken_0x13e458 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13E45Cu;
        SET_GPR_U32(ctx, 19, ((uint32_t)34 << 16));
        if (branch_taken_0x13e458) {
            ctx->pc = 0x13E4E0u;
            goto label_13e4e0;
        }
    }
    ctx->pc = 0x13E460u;
    // 0x13e460: 0x3c020022
    ctx->pc = 0x13e460u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13e464: 0x3c150022
    ctx->pc = 0x13e464u;
    SET_GPR_U32(ctx, 21, ((uint32_t)34 << 16));
    // 0x13e468: 0x8c431438
    ctx->pc = 0x13e468u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 5176)));
    // 0x13e46c: 0x26b01450
    ctx->pc = 0x13e46cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 21), 5200));
    // 0x13e470: 0x2a0902d
    ctx->pc = 0x13e470u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e474: 0x31280
    ctx->pc = 0x13e474u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 10));
    // 0x13e478: 0xae63145c
    ctx->pc = 0x13e478u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 5212), GPR_U32(ctx, 3));
    // 0x13e47c: 0x24420040
    ctx->pc = 0x13e47cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 64));
    // 0x13e480: 0x0
    ctx->pc = 0x13e480u;
    // NOP
    // 0x13e484: 0xc046e2c
    ctx->pc = 0x13E484u;
    SET_GPR_U32(ctx, 31, 0x13E48Cu);
    ctx->pc = 0x13E488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11B8B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011B8B0_0x11b8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E48Cu; }
    }
    if (ctx->pc != 0x13E48Cu) { return; }
    ctx->pc = 0x13E48Cu;
    // 0x13e48c: 0x1440000e
    ctx->pc = 0x13E48Cu;
    {
        const bool branch_taken_0x13e48c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13E490u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x13e48c) {
            ctx->pc = 0x13E4C8u;
            goto label_13e4c8;
        }
    }
    ctx->pc = 0x13E494u;
    // 0x13e494: 0x3c040024
    ctx->pc = 0x13e494u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13e498: 0x8e050000
    ctx->pc = 0x13e498u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13e49c: 0xc045a12
    ctx->pc = 0x13E49Cu;
    SET_GPR_U32(ctx, 31, 0x13E4A4u);
    ctx->pc = 0x13E4A0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294956912));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E4A4u; }
    }
    if (ctx->pc != 0x13E4A4u) { return; }
    ctx->pc = 0x13E4A4u;
    // 0x13e4a4: 0x0
    ctx->pc = 0x13e4a4u;
    // NOP
label_13e4a8:
    // 0x13e4a8: 0x0
    ctx->pc = 0x13e4a8u;
    // NOP
    // 0x13e4ac: 0x0
    ctx->pc = 0x13e4acu;
    // NOP
    // 0x13e4b0: 0x0
    ctx->pc = 0x13e4b0u;
    // NOP
    // 0x13e4b4: 0x0
    ctx->pc = 0x13e4b4u;
    // NOP
    // 0x13e4b8: 0x0
    ctx->pc = 0x13e4b8u;
    // NOP
    // 0x13e4bc: 0x1000fffa
    ctx->pc = 0x13E4BCu;
    {
        const bool branch_taken_0x13e4bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x13e4bc) {
            ctx->pc = 0x13E4A8u;
            goto label_13e4a8;
        }
    }
    ctx->pc = 0x13E4C4u;
    // 0x13e4c4: 0x0
    ctx->pc = 0x13e4c4u;
    // NOP
label_13e4c8:
    // 0x13e4c8: 0x8e451450
    ctx->pc = 0x13e4c8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 5200)));
    // 0x13e4cc: 0x26c4d5c8
    ctx->pc = 0x13e4ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 22), 4294956488));
    // 0x13e4d0: 0xc045a12
    ctx->pc = 0x13E4D0u;
    SET_GPR_U32(ctx, 31, 0x13E4D8u);
    ctx->pc = 0x13E4D4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 5204)));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E4D8u; }
    }
    if (ctx->pc != 0x13E4D8u) { return; }
    ctx->pc = 0x13E4D8u;
    // 0x13e4d8: 0x10000003
    ctx->pc = 0x13E4D8u;
    {
        const bool branch_taken_0x13e4d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13E4DCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 5204)));
        if (branch_taken_0x13e4d8) {
            ctx->pc = 0x13E4E8u;
            goto label_13e4e8;
        }
    }
    ctx->pc = 0x13E4E0u;
label_13e4e0:
    // 0x13e4e0: 0x3c150022
    ctx->pc = 0x13e4e0u;
    SET_GPR_U32(ctx, 21, ((uint32_t)34 << 16));
    // 0x13e4e4: 0x8e221454
    ctx->pc = 0x13e4e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 5204)));
label_13e4e8:
    // 0x13e4e8: 0x2403ffc0
    ctx->pc = 0x13e4e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x13e4ec: 0x8e65145c
    ctx->pc = 0x13e4ecu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 5212)));
    // 0x13e4f0: 0x3c090022
    ctx->pc = 0x13e4f0u;
    SET_GPR_U32(ctx, 9, ((uint32_t)34 << 16));
    // 0x13e4f4: 0x2442003f
    ctx->pc = 0x13e4f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 63));
    // 0x13e4f8: 0x2404000a
    ctx->pc = 0x13e4f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10));
    // 0x13e4fc: 0x431024
    ctx->pc = 0x13e4fcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13e500: 0x8ea31450
    ctx->pc = 0x13e500u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 5200)));
    // 0x13e504: 0xafa50000
    ctx->pc = 0x13e504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x13e508: 0x3a0282d
    ctx->pc = 0x13e508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e50c: 0x24060003
    ctx->pc = 0x13e50cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    // 0x13e510: 0x382d
    ctx->pc = 0x13e510u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e514: 0x402d
    ctx->pc = 0x13e514u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e518: 0xafa20004
    ctx->pc = 0x13e518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x13e51c: 0xad221458
    ctx->pc = 0x13e51cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 5208), GPR_U32(ctx, 2));
    // 0x13e520: 0xc04e518
    ctx->pc = 0x13E520u;
    SET_GPR_U32(ctx, 31, 0x13E528u);
    ctx->pc = 0x13E524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x139460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00139460_0x139460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E528u; }
    }
    if (ctx->pc != 0x13E528u) { return; }
    ctx->pc = 0x13E528u;
    // 0x13e528: 0x26e3146c
    ctx->pc = 0x13e528u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 23), 5228));
label_13e52c:
    // 0x13e52c: 0xdfb70048
    ctx->pc = 0x13e52cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13e530: 0x8c620000
    ctx->pc = 0x13e530u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13e534: 0xdfb00010
    ctx->pc = 0x13e534u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e538: 0xdfb10018
    ctx->pc = 0x13e538u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13e53c: 0x24420001
    ctx->pc = 0x13e53cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x13e540: 0xdfb20020
    ctx->pc = 0x13e540u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13e544: 0xdfb30028
    ctx->pc = 0x13e544u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13e548: 0xdfb40030
    ctx->pc = 0x13e548u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13e54c: 0xdfb50038
    ctx->pc = 0x13e54cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13e550: 0xdfb60040
    ctx->pc = 0x13e550u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13e554: 0xdfbf0050
    ctx->pc = 0x13e554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13e558: 0xac620000
    ctx->pc = 0x13e558u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x13e55c: 0x3e00008
    ctx->pc = 0x13E55Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E560u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13DFA8u: goto label_13dfa8;
            case 0x13DFC8u: goto label_13dfc8;
            case 0x13DFD8u: goto label_13dfd8;
            case 0x13DFF4u: goto label_13dff4;
            case 0x13E040u: goto label_13e040;
            case 0x13E08Cu: goto label_13e08c;
            case 0x13E0C4u: goto label_13e0c4;
            case 0x13E0FCu: goto label_13e0fc;
            case 0x13E138u: goto label_13e138;
            case 0x13E170u: goto label_13e170;
            case 0x13E1B8u: goto label_13e1b8;
            case 0x13E1F0u: goto label_13e1f0;
            case 0x13E234u: goto label_13e234;
            case 0x13E24Cu: goto label_13e24c;
            case 0x13E288u: goto label_13e288;
            case 0x13E294u: goto label_13e294;
            case 0x13E2A4u: goto label_13e2a4;
            case 0x13E2A8u: goto label_13e2a8;
            case 0x13E380u: goto label_13e380;
            case 0x13E3A0u: goto label_13e3a0;
            case 0x13E400u: goto label_13e400;
            case 0x13E420u: goto label_13e420;
            case 0x13E4A8u: goto label_13e4a8;
            case 0x13E4C8u: goto label_13e4c8;
            case 0x13E4E0u: goto label_13e4e0;
            case 0x13E4E8u: goto label_13e4e8;
            case 0x13E52Cu: goto label_13e52c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13E564u;
    // 0x13e564: 0x0
    ctx->pc = 0x13e564u;
    // NOP
    // 0x13e568: 0x27bdffe0
    ctx->pc = 0x13e568u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13e56c: 0x24060001
    ctx->pc = 0x13e56cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e570: 0xafa40000
    ctx->pc = 0x13e570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x13e574: 0x2404000b
    ctx->pc = 0x13e574u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 11));
    // 0x13e578: 0x3a0282d
    ctx->pc = 0x13e578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e57c: 0x382d
    ctx->pc = 0x13e57cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e580: 0xffbf0010
    ctx->pc = 0x13e580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13e584: 0xc04e518
    ctx->pc = 0x13E584u;
    SET_GPR_U32(ctx, 31, 0x13E58Cu);
    ctx->pc = 0x13E588u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x139460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00139460_0x139460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E58Cu; }
    }
    if (ctx->pc != 0x13E58Cu) { return; }
    ctx->pc = 0x13E58Cu;
    // 0x13e58c: 0xdfbf0010
    ctx->pc = 0x13e58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e590: 0x3e00008
    ctx->pc = 0x13E590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E594u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13DFA8u: goto label_13dfa8;
            case 0x13DFC8u: goto label_13dfc8;
            case 0x13DFD8u: goto label_13dfd8;
            case 0x13DFF4u: goto label_13dff4;
            case 0x13E040u: goto label_13e040;
            case 0x13E08Cu: goto label_13e08c;
            case 0x13E0C4u: goto label_13e0c4;
            case 0x13E0FCu: goto label_13e0fc;
            case 0x13E138u: goto label_13e138;
            case 0x13E170u: goto label_13e170;
            case 0x13E1B8u: goto label_13e1b8;
            case 0x13E1F0u: goto label_13e1f0;
            case 0x13E234u: goto label_13e234;
            case 0x13E24Cu: goto label_13e24c;
            case 0x13E288u: goto label_13e288;
            case 0x13E294u: goto label_13e294;
            case 0x13E2A4u: goto label_13e2a4;
            case 0x13E2A8u: goto label_13e2a8;
            case 0x13E380u: goto label_13e380;
            case 0x13E3A0u: goto label_13e3a0;
            case 0x13E400u: goto label_13e400;
            case 0x13E420u: goto label_13e420;
            case 0x13E4A8u: goto label_13e4a8;
            case 0x13E4C8u: goto label_13e4c8;
            case 0x13E4E0u: goto label_13e4e0;
            case 0x13E4E8u: goto label_13e4e8;
            case 0x13E52Cu: goto label_13e52c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13E598u;
}
