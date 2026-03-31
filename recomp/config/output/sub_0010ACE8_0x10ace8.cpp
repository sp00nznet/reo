#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0010ACE8
// Address: 0x10ace8 - 0x10ae78
void sub_0010ACE8_0x10ace8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10ace8u;

    // 0x10ace8: 0x30820007
    ctx->pc = 0x10ace8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 7));
    // 0x10acec: 0x1440005a
    ctx->pc = 0x10ACECu;
    {
        const bool branch_taken_0x10acec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10ACF0u;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 255));
        if (branch_taken_0x10acec) {
            ctx->pc = 0x10AE58u;
            goto label_10ae58;
        }
    }
    ctx->pc = 0x10ACF4u;
    // 0x10acf4: 0x51a38
    ctx->pc = 0x10acf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 8);
    // 0x10acf8: 0x3c060101
    ctx->pc = 0x10acf8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)257 << 16));
    // 0x10acfc: 0x34c60101
    ctx->pc = 0x10acfcu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 257));
    // 0x10ad00: 0x63438
    ctx->pc = 0x10ad00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x10ad04: 0x34c60101
    ctx->pc = 0x10ad04u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 257));
    // 0x10ad08: 0x63438
    ctx->pc = 0x10ad08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x10ad0c: 0x34c60101
    ctx->pc = 0x10ad0cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 257));
    // 0x10ad10: 0x65502d
    ctx->pc = 0x10ad10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x10ad14: 0x3083000f
    ctx->pc = 0x10ad14u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 15));
    // 0x10ad18: 0xa1438
    ctx->pc = 0x10ad18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << 16);
    // 0x10ad1c: 0x3c088080
    ctx->pc = 0x10ad1cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)32896 << 16));
    // 0x10ad20: 0x35088080
    ctx->pc = 0x10ad20u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), 32896));
    // 0x10ad24: 0x84438
    ctx->pc = 0x10ad24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x10ad28: 0x35088080
    ctx->pc = 0x10ad28u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), 32896));
    // 0x10ad2c: 0x84438
    ctx->pc = 0x10ad2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x10ad30: 0x35088080
    ctx->pc = 0x10ad30u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), 32896));
    // 0x10ad34: 0x4a102d
    ctx->pc = 0x10ad34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 10));
    // 0x10ad38: 0x2503c
    ctx->pc = 0x10ad38u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10ad3c: 0x14600024
    ctx->pc = 0x10AD3Cu;
    {
        const bool branch_taken_0x10ad3c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x10AD40u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 10));
        if (branch_taken_0x10ad3c) {
            ctx->pc = 0x10ADD0u;
            goto label_10add0;
        }
    }
    ctx->pc = 0x10AD44u;
