#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0010CEE0
// Address: 0x10cee0 - 0x10d068
void sub_0010CEE0_0x10cee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10cee0u;

    // 0x10cee0: 0x27bdffe0
    ctx->pc = 0x10cee0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10cee4: 0x2403ffff
    ctx->pc = 0x10cee4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10cee8: 0xffb10008
    ctx->pc = 0x10cee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10ceec: 0x80882d
    ctx->pc = 0x10ceecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cef0: 0xffb00000
    ctx->pc = 0x10cef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10cef4: 0xa0802d
    ctx->pc = 0x10cef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cef8: 0xffbf0010
    ctx->pc = 0x10cef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10cefc: 0x12230055
    ctx->pc = 0x10CEFCu;
    {
        const bool branch_taken_0x10cefc = (GPR_U32(ctx, 17) == GPR_U32(ctx, 3));
        ctx->pc = 0x10CF00u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x10cefc) {
            ctx->pc = 0x10D054u;
            goto label_10d054;
        }
    }
    ctx->pc = 0x10CF04u;
    // 0x10cf04: 0x8e030054
    ctx->pc = 0x10cf04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x10cf08: 0x54600005
    ctx->pc = 0x10CF08u;
    {
        const bool branch_taken_0x10cf08 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x10cf08) {
            ctx->pc = 0x10CF0Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->pc = 0x10CF20u;
            goto label_10cf20;
        }
    }
    ctx->pc = 0x10CF10u;
    // 0x10cf10: 0x3c020021
    ctx->pc = 0x10cf10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x10cf14: 0x8c4397f0
    ctx->pc = 0x10cf14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294940656)));
    // 0x10cf18: 0xae030054
    ctx->pc = 0x10cf18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x10cf1c: 0x8c620038
    ctx->pc = 0x10cf1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_10cf20:
    // 0x10cf20: 0x54400004
    ctx->pc = 0x10CF20u;
    {
        const bool branch_taken_0x10cf20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x10cf20) {
            ctx->pc = 0x10CF24u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x10CF34u;
            goto label_10cf34;
        }
    }
    ctx->pc = 0x10CF28u;
    // 0x10cf28: 0xc041544
    ctx->pc = 0x10CF28u;
    SET_GPR_U32(ctx, 31, 0x10CF30u);
    ctx->pc = 0x10CF2Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x105510u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00105510_0x105510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CF30u; }
    }
    if (ctx->pc != 0x10CF30u) { return; }
    ctx->pc = 0x10CF30u;
    // 0x10cf30: 0x9602000c
    ctx->pc = 0x10cf30u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_10cf34:
    // 0x10cf34: 0x3044ffdf
    ctx->pc = 0x10cf34u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 65503));
    // 0x10cf38: 0x30830004
    ctx->pc = 0x10cf38u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 4));
    // 0x10cf3c: 0x14600013
    ctx->pc = 0x10CF3Cu;
    {
        const bool branch_taken_0x10cf3c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x10CF40u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 4));
        if (branch_taken_0x10cf3c) {
            ctx->pc = 0x10CF8Cu;
            goto label_10cf8c;
        }
    }
    ctx->pc = 0x10CF44u;
    // 0x10cf44: 0x30830010
    ctx->pc = 0x10cf44u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 16));
    // 0x10cf48: 0x10600042
    ctx->pc = 0x10CF48u;
    {
        const bool branch_taken_0x10cf48 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x10CF4Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x10cf48) {
            ctx->pc = 0x10D054u;
            goto label_10d054;
        }
    }
    ctx->pc = 0x10CF50u;
    // 0x10cf50: 0x30820008
    ctx->pc = 0x10cf50u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 8));
    // 0x10cf54: 0x5040000b
    ctx->pc = 0x10CF54u;
    {
        const bool branch_taken_0x10cf54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x10cf54) {
            ctx->pc = 0x10CF58u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x10CF84u;
            goto label_10cf84;
        }
    }
    ctx->pc = 0x10CF5Cu;
    // 0x10cf5c: 0xc04142c
    ctx->pc = 0x10CF5Cu;
    SET_GPR_U32(ctx, 31, 0x10CF64u);
    ctx->pc = 0x10CF60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1050B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001050B0_0x1050b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CF64u; }
    }
    if (ctx->pc != 0x10CF64u) { return; }
    ctx->pc = 0x10CF64u;
    // 0x10cf64: 0x1440003b
    ctx->pc = 0x10CF64u;
    {
        const bool branch_taken_0x10cf64 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10CF68u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x10cf64) {
            ctx->pc = 0x10D054u;
            goto label_10d054;
        }
    }
    ctx->pc = 0x10CF6Cu;
    // 0x10cf6c: 0x9602000c
    ctx->pc = 0x10cf6cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10cf70: 0xae000008
    ctx->pc = 0x10cf70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x10cf74: 0x3042fff7
    ctx->pc = 0x10cf74u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65527));
    // 0x10cf78: 0xae000018
    ctx->pc = 0x10cf78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x10cf7c: 0xa602000c
    ctx->pc = 0x10cf7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x10cf80: 0x9602000c
    ctx->pc = 0x10cf80u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_10cf84:
    // 0x10cf84: 0x34420004
    ctx->pc = 0x10cf84u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4));
    // 0x10cf88: 0xa602000c
    ctx->pc = 0x10cf88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_10cf8c:
    // 0x10cf8c: 0x8e020030
    ctx->pc = 0x10cf8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x10cf90: 0x10400013
    ctx->pc = 0x10CF90u;
    {
        const bool branch_taken_0x10cf90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10CF94u;
        SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 17), 255));
        if (branch_taken_0x10cf90) {
            ctx->pc = 0x10CFE0u;
            goto label_10cfe0;
        }
    }
    ctx->pc = 0x10CF98u;
    // 0x10cf98: 0x8e020004
    ctx->pc = 0x10cf98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10cf9c: 0x8e030034
    ctx->pc = 0x10cf9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x10cfa0: 0x43102a
    ctx->pc = 0x10cfa0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x10cfa4: 0x54400008
    ctx->pc = 0x10CFA4u;
    {
        const bool branch_taken_0x10cfa4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x10cfa4) {
            ctx->pc = 0x10CFA8u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x10CFC8u;
            goto label_10cfc8;
        }
    }
    ctx->pc = 0x10CFACu;
    // 0x10cfac: 0xc04337e
    ctx->pc = 0x10CFACu;
    SET_GPR_U32(ctx, 31, 0x10CFB4u);
    ctx->pc = 0x10CFB0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10CDF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CDF8_0x10cdf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CFB4u; }
    }
    if (ctx->pc != 0x10CFB4u) { return; }
    ctx->pc = 0x10CFB4u;
    // 0x10cfb4: 0x50400004
    ctx->pc = 0x10CFB4u;
    {
        const bool branch_taken_0x10cfb4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x10cfb4) {
            ctx->pc = 0x10CFB8u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x10CFC8u;
            goto label_10cfc8;
        }
    }
    ctx->pc = 0x10CFBCu;
    // 0x10cfbc: 0x10000025
    ctx->pc = 0x10CFBCu;
    {
        const bool branch_taken_0x10cfbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10CFC0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x10cfbc) {
            ctx->pc = 0x10D054u;
            goto label_10d054;
        }
    }
    ctx->pc = 0x10CFC4u;
    // 0x10cfc4: 0x0
    ctx->pc = 0x10cfc4u;
    // NOP
