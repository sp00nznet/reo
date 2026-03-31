#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001DB914
// Address: 0x1db914 - 0x1dc1e8
void sub_001DB914_0x1db914(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1db914u;

    // 0x1db914: 0x27bdffc0
    ctx->pc = 0x1db914u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1db918: 0xffb00020
    ctx->pc = 0x1db918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1db91c: 0xffbe0028
    ctx->pc = 0x1db91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 30));
    // 0x1db920: 0xffbf0030
    ctx->pc = 0x1db920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1db924: 0x3a0f02d
    ctx->pc = 0x1db924u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db928: 0xafc40000
    ctx->pc = 0x1db928u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1db92c: 0x8fc20000
    ctx->pc = 0x1db92cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1db930: 0x8c420060
    ctx->pc = 0x1db930u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1db934: 0x24420008
    ctx->pc = 0x1db934u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1db938: 0x40202d
    ctx->pc = 0x1db938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db93c: 0xc07c441
    ctx->pc = 0x1DB93Cu;
    SET_GPR_U32(ctx, 31, 0x1DB944u);
    ctx->pc = 0x1F1104u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1104_0x1f1104(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB944u; }
    }
    if (ctx->pc != 0x1DB944u) { return; }
    ctx->pc = 0x1DB944u;
    // 0x1db944: 0x2c420002
    ctx->pc = 0x1db944u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x1db948: 0x10400004
    ctx->pc = 0x1DB948u;
    {
        const bool branch_taken_0x1db948 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1db948) {
            ctx->pc = 0x1DB95Cu;
            goto label_1db95c;
        }
    }
    ctx->pc = 0x1DB950u;
    // 0x1db950: 0x102d
    ctx->pc = 0x1db950u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db954: 0x1000021d
    ctx->pc = 0x1DB954u;
    {
        const bool branch_taken_0x1db954 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1db954) {
            ctx->pc = 0x1DC1CCu;
            goto label_1dc1cc;
        }
    }
    ctx->pc = 0x1DB95Cu;
label_1db95c:
    // 0x1db95c: 0x8fc20000
    ctx->pc = 0x1db95cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1db960: 0x8c420060
    ctx->pc = 0x1db960u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1db964: 0x24420008
    ctx->pc = 0x1db964u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1db968: 0x40202d
    ctx->pc = 0x1db968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db96c: 0xc07c6e1
    ctx->pc = 0x1DB96Cu;
    SET_GPR_U32(ctx, 31, 0x1DB974u);
    ctx->pc = 0x1F1B84u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1B84_0x1f1b84(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB974u; }
    }
    if (ctx->pc != 0x1DB974u) { return; }
    ctx->pc = 0x1DB974u;
    // 0x1db974: 0xafc20004
    ctx->pc = 0x1db974u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x1db978: 0x8fc20000
    ctx->pc = 0x1db978u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1db97c: 0x8c420060
    ctx->pc = 0x1db97cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1db980: 0x24420008
    ctx->pc = 0x1db980u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1db984: 0x40202d
    ctx->pc = 0x1db984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db988: 0x8fc50004
    ctx->pc = 0x1db988u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1db98c: 0xc07c5a2
    ctx->pc = 0x1DB98Cu;
    SET_GPR_U32(ctx, 31, 0x1DB994u);
    ctx->pc = 0x1F1688u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1688_0x1f1688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB994u; }
    }
    if (ctx->pc != 0x1DB994u) { return; }
    ctx->pc = 0x1DB994u;
    // 0x1db994: 0x10400004
    ctx->pc = 0x1DB994u;
    {
        const bool branch_taken_0x1db994 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1db994) {
            ctx->pc = 0x1DB9A8u;
            goto label_1db9a8;
        }
    }
    ctx->pc = 0x1DB99Cu;
    // 0x1db99c: 0x102d
    ctx->pc = 0x1db99cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db9a0: 0x1000020a
    ctx->pc = 0x1DB9A0u;
    {
        const bool branch_taken_0x1db9a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1db9a0) {
            ctx->pc = 0x1DC1CCu;
            goto label_1dc1cc;
        }
    }
    ctx->pc = 0x1DB9A8u;
label_1db9a8:
    // 0x1db9a8: 0x8fc40004
    ctx->pc = 0x1db9a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1db9ac: 0x24051000
    ctx->pc = 0x1db9acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1db9b0: 0xc07c670
    ctx->pc = 0x1DB9B0u;
    SET_GPR_U32(ctx, 31, 0x1DB9B8u);
    ctx->pc = 0x1F19C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F19C0_0x1f19c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB9B8u; }
    }
    if (ctx->pc != 0x1DB9B8u) { return; }
    ctx->pc = 0x1DB9B8u;
    // 0x1db9b8: 0x14400056
    ctx->pc = 0x1DB9B8u;
    {
        const bool branch_taken_0x1db9b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1db9b8) {
            ctx->pc = 0x1DBB14u;
            goto label_1dbb14;
        }
    }
    ctx->pc = 0x1DB9C0u;
    // 0x1db9c0: 0x8fc40004
    ctx->pc = 0x1db9c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1db9c4: 0xc07c6eb
    ctx->pc = 0x1DB9C4u;
    SET_GPR_U32(ctx, 31, 0x1DB9CCu);
    ctx->pc = 0x1F1BACu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1BAC_0x1f1bac(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB9CCu; }
    }
    if (ctx->pc != 0x1DB9CCu) { return; }
    ctx->pc = 0x1DB9CCu;
    // 0x1db9cc: 0xafc20008
    ctx->pc = 0x1db9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_1db9d0:
    // 0x1db9d0: 0x8fc20000
    ctx->pc = 0x1db9d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1db9d4: 0x8c420060
    ctx->pc = 0x1db9d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1db9d8: 0x24420008
    ctx->pc = 0x1db9d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1db9dc: 0x40202d
    ctx->pc = 0x1db9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db9e0: 0x8fc50008
    ctx->pc = 0x1db9e0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1db9e4: 0xc07c5a2
    ctx->pc = 0x1DB9E4u;
    SET_GPR_U32(ctx, 31, 0x1DB9ECu);
    ctx->pc = 0x1F1688u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1688_0x1f1688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB9ECu; }
    }
    if (ctx->pc != 0x1DB9ECu) { return; }
    ctx->pc = 0x1DB9ECu;
    // 0x1db9ec: 0x10400003
    ctx->pc = 0x1DB9ECu;
    {
        const bool branch_taken_0x1db9ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1db9ec) {
            ctx->pc = 0x1DB9FCu;
            goto label_1db9fc;
        }
    }
    ctx->pc = 0x1DB9F4u;
    // 0x1db9f4: 0x1000000f
    ctx->pc = 0x1DB9F4u;
    {
        const bool branch_taken_0x1db9f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1db9f4) {
            ctx->pc = 0x1DBA34u;
            goto label_1dba34;
        }
    }
    ctx->pc = 0x1DB9FCu;
label_1db9fc:
    // 0x1db9fc: 0x8fc40008
    ctx->pc = 0x1db9fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dba00: 0x24051000
    ctx->pc = 0x1dba00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1dba04: 0xc07c670
    ctx->pc = 0x1DBA04u;
    SET_GPR_U32(ctx, 31, 0x1DBA0Cu);
    ctx->pc = 0x1F19C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F19C0_0x1f19c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA0Cu; }
    }
    if (ctx->pc != 0x1DBA0Cu) { return; }
    ctx->pc = 0x1DBA0Cu;
    // 0x1dba0c: 0x10400003
    ctx->pc = 0x1DBA0Cu;
    {
        const bool branch_taken_0x1dba0c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dba0c) {
            ctx->pc = 0x1DBA1Cu;
            goto label_1dba1c;
        }
    }
    ctx->pc = 0x1DBA14u;
    // 0x1dba14: 0x10000007
    ctx->pc = 0x1DBA14u;
    {
        const bool branch_taken_0x1dba14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dba14) {
            ctx->pc = 0x1DBA34u;
            goto label_1dba34;
        }
    }
    ctx->pc = 0x1DBA1Cu;
label_1dba1c:
    // 0x1dba1c: 0x8fc40008
    ctx->pc = 0x1dba1cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dba20: 0xc07c6eb
    ctx->pc = 0x1DBA20u;
    SET_GPR_U32(ctx, 31, 0x1DBA28u);
    ctx->pc = 0x1F1BACu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1BAC_0x1f1bac(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA28u; }
    }
    if (ctx->pc != 0x1DBA28u) { return; }
    ctx->pc = 0x1DBA28u;
    // 0x1dba28: 0xafc20008
    ctx->pc = 0x1dba28u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x1dba2c: 0x1000ffe8
    ctx->pc = 0x1DBA2Cu;
    {
        const bool branch_taken_0x1dba2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dba2c) {
            ctx->pc = 0x1DB9D0u;
            goto label_1db9d0;
        }
    }
    ctx->pc = 0x1DBA34u;
