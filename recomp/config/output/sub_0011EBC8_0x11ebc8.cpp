#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011EBC8
// Address: 0x11ebc8 - 0x11edb0
void sub_0011EBC8_0x11ebc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11ebc8u;

label_11ebc8:
    // 0x11ebc8: 0x27bdffd0
    ctx->pc = 0x11ebc8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11ebcc: 0x41282
    ctx->pc = 0x11ebccu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 4), 10));
    // 0x11ebd0: 0xffb00000
    ctx->pc = 0x11ebd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11ebd4: 0xffbf0020
    ctx->pc = 0x11ebd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11ebd8: 0x28180
    ctx->pc = 0x11ebd8u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 2), 6));
    // 0x11ebdc: 0x4800005
    ctx->pc = 0x11EBDCu;
    {
        const bool branch_taken_0x11ebdc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x11EBE0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        if (branch_taken_0x11ebdc) {
            ctx->pc = 0x11EBF4u;
            goto label_11ebf4;
        }
    }
    ctx->pc = 0x11EBE4u;
    // 0x11ebe4: 0x8e030008
    ctx->pc = 0x11ebe4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x11ebe8: 0x308203ff
    ctx->pc = 0x11ebe8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 1023));
    // 0x11ebec: 0x50430004
    ctx->pc = 0x11EBECu;
    {
        const bool branch_taken_0x11ebec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x11ebec) {
            ctx->pc = 0x11EBF0u;
            SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
            ctx->pc = 0x11EC00u;
            goto label_11ec00;
        }
    }
    ctx->pc = 0x11EBF4u;
label_11ebf4:
    // 0x11ebf4: 0x3c028000
    ctx->pc = 0x11ebf4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x11ebf8: 0x1000001f
    ctx->pc = 0x11EBF8u;
    {
        const bool branch_taken_0x11ebf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11EBFCu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32770));
        if (branch_taken_0x11ebf8) {
            ctx->pc = 0x11EC78u;
            goto label_11ec78;
        }
    }
    ctx->pc = 0x11EC00u;
label_11ec00:
    // 0x11ec00: 0x2442b3e8
    ctx->pc = 0x11ec00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947816));
    // 0x11ec04: 0x8c43001c
    ctx->pc = 0x11ec04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x11ec08: 0x54640004
    ctx->pc = 0x11EC08u;
    {
        const bool branch_taken_0x11ec08 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x11ec08) {
            ctx->pc = 0x11EC0Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x11EC1Cu;
            goto label_11ec1c;
        }
    }
    ctx->pc = 0x11EC10u;
    // 0x11ec10: 0x3c028000
    ctx->pc = 0x11ec10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x11ec14: 0x10000018
    ctx->pc = 0x11EC14u;
    {
        const bool branch_taken_0x11ec14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11EC18u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16));
        if (branch_taken_0x11ec14) {
            ctx->pc = 0x11EC78u;
            goto label_11ec78;
        }
    }
    ctx->pc = 0x11EC1Cu;