label_10cfc8:
    // 0x10cfc8: 0x220102d
    ctx->pc = 0x10cfc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cfcc: 0x2484ffff
    ctx->pc = 0x10cfccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x10cfd0: 0xae040000
    ctx->pc = 0x10cfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x10cfd4: 0xa0910000
    ctx->pc = 0x10cfd4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x10cfd8: 0x1000000d
    ctx->pc = 0x10CFD8u;
    {
        const bool branch_taken_0x10cfd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10CFDCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        if (branch_taken_0x10cfd8) {
            ctx->pc = 0x10D010u;
            goto label_10d010;
        }
    }
    ctx->pc = 0x10CFE0u;
label_10cfe0:
    // 0x10cfe0: 0x8e020010
    ctx->pc = 0x10cfe0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10cfe4: 0x1040000e
    ctx->pc = 0x10CFE4u;
    {
        const bool branch_taken_0x10cfe4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10CFE8u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x10cfe4) {
            ctx->pc = 0x10D020u;
            goto label_10d020;
        }
    }
    ctx->pc = 0x10CFECu;
    // 0x10cfec: 0x47102b
    ctx->pc = 0x10cfecu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x10cff0: 0x1040000c
    ctx->pc = 0x10CFF0u;
    {
        const bool branch_taken_0x10cff0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10CFF4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        if (branch_taken_0x10cff0) {
            ctx->pc = 0x10D024u;
            goto label_10d024;
        }
    }
    ctx->pc = 0x10CFF8u;
    // 0x10cff8: 0x90e2ffff
    ctx->pc = 0x10cff8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967295)));
    // 0x10cffc: 0x14510009
    ctx->pc = 0x10CFFCu;
    {
        const bool branch_taken_0x10cffc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        if (branch_taken_0x10cffc) {
            ctx->pc = 0x10D024u;
            goto label_10d024;
        }
    }
    ctx->pc = 0x10D004u;
    // 0x10d004: 0x24e2ffff
    ctx->pc = 0x10d004u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x10d008: 0xae020000
    ctx->pc = 0x10d008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x10d00c: 0x220102d
    ctx->pc = 0x10d00cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10d010:
    // 0x10d010: 0x24630001
    ctx->pc = 0x10d010u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x10d014: 0x1000000f
    ctx->pc = 0x10D014u;
    {
        const bool branch_taken_0x10d014 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10D018u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x10d014) {
            ctx->pc = 0x10D054u;
            goto label_10d054;
        }
    }
    ctx->pc = 0x10D01Cu;
    // 0x10d01c: 0x0
    ctx->pc = 0x10d01cu;
    // NOP