label_1dba34:
    // 0x1dba34: 0x8fc20000
    ctx->pc = 0x1dba34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dba38: 0x8c420060
    ctx->pc = 0x1dba38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1dba3c: 0x24420008
    ctx->pc = 0x1dba3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1dba40: 0x40202d
    ctx->pc = 0x1dba40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dba44: 0x8fc50008
    ctx->pc = 0x1dba44u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dba48: 0xc07c5a2
    ctx->pc = 0x1DBA48u;
    SET_GPR_U32(ctx, 31, 0x1DBA50u);
    ctx->pc = 0x1F1688u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1688_0x1f1688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA50u; }
    }
    if (ctx->pc != 0x1DBA50u) { return; }
    ctx->pc = 0x1DBA50u;
    // 0x1dba50: 0x14400030
    ctx->pc = 0x1DBA50u;
    {
        const bool branch_taken_0x1dba50 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1dba50) {
            ctx->pc = 0x1DBB14u;
            goto label_1dbb14;
        }
    }
    ctx->pc = 0x1DBA58u;
    // 0x1dba58: 0x8fc40008
    ctx->pc = 0x1dba58u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dba5c: 0xc07cd0f
    ctx->pc = 0x1DBA5Cu;
    SET_GPR_U32(ctx, 31, 0x1DBA64u);
    ctx->pc = 0x1F343Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F343C_0x1f343c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA64u; }
    }
    if (ctx->pc != 0x1DBA64u) { return; }
    ctx->pc = 0x1DBA64u;
    // 0x1dba64: 0x8fc40004
    ctx->pc = 0x1dba64u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1dba68: 0x40282d
    ctx->pc = 0x1dba68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dba6c: 0xc07cd19
    ctx->pc = 0x1DBA6Cu;
    SET_GPR_U32(ctx, 31, 0x1DBA74u);
    ctx->pc = 0x1F3464u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F3464_0x1f3464(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA74u; }
    }
    if (ctx->pc != 0x1DBA74u) { return; }
    ctx->pc = 0x1DBA74u;
    // 0x1dba74: 0x8fc40004
    ctx->pc = 0x1dba74u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1dba78: 0x24051000
    ctx->pc = 0x1dba78u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1dba7c: 0xc07c680
    ctx->pc = 0x1DBA7Cu;
    SET_GPR_U32(ctx, 31, 0x1DBA84u);
    ctx->pc = 0x1F1A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1A00_0x1f1a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA84u; }
    }
    if (ctx->pc != 0x1DBA84u) { return; }
    ctx->pc = 0x1DBA84u;
    // 0x1dba84: 0x8fc40008
    ctx->pc = 0x1dba84u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dba88: 0x24051000
    ctx->pc = 0x1dba88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1dba8c: 0xc07c690
    ctx->pc = 0x1DBA8Cu;
    SET_GPR_U32(ctx, 31, 0x1DBA94u);
    ctx->pc = 0x1F1A40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1A40_0x1f1a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA94u; }
    }
    if (ctx->pc != 0x1DBA94u) { return; }
    ctx->pc = 0x1DBA94u;
    // 0x1dba94: 0x8fc40008
    ctx->pc = 0x1dba94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dba98: 0x24050200
    ctx->pc = 0x1dba98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 512));
    // 0x1dba9c: 0xc07c670
    ctx->pc = 0x1DBA9Cu;
    SET_GPR_U32(ctx, 31, 0x1DBAA4u);
    ctx->pc = 0x1F19C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F19C0_0x1f19c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBAA4u; }
    }
    if (ctx->pc != 0x1DBAA4u) { return; }
    ctx->pc = 0x1DBAA4u;
    // 0x1dbaa4: 0x1040001b
    ctx->pc = 0x1DBAA4u;
    {
        const bool branch_taken_0x1dbaa4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dbaa4) {
            ctx->pc = 0x1DBB14u;
            goto label_1dbb14;
        }
    }
    ctx->pc = 0x1DBAACu;
    // 0x1dbaac: 0x8fc20000
    ctx->pc = 0x1dbaacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dbab0: 0x8c420060
    ctx->pc = 0x1dbab0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1dbab4: 0x24420008
    ctx->pc = 0x1dbab4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1dbab8: 0x40202d
    ctx->pc = 0x1dbab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbabc: 0x8fc50008
    ctx->pc = 0x1dbabcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dbac0: 0xc07c4c3
    ctx->pc = 0x1DBAC0u;
    SET_GPR_U32(ctx, 31, 0x1DBAC8u);
    ctx->pc = 0x1F130Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F130C_0x1f130c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBAC8u; }
    }
    if (ctx->pc != 0x1DBAC8u) { return; }
    ctx->pc = 0x1DBAC8u;
    // 0x1dbac8: 0xafc20018
    ctx->pc = 0x1dbac8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x1dbacc: 0x8fc20018
    ctx->pc = 0x1dbaccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1dbad0: 0x10400004
    ctx->pc = 0x1DBAD0u;
    {
        const bool branch_taken_0x1dbad0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dbad0) {
            ctx->pc = 0x1DBAE4u;
            goto label_1dbae4;
        }
    }
    ctx->pc = 0x1DBAD8u;
    // 0x1dbad8: 0x8fc20018
    ctx->pc = 0x1dbad8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1dbadc: 0x100001bb
    ctx->pc = 0x1DBADCu;
    {
        const bool branch_taken_0x1dbadc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dbadc) {
            ctx->pc = 0x1DC1CCu;
            goto label_1dc1cc;
        }
    }
    ctx->pc = 0x1DBAE4u;
label_1dbae4:
    // 0x1dbae4: 0x8fc20000
    ctx->pc = 0x1dbae4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dbae8: 0x8c440520
    ctx->pc = 0x1dbae8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 1312)));
    // 0x1dbaec: 0x8fc50008
    ctx->pc = 0x1dbaecu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dbaf0: 0xc07ca04
    ctx->pc = 0x1DBAF0u;
    SET_GPR_U32(ctx, 31, 0x1DBAF8u);
    ctx->pc = 0x1F2810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F2810_0x1f2810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBAF8u; }
    }
    if (ctx->pc != 0x1DBAF8u) { return; }
    ctx->pc = 0x1DBAF8u;
    // 0x1dbaf8: 0xafc20018
    ctx->pc = 0x1dbaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x1dbafc: 0x8fc20018
    ctx->pc = 0x1dbafcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1dbb00: 0x10400004
    ctx->pc = 0x1DBB00u;
    {
        const bool branch_taken_0x1dbb00 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dbb00) {
            ctx->pc = 0x1DBB14u;
            goto label_1dbb14;
        }
    }
    ctx->pc = 0x1DBB08u;
    // 0x1dbb08: 0x8fc20018
    ctx->pc = 0x1dbb08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1dbb0c: 0x100001af
    ctx->pc = 0x1DBB0Cu;
    {
        const bool branch_taken_0x1dbb0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dbb0c) {
            ctx->pc = 0x1DC1CCu;
            goto label_1dc1cc;
        }
    }
    ctx->pc = 0x1DBB14u;
label_1dbb14:
    // 0x1dbb14: 0x8fc40004
    ctx->pc = 0x1dbb14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1dbb18: 0x24052000
    ctx->pc = 0x1dbb18u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1dbb1c: 0xc07c670
    ctx->pc = 0x1DBB1Cu;
    SET_GPR_U32(ctx, 31, 0x1DBB24u);
    ctx->pc = 0x1F19C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F19C0_0x1f19c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB24u; }
    }
    if (ctx->pc != 0x1DBB24u) { return; }
    ctx->pc = 0x1DBB24u;
    // 0x1dbb24: 0x10400004
    ctx->pc = 0x1DBB24u;
    {
        const bool branch_taken_0x1dbb24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dbb24) {
            ctx->pc = 0x1DBB38u;
            goto label_1dbb38;
        }
    }
    ctx->pc = 0x1DBB2Cu;
    // 0x1dbb2c: 0x102d
    ctx->pc = 0x1dbb2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbb30: 0x100001a6
    ctx->pc = 0x1DBB30u;
    {
        const bool branch_taken_0x1dbb30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dbb30) {
            ctx->pc = 0x1DC1CCu;
            goto label_1dc1cc;
        }
    }
    ctx->pc = 0x1DBB38u;
