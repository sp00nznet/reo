#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00139A30
// Address: 0x139a30 - 0x139ea8
void sub_00139A30_0x139a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x139a30u;

label_139a30:
    // 0x139a30: 0x27bdfff0
    ctx->pc = 0x139a30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x139a34: 0x282d
    ctx->pc = 0x139a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139a38: 0xffbf0000
    ctx->pc = 0x139a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x139a3c: 0x24060048
    ctx->pc = 0x139a3cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 72));
    // 0x139a40: 0xdfbf0000
    ctx->pc = 0x139a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139a44: 0x8041f1a
    ctx->pc = 0x139A44u;
    ctx->pc = 0x139A48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x107C68u;
    sub_00107C68_0x107c68(rdram, ctx, runtime); return;
    ctx->pc = 0x139A4Cu;
    // 0x139a4c: 0x0
    ctx->pc = 0x139a4cu;
    // NOP
    // 0x139a50: 0x27bdffd0
    ctx->pc = 0x139a50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x139a54: 0xffb10008
    ctx->pc = 0x139a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x139a58: 0x80882d
    ctx->pc = 0x139a58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139a5c: 0xffb00000
    ctx->pc = 0x139a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x139a60: 0xffb20010
    ctx->pc = 0x139a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x139a64: 0xffb30018
    ctx->pc = 0x139a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x139a68: 0x16200005
    ctx->pc = 0x139A68u;
    {
        const bool branch_taken_0x139a68 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x139A6Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        if (branch_taken_0x139a68) {
            ctx->pc = 0x139A80u;
            goto label_139a80;
        }
    }
    ctx->pc = 0x139A70u;
    // 0x139a70: 0x3c050024
    ctx->pc = 0x139a70u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x139a74: 0x10000010
    ctx->pc = 0x139A74u;
    {
        const bool branch_taken_0x139a74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x139A78u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294953744));
        if (branch_taken_0x139a74) {
            ctx->pc = 0x139AB8u;
            goto label_139ab8;
        }
    }
    ctx->pc = 0x139A7Cu;
    // 0x139a7c: 0x0
    ctx->pc = 0x139a7cu;
    // NOP
label_139a80:
    // 0x139a80: 0x10c00005
    ctx->pc = 0x139A80u;
    {
        const bool branch_taken_0x139a80 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x139A84u;
        SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
        if (branch_taken_0x139a80) {
            ctx->pc = 0x139A98u;
            goto label_139a98;
        }
    }
    ctx->pc = 0x139A88u;
    // 0x139a88: 0x202d
    ctx->pc = 0x139a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139a8c: 0x1000000a
    ctx->pc = 0x139A8Cu;
    {
        const bool branch_taken_0x139a8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x139A90u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294953784));
        if (branch_taken_0x139a8c) {
            ctx->pc = 0x139AB8u;
            goto label_139ab8;
        }
    }
    ctx->pc = 0x139A94u;
    // 0x139a94: 0x0
    ctx->pc = 0x139a94u;
    // NOP
label_139a98:
    // 0x139a98: 0xc04e67e
    ctx->pc = 0x139A98u;
    SET_GPR_U32(ctx, 31, 0x139AA0u);
    ctx->pc = 0x1399F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001399F8_0x1399f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139AA0u; }
    }
    if (ctx->pc != 0x139AA0u) { return; }
    ctx->pc = 0x139AA0u;
    // 0x139aa0: 0x40802d
    ctx->pc = 0x139aa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139aa4: 0x16000008
    ctx->pc = 0x139AA4u;
    {
        const bool branch_taken_0x139aa4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x139AA8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 32));
        if (branch_taken_0x139aa4) {
            ctx->pc = 0x139AC8u;
            goto label_139ac8;
        }
    }
    ctx->pc = 0x139AACu;
    // 0x139aac: 0x3c050024
    ctx->pc = 0x139aacu;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x139ab0: 0x202d
    ctx->pc = 0x139ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139ab4: 0x24a5cb60
    ctx->pc = 0x139ab4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294953824));
label_139ab8:
    // 0x139ab8: 0xc04e57e
    ctx->pc = 0x139AB8u;
    SET_GPR_U32(ctx, 31, 0x139AC0u);
    ctx->pc = 0x1395F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001395F8_0x1395f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139AC0u; }
    }
    if (ctx->pc != 0x139AC0u) { return; }
    ctx->pc = 0x139AC0u;
    // 0x139ac0: 0x1000003d
    ctx->pc = 0x139AC0u;
    {
        const bool branch_taken_0x139ac0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x139AC4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x139ac0) {
            ctx->pc = 0x139BB8u;
            goto label_139bb8;
        }
    }
    ctx->pc = 0x139AC8u;
