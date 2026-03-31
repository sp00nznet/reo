#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0010AFC0
// Address: 0x10afc0 - 0x10b158
void sub_0010AFC0_0x10afc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10afc0u;

    // 0x10afc0: 0x80382d
    ctx->pc = 0x10afc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10afc4: 0xa74025
    ctx->pc = 0x10afc4u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x10afc8: 0x31020007
    ctx->pc = 0x10afc8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 8), 7));
    // 0x10afcc: 0x14400038
    ctx->pc = 0x10AFCCu;
    {
        const bool branch_taken_0x10afcc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10AFD0u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10afcc) {
            ctx->pc = 0x10B0B0u;
            goto label_10b0b0;
        }
    }
    ctx->pc = 0x10AFD4u;
    // 0x10afd4: 0x3102000f
    ctx->pc = 0x10afd4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 8), 15));
    // 0x10afd8: 0x3c090101
    ctx->pc = 0x10afd8u;
    SET_GPR_U32(ctx, 9, ((uint32_t)257 << 16));
    // 0x10afdc: 0x35290101
    ctx->pc = 0x10afdcu;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), 257));
    // 0x10afe0: 0x94c38
    ctx->pc = 0x10afe0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x10afe4: 0x35290101
    ctx->pc = 0x10afe4u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), 257));
    // 0x10afe8: 0x94c38
    ctx->pc = 0x10afe8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x10afec: 0x35290101
    ctx->pc = 0x10afecu;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), 257));
    // 0x10aff0: 0x3c048080
    ctx->pc = 0x10aff0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32896 << 16));
    // 0x10aff4: 0x34848080
    ctx->pc = 0x10aff4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 32896));
    // 0x10aff8: 0x42438
    ctx->pc = 0x10aff8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x10affc: 0x34848080
    ctx->pc = 0x10affcu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 32896));
    // 0x10b000: 0x42438
    ctx->pc = 0x10b000u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x10b004: 0x34848080
    ctx->pc = 0x10b004u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 32896));
    // 0x10b008: 0x54400019
    ctx->pc = 0x10B008u;
    {
        const bool branch_taken_0x10b008 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x10b008) {
            ctx->pc = 0x10B00Cu;
            SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->pc = 0x10B070u;
            goto label_10b070;
        }
    }
    ctx->pc = 0x10B010u;
    // 0x10b010: 0x71295389
    ctx->pc = 0x10b010u;
    SET_GPR_VEC(ctx, 10, _mm_unpacklo_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x10b014: 0x78a90000
    ctx->pc = 0x10b014u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10b018: 0x70844389
    ctx->pc = 0x10b018u;
    SET_GPR_VEC(ctx, 8, _mm_unpacklo_epi64(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x10b01c: 0x712a1248
    ctx->pc = 0x10b01cu;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x10b020: 0x70091ce9
    ctx->pc = 0x10b020u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x10b024: 0x70431489
    ctx->pc = 0x10b024u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x10b028: 0x70481489
    ctx->pc = 0x10b028u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x10b02c: 0x704923a9
    ctx->pc = 0x10b02cu;
    SET_GPR_VEC(ctx, 4, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x10b030: 0x441825
    ctx->pc = 0x10b030u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10b034: 0x1460001d
    ctx->pc = 0x10B034u;
    {
        const bool branch_taken_0x10b034 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x10B038u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10b034) {
            ctx->pc = 0x10B0ACu;
            goto label_10b0ac;
        }
    }
    ctx->pc = 0x10B03Cu;
label_10b03c:
    // 0x10b03c: 0x7cc90000
    ctx->pc = 0x10b03cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 9));
    // 0x10b040: 0x24a50010
    ctx->pc = 0x10b040u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
    // 0x10b044: 0x78a90000
    ctx->pc = 0x10b044u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10b048: 0x712a1248
    ctx->pc = 0x10b048u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x10b04c: 0x70091ce9
    ctx->pc = 0x10b04cu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x10b050: 0x70431489
    ctx->pc = 0x10b050u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x10b054: 0x70481489
    ctx->pc = 0x10b054u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x10b058: 0x704923a9
    ctx->pc = 0x10b058u;
    SET_GPR_VEC(ctx, 4, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x10b05c: 0x441825
    ctx->pc = 0x10b05cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10b060: 0x1060fff6
    ctx->pc = 0x10B060u;
    {
        const bool branch_taken_0x10b060 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x10B064u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 16));
        if (branch_taken_0x10b060) {
            ctx->pc = 0x10B03Cu;
            goto label_10b03c;
        }
    }
    ctx->pc = 0x10B068u;
    // 0x10b068: 0x10000011
    ctx->pc = 0x10B068u;
    {
        const bool branch_taken_0x10b068 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10B06Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10b068) {
            ctx->pc = 0x10B0B0u;
            goto label_10b0b0;
        }
    }
    ctx->pc = 0x10B070u;
