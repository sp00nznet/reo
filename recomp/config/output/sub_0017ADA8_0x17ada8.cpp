#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017ADA8
// Address: 0x17ada8 - 0x17b010
void sub_0017ADA8_0x17ada8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17ada8u;

    // 0x17ada8: 0x27bdfff0
    ctx->pc = 0x17ada8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17adac: 0x24020041
    ctx->pc = 0x17adacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 65));
    // 0x17adb0: 0xffbf0000
    ctx->pc = 0x17adb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17adb4: 0x8c830004
    ctx->pc = 0x17adb4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17adb8: 0x10620025
    ctx->pc = 0x17ADB8u;
    {
        const bool branch_taken_0x17adb8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x17ADBCu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 66));
        if (branch_taken_0x17adb8) {
            ctx->pc = 0x17AE50u;
            goto label_17ae50;
        }
    }
    ctx->pc = 0x17ADC0u;
    // 0x17adc0: 0x10400011
    ctx->pc = 0x17ADC0u;
    {
        const bool branch_taken_0x17adc0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17ADC4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 257));
        if (branch_taken_0x17adc0) {
            ctx->pc = 0x17AE08u;
            goto label_17ae08;
        }
    }
    ctx->pc = 0x17ADC8u;
    // 0x17adc8: 0x24020021
    ctx->pc = 0x17adc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 33));
    // 0x17adcc: 0x10620021
    ctx->pc = 0x17ADCCu;
    {
        const bool branch_taken_0x17adcc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x17ADD0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x17adcc) {
            ctx->pc = 0x17AE54u;
            goto label_17ae54;
        }
    }
    ctx->pc = 0x17ADD4u;
    // 0x17add4: 0x28620022
    ctx->pc = 0x17add4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 34));
    // 0x17add8: 0x10400007
    ctx->pc = 0x17ADD8u;
    {
        const bool branch_taken_0x17add8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17ADDCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 49));
        if (branch_taken_0x17add8) {
            ctx->pc = 0x17ADF8u;
            goto label_17adf8;
        }
    }
    ctx->pc = 0x17ADE0u;
    // 0x17ade0: 0x24020011
    ctx->pc = 0x17ade0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 17));
    // 0x17ade4: 0x1062001a
    ctx->pc = 0x17ADE4u;
    {
        const bool branch_taken_0x17ade4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x17ADE8u;
        SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
        if (branch_taken_0x17ade4) {
            ctx->pc = 0x17AE50u;
            goto label_17ae50;
        }
    }
    ctx->pc = 0x17ADECu;
    // 0x17adec: 0x10000015
    ctx->pc = 0x17ADECu;
    {
        const bool branch_taken_0x17adec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17ADF0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17adec) {
            ctx->pc = 0x17AE44u;
            goto label_17ae44;
        }
    }
    ctx->pc = 0x17ADF4u;
    // 0x17adf4: 0x0
    ctx->pc = 0x17adf4u;
    // NOP
label_17adf8:
    // 0x17adf8: 0x10620015
    ctx->pc = 0x17ADF8u;
    {
        const bool branch_taken_0x17adf8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x17ADFCu;
        SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
        if (branch_taken_0x17adf8) {
            ctx->pc = 0x17AE50u;
            goto label_17ae50;
        }
    }
    ctx->pc = 0x17AE00u;
    // 0x17ae00: 0x10000010
    ctx->pc = 0x17AE00u;
    {
        const bool branch_taken_0x17ae00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17AE04u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17ae00) {
            ctx->pc = 0x17AE44u;
            goto label_17ae44;
        }
    }
    ctx->pc = 0x17AE08u;
