#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001DCF34
// Address: 0x1dcf34 - 0x1dd0d8
void sub_001DCF34_0x1dcf34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1dcf34u;

    // 0x1dcf34: 0x27bdffe0
    ctx->pc = 0x1dcf34u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dcf38: 0xffbe0010
    ctx->pc = 0x1dcf38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x1dcf3c: 0xffbf0018
    ctx->pc = 0x1dcf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1dcf40: 0x3a0f02d
    ctx->pc = 0x1dcf40u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcf44: 0xafc40000
    ctx->pc = 0x1dcf44u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1dcf48: 0x8fc20000
    ctx->pc = 0x1dcf48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dcf4c: 0x8c420080
    ctx->pc = 0x1dcf4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1dcf50: 0xafc20004
    ctx->pc = 0x1dcf50u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x1dcf54: 0x24020002
    ctx->pc = 0x1dcf54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dcf58: 0x8fc30004
    ctx->pc = 0x1dcf58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1dcf5c: 0x10620020
    ctx->pc = 0x1DCF5Cu;
    {
        const bool branch_taken_0x1dcf5c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1dcf5c) {
            ctx->pc = 0x1DCFE0u;
            goto label_1dcfe0;
        }
    }
    ctx->pc = 0x1DCF64u;
    // 0x1dcf64: 0x8fc30004
    ctx->pc = 0x1dcf64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1dcf68: 0x2c620003
    ctx->pc = 0x1dcf68u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 3));
    // 0x1dcf6c: 0x10400007
    ctx->pc = 0x1DCF6Cu;
    {
        const bool branch_taken_0x1dcf6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dcf6c) {
            ctx->pc = 0x1DCF8Cu;
            goto label_1dcf8c;
        }
    }
    ctx->pc = 0x1DCF74u;
    // 0x1dcf74: 0x24020001
    ctx->pc = 0x1dcf74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dcf78: 0x8fc30004
    ctx->pc = 0x1dcf78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1dcf7c: 0x10620009
    ctx->pc = 0x1DCF7Cu;
    {
        const bool branch_taken_0x1dcf7c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1dcf7c) {
            ctx->pc = 0x1DCFA4u;
            goto label_1dcfa4;
        }
    }
    ctx->pc = 0x1DCF84u;
    // 0x1dcf84: 0x1000004e
    ctx->pc = 0x1DCF84u;
    {
        const bool branch_taken_0x1dcf84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dcf84) {
            ctx->pc = 0x1DD0C0u;
            goto label_1dd0c0;
        }
    }
    ctx->pc = 0x1DCF8Cu;
label_1dcf8c:
    // 0x1dcf8c: 0x24020003
    ctx->pc = 0x1dcf8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dcf90: 0x8fc30004
    ctx->pc = 0x1dcf90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1dcf94: 0x1062003d
    ctx->pc = 0x1DCF94u;
    {
        const bool branch_taken_0x1dcf94 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1dcf94) {
            ctx->pc = 0x1DD08Cu;
            goto label_1dd08c;
        }
    }
    ctx->pc = 0x1DCF9Cu;
    // 0x1dcf9c: 0x10000048
    ctx->pc = 0x1DCF9Cu;
    {
        const bool branch_taken_0x1dcf9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dcf9c) {
            ctx->pc = 0x1DD0C0u;
            goto label_1dd0c0;
        }
    }
    ctx->pc = 0x1DCFA4u;
