#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012EF90
// Address: 0x12ef90 - 0x12f090
void sub_0012EF90_0x12ef90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12ef90u;

label_12ef90:
    // 0x12ef90: 0x27bdffc0
    ctx->pc = 0x12ef90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_12ef94:
    // 0x12ef94: 0xffb00010
    ctx->pc = 0x12ef94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_12ef98:
    // 0x12ef98: 0xffb10018
    ctx->pc = 0x12ef98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_12ef9c:
    // 0x12ef9c: 0xffb20020
    ctx->pc = 0x12ef9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_12efa0:
    // 0x12efa0: 0xffb30028
    ctx->pc = 0x12efa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_12efa4:
    // 0x12efa4: 0xffbf0030
    ctx->pc = 0x12efa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_12efa8:
    // 0x12efa8: 0x8c82006c
    ctx->pc = 0x12efa8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_12efac:
    // 0x12efac: 0x8c92000c
    ctx->pc = 0x12efacu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_12efb0:
    // 0x12efb0: 0x1c400003
label_12efb4:
    if (ctx->pc == 0x12EFB4u) {
        ctx->pc = 0x12EFB4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 44)));
        ctx->pc = 0x12EFB8u;
        goto label_12efb8;
    }
    ctx->pc = 0x12EFB0u;
    {
        const bool branch_taken_0x12efb0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x12EFB4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 44)));
        if (branch_taken_0x12efb0) {
            ctx->pc = 0x12EFC0u;
            goto label_12efc0;
        }
    }
    ctx->pc = 0x12EFB8u;
label_12efb8:
    // 0x12efb8: 0x1000000a
label_12efbc:
    if (ctx->pc == 0x12EFBCu) {
        ctx->pc = 0x12EFBCu;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->pc = 0x12EFC0u;
        goto label_12efc0;
    }
    ctx->pc = 0x12EFB8u;
    {
        const bool branch_taken_0x12efb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12EFBCu;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 4), 80)));
        if (branch_taken_0x12efb8) {
            ctx->pc = 0x12EFE4u;
            goto label_12efe4;
        }
    }
    ctx->pc = 0x12EFC0u;
label_12efc0:
    // 0x12efc0: 0x8c820050
    ctx->pc = 0x12efc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_12efc4:
    // 0x12efc4: 0xa21021
    ctx->pc = 0x12efc4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_12efc8:
    // 0x12efc8: 0x244307ff
    ctx->pc = 0x12efc8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 2047));
label_12efcc:
    // 0x12efcc: 0x24420ffe
    ctx->pc = 0x12efccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4094));
label_12efd0:
    // 0x12efd0: 0x28640000
    ctx->pc = 0x12efd0u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 3), 0));
label_12efd4:
    // 0x12efd4: 0x44180b
    ctx->pc = 0x12efd4u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 2));
label_12efd8:
    // 0x12efd8: 0x31ac3
    ctx->pc = 0x12efd8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
label_12efdc:
    // 0x12efdc: 0x31ac0
    ctx->pc = 0x12efdcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 11));
label_12efe0:
    // 0x12efe0: 0x658823
    ctx->pc = 0x12efe0u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_12efe4:
    // 0x12efe4: 0x8e430000
    ctx->pc = 0x12efe4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_12efe8:
    // 0x12efe8: 0x240202d
    ctx->pc = 0x12efe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12efec:
    // 0x12efec: 0x282d
    ctx->pc = 0x12efecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12eff0:
    // 0x12eff0: 0x8c620024
    ctx->pc = 0x12eff0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_12eff4:
    // 0x12eff4: 0x40f809