label_139ac8:
    // 0x139ac8: 0x220202d
    ctx->pc = 0x139ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139acc: 0xc04ea80
    ctx->pc = 0x139ACCu;
    SET_GPR_U32(ctx, 31, 0x139AD4u);
    ctx->pc = 0x139AD0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13AA00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013AA00_0x13aa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139AD4u; }
    }
    if (ctx->pc != 0x139AD4u) { return; }
    ctx->pc = 0x139AD4u;
    // 0x139ad4: 0x8e050024
    ctx->pc = 0x139ad4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x139ad8: 0x14a00023
    ctx->pc = 0x139AD8u;
    {
        const bool branch_taken_0x139ad8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x139ADCu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x139ad8) {
            ctx->pc = 0x139B68u;
            goto label_139b68;
        }
    }
    ctx->pc = 0x139AE0u;
    // 0x139ae0: 0x3c020022
    ctx->pc = 0x139ae0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x139ae4: 0x220202d
    ctx->pc = 0x139ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139ae8: 0x2451d7a0
    ctx->pc = 0x139ae8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294956960));
    // 0x139aec: 0xc04e892
    ctx->pc = 0x139AECu;
    SET_GPR_U32(ctx, 31, 0x139AF4u);
    ctx->pc = 0x139AF0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13A248u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A248_0x13a248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139AF4u; }
    }
    if (ctx->pc != 0x139AF4u) { return; }
    ctx->pc = 0x139AF4u;
    // 0x139af4: 0x3c020022
    ctx->pc = 0x139af4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x139af8: 0x8c44d8e8
    ctx->pc = 0x139af8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294957288)));
    // 0x139afc: 0x24030002
    ctx->pc = 0x139afcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x139b00: 0x10830004
    ctx->pc = 0x139B00u;
    {
        const bool branch_taken_0x139b00 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x139B04u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x139b00) {
            ctx->pc = 0x139B14u;
            goto label_139b14;
        }
    }
    ctx->pc = 0x139B08u;
    // 0x139b08: 0x3c040024
    ctx->pc = 0x139b08u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x139b0c: 0xc045a12
    ctx->pc = 0x139B0Cu;
    SET_GPR_U32(ctx, 31, 0x139B14u);
    ctx->pc = 0x139B10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953872));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139B14u; }
    }
    if (ctx->pc != 0x139B14u) { return; }
    ctx->pc = 0x139B14u;
label_139b14:
    // 0x139b14: 0xc04e082
    ctx->pc = 0x139B14u;
    SET_GPR_U32(ctx, 31, 0x139B1Cu);
    ctx->pc = 0x139B18u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 33536));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139B1Cu; }
    }
    if (ctx->pc != 0x139B1Cu) { return; }
    ctx->pc = 0x139B1Cu;
    // 0x139b1c: 0xc04035e
    ctx->pc = 0x139B1Cu;
    SET_GPR_U32(ctx, 31, 0x139B24u);
    ctx->pc = 0x139B20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x100D78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00100D78_0x100d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139B24u; }
    }
    if (ctx->pc != 0x139B24u) { return; }
    ctx->pc = 0x139B24u;
    // 0x139b24: 0xc04e082
    ctx->pc = 0x139B24u;
    SET_GPR_U32(ctx, 31, 0x139B2Cu);
    ctx->pc = 0x139B28u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 33537));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139B2Cu; }
    }
    if (ctx->pc != 0x139B2Cu) { return; }
    ctx->pc = 0x139B2Cu;
    // 0x139b2c: 0x240202d
    ctx->pc = 0x139b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139b30: 0xc04e58a
    ctx->pc = 0x139B30u;
    SET_GPR_U32(ctx, 31, 0x139B38u);
    ctx->pc = 0x139B34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x139628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00139628_0x139628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139B38u; }
    }
    if (ctx->pc != 0x139B38u) { return; }
    ctx->pc = 0x139B38u;
    // 0x139b38: 0x54400009
    ctx->pc = 0x139B38u;
    {
        const bool branch_taken_0x139b38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x139b38) {
            ctx->pc = 0x139B3Cu;
            WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x139B60u;
            goto label_139b60;
        }
    }
    ctx->pc = 0x139B40u;
    // 0x139b40: 0x3c050024
    ctx->pc = 0x139b40u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x139b44: 0x202d
    ctx->pc = 0x139b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139b48: 0xc04e57e
    ctx->pc = 0x139B48u;
    SET_GPR_U32(ctx, 31, 0x139B50u);
    ctx->pc = 0x139B4Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294953912));
    ctx->pc = 0x1395F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001395F8_0x1395f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139B50u; }
    }
    if (ctx->pc != 0x139B50u) { return; }
    ctx->pc = 0x139B50u;
    // 0x139b50: 0xc04e68c
    ctx->pc = 0x139B50u;
    SET_GPR_U32(ctx, 31, 0x139B58u);
    ctx->pc = 0x139B54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x139A30u;
    goto label_139a30;
    ctx->pc = 0x139B58u;
label_139b58:
    // 0x139b58: 0x10000017
    ctx->pc = 0x139B58u;
    {
        const bool branch_taken_0x139b58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x139B5Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x139b58) {
            ctx->pc = 0x139BB8u;
            goto label_139bb8;
        }
    }
    ctx->pc = 0x139B60u;
label_139b60:
    // 0x139b60: 0x10000003
    ctx->pc = 0x139B60u;
    {
        const bool branch_taken_0x139b60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x139B64u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 36)));
        if (branch_taken_0x139b60) {
            ctx->pc = 0x139B70u;
            goto label_139b70;
        }
    }
    ctx->pc = 0x139B68u;
