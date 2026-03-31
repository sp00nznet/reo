#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00181310
// Address: 0x181310 - 0x1813f0
void sub_00181310_0x181310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x181310u;

    // 0x181310: 0x3c030023
    ctx->pc = 0x181310u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x181314: 0x27bdffc0
    ctx->pc = 0x181314u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x181318: 0x8c69fa10
    ctx->pc = 0x181318u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 3), 4294965776)));
    // 0x18131c: 0x3c028101
    ctx->pc = 0x18131cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x181320: 0xffb10008
    ctx->pc = 0x181320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x181324: 0xa0882d
    ctx->pc = 0x181324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181328: 0xffb20010
    ctx->pc = 0x181328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18132c: 0x80902d
    ctx->pc = 0x18132cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181330: 0xffb30018
    ctx->pc = 0x181330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x181334: 0x100982d
    ctx->pc = 0x181334u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181338: 0xffb40020
    ctx->pc = 0x181338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x18133c: 0xc0a02d
    ctx->pc = 0x18133cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181340: 0xffb50028
    ctx->pc = 0x181340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x181344: 0xe0a82d
    ctx->pc = 0x181344u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181348: 0xffb00000
    ctx->pc = 0x181348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18134c: 0x34428001
    ctx->pc = 0x18134cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32769));
    // 0x181350: 0x1120001e
    ctx->pc = 0x181350u;
    {
        const bool branch_taken_0x181350 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        ctx->pc = 0x181354u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        if (branch_taken_0x181350) {
            ctx->pc = 0x1813CCu;
            goto label_1813cc;
        }
    }
    ctx->pc = 0x181358u;
    // 0x181358: 0xc061e90
    ctx->pc = 0x181358u;
    SET_GPR_U32(ctx, 31, 0x181360u);
    ctx->pc = 0x187A40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00187A40_0x187a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181360u; }
    }
    if (ctx->pc != 0x181360u) { return; }
    ctx->pc = 0x181360u;
    // 0x181360: 0x3c030028
    ctx->pc = 0x181360u;
    SET_GPR_U32(ctx, 3, ((uint32_t)40 << 16));
    // 0x181364: 0x14400004
    ctx->pc = 0x181364u;
    {
        const bool branch_taken_0x181364 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x181368u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 4294939904));
        if (branch_taken_0x181364) {
            ctx->pc = 0x181378u;
            goto label_181378;
        }
    }
    ctx->pc = 0x18136Cu;
    // 0x18136c: 0x3c028101
    ctx->pc = 0x18136cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x181370: 0x10000016
    ctx->pc = 0x181370u;
    {
        const bool branch_taken_0x181370 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x181374u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32770));
        if (branch_taken_0x181370) {
            ctx->pc = 0x1813CCu;
            goto label_1813cc;
        }
    }
    ctx->pc = 0x181378u;
label_181378:
    // 0x181378: 0x8e030004
    ctx->pc = 0x181378u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18137c: 0x3c028101
    ctx->pc = 0x18137cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x181380: 0x14600012
    ctx->pc = 0x181380u;
    {
        const bool branch_taken_0x181380 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x181384u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16));
        if (branch_taken_0x181380) {
            ctx->pc = 0x1813CCu;
            goto label_1813cc;
        }
    }
    ctx->pc = 0x181388u;
    // 0x181388: 0xc042c56
    ctx->pc = 0x181388u;
    SET_GPR_U32(ctx, 31, 0x181390u);
    ctx->pc = 0x18138Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181390u; }
    }
    if (ctx->pc != 0x181390u) { return; }
    ctx->pc = 0x181390u;
    // 0x181390: 0x220282d
    ctx->pc = 0x181390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181394: 0x2c430080
    ctx->pc = 0x181394u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 2), 128));
    // 0x181398: 0x3c028101
    ctx->pc = 0x181398u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x18139c: 0x2604041c
    ctx->pc = 0x18139cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1052));
    // 0x1813a0: 0x1060000a
    ctx->pc = 0x1813A0u;
    {
        const bool branch_taken_0x1813a0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1813A4u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 91));
        if (branch_taken_0x1813a0) {
            ctx->pc = 0x1813CCu;
            goto label_1813cc;
        }
    }
    ctx->pc = 0x1813A8u;
    // 0x1813a8: 0x24020006
    ctx->pc = 0x1813a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1813ac: 0xae120000
    ctx->pc = 0x1813acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x1813b0: 0xc042bf0
    ctx->pc = 0x1813B0u;
    SET_GPR_U32(ctx, 31, 0x1813B8u);
    ctx->pc = 0x1813B4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1813B8u; }
    }
    if (ctx->pc != 0x1813B8u) { return; }
    ctx->pc = 0x1813B8u;
    // 0x1813b8: 0xae14000c
    ctx->pc = 0x1813b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
    // 0x1813bc: 0xae130014
    ctx->pc = 0x1813bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 19));
    // 0x1813c0: 0xc062228
    ctx->pc = 0x1813C0u;
    SET_GPR_U32(ctx, 31, 0x1813C8u);
    ctx->pc = 0x1813C4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 21));
    ctx->pc = 0x1888A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001888A0_0x1888a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1813C8u; }
    }
    if (ctx->pc != 0x1813C8u) { return; }
    ctx->pc = 0x1813C8u;
    // 0x1813c8: 0x102d
    ctx->pc = 0x1813c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1813cc:
    // 0x1813cc: 0xdfb00000
    ctx->pc = 0x1813ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1813d0: 0xdfb10008
    ctx->pc = 0x1813d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1813d4: 0xdfb20010
    ctx->pc = 0x1813d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1813d8: 0xdfb30018
    ctx->pc = 0x1813d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1813dc: 0xdfb40020
    ctx->pc = 0x1813dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1813e0: 0xdfb50028
    ctx->pc = 0x1813e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1813e4: 0xdfbf0030
    ctx->pc = 0x1813e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1813e8: 0x3e00008
    ctx->pc = 0x1813E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1813ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x181378u: goto label_181378;
            case 0x1813CCu: goto label_1813cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1813F0u;
}