label_1dbb38:
    // 0x1dbb38: 0x8fc40004
    ctx->pc = 0x1dbb38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1dbb3c: 0x24050200
    ctx->pc = 0x1dbb3cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 512));
    // 0x1dbb40: 0xc07c670
    ctx->pc = 0x1DBB40u;
    SET_GPR_U32(ctx, 31, 0x1DBB48u);
    ctx->pc = 0x1F19C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F19C0_0x1f19c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB48u; }
    }
    if (ctx->pc != 0x1DBB48u) { return; }
    ctx->pc = 0x1DBB48u;
    // 0x1dbb48: 0x10400032
    ctx->pc = 0x1DBB48u;
    {
        const bool branch_taken_0x1dbb48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dbb48) {
            ctx->pc = 0x1DBC14u;
            goto label_1dbc14;
        }
    }
    ctx->pc = 0x1DBB50u;
    // 0x1dbb50: 0x8fc40004
    ctx->pc = 0x1dbb50u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1dbb54: 0xc07c6eb
    ctx->pc = 0x1DBB54u;
    SET_GPR_U32(ctx, 31, 0x1DBB5Cu);
    ctx->pc = 0x1F1BACu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1BAC_0x1f1bac(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB5Cu; }
    }
    if (ctx->pc != 0x1DBB5Cu) { return; }
    ctx->pc = 0x1DBB5Cu;
    // 0x1dbb5c: 0xafc20008
    ctx->pc = 0x1dbb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x1dbb60: 0x8fc40008
    ctx->pc = 0x1dbb60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dbb64: 0x24051000
    ctx->pc = 0x1dbb64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1dbb68: 0xc07c670
    ctx->pc = 0x1DBB68u;
    SET_GPR_U32(ctx, 31, 0x1DBB70u);
    ctx->pc = 0x1F19C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F19C0_0x1f19c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB70u; }
    }
    if (ctx->pc != 0x1DBB70u) { return; }
    ctx->pc = 0x1DBB70u;
    // 0x1dbb70: 0x14400028
    ctx->pc = 0x1DBB70u;
    {
        const bool branch_taken_0x1dbb70 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1dbb70) {
            ctx->pc = 0x1DBC14u;
            goto label_1dbc14;
        }
    }
    ctx->pc = 0x1DBB78u;
    // 0x1dbb78: 0x8fc40004
    ctx->pc = 0x1dbb78u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1dbb7c: 0xc07cd0f
    ctx->pc = 0x1DBB7Cu;
    SET_GPR_U32(ctx, 31, 0x1DBB84u);
    ctx->pc = 0x1F343Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F343C_0x1f343c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB84u; }
    }
    if (ctx->pc != 0x1DBB84u) { return; }
    ctx->pc = 0x1DBB84u;
    // 0x1dbb84: 0x8fc40008
    ctx->pc = 0x1dbb84u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dbb88: 0x40282d
    ctx->pc = 0x1dbb88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbb8c: 0xc07cd19
    ctx->pc = 0x1DBB8Cu;
    SET_GPR_U32(ctx, 31, 0x1DBB94u);
    ctx->pc = 0x1F3464u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F3464_0x1f3464(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB94u; }
    }
    if (ctx->pc != 0x1DBB94u) { return; }
    ctx->pc = 0x1DBB94u;
    // 0x1dbb94: 0x8fc40008
    ctx->pc = 0x1dbb94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dbb98: 0x24051000
    ctx->pc = 0x1dbb98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1dbb9c: 0xc07c680
    ctx->pc = 0x1DBB9Cu;
    SET_GPR_U32(ctx, 31, 0x1DBBA4u);
    ctx->pc = 0x1F1A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1A00_0x1f1a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBBA4u; }
    }
    if (ctx->pc != 0x1DBBA4u) { return; }
    ctx->pc = 0x1DBBA4u;
    // 0x1dbba4: 0x8fc20000
    ctx->pc = 0x1dbba4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dbba8: 0x8c420060
    ctx->pc = 0x1dbba8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1dbbac: 0x24420008
    ctx->pc = 0x1dbbacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1dbbb0: 0x40202d
    ctx->pc = 0x1dbbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbb4: 0x8fc50004
    ctx->pc = 0x1dbbb4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1dbbb8: 0xc07c4c3
    ctx->pc = 0x1DBBB8u;
    SET_GPR_U32(ctx, 31, 0x1DBBC0u);
    ctx->pc = 0x1F130Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F130C_0x1f130c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBBC0u; }
    }
    if (ctx->pc != 0x1DBBC0u) { return; }
    ctx->pc = 0x1DBBC0u;
    // 0x1dbbc0: 0xafc20018
    ctx->pc = 0x1dbbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x1dbbc4: 0x8fc20018
    ctx->pc = 0x1dbbc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1dbbc8: 0x10400004
    ctx->pc = 0x1DBBC8u;
    {
        const bool branch_taken_0x1dbbc8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dbbc8) {
            ctx->pc = 0x1DBBDCu;
            goto label_1dbbdc;
        }
    }
    ctx->pc = 0x1DBBD0u;
    // 0x1dbbd0: 0x8fc20018
    ctx->pc = 0x1dbbd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1dbbd4: 0x1000017d
    ctx->pc = 0x1DBBD4u;
    {
        const bool branch_taken_0x1dbbd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dbbd4) {
            ctx->pc = 0x1DC1CCu;
            goto label_1dc1cc;
        }
    }
    ctx->pc = 0x1DBBDCu;
label_1dbbdc:
    // 0x1dbbdc: 0x8fc20000
    ctx->pc = 0x1dbbdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dbbe0: 0x8c440520
    ctx->pc = 0x1dbbe0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 1312)));
    // 0x1dbbe4: 0x8fc50004
    ctx->pc = 0x1dbbe4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1dbbe8: 0xc07ca04
    ctx->pc = 0x1DBBE8u;
    SET_GPR_U32(ctx, 31, 0x1DBBF0u);
    ctx->pc = 0x1F2810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F2810_0x1f2810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBBF0u; }
    }
    if (ctx->pc != 0x1DBBF0u) { return; }
    ctx->pc = 0x1DBBF0u;
    // 0x1dbbf0: 0xafc20018
    ctx->pc = 0x1dbbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x1dbbf4: 0x8fc20018
    ctx->pc = 0x1dbbf4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1dbbf8: 0x10400004
    ctx->pc = 0x1DBBF8u;
    {
        const bool branch_taken_0x1dbbf8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dbbf8) {
            ctx->pc = 0x1DBC0Cu;
            goto label_1dbc0c;
        }
    }
    ctx->pc = 0x1DBC00u;
    // 0x1dbc00: 0x8fc20018
    ctx->pc = 0x1dbc00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1dbc04: 0x10000171
    ctx->pc = 0x1DBC04u;
    {
        const bool branch_taken_0x1dbc04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dbc04) {
            ctx->pc = 0x1DC1CCu;
            goto label_1dc1cc;
        }
    }
    ctx->pc = 0x1DBC0Cu;
label_1dbc0c:
    // 0x1dbc0c: 0x8fc20008
    ctx->pc = 0x1dbc0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dbc10: 0xafc20004
    ctx->pc = 0x1dbc10u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_1dbc14:
    // 0x1dbc14: 0x8fc40004
    ctx->pc = 0x1dbc14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1dbc18: 0x24052000
    ctx->pc = 0x1dbc18u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1dbc1c: 0xc07c670
    ctx->pc = 0x1DBC1Cu;
    SET_GPR_U32(ctx, 31, 0x1DBC24u);
    ctx->pc = 0x1F19C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F19C0_0x1f19c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBC24u; }
    }
    if (ctx->pc != 0x1DBC24u) { return; }
    ctx->pc = 0x1DBC24u;
    // 0x1dbc24: 0x14400009
    ctx->pc = 0x1DBC24u;
    {
        const bool branch_taken_0x1dbc24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1dbc24) {
            ctx->pc = 0x1DBC4Cu;
            goto label_1dbc4c;
        }
    }
    ctx->pc = 0x1DBC2Cu;
    // 0x1dbc2c: 0x8fc40004
    ctx->pc = 0x1dbc2cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1dbc30: 0x24050200
    ctx->pc = 0x1dbc30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 512));
    // 0x1dbc34: 0xc07c670
    ctx->pc = 0x1DBC34u;
    SET_GPR_U32(ctx, 31, 0x1DBC3Cu);
    ctx->pc = 0x1F19C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F19C0_0x1f19c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBC3Cu; }
    }
    if (ctx->pc != 0x1DBC3Cu) { return; }
    ctx->pc = 0x1DBC3Cu;
    // 0x1dbc3c: 0x14400003
    ctx->pc = 0x1DBC3Cu;
    {
        const bool branch_taken_0x1dbc3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1dbc3c) {
            ctx->pc = 0x1DBC4Cu;
            goto label_1dbc4c;
        }
    }
    ctx->pc = 0x1DBC44u;
    // 0x1dbc44: 0x10000004
    ctx->pc = 0x1DBC44u;
    {
        const bool branch_taken_0x1dbc44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dbc44) {
            ctx->pc = 0x1DBC58u;
            goto label_1dbc58;
        }
    }
    ctx->pc = 0x1DBC4Cu;
label_1dbc4c:
    // 0x1dbc4c: 0x102d
    ctx->pc = 0x1dbc4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc50: 0x1000015e
    ctx->pc = 0x1DBC50u;
    {
        const bool branch_taken_0x1dbc50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dbc50) {
            ctx->pc = 0x1DC1CCu;
            goto label_1dc1cc;
        }
    }
    ctx->pc = 0x1DBC58u;
label_1dbc58:
    // 0x1dbc58: 0x8fc20004
    ctx->pc = 0x1dbc58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1dbc5c: 0xafc20008
    ctx->pc = 0x1dbc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x1dbc60: 0x8fc40004
    ctx->pc = 0x1dbc60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1dbc64: 0x282d
    ctx->pc = 0x1dbc64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc68: 0xc07c680
    ctx->pc = 0x1DBC68u;
    SET_GPR_U32(ctx, 31, 0x1DBC70u);
    ctx->pc = 0x1F1A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1A00_0x1f1a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBC70u; }
    }
    if (ctx->pc != 0x1DBC70u) { return; }
    ctx->pc = 0x1DBC70u;
    // 0x1dbc70: 0xafc20014
    ctx->pc = 0x1dbc70u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x1dbc74: 0x24020004
    ctx->pc = 0x1dbc74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dbc78: 0xafc2001c
    ctx->pc = 0x1dbc78u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x1dbc7c: 0x24020001
    ctx->pc = 0x1dbc7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbc80: 0xafc20010
    ctx->pc = 0x1dbc80u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