label_1dcfa4:
    // 0x1dcfa4: 0x8fc50000
    ctx->pc = 0x1dcfa4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dcfa8: 0x8fc20000
    ctx->pc = 0x1dcfa8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dcfac: 0x8fc30000
    ctx->pc = 0x1dcfacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dcfb0: 0x8c44007c
    ctx->pc = 0x1dcfb0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1dcfb4: 0x8c62051c
    ctx->pc = 0x1dcfb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 1308)));
    // 0x1dcfb8: 0x821821
    ctx->pc = 0x1dcfb8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1dcfbc: 0x8ca204fc
    ctx->pc = 0x1dcfbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 1276)));
    // 0x1dcfc0: 0x62102b
    ctx->pc = 0x1dcfc0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dcfc4: 0x1040003e
    ctx->pc = 0x1DCFC4u;
    {
        const bool branch_taken_0x1dcfc4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dcfc4) {
            ctx->pc = 0x1DD0C0u;
            goto label_1dd0c0;
        }
    }
    ctx->pc = 0x1DCFCCu;
    // 0x1dcfcc: 0x8fc40000
    ctx->pc = 0x1dcfccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dcfd0: 0xc077cb8
    ctx->pc = 0x1DCFD0u;
    SET_GPR_U32(ctx, 31, 0x1DCFD8u);
    ctx->pc = 0x1DF2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF2E0_0x1df2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCFD8u; }
    }
    if (ctx->pc != 0x1DCFD8u) { return; }
    ctx->pc = 0x1DCFD8u;
    // 0x1dcfd8: 0x10000039
    ctx->pc = 0x1DCFD8u;
    {
        const bool branch_taken_0x1dcfd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dcfd8) {
            ctx->pc = 0x1DD0C0u;
            goto label_1dd0c0;
        }
    }
    ctx->pc = 0x1DCFE0u;
label_1dcfe0:
    // 0x1dcfe0: 0x8fc40000
    ctx->pc = 0x1dcfe0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dcfe4: 0x8fc20000
    ctx->pc = 0x1dcfe4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dcfe8: 0x8c42007c
    ctx->pc = 0x1dcfe8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1dcfec: 0x244301f4
    ctx->pc = 0x1dcfecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 500));
    // 0x1dcff0: 0x8c8204fc
    ctx->pc = 0x1dcff0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 1276)));
    // 0x1dcff4: 0x62102b
    ctx->pc = 0x1dcff4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dcff8: 0x10400031
    ctx->pc = 0x1DCFF8u;
    {
        const bool branch_taken_0x1dcff8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dcff8) {
            ctx->pc = 0x1DD0C0u;
            goto label_1dd0c0;
        }
    }
    ctx->pc = 0x1DD000u;
    // 0x1dd000: 0x8fc20000
    ctx->pc = 0x1dd000u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dd004: 0x8c420060
    ctx->pc = 0x1dd004u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1dd008: 0x24420008
    ctx->pc = 0x1dd008u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1dd00c: 0x40202d
    ctx->pc = 0x1dd00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd010: 0xc07c441
    ctx->pc = 0x1DD010u;
    SET_GPR_U32(ctx, 31, 0x1DD018u);
    ctx->pc = 0x1F1104u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1104_0x1f1104(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD018u; }
    }
    if (ctx->pc != 0x1DD018u) { return; }
    ctx->pc = 0x1DD018u;
    // 0x1dd018: 0x1440000d
    ctx->pc = 0x1DD018u;
    {
        const bool branch_taken_0x1dd018 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1dd018) {
            ctx->pc = 0x1DD050u;
            goto label_1dd050;
        }
    }
    ctx->pc = 0x1DD020u;
    // 0x1dd020: 0x8fc40000
    ctx->pc = 0x1dd020u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dd024: 0xc077344
    ctx->pc = 0x1DD024u;
    SET_GPR_U32(ctx, 31, 0x1DD02Cu);
    ctx->pc = 0x1DCD10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCD10_0x1dcd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD02Cu; }
    }
    if (ctx->pc != 0x1DD02Cu) { return; }
    ctx->pc = 0x1DD02Cu;
    // 0x1dd02c: 0x8fc30000
    ctx->pc = 0x1dd02cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dd030: 0x8fc20000
    ctx->pc = 0x1dd030u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dd034: 0x8c4204fc
    ctx->pc = 0x1dd034u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1276)));
    // 0x1dd038: 0xac62007c
    ctx->pc = 0x1dd038u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 2));
    // 0x1dd03c: 0x8fc30000
    ctx->pc = 0x1dd03cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dd040: 0x24020003
    ctx->pc = 0x1dd040u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dd044: 0xac620080
    ctx->pc = 0x1dd044u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x1dd048: 0x1000001d
    ctx->pc = 0x1DD048u;
    {
        const bool branch_taken_0x1dd048 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dd048) {
            ctx->pc = 0x1DD0C0u;
            goto label_1dd0c0;
        }
    }
    ctx->pc = 0x1DD050u;