label_11ec1c:
    // 0x11ec1c: 0x30420001
    ctx->pc = 0x11ec1cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x11ec20: 0x10400015
    ctx->pc = 0x11EC20u;
    {
        const bool branch_taken_0x11ec20 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11EC24u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11ec20) {
            ctx->pc = 0x11EC78u;
            goto label_11ec78;
        }
    }
    ctx->pc = 0x11EC28u;
    // 0x11ec28: 0xc0479e8
    ctx->pc = 0x11EC28u;
    SET_GPR_U32(ctx, 31, 0x11EC30u);
    ctx->pc = 0x11E7A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E7A0_0x11e7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EC30u; }
    }
    if (ctx->pc != 0x11EC30u) { return; }
    ctx->pc = 0x11EC30u;
    // 0x11ec30: 0x8e05000c
    ctx->pc = 0x11ec30u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11ec34: 0x40882d
    ctx->pc = 0x11ec34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ec38: 0xde040010
    ctx->pc = 0x11ec38u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11ec3c: 0x3c02ffff
    ctx->pc = 0x11ec3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x11ec40: 0xde030018
    ctx->pc = 0x11ec40u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x11ec44: 0x3442fffe
    ctx->pc = 0x11ec44u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65534));
    // 0x11ec48: 0x224202f
    ctx->pc = 0x11ec48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) - GPR_U64(ctx, 4));
    // 0x11ec4c: 0x30a60002
    ctx->pc = 0x11ec4cu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 5), 2));
    // 0x11ec50: 0x64182d
    ctx->pc = 0x11ec50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x11ec54: 0xa22824
    ctx->pc = 0x11ec54u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11ec58: 0xfe030018
    ctx->pc = 0x11ec58u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
    // 0x11ec5c: 0x10c00005
    ctx->pc = 0x11EC5Cu;
    {
        const bool branch_taken_0x11ec5c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x11EC60u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
        if (branch_taken_0x11ec5c) {
            ctx->pc = 0x11EC74u;
            goto label_11ec74;
        }
    }
    ctx->pc = 0x11EC64u;
    // 0x11ec64: 0xc047932
    ctx->pc = 0x11EC64u;
    SET_GPR_U32(ctx, 31, 0x11EC6Cu);
    ctx->pc = 0x11EC68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11E4C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E4C8_0x11e4c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EC6Cu; }
    }
    if (ctx->pc != 0x11EC6Cu) { return; }
    ctx->pc = 0x11EC6Cu;
    // 0x11ec6c: 0xc0478ac
    ctx->pc = 0x11EC6Cu;
    SET_GPR_U32(ctx, 31, 0x11EC74u);
    ctx->pc = 0x11EC70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11E2B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E2B0_0x11e2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EC74u; }
    }
    if (ctx->pc != 0x11EC74u) { return; }
    ctx->pc = 0x11EC74u;
label_11ec74:
    // 0x11ec74: 0x24020001
    ctx->pc = 0x11ec74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_11ec78:
    // 0x11ec78: 0xdfbf0020
    ctx->pc = 0x11ec78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ec7c: 0xdfb10010
    ctx->pc = 0x11ec7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ec80: 0xdfb00000
    ctx->pc = 0x11ec80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ec84: 0x3e00008
    ctx->pc = 0x11EC84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EC88u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11EBC8u: goto label_11ebc8;
            case 0x11EBF4u: goto label_11ebf4;
            case 0x11EC00u: goto label_11ec00;
            case 0x11EC1Cu: goto label_11ec1c;
            case 0x11EC74u: goto label_11ec74;
            case 0x11EC78u: goto label_11ec78;
            case 0x11ECB4u: goto label_11ecb4;
            case 0x11ECC4u: goto label_11ecc4;
            case 0x11ED34u: goto label_11ed34;
            case 0x11ED4Cu: goto label_11ed4c;
            case 0x11ED78u: goto label_11ed78;
            case 0x11ED7Cu: goto label_11ed7c;
            case 0x11ED90u: goto label_11ed90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11EC8Cu;
    // 0x11ec8c: 0x0
    ctx->pc = 0x11ec8cu;
    // NOP
    // 0x11ec90: 0x27bdffd0
    ctx->pc = 0x11ec90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11ec94: 0xffb00000
    ctx->pc = 0x11ec94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11ec98: 0xffb10010
    ctx->pc = 0x11ec98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11ec9c: 0xffbf0020
    ctx->pc = 0x11ec9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11eca0: 0xc047598
    ctx->pc = 0x11ECA0u;
    SET_GPR_U32(ctx, 31, 0x11ECA8u);
    ctx->pc = 0x11ECA4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ECA8u; }
    }
    if (ctx->pc != 0x11ECA8u) { return; }
    ctx->pc = 0x11ECA8u;
    // 0x11eca8: 0x200202d
    ctx->pc = 0x11eca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ecac: 0xc047af2
    ctx->pc = 0x11ECACu;
    SET_GPR_U32(ctx, 31, 0x11ECB4u);
    ctx->pc = 0x11ECB0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11EBC8u;
    goto label_11ebc8;
    ctx->pc = 0x11ECB4u;
label_11ecb4:
    // 0x11ecb4: 0x12200003
    ctx->pc = 0x11ECB4u;
    {
        const bool branch_taken_0x11ecb4 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x11ECB8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11ecb4) {
            ctx->pc = 0x11ECC4u;
            goto label_11ecc4;
        }
    }
    ctx->pc = 0x11ECBCu;
    // 0x11ecbc: 0xc0475ae
    ctx->pc = 0x11ECBCu;
    SET_GPR_U32(ctx, 31, 0x11ECC4u);
    ctx->pc = 0x11D6B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D6B8_0x11d6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ECC4u; }
    }
    if (ctx->pc != 0x11ECC4u) { return; }
    ctx->pc = 0x11ECC4u;