label_1dbc84:
    // 0x1dbc84: 0x8fc20010
    ctx->pc = 0x1dbc84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1dbc88: 0x14400003
    ctx->pc = 0x1DBC88u;
    {
        const bool branch_taken_0x1dbc88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1dbc88) {
            ctx->pc = 0x1DBC98u;
            goto label_1dbc98;
        }
    }
    ctx->pc = 0x1DBC90u;
    // 0x1dbc90: 0x1000004c
    ctx->pc = 0x1DBC90u;
    {
        const bool branch_taken_0x1dbc90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dbc90) {
            ctx->pc = 0x1DBDC4u;
            goto label_1dbdc4;
        }
    }
    ctx->pc = 0x1DBC98u;
label_1dbc98:
    // 0x1dbc98: 0x8fc40008
    ctx->pc = 0x1dbc98u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dbc9c: 0xc07c6eb
    ctx->pc = 0x1DBC9Cu;
    SET_GPR_U32(ctx, 31, 0x1DBCA4u);
    ctx->pc = 0x1F1BACu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1BAC_0x1f1bac(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBCA4u; }
    }
    if (ctx->pc != 0x1DBCA4u) { return; }
    ctx->pc = 0x1DBCA4u;
    // 0x1dbca4: 0xafc20008
    ctx->pc = 0x1dbca4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x1dbca8: 0x8fc20000
    ctx->pc = 0x1dbca8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dbcac: 0x8c420060
    ctx->pc = 0x1dbcacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1dbcb0: 0x24420008
    ctx->pc = 0x1dbcb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1dbcb4: 0x40202d
    ctx->pc = 0x1dbcb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbcb8: 0x8fc50008
    ctx->pc = 0x1dbcb8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dbcbc: 0xc07c5a2
    ctx->pc = 0x1DBCBCu;
    SET_GPR_U32(ctx, 31, 0x1DBCC4u);
    ctx->pc = 0x1F1688u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1688_0x1f1688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBCC4u; }
    }
    if (ctx->pc != 0x1DBCC4u) { return; }
    ctx->pc = 0x1DBCC4u;
    // 0x1dbcc4: 0x10400003
    ctx->pc = 0x1DBCC4u;
    {
        const bool branch_taken_0x1dbcc4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dbcc4) {
            ctx->pc = 0x1DBCD4u;
            goto label_1dbcd4;
        }
    }
    ctx->pc = 0x1DBCCCu;
    // 0x1dbccc: 0x1000003d
    ctx->pc = 0x1DBCCCu;
    {
        const bool branch_taken_0x1dbccc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dbccc) {
            ctx->pc = 0x1DBDC4u;
            goto label_1dbdc4;
        }
    }
    ctx->pc = 0x1DBCD4u;
label_1dbcd4:
    // 0x1dbcd4: 0x8fc40008
    ctx->pc = 0x1dbcd4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dbcd8: 0x24050200
    ctx->pc = 0x1dbcd8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 512));
    // 0x1dbcdc: 0xc07c670
    ctx->pc = 0x1DBCDCu;
    SET_GPR_U32(ctx, 31, 0x1DBCE4u);
    ctx->pc = 0x1F19C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F19C0_0x1f19c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBCE4u; }
    }
    if (ctx->pc != 0x1DBCE4u) { return; }
    ctx->pc = 0x1DBCE4u;
    // 0x1dbce4: 0x1440ffe7
    ctx->pc = 0x1DBCE4u;
    {
        const bool branch_taken_0x1dbce4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1dbce4) {
            ctx->pc = 0x1DBC84u;
            goto label_1dbc84;
        }
    }
    ctx->pc = 0x1DBCECu;
    // 0x1dbcec: 0x8fc40008
    ctx->pc = 0x1dbcecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dbcf0: 0x24052000
    ctx->pc = 0x1dbcf0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1dbcf4: 0xc07c670
    ctx->pc = 0x1DBCF4u;
    SET_GPR_U32(ctx, 31, 0x1DBCFCu);
    ctx->pc = 0x1F19C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F19C0_0x1f19c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBCFCu; }
    }
    if (ctx->pc != 0x1DBCFCu) { return; }
    ctx->pc = 0x1DBCFCu;
    // 0x1dbcfc: 0x1440ffe1
    ctx->pc = 0x1DBCFCu;
    {
        const bool branch_taken_0x1dbcfc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1dbcfc) {
            ctx->pc = 0x1DBC84u;
            goto label_1dbc84;
        }
    }
    ctx->pc = 0x1DBD04u;
    // 0x1dbd04: 0x8fc40008
    ctx->pc = 0x1dbd04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dbd08: 0x24051000
    ctx->pc = 0x1dbd08u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1dbd0c: 0xc07c670
    ctx->pc = 0x1DBD0Cu;
    SET_GPR_U32(ctx, 31, 0x1DBD14u);
    ctx->pc = 0x1F19C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F19C0_0x1f19c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBD14u; }
    }
    if (ctx->pc != 0x1DBD14u) { return; }
    ctx->pc = 0x1DBD14u;
    // 0x1dbd14: 0x10400003
    ctx->pc = 0x1DBD14u;
    {
        const bool branch_taken_0x1dbd14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dbd14) {
            ctx->pc = 0x1DBD24u;
            goto label_1dbd24;
        }
    }
    ctx->pc = 0x1DBD1Cu;
    // 0x1dbd1c: 0x10000029
    ctx->pc = 0x1DBD1Cu;
    {
        const bool branch_taken_0x1dbd1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dbd1c) {
            ctx->pc = 0x1DBDC4u;
            goto label_1dbdc4;
        }
    }
    ctx->pc = 0x1DBD24u;
label_1dbd24:
    // 0x1dbd24: 0x8fc40008
    ctx->pc = 0x1dbd24u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dbd28: 0x282d
    ctx->pc = 0x1dbd28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd2c: 0xc07c680
    ctx->pc = 0x1DBD2Cu;
    SET_GPR_U32(ctx, 31, 0x1DBD34u);
    ctx->pc = 0x1F1A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1A00_0x1f1a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBD34u; }
    }
    if (ctx->pc != 0x1DBD34u) { return; }
    ctx->pc = 0x1DBD34u;
    // 0x1dbd34: 0x21400
    ctx->pc = 0x1dbd34u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x1dbd38: 0x21c03
    ctx->pc = 0x1dbd38u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1dbd3c: 0x87c20014
    ctx->pc = 0x1dbd3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1dbd40: 0x40202d
    ctx->pc = 0x1dbd40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd44: 0x60282d
    ctx->pc = 0x1dbd44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd48: 0xc076d66
    ctx->pc = 0x1DBD48u;
    SET_GPR_U32(ctx, 31, 0x1DBD50u);
    ctx->pc = 0x1DB598u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001DB598_0x1db598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBD50u; }
    }
    if (ctx->pc != 0x1DBD50u) { return; }
    ctx->pc = 0x1DBD50u;
    // 0x1dbd50: 0xafc20014
    ctx->pc = 0x1dbd50u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x1dbd54: 0x8fc30014
    ctx->pc = 0x1dbd54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1dbd58: 0x2402ffff
    ctx->pc = 0x1dbd58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dbd5c: 0x14620003
    ctx->pc = 0x1DBD5Cu;
    {
        const bool branch_taken_0x1dbd5c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1dbd5c) {
            ctx->pc = 0x1DBD6Cu;
            goto label_1dbd6c;
        }
    }
    ctx->pc = 0x1DBD64u;
    // 0x1dbd64: 0x10000017
    ctx->pc = 0x1DBD64u;
    {
        const bool branch_taken_0x1dbd64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dbd64) {
            ctx->pc = 0x1DBDC4u;
            goto label_1dbdc4;
        }
    }
    ctx->pc = 0x1DBD6Cu;
