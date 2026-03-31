#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015EFB8
// Address: 0x15efb8 - 0x15f0a8
void sub_0015EFB8_0x15efb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15efb8u;

    // 0x15efb8: 0x27bdffe0
    ctx->pc = 0x15efb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15efbc: 0xffb00000
    ctx->pc = 0x15efbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15efc0: 0x80802d
    ctx->pc = 0x15efc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15efc4: 0xffb10008
    ctx->pc = 0x15efc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15efc8: 0xffbf0010
    ctx->pc = 0x15efc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15efcc: 0xc05799e
    ctx->pc = 0x15EFCCu;
    SET_GPR_U32(ctx, 31, 0x15EFD4u);
    ctx->pc = 0x15EFD0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 492));
    ctx->pc = 0x15E678u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E678_0x15e678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EFD4u; }
    }
    if (ctx->pc != 0x15EFD4u) { return; }
    ctx->pc = 0x15EFD4u;
    // 0x15efd4: 0x8e020040
    ctx->pc = 0x15efd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x15efd8: 0x1040001d
    ctx->pc = 0x15EFD8u;
    {
        const bool branch_taken_0x15efd8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15EFDCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15efd8) {
            ctx->pc = 0x15F050u;
            goto label_15f050;
        }
    }
    ctx->pc = 0x15EFE0u;
    // 0x15efe0: 0xc0572f2
    ctx->pc = 0x15EFE0u;
    SET_GPR_U32(ctx, 31, 0x15EFE8u);
    ctx->pc = 0x15CBC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CBC8_0x15cbc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EFE8u; }
    }
    if (ctx->pc != 0x15EFE8u) { return; }
    ctx->pc = 0x15EFE8u;
    // 0x15efe8: 0x10400007
    ctx->pc = 0x15EFE8u;
    {
        const bool branch_taken_0x15efe8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15EFECu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x15efe8) {
            ctx->pc = 0x15F008u;
            goto label_15f008;
        }
    }
    ctx->pc = 0x15EFF0u;
    // 0x15eff0: 0x3c040024
    ctx->pc = 0x15eff0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x15eff4: 0xdfb00000
    ctx->pc = 0x15eff4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15eff8: 0xdfb10008
    ctx->pc = 0x15eff8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15effc: 0x2484f060
    ctx->pc = 0x15effcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963296));
    // 0x15f000: 0x8058dd4
    ctx->pc = 0x15F000u;
    ctx->pc = 0x15F004u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x163750u;
    sub_00163750_0x163750(rdram, ctx, runtime); return;
    ctx->pc = 0x15F008u;
label_15f008:
    // 0x15f008: 0xc058cb0
    ctx->pc = 0x15F008u;
    SET_GPR_U32(ctx, 31, 0x15F010u);
    ctx->pc = 0x15F00Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1632C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001632C0_0x1632c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F010u; }
    }
    if (ctx->pc != 0x15F010u) { return; }
    ctx->pc = 0x15F010u;
    // 0x15f010: 0xc057808
    ctx->pc = 0x15F010u;
    SET_GPR_U32(ctx, 31, 0x15F018u);
    ctx->pc = 0x15F014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15E020u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E020_0x15e020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F018u; }
    }
    if (ctx->pc != 0x15F018u) { return; }
    ctx->pc = 0x15F018u;
    // 0x15f018: 0xc05867e
    ctx->pc = 0x15F018u;
    SET_GPR_U32(ctx, 31, 0x15F020u);
    ctx->pc = 0x15F01Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1619F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001619F8_0x1619f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F020u; }
    }
    if (ctx->pc != 0x15F020u) { return; }
    ctx->pc = 0x15F020u;
    // 0x15f020: 0xc05865e
    ctx->pc = 0x15F020u;
    SET_GPR_U32(ctx, 31, 0x15F028u);
    ctx->pc = 0x15F024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x161978u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00161978_0x161978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F028u; }
    }
    if (ctx->pc != 0x15F028u) { return; }
    ctx->pc = 0x15F028u;
    // 0x15f028: 0x3c040024
    ctx->pc = 0x15f028u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x15f02c: 0x10400006
    ctx->pc = 0x15F02Cu;
    {
        const bool branch_taken_0x15f02c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15F030u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963344));
        if (branch_taken_0x15f02c) {
            ctx->pc = 0x15F048u;
            goto label_15f048;
        }
    }
    ctx->pc = 0x15F034u;
    // 0x15f034: 0xdfb00000
    ctx->pc = 0x15f034u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f038: 0xdfb10008
    ctx->pc = 0x15f038u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15f03c: 0xdfbf0010
    ctx->pc = 0x15f03cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f040: 0x8058dd4
    ctx->pc = 0x15F040u;
    ctx->pc = 0x15F044u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x163750u;
    sub_00163750_0x163750(rdram, ctx, runtime); return;
    ctx->pc = 0x15F048u;
