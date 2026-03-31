#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00112770
// Address: 0x112770 - 0x112810
void sub_00112770_0x112770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x112770u;

    // 0x112770: 0x27bdfec0
    ctx->pc = 0x112770u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x112774: 0x3c040024
    ctx->pc = 0x112774u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x112778: 0xffb20120
    ctx->pc = 0x112778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x11277c: 0x24050001
    ctx->pc = 0x11277cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x112780: 0xffbf0130
    ctx->pc = 0x112780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x112784: 0x248485b8
    ctx->pc = 0x112784u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294935992));
    // 0x112788: 0xffb10110
    ctx->pc = 0x112788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x11278c: 0xc04629c
    ctx->pc = 0x11278Cu;
    SET_GPR_U32(ctx, 31, 0x112794u);
    ctx->pc = 0x112790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    ctx->pc = 0x118A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118A70_0x118a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112794u; }
    }
    if (ctx->pc != 0x112794u) { return; }
    ctx->pc = 0x112794u;
    // 0x112794: 0x40902d
    ctx->pc = 0x112794u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112798: 0x6410003
    ctx->pc = 0x112798u;
    {
        const bool branch_taken_0x112798 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x11279Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x112798) {
            ctx->pc = 0x1127A8u;
            goto label_1127a8;
        }
    }
    ctx->pc = 0x1127A0u;
    // 0x1127a0: 0x10000015
    ctx->pc = 0x1127A0u;
    {
        const bool branch_taken_0x1127a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1127A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1127a0) {
            ctx->pc = 0x1127F8u;
            goto label_1127f8;
        }
    }
    ctx->pc = 0x1127A8u;
label_1127a8:
    // 0x1127a8: 0x10000002
    ctx->pc = 0x1127A8u;
    {
        const bool branch_taken_0x1127a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1127ACu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1127a8) {
            ctx->pc = 0x1127B4u;
            goto label_1127b4;
        }
    }
    ctx->pc = 0x1127B0u;
label_1127b0:
    // 0x1127b0: 0x26310001
    ctx->pc = 0x1127b0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1127b4:
    // 0x1127b4: 0x2e220100
    ctx->pc = 0x1127b4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), 256));
    // 0x1127b8: 0x10400007
    ctx->pc = 0x1127B8u;
    {
        const bool branch_taken_0x1127b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1127BCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1127b8) {
            ctx->pc = 0x1127D8u;
            goto label_1127d8;
        }
    }
    ctx->pc = 0x1127C0u;
    // 0x1127c0: 0x240202d
    ctx->pc = 0x1127c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1127c4: 0xc04642c
    ctx->pc = 0x1127C4u;
    SET_GPR_U32(ctx, 31, 0x1127CCu);
    ctx->pc = 0x1127C8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1190B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001190B0_0x1190b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1127CCu; }
    }
    if (ctx->pc != 0x1127CCu) { return; }
    ctx->pc = 0x1127CCu;
    // 0x1127cc: 0x82030000
    ctx->pc = 0x1127ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1127d0: 0x1460fff7
    ctx->pc = 0x1127D0u;
    {
        const bool branch_taken_0x1127d0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1127D4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x1127d0) {
            ctx->pc = 0x1127B0u;
            goto label_1127b0;
        }
    }
    ctx->pc = 0x1127D8u;
label_1127d8:
    // 0x1127d8: 0xc04633e
    ctx->pc = 0x1127D8u;
    SET_GPR_U32(ctx, 31, 0x1127E0u);
    ctx->pc = 0x1127DCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x118CF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118CF8_0x118cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1127E0u; }
    }
    if (ctx->pc != 0x1127E0u) { return; }
    ctx->pc = 0x1127E0u;
    // 0x1127e0: 0x2624fff7
    ctx->pc = 0x1127e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 4294967287));
    // 0x1127e4: 0xc040de0
    ctx->pc = 0x1127E4u;
    SET_GPR_U32(ctx, 31, 0x1127ECu);
    ctx->pc = 0x1127E8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    ctx->pc = 0x103780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00103780_0x103780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1127ECu; }
    }
    if (ctx->pc != 0x1127ECu) { return; }
    ctx->pc = 0x1127ECu;
    // 0x1127ec: 0x3c030131
    ctx->pc = 0x1127ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)305 << 16));
    // 0x1127f0: 0x34635670
    ctx->pc = 0x1127f0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 22128));
    // 0x1127f4: 0x62102a
    ctx->pc = 0x1127f4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
label_1127f8:
    // 0x1127f8: 0xdfbf0130
    ctx->pc = 0x1127f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1127fc: 0xdfb20120
    ctx->pc = 0x1127fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x112800: 0xdfb10110
    ctx->pc = 0x112800u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x112804: 0xdfb00100
    ctx->pc = 0x112804u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x112808: 0x3e00008
    ctx->pc = 0x112808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11280Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1127A8u: goto label_1127a8;
            case 0x1127B0u: goto label_1127b0;
            case 0x1127B4u: goto label_1127b4;
            case 0x1127D8u: goto label_1127d8;
            case 0x1127F8u: goto label_1127f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x112810u;
}