label_1dbd6c:
    // 0x1dbd6c: 0x8fc40008
    ctx->pc = 0x1dbd6cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dbd70: 0xc07c6b6
    ctx->pc = 0x1DBD70u;
    SET_GPR_U32(ctx, 31, 0x1DBD78u);
    ctx->pc = 0x1F1AD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1AD8_0x1f1ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBD78u; }
    }
    if (ctx->pc != 0x1DBD78u) { return; }
    ctx->pc = 0x1DBD78u;
    // 0x1dbd78: 0x40802d
    ctx->pc = 0x1dbd78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd7c: 0x8fc40004
    ctx->pc = 0x1dbd7cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1dbd80: 0xc07c6b6
    ctx->pc = 0x1DBD80u;
    SET_GPR_U32(ctx, 31, 0x1DBD88u);
    ctx->pc = 0x1F1AD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1AD8_0x1f1ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBD88u; }
    }
    if (ctx->pc != 0x1DBD88u) { return; }
    ctx->pc = 0x1DBD88u;
    // 0x1dbd88: 0x40182d
    ctx->pc = 0x1dbd88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd8c: 0x8fc2001c
    ctx->pc = 0x1dbd8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x1dbd90: 0x2021021
    ctx->pc = 0x1dbd90u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1dbd94: 0x431021
    ctx->pc = 0x1dbd94u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dbd98: 0x28420380
    ctx->pc = 0x1dbd98u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 896));
    // 0x1dbd9c: 0x10400009
    ctx->pc = 0x1DBD9Cu;
    {
        const bool branch_taken_0x1dbd9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dbd9c) {
            ctx->pc = 0x1DBDC4u;
            goto label_1dbdc4;
        }
    }
    ctx->pc = 0x1DBDA4u;
    // 0x1dbda4: 0x8fc40008
    ctx->pc = 0x1dbda4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dbda8: 0xc07c6b6
    ctx->pc = 0x1DBDA8u;
    SET_GPR_U32(ctx, 31, 0x1DBDB0u);
    ctx->pc = 0x1F1AD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1AD8_0x1f1ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBDB0u; }
    }
    if (ctx->pc != 0x1DBDB0u) { return; }
    ctx->pc = 0x1DBDB0u;
    // 0x1dbdb0: 0x8fc3001c
    ctx->pc = 0x1dbdb0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x1dbdb4: 0x621021
    ctx->pc = 0x1dbdb4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dbdb8: 0xafc2001c
    ctx->pc = 0x1dbdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x1dbdbc: 0x1000ffb1
    ctx->pc = 0x1DBDBCu;
    {
        const bool branch_taken_0x1dbdbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dbdbc) {
            ctx->pc = 0x1DBC84u;
            goto label_1dbc84;
        }
    }
    ctx->pc = 0x1DBDC4u;
label_1dbdc4:
    // 0x1dbdc4: 0x97c2001c
    ctx->pc = 0x1dbdc4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x1dbdc8: 0x8fc40004
    ctx->pc = 0x1dbdc8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1dbdcc: 0x40282d
    ctx->pc = 0x1dbdccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbdd0: 0xc07cc64
    ctx->pc = 0x1DBDD0u;
    SET_GPR_U32(ctx, 31, 0x1DBDD8u);
    ctx->pc = 0x1F3190u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F3190_0x1f3190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBDD8u; }
    }
    if (ctx->pc != 0x1DBDD8u) { return; }
    ctx->pc = 0x1DBDD8u;
    // 0x1dbdd8: 0x1440005b
    ctx->pc = 0x1DBDD8u;
    {
        const bool branch_taken_0x1dbdd8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1dbdd8) {
            ctx->pc = 0x1DBF48u;
            goto label_1dbf48;
        }
    }
    ctx->pc = 0x1DBDE0u;
    // 0x1dbde0: 0x8fc40004
    ctx->pc = 0x1dbde0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1dbde4: 0xc07c69f
    ctx->pc = 0x1DBDE4u;
    SET_GPR_U32(ctx, 31, 0x1DBDECu);
    ctx->pc = 0x1F1A7Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1A7C_0x1f1a7c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBDECu; }
    }
    if (ctx->pc != 0x1DBDECu) { return; }
    ctx->pc = 0x1DBDECu;
    // 0x1dbdec: 0x40182d
    ctx->pc = 0x1dbdecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbdf0: 0x24020002
    ctx->pc = 0x1dbdf0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dbdf4: 0x10620054
    ctx->pc = 0x1DBDF4u;
    {
        const bool branch_taken_0x1dbdf4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1dbdf4) {
            ctx->pc = 0x1DBF48u;
            goto label_1dbf48;
        }
    }
    ctx->pc = 0x1DBDFCu;
    // 0x1dbdfc: 0x8fc40004
    ctx->pc = 0x1dbdfcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1dbe00: 0xc07c6b6
    ctx->pc = 0x1DBE00u;
    SET_GPR_U32(ctx, 31, 0x1DBE08u);
    ctx->pc = 0x1F1AD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1AD8_0x1f1ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBE08u; }
    }
    if (ctx->pc != 0x1DBE08u) { return; }
    ctx->pc = 0x1DBE08u;
    // 0x1dbe08: 0x40182d
    ctx->pc = 0x1dbe08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbe0c: 0x97c2001c
    ctx->pc = 0x1dbe0cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x1dbe10: 0x621021
    ctx->pc = 0x1dbe10u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dbe14: 0x3046ffff
    ctx->pc = 0x1dbe14u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1dbe18: 0x8fc20000
    ctx->pc = 0x1dbe18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dbe1c: 0x27c30008
    ctx->pc = 0x1dbe1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 8));
    // 0x1dbe20: 0x8c440520
    ctx->pc = 0x1dbe20u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 1312)));
    // 0x1dbe24: 0x60282d
    ctx->pc = 0x1dbe24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbe28: 0x24070001
    ctx->pc = 0x1dbe28u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbe2c: 0x24080001
    ctx->pc = 0x1dbe2cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbe30: 0xc07c80a
    ctx->pc = 0x1DBE30u;
    SET_GPR_U32(ctx, 31, 0x1DBE38u);
    ctx->pc = 0x1F2028u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F2028_0x1f2028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBE38u; }
    }
    if (ctx->pc != 0x1DBE38u) { return; }
    ctx->pc = 0x1DBE38u;
    // 0x1dbe38: 0xafc20018
    ctx->pc = 0x1dbe38u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x1dbe3c: 0x8fc20018
    ctx->pc = 0x1dbe3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1dbe40: 0x14400041
    ctx->pc = 0x1DBE40u;
    {
        const bool branch_taken_0x1dbe40 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1dbe40) {
            ctx->pc = 0x1DBF48u;
            goto label_1dbf48;
        }
    }
    ctx->pc = 0x1DBE48u;
    // 0x1dbe48: 0x8fc40004
    ctx->pc = 0x1dbe48u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1dbe4c: 0xc07c6cd
    ctx->pc = 0x1DBE4Cu;
    SET_GPR_U32(ctx, 31, 0x1DBE54u);
    ctx->pc = 0x1F1B34u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1B34_0x1f1b34(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBE54u; }
    }
    if (ctx->pc != 0x1DBE54u) { return; }
    ctx->pc = 0x1DBE54u;
    // 0x1dbe54: 0x40802d
    ctx->pc = 0x1dbe54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbe58: 0x8fc40008
    ctx->pc = 0x1dbe58u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dbe5c: 0xc07c6cd
    ctx->pc = 0x1DBE5Cu;
    SET_GPR_U32(ctx, 31, 0x1DBE64u);
    ctx->pc = 0x1F1B34u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1B34_0x1f1b34(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBE64u; }
    }
    if (ctx->pc != 0x1DBE64u) { return; }
    ctx->pc = 0x1DBE64u;
    // 0x1dbe64: 0x202102b
    ctx->pc = 0x1dbe64u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1dbe68: 0x14400008
    ctx->pc = 0x1DBE68u;
    {
        const bool branch_taken_0x1dbe68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1dbe68) {
            ctx->pc = 0x1DBE8Cu;
            goto label_1dbe8c;
        }
    }
    ctx->pc = 0x1DBE70u;
    // 0x1dbe70: 0x8fc20000
    ctx->pc = 0x1dbe70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dbe74: 0x8c440520
    ctx->pc = 0x1dbe74u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 1312)));
    // 0x1dbe78: 0x8fc50008
    ctx->pc = 0x1dbe78u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dbe7c: 0xc07ca04
    ctx->pc = 0x1DBE7Cu;
    SET_GPR_U32(ctx, 31, 0x1DBE84u);
    ctx->pc = 0x1F2810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F2810_0x1f2810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBE84u; }
    }
    if (ctx->pc != 0x1DBE84u) { return; }
    ctx->pc = 0x1DBE84u;
    // 0x1dbe84: 0x10000030
    ctx->pc = 0x1DBE84u;
    {
        const bool branch_taken_0x1dbe84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dbe84) {
            ctx->pc = 0x1DBF48u;
            goto label_1dbf48;
        }
    }
    ctx->pc = 0x1DBE8Cu;
label_1dbe8c:
    // 0x1dbe8c: 0x8fc20000
    ctx->pc = 0x1dbe8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dbe90: 0x8c420060
    ctx->pc = 0x1dbe90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1dbe94: 0x24420008
    ctx->pc = 0x1dbe94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1dbe98: 0x40202d
    ctx->pc = 0x1dbe98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbe9c: 0x8fc50004
    ctx->pc = 0x1dbe9cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1dbea0: 0x8fc60008
    ctx->pc = 0x1dbea0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dbea4: 0xc07c4f7
    ctx->pc = 0x1DBEA4u;
    SET_GPR_U32(ctx, 31, 0x1DBEACu);
    ctx->pc = 0x1F13DCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F13DC_0x1f13dc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBEACu; }
    }
    if (ctx->pc != 0x1DBEACu) { return; }
    ctx->pc = 0x1DBEACu;
    // 0x1dbeac: 0xafc20018
    ctx->pc = 0x1dbeacu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x1dbeb0: 0x8fc20018
    ctx->pc = 0x1dbeb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1dbeb4: 0x10400004
    ctx->pc = 0x1DBEB4u;
    {
        const bool branch_taken_0x1dbeb4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dbeb4) {
            ctx->pc = 0x1DBEC8u;
            goto label_1dbec8;
        }
    }
    ctx->pc = 0x1DBEBCu;
    // 0x1dbebc: 0x8fc20018
    ctx->pc = 0x1dbebcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1dbec0: 0x100000c2
    ctx->pc = 0x1DBEC0u;
    {
        const bool branch_taken_0x1dbec0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dbec0) {
            ctx->pc = 0x1DC1CCu;
            goto label_1dc1cc;
        }
    }
    ctx->pc = 0x1DBEC8u;
