#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00115A10
// Address: 0x115a10 - 0x115be8
void sub_00115A10_0x115a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x115a10u;

    // 0x115a10: 0x80282d
    ctx->pc = 0x115a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115a14: 0x8ca20004
    ctx->pc = 0x115a14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x115a18: 0x8ca40008
    ctx->pc = 0x115a18u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x115a1c: 0x8ca30000
    ctx->pc = 0x115a1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x115a20: 0x2442ffff
    ctx->pc = 0x115a20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x115a24: 0x24840001
    ctx->pc = 0x115a24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x115a28: 0xaca20004
    ctx->pc = 0x115a28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x115a2c: 0x24630010
    ctx->pc = 0x115a2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
    // 0x115a30: 0xa31821
    ctx->pc = 0x115a30u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x115a34: 0x14830003
    ctx->pc = 0x115A34u;
    {
        const bool branch_taken_0x115a34 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x115A38u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
        if (branch_taken_0x115a34) {
            ctx->pc = 0x115A44u;
            goto label_115a44;
        }
    }
    ctx->pc = 0x115A3Cu;
    // 0x115a3c: 0x24a20010
    ctx->pc = 0x115a3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 16));
    // 0x115a40: 0xaca20008
    ctx->pc = 0x115a40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_115a44:
    // 0x115a44: 0x3e00008
    ctx->pc = 0x115A44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x115A44u: goto label_115a44;
            case 0x115A90u: goto label_115a90;
            case 0x115ABCu: goto label_115abc;
            case 0x115AECu: goto label_115aec;
            case 0x115B00u: goto label_115b00;
            case 0x115B20u: goto label_115b20;
            case 0x115B24u: goto label_115b24;
            case 0x115B50u: goto label_115b50;
            case 0x115B5Cu: goto label_115b5c;
            case 0x115B90u: goto label_115b90;
            case 0x115BACu: goto label_115bac;
            case 0x115BC8u: goto label_115bc8;
            case 0x115BD0u: goto label_115bd0;
            case 0x115BD4u: goto label_115bd4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x115A4Cu;
    // 0x115a4c: 0x0
    ctx->pc = 0x115a4cu;
    // NOP
    // 0x115a50: 0x27bdffc0
    ctx->pc = 0x115a50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x115a54: 0x24020003
    ctx->pc = 0x115a54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x115a58: 0xffb10010
    ctx->pc = 0x115a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x115a5c: 0xffb00000
    ctx->pc = 0x115a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x115a60: 0xc0882d
    ctx->pc = 0x115a60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115a64: 0xffbf0030
    ctx->pc = 0x115a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x115a68: 0xa0802d
    ctx->pc = 0x115a68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115a6c: 0x1082003b
    ctx->pc = 0x115A6Cu;
    {
        const bool branch_taken_0x115a6c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x115A70u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        if (branch_taken_0x115a6c) {
            ctx->pc = 0x115B5Cu;
            goto label_115b5c;
        }
    }
    ctx->pc = 0x115A74u;
    // 0x115a74: 0x28820004
    ctx->pc = 0x115a74u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 4));
    // 0x115a78: 0x14400005
    ctx->pc = 0x115A78u;
    {
        const bool branch_taken_0x115a78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x115A7Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x115a78) {
            ctx->pc = 0x115A90u;
            goto label_115a90;
        }
    }
    ctx->pc = 0x115A80u;
    // 0x115a80: 0x1082004a
    ctx->pc = 0x115A80u;
    {
        const bool branch_taken_0x115a80 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x115A84u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x115a80) {
            ctx->pc = 0x115BACu;
            goto label_115bac;
        }
    }
    ctx->pc = 0x115A88u;
    // 0x115a88: 0x10000052
    ctx->pc = 0x115A88u;
    {
        const bool branch_taken_0x115a88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x115A8Cu;
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x115a88) {
            ctx->pc = 0x115BD4u;
            goto label_115bd4;
        }
    }
    ctx->pc = 0x115A90u;
label_115a90:
    // 0x115a90: 0x1880004f
    ctx->pc = 0x115A90u;
    {
        const bool branch_taken_0x115a90 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x115A94u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x115a90) {
            ctx->pc = 0x115BD0u;
            goto label_115bd0;
        }
    }
    ctx->pc = 0x115A98u;
    // 0x115a98: 0x52000019
    ctx->pc = 0x115A98u;
    {
        const bool branch_taken_0x115a98 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x115a98) {
            ctx->pc = 0x115A9Cu;
            SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->pc = 0x115B00u;
            goto label_115b00;
        }
    }
    ctx->pc = 0x115AA0u;
    // 0x115aa0: 0x8e220008
    ctx->pc = 0x115aa0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x115aa4: 0x501021
    ctx->pc = 0x115aa4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x115aa8: 0x2c420141
    ctx->pc = 0x115aa8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 321));
    // 0x115aac: 0x14400003
    ctx->pc = 0x115AACu;
    {
        const bool branch_taken_0x115aac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x115AB0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x115aac) {
            ctx->pc = 0x115ABCu;
            goto label_115abc;
        }
    }
    ctx->pc = 0x115AB4u;
    // 0x115ab4: 0xc045a04
    ctx->pc = 0x115AB4u;
    SET_GPR_U32(ctx, 31, 0x115ABCu);
    ctx->pc = 0x115AB8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936912));
    ctx->pc = 0x116810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116810_0x116810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115ABCu; }
    }
    if (ctx->pc != 0x115ABCu) { return; }
    ctx->pc = 0x115ABCu;
