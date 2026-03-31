#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001817C8
// Address: 0x1817c8 - 0x181888
void sub_001817C8_0x1817c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1817c8u;

    // 0x1817c8: 0x3c030023
    ctx->pc = 0x1817c8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x1817cc: 0x27bdffd0
    ctx->pc = 0x1817ccu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1817d0: 0x8c67fa10
    ctx->pc = 0x1817d0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 4294965776)));
    // 0x1817d4: 0x3c028101
    ctx->pc = 0x1817d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x1817d8: 0xffb10008
    ctx->pc = 0x1817d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1817dc: 0xa0882d
    ctx->pc = 0x1817dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1817e0: 0xffb20010
    ctx->pc = 0x1817e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1817e4: 0x80902d
    ctx->pc = 0x1817e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1817e8: 0xffb30018
    ctx->pc = 0x1817e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1817ec: 0x30d3ffff
    ctx->pc = 0x1817ecu;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 6), 65535));
    // 0x1817f0: 0xffb00000
    ctx->pc = 0x1817f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1817f4: 0x34428001
    ctx->pc = 0x1817f4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32769));
    // 0x1817f8: 0x10e0001c
    ctx->pc = 0x1817F8u;
    {
        const bool branch_taken_0x1817f8 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x1817FCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        if (branch_taken_0x1817f8) {
            ctx->pc = 0x18186Cu;
            goto label_18186c;
        }
    }
    ctx->pc = 0x181800u;
    // 0x181800: 0xc061e90
    ctx->pc = 0x181800u;
    SET_GPR_U32(ctx, 31, 0x181808u);
    ctx->pc = 0x187A40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00187A40_0x187a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181808u; }
    }
    if (ctx->pc != 0x181808u) { return; }
    ctx->pc = 0x181808u;
    // 0x181808: 0x3c030028
    ctx->pc = 0x181808u;
    SET_GPR_U32(ctx, 3, ((uint32_t)40 << 16));
    // 0x18180c: 0x14400004
    ctx->pc = 0x18180Cu;
    {
        const bool branch_taken_0x18180c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x181810u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 4294939904));
        if (branch_taken_0x18180c) {
            ctx->pc = 0x181820u;
            goto label_181820;
        }
    }
    ctx->pc = 0x181814u;
    // 0x181814: 0x3c028101
    ctx->pc = 0x181814u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x181818: 0x10000014
    ctx->pc = 0x181818u;
    {
        const bool branch_taken_0x181818 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18181Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32770));
        if (branch_taken_0x181818) {
            ctx->pc = 0x18186Cu;
            goto label_18186c;
        }
    }
    ctx->pc = 0x181820u;
label_181820:
    // 0x181820: 0x8e030004
    ctx->pc = 0x181820u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x181824: 0x3c028101
    ctx->pc = 0x181824u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x181828: 0x14600010
    ctx->pc = 0x181828u;
    {
        const bool branch_taken_0x181828 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x18182Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16));
        if (branch_taken_0x181828) {
            ctx->pc = 0x18186Cu;
            goto label_18186c;
        }
    }
    ctx->pc = 0x181830u;
    // 0x181830: 0xc042c56
    ctx->pc = 0x181830u;
    SET_GPR_U32(ctx, 31, 0x181838u);
    ctx->pc = 0x181834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181838u; }
    }
    if (ctx->pc != 0x181838u) { return; }
    ctx->pc = 0x181838u;
    // 0x181838: 0x220282d
    ctx->pc = 0x181838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18183c: 0x2c430080
    ctx->pc = 0x18183cu;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 2), 128));
    // 0x181840: 0x3c028101
    ctx->pc = 0x181840u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x181844: 0x2604041c
    ctx->pc = 0x181844u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1052));
    // 0x181848: 0x10600008
    ctx->pc = 0x181848u;
    {
        const bool branch_taken_0x181848 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x18184Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 91));
        if (branch_taken_0x181848) {
            ctx->pc = 0x18186Cu;
            goto label_18186c;
        }
    }
    ctx->pc = 0x181850u;
    // 0x181850: 0x2402000d
    ctx->pc = 0x181850u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
    // 0x181854: 0xae120000
    ctx->pc = 0x181854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x181858: 0xc042bf0
    ctx->pc = 0x181858u;
    SET_GPR_U32(ctx, 31, 0x181860u);
    ctx->pc = 0x18185Cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181860u; }
    }
    if (ctx->pc != 0x181860u) { return; }
    ctx->pc = 0x181860u;
    // 0x181860: 0xc062228
    ctx->pc = 0x181860u;
    SET_GPR_U32(ctx, 31, 0x181868u);
    ctx->pc = 0x181864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
    ctx->pc = 0x1888A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001888A0_0x1888a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181868u; }
    }
    if (ctx->pc != 0x181868u) { return; }
    ctx->pc = 0x181868u;
    // 0x181868: 0x102d
    ctx->pc = 0x181868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18186c:
    // 0x18186c: 0xdfb00000
    ctx->pc = 0x18186cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181870: 0xdfb10008
    ctx->pc = 0x181870u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x181874: 0xdfb20010
    ctx->pc = 0x181874u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181878: 0xdfb30018
    ctx->pc = 0x181878u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18187c: 0xdfbf0020
    ctx->pc = 0x18187cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181880: 0x3e00008
    ctx->pc = 0x181880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181884u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x181820u: goto label_181820;
            case 0x18186Cu: goto label_18186c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x181888u;
}