label_1dbec8:
    // 0x1dbec8: 0x8fc40004
    ctx->pc = 0x1dbec8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1dbecc: 0x8fc50008
    ctx->pc = 0x1dbeccu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dbed0: 0xc07cdd5
    ctx->pc = 0x1DBED0u;
    SET_GPR_U32(ctx, 31, 0x1DBED8u);
    ctx->pc = 0x1F3754u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F3754_0x1f3754(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBED8u; }
    }
    if (ctx->pc != 0x1DBED8u) { return; }
    ctx->pc = 0x1DBED8u;
    // 0x1dbed8: 0xafc20018
    ctx->pc = 0x1dbed8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x1dbedc: 0x8fc20018
    ctx->pc = 0x1dbedcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1dbee0: 0x10400004
    ctx->pc = 0x1DBEE0u;
    {
        const bool branch_taken_0x1dbee0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dbee0) {
            ctx->pc = 0x1DBEF4u;
            goto label_1dbef4;
        }
    }
    ctx->pc = 0x1DBEE8u;
    // 0x1dbee8: 0x8fc20018
    ctx->pc = 0x1dbee8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1dbeec: 0x100000b7
    ctx->pc = 0x1DBEECu;
    {
        const bool branch_taken_0x1dbeec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dbeec) {
            ctx->pc = 0x1DC1CCu;
            goto label_1dc1cc;
        }
    }
    ctx->pc = 0x1DBEF4u;
label_1dbef4:
    // 0x1dbef4: 0x8fc20000
    ctx->pc = 0x1dbef4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dbef8: 0x8c420060
    ctx->pc = 0x1dbef8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1dbefc: 0x24420008
    ctx->pc = 0x1dbefcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1dbf00: 0x40202d
    ctx->pc = 0x1dbf00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbf04: 0x8fc50004
    ctx->pc = 0x1dbf04u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1dbf08: 0xc07c4c3
    ctx->pc = 0x1DBF08u;
    SET_GPR_U32(ctx, 31, 0x1DBF10u);
    ctx->pc = 0x1F130Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F130C_0x1f130c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBF10u; }
    }
    if (ctx->pc != 0x1DBF10u) { return; }
    ctx->pc = 0x1DBF10u;
    // 0x1dbf10: 0xafc20018
    ctx->pc = 0x1dbf10u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x1dbf14: 0x8fc20018
    ctx->pc = 0x1dbf14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1dbf18: 0x10400004
    ctx->pc = 0x1DBF18u;
    {
        const bool branch_taken_0x1dbf18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dbf18) {
            ctx->pc = 0x1DBF2Cu;
            goto label_1dbf2c;
        }
    }
    ctx->pc = 0x1DBF20u;
    // 0x1dbf20: 0x8fc20018
    ctx->pc = 0x1dbf20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1dbf24: 0x100000a9
    ctx->pc = 0x1DBF24u;
    {
        const bool branch_taken_0x1dbf24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dbf24) {
            ctx->pc = 0x1DC1CCu;
            goto label_1dc1cc;
        }
    }
    ctx->pc = 0x1DBF2Cu;
label_1dbf2c:
    // 0x1dbf2c: 0x8fc20000
    ctx->pc = 0x1dbf2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dbf30: 0x8c440520
    ctx->pc = 0x1dbf30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 1312)));
    // 0x1dbf34: 0x8fc50004
    ctx->pc = 0x1dbf34u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1dbf38: 0xc07ca04
    ctx->pc = 0x1DBF38u;
    SET_GPR_U32(ctx, 31, 0x1DBF40u);
    ctx->pc = 0x1F2810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F2810_0x1f2810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBF40u; }
    }
    if (ctx->pc != 0x1DBF40u) { return; }
    ctx->pc = 0x1DBF40u;
    // 0x1dbf40: 0x8fc20008
    ctx->pc = 0x1dbf40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dbf44: 0xafc20004
    ctx->pc = 0x1dbf44u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_1dbf48:
    // 0x1dbf48: 0x8fc20004
    ctx->pc = 0x1dbf48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1dbf4c: 0xafc20008
    ctx->pc = 0x1dbf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x1dbf50: 0x8fc2001c
    ctx->pc = 0x1dbf50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x1dbf54: 0x28420001
    ctx->pc = 0x1dbf54u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 1));
    // 0x1dbf58: 0x38420001
    ctx->pc = 0x1dbf58u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x1dbf5c: 0xafc20010
    ctx->pc = 0x1dbf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
label_1dbf60:
    // 0x1dbf60: 0x8fc20010
    ctx->pc = 0x1dbf60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1dbf64: 0x14400003
    ctx->pc = 0x1DBF64u;
    {
        const bool branch_taken_0x1dbf64 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1dbf64) {
            ctx->pc = 0x1DBF74u;
            goto label_1dbf74;
        }
    }
    ctx->pc = 0x1DBF6Cu;
    // 0x1dbf6c: 0x10000073
    ctx->pc = 0x1DBF6Cu;
    {
        const bool branch_taken_0x1dbf6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dbf6c) {
            ctx->pc = 0x1DC13Cu;
            goto label_1dc13c;
        }
    }
    ctx->pc = 0x1DBF74u;
label_1dbf74:
    // 0x1dbf74: 0x8fc40008
    ctx->pc = 0x1dbf74u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dbf78: 0xc07c6eb
    ctx->pc = 0x1DBF78u;
    SET_GPR_U32(ctx, 31, 0x1DBF80u);
    ctx->pc = 0x1F1BACu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1BAC_0x1f1bac(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBF80u; }
    }
    if (ctx->pc != 0x1DBF80u) { return; }
    ctx->pc = 0x1DBF80u;
    // 0x1dbf80: 0xafc20008
    ctx->pc = 0x1dbf80u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x1dbf84: 0x8fc20000
    ctx->pc = 0x1dbf84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dbf88: 0x8c420060
    ctx->pc = 0x1dbf88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1dbf8c: 0x24420008
    ctx->pc = 0x1dbf8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1dbf90: 0x40202d
    ctx->pc = 0x1dbf90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbf94: 0x8fc50008
    ctx->pc = 0x1dbf94u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dbf98: 0xc07c5a2
    ctx->pc = 0x1DBF98u;
    SET_GPR_U32(ctx, 31, 0x1DBFA0u);
    ctx->pc = 0x1F1688u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1688_0x1f1688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBFA0u; }
    }
    if (ctx->pc != 0x1DBFA0u) { return; }
    ctx->pc = 0x1DBFA0u;
    // 0x1dbfa0: 0x10400003
    ctx->pc = 0x1DBFA0u;
    {
        const bool branch_taken_0x1dbfa0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dbfa0) {
            ctx->pc = 0x1DBFB0u;
            goto label_1dbfb0;
        }
    }
    ctx->pc = 0x1DBFA8u;
    // 0x1dbfa8: 0x10000064
    ctx->pc = 0x1DBFA8u;
    {
        const bool branch_taken_0x1dbfa8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dbfa8) {
            ctx->pc = 0x1DC13Cu;
            goto label_1dc13c;
        }
    }
    ctx->pc = 0x1DBFB0u;
label_1dbfb0:
    // 0x1dbfb0: 0x8fc40008
    ctx->pc = 0x1dbfb0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dbfb4: 0x24050200
    ctx->pc = 0x1dbfb4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 512));
    // 0x1dbfb8: 0xc07c670
    ctx->pc = 0x1DBFB8u;
    SET_GPR_U32(ctx, 31, 0x1DBFC0u);
    ctx->pc = 0x1F19C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F19C0_0x1f19c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBFC0u; }
    }
    if (ctx->pc != 0x1DBFC0u) { return; }
    ctx->pc = 0x1DBFC0u;
    // 0x1dbfc0: 0x1440ffe7
    ctx->pc = 0x1DBFC0u;
    {
        const bool branch_taken_0x1dbfc0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1dbfc0) {
            ctx->pc = 0x1DBF60u;
            goto label_1dbf60;
        }
    }
    ctx->pc = 0x1DBFC8u;
    // 0x1dbfc8: 0x8fc40008
    ctx->pc = 0x1dbfc8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dbfcc: 0x24052000
    ctx->pc = 0x1dbfccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1dbfd0: 0xc07c670
    ctx->pc = 0x1DBFD0u;
    SET_GPR_U32(ctx, 31, 0x1DBFD8u);
    ctx->pc = 0x1F19C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F19C0_0x1f19c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBFD8u; }
    }
    if (ctx->pc != 0x1DBFD8u) { return; }
    ctx->pc = 0x1DBFD8u;
    // 0x1dbfd8: 0x1440ffe1
    ctx->pc = 0x1DBFD8u;
    {
        const bool branch_taken_0x1dbfd8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1dbfd8) {
            ctx->pc = 0x1DBF60u;
            goto label_1dbf60;
        }
    }
    ctx->pc = 0x1DBFE0u;
    // 0x1dbfe0: 0x8fc40008
    ctx->pc = 0x1dbfe0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dbfe4: 0x24051000
    ctx->pc = 0x1dbfe4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1dbfe8: 0xc07c670
    ctx->pc = 0x1DBFE8u;
    SET_GPR_U32(ctx, 31, 0x1DBFF0u);
    ctx->pc = 0x1F19C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F19C0_0x1f19c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBFF0u; }
    }
    if (ctx->pc != 0x1DBFF0u) { return; }
    ctx->pc = 0x1DBFF0u;
    // 0x1dbff0: 0x10400003
    ctx->pc = 0x1DBFF0u;
    {
        const bool branch_taken_0x1dbff0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dbff0) {
            ctx->pc = 0x1DC000u;
            goto label_1dc000;
        }
    }
    ctx->pc = 0x1DBFF8u;
    // 0x1dbff8: 0x10000050
    ctx->pc = 0x1DBFF8u;
    {
        const bool branch_taken_0x1dbff8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dbff8) {
            ctx->pc = 0x1DC13Cu;
            goto label_1dc13c;
        }
    }
    ctx->pc = 0x1DC000u;
