#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0010AE78
// Address: 0x10ae78 - 0x10afc0
void sub_0010AE78_0x10ae78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10ae78u;

    // 0x10ae78: 0x854025
    ctx->pc = 0x10ae78u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x10ae7c: 0x31020007
    ctx->pc = 0x10ae7cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 8), 7));
    // 0x10ae80: 0x54400049
    ctx->pc = 0x10AE80u;
    {
        const bool branch_taken_0x10ae80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x10ae80) {
            ctx->pc = 0x10AE84u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->pc = 0x10AFA8u;
            goto label_10afa8;
        }
    }
    ctx->pc = 0x10AE88u;
    // 0x10ae88: 0x3109000f
    ctx->pc = 0x10ae88u;
    SET_GPR_U32(ctx, 9, AND32(GPR_U32(ctx, 8), 15));
    // 0x10ae8c: 0x3c070101
    ctx->pc = 0x10ae8cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)257 << 16));
    // 0x10ae90: 0x34e70101
    ctx->pc = 0x10ae90u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 257));
    // 0x10ae94: 0x73c38
    ctx->pc = 0x10ae94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x10ae98: 0x34e70101
    ctx->pc = 0x10ae98u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 257));
    // 0x10ae9c: 0x73c38
    ctx->pc = 0x10ae9cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x10aea0: 0x34e70101
    ctx->pc = 0x10aea0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 257));
    // 0x10aea4: 0x3c068080
    ctx->pc = 0x10aea4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)32896 << 16));
    // 0x10aea8: 0x34c68080
    ctx->pc = 0x10aea8u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 32896));
    // 0x10aeac: 0x63438
    ctx->pc = 0x10aeacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x10aeb0: 0x34c68080
    ctx->pc = 0x10aeb0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 32896));
    // 0x10aeb4: 0x63438
    ctx->pc = 0x10aeb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x10aeb8: 0x34c68080
    ctx->pc = 0x10aeb8u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 32896));
    // 0x10aebc: 0x1520001f
    ctx->pc = 0x10AEBCu;
    {
        const bool branch_taken_0x10aebc = (GPR_U32(ctx, 9) != GPR_U32(ctx, 0));
        ctx->pc = 0x10AEC0u;
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
        if (branch_taken_0x10aebc) {
            ctx->pc = 0x10AF3Cu;
            goto label_10af3c;
        }
    }
    ctx->pc = 0x10AEC4u;
    // 0x10aec4: 0x78830000
    ctx->pc = 0x10aec4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10aec8: 0x70e74389
    ctx->pc = 0x10aec8u;
    SET_GPR_VEC(ctx, 8, _mm_unpacklo_epi64(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x10aecc: 0x78a20000
    ctx->pc = 0x10aeccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10aed0: 0x70c65389
    ctx->pc = 0x10aed0u;
    SET_GPR_VEC(ctx, 10, _mm_unpacklo_epi64(GPR_VEC(ctx, 6), GPR_VEC(ctx, 6)));
    // 0x10aed4: 0x70433848
    ctx->pc = 0x10aed4u;
    SET_GPR_VEC(ctx, 7, PS2_PSUBW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x10aed8: 0x70e433a9
    ctx->pc = 0x10aed8u;
    SET_GPR_VEC(ctx, 6, _mm_unpackhi_epi64(GPR_VEC(ctx, 7), GPR_VEC(ctx, 4)));
    // 0x10aedc: 0xc71825
    ctx->pc = 0x10aedcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x10aee0: 0x54600031
    ctx->pc = 0x10AEE0u;
    {
        const bool branch_taken_0x10aee0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x10aee0) {
            ctx->pc = 0x10AEE4u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->pc = 0x10AFA8u;
            goto label_10afa8;
        }
    }
    ctx->pc = 0x10AEE8u;
    // 0x10aee8: 0x78820000
    ctx->pc = 0x10aee8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10aeec: 0x70021ce9
    ctx->pc = 0x10aeecu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_10aef0:
    // 0x10aef0: 0x70481248
    ctx->pc = 0x10aef0u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x10aef4: 0x70431489
    ctx->pc = 0x10aef4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x10aef8: 0x704a1489
    ctx->pc = 0x10aef8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x10aefc: 0x70441ba9
    ctx->pc = 0x10aefcu;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x10af00: 0x623025
    ctx->pc = 0x10af00u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10af04: 0x10c00003
    ctx->pc = 0x10AF04u;
    {
        const bool branch_taken_0x10af04 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x10AF08u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16));
        if (branch_taken_0x10af04) {
            ctx->pc = 0x10AF14u;
            goto label_10af14;
        }
    }
    ctx->pc = 0x10AF0Cu;
    // 0x10af0c: 0x3e00008
    ctx->pc = 0x10AF0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AF10u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10AEF0u: goto label_10aef0;
            case 0x10AF14u: goto label_10af14;
            case 0x10AF3Cu: goto label_10af3c;
            case 0x10AF50u: goto label_10af50;
            case 0x10AF6Cu: goto label_10af6c;
            case 0x10AF88u: goto label_10af88;
            case 0x10AFA8u: goto label_10afa8;
            case 0x10AFB0u: goto label_10afb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10AF14u;