label_11ecc4:
    // 0x11ecc4: 0x200102d
    ctx->pc = 0x11ecc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ecc8: 0xdfbf0020
    ctx->pc = 0x11ecc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11eccc: 0xdfb10010
    ctx->pc = 0x11ecccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ecd0: 0xdfb00000
    ctx->pc = 0x11ecd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ecd4: 0x3e00008
    ctx->pc = 0x11ECD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11ECD8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11EBC8u: goto label_11ebc8;
            case 0x11EBF4u: goto label_11ebf4;
            case 0x11EC00u: goto label_11ec00;
            case 0x11EC1Cu: goto label_11ec1c;
            case 0x11EC74u: goto label_11ec74;
            case 0x11EC78u: goto label_11ec78;
            case 0x11ECB4u: goto label_11ecb4;
            case 0x11ECC4u: goto label_11ecc4;
            case 0x11ED34u: goto label_11ed34;
            case 0x11ED4Cu: goto label_11ed4c;
            case 0x11ED78u: goto label_11ed78;
            case 0x11ED7Cu: goto label_11ed7c;
            case 0x11ED90u: goto label_11ed90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11ECDCu;
    // 0x11ecdc: 0x0
    ctx->pc = 0x11ecdcu;
    // NOP
    // 0x11ece0: 0x27bdffb0
    ctx->pc = 0x11ece0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11ece4: 0xffb10010
    ctx->pc = 0x11ece4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11ece8: 0x80882d
    ctx->pc = 0x11ece8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ecec: 0xffb20020
    ctx->pc = 0x11ececu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11ecf0: 0xffb00000
    ctx->pc = 0x11ecf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11ecf4: 0x111282
    ctx->pc = 0x11ecf4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 17), 10));
    // 0x11ecf8: 0xffb30030
    ctx->pc = 0x11ecf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11ecfc: 0xa0902d
    ctx->pc = 0x11ecfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ed00: 0xffbf0040
    ctx->pc = 0x11ed00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11ed04: 0xc047598
    ctx->pc = 0x11ED04u;
    SET_GPR_U32(ctx, 31, 0x11ED0Cu);
    ctx->pc = 0x11ED08u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 2), 6));
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ED0Cu; }
    }
    if (ctx->pc != 0x11ED0Cu) { return; }
    ctx->pc = 0x11ED0Cu;
    // 0x11ed0c: 0x6200009
    ctx->pc = 0x11ED0Cu;
    {
        const bool branch_taken_0x11ed0c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x11ED10u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11ed0c) {
            ctx->pc = 0x11ED34u;
            goto label_11ed34;
        }
    }
    ctx->pc = 0x11ED14u;
    // 0x11ed14: 0x8e030008
    ctx->pc = 0x11ed14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x11ed18: 0x322203ff
    ctx->pc = 0x11ed18u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 1023));
    // 0x11ed1c: 0x14430005
    ctx->pc = 0x11ED1Cu;
    {
        const bool branch_taken_0x11ed1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x11ED20u;
        SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
        if (branch_taken_0x11ed1c) {
            ctx->pc = 0x11ED34u;
            goto label_11ed34;
        }
    }
    ctx->pc = 0x11ED24u;
    // 0x11ed24: 0x2442b3e8
    ctx->pc = 0x11ed24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947816));
    // 0x11ed28: 0x8c43001c
    ctx->pc = 0x11ed28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x11ed2c: 0x54710007
    ctx->pc = 0x11ED2Cu;
    {
        const bool branch_taken_0x11ed2c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 17));
        if (branch_taken_0x11ed2c) {
            ctx->pc = 0x11ED30u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x11ED4Cu;
            goto label_11ed4c;
        }
    }
    ctx->pc = 0x11ED34u;
