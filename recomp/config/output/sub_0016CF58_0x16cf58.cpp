#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016CF58
// Address: 0x16cf58 - 0x16d1b0
void sub_0016CF58_0x16cf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16cf58u;

    // 0x16cf58: 0x27bdffa0
    ctx->pc = 0x16cf58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x16cf5c: 0xffb50048
    ctx->pc = 0x16cf5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x16cf60: 0xe0a82d
    ctx->pc = 0x16cf60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cf64: 0xffb00020
    ctx->pc = 0x16cf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x16cf68: 0x80802d
    ctx->pc = 0x16cf68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cf6c: 0xffb10028
    ctx->pc = 0x16cf6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x16cf70: 0xc0882d
    ctx->pc = 0x16cf70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cf74: 0xffb40040
    ctx->pc = 0x16cf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x16cf78: 0x2614094c
    ctx->pc = 0x16cf78u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 16), 2380));
    // 0x16cf7c: 0xffb60050
    ctx->pc = 0x16cf7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x16cf80: 0xa0b02d
    ctx->pc = 0x16cf80u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cf84: 0xffb20030
    ctx->pc = 0x16cf84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x16cf88: 0x26021b28
    ctx->pc = 0x16cf88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 6952));
    // 0x16cf8c: 0xffb30038
    ctx->pc = 0x16cf8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x16cf90: 0xffbf0058
    ctx->pc = 0x16cf90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x16cf94: 0xaea00000
    ctx->pc = 0x16cf94u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x16cf98: 0x8c520010
    ctx->pc = 0x16cf98u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x16cf9c: 0x8c530008
    ctx->pc = 0x16cf9cu;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16cfa0: 0xc05c806
    ctx->pc = 0x16CFA0u;
    SET_GPR_U32(ctx, 31, 0x16CFA8u);
    ctx->pc = 0x16CFA4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 0));
    ctx->pc = 0x172018u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00172018_0x172018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CFA8u; }
    }
    if (ctx->pc != 0x16CFA8u) { return; }
    ctx->pc = 0x16CFA8u;
    // 0x16cfa8: 0x5440000f
    ctx->pc = 0x16CFA8u;
    {
        const bool branch_taken_0x16cfa8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16cfa8) {
            ctx->pc = 0x16CFACu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 120)));
            ctx->pc = 0x16CFE8u;
            goto label_16cfe8;
        }
    }
    ctx->pc = 0x16CFB0u;
    // 0x16cfb0: 0xc05b58c
    ctx->pc = 0x16CFB0u;
    SET_GPR_U32(ctx, 31, 0x16CFB8u);
    ctx->pc = 0x16CFB4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16D630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D630_0x16d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CFB8u; }
    }
    if (ctx->pc != 0x16CFB8u) { return; }
    ctx->pc = 0x16CFB8u;
    // 0x16cfb8: 0x24030001
    ctx->pc = 0x16cfb8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16cfbc: 0x54430006
    ctx->pc = 0x16CFBCu;
    {
        const bool branch_taken_0x16cfbc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x16cfbc) {
            ctx->pc = 0x16CFC0u;
            WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 3));
            ctx->pc = 0x16CFD8u;
            goto label_16cfd8;
        }
    }
    ctx->pc = 0x16CFC4u;
    // 0x16cfc4: 0xc05c158
    ctx->pc = 0x16CFC4u;
    SET_GPR_U32(ctx, 31, 0x16CFCCu);
    ctx->pc = 0x16CFC8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x170560u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00170560_0x170560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CFCCu; }
    }
    if (ctx->pc != 0x16CFCCu) { return; }
    ctx->pc = 0x16CFCCu;
    // 0x16cfcc: 0x1000006e
    ctx->pc = 0x16CFCCu;
    {
        const bool branch_taken_0x16cfcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16CFD0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16cfcc) {
            ctx->pc = 0x16D188u;
            goto label_16d188;
        }
    }
    ctx->pc = 0x16CFD4u;
    // 0x16cfd4: 0x0
    ctx->pc = 0x16cfd4u;
    // NOP
