#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016D460
// Address: 0x16d460 - 0x16d508
void sub_0016D460_0x16d460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16d460u;

    // 0x16d460: 0x27bdffd0
    ctx->pc = 0x16d460u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16d464: 0x3c020024
    ctx->pc = 0x16d464u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x16d468: 0xffb00010
    ctx->pc = 0x16d468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16d46c: 0x80802d
    ctx->pc = 0x16d46cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d470: 0xffb10018
    ctx->pc = 0x16d470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x16d474: 0xffbf0020
    ctx->pc = 0x16d474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16d478: 0x244205a8
    ctx->pc = 0x16d478u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1448));
    // 0x16d47c: 0x8e050000
    ctx->pc = 0x16d47cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16d480: 0x8ca3000c
    ctx->pc = 0x16d480u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x16d484: 0x10620006
    ctx->pc = 0x16D484u;
    {
        const bool branch_taken_0x16d484 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x16D488u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 3264));
        if (branch_taken_0x16d484) {
            ctx->pc = 0x16D4A0u;
            goto label_16d4a0;
        }
    }
    ctx->pc = 0x16D48Cu;
    // 0x16d48c: 0x3402ac44
    ctx->pc = 0x16d48cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 44100));
    // 0x16d490: 0xafa00000
    ctx->pc = 0x16d490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x16d494: 0x1000000a
    ctx->pc = 0x16D494u;
    {
        const bool branch_taken_0x16d494 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16D498u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x16d494) {
            ctx->pc = 0x16D4C0u;
            goto label_16d4c0;
        }
    }
    ctx->pc = 0x16D49Cu;
    // 0x16d49c: 0x0
    ctx->pc = 0x16d49cu;
    // NOP
label_16d4a0:
    // 0x16d4a0: 0x3a0282d
    ctx->pc = 0x16d4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d4a4: 0xc059ff0
    ctx->pc = 0x16D4A4u;
    SET_GPR_U32(ctx, 31, 0x16D4ACu);
    ctx->pc = 0x16D4A8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x167FC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167FC0_0x167fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D4ACu; }
    }
    if (ctx->pc != 0x16D4ACu) { return; }
    ctx->pc = 0x16D4ACu;
    // 0x16d4ac: 0x14400005
    ctx->pc = 0x16D4ACu;
    {
        const bool branch_taken_0x16d4ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16D4B0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x16d4ac) {
            ctx->pc = 0x16D4C4u;
            goto label_16d4c4;
        }
    }
    ctx->pc = 0x16D4B4u;
    // 0x16d4b4: 0x1000000e
    ctx->pc = 0x16D4B4u;
    {
        const bool branch_taken_0x16d4b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16D4B8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x16d4b4) {
            ctx->pc = 0x16D4F0u;
            goto label_16d4f0;
        }
    }
    ctx->pc = 0x16D4BCu;
    // 0x16d4bc: 0x0
    ctx->pc = 0x16d4bcu;
    // NOP
label_16d4c0:
    // 0x16d4c0: 0x8fa30000
    ctx->pc = 0x16d4c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16d4c4:
    // 0x16d4c4: 0x8e2201ac
    ctx->pc = 0x16d4c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 428)));
    // 0x16d4c8: 0x8e050d00
    ctx->pc = 0x16d4c8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 3328)));
    // 0x16d4cc: 0x431021
    ctx->pc = 0x16d4ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16d4d0: 0x8fa60004
    ctx->pc = 0x16d4d0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x16d4d4: 0xae2201ac
    ctx->pc = 0x16d4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 428), GPR_U32(ctx, 2));
    // 0x16d4d8: 0xc056ea0
    ctx->pc = 0x16D4D8u;
    SET_GPR_U32(ctx, 31, 0x16D4E0u);
    ctx->pc = 0x16D4DCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15BA80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BA80_0x15ba80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D4E0u; }
    }
    if (ctx->pc != 0x16D4E0u) { return; }
    ctx->pc = 0x16D4E0u;
    // 0x16d4e0: 0x8e230120
    ctx->pc = 0x16d4e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x16d4e4: 0x431023
    ctx->pc = 0x16d4e4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16d4e8: 0x28440000
    ctx->pc = 0x16d4e8u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 0));
    // 0x16d4ec: 0x4100b
    ctx->pc = 0x16d4ecu;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
label_16d4f0:
    // 0x16d4f0: 0xdfb00010
    ctx->pc = 0x16d4f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d4f4: 0xdfb10018
    ctx->pc = 0x16d4f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16d4f8: 0xdfbf0020
    ctx->pc = 0x16d4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d4fc: 0x3e00008
    ctx->pc = 0x16D4FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D500u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D4A0u: goto label_16d4a0;
            case 0x16D4C0u: goto label_16d4c0;
            case 0x16D4C4u: goto label_16d4c4;
            case 0x16D4F0u: goto label_16d4f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16D504u;
    // 0x16d504: 0x0
    ctx->pc = 0x16d504u;
    // NOP
}