label_15f048:
    // 0x15f048: 0xc058676
    ctx->pc = 0x15F048u;
    SET_GPR_U32(ctx, 31, 0x15F050u);
    ctx->pc = 0x15F04Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1619D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001619D8_0x1619d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F050u; }
    }
    if (ctx->pc != 0x15F050u) { return; }
    ctx->pc = 0x15F050u;
label_15f050:
    // 0x15f050: 0xc057c2a
    ctx->pc = 0x15F050u;
    SET_GPR_U32(ctx, 31, 0x15F058u);
    ctx->pc = 0x15F054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15F0A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F0A8_0x15f0a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F058u; }
    }
    if (ctx->pc != 0x15F058u) { return; }
    ctx->pc = 0x15F058u;
    // 0x15f058: 0xc057b92
    ctx->pc = 0x15F058u;
    SET_GPR_U32(ctx, 31, 0x15F060u);
    ctx->pc = 0x15F05Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15EE48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EE48_0x15ee48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F060u; }
    }
    if (ctx->pc != 0x15F060u) { return; }
    ctx->pc = 0x15F060u;
    // 0x15f060: 0x200202d
    ctx->pc = 0x15f060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f064: 0xc057cfc
    ctx->pc = 0x15F064u;
    SET_GPR_U32(ctx, 31, 0x15F06Cu);
    ctx->pc = 0x15F068u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 114)));
    ctx->pc = 0x15F3F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F3F0_0x15f3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F06Cu; }
    }
    if (ctx->pc != 0x15F06Cu) { return; }
    ctx->pc = 0x15F06Cu;
    // 0x15f06c: 0x220202d
    ctx->pc = 0x15f06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f070: 0xc058c1e
    ctx->pc = 0x15F070u;
    SET_GPR_U32(ctx, 31, 0x15F078u);
    ctx->pc = 0x15F074u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x163078u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163078_0x163078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F078u; }
    }
    if (ctx->pc != 0x15F078u) { return; }
    ctx->pc = 0x15F078u;
    // 0x15f078: 0xc058bbc
    ctx->pc = 0x15F078u;
    SET_GPR_U32(ctx, 31, 0x15F080u);
    ctx->pc = 0x15F07Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x162EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00162EF0_0x162ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F080u; }
    }
    if (ctx->pc != 0x15F080u) { return; }
    ctx->pc = 0x15F080u;
    // 0x15f080: 0xae000084
    ctx->pc = 0x15f080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x15f084: 0x24020001
    ctx->pc = 0x15f084u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f088: 0xa2000071
    ctx->pc = 0x15f088u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 0));
    // 0x15f08c: 0xae020008
    ctx->pc = 0x15f08cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x15f090: 0xdfb10008
    ctx->pc = 0x15f090u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15f094: 0xdfb00000
    ctx->pc = 0x15f094u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f098: 0xdfbf0010
    ctx->pc = 0x15f098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f09c: 0x3e00008
    ctx->pc = 0x15F09Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F0A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15F008u: goto label_15f008;
            case 0x15F048u: goto label_15f048;
            case 0x15F050u: goto label_15f050;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15F0A4u;
    // 0x15f0a4: 0x0
    ctx->pc = 0x15f0a4u;
    // NOP
}