label_17ae08:
    // 0x17ae08: 0x10620012
    ctx->pc = 0x17AE08u;
    {
        const bool branch_taken_0x17ae08 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x17AE0Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x17ae08) {
            ctx->pc = 0x17AE54u;
            goto label_17ae54;
        }
    }
    ctx->pc = 0x17AE10u;
    // 0x17ae10: 0x28620102
    ctx->pc = 0x17ae10u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 258));
    // 0x17ae14: 0x10400006
    ctx->pc = 0x17AE14u;
    {
        const bool branch_taken_0x17ae14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17AE18u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4097));
        if (branch_taken_0x17ae14) {
            ctx->pc = 0x17AE30u;
            goto label_17ae30;
        }
    }
    ctx->pc = 0x17AE1Cu;
    // 0x17ae1c: 0x240200f1
    ctx->pc = 0x17ae1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 241));
    // 0x17ae20: 0x1062000b
    ctx->pc = 0x17AE20u;
    {
        const bool branch_taken_0x17ae20 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x17AE24u;
        SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
        if (branch_taken_0x17ae20) {
            ctx->pc = 0x17AE50u;
            goto label_17ae50;
        }
    }
    ctx->pc = 0x17AE28u;
    // 0x17ae28: 0x10000006
    ctx->pc = 0x17AE28u;
    {
        const bool branch_taken_0x17ae28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17AE2Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17ae28) {
            ctx->pc = 0x17AE44u;
            goto label_17ae44;
        }
    }
    ctx->pc = 0x17AE30u;
label_17ae30:
    // 0x17ae30: 0x14620003
    ctx->pc = 0x17AE30u;
    {
        const bool branch_taken_0x17ae30 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x17AE34u;
        SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
        if (branch_taken_0x17ae30) {
            ctx->pc = 0x17AE40u;
            goto label_17ae40;
        }
    }
    ctx->pc = 0x17AE38u;
    // 0x17ae38: 0x10000006
    ctx->pc = 0x17AE38u;
    {
        const bool branch_taken_0x17ae38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17AE3Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17ae38) {
            ctx->pc = 0x17AE54u;
            goto label_17ae54;
        }
    }
    ctx->pc = 0x17AE40u;
label_17ae40:
    // 0x17ae40: 0x202d
    ctx->pc = 0x17ae40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17ae44:
    // 0x17ae44: 0x24c60ea0
    ctx->pc = 0x17ae44u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3744));
    // 0x17ae48: 0xc05f472
    ctx->pc = 0x17AE48u;
    SET_GPR_U32(ctx, 31, 0x17AE50u);
    ctx->pc = 0x17AE4Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17D1C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D1C8_0x17d1c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AE50u; }
    }
    if (ctx->pc != 0x17AE50u) { return; }
    ctx->pc = 0x17AE50u;