label_115abc:
    // 0x115abc: 0x8e220008
    ctx->pc = 0x115abcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x115ac0: 0x3206ffff
    ctx->pc = 0x115ac0u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 16), 65535));
    // 0x115ac4: 0x8e250014
    ctx->pc = 0x115ac4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x115ac8: 0x8e240000
    ctx->pc = 0x115ac8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x115acc: 0xc045624
    ctx->pc = 0x115ACCu;
    SET_GPR_U32(ctx, 31, 0x115AD4u);
    ctx->pc = 0x115AD0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->pc = 0x115890u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00115890_0x115890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115AD4u; }
    }
    if (ctx->pc != 0x115AD4u) { return; }
    ctx->pc = 0x115AD4u;
    // 0x115ad4: 0x40802d
    ctx->pc = 0x115ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115ad8: 0x6010004
    ctx->pc = 0x115AD8u;
    {
        const bool branch_taken_0x115ad8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x115ad8) {
            ctx->pc = 0x115AECu;
            goto label_115aec;
        }
    }
    ctx->pc = 0x115AE0u;
    // 0x115ae0: 0x3c040024
    ctx->pc = 0x115ae0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x115ae4: 0xc045a04
    ctx->pc = 0x115AE4u;
    SET_GPR_U32(ctx, 31, 0x115AECu);
    ctx->pc = 0x115AE8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936952));
    ctx->pc = 0x116810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116810_0x116810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115AECu; }
    }
    if (ctx->pc != 0x115AECu) { return; }
    ctx->pc = 0x115AECu;
label_115aec:
    // 0x115aec: 0x8e220008
    ctx->pc = 0x115aecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x115af0: 0x501021
    ctx->pc = 0x115af0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x115af4: 0xae220008
    ctx->pc = 0x115af4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x115af8: 0x10000035
    ctx->pc = 0x115AF8u;
    {
        const bool branch_taken_0x115af8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x115AFCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x115af8) {
            ctx->pc = 0x115BD0u;
            goto label_115bd0;
        }
    }
    ctx->pc = 0x115B00u;
label_115b00:
    // 0x115b00: 0x2410000c
    ctx->pc = 0x115b00u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 12));
    // 0x115b04: 0x96420000
    ctx->pc = 0x115b04u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x115b08: 0x202102a
    ctx->pc = 0x115b08u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x115b0c: 0x10400010
    ctx->pc = 0x115B0Cu;
    {
        const bool branch_taken_0x115b0c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x115B10u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x115b0c) {
            ctx->pc = 0x115B50u;
            goto label_115b50;
        }
    }
    ctx->pc = 0x115B14u;
    // 0x115b14: 0x10000003
    ctx->pc = 0x115B14u;
    {
        const bool branch_taken_0x115b14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x115B18u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 24)));
        if (branch_taken_0x115b14) {
            ctx->pc = 0x115B24u;
            goto label_115b24;
        }
    }
    ctx->pc = 0x115B1Cu;
    // 0x115b1c: 0x0
    ctx->pc = 0x115b1cu;
    // NOP
label_115b20:
    // 0x115b20: 0x8e240018
    ctx->pc = 0x115b20u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_115b24:
    // 0x115b24: 0x701021
    ctx->pc = 0x115b24u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x115b28: 0x90430000
    ctx->pc = 0x115b28u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x115b2c: 0x26100001
    ctx->pc = 0x115b2cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x115b30: 0x8c82000c
    ctx->pc = 0x115b30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x115b34: 0xa0430000
    ctx->pc = 0x115b34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x115b38: 0xc045674
    ctx->pc = 0x115B38u;
    SET_GPR_U32(ctx, 31, 0x115B40u);
    ctx->pc = 0x115B3Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->pc = 0x1159D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001159D0_0x1159d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115B40u; }
    }
    if (ctx->pc != 0x115B40u) { return; }
    ctx->pc = 0x115B40u;
    // 0x115b40: 0x96420000
    ctx->pc = 0x115b40u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x115b44: 0x202102a
    ctx->pc = 0x115b44u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x115b48: 0x5440fff5
    ctx->pc = 0x115B48u;
    {
        const bool branch_taken_0x115b48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x115b48) {
            ctx->pc = 0x115B4Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->pc = 0x115B20u;
            goto label_115b20;
        }
    }
    ctx->pc = 0x115B50u;