label_10ad44:
    // 0x10ad44: 0x78890000
    ctx->pc = 0x10ad44u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10ad48: 0x70c65389
    ctx->pc = 0x10ad48u;
    SET_GPR_VEC(ctx, 10, _mm_unpacklo_epi64(GPR_VEC(ctx, 6), GPR_VEC(ctx, 6)));
    // 0x10ad4c: 0x70091ce9
    ctx->pc = 0x10ad4cu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x10ad50: 0x712a1248
    ctx->pc = 0x10ad50u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x10ad54: 0x71083389
    ctx->pc = 0x10ad54u;
    SET_GPR_VEC(ctx, 6, _mm_unpacklo_epi64(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x10ad58: 0x70431489
    ctx->pc = 0x10ad58u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x10ad5c: 0x70e74389
    ctx->pc = 0x10ad5cu;
    SET_GPR_VEC(ctx, 8, _mm_unpacklo_epi64(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x10ad60: 0x70461489
    ctx->pc = 0x10ad60u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x10ad64: 0x70471ba9
    ctx->pc = 0x10ad64u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x10ad68: 0x431825
    ctx->pc = 0x10ad68u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10ad6c: 0x5460003b
    ctx->pc = 0x10AD6Cu;
    {
        const bool branch_taken_0x10ad6c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x10ad6c) {
            ctx->pc = 0x10AD70u;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->pc = 0x10AE5Cu;
            goto label_10ae5c;
        }
    }
    ctx->pc = 0x10AD74u;
    // 0x10ad74: 0x712814c9
    ctx->pc = 0x10ad74u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x10ad78: 0x704a1a48
    ctx->pc = 0x10ad78u;
    SET_GPR_VEC(ctx, 3, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x10ad7c: 0x700214e9
    ctx->pc = 0x10ad7cu;
    SET_GPR_VEC(ctx, 2, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x10ad80: 0x3c088080
    ctx->pc = 0x10ad80u;
    SET_GPR_U32(ctx, 8, ((uint32_t)32896 << 16));
    // 0x10ad84: 0x35088080
    ctx->pc = 0x10ad84u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), 32896));
    // 0x10ad88: 0x84438
    ctx->pc = 0x10ad88u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x10ad8c: 0x35088080
    ctx->pc = 0x10ad8cu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), 32896));
    // 0x10ad90: 0x84438
    ctx->pc = 0x10ad90u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x10ad94: 0x35088080
    ctx->pc = 0x10ad94u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), 32896));
    // 0x10ad98: 0x70621c89
    ctx->pc = 0x10ad98u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x10ad9c: 0x70661c89
    ctx->pc = 0x10ad9cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x10ada0: 0x3c060101
    ctx->pc = 0x10ada0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)257 << 16));
    // 0x10ada4: 0x34c60101
    ctx->pc = 0x10ada4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 257));
    // 0x10ada8: 0x63438
    ctx->pc = 0x10ada8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x10adac: 0x34c60101
    ctx->pc = 0x10adacu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 257));
    // 0x10adb0: 0x63438
    ctx->pc = 0x10adb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x10adb4: 0x34c60101
    ctx->pc = 0x10adb4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 257));
    // 0x10adb8: 0x706513a9
    ctx->pc = 0x10adb8u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x10adbc: 0x431825
    ctx->pc = 0x10adbcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10adc0: 0x5060ffe0
    ctx->pc = 0x10ADC0u;
    {
        const bool branch_taken_0x10adc0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x10adc0) {
            ctx->pc = 0x10ADC4u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16));
            ctx->pc = 0x10AD44u;
            goto label_10ad44;
        }
    }
    ctx->pc = 0x10ADC8u;
    // 0x10adc8: 0x10000024
    ctx->pc = 0x10ADC8u;
    {
        const bool branch_taken_0x10adc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10ADCCu;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x10adc8) {
            ctx->pc = 0x10AE5Cu;
            goto label_10ae5c;
        }
    }
    ctx->pc = 0x10ADD0u;
label_10add0:
    // 0x10add0: 0xdc890000
    ctx->pc = 0x10add0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10add4: 0x91827
    ctx->pc = 0x10add4u;
    SET_GPR_U32(ctx, 3, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
    // 0x10add8: 0x126102f
    ctx->pc = 0x10add8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) - GPR_U64(ctx, 6));
    // 0x10addc: 0x431024
    ctx->pc = 0x10addcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10ade0: 0x481024
    ctx->pc = 0x10ade0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x10ade4: 0x5440001d
    ctx->pc = 0x10ADE4u;
    {
        const bool branch_taken_0x10ade4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x10ade4) {
            ctx->pc = 0x10ADE8u;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->pc = 0x10AE5Cu;
            goto label_10ae5c;
        }
    }
    ctx->pc = 0x10ADECu;
    // 0x10adec: 0x1271026
    ctx->pc = 0x10adecu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x10adf0: 0x46182f
    ctx->pc = 0x10adf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) - GPR_U64(ctx, 6));
    // 0x10adf4: 0x21027
    ctx->pc = 0x10adf4u;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x10adf8: 0x621824
    ctx->pc = 0x10adf8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10adfc: 0x681824
    ctx->pc = 0x10adfcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x10ae00: 0x54600016
    ctx->pc = 0x10AE00u;
    {
        const bool branch_taken_0x10ae00 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x10ae00) {
            ctx->pc = 0x10AE04u;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->pc = 0x10AE5Cu;
            goto label_10ae5c;
        }
    }
    ctx->pc = 0x10AE08u;
    // 0x10ae08: 0xc0482d
    ctx->pc = 0x10ae08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ae0c: 0x24840008
    ctx->pc = 0x10ae0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8));