label_139b68:
    // 0x139b68: 0x24020001
    ctx->pc = 0x139b68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x139b6c: 0xa2020001
    ctx->pc = 0x139b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_139b70:
    // 0x139b70: 0x24a207ff
    ctx->pc = 0x139b70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 2047));
    // 0x139b74: 0x24030001
    ctx->pc = 0x139b74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x139b78: 0x212c2
    ctx->pc = 0x139b78u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 11));
    // 0x139b7c: 0x24040001
    ctx->pc = 0x139b7cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x139b80: 0xae020008
    ctx->pc = 0x139b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x139b84: 0xa2030000
    ctx->pc = 0x139b84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x139b88: 0xae050004
    ctx->pc = 0x139b88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x139b8c: 0xae00000c
    ctx->pc = 0x139b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x139b90: 0xae000018
    ctx->pc = 0x139b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x139b94: 0xae000010
    ctx->pc = 0x139b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x139b98: 0xae000014
    ctx->pc = 0x139b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x139b9c: 0xa2000002
    ctx->pc = 0x139b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x139ba0: 0x16640004
    ctx->pc = 0x139BA0u;
    {
        const bool branch_taken_0x139ba0 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 4));
        ctx->pc = 0x139BA4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        if (branch_taken_0x139ba0) {
            ctx->pc = 0x139BB4u;
            goto label_139bb4;
        }
    }
    ctx->pc = 0x139BA8u;
    // 0x139ba8: 0x3c027fff
    ctx->pc = 0x139ba8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x139bac: 0x3442ffff
    ctx->pc = 0x139bacu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x139bb0: 0xae020008
    ctx->pc = 0x139bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_139bb4:
    // 0x139bb4: 0x200102d
    ctx->pc = 0x139bb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_139bb8:
    // 0x139bb8: 0xdfb00000
    ctx->pc = 0x139bb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139bbc: 0xdfb10008
    ctx->pc = 0x139bbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x139bc0: 0xdfb20010
    ctx->pc = 0x139bc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139bc4: 0xdfb30018
    ctx->pc = 0x139bc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x139bc8: 0xdfbf0020
    ctx->pc = 0x139bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139bcc: 0x3e00008
    ctx->pc = 0x139BCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139BD0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x139A30u: goto label_139a30;
            case 0x139A80u: goto label_139a80;
            case 0x139A98u: goto label_139a98;
            case 0x139AB8u: goto label_139ab8;
            case 0x139AC8u: goto label_139ac8;
            case 0x139B14u: goto label_139b14;
            case 0x139B58u: goto label_139b58;
            case 0x139B60u: goto label_139b60;
            case 0x139B68u: goto label_139b68;
            case 0x139B70u: goto label_139b70;
            case 0x139BB4u: goto label_139bb4;
            case 0x139BB8u: goto label_139bb8;
            case 0x139C08u: goto label_139c08;
            case 0x139C20u: goto label_139c20;
            case 0x139C58u: goto label_139c58;
            case 0x139C68u: goto label_139c68;
            case 0x139C80u: goto label_139c80;
            case 0x139C98u: goto label_139c98;
            case 0x139C9Cu: goto label_139c9c;
            case 0x139CB8u: goto label_139cb8;
            case 0x139CF0u: goto label_139cf0;
            case 0x139CF4u: goto label_139cf4;
            case 0x139D38u: goto label_139d38;
            case 0x139D48u: goto label_139d48;
            case 0x139D58u: goto label_139d58;
            case 0x139D68u: goto label_139d68;
            case 0x139D88u: goto label_139d88;
            case 0x139E28u: goto label_139e28;
            case 0x139E80u: goto label_139e80;
            case 0x139E84u: goto label_139e84;
            case 0x139E88u: goto label_139e88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x139BD4u;
    // 0x139bd4: 0x0
    ctx->pc = 0x139bd4u;
    // NOP
    // 0x139bd8: 0x27bdfff0
    ctx->pc = 0x139bd8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x139bdc: 0xffb00000
    ctx->pc = 0x139bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x139be0: 0x80802d
    ctx->pc = 0x139be0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139be4: 0x1200000e
    ctx->pc = 0x139BE4u;
    {
        const bool branch_taken_0x139be4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x139BE8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        if (branch_taken_0x139be4) {
            ctx->pc = 0x139C20u;
            goto label_139c20;
        }
    }
    ctx->pc = 0x139BECu;
    // 0x139bec: 0x92020002
    ctx->pc = 0x139becu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x139bf0: 0x2c420002
    ctx->pc = 0x139bf0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x139bf4: 0x54400004
    ctx->pc = 0x139BF4u;
    {
        const bool branch_taken_0x139bf4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x139bf4) {
            ctx->pc = 0x139BF8u;
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x139C08u;
            goto label_139c08;
        }
    }
    ctx->pc = 0x139BFCu;
    // 0x139bfc: 0xc04e7aa
    ctx->pc = 0x139BFCu;
    SET_GPR_U32(ctx, 31, 0x139C04u);
    ctx->pc = 0x139EA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00139EA8_0x139ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139C04u; }
    }
    if (ctx->pc != 0x139C04u) { return; }
    ctx->pc = 0x139C04u;
    // 0x139c04: 0xa2000000
    ctx->pc = 0x139c04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_139c08:
    // 0x139c08: 0x200202d
    ctx->pc = 0x139c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139c0c: 0xdfbf0008
    ctx->pc = 0x139c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x139c10: 0xdfb00000
    ctx->pc = 0x139c10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139c14: 0x804e68c
    ctx->pc = 0x139C14u;
    ctx->pc = 0x139C18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x139A30u;
    goto label_139a30;
    ctx->pc = 0x139C1Cu;
    // 0x139c1c: 0x0
    ctx->pc = 0x139c1cu;
    // NOP