label_16cfd8:
    // 0x16cfd8: 0xc05b304
    ctx->pc = 0x16CFD8u;
    SET_GPR_U32(ctx, 31, 0x16CFE0u);
    ctx->pc = 0x16CFDCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16CC10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016CC10_0x16cc10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CFE0u; }
    }
    if (ctx->pc != 0x16CFE0u) { return; }
    ctx->pc = 0x16CFE0u;
    // 0x16cfe0: 0x1000006a
    ctx->pc = 0x16CFE0u;
    {
        const bool branch_taken_0x16cfe0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16CFE4u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x16cfe0) {
            ctx->pc = 0x16D18Cu;
            goto label_16d18c;
        }
    }
    ctx->pc = 0x16CFE8u;
label_16cfe8:
    // 0x16cfe8: 0x240282d
    ctx->pc = 0x16cfe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cfec: 0x322300cc
    ctx->pc = 0x16cfecu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 17), 204));
    // 0x16cff0: 0x200202d
    ctx->pc = 0x16cff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cff4: 0x384200cc
    ctx->pc = 0x16cff4u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 204));
    // 0x16cff8: 0x27a60010
    ctx->pc = 0x16cff8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
    // 0x16cffc: 0xc059d7a
    ctx->pc = 0x16CFFCu;
    SET_GPR_U32(ctx, 31, 0x16D004u);
    ctx->pc = 0x16D000u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 3));
    ctx->pc = 0x1675E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001675E8_0x1675e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D004u; }
    }
    if (ctx->pc != 0x16D004u) { return; }
    ctx->pc = 0x16D004u;
    // 0x16d004: 0x40902d
    ctx->pc = 0x16d004u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d008: 0x1640005f
    ctx->pc = 0x16D008u;
    {
        const bool branch_taken_0x16d008 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x16D00Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16d008) {
            ctx->pc = 0x16D188u;
            goto label_16d188;
        }
    }
    ctx->pc = 0x16D010u;
    // 0x16d010: 0x322200c8
    ctx->pc = 0x16d010u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 200));
    // 0x16d014: 0x10400003
    ctx->pc = 0x16D014u;
    {
        const bool branch_taken_0x16d014 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16D018u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16d014) {
            ctx->pc = 0x16D024u;
            goto label_16d024;
        }
    }
    ctx->pc = 0x16D01Cu;
    // 0x16d01c: 0xc05c160
    ctx->pc = 0x16D01Cu;
    SET_GPR_U32(ctx, 31, 0x16D024u);
    ctx->pc = 0x16D020u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x170580u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00170580_0x170580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D024u; }
    }
    if (ctx->pc != 0x16D024u) { return; }
    ctx->pc = 0x16D024u;
label_16d024:
    // 0x16d024: 0x24020080
    ctx->pc = 0x16d024u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
    // 0x16d028: 0x56220016
    ctx->pc = 0x16D028u;
    {
        const bool branch_taken_0x16d028 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x16d028) {
            ctx->pc = 0x16D02Cu;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x16D084u;
            goto label_16d084;
        }
    }
    ctx->pc = 0x16D030u;
    // 0x16d030: 0xc05b480
    ctx->pc = 0x16D030u;
    SET_GPR_U32(ctx, 31, 0x16D038u);
    ctx->pc = 0x16D034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16D200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D200_0x16d200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D038u; }
    }
    if (ctx->pc != 0x16D038u) { return; }
    ctx->pc = 0x16D038u;
    // 0x16d038: 0xc059f74
    ctx->pc = 0x16D038u;
    SET_GPR_U32(ctx, 31, 0x16D040u);
    ctx->pc = 0x16D03Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x167DD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167DD0_0x167dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D040u; }
    }
    if (ctx->pc != 0x16D040u) { return; }
    ctx->pc = 0x16D040u;
    // 0x16d040: 0x10400007
    ctx->pc = 0x16D040u;
    {
        const bool branch_taken_0x16d040 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16D044u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x16d040) {
            ctx->pc = 0x16D060u;
            goto label_16d060;
        }
    }
    ctx->pc = 0x16D048u;
    // 0x16d048: 0xc05b4ac
    ctx->pc = 0x16D048u;
    SET_GPR_U32(ctx, 31, 0x16D050u);
    ctx->pc = 0x16D04Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16D2B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D2B0_0x16d2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D050u; }
    }
    if (ctx->pc != 0x16D050u) { return; }
    ctx->pc = 0x16D050u;
    // 0x16d050: 0x5440004d
    ctx->pc = 0x16D050u;
    {
        const bool branch_taken_0x16d050 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16d050) {
            ctx->pc = 0x16D054u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x16D188u;
            goto label_16d188;
        }
    }
    ctx->pc = 0x16D058u;
    // 0x16d058: 0x10000049
    ctx->pc = 0x16D058u;
    {
        const bool branch_taken_0x16d058 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16D05Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x16d058) {
            ctx->pc = 0x16D180u;
            goto label_16d180;
        }
    }
    ctx->pc = 0x16D060u;