label_10af14:
    // 0x10af14: 0x24a50010
    ctx->pc = 0x10af14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
    // 0x10af18: 0x78820000
    ctx->pc = 0x10af18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10af1c: 0x78a30000
    ctx->pc = 0x10af1cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10af20: 0x70433848
    ctx->pc = 0x10af20u;
    SET_GPR_VEC(ctx, 7, PS2_PSUBW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x10af24: 0x70e433a9
    ctx->pc = 0x10af24u;
    SET_GPR_VEC(ctx, 6, _mm_unpackhi_epi64(GPR_VEC(ctx, 7), GPR_VEC(ctx, 4)));
    // 0x10af28: 0xc74825
    ctx->pc = 0x10af28u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x10af2c: 0x5120fff0
    ctx->pc = 0x10AF2Cu;
    {
        const bool branch_taken_0x10af2c = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        if (branch_taken_0x10af2c) {
            ctx->pc = 0x10AF30u;
            SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
            ctx->pc = 0x10AEF0u;
            goto label_10aef0;
        }
    }
    ctx->pc = 0x10AF34u;
    // 0x10af34: 0x1000001c
    ctx->pc = 0x10AF34u;
    {
        const bool branch_taken_0x10af34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10AF38u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x10af34) {
            ctx->pc = 0x10AFA8u;
            goto label_10afa8;
        }
    }
    ctx->pc = 0x10AF3Cu;
label_10af3c:
    // 0x10af3c: 0xdc830000
    ctx->pc = 0x10af3cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10af40: 0x54620019
    ctx->pc = 0x10AF40u;
    {
        const bool branch_taken_0x10af40 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x10af40) {
            ctx->pc = 0x10AF44u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->pc = 0x10AFA8u;
            goto label_10afa8;
        }
    }
    ctx->pc = 0x10AF48u;
    // 0x10af48: 0xdc820000
    ctx->pc = 0x10af48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10af4c: 0x24027
    ctx->pc = 0x10af4cu;
    SET_GPR_U32(ctx, 8, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_10af50:
    // 0x10af50: 0x47102f
    ctx->pc = 0x10af50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 7));
    // 0x10af54: 0x481024
    ctx->pc = 0x10af54u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x10af58: 0x461024
    ctx->pc = 0x10af58u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x10af5c: 0x10400003
    ctx->pc = 0x10AF5Cu;
    {
        const bool branch_taken_0x10af5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10AF60u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8));
        if (branch_taken_0x10af5c) {
            ctx->pc = 0x10AF6Cu;
            goto label_10af6c;
        }
    }
    ctx->pc = 0x10AF64u;
    // 0x10af64: 0x3e00008
    ctx->pc = 0x10AF64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AF68u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10AEF0u: goto label_10aef0;
            case 0x10AF14u: goto label_10af14;
            case 0x10AF3Cu: goto label_10af3c;
            case 0x10AF50u: goto label_10af50;
            case 0x10AF6Cu: goto label_10af6c;
            case 0x10AF88u: goto label_10af88;
            case 0x10AFA8u: goto label_10afa8;
            case 0x10AFB0u: goto label_10afb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10AF6Cu;
label_10af6c:
    // 0x10af6c: 0x24a50008
    ctx->pc = 0x10af6cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
    // 0x10af70: 0xdc820000
    ctx->pc = 0x10af70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10af74: 0xdca30000
    ctx->pc = 0x10af74u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10af78: 0x5062fff5
    ctx->pc = 0x10AF78u;
    {
        const bool branch_taken_0x10af78 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x10af78) {
            ctx->pc = 0x10AF7Cu;
            SET_GPR_U32(ctx, 8, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->pc = 0x10AF50u;
            goto label_10af50;
        }
    }
    ctx->pc = 0x10AF80u;
    // 0x10af80: 0x10000009
    ctx->pc = 0x10AF80u;
    {
        const bool branch_taken_0x10af80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10AF84u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x10af80) {
            ctx->pc = 0x10AFA8u;
            goto label_10afa8;
        }
    }
    ctx->pc = 0x10AF88u;
label_10af88:
    // 0x10af88: 0x31600
    ctx->pc = 0x10af88u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 24));
    // 0x10af8c: 0x80a30000
    ctx->pc = 0x10af8cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10af90: 0x21603
    ctx->pc = 0x10af90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x10af94: 0x54430006
    ctx->pc = 0x10AF94u;
    {
        const bool branch_taken_0x10af94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x10af94) {
            ctx->pc = 0x10AF98u;
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->pc = 0x10AFB0u;
            goto label_10afb0;
        }
    }
    ctx->pc = 0x10AF9Cu;
    // 0x10af9c: 0x24840001
    ctx->pc = 0x10af9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x10afa0: 0x24a50001
    ctx->pc = 0x10afa0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x10afa4: 0x80820000
    ctx->pc = 0x10afa4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_10afa8:
    // 0x10afa8: 0x1440fff7
    ctx->pc = 0x10AFA8u;
    {
        const bool branch_taken_0x10afa8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10AFACu;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x10afa8) {
            ctx->pc = 0x10AF88u;
            goto label_10af88;
        }
    }
    ctx->pc = 0x10AFB0u;
label_10afb0:
    // 0x10afb0: 0x90a20000
    ctx->pc = 0x10afb0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10afb4: 0x3e00008
    ctx->pc = 0x10AFB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AFB8u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10AEF0u: goto label_10aef0;
            case 0x10AF14u: goto label_10af14;
            case 0x10AF3Cu: goto label_10af3c;
            case 0x10AF50u: goto label_10af50;
            case 0x10AF6Cu: goto label_10af6c;
            case 0x10AF88u: goto label_10af88;
            case 0x10AFA8u: goto label_10afa8;
            case 0x10AFB0u: goto label_10afb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10AFBCu;
    // 0x10afbc: 0x0
    ctx->pc = 0x10afbcu;
    // NOP
}
