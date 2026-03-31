#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001443F0
// Address: 0x1443f0 - 0x144500
void sub_001443F0_0x1443f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1443f0u;

    // 0x1443f0: 0x27bdff70
    ctx->pc = 0x1443f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1443f4: 0xffb70070
    ctx->pc = 0x1443f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x1443f8: 0xffb60060
    ctx->pc = 0x1443f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1443fc: 0x24170001
    ctx->pc = 0x1443fcu;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 1));
    // 0x144400: 0xffb50050
    ctx->pc = 0x144400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x144404: 0x24160022
    ctx->pc = 0x144404u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 34));
    // 0x144408: 0xffb40040
    ctx->pc = 0x144408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x14440c: 0x24150023
    ctx->pc = 0x14440cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 35));
    // 0x144410: 0xffb30030
    ctx->pc = 0x144410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x144414: 0x3c140024
    ctx->pc = 0x144414u;
    SET_GPR_U32(ctx, 20, ((uint32_t)36 << 16));
    // 0x144418: 0xffb20020
    ctx->pc = 0x144418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x14441c: 0x2413000f
    ctx->pc = 0x14441cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 15));
    // 0x144420: 0xffb10010
    ctx->pc = 0x144420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x144424: 0x902d
    ctx->pc = 0x144424u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144428: 0xffbf0080
    ctx->pc = 0x144428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x14442c: 0x80882d
    ctx->pc = 0x14442cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144430: 0xffb00000
    ctx->pc = 0x144430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x144434: 0x220202d
    ctx->pc = 0x144434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_144438:
    // 0x144438: 0xc051552
    ctx->pc = 0x144438u;
    SET_GPR_U32(ctx, 31, 0x144440u);
    ctx->pc = 0x14443Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145548u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00145548_0x145548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144440u; }
    }
    if (ctx->pc != 0x144440u) { return; }
    ctx->pc = 0x144440u;
    // 0x144440: 0x40802d
    ctx->pc = 0x144440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144444: 0x12160017
    ctx->pc = 0x144444u;
    {
        const bool branch_taken_0x144444 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 22));
        ctx->pc = 0x144448u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 35));
        if (branch_taken_0x144444) {
            ctx->pc = 0x1444A4u;
            goto label_1444a4;
        }
    }
    ctx->pc = 0x14444Cu;
    // 0x14444c: 0x10400005
    ctx->pc = 0x14444Cu;
    {
        const bool branch_taken_0x14444c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x14444c) {
            ctx->pc = 0x144464u;
            goto label_144464;
        }
    }
    ctx->pc = 0x144454u;
    // 0x144454: 0x12000008
    ctx->pc = 0x144454u;
    {
        const bool branch_taken_0x144454 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x144458u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x144454) {
            ctx->pc = 0x144478u;
            goto label_144478;
        }
    }
    ctx->pc = 0x14445Cu;
    // 0x14445c: 0x10000019
    ctx->pc = 0x14445Cu;
    {
        const bool branch_taken_0x14445c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x144460u;
        SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        if (branch_taken_0x14445c) {
            ctx->pc = 0x1444C4u;
            goto label_1444c4;
        }
    }
    ctx->pc = 0x144464u;
label_144464:
    // 0x144464: 0x56150017
    ctx->pc = 0x144464u;
    {
        const bool branch_taken_0x144464 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 21));
        if (branch_taken_0x144464) {
            ctx->pc = 0x144468u;
            SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
            ctx->pc = 0x1444C4u;
            goto label_1444c4;
        }
    }
    ctx->pc = 0x14446Cu;
    // 0x14446c: 0x24020001
    ctx->pc = 0x14446cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x144470: 0x10000015
    ctx->pc = 0x144470u;
    {
        const bool branch_taken_0x144470 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x144474u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 33));
        if (branch_taken_0x144470) {
            ctx->pc = 0x1444C8u;
            goto label_1444c8;
        }
    }
    ctx->pc = 0x144478u;