label_139c20:
    // 0x139c20: 0xdfb00000
    ctx->pc = 0x139c20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139c24: 0xdfbf0008
    ctx->pc = 0x139c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x139c28: 0x3e00008
    ctx->pc = 0x139C28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139C2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x139A30u: goto label_139a30;
            case 0x139A80u: goto label_139a80;
            case 0x139A98u: goto label_139a98;
            case 0x139AB8u: goto label_139ab8;
            case 0x139AC8u: goto label_139ac8;
            case 0x139B14u: goto label_139b14;
            case 0x139B58u: goto label_139b58;
            case 0x139B60u: goto label_139b60;
            case 0x139B68u: goto label_139b68;
            case 0x139B70u: goto label_139b70;
            case 0x139BB4u: goto label_139bb4;
            case 0x139BB8u: goto label_139bb8;
            case 0x139C08u: goto label_139c08;
            case 0x139C20u: goto label_139c20;
            case 0x139C58u: goto label_139c58;
            case 0x139C68u: goto label_139c68;
            case 0x139C80u: goto label_139c80;
            case 0x139C98u: goto label_139c98;
            case 0x139C9Cu: goto label_139c9c;
            case 0x139CB8u: goto label_139cb8;
            case 0x139CF0u: goto label_139cf0;
            case 0x139CF4u: goto label_139cf4;
            case 0x139D38u: goto label_139d38;
            case 0x139D48u: goto label_139d48;
            case 0x139D58u: goto label_139d58;
            case 0x139D68u: goto label_139d68;
            case 0x139D88u: goto label_139d88;
            case 0x139E28u: goto label_139e28;
            case 0x139E80u: goto label_139e80;
            case 0x139E84u: goto label_139e84;
            case 0x139E88u: goto label_139e88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x139C30u;
    // 0x139c30: 0x27bdfff0
    ctx->pc = 0x139c30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x139c34: 0x80382d
    ctx->pc = 0x139c34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139c38: 0x14e00007
    ctx->pc = 0x139C38u;
    {
        const bool branch_taken_0x139c38 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x139C3Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x139c38) {
            ctx->pc = 0x139C58u;
            goto label_139c58;
        }
    }
    ctx->pc = 0x139C40u;
    // 0x139c40: 0x3c050024
    ctx->pc = 0x139c40u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x139c44: 0xc04e57e
    ctx->pc = 0x139C44u;
    SET_GPR_U32(ctx, 31, 0x139C4Cu);
    ctx->pc = 0x139C48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294953960));
    ctx->pc = 0x1395F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001395F8_0x1395f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139C4Cu; }
    }
    if (ctx->pc != 0x139C4Cu) { return; }
    ctx->pc = 0x139C4Cu;
    // 0x139c4c: 0x1000001a
    ctx->pc = 0x139C4Cu;
    {
        const bool branch_taken_0x139c4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x139C50u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x139c4c) {
            ctx->pc = 0x139CB8u;
            goto label_139cb8;
        }
    }
    ctx->pc = 0x139C54u;
    // 0x139c54: 0x0
    ctx->pc = 0x139c54u;
    // NOP
label_139c58:
    // 0x139c58: 0x14c00003
    ctx->pc = 0x139C58u;
    {
        const bool branch_taken_0x139c58 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x139C5Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x139c58) {
            ctx->pc = 0x139C68u;
            goto label_139c68;
        }
    }
    ctx->pc = 0x139C60u;
    // 0x139c60: 0x1000000d
    ctx->pc = 0x139C60u;
    {
        const bool branch_taken_0x139c60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x139C64u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 5));
        if (branch_taken_0x139c60) {
            ctx->pc = 0x139C98u;
            goto label_139c98;
        }
    }
    ctx->pc = 0x139C68u;
label_139c68:
    // 0x139c68: 0x14c20005
    ctx->pc = 0x139C68u;
    {
        const bool branch_taken_0x139c68 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        ctx->pc = 0x139C6Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x139c68) {
            ctx->pc = 0x139C80u;
            goto label_139c80;
        }
    }
    ctx->pc = 0x139C70u;
    // 0x139c70: 0x8ce40008
    ctx->pc = 0x139c70u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x139c74: 0x851021
    ctx->pc = 0x139c74u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x139c78: 0x10000008
    ctx->pc = 0x139C78u;
    {
        const bool branch_taken_0x139c78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x139C7Cu;
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x139c78) {
            ctx->pc = 0x139C9Cu;
            goto label_139c9c;
        }
    }
    ctx->pc = 0x139C80u;