label_115b50:
    // 0x115b50: 0xae200008
    ctx->pc = 0x115b50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x115b54: 0x1000001e
    ctx->pc = 0x115B54u;
    {
        const bool branch_taken_0x115b54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x115B58u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x115b54) {
            ctx->pc = 0x115BD0u;
            goto label_115bd0;
        }
    }
    ctx->pc = 0x115B5Cu;
label_115b5c:
    // 0x115b5c: 0x8e260004
    ctx->pc = 0x115b5cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x115b60: 0x8e240000
    ctx->pc = 0x115b60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x115b64: 0x8e250010
    ctx->pc = 0x115b64u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x115b68: 0xc045632
    ctx->pc = 0x115B68u;
    SET_GPR_U32(ctx, 31, 0x115B70u);
    ctx->pc = 0x115B6Cu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), 65535));
    ctx->pc = 0x1158C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001158C8_0x1158c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115B70u; }
    }
    if (ctx->pc != 0x115B70u) { return; }
    ctx->pc = 0x115B70u;
    // 0x115b70: 0x40282d
    ctx->pc = 0x115b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b74: 0x4a30006
    ctx->pc = 0x115B74u;
    {
        const bool branch_taken_0x115b74 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x115b74) {
            ctx->pc = 0x115B78u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->pc = 0x115B90u;
            goto label_115b90;
        }
    }
    ctx->pc = 0x115B7Cu;
    // 0x115b7c: 0x3c040024
    ctx->pc = 0x115b7cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x115b80: 0xc045a04
    ctx->pc = 0x115B80u;
    SET_GPR_U32(ctx, 31, 0x115B88u);
    ctx->pc = 0x115B84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936976));
    ctx->pc = 0x116810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116810_0x116810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115B88u; }
    }
    if (ctx->pc != 0x115B88u) { return; }
    ctx->pc = 0x115B88u;
    // 0x115b88: 0x1000000f
    ctx->pc = 0x115B88u;
    {
        const bool branch_taken_0x115b88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x115b88) {
            ctx->pc = 0x115BC8u;
            goto label_115bc8;
        }
    }
    ctx->pc = 0x115B90u;
label_115b90:
    // 0x115b90: 0x8e230004
    ctx->pc = 0x115b90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x115b94: 0x451021
    ctx->pc = 0x115b94u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x115b98: 0x651823
    ctx->pc = 0x115b98u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x115b9c: 0xae220010
    ctx->pc = 0x115b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x115ba0: 0xae230004
    ctx->pc = 0x115ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x115ba4: 0x1000000a
    ctx->pc = 0x115BA4u;
    {
        const bool branch_taken_0x115ba4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x115BA8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x115ba4) {
            ctx->pc = 0x115BD0u;
            goto label_115bd0;
        }
    }
    ctx->pc = 0x115BACu;
label_115bac:
    // 0x115bac: 0x8e220004
    ctx->pc = 0x115bacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x115bb0: 0x10400005
    ctx->pc = 0x115BB0u;
    {
        const bool branch_taken_0x115bb0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x115bb0) {
            ctx->pc = 0x115BC8u;
            goto label_115bc8;
        }
    }
    ctx->pc = 0x115BB8u;
    // 0x115bb8: 0x3c040024
    ctx->pc = 0x115bb8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x115bbc: 0x8e250004
    ctx->pc = 0x115bbcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x115bc0: 0xc045a04
    ctx->pc = 0x115BC0u;
    SET_GPR_U32(ctx, 31, 0x115BC8u);
    ctx->pc = 0x115BC4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937000));
    ctx->pc = 0x116810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116810_0x116810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115BC8u; }
    }
    if (ctx->pc != 0x115BC8u) { return; }
    ctx->pc = 0x115BC8u;
label_115bc8:
    // 0x115bc8: 0xae20000c
    ctx->pc = 0x115bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x115bcc: 0xdfbf0030
    ctx->pc = 0x115bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_115bd0:
    // 0x115bd0: 0xdfb20020
    ctx->pc = 0x115bd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_115bd4:
    // 0x115bd4: 0xdfb10010
    ctx->pc = 0x115bd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115bd8: 0xdfb00000
    ctx->pc = 0x115bd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115bdc: 0x3e00008
    ctx->pc = 0x115BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115BE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x115A44u: goto label_115a44;
            case 0x115A90u: goto label_115a90;
            case 0x115ABCu: goto label_115abc;
            case 0x115AECu: goto label_115aec;
            case 0x115B00u: goto label_115b00;
            case 0x115B20u: goto label_115b20;
            case 0x115B24u: goto label_115b24;
            case 0x115B50u: goto label_115b50;
            case 0x115B5Cu: goto label_115b5c;
            case 0x115B90u: goto label_115b90;
            case 0x115BACu: goto label_115bac;
            case 0x115BC8u: goto label_115bc8;
            case 0x115BD0u: goto label_115bd0;
            case 0x115BD4u: goto label_115bd4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x115BE4u;
    // 0x115be4: 0x0
    ctx->pc = 0x115be4u;
    // NOP
}