label_16d060:
    // 0x16d060: 0xc059f8e
    ctx->pc = 0x16D060u;
    SET_GPR_U32(ctx, 31, 0x16D068u);
    ctx->pc = 0x16D064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x167E38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167E38_0x167e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D068u; }
    }
    if (ctx->pc != 0x16D068u) { return; }
    ctx->pc = 0x16D068u;
    // 0x16d068: 0x10400005
    ctx->pc = 0x16D068u;
    {
        const bool branch_taken_0x16d068 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16D06Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x16d068) {
            ctx->pc = 0x16D080u;
            goto label_16d080;
        }
    }
    ctx->pc = 0x16D070u;
    // 0x16d070: 0xc05b542
    ctx->pc = 0x16D070u;
    SET_GPR_U32(ctx, 31, 0x16D078u);
    ctx->pc = 0x16D074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16D508u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D508_0x16d508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D078u; }
    }
    if (ctx->pc != 0x16D078u) { return; }
    ctx->pc = 0x16D078u;
    // 0x16d078: 0x10000041
    ctx->pc = 0x16D078u;
    {
        const bool branch_taken_0x16d078 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16D07Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x16d078) {
            ctx->pc = 0x16D180u;
            goto label_16d180;
        }
    }
    ctx->pc = 0x16D080u;
label_16d080:
    // 0x16d080: 0x200202d
    ctx->pc = 0x16d080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16d084:
    // 0x16d084: 0x2c0282d
    ctx->pc = 0x16d084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d088: 0xc05b57a
    ctx->pc = 0x16D088u;
    SET_GPR_U32(ctx, 31, 0x16D090u);
    ctx->pc = 0x16D08Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16D5E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D5E8_0x16d5e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D090u; }
    }
    if (ctx->pc != 0x16D090u) { return; }
    ctx->pc = 0x16D090u;
    // 0x16d090: 0x50400005
    ctx->pc = 0x16D090u;
    {
        const bool branch_taken_0x16d090 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x16d090) {
            ctx->pc = 0x16D094u;
            SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 22), 5));
            ctx->pc = 0x16D0A8u;
            goto label_16d0a8;
        }
    }
    ctx->pc = 0x16D098u;
    // 0x16d098: 0xc05c158
    ctx->pc = 0x16D098u;
    SET_GPR_U32(ctx, 31, 0x16D0A0u);
    ctx->pc = 0x16D09Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x170560u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00170560_0x170560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D0A0u; }
    }
    if (ctx->pc != 0x16D0A0u) { return; }
    ctx->pc = 0x16D0A0u;
    // 0x16d0a0: 0x10000039
    ctx->pc = 0x16D0A0u;
    {
        const bool branch_taken_0x16d0a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16D0A4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16d0a0) {
            ctx->pc = 0x16D188u;
            goto label_16d188;
        }
    }
    ctx->pc = 0x16D0A8u;
label_16d0a8:
    // 0x16d0a8: 0x10400005
    ctx->pc = 0x16D0A8u;
    {
        const bool branch_taken_0x16d0a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16D0ACu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 76));
        if (branch_taken_0x16d0a8) {
            ctx->pc = 0x16D0C0u;
            goto label_16d0c0;
        }
    }
    ctx->pc = 0x16D0B0u;
    // 0x16d0b0: 0x24020001
    ctx->pc = 0x16d0b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d0b4: 0x10000033
    ctx->pc = 0x16D0B4u;
    {
        const bool branch_taken_0x16d0b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16D0B8u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
        if (branch_taken_0x16d0b4) {
            ctx->pc = 0x16D184u;
            goto label_16d184;
        }
    }
    ctx->pc = 0x16D0BCu;
    // 0x16d0bc: 0x0
    ctx->pc = 0x16d0bcu;
    // NOP