label_10b070:
    // 0x10b070: 0x149102f
    ctx->pc = 0x10b070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 9));
    // 0x10b074: 0xa1827
    ctx->pc = 0x10b074u;
    SET_GPR_U32(ctx, 3, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 10)));
    // 0x10b078: 0x431024
    ctx->pc = 0x10b078u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10b07c: 0x441024
    ctx->pc = 0x10b07cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10b080: 0x1440000a
    ctx->pc = 0x10B080u;
    {
        const bool branch_taken_0x10b080 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10B084u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10b080) {
            ctx->pc = 0x10B0ACu;
            goto label_10b0ac;
        }
    }
    ctx->pc = 0x10B088u;
label_10b088:
    // 0x10b088: 0xfcca0000
    ctx->pc = 0x10b088u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 10));
    // 0x10b08c: 0x24a50008
    ctx->pc = 0x10b08cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
    // 0x10b090: 0xdcaa0000
    ctx->pc = 0x10b090u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10b094: 0xa1027
    ctx->pc = 0x10b094u;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 10)));
    // 0x10b098: 0x149182f
    ctx->pc = 0x10b098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) - GPR_U64(ctx, 9));
    // 0x10b09c: 0x621824
    ctx->pc = 0x10b09cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10b0a0: 0x641824
    ctx->pc = 0x10b0a0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10b0a4: 0x1060fff8
    ctx->pc = 0x10B0A4u;
    {
        const bool branch_taken_0x10b0a4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x10B0A8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
        if (branch_taken_0x10b0a4) {
            ctx->pc = 0x10B088u;
            goto label_10b088;
        }
    }
    ctx->pc = 0x10B0ACu;
label_10b0ac:
    // 0x10b0ac: 0xc0182d
    ctx->pc = 0x10b0acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_10b0b0:
    // 0x10b0b0: 0x90a20000
    ctx->pc = 0x10b0b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10b0b4: 0x24a50001
    ctx->pc = 0x10b0b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x10b0b8: 0xa0620000
    ctx->pc = 0x10b0b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x10b0bc: 0x21600
    ctx->pc = 0x10b0bcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
    // 0x10b0c0: 0x24630001
    ctx->pc = 0x10b0c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x10b0c4: 0x1440fffa
    ctx->pc = 0x10B0C4u;
    {
        const bool branch_taken_0x10b0c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x10b0c4) {
            ctx->pc = 0x10B0B0u;
            goto label_10b0b0;
        }
    }
    ctx->pc = 0x10B0CCu;
    // 0x10b0cc: 0x3e00008
    ctx->pc = 0x10B0CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B0D0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10B03Cu: goto label_10b03c;
            case 0x10B070u: goto label_10b070;
            case 0x10B088u: goto label_10b088;
            case 0x10B0ACu: goto label_10b0ac;
            case 0x10B0B0u: goto label_10b0b0;
            case 0x10B0E8u: goto label_10b0e8;
            case 0x10B110u: goto label_10b110;
            case 0x10B134u: goto label_10b134;
            case 0x10B13Cu: goto label_10b13c;
            case 0x10B14Cu: goto label_10b14c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10B0D4u;
    // 0x10b0d4: 0x0
    ctx->pc = 0x10b0d4u;
    // NOP
    // 0x10b0d8: 0x90880000
    ctx->pc = 0x10b0d8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10b0dc: 0x100102d
    ctx->pc = 0x10b0dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b0e0: 0x1040001a
    ctx->pc = 0x10B0E0u;
    {
        const bool branch_taken_0x10b0e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10B0E4u;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10b0e0) {
            ctx->pc = 0x10B14Cu;
            goto label_10b14c;
        }
    }
    ctx->pc = 0x10B0E8u;