label_1dc000:
    // 0x1dc000: 0x8fc40004
    ctx->pc = 0x1dc000u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1dc004: 0x282d
    ctx->pc = 0x1dc004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc008: 0xc07c680
    ctx->pc = 0x1DC008u;
    SET_GPR_U32(ctx, 31, 0x1DC010u);
    ctx->pc = 0x1F1A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1A00_0x1f1a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC010u; }
    }
    if (ctx->pc != 0x1DC010u) { return; }
    ctx->pc = 0x1DC010u;
    // 0x1dc010: 0x21400
    ctx->pc = 0x1dc010u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x1dc014: 0x28403
    ctx->pc = 0x1dc014u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1dc018: 0x8fc40008
    ctx->pc = 0x1dc018u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dc01c: 0x282d
    ctx->pc = 0x1dc01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc020: 0xc07c680
    ctx->pc = 0x1DC020u;
    SET_GPR_U32(ctx, 31, 0x1DC028u);
    ctx->pc = 0x1F1A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1A00_0x1f1a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC028u; }
    }
    if (ctx->pc != 0x1DC028u) { return; }
    ctx->pc = 0x1DC028u;
    // 0x1dc028: 0x21400
    ctx->pc = 0x1dc028u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x1dc02c: 0x21403
    ctx->pc = 0x1dc02cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1dc030: 0x200202d
    ctx->pc = 0x1dc030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc034: 0x40282d
    ctx->pc = 0x1dc034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc038: 0xc076d66
    ctx->pc = 0x1DC038u;
    SET_GPR_U32(ctx, 31, 0x1DC040u);
    ctx->pc = 0x1DB598u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001DB598_0x1db598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC040u; }
    }
    if (ctx->pc != 0x1DC040u) { return; }
    ctx->pc = 0x1DC040u;
    // 0x1dc040: 0xafc20014
    ctx->pc = 0x1dc040u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x1dc044: 0x8fc30014
    ctx->pc = 0x1dc044u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1dc048: 0x2402ffff
    ctx->pc = 0x1dc048u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dc04c: 0x14620003
    ctx->pc = 0x1DC04Cu;
    {
        const bool branch_taken_0x1dc04c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1dc04c) {
            ctx->pc = 0x1DC05Cu;
            goto label_1dc05c;
        }
    }
    ctx->pc = 0x1DC054u;
    // 0x1dc054: 0x10000039
    ctx->pc = 0x1DC054u;
    {
        const bool branch_taken_0x1dc054 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dc054) {
            ctx->pc = 0x1DC13Cu;
            goto label_1dc13c;
        }
    }
    ctx->pc = 0x1DC05Cu;
label_1dc05c:
    // 0x1dc05c: 0x8fc40004
    ctx->pc = 0x1dc05cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1dc060: 0x8fc50008
    ctx->pc = 0x1dc060u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dc064: 0xc07cda5
    ctx->pc = 0x1DC064u;
    SET_GPR_U32(ctx, 31, 0x1DC06Cu);
    ctx->pc = 0x1F3694u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F3694_0x1f3694(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC06Cu; }
    }
    if (ctx->pc != 0x1DC06Cu) { return; }
    ctx->pc = 0x1DC06Cu;
    // 0x1dc06c: 0xafc20018
    ctx->pc = 0x1dc06cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x1dc070: 0x8fc30018
    ctx->pc = 0x1dc070u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1dc074: 0x2402e0c2
    ctx->pc = 0x1dc074u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294959298));
    // 0x1dc078: 0x14620003
    ctx->pc = 0x1DC078u;
    {
        const bool branch_taken_0x1dc078 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1dc078) {
            ctx->pc = 0x1DC088u;
            goto label_1dc088;
        }
    }
    ctx->pc = 0x1DC080u;
    // 0x1dc080: 0x1000002e
    ctx->pc = 0x1DC080u;
    {
        const bool branch_taken_0x1dc080 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dc080) {
            ctx->pc = 0x1DC13Cu;
            goto label_1dc13c;
        }
    }
    ctx->pc = 0x1DC088u;
label_1dc088:
    // 0x1dc088: 0x8fc20018
    ctx->pc = 0x1dc088u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1dc08c: 0x10400004
    ctx->pc = 0x1DC08Cu;
    {
        const bool branch_taken_0x1dc08c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dc08c) {
            ctx->pc = 0x1DC0A0u;
            goto label_1dc0a0;
        }
    }
    ctx->pc = 0x1DC094u;
    // 0x1dc094: 0x8fc20018
    ctx->pc = 0x1dc094u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1dc098: 0x1000004c
    ctx->pc = 0x1DC098u;
    {
        const bool branch_taken_0x1dc098 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dc098) {
            ctx->pc = 0x1DC1CCu;
            goto label_1dc1cc;
        }
    }
    ctx->pc = 0x1DC0A0u;
label_1dc0a0:
    // 0x1dc0a0: 0x8fc20000
    ctx->pc = 0x1dc0a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dc0a4: 0x8c420060
    ctx->pc = 0x1dc0a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1dc0a8: 0x24420008
    ctx->pc = 0x1dc0a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1dc0ac: 0x40202d
    ctx->pc = 0x1dc0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc0b0: 0x8fc50008
    ctx->pc = 0x1dc0b0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dc0b4: 0xc07c4c3
    ctx->pc = 0x1DC0B4u;
    SET_GPR_U32(ctx, 31, 0x1DC0BCu);
    ctx->pc = 0x1F130Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F130C_0x1f130c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC0BCu; }
    }
    if (ctx->pc != 0x1DC0BCu) { return; }
    ctx->pc = 0x1DC0BCu;
    // 0x1dc0bc: 0xafc20018
    ctx->pc = 0x1dc0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x1dc0c0: 0x8fc20018
    ctx->pc = 0x1dc0c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1dc0c4: 0x10400004
    ctx->pc = 0x1DC0C4u;
    {
        const bool branch_taken_0x1dc0c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dc0c4) {
            ctx->pc = 0x1DC0D8u;
            goto label_1dc0d8;
        }
    }
    ctx->pc = 0x1DC0CCu;
    // 0x1dc0cc: 0x8fc20018
    ctx->pc = 0x1dc0ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1dc0d0: 0x1000003e
    ctx->pc = 0x1DC0D0u;
    {
        const bool branch_taken_0x1dc0d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dc0d0) {
            ctx->pc = 0x1DC1CCu;
            goto label_1dc1cc;
        }
    }
    ctx->pc = 0x1DC0D8u;
label_1dc0d8:
    // 0x1dc0d8: 0x8fc20000
    ctx->pc = 0x1dc0d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dc0dc: 0x8c440520
    ctx->pc = 0x1dc0dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 1312)));
    // 0x1dc0e0: 0x8fc50008
    ctx->pc = 0x1dc0e0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dc0e4: 0xc07ca04
    ctx->pc = 0x1DC0E4u;
    SET_GPR_U32(ctx, 31, 0x1DC0ECu);
    ctx->pc = 0x1F2810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F2810_0x1f2810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC0ECu; }
    }
    if (ctx->pc != 0x1DC0ECu) { return; }
    ctx->pc = 0x1DC0ECu;
    // 0x1dc0ec: 0xafc20018
    ctx->pc = 0x1dc0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x1dc0f0: 0x8fc20018
    ctx->pc = 0x1dc0f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1dc0f4: 0x10400004
    ctx->pc = 0x1DC0F4u;
    {
        const bool branch_taken_0x1dc0f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dc0f4) {
            ctx->pc = 0x1DC108u;
            goto label_1dc108;
        }
    }
    ctx->pc = 0x1DC0FCu;
    // 0x1dc0fc: 0x8fc20018
    ctx->pc = 0x1dc0fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1dc100: 0x10000032
    ctx->pc = 0x1DC100u;
    {
        const bool branch_taken_0x1dc100 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dc100) {
            ctx->pc = 0x1DC1CCu;
            goto label_1dc1cc;
        }
    }
    ctx->pc = 0x1DC108u;
