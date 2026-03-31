#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016E7C8
// Address: 0x16e7c8 - 0x16e890
void sub_0016E7C8_0x16e7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16e7c8u;

    // 0x16e7c8: 0x27bdffc0
    ctx->pc = 0x16e7c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16e7cc: 0xffb20020
    ctx->pc = 0x16e7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16e7d0: 0xc0902d
    ctx->pc = 0x16e7d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e7d4: 0xffb30028
    ctx->pc = 0x16e7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x16e7d8: 0xa0982d
    ctx->pc = 0x16e7d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e7dc: 0xffb00010
    ctx->pc = 0x16e7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16e7e0: 0xffb10018
    ctx->pc = 0x16e7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x16e7e4: 0xffbf0030
    ctx->pc = 0x16e7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16e7e8: 0x8c911b30
    ctx->pc = 0x16e7e8u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 4), 6960)));
    // 0x16e7ec: 0x8e2200e4
    ctx->pc = 0x16e7ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 228)));
    // 0x16e7f0: 0x8e240000
    ctx->pc = 0x16e7f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16e7f4: 0x1040000e
    ctx->pc = 0x16E7F4u;
    {
        const bool branch_taken_0x16e7f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16E7F8u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 116)));
        if (branch_taken_0x16e7f4) {
            ctx->pc = 0x16E830u;
            goto label_16e830;
        }
    }
    ctx->pc = 0x16E7FCu;
    // 0x16e7fc: 0x3a0282d
    ctx->pc = 0x16e7fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e800: 0xc056510
    ctx->pc = 0x16E800u;
    SET_GPR_U32(ctx, 31, 0x16E808u);
    ctx->pc = 0x16E804u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x159440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00159440_0x159440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E808u; }
    }
    if (ctx->pc != 0x16E808u) { return; }
    ctx->pc = 0x16E808u;
    // 0x16e808: 0x8fa40000
    ctx->pc = 0x16e808u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e80c: 0x14800006
    ctx->pc = 0x16E80Cu;
    {
        const bool branch_taken_0x16e80c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x16E810u;
        SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x16e80c) {
            ctx->pc = 0x16E828u;
            goto label_16e828;
        }
    }
    ctx->pc = 0x16E814u;
    // 0x16e814: 0x8fa20004
    ctx->pc = 0x16e814u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x16e818: 0x24030002
    ctx->pc = 0x16e818u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x16e81c: 0x38420001
    ctx->pc = 0x16e81cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x16e820: 0x62800a
    ctx->pc = 0x16e820u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
    // 0x16e824: 0x38830001
    ctx->pc = 0x16e824u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 4), 1));
label_16e828:
    // 0x16e828: 0x24020005
    ctx->pc = 0x16e828u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x16e82c: 0x43800a
    ctx->pc = 0x16e82cu;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 2));
label_16e830:
    // 0x16e830: 0x24020001
    ctx->pc = 0x16e830u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e834: 0x16420008
    ctx->pc = 0x16E834u;
    {
        const bool branch_taken_0x16e834 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x16E838u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x16e834) {
            ctx->pc = 0x16E858u;
            goto label_16e858;
        }
    }
    ctx->pc = 0x16E83Cu;
    // 0x16e83c: 0x8e620018
    ctx->pc = 0x16e83cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x16e840: 0x2442ffff
    ctx->pc = 0x16e840u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16e844: 0x2c420002
    ctx->pc = 0x16e844u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x16e848: 0x54400009
    ctx->pc = 0x16E848u;
    {
        const bool branch_taken_0x16e848 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16e848) {
            ctx->pc = 0x16E84Cu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 2));
            ctx->pc = 0x16E870u;
            goto label_16e870;
        }
    }
    ctx->pc = 0x16E850u;
    // 0x16e850: 0x10000008
    ctx->pc = 0x16E850u;
    {
        const bool branch_taken_0x16e850 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16E854u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 16));
        if (branch_taken_0x16e850) {
            ctx->pc = 0x16E874u;
            goto label_16e874;
        }
    }
    ctx->pc = 0x16E858u;
label_16e858:
    // 0x16e858: 0x16020003
    ctx->pc = 0x16E858u;
    {
        const bool branch_taken_0x16e858 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x16E85Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x16e858) {
            ctx->pc = 0x16E868u;
            goto label_16e868;
        }
    }
    ctx->pc = 0x16E860u;
    // 0x16e860: 0x10000003
    ctx->pc = 0x16E860u;
    {
        const bool branch_taken_0x16e860 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16E864u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x16e860) {
            ctx->pc = 0x16E870u;
            goto label_16e870;
        }
    }
    ctx->pc = 0x16E868u;
label_16e868:
    // 0x16e868: 0x3a020003
    ctx->pc = 0x16e868u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 16), 3));
    // 0x16e86c: 0x62800a
    ctx->pc = 0x16e86cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
label_16e870:
    // 0x16e870: 0xae300074
    ctx->pc = 0x16e870u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 16));
label_16e874:
    // 0x16e874: 0xdfb20020
    ctx->pc = 0x16e874u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16e878: 0xdfb00010
    ctx->pc = 0x16e878u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e87c: 0xdfb10018
    ctx->pc = 0x16e87cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16e880: 0xdfb30028
    ctx->pc = 0x16e880u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16e884: 0xdfbf0030
    ctx->pc = 0x16e884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16e888: 0x3e00008
    ctx->pc = 0x16E888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E88Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E828u: goto label_16e828;
            case 0x16E830u: goto label_16e830;
            case 0x16E858u: goto label_16e858;
            case 0x16E868u: goto label_16e868;
            case 0x16E870u: goto label_16e870;
            case 0x16E874u: goto label_16e874;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16E890u;
}
