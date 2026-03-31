#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016B470
// Address: 0x16b470 - 0x16b538
void sub_0016B470_0x16b470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16b470u;

    // 0x16b470: 0x27bdffe0
    ctx->pc = 0x16b470u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16b474: 0x24050006
    ctx->pc = 0x16b474u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x16b478: 0xffb00000
    ctx->pc = 0x16b478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16b47c: 0x80802d
    ctx->pc = 0x16b47cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b480: 0xffb10008
    ctx->pc = 0x16b480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16b484: 0xffbf0010
    ctx->pc = 0x16b484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16b488: 0xc05d58a
    ctx->pc = 0x16B488u;
    SET_GPR_U32(ctx, 31, 0x16B490u);
    ctx->pc = 0x16B48Cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 6892)));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B490u; }
    }
    if (ctx->pc != 0x16B490u) { return; }
    ctx->pc = 0x16B490u;
    // 0x16b490: 0x24030001
    ctx->pc = 0x16b490u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b494: 0x1443000d
    ctx->pc = 0x16B494u;
    {
        const bool branch_taken_0x16b494 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x16B498u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16b494) {
            ctx->pc = 0x16B4CCu;
            goto label_16b4cc;
        }
    }
    ctx->pc = 0x16B49Cu;
    // 0x16b49c: 0x8e220008
    ctx->pc = 0x16b49cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x16b4a0: 0x1440000a
    ctx->pc = 0x16B4A0u;
    {
        const bool branch_taken_0x16b4a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16b4a0) {
            ctx->pc = 0x16B4CCu;
            goto label_16b4cc;
        }
    }
    ctx->pc = 0x16B4A8u;
    // 0x16b4a8: 0xc05df12
    ctx->pc = 0x16B4A8u;
    SET_GPR_U32(ctx, 31, 0x16B4B0u);
    ctx->pc = 0x16B4ACu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x177C48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177C48_0x177c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B4B0u; }
    }
    if (ctx->pc != 0x16B4B0u) { return; }
    ctx->pc = 0x16B4B0u;
    // 0x16b4b0: 0x200202d
    ctx->pc = 0x16b4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b4b4: 0x24050006
    ctx->pc = 0x16b4b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x16b4b8: 0x10400004
    ctx->pc = 0x16B4B8u;
    {
        const bool branch_taken_0x16b4b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16B4BCu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16b4b8) {
            ctx->pc = 0x16B4CCu;
            goto label_16b4cc;
        }
    }
    ctx->pc = 0x16B4C0u;
    // 0x16b4c0: 0xc05d518
    ctx->pc = 0x16B4C0u;
    SET_GPR_U32(ctx, 31, 0x16B4C8u);
    ctx->pc = 0x175460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175460_0x175460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B4C8u; }
    }
    if (ctx->pc != 0x16B4C8u) { return; }
    ctx->pc = 0x16B4C8u;
    // 0x16b4c8: 0x200202d
    ctx->pc = 0x16b4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16b4cc:
    // 0x16b4cc: 0xc05d58a
    ctx->pc = 0x16B4CCu;
    SET_GPR_U32(ctx, 31, 0x16B4D4u);
    ctx->pc = 0x16B4D0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B4D4u; }
    }
    if (ctx->pc != 0x16B4D4u) { return; }
    ctx->pc = 0x16B4D4u;
    // 0x16b4d4: 0x24030001
    ctx->pc = 0x16b4d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b4d8: 0x54430012
    ctx->pc = 0x16B4D8u;
    {
        const bool branch_taken_0x16b4d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x16b4d8) {
            ctx->pc = 0x16B4DCu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x16B524u;
            goto label_16b524;
        }
    }
    ctx->pc = 0x16B4E0u;
    // 0x16b4e0: 0x8e220004
    ctx->pc = 0x16b4e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x16b4e4: 0x5440000f
    ctx->pc = 0x16B4E4u;
    {
        const bool branch_taken_0x16b4e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16b4e4) {
            ctx->pc = 0x16B4E8u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x16B524u;
            goto label_16b524;
        }
    }
    ctx->pc = 0x16B4ECu;
    // 0x16b4ec: 0x200202d
    ctx->pc = 0x16b4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b4f0: 0xc05df12
    ctx->pc = 0x16B4F0u;
    SET_GPR_U32(ctx, 31, 0x16B4F8u);
    ctx->pc = 0x16B4F4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x177C48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177C48_0x177c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B4F8u; }
    }
    if (ctx->pc != 0x16B4F8u) { return; }
    ctx->pc = 0x16B4F8u;
    // 0x16b4f8: 0x200202d
    ctx->pc = 0x16b4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b4fc: 0x24050005
    ctx->pc = 0x16b4fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x16b500: 0x10400007
    ctx->pc = 0x16B500u;
    {
        const bool branch_taken_0x16b500 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16B504u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16b500) {
            ctx->pc = 0x16B520u;
            goto label_16b520;
        }
    }
    ctx->pc = 0x16B508u;
    // 0x16b508: 0xdfb00000
    ctx->pc = 0x16b508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b50c: 0xdfb10008
    ctx->pc = 0x16b50cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b510: 0xdfbf0010
    ctx->pc = 0x16b510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b514: 0x805d518
    ctx->pc = 0x16B514u;
    ctx->pc = 0x16B518u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x175460u;
    sub_00175460_0x175460(rdram, ctx, runtime); return;
    ctx->pc = 0x16B51Cu;
    // 0x16b51c: 0x0
    ctx->pc = 0x16b51cu;
    // NOP
label_16b520:
    // 0x16b520: 0xdfb00000
    ctx->pc = 0x16b520u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16b524:
    // 0x16b524: 0xdfb10008
    ctx->pc = 0x16b524u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b528: 0xdfbf0010
    ctx->pc = 0x16b528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b52c: 0x3e00008
    ctx->pc = 0x16B52Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B530u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16B4CCu: goto label_16b4cc;
            case 0x16B520u: goto label_16b520;
            case 0x16B524u: goto label_16b524;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16B534u;
    // 0x16b534: 0x0
    ctx->pc = 0x16b534u;
    // NOP
}