label_12eff8:
    if (ctx->pc == 0x12EFF8u) {
        ctx->pc = 0x12EFF8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->pc = 0x12EFFCu;
        goto label_12effc;
    }
    ctx->pc = 0x12EFF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12EFFCu);
        ctx->pc = 0x12EFF8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12EF90u: goto label_12ef90;
            case 0x12EF94u: goto label_12ef94;
            case 0x12EF98u: goto label_12ef98;
            case 0x12EF9Cu: goto label_12ef9c;
            case 0x12EFA0u: goto label_12efa0;
            case 0x12EFA4u: goto label_12efa4;
            case 0x12EFA8u: goto label_12efa8;
            case 0x12EFACu: goto label_12efac;
            case 0x12EFB0u: goto label_12efb0;
            case 0x12EFB4u: goto label_12efb4;
            case 0x12EFB8u: goto label_12efb8;
            case 0x12EFBCu: goto label_12efbc;
            case 0x12EFC0u: goto label_12efc0;
            case 0x12EFC4u: goto label_12efc4;
            case 0x12EFC8u: goto label_12efc8;
            case 0x12EFCCu: goto label_12efcc;
            case 0x12EFD0u: goto label_12efd0;
            case 0x12EFD4u: goto label_12efd4;
            case 0x12EFD8u: goto label_12efd8;
            case 0x12EFDCu: goto label_12efdc;
            case 0x12EFE0u: goto label_12efe0;
            case 0x12EFE4u: goto label_12efe4;
            case 0x12EFE8u: goto label_12efe8;
            case 0x12EFECu: goto label_12efec;
            case 0x12EFF0u: goto label_12eff0;
            case 0x12EFF4u: goto label_12eff4;
            case 0x12EFF8u: goto label_12eff8;
            case 0x12EFFCu: goto label_12effc;
            case 0x12F000u: goto label_12f000;
            case 0x12F004u: goto label_12f004;
            case 0x12F008u: goto label_12f008;
            case 0x12F00Cu: goto label_12f00c;
            case 0x12F010u: goto label_12f010;
            case 0x12F014u: goto label_12f014;
            case 0x12F018u: goto label_12f018;
            case 0x12F01Cu: goto label_12f01c;
            case 0x12F020u: goto label_12f020;
            case 0x12F024u: goto label_12f024;
            case 0x12F028u: goto label_12f028;
            case 0x12F02Cu: goto label_12f02c;
            case 0x12F030u: goto label_12f030;
            case 0x12F034u: goto label_12f034;
            case 0x12F038u: goto label_12f038;
            case 0x12F03Cu: goto label_12f03c;
            case 0x12F040u: goto label_12f040;
            case 0x12F044u: goto label_12f044;
            case 0x12F048u: goto label_12f048;
            case 0x12F04Cu: goto label_12f04c;
            case 0x12F050u: goto label_12f050;
            case 0x12F054u: goto label_12f054;
            case 0x12F058u: goto label_12f058;
            case 0x12F05Cu: goto label_12f05c;
            case 0x12F060u: goto label_12f060;
            case 0x12F064u: goto label_12f064;
            case 0x12F068u: goto label_12f068;
            case 0x12F06Cu: goto label_12f06c;
            case 0x12F070u: goto label_12f070;
            case 0x12F074u: goto label_12f074;
            case 0x12F078u: goto label_12f078;
            case 0x12F07Cu: goto label_12f07c;
            case 0x12F080u: goto label_12f080;
            case 0x12F084u: goto label_12f084;
            case 0x12F088u: goto label_12f088;
            case 0x12F08Cu: goto label_12f08c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12EFFCu; }
            if (ctx->pc != 0x12EFFCu) { return; }
        }
    }
    ctx->pc = 0x12EFFCu;
label_12effc:
    // 0x12effc: 0x51182a
    ctx->pc = 0x12effcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 17)));
label_12f000:
    // 0x12f000: 0x1460001b
label_12f004:
    if (ctx->pc == 0x12F004u) {
        ctx->pc = 0x12F004u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F008u;
        goto label_12f008;
    }
    ctx->pc = 0x12F000u;
    {
        const bool branch_taken_0x12f000 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x12F004u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12f000) {
            ctx->pc = 0x12F070u;
            goto label_12f070;
        }
    }
    ctx->pc = 0x12F008u;
label_12f008:
    // 0x12f008: 0x3a0202d
    ctx->pc = 0x12f008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12f00c:
    // 0x12f00c: 0x24050002
    ctx->pc = 0x12f00cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