label_1dd050:
    // 0x1dd050: 0x8fc50000
    ctx->pc = 0x1dd050u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dd054: 0x8fc20000
    ctx->pc = 0x1dd054u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dd058: 0x8fc30000
    ctx->pc = 0x1dd058u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dd05c: 0x8c44007c
    ctx->pc = 0x1dd05cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1dd060: 0x8c62051c
    ctx->pc = 0x1dd060u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 1308)));
    // 0x1dd064: 0x821821
    ctx->pc = 0x1dd064u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1dd068: 0x8ca204fc
    ctx->pc = 0x1dd068u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 1276)));
    // 0x1dd06c: 0x62102b
    ctx->pc = 0x1dd06cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dd070: 0x10400013
    ctx->pc = 0x1DD070u;
    {
        const bool branch_taken_0x1dd070 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dd070) {
            ctx->pc = 0x1DD0C0u;
            goto label_1dd0c0;
        }
    }
    ctx->pc = 0x1DD078u;
    // 0x1dd078: 0x8fc40000
    ctx->pc = 0x1dd078u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dd07c: 0xc077cb8
    ctx->pc = 0x1DD07Cu;
    SET_GPR_U32(ctx, 31, 0x1DD084u);
    ctx->pc = 0x1DF2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF2E0_0x1df2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD084u; }
    }
    if (ctx->pc != 0x1DD084u) { return; }
    ctx->pc = 0x1DD084u;
    // 0x1dd084: 0x1000000e
    ctx->pc = 0x1DD084u;
    {
        const bool branch_taken_0x1dd084 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dd084) {
            ctx->pc = 0x1DD0C0u;
            goto label_1dd0c0;
        }
    }
    ctx->pc = 0x1DD08Cu;
label_1dd08c:
    // 0x1dd08c: 0x8fc50000
    ctx->pc = 0x1dd08cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dd090: 0x8fc20000
    ctx->pc = 0x1dd090u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dd094: 0x8fc30000
    ctx->pc = 0x1dd094u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dd098: 0x8c44051c
    ctx->pc = 0x1dd098u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 1308)));
    // 0x1dd09c: 0x8c62007c
    ctx->pc = 0x1dd09cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x1dd0a0: 0x821821
    ctx->pc = 0x1dd0a0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1dd0a4: 0x8ca204fc
    ctx->pc = 0x1dd0a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 1276)));
    // 0x1dd0a8: 0x62102b
    ctx->pc = 0x1dd0a8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dd0ac: 0x10400004
    ctx->pc = 0x1DD0ACu;
    {
        const bool branch_taken_0x1dd0ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dd0ac) {
            ctx->pc = 0x1DD0C0u;
            goto label_1dd0c0;
        }
    }
    ctx->pc = 0x1DD0B4u;
    // 0x1dd0b4: 0x8fc40000
    ctx->pc = 0x1dd0b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dd0b8: 0xc077cb8
    ctx->pc = 0x1DD0B8u;
    SET_GPR_U32(ctx, 31, 0x1DD0C0u);
    ctx->pc = 0x1DF2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF2E0_0x1df2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD0C0u; }
    }
    if (ctx->pc != 0x1DD0C0u) { return; }
    ctx->pc = 0x1DD0C0u;
label_1dd0c0:
    // 0x1dd0c0: 0x3c0e82d
    ctx->pc = 0x1dd0c0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd0c4: 0xdfbe0010
    ctx->pc = 0x1dd0c4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd0c8: 0xdfbf0018
    ctx->pc = 0x1dd0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dd0cc: 0x27bd0020
    ctx->pc = 0x1dd0ccu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1dd0d0: 0x3e00008
    ctx->pc = 0x1DD0D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DCF8Cu: goto label_1dcf8c;
            case 0x1DCFA4u: goto label_1dcfa4;
            case 0x1DCFE0u: goto label_1dcfe0;
            case 0x1DD050u: goto label_1dd050;
            case 0x1DD08Cu: goto label_1dd08c;
            case 0x1DD0C0u: goto label_1dd0c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DD0D8u;
}