label_17ae50:
    // 0x17ae50: 0x102d
    ctx->pc = 0x17ae50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17ae54:
    // 0x17ae54: 0xdfbf0000
    ctx->pc = 0x17ae54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ae58: 0x3e00008
    ctx->pc = 0x17AE58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AE5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17ADF8u: goto label_17adf8;
            case 0x17AE08u: goto label_17ae08;
            case 0x17AE30u: goto label_17ae30;
            case 0x17AE40u: goto label_17ae40;
            case 0x17AE44u: goto label_17ae44;
            case 0x17AE50u: goto label_17ae50;
            case 0x17AE54u: goto label_17ae54;
            case 0x17AEE0u: goto label_17aee0;
            case 0x17AEE4u: goto label_17aee4;
            case 0x17AFC0u: goto label_17afc0;
            case 0x17AFC4u: goto label_17afc4;
            case 0x17AFF0u: goto label_17aff0;
            case 0x17AFFCu: goto label_17affc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17AE60u;
    // 0x17ae60: 0x27bdffb0
    ctx->pc = 0x17ae60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17ae64: 0xa0102d
    ctx->pc = 0x17ae64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ae68: 0xffbf0040
    ctx->pc = 0x17ae68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17ae6c: 0x244d0004
    ctx->pc = 0x17ae6cu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 2), 4));
    // 0x17ae70: 0x244b0024
    ctx->pc = 0x17ae70u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 2), 36));
    // 0x17ae74: 0x244a0014
    ctx->pc = 0x17ae74u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 20));
    // 0x17ae78: 0x8da30004
    ctx->pc = 0x17ae78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x17ae7c: 0xc0602d
    ctx->pc = 0x17ae7cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ae80: 0x8c470044
    ctx->pc = 0x17ae80u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x17ae84: 0x180282d
    ctx->pc = 0x17ae84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ae88: 0x8d460004
    ctx->pc = 0x17ae88u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x17ae8c: 0x37080
    ctx->pc = 0x17ae8cu;
    SET_GPR_U32(ctx, 14, SLL32(GPR_U32(ctx, 3), 2));
    // 0x17ae90: 0x8d680004
    ctx->pc = 0x17ae90u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x17ae94: 0x8c490048
    ctx->pc = 0x17ae94u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x17ae98: 0xafa60010
    ctx->pc = 0x17ae98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x17ae9c: 0x60302d
    ctx->pc = 0x17ae9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aea0: 0xafa70024
    ctx->pc = 0x17aea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 7));
    // 0x17aea4: 0xafa3000c
    ctx->pc = 0x17aea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x17aea8: 0xafa80014
    ctx->pc = 0x17aea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
    // 0x17aeac: 0xafa90028
    ctx->pc = 0x17aeacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 9));
    // 0x17aeb0: 0x8da70000
    ctx->pc = 0x17aeb0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x17aeb4: 0x8d420000
    ctx->pc = 0x17aeb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x17aeb8: 0x8d630000
    ctx->pc = 0x17aeb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x17aebc: 0x8c880008
    ctx->pc = 0x17aebcu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17aec0: 0xe0202d
    ctx->pc = 0x17aec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aec4: 0xafa20004
    ctx->pc = 0x17aec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x17aec8: 0xafa30008
    ctx->pc = 0x17aec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x17aecc: 0xafa70000
    ctx->pc = 0x17aeccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x17aed0: 0x15000003
    ctx->pc = 0x17AED0u;
    {
        const bool branch_taken_0x17aed0 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x17AED4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 12));
        if (branch_taken_0x17aed0) {
            ctx->pc = 0x17AEE0u;
            goto label_17aee0;
        }
    }
    ctx->pc = 0x17AED8u;
    // 0x17aed8: 0x10000002
    ctx->pc = 0x17AED8u;
    {
        const bool branch_taken_0x17aed8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17AEDCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 14));
        if (branch_taken_0x17aed8) {
            ctx->pc = 0x17AEE4u;
            goto label_17aee4;
        }
    }
    ctx->pc = 0x17AEE0u;
label_17aee0:
    // 0x17aee0: 0xafa8002c
    ctx->pc = 0x17aee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 8));