label_10b0e8:
    // 0x10b0e8: 0xa0302d
    ctx->pc = 0x10b0e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b0ec: 0x80c30000
    ctx->pc = 0x10b0ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10b0f0: 0x10600012
    ctx->pc = 0x10B0F0u;
    {
        const bool branch_taken_0x10b0f0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x10B0F4u;
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        if (branch_taken_0x10b0f0) {
            ctx->pc = 0x10B13Cu;
            goto label_10b13c;
        }
    }
    ctx->pc = 0x10B0F8u;
    // 0x10b0f8: 0x21600
    ctx->pc = 0x10b0f8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
    // 0x10b0fc: 0x21603
    ctx->pc = 0x10b0fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x10b100: 0x1043000c
    ctx->pc = 0x10B100u;
    {
        const bool branch_taken_0x10b100 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x10B104u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 8), 24));
        if (branch_taken_0x10b100) {
            ctx->pc = 0x10B134u;
            goto label_10b134;
        }
    }
    ctx->pc = 0x10B108u;
    // 0x10b108: 0x21603
    ctx->pc = 0x10b108u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x10b10c: 0x24c60001
    ctx->pc = 0x10b10cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_10b110:
    // 0x10b110: 0x80c30000
    ctx->pc = 0x10b110u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10b114: 0x10600009
    ctx->pc = 0x10B114u;
    {
        const bool branch_taken_0x10b114 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x10B118u;
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        if (branch_taken_0x10b114) {
            ctx->pc = 0x10B13Cu;
            goto label_10b13c;
        }
    }
    ctx->pc = 0x10B11Cu;
    // 0x10b11c: 0x0
    ctx->pc = 0x10b11cu;
    // NOP
    // 0x10b120: 0x0
    ctx->pc = 0x10b120u;
    // NOP
    // 0x10b124: 0x0
    ctx->pc = 0x10b124u;
    // NOP
    // 0x10b128: 0x0
    ctx->pc = 0x10b128u;
    // NOP
    // 0x10b12c: 0x5443fff8
    ctx->pc = 0x10B12Cu;
    {
        const bool branch_taken_0x10b12c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x10b12c) {
            ctx->pc = 0x10B130u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
            ctx->pc = 0x10B110u;
            goto label_10b110;
        }
    }
    ctx->pc = 0x10B134u;
label_10b134:
    // 0x10b134: 0x14e00005
    ctx->pc = 0x10B134u;
    {
        const bool branch_taken_0x10b134 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        if (branch_taken_0x10b134) {
            ctx->pc = 0x10B14Cu;
            goto label_10b14c;
        }
    }
    ctx->pc = 0x10B13Cu;
label_10b13c:
    // 0x10b13c: 0x24840001
    ctx->pc = 0x10b13cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x10b140: 0x90820000
    ctx->pc = 0x10b140u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10b144: 0x1440ffe8
    ctx->pc = 0x10B144u;
    {
        const bool branch_taken_0x10b144 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10B148u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10b144) {
            ctx->pc = 0x10B0E8u;
            goto label_10b0e8;
        }
    }
    ctx->pc = 0x10B14Cu;
label_10b14c:
    // 0x10b14c: 0x3e00008
    ctx->pc = 0x10B14Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B150u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10B03Cu: goto label_10b03c;
            case 0x10B070u: goto label_10b070;
            case 0x10B088u: goto label_10b088;
            case 0x10B0ACu: goto label_10b0ac;
            case 0x10B0B0u: goto label_10b0b0;
            case 0x10B0E8u: goto label_10b0e8;
            case 0x10B110u: goto label_10b110;
            case 0x10B134u: goto label_10b134;
            case 0x10B13Cu: goto label_10b13c;
            case 0x10B14Cu: goto label_10b14c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10B154u;
    // 0x10b154: 0x0
    ctx->pc = 0x10b154u;
    // NOP
}