label_16d0c0:
    // 0x16d0c0: 0x10400013
    ctx->pc = 0x16D0C0u;
    {
        const bool branch_taken_0x16d0c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16D0C4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16d0c0) {
            ctx->pc = 0x16D110u;
            goto label_16d110;
        }
    }
    ctx->pc = 0x16D0C8u;
    // 0x16d0c8: 0xc05b46c
    ctx->pc = 0x16D0C8u;
    SET_GPR_U32(ctx, 31, 0x16D0D0u);
    ctx->pc = 0x16D0CCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16D1B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D1B0_0x16d1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D0D0u; }
    }
    if (ctx->pc != 0x16D0D0u) { return; }
    ctx->pc = 0x16D0D0u;
    // 0x16d0d0: 0x8e670078
    ctx->pc = 0x16d0d0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x16d0d4: 0x8fa60010
    ctx->pc = 0x16d0d4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d0d8: 0x200202d
    ctx->pc = 0x16d0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d0dc: 0x2273824
    ctx->pc = 0x16d0dcu;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x16d0e0: 0x3a0282d
    ctx->pc = 0x16d0e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d0e4: 0xc05b5ba
    ctx->pc = 0x16D0E4u;
    SET_GPR_U32(ctx, 31, 0x16D0ECu);
    ctx->pc = 0x16D0E8u;
    SET_GPR_U32(ctx, 7, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    ctx->pc = 0x16D6E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D6E8_0x16d6e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D0ECu; }
    }
    if (ctx->pc != 0x16D0ECu) { return; }
    ctx->pc = 0x16D0ECu;
    // 0x16d0ec: 0x40902d
    ctx->pc = 0x16d0ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d0f0: 0x16400026
    ctx->pc = 0x16D0F0u;
    {
        const bool branch_taken_0x16d0f0 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x16D0F4u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x16d0f0) {
            ctx->pc = 0x16D18Cu;
            goto label_16d18c;
        }
    }
    ctx->pc = 0x16D0F8u;
    // 0x16d0f8: 0x8e620078
    ctx->pc = 0x16d0f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x16d0fc: 0x2221024
    ctx->pc = 0x16d0fcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x16d100: 0x1040001e
    ctx->pc = 0x16D100u;
    {
        const bool branch_taken_0x16d100 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16D104u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 204));
        if (branch_taken_0x16d100) {
            ctx->pc = 0x16D17Cu;
            goto label_16d17c;
        }
    }
    ctx->pc = 0x16D108u;
    // 0x16d108: 0x1000001c
    ctx->pc = 0x16D108u;
    {
        const bool branch_taken_0x16d108 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16D10Cu;
        WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 2));
        if (branch_taken_0x16d108) {
            ctx->pc = 0x16D17Cu;
            goto label_16d17c;
        }
    }
    ctx->pc = 0x16D110u;
label_16d110:
    // 0x16d110: 0x32220002
    ctx->pc = 0x16d110u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 2));
    // 0x16d114: 0x50400014
    ctx->pc = 0x16D114u;
    {
        const bool branch_taken_0x16d114 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x16d114) {
            ctx->pc = 0x16D118u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
            ctx->pc = 0x16D168u;
            goto label_16d168;
        }
    }
    ctx->pc = 0x16D11Cu;
    // 0x16d11c: 0xc05b99a
    ctx->pc = 0x16D11Cu;
    SET_GPR_U32(ctx, 31, 0x16D124u);
    ctx->pc = 0x16D120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E668u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E668_0x16e668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D124u; }
    }
    if (ctx->pc != 0x16D124u) { return; }
    ctx->pc = 0x16D124u;
    // 0x16d124: 0x10400018
    ctx->pc = 0x16D124u;
    {
        const bool branch_taken_0x16d124 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16D128u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16d124) {
            ctx->pc = 0x16D188u;
            goto label_16d188;
        }
    }
    ctx->pc = 0x16D12Cu;
    // 0x16d12c: 0xc05b99e
    ctx->pc = 0x16D12Cu;
    SET_GPR_U32(ctx, 31, 0x16D134u);
    ctx->pc = 0x16D130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E678u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E678_0x16e678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D134u; }
    }
    if (ctx->pc != 0x16D134u) { return; }
    ctx->pc = 0x16D134u;
    // 0x16d134: 0x10400008
    ctx->pc = 0x16D134u;
    {
        const bool branch_taken_0x16d134 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16D138u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x16d134) {
            ctx->pc = 0x16D158u;
            goto label_16d158;
        }
    }
    ctx->pc = 0x16D13Cu;
    // 0x16d13c: 0xc05bad2
    ctx->pc = 0x16D13Cu;
    SET_GPR_U32(ctx, 31, 0x16D144u);
    ctx->pc = 0x16D140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16EB48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016EB48_0x16eb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D144u; }
    }
    if (ctx->pc != 0x16D144u) { return; }
    ctx->pc = 0x16D144u;
    // 0x16d144: 0x40902d
    ctx->pc = 0x16d144u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d148: 0x5640000f
    ctx->pc = 0x16D148u;
    {
        const bool branch_taken_0x16d148 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x16d148) {
            ctx->pc = 0x16D14Cu;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x16D188u;
            goto label_16d188;
        }
    }
    ctx->pc = 0x16D150u;
    // 0x16d150: 0x1000000b
    ctx->pc = 0x16D150u;
    {
        const bool branch_taken_0x16d150 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16D154u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x16d150) {
            ctx->pc = 0x16D180u;
            goto label_16d180;
        }
    }
    ctx->pc = 0x16D158u;