label_17aee4:
    // 0x17aee4: 0xc0524a8
    ctx->pc = 0x17AEE4u;
    SET_GPR_U32(ctx, 31, 0x17AEECu);
    ctx->pc = 0x17AEE8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 13), 8)));
    ctx->pc = 0x1492A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001492A0_0x1492a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AEECu; }
    }
    if (ctx->pc != 0x17AEECu) { return; }
    ctx->pc = 0x17AEECu;
    // 0x17aeec: 0xdfbf0040
    ctx->pc = 0x17aeecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17aef0: 0x3e00008
    ctx->pc = 0x17AEF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AEF4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17ADF8u: goto label_17adf8;
            case 0x17AE08u: goto label_17ae08;
            case 0x17AE30u: goto label_17ae30;
            case 0x17AE40u: goto label_17ae40;
            case 0x17AE44u: goto label_17ae44;
            case 0x17AE50u: goto label_17ae50;
            case 0x17AE54u: goto label_17ae54;
            case 0x17AEE0u: goto label_17aee0;
            case 0x17AEE4u: goto label_17aee4;
            case 0x17AFC0u: goto label_17afc0;
            case 0x17AFC4u: goto label_17afc4;
            case 0x17AFF0u: goto label_17aff0;
            case 0x17AFFCu: goto label_17affc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17AEF8u;
    // 0x17aef8: 0x27bdffa0
    ctx->pc = 0x17aef8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17aefc: 0x382d
    ctx->pc = 0x17aefcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17af00: 0xffb00040
    ctx->pc = 0x17af00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x17af04: 0xa0802d
    ctx->pc = 0x17af04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17af08: 0xffb10048
    ctx->pc = 0x17af08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x17af0c: 0xc0882d
    ctx->pc = 0x17af0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17af10: 0xffb20050
    ctx->pc = 0x17af10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x17af14: 0xffbf0058
    ctx->pc = 0x17af14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x17af18: 0xc05eb1a
    ctx->pc = 0x17AF18u;
    SET_GPR_U32(ctx, 31, 0x17AF20u);
    ctx->pc = 0x17AF1Cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17AC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017AC68_0x17ac68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AF20u; }
    }
    if (ctx->pc != 0x17AF20u) { return; }
    ctx->pc = 0x17AF20u;
    // 0x17af20: 0x26020004
    ctx->pc = 0x17af20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4));
    // 0x17af24: 0x8e040048
    ctx->pc = 0x17af24u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x17af28: 0x8c4a0004
    ctx->pc = 0x17af28u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17af2c: 0x26080014
    ctx->pc = 0x17af2cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 20));
    // 0x17af30: 0x8c430008
    ctx->pc = 0x17af30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17af34: 0x26090024
    ctx->pc = 0x17af34u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 16), 36));
    // 0x17af38: 0x8c460000
    ctx->pc = 0x17af38u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17af3c: 0x417c2
    ctx->pc = 0x17af3cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 4), 31));
    // 0x17af40: 0x1431818
    ctx->pc = 0x17af40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x17af44: 0x822021
    ctx->pc = 0x17af44u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17af48: 0x8d070000
    ctx->pc = 0x17af48u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x17af4c: 0x42043
    ctx->pc = 0x17af4cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x17af50: 0x8d250000
    ctx->pc = 0x17af50u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x17af54: 0xa6880
    ctx->pc = 0x17af54u;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 10), 2));
    // 0x17af58: 0x8d0b0004
    ctx->pc = 0x17af58u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x17af5c: 0x317c2
    ctx->pc = 0x17af5cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 31));
    // 0x17af60: 0x8e4c0008
    ctx->pc = 0x17af60u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x17af64: 0x621821
    ctx->pc = 0x17af64u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17af68: 0x8d280004
    ctx->pc = 0x17af68u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x17af6c: 0x317c2
    ctx->pc = 0x17af6cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 31));
    // 0x17af70: 0x31843
    ctx->pc = 0x17af70u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x17af74: 0x621021
    ctx->pc = 0x17af74u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17af78: 0x8e090044
    ctx->pc = 0x17af78u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x17af7c: 0x21043
    ctx->pc = 0x17af7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x17af80: 0xc33021
    ctx->pc = 0x17af80u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x17af84: 0xa22821
    ctx->pc = 0x17af84u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x17af88: 0xe23821
    ctx->pc = 0x17af88u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x17af8c: 0xafa60000
    ctx->pc = 0x17af8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x17af90: 0xafa70004
    ctx->pc = 0x17af90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x17af94: 0xafa50008
    ctx->pc = 0x17af94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x17af98: 0xafab0010
    ctx->pc = 0x17af98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 11));
    // 0x17af9c: 0xafa80014
    ctx->pc = 0x17af9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
    // 0x17afa0: 0xafb10020
    ctx->pc = 0x17afa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 17));
    // 0x17afa4: 0xafa90024
    ctx->pc = 0x17afa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 9));
    // 0x17afa8: 0xafa40028
    ctx->pc = 0x17afa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x17afac: 0x15800004
    ctx->pc = 0x17AFACu;
    {
        const bool branch_taken_0x17afac = (GPR_U32(ctx, 12) != GPR_U32(ctx, 0));
        ctx->pc = 0x17AFB0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 10));
        if (branch_taken_0x17afac) {
            ctx->pc = 0x17AFC0u;
            goto label_17afc0;
        }
    }
    ctx->pc = 0x17AFB4u;
    // 0x17afb4: 0x10000003
    ctx->pc = 0x17AFB4u;
    {
        const bool branch_taken_0x17afb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17AFB8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 13));
        if (branch_taken_0x17afb4) {
            ctx->pc = 0x17AFC4u;
            goto label_17afc4;
        }
    }
    ctx->pc = 0x17AFBCu;
    // 0x17afbc: 0x0
    ctx->pc = 0x17afbcu;
    // NOP
