#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001731A0
// Address: 0x1731a0 - 0x173210
void sub_001731A0_0x1731a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1731a0u;

    // 0x1731a0: 0x27bdffd0
    ctx->pc = 0x1731a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1731a4: 0x248309a0
    ctx->pc = 0x1731a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 2464));
    // 0x1731a8: 0xffb00010
    ctx->pc = 0x1731a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1731ac: 0x2405fffc
    ctx->pc = 0x1731acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1731b0: 0xffb10018
    ctx->pc = 0x1731b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1731b4: 0x102d
    ctx->pc = 0x1731b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1731b8: 0xffbf0020
    ctx->pc = 0x1731b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1731bc: 0x8c700050
    ctx->pc = 0x1731bcu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1731c0: 0x1205000d
    ctx->pc = 0x1731C0u;
    {
        const bool branch_taken_0x1731c0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 5));
        ctx->pc = 0x1731C4u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 3), 84)));
        if (branch_taken_0x1731c0) {
            ctx->pc = 0x1731F8u;
            goto label_1731f8;
        }
    }
    ctx->pc = 0x1731C8u;
    // 0x1731c8: 0x27a60004
    ctx->pc = 0x1731c8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
    // 0x1731cc: 0xc05d8d4
    ctx->pc = 0x1731CCu;
    SET_GPR_U32(ctx, 31, 0x1731D4u);
    ctx->pc = 0x1731D0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x176350u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00176350_0x176350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1731D4u; }
    }
    if (ctx->pc != 0x1731D4u) { return; }
    ctx->pc = 0x1731D4u;
    // 0x1731d4: 0x102d
    ctx->pc = 0x1731d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1731d8: 0x8fa30000
    ctx->pc = 0x1731d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1731dc: 0x200302d
    ctx->pc = 0x1731dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1731e0: 0x220382d
    ctx->pc = 0x1731e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1731e4: 0x4600004
    ctx->pc = 0x1731E4u;
    {
        const bool branch_taken_0x1731e4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1731E8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1731e4) {
            ctx->pc = 0x1731F8u;
            goto label_1731f8;
        }
    }
    ctx->pc = 0x1731ECu;
    // 0x1731ec: 0xc05407a
    ctx->pc = 0x1731ECu;
    SET_GPR_U32(ctx, 31, 0x1731F4u);
    ctx->pc = 0x1731F0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->pc = 0x1501E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001501E8_0x1501e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1731F4u; }
    }
    if (ctx->pc != 0x1731F4u) { return; }
    ctx->pc = 0x1731F4u;
    // 0x1731f4: 0x2c420001
    ctx->pc = 0x1731f4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_1731f8:
    // 0x1731f8: 0xdfb00010
    ctx->pc = 0x1731f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1731fc: 0xdfb10018
    ctx->pc = 0x1731fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x173200: 0xdfbf0020
    ctx->pc = 0x173200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173204: 0x3e00008
    ctx->pc = 0x173204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173208u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1731F8u: goto label_1731f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17320Cu;
    // 0x17320c: 0x0
    ctx->pc = 0x17320cu;
    // NOP
}