label_16d158:
    // 0x16d158: 0xc05bb24
    ctx->pc = 0x16D158u;
    SET_GPR_U32(ctx, 31, 0x16D160u);
    ctx->pc = 0x16D15Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16EC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016EC90_0x16ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D160u; }
    }
    if (ctx->pc != 0x16D160u) { return; }
    ctx->pc = 0x16D160u;
    // 0x16d160: 0x10000008
    ctx->pc = 0x16D160u;
    {
        const bool branch_taken_0x16d160 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16D164u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16d160) {
            ctx->pc = 0x16D184u;
            goto label_16d184;
        }
    }
    ctx->pc = 0x16D168u;
label_16d168:
    // 0x16d168: 0x12220006
    ctx->pc = 0x16D168u;
    {
        const bool branch_taken_0x16d168 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x16D16Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x16d168) {
            ctx->pc = 0x16D184u;
            goto label_16d184;
        }
    }
    ctx->pc = 0x16D170u;
    // 0x16d170: 0x200202d
    ctx->pc = 0x16d170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d174: 0xc05bda8
    ctx->pc = 0x16D174u;
    SET_GPR_U32(ctx, 31, 0x16D17Cu);
    ctx->pc = 0x16D178u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 204));
    ctx->pc = 0x16F6A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F6A0_0x16f6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D17Cu; }
    }
    if (ctx->pc != 0x16D17Cu) { return; }
    ctx->pc = 0x16D17Cu;
label_16d17c:
    // 0x16d17c: 0x24020001
    ctx->pc = 0x16d17cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_16d180:
    // 0x16d180: 0xaea20000
    ctx->pc = 0x16d180u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_16d184:
    // 0x16d184: 0x240102d
    ctx->pc = 0x16d184u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16d188:
    // 0x16d188: 0xdfb00020
    ctx->pc = 0x16d188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16d18c:
    // 0x16d18c: 0xdfb10028
    ctx->pc = 0x16d18cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16d190: 0xdfb20030
    ctx->pc = 0x16d190u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16d194: 0xdfb30038
    ctx->pc = 0x16d194u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16d198: 0xdfb40040
    ctx->pc = 0x16d198u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16d19c: 0xdfb50048
    ctx->pc = 0x16d19cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x16d1a0: 0xdfb60050
    ctx->pc = 0x16d1a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16d1a4: 0xdfbf0058
    ctx->pc = 0x16d1a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x16d1a8: 0x3e00008
    ctx->pc = 0x16D1A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D1ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16CFD8u: goto label_16cfd8;
            case 0x16CFE8u: goto label_16cfe8;
            case 0x16D024u: goto label_16d024;
            case 0x16D060u: goto label_16d060;
            case 0x16D080u: goto label_16d080;
            case 0x16D084u: goto label_16d084;
            case 0x16D0A8u: goto label_16d0a8;
            case 0x16D0C0u: goto label_16d0c0;
            case 0x16D110u: goto label_16d110;
            case 0x16D158u: goto label_16d158;
            case 0x16D168u: goto label_16d168;
            case 0x16D17Cu: goto label_16d17c;
            case 0x16D180u: goto label_16d180;
            case 0x16D184u: goto label_16d184;
            case 0x16D188u: goto label_16d188;
            case 0x16D18Cu: goto label_16d18c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16D1B0u;
}
