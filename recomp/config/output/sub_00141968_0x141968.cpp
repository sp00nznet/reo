#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00141968
// Address: 0x141968 - 0x141b10
void sub_00141968_0x141968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x141968u;

label_141968:
    // 0x141968: 0x27bdffd0
    ctx->pc = 0x141968u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14196c: 0xffb10008
    ctx->pc = 0x14196cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x141970: 0xffbf0028
    ctx->pc = 0x141970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x141974: 0xffb00000
    ctx->pc = 0x141974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x141978: 0x80802d
    ctx->pc = 0x141978u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14197c: 0xffb20010
    ctx->pc = 0x14197cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x141980: 0x902d
    ctx->pc = 0x141980u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141984: 0xffb30018
    ctx->pc = 0x141984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x141988: 0xa0982d
    ctx->pc = 0x141988u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14198c: 0xffb40020
    ctx->pc = 0x14198cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x141990: 0xc0a02d
    ctx->pc = 0x141990u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141994: 0x2a420020
    ctx->pc = 0x141994u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 32));
label_141998:
    // 0x141998: 0x10400012
    ctx->pc = 0x141998u;
    {
        const bool branch_taken_0x141998 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14199Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
        if (branch_taken_0x141998) {
            ctx->pc = 0x1419E4u;
            goto label_1419e4;
        }
    }
    ctx->pc = 0x1419A0u;
    // 0x1419a0: 0x200202d
    ctx->pc = 0x1419a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1419a4: 0x12103c
    ctx->pc = 0x1419a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1419a8: 0x2103f
    ctx->pc = 0x1419a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1419ac: 0x2405000a
    ctx->pc = 0x1419acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1419b0: 0xc04406c
    ctx->pc = 0x1419B0u;
    SET_GPR_U32(ctx, 31, 0x1419B8u);
    ctx->pc = 0x1419B4u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    ctx->pc = 0x1101B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001101B0_0x1101b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1419B8u; }
    }
    if (ctx->pc != 0x1419B8u) { return; }
    ctx->pc = 0x1419B8u;
    // 0x1419b8: 0x200202d
    ctx->pc = 0x1419b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1419bc: 0x304200ff
    ctx->pc = 0x1419bcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1419c0: 0x2405000a
    ctx->pc = 0x1419c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1419c4: 0xa2220000
    ctx->pc = 0x1419c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1419c8: 0xc043ec6
    ctx->pc = 0x1419C8u;
    SET_GPR_U32(ctx, 31, 0x1419D0u);
    ctx->pc = 0x1419CCu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 18) + (int64_t)1);
    ctx->pc = 0x10FB18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010FB18_0x10fb18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1419D0u; }
    }
    if (ctx->pc != 0x1419D0u) { return; }
    ctx->pc = 0x1419D0u;
    // 0x1419d0: 0x40802d
    ctx->pc = 0x1419d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1419d4: 0x1600fff0
    ctx->pc = 0x1419D4u;
    {
        const bool branch_taken_0x1419d4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1419D8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 32));
        if (branch_taken_0x1419d4) {
            ctx->pc = 0x141998u;
            goto label_141998;
        }
    }
    ctx->pc = 0x1419DCu;
    // 0x1419dc: 0xa2200000
    ctx->pc = 0x1419dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1419e0: 0x3c020026
    ctx->pc = 0x1419e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
label_1419e4:
    // 0x1419e4: 0x902d
    ctx->pc = 0x1419e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1419e8: 0x24504800
    ctx->pc = 0x1419e8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 18432));
    // 0x1419ec: 0xc042c56
    ctx->pc = 0x1419ECu;
    SET_GPR_U32(ctx, 31, 0x1419F4u);
    ctx->pc = 0x1419F0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1419F4u; }
    }
    if (ctx->pc != 0x1419F4u) { return; }
    ctx->pc = 0x1419F4u;
    // 0x1419f4: 0x6683ffff
    ctx->pc = 0x1419f4u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 20) + (int64_t)4294967295);
    // 0x1419f8: 0x2103c
    ctx->pc = 0x1419f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1419fc: 0x2283e
    ctx->pc = 0x1419fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x141a00: 0xa3102a
    ctx->pc = 0x141a00u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 3)));
    // 0x141a04: 0x62280a
    ctx->pc = 0x141a04u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
    // 0x141a08: 0x18a0000f
    ctx->pc = 0x141A08u;
    {
        const bool branch_taken_0x141a08 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x141a08) {
            ctx->pc = 0x141A48u;
            goto label_141a48;
        }
    }
    ctx->pc = 0x141A10u;
    // 0x141a10: 0x200382d
    ctx->pc = 0x141a10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141a14: 0x64a6ffff
    ctx->pc = 0x141a14u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 5) + (int64_t)4294967295);
label_141a18:
    // 0x141a18: 0x6103c
    ctx->pc = 0x141a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x141a1c: 0x2103f
    ctx->pc = 0x141a1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x141a20: 0x64c6ffff
    ctx->pc = 0x141a20u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)4294967295);
    // 0x141a24: 0x471021
    ctx->pc = 0x141a24u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x141a28: 0x12183c
    ctx->pc = 0x141a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x141a2c: 0x3183f
    ctx->pc = 0x141a2cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x141a30: 0x90440000
    ctx->pc = 0x141a30u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141a34: 0x66520001
    ctx->pc = 0x141a34u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 18) + (int64_t)1);
    // 0x141a38: 0x2631821
    ctx->pc = 0x141a38u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x141a3c: 0x245102a
    ctx->pc = 0x141a3cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 5)));
    // 0x141a40: 0x1440fff5
    ctx->pc = 0x141A40u;
    {
        const bool branch_taken_0x141a40 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x141A44u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        if (branch_taken_0x141a40) {
            ctx->pc = 0x141A18u;
            goto label_141a18;
        }
    }
    ctx->pc = 0x141A48u;