label_17afc0:
    // 0x17afc0: 0xafac002c
    ctx->pc = 0x17afc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 12));
label_17afc4:
    // 0x17afc4: 0xc05f486
    ctx->pc = 0x17AFC4u;
    SET_GPR_U32(ctx, 31, 0x17AFCCu);
    ctx->pc = 0x17D218u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D218_0x17d218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AFCCu; }
    }
    if (ctx->pc != 0x17AFCCu) { return; }
    ctx->pc = 0x17AFCCu;
    // 0x17afcc: 0x24030001
    ctx->pc = 0x17afccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17afd0: 0x14430007
    ctx->pc = 0x17AFD0u;
    {
        const bool branch_taken_0x17afd0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x17AFD4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17afd0) {
            ctx->pc = 0x17AFF0u;
            goto label_17aff0;
        }
    }
    ctx->pc = 0x17AFD8u;
    // 0x17afd8: 0x8e46003c
    ctx->pc = 0x17afd8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x17afdc: 0xc0524ae
    ctx->pc = 0x17AFDCu;
    SET_GPR_U32(ctx, 31, 0x17AFE4u);
    ctx->pc = 0x17AFE0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1492B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001492B8_0x1492b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AFE4u; }
    }
    if (ctx->pc != 0x17AFE4u) { return; }
    ctx->pc = 0x17AFE4u;
    // 0x17afe4: 0x10000005
    ctx->pc = 0x17AFE4u;
    {
        const bool branch_taken_0x17afe4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17AFE8u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x17afe4) {
            ctx->pc = 0x17AFFCu;
            goto label_17affc;
        }
    }
    ctx->pc = 0x17AFECu;
    // 0x17afec: 0x0
    ctx->pc = 0x17afecu;
    // NOP
label_17aff0:
    // 0x17aff0: 0xc0524ac
    ctx->pc = 0x17AFF0u;
    SET_GPR_U32(ctx, 31, 0x17AFF8u);
    ctx->pc = 0x17AFF4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1492B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001492B0_0x1492b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AFF8u; }
    }
    if (ctx->pc != 0x17AFF8u) { return; }
    ctx->pc = 0x17AFF8u;
    // 0x17aff8: 0xdfb00040
    ctx->pc = 0x17aff8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_17affc:
    // 0x17affc: 0xdfb10048
    ctx->pc = 0x17affcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17b000: 0xdfb20050
    ctx->pc = 0x17b000u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17b004: 0xdfbf0058
    ctx->pc = 0x17b004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x17b008: 0x3e00008
    ctx->pc = 0x17B008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B00Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17ADF8u: goto label_17adf8;
            case 0x17AE08u: goto label_17ae08;
            case 0x17AE30u: goto label_17ae30;
            case 0x17AE40u: goto label_17ae40;
            case 0x17AE44u: goto label_17ae44;
            case 0x17AE50u: goto label_17ae50;
            case 0x17AE54u: goto label_17ae54;
            case 0x17AEE0u: goto label_17aee0;
            case 0x17AEE4u: goto label_17aee4;
            case 0x17AFC0u: goto label_17afc0;
            case 0x17AFC4u: goto label_17afc4;
            case 0x17AFF0u: goto label_17aff0;
            case 0x17AFFCu: goto label_17affc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17B010u;
}