label_139c80:
    // 0x139c80: 0x14c20006
    ctx->pc = 0x139C80u;
    {
        const bool branch_taken_0x139c80 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        ctx->pc = 0x139C84u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 8)));
        if (branch_taken_0x139c80) {
            ctx->pc = 0x139C9Cu;
            goto label_139c9c;
        }
    }
    ctx->pc = 0x139C88u;
    // 0x139c88: 0x8ce2000c
    ctx->pc = 0x139c88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x139c8c: 0x451021
    ctx->pc = 0x139c8cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x139c90: 0x10000002
    ctx->pc = 0x139C90u;
    {
        const bool branch_taken_0x139c90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x139C94u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x139c90) {
            ctx->pc = 0x139C9Cu;
            goto label_139c9c;
        }
    }
    ctx->pc = 0x139C98u;
label_139c98:
    // 0x139c98: 0x8ce40008
    ctx->pc = 0x139c98u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_139c9c:
    // 0x139c9c: 0x8ce2000c
    ctx->pc = 0x139c9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x139ca0: 0xace00014
    ctx->pc = 0x139ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 0));
    // 0x139ca4: 0x44182a
    ctx->pc = 0x139ca4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x139ca8: 0x83100a
    ctx->pc = 0x139ca8u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x139cac: 0x28440000
    ctx->pc = 0x139cacu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 0));
    // 0x139cb0: 0x4100b
    ctx->pc = 0x139cb0u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
    // 0x139cb4: 0xace2000c
    ctx->pc = 0x139cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_139cb8:
    // 0x139cb8: 0xdfbf0000
    ctx->pc = 0x139cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139cbc: 0x3e00008
    ctx->pc = 0x139CBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139CC0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x139A30u: goto label_139a30;
            case 0x139A80u: goto label_139a80;
            case 0x139A98u: goto label_139a98;
            case 0x139AB8u: goto label_139ab8;
            case 0x139AC8u: goto label_139ac8;
            case 0x139B14u: goto label_139b14;
            case 0x139B58u: goto label_139b58;
            case 0x139B60u: goto label_139b60;
            case 0x139B68u: goto label_139b68;
            case 0x139B70u: goto label_139b70;
            case 0x139BB4u: goto label_139bb4;
            case 0x139BB8u: goto label_139bb8;
            case 0x139C08u: goto label_139c08;
            case 0x139C20u: goto label_139c20;
            case 0x139C58u: goto label_139c58;
            case 0x139C68u: goto label_139c68;
            case 0x139C80u: goto label_139c80;
            case 0x139C98u: goto label_139c98;
            case 0x139C9Cu: goto label_139c9c;
            case 0x139CB8u: goto label_139cb8;
            case 0x139CF0u: goto label_139cf0;
            case 0x139CF4u: goto label_139cf4;
            case 0x139D38u: goto label_139d38;
            case 0x139D48u: goto label_139d48;
            case 0x139D58u: goto label_139d58;
            case 0x139D68u: goto label_139d68;
            case 0x139D88u: goto label_139d88;
            case 0x139E28u: goto label_139e28;
            case 0x139E80u: goto label_139e80;
            case 0x139E84u: goto label_139e84;
            case 0x139E88u: goto label_139e88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x139CC4u;
    // 0x139cc4: 0x0
    ctx->pc = 0x139cc4u;
    // NOP
    // 0x139cc8: 0x27bdfff0
    ctx->pc = 0x139cc8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x139ccc: 0x80102d
    ctx->pc = 0x139cccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139cd0: 0x14400007
    ctx->pc = 0x139CD0u;
    {
        const bool branch_taken_0x139cd0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x139CD4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x139cd0) {
            ctx->pc = 0x139CF0u;
            goto label_139cf0;
        }
    }
    ctx->pc = 0x139CD8u;
    // 0x139cd8: 0x3c050024
    ctx->pc = 0x139cd8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x139cdc: 0xc04e57e
    ctx->pc = 0x139CDCu;
    SET_GPR_U32(ctx, 31, 0x139CE4u);
    ctx->pc = 0x139CE0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294953960));
    ctx->pc = 0x1395F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001395F8_0x1395f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139CE4u; }
    }
    if (ctx->pc != 0x139CE4u) { return; }
    ctx->pc = 0x139CE4u;
    // 0x139ce4: 0x10000003
    ctx->pc = 0x139CE4u;
    {
        const bool branch_taken_0x139ce4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x139CE8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x139ce4) {
            ctx->pc = 0x139CF4u;
            goto label_139cf4;
        }
    }
    ctx->pc = 0x139CECu;
    // 0x139cec: 0x0
    ctx->pc = 0x139cecu;
    // NOP