label_141a48:
    // 0x141a48: 0x12103c
    ctx->pc = 0x141a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x141a4c: 0x2103f
    ctx->pc = 0x141a4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x141a50: 0xdfb20010
    ctx->pc = 0x141a50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141a54: 0x2621021
    ctx->pc = 0x141a54u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x141a58: 0xdfb30018
    ctx->pc = 0x141a58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x141a5c: 0xdfb00000
    ctx->pc = 0x141a5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141a60: 0xdfb10008
    ctx->pc = 0x141a60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x141a64: 0xdfb40020
    ctx->pc = 0x141a64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x141a68: 0xdfbf0028
    ctx->pc = 0x141a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x141a6c: 0xa0400000
    ctx->pc = 0x141a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x141a70: 0x3e00008
    ctx->pc = 0x141A70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141A74u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x141968u: goto label_141968;
            case 0x141998u: goto label_141998;
            case 0x1419E4u: goto label_1419e4;
            case 0x141A18u: goto label_141a18;
            case 0x141A48u: goto label_141a48;
            case 0x141AACu: goto label_141aac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x141A78u;
    // 0x141a78: 0x27bdffe0
    ctx->pc = 0x141a78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x141a7c: 0xffb00000
    ctx->pc = 0x141a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x141a80: 0xe0802d
    ctx->pc = 0x141a80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141a84: 0xffb10008
    ctx->pc = 0x141a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x141a88: 0xc0882d
    ctx->pc = 0x141a88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141a8c: 0xffb20010
    ctx->pc = 0x141a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x141a90: 0xa0902d
    ctx->pc = 0x141a90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141a94: 0x200302d
    ctx->pc = 0x141a94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141a98: 0x10803c
    ctx->pc = 0x141a98u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x141a9c: 0x10803f
    ctx->pc = 0x141a9cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x141aa0: 0xffbf0018
    ctx->pc = 0x141aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x141aa4: 0xc05065a
    ctx->pc = 0x141AA4u;
    SET_GPR_U32(ctx, 31, 0x141AACu);
    ctx->pc = 0x141AA8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x141968u;
    goto label_141968;
    ctx->pc = 0x141AACu;
label_141aac:
    // 0x141aac: 0xc042c56
    ctx->pc = 0x141AACu;
    SET_GPR_U32(ctx, 31, 0x141AB4u);
    ctx->pc = 0x141AB0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141AB4u; }
    }
    if (ctx->pc != 0x141AB4u) { return; }
    ctx->pc = 0x141AB4u;
    // 0x141ab4: 0x3c050024
    ctx->pc = 0x141ab4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x141ab8: 0x2028023
    ctx->pc = 0x141ab8u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x141abc: 0x24a5dbf0
    ctx->pc = 0x141abcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294958064));
    // 0x141ac0: 0x2606ffff
    ctx->pc = 0x141ac0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x141ac4: 0xc042ca4
    ctx->pc = 0x141AC4u;
    SET_GPR_U32(ctx, 31, 0x141ACCu);
    ctx->pc = 0x141AC8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B290u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B290_0x10b290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141ACCu; }
    }
    if (ctx->pc != 0x141ACCu) { return; }
    ctx->pc = 0x141ACCu;
    // 0x141acc: 0xc042c56
    ctx->pc = 0x141ACCu;
    SET_GPR_U32(ctx, 31, 0x141AD4u);
    ctx->pc = 0x141AD0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141AD4u; }
    }
    if (ctx->pc != 0x141AD4u) { return; }
    ctx->pc = 0x141AD4u;
    // 0x141ad4: 0x220202d
    ctx->pc = 0x141ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141ad8: 0xc042c56
    ctx->pc = 0x141AD8u;
    SET_GPR_U32(ctx, 31, 0x141AE0u);
    ctx->pc = 0x141ADCu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141AE0u; }
    }
    if (ctx->pc != 0x141AE0u) { return; }
    ctx->pc = 0x141AE0u;
    // 0x141ae0: 0x24060004
    ctx->pc = 0x141ae0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x141ae4: 0xdfb00000
    ctx->pc = 0x141ae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141ae8: 0xc23023
    ctx->pc = 0x141ae8u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x141aec: 0x240202d
    ctx->pc = 0x141aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141af0: 0x220282d
    ctx->pc = 0x141af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141af4: 0xdfb10008
    ctx->pc = 0x141af4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x141af8: 0x6303c
    ctx->pc = 0x141af8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x141afc: 0xdfb20010
    ctx->pc = 0x141afcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141b00: 0xdfbf0018
    ctx->pc = 0x141b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x141b04: 0x6303e
    ctx->pc = 0x141b04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x141b08: 0x805065a
    ctx->pc = 0x141B08u;
    ctx->pc = 0x141B0Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x141968u;
    goto label_141968;
    ctx->pc = 0x141B10u;
}