label_11ed34:
    // 0x11ed34: 0x12600016
    ctx->pc = 0x11ED34u;
    {
        const bool branch_taken_0x11ed34 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x11ED38u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x11ed34) {
            ctx->pc = 0x11ED90u;
            goto label_11ed90;
        }
    }
    ctx->pc = 0x11ED3Cu;
    // 0x11ed3c: 0xc0475ae
    ctx->pc = 0x11ED3Cu;
    SET_GPR_U32(ctx, 31, 0x11ED44u);
    ctx->pc = 0x11D6B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D6B8_0x11d6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ED44u; }
    }
    if (ctx->pc != 0x11ED44u) { return; }
    ctx->pc = 0x11ED44u;
    // 0x11ed44: 0x10000012
    ctx->pc = 0x11ED44u;
    {
        const bool branch_taken_0x11ed44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11ED48u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x11ed44) {
            ctx->pc = 0x11ED90u;
            goto label_11ed90;
        }
    }
    ctx->pc = 0x11ED4Cu;
label_11ed4c:
    // 0x11ed4c: 0x30420001
    ctx->pc = 0x11ed4cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x11ed50: 0x10400009
    ctx->pc = 0x11ED50u;
    {
        const bool branch_taken_0x11ed50 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11ED54u;
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 16), 24)));
        if (branch_taken_0x11ed50) {
            ctx->pc = 0x11ED78u;
            goto label_11ed78;
        }
    }
    ctx->pc = 0x11ED58u;
    // 0x11ed58: 0xc0479e8
    ctx->pc = 0x11ED58u;
    SET_GPR_U32(ctx, 31, 0x11ED60u);
    ctx->pc = 0x11E7A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E7A0_0x11e7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ED60u; }
    }
    if (ctx->pc != 0x11ED60u) { return; }
    ctx->pc = 0x11ED60u;
    // 0x11ed60: 0xde030010
    ctx->pc = 0x11ed60u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11ed64: 0xfe120018
    ctx->pc = 0x11ed64u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 18));
    // 0x11ed68: 0x43182f
    ctx->pc = 0x11ed68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x11ed6c: 0xfe020010
    ctx->pc = 0x11ed6cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x11ed70: 0x10000002
    ctx->pc = 0x11ED70u;
    {
        const bool branch_taken_0x11ed70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11ED74u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 3));
        if (branch_taken_0x11ed70) {
            ctx->pc = 0x11ED7Cu;
            goto label_11ed7c;
        }
    }
    ctx->pc = 0x11ED78u;
label_11ed78:
    // 0x11ed78: 0xfe120018
    ctx->pc = 0x11ed78u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 18));
label_11ed7c:
    // 0x11ed7c: 0x12600004
    ctx->pc = 0x11ED7Cu;
    {
        const bool branch_taken_0x11ed7c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x11ED80u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11ed7c) {
            ctx->pc = 0x11ED90u;
            goto label_11ed90;
        }
    }
    ctx->pc = 0x11ED84u;
    // 0x11ed84: 0xc0475ae
    ctx->pc = 0x11ED84u;
    SET_GPR_U32(ctx, 31, 0x11ED8Cu);
    ctx->pc = 0x11D6B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D6B8_0x11d6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ED8Cu; }
    }
    if (ctx->pc != 0x11ED8Cu) { return; }
    ctx->pc = 0x11ED8Cu;
    // 0x11ed8c: 0x220102d
    ctx->pc = 0x11ed8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11ed90:
    // 0x11ed90: 0xdfbf0040
    ctx->pc = 0x11ed90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11ed94: 0xdfb30030
    ctx->pc = 0x11ed94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11ed98: 0xdfb20020
    ctx->pc = 0x11ed98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ed9c: 0xdfb10010
    ctx->pc = 0x11ed9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11eda0: 0xdfb00000
    ctx->pc = 0x11eda0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11eda4: 0x3e00008
    ctx->pc = 0x11EDA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EDA8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11EBC8u: goto label_11ebc8;
            case 0x11EBF4u: goto label_11ebf4;
            case 0x11EC00u: goto label_11ec00;
            case 0x11EC1Cu: goto label_11ec1c;
            case 0x11EC74u: goto label_11ec74;
            case 0x11EC78u: goto label_11ec78;
            case 0x11ECB4u: goto label_11ecb4;
            case 0x11ECC4u: goto label_11ecc4;
            case 0x11ED34u: goto label_11ed34;
            case 0x11ED4Cu: goto label_11ed4c;
            case 0x11ED78u: goto label_11ed78;
            case 0x11ED7Cu: goto label_11ed7c;
            case 0x11ED90u: goto label_11ed90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11EDACu;
    // 0x11edac: 0x0
    ctx->pc = 0x11edacu;
    // NOP
}