label_139cf0:
    // 0x139cf0: 0x8c42000c
    ctx->pc = 0x139cf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_139cf4:
    // 0x139cf4: 0xdfbf0000
    ctx->pc = 0x139cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139cf8: 0x3e00008
    ctx->pc = 0x139CF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139CFCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x139A30u: goto label_139a30;
            case 0x139A80u: goto label_139a80;
            case 0x139A98u: goto label_139a98;
            case 0x139AB8u: goto label_139ab8;
            case 0x139AC8u: goto label_139ac8;
            case 0x139B14u: goto label_139b14;
            case 0x139B58u: goto label_139b58;
            case 0x139B60u: goto label_139b60;
            case 0x139B68u: goto label_139b68;
            case 0x139B70u: goto label_139b70;
            case 0x139BB4u: goto label_139bb4;
            case 0x139BB8u: goto label_139bb8;
            case 0x139C08u: goto label_139c08;
            case 0x139C20u: goto label_139c20;
            case 0x139C58u: goto label_139c58;
            case 0x139C68u: goto label_139c68;
            case 0x139C80u: goto label_139c80;
            case 0x139C98u: goto label_139c98;
            case 0x139C9Cu: goto label_139c9c;
            case 0x139CB8u: goto label_139cb8;
            case 0x139CF0u: goto label_139cf0;
            case 0x139CF4u: goto label_139cf4;
            case 0x139D38u: goto label_139d38;
            case 0x139D48u: goto label_139d48;
            case 0x139D58u: goto label_139d58;
            case 0x139D68u: goto label_139d68;
            case 0x139D88u: goto label_139d88;
            case 0x139E28u: goto label_139e28;
            case 0x139E80u: goto label_139e80;
            case 0x139E84u: goto label_139e84;
            case 0x139E88u: goto label_139e88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x139D00u;
    // 0x139d00: 0x27bdffd0
    ctx->pc = 0x139d00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x139d04: 0xffb00000
    ctx->pc = 0x139d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x139d08: 0x80802d
    ctx->pc = 0x139d08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139d0c: 0xffb10008
    ctx->pc = 0x139d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x139d10: 0xc0882d
    ctx->pc = 0x139d10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139d14: 0xffb20010
    ctx->pc = 0x139d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x139d18: 0xa0902d
    ctx->pc = 0x139d18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139d1c: 0xffb30018
    ctx->pc = 0x139d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x139d20: 0x16000005
    ctx->pc = 0x139D20u;
    {
        const bool branch_taken_0x139d20 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x139D24u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        if (branch_taken_0x139d20) {
            ctx->pc = 0x139D38u;
            goto label_139d38;
        }
    }
    ctx->pc = 0x139D28u;
    // 0x139d28: 0x3c050024
    ctx->pc = 0x139d28u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x139d2c: 0x1000000a
    ctx->pc = 0x139D2Cu;
    {
        const bool branch_taken_0x139d2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x139D30u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294953960));
        if (branch_taken_0x139d2c) {
            ctx->pc = 0x139D58u;
            goto label_139d58;
        }
    }
    ctx->pc = 0x139D34u;
    // 0x139d34: 0x0
    ctx->pc = 0x139d34u;
    // NOP
label_139d38:
    // 0x139d38: 0x6410003
    ctx->pc = 0x139D38u;
    {
        const bool branch_taken_0x139d38 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x139D3Cu;
        SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
        if (branch_taken_0x139d38) {
            ctx->pc = 0x139D48u;
            goto label_139d48;
        }
    }
    ctx->pc = 0x139D40u;
    // 0x139d40: 0x10000005
    ctx->pc = 0x139D40u;
    {
        const bool branch_taken_0x139d40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x139D44u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294953984));
        if (branch_taken_0x139d40) {
            ctx->pc = 0x139D58u;
            goto label_139d58;
        }
    }
    ctx->pc = 0x139D48u;
label_139d48:
    // 0x139d48: 0x56200007
    ctx->pc = 0x139D48u;
    {
        const bool branch_taken_0x139d48 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x139d48) {
            ctx->pc = 0x139D4Cu;
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->pc = 0x139D68u;
            goto label_139d68;
        }
    }
    ctx->pc = 0x139D50u;
    // 0x139d50: 0x3c050024
    ctx->pc = 0x139d50u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x139d54: 0x24a5cc20
    ctx->pc = 0x139d54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294954016));
label_139d58:
    // 0x139d58: 0xc04e57e
    ctx->pc = 0x139D58u;
    SET_GPR_U32(ctx, 31, 0x139D60u);
    ctx->pc = 0x1395F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001395F8_0x1395f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139D60u; }
    }
    if (ctx->pc != 0x139D60u) { return; }
    ctx->pc = 0x139D60u;
    // 0x139d60: 0x10000049
    ctx->pc = 0x139D60u;
    {
        const bool branch_taken_0x139d60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x139D64u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x139d60) {
            ctx->pc = 0x139E88u;
            goto label_139e88;
        }
    }
    ctx->pc = 0x139D68u;
label_139d68:
    // 0x139d68: 0x24130002
    ctx->pc = 0x139d68u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 2));
    // 0x139d6c: 0x10730046
    ctx->pc = 0x139D6Cu;
    {
        const bool branch_taken_0x139d6c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 19));
        ctx->pc = 0x139D70u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x139d6c) {
            ctx->pc = 0x139E88u;
            goto label_139e88;
        }
    }
    ctx->pc = 0x139D74u;
    // 0x139d74: 0x16400004
    ctx->pc = 0x139D74u;
    {
        const bool branch_taken_0x139d74 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x139D78u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x139d74) {
            ctx->pc = 0x139D88u;
            goto label_139d88;
        }
    }
    ctx->pc = 0x139D7Cu;
    // 0x139d7c: 0x10000042
    ctx->pc = 0x139D7Cu;
    {
        const bool branch_taken_0x139d7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x139D80u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x139d7c) {
            ctx->pc = 0x139E88u;
            goto label_139e88;
        }
    }
    ctx->pc = 0x139D84u;
    // 0x139d84: 0x0
    ctx->pc = 0x139d84u;
    // NOP