label_12f010:
    // 0x12f010: 0x24060001
    ctx->pc = 0x12f010u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_12f014:
    // 0x12f014: 0x240382d
    ctx->pc = 0x12f014u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12f018:
    // 0x12f018: 0x34028001
    ctx->pc = 0x12f018u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32769));
label_12f01c:
    // 0x12f01c: 0xc04b7d4
label_12f020:
    if (ctx->pc == 0x12F020u) {
        ctx->pc = 0x12F020u;
        WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x12F024u;
        goto label_12f024;
    }
    ctx->pc = 0x12F01Cu;
    SET_GPR_U32(ctx, 31, 0x12F024u);
    ctx->pc = 0x12F020u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12DF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DF50_0x12df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F024u; }
    }
    if (ctx->pc != 0x12F024u) { return; }
    ctx->pc = 0x12F024u;
label_12f024:
    // 0x12f024: 0x3a0202d
    ctx->pc = 0x12f024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12f028:
    // 0x12f028: 0x24050002
    ctx->pc = 0x12f028u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
label_12f02c:
    // 0x12f02c: 0x24060001
    ctx->pc = 0x12f02cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_12f030:
    // 0x12f030: 0x240382d
    ctx->pc = 0x12f030u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12f034:
    // 0x12f034: 0xc04b7d4
label_12f038:
    if (ctx->pc == 0x12F038u) {
        ctx->pc = 0x12F038u;
        WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 16));
        ctx->pc = 0x12F03Cu;
        goto label_12f03c;
    }
    ctx->pc = 0x12F034u;
    SET_GPR_U32(ctx, 31, 0x12F03Cu);
    ctx->pc = 0x12F038u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 16));
    ctx->pc = 0x12DF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DF50_0x12df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F03Cu; }
    }
    if (ctx->pc != 0x12F03Cu) { return; }
    ctx->pc = 0x12F03Cu;
label_12f03c:
    // 0x12f03c: 0x1a00000b
label_12f040:
    if (ctx->pc == 0x12F040u) {
        ctx->pc = 0x12F040u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x12F044u;
        goto label_12f044;
    }
    ctx->pc = 0x12F03Cu;
    {
        const bool branch_taken_0x12f03c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12F040u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x12f03c) {
            ctx->pc = 0x12F06Cu;
            goto label_12f06c;
        }
    }
    ctx->pc = 0x12F044u;
label_12f044:
    // 0x12f044: 0x27b30002
    ctx->pc = 0x12f044u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 2));
label_12f048:
    // 0x12f048: 0x2630fffc
    ctx->pc = 0x12f048u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 4294967292));
label_12f04c:
    // 0x12f04c: 0x2610ffff
    ctx->pc = 0x12f04cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
label_12f050:
    // 0x12f050: 0x260202d
    ctx->pc = 0x12f050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12f054:
    // 0x12f054: 0x24050001
    ctx->pc = 0x12f054u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_12f058:
    // 0x12f058: 0x24060001
    ctx->pc = 0x12f058u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_12f05c:
    // 0x12f05c: 0xc04b7d4
label_12f060:
    if (ctx->pc == 0x12F060u) {
        ctx->pc = 0x12F060u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F064u;
        goto label_12f064;
    }
    ctx->pc = 0x12F05Cu;
    SET_GPR_U32(ctx, 31, 0x12F064u);
    ctx->pc = 0x12F060u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12DF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DF50_0x12df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F064u; }
    }
    if (ctx->pc != 0x12F064u) { return; }
    ctx->pc = 0x12F064u;
label_12f064:
    // 0x12f064: 0x1600fffa
label_12f068:
    if (ctx->pc == 0x12F068u) {
        ctx->pc = 0x12F068u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->pc = 0x12F06Cu;
        goto label_12f06c;
    }
    ctx->pc = 0x12F064u;
    {
        const bool branch_taken_0x12f064 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x12F068u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
        if (branch_taken_0x12f064) {
            ctx->pc = 0x12F050u;
            goto label_12f050;
        }
    }
    ctx->pc = 0x12F06Cu;
