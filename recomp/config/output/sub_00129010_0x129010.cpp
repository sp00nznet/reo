#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00129010
// Address: 0x129010 - 0x1290c8
void sub_00129010_0x129010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x129010u;

    // 0x129010: 0x27bdfff0
    ctx->pc = 0x129010u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x129014: 0xa0182d
    ctx->pc = 0x129014u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129018: 0xffb00000
    ctx->pc = 0x129018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12901c: 0x80802d
    ctx->pc = 0x12901cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129020: 0xffbf0008
    ctx->pc = 0x129020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x129024: 0x14600006
    ctx->pc = 0x129024u;
    {
        const bool branch_taken_0x129024 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x129028u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x129024) {
            ctx->pc = 0x129040u;
            goto label_129040;
        }
    }
    ctx->pc = 0x12902Cu;
    // 0x12902c: 0x3c040024
    ctx->pc = 0x12902cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x129030: 0xc04a034
    ctx->pc = 0x129030u;
    SET_GPR_U32(ctx, 31, 0x129038u);
    ctx->pc = 0x129034u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942392));
    ctx->pc = 0x1280D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001280D0_0x1280d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129038u; }
    }
    if (ctx->pc != 0x129038u) { return; }
    ctx->pc = 0x129038u;
    // 0x129038: 0x1000001f
    ctx->pc = 0x129038u;
    {
        const bool branch_taken_0x129038 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12903Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x129038) {
            ctx->pc = 0x1290B8u;
            goto label_1290b8;
        }
    }
    ctx->pc = 0x129040u;
label_129040:
    // 0x129040: 0xae030038
    ctx->pc = 0x129040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x129044: 0x3c08000f
    ctx->pc = 0x129044u;
    SET_GPR_U32(ctx, 8, ((uint32_t)15 << 16));
    // 0x129048: 0xae020034
    ctx->pc = 0x129048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x12904c: 0x382d
    ctx->pc = 0x12904cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129050: 0x8e040004
    ctx->pc = 0x129050u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x129054: 0x3508ffff
    ctx->pc = 0x129054u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), 65535));
    // 0x129058: 0xc04c13a
    ctx->pc = 0x129058u;
    SET_GPR_U32(ctx, 31, 0x129060u);
    ctx->pc = 0x12905Cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    ctx->pc = 0x1304E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001304E8_0x1304e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129060u; }
    }
    if (ctx->pc != 0x129060u) { return; }
    ctx->pc = 0x129060u;
    // 0x129060: 0xc04c16e
    ctx->pc = 0x129060u;
    SET_GPR_U32(ctx, 31, 0x129068u);
    ctx->pc = 0x129064u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x1305B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001305B8_0x1305b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129068u; }
    }
    if (ctx->pc != 0x129068u) { return; }
    ctx->pc = 0x129068u;
    // 0x129068: 0x24030004
    ctx->pc = 0x129068u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x12906c: 0x14430006
    ctx->pc = 0x12906Cu;
    {
        const bool branch_taken_0x12906c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x12906c) {
            ctx->pc = 0x129088u;
            goto label_129088;
        }
    }
    ctx->pc = 0x129074u;
    // 0x129074: 0xc04c158
    ctx->pc = 0x129074u;
    SET_GPR_U32(ctx, 31, 0x12907Cu);
    ctx->pc = 0x129078u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x130560u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130560_0x130560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12907Cu; }
    }
    if (ctx->pc != 0x12907Cu) { return; }
    ctx->pc = 0x12907Cu;
    // 0x12907c: 0x1000000e
    ctx->pc = 0x12907Cu;
    {
        const bool branch_taken_0x12907c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x129080u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x12907c) {
            ctx->pc = 0x1290B8u;
            goto label_1290b8;
        }
    }
    ctx->pc = 0x129084u;
    // 0x129084: 0x0
    ctx->pc = 0x129084u;
    // NOP
label_129088:
    // 0x129088: 0xc04c390
    ctx->pc = 0x129088u;
    SET_GPR_U32(ctx, 31, 0x129090u);
    ctx->pc = 0x12908Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x130E40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130E40_0x130e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129090u; }
    }
    if (ctx->pc != 0x129090u) { return; }
    ctx->pc = 0x129090u;
    // 0x129090: 0xae00003c
    ctx->pc = 0x129090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x129094: 0x40182d
    ctx->pc = 0x129094u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129098: 0x28620000
    ctx->pc = 0x129098u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 0));
    // 0x12909c: 0x246407ff
    ctx->pc = 0x12909cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 2047));
    // 0x1290a0: 0xae030010
    ctx->pc = 0x1290a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1290a4: 0x82180b
    ctx->pc = 0x1290a4u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
    // 0x1290a8: 0x31ac3
    ctx->pc = 0x1290a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
    // 0x1290ac: 0x102d
    ctx->pc = 0x1290acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1290b0: 0xae030040
    ctx->pc = 0x1290b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x1290b4: 0xae03000c
    ctx->pc = 0x1290b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1290b8:
    // 0x1290b8: 0xdfb00000
    ctx->pc = 0x1290b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1290bc: 0xdfbf0008
    ctx->pc = 0x1290bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1290c0: 0x3e00008
    ctx->pc = 0x1290C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1290C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x129040u: goto label_129040;
            case 0x129088u: goto label_129088;
            case 0x1290B8u: goto label_1290b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1290C8u;
}