label_139d88:
    // 0x139d88: 0xc04dcd0
    ctx->pc = 0x139D88u;
    SET_GPR_U32(ctx, 31, 0x139D90u);
    ctx->pc = 0x137340u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00137340_0x137340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139D90u; }
    }
    if (ctx->pc != 0x139D90u) { return; }
    ctx->pc = 0x139D90u;
    // 0x139d90: 0x40182d
    ctx->pc = 0x139d90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139d94: 0x1060003c
    ctx->pc = 0x139D94u;
    {
        const bool branch_taken_0x139d94 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x139D98u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        if (branch_taken_0x139d94) {
            ctx->pc = 0x139E88u;
            goto label_139e88;
        }
    }
    ctx->pc = 0x139D9Cu;
    // 0x139d9c: 0x3c060022
    ctx->pc = 0x139d9cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)34 << 16));
    // 0x139da0: 0x8e02000c
    ctx->pc = 0x139da0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x139da4: 0x24c6d8e0
    ctx->pc = 0x139da4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294957280));
    // 0x139da8: 0x8e030008
    ctx->pc = 0x139da8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x139dac: 0x90c50000
    ctx->pc = 0x139dacu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x139db0: 0x240382d
    ctx->pc = 0x139db0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139db4: 0x621823
    ctx->pc = 0x139db4u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x139db8: 0x220202d
    ctx->pc = 0x139db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139dbc: 0xa2050044
    ctx->pc = 0x139dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 5));
    // 0x139dc0: 0x243102a
    ctx->pc = 0x139dc0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 3)));
    // 0x139dc4: 0x62380a
    ctx->pc = 0x139dc4u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 3));
    // 0x139dc8: 0x90c80001
    ctx->pc = 0x139dc8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x139dcc: 0x72ac0
    ctx->pc = 0x139dccu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 7), 11));
    // 0x139dd0: 0x2252821
    ctx->pc = 0x139dd0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x139dd4: 0xa2080045
    ctx->pc = 0x139dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 8));
    // 0x139dd8: 0x24a5ffff
    ctx->pc = 0x139dd8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x139ddc: 0x90c20002
    ctx->pc = 0x139ddcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x139de0: 0xae070010
    ctx->pc = 0x139de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    // 0x139de4: 0xa2020046
    ctx->pc = 0x139de4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 70), (uint8_t)GPR_U32(ctx, 2));
    // 0x139de8: 0xc045416
    ctx->pc = 0x139DE8u;
    SET_GPR_U32(ctx, 31, 0x139DF0u);
    ctx->pc = 0x139DECu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
    ctx->pc = 0x115058u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00115058_0x115058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139DF0u; }
    }
    if (ctx->pc != 0x139DF0u) { return; }
    ctx->pc = 0x139DF0u;
    // 0x139df0: 0x8e020020
    ctx->pc = 0x139df0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x139df4: 0x8e05000c
    ctx->pc = 0x139df4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x139df8: 0x26080044
    ctx->pc = 0x139df8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 68));
    // 0x139dfc: 0x8e04001c
    ctx->pc = 0x139dfcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x139e00: 0x8e060010
    ctx->pc = 0x139e00u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x139e04: 0x452821
    ctx->pc = 0x139e04u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x139e08: 0xc04dd1a
    ctx->pc = 0x139E08u;
    SET_GPR_U32(ctx, 31, 0x139E10u);
    ctx->pc = 0x139E0Cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->pc = 0x137468u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00137468_0x137468(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139E10u; }
    }
    if (ctx->pc != 0x139E10u) { return; }
    ctx->pc = 0x139E10u;
    // 0x139e10: 0x54400005
    ctx->pc = 0x139E10u;
    {
        const bool branch_taken_0x139e10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x139e10) {
            ctx->pc = 0x139E14u;
            SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
            ctx->pc = 0x139E28u;
            goto label_139e28;
        }
    }
    ctx->pc = 0x139E18u;
    // 0x139e18: 0xc04dcf2
    ctx->pc = 0x139E18u;
    SET_GPR_U32(ctx, 31, 0x139E20u);
    ctx->pc = 0x139E1Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->pc = 0x1373C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001373C8_0x1373c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139E20u; }
    }
    if (ctx->pc != 0x139E20u) { return; }
    ctx->pc = 0x139E20u;
    // 0x139e20: 0x10000019
    ctx->pc = 0x139E20u;
    {
        const bool branch_taken_0x139e20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x139E24u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x139e20) {
            ctx->pc = 0x139E88u;
            goto label_139e88;
        }
    }
    ctx->pc = 0x139E28u;
