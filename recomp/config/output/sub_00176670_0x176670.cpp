#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00176670
// Address: 0x176670 - 0x176778
void sub_00176670_0x176670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x176670u;

    // 0x176670: 0x8c830048
    ctx->pc = 0x176670u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x176674: 0x24020004
    ctx->pc = 0x176674u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x176678: 0x1062000f
    ctx->pc = 0x176678u;
    {
        const bool branch_taken_0x176678 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x176678) {
            ctx->pc = 0x1766B8u;
            goto label_1766b8;
        }
    }
    ctx->pc = 0x176680u;
    // 0x176680: 0x2402fffc
    ctx->pc = 0x176680u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x176684: 0x1062000c
    ctx->pc = 0x176684u;
    {
        const bool branch_taken_0x176684 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x176684) {
            ctx->pc = 0x1766B8u;
            goto label_1766b8;
        }
    }
    ctx->pc = 0x17668Cu;
    // 0x17668c: 0x24020006
    ctx->pc = 0x17668cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x176690: 0x10620009
    ctx->pc = 0x176690u;
    {
        const bool branch_taken_0x176690 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x176690) {
            ctx->pc = 0x1766B8u;
            goto label_1766b8;
        }
    }
    ctx->pc = 0x176698u;
    // 0x176698: 0x2402fffa
    ctx->pc = 0x176698u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x17669c: 0x10620006
    ctx->pc = 0x17669Cu;
    {
        const bool branch_taken_0x17669c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1766A0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x17669c) {
            ctx->pc = 0x1766B8u;
            goto label_1766b8;
        }
    }
    ctx->pc = 0x1766A4u;
    // 0x1766a4: 0x24040001
    ctx->pc = 0x1766a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1766a8: 0xaca30000
    ctx->pc = 0x1766a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1766ac: 0x102d
    ctx->pc = 0x1766acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1766b0: 0x3e00008
    ctx->pc = 0x1766B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1766B4u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1766B8u: goto label_1766b8;
            case 0x1766F8u: goto label_1766f8;
            case 0x176760u: goto label_176760;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1766B8u;
label_1766b8:
    // 0x1766b8: 0x3e00008
    ctx->pc = 0x1766B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1766BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1766B8u: goto label_1766b8;
            case 0x1766F8u: goto label_1766f8;
            case 0x176760u: goto label_176760;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1766C0u;
    // 0x1766c0: 0x27bdfff0
    ctx->pc = 0x1766c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1766c4: 0xffb00000
    ctx->pc = 0x1766c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1766c8: 0xffbf0008
    ctx->pc = 0x1766c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1766cc: 0xc05a78c
    ctx->pc = 0x1766CCu;
    SET_GPR_U32(ctx, 31, 0x1766D4u);
    ctx->pc = 0x1766D0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1766D4u; }
    }
    if (ctx->pc != 0x1766D4u) { return; }
    ctx->pc = 0x1766D4u;
    // 0x1766d4: 0x3c05ff00
    ctx->pc = 0x1766d4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1766d8: 0x26060cc0
    ctx->pc = 0x1766d8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 3264));
    // 0x1766dc: 0x202d
    ctx->pc = 0x1766dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1766e0: 0x10400005
    ctx->pc = 0x1766E0u;
    {
        const bool branch_taken_0x1766e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1766E4u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 290));
        if (branch_taken_0x1766e0) {
            ctx->pc = 0x1766F8u;
            goto label_1766f8;
        }
    }
    ctx->pc = 0x1766E8u;
    // 0x1766e8: 0xdfb00000
    ctx->pc = 0x1766e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1766ec: 0xdfbf0008
    ctx->pc = 0x1766ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1766f0: 0x805a704
    ctx->pc = 0x1766F0u;
    ctx->pc = 0x1766F4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x1766F8u;
label_1766f8:
    // 0x1766f8: 0x8cc30260
    ctx->pc = 0x1766f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 608)));
    // 0x1766fc: 0x24040001
    ctx->pc = 0x1766fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x176700: 0xdfbf0008
    ctx->pc = 0x176700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x176704: 0x24630001
    ctx->pc = 0x176704u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x176708: 0xacc30260
    ctx->pc = 0x176708u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 608), GPR_U32(ctx, 3));
    // 0x17670c: 0xae040044
    ctx->pc = 0x17670cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 4));
    // 0x176710: 0xdfb00000
    ctx->pc = 0x176710u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176714: 0x3e00008
    ctx->pc = 0x176714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176718u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1766B8u: goto label_1766b8;
            case 0x1766F8u: goto label_1766f8;
            case 0x176760u: goto label_176760;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17671Cu;
    // 0x17671c: 0x0
    ctx->pc = 0x17671cu;
    // NOP
    // 0x176720: 0x27bdffe0
    ctx->pc = 0x176720u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x176724: 0xffb00000
    ctx->pc = 0x176724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x176728: 0x80802d
    ctx->pc = 0x176728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17672c: 0xffb10008
    ctx->pc = 0x17672cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x176730: 0xffbf0010
    ctx->pc = 0x176730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x176734: 0xc05a78c
    ctx->pc = 0x176734u;
    SET_GPR_U32(ctx, 31, 0x17673Cu);
    ctx->pc = 0x176738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17673Cu; }
    }
    if (ctx->pc != 0x17673Cu) { return; }
    ctx->pc = 0x17673Cu;
    // 0x17673c: 0x3c05ff00
    ctx->pc = 0x17673cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x176740: 0x10400007
    ctx->pc = 0x176740u;
    {
        const bool branch_taken_0x176740 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x176744u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x176740) {
            ctx->pc = 0x176760u;
            goto label_176760;
        }
    }
    ctx->pc = 0x176748u;
    // 0x176748: 0xdfb00000
    ctx->pc = 0x176748u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17674c: 0x34a50124
    ctx->pc = 0x17674cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 292));
    // 0x176750: 0xdfb10008
    ctx->pc = 0x176750u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x176754: 0xdfbf0010
    ctx->pc = 0x176754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176758: 0x805a704
    ctx->pc = 0x176758u;
    ctx->pc = 0x17675Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x176760u;
label_176760:
    // 0x176760: 0xae110cd8
    ctx->pc = 0x176760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3288), GPR_U32(ctx, 17));
    // 0x176764: 0xdfb00000
    ctx->pc = 0x176764u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176768: 0xdfb10008
    ctx->pc = 0x176768u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17676c: 0xdfbf0010
    ctx->pc = 0x17676cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176770: 0x3e00008
    ctx->pc = 0x176770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176774u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1766B8u: goto label_1766b8;
            case 0x1766F8u: goto label_1766f8;
            case 0x176760u: goto label_176760;
            default: break;
        }
        return;
    }
    ctx->pc = 0x176778u;
}