label_12f06c:
    // 0x12f06c: 0x220102d
    ctx->pc = 0x12f06cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12f070:
    // 0x12f070: 0xdfb00010
    ctx->pc = 0x12f070u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12f074:
    // 0x12f074: 0xdfb10018
    ctx->pc = 0x12f074u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_12f078:
    // 0x12f078: 0xdfb20020
    ctx->pc = 0x12f078u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12f07c:
    // 0x12f07c: 0xdfb30028
    ctx->pc = 0x12f07cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_12f080:
    // 0x12f080: 0xdfbf0030
    ctx->pc = 0x12f080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_12f084:
    // 0x12f084: 0x3e00008
label_12f088:
    if (ctx->pc == 0x12F088u) {
        ctx->pc = 0x12F088u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x12F08Cu;
        goto label_12f08c;
    }
    ctx->pc = 0x12F084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F088u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12EF90u: goto label_12ef90;
            case 0x12EF94u: goto label_12ef94;
            case 0x12EF98u: goto label_12ef98;
            case 0x12EF9Cu: goto label_12ef9c;
            case 0x12EFA0u: goto label_12efa0;
            case 0x12EFA4u: goto label_12efa4;
            case 0x12EFA8u: goto label_12efa8;
            case 0x12EFACu: goto label_12efac;
            case 0x12EFB0u: goto label_12efb0;
            case 0x12EFB4u: goto label_12efb4;
            case 0x12EFB8u: goto label_12efb8;
            case 0x12EFBCu: goto label_12efbc;
            case 0x12EFC0u: goto label_12efc0;
            case 0x12EFC4u: goto label_12efc4;
            case 0x12EFC8u: goto label_12efc8;
            case 0x12EFCCu: goto label_12efcc;
            case 0x12EFD0u: goto label_12efd0;
            case 0x12EFD4u: goto label_12efd4;
            case 0x12EFD8u: goto label_12efd8;
            case 0x12EFDCu: goto label_12efdc;
            case 0x12EFE0u: goto label_12efe0;
            case 0x12EFE4u: goto label_12efe4;
            case 0x12EFE8u: goto label_12efe8;
            case 0x12EFECu: goto label_12efec;
            case 0x12EFF0u: goto label_12eff0;
            case 0x12EFF4u: goto label_12eff4;
            case 0x12EFF8u: goto label_12eff8;
            case 0x12EFFCu: goto label_12effc;
            case 0x12F000u: goto label_12f000;
            case 0x12F004u: goto label_12f004;
            case 0x12F008u: goto label_12f008;
            case 0x12F00Cu: goto label_12f00c;
            case 0x12F010u: goto label_12f010;
            case 0x12F014u: goto label_12f014;
            case 0x12F018u: goto label_12f018;
            case 0x12F01Cu: goto label_12f01c;
            case 0x12F020u: goto label_12f020;
            case 0x12F024u: goto label_12f024;
            case 0x12F028u: goto label_12f028;
            case 0x12F02Cu: goto label_12f02c;
            case 0x12F030u: goto label_12f030;
            case 0x12F034u: goto label_12f034;
            case 0x12F038u: goto label_12f038;
            case 0x12F03Cu: goto label_12f03c;
            case 0x12F040u: goto label_12f040;
            case 0x12F044u: goto label_12f044;
            case 0x12F048u: goto label_12f048;
            case 0x12F04Cu: goto label_12f04c;
            case 0x12F050u: goto label_12f050;
            case 0x12F054u: goto label_12f054;
            case 0x12F058u: goto label_12f058;
            case 0x12F05Cu: goto label_12f05c;
            case 0x12F060u: goto label_12f060;
            case 0x12F064u: goto label_12f064;
            case 0x12F068u: goto label_12f068;
            case 0x12F06Cu: goto label_12f06c;
            case 0x12F070u: goto label_12f070;
            case 0x12F074u: goto label_12f074;
            case 0x12F078u: goto label_12f078;
            case 0x12F07Cu: goto label_12f07c;
            case 0x12F080u: goto label_12f080;
            case 0x12F084u: goto label_12f084;
            case 0x12F088u: goto label_12f088;
            case 0x12F08Cu: goto label_12f08c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12F08Cu;
label_12f08c:
    // 0x12f08c: 0x0
    ctx->pc = 0x12f08cu;
    // NOP
}