label_1dc108:
    // 0x1dc108: 0x8fc40004
    ctx->pc = 0x1dc108u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1dc10c: 0x2405003f
    ctx->pc = 0x1dc10cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 63));
    // 0x1dc110: 0xc07c690
    ctx->pc = 0x1DC110u;
    SET_GPR_U32(ctx, 31, 0x1DC118u);
    ctx->pc = 0x1F1A40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1A40_0x1f1a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC118u; }
    }
    if (ctx->pc != 0x1DC118u) { return; }
    ctx->pc = 0x1DC118u;
    // 0x1dc118: 0x97c20014
    ctx->pc = 0x1dc118u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1dc11c: 0x8fc40004
    ctx->pc = 0x1dc11cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1dc120: 0x40282d
    ctx->pc = 0x1dc120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc124: 0xc07c680
    ctx->pc = 0x1DC124u;
    SET_GPR_U32(ctx, 31, 0x1DC12Cu);
    ctx->pc = 0x1F1A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1A00_0x1f1a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC12Cu; }
    }
    if (ctx->pc != 0x1DC12Cu) { return; }
    ctx->pc = 0x1DC12Cu;
    // 0x1dc12c: 0x8fc20004
    ctx->pc = 0x1dc12cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1dc130: 0xafc20008
    ctx->pc = 0x1dc130u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x1dc134: 0x1000ff8a
    ctx->pc = 0x1DC134u;
    {
        const bool branch_taken_0x1dc134 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dc134) {
            ctx->pc = 0x1DBF60u;
            goto label_1dbf60;
        }
    }
    ctx->pc = 0x1DC13Cu;
label_1dc13c:
    // 0x1dc13c: 0x8fc40004
    ctx->pc = 0x1dc13cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1dc140: 0x24050020
    ctx->pc = 0x1dc140u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1dc144: 0xc07c670
    ctx->pc = 0x1DC144u;
    SET_GPR_U32(ctx, 31, 0x1DC14Cu);
    ctx->pc = 0x1F19C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F19C0_0x1f19c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC14Cu; }
    }
    if (ctx->pc != 0x1DC14Cu) { return; }
    ctx->pc = 0x1DC14Cu;
    // 0x1dc14c: 0x14400015
    ctx->pc = 0x1DC14Cu;
    {
        const bool branch_taken_0x1dc14c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1dc14c) {
            ctx->pc = 0x1DC1A4u;
            goto label_1dc1a4;
        }
    }
    ctx->pc = 0x1DC154u;
    // 0x1dc154: 0x8fc40004
    ctx->pc = 0x1dc154u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1dc158: 0x24050004
    ctx->pc = 0x1dc158u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dc15c: 0xc07c670
    ctx->pc = 0x1DC15Cu;
    SET_GPR_U32(ctx, 31, 0x1DC164u);
    ctx->pc = 0x1F19C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F19C0_0x1f19c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC164u; }
    }
    if (ctx->pc != 0x1DC164u) { return; }
    ctx->pc = 0x1DC164u;
    // 0x1dc164: 0x1440000f
    ctx->pc = 0x1DC164u;
    {
        const bool branch_taken_0x1dc164 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1dc164) {
            ctx->pc = 0x1DC1A4u;
            goto label_1dc1a4;
        }
    }
    ctx->pc = 0x1DC16Cu;
    // 0x1dc16c: 0x8fc40004
    ctx->pc = 0x1dc16cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1dc170: 0x24050008
    ctx->pc = 0x1dc170u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1dc174: 0xc07c670
    ctx->pc = 0x1DC174u;
    SET_GPR_U32(ctx, 31, 0x1DC17Cu);
    ctx->pc = 0x1F19C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F19C0_0x1f19c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC17Cu; }
    }
    if (ctx->pc != 0x1DC17Cu) { return; }
    ctx->pc = 0x1DC17Cu;
    // 0x1dc17c: 0x14400009
    ctx->pc = 0x1DC17Cu;
    {
        const bool branch_taken_0x1dc17c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1dc17c) {
            ctx->pc = 0x1DC1A4u;
            goto label_1dc1a4;
        }
    }
    ctx->pc = 0x1DC184u;
    // 0x1dc184: 0x8fc40004
    ctx->pc = 0x1dc184u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1dc188: 0x24050010
    ctx->pc = 0x1dc188u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1dc18c: 0xc07c670
    ctx->pc = 0x1DC18Cu;
    SET_GPR_U32(ctx, 31, 0x1DC194u);
    ctx->pc = 0x1F19C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F19C0_0x1f19c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC194u; }
    }
    if (ctx->pc != 0x1DC194u) { return; }
    ctx->pc = 0x1DC194u;
    // 0x1dc194: 0x14400003
    ctx->pc = 0x1DC194u;
    {
        const bool branch_taken_0x1dc194 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1dc194) {
            ctx->pc = 0x1DC1A4u;
            goto label_1dc1a4;
        }
    }
    ctx->pc = 0x1DC19Cu;
    // 0x1dc19c: 0x1000000a
    ctx->pc = 0x1DC19Cu;
    {
        const bool branch_taken_0x1dc19c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dc19c) {
            ctx->pc = 0x1DC1C8u;
            goto label_1dc1c8;
        }
    }
    ctx->pc = 0x1DC1A4u;
label_1dc1a4:
    // 0x1dc1a4: 0x8fc40004
    ctx->pc = 0x1dc1a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1dc1a8: 0xc07cd3b
    ctx->pc = 0x1DC1A8u;
    SET_GPR_U32(ctx, 31, 0x1DC1B0u);
    ctx->pc = 0x1F34ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F34EC_0x1f34ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC1B0u; }
    }
    if (ctx->pc != 0x1DC1B0u) { return; }
    ctx->pc = 0x1DC1B0u;
    // 0x1dc1b0: 0xafc2000c
    ctx->pc = 0x1dc1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x1dc1b4: 0x8fc3000c
    ctx->pc = 0x1dc1b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1dc1b8: 0x8fc2000c
    ctx->pc = 0x1dc1b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1dc1bc: 0x94420000
    ctx->pc = 0x1dc1bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dc1c0: 0x34420800
    ctx->pc = 0x1dc1c0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2048));
    // 0x1dc1c4: 0xa4620000
    ctx->pc = 0x1dc1c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_1dc1c8:
    // 0x1dc1c8: 0x102d
    ctx->pc = 0x1dc1c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc1cc:
    // 0x1dc1cc: 0x3c0e82d
    ctx->pc = 0x1dc1ccu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc1d0: 0xdfb00020
    ctx->pc = 0x1dc1d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc1d4: 0xdfbe0028
    ctx->pc = 0x1dc1d4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dc1d8: 0xdfbf0030
    ctx->pc = 0x1dc1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dc1dc: 0x27bd0040
    ctx->pc = 0x1dc1dcu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    // 0x1dc1e0: 0x3e00008
    ctx->pc = 0x1DC1E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DB95Cu: goto label_1db95c;
            case 0x1DB9A8u: goto label_1db9a8;
            case 0x1DB9D0u: goto label_1db9d0;
            case 0x1DB9FCu: goto label_1db9fc;
            case 0x1DBA1Cu: goto label_1dba1c;
            case 0x1DBA34u: goto label_1dba34;
            case 0x1DBAE4u: goto label_1dbae4;
            case 0x1DBB14u: goto label_1dbb14;
            case 0x1DBB38u: goto label_1dbb38;
            case 0x1DBBDCu: goto label_1dbbdc;
            case 0x1DBC0Cu: goto label_1dbc0c;
            case 0x1DBC14u: goto label_1dbc14;
            case 0x1DBC4Cu: goto label_1dbc4c;
            case 0x1DBC58u: goto label_1dbc58;
            case 0x1DBC84u: goto label_1dbc84;
            case 0x1DBC98u: goto label_1dbc98;
            case 0x1DBCD4u: goto label_1dbcd4;
            case 0x1DBD24u: goto label_1dbd24;
            case 0x1DBD6Cu: goto label_1dbd6c;
            case 0x1DBDC4u: goto label_1dbdc4;
            case 0x1DBE8Cu: goto label_1dbe8c;
            case 0x1DBEC8u: goto label_1dbec8;
            case 0x1DBEF4u: goto label_1dbef4;
            case 0x1DBF2Cu: goto label_1dbf2c;
            case 0x1DBF48u: goto label_1dbf48;
            case 0x1DBF60u: goto label_1dbf60;
            case 0x1DBF74u: goto label_1dbf74;
            case 0x1DBFB0u: goto label_1dbfb0;
            case 0x1DC000u: goto label_1dc000;
            case 0x1DC05Cu: goto label_1dc05c;
            case 0x1DC088u: goto label_1dc088;
            case 0x1DC0A0u: goto label_1dc0a0;
            case 0x1DC0D8u: goto label_1dc0d8;
            case 0x1DC108u: goto label_1dc108;
            case 0x1DC13Cu: goto label_1dc13c;
            case 0x1DC1A4u: goto label_1dc1a4;
            case 0x1DC1C8u: goto label_1dc1c8;
            case 0x1DC1CCu: goto label_1dc1cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DC1E8u;
}