label_144478:
    // 0x144478: 0xc0515ee
    ctx->pc = 0x144478u;
    SET_GPR_U32(ctx, 31, 0x144480u);
    ctx->pc = 0x14447Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 11));
    ctx->pc = 0x1457B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001457B8_0x1457b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144480u; }
    }
    if (ctx->pc != 0x144480u) { return; }
    ctx->pc = 0x144480u;
    // 0x144480: 0x40182d
    ctx->pc = 0x144480u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144484: 0x8e220860
    ctx->pc = 0x144484u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 2144)));
    // 0x144488: 0x10400008
    ctx->pc = 0x144488u;
    {
        const bool branch_taken_0x144488 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14448Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 20), 4294958568));
        if (branch_taken_0x144488) {
            ctx->pc = 0x1444ACu;
            goto label_1444ac;
        }
    }
    ctx->pc = 0x144490u;
    // 0x144490: 0x14730007
    ctx->pc = 0x144490u;
    {
        const bool branch_taken_0x144490 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 19));
        ctx->pc = 0x144494u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x144490) {
            ctx->pc = 0x1444B0u;
            goto label_1444b0;
        }
    }
    ctx->pc = 0x144498u;
    // 0x144498: 0x220202d
    ctx->pc = 0x144498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14449c: 0xc051636
    ctx->pc = 0x14449Cu;
    SET_GPR_U32(ctx, 31, 0x1444A4u);
    ctx->pc = 0x1444A0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 11));
    ctx->pc = 0x1458D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001458D8_0x1458d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1444A4u; }
    }
    if (ctx->pc != 0x1444A4u) { return; }
    ctx->pc = 0x1444A4u;
label_1444a4:
    // 0x1444a4: 0x10000008
    ctx->pc = 0x1444A4u;
    {
        const bool branch_taken_0x1444a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1444A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1444a4) {
            ctx->pc = 0x1444C8u;
            goto label_1444c8;
        }
    }
    ctx->pc = 0x1444ACu;
label_1444ac:
    // 0x1444ac: 0x200302d
    ctx->pc = 0x1444acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1444b0:
    // 0x1444b0: 0xc05220e
    ctx->pc = 0x1444B0u;
    SET_GPR_U32(ctx, 31, 0x1444B8u);
    ctx->pc = 0x1444B4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x148838u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00148838_0x148838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1444B8u; }
    }
    if (ctx->pc != 0x1444B8u) { return; }
    ctx->pc = 0x1444B8u;
    // 0x1444b8: 0xae370134
    ctx->pc = 0x1444b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 23));
    // 0x1444bc: 0x10000005
    ctx->pc = 0x1444BCu;
    {
        const bool branch_taken_0x1444bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1444C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1444bc) {
            ctx->pc = 0x1444D4u;
            goto label_1444d4;
        }
    }
    ctx->pc = 0x1444C4u;
label_1444c4:
    // 0x1444c4: 0x102d
    ctx->pc = 0x1444c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1444c8:
    // 0x1444c8: 0x1440ffdb
    ctx->pc = 0x1444C8u;
    {
        const bool branch_taken_0x1444c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1444CCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1444c8) {
            ctx->pc = 0x144438u;
            goto label_144438;
        }
    }
    ctx->pc = 0x1444D0u;
    // 0x1444d0: 0x240102d
    ctx->pc = 0x1444d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1444d4:
    // 0x1444d4: 0xdfbf0080
    ctx->pc = 0x1444d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1444d8: 0xdfb70070
    ctx->pc = 0x1444d8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1444dc: 0xdfb60060
    ctx->pc = 0x1444dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1444e0: 0xdfb50050
    ctx->pc = 0x1444e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1444e4: 0xdfb40040
    ctx->pc = 0x1444e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1444e8: 0xdfb30030
    ctx->pc = 0x1444e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1444ec: 0xdfb20020
    ctx->pc = 0x1444ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1444f0: 0xdfb10010
    ctx->pc = 0x1444f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1444f4: 0xdfb00000
    ctx->pc = 0x1444f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1444f8: 0x3e00008
    ctx->pc = 0x1444F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1444FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144438u: goto label_144438;
            case 0x144464u: goto label_144464;
            case 0x144478u: goto label_144478;
            case 0x1444A4u: goto label_1444a4;
            case 0x1444ACu: goto label_1444ac;
            case 0x1444B0u: goto label_1444b0;
            case 0x1444C4u: goto label_1444c4;
            case 0x1444C8u: goto label_1444c8;
            case 0x1444D4u: goto label_1444d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x144500u;
}
