#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001813F0
// Address: 0x1813f0 - 0x1814a8
void sub_001813F0_0x1813f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1813f0u;

    // 0x1813f0: 0x3c030023
    ctx->pc = 0x1813f0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x1813f4: 0x27bdffe0
    ctx->pc = 0x1813f4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1813f8: 0x8c66fa10
    ctx->pc = 0x1813f8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 4294965776)));
    // 0x1813fc: 0x3c028101
    ctx->pc = 0x1813fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x181400: 0xffb10008
    ctx->pc = 0x181400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x181404: 0xa0882d
    ctx->pc = 0x181404u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181408: 0xffb20010
    ctx->pc = 0x181408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18140c: 0x80902d
    ctx->pc = 0x18140cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181410: 0xffb00000
    ctx->pc = 0x181410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x181414: 0x34428001
    ctx->pc = 0x181414u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32769));
    // 0x181418: 0x10c0001d
    ctx->pc = 0x181418u;
    {
        const bool branch_taken_0x181418 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x18141Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        if (branch_taken_0x181418) {
            ctx->pc = 0x181490u;
            goto label_181490;
        }
    }
    ctx->pc = 0x181420u;
    // 0x181420: 0xc061e90
    ctx->pc = 0x181420u;
    SET_GPR_U32(ctx, 31, 0x181428u);
    ctx->pc = 0x187A40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00187A40_0x187a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181428u; }
    }
    if (ctx->pc != 0x181428u) { return; }
    ctx->pc = 0x181428u;
    // 0x181428: 0x3c030028
    ctx->pc = 0x181428u;
    SET_GPR_U32(ctx, 3, ((uint32_t)40 << 16));
    // 0x18142c: 0x14400004
    ctx->pc = 0x18142Cu;
    {
        const bool branch_taken_0x18142c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x181430u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 4294939904));
        if (branch_taken_0x18142c) {
            ctx->pc = 0x181440u;
            goto label_181440;
        }
    }
    ctx->pc = 0x181434u;
    // 0x181434: 0x3c028101
    ctx->pc = 0x181434u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x181438: 0x10000015
    ctx->pc = 0x181438u;
    {
        const bool branch_taken_0x181438 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18143Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32770));
        if (branch_taken_0x181438) {
            ctx->pc = 0x181490u;
            goto label_181490;
        }
    }
    ctx->pc = 0x181440u;
label_181440:
    // 0x181440: 0x8e030004
    ctx->pc = 0x181440u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x181444: 0x3c028101
    ctx->pc = 0x181444u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x181448: 0x14600011
    ctx->pc = 0x181448u;
    {
        const bool branch_taken_0x181448 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x18144Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16));
        if (branch_taken_0x181448) {
            ctx->pc = 0x181490u;
            goto label_181490;
        }
    }
    ctx->pc = 0x181450u;
    // 0x181450: 0xc042c56
    ctx->pc = 0x181450u;
    SET_GPR_U32(ctx, 31, 0x181458u);
    ctx->pc = 0x181454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181458u; }
    }
    if (ctx->pc != 0x181458u) { return; }
    ctx->pc = 0x181458u;
    // 0x181458: 0x220282d
    ctx->pc = 0x181458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18145c: 0x2c430080
    ctx->pc = 0x18145cu;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 2), 128));
    // 0x181460: 0x3c028101
    ctx->pc = 0x181460u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x181464: 0x2604041c
    ctx->pc = 0x181464u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1052));
    // 0x181468: 0x10600009
    ctx->pc = 0x181468u;
    {
        const bool branch_taken_0x181468 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x18146Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 91));
        if (branch_taken_0x181468) {
            ctx->pc = 0x181490u;
            goto label_181490;
        }
    }
    ctx->pc = 0x181470u;
    // 0x181470: 0x24020007
    ctx->pc = 0x181470u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x181474: 0xae120000
    ctx->pc = 0x181474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x181478: 0xc042bf0
    ctx->pc = 0x181478u;
    SET_GPR_U32(ctx, 31, 0x181480u);
    ctx->pc = 0x18147Cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181480u; }
    }
    if (ctx->pc != 0x181480u) { return; }
    ctx->pc = 0x181480u;
    // 0x181480: 0x34038417
    ctx->pc = 0x181480u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 33815));
    // 0x181484: 0xc062228
    ctx->pc = 0x181484u;
    SET_GPR_U32(ctx, 31, 0x18148Cu);
    ctx->pc = 0x181488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    ctx->pc = 0x1888A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001888A0_0x1888a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18148Cu; }
    }
    if (ctx->pc != 0x18148Cu) { return; }
    ctx->pc = 0x18148Cu;
    // 0x18148c: 0x102d
    ctx->pc = 0x18148cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181490:
    // 0x181490: 0xdfb00000
    ctx->pc = 0x181490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181494: 0xdfb10008
    ctx->pc = 0x181494u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x181498: 0xdfb20010
    ctx->pc = 0x181498u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18149c: 0xdfbf0018
    ctx->pc = 0x18149cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1814a0: 0x3e00008
    ctx->pc = 0x1814A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1814A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x181440u: goto label_181440;
            case 0x181490u: goto label_181490;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1814A8u;
}