label_10d020:
    // 0x10d020: 0x8e030004
    ctx->pc = 0x10d020u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10d024:
    // 0x10d024: 0x26040040
    ctx->pc = 0x10d024u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 64));
    // 0x10d028: 0x24050003
    ctx->pc = 0x10d028u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x10d02c: 0x26060042
    ctx->pc = 0x10d02cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 66));
    // 0x10d030: 0x24020001
    ctx->pc = 0x10d030u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d034: 0xae03003c
    ctx->pc = 0x10d034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x10d038: 0xae070038
    ctx->pc = 0x10d038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 7));
    // 0x10d03c: 0xae040030
    ctx->pc = 0x10d03cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 4));
    // 0x10d040: 0xae050034
    ctx->pc = 0x10d040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 5));
    // 0x10d044: 0xae060000
    ctx->pc = 0x10d044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x10d048: 0xa2110042
    ctx->pc = 0x10d048u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 66), (uint8_t)GPR_U32(ctx, 17));
    // 0x10d04c: 0xae020004
    ctx->pc = 0x10d04cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x10d050: 0x220102d
    ctx->pc = 0x10d050u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10d054:
    // 0x10d054: 0xdfb00000
    ctx->pc = 0x10d054u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d058: 0xdfb10008
    ctx->pc = 0x10d058u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10d05c: 0xdfbf0010
    ctx->pc = 0x10d05cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d060: 0x3e00008
    ctx->pc = 0x10D060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D064u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10CF20u: goto label_10cf20;
            case 0x10CF34u: goto label_10cf34;
            case 0x10CF84u: goto label_10cf84;
            case 0x10CF8Cu: goto label_10cf8c;
            case 0x10CFC8u: goto label_10cfc8;
            case 0x10CFE0u: goto label_10cfe0;
            case 0x10D010u: goto label_10d010;
            case 0x10D020u: goto label_10d020;
            case 0x10D024u: goto label_10d024;
            case 0x10D054u: goto label_10d054;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10D068u;
}