label_139e28:
    // 0x139e28: 0x24030001
    ctx->pc = 0x139e28u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x139e2c: 0x8c51d8e4
    ctx->pc = 0x139e2cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 4294957284)));
    // 0x139e30: 0x56230013
    ctx->pc = 0x139E30u;
    {
        const bool branch_taken_0x139e30 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 3));
        if (branch_taken_0x139e30) {
            ctx->pc = 0x139E34u;
            WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 19));
            ctx->pc = 0x139E80u;
            goto label_139e80;
        }
    }
    ctx->pc = 0x139E38u;
    // 0x139e38: 0xc04035e
    ctx->pc = 0x139E38u;
    SET_GPR_U32(ctx, 31, 0x139E40u);
    ctx->pc = 0x139E3Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x100D78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00100D78_0x100d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139E40u; }
    }
    if (ctx->pc != 0x139E40u) { return; }
    ctx->pc = 0x139E40u;
    // 0x139e40: 0xc04dfa4
    ctx->pc = 0x139E40u;
    SET_GPR_U32(ctx, 31, 0x139E48u);
    ctx->pc = 0x137E90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00137E90_0x137e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139E48u; }
    }
    if (ctx->pc != 0x139E48u) { return; }
    ctx->pc = 0x139E48u;
    // 0x139e48: 0xc04df60
    ctx->pc = 0x139E48u;
    SET_GPR_U32(ctx, 31, 0x139E50u);
    ctx->pc = 0x137D80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00137D80_0x137d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139E50u; }
    }
    if (ctx->pc != 0x139E50u) { return; }
    ctx->pc = 0x139E50u;
    // 0x139e50: 0xc04ddce
    ctx->pc = 0x139E50u;
    SET_GPR_U32(ctx, 31, 0x139E58u);
    ctx->pc = 0x139E54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->pc = 0x137738u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00137738_0x137738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139E58u; }
    }
    if (ctx->pc != 0x139E58u) { return; }
    ctx->pc = 0x139E58u;
    // 0x139e58: 0xc04dcf2
    ctx->pc = 0x139E58u;
    SET_GPR_U32(ctx, 31, 0x139E60u);
    ctx->pc = 0x139E5Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->pc = 0x1373C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001373C8_0x1373c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139E60u; }
    }
    if (ctx->pc != 0x139E60u) { return; }
    ctx->pc = 0x139E60u;
    // 0x139e60: 0xae00001c
    ctx->pc = 0x139e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x139e64: 0x8e02000c
    ctx->pc = 0x139e64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x139e68: 0x8e030010
    ctx->pc = 0x139e68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x139e6c: 0xae120014
    ctx->pc = 0x139e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 18));
    // 0x139e70: 0x431021
    ctx->pc = 0x139e70u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x139e74: 0xa2110002
    ctx->pc = 0x139e74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 17));
    // 0x139e78: 0x10000002
    ctx->pc = 0x139E78u;
    {
        const bool branch_taken_0x139e78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x139E7Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x139e78) {
            ctx->pc = 0x139E84u;
            goto label_139e84;
        }
    }
    ctx->pc = 0x139E80u;
label_139e80:
    // 0x139e80: 0x8e030010
    ctx->pc = 0x139e80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_139e84:
    // 0x139e84: 0x60102d
    ctx->pc = 0x139e84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_139e88:
    // 0x139e88: 0xdfb00000
    ctx->pc = 0x139e88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139e8c: 0xdfb10008
    ctx->pc = 0x139e8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x139e90: 0xdfb20010
    ctx->pc = 0x139e90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139e94: 0xdfb30018
    ctx->pc = 0x139e94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x139e98: 0xdfbf0020
    ctx->pc = 0x139e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139e9c: 0x3e00008
    ctx->pc = 0x139E9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139EA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x139A30u: goto label_139a30;
            case 0x139A80u: goto label_139a80;
            case 0x139A98u: goto label_139a98;
            case 0x139AB8u: goto label_139ab8;
            case 0x139AC8u: goto label_139ac8;
            case 0x139B14u: goto label_139b14;
            case 0x139B58u: goto label_139b58;
            case 0x139B60u: goto label_139b60;
            case 0x139B68u: goto label_139b68;
            case 0x139B70u: goto label_139b70;
            case 0x139BB4u: goto label_139bb4;
            case 0x139BB8u: goto label_139bb8;
            case 0x139C08u: goto label_139c08;
            case 0x139C20u: goto label_139c20;
            case 0x139C58u: goto label_139c58;
            case 0x139C68u: goto label_139c68;
            case 0x139C80u: goto label_139c80;
            case 0x139C98u: goto label_139c98;
            case 0x139C9Cu: goto label_139c9c;
            case 0x139CB8u: goto label_139cb8;
            case 0x139CF0u: goto label_139cf0;
            case 0x139CF4u: goto label_139cf4;
            case 0x139D38u: goto label_139d38;
            case 0x139D48u: goto label_139d48;
            case 0x139D58u: goto label_139d58;
            case 0x139D68u: goto label_139d68;
            case 0x139D88u: goto label_139d88;
            case 0x139E28u: goto label_139e28;
            case 0x139E80u: goto label_139e80;
            case 0x139E84u: goto label_139e84;
            case 0x139E88u: goto label_139e88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x139EA4u;
    // 0x139ea4: 0x0
    ctx->pc = 0x139ea4u;
    // NOP
}