label_10ae10:
    // 0x10ae10: 0xdc860000
    ctx->pc = 0x10ae10u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10ae14: 0xc9102f
    ctx->pc = 0x10ae14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) - GPR_U64(ctx, 9));
    // 0x10ae18: 0x61827
    ctx->pc = 0x10ae18u;
    SET_GPR_U32(ctx, 3, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x10ae1c: 0x431024
    ctx->pc = 0x10ae1cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10ae20: 0x481024
    ctx->pc = 0x10ae20u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x10ae24: 0x1440000c
    ctx->pc = 0x10AE24u;
    {
        const bool branch_taken_0x10ae24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10AE28u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        if (branch_taken_0x10ae24) {
            ctx->pc = 0x10AE58u;
            goto label_10ae58;
        }
    }
    ctx->pc = 0x10AE2Cu;
    // 0x10ae2c: 0x21827
    ctx->pc = 0x10ae2cu;
    SET_GPR_U32(ctx, 3, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x10ae30: 0x49102f
    ctx->pc = 0x10ae30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x10ae34: 0x431024
    ctx->pc = 0x10ae34u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10ae38: 0x481024
    ctx->pc = 0x10ae38u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x10ae3c: 0x5040fff4
    ctx->pc = 0x10AE3Cu;
    {
        const bool branch_taken_0x10ae3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x10ae3c) {
            ctx->pc = 0x10AE40u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8));
            ctx->pc = 0x10AE10u;
            goto label_10ae10;
        }
    }
    ctx->pc = 0x10AE44u;
    // 0x10ae44: 0x10000005
    ctx->pc = 0x10AE44u;
    {
        const bool branch_taken_0x10ae44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10AE48u;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x10ae44) {
            ctx->pc = 0x10AE5Cu;
            goto label_10ae5c;
        }
    }
    ctx->pc = 0x10AE4Cu;
label_10ae4c:
    // 0x10ae4c: 0x50450006
    ctx->pc = 0x10AE4Cu;
    {
        const bool branch_taken_0x10ae4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        if (branch_taken_0x10ae4c) {
            ctx->pc = 0x10AE50u;
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->pc = 0x10AE68u;
            goto label_10ae68;
        }
    }
    ctx->pc = 0x10AE54u;
    // 0x10ae54: 0x24840001
    ctx->pc = 0x10ae54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_10ae58:
    // 0x10ae58: 0x90820000
    ctx->pc = 0x10ae58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_10ae5c:
    // 0x10ae5c: 0x1440fffb
    ctx->pc = 0x10AE5Cu;
    {
        const bool branch_taken_0x10ae5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x10ae5c) {
            ctx->pc = 0x10AE4Cu;
            goto label_10ae4c;
        }
    }
    ctx->pc = 0x10AE64u;
    // 0x10ae64: 0x90830000
    ctx->pc = 0x10ae64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_10ae68:
    // 0x10ae68: 0x102d
    ctx->pc = 0x10ae68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ae6c: 0x651826
    ctx->pc = 0x10ae6cu;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x10ae70: 0x3e00008
    ctx->pc = 0x10AE70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AE74u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10AD44u: goto label_10ad44;
            case 0x10ADD0u: goto label_10add0;
            case 0x10AE10u: goto label_10ae10;
            case 0x10AE4Cu: goto label_10ae4c;
            case 0x10AE58u: goto label_10ae58;
            case 0x10AE5Cu: goto label_10ae5c;
            case 0x10AE68u: goto label_10ae68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10AE78u;
}
