#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013CF78
// Address: 0x13cf78 - 0x13d040
void sub_0013CF78_0x13cf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13cf78u;

    // 0x13cf78: 0x27bdfff0
    ctx->pc = 0x13cf78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13cf7c: 0xffb00000
    ctx->pc = 0x13cf7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13cf80: 0x80802d
    ctx->pc = 0x13cf80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cf84: 0x16000008
    ctx->pc = 0x13CF84u;
    {
        const bool branch_taken_0x13cf84 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x13CF88u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        if (branch_taken_0x13cf84) {
            ctx->pc = 0x13CFA8u;
            goto label_13cfa8;
        }
    }
    ctx->pc = 0x13CF8Cu;
    // 0x13cf8c: 0x3c040024
    ctx->pc = 0x13cf8cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13cf90: 0xdfb00000
    ctx->pc = 0x13cf90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13cf94: 0xdfbf0008
    ctx->pc = 0x13cf94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13cf98: 0x2484d368
    ctx->pc = 0x13cf98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955880));
    // 0x13cf9c: 0x804f53e
    ctx->pc = 0x13CF9Cu;
    ctx->pc = 0x13CFA0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13D4F8u;
    sub_0013D4F8_0x13d4f8(rdram, ctx, runtime); return;
    ctx->pc = 0x13CFA4u;
    // 0x13cfa4: 0x0
    ctx->pc = 0x13cfa4u;
    // NOP
label_13cfa8:
    // 0x13cfa8: 0x82020001
    ctx->pc = 0x13cfa8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x13cfac: 0x50400010
    ctx->pc = 0x13CFACu;
    {
        const bool branch_taken_0x13cfac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x13cfac) {
            ctx->pc = 0x13CFB0u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x13CFF0u;
            goto label_13cff0;
        }
    }
    ctx->pc = 0x13CFB4u;
    // 0x13cfb4: 0x8e040028
    ctx->pc = 0x13cfb4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x13cfb8: 0x10800008
    ctx->pc = 0x13CFB8u;
    {
        const bool branch_taken_0x13cfb8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x13CFBCu;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x13cfb8) {
            ctx->pc = 0x13CFDCu;
            goto label_13cfdc;
        }
    }
    ctx->pc = 0x13CFC0u;
    // 0x13cfc0: 0x82030002
    ctx->pc = 0x13cfc0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x13cfc4: 0x24020001
    ctx->pc = 0x13cfc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x13cfc8: 0x54620005
    ctx->pc = 0x13CFC8u;
    {
        const bool branch_taken_0x13cfc8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x13cfc8) {
            ctx->pc = 0x13CFCCu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
            ctx->pc = 0x13CFE0u;
            goto label_13cfe0;
        }
    }
    ctx->pc = 0x13CFD0u;
    // 0x13cfd0: 0xc04c1d2
    ctx->pc = 0x13CFD0u;
    SET_GPR_U32(ctx, 31, 0x13CFD8u);
    ctx->pc = 0x130748u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130748_0x130748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CFD8u; }
    }
    if (ctx->pc != 0x13CFD8u) { return; }
    ctx->pc = 0x13CFD8u;
    // 0x13cfd8: 0xa2000002
    ctx->pc = 0x13cfd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_13cfdc:
    // 0x13cfdc: 0xae00002c
    ctx->pc = 0x13cfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_13cfe0:
    // 0x13cfe0: 0xc04f3b4
    ctx->pc = 0x13CFE0u;
    SET_GPR_U32(ctx, 31, 0x13CFE8u);
    ctx->pc = 0x13CFE4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13CED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CED0_0x13ced0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CFE8u; }
    }
    if (ctx->pc != 0x13CFE8u) { return; }
    ctx->pc = 0x13CFE8u;
    // 0x13cfe8: 0xae000034
    ctx->pc = 0x13cfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x13cfec: 0xdfb00000
    ctx->pc = 0x13cfecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13cff0:
    // 0x13cff0: 0xdfbf0008
    ctx->pc = 0x13cff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13cff4: 0x3e00008
    ctx->pc = 0x13CFF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CFF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13CFA8u: goto label_13cfa8;
            case 0x13CFDCu: goto label_13cfdc;
            case 0x13CFE0u: goto label_13cfe0;
            case 0x13CFF0u: goto label_13cff0;
            case 0x13D020u: goto label_13d020;
            case 0x13D030u: goto label_13d030;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13CFFCu;
    // 0x13cffc: 0x0
    ctx->pc = 0x13cffcu;
    // NOP
    // 0x13d000: 0x27bdfff0
    ctx->pc = 0x13d000u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13d004: 0x14800006
    ctx->pc = 0x13D004u;
    {
        const bool branch_taken_0x13d004 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x13D008u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x13d004) {
            ctx->pc = 0x13D020u;
            goto label_13d020;
        }
    }
    ctx->pc = 0x13D00Cu;
    // 0x13d00c: 0x3c040024
    ctx->pc = 0x13d00cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13d010: 0xdfbf0000
    ctx->pc = 0x13d010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d014: 0x2484d368
    ctx->pc = 0x13d014u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955880));
    // 0x13d018: 0x804f53e
    ctx->pc = 0x13D018u;
    ctx->pc = 0x13D01Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13D4F8u;
    sub_0013D4F8_0x13d4f8(rdram, ctx, runtime); return;
    ctx->pc = 0x13D020u;
label_13d020:
    // 0x13d020: 0x24020001
    ctx->pc = 0x13d020u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d024: 0x54a20002
    ctx->pc = 0x13D024u;
    {
        const bool branch_taken_0x13d024 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        if (branch_taken_0x13d024) {
            ctx->pc = 0x13D028u;
            WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x13D030u;
            goto label_13d030;
        }
    }
    ctx->pc = 0x13D02Cu;
    // 0x13d02c: 0xa0850004
    ctx->pc = 0x13d02cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 5));
label_13d030:
    // 0x13d030: 0xdfbf0000
    ctx->pc = 0x13d030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d034: 0x3e00008
    ctx->pc = 0x13D034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D038u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13CFA8u: goto label_13cfa8;
            case 0x13CFDCu: goto label_13cfdc;
            case 0x13CFE0u: goto label_13cfe0;
            case 0x13CFF0u: goto label_13cff0;
            case 0x13D020u: goto label_13d020;
            case 0x13D030u: goto label_13d030;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13D03Cu;
    // 0x13d03c: 0x0
    ctx->pc = 0x13d03cu;
    // NOP
}
